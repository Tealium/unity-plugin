
NSString * TEALStringFromCString (const char* string) {
    return [NSString stringWithCString:string
                              encoding:NSUTF8StringEncoding];
}

#import <TealiumLibrary/Tealium.h>
#import <Foundation/NSJSONSerialization.h>

extern "C" {
    void Tealium_Initialize(const char* accountName,
                            const char* profileName,
                            const char* environmentName,
                            int options) {
        
        [Tealium initSharedInstance:TEALStringFromCString(accountName)
                            profile:TEALStringFromCString(profileName)
                             target:TEALStringFromCString(environmentName)
                            options:options];
        
        
    }
    
    static NSMutableDictionary *_tealiumStagedDispatch = nil;
    
    void Tealium_TrackPrepare(int capacity) {
        _tealiumStagedDispatch = [NSMutableDictionary dictionaryWithCapacity: capacity];
    }
    
    void Tealium_TrackSet(const char* key,
                          const char* value) {
        if(_tealiumStagedDispatch) {
            [_tealiumStagedDispatch setObject: TEALStringFromCString(value)
                                       forKey: TEALStringFromCString(key)];
        } else {
            NSLog(@"Tealium_TrackSet(const char*, const char*) called before Tealium_TrackPrepare(int)");
        }
    }
    
    void Tealium_TrackSend(const char* eventType) {
        
        if(_tealiumStagedDispatch) {
            
            NSString *callType = TEALStringFromCString(eventType);
            NSLog(@"%s callType: %@", __FUNCTION__, callType);
            
            [Tealium trackCallType:callType
                        customData:_tealiumStagedDispatch
                            object:nil];
            _tealiumStagedDispatch = nil;
        } else {
            NSLog(@"Tealium_TrackSend(const char*) called before Tealium_TrackPrepare(int)");
        }
    }
}