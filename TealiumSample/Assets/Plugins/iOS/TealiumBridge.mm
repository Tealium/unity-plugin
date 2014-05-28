NSString* CreateNSString (const char* string, NSString *fallback) {
	if (string) {
		return [NSString stringWithUTF8String: string];
	} else {
		return fallback;
	}
}

NSString* CreateNSString (const char* string) {
    return CreateNSString(string, @"");
}

#import <TealiumLibrary/Tealium.h>
#import <Foundation/NSJSONSerialization.h>

extern "C" {
	void _TealiumInitialize(const char* accountName, const char* profileName, const char* environmentName, int options) {
        [Tealium initSharedInstance:CreateNSString(accountName)
                            profile:CreateNSString(profileName)
                             target:CreateNSString(environmentName)
                            options:options];
        
	}
	
	static NSMutableDictionary *newDispatch = nil;
	
	void _TealiumTrackPrepare(int capacity) {
		newDispatch = [NSMutableDictionary dictionaryWithCapacity: capacity];
	}
	
	void _TealiumTrackSet(const char* key, const char* value) {
		if(newDispatch) {
			[newDispatch setObject: CreateNSString(value) 
							forKey: CreateNSString(key)];
		} else {
			NSLog(@"_TealiumTrackSet(const char*, const char*) called before _TealiumTrackPrepare(int)");
		}
	}
	
	void _TealiumTrackSend(const char* eventType) {
		if(newDispatch) {
	        [[Tealium sharedInstance] track: nil
	                             customData: newDispatch
	                                     as: CreateNSString(eventType)];
			newDispatch = nil;
		} else {
			NSLog(@"_TealiumTrackSend(const char*) called before _TealiumTrackPrepare(int)");
		}
	}
}