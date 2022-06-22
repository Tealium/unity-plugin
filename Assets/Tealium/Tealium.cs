using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using System;
using Newtonsoft.Json;
using Newtonsoft.Json.Linq;
using System.Linq;
using TealiumCommon;

#if UNITY_ANDROID
using static TealiumAndroid;
#endif
#if UNITY_IOS
using static TealiumiOS;
#endif

#nullable enable

public interface TealiumUnity
{
    void Initialize(TealiumConfig config, Action<bool>? callback = null);
    void GatherTrackData(Action<Dictionary<string, object>>? callback = null);
    void Terminate();
    void Track(TealiumDispatch dispatch);
    void AddToDataLayer(Dictionary<string, object> data, Expiry expiry);
    object? GetFromDataLayer(string id);
    void RemoveFromDataLayer(List<string> keys);
    void SetConsentStatus(ConsentStatus status);
    ConsentStatus GetConsentStatus();
    void SetConsentCategories(List<ConsentCategories> categories);
    List<ConsentCategories>? GetConsentCategories();
    void AddRemoteCommand(string id, Action<Dictionary<string, object>> callback);
    void RemoveRemoteCommand(string id);
    void JoinTrace(string id);
    void LeaveTrace();
    string? GetVisitorId();
    void SetVisitorServiceListener(Action<Dictionary<string, object>> callback);
    void SetConsentExpiryListener(Action callback);
}

public class TealiumUnityPlugin : MonoBehaviour
{
    private static TealiumUnity? tealium = null;
    public static TealiumUnity Tealium
    {
        get
        {
            if (tealium == null)
            {
                    #if UNITY_ANDROID
                        tealium = new TealiumAndroid ();
                    #elif UNITY_IPHONE
					    tealium = new TealiumiOS();
                    #endif
            }
            return tealium;
        }
    }
    private static Action<bool>? onInitialized;
    private static Action<Dictionary<string, object>>? onTrackDataDidUpdate;
    private static Dictionary<string, Action<Dictionary<string, object>>> onRemoteCommandCompletionCallbacks = new Dictionary<string, Action<Dictionary<string, object>>>();
    private static Action<Dictionary<string, object>>? onVisitorServiceDidUpdate;
    private static Action? onConsentExpiration;

    /// <summary>
    /// Initializes Tealium with a [TealiumConfig] object
    /// 
    /// </summary>
    /// <param name="config">The [TealiumConfig] object</param>
    /// <param name="callback">[Action<bool>?] Optional callback to execute once Tealium has been initialized</param>
    public static void Initialize(TealiumConfig config, Action<bool>? callback = null)
    {
        onInitialized = callback;
        Tealium.Initialize(config, callback);
    }

    public static void GatherTrackData(Action<Dictionary<string, object>>? callback = null)
    {
        onTrackDataDidUpdate = callback;
        Tealium.GatherTrackData(callback);
    }

    /// <summary>
    /// Disables the Tealium instance and all tracking
    /// </summary>
    public static void Terminate() => Tealium.Terminate();

    /// <summary>
    /// Tracks a [TealiumDispatch]
    ///
    /// </summary>
    /// <param name="dispatch">Accepts a [TealiumView] or [TealiumEvent] type</param>
    public static void Track(TealiumDispatch dispatch) => Tealium.Track(dispatch);

    /// <summary>
    /// Adds a key/value pair to the Tealium persistent data layer for a specified expiration
    ///
    /// </summary>
    /// <param name="data">[Dictionary<string, object>] to add to the Tealium persistent data layer</param>
    /// <param name="expiry">[Expiry] Lenth of time to persist data</param>
    public static void AddToDataLayer(Dictionary<string, object> data, Expiry expiry) => Tealium.AddToDataLayer(data, expiry);

    /// <summary>
    /// Retrieves a value from the data layer for a specified key
    ///
    /// </summary>
    /// <param name="key">Key for value to return</param>
    /// <returns>[object?] The value for the key specified if it exists, otherwise nil</returns>
    public static object? GetFromDataLayer(string key) => Tealium.GetFromDataLayer(key);

    /// <summary>
    /// Removes a List of keys from the data layer
    ///
    /// </summary>
    /// <param name="keys"> [List<string>] of keys for values to remove</param>
    public static void RemoveFromDataLayer(List<string> keys) => Tealium.RemoveFromDataLayer(keys);

    /// <summary>
    /// Sets the current user [ConsentStatus]
    ///
    /// </summary>
    /// <param name="status">[ConsentStatus] to set for the user</param>
    public static void SetConsentStatus(ConsentStatus status) => Tealium.SetConsentStatus(status);

    /// <summary>
    /// Retrieves the current user [ConsentStatus]
    ///
    /// </summary>
    /// <returns>[ConsentStatus] The current consent status for the user</returns>
    public static ConsentStatus GetConsentStatus() => Tealium.GetConsentStatus();

    /// <summary>
    /// Sets a List of [ConsentCategories] for the user
    ///
    /// </summary>
    /// <param name="categories">[List<ConsentCategories>] to set for the user</param>
    public static void SetConsentCategories(List<ConsentCategories> categories) => Tealium.SetConsentCategories(categories);

    /// <summary>
    /// Retrieves the current [ConsentCategories] for which the user is consented
    ///
    /// </summary>
    /// <returns>[List<ConsentCategories>] The current consent categories for which the user has consented</returns>
    public static List<ConsentCategories> GetConsentCategories() => Tealium.GetConsentCategories() ?? new List<ConsentCategories>();

    /// <summary>
    /// Adds a [RemoteCommand] to the [RemoteCommands] Dispatcher
    ///
    /// </summary>
    /// <param name="id"> [string] Command id to add as a [RemoteCommand]</param>
    /// <param name="callback"> [Action<string>] Callback action to execute once the RemoteCommand is executed</param>
    public static void AddRemoteCommand(string id, Action<Dictionary<string, object>> callback)
    {
        onRemoteCommandCompletionCallbacks[id] = callback;
        Tealium.AddRemoteCommand(id, callback);
    }

    /// <summary>
    /// Removes a [RemoteCommand] from the [RemoteCommands] Dispatcher
    /// 
    /// </summary>
    /// <param name="id">[string] Command id to remove</param>
    public static void RemoveRemoteCommand(string id)
    {
        onRemoteCommandCompletionCallbacks.Remove(id);
        Tealium.RemoveRemoteCommand(id);
    }

    /// <summary>
    /// Joins a trace session for a given id
    ///
    /// </summary>
    /// <param name="id">[string] Trace Id</param>
    public static void JoinTrace(string id) => Tealium.JoinTrace(id);

    /// <summary>
    /// Leaves the current trace session
    /// 
    /// </summary>
    public static void LeaveTrace() => Tealium.LeaveTrace();

    /// <summary>
    /// Sets the callback for the [VisitorService] update
    ///
    /// </summary>
    /// <param name="id">[Action<string>] The callback action to execute once an updated visitor profile is returned</param>
    public static void SetVisitorServiceListener(Action<Dictionary<string, object>> callback)
    {
        onVisitorServiceDidUpdate = callback;
        Tealium.SetVisitorServiceListener(callback);
    }

    /// <summary>
    /// Sets the callback for when the user [ConsentStatus] has expired
    ///
    /// </summary>
    /// <param name="callback">[Action] The callback action to execute once the user [ConsentStatus] has expired</param>
    public static void SetConsentExpiryListener(Action callback)
    {
        onConsentExpiration = callback;
        Tealium.SetConsentExpiryListener(callback);
    }

    /// <summary>
    /// Retrieves the visitor id for the user
    /// </summary>
    /// <returns>[string] The visitor id for the user</returns>
    public static string? GetVisitorId() => Tealium.GetVisitorId();

    public static void OnInitialized(bool success)
    {
        if (onInitialized != null)
        {
            if (success) {
                Dictionary<string, object> pluginData = new Dictionary<string, object> {
                    {"plugin_name", "Tealium-Unity"},
                    {"plugin_version", "2.0.0"}
                };
                Tealium.AddToDataLayer(pluginData, Expiry.Forever);
            }
        
            onInitialized(success);
        }
    }

    public static void OnTrackDataCompletion(string trackdata)
    {
        Dictionary<string, object> decodedTrackData = JsonConvert.DeserializeObject<Dictionary<string, object>>(trackdata);
        Dictionary<string, object> finalTrackData = TealiumHelpers.ConvertValuesToCollections(decodedTrackData);
        if (onTrackDataDidUpdate != null) {
            onTrackDataDidUpdate(finalTrackData);
        }
    }

    public static void OnRemoteCommandCompletion(string payload)
    {
        Dictionary<string, object> decodedPayload = JsonConvert.DeserializeObject<Dictionary<string, object>>(payload);
        Dictionary<string, object> finalPayload = TealiumHelpers.ConvertValuesToCollections(decodedPayload);
        string? commandId = (string)finalPayload["command_id"];
        if (commandId != null && onRemoteCommandCompletionCallbacks[commandId] != null)
        {
            Action<Dictionary<string, object>> callback = onRemoteCommandCompletionCallbacks[commandId];
            callback(finalPayload);
        }
    }
    public static void OnVisitorServiceUpdate(string payload)
    {
        Dictionary<string, object> decodedPayload = JsonConvert.DeserializeObject<Dictionary<string, object>>(payload);
        Dictionary<string, object> finalPayload = TealiumHelpers.ConvertValuesToCollections(decodedPayload);
        if (onVisitorServiceDidUpdate != null)
        {
            onVisitorServiceDidUpdate(finalPayload);
        }
    }
    public static void OnConsentExpiration()
    {
        if (onConsentExpiration != null)
        {
            onConsentExpiration();
        }
    }
}