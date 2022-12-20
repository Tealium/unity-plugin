#import <Foundation/Foundation.h>
#include "UnityFramework/UnityFramework-Swift.h"
#import "TealiumUnityDelegateBridge.h"


#define TEAL_BRIDGE __bridge
#define TEAL_BRIDGE_RETAINED __bridge_retained
#define TEAL_BRIDGE_TRANSFER __bridge_transfer

#pragma mark - String Helplers

NSString * TEALStringFromCString (const char* string) {
    return [NSString stringWithCString:string
                              encoding:NSUTF8StringEncoding];
}

char* TEALCStringToString(const NSString* nsString)
{
    if (nsString == NULL)
        return NULL;

    const char* nsStringUtf8 = [nsString UTF8String];
    char* cString = (char*)malloc(strlen(nsStringUtf8) + 1);
    strcpy(cString, nsStringUtf8);

    return cString;
}

#pragma mark - Delegation

InitializeDelegateCallbackFunction initializeDelegate = NULL;
TrackDataDelegateCallbackFunction trackDataDelegate = NULL;
RemoteCommandDelegateCallbackFunction remoteCommandDelegate = NULL;
VisitorServiceDelegateCallbackFunction visitorServiceDelegate = NULL;
VisitorIdDelegateCallbackFunction visitorIdDelegate = NULL;
ConsentExpiryDelegateCallbackFunction consentExpiryDelegate = NULL;

@interface TealiumUnityDelegateBridge: NSObject<
    TealiumUnityInitializeDelegate,
    TealiumUnityTrackDataDeletage,
    TealiumUnityRemoteCommandDelegate,
    TealiumUnityVisitorServiceDelegate, 
    TealiumUnityVisitorIdDelegate,
    TealiumConsentExpiryDelegate>
@end

static TealiumUnityDelegateBridge *__initalizeDelegate = nil;
static TealiumUnityDelegateBridge *__trackDataDelegate = nil;
static TealiumUnityDelegateBridge *__remoteCommandDelegate = nil;
static TealiumUnityDelegateBridge *__visitorServiceDelegate = nil;
static TealiumUnityDelegateBridge *__visitorIdDelegate = nil;
static TealiumUnityDelegateBridge *__consentExpiryDelegate = nil;

@implementation TealiumUnityDelegateBridge

-(void)didInitialize:(bool)success {
    if (initializeDelegate != NULL) {
        initializeDelegate(success);
     }
}

-(void)didReceiveTrackDataWithData:(NSString* _Nullable)data {
    char* cTrackData = TEALCStringToString(data);
    if (trackDataDelegate != NULL) {
        trackDataDelegate(cTrackData);
    }
}

-(void)didReceiveRemoteCommandWith:(NSString *)payload {
    char* cPayload = TEALCStringToString(payload);
    if (remoteCommandDelegate != NULL) {
        remoteCommandDelegate(cPayload);
     }
}

-(void)didReceiveVisitorServiceUpdateWith:(NSString *)payload {
    char* cPayload = TEALCStringToString(payload);
    if (visitorServiceDelegate != NULL) {
        visitorServiceDelegate(cPayload);
     }
}

-(void)consentDidExpire {
    if (consentExpiryDelegate != NULL) {
        consentExpiryDelegate();
     }
}

- (void)didReceiveVisitorIdUpdateWith:(NSString * _Nullable)newId {
    char* cNewId = TEALCStringToString(newId);
    if (visitorIdDelegate != NULL) {
        visitorIdDelegate(cNewId);
    }
}

@end

extern "C"
{

    void Tealium_Initialize(const char* cConfig) {
        NSString *config = TEALStringFromCString(cConfig);
        [[TealiumUnityPlugin shared] initialize:config];
    }

    void Tealium_GatherTrackData() {
        [[TealiumUnityPlugin shared] gatherTrackData];
    }

    void Tealium_Terminate() {
        [[TealiumUnityPlugin shared] terminateInstance];
    }

    void Tealium_Track(const char* cDispatch) {
        NSString *dispatch = TEALStringFromCString(cDispatch);
        [[TealiumUnityPlugin shared] track:dispatch];
    }

    void Tealium_AddToDataLayer(const char* cDataString,
                                const char* cExpiry) {
        NSString *data = TEALStringFromCString(cDataString);
        NSString *expiry = TEALStringFromCString(cExpiry);
        [[TealiumUnityPlugin shared] addToDataLayer:data expiry:expiry];
    }

    char* Tealium_GetFromDataLayer(const char* cKey) {
        NSString *key = TEALStringFromCString(cKey);
        NSString *value = [[TealiumUnityPlugin shared] getFromDataLayer:key];
        return TEALCStringToString(value);
    }

    void Tealium_RemoveFromDataLayer(const char* cKeys) {
        NSString *keys = TEALStringFromCString(cKeys);
        [[TealiumUnityPlugin shared] removeFromDataLayer:keys];
    }

    void Tealium_SetConsentStatus(const char* cStatus) {
        NSString *status = TEALStringFromCString(cStatus);
        [[TealiumUnityPlugin shared] setConsentStatus:status];
    }

    char* Tealium_GetConsentStatus() {
        NSString *status = [[TealiumUnityPlugin shared] consentStatus];
        return TEALCStringToString(status);
    }

    void Tealium_SetConsentCategories(const char* cCategories) {
        NSString *categories = TEALStringFromCString(cCategories);
        [[TealiumUnityPlugin shared] setConsentCategories:categories];
    }

    char* Tealium_GetConsentCategories() {
        NSString *categories = [[TealiumUnityPlugin shared] consentCategories];
        return TEALCStringToString(categories);
    }

    void Tealium_JoinTrace(const char* cId) {
        NSString *traceId = TEALStringFromCString(cId);
        [[TealiumUnityPlugin shared] joinTrace:traceId];
    }

    void Tealium_LeaveTrace() {
        [[TealiumUnityPlugin shared] leaveTrace];
    }

    char* Tealium_GetVisitorId() {
        NSString *visitorId = [[TealiumUnityPlugin shared] visitorId];
        return TEALCStringToString(visitorId);
    }

    void Tealium_ResetVisitorId() {
        [[TealiumUnityPlugin shared] resetVisitorId];
    }

    void Tealium_ClearStoredVisitorIds() {
        [[TealiumUnityPlugin shared] clearStoredVisitorIds];
    }

    void Tealium_AddRemoteCommand(const char* cId) {
        NSString *commandId = TEALStringFromCString(cId);
        [[TealiumUnityPlugin shared] addRemoteCommand:commandId];
    }

    void Tealium_RemoveRemoteCommand(const char* cId) {
        NSString *commandId = TEALStringFromCString(cId);
        [[TealiumUnityPlugin shared] removeRemoteCommand:commandId];
    }

    void Tealium_SetInitializeDelegate(InitializeDelegateCallbackFunction callback) {
        if (!__initalizeDelegate) {
            __initalizeDelegate = [[TealiumUnityDelegateBridge alloc] init];
        }
        [TealiumUnityPlugin shared].initializeDelegate = __initalizeDelegate;
        
        initializeDelegate = callback;
    }

    void Tealium_SetTrackDataDelegate(TrackDataDelegateCallbackFunction callback) {
        if (!__trackDataDelegate) {
            __trackDataDelegate = [[TealiumUnityDelegateBridge alloc] init];
        }
        [TealiumUnityPlugin shared].trackDataDelegate = __trackDataDelegate;
        trackDataDelegate = callback;
    }

    void Tealium_SetRemoteCommandDelegate(RemoteCommandDelegateCallbackFunction callback) {
        if (!__remoteCommandDelegate) {
        __remoteCommandDelegate = [[TealiumUnityDelegateBridge alloc] init];
        }
        [TealiumUnityPlugin shared].remoteCommandDelegate = __remoteCommandDelegate;
        
        remoteCommandDelegate = callback;
    }

    void Tealium_SetVisitorServiceDelegate(VisitorServiceDelegateCallbackFunction callback) {
        if (!__visitorServiceDelegate) {
        __visitorServiceDelegate = [[TealiumUnityDelegateBridge alloc] init];
        }
        [TealiumUnityPlugin shared].visitorServiceDelegate = __visitorServiceDelegate;
        
        visitorServiceDelegate = callback;
    }

    void Tealium_SetVisitorIdDelegate(VisitorIdDelegateCallbackFunction callback) {
        if (!__visitorIdDelegate) {
            __visitorIdDelegate = [[TealiumUnityDelegateBridge alloc] init];
        }
        [TealiumUnityPlugin shared].visitorIdDelegate = __visitorIdDelegate;
        visitorIdDelegate = callback;
    }

    void Tealium_SetConsentExpiryDelegate(ConsentExpiryDelegateCallbackFunction callback) {
        if (!__consentExpiryDelegate) {
        __consentExpiryDelegate = [[TealiumUnityDelegateBridge alloc] init];
        }
        [TealiumUnityPlugin shared].consentExpiryDelegate = __consentExpiryDelegate;
        
        consentExpiryDelegate = callback;
    }

}
