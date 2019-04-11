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

public class UnityApplication extends Application {

	public static final String INSTANCE_NAME = "tealium_main";

	@SuppressLint("NewApi")
	@Override
	public void onCreate() {
		super.onCreate();

		final String accountName;
		final String profileName;
		final String environmentName;
		final String dataSource;
		final boolean isDebugging;

		try {
			ApplicationInfo ai = this.getPackageManager().getApplicationInfo(
					this.getPackageName(), PackageManager.GET_META_DATA);

			Bundle bundle = ai.metaData;

			accountName = bundle.getString("com.tealium.library.ACCOUNT");
			profileName = bundle.getString("com.tealium.library.PROFILE");
			environmentName = bundle.getString("com.tealium.library.ENVIRONMENT");
			dataSource = bundle.getString("com.tealium.library.DATA_SOURCE");

			isDebugging = bundle.containsKey("com.tealium.library.DEBUG");

		} catch (NullPointerException e) {
			throw new RuntimeException("tealium_account, tealium_profile, & tealium_environment are required strings.", e);
		} catch (NameNotFoundException e) {
			throw new RuntimeException("tealium_account, tealium_profile, & tealium_environment are required strings.", e);
		}

		Tealium.Config config = Tealium.Config.create(this, accountName, profileName, environmentName);
		if(null != dataSource && dataSource.length() > 0) {
			config.setDatasourceId(dataSource);
		}

		if (isDebugging) {
			config.setForceOverrideLogLevel("dev");

			if (Build.VERSION.SDK_INT >= Build.VERSION_CODES.KITKAT) {
				WebView.setWebContentsDebuggingEnabled(true);
			}
		}

		Tealium.createInstance(INSTANCE_NAME, config);
	}
}
