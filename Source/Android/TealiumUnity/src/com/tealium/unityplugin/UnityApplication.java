package com.tealium.unityplugin;

import android.annotation.SuppressLint;
import android.app.Application;
import android.content.pm.ApplicationInfo;
import android.content.pm.PackageManager;
import android.content.pm.PackageManager.NameNotFoundException;
import android.net.Uri;
import android.os.Build;
import android.os.Bundle;
import android.webkit.WebView;

import com.tealium.library.Tealium;
import com.tealium.library.Tealium.LogLevel;

public class UnityApplication extends Application {

	@SuppressLint("NewApi")
	@Override
	public void onCreate() {
		super.onCreate();

		final String accountName;
		final String profileName;
		final String environmentName;
		final boolean isDebugging;

		try {
			ApplicationInfo ai = this.getPackageManager().getApplicationInfo(
				this.getPackageName(), PackageManager.GET_META_DATA);

			Bundle bundle = ai.metaData;

			accountName = bundle.getString("com.tealium.library.ACCOUNT");
			profileName = bundle.getString("com.tealium.library.PROFILE");
			environmentName = bundle.getString("com.tealium.library.ENVIRONMENT");

			isDebugging = bundle.containsKey("com.tealium.library.DEBUG");

		} catch (NullPointerException e) {
			throw new RuntimeException("tealium_account, tealium_profile, & tealium_environment are required strings.", e);
		} catch (NameNotFoundException e) {
			throw new RuntimeException("tealium_account, tealium_profile, & tealium_environment are required strings.", e);
		}

		final String scheme;
		
		Tealium.Config config = Tealium.Config.create(this, accountName, profileName, environmentName);

		if (isDebugging) {
			config.setLibraryLogLevel(LogLevel.VERBOSE)
				.setJavaScriptLogLevel(LogLevel.VERBOSE)
				.setHTTPSEnabled(false);

			if (Build.VERSION.SDK_INT >= Build.VERSION_CODES.KITKAT) {
				WebView.setWebContentsDebuggingEnabled(true);
			}
			
			scheme = "http";
		} else {
			config.setLibraryLogLevel(LogLevel.WARN)
				.setJavaScriptLogLevel(LogLevel.SILENT)
				.setHTTPSEnabled(true);
			scheme = "https";
		}

		Tealium.initialize(config
			.setMobileHtmlUrlOverride(new Uri.Builder()
				.scheme(scheme)
				.authority("tags.tiqcdn.com")
				.appendPath("utag")
				.appendPath(accountName)
				.appendPath(profileName)
				.appendPath(environmentName)
				.appendPath("mobile.html")
				.appendQueryParameter("platform", "android_unity")
				.appendQueryParameter("library_version", "4.1c")
				.appendQueryParameter("os_version", "" + Build.VERSION.RELEASE)
				.build().toString()));
	}
}
