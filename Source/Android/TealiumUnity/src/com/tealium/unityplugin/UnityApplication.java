package com.tealium.unityplugin;

import android.annotation.SuppressLint;
import android.app.Application;
import android.content.pm.ApplicationInfo;
import android.content.pm.PackageManager;
import android.content.pm.PackageManager.NameNotFoundException;
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

		try {
			ApplicationInfo ai = this.getPackageManager().getApplicationInfo(
				this.getPackageName(), PackageManager.GET_META_DATA);

			Bundle bundle = ai.metaData;

			accountName = bundle.getString("com.tealium.library.ACCOUNT");
			profileName = bundle.getString("com.tealium.library.PROFILE");
			environmentName = bundle.getString("com.tealium.library.ENVIRONMENT");

		} catch (NullPointerException e) {
			throw new RuntimeException("tealium_account, tealium_profile, & tealium_environment are required strings.", e);
		} catch (NameNotFoundException e) {
			throw new RuntimeException("tealium_account, tealium_profile, & tealium_environment are required strings.", e);
		}

		Tealium.Config config = Tealium.Config.create(this, accountName, profileName, environmentName);

		if (BuildConfig.DEBUG) {
			config.setLibraryLogLevel(LogLevel.VERBOSE)
				.setJavaScriptLogLevel(LogLevel.VERBOSE)
				.setHTTPSEnabled(false);
			if (Build.VERSION.SDK_INT >= Build.VERSION_CODES.KITKAT) {
				WebView.setWebContentsDebuggingEnabled(true);
			}
		} else {
			config.setLibraryLogLevel(LogLevel.WARN)
				.setJavaScriptLogLevel(LogLevel.SILENT)
				.setHTTPSEnabled(true);
		}

		Tealium.initialize(config);
	}
}
