package com.tealium.unityplugin;

import com.tealium.library.Tealium;

import android.app.Application;

public class UnityApplication extends Application {

	@Override
	public void onCreate() {
		super.onCreate();
		Tealium.initialize(Tealium.Config.create(this, "tealiummobile", "demo", "dev")
			.setLibraryLogLevel(Tealium.LogLevel.VERBOSE));
	}
}
