
#import "Tealium.h"
#import "TealiumConstants.h"
#import <Foundation/Foundation.h>
#import <UIKit/UIDevice.h>

#pragma mark - TEALIUM iQ Settings: Account / Profile / Target
#define TEALIUM_ACCOUNT_NAME     @"tealiummobile"
#define TEALIUM_PROFILE_NAME     @"demo"
#define TEALIUM_ENVIRONMENT_NAME @"dev"

#pragma mark - ARC Helpers

#if __has_feature(objc_arc)

#define TEAL_BRIDGE __bridge
#define TEAL_BRIDGE_RETAINED __bridge_retained
#define TEAL_BRIDGE_TRANSFER __bridge_transfer

#else

#define TEAL_BRIDGE
#define TEAL_BRIDGE_RETAINED
#define TEAL_BRIDGE_TRANSFER

#endif

#pragma mark - String Helplers

NSString * TEALStringFromCString (const char* string) {
    return [NSString stringWithCString:string
                              encoding:NSUTF8StringEncoding];
}



#pragma mark - Tealium iOS Bridge

extern "C" {
    
    void Tealium_InitializeIfNeeded() {
        
        static dispatch_once_t onceToken = 0;
        
        dispatch_once(&onceToken, ^{

            NSUInteger options      = TLDisplayVerboseLogs;
            NSString *platform      = @"ios_unity";
            NSString *systemVersion = [[UIDevice currentDevice] systemVersion];
            
            NSTimeInterval timestamp    = [[NSDate date] timeIntervalSince1970];
            NSString *timestampString   = [@(timestamp) stringValue];

            NSString *overrideURL = [NSString stringWithFormat:@"https://tags.tiqcdn.com/utag/%@/%@/%@/mobile.html?library_version=%@&timestamp=%@&os_version=%@&platform=%@",
                                     TEALIUM_ACCOUNT_NAME,
                                     TEALIUM_PROFILE_NAME,
                                     TEALIUM_ENVIRONMENT_NAME,
                                     TealiumLibraryVersion,
                                     timestampString,
                                     systemVersion,
                                     platform];
            
            [Tealium initSharedInstance:TEALIUM_ACCOUNT_NAME
                                profile:TEALIUM_PROFILE_NAME
                                 target:TEALIUM_ENVIRONMENT_NAME
                                options:(TealiumOptions)options
                       globalCustomData:@{TealiumDSK_OverrideUrl:overrideURL}];
            
        });
    }
    
    void *Tealium_EventCreate() {
        return (TEAL_BRIDGE_RETAINED void *)[NSMutableDictionary new];
    }
    
    void Tealium_EventAddPair(void *event,
                              const char* cKey,
                              const char* cValue) {
        if (event) {
            NSMutableDictionary *data = (TEAL_BRIDGE NSMutableDictionary *)event;
            
            NSString *key   = TEALStringFromCString(cKey);
            NSString *value = TEALStringFromCString(cValue);
            
            data[key] = value;
        }
    }
    
    void Tealium_TrackEvent(void *event,
                            const char* eventType) {
        
        Tealium_InitializeIfNeeded();
        
        if (event) {
            
            NSString *callType = TEALStringFromCString(eventType);
            
            NSMutableDictionary *data = (TEAL_BRIDGE_TRANSFER NSMutableDictionary *)event;
            
            [Tealium trackCallType:callType
                        customData:data
                            object:nil];
            
        } else {
            NSLog(@"Tealium_TrackEvent(void *event, const eventType*) called without an event");
        }
    }
}