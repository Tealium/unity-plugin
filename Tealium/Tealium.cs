using UnityEngine;
using System;
using System.Collections;
using System.Collections.Generic;
using System.Runtime.InteropServices;


public class Tealium {

	public class Config {
		public bool IsHTTPSDisabled = false;
		public bool IsDebugLogSilent = true;
		public bool IsErrorLogSilent = false;
		
		public Config DisableHTTPS(bool disable) {
			this.IsHTTPSDisabled = disable;
			return this;
		}
		
		public Config SilenceErrors(bool silence) {
			this.IsErrorLogSilent = silence;
			return this;
		}
		
		public Config SilenceLogs(bool silence) {
			this.IsDebugLogSilent = silence;
			return this;
		}		
	}
	
	private static Tealium _instance = null;

	private Tealium() {}

	private bool _silencedErrors;

#if UNITY_IPHONE && !UNITY_EDITOR


	[DllImport ("__Internal")]
	private static extern void Tealium_Initialize (string accountName, string profileName, string environmentName, int options);

	[DllImport ("__Internal")]
	private static extern void Tealium_TrackPrepare(int capacity);
	
	[DllImport ("__Internal")]
	private static extern void Tealium_TrackSet(string key, string value);

	[DllImport ("__Internal")]
	private static extern void Tealium_TrackSend(string eventType);

#elif UNITY_ANDROID && !UNITY_EDITOR
	
	// This handle is used to run operations in the main thread.
	private AndroidJavaObject _currentActivity = null;

	// Singleton interface handle.
	private AndroidJavaClass _tealiumClass = null;

#else
	
	private bool _silencedLogs;

#endif	
		
	public static void Initialize(string accountName, string profileName, string environmentName) {
		Tealium.Initialize(accountName, profileName, environmentName, null);
	}
		
	public static void Initialize(string accountName, string profileName, string environmentName, Config config) {
		
		if(_instance != null) {
			if(!_instance._silencedErrors) {
				Debug.LogError("Tealium.Initialize(...) called when already initialized.");
			}
			return;
		}
		
		if(config == null){
			config = new Config();
		}

		if(accountName == null || profileName == null || environmentName == null) {
			if(!config.IsErrorLogSilent) {
				Debug.LogError("In Tealium.Initialize(...): \"account\", \"profile\", and \"environment\" must not be null.");
			}
			return;
		}
		
		_instance = new Tealium();
		_instance._silencedErrors = config.IsErrorLogSilent;
		
#if UNITY_ANDROID && !UNITY_EDITOR

	    _instance._currentActivity = new AndroidJavaClass("com.unity3d.player.UnityPlayer")
			.GetStatic<AndroidJavaObject>("currentActivity");	
		
		AndroidJavaObject tealiumConfig = new AndroidJavaClass("com.tealium.library.Tealium$Config")
			.CallStatic<AndroidJavaObject>("create", _instance._currentActivity, accountName, profileName, environmentName);
		tealiumConfig.Call<AndroidJavaObject>("setHTTPSEnabled", !config.IsHTTPSDisabled);	
		
		if(config.IsErrorLogSilent) {
			tealiumConfig.Call<AndroidJavaObject>("setLibraryLogLevel", new AndroidJavaClass("com.tealium.library.Tealium$LogLevel")
				.GetStatic<AndroidJavaObject>("SILENT"));
		} else if (!config.IsDebugLogSilent) {
			tealiumConfig.Call<AndroidJavaObject>("setLibraryLogLevel", new AndroidJavaClass("com.tealium.library.Tealium$LogLevel")
				.GetStatic<AndroidJavaObject>("VERBOSE"));
		}
		
		_instance._tealiumClass = new AndroidJavaClass("com.tealium.library.Tealium");
		_instance._tealiumClass.CallStatic("initialize", tealiumConfig);
	
#elif UNITY_IPHONE && !UNITY_EDITOR
		
		int options = 0;
		
		if(config.IsHTTPSDisabled) {
			options = 1 << 3; // TLDisableHTTPS = 1 << 3
		}

		if(config.IsDebugLogSilent) {
			options = options | (1 << 0) ; // TLSuppressLogs = 1 << 0
		} else {
			options = options | (1 << 4) ; // TLDisplayVerboseLogs = 1 << 4
		}
		
		Tealium_Initialize(accountName, profileName, environmentName, options);		

#else
		_instance._silencedLogs = config.IsDebugLogSilent;
		
		if(!_instance._silencedLogs) {

#if UNITY_ANDROID
			Debug.Log("TEALIUM: Android is supported by the Tealium Plugin, but calls in editor will have no effect.");
#elif UNITY_IPHONE
			Debug.Log("TEALIUM: iOS is supported by the Tealium Plugin, but calls in editor will have no effect.");
#else
			Debug.Log("TEALIUM: Plugin does not currently support this platform. Calls will have no effect.");
#endif
			Debug.Log(String.Format("INITIALIZED:{0}/{1}/{2}", accountName, profileName, environmentName));

			
			if(config.IsHTTPSDisabled) {
				Debug.Log("HTTPS DISABLED");
			}
						
			if(config.IsErrorLogSilent) {
				Debug.Log("ERRORS SILENCED");
			}
		}
#endif
		
	}
	
	public static bool IsInitialized {
		get {
			return _instance != null;
		}
	}
	
	private void TrackCustomEvent(string name, string key, string value, Dictionary<string, string> data) {
		
		if(value == null) {
			if(!this._silencedErrors) {
				if(key == "link_id") {
					Debug.LogError("A name must be provided when calling Tealium.trackControlEvent(...). Call will be ignored.");	
				} else {
					Debug.LogError("A name must be provided when calling Tealium.trackViewEvent(...). Call will be ignored.");	
				}
			}
			return;
		}
		
#if UNITY_ANDROID && !UNITY_EDITOR

		AndroidJavaObject map = new AndroidJavaObject("com.tealium.unity.DataMap", data == null ? 1 : data.Count + 1);

		if(data != null) {
			foreach(KeyValuePair<string, string> pair in data) {
				map.Call("set", pair.Key, pair.Value);
			}
		}

		map.Call("set", key, value);
	
		_tealiumClass.CallStatic("track", null, map, name);

#elif UNITY_IPHONE && !UNITY_EDITOR
		
		if(data == null) {
			Tealium_TrackPrepare(1);
		} else {
			Tealium_TrackPrepare(data.Count + 1);
			foreach(KeyValuePair<string, string> pair in data) {
				Tealium_TrackSet(pair.Key, pair.Value);
			}
		}
		
		Tealium_TrackSet(key, value);			
		Tealium_TrackSend(name);		
		
#else
		if(!this._silencedLogs) {

			if(data == null) {
				data = new Dictionary<string, string>();
			}
			
			data[key] = value;

			string log = name + ": {\r\n";

			foreach(KeyValuePair<string, string> pair in data) {
				log += String.Format("\t{0} : {1}\r\n", pair.Key, pair.Value);
			}
		
			Debug.Log(log + "}");
		}
#endif
	}
	
	public static void TrackEvent(string name) {
		Tealium.TrackEvent(name, null);
	}

	public static void TrackEvent(string name, Dictionary<string, string> data) {
		if(_instance != null) {
			_instance.TrackCustomEvent("link", "link_id", name, data);
		} else {
			Debug.LogWarning("Tealium.trackControlEvent(...) called when Library is uninitialized.");
		}
	}
	
	public static void TrackView(string name) {
		Tealium.TrackView(name, null);
	}
	
	public static void TrackView(string name, Dictionary<string, string> data) {
		if(_instance != null) {
			_instance.TrackCustomEvent("view", "screen_title", name, data);
		} else {
			Debug.LogWarning("Tealium.trackViewEvent(...) called when Library is uninitialized.");
		}
	}
	
	public static void Start () {
#if UNITY_ANDROID && !UNITY_EDITOR
		if(_instance != null) {
			_instance._tealiumClass.CallStatic("onResume", _instance._currentActivity);
		}
#endif
	}
	
	public static void OnApplicationPause(bool paused) {
#if UNITY_ANDROID && !UNITY_EDITOR
		if(_instance != null) {
			if(paused) {
				_instance._tealiumClass.CallStatic("onPause", _instance._currentActivity);
			} else {
				_instance._tealiumClass.CallStatic("onResume", _instance._currentActivity);
			}
		}
#endif		
	}
}
