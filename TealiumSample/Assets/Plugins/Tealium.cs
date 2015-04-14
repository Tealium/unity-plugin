using UnityEngine;
using System;
using System.Collections;
using System.Collections.Generic;
using System.Runtime.InteropServices;


public class Tealium {

	private Tealium() {}

#if UNITY_IPHONE && !UNITY_EDITOR

	[DllImport ("__Internal")]
	private static extern void _TealiumTrackPrepare(int capacity);
	
	[DllImport ("__Internal")]
	private static extern void _TealiumTrackSet(string key, string value);

	[DllImport ("__Internal")]
	private static extern void _TealiumTrackSend(string eventType);

#elif UNITY_ANDROID && !UNITY_EDITOR
	
	// This handle is used to run operations in the main thread.
	//private AndroidJavaObject _currentActivity = null;

	// Singleton interface handle.
	private static AndroidJavaClass _tealiumClass = new AndroidJavaClass("com.tealium.library.Tealium");

#else
	
#endif	
		
	private static void TrackCustomEvent(string name, string key, string value, Dictionary<string, string> data) {
		
		if(value == null) {
			if(key == "link_id") {
				Debug.LogError("A name must be provided when calling Tealium.trackControlEvent(...). Call will be ignored.");	
			} else {
				Debug.LogError("A name must be provided when calling Tealium.trackViewEvent(...). Call will be ignored.");	
			}
			return;
		}
		
#if UNITY_ANDROID && !UNITY_EDITOR

		AndroidJavaObject map = new AndroidJavaObject("com.tealium.unityplugin.Dictionary", data == null ? 1 : data.Count + 1);

		if(data != null) {
			foreach(KeyValuePair<string, string> pair in data) {
				map.Call("set", pair.Key, pair.Value);
			}
		}

		map.Call("set", key, value);
	
		_tealiumClass.CallStatic("track", null, map, name);

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


		if(data == null) {
			data = new Dictionary<string, string>();
		}
		
		data[key] = value;

		string log = name + ": {\r\n";

		foreach(KeyValuePair<string, string> pair in data) {
			log += String.Format("\t{0} : {1}\r\n", pair.Key, pair.Value);
		}
	
		Debug.Log(log + "}");

#endif
	}
	
	public static void TrackEvent(string name) {
		Tealium.TrackEvent(name, null);
	}

	public static void TrackEvent(string name, Dictionary<string, string> data) {
		TrackCustomEvent("link", "link_id", name, data);
	}
	
	public static void TrackView(string name) {
		Tealium.TrackView(name, null);
	}
	
	public static void TrackView(string name, Dictionary<string, string> data) {
		TrackCustomEvent("view", "screen_title", name, data);
	}
}
