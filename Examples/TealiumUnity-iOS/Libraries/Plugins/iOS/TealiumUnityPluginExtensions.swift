import Foundation
import TealiumSwift

public extension TealiumUnityPlugin {     
    
    func tealiumConfig(from dictionary: [String: Any]) -> TealiumConfig? {
        guard let account = dictionary[.account] as? String,
              let profile = dictionary[.profile] as? String,
              let environment = dictionary[.environment] as? String else {
            return nil
        }
        
        let localConfig = TealiumConfig(account: account,
                                        profile: profile,
                                        environment: environment,
                                        dataSource: dictionary[.dataSource] as? String)
        
        if let policyString = dictionary[.consentPolicy] as? String,
           let policy = consentPolicyFrom(policyString) {
            localConfig.consentPolicy = policy
            localConfig.consentLoggingEnabled =  dictionary[.consentLoggingEnabled] as? Bool ?? true
        }
        
        if let consentExpiry = dictionary[.consentExpiry] as? [String: Any],
           let consentExpiryTime = consentExpiry[.time] as? Int,
           let consentExpiryUnit = consentExpiry[.timeUnit] as? String {
            
            var unitType = TimeUnit.days

            switch consentExpiryUnit.lowercased() {
            case TealiumUnityConstants.minutes:
                    unitType = .minutes
            case TealiumUnityConstants.hours:
                    unitType = .hours
            case TealiumUnityConstants.months:
                    unitType = .months
                default:
                    break
            }
            
            localConfig.consentExpiry = (time: consentExpiryTime, unit: unitType)
        }
        
        if let customVisitorId = dictionary[.customVisitorId] as? String {
            localConfig.existingVisitorId = customVisitorId
        }
        
        var configDispatchers = [Dispatcher.Type]()
        var configCollectors = [Collector.Type]()
        
        if let dispatchers = dictionary[.dispatchers] as? [String] {
            if dispatchers.contains(TealiumUnityConstants.tagManagement) {
                configDispatchers.append(Dispatchers.TagManagement)
            }
            
            if dispatchers.contains(TealiumUnityConstants.collect) {
                configDispatchers.append(Dispatchers.Collect)
            }
            
            if dispatchers.contains(TealiumUnityConstants.remoteCommands) {
                configDispatchers.append(Dispatchers.RemoteCommands)
                localConfig.remoteAPIEnabled = true
            }
        }
        
        if let collectors = dictionary[.collectors] as? [String] {
            if collectors.contains(TealiumUnityConstants.appData) {
                configCollectors.append(Collectors.AppData)
            }
            
            if collectors.contains(TealiumUnityConstants.connectivity) {
                configCollectors.append(Collectors.Connectivity)
            }
            
            if collectors.contains(TealiumUnityConstants.deviceData) {
                configCollectors.append(Collectors.Device)
            }
            
            if collectors.contains(TealiumUnityConstants.lifecycle) {
                configCollectors.append(Collectors.Lifecycle)
            }
        }
        
        if let logLevel = dictionary[.logLevel] as? String {
            localConfig.logLevel = logLevelFrom(logLevel)
        }
        
        if let overrideCollectURL = dictionary[.overrideCollectURL] as? String {
            localConfig.overrideCollectURL = overrideCollectURL
        }
        
        if let overrideCollectProfile = dictionary[.overrideCollectProfile] as? String {
            localConfig.overrideCollectProfile = overrideCollectProfile
        }

        if let overrideTagManagementURL = dictionary[.overrideTagManagementURL] as? String {
            localConfig.tagManagementOverrideURL = overrideTagManagementURL
        }
        
        if let overrideCollectBatchURL = dictionary[.overrideCollectBatchURL] as? String {
            localConfig.overrideCollectBatchURL = overrideCollectBatchURL
        }
        
        if let overrideLibrarySettingsURL = dictionary[.overrideLibrarySettingsURL] as? String {
            localConfig.publishSettingsURL = overrideLibrarySettingsURL
        }
        
        localConfig.shouldUseRemotePublishSettings = dictionary[.useRemoteLibrarySettings] as? Bool ?? true
        localConfig.qrTraceEnabled = dictionary[.qrTraceEnabled] as? Bool ?? true
        localConfig.batchingEnabled = dictionary[.batchingEnabled] as? Bool ?? true
        localConfig.deepLinkTrackingEnabled = dictionary[.deepLinkTrackingEnabled] as? Bool ?? true
        localConfig.lifecycleAutoTrackingEnabled = dictionary[.lifecycleAutoTrackingEnabled] as? Bool ?? true
        localConfig.memoryReportingEnabled = dictionary[.lifecycleAutoTrackingEnabled] as? Bool ?? false
        
        if let visitorServiceEnabled = dictionary[.visitorServiceEnabled] as? Bool,
           visitorServiceEnabled == true {
            configCollectors.append(Collectors.VisitorService)
            localConfig.visitorServiceDelegate = self
        }

        if let sessionCountingEnabled = dictionary[.sessionCountingEnabled] as? Bool {
            localConfig.sessionCountingEnabled = sessionCountingEnabled
        }

        if let visitorIdentityKey = dictionary[.visitorIdentityKey] as? String {
            localConfig.visitorIdentityKey = visitorIdentityKey
        }
        
        localConfig.collectors = configCollectors
        localConfig.dispatchers = configDispatchers
        
        return localConfig
    }
    
    func consentPolicyFrom(_ policy: String) -> TealiumConsentPolicy? {
        switch policy.lowercased() {
            case TealiumUnityConstants.ccpa:
                return .ccpa
            case TealiumUnityConstants.gdpr:
                return .gdpr
            default:
                return nil
        }
    }
    
    func expiryFrom(_ expiry: String) -> Expiry {
        switch expiry.lowercased() {
            case TealiumUnityConstants.forever:
                return .forever
            case TealiumUnityConstants.restart:
                return .untilRestart
            default:
                return .session
        }
    }
    
    func dispatchFrom(_ payload: [String: Any]) -> TealiumDispatch? {
        let type = payload[.type] as? String ?? TealiumUnityConstants.event
        let dataLayer = payload[.dataLayer] as? [String: Any]
        switch type.lowercased() {
        case TealiumUnityConstants.view:
            guard let viewName = payload[.viewName] as? String else {
                return nil
            }
            return TealiumView(viewName, dataLayer: dataLayer)
        default:
            guard let eventName = payload[.eventName] as? String else {
                return nil
            }
            return TealiumEvent(eventName, dataLayer: dataLayer)
        }
    }
    
    func logLevelFrom(_ logLevel: String) -> TealiumLogLevel {
        switch logLevel.lowercased() {
        case TealiumUnityConstants.dev:
            return .info
        case TealiumUnityConstants.qa:
            return .debug
        case TealiumUnityConstants.prod:
            return .error
        case TealiumUnityConstants.silent:
            return .silent
        default:
            return .error
        }
    }

}


extension Dictionary where Key: ExpressibleByStringLiteral {
    subscript(key: TealiumUnityConstants.Config) -> Value? {
        get {
            return self[key.rawValue as! Key]
        }
    }
    subscript(key: TealiumUnityConstants.Dispatch) -> Value? {
        get {
            return self[key.rawValue as! Key]
        }
    }
}

extension String {
    var dictionary: [String: Any]? {
       if let data = self.data(using: .utf8) {
           do {
               let json = try JSONSerialization.jsonObject(with: data, options: .mutableContainers) as? [String:AnyObject]
               return json
           } catch {
            let logRequest = TealiumLogRequest(title: "TealiumUnityPlugin", message: "Could not serialize JSON to Dictionary", info: nil, logLevel: .debug, category: .general)
            TealiumUnityPlugin.shared.tealium?.logger?.log(logRequest)
           }
       }
       return nil
   }
}

extension Dictionary {
    var jsonString: String? {
        guard let jsonData = try? JSONSerialization.data(withJSONObject: self,
                                                            options: [.prettyPrinted]) else {
            return nil
        }

        return String(data: jsonData, encoding: .ascii)
    }
}
