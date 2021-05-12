#ifdef __cplusplus
extern "C" {
#endif
 
 typedef void (*InitializeDelegateCallbackFunction)(bool success);
 typedef void (*RemoteCommandDelegateCallbackFunction)(char* cPayload);
 typedef void (*VisitorServiceDelegateCallbackFunction)(char* cPayload);
 typedef void (*ConsentExpiryDelegateCallbackFunction)();
 
 void Tealium_SetInitializeDelegate(InitializeDelegateCallbackFunction callback);
 void Tealium_SetRemoteCommandDelegate(RemoteCommandDelegateCallbackFunction callback);
 void Tealium_SetVisitorServiceDelegate(VisitorServiceDelegateCallbackFunction callback);
 void Tealium_SetConsentExpiryDelegate(ConsentExpiryDelegateCallbackFunction callback);
 
 
#ifdef __cplusplus
}
#endif
