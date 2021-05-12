using System.Collections;
using System.Collections.Generic;
using System.Linq;
using Newtonsoft.Json;
using Newtonsoft.Json.Linq;
using UnityEngine;
using TealiumCommon;
using System;

public class TealiumAndroid : MonoBehaviour, TealiumUnity
{

    static TealiumAndroid _instance = new GameObject("TealiumAndroid").AddComponent<TealiumAndroid>();
    private const string KOTLIN_STATIC_TEALIUM = "com.tealium.TealiumUnity";
    private static AndroidJavaClass _tealiumUnityObject;

    public void Initialize(TealiumConfig config, Action<bool>? callback = null)
    {
        AndroidJavaClass playerClass = new AndroidJavaClass("com.unity3d.player.UnityPlayer");
        AndroidJavaObject activity = playerClass.GetStatic<AndroidJavaObject>("currentActivity");
        AndroidJavaObject context = activity.Call<AndroidJavaObject>("getApplicationContext");
        _tealiumUnityObject = new AndroidJavaClass(KOTLIN_STATIC_TEALIUM);

        _tealiumUnityObject.CallStatic("initialize", context, JsonConvert.SerializeObject(config));
    }
    public void Terminate()
    {
        _tealiumUnityObject.CallStatic("terminate");
    }

    public void Track(TealiumDispatch dispatch)
    {
        string? payload = null;
        if (dispatch.GetType() == typeof(TealiumEvent))
        {
            TealiumEvent tealEvent = (TealiumEvent)dispatch;
            payload = JsonConvert.SerializeObject(tealEvent);
        }
        else if (dispatch.GetType() == typeof(TealiumView))
        {
            TealiumView tealView = (TealiumView)dispatch;
            payload = JsonConvert.SerializeObject(tealView);
        }
        _tealiumUnityObject.CallStatic("track", payload);
    }

    public void AddToDataLayer(Dictionary<string, object> data, Expiry expiry) =>
        _tealiumUnityObject.CallStatic("addToDataLayer", JsonConvert.SerializeObject(data), expiry.Value);

    public object? GetFromDataLayer(string id)
    {
        string? data = _tealiumUnityObject.CallStatic<string>("getFromDataLayer", id);
        if (data == null) {
            return null;
        }
        Dictionary<string, object> dataDictionary = JsonConvert.DeserializeObject<Dictionary<string, object>>(data);
        object? dataValue = TealiumUnityPlugin.ToCollections(dataDictionary[id]);
        return dataValue;
    }

    public void RemoveFromDataLayer(List<string> keys) =>
        _tealiumUnityObject.CallStatic("removeFromDataLayer", JsonConvert.SerializeObject(keys));

    public void SetConsentStatus(ConsentStatus status) => _tealiumUnityObject.CallStatic("setConsentStatus", status.Value);


    public ConsentStatus GetConsentStatus()
    {
        string status = _tealiumUnityObject.CallStatic<string>("getConsentStatus");
        return ConsentStatus.FromString(status);
    }

    public void SetConsentCategories(List<ConsentCategories> categories) =>
        _tealiumUnityObject.CallStatic("setConsentCategories", JsonConvert.SerializeObject(categories));

    public List<ConsentCategories>? GetConsentCategories()
    {
        string? categories = _tealiumUnityObject.CallStatic<string>("getConsentCategories");
        if (categories == null) {
            return null;
        }
        List<ConsentCategories> formattedCategories = categories.Split(',').ToList().ConvertAll(category => ConsentCategories.FromString(category));
        return formattedCategories;
    }

    public void AddRemoteCommand(string id, Action<Dictionary<string, object>> callback)
    {
        _tealiumUnityObject.CallStatic("addRemoteCommand", id);
    }

    public void RemoveRemoteCommand(string id)
    {
        _tealiumUnityObject.CallStatic("removeRemoteCommand", id);
    }

    public void JoinTrace(string id)
    {
        _tealiumUnityObject.CallStatic("joinTrace", id);
    }

    public void LeaveTrace()
    {
        _tealiumUnityObject.CallStatic("leaveTrace");
    }

    public string? GetVisitorId()
    {
        return _tealiumUnityObject.CallStatic<string>("getVisitorId");
    }

    public void SetVisitorServiceListener(Action<Dictionary<string, object>> callback) {
        // do nothing
    }
    public void SetConsentExpiryListener(Action callback) {
        // do nothing
    }

    public void HandleInitialized(string response)
    {
        bool didInitialize = false;
        if (response == "true") {
            didInitialize = true;
        }
        TealiumUnityPlugin.OnInitialized(didInitialize);
    }

    public void HandleRemoteCommandResponse(string response)
    {
        TealiumUnityPlugin.OnRemoteCommandCompletion(response);
    }

    public void HandleVisitorProfileUpdate(string updates)
    {
        TealiumUnityPlugin.OnVisitorServiceUpdate(updates);
    }

    public void HandleConsentUpdate()
    {
        TealiumUnityPlugin.OnConsentExpiration();
    }
}