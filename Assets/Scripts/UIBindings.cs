using UnityEngine;
using UnityEngine.UI;
using System;
using System.Linq;
using System.Collections.Generic;
using TealiumCommon;
using Newtonsoft.Json;

#nullable enable

public class UIBindings : MonoBehaviour
{
    [SerializeField]
    private InputField? traceIdInputField;
    
    [SerializeField]
    private Button? initializeButton;

    [SerializeField]
    private Button? terminateTealiumButton;

    [SerializeField]
    private Button? joinTraceButton;

    [SerializeField]
    private Button? leaveTraceButton;

    [SerializeField]
    private Button? trackEventButton;

    [SerializeField]
    private Button? trackViewButton;

    [SerializeField]
    private Button? addToDataLayerButton;

    [SerializeField]
    private Button? gatherTrackDataButton;

    [SerializeField]
    private Button? getFromDataLayerButton;

    [SerializeField]
    private Button? removeFromDataLayerButton;

    [SerializeField]
    private Button? setConsentStatusButton;
    
    [SerializeField]
    private Button? getConsentStatusButton;

    [SerializeField]
    private Button? setConsentCategoriesButton;

    [SerializeField]
    private Button? getConsentCategoriesButton;

    [SerializeField]
    private Button? getVisitorIdButton;

    [SerializeField]
    private Button? addRemoteCommandButton;

    [SerializeField]
    private Button? removeRemoteCommandButton;
    private string traceId = "";
    private TealiumConfig config = new TealiumConfig("tealiummobile",
                                                     "demo",
                                                     TealiumEnvironment.DEV,
                                                     new List<Dispatchers> { 
                                                        Dispatchers.TagManagement,
                                                        Dispatchers.Collect,
                                                        Dispatchers.RemoteCommands },
                                                     new List<Collectors> { 
                                                        Collectors.AppData,
                                                        Collectors.DeviceData,
                                                        Collectors.Lifecycle,
                                                        Collectors.Connectivity },
                                                     logLevel: LogLevel.Dev,
                                                     consentPolicy: ConsentPolicy.GDPR,
                                                     overrideCollectProfile: "override_collect_profile_key_test",
                                                     consentExpiry: new ConsentExpiry(10, TimeUnit.Minutes),
                                                     batchingEnabled: false,
                                                     visitorServiceEnabled: true,
                                                     sessionCountingEnabled: true,
                                                     customVisitorId: "my_custom_id_123456",
                                                     useRemoteLibrarySettings: true);

    void Start() {
        traceIdInputField?.onEndEdit.AddListener(delegate {SetTraceId(traceIdInputField);});
        initializeButton?.onClick.AddListener(Initialize);
        gatherTrackDataButton?.onClick.AddListener(GatherTrackData);
        terminateTealiumButton?.onClick.AddListener(TerminateTealium);
        joinTraceButton?.onClick.AddListener(JoinTrace);
        leaveTraceButton?.onClick.AddListener(LeaveTrace);
        trackEventButton?.onClick.AddListener(TrackEvent);
        trackViewButton?.onClick.AddListener(TrackView);
        addToDataLayerButton?.onClick.AddListener(AddToDataLayer);
        getFromDataLayerButton?.onClick.AddListener(GetFromDataLayer);
        removeFromDataLayerButton?.onClick.AddListener(RemoveFromDataLayer);
        setConsentStatusButton?.onClick.AddListener(SetConsentStatus);
        getConsentStatusButton?.onClick.AddListener(GetConsentStatus);
        setConsentCategoriesButton?.onClick.AddListener(SetConsentCategories);
        getConsentCategoriesButton?.onClick.AddListener(GetConsentCategories);
        getVisitorIdButton?.onClick.AddListener(GetVisitorId);
        addRemoteCommandButton?.onClick.AddListener(AddRemoteCommand);
        removeRemoteCommandButton?.onClick.AddListener(RemoveRemoteCommand);
    } 

    void Initialize() => TealiumUnityPlugin.Initialize(config, success => {
        if (success) {
            TealiumLogger.Log(" *** TealiumUnityPlugin Successfully Initialized *** ");
            TealiumUnityPlugin.SetConsentStatus(ConsentStatus.Consented);
            TealiumUnityPlugin.AddRemoteCommand("example", payload => PrintPayload("Example Remote Command", payload));
            TealiumUnityPlugin.SetVisitorServiceListener(payload => PrintPayload("Updated Visitor Profile", payload));
            TealiumUnityPlugin.SetConsentExpiryListener(() => TealiumLogger.Log("Consent Expired!!"));
        } else {
           TealiumLogger.Log(" *** TealiumUnityPlugin Failed to Initialize *** "); 
        }
    });

    void GatherTrackData() => TealiumUnityPlugin.GatherTrackData((callback) => PrintPayload("Gather Track Data Response: ", callback));
    void JoinTrace() => TealiumUnityPlugin.JoinTrace(traceId);
    void LeaveTrace() => TealiumUnityPlugin.LeaveTrace(); 
    void TrackEvent() => TealiumUnityPlugin.Track(new TealiumEvent("unity_event", new Dictionary<string, object> {
        {"string_key", "helloworld"},
        {"int_key", 1},
        {"bool_key", true},
        {"array_string_key", new string[]{"hello", "world"}},
        {"array_int_key", new int[]{1, 2}},
        {"dictionary_string_values", new Dictionary<string, string> {{"hellothere", "hitoyou"}}},
        {"dictionary_object_values", new Dictionary<string, object> {
            {"nested_string", new Dictionary<string, string> {{"foo", "bar"}, {"fizz", "buzz"}}},
            {"nested_int", new Dictionary<string, int> {{"height", 10}, {"width", 20}}}
        }}
    }));
    void TrackView() => TealiumUnityPlugin.Track(new TealiumView("unity_view")); 
    void AddToDataLayer() { 
        TealiumUnityPlugin.AddToDataLayer(new Dictionary<string, object> {
            {"test_string", "stringValue"},
            {"test_list", new List<double> {3.99, 4.00}},
            {"test_dictionary", new Dictionary<string, string> {{"fizzer", "buzzer"}}}
        }, Expiry.Session);
        TealiumUnityPlugin.AddToDataLayer(new Dictionary<string, object> {
            {"test_volatile", "stringValue"},
        }, Expiry.UntilRestart);
    }
    void GetFromDataLayer() {
        string? stringValue = (string?)TealiumUnityPlugin.GetFromDataLayer("test_string");
        List<object>? listValue = (List<object>?)TealiumUnityPlugin.GetFromDataLayer("test_list");
        Dictionary<string, object>? dictionaryValue = (Dictionary<string, object>?)TealiumUnityPlugin.GetFromDataLayer("test_dictionary");
        if (stringValue != null) {
            TealiumLogger.Log($"test_string from dataLayer: {stringValue}");
        }
        if (listValue != null) {
            listValue.ForEach(item => TealiumLogger.Log($"test_list from dataLayer: {item.ToString()}"));
        }
        if (dictionaryValue != null) {
            string? dictionaryString = JsonConvert.SerializeObject(dictionaryValue);
            if (dictionaryString != null) {
                TealiumLogger.Log($"test_dictionary from dataLayer: {dictionaryString}");
            }
        }
    }
    void RemoveFromDataLayer() => TealiumUnityPlugin.RemoveFromDataLayer(new List<string> {"test_list", "test_dictionary"});
    void SetConsentStatus() => TealiumUnityPlugin.SetConsentStatus(ConsentStatus.Consented);
    void GetConsentStatus()  => TealiumLogger.Log($"Consent Status: {TealiumUnityPlugin.GetConsentStatus().Value}");
    void SetConsentCategories() => TealiumUnityPlugin.SetConsentCategories(SetRandomConsentCategories()); 
    void GetConsentCategories() {
        TealiumLogger.Log("Consent Categories: ");
        List<ConsentCategories> categories = TealiumUnityPlugin.GetConsentCategories();
        categories.ForEach(category => TealiumLogger.Log($"{category.Value} "));
    }
    void GetVisitorId()  => TealiumLogger.Log($"Visitor Id: {TealiumUnityPlugin.GetVisitorId()}");
    void TerminateTealium() => TealiumUnityPlugin.Terminate();
    void AddRemoteCommand() => TealiumUnityPlugin.AddRemoteCommand("hello", (payload) => PrintPayload("Hello Remote Command", payload));
    void RemoveRemoteCommand() => TealiumUnityPlugin.RemoveRemoteCommand("example");

    // Helper Methods
    private void SetTraceId(InputField input) => traceId = input.text;
    private List<ConsentCategories> SetRandomConsentCategories() 
    {
        List<ConsentCategories> allCategories = new List<ConsentCategories>(){
            ConsentCategories.Analytics,
            ConsentCategories.Affiliates,
            ConsentCategories.BigData,
            ConsentCategories.Cdp,
            ConsentCategories.CookieMatch,
            ConsentCategories.Crm,
            ConsentCategories.DisplayAds,
            ConsentCategories.Email,
            ConsentCategories.Engagement,
            ConsentCategories.Misc,
            ConsentCategories.Mobile,
            ConsentCategories.Monitoring,
            ConsentCategories.Personalization,
            ConsentCategories.Search,
            ConsentCategories.Social
        };

        return GetRandomFromList(allCategories, 6);
    }

    private List<T> GetRandomFromList<T>(List<T> passedList, int numberToChoose)
    {
        System.Random rnd = new System.Random();
        List<T> chosenItems = new List<T>();

        for (int i = 1; i <= numberToChoose; i++)
        {
        int index = rnd.Next(passedList.Count);
        chosenItems.Add(passedList[index]);
        }

        return chosenItems;
    }
    private static void PrintPayload(string label, Dictionary<string, object> payload) {
        string? serializedPayload = JsonConvert.SerializeObject(payload);
        if (serializedPayload != null) {
            TealiumLogger.Log($"{label}: {serializedPayload}");
        }  
    }

}
