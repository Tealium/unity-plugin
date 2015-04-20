using UnityEngine;
using System;
using System.Collections;
using System.Collections.Generic;
using System.Runtime.InteropServices;


public class Tealium : MonoBehaviour {

	private Tealium() {}

#if UNITY_IPHONE && !UNITY_EDITOR

	[DllImport ("__Internal")]
	private static extern IntPtr Tealium_EventCreate();
	
	[DllImport ("__Internal")]
	private static extern void Tealium_EventAddPair(IntPtr evt, string key, string value);

	[DllImport ("__Internal")]
	private static extern void Tealium_TrackEvent(IntPtr evt, string eventType);

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

        IntPtr eventPtr = Tealium_EventCreate();

		if (data != null) {
            foreach(KeyValuePair<string, string> pair in data) {
				Tealium_EventAddPair(eventPtr, pair.Key, pair.Value);
			}
		}

		Tealium_TrackEvent(eventPtr, name);			

#else
		if (Debug.isDebugBuild) {


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
		TrackCustomEvent("link", "link_id", name, data);
	}
	
	public static void TrackView(string name) {
		Tealium.TrackView(name, null);
	}
	
	public static void TrackView(string name, Dictionary<string, string> data) {
		TrackCustomEvent("view", "screen_title", name, data);
	}
}
