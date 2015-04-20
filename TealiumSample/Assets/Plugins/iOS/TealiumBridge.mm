
#import <TealiumLibrary/Tealium.h>
#import <Foundation/Foundation.h>

#pragma mark - ARC Helpers

#if __has_feature(objc_arc)

#define TEAL_BRIDGE_RETAINED __bridge_retained
#define TEAL_BRIDGE_TRANSFER __bridge_transfer

#else

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

    static BOOL _tealiumIsInitialized = NO;
    
    void Tealium_InitializeIfNeeded() {
        
        if (_tealiumIsInitialized) {
            return;
        }
        [Tealium initSharedInstance:@"tealiummobile"
                            profile:@"demo"
                             target:@"dev"
                            options:TLDisableHTTPS|TLDisplayVerboseLogs];
        
        _tealiumIsInitialized = YES;
    }

    void *Tealium_EventCreate() {
        return (TEAL_BRIDGE_RETAINED void *)[NSMutableDictionary new];
    }
    
    void Tealium_EventAddPair(void *event,
                              const char* cKey,
                              const char* cValue) {
        if (event) {
            NSMutableDictionary *data = (NSMutableDictionary *)event;

            NSString *key   = TEALStringFromCString(cKey);
            NSString *value = TEALStringFromCString(cValue);

            data[key] = value;
        }
    }
    
    void Tealium_TrackEvent(void *event,
                            const char* eventType) {

        Tealium_InitializeIfNeeded();
        
        if(event) {
            
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