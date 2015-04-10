
NSString * TEALStringFromCString (const char* string) {
    return [NSString stringWithCString:string
                              encoding:NSUTF8StringEncoding];
}

#import <TealiumLibrary/Tealium.h>
#import <Foundation/NSJSONSerialization.h>

extern "C" {
    void _TealiumInitialize(const char* accountName, const char* profileName, const char* environmentName, int options) {
        [Tealium initSharedInstance:TEALStringFromCString(accountName)
                            profile:TEALStringFromCString(profileName)
                             target:TEALStringFromCString(environmentName)
                            options:options];
        
        
    }
    
    static NSMutableDictionary *newDispatch = nil;
    
    void _TealiumTrackPrepare(int capacity) {
        newDispatch = [NSMutableDictionary dictionaryWithCapacity: capacity];
    }
    
    void _TealiumTrackSet(const char* key, const char* value) {
        if(newDispatch) {
            [newDispatch setObject: TEALStringFromCString(value)
                            forKey: TEALStringFromCString(key)];
        } else {
            NSLog(@"_TealiumTrackSet(const char*, const char*) called before _TealiumTrackPrepare(int)");
        }
    }
    
    void _TealiumTrackSend(const char* eventType) {
        if(newDispatch) {
            
            [Tealium trackCallType:TEALStringFromCString(eventType)
                        customData:newDispatch
                            object:nil];
            newDispatch = nil;
        } else {
            NSLog(@"_TealiumTrackSend(const char*) called before _TealiumTrackPrepare(int)");
        }
    }
}