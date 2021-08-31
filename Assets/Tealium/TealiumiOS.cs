using System;
using System.Collections;
using System.Collections.Generic;
using System.Runtime.InteropServices;
using UnityEngine;
using System.Linq;
using System.Text;
using Newtonsoft.Json;
using Newtonsoft.Json.Linq;
using System.IO;
using TealiumCommon;
using AOT;

#nullable enable

public sealed class TealiumiOS : TealiumUnity
{

    [DllImport("__Internal")]
    private static extern void Tealium_Initialize(string config);

    [DllImport("__Internal")]
    private static extern void Tealium_Track(string dispatch);

    [DllImport("__Internal")]
    private static extern void Tealium_Terminate();

    [DllImport("__Internal")]
    private static extern void Tealium_AddToDataLayer(string data, string expiry);

    [DllImport("__Internal")]
    private static extern string Tealium_GetFromDataLayer(string id);

    [DllImport("__Internal")]
    private static extern void Tealium_RemoveFromDataLayer(string keys);

    [DllImport("__Internal")]
    private static extern void Tealium_SetConsentStatus(string status);

    [DllImport("__Internal")]
    private static extern string Tealium_GetConsentStatus();
    
    [DllImport("__Internal")]
    private static extern void Tealium_SetConsentCategories(string categories);

    [DllImport("__Internal")]
    private static extern string Tealium_GetConsentCategories();

    [DllImport("__Internal")]
    private static extern void Tealium_JoinTrace(string id);

    [DllImport("__Internal")]
    private static extern void Tealium_LeaveTrace();

    [DllImport("__Internal")]
    private static extern void Tealium_AddRemoteCommand(string id);

    [DllImport("__Internal")]
    private static extern void Tealium_RemoveRemoteCommand(string id);

    [DllImport("__Internal")]
    private static extern string Tealium_GetVisitorId();

    [DllImport("__Internal")]
    private static extern void Tealium_SetInitializeDelegate(InitializeDelegateMessage callback);

    [DllImport("__Internal")]
    private static extern void Tealium_SetRemoteCommandDelegate(RemoteCommandDelegateMessage callback);

    [DllImport("__Internal")]
    private static extern void Tealium_SetVisitorServiceDelegate(VisitorServiceDelegateMessage callback);
    
    [DllImport("__Internal")]
    private static extern void Tealium_SetConsentExpiryDelegate(ConsentExpiryDelegateMessage callback);
    private delegate void InitializeDelegateMessage(bool success);
    [MonoPInvokeCallback(typeof(InitializeDelegateMessage))] 
    private static void initializationResponseReceived(bool success) {
        TealiumUnityPlugin.OnInitialized(success);
    }
    private delegate void RemoteCommandDelegateMessage(string payload);
    [MonoPInvokeCallback(typeof(RemoteCommandDelegateMessage))]
    private static void remoteCommandReceived(string payload) {
        TealiumUnityPlugin.OnRemoteCommandCompletion(payload);
    }
    private delegate void VisitorServiceDelegateMessage(string payload);
    [MonoPInvokeCallback(typeof(VisitorServiceDelegateMessage))]
    private static void visitorServiceUpdateReceived(string payload) {
        TealiumUnityPlugin.OnVisitorServiceUpdate(payload);
    }
    private delegate void ConsentExpiryDelegateMessage();
    [MonoPInvokeCallback(typeof(ConsentExpiryDelegateMessage))]
    private static void consentExpirationReceived() {
        TealiumUnityPlugin.OnConsentExpiration();
    }
    public void Initialize(TealiumConfig config, Action<bool>? callback = null) {
        if (callback != null) {
            Tealium_SetInitializeDelegate(initializationResponseReceived);
        }
        string? configString = JsonConvert.SerializeObject(config);
        Tealium_Initialize(configString);
    }
    public void Terminate() => Tealium_Terminate();

    public void Track(TealiumDispatch dispatch) {
        string? dispatchString = JsonConvert.SerializeObject(dispatch);
        Tealium_Track(dispatchString);
    }

    public void AddToDataLayer(Dictionary<string, object> data, Expiry expiry) {
        string? dataLayer = JsonConvert.SerializeObject(data);
        if (dataLayer != null) {
            Tealium_AddToDataLayer(dataLayer, expiry.Value);
        }
    }
    public object? GetFromDataLayer(string id) {
        string valueString = Tealium_GetFromDataLayer(id);
        if (valueString == null) {
            return null;
        }
        Dictionary<string, object> valueDictionary = JsonConvert.DeserializeObject<Dictionary<string, object>>(valueString);
        object value = TealiumUnityPlugin.ToCollections(valueDictionary[id]);
        return value;
    }
    public void RemoveFromDataLayer(List<string> keys) {
        string stringKeys = String.Join(",", keys);
        Tealium_RemoveFromDataLayer(stringKeys);
    }
    public void SetConsentStatus(ConsentStatus status) => Tealium_SetConsentStatus(status.Value);
    public ConsentStatus GetConsentStatus() => ConsentStatus.FromString(Tealium_GetConsentStatus());
    public void SetConsentCategories(List<ConsentCategories> categories) => Tealium_SetConsentCategories(String.Join(",", categories.ConvertAll(category => category.Value)));
    public List<ConsentCategories> GetConsentCategories() => Tealium_GetConsentCategories().Split(',').ToList().ConvertAll(category => ConsentCategories.FromString(category));
    public void AddRemoteCommand(string id, Action<Dictionary<string, object>> callback) {
        Tealium_SetRemoteCommandDelegate(remoteCommandReceived);
        Tealium_AddRemoteCommand(id);
    } 
    public void RemoveRemoteCommand(string id) => Tealium_RemoveRemoteCommand(id);
    public void JoinTrace(string id) => Tealium_JoinTrace(id);
    public void LeaveTrace() => Tealium_LeaveTrace();
    public void SetVisitorServiceListener(Action<Dictionary<string, object>> callback) => Tealium_SetVisitorServiceDelegate(visitorServiceUpdateReceived);
    public void SetConsentExpiryListener(Action callback) => Tealium_SetConsentExpiryDelegate(consentExpirationReceived);
    public string? GetVisitorId() {
        string visitorId = Tealium_GetVisitorId();
        if (visitorId == "") {
            return null;
        } 
        return visitorId;
    } 

}

