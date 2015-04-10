package com.tealium.unityplugin;

import android.app.Application;
import android.content.pm.ApplicationInfo;
import android.content.pm.PackageManager;
import android.content.pm.PackageManager.NameNotFoundException;
import android.os.Bundle;

import com.tealium.library.Tealium;

public class UnityApplication extends Application {

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

		Tealium.initialize(Tealium.Config.create(this, accountName, profileName, environmentName)
			.setLibraryLogLevel(Tealium.LogLevel.VERBOSE));
	}
}
