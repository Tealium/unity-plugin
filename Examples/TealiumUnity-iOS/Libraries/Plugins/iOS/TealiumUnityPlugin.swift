import TealiumCore
import TealiumCollect
import TealiumLifecycle
import TealiumRemoteCommands
import TealiumTagManagement
import TealiumVisitorService

@objc public protocol TealiumUnityInitializeDelegate {
    func didInitialize(_ success: Bool)
}

@objc public protocol TealiumUnityRemoteCommandDelegate {
    func didReceiveRemoteCommand(with payload: String?)
}

@objc public protocol TealiumUnityVisitorServiceDelegate {
    func didReceiveVisitorServiceUpdate(with payload: String?)
}

@objc public protocol TealiumConsentExpiryDelegate {
    func consentDidExpire()
}

@objc
public class TealiumUnityPlugin: NSObject, VisitorServiceDelegate {
    
    @objc public static var shared = TealiumUnityPlugin()
        
    public var tealium: Tealium?
    private var config: TealiumConfig?
    
    @objc public weak var initializeDelegate: TealiumUnityInitializeDelegate?
    @objc public weak var remoteCommandDelegate: TealiumUnityRemoteCommandDelegate?
    @objc public weak var visitorServiceDelegate: TealiumUnityVisitorServiceDelegate?
    @objc public weak var consentExpiryDelegate: TealiumConsentExpiryDelegate? {
        willSet {
            tealium?.consentManager?.onConsentExpiraiton = { [weak self] in
                self?.consentExpiryDelegate?.consentDidExpire()
            }
        }
    }

    @objc
    public var consentStatus: String {
        get {
            tealium?.consentManager?.userConsentStatus.rawValue ?? "unknown"
        }
    }
    
    @objc
    public var consentCategories: String {
        get {
           tealium?.consentManager?.userConsentCategories?.map { $0.rawValue }.joined(separator: ",") ?? ""
        }
    }
    
    @objc
    public var visitorId: String {
        get {
            tealium?.visitorId ?? ""
        }
    }
    
    override private init() {
        super.init()
    }
    
    @objc
    public func initialize(_ config: String?) {
        guard let config = config,
        let configDictionary = config.dictionary,
        let localConfig = tealiumConfig(from: configDictionary) else {
            return
        }
        TealiumUnityPlugin.shared.config = localConfig.copy
        tealium = Tealium(config: localConfig) { [weak self] result in 
            guard case .success(_) = result else {
                self?.initializeDelegate?.didInitialize(false)
                return
            }
            self?.initializeDelegate?.didInitialize(true)
        }
    }

    @objc
    public func track(_ dispatch: String?) {
        guard let dispatch = dispatch,
              let dispatchDictionary = dispatch.dictionary,
              let track = dispatchFrom(dispatchDictionary) else {
            return
        }
        tealium?.track(track)
    }
    
    @objc
    public func terminateInstance() {
        guard let config = config else {
            return
        }
        TealiumInstanceManager.shared.removeInstance(config: config)
        tealium = nil
    }

    @objc
    public func addToDataLayer(_ data: String?, expiry: String) {
        guard let dataLayer = data?.dictionary else {
            return
        }
        tealium?.dataLayer.add(data: dataLayer, expiry: expiryFrom(expiry))
    }

    @objc
    public func removeFromDataLayer(_ keys: String) {
        let keysArray = keys.components(separatedBy: ",")
        tealium?.dataLayer.delete(for: keysArray)
    }
    
    @objc
    public func getFromDataLayer(_ key: String) -> String? {
        guard let value = tealium?.dataLayer.all[key],
              let jsonString = [key: value].jsonString else {
            return nil
        }
        return jsonString
    }

    @objc
    public func addRemoteCommand(_ id: String) {
        let remoteCommand = RemoteCommand(commandId: id, description: nil) { [weak self] response in
            guard let payload = response.payload, 
                  let payloadString = payload.jsonString else {
                return
            }
            self?.remoteCommandDelegate?.didReceiveRemoteCommand(with: payloadString) 
        }
        tealium?.remoteCommands?.add(remoteCommand)
    }

    @objc
    public func removeRemoteCommand(_ id: String) {
        tealium?.remoteCommands?.remove(commandWithId: id)
    }
    
    @objc
    public func setConsentStatus(_ status: String) {
        if status == TealiumUnityConstants.consented {
            tealium?.consentManager?.userConsentStatus = .consented
        } else {
            tealium?.consentManager?.userConsentStatus = .notConsented
        }
    }
        
    @objc
    public func setConsentCategories(_ categories: String) {
        let categoriesArray = categories.components(separatedBy: ",")
        tealium?.consentManager?.userConsentCategories = TealiumConsentCategories.consentCategoriesStringArrayToEnum(categoriesArray)
    }
    
    @objc
    public func joinTrace(_ id: String) {
        tealium?.joinTrace(id: id)
    }
        
    @objc
    public func leaveTrace() {
        tealium?.leaveTrace()
    }
    
    public func didUpdate(visitorProfile: TealiumVisitorProfile) {
        let converted = convert(visitorProfile)
        guard let convertedString = converted.jsonString else {
            return
        }
        visitorServiceDelegate?.didReceiveVisitorServiceUpdate(with: convertedString)
    }
    
        private func convert(_ visitorProfile: TealiumVisitorProfile) -> [String: Any] {
        typealias Visitor = TealiumUnityConstants.Visitor
        
        // Sets cannot be serialized to JSON, so convert to array first
        let arraySetOfStrings = visitorProfile.setsOfStrings.map({ (stringSet) -> [String: [String]] in
            var newValue = [String: [String]]()
            stringSet.forEach {
                newValue[$0.key] = Array($0.value)
            }
            return newValue
        })
        
        let currentVisitArraySetOfStrings = visitorProfile.currentVisit?.setsOfStrings.map({ (stringSet) -> [String: [String]] in
            var newValue = [String: [String]]()
            stringSet.forEach {
                newValue[$0.key] = Array($0.value)
            }
            return newValue
        })

        let visit: [String: Any?] = [
            Visitor.dates: visitorProfile.currentVisit?.dates,
            Visitor.booleans: visitorProfile.currentVisit?.booleans,
            Visitor.arraysOfBooleans: visitorProfile.currentVisit?.arraysOfBooleans,
            Visitor.numbers: visitorProfile.currentVisit?.numbers,
            Visitor.arraysOfNumbers: visitorProfile.currentVisit?.arraysOfNumbers,
            Visitor.tallies: visitorProfile.currentVisit?.tallies,
            Visitor.strings: visitorProfile.currentVisit?.strings,
            Visitor.arraysOfStrings: visitorProfile.currentVisit?.arraysOfStrings,
            Visitor.setsOfStrings: currentVisitArraySetOfStrings
        ]
        let visitor: [String: Any?] = [
            Visitor.audiences: visitorProfile.audiences,
            Visitor.badges: visitorProfile.badges,
            Visitor.dates: visitorProfile.dates,
            Visitor.booleans: visitorProfile.booleans,
            Visitor.arraysOfBooleans: visitorProfile.arraysOfBooleans,
            Visitor.numbers: visitorProfile.numbers,
            Visitor.arraysOfNumbers: visitorProfile.arraysOfNumbers,
            Visitor.tallies: visitorProfile.tallies,
            Visitor.strings: visitorProfile.strings,
            Visitor.arraysOfStrings: visitorProfile.arraysOfStrings,
            // Sets cannot be serialized to JSON, so convert to array first
            Visitor.setsOfStrings: arraySetOfStrings,
            Visitor.currentVisit: visit.compactMapValues { $0 }
        ]
        return visitor.compactMapValues({$0})
    }
    
}
