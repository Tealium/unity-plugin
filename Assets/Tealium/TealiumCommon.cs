using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using System;
using Newtonsoft.Json;
using Newtonsoft.Json.Linq;
using System.Linq;
using System.Runtime.CompilerServices;

#nullable enable

namespace TealiumCommon
{
    public struct Collectors
    {
        private Collectors(string value) { Value = value; }
        public string Value { get; }
        public static Collectors AppData { get { return new Collectors("AppData"); } }
        public static Collectors Connectivity { get { return new Collectors("Connectivity"); } }
        public static Collectors DeviceData { get { return new Collectors("DeviceData"); } }
        public static Collectors Lifecycle { get { return new Collectors("Lifecycle"); } }
    }

    public struct Dispatchers
    {
        private Dispatchers(string value) { Value = value; }
        public string Value { get; }

        public static Dispatchers TagManagement { get { return new Dispatchers("TagManagement"); } }
        public static Dispatchers Collect { get { return new Dispatchers("Collect"); } }
        public static Dispatchers RemoteCommands { get { return new Dispatchers("RemoteCommands"); } }
    }

    public struct TealiumEnvironment
    {
        private TealiumEnvironment(string value) { Value = value; }
        public string Value { get; }

        public static TealiumEnvironment DEV { get { return new TealiumEnvironment("dev"); } }
        public static TealiumEnvironment QA { get { return new TealiumEnvironment("qa"); } }
        public static TealiumEnvironment PROD { get { return new TealiumEnvironment("prod"); } }
    }

    public struct Expiry
    {
        private Expiry(string value) { Value = value; }
        public string Value { get; }

        public static Expiry Forever { get { return new Expiry("forever"); } }
        public static Expiry Session { get { return new Expiry("session"); } }
        public static Expiry UntilRestart { get { return new Expiry("untilRestart"); } }
    }

    public struct ConsentPolicy
    {
        private ConsentPolicy(string value) { Value = value; }
        public string Value { get; }

        public static ConsentPolicy GDPR { get { return new ConsentPolicy("gdpr"); } }
        public static ConsentPolicy CCPA { get { return new ConsentPolicy("ccpa"); } }
    }

    public struct ConsentStatus
    {
        private ConsentStatus(string value) { Value = value; }
        public string Value { get; }

        public static ConsentStatus Consented { get { return new ConsentStatus("consented"); } }
        public static ConsentStatus NotConsented { get { return new ConsentStatus("notConsented"); } }
        public static ConsentStatus Unknown { get { return new ConsentStatus("unknown"); } }

        public static ConsentStatus FromString(string status) => new ConsentStatus(status);
    }

    public struct LogLevel
    {
        private LogLevel(string value) { Value = value; }
        public string Value { get; }
        public static LogLevel Dev { get { return new LogLevel("dev"); } }
        public static LogLevel Qa { get { return new LogLevel("qa"); } }
        public static LogLevel Prod { get { return new LogLevel("prod"); } }
        public static LogLevel Silent { get { return new LogLevel("silent"); } }
    }

    public struct ConsentCategories
    {
        private ConsentCategories(string value) { Value = value; }
        public string Value { get; }
        public static ConsentCategories Analytics { get { return new ConsentCategories("analytics"); } }
        public static ConsentCategories Affiliates { get { return new ConsentCategories("affiliates"); } }
        public static ConsentCategories DisplayAds { get { return new ConsentCategories("displayAds"); } }
        public static ConsentCategories Email { get { return new ConsentCategories("email"); } }
        public static ConsentCategories Personalization { get { return new ConsentCategories("personalization"); } }
        public static ConsentCategories Search { get { return new ConsentCategories("search"); } }
        public static ConsentCategories Social { get { return new ConsentCategories("social"); } }
        public static ConsentCategories BigData { get { return new ConsentCategories("bigData"); } }
        public static ConsentCategories Mobile { get { return new ConsentCategories("mobile"); } }
        public static ConsentCategories Engagement { get { return new ConsentCategories("engagement"); } }
        public static ConsentCategories Monitoring { get { return new ConsentCategories("monitoring"); } }
        public static ConsentCategories Crm { get { return new ConsentCategories("crm"); } }
        public static ConsentCategories Cdp { get { return new ConsentCategories("cdp"); } }
        public static ConsentCategories CookieMatch { get { return new ConsentCategories("cookieMatch"); } }
        public static ConsentCategories Misc { get { return new ConsentCategories("misc"); } }

        public static ConsentCategories FromString(string category) => new ConsentCategories(category);
    }

    public struct TimeUnit
    {
        private TimeUnit(string value) { Value = value; }
        public string Value { get; }
        public static TimeUnit Minutes { get { return new TimeUnit("minutes"); } }
        public static TimeUnit Hours { get { return new TimeUnit("hours"); } }
        public static TimeUnit Days { get { return new TimeUnit("days"); } }
        public static TimeUnit Months { get { return new TimeUnit("months"); } }
    }

    public sealed class TealiumConfig
    {
        public string account;
        public string profile;
        public string environment;
        public List<string> collectors;
        public List<string> dispatchers;
        public string? dataSource;
        public string? customVisitorId;
        public bool? memoryReportingEnabled;
        public string? overrideCollectURL;
        public string? overrideCollectBatchURL;
        public string? overrideCollectDomain;
        public string? overrideLibrarySettingsURL;
        public string? overrideTagManagementURL;
        public bool? deepLinkTrackingEnabled;
        public bool? qrTraceEnabled;
        public string? logLevel;
        public bool? consentLoggingEnabled;
        public string? consentPolicy;
        public Dictionary<string, object>? consentExpiry;
        public bool? batchingEnabled;
        public bool? lifecycleAutotrackingEnabled;
        public bool? useRemoteLibrarySettings;
        public bool? visitorServiceEnabled;

        public TealiumConfig(
            string account,
            string profile,
            TealiumEnvironment env,
            List<Dispatchers> dispatchers,
            List<Collectors> collectors,
            // optional params
            string? dataSource = null,
            string? customVisitorId = null,
            bool? memoryReportingEnabled = null,
            string? overrideCollectURL = null,
            string? overrideCollectBatchURL = null,
            string? overrideCollectDomain = null,
            string? overrideLibrarySettingsURL = null,
            string? overrideTagManagementURL = null,
            bool? deepLinkTrackingEnabled = null,
            bool? qrTraceEnabled = null,
            LogLevel? logLevel = null,
            bool? consentLoggingEnabled = null,
            ConsentPolicy? consentPolicy = null,
            ConsentExpiry? consentExpiry = null,
            bool? batchingEnabled = null,
            bool? lifecycleAutotrackingEnabled = null,
            bool? useRemoteLibrarySettings = null,
            bool? visitorServiceEnabled = null
     )
        {
            this.account = account;
            this.profile = profile;
            this.environment = env.Value;
            this.dispatchers = dispatchers.ConvertAll<string>(dispatcher => dispatcher.Value);
            this.collectors = collectors.ConvertAll<string>(collector => collector.Value);
            this.dataSource = dataSource;
            this.customVisitorId = customVisitorId;
            this.memoryReportingEnabled = memoryReportingEnabled;
            this.overrideCollectURL = overrideCollectURL;
            this.overrideCollectBatchURL = overrideCollectBatchURL;
            this.overrideCollectDomain = overrideCollectDomain;
            this.overrideLibrarySettingsURL = overrideLibrarySettingsURL;
            this.overrideTagManagementURL = overrideTagManagementURL;
            this.deepLinkTrackingEnabled = deepLinkTrackingEnabled;
            this.qrTraceEnabled = qrTraceEnabled;
            this.logLevel = logLevel?.Value;
            this.consentLoggingEnabled = consentLoggingEnabled;
            this.consentPolicy = consentPolicy?.Value;
            this.consentExpiry = consentExpiry?.ToDictionary();
            this.batchingEnabled = batchingEnabled;
            this.lifecycleAutotrackingEnabled = lifecycleAutotrackingEnabled;
            this.useRemoteLibrarySettings = useRemoteLibrarySettings;
            this.visitorServiceEnabled = visitorServiceEnabled;
        }

    }

    public sealed class ConsentExpiry
    {
        int time;
        TimeUnit timeUnit;
        public ConsentExpiry(int time, TimeUnit unit)
        {
            this.time = time;
            this.timeUnit = unit;
        }
        public Dictionary<string, object> ToDictionary()
        {
            return new Dictionary<string, object>() {
                {"time", this.time},
                {"timeUnit", this.timeUnit.Value}
            };
        }
    }

    public abstract class TealiumDispatch
    {
        public readonly Dictionary<string, object>? dataLayer;
        public readonly string type;

        protected TealiumDispatch(String type, Dictionary<string, object>? dataLayer) 
        {
            this.type = type;
            this.dataLayer = dataLayer;
        }
    }

    public sealed class TealiumView : TealiumDispatch
    {
        public string viewName;

        public TealiumView(string name, Dictionary<string, object>? dataLayer = null) : base("view", dataLayer)
        {
            this.viewName = name;
        }
    }

    public sealed class TealiumEvent : TealiumDispatch
    {
        public string eventName;

        public TealiumEvent(string name, Dictionary<string, object>? dataLayer = null) : base("event", dataLayer)
        {
            this.eventName = name;
        }
    }

    public static class TealiumLogger
    {
        // usage : Logger.Log("Something Happened");
        //            : Logger.Log($" Log some variable { i }");
        //
        public static void Log(string msg, [CallerMemberName] string? methodName = null, [CallerFilePath] string? fileName = null, [CallerLineNumber] int lineNo = -1)
        {
            UnityEngine.Debug.LogFormat( LogType.Log, LogOption.NoStacktrace, null, "{0}", $"{msg}" ?? "NULL" );
        }

    }

}