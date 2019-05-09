
#import <TealiumIOS/Tealium.h>
#import <TealiumIOS/TEALDispatch.h>
#import <Foundation/Foundation.h>
#import <UIKit/UIDevice.h>

#pragma mark - TEALIUM iQ Settings: Account / Profile / Target
#define TEALIUM_INSTANCE_NAME    @"tealium_main"
#define TEALIUM_ACCOUNT_NAME     @"tealiummobile"
#define TEALIUM_PROFILE_NAME     @"demo"
#define TEALIUM_ENVIRONMENT_NAME @"dev"
#define TEALIUM_DATA_SOURCE      @""

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

TEALDispatchType dispatchTypeFromString (NSString* string) {
    // Bridge code only supports View/Link events
    // We'll default to Link event types.
    if ([string isEqualToString:@"view"]) {
        return TEALDispatchTypeView;
    }
    return TEALDispatchTypeActivity;
}


#pragma mark - Tealium iOS Bridge

extern "C" {
    
    void Tealium_InitializeIfNeeded() {
        
        static dispatch_once_t onceToken = 0;
        
        dispatch_once(&onceToken, ^{

            TEALConfiguration *config = [TEALConfiguration configurationWithAccount:TEALIUM_ACCOUNT_NAME            
                                                                         profile:TEALIUM_PROFILE_NAME
                                                                    environment:TEALIUM_ENVIRONMENT_NAME
                                                                     datasource:TEALIUM_DATA_SOURCE];
            
            [Tealium newInstanceForKey:TEALIUM_INSTANCE_NAME
                          configuration:config];
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
                            const char* eventType,
                            const char* eventName) {
        
        Tealium_InitializeIfNeeded();
        
        if (event) {
            
            NSString *callType = TEALStringFromCString(eventType);
            NSString *eventTitle = TEALStringFromCString(eventName);
            
            NSMutableDictionary *data = (TEAL_BRIDGE_TRANSFER NSMutableDictionary *)event;
            
            Tealium *instance = [Tealium instanceForKey:TEALIUM_INSTANCE_NAME];
            [instance trackType:dispatchTypeFromString(callType)
                          title:eventTitle
                    dataSources:data completion:nil];

        } else {
            NSLog(@"Tealium_TrackEvent(void *event, const eventType*, const eventName*) called without an event");
        }
    }
}
