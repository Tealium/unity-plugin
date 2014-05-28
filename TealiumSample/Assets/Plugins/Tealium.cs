using UnityEngine;
using System;
using System.Collections;
using System.Collections.Generic;
using System.Runtime.InteropServices;


public class Tealium {

	public class Config {
		public bool IsHTTPSDisabled = false;
		public bool IsLifeCycleTrackingDisabled = false;
		public bool IsDebugLogSilent = true;
		public bool IsErrorLogSilent = false;
		
		public Config DisableHTTPS(bool disable) {
			this.IsHTTPSDisabled = disable;
			return this;
		}
		
		public Config DisableLifeCycleTracking(bool disable) {
			this.IsLifeCycleTrackingDisabled = disable;
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
	private static extern void _TealiumInitialize (string accountName, string profileName, string environmentName, int options);

	[DllImport ("__Internal")]
	private static extern void _TealiumTrackPrepare(int capacity);
	
	[DllImport ("__Internal")]
	private static extern void _TealiumTrackSet(string key, string value);

	[DllImport ("__Internal")]
	private static extern void _TealiumTrackSend(string eventType);

#elif UNITY_ANDROID && !UNITY_EDITOR
	
	// This handle is used to run operations in the main thread.
	private AndroidJavaObject _currentActivity = null;

	// Singleton interface handle.
	private AndroidJavaClass _tealiumClass = null;
	
	// Lifecycle operations.
	private AndroidJavaRunnable _resumeRunnable = null;
	private AndroidJavaRunnable _pauseRunnable = null;

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
		
		int options = 0;
		
		if(config.IsHTTPSDisabled) {
			options = 1 << 0; // Tealium.OPT_DISABLE_HTTPS
		}

		if(config.IsLifeCycleTrackingDisabled) {
			options = options | (1 << 9);// Tealium.OPT_DISABLE_LIFECYCLE_TRACKING
		}

		if(config.IsErrorLogSilent) {
			options = options | (1 << 6) | (1 << 7) | (1 << 8);// Tealium.OPT_SILENCE_*
		}

		if(config.IsDebugLogSilent) {
			options = options | (1 << 3) | (1 << 4) | (1 << 5);// Tealium.OPT_VOL_*
		}
		
	    AndroidJavaClass jc = new AndroidJavaClass("com.unity3d.player.UnityPlayer");
	    _instance._currentActivity = jc.GetStatic<AndroidJavaObject>("currentActivity");	
	
		_instance._tealiumClass = new AndroidJavaClass("com.tealium.library.Tealium");
	
	    _instance._currentActivity.Call("runOnUiThread", new AndroidJavaRunnable(() => {
			_instance._tealiumClass.CallStatic<bool>(
				"initialize", _instance._currentActivity, accountName, profileName, environmentName, options);
		
			_instance._tealiumClass.CallStatic<bool>("onResume", _instance._currentActivity);
		}));
	
		_instance._resumeRunnable = new AndroidJavaRunnable(() => {
			_instance._tealiumClass.CallStatic<bool>("onResume", _instance._currentActivity);
		});
	
		_instance._pauseRunnable = new AndroidJavaRunnable(() => {
			_instance._tealiumClass.CallStatic<bool>("onPause");
		});
		
#elif UNITY_IPHONE && !UNITY_EDITOR
		
		int options = 0;
		
		if(config.IsHTTPSDisabled) {
			options = 1 << 3; // TLDisableHTTPS = 1 << 3
		}

		if(config.IsLifeCycleTrackingDisabled) {
			options = options | (1 << 2); // TLDisableLifecycleTracking  = 1 << 2
		}

		if(config.IsDebugLogSilent) {
			options = options | (1 << 0) ; // TLSuppressLogs = 1 << 0
		} else {
			options = options | (1 << 4) ; // TLDisplayVerboseLogs = 1 << 4
		}
		
		_TealiumInitialize(accountName, profileName, environmentName, options);		

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
			
			if(config.IsLifeCycleTrackingDisabled) {
				Debug.Log("LIFECYCLE TRACKING DIABLED");
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
		this._currentActivity.Call("runOnUiThread", new AndroidJavaRunnable(() => {
			AndroidJavaObject map = new AndroidJavaObject("com.tealium.unity.DataMap", data == null ? 1 : data.Count + 1);
	
			if(data != null) {
				foreach(KeyValuePair<string, string> pair in data) {
					map.Call("set", pair.Key, pair.Value);
				}
			}
	
			map.Call("set", key, value);
		
			_tealiumClass.CallStatic<bool>("track", null, map, name);
		}));
#elif UNITY_IPHONE && !UNITY_EDITOR
		if(data == null) {
			_TealiumTrackPrepare(1);
		} else {
			_TealiumTrackPrepare(data.Count + 1);
			foreach(KeyValuePair<string, string> pair in data) {
				_TealiumTrackSet(pair.Key, pair.Value);
			}
		}
		
		_TealiumTrackSet(key, value);			
		_TealiumTrackSend(name);		
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
			_instance._currentActivity.Call("runOnUiThread", _instance._resumeRunnable);
		}
#endif
	}
	
	public static void OnApplicationPause(bool paused) {
#if UNITY_ANDROID && !UNITY_EDITOR
		if(_instance != null) {
			if(paused) {
				_instance._currentActivity.Call("runOnUiThread", _instance._pauseRunnable);
			} else {
				_instance._currentActivity.Call("runOnUiThread", _instance._resumeRunnable);
			}
		}
#endif		
	}
}
