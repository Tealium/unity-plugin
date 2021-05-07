#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>
#include <stdint.h>


struct VirtActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename T1>
struct VirtActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
struct GenericVirtActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename T1>
struct GenericVirtActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename T1, typename T2>
struct InterfaceActionInvoker2
{
	typedef void (*Action)(void*, T1, T2, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};
struct InterfaceActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename T1>
struct InterfaceActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename R, typename T1>
struct InterfaceFuncInvoker1
{
	typedef R (*Func)(void*, T1, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename R>
struct InterfaceFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};
struct GenericInterfaceActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename T1>
struct GenericInterfaceActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};

// System.Action`1<System.Collections.Generic.Dictionary`2<System.String,System.Object>>
struct Action_1_t6B2EAA2D3491CBA6FEF1ECDF624EEF00DFD194C1;
// System.Action`1<System.Boolean>
struct Action_1_tCE2D770918A65CAD277C08C4E8C05385EA267E83;
// System.Action`1<System.Object>
struct Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC;
// System.Converter`2<TealiumCommon.Collectors,System.Object>
struct Converter_2_t4904EBE978ED3FDB1D5A8D3277DE5FBAF2C7633C;
// System.Converter`2<TealiumCommon.Collectors,System.String>
struct Converter_2_t8966C243E6818DA305580ED799C4458A967FBC4B;
// System.Converter`2<TealiumCommon.ConsentCategories,System.Object>
struct Converter_2_t1B68F918E07BCC47A334E94FFE61DFFA469713B0;
// System.Converter`2<TealiumCommon.ConsentCategories,System.String>
struct Converter_2_t05F0413FDB211EFC6EFA05D8F8F2EF8FC9265BCB;
// System.Converter`2<TealiumCommon.Dispatchers,System.Object>
struct Converter_2_t44467F77B635A9D0EA09AA880C744A08DE40E457;
// System.Converter`2<TealiumCommon.Dispatchers,System.String>
struct Converter_2_t8DCD435D80605558FF0393EA8820ECC291B6130D;
// System.Converter`2<System.Object,TealiumCommon.ConsentCategories>
struct Converter_2_tC7F0570E3911442CECD0F0CFD79D99EA6DCCC4E0;
// System.Converter`2<System.String,TealiumCommon.ConsentCategories>
struct Converter_2_tF015A85C226F06C29481EF50AC5392D4975A7B7D;
// System.Collections.Generic.Dictionary`2<System.Object,System.Object>
struct Dictionary_2_tBD1E3221EBD04CEBDA49B84779912E91F56B958D;
// System.Collections.Generic.Dictionary`2<System.String,System.Action`1<System.Collections.Generic.Dictionary`2<System.String,System.Object>>>
struct Dictionary_2_tA582BF436674B8CBA45DA2033E1A98F298DBADA9;
// System.Collections.Generic.Dictionary`2<System.String,System.Object>
struct Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399;
// System.Func`2<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>,System.Object>
struct Func_2_t10CDF2C6D18EB51CBA3E607199613B198E2CFDFD;
// System.Func`2<System.Collections.Generic.KeyValuePair`2<System.String,System.Object>,System.Object>
struct Func_2_t04E847CA06FFEF3C03EF2513C3B1F9F57A39D797;
// System.Func`2<System.Collections.Generic.KeyValuePair`2<System.String,System.Object>,System.String>
struct Func_2_t1CA29703D8E4788617FC1EC9FA62DEBEE1E2CF3A;
// System.Func`2<System.Object,System.Object>
struct Func_2_tFF5BB8F40A35B1BEA00D4EBBC6CBE7184A584436;
// System.Collections.Generic.IDictionary`2<System.String,System.Object>
struct IDictionary_2_tED3FAE588A6FD3ED0A4589C52122AB8F53D8A3B8;
// System.Collections.Generic.IEnumerable`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>
struct IEnumerable_1_t22A35158F9E40077A7147A082319C0D1DFFBE2FD;
// System.Collections.Generic.IEnumerable`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Object>>
struct IEnumerable_1_t8ACA6B0DE7FFF63CD5FC28E90063271CA8B5DA3D;
// System.Collections.Generic.IEnumerable`1<System.Object>
struct IEnumerable_1_t52B1AC8D9E5E1ED28DF6C46A37C9A1B00B394F9D;
// System.Collections.Generic.IEnumerable`1<System.String>
struct IEnumerable_1_tBD60400523D840591A17E4CBBACC79397F68FAA2;
// System.Collections.Generic.IEqualityComparer`1<System.String>
struct IEqualityComparer_1_tE6A65C5E45E33FD7D9849FD0914DE3AD32B68050;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.String,System.Action`1<System.Collections.Generic.Dictionary`2<System.String,System.Object>>>
struct KeyCollection_tD59B820F4A215CCE6A29D8977A7A1D6C8DFF7DDC;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.String,System.Object>
struct KeyCollection_t0043475CBB02FD67894529F3CAA818080A2F7A17;
// System.Collections.Generic.List`1<TealiumCommon.Collectors>
struct List_1_t1AF4DE87B3698887C7A6973FA2CF366D49D00A41;
// System.Collections.Generic.List`1<TealiumCommon.ConsentCategories>
struct List_1_tB719F9AEA1042BBCF17CC50DC1881550E74D3695;
// System.Collections.Generic.List`1<TealiumCommon.Dispatchers>
struct List_1_t5140BA5F1B10A238CE781B1DC4039B4AFCE4E240;
// System.Collections.Generic.List`1<Newtonsoft.Json.Linq.JToken>
struct List_1_t927A2894CCD5A588CF02AE69AF208A395DF3ED3A;
// System.Collections.Generic.List`1<System.Object>
struct List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5;
// System.Collections.Generic.List`1<System.String>
struct List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.String,System.Action`1<System.Collections.Generic.Dictionary`2<System.String,System.Object>>>
struct ValueCollection_t365FBAE5FF5518FEF95D1877B26A1C5D1FFAEA9F;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.String,System.Object>
struct ValueCollection_tB942A1033B750DCF04FE948413982D120FC69A4E;
// System.Collections.Generic.Dictionary`2/Entry<System.String,System.Action`1<System.Collections.Generic.Dictionary`2<System.String,System.Object>>>[]
struct EntryU5BU5D_tAA36B6C4649BA139D7C515B8CFAD1D1B43B68353;
// System.Collections.Generic.Dictionary`2/Entry<System.String,System.Object>[]
struct EntryU5BU5D_tDCA1A62E50C5B5A40FD6F44107088AF42F5671D2;
// System.Byte[]
struct ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726;
// System.Char[]
struct CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34;
// TealiumCommon.Collectors[]
struct CollectorsU5BU5D_t91C0ABF7DDEFE20BA6EA64ACE23CDDFB0EEA8CBD;
// TealiumCommon.ConsentCategories[]
struct ConsentCategoriesU5BU5D_t265B0D8A9543DAF19045CA3CB31FC70AA48B16A8;
// System.Delegate[]
struct DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8;
// TealiumCommon.Dispatchers[]
struct DispatchersU5BU5D_t31B18D2DAEC57A90657E6693909E4B30675BD329;
// System.Int32[]
struct Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32;
// Newtonsoft.Json.Linq.JTokenType[]
struct JTokenTypeU5BU5D_t43BA13324F79115627F4D68923A78277A1049E53;
// System.Object[]
struct ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE;
// System.String[]
struct StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A;
// System.Type[]
struct TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755;
// System.Action
struct Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6;
// UnityEngine.AndroidJavaClass
struct AndroidJavaClass_t52E934B16476D72AA6E4B248F989F2F825EB62D4;
// UnityEngine.AndroidJavaObject
struct AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E;
// System.AsyncCallback
struct AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA;
// System.Attribute
struct Attribute_t037CA9D9F3B742C063DB364D2EEBBF9FC5772C71;
// System.Reflection.Binder
struct Binder_t2BEE27FD84737D1E79BC47FD67F6D3DD2F2DDA30;
// TealiumCommon.ConsentExpiry
struct ConsentExpiry_tF0E363E167F8B963812764554538F6BD7ABF9BC5;
// System.Delegate
struct Delegate_t;
// System.DelegateData
struct DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288;
// Microsoft.CodeAnalysis.EmbeddedAttribute
struct EmbeddedAttribute_t965A2B907C497043C4CEECCFA70B2A0C4EECC41D;
// UnityEngine.GameObject
struct GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319;
// UnityEngine.GlobalJavaObjectRef
struct GlobalJavaObjectRef_t04A7D04EB0317C286F089E4DB4444EC4F2D78289;
// System.IAsyncResult
struct IAsyncResult_tC9F97BF36FCF122D29D3101D80642278297BF370;
// System.Runtime.CompilerServices.IsReadOnlyAttribute
struct IsReadOnlyAttribute_tCB7D9361CFA9DCFC070186FA6895154B90B23888;
// Newtonsoft.Json.Linq.JContainer
struct JContainer_t3D0022FE4C9B2957A6612935AE890E97E371F19B;
// Newtonsoft.Json.Linq.JPropertyKeyedCollection
struct JPropertyKeyedCollection_t6A2B68E3332E7964E0E7CC57B6A06FE4895381E2;
// Newtonsoft.Json.Linq.JToken
struct JToken_tAB8CCFD034E5837FFBBDA62C92FC28F49A7C525E;
// System.ComponentModel.ListChangedEventHandler
struct ListChangedEventHandler_t02874ED3C8355742E3E62AED85A53F3140506B8C;
// System.Reflection.MemberFilter
struct MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A;
// System.Collections.Specialized.NotifyCollectionChangedEventHandler
struct NotifyCollectionChangedEventHandler_t737D98299AF810020BC5FC077CC664F46B6D0621;
// System.Runtime.CompilerServices.NullableAttribute
struct NullableAttribute_tB8A251B780438E6488EE0598956824F01072AD63;
// System.Runtime.CompilerServices.NullableContextAttribute
struct NullableContextAttribute_t697570588636776DE204716B19FA439C049BA167;
// UnityEngine.Object
struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A;
// System.ComponentModel.PropertyChangedEventHandler
struct PropertyChangedEventHandler_t094CCD63C952DCD4E1ED794434160679C28A8E99;
// System.ComponentModel.PropertyChangingEventHandler
struct PropertyChangingEventHandler_t5EA6F6EAA933D35C0AAD9D347A3BD53D343E4C22;
// System.String
struct String_t;
// TealiumAndroid
struct TealiumAndroid_t3261BB388DA01765B53016B078B894DB9573A857;
// TealiumCommon.TealiumConfig
struct TealiumConfig_t57F15E74367FE1C2622F3D0395F144F4D505F4B7;
// TealiumCommon.TealiumDispatch
struct TealiumDispatch_tBC7A4951FD4926BB6EFF74865AF1EC9D1C6BAFB9;
// TealiumCommon.TealiumEvent
struct TealiumEvent_t276997051BFCEBF7FAC959F860C9F4C6B34E4023;
// TealiumUnity
struct TealiumUnity_t738197AC1B223138623C62A1C6B1D99485B44484;
// TealiumUnityPlugin
struct TealiumUnityPlugin_t8B3797338182C27740783841F277A92D6D40AC55;
// TealiumCommon.TealiumView
struct TealiumView_tC9D20EFC963EBBF82B70428435F13CE3D6417716;
// TealiumiOS
struct TealiumiOS_t733CCF8E376EBE4BA5D0C61D6D01A4CE824F8BC4;
// System.Type
struct Type_t;
// System.Void
struct Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5;
// TealiumAndroid/<>c
struct U3CU3Ec_t09F86AA9C724B6431311FD4F6B328ECB9D87A170;
// TealiumCommon.TealiumConfig/<>c
struct U3CU3Ec_t36D92B931A0CC3CAB85CB5872E3A3AD4EB480F83;
// TealiumUnityPlugin/<>c
struct U3CU3Ec_t7521AAF4473714E35BDD03C93690F00668C0D29E;
// TealiumiOS/<>c
struct U3CU3Ec_t9D2D486C0C56ED747E3B614EF2F08E5FBD4ACCB4;
// TealiumiOS/ConsentExpiryDelegateMessage
struct ConsentExpiryDelegateMessage_t086235450063F54925F0E78B7BE640C668914E6D;
// TealiumiOS/InitializeDelegateMessage
struct InitializeDelegateMessage_tC95BD6C7C57DC458B247CC4A70D6AF216960A493;
// TealiumiOS/RemoteCommandDelegateMessage
struct RemoteCommandDelegateMessage_t5D69DB6883CD6653EC3E70F18E3C096FD043342D;
// TealiumiOS/VisitorServiceDelegateMessage
struct VisitorServiceDelegateMessage_t6B8D159765A2F10FA86086BFA8BD3F4FFB9DE18B;

IL2CPP_EXTERN_C RuntimeClass* AndroidJavaClass_t52E934B16476D72AA6E4B248F989F2F825EB62D4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ConsentExpiryDelegateMessage_t086235450063F54925F0E78B7BE640C668914E6D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Converter_2_t05F0413FDB211EFC6EFA05D8F8F2EF8FC9265BCB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Converter_2_t8966C243E6818DA305580ED799C4458A967FBC4B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Converter_2_t8DCD435D80605558FF0393EA8820ECC291B6130D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Converter_2_tF015A85C226F06C29481EF50AC5392D4975A7B7D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Dictionary_2_tA582BF436674B8CBA45DA2033E1A98F298DBADA9_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Func_2_t04E847CA06FFEF3C03EF2513C3B1F9F57A39D797_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Func_2_t1CA29703D8E4788617FC1EC9FA62DEBEE1E2CF3A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Func_2_tFF5BB8F40A35B1BEA00D4EBBC6CBE7184A584436_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* InitializeDelegateMessage_tC95BD6C7C57DC458B247CC4A70D6AF216960A493_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* JArray_t9F02428A8EE6460B1AB0CA1FB5D2C9EE7332E7B3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* JObject_t55E456F4BAFC1A97265C571EDE7F421663976807_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* JsonConvert_t046ADD1F0B1F4BD3323ABEE6BA9E41C189BDC21A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* RemoteCommandDelegateMessage_t5D69DB6883CD6653EC3E70F18E3C096FD043342D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* String_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TealiumAndroid_t3261BB388DA01765B53016B078B894DB9573A857_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TealiumEvent_t276997051BFCEBF7FAC959F860C9F4C6B34E4023_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TealiumUnityPlugin_t8B3797338182C27740783841F277A92D6D40AC55_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TealiumUnity_t738197AC1B223138623C62A1C6B1D99485B44484_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TealiumView_tC9D20EFC963EBBF82B70428435F13CE3D6417716_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TealiumiOS_t733CCF8E376EBE4BA5D0C61D6D01A4CE824F8BC4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Type_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec_t09F86AA9C724B6431311FD4F6B328ECB9D87A170_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec_t36D92B931A0CC3CAB85CB5872E3A3AD4EB480F83_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec_t7521AAF4473714E35BDD03C93690F00668C0D29E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec_t9D2D486C0C56ED747E3B614EF2F08E5FBD4ACCB4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* VisitorServiceDelegateMessage_t6B8D159765A2F10FA86086BFA8BD3F4FFB9DE18B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral0533F02BB4D6E446972E566470632374F09D49BD;
IL2CPP_EXTERN_C String_t* _stringLiteral07756FCF72584F7AFE92F5DB492B5516EC1E5F96;
IL2CPP_EXTERN_C String_t* _stringLiteral09FD22DA3CEFEACE96CB263E19361486F432DB29;
IL2CPP_EXTERN_C String_t* _stringLiteral0DDBF00A84B37F0C399BD2AF7C401EAF365F79F0;
IL2CPP_EXTERN_C String_t* _stringLiteral1B7B316294AE787BBC03FFFDB125C80E03A04E70;
IL2CPP_EXTERN_C String_t* _stringLiteral1C510DC0D8DE79B274855931DF7342DC1584FA1F;
IL2CPP_EXTERN_C String_t* _stringLiteral1D987D14D8E0C888F1095B9A3F3E261A95CEACCC;
IL2CPP_EXTERN_C String_t* _stringLiteral1E0254397A24FABC20FE3C8737909AC2BB9DC8F9;
IL2CPP_EXTERN_C String_t* _stringLiteral23114468D04FA2B7A2DA455B545DB914D0A3ED94;
IL2CPP_EXTERN_C String_t* _stringLiteral244940E192616C6FDCE2CD494CC5BE9AA60F5CD8;
IL2CPP_EXTERN_C String_t* _stringLiteral282BFCCDCC88CE32BE4CC3BEF8E0CC3566FD7E4F;
IL2CPP_EXTERN_C String_t* _stringLiteral2C3323E6A37819D4C4AC310608DA4CF7FB13A968;
IL2CPP_EXTERN_C String_t* _stringLiteral2D61DA2B252C0206904680768204D8EAD452A532;
IL2CPP_EXTERN_C String_t* _stringLiteral2D8F1FB9835486A24FDEA4BCF7C897A5291A25FF;
IL2CPP_EXTERN_C String_t* _stringLiteral3753DF735E896BD3C9F2E5D3740D83C85D747CF9;
IL2CPP_EXTERN_C String_t* _stringLiteral386D46E8E03D5EAD3DEAD8B7F9DF16793B2CB9B8;
IL2CPP_EXTERN_C String_t* _stringLiteral42E49EB985DBD525F9131D975D4A1458641A6558;
IL2CPP_EXTERN_C String_t* _stringLiteral4A7B8364EF73661DDA9D7FEF4C8714233932EB28;
IL2CPP_EXTERN_C String_t* _stringLiteral4BBBCE0CA5ECCD4D20BDBB9DF24C687DB5F7A1DE;
IL2CPP_EXTERN_C String_t* _stringLiteral4D613657609485AE586A3379BA0E3FC13C1E1078;
IL2CPP_EXTERN_C String_t* _stringLiteral4E50C8A435ACA2194870053CF1BEAA753D54DC79;
IL2CPP_EXTERN_C String_t* _stringLiteral51921D99887DD5ED233F87333EF648AE91A8BF7C;
IL2CPP_EXTERN_C String_t* _stringLiteral51C6279E31F7483126B79E3000116001A915B690;
IL2CPP_EXTERN_C String_t* _stringLiteral61FEA542FC352C81BCDF0BCCD242066AD9B75CDA;
IL2CPP_EXTERN_C String_t* _stringLiteral6912992FC50D2764B34BA8408AECF2DF5DB8080F;
IL2CPP_EXTERN_C String_t* _stringLiteral6B3DBC6BF6E0409637395E8DC018689E33707401;
IL2CPP_EXTERN_C String_t* _stringLiteral6D7FEF36DD08136CF9F955B6852E48FE2961B65C;
IL2CPP_EXTERN_C String_t* _stringLiteral70CBC502A11BF3CFF17643F18B0AA99AFA4B55F1;
IL2CPP_EXTERN_C String_t* _stringLiteral71F489A9135B6AEF062E927E3AA7854B8C53C11C;
IL2CPP_EXTERN_C String_t* _stringLiteral74F649435800A0F67D0E1CDB9823ADFC792B824F;
IL2CPP_EXTERN_C String_t* _stringLiteral7D144960E57E3EF7E0052B89CD26C2BABBEEF061;
IL2CPP_EXTERN_C String_t* _stringLiteral80B9862F6FD4673A33E49F33829053D1CC06403D;
IL2CPP_EXTERN_C String_t* _stringLiteral8243BA18D267E0E612210F4920079D9700A5DEEF;
IL2CPP_EXTERN_C String_t* _stringLiteral83D75EFE10E61242D8B77D81FC841EF3AF75EF8F;
IL2CPP_EXTERN_C String_t* _stringLiteral85D392ABE7C69C3680F6D252A9C10DA6C7A0CD82;
IL2CPP_EXTERN_C String_t* _stringLiteral8DE0CBA7BF0AAAFA4927500E94B54EAA544A2E0C;
IL2CPP_EXTERN_C String_t* _stringLiteral900D858FE9ABCD2ED2B25CD27110A78ADCC6EC6B;
IL2CPP_EXTERN_C String_t* _stringLiteral9104E82394351D786F4B739689D0B28ACF18A43D;
IL2CPP_EXTERN_C String_t* _stringLiteral9114DD7DD6A3CF73058180EE667FF9F9CE534BB6;
IL2CPP_EXTERN_C String_t* _stringLiteral997B02E0A865F8EDC8D6D7622CBA8EE63AD5126D;
IL2CPP_EXTERN_C String_t* _stringLiteralA17474CA0C600D38D899463D436DB6E0973F01A2;
IL2CPP_EXTERN_C String_t* _stringLiteralA1CF2D9EE7291076F273B2585551F9172E574891;
IL2CPP_EXTERN_C String_t* _stringLiteralA38A73589D1C87B982AF83CCBC174E6D4FD4B5FD;
IL2CPP_EXTERN_C String_t* _stringLiteralA8CDC49139C9F70342D7D90A72F625062B7DD35C;
IL2CPP_EXTERN_C String_t* _stringLiteralAB8D54CA47E48375515466A79C3577E379802A06;
IL2CPP_EXTERN_C String_t* _stringLiteralAC402423BE2BC762F2E1D9275C7D9E0CA088B145;
IL2CPP_EXTERN_C String_t* _stringLiteralAC7CABC19DF3A499E7F4F414D5A99EF246778B9D;
IL2CPP_EXTERN_C String_t* _stringLiteralB721BD1BCAA2A9CAA44D8DAA69E9645567BF5329;
IL2CPP_EXTERN_C String_t* _stringLiteralB8F70E34B8CAFB60E91E803AC048C2A88EBAE345;
IL2CPP_EXTERN_C String_t* _stringLiteralB8FF942E118389A9B5468029ADBFCA8D7512D496;
IL2CPP_EXTERN_C String_t* _stringLiteralBE76852B0423E781981A98A86315BA95199E9317;
IL2CPP_EXTERN_C String_t* _stringLiteralBEDF7EFBD5B4C5954C7D25E58C4880A92B355872;
IL2CPP_EXTERN_C String_t* _stringLiteralC18C9BB6DF0D5C60CE5A5D2D3D6111BEB6F8CCEB;
IL2CPP_EXTERN_C String_t* _stringLiteralC273A7F58AF4687870AD1CBA68D8467700CBCFA1;
IL2CPP_EXTERN_C String_t* _stringLiteralD289A15F06D391673864A3B5CEDBFF42865743C1;
IL2CPP_EXTERN_C String_t* _stringLiteralD3DC035B48B0C6084DB3AD45C1CE1E54DC89BCD0;
IL2CPP_EXTERN_C String_t* _stringLiteralD477056B94946E6F9241554606E82ADC6D20261E;
IL2CPP_EXTERN_C String_t* _stringLiteralD83041E889BDAEB8F029AF50549D1347BD7FC949;
IL2CPP_EXTERN_C String_t* _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
IL2CPP_EXTERN_C String_t* _stringLiteralDC0FBD54AAB0A9BDDAF97372B7B718E106E0D9C7;
IL2CPP_EXTERN_C String_t* _stringLiteralE9665AE49C73D0859A034EB155329FA4C96D5FCC;
IL2CPP_EXTERN_C String_t* _stringLiteralEAA8D9C3445FEBFE3701DDB0406A86D63B80BB2F;
IL2CPP_EXTERN_C String_t* _stringLiteralF79B3927124CE34A31910F4AD953084FA0AD4BB6;
IL2CPP_EXTERN_C String_t* _stringLiteralFA855702F3E0239B3B0D1F427461543C440733A6;
IL2CPP_EXTERN_C String_t* _stringLiteralFB4AE4F77150C3A8E8E4F8B23E734E0C7277B7D9;
IL2CPP_EXTERN_C String_t* _stringLiteralFDA48FFC18BFBB720C787B2DAC79761F03D04C6D;
IL2CPP_EXTERN_C String_t* _stringLiteralFF5DEAF70616D48B7E2803326DF898EFB4D79B55;
IL2CPP_EXTERN_C const RuntimeMethod* Action_1_Invoke_m761F631FCAC3E0A9D38C7F2D6035B687B9FD7BE2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Action_1_Invoke_m95E5C9FC67F7B0BDC3CD5E00AC5D4C8A00C97AC5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AndroidJavaObject_CallStatic_TisBoolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_m08A8ECF220D35069EF5A4A50C2F38E925F0852FB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AndroidJavaObject_CallStatic_TisString_t_m5A20C2CE3D48240700CE5881319C2557947CDC7A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AndroidJavaObject_Call_TisAndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E_mC5ED59BBD9C24EFFD98D8C3819C7E15DFE08F412_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AndroidJavaObject_GetStatic_TisAndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E_mC84C97A7EC20ED712D21107C9FA32E0785021153_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Array_Empty_TisRuntimeObject_m1FBC21243DF3542384C523801E8CA8A97606C747_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Converter_2__ctor_m0C7282FA6A13370BC41DECB7F55A22758C7E2B99_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Converter_2__ctor_m141352FD3DA11D48649963F9EA218AEFFD0A64BD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Converter_2__ctor_m912E9EE293C82A94F0E88045680627CD01BB8C48_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Converter_2__ctor_mB0A0BDAE8830CC5A9B0328128E1C51944643F609_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_Add_m005F33425CDAEC23027518EC759F8F439AF34F3F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_GetEnumerator_m2081C22E67B979AFF0710DA64B3BFE895BAE1635_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_Remove_m0D984C0C6C1ABE13FBFD0300F1BE325115995A15_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2__ctor_mC220EB1A68D502946EF9BE5A73F1339CC1BF7B46_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2__ctor_mCD0C2F0325B7677B9BC340A60AA3FB9C7A88FF63_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_get_Item_m4360B651F20BDDD67A015E3975308D36D156FE06_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_get_Item_m88AA4580D695AEA212B0DF17D8B55C98CF3B624D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_set_Item_m4A823B95FF63222C99CEB2CEA5D2B9C72159CB22_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_set_Item_mD86FD5EED3CEB42690DDFEB80B2494A5A48A3EB9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerable_Select_TisRuntimeObject_TisRuntimeObject_mC0F1DA980E0433D70A6CF9DD7CD1942BB7FE87C0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerable_ToDictionary_TisKeyValuePair_2_tD6E57B7EAC6134DCA97F39E5E598EB43B44A5EAE_TisString_t_TisRuntimeObject_mFBEE06B96A0FECCFE5342B372E6808E08B4CE4EF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerable_ToList_TisRuntimeObject_mA4E485F973C6DF746B8DB54CA6F54192D4231CA2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerable_ToList_TisString_t_m6685B37A12E077BE26D988D9881A6EA4BF3AE295_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_Dispose_m7D3C5AB9967DFDFE269DC54DF367D0B21C59E356_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_m27DDAE22558733AB59D955136A7EF5AF05B1F4CE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_m5D01A6607C2199E7A7B5856E49119C26FE5327BB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Func_2__ctor_m2943627DBB46AAA049B4566A35BDF2E91734CCCF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Func_2__ctor_m31D090A081982F561CFBE47CEB0C75636F91D0BC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Func_2__ctor_mA7F3C5A0612B84E910DE92E77BA95101FD68EEDB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_AddComponent_TisTealiumAndroid_t3261BB388DA01765B53016B078B894DB9573A857_mAF82A6D740899969FBC664219EB54FD63C233643_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* JToken_ToObject_TisIDictionary_2_tED3FAE588A6FD3ED0A4589C52122AB8F53D8A3B8_mF33354572D8E7938287DF92385EC71FF35E9CBB3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* JToken_ToObject_TisList_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5_mD3541B7931BF12E8B7C5996D78FCFBD30E7A2272_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* JsonConvert_DeserializeObject_TisDictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399_m9C72B9A7CA671CB0DAE02CAE6B37E464873D87E6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* KeyValuePair_2_get_Key_mC43FCB322E586364D4402E639DB247702C4A6E6F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* KeyValuePair_2_get_Value_m9506505CADCD1ED074BD28FB1B26D48BBC7A9FA7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_ConvertAll_TisConsentCategories_t7F1FDE7995E2ABB2BEF4A4DC381AE8DEE9B8429F_m8905DF3C269C817A2860FF5B6FAA60411982A49E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_ConvertAll_TisString_t_m993F7A5FE3A66D5750E4815B6DD41DE547D8535F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_ConvertAll_TisString_t_m9B58AA35146B6E87DA967CEEB7AD8AF0B526D42E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_ConvertAll_TisString_t_mFB120017498D56D7A706F6A1EB9E05F740ACB7BC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Nullable_1_GetValueOrDefault_m86DD280389373DC6112C612AF57005073D7829CA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Nullable_1_GetValueOrDefault_mB6AF2E00017652A7A460E421622828E15FB4F437_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Nullable_1_get_HasValue_m5C68BCA359253ED7BAF57AEC0411DC539E1D52B5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Nullable_1_get_HasValue_m8043104DA135F5C852621E53CEB0FD85ACD0DC68_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TealiumUnityPlugin_ToCollections_m5E2B1D64A02C34EE7ADBCCCB5B6C3040A2CC3C75_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TealiumiOS_consentExpirationReceived_m239594694333B253BA54AEA556015ABF9FA87692_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TealiumiOS_initializationResponseReceived_mF10D18463C3B0946F6678F3BFEA2B617C9C99AA0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TealiumiOS_remoteCommandReceived_m0946C4CE24BF4B75C7D0B023C7F02927B7C557B2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TealiumiOS_visitorServiceUpdateReceived_mD5ED91A5C2447F4F238D19197D12ACE013849733_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec_U3CGetConsentCategoriesU3Eb__12_0_mB5493B4DB69DFDEDE5D6391E60E81A003D38839B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec_U3CGetConsentCategoriesU3Eb__36_0_mD7CEECA49895BCECBC0709574462646A80ED3BA3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec_U3CSetConsentCategoriesU3Eb__35_0_m02AC32BBBB6B618534F0DD6C6C48ED692462E4E2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec_U3CToCollectionsU3Eb__29_0_m47930E76A8BB5C4199A42255C8C9442AFB6AB660_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec_U3CToCollectionsU3Eb__29_1_m75378B42603DD66A38FA9F1EB8F406B93DBDDD1B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec_U3C_ctorU3Eb__23_0_m45EB64D6EA93C3BDE4D0EFDA90B9B22982B76AE2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec_U3C_ctorU3Eb__23_1_mCD65AD4FE7A3FA13BAA222CEAB1757550EB5B7CA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeType* TealiumEvent_t276997051BFCEBF7FAC959F860C9F4C6B34E4023_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* TealiumView_tC9D20EFC963EBBF82B70428435F13CE3D6417716_0_0_0_var;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;

struct ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726;
struct CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34;
struct DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8;
struct ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE;
struct StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct U3CModuleU3E_t00DDB26693B7BCCD40544DBD546A67E6CCF39740 
{
public:

public:
};


// System.Object


// System.Collections.Generic.Dictionary`2<System.String,System.Action`1<System.Collections.Generic.Dictionary`2<System.String,System.Object>>>
struct Dictionary_2_tA582BF436674B8CBA45DA2033E1A98F298DBADA9  : public RuntimeObject
{
public:
	// System.Int32[] System.Collections.Generic.Dictionary`2::buckets
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::entries
	EntryU5BU5D_tAA36B6C4649BA139D7C515B8CFAD1D1B43B68353* ___entries_1;
	// System.Int32 System.Collections.Generic.Dictionary`2::count
	int32_t ___count_2;
	// System.Int32 System.Collections.Generic.Dictionary`2::version
	int32_t ___version_3;
	// System.Int32 System.Collections.Generic.Dictionary`2::freeList
	int32_t ___freeList_4;
	// System.Int32 System.Collections.Generic.Dictionary`2::freeCount
	int32_t ___freeCount_5;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Generic.Dictionary`2::comparer
	RuntimeObject* ___comparer_6;
	// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::keys
	KeyCollection_tD59B820F4A215CCE6A29D8977A7A1D6C8DFF7DDC * ___keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::values
	ValueCollection_t365FBAE5FF5518FEF95D1877B26A1C5D1FFAEA9F * ___values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject * ____syncRoot_9;

public:
	inline static int32_t get_offset_of_buckets_0() { return static_cast<int32_t>(offsetof(Dictionary_2_tA582BF436674B8CBA45DA2033E1A98F298DBADA9, ___buckets_0)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get_buckets_0() const { return ___buckets_0; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of_buckets_0() { return &___buckets_0; }
	inline void set_buckets_0(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		___buckets_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___buckets_0), (void*)value);
	}

	inline static int32_t get_offset_of_entries_1() { return static_cast<int32_t>(offsetof(Dictionary_2_tA582BF436674B8CBA45DA2033E1A98F298DBADA9, ___entries_1)); }
	inline EntryU5BU5D_tAA36B6C4649BA139D7C515B8CFAD1D1B43B68353* get_entries_1() const { return ___entries_1; }
	inline EntryU5BU5D_tAA36B6C4649BA139D7C515B8CFAD1D1B43B68353** get_address_of_entries_1() { return &___entries_1; }
	inline void set_entries_1(EntryU5BU5D_tAA36B6C4649BA139D7C515B8CFAD1D1B43B68353* value)
	{
		___entries_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___entries_1), (void*)value);
	}

	inline static int32_t get_offset_of_count_2() { return static_cast<int32_t>(offsetof(Dictionary_2_tA582BF436674B8CBA45DA2033E1A98F298DBADA9, ___count_2)); }
	inline int32_t get_count_2() const { return ___count_2; }
	inline int32_t* get_address_of_count_2() { return &___count_2; }
	inline void set_count_2(int32_t value)
	{
		___count_2 = value;
	}

	inline static int32_t get_offset_of_version_3() { return static_cast<int32_t>(offsetof(Dictionary_2_tA582BF436674B8CBA45DA2033E1A98F298DBADA9, ___version_3)); }
	inline int32_t get_version_3() const { return ___version_3; }
	inline int32_t* get_address_of_version_3() { return &___version_3; }
	inline void set_version_3(int32_t value)
	{
		___version_3 = value;
	}

	inline static int32_t get_offset_of_freeList_4() { return static_cast<int32_t>(offsetof(Dictionary_2_tA582BF436674B8CBA45DA2033E1A98F298DBADA9, ___freeList_4)); }
	inline int32_t get_freeList_4() const { return ___freeList_4; }
	inline int32_t* get_address_of_freeList_4() { return &___freeList_4; }
	inline void set_freeList_4(int32_t value)
	{
		___freeList_4 = value;
	}

	inline static int32_t get_offset_of_freeCount_5() { return static_cast<int32_t>(offsetof(Dictionary_2_tA582BF436674B8CBA45DA2033E1A98F298DBADA9, ___freeCount_5)); }
	inline int32_t get_freeCount_5() const { return ___freeCount_5; }
	inline int32_t* get_address_of_freeCount_5() { return &___freeCount_5; }
	inline void set_freeCount_5(int32_t value)
	{
		___freeCount_5 = value;
	}

	inline static int32_t get_offset_of_comparer_6() { return static_cast<int32_t>(offsetof(Dictionary_2_tA582BF436674B8CBA45DA2033E1A98F298DBADA9, ___comparer_6)); }
	inline RuntimeObject* get_comparer_6() const { return ___comparer_6; }
	inline RuntimeObject** get_address_of_comparer_6() { return &___comparer_6; }
	inline void set_comparer_6(RuntimeObject* value)
	{
		___comparer_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___comparer_6), (void*)value);
	}

	inline static int32_t get_offset_of_keys_7() { return static_cast<int32_t>(offsetof(Dictionary_2_tA582BF436674B8CBA45DA2033E1A98F298DBADA9, ___keys_7)); }
	inline KeyCollection_tD59B820F4A215CCE6A29D8977A7A1D6C8DFF7DDC * get_keys_7() const { return ___keys_7; }
	inline KeyCollection_tD59B820F4A215CCE6A29D8977A7A1D6C8DFF7DDC ** get_address_of_keys_7() { return &___keys_7; }
	inline void set_keys_7(KeyCollection_tD59B820F4A215CCE6A29D8977A7A1D6C8DFF7DDC * value)
	{
		___keys_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___keys_7), (void*)value);
	}

	inline static int32_t get_offset_of_values_8() { return static_cast<int32_t>(offsetof(Dictionary_2_tA582BF436674B8CBA45DA2033E1A98F298DBADA9, ___values_8)); }
	inline ValueCollection_t365FBAE5FF5518FEF95D1877B26A1C5D1FFAEA9F * get_values_8() const { return ___values_8; }
	inline ValueCollection_t365FBAE5FF5518FEF95D1877B26A1C5D1FFAEA9F ** get_address_of_values_8() { return &___values_8; }
	inline void set_values_8(ValueCollection_t365FBAE5FF5518FEF95D1877B26A1C5D1FFAEA9F * value)
	{
		___values_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___values_8), (void*)value);
	}

	inline static int32_t get_offset_of__syncRoot_9() { return static_cast<int32_t>(offsetof(Dictionary_2_tA582BF436674B8CBA45DA2033E1A98F298DBADA9, ____syncRoot_9)); }
	inline RuntimeObject * get__syncRoot_9() const { return ____syncRoot_9; }
	inline RuntimeObject ** get_address_of__syncRoot_9() { return &____syncRoot_9; }
	inline void set__syncRoot_9(RuntimeObject * value)
	{
		____syncRoot_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_9), (void*)value);
	}
};


// System.Collections.Generic.Dictionary`2<System.String,System.Object>
struct Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399  : public RuntimeObject
{
public:
	// System.Int32[] System.Collections.Generic.Dictionary`2::buckets
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::entries
	EntryU5BU5D_tDCA1A62E50C5B5A40FD6F44107088AF42F5671D2* ___entries_1;
	// System.Int32 System.Collections.Generic.Dictionary`2::count
	int32_t ___count_2;
	// System.Int32 System.Collections.Generic.Dictionary`2::version
	int32_t ___version_3;
	// System.Int32 System.Collections.Generic.Dictionary`2::freeList
	int32_t ___freeList_4;
	// System.Int32 System.Collections.Generic.Dictionary`2::freeCount
	int32_t ___freeCount_5;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Generic.Dictionary`2::comparer
	RuntimeObject* ___comparer_6;
	// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::keys
	KeyCollection_t0043475CBB02FD67894529F3CAA818080A2F7A17 * ___keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::values
	ValueCollection_tB942A1033B750DCF04FE948413982D120FC69A4E * ___values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject * ____syncRoot_9;

public:
	inline static int32_t get_offset_of_buckets_0() { return static_cast<int32_t>(offsetof(Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399, ___buckets_0)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get_buckets_0() const { return ___buckets_0; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of_buckets_0() { return &___buckets_0; }
	inline void set_buckets_0(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		___buckets_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___buckets_0), (void*)value);
	}

	inline static int32_t get_offset_of_entries_1() { return static_cast<int32_t>(offsetof(Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399, ___entries_1)); }
	inline EntryU5BU5D_tDCA1A62E50C5B5A40FD6F44107088AF42F5671D2* get_entries_1() const { return ___entries_1; }
	inline EntryU5BU5D_tDCA1A62E50C5B5A40FD6F44107088AF42F5671D2** get_address_of_entries_1() { return &___entries_1; }
	inline void set_entries_1(EntryU5BU5D_tDCA1A62E50C5B5A40FD6F44107088AF42F5671D2* value)
	{
		___entries_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___entries_1), (void*)value);
	}

	inline static int32_t get_offset_of_count_2() { return static_cast<int32_t>(offsetof(Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399, ___count_2)); }
	inline int32_t get_count_2() const { return ___count_2; }
	inline int32_t* get_address_of_count_2() { return &___count_2; }
	inline void set_count_2(int32_t value)
	{
		___count_2 = value;
	}

	inline static int32_t get_offset_of_version_3() { return static_cast<int32_t>(offsetof(Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399, ___version_3)); }
	inline int32_t get_version_3() const { return ___version_3; }
	inline int32_t* get_address_of_version_3() { return &___version_3; }
	inline void set_version_3(int32_t value)
	{
		___version_3 = value;
	}

	inline static int32_t get_offset_of_freeList_4() { return static_cast<int32_t>(offsetof(Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399, ___freeList_4)); }
	inline int32_t get_freeList_4() const { return ___freeList_4; }
	inline int32_t* get_address_of_freeList_4() { return &___freeList_4; }
	inline void set_freeList_4(int32_t value)
	{
		___freeList_4 = value;
	}

	inline static int32_t get_offset_of_freeCount_5() { return static_cast<int32_t>(offsetof(Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399, ___freeCount_5)); }
	inline int32_t get_freeCount_5() const { return ___freeCount_5; }
	inline int32_t* get_address_of_freeCount_5() { return &___freeCount_5; }
	inline void set_freeCount_5(int32_t value)
	{
		___freeCount_5 = value;
	}

	inline static int32_t get_offset_of_comparer_6() { return static_cast<int32_t>(offsetof(Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399, ___comparer_6)); }
	inline RuntimeObject* get_comparer_6() const { return ___comparer_6; }
	inline RuntimeObject** get_address_of_comparer_6() { return &___comparer_6; }
	inline void set_comparer_6(RuntimeObject* value)
	{
		___comparer_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___comparer_6), (void*)value);
	}

	inline static int32_t get_offset_of_keys_7() { return static_cast<int32_t>(offsetof(Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399, ___keys_7)); }
	inline KeyCollection_t0043475CBB02FD67894529F3CAA818080A2F7A17 * get_keys_7() const { return ___keys_7; }
	inline KeyCollection_t0043475CBB02FD67894529F3CAA818080A2F7A17 ** get_address_of_keys_7() { return &___keys_7; }
	inline void set_keys_7(KeyCollection_t0043475CBB02FD67894529F3CAA818080A2F7A17 * value)
	{
		___keys_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___keys_7), (void*)value);
	}

	inline static int32_t get_offset_of_values_8() { return static_cast<int32_t>(offsetof(Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399, ___values_8)); }
	inline ValueCollection_tB942A1033B750DCF04FE948413982D120FC69A4E * get_values_8() const { return ___values_8; }
	inline ValueCollection_tB942A1033B750DCF04FE948413982D120FC69A4E ** get_address_of_values_8() { return &___values_8; }
	inline void set_values_8(ValueCollection_tB942A1033B750DCF04FE948413982D120FC69A4E * value)
	{
		___values_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___values_8), (void*)value);
	}

	inline static int32_t get_offset_of__syncRoot_9() { return static_cast<int32_t>(offsetof(Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399, ____syncRoot_9)); }
	inline RuntimeObject * get__syncRoot_9() const { return ____syncRoot_9; }
	inline RuntimeObject ** get_address_of__syncRoot_9() { return &____syncRoot_9; }
	inline void set__syncRoot_9(RuntimeObject * value)
	{
		____syncRoot_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_9), (void*)value);
	}
};


// System.EmptyArray`1<System.Object>
struct EmptyArray_1_tBF73225DFA890366D579424FE8F40073BF9FBAD4  : public RuntimeObject
{
public:

public:
};

struct EmptyArray_1_tBF73225DFA890366D579424FE8F40073BF9FBAD4_StaticFields
{
public:
	// T[] System.EmptyArray`1::Value
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ___Value_0;

public:
	inline static int32_t get_offset_of_Value_0() { return static_cast<int32_t>(offsetof(EmptyArray_1_tBF73225DFA890366D579424FE8F40073BF9FBAD4_StaticFields, ___Value_0)); }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* get_Value_0() const { return ___Value_0; }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE** get_address_of_Value_0() { return &___Value_0; }
	inline void set_Value_0(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* value)
	{
		___Value_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Value_0), (void*)value);
	}
};


// System.Collections.Generic.List`1<TealiumCommon.Collectors>
struct List_1_t1AF4DE87B3698887C7A6973FA2CF366D49D00A41  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	CollectorsU5BU5D_t91C0ABF7DDEFE20BA6EA64ACE23CDDFB0EEA8CBD* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t1AF4DE87B3698887C7A6973FA2CF366D49D00A41, ____items_1)); }
	inline CollectorsU5BU5D_t91C0ABF7DDEFE20BA6EA64ACE23CDDFB0EEA8CBD* get__items_1() const { return ____items_1; }
	inline CollectorsU5BU5D_t91C0ABF7DDEFE20BA6EA64ACE23CDDFB0EEA8CBD** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(CollectorsU5BU5D_t91C0ABF7DDEFE20BA6EA64ACE23CDDFB0EEA8CBD* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t1AF4DE87B3698887C7A6973FA2CF366D49D00A41, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t1AF4DE87B3698887C7A6973FA2CF366D49D00A41, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_t1AF4DE87B3698887C7A6973FA2CF366D49D00A41, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_t1AF4DE87B3698887C7A6973FA2CF366D49D00A41_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	CollectorsU5BU5D_t91C0ABF7DDEFE20BA6EA64ACE23CDDFB0EEA8CBD* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_t1AF4DE87B3698887C7A6973FA2CF366D49D00A41_StaticFields, ____emptyArray_5)); }
	inline CollectorsU5BU5D_t91C0ABF7DDEFE20BA6EA64ACE23CDDFB0EEA8CBD* get__emptyArray_5() const { return ____emptyArray_5; }
	inline CollectorsU5BU5D_t91C0ABF7DDEFE20BA6EA64ACE23CDDFB0EEA8CBD** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(CollectorsU5BU5D_t91C0ABF7DDEFE20BA6EA64ACE23CDDFB0EEA8CBD* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// System.Collections.Generic.List`1<TealiumCommon.ConsentCategories>
struct List_1_tB719F9AEA1042BBCF17CC50DC1881550E74D3695  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	ConsentCategoriesU5BU5D_t265B0D8A9543DAF19045CA3CB31FC70AA48B16A8* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_tB719F9AEA1042BBCF17CC50DC1881550E74D3695, ____items_1)); }
	inline ConsentCategoriesU5BU5D_t265B0D8A9543DAF19045CA3CB31FC70AA48B16A8* get__items_1() const { return ____items_1; }
	inline ConsentCategoriesU5BU5D_t265B0D8A9543DAF19045CA3CB31FC70AA48B16A8** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(ConsentCategoriesU5BU5D_t265B0D8A9543DAF19045CA3CB31FC70AA48B16A8* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_tB719F9AEA1042BBCF17CC50DC1881550E74D3695, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_tB719F9AEA1042BBCF17CC50DC1881550E74D3695, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_tB719F9AEA1042BBCF17CC50DC1881550E74D3695, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_tB719F9AEA1042BBCF17CC50DC1881550E74D3695_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	ConsentCategoriesU5BU5D_t265B0D8A9543DAF19045CA3CB31FC70AA48B16A8* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_tB719F9AEA1042BBCF17CC50DC1881550E74D3695_StaticFields, ____emptyArray_5)); }
	inline ConsentCategoriesU5BU5D_t265B0D8A9543DAF19045CA3CB31FC70AA48B16A8* get__emptyArray_5() const { return ____emptyArray_5; }
	inline ConsentCategoriesU5BU5D_t265B0D8A9543DAF19045CA3CB31FC70AA48B16A8** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(ConsentCategoriesU5BU5D_t265B0D8A9543DAF19045CA3CB31FC70AA48B16A8* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// System.Collections.Generic.List`1<TealiumCommon.Dispatchers>
struct List_1_t5140BA5F1B10A238CE781B1DC4039B4AFCE4E240  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	DispatchersU5BU5D_t31B18D2DAEC57A90657E6693909E4B30675BD329* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t5140BA5F1B10A238CE781B1DC4039B4AFCE4E240, ____items_1)); }
	inline DispatchersU5BU5D_t31B18D2DAEC57A90657E6693909E4B30675BD329* get__items_1() const { return ____items_1; }
	inline DispatchersU5BU5D_t31B18D2DAEC57A90657E6693909E4B30675BD329** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(DispatchersU5BU5D_t31B18D2DAEC57A90657E6693909E4B30675BD329* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t5140BA5F1B10A238CE781B1DC4039B4AFCE4E240, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t5140BA5F1B10A238CE781B1DC4039B4AFCE4E240, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_t5140BA5F1B10A238CE781B1DC4039B4AFCE4E240, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_t5140BA5F1B10A238CE781B1DC4039B4AFCE4E240_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	DispatchersU5BU5D_t31B18D2DAEC57A90657E6693909E4B30675BD329* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_t5140BA5F1B10A238CE781B1DC4039B4AFCE4E240_StaticFields, ____emptyArray_5)); }
	inline DispatchersU5BU5D_t31B18D2DAEC57A90657E6693909E4B30675BD329* get__emptyArray_5() const { return ____emptyArray_5; }
	inline DispatchersU5BU5D_t31B18D2DAEC57A90657E6693909E4B30675BD329** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(DispatchersU5BU5D_t31B18D2DAEC57A90657E6693909E4B30675BD329* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// System.Collections.Generic.List`1<System.Object>
struct List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5, ____items_1)); }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* get__items_1() const { return ____items_1; }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5_StaticFields, ____emptyArray_5)); }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* get__emptyArray_5() const { return ____emptyArray_5; }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// System.Collections.Generic.List`1<System.String>
struct List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3, ____items_1)); }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* get__items_1() const { return ____items_1; }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3_StaticFields, ____emptyArray_5)); }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* get__emptyArray_5() const { return ____emptyArray_5; }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// UnityEngine.AndroidJavaObject
struct AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E  : public RuntimeObject
{
public:
	// UnityEngine.GlobalJavaObjectRef UnityEngine.AndroidJavaObject::m_jobject
	GlobalJavaObjectRef_t04A7D04EB0317C286F089E4DB4444EC4F2D78289 * ___m_jobject_1;
	// UnityEngine.GlobalJavaObjectRef UnityEngine.AndroidJavaObject::m_jclass
	GlobalJavaObjectRef_t04A7D04EB0317C286F089E4DB4444EC4F2D78289 * ___m_jclass_2;

public:
	inline static int32_t get_offset_of_m_jobject_1() { return static_cast<int32_t>(offsetof(AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E, ___m_jobject_1)); }
	inline GlobalJavaObjectRef_t04A7D04EB0317C286F089E4DB4444EC4F2D78289 * get_m_jobject_1() const { return ___m_jobject_1; }
	inline GlobalJavaObjectRef_t04A7D04EB0317C286F089E4DB4444EC4F2D78289 ** get_address_of_m_jobject_1() { return &___m_jobject_1; }
	inline void set_m_jobject_1(GlobalJavaObjectRef_t04A7D04EB0317C286F089E4DB4444EC4F2D78289 * value)
	{
		___m_jobject_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_jobject_1), (void*)value);
	}

	inline static int32_t get_offset_of_m_jclass_2() { return static_cast<int32_t>(offsetof(AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E, ___m_jclass_2)); }
	inline GlobalJavaObjectRef_t04A7D04EB0317C286F089E4DB4444EC4F2D78289 * get_m_jclass_2() const { return ___m_jclass_2; }
	inline GlobalJavaObjectRef_t04A7D04EB0317C286F089E4DB4444EC4F2D78289 ** get_address_of_m_jclass_2() { return &___m_jclass_2; }
	inline void set_m_jclass_2(GlobalJavaObjectRef_t04A7D04EB0317C286F089E4DB4444EC4F2D78289 * value)
	{
		___m_jclass_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_jclass_2), (void*)value);
	}
};

struct AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E_StaticFields
{
public:
	// System.Boolean UnityEngine.AndroidJavaObject::enableDebugPrints
	bool ___enableDebugPrints_0;

public:
	inline static int32_t get_offset_of_enableDebugPrints_0() { return static_cast<int32_t>(offsetof(AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E_StaticFields, ___enableDebugPrints_0)); }
	inline bool get_enableDebugPrints_0() const { return ___enableDebugPrints_0; }
	inline bool* get_address_of_enableDebugPrints_0() { return &___enableDebugPrints_0; }
	inline void set_enableDebugPrints_0(bool value)
	{
		___enableDebugPrints_0 = value;
	}
};

struct Il2CppArrayBounds;

// System.Array


// System.Attribute
struct Attribute_t037CA9D9F3B742C063DB364D2EEBBF9FC5772C71  : public RuntimeObject
{
public:

public:
};


// Newtonsoft.Json.Linq.JToken
struct JToken_tAB8CCFD034E5837FFBBDA62C92FC28F49A7C525E  : public RuntimeObject
{
public:
	// Newtonsoft.Json.Linq.JContainer Newtonsoft.Json.Linq.JToken::_parent
	JContainer_t3D0022FE4C9B2957A6612935AE890E97E371F19B * ____parent_0;
	// Newtonsoft.Json.Linq.JToken Newtonsoft.Json.Linq.JToken::_previous
	JToken_tAB8CCFD034E5837FFBBDA62C92FC28F49A7C525E * ____previous_1;
	// Newtonsoft.Json.Linq.JToken Newtonsoft.Json.Linq.JToken::_next
	JToken_tAB8CCFD034E5837FFBBDA62C92FC28F49A7C525E * ____next_2;
	// System.Object Newtonsoft.Json.Linq.JToken::_annotations
	RuntimeObject * ____annotations_3;

public:
	inline static int32_t get_offset_of__parent_0() { return static_cast<int32_t>(offsetof(JToken_tAB8CCFD034E5837FFBBDA62C92FC28F49A7C525E, ____parent_0)); }
	inline JContainer_t3D0022FE4C9B2957A6612935AE890E97E371F19B * get__parent_0() const { return ____parent_0; }
	inline JContainer_t3D0022FE4C9B2957A6612935AE890E97E371F19B ** get_address_of__parent_0() { return &____parent_0; }
	inline void set__parent_0(JContainer_t3D0022FE4C9B2957A6612935AE890E97E371F19B * value)
	{
		____parent_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____parent_0), (void*)value);
	}

	inline static int32_t get_offset_of__previous_1() { return static_cast<int32_t>(offsetof(JToken_tAB8CCFD034E5837FFBBDA62C92FC28F49A7C525E, ____previous_1)); }
	inline JToken_tAB8CCFD034E5837FFBBDA62C92FC28F49A7C525E * get__previous_1() const { return ____previous_1; }
	inline JToken_tAB8CCFD034E5837FFBBDA62C92FC28F49A7C525E ** get_address_of__previous_1() { return &____previous_1; }
	inline void set__previous_1(JToken_tAB8CCFD034E5837FFBBDA62C92FC28F49A7C525E * value)
	{
		____previous_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____previous_1), (void*)value);
	}

	inline static int32_t get_offset_of__next_2() { return static_cast<int32_t>(offsetof(JToken_tAB8CCFD034E5837FFBBDA62C92FC28F49A7C525E, ____next_2)); }
	inline JToken_tAB8CCFD034E5837FFBBDA62C92FC28F49A7C525E * get__next_2() const { return ____next_2; }
	inline JToken_tAB8CCFD034E5837FFBBDA62C92FC28F49A7C525E ** get_address_of__next_2() { return &____next_2; }
	inline void set__next_2(JToken_tAB8CCFD034E5837FFBBDA62C92FC28F49A7C525E * value)
	{
		____next_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____next_2), (void*)value);
	}

	inline static int32_t get_offset_of__annotations_3() { return static_cast<int32_t>(offsetof(JToken_tAB8CCFD034E5837FFBBDA62C92FC28F49A7C525E, ____annotations_3)); }
	inline RuntimeObject * get__annotations_3() const { return ____annotations_3; }
	inline RuntimeObject ** get_address_of__annotations_3() { return &____annotations_3; }
	inline void set__annotations_3(RuntimeObject * value)
	{
		____annotations_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____annotations_3), (void*)value);
	}
};

struct JToken_tAB8CCFD034E5837FFBBDA62C92FC28F49A7C525E_StaticFields
{
public:
	// Newtonsoft.Json.Linq.JTokenType[] Newtonsoft.Json.Linq.JToken::BooleanTypes
	JTokenTypeU5BU5D_t43BA13324F79115627F4D68923A78277A1049E53* ___BooleanTypes_4;
	// Newtonsoft.Json.Linq.JTokenType[] Newtonsoft.Json.Linq.JToken::NumberTypes
	JTokenTypeU5BU5D_t43BA13324F79115627F4D68923A78277A1049E53* ___NumberTypes_5;
	// Newtonsoft.Json.Linq.JTokenType[] Newtonsoft.Json.Linq.JToken::BigIntegerTypes
	JTokenTypeU5BU5D_t43BA13324F79115627F4D68923A78277A1049E53* ___BigIntegerTypes_6;
	// Newtonsoft.Json.Linq.JTokenType[] Newtonsoft.Json.Linq.JToken::StringTypes
	JTokenTypeU5BU5D_t43BA13324F79115627F4D68923A78277A1049E53* ___StringTypes_7;
	// Newtonsoft.Json.Linq.JTokenType[] Newtonsoft.Json.Linq.JToken::GuidTypes
	JTokenTypeU5BU5D_t43BA13324F79115627F4D68923A78277A1049E53* ___GuidTypes_8;
	// Newtonsoft.Json.Linq.JTokenType[] Newtonsoft.Json.Linq.JToken::TimeSpanTypes
	JTokenTypeU5BU5D_t43BA13324F79115627F4D68923A78277A1049E53* ___TimeSpanTypes_9;
	// Newtonsoft.Json.Linq.JTokenType[] Newtonsoft.Json.Linq.JToken::UriTypes
	JTokenTypeU5BU5D_t43BA13324F79115627F4D68923A78277A1049E53* ___UriTypes_10;
	// Newtonsoft.Json.Linq.JTokenType[] Newtonsoft.Json.Linq.JToken::CharTypes
	JTokenTypeU5BU5D_t43BA13324F79115627F4D68923A78277A1049E53* ___CharTypes_11;
	// Newtonsoft.Json.Linq.JTokenType[] Newtonsoft.Json.Linq.JToken::DateTimeTypes
	JTokenTypeU5BU5D_t43BA13324F79115627F4D68923A78277A1049E53* ___DateTimeTypes_12;
	// Newtonsoft.Json.Linq.JTokenType[] Newtonsoft.Json.Linq.JToken::BytesTypes
	JTokenTypeU5BU5D_t43BA13324F79115627F4D68923A78277A1049E53* ___BytesTypes_13;

public:
	inline static int32_t get_offset_of_BooleanTypes_4() { return static_cast<int32_t>(offsetof(JToken_tAB8CCFD034E5837FFBBDA62C92FC28F49A7C525E_StaticFields, ___BooleanTypes_4)); }
	inline JTokenTypeU5BU5D_t43BA13324F79115627F4D68923A78277A1049E53* get_BooleanTypes_4() const { return ___BooleanTypes_4; }
	inline JTokenTypeU5BU5D_t43BA13324F79115627F4D68923A78277A1049E53** get_address_of_BooleanTypes_4() { return &___BooleanTypes_4; }
	inline void set_BooleanTypes_4(JTokenTypeU5BU5D_t43BA13324F79115627F4D68923A78277A1049E53* value)
	{
		___BooleanTypes_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___BooleanTypes_4), (void*)value);
	}

	inline static int32_t get_offset_of_NumberTypes_5() { return static_cast<int32_t>(offsetof(JToken_tAB8CCFD034E5837FFBBDA62C92FC28F49A7C525E_StaticFields, ___NumberTypes_5)); }
	inline JTokenTypeU5BU5D_t43BA13324F79115627F4D68923A78277A1049E53* get_NumberTypes_5() const { return ___NumberTypes_5; }
	inline JTokenTypeU5BU5D_t43BA13324F79115627F4D68923A78277A1049E53** get_address_of_NumberTypes_5() { return &___NumberTypes_5; }
	inline void set_NumberTypes_5(JTokenTypeU5BU5D_t43BA13324F79115627F4D68923A78277A1049E53* value)
	{
		___NumberTypes_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___NumberTypes_5), (void*)value);
	}

	inline static int32_t get_offset_of_BigIntegerTypes_6() { return static_cast<int32_t>(offsetof(JToken_tAB8CCFD034E5837FFBBDA62C92FC28F49A7C525E_StaticFields, ___BigIntegerTypes_6)); }
	inline JTokenTypeU5BU5D_t43BA13324F79115627F4D68923A78277A1049E53* get_BigIntegerTypes_6() const { return ___BigIntegerTypes_6; }
	inline JTokenTypeU5BU5D_t43BA13324F79115627F4D68923A78277A1049E53** get_address_of_BigIntegerTypes_6() { return &___BigIntegerTypes_6; }
	inline void set_BigIntegerTypes_6(JTokenTypeU5BU5D_t43BA13324F79115627F4D68923A78277A1049E53* value)
	{
		___BigIntegerTypes_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___BigIntegerTypes_6), (void*)value);
	}

	inline static int32_t get_offset_of_StringTypes_7() { return static_cast<int32_t>(offsetof(JToken_tAB8CCFD034E5837FFBBDA62C92FC28F49A7C525E_StaticFields, ___StringTypes_7)); }
	inline JTokenTypeU5BU5D_t43BA13324F79115627F4D68923A78277A1049E53* get_StringTypes_7() const { return ___StringTypes_7; }
	inline JTokenTypeU5BU5D_t43BA13324F79115627F4D68923A78277A1049E53** get_address_of_StringTypes_7() { return &___StringTypes_7; }
	inline void set_StringTypes_7(JTokenTypeU5BU5D_t43BA13324F79115627F4D68923A78277A1049E53* value)
	{
		___StringTypes_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___StringTypes_7), (void*)value);
	}

	inline static int32_t get_offset_of_GuidTypes_8() { return static_cast<int32_t>(offsetof(JToken_tAB8CCFD034E5837FFBBDA62C92FC28F49A7C525E_StaticFields, ___GuidTypes_8)); }
	inline JTokenTypeU5BU5D_t43BA13324F79115627F4D68923A78277A1049E53* get_GuidTypes_8() const { return ___GuidTypes_8; }
	inline JTokenTypeU5BU5D_t43BA13324F79115627F4D68923A78277A1049E53** get_address_of_GuidTypes_8() { return &___GuidTypes_8; }
	inline void set_GuidTypes_8(JTokenTypeU5BU5D_t43BA13324F79115627F4D68923A78277A1049E53* value)
	{
		___GuidTypes_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___GuidTypes_8), (void*)value);
	}

	inline static int32_t get_offset_of_TimeSpanTypes_9() { return static_cast<int32_t>(offsetof(JToken_tAB8CCFD034E5837FFBBDA62C92FC28F49A7C525E_StaticFields, ___TimeSpanTypes_9)); }
	inline JTokenTypeU5BU5D_t43BA13324F79115627F4D68923A78277A1049E53* get_TimeSpanTypes_9() const { return ___TimeSpanTypes_9; }
	inline JTokenTypeU5BU5D_t43BA13324F79115627F4D68923A78277A1049E53** get_address_of_TimeSpanTypes_9() { return &___TimeSpanTypes_9; }
	inline void set_TimeSpanTypes_9(JTokenTypeU5BU5D_t43BA13324F79115627F4D68923A78277A1049E53* value)
	{
		___TimeSpanTypes_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___TimeSpanTypes_9), (void*)value);
	}

	inline static int32_t get_offset_of_UriTypes_10() { return static_cast<int32_t>(offsetof(JToken_tAB8CCFD034E5837FFBBDA62C92FC28F49A7C525E_StaticFields, ___UriTypes_10)); }
	inline JTokenTypeU5BU5D_t43BA13324F79115627F4D68923A78277A1049E53* get_UriTypes_10() const { return ___UriTypes_10; }
	inline JTokenTypeU5BU5D_t43BA13324F79115627F4D68923A78277A1049E53** get_address_of_UriTypes_10() { return &___UriTypes_10; }
	inline void set_UriTypes_10(JTokenTypeU5BU5D_t43BA13324F79115627F4D68923A78277A1049E53* value)
	{
		___UriTypes_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___UriTypes_10), (void*)value);
	}

	inline static int32_t get_offset_of_CharTypes_11() { return static_cast<int32_t>(offsetof(JToken_tAB8CCFD034E5837FFBBDA62C92FC28F49A7C525E_StaticFields, ___CharTypes_11)); }
	inline JTokenTypeU5BU5D_t43BA13324F79115627F4D68923A78277A1049E53* get_CharTypes_11() const { return ___CharTypes_11; }
	inline JTokenTypeU5BU5D_t43BA13324F79115627F4D68923A78277A1049E53** get_address_of_CharTypes_11() { return &___CharTypes_11; }
	inline void set_CharTypes_11(JTokenTypeU5BU5D_t43BA13324F79115627F4D68923A78277A1049E53* value)
	{
		___CharTypes_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___CharTypes_11), (void*)value);
	}

	inline static int32_t get_offset_of_DateTimeTypes_12() { return static_cast<int32_t>(offsetof(JToken_tAB8CCFD034E5837FFBBDA62C92FC28F49A7C525E_StaticFields, ___DateTimeTypes_12)); }
	inline JTokenTypeU5BU5D_t43BA13324F79115627F4D68923A78277A1049E53* get_DateTimeTypes_12() const { return ___DateTimeTypes_12; }
	inline JTokenTypeU5BU5D_t43BA13324F79115627F4D68923A78277A1049E53** get_address_of_DateTimeTypes_12() { return &___DateTimeTypes_12; }
	inline void set_DateTimeTypes_12(JTokenTypeU5BU5D_t43BA13324F79115627F4D68923A78277A1049E53* value)
	{
		___DateTimeTypes_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___DateTimeTypes_12), (void*)value);
	}

	inline static int32_t get_offset_of_BytesTypes_13() { return static_cast<int32_t>(offsetof(JToken_tAB8CCFD034E5837FFBBDA62C92FC28F49A7C525E_StaticFields, ___BytesTypes_13)); }
	inline JTokenTypeU5BU5D_t43BA13324F79115627F4D68923A78277A1049E53* get_BytesTypes_13() const { return ___BytesTypes_13; }
	inline JTokenTypeU5BU5D_t43BA13324F79115627F4D68923A78277A1049E53** get_address_of_BytesTypes_13() { return &___BytesTypes_13; }
	inline void set_BytesTypes_13(JTokenTypeU5BU5D_t43BA13324F79115627F4D68923A78277A1049E53* value)
	{
		___BytesTypes_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___BytesTypes_13), (void*)value);
	}
};


// System.Reflection.MemberInfo
struct MemberInfo_t  : public RuntimeObject
{
public:

public:
};


// System.String
struct String_t  : public RuntimeObject
{
public:
	// System.Int32 System.String::m_stringLength
	int32_t ___m_stringLength_0;
	// System.Char System.String::m_firstChar
	Il2CppChar ___m_firstChar_1;

public:
	inline static int32_t get_offset_of_m_stringLength_0() { return static_cast<int32_t>(offsetof(String_t, ___m_stringLength_0)); }
	inline int32_t get_m_stringLength_0() const { return ___m_stringLength_0; }
	inline int32_t* get_address_of_m_stringLength_0() { return &___m_stringLength_0; }
	inline void set_m_stringLength_0(int32_t value)
	{
		___m_stringLength_0 = value;
	}

	inline static int32_t get_offset_of_m_firstChar_1() { return static_cast<int32_t>(offsetof(String_t, ___m_firstChar_1)); }
	inline Il2CppChar get_m_firstChar_1() const { return ___m_firstChar_1; }
	inline Il2CppChar* get_address_of_m_firstChar_1() { return &___m_firstChar_1; }
	inline void set_m_firstChar_1(Il2CppChar value)
	{
		___m_firstChar_1 = value;
	}
};

struct String_t_StaticFields
{
public:
	// System.String System.String::Empty
	String_t* ___Empty_5;

public:
	inline static int32_t get_offset_of_Empty_5() { return static_cast<int32_t>(offsetof(String_t_StaticFields, ___Empty_5)); }
	inline String_t* get_Empty_5() const { return ___Empty_5; }
	inline String_t** get_address_of_Empty_5() { return &___Empty_5; }
	inline void set_Empty_5(String_t* value)
	{
		___Empty_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Empty_5), (void*)value);
	}
};


// TealiumCommon.TealiumDispatch
struct TealiumDispatch_tBC7A4951FD4926BB6EFF74865AF1EC9D1C6BAFB9  : public RuntimeObject
{
public:
	// System.Collections.Generic.Dictionary`2<System.String,System.Object> TealiumCommon.TealiumDispatch::dataLayer
	Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 * ___dataLayer_0;
	// System.String TealiumCommon.TealiumDispatch::type
	String_t* ___type_1;

public:
	inline static int32_t get_offset_of_dataLayer_0() { return static_cast<int32_t>(offsetof(TealiumDispatch_tBC7A4951FD4926BB6EFF74865AF1EC9D1C6BAFB9, ___dataLayer_0)); }
	inline Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 * get_dataLayer_0() const { return ___dataLayer_0; }
	inline Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 ** get_address_of_dataLayer_0() { return &___dataLayer_0; }
	inline void set_dataLayer_0(Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 * value)
	{
		___dataLayer_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___dataLayer_0), (void*)value);
	}

	inline static int32_t get_offset_of_type_1() { return static_cast<int32_t>(offsetof(TealiumDispatch_tBC7A4951FD4926BB6EFF74865AF1EC9D1C6BAFB9, ___type_1)); }
	inline String_t* get_type_1() const { return ___type_1; }
	inline String_t** get_address_of_type_1() { return &___type_1; }
	inline void set_type_1(String_t* value)
	{
		___type_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___type_1), (void*)value);
	}
};


// TealiumCommon.TealiumLogger
struct TealiumLogger_t1416851BCBD60CCCB6DEB1543E43734FB61CAB17  : public RuntimeObject
{
public:

public:
};


// TealiumiOS
struct TealiumiOS_t733CCF8E376EBE4BA5D0C61D6D01A4CE824F8BC4  : public RuntimeObject
{
public:

public:
};


// System.ValueType
struct ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52  : public RuntimeObject
{
public:

public:
};

// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52_marshaled_com
{
};

// TealiumAndroid/<>c
struct U3CU3Ec_t09F86AA9C724B6431311FD4F6B328ECB9D87A170  : public RuntimeObject
{
public:

public:
};

struct U3CU3Ec_t09F86AA9C724B6431311FD4F6B328ECB9D87A170_StaticFields
{
public:
	// TealiumAndroid/<>c TealiumAndroid/<>c::<>9
	U3CU3Ec_t09F86AA9C724B6431311FD4F6B328ECB9D87A170 * ___U3CU3E9_0;
	// System.Converter`2<System.String,TealiumCommon.ConsentCategories> TealiumAndroid/<>c::<>9__12_0
	Converter_2_tF015A85C226F06C29481EF50AC5392D4975A7B7D * ___U3CU3E9__12_0_1;

public:
	inline static int32_t get_offset_of_U3CU3E9_0() { return static_cast<int32_t>(offsetof(U3CU3Ec_t09F86AA9C724B6431311FD4F6B328ECB9D87A170_StaticFields, ___U3CU3E9_0)); }
	inline U3CU3Ec_t09F86AA9C724B6431311FD4F6B328ECB9D87A170 * get_U3CU3E9_0() const { return ___U3CU3E9_0; }
	inline U3CU3Ec_t09F86AA9C724B6431311FD4F6B328ECB9D87A170 ** get_address_of_U3CU3E9_0() { return &___U3CU3E9_0; }
	inline void set_U3CU3E9_0(U3CU3Ec_t09F86AA9C724B6431311FD4F6B328ECB9D87A170 * value)
	{
		___U3CU3E9_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9_0), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E9__12_0_1() { return static_cast<int32_t>(offsetof(U3CU3Ec_t09F86AA9C724B6431311FD4F6B328ECB9D87A170_StaticFields, ___U3CU3E9__12_0_1)); }
	inline Converter_2_tF015A85C226F06C29481EF50AC5392D4975A7B7D * get_U3CU3E9__12_0_1() const { return ___U3CU3E9__12_0_1; }
	inline Converter_2_tF015A85C226F06C29481EF50AC5392D4975A7B7D ** get_address_of_U3CU3E9__12_0_1() { return &___U3CU3E9__12_0_1; }
	inline void set_U3CU3E9__12_0_1(Converter_2_tF015A85C226F06C29481EF50AC5392D4975A7B7D * value)
	{
		___U3CU3E9__12_0_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9__12_0_1), (void*)value);
	}
};


// TealiumCommon.TealiumConfig/<>c
struct U3CU3Ec_t36D92B931A0CC3CAB85CB5872E3A3AD4EB480F83  : public RuntimeObject
{
public:

public:
};

struct U3CU3Ec_t36D92B931A0CC3CAB85CB5872E3A3AD4EB480F83_StaticFields
{
public:
	// TealiumCommon.TealiumConfig/<>c TealiumCommon.TealiumConfig/<>c::<>9
	U3CU3Ec_t36D92B931A0CC3CAB85CB5872E3A3AD4EB480F83 * ___U3CU3E9_0;
	// System.Converter`2<TealiumCommon.Dispatchers,System.String> TealiumCommon.TealiumConfig/<>c::<>9__23_0
	Converter_2_t8DCD435D80605558FF0393EA8820ECC291B6130D * ___U3CU3E9__23_0_1;
	// System.Converter`2<TealiumCommon.Collectors,System.String> TealiumCommon.TealiumConfig/<>c::<>9__23_1
	Converter_2_t8966C243E6818DA305580ED799C4458A967FBC4B * ___U3CU3E9__23_1_2;

public:
	inline static int32_t get_offset_of_U3CU3E9_0() { return static_cast<int32_t>(offsetof(U3CU3Ec_t36D92B931A0CC3CAB85CB5872E3A3AD4EB480F83_StaticFields, ___U3CU3E9_0)); }
	inline U3CU3Ec_t36D92B931A0CC3CAB85CB5872E3A3AD4EB480F83 * get_U3CU3E9_0() const { return ___U3CU3E9_0; }
	inline U3CU3Ec_t36D92B931A0CC3CAB85CB5872E3A3AD4EB480F83 ** get_address_of_U3CU3E9_0() { return &___U3CU3E9_0; }
	inline void set_U3CU3E9_0(U3CU3Ec_t36D92B931A0CC3CAB85CB5872E3A3AD4EB480F83 * value)
	{
		___U3CU3E9_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9_0), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E9__23_0_1() { return static_cast<int32_t>(offsetof(U3CU3Ec_t36D92B931A0CC3CAB85CB5872E3A3AD4EB480F83_StaticFields, ___U3CU3E9__23_0_1)); }
	inline Converter_2_t8DCD435D80605558FF0393EA8820ECC291B6130D * get_U3CU3E9__23_0_1() const { return ___U3CU3E9__23_0_1; }
	inline Converter_2_t8DCD435D80605558FF0393EA8820ECC291B6130D ** get_address_of_U3CU3E9__23_0_1() { return &___U3CU3E9__23_0_1; }
	inline void set_U3CU3E9__23_0_1(Converter_2_t8DCD435D80605558FF0393EA8820ECC291B6130D * value)
	{
		___U3CU3E9__23_0_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9__23_0_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E9__23_1_2() { return static_cast<int32_t>(offsetof(U3CU3Ec_t36D92B931A0CC3CAB85CB5872E3A3AD4EB480F83_StaticFields, ___U3CU3E9__23_1_2)); }
	inline Converter_2_t8966C243E6818DA305580ED799C4458A967FBC4B * get_U3CU3E9__23_1_2() const { return ___U3CU3E9__23_1_2; }
	inline Converter_2_t8966C243E6818DA305580ED799C4458A967FBC4B ** get_address_of_U3CU3E9__23_1_2() { return &___U3CU3E9__23_1_2; }
	inline void set_U3CU3E9__23_1_2(Converter_2_t8966C243E6818DA305580ED799C4458A967FBC4B * value)
	{
		___U3CU3E9__23_1_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9__23_1_2), (void*)value);
	}
};


// TealiumUnityPlugin/<>c
struct U3CU3Ec_t7521AAF4473714E35BDD03C93690F00668C0D29E  : public RuntimeObject
{
public:

public:
};

struct U3CU3Ec_t7521AAF4473714E35BDD03C93690F00668C0D29E_StaticFields
{
public:
	// TealiumUnityPlugin/<>c TealiumUnityPlugin/<>c::<>9
	U3CU3Ec_t7521AAF4473714E35BDD03C93690F00668C0D29E * ___U3CU3E9_0;
	// System.Func`2<System.Collections.Generic.KeyValuePair`2<System.String,System.Object>,System.String> TealiumUnityPlugin/<>c::<>9__29_0
	Func_2_t1CA29703D8E4788617FC1EC9FA62DEBEE1E2CF3A * ___U3CU3E9__29_0_1;
	// System.Func`2<System.Collections.Generic.KeyValuePair`2<System.String,System.Object>,System.Object> TealiumUnityPlugin/<>c::<>9__29_1
	Func_2_t04E847CA06FFEF3C03EF2513C3B1F9F57A39D797 * ___U3CU3E9__29_1_2;

public:
	inline static int32_t get_offset_of_U3CU3E9_0() { return static_cast<int32_t>(offsetof(U3CU3Ec_t7521AAF4473714E35BDD03C93690F00668C0D29E_StaticFields, ___U3CU3E9_0)); }
	inline U3CU3Ec_t7521AAF4473714E35BDD03C93690F00668C0D29E * get_U3CU3E9_0() const { return ___U3CU3E9_0; }
	inline U3CU3Ec_t7521AAF4473714E35BDD03C93690F00668C0D29E ** get_address_of_U3CU3E9_0() { return &___U3CU3E9_0; }
	inline void set_U3CU3E9_0(U3CU3Ec_t7521AAF4473714E35BDD03C93690F00668C0D29E * value)
	{
		___U3CU3E9_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9_0), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E9__29_0_1() { return static_cast<int32_t>(offsetof(U3CU3Ec_t7521AAF4473714E35BDD03C93690F00668C0D29E_StaticFields, ___U3CU3E9__29_0_1)); }
	inline Func_2_t1CA29703D8E4788617FC1EC9FA62DEBEE1E2CF3A * get_U3CU3E9__29_0_1() const { return ___U3CU3E9__29_0_1; }
	inline Func_2_t1CA29703D8E4788617FC1EC9FA62DEBEE1E2CF3A ** get_address_of_U3CU3E9__29_0_1() { return &___U3CU3E9__29_0_1; }
	inline void set_U3CU3E9__29_0_1(Func_2_t1CA29703D8E4788617FC1EC9FA62DEBEE1E2CF3A * value)
	{
		___U3CU3E9__29_0_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9__29_0_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E9__29_1_2() { return static_cast<int32_t>(offsetof(U3CU3Ec_t7521AAF4473714E35BDD03C93690F00668C0D29E_StaticFields, ___U3CU3E9__29_1_2)); }
	inline Func_2_t04E847CA06FFEF3C03EF2513C3B1F9F57A39D797 * get_U3CU3E9__29_1_2() const { return ___U3CU3E9__29_1_2; }
	inline Func_2_t04E847CA06FFEF3C03EF2513C3B1F9F57A39D797 ** get_address_of_U3CU3E9__29_1_2() { return &___U3CU3E9__29_1_2; }
	inline void set_U3CU3E9__29_1_2(Func_2_t04E847CA06FFEF3C03EF2513C3B1F9F57A39D797 * value)
	{
		___U3CU3E9__29_1_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9__29_1_2), (void*)value);
	}
};


// TealiumiOS/<>c
struct U3CU3Ec_t9D2D486C0C56ED747E3B614EF2F08E5FBD4ACCB4  : public RuntimeObject
{
public:

public:
};

struct U3CU3Ec_t9D2D486C0C56ED747E3B614EF2F08E5FBD4ACCB4_StaticFields
{
public:
	// TealiumiOS/<>c TealiumiOS/<>c::<>9
	U3CU3Ec_t9D2D486C0C56ED747E3B614EF2F08E5FBD4ACCB4 * ___U3CU3E9_0;
	// System.Converter`2<TealiumCommon.ConsentCategories,System.String> TealiumiOS/<>c::<>9__35_0
	Converter_2_t05F0413FDB211EFC6EFA05D8F8F2EF8FC9265BCB * ___U3CU3E9__35_0_1;
	// System.Converter`2<System.String,TealiumCommon.ConsentCategories> TealiumiOS/<>c::<>9__36_0
	Converter_2_tF015A85C226F06C29481EF50AC5392D4975A7B7D * ___U3CU3E9__36_0_2;

public:
	inline static int32_t get_offset_of_U3CU3E9_0() { return static_cast<int32_t>(offsetof(U3CU3Ec_t9D2D486C0C56ED747E3B614EF2F08E5FBD4ACCB4_StaticFields, ___U3CU3E9_0)); }
	inline U3CU3Ec_t9D2D486C0C56ED747E3B614EF2F08E5FBD4ACCB4 * get_U3CU3E9_0() const { return ___U3CU3E9_0; }
	inline U3CU3Ec_t9D2D486C0C56ED747E3B614EF2F08E5FBD4ACCB4 ** get_address_of_U3CU3E9_0() { return &___U3CU3E9_0; }
	inline void set_U3CU3E9_0(U3CU3Ec_t9D2D486C0C56ED747E3B614EF2F08E5FBD4ACCB4 * value)
	{
		___U3CU3E9_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9_0), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E9__35_0_1() { return static_cast<int32_t>(offsetof(U3CU3Ec_t9D2D486C0C56ED747E3B614EF2F08E5FBD4ACCB4_StaticFields, ___U3CU3E9__35_0_1)); }
	inline Converter_2_t05F0413FDB211EFC6EFA05D8F8F2EF8FC9265BCB * get_U3CU3E9__35_0_1() const { return ___U3CU3E9__35_0_1; }
	inline Converter_2_t05F0413FDB211EFC6EFA05D8F8F2EF8FC9265BCB ** get_address_of_U3CU3E9__35_0_1() { return &___U3CU3E9__35_0_1; }
	inline void set_U3CU3E9__35_0_1(Converter_2_t05F0413FDB211EFC6EFA05D8F8F2EF8FC9265BCB * value)
	{
		___U3CU3E9__35_0_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9__35_0_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E9__36_0_2() { return static_cast<int32_t>(offsetof(U3CU3Ec_t9D2D486C0C56ED747E3B614EF2F08E5FBD4ACCB4_StaticFields, ___U3CU3E9__36_0_2)); }
	inline Converter_2_tF015A85C226F06C29481EF50AC5392D4975A7B7D * get_U3CU3E9__36_0_2() const { return ___U3CU3E9__36_0_2; }
	inline Converter_2_tF015A85C226F06C29481EF50AC5392D4975A7B7D ** get_address_of_U3CU3E9__36_0_2() { return &___U3CU3E9__36_0_2; }
	inline void set_U3CU3E9__36_0_2(Converter_2_tF015A85C226F06C29481EF50AC5392D4975A7B7D * value)
	{
		___U3CU3E9__36_0_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9__36_0_2), (void*)value);
	}
};


// System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>
struct KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625 
{
public:
	// TKey System.Collections.Generic.KeyValuePair`2::key
	RuntimeObject * ___key_0;
	// TValue System.Collections.Generic.KeyValuePair`2::value
	RuntimeObject * ___value_1;

public:
	inline static int32_t get_offset_of_key_0() { return static_cast<int32_t>(offsetof(KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625, ___key_0)); }
	inline RuntimeObject * get_key_0() const { return ___key_0; }
	inline RuntimeObject ** get_address_of_key_0() { return &___key_0; }
	inline void set_key_0(RuntimeObject * value)
	{
		___key_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___key_0), (void*)value);
	}

	inline static int32_t get_offset_of_value_1() { return static_cast<int32_t>(offsetof(KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625, ___value_1)); }
	inline RuntimeObject * get_value_1() const { return ___value_1; }
	inline RuntimeObject ** get_address_of_value_1() { return &___value_1; }
	inline void set_value_1(RuntimeObject * value)
	{
		___value_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___value_1), (void*)value);
	}
};


// System.Collections.Generic.KeyValuePair`2<System.String,System.Object>
struct KeyValuePair_2_tD6E57B7EAC6134DCA97F39E5E598EB43B44A5EAE 
{
public:
	// TKey System.Collections.Generic.KeyValuePair`2::key
	String_t* ___key_0;
	// TValue System.Collections.Generic.KeyValuePair`2::value
	RuntimeObject * ___value_1;

public:
	inline static int32_t get_offset_of_key_0() { return static_cast<int32_t>(offsetof(KeyValuePair_2_tD6E57B7EAC6134DCA97F39E5E598EB43B44A5EAE, ___key_0)); }
	inline String_t* get_key_0() const { return ___key_0; }
	inline String_t** get_address_of_key_0() { return &___key_0; }
	inline void set_key_0(String_t* value)
	{
		___key_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___key_0), (void*)value);
	}

	inline static int32_t get_offset_of_value_1() { return static_cast<int32_t>(offsetof(KeyValuePair_2_tD6E57B7EAC6134DCA97F39E5E598EB43B44A5EAE, ___value_1)); }
	inline RuntimeObject * get_value_1() const { return ___value_1; }
	inline RuntimeObject ** get_address_of_value_1() { return &___value_1; }
	inline void set_value_1(RuntimeObject * value)
	{
		___value_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___value_1), (void*)value);
	}
};


// System.Nullable`1<System.Boolean>
struct Nullable_1_t1D1CD146BFCBDC2E53E1F700889F8C5C21063EF3 
{
public:
	// T System.Nullable`1::value
	bool ___value_0;
	// System.Boolean System.Nullable`1::has_value
	bool ___has_value_1;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(Nullable_1_t1D1CD146BFCBDC2E53E1F700889F8C5C21063EF3, ___value_0)); }
	inline bool get_value_0() const { return ___value_0; }
	inline bool* get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(bool value)
	{
		___value_0 = value;
	}

	inline static int32_t get_offset_of_has_value_1() { return static_cast<int32_t>(offsetof(Nullable_1_t1D1CD146BFCBDC2E53E1F700889F8C5C21063EF3, ___has_value_1)); }
	inline bool get_has_value_1() const { return ___has_value_1; }
	inline bool* get_address_of_has_value_1() { return &___has_value_1; }
	inline void set_has_value_1(bool value)
	{
		___has_value_1 = value;
	}
};


// UnityEngine.AndroidJavaClass
struct AndroidJavaClass_t52E934B16476D72AA6E4B248F989F2F825EB62D4  : public AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E
{
public:

public:
};


// System.Boolean
struct Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37 
{
public:
	// System.Boolean System.Boolean::m_value
	bool ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37, ___m_value_0)); }
	inline bool get_m_value_0() const { return ___m_value_0; }
	inline bool* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(bool value)
	{
		___m_value_0 = value;
	}
};

struct Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_StaticFields
{
public:
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_5;
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_6;

public:
	inline static int32_t get_offset_of_TrueString_5() { return static_cast<int32_t>(offsetof(Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_StaticFields, ___TrueString_5)); }
	inline String_t* get_TrueString_5() const { return ___TrueString_5; }
	inline String_t** get_address_of_TrueString_5() { return &___TrueString_5; }
	inline void set_TrueString_5(String_t* value)
	{
		___TrueString_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___TrueString_5), (void*)value);
	}

	inline static int32_t get_offset_of_FalseString_6() { return static_cast<int32_t>(offsetof(Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_StaticFields, ___FalseString_6)); }
	inline String_t* get_FalseString_6() const { return ___FalseString_6; }
	inline String_t** get_address_of_FalseString_6() { return &___FalseString_6; }
	inline void set_FalseString_6(String_t* value)
	{
		___FalseString_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FalseString_6), (void*)value);
	}
};


// System.Byte
struct Byte_t0111FAB8B8685667EDDAF77683F0D8F86B659056 
{
public:
	// System.Byte System.Byte::m_value
	uint8_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Byte_t0111FAB8B8685667EDDAF77683F0D8F86B659056, ___m_value_0)); }
	inline uint8_t get_m_value_0() const { return ___m_value_0; }
	inline uint8_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(uint8_t value)
	{
		___m_value_0 = value;
	}
};


// System.Char
struct Char_tFF60D8E7E89A20BE2294A003734341BD1DF43E14 
{
public:
	// System.Char System.Char::m_value
	Il2CppChar ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Char_tFF60D8E7E89A20BE2294A003734341BD1DF43E14, ___m_value_0)); }
	inline Il2CppChar get_m_value_0() const { return ___m_value_0; }
	inline Il2CppChar* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(Il2CppChar value)
	{
		___m_value_0 = value;
	}
};

struct Char_tFF60D8E7E89A20BE2294A003734341BD1DF43E14_StaticFields
{
public:
	// System.Byte[] System.Char::categoryForLatin1
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___categoryForLatin1_3;

public:
	inline static int32_t get_offset_of_categoryForLatin1_3() { return static_cast<int32_t>(offsetof(Char_tFF60D8E7E89A20BE2294A003734341BD1DF43E14_StaticFields, ___categoryForLatin1_3)); }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* get_categoryForLatin1_3() const { return ___categoryForLatin1_3; }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726** get_address_of_categoryForLatin1_3() { return &___categoryForLatin1_3; }
	inline void set_categoryForLatin1_3(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* value)
	{
		___categoryForLatin1_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___categoryForLatin1_3), (void*)value);
	}
};


// TealiumCommon.Collectors
struct Collectors_tF2C4928DE0A75E12B7700E84D52749D66D48F723 
{
public:
	// System.String TealiumCommon.Collectors::<Value>k__BackingField
	String_t* ___U3CValueU3Ek__BackingField_0;

public:
	inline static int32_t get_offset_of_U3CValueU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(Collectors_tF2C4928DE0A75E12B7700E84D52749D66D48F723, ___U3CValueU3Ek__BackingField_0)); }
	inline String_t* get_U3CValueU3Ek__BackingField_0() const { return ___U3CValueU3Ek__BackingField_0; }
	inline String_t** get_address_of_U3CValueU3Ek__BackingField_0() { return &___U3CValueU3Ek__BackingField_0; }
	inline void set_U3CValueU3Ek__BackingField_0(String_t* value)
	{
		___U3CValueU3Ek__BackingField_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CValueU3Ek__BackingField_0), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of TealiumCommon.Collectors
struct Collectors_tF2C4928DE0A75E12B7700E84D52749D66D48F723_marshaled_pinvoke
{
	char* ___U3CValueU3Ek__BackingField_0;
};
// Native definition for COM marshalling of TealiumCommon.Collectors
struct Collectors_tF2C4928DE0A75E12B7700E84D52749D66D48F723_marshaled_com
{
	Il2CppChar* ___U3CValueU3Ek__BackingField_0;
};

// TealiumCommon.ConsentCategories
struct ConsentCategories_t7F1FDE7995E2ABB2BEF4A4DC381AE8DEE9B8429F 
{
public:
	// System.String TealiumCommon.ConsentCategories::<Value>k__BackingField
	String_t* ___U3CValueU3Ek__BackingField_0;

public:
	inline static int32_t get_offset_of_U3CValueU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(ConsentCategories_t7F1FDE7995E2ABB2BEF4A4DC381AE8DEE9B8429F, ___U3CValueU3Ek__BackingField_0)); }
	inline String_t* get_U3CValueU3Ek__BackingField_0() const { return ___U3CValueU3Ek__BackingField_0; }
	inline String_t** get_address_of_U3CValueU3Ek__BackingField_0() { return &___U3CValueU3Ek__BackingField_0; }
	inline void set_U3CValueU3Ek__BackingField_0(String_t* value)
	{
		___U3CValueU3Ek__BackingField_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CValueU3Ek__BackingField_0), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of TealiumCommon.ConsentCategories
struct ConsentCategories_t7F1FDE7995E2ABB2BEF4A4DC381AE8DEE9B8429F_marshaled_pinvoke
{
	char* ___U3CValueU3Ek__BackingField_0;
};
// Native definition for COM marshalling of TealiumCommon.ConsentCategories
struct ConsentCategories_t7F1FDE7995E2ABB2BEF4A4DC381AE8DEE9B8429F_marshaled_com
{
	Il2CppChar* ___U3CValueU3Ek__BackingField_0;
};

// TealiumCommon.ConsentPolicy
struct ConsentPolicy_tA405DFF59561F55C0C5C738E3ECC75B8032B6A01 
{
public:
	// System.String TealiumCommon.ConsentPolicy::<Value>k__BackingField
	String_t* ___U3CValueU3Ek__BackingField_0;

public:
	inline static int32_t get_offset_of_U3CValueU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(ConsentPolicy_tA405DFF59561F55C0C5C738E3ECC75B8032B6A01, ___U3CValueU3Ek__BackingField_0)); }
	inline String_t* get_U3CValueU3Ek__BackingField_0() const { return ___U3CValueU3Ek__BackingField_0; }
	inline String_t** get_address_of_U3CValueU3Ek__BackingField_0() { return &___U3CValueU3Ek__BackingField_0; }
	inline void set_U3CValueU3Ek__BackingField_0(String_t* value)
	{
		___U3CValueU3Ek__BackingField_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CValueU3Ek__BackingField_0), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of TealiumCommon.ConsentPolicy
struct ConsentPolicy_tA405DFF59561F55C0C5C738E3ECC75B8032B6A01_marshaled_pinvoke
{
	char* ___U3CValueU3Ek__BackingField_0;
};
// Native definition for COM marshalling of TealiumCommon.ConsentPolicy
struct ConsentPolicy_tA405DFF59561F55C0C5C738E3ECC75B8032B6A01_marshaled_com
{
	Il2CppChar* ___U3CValueU3Ek__BackingField_0;
};

// TealiumCommon.ConsentStatus
struct ConsentStatus_t6263FFF5C886922D62B1DDC450EFE8CE2036F101 
{
public:
	// System.String TealiumCommon.ConsentStatus::<Value>k__BackingField
	String_t* ___U3CValueU3Ek__BackingField_0;

public:
	inline static int32_t get_offset_of_U3CValueU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(ConsentStatus_t6263FFF5C886922D62B1DDC450EFE8CE2036F101, ___U3CValueU3Ek__BackingField_0)); }
	inline String_t* get_U3CValueU3Ek__BackingField_0() const { return ___U3CValueU3Ek__BackingField_0; }
	inline String_t** get_address_of_U3CValueU3Ek__BackingField_0() { return &___U3CValueU3Ek__BackingField_0; }
	inline void set_U3CValueU3Ek__BackingField_0(String_t* value)
	{
		___U3CValueU3Ek__BackingField_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CValueU3Ek__BackingField_0), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of TealiumCommon.ConsentStatus
struct ConsentStatus_t6263FFF5C886922D62B1DDC450EFE8CE2036F101_marshaled_pinvoke
{
	char* ___U3CValueU3Ek__BackingField_0;
};
// Native definition for COM marshalling of TealiumCommon.ConsentStatus
struct ConsentStatus_t6263FFF5C886922D62B1DDC450EFE8CE2036F101_marshaled_com
{
	Il2CppChar* ___U3CValueU3Ek__BackingField_0;
};

// TealiumCommon.Dispatchers
struct Dispatchers_tB9298ED86C40129DF8BF09E2B9EBEC23F8C5A236 
{
public:
	// System.String TealiumCommon.Dispatchers::<Value>k__BackingField
	String_t* ___U3CValueU3Ek__BackingField_0;

public:
	inline static int32_t get_offset_of_U3CValueU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(Dispatchers_tB9298ED86C40129DF8BF09E2B9EBEC23F8C5A236, ___U3CValueU3Ek__BackingField_0)); }
	inline String_t* get_U3CValueU3Ek__BackingField_0() const { return ___U3CValueU3Ek__BackingField_0; }
	inline String_t** get_address_of_U3CValueU3Ek__BackingField_0() { return &___U3CValueU3Ek__BackingField_0; }
	inline void set_U3CValueU3Ek__BackingField_0(String_t* value)
	{
		___U3CValueU3Ek__BackingField_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CValueU3Ek__BackingField_0), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of TealiumCommon.Dispatchers
struct Dispatchers_tB9298ED86C40129DF8BF09E2B9EBEC23F8C5A236_marshaled_pinvoke
{
	char* ___U3CValueU3Ek__BackingField_0;
};
// Native definition for COM marshalling of TealiumCommon.Dispatchers
struct Dispatchers_tB9298ED86C40129DF8BF09E2B9EBEC23F8C5A236_marshaled_com
{
	Il2CppChar* ___U3CValueU3Ek__BackingField_0;
};

// Microsoft.CodeAnalysis.EmbeddedAttribute
struct EmbeddedAttribute_t965A2B907C497043C4CEECCFA70B2A0C4EECC41D  : public Attribute_t037CA9D9F3B742C063DB364D2EEBBF9FC5772C71
{
public:

public:
};


// System.Enum
struct Enum_t23B90B40F60E677A8025267341651C94AE079CDA  : public ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52
{
public:

public:
};

struct Enum_t23B90B40F60E677A8025267341651C94AE079CDA_StaticFields
{
public:
	// System.Char[] System.Enum::enumSeperatorCharArray
	CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* ___enumSeperatorCharArray_0;

public:
	inline static int32_t get_offset_of_enumSeperatorCharArray_0() { return static_cast<int32_t>(offsetof(Enum_t23B90B40F60E677A8025267341651C94AE079CDA_StaticFields, ___enumSeperatorCharArray_0)); }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* get_enumSeperatorCharArray_0() const { return ___enumSeperatorCharArray_0; }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34** get_address_of_enumSeperatorCharArray_0() { return &___enumSeperatorCharArray_0; }
	inline void set_enumSeperatorCharArray_0(CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* value)
	{
		___enumSeperatorCharArray_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___enumSeperatorCharArray_0), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.Enum
struct Enum_t23B90B40F60E677A8025267341651C94AE079CDA_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.Enum
struct Enum_t23B90B40F60E677A8025267341651C94AE079CDA_marshaled_com
{
};

// TealiumCommon.Expiry
struct Expiry_tCC1CF50318A9D2722F63B5E5842DCD2D0FCA8137 
{
public:
	// System.String TealiumCommon.Expiry::<Value>k__BackingField
	String_t* ___U3CValueU3Ek__BackingField_0;

public:
	inline static int32_t get_offset_of_U3CValueU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(Expiry_tCC1CF50318A9D2722F63B5E5842DCD2D0FCA8137, ___U3CValueU3Ek__BackingField_0)); }
	inline String_t* get_U3CValueU3Ek__BackingField_0() const { return ___U3CValueU3Ek__BackingField_0; }
	inline String_t** get_address_of_U3CValueU3Ek__BackingField_0() { return &___U3CValueU3Ek__BackingField_0; }
	inline void set_U3CValueU3Ek__BackingField_0(String_t* value)
	{
		___U3CValueU3Ek__BackingField_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CValueU3Ek__BackingField_0), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of TealiumCommon.Expiry
struct Expiry_tCC1CF50318A9D2722F63B5E5842DCD2D0FCA8137_marshaled_pinvoke
{
	char* ___U3CValueU3Ek__BackingField_0;
};
// Native definition for COM marshalling of TealiumCommon.Expiry
struct Expiry_tCC1CF50318A9D2722F63B5E5842DCD2D0FCA8137_marshaled_com
{
	Il2CppChar* ___U3CValueU3Ek__BackingField_0;
};

// System.Int32
struct Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046 
{
public:
	// System.Int32 System.Int32::m_value
	int32_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046, ___m_value_0)); }
	inline int32_t get_m_value_0() const { return ___m_value_0; }
	inline int32_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(int32_t value)
	{
		___m_value_0 = value;
	}
};


// System.IntPtr
struct IntPtr_t 
{
public:
	// System.Void* System.IntPtr::m_value
	void* ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(IntPtr_t, ___m_value_0)); }
	inline void* get_m_value_0() const { return ___m_value_0; }
	inline void** get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(void* value)
	{
		___m_value_0 = value;
	}
};

struct IntPtr_t_StaticFields
{
public:
	// System.IntPtr System.IntPtr::Zero
	intptr_t ___Zero_1;

public:
	inline static int32_t get_offset_of_Zero_1() { return static_cast<int32_t>(offsetof(IntPtr_t_StaticFields, ___Zero_1)); }
	inline intptr_t get_Zero_1() const { return ___Zero_1; }
	inline intptr_t* get_address_of_Zero_1() { return &___Zero_1; }
	inline void set_Zero_1(intptr_t value)
	{
		___Zero_1 = value;
	}
};


// System.Runtime.CompilerServices.IsReadOnlyAttribute
struct IsReadOnlyAttribute_tCB7D9361CFA9DCFC070186FA6895154B90B23888  : public Attribute_t037CA9D9F3B742C063DB364D2EEBBF9FC5772C71
{
public:

public:
};


// Newtonsoft.Json.Linq.JContainer
struct JContainer_t3D0022FE4C9B2957A6612935AE890E97E371F19B  : public JToken_tAB8CCFD034E5837FFBBDA62C92FC28F49A7C525E
{
public:
	// System.ComponentModel.ListChangedEventHandler Newtonsoft.Json.Linq.JContainer::_listChanged
	ListChangedEventHandler_t02874ED3C8355742E3E62AED85A53F3140506B8C * ____listChanged_14;
	// System.Collections.Specialized.NotifyCollectionChangedEventHandler Newtonsoft.Json.Linq.JContainer::_collectionChanged
	NotifyCollectionChangedEventHandler_t737D98299AF810020BC5FC077CC664F46B6D0621 * ____collectionChanged_15;
	// System.Object Newtonsoft.Json.Linq.JContainer::_syncRoot
	RuntimeObject * ____syncRoot_16;
	// System.Boolean Newtonsoft.Json.Linq.JContainer::_busy
	bool ____busy_17;

public:
	inline static int32_t get_offset_of__listChanged_14() { return static_cast<int32_t>(offsetof(JContainer_t3D0022FE4C9B2957A6612935AE890E97E371F19B, ____listChanged_14)); }
	inline ListChangedEventHandler_t02874ED3C8355742E3E62AED85A53F3140506B8C * get__listChanged_14() const { return ____listChanged_14; }
	inline ListChangedEventHandler_t02874ED3C8355742E3E62AED85A53F3140506B8C ** get_address_of__listChanged_14() { return &____listChanged_14; }
	inline void set__listChanged_14(ListChangedEventHandler_t02874ED3C8355742E3E62AED85A53F3140506B8C * value)
	{
		____listChanged_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____listChanged_14), (void*)value);
	}

	inline static int32_t get_offset_of__collectionChanged_15() { return static_cast<int32_t>(offsetof(JContainer_t3D0022FE4C9B2957A6612935AE890E97E371F19B, ____collectionChanged_15)); }
	inline NotifyCollectionChangedEventHandler_t737D98299AF810020BC5FC077CC664F46B6D0621 * get__collectionChanged_15() const { return ____collectionChanged_15; }
	inline NotifyCollectionChangedEventHandler_t737D98299AF810020BC5FC077CC664F46B6D0621 ** get_address_of__collectionChanged_15() { return &____collectionChanged_15; }
	inline void set__collectionChanged_15(NotifyCollectionChangedEventHandler_t737D98299AF810020BC5FC077CC664F46B6D0621 * value)
	{
		____collectionChanged_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____collectionChanged_15), (void*)value);
	}

	inline static int32_t get_offset_of__syncRoot_16() { return static_cast<int32_t>(offsetof(JContainer_t3D0022FE4C9B2957A6612935AE890E97E371F19B, ____syncRoot_16)); }
	inline RuntimeObject * get__syncRoot_16() const { return ____syncRoot_16; }
	inline RuntimeObject ** get_address_of__syncRoot_16() { return &____syncRoot_16; }
	inline void set__syncRoot_16(RuntimeObject * value)
	{
		____syncRoot_16 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_16), (void*)value);
	}

	inline static int32_t get_offset_of__busy_17() { return static_cast<int32_t>(offsetof(JContainer_t3D0022FE4C9B2957A6612935AE890E97E371F19B, ____busy_17)); }
	inline bool get__busy_17() const { return ____busy_17; }
	inline bool* get_address_of__busy_17() { return &____busy_17; }
	inline void set__busy_17(bool value)
	{
		____busy_17 = value;
	}
};


// TealiumCommon.LogLevel
struct LogLevel_tC8A9CB2FDD6BA29729D740AB210BD2214ACC9ECD 
{
public:
	// System.String TealiumCommon.LogLevel::<Value>k__BackingField
	String_t* ___U3CValueU3Ek__BackingField_0;

public:
	inline static int32_t get_offset_of_U3CValueU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(LogLevel_tC8A9CB2FDD6BA29729D740AB210BD2214ACC9ECD, ___U3CValueU3Ek__BackingField_0)); }
	inline String_t* get_U3CValueU3Ek__BackingField_0() const { return ___U3CValueU3Ek__BackingField_0; }
	inline String_t** get_address_of_U3CValueU3Ek__BackingField_0() { return &___U3CValueU3Ek__BackingField_0; }
	inline void set_U3CValueU3Ek__BackingField_0(String_t* value)
	{
		___U3CValueU3Ek__BackingField_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CValueU3Ek__BackingField_0), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of TealiumCommon.LogLevel
struct LogLevel_tC8A9CB2FDD6BA29729D740AB210BD2214ACC9ECD_marshaled_pinvoke
{
	char* ___U3CValueU3Ek__BackingField_0;
};
// Native definition for COM marshalling of TealiumCommon.LogLevel
struct LogLevel_tC8A9CB2FDD6BA29729D740AB210BD2214ACC9ECD_marshaled_com
{
	Il2CppChar* ___U3CValueU3Ek__BackingField_0;
};

// System.Runtime.CompilerServices.NullableAttribute
struct NullableAttribute_tB8A251B780438E6488EE0598956824F01072AD63  : public Attribute_t037CA9D9F3B742C063DB364D2EEBBF9FC5772C71
{
public:
	// System.Byte[] System.Runtime.CompilerServices.NullableAttribute::NullableFlags
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___NullableFlags_0;

public:
	inline static int32_t get_offset_of_NullableFlags_0() { return static_cast<int32_t>(offsetof(NullableAttribute_tB8A251B780438E6488EE0598956824F01072AD63, ___NullableFlags_0)); }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* get_NullableFlags_0() const { return ___NullableFlags_0; }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726** get_address_of_NullableFlags_0() { return &___NullableFlags_0; }
	inline void set_NullableFlags_0(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* value)
	{
		___NullableFlags_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___NullableFlags_0), (void*)value);
	}
};


// System.Runtime.CompilerServices.NullableContextAttribute
struct NullableContextAttribute_t697570588636776DE204716B19FA439C049BA167  : public Attribute_t037CA9D9F3B742C063DB364D2EEBBF9FC5772C71
{
public:
	// System.Byte System.Runtime.CompilerServices.NullableContextAttribute::Flag
	uint8_t ___Flag_0;

public:
	inline static int32_t get_offset_of_Flag_0() { return static_cast<int32_t>(offsetof(NullableContextAttribute_t697570588636776DE204716B19FA439C049BA167, ___Flag_0)); }
	inline uint8_t get_Flag_0() const { return ___Flag_0; }
	inline uint8_t* get_address_of_Flag_0() { return &___Flag_0; }
	inline void set_Flag_0(uint8_t value)
	{
		___Flag_0 = value;
	}
};


// TealiumCommon.TealiumEnvironment
struct TealiumEnvironment_t24AF72642DBC059461FBBF69A92B7A4EE25A7446 
{
public:
	// System.String TealiumCommon.TealiumEnvironment::<Value>k__BackingField
	String_t* ___U3CValueU3Ek__BackingField_0;

public:
	inline static int32_t get_offset_of_U3CValueU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(TealiumEnvironment_t24AF72642DBC059461FBBF69A92B7A4EE25A7446, ___U3CValueU3Ek__BackingField_0)); }
	inline String_t* get_U3CValueU3Ek__BackingField_0() const { return ___U3CValueU3Ek__BackingField_0; }
	inline String_t** get_address_of_U3CValueU3Ek__BackingField_0() { return &___U3CValueU3Ek__BackingField_0; }
	inline void set_U3CValueU3Ek__BackingField_0(String_t* value)
	{
		___U3CValueU3Ek__BackingField_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CValueU3Ek__BackingField_0), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of TealiumCommon.TealiumEnvironment
struct TealiumEnvironment_t24AF72642DBC059461FBBF69A92B7A4EE25A7446_marshaled_pinvoke
{
	char* ___U3CValueU3Ek__BackingField_0;
};
// Native definition for COM marshalling of TealiumCommon.TealiumEnvironment
struct TealiumEnvironment_t24AF72642DBC059461FBBF69A92B7A4EE25A7446_marshaled_com
{
	Il2CppChar* ___U3CValueU3Ek__BackingField_0;
};

// TealiumCommon.TealiumEvent
struct TealiumEvent_t276997051BFCEBF7FAC959F860C9F4C6B34E4023  : public TealiumDispatch_tBC7A4951FD4926BB6EFF74865AF1EC9D1C6BAFB9
{
public:
	// System.String TealiumCommon.TealiumEvent::type
	String_t* ___type_2;
	// System.String TealiumCommon.TealiumEvent::eventName
	String_t* ___eventName_3;
	// System.Collections.Generic.Dictionary`2<System.String,System.Object> TealiumCommon.TealiumEvent::dataLayer
	Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 * ___dataLayer_4;

public:
	inline static int32_t get_offset_of_type_2() { return static_cast<int32_t>(offsetof(TealiumEvent_t276997051BFCEBF7FAC959F860C9F4C6B34E4023, ___type_2)); }
	inline String_t* get_type_2() const { return ___type_2; }
	inline String_t** get_address_of_type_2() { return &___type_2; }
	inline void set_type_2(String_t* value)
	{
		___type_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___type_2), (void*)value);
	}

	inline static int32_t get_offset_of_eventName_3() { return static_cast<int32_t>(offsetof(TealiumEvent_t276997051BFCEBF7FAC959F860C9F4C6B34E4023, ___eventName_3)); }
	inline String_t* get_eventName_3() const { return ___eventName_3; }
	inline String_t** get_address_of_eventName_3() { return &___eventName_3; }
	inline void set_eventName_3(String_t* value)
	{
		___eventName_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___eventName_3), (void*)value);
	}

	inline static int32_t get_offset_of_dataLayer_4() { return static_cast<int32_t>(offsetof(TealiumEvent_t276997051BFCEBF7FAC959F860C9F4C6B34E4023, ___dataLayer_4)); }
	inline Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 * get_dataLayer_4() const { return ___dataLayer_4; }
	inline Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 ** get_address_of_dataLayer_4() { return &___dataLayer_4; }
	inline void set_dataLayer_4(Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 * value)
	{
		___dataLayer_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___dataLayer_4), (void*)value);
	}
};


// TealiumCommon.TealiumView
struct TealiumView_tC9D20EFC963EBBF82B70428435F13CE3D6417716  : public TealiumDispatch_tBC7A4951FD4926BB6EFF74865AF1EC9D1C6BAFB9
{
public:
	// System.String TealiumCommon.TealiumView::type
	String_t* ___type_2;
	// System.String TealiumCommon.TealiumView::viewName
	String_t* ___viewName_3;
	// System.Collections.Generic.Dictionary`2<System.String,System.Object> TealiumCommon.TealiumView::dataLayer
	Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 * ___dataLayer_4;

public:
	inline static int32_t get_offset_of_type_2() { return static_cast<int32_t>(offsetof(TealiumView_tC9D20EFC963EBBF82B70428435F13CE3D6417716, ___type_2)); }
	inline String_t* get_type_2() const { return ___type_2; }
	inline String_t** get_address_of_type_2() { return &___type_2; }
	inline void set_type_2(String_t* value)
	{
		___type_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___type_2), (void*)value);
	}

	inline static int32_t get_offset_of_viewName_3() { return static_cast<int32_t>(offsetof(TealiumView_tC9D20EFC963EBBF82B70428435F13CE3D6417716, ___viewName_3)); }
	inline String_t* get_viewName_3() const { return ___viewName_3; }
	inline String_t** get_address_of_viewName_3() { return &___viewName_3; }
	inline void set_viewName_3(String_t* value)
	{
		___viewName_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___viewName_3), (void*)value);
	}

	inline static int32_t get_offset_of_dataLayer_4() { return static_cast<int32_t>(offsetof(TealiumView_tC9D20EFC963EBBF82B70428435F13CE3D6417716, ___dataLayer_4)); }
	inline Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 * get_dataLayer_4() const { return ___dataLayer_4; }
	inline Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 ** get_address_of_dataLayer_4() { return &___dataLayer_4; }
	inline void set_dataLayer_4(Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 * value)
	{
		___dataLayer_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___dataLayer_4), (void*)value);
	}
};


// TealiumCommon.TimeUnit
struct TimeUnit_tEDC26F433AD0E93FB173CBB14399B6B806B7F78D 
{
public:
	// System.String TealiumCommon.TimeUnit::<Value>k__BackingField
	String_t* ___U3CValueU3Ek__BackingField_0;

public:
	inline static int32_t get_offset_of_U3CValueU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(TimeUnit_tEDC26F433AD0E93FB173CBB14399B6B806B7F78D, ___U3CValueU3Ek__BackingField_0)); }
	inline String_t* get_U3CValueU3Ek__BackingField_0() const { return ___U3CValueU3Ek__BackingField_0; }
	inline String_t** get_address_of_U3CValueU3Ek__BackingField_0() { return &___U3CValueU3Ek__BackingField_0; }
	inline void set_U3CValueU3Ek__BackingField_0(String_t* value)
	{
		___U3CValueU3Ek__BackingField_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CValueU3Ek__BackingField_0), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of TealiumCommon.TimeUnit
struct TimeUnit_tEDC26F433AD0E93FB173CBB14399B6B806B7F78D_marshaled_pinvoke
{
	char* ___U3CValueU3Ek__BackingField_0;
};
// Native definition for COM marshalling of TealiumCommon.TimeUnit
struct TimeUnit_tEDC26F433AD0E93FB173CBB14399B6B806B7F78D_marshaled_com
{
	Il2CppChar* ___U3CValueU3Ek__BackingField_0;
};

// System.Void
struct Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5 
{
public:
	union
	{
		struct
		{
		};
		uint8_t Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5__padding[1];
	};

public:
};


// System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Object>
struct Enumerator_tE4E91EE5578038530CF0C46227953BA787E7A0A0 
{
public:
	// System.Collections.Generic.Dictionary`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator::dictionary
	Dictionary_2_tBD1E3221EBD04CEBDA49B84779912E91F56B958D * ___dictionary_0;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::version
	int32_t ___version_1;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::index
	int32_t ___index_2;
	// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator::current
	KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625  ___current_3;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::getEnumeratorRetType
	int32_t ___getEnumeratorRetType_4;

public:
	inline static int32_t get_offset_of_dictionary_0() { return static_cast<int32_t>(offsetof(Enumerator_tE4E91EE5578038530CF0C46227953BA787E7A0A0, ___dictionary_0)); }
	inline Dictionary_2_tBD1E3221EBD04CEBDA49B84779912E91F56B958D * get_dictionary_0() const { return ___dictionary_0; }
	inline Dictionary_2_tBD1E3221EBD04CEBDA49B84779912E91F56B958D ** get_address_of_dictionary_0() { return &___dictionary_0; }
	inline void set_dictionary_0(Dictionary_2_tBD1E3221EBD04CEBDA49B84779912E91F56B958D * value)
	{
		___dictionary_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___dictionary_0), (void*)value);
	}

	inline static int32_t get_offset_of_version_1() { return static_cast<int32_t>(offsetof(Enumerator_tE4E91EE5578038530CF0C46227953BA787E7A0A0, ___version_1)); }
	inline int32_t get_version_1() const { return ___version_1; }
	inline int32_t* get_address_of_version_1() { return &___version_1; }
	inline void set_version_1(int32_t value)
	{
		___version_1 = value;
	}

	inline static int32_t get_offset_of_index_2() { return static_cast<int32_t>(offsetof(Enumerator_tE4E91EE5578038530CF0C46227953BA787E7A0A0, ___index_2)); }
	inline int32_t get_index_2() const { return ___index_2; }
	inline int32_t* get_address_of_index_2() { return &___index_2; }
	inline void set_index_2(int32_t value)
	{
		___index_2 = value;
	}

	inline static int32_t get_offset_of_current_3() { return static_cast<int32_t>(offsetof(Enumerator_tE4E91EE5578038530CF0C46227953BA787E7A0A0, ___current_3)); }
	inline KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625  get_current_3() const { return ___current_3; }
	inline KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625 * get_address_of_current_3() { return &___current_3; }
	inline void set_current_3(KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625  value)
	{
		___current_3 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___current_3))->___key_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___current_3))->___value_1), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_getEnumeratorRetType_4() { return static_cast<int32_t>(offsetof(Enumerator_tE4E91EE5578038530CF0C46227953BA787E7A0A0, ___getEnumeratorRetType_4)); }
	inline int32_t get_getEnumeratorRetType_4() const { return ___getEnumeratorRetType_4; }
	inline int32_t* get_address_of_getEnumeratorRetType_4() { return &___getEnumeratorRetType_4; }
	inline void set_getEnumeratorRetType_4(int32_t value)
	{
		___getEnumeratorRetType_4 = value;
	}
};


// System.Collections.Generic.Dictionary`2/Enumerator<System.String,System.Object>
struct Enumerator_t3E7848C1896025E8CF7A49817DB0E38F0ADD0E15 
{
public:
	// System.Collections.Generic.Dictionary`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator::dictionary
	Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 * ___dictionary_0;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::version
	int32_t ___version_1;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::index
	int32_t ___index_2;
	// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator::current
	KeyValuePair_2_tD6E57B7EAC6134DCA97F39E5E598EB43B44A5EAE  ___current_3;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::getEnumeratorRetType
	int32_t ___getEnumeratorRetType_4;

public:
	inline static int32_t get_offset_of_dictionary_0() { return static_cast<int32_t>(offsetof(Enumerator_t3E7848C1896025E8CF7A49817DB0E38F0ADD0E15, ___dictionary_0)); }
	inline Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 * get_dictionary_0() const { return ___dictionary_0; }
	inline Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 ** get_address_of_dictionary_0() { return &___dictionary_0; }
	inline void set_dictionary_0(Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 * value)
	{
		___dictionary_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___dictionary_0), (void*)value);
	}

	inline static int32_t get_offset_of_version_1() { return static_cast<int32_t>(offsetof(Enumerator_t3E7848C1896025E8CF7A49817DB0E38F0ADD0E15, ___version_1)); }
	inline int32_t get_version_1() const { return ___version_1; }
	inline int32_t* get_address_of_version_1() { return &___version_1; }
	inline void set_version_1(int32_t value)
	{
		___version_1 = value;
	}

	inline static int32_t get_offset_of_index_2() { return static_cast<int32_t>(offsetof(Enumerator_t3E7848C1896025E8CF7A49817DB0E38F0ADD0E15, ___index_2)); }
	inline int32_t get_index_2() const { return ___index_2; }
	inline int32_t* get_address_of_index_2() { return &___index_2; }
	inline void set_index_2(int32_t value)
	{
		___index_2 = value;
	}

	inline static int32_t get_offset_of_current_3() { return static_cast<int32_t>(offsetof(Enumerator_t3E7848C1896025E8CF7A49817DB0E38F0ADD0E15, ___current_3)); }
	inline KeyValuePair_2_tD6E57B7EAC6134DCA97F39E5E598EB43B44A5EAE  get_current_3() const { return ___current_3; }
	inline KeyValuePair_2_tD6E57B7EAC6134DCA97F39E5E598EB43B44A5EAE * get_address_of_current_3() { return &___current_3; }
	inline void set_current_3(KeyValuePair_2_tD6E57B7EAC6134DCA97F39E5E598EB43B44A5EAE  value)
	{
		___current_3 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___current_3))->___key_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___current_3))->___value_1), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_getEnumeratorRetType_4() { return static_cast<int32_t>(offsetof(Enumerator_t3E7848C1896025E8CF7A49817DB0E38F0ADD0E15, ___getEnumeratorRetType_4)); }
	inline int32_t get_getEnumeratorRetType_4() const { return ___getEnumeratorRetType_4; }
	inline int32_t* get_address_of_getEnumeratorRetType_4() { return &___getEnumeratorRetType_4; }
	inline void set_getEnumeratorRetType_4(int32_t value)
	{
		___getEnumeratorRetType_4 = value;
	}
};


// System.Nullable`1<TealiumCommon.ConsentPolicy>
struct Nullable_1_t10B092B32DAE6088B0BC1F2903DC4B4D0A477307 
{
public:
	// T System.Nullable`1::value
	ConsentPolicy_tA405DFF59561F55C0C5C738E3ECC75B8032B6A01  ___value_0;
	// System.Boolean System.Nullable`1::has_value
	bool ___has_value_1;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(Nullable_1_t10B092B32DAE6088B0BC1F2903DC4B4D0A477307, ___value_0)); }
	inline ConsentPolicy_tA405DFF59561F55C0C5C738E3ECC75B8032B6A01  get_value_0() const { return ___value_0; }
	inline ConsentPolicy_tA405DFF59561F55C0C5C738E3ECC75B8032B6A01 * get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(ConsentPolicy_tA405DFF59561F55C0C5C738E3ECC75B8032B6A01  value)
	{
		___value_0 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___value_0))->___U3CValueU3Ek__BackingField_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_has_value_1() { return static_cast<int32_t>(offsetof(Nullable_1_t10B092B32DAE6088B0BC1F2903DC4B4D0A477307, ___has_value_1)); }
	inline bool get_has_value_1() const { return ___has_value_1; }
	inline bool* get_address_of_has_value_1() { return &___has_value_1; }
	inline void set_has_value_1(bool value)
	{
		___has_value_1 = value;
	}
};


// System.Nullable`1<TealiumCommon.LogLevel>
struct Nullable_1_tEDD6DE645137CA544DA6DFB826B36BF4C9425A28 
{
public:
	// T System.Nullable`1::value
	LogLevel_tC8A9CB2FDD6BA29729D740AB210BD2214ACC9ECD  ___value_0;
	// System.Boolean System.Nullable`1::has_value
	bool ___has_value_1;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(Nullable_1_tEDD6DE645137CA544DA6DFB826B36BF4C9425A28, ___value_0)); }
	inline LogLevel_tC8A9CB2FDD6BA29729D740AB210BD2214ACC9ECD  get_value_0() const { return ___value_0; }
	inline LogLevel_tC8A9CB2FDD6BA29729D740AB210BD2214ACC9ECD * get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(LogLevel_tC8A9CB2FDD6BA29729D740AB210BD2214ACC9ECD  value)
	{
		___value_0 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___value_0))->___U3CValueU3Ek__BackingField_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_has_value_1() { return static_cast<int32_t>(offsetof(Nullable_1_tEDD6DE645137CA544DA6DFB826B36BF4C9425A28, ___has_value_1)); }
	inline bool get_has_value_1() const { return ___has_value_1; }
	inline bool* get_address_of_has_value_1() { return &___has_value_1; }
	inline void set_has_value_1(bool value)
	{
		___has_value_1 = value;
	}
};


// System.Reflection.BindingFlags
struct BindingFlags_tAAAB07D9AC588F0D55D844E51D7035E96DF94733 
{
public:
	// System.Int32 System.Reflection.BindingFlags::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(BindingFlags_tAAAB07D9AC588F0D55D844E51D7035E96DF94733, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// TealiumCommon.ConsentExpiry
struct ConsentExpiry_tF0E363E167F8B963812764554538F6BD7ABF9BC5  : public RuntimeObject
{
public:
	// System.Int32 TealiumCommon.ConsentExpiry::time
	int32_t ___time_0;
	// TealiumCommon.TimeUnit TealiumCommon.ConsentExpiry::timeUnit
	TimeUnit_tEDC26F433AD0E93FB173CBB14399B6B806B7F78D  ___timeUnit_1;

public:
	inline static int32_t get_offset_of_time_0() { return static_cast<int32_t>(offsetof(ConsentExpiry_tF0E363E167F8B963812764554538F6BD7ABF9BC5, ___time_0)); }
	inline int32_t get_time_0() const { return ___time_0; }
	inline int32_t* get_address_of_time_0() { return &___time_0; }
	inline void set_time_0(int32_t value)
	{
		___time_0 = value;
	}

	inline static int32_t get_offset_of_timeUnit_1() { return static_cast<int32_t>(offsetof(ConsentExpiry_tF0E363E167F8B963812764554538F6BD7ABF9BC5, ___timeUnit_1)); }
	inline TimeUnit_tEDC26F433AD0E93FB173CBB14399B6B806B7F78D  get_timeUnit_1() const { return ___timeUnit_1; }
	inline TimeUnit_tEDC26F433AD0E93FB173CBB14399B6B806B7F78D * get_address_of_timeUnit_1() { return &___timeUnit_1; }
	inline void set_timeUnit_1(TimeUnit_tEDC26F433AD0E93FB173CBB14399B6B806B7F78D  value)
	{
		___timeUnit_1 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___timeUnit_1))->___U3CValueU3Ek__BackingField_0), (void*)NULL);
	}
};


// System.Delegate
struct Delegate_t  : public RuntimeObject
{
public:
	// System.IntPtr System.Delegate::method_ptr
	Il2CppMethodPointer ___method_ptr_0;
	// System.IntPtr System.Delegate::invoke_impl
	intptr_t ___invoke_impl_1;
	// System.Object System.Delegate::m_target
	RuntimeObject * ___m_target_2;
	// System.IntPtr System.Delegate::method
	intptr_t ___method_3;
	// System.IntPtr System.Delegate::delegate_trampoline
	intptr_t ___delegate_trampoline_4;
	// System.IntPtr System.Delegate::extra_arg
	intptr_t ___extra_arg_5;
	// System.IntPtr System.Delegate::method_code
	intptr_t ___method_code_6;
	// System.Reflection.MethodInfo System.Delegate::method_info
	MethodInfo_t * ___method_info_7;
	// System.Reflection.MethodInfo System.Delegate::original_method_info
	MethodInfo_t * ___original_method_info_8;
	// System.DelegateData System.Delegate::data
	DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 * ___data_9;
	// System.Boolean System.Delegate::method_is_virtual
	bool ___method_is_virtual_10;

public:
	inline static int32_t get_offset_of_method_ptr_0() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_ptr_0)); }
	inline Il2CppMethodPointer get_method_ptr_0() const { return ___method_ptr_0; }
	inline Il2CppMethodPointer* get_address_of_method_ptr_0() { return &___method_ptr_0; }
	inline void set_method_ptr_0(Il2CppMethodPointer value)
	{
		___method_ptr_0 = value;
	}

	inline static int32_t get_offset_of_invoke_impl_1() { return static_cast<int32_t>(offsetof(Delegate_t, ___invoke_impl_1)); }
	inline intptr_t get_invoke_impl_1() const { return ___invoke_impl_1; }
	inline intptr_t* get_address_of_invoke_impl_1() { return &___invoke_impl_1; }
	inline void set_invoke_impl_1(intptr_t value)
	{
		___invoke_impl_1 = value;
	}

	inline static int32_t get_offset_of_m_target_2() { return static_cast<int32_t>(offsetof(Delegate_t, ___m_target_2)); }
	inline RuntimeObject * get_m_target_2() const { return ___m_target_2; }
	inline RuntimeObject ** get_address_of_m_target_2() { return &___m_target_2; }
	inline void set_m_target_2(RuntimeObject * value)
	{
		___m_target_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_target_2), (void*)value);
	}

	inline static int32_t get_offset_of_method_3() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_3)); }
	inline intptr_t get_method_3() const { return ___method_3; }
	inline intptr_t* get_address_of_method_3() { return &___method_3; }
	inline void set_method_3(intptr_t value)
	{
		___method_3 = value;
	}

	inline static int32_t get_offset_of_delegate_trampoline_4() { return static_cast<int32_t>(offsetof(Delegate_t, ___delegate_trampoline_4)); }
	inline intptr_t get_delegate_trampoline_4() const { return ___delegate_trampoline_4; }
	inline intptr_t* get_address_of_delegate_trampoline_4() { return &___delegate_trampoline_4; }
	inline void set_delegate_trampoline_4(intptr_t value)
	{
		___delegate_trampoline_4 = value;
	}

	inline static int32_t get_offset_of_extra_arg_5() { return static_cast<int32_t>(offsetof(Delegate_t, ___extra_arg_5)); }
	inline intptr_t get_extra_arg_5() const { return ___extra_arg_5; }
	inline intptr_t* get_address_of_extra_arg_5() { return &___extra_arg_5; }
	inline void set_extra_arg_5(intptr_t value)
	{
		___extra_arg_5 = value;
	}

	inline static int32_t get_offset_of_method_code_6() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_code_6)); }
	inline intptr_t get_method_code_6() const { return ___method_code_6; }
	inline intptr_t* get_address_of_method_code_6() { return &___method_code_6; }
	inline void set_method_code_6(intptr_t value)
	{
		___method_code_6 = value;
	}

	inline static int32_t get_offset_of_method_info_7() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_info_7)); }
	inline MethodInfo_t * get_method_info_7() const { return ___method_info_7; }
	inline MethodInfo_t ** get_address_of_method_info_7() { return &___method_info_7; }
	inline void set_method_info_7(MethodInfo_t * value)
	{
		___method_info_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___method_info_7), (void*)value);
	}

	inline static int32_t get_offset_of_original_method_info_8() { return static_cast<int32_t>(offsetof(Delegate_t, ___original_method_info_8)); }
	inline MethodInfo_t * get_original_method_info_8() const { return ___original_method_info_8; }
	inline MethodInfo_t ** get_address_of_original_method_info_8() { return &___original_method_info_8; }
	inline void set_original_method_info_8(MethodInfo_t * value)
	{
		___original_method_info_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___original_method_info_8), (void*)value);
	}

	inline static int32_t get_offset_of_data_9() { return static_cast<int32_t>(offsetof(Delegate_t, ___data_9)); }
	inline DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 * get_data_9() const { return ___data_9; }
	inline DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 ** get_address_of_data_9() { return &___data_9; }
	inline void set_data_9(DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 * value)
	{
		___data_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___data_9), (void*)value);
	}

	inline static int32_t get_offset_of_method_is_virtual_10() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_is_virtual_10)); }
	inline bool get_method_is_virtual_10() const { return ___method_is_virtual_10; }
	inline bool* get_address_of_method_is_virtual_10() { return &___method_is_virtual_10; }
	inline void set_method_is_virtual_10(bool value)
	{
		___method_is_virtual_10 = value;
	}
};

// Native definition for P/Invoke marshalling of System.Delegate
struct Delegate_t_marshaled_pinvoke
{
	intptr_t ___method_ptr_0;
	intptr_t ___invoke_impl_1;
	Il2CppIUnknown* ___m_target_2;
	intptr_t ___method_3;
	intptr_t ___delegate_trampoline_4;
	intptr_t ___extra_arg_5;
	intptr_t ___method_code_6;
	MethodInfo_t * ___method_info_7;
	MethodInfo_t * ___original_method_info_8;
	DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 * ___data_9;
	int32_t ___method_is_virtual_10;
};
// Native definition for COM marshalling of System.Delegate
struct Delegate_t_marshaled_com
{
	intptr_t ___method_ptr_0;
	intptr_t ___invoke_impl_1;
	Il2CppIUnknown* ___m_target_2;
	intptr_t ___method_3;
	intptr_t ___delegate_trampoline_4;
	intptr_t ___extra_arg_5;
	intptr_t ___method_code_6;
	MethodInfo_t * ___method_info_7;
	MethodInfo_t * ___original_method_info_8;
	DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 * ___data_9;
	int32_t ___method_is_virtual_10;
};

// Newtonsoft.Json.Linq.JArray
struct JArray_t9F02428A8EE6460B1AB0CA1FB5D2C9EE7332E7B3  : public JContainer_t3D0022FE4C9B2957A6612935AE890E97E371F19B
{
public:
	// System.Collections.Generic.List`1<Newtonsoft.Json.Linq.JToken> Newtonsoft.Json.Linq.JArray::_values
	List_1_t927A2894CCD5A588CF02AE69AF208A395DF3ED3A * ____values_18;

public:
	inline static int32_t get_offset_of__values_18() { return static_cast<int32_t>(offsetof(JArray_t9F02428A8EE6460B1AB0CA1FB5D2C9EE7332E7B3, ____values_18)); }
	inline List_1_t927A2894CCD5A588CF02AE69AF208A395DF3ED3A * get__values_18() const { return ____values_18; }
	inline List_1_t927A2894CCD5A588CF02AE69AF208A395DF3ED3A ** get_address_of__values_18() { return &____values_18; }
	inline void set__values_18(List_1_t927A2894CCD5A588CF02AE69AF208A395DF3ED3A * value)
	{
		____values_18 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____values_18), (void*)value);
	}
};


// Newtonsoft.Json.Linq.JObject
struct JObject_t55E456F4BAFC1A97265C571EDE7F421663976807  : public JContainer_t3D0022FE4C9B2957A6612935AE890E97E371F19B
{
public:
	// Newtonsoft.Json.Linq.JPropertyKeyedCollection Newtonsoft.Json.Linq.JObject::_properties
	JPropertyKeyedCollection_t6A2B68E3332E7964E0E7CC57B6A06FE4895381E2 * ____properties_18;
	// System.ComponentModel.PropertyChangedEventHandler Newtonsoft.Json.Linq.JObject::PropertyChanged
	PropertyChangedEventHandler_t094CCD63C952DCD4E1ED794434160679C28A8E99 * ___PropertyChanged_19;
	// System.ComponentModel.PropertyChangingEventHandler Newtonsoft.Json.Linq.JObject::PropertyChanging
	PropertyChangingEventHandler_t5EA6F6EAA933D35C0AAD9D347A3BD53D343E4C22 * ___PropertyChanging_20;

public:
	inline static int32_t get_offset_of__properties_18() { return static_cast<int32_t>(offsetof(JObject_t55E456F4BAFC1A97265C571EDE7F421663976807, ____properties_18)); }
	inline JPropertyKeyedCollection_t6A2B68E3332E7964E0E7CC57B6A06FE4895381E2 * get__properties_18() const { return ____properties_18; }
	inline JPropertyKeyedCollection_t6A2B68E3332E7964E0E7CC57B6A06FE4895381E2 ** get_address_of__properties_18() { return &____properties_18; }
	inline void set__properties_18(JPropertyKeyedCollection_t6A2B68E3332E7964E0E7CC57B6A06FE4895381E2 * value)
	{
		____properties_18 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____properties_18), (void*)value);
	}

	inline static int32_t get_offset_of_PropertyChanged_19() { return static_cast<int32_t>(offsetof(JObject_t55E456F4BAFC1A97265C571EDE7F421663976807, ___PropertyChanged_19)); }
	inline PropertyChangedEventHandler_t094CCD63C952DCD4E1ED794434160679C28A8E99 * get_PropertyChanged_19() const { return ___PropertyChanged_19; }
	inline PropertyChangedEventHandler_t094CCD63C952DCD4E1ED794434160679C28A8E99 ** get_address_of_PropertyChanged_19() { return &___PropertyChanged_19; }
	inline void set_PropertyChanged_19(PropertyChangedEventHandler_t094CCD63C952DCD4E1ED794434160679C28A8E99 * value)
	{
		___PropertyChanged_19 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___PropertyChanged_19), (void*)value);
	}

	inline static int32_t get_offset_of_PropertyChanging_20() { return static_cast<int32_t>(offsetof(JObject_t55E456F4BAFC1A97265C571EDE7F421663976807, ___PropertyChanging_20)); }
	inline PropertyChangingEventHandler_t5EA6F6EAA933D35C0AAD9D347A3BD53D343E4C22 * get_PropertyChanging_20() const { return ___PropertyChanging_20; }
	inline PropertyChangingEventHandler_t5EA6F6EAA933D35C0AAD9D347A3BD53D343E4C22 ** get_address_of_PropertyChanging_20() { return &___PropertyChanging_20; }
	inline void set_PropertyChanging_20(PropertyChangingEventHandler_t5EA6F6EAA933D35C0AAD9D347A3BD53D343E4C22 * value)
	{
		___PropertyChanging_20 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___PropertyChanging_20), (void*)value);
	}
};


// UnityEngine.LogOption
struct LogOption_t51E8F1B430A667101ABEAD997CDA50BDBEE65A57 
{
public:
	// System.Int32 UnityEngine.LogOption::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(LogOption_t51E8F1B430A667101ABEAD997CDA50BDBEE65A57, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.LogType
struct LogType_tF490DBF8368BD4EBA703B2824CB76A853820F773 
{
public:
	// System.Int32 UnityEngine.LogType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(LogType_tF490DBF8368BD4EBA703B2824CB76A853820F773, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.Object
struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.Object::m_CachedPtr
	intptr_t ___m_CachedPtr_0;

public:
	inline static int32_t get_offset_of_m_CachedPtr_0() { return static_cast<int32_t>(offsetof(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A, ___m_CachedPtr_0)); }
	inline intptr_t get_m_CachedPtr_0() const { return ___m_CachedPtr_0; }
	inline intptr_t* get_address_of_m_CachedPtr_0() { return &___m_CachedPtr_0; }
	inline void set_m_CachedPtr_0(intptr_t value)
	{
		___m_CachedPtr_0 = value;
	}
};

struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_StaticFields
{
public:
	// System.Int32 UnityEngine.Object::OffsetOfInstanceIDInCPlusPlusObject
	int32_t ___OffsetOfInstanceIDInCPlusPlusObject_1;

public:
	inline static int32_t get_offset_of_OffsetOfInstanceIDInCPlusPlusObject_1() { return static_cast<int32_t>(offsetof(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_StaticFields, ___OffsetOfInstanceIDInCPlusPlusObject_1)); }
	inline int32_t get_OffsetOfInstanceIDInCPlusPlusObject_1() const { return ___OffsetOfInstanceIDInCPlusPlusObject_1; }
	inline int32_t* get_address_of_OffsetOfInstanceIDInCPlusPlusObject_1() { return &___OffsetOfInstanceIDInCPlusPlusObject_1; }
	inline void set_OffsetOfInstanceIDInCPlusPlusObject_1(int32_t value)
	{
		___OffsetOfInstanceIDInCPlusPlusObject_1 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.Object
struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_marshaled_pinvoke
{
	intptr_t ___m_CachedPtr_0;
};
// Native definition for COM marshalling of UnityEngine.Object
struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_marshaled_com
{
	intptr_t ___m_CachedPtr_0;
};

// System.RuntimeTypeHandle
struct RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9 
{
public:
	// System.IntPtr System.RuntimeTypeHandle::value
	intptr_t ___value_0;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9, ___value_0)); }
	inline intptr_t get_value_0() const { return ___value_0; }
	inline intptr_t* get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(intptr_t value)
	{
		___value_0 = value;
	}
};


// TealiumCommon.TealiumConfig
struct TealiumConfig_t57F15E74367FE1C2622F3D0395F144F4D505F4B7  : public RuntimeObject
{
public:
	// System.String TealiumCommon.TealiumConfig::account
	String_t* ___account_0;
	// System.String TealiumCommon.TealiumConfig::profile
	String_t* ___profile_1;
	// System.String TealiumCommon.TealiumConfig::environment
	String_t* ___environment_2;
	// System.Collections.Generic.List`1<System.String> TealiumCommon.TealiumConfig::collectors
	List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * ___collectors_3;
	// System.Collections.Generic.List`1<System.String> TealiumCommon.TealiumConfig::dispatchers
	List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * ___dispatchers_4;
	// System.String TealiumCommon.TealiumConfig::dataSource
	String_t* ___dataSource_5;
	// System.String TealiumCommon.TealiumConfig::customVisitorId
	String_t* ___customVisitorId_6;
	// System.Nullable`1<System.Boolean> TealiumCommon.TealiumConfig::memoryReportingEnabled
	Nullable_1_t1D1CD146BFCBDC2E53E1F700889F8C5C21063EF3  ___memoryReportingEnabled_7;
	// System.String TealiumCommon.TealiumConfig::overrideCollectURL
	String_t* ___overrideCollectURL_8;
	// System.String TealiumCommon.TealiumConfig::overrideCollectBatchURL
	String_t* ___overrideCollectBatchURL_9;
	// System.String TealiumCommon.TealiumConfig::overrideCollectDomain
	String_t* ___overrideCollectDomain_10;
	// System.String TealiumCommon.TealiumConfig::overrideLibrarySettingsURL
	String_t* ___overrideLibrarySettingsURL_11;
	// System.String TealiumCommon.TealiumConfig::overrideTagManagementURL
	String_t* ___overrideTagManagementURL_12;
	// System.Nullable`1<System.Boolean> TealiumCommon.TealiumConfig::deepLinkTrackingEnabled
	Nullable_1_t1D1CD146BFCBDC2E53E1F700889F8C5C21063EF3  ___deepLinkTrackingEnabled_13;
	// System.Nullable`1<System.Boolean> TealiumCommon.TealiumConfig::qrTraceEnabled
	Nullable_1_t1D1CD146BFCBDC2E53E1F700889F8C5C21063EF3  ___qrTraceEnabled_14;
	// System.String TealiumCommon.TealiumConfig::logLevel
	String_t* ___logLevel_15;
	// System.Nullable`1<System.Boolean> TealiumCommon.TealiumConfig::consentLoggingEnabled
	Nullable_1_t1D1CD146BFCBDC2E53E1F700889F8C5C21063EF3  ___consentLoggingEnabled_16;
	// System.String TealiumCommon.TealiumConfig::consentPolicy
	String_t* ___consentPolicy_17;
	// System.Collections.Generic.Dictionary`2<System.String,System.Object> TealiumCommon.TealiumConfig::consentExpiry
	Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 * ___consentExpiry_18;
	// System.Nullable`1<System.Boolean> TealiumCommon.TealiumConfig::batchingEnabled
	Nullable_1_t1D1CD146BFCBDC2E53E1F700889F8C5C21063EF3  ___batchingEnabled_19;
	// System.Nullable`1<System.Boolean> TealiumCommon.TealiumConfig::lifecycleAutotrackingEnabled
	Nullable_1_t1D1CD146BFCBDC2E53E1F700889F8C5C21063EF3  ___lifecycleAutotrackingEnabled_20;
	// System.Nullable`1<System.Boolean> TealiumCommon.TealiumConfig::useRemoteLibrarySettings
	Nullable_1_t1D1CD146BFCBDC2E53E1F700889F8C5C21063EF3  ___useRemoteLibrarySettings_21;
	// System.Nullable`1<System.Boolean> TealiumCommon.TealiumConfig::visitorServiceEnabled
	Nullable_1_t1D1CD146BFCBDC2E53E1F700889F8C5C21063EF3  ___visitorServiceEnabled_22;

public:
	inline static int32_t get_offset_of_account_0() { return static_cast<int32_t>(offsetof(TealiumConfig_t57F15E74367FE1C2622F3D0395F144F4D505F4B7, ___account_0)); }
	inline String_t* get_account_0() const { return ___account_0; }
	inline String_t** get_address_of_account_0() { return &___account_0; }
	inline void set_account_0(String_t* value)
	{
		___account_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___account_0), (void*)value);
	}

	inline static int32_t get_offset_of_profile_1() { return static_cast<int32_t>(offsetof(TealiumConfig_t57F15E74367FE1C2622F3D0395F144F4D505F4B7, ___profile_1)); }
	inline String_t* get_profile_1() const { return ___profile_1; }
	inline String_t** get_address_of_profile_1() { return &___profile_1; }
	inline void set_profile_1(String_t* value)
	{
		___profile_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___profile_1), (void*)value);
	}

	inline static int32_t get_offset_of_environment_2() { return static_cast<int32_t>(offsetof(TealiumConfig_t57F15E74367FE1C2622F3D0395F144F4D505F4B7, ___environment_2)); }
	inline String_t* get_environment_2() const { return ___environment_2; }
	inline String_t** get_address_of_environment_2() { return &___environment_2; }
	inline void set_environment_2(String_t* value)
	{
		___environment_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___environment_2), (void*)value);
	}

	inline static int32_t get_offset_of_collectors_3() { return static_cast<int32_t>(offsetof(TealiumConfig_t57F15E74367FE1C2622F3D0395F144F4D505F4B7, ___collectors_3)); }
	inline List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * get_collectors_3() const { return ___collectors_3; }
	inline List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 ** get_address_of_collectors_3() { return &___collectors_3; }
	inline void set_collectors_3(List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * value)
	{
		___collectors_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___collectors_3), (void*)value);
	}

	inline static int32_t get_offset_of_dispatchers_4() { return static_cast<int32_t>(offsetof(TealiumConfig_t57F15E74367FE1C2622F3D0395F144F4D505F4B7, ___dispatchers_4)); }
	inline List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * get_dispatchers_4() const { return ___dispatchers_4; }
	inline List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 ** get_address_of_dispatchers_4() { return &___dispatchers_4; }
	inline void set_dispatchers_4(List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * value)
	{
		___dispatchers_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___dispatchers_4), (void*)value);
	}

	inline static int32_t get_offset_of_dataSource_5() { return static_cast<int32_t>(offsetof(TealiumConfig_t57F15E74367FE1C2622F3D0395F144F4D505F4B7, ___dataSource_5)); }
	inline String_t* get_dataSource_5() const { return ___dataSource_5; }
	inline String_t** get_address_of_dataSource_5() { return &___dataSource_5; }
	inline void set_dataSource_5(String_t* value)
	{
		___dataSource_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___dataSource_5), (void*)value);
	}

	inline static int32_t get_offset_of_customVisitorId_6() { return static_cast<int32_t>(offsetof(TealiumConfig_t57F15E74367FE1C2622F3D0395F144F4D505F4B7, ___customVisitorId_6)); }
	inline String_t* get_customVisitorId_6() const { return ___customVisitorId_6; }
	inline String_t** get_address_of_customVisitorId_6() { return &___customVisitorId_6; }
	inline void set_customVisitorId_6(String_t* value)
	{
		___customVisitorId_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___customVisitorId_6), (void*)value);
	}

	inline static int32_t get_offset_of_memoryReportingEnabled_7() { return static_cast<int32_t>(offsetof(TealiumConfig_t57F15E74367FE1C2622F3D0395F144F4D505F4B7, ___memoryReportingEnabled_7)); }
	inline Nullable_1_t1D1CD146BFCBDC2E53E1F700889F8C5C21063EF3  get_memoryReportingEnabled_7() const { return ___memoryReportingEnabled_7; }
	inline Nullable_1_t1D1CD146BFCBDC2E53E1F700889F8C5C21063EF3 * get_address_of_memoryReportingEnabled_7() { return &___memoryReportingEnabled_7; }
	inline void set_memoryReportingEnabled_7(Nullable_1_t1D1CD146BFCBDC2E53E1F700889F8C5C21063EF3  value)
	{
		___memoryReportingEnabled_7 = value;
	}

	inline static int32_t get_offset_of_overrideCollectURL_8() { return static_cast<int32_t>(offsetof(TealiumConfig_t57F15E74367FE1C2622F3D0395F144F4D505F4B7, ___overrideCollectURL_8)); }
	inline String_t* get_overrideCollectURL_8() const { return ___overrideCollectURL_8; }
	inline String_t** get_address_of_overrideCollectURL_8() { return &___overrideCollectURL_8; }
	inline void set_overrideCollectURL_8(String_t* value)
	{
		___overrideCollectURL_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___overrideCollectURL_8), (void*)value);
	}

	inline static int32_t get_offset_of_overrideCollectBatchURL_9() { return static_cast<int32_t>(offsetof(TealiumConfig_t57F15E74367FE1C2622F3D0395F144F4D505F4B7, ___overrideCollectBatchURL_9)); }
	inline String_t* get_overrideCollectBatchURL_9() const { return ___overrideCollectBatchURL_9; }
	inline String_t** get_address_of_overrideCollectBatchURL_9() { return &___overrideCollectBatchURL_9; }
	inline void set_overrideCollectBatchURL_9(String_t* value)
	{
		___overrideCollectBatchURL_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___overrideCollectBatchURL_9), (void*)value);
	}

	inline static int32_t get_offset_of_overrideCollectDomain_10() { return static_cast<int32_t>(offsetof(TealiumConfig_t57F15E74367FE1C2622F3D0395F144F4D505F4B7, ___overrideCollectDomain_10)); }
	inline String_t* get_overrideCollectDomain_10() const { return ___overrideCollectDomain_10; }
	inline String_t** get_address_of_overrideCollectDomain_10() { return &___overrideCollectDomain_10; }
	inline void set_overrideCollectDomain_10(String_t* value)
	{
		___overrideCollectDomain_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___overrideCollectDomain_10), (void*)value);
	}

	inline static int32_t get_offset_of_overrideLibrarySettingsURL_11() { return static_cast<int32_t>(offsetof(TealiumConfig_t57F15E74367FE1C2622F3D0395F144F4D505F4B7, ___overrideLibrarySettingsURL_11)); }
	inline String_t* get_overrideLibrarySettingsURL_11() const { return ___overrideLibrarySettingsURL_11; }
	inline String_t** get_address_of_overrideLibrarySettingsURL_11() { return &___overrideLibrarySettingsURL_11; }
	inline void set_overrideLibrarySettingsURL_11(String_t* value)
	{
		___overrideLibrarySettingsURL_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___overrideLibrarySettingsURL_11), (void*)value);
	}

	inline static int32_t get_offset_of_overrideTagManagementURL_12() { return static_cast<int32_t>(offsetof(TealiumConfig_t57F15E74367FE1C2622F3D0395F144F4D505F4B7, ___overrideTagManagementURL_12)); }
	inline String_t* get_overrideTagManagementURL_12() const { return ___overrideTagManagementURL_12; }
	inline String_t** get_address_of_overrideTagManagementURL_12() { return &___overrideTagManagementURL_12; }
	inline void set_overrideTagManagementURL_12(String_t* value)
	{
		___overrideTagManagementURL_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___overrideTagManagementURL_12), (void*)value);
	}

	inline static int32_t get_offset_of_deepLinkTrackingEnabled_13() { return static_cast<int32_t>(offsetof(TealiumConfig_t57F15E74367FE1C2622F3D0395F144F4D505F4B7, ___deepLinkTrackingEnabled_13)); }
	inline Nullable_1_t1D1CD146BFCBDC2E53E1F700889F8C5C21063EF3  get_deepLinkTrackingEnabled_13() const { return ___deepLinkTrackingEnabled_13; }
	inline Nullable_1_t1D1CD146BFCBDC2E53E1F700889F8C5C21063EF3 * get_address_of_deepLinkTrackingEnabled_13() { return &___deepLinkTrackingEnabled_13; }
	inline void set_deepLinkTrackingEnabled_13(Nullable_1_t1D1CD146BFCBDC2E53E1F700889F8C5C21063EF3  value)
	{
		___deepLinkTrackingEnabled_13 = value;
	}

	inline static int32_t get_offset_of_qrTraceEnabled_14() { return static_cast<int32_t>(offsetof(TealiumConfig_t57F15E74367FE1C2622F3D0395F144F4D505F4B7, ___qrTraceEnabled_14)); }
	inline Nullable_1_t1D1CD146BFCBDC2E53E1F700889F8C5C21063EF3  get_qrTraceEnabled_14() const { return ___qrTraceEnabled_14; }
	inline Nullable_1_t1D1CD146BFCBDC2E53E1F700889F8C5C21063EF3 * get_address_of_qrTraceEnabled_14() { return &___qrTraceEnabled_14; }
	inline void set_qrTraceEnabled_14(Nullable_1_t1D1CD146BFCBDC2E53E1F700889F8C5C21063EF3  value)
	{
		___qrTraceEnabled_14 = value;
	}

	inline static int32_t get_offset_of_logLevel_15() { return static_cast<int32_t>(offsetof(TealiumConfig_t57F15E74367FE1C2622F3D0395F144F4D505F4B7, ___logLevel_15)); }
	inline String_t* get_logLevel_15() const { return ___logLevel_15; }
	inline String_t** get_address_of_logLevel_15() { return &___logLevel_15; }
	inline void set_logLevel_15(String_t* value)
	{
		___logLevel_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___logLevel_15), (void*)value);
	}

	inline static int32_t get_offset_of_consentLoggingEnabled_16() { return static_cast<int32_t>(offsetof(TealiumConfig_t57F15E74367FE1C2622F3D0395F144F4D505F4B7, ___consentLoggingEnabled_16)); }
	inline Nullable_1_t1D1CD146BFCBDC2E53E1F700889F8C5C21063EF3  get_consentLoggingEnabled_16() const { return ___consentLoggingEnabled_16; }
	inline Nullable_1_t1D1CD146BFCBDC2E53E1F700889F8C5C21063EF3 * get_address_of_consentLoggingEnabled_16() { return &___consentLoggingEnabled_16; }
	inline void set_consentLoggingEnabled_16(Nullable_1_t1D1CD146BFCBDC2E53E1F700889F8C5C21063EF3  value)
	{
		___consentLoggingEnabled_16 = value;
	}

	inline static int32_t get_offset_of_consentPolicy_17() { return static_cast<int32_t>(offsetof(TealiumConfig_t57F15E74367FE1C2622F3D0395F144F4D505F4B7, ___consentPolicy_17)); }
	inline String_t* get_consentPolicy_17() const { return ___consentPolicy_17; }
	inline String_t** get_address_of_consentPolicy_17() { return &___consentPolicy_17; }
	inline void set_consentPolicy_17(String_t* value)
	{
		___consentPolicy_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___consentPolicy_17), (void*)value);
	}

	inline static int32_t get_offset_of_consentExpiry_18() { return static_cast<int32_t>(offsetof(TealiumConfig_t57F15E74367FE1C2622F3D0395F144F4D505F4B7, ___consentExpiry_18)); }
	inline Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 * get_consentExpiry_18() const { return ___consentExpiry_18; }
	inline Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 ** get_address_of_consentExpiry_18() { return &___consentExpiry_18; }
	inline void set_consentExpiry_18(Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 * value)
	{
		___consentExpiry_18 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___consentExpiry_18), (void*)value);
	}

	inline static int32_t get_offset_of_batchingEnabled_19() { return static_cast<int32_t>(offsetof(TealiumConfig_t57F15E74367FE1C2622F3D0395F144F4D505F4B7, ___batchingEnabled_19)); }
	inline Nullable_1_t1D1CD146BFCBDC2E53E1F700889F8C5C21063EF3  get_batchingEnabled_19() const { return ___batchingEnabled_19; }
	inline Nullable_1_t1D1CD146BFCBDC2E53E1F700889F8C5C21063EF3 * get_address_of_batchingEnabled_19() { return &___batchingEnabled_19; }
	inline void set_batchingEnabled_19(Nullable_1_t1D1CD146BFCBDC2E53E1F700889F8C5C21063EF3  value)
	{
		___batchingEnabled_19 = value;
	}

	inline static int32_t get_offset_of_lifecycleAutotrackingEnabled_20() { return static_cast<int32_t>(offsetof(TealiumConfig_t57F15E74367FE1C2622F3D0395F144F4D505F4B7, ___lifecycleAutotrackingEnabled_20)); }
	inline Nullable_1_t1D1CD146BFCBDC2E53E1F700889F8C5C21063EF3  get_lifecycleAutotrackingEnabled_20() const { return ___lifecycleAutotrackingEnabled_20; }
	inline Nullable_1_t1D1CD146BFCBDC2E53E1F700889F8C5C21063EF3 * get_address_of_lifecycleAutotrackingEnabled_20() { return &___lifecycleAutotrackingEnabled_20; }
	inline void set_lifecycleAutotrackingEnabled_20(Nullable_1_t1D1CD146BFCBDC2E53E1F700889F8C5C21063EF3  value)
	{
		___lifecycleAutotrackingEnabled_20 = value;
	}

	inline static int32_t get_offset_of_useRemoteLibrarySettings_21() { return static_cast<int32_t>(offsetof(TealiumConfig_t57F15E74367FE1C2622F3D0395F144F4D505F4B7, ___useRemoteLibrarySettings_21)); }
	inline Nullable_1_t1D1CD146BFCBDC2E53E1F700889F8C5C21063EF3  get_useRemoteLibrarySettings_21() const { return ___useRemoteLibrarySettings_21; }
	inline Nullable_1_t1D1CD146BFCBDC2E53E1F700889F8C5C21063EF3 * get_address_of_useRemoteLibrarySettings_21() { return &___useRemoteLibrarySettings_21; }
	inline void set_useRemoteLibrarySettings_21(Nullable_1_t1D1CD146BFCBDC2E53E1F700889F8C5C21063EF3  value)
	{
		___useRemoteLibrarySettings_21 = value;
	}

	inline static int32_t get_offset_of_visitorServiceEnabled_22() { return static_cast<int32_t>(offsetof(TealiumConfig_t57F15E74367FE1C2622F3D0395F144F4D505F4B7, ___visitorServiceEnabled_22)); }
	inline Nullable_1_t1D1CD146BFCBDC2E53E1F700889F8C5C21063EF3  get_visitorServiceEnabled_22() const { return ___visitorServiceEnabled_22; }
	inline Nullable_1_t1D1CD146BFCBDC2E53E1F700889F8C5C21063EF3 * get_address_of_visitorServiceEnabled_22() { return &___visitorServiceEnabled_22; }
	inline void set_visitorServiceEnabled_22(Nullable_1_t1D1CD146BFCBDC2E53E1F700889F8C5C21063EF3  value)
	{
		___visitorServiceEnabled_22 = value;
	}
};


// UnityEngine.Component
struct Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684  : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A
{
public:

public:
};


// UnityEngine.GameObject
struct GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319  : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A
{
public:

public:
};


// System.MulticastDelegate
struct MulticastDelegate_t  : public Delegate_t
{
public:
	// System.Delegate[] System.MulticastDelegate::delegates
	DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* ___delegates_11;

public:
	inline static int32_t get_offset_of_delegates_11() { return static_cast<int32_t>(offsetof(MulticastDelegate_t, ___delegates_11)); }
	inline DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* get_delegates_11() const { return ___delegates_11; }
	inline DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8** get_address_of_delegates_11() { return &___delegates_11; }
	inline void set_delegates_11(DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* value)
	{
		___delegates_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___delegates_11), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_pinvoke : public Delegate_t_marshaled_pinvoke
{
	Delegate_t_marshaled_pinvoke** ___delegates_11;
};
// Native definition for COM marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_com : public Delegate_t_marshaled_com
{
	Delegate_t_marshaled_com** ___delegates_11;
};

// System.Type
struct Type_t  : public MemberInfo_t
{
public:
	// System.RuntimeTypeHandle System.Type::_impl
	RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  ____impl_9;

public:
	inline static int32_t get_offset_of__impl_9() { return static_cast<int32_t>(offsetof(Type_t, ____impl_9)); }
	inline RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  get__impl_9() const { return ____impl_9; }
	inline RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9 * get_address_of__impl_9() { return &____impl_9; }
	inline void set__impl_9(RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  value)
	{
		____impl_9 = value;
	}
};

struct Type_t_StaticFields
{
public:
	// System.Reflection.MemberFilter System.Type::FilterAttribute
	MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * ___FilterAttribute_0;
	// System.Reflection.MemberFilter System.Type::FilterName
	MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * ___FilterName_1;
	// System.Reflection.MemberFilter System.Type::FilterNameIgnoreCase
	MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * ___FilterNameIgnoreCase_2;
	// System.Object System.Type::Missing
	RuntimeObject * ___Missing_3;
	// System.Char System.Type::Delimiter
	Il2CppChar ___Delimiter_4;
	// System.Type[] System.Type::EmptyTypes
	TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755* ___EmptyTypes_5;
	// System.Reflection.Binder System.Type::defaultBinder
	Binder_t2BEE27FD84737D1E79BC47FD67F6D3DD2F2DDA30 * ___defaultBinder_6;

public:
	inline static int32_t get_offset_of_FilterAttribute_0() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___FilterAttribute_0)); }
	inline MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * get_FilterAttribute_0() const { return ___FilterAttribute_0; }
	inline MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 ** get_address_of_FilterAttribute_0() { return &___FilterAttribute_0; }
	inline void set_FilterAttribute_0(MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * value)
	{
		___FilterAttribute_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FilterAttribute_0), (void*)value);
	}

	inline static int32_t get_offset_of_FilterName_1() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___FilterName_1)); }
	inline MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * get_FilterName_1() const { return ___FilterName_1; }
	inline MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 ** get_address_of_FilterName_1() { return &___FilterName_1; }
	inline void set_FilterName_1(MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * value)
	{
		___FilterName_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FilterName_1), (void*)value);
	}

	inline static int32_t get_offset_of_FilterNameIgnoreCase_2() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___FilterNameIgnoreCase_2)); }
	inline MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * get_FilterNameIgnoreCase_2() const { return ___FilterNameIgnoreCase_2; }
	inline MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 ** get_address_of_FilterNameIgnoreCase_2() { return &___FilterNameIgnoreCase_2; }
	inline void set_FilterNameIgnoreCase_2(MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * value)
	{
		___FilterNameIgnoreCase_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FilterNameIgnoreCase_2), (void*)value);
	}

	inline static int32_t get_offset_of_Missing_3() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___Missing_3)); }
	inline RuntimeObject * get_Missing_3() const { return ___Missing_3; }
	inline RuntimeObject ** get_address_of_Missing_3() { return &___Missing_3; }
	inline void set_Missing_3(RuntimeObject * value)
	{
		___Missing_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Missing_3), (void*)value);
	}

	inline static int32_t get_offset_of_Delimiter_4() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___Delimiter_4)); }
	inline Il2CppChar get_Delimiter_4() const { return ___Delimiter_4; }
	inline Il2CppChar* get_address_of_Delimiter_4() { return &___Delimiter_4; }
	inline void set_Delimiter_4(Il2CppChar value)
	{
		___Delimiter_4 = value;
	}

	inline static int32_t get_offset_of_EmptyTypes_5() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___EmptyTypes_5)); }
	inline TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755* get_EmptyTypes_5() const { return ___EmptyTypes_5; }
	inline TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755** get_address_of_EmptyTypes_5() { return &___EmptyTypes_5; }
	inline void set_EmptyTypes_5(TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755* value)
	{
		___EmptyTypes_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___EmptyTypes_5), (void*)value);
	}

	inline static int32_t get_offset_of_defaultBinder_6() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___defaultBinder_6)); }
	inline Binder_t2BEE27FD84737D1E79BC47FD67F6D3DD2F2DDA30 * get_defaultBinder_6() const { return ___defaultBinder_6; }
	inline Binder_t2BEE27FD84737D1E79BC47FD67F6D3DD2F2DDA30 ** get_address_of_defaultBinder_6() { return &___defaultBinder_6; }
	inline void set_defaultBinder_6(Binder_t2BEE27FD84737D1E79BC47FD67F6D3DD2F2DDA30 * value)
	{
		___defaultBinder_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___defaultBinder_6), (void*)value);
	}
};


// System.Action`1<System.Collections.Generic.Dictionary`2<System.String,System.Object>>
struct Action_1_t6B2EAA2D3491CBA6FEF1ECDF624EEF00DFD194C1  : public MulticastDelegate_t
{
public:

public:
};


// System.Action`1<System.Boolean>
struct Action_1_tCE2D770918A65CAD277C08C4E8C05385EA267E83  : public MulticastDelegate_t
{
public:

public:
};


// System.Converter`2<TealiumCommon.Collectors,System.String>
struct Converter_2_t8966C243E6818DA305580ED799C4458A967FBC4B  : public MulticastDelegate_t
{
public:

public:
};


// System.Converter`2<TealiumCommon.ConsentCategories,System.String>
struct Converter_2_t05F0413FDB211EFC6EFA05D8F8F2EF8FC9265BCB  : public MulticastDelegate_t
{
public:

public:
};


// System.Converter`2<TealiumCommon.Dispatchers,System.String>
struct Converter_2_t8DCD435D80605558FF0393EA8820ECC291B6130D  : public MulticastDelegate_t
{
public:

public:
};


// System.Converter`2<System.String,TealiumCommon.ConsentCategories>
struct Converter_2_tF015A85C226F06C29481EF50AC5392D4975A7B7D  : public MulticastDelegate_t
{
public:

public:
};


// System.Func`2<System.Collections.Generic.KeyValuePair`2<System.String,System.Object>,System.Object>
struct Func_2_t04E847CA06FFEF3C03EF2513C3B1F9F57A39D797  : public MulticastDelegate_t
{
public:

public:
};


// System.Func`2<System.Collections.Generic.KeyValuePair`2<System.String,System.Object>,System.String>
struct Func_2_t1CA29703D8E4788617FC1EC9FA62DEBEE1E2CF3A  : public MulticastDelegate_t
{
public:

public:
};


// System.Func`2<System.Object,System.Object>
struct Func_2_tFF5BB8F40A35B1BEA00D4EBBC6CBE7184A584436  : public MulticastDelegate_t
{
public:

public:
};


// System.Action
struct Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6  : public MulticastDelegate_t
{
public:

public:
};


// System.AsyncCallback
struct AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA  : public MulticastDelegate_t
{
public:

public:
};


// UnityEngine.Behaviour
struct Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9  : public Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684
{
public:

public:
};


// TealiumiOS/ConsentExpiryDelegateMessage
struct ConsentExpiryDelegateMessage_t086235450063F54925F0E78B7BE640C668914E6D  : public MulticastDelegate_t
{
public:

public:
};


// TealiumiOS/InitializeDelegateMessage
struct InitializeDelegateMessage_tC95BD6C7C57DC458B247CC4A70D6AF216960A493  : public MulticastDelegate_t
{
public:

public:
};


// TealiumiOS/RemoteCommandDelegateMessage
struct RemoteCommandDelegateMessage_t5D69DB6883CD6653EC3E70F18E3C096FD043342D  : public MulticastDelegate_t
{
public:

public:
};


// TealiumiOS/VisitorServiceDelegateMessage
struct VisitorServiceDelegateMessage_t6B8D159765A2F10FA86086BFA8BD3F4FFB9DE18B  : public MulticastDelegate_t
{
public:

public:
};


// UnityEngine.MonoBehaviour
struct MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A  : public Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9
{
public:

public:
};


// TealiumAndroid
struct TealiumAndroid_t3261BB388DA01765B53016B078B894DB9573A857  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:

public:
};

struct TealiumAndroid_t3261BB388DA01765B53016B078B894DB9573A857_StaticFields
{
public:
	// TealiumAndroid TealiumAndroid::_instance
	TealiumAndroid_t3261BB388DA01765B53016B078B894DB9573A857 * ____instance_4;
	// UnityEngine.AndroidJavaClass TealiumAndroid::_tealiumUnityObject
	AndroidJavaClass_t52E934B16476D72AA6E4B248F989F2F825EB62D4 * ____tealiumUnityObject_6;

public:
	inline static int32_t get_offset_of__instance_4() { return static_cast<int32_t>(offsetof(TealiumAndroid_t3261BB388DA01765B53016B078B894DB9573A857_StaticFields, ____instance_4)); }
	inline TealiumAndroid_t3261BB388DA01765B53016B078B894DB9573A857 * get__instance_4() const { return ____instance_4; }
	inline TealiumAndroid_t3261BB388DA01765B53016B078B894DB9573A857 ** get_address_of__instance_4() { return &____instance_4; }
	inline void set__instance_4(TealiumAndroid_t3261BB388DA01765B53016B078B894DB9573A857 * value)
	{
		____instance_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____instance_4), (void*)value);
	}

	inline static int32_t get_offset_of__tealiumUnityObject_6() { return static_cast<int32_t>(offsetof(TealiumAndroid_t3261BB388DA01765B53016B078B894DB9573A857_StaticFields, ____tealiumUnityObject_6)); }
	inline AndroidJavaClass_t52E934B16476D72AA6E4B248F989F2F825EB62D4 * get__tealiumUnityObject_6() const { return ____tealiumUnityObject_6; }
	inline AndroidJavaClass_t52E934B16476D72AA6E4B248F989F2F825EB62D4 ** get_address_of__tealiumUnityObject_6() { return &____tealiumUnityObject_6; }
	inline void set__tealiumUnityObject_6(AndroidJavaClass_t52E934B16476D72AA6E4B248F989F2F825EB62D4 * value)
	{
		____tealiumUnityObject_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____tealiumUnityObject_6), (void*)value);
	}
};


// TealiumUnityPlugin
struct TealiumUnityPlugin_t8B3797338182C27740783841F277A92D6D40AC55  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:

public:
};

struct TealiumUnityPlugin_t8B3797338182C27740783841F277A92D6D40AC55_StaticFields
{
public:
	// TealiumUnity TealiumUnityPlugin::tealium
	RuntimeObject* ___tealium_4;
	// System.Action`1<System.Boolean> TealiumUnityPlugin::onInitialized
	Action_1_tCE2D770918A65CAD277C08C4E8C05385EA267E83 * ___onInitialized_5;
	// System.Collections.Generic.Dictionary`2<System.String,System.Action`1<System.Collections.Generic.Dictionary`2<System.String,System.Object>>> TealiumUnityPlugin::onRemoteCommandCompletionCallbacks
	Dictionary_2_tA582BF436674B8CBA45DA2033E1A98F298DBADA9 * ___onRemoteCommandCompletionCallbacks_6;
	// System.Action`1<System.Collections.Generic.Dictionary`2<System.String,System.Object>> TealiumUnityPlugin::onVisitorServiceDidUpdate
	Action_1_t6B2EAA2D3491CBA6FEF1ECDF624EEF00DFD194C1 * ___onVisitorServiceDidUpdate_7;
	// System.Action TealiumUnityPlugin::onConsentExpiration
	Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * ___onConsentExpiration_8;

public:
	inline static int32_t get_offset_of_tealium_4() { return static_cast<int32_t>(offsetof(TealiumUnityPlugin_t8B3797338182C27740783841F277A92D6D40AC55_StaticFields, ___tealium_4)); }
	inline RuntimeObject* get_tealium_4() const { return ___tealium_4; }
	inline RuntimeObject** get_address_of_tealium_4() { return &___tealium_4; }
	inline void set_tealium_4(RuntimeObject* value)
	{
		___tealium_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___tealium_4), (void*)value);
	}

	inline static int32_t get_offset_of_onInitialized_5() { return static_cast<int32_t>(offsetof(TealiumUnityPlugin_t8B3797338182C27740783841F277A92D6D40AC55_StaticFields, ___onInitialized_5)); }
	inline Action_1_tCE2D770918A65CAD277C08C4E8C05385EA267E83 * get_onInitialized_5() const { return ___onInitialized_5; }
	inline Action_1_tCE2D770918A65CAD277C08C4E8C05385EA267E83 ** get_address_of_onInitialized_5() { return &___onInitialized_5; }
	inline void set_onInitialized_5(Action_1_tCE2D770918A65CAD277C08C4E8C05385EA267E83 * value)
	{
		___onInitialized_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___onInitialized_5), (void*)value);
	}

	inline static int32_t get_offset_of_onRemoteCommandCompletionCallbacks_6() { return static_cast<int32_t>(offsetof(TealiumUnityPlugin_t8B3797338182C27740783841F277A92D6D40AC55_StaticFields, ___onRemoteCommandCompletionCallbacks_6)); }
	inline Dictionary_2_tA582BF436674B8CBA45DA2033E1A98F298DBADA9 * get_onRemoteCommandCompletionCallbacks_6() const { return ___onRemoteCommandCompletionCallbacks_6; }
	inline Dictionary_2_tA582BF436674B8CBA45DA2033E1A98F298DBADA9 ** get_address_of_onRemoteCommandCompletionCallbacks_6() { return &___onRemoteCommandCompletionCallbacks_6; }
	inline void set_onRemoteCommandCompletionCallbacks_6(Dictionary_2_tA582BF436674B8CBA45DA2033E1A98F298DBADA9 * value)
	{
		___onRemoteCommandCompletionCallbacks_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___onRemoteCommandCompletionCallbacks_6), (void*)value);
	}

	inline static int32_t get_offset_of_onVisitorServiceDidUpdate_7() { return static_cast<int32_t>(offsetof(TealiumUnityPlugin_t8B3797338182C27740783841F277A92D6D40AC55_StaticFields, ___onVisitorServiceDidUpdate_7)); }
	inline Action_1_t6B2EAA2D3491CBA6FEF1ECDF624EEF00DFD194C1 * get_onVisitorServiceDidUpdate_7() const { return ___onVisitorServiceDidUpdate_7; }
	inline Action_1_t6B2EAA2D3491CBA6FEF1ECDF624EEF00DFD194C1 ** get_address_of_onVisitorServiceDidUpdate_7() { return &___onVisitorServiceDidUpdate_7; }
	inline void set_onVisitorServiceDidUpdate_7(Action_1_t6B2EAA2D3491CBA6FEF1ECDF624EEF00DFD194C1 * value)
	{
		___onVisitorServiceDidUpdate_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___onVisitorServiceDidUpdate_7), (void*)value);
	}

	inline static int32_t get_offset_of_onConsentExpiration_8() { return static_cast<int32_t>(offsetof(TealiumUnityPlugin_t8B3797338182C27740783841F277A92D6D40AC55_StaticFields, ___onConsentExpiration_8)); }
	inline Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * get_onConsentExpiration_8() const { return ___onConsentExpiration_8; }
	inline Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 ** get_address_of_onConsentExpiration_8() { return &___onConsentExpiration_8; }
	inline void set_onConsentExpiration_8(Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * value)
	{
		___onConsentExpiration_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___onConsentExpiration_8), (void*)value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// System.Byte[]
struct ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) uint8_t m_Items[1];

public:
	inline uint8_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline uint8_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, uint8_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline uint8_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline uint8_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, uint8_t value)
	{
		m_Items[index] = value;
	}
};
// System.Object[]
struct ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) RuntimeObject * m_Items[1];

public:
	inline RuntimeObject * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline RuntimeObject ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, RuntimeObject * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline RuntimeObject * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline RuntimeObject ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, RuntimeObject * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.Char[]
struct CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Il2CppChar m_Items[1];

public:
	inline Il2CppChar GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Il2CppChar* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Il2CppChar value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Il2CppChar GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Il2CppChar* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Il2CppChar value)
	{
		m_Items[index] = value;
	}
};
// System.String[]
struct StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) String_t* m_Items[1];

public:
	inline String_t* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline String_t** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, String_t* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline String_t* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline String_t** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, String_t* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.Delegate[]
struct DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Delegate_t * m_Items[1];

public:
	inline Delegate_t * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Delegate_t ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Delegate_t * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Delegate_t * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Delegate_t ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Delegate_t * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};


// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m2C8EE5C13636D67F6C451C4935049F534AEC658F_gshared (Dictionary_2_tBD1E3221EBD04CEBDA49B84779912E91F56B958D * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::Add(!0,!1)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Add_m830DC29CD6F7128D4990D460CCCDE032E3B693D9_gshared (Dictionary_2_tBD1E3221EBD04CEBDA49B84779912E91F56B958D * __this, RuntimeObject * ___key0, RuntimeObject * ___value1, const RuntimeMethod* method);
// !!0 UnityEngine.AndroidJavaObject::GetStatic<System.Object>(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * AndroidJavaObject_GetStatic_TisRuntimeObject_mEC743ECF275CB896DE039A9FC1E5672B30C8B3D0_gshared (AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * __this, String_t* ___fieldName0, const RuntimeMethod* method);
// !!0[] System.Array::Empty<System.Object>()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* Array_Empty_TisRuntimeObject_m1FBC21243DF3542384C523801E8CA8A97606C747_gshared_inline (const RuntimeMethod* method);
// !!0 UnityEngine.AndroidJavaObject::Call<System.Object>(System.String,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * AndroidJavaObject_Call_TisRuntimeObject_mB802C2A6B0365A1670402D283EB7FA241C326B0E_gshared (AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * __this, String_t* ___methodName0, ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ___args1, const RuntimeMethod* method);
// !!0 UnityEngine.AndroidJavaObject::CallStatic<System.Boolean>(System.String,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AndroidJavaObject_CallStatic_TisBoolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_m08A8ECF220D35069EF5A4A50C2F38E925F0852FB_gshared (AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * __this, String_t* ___methodName0, ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ___args1, const RuntimeMethod* method);
// System.Void System.Action`1<System.Boolean>::Invoke(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_1_Invoke_m95E5C9FC67F7B0BDC3CD5E00AC5D4C8A00C97AC5_gshared (Action_1_tCE2D770918A65CAD277C08C4E8C05385EA267E83 * __this, bool ___obj0, const RuntimeMethod* method);
// !!0 UnityEngine.AndroidJavaObject::CallStatic<System.Object>(System.String,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * AndroidJavaObject_CallStatic_TisRuntimeObject_m29BD05B7A29F937D71B746DFFE889B90E1142509_gshared (AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * __this, String_t* ___methodName0, ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ___args1, const RuntimeMethod* method);
// !!0 Newtonsoft.Json.JsonConvert::DeserializeObject<System.Object>(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * JsonConvert_DeserializeObject_TisRuntimeObject_m3BBCDB816C8B67B0728467ED827CDF4C7F1E9A86_gshared (String_t* ___value0, const RuntimeMethod* method);
// !1 System.Collections.Generic.Dictionary`2<System.Object,System.Object>::get_Item(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Dictionary_2_get_Item_mB1398A10D048A0246178C59F95003BD338CE7394_gshared (Dictionary_2_tBD1E3221EBD04CEBDA49B84779912E91F56B958D * __this, RuntimeObject * ___key0, const RuntimeMethod* method);
// System.Collections.Generic.List`1<!!0> System.Linq.Enumerable::ToList<System.Object>(System.Collections.Generic.IEnumerable`1<!!0>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * Enumerable_ToList_TisRuntimeObject_mA4E485F973C6DF746B8DB54CA6F54192D4231CA2_gshared (RuntimeObject* ___source0, const RuntimeMethod* method);
// System.Void System.Converter`2<System.Object,TealiumCommon.ConsentCategories>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Converter_2__ctor_m6B035C201C66F9926F6FB05C14A3C22572D188FE_gshared (Converter_2_tC7F0570E3911442CECD0F0CFD79D99EA6DCCC4E0 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Collections.Generic.List`1<!!0> System.Collections.Generic.List`1<System.Object>::ConvertAll<TealiumCommon.ConsentCategories>(System.Converter`2<!0,!!0>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_tB719F9AEA1042BBCF17CC50DC1881550E74D3695 * List_1_ConvertAll_TisConsentCategories_t7F1FDE7995E2ABB2BEF4A4DC381AE8DEE9B8429F_mF7EFDB8E04B4AA948BA5BA31C56EBE4EE3C9AEDB_gshared (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, Converter_2_tC7F0570E3911442CECD0F0CFD79D99EA6DCCC4E0 * ___converter0, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::AddComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * GameObject_AddComponent_TisRuntimeObject_mBDBD6EC58A4409E35E4C5D08757C36E4938256B1_gshared (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method);
// System.Void System.Converter`2<TealiumCommon.Dispatchers,System.Object>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Converter_2__ctor_m81C080BC66CC7D608CD368D76BCA89EA1038EF34_gshared (Converter_2_t44467F77B635A9D0EA09AA880C744A08DE40E457 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Collections.Generic.List`1<!!0> System.Collections.Generic.List`1<TealiumCommon.Dispatchers>::ConvertAll<System.Object>(System.Converter`2<!0,!!0>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * List_1_ConvertAll_TisRuntimeObject_m911B1E90095E52934B1514013AC4B274AEA6AADA_gshared (List_1_t5140BA5F1B10A238CE781B1DC4039B4AFCE4E240 * __this, Converter_2_t44467F77B635A9D0EA09AA880C744A08DE40E457 * ___converter0, const RuntimeMethod* method);
// System.Void System.Converter`2<TealiumCommon.Collectors,System.Object>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Converter_2__ctor_m953E76A3799D75C1EB7D5A1674A81B99AE8687E2_gshared (Converter_2_t4904EBE978ED3FDB1D5A8D3277DE5FBAF2C7633C * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Collections.Generic.List`1<!!0> System.Collections.Generic.List`1<TealiumCommon.Collectors>::ConvertAll<System.Object>(System.Converter`2<!0,!!0>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * List_1_ConvertAll_TisRuntimeObject_m3ADA791B9911709F3911F02A468426DC4C6CA192_gshared (List_1_t1AF4DE87B3698887C7A6973FA2CF366D49D00A41 * __this, Converter_2_t4904EBE978ED3FDB1D5A8D3277DE5FBAF2C7633C * ___converter0, const RuntimeMethod* method);
// System.Boolean System.Nullable`1<TealiumCommon.LogLevel>::get_HasValue()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Nullable_1_get_HasValue_m5C68BCA359253ED7BAF57AEC0411DC539E1D52B5_gshared_inline (Nullable_1_tEDD6DE645137CA544DA6DFB826B36BF4C9425A28 * __this, const RuntimeMethod* method);
// !0 System.Nullable`1<TealiumCommon.LogLevel>::GetValueOrDefault()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR LogLevel_tC8A9CB2FDD6BA29729D740AB210BD2214ACC9ECD  Nullable_1_GetValueOrDefault_mB6AF2E00017652A7A460E421622828E15FB4F437_gshared_inline (Nullable_1_tEDD6DE645137CA544DA6DFB826B36BF4C9425A28 * __this, const RuntimeMethod* method);
// System.Boolean System.Nullable`1<TealiumCommon.ConsentPolicy>::get_HasValue()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Nullable_1_get_HasValue_m8043104DA135F5C852621E53CEB0FD85ACD0DC68_gshared_inline (Nullable_1_t10B092B32DAE6088B0BC1F2903DC4B4D0A477307 * __this, const RuntimeMethod* method);
// !0 System.Nullable`1<TealiumCommon.ConsentPolicy>::GetValueOrDefault()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ConsentPolicy_tA405DFF59561F55C0C5C738E3ECC75B8032B6A01  Nullable_1_GetValueOrDefault_m86DD280389373DC6112C612AF57005073D7829CA_gshared_inline (Nullable_1_t10B092B32DAE6088B0BC1F2903DC4B4D0A477307 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::set_Item(!0,!1)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_set_Item_mE6BF870B04922441F9F2760E782DEE6EE682615A_gshared (Dictionary_2_tBD1E3221EBD04CEBDA49B84779912E91F56B958D * __this, RuntimeObject * ___key0, RuntimeObject * ___value1, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::Remove(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_Remove_m32325BAD86F31C471AEBE80C6A7A8A6908EB0611_gshared (Dictionary_2_tBD1E3221EBD04CEBDA49B84779912E91F56B958D * __this, RuntimeObject * ___key0, const RuntimeMethod* method);
// System.Void System.Action`1<System.Object>::Invoke(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_1_Invoke_m587509C88BB83721D7918D89DF07606BB752D744_gshared (Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * __this, RuntimeObject * ___obj0, const RuntimeMethod* method);
// System.Collections.Generic.Dictionary`2/Enumerator<!0,!1> System.Collections.Generic.Dictionary`2<System.Object,System.Object>::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_tE4E91EE5578038530CF0C46227953BA787E7A0A0  Dictionary_2_GetEnumerator_mA44BBB15DFBD8E08B5E60E23AA5044D45C3F889F_gshared (Dictionary_2_tBD1E3221EBD04CEBDA49B84779912E91F56B958D * __this, const RuntimeMethod* method);
// System.Collections.Generic.KeyValuePair`2<!0,!1> System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Object>::get_Current()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625  Enumerator_get_Current_m17E1C36ECBB09CC2AB892710866F8655D83A6048_gshared_inline (Enumerator_tE4E91EE5578038530CF0C46227953BA787E7A0A0 * __this, const RuntimeMethod* method);
// !0 System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>::get_Key()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject * KeyValuePair_2_get_Key_mCAD7B121DB998D7C56EB0281215A860EFE9DCD95_gshared_inline (KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625 * __this, const RuntimeMethod* method);
// !1 System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>::get_Value()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject * KeyValuePair_2_get_Value_m622223593F7461E7812C581DDB145270016ED303_gshared_inline (KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625 * __this, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Object>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_mCAD84084129516BD41DE5CC3E1FABA5A8DF836D0_gshared (Enumerator_tE4E91EE5578038530CF0C46227953BA787E7A0A0 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Object>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator_Dispose_m85CA135BAB22C9F0C87C84AB90FF6740D1859279_gshared (Enumerator_tE4E91EE5578038530CF0C46227953BA787E7A0A0 * __this, const RuntimeMethod* method);
// !!0 Newtonsoft.Json.Linq.JToken::ToObject<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * JToken_ToObject_TisRuntimeObject_m98FFBB28B8ABB689929C87AF73B903C1BE9A8696_gshared (JToken_tAB8CCFD034E5837FFBBDA62C92FC28F49A7C525E * __this, const RuntimeMethod* method);
// System.Void System.Func`2<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>,System.Object>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Func_2__ctor_m63767C2AD1295D9C38EBAD72A237C0A5A3D18A71_gshared (Func_2_t10CDF2C6D18EB51CBA3E607199613B198E2CFDFD * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Collections.Generic.Dictionary`2<!!1,!!2> System.Linq.Enumerable::ToDictionary<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>,System.Object,System.Object>(System.Collections.Generic.IEnumerable`1<!!0>,System.Func`2<!!0,!!1>,System.Func`2<!!0,!!2>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Dictionary_2_tBD1E3221EBD04CEBDA49B84779912E91F56B958D * Enumerable_ToDictionary_TisKeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625_TisRuntimeObject_TisRuntimeObject_mBDF6C6DD35A92D9E746EF77831C3819959A60050_gshared (RuntimeObject* ___source0, Func_2_t10CDF2C6D18EB51CBA3E607199613B198E2CFDFD * ___keySelector1, Func_2_t10CDF2C6D18EB51CBA3E607199613B198E2CFDFD * ___elementSelector2, const RuntimeMethod* method);
// System.Void System.Func`2<System.Object,System.Object>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Func_2__ctor_mA7F3C5A0612B84E910DE92E77BA95101FD68EEDB_gshared (Func_2_tFF5BB8F40A35B1BEA00D4EBBC6CBE7184A584436 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Collections.Generic.IEnumerable`1<!!1> System.Linq.Enumerable::Select<System.Object,System.Object>(System.Collections.Generic.IEnumerable`1<!!0>,System.Func`2<!!0,!!1>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Enumerable_Select_TisRuntimeObject_TisRuntimeObject_mC0F1DA980E0433D70A6CF9DD7CD1942BB7FE87C0_gshared (RuntimeObject* ___source0, Func_2_tFF5BB8F40A35B1BEA00D4EBBC6CBE7184A584436 * ___selector1, const RuntimeMethod* method);
// System.Void System.Converter`2<TealiumCommon.ConsentCategories,System.Object>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Converter_2__ctor_m3075492FB5FFD09F6F07F0285BC29C71A106205D_gshared (Converter_2_t1B68F918E07BCC47A334E94FFE61DFFA469713B0 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Collections.Generic.List`1<!!0> System.Collections.Generic.List`1<TealiumCommon.ConsentCategories>::ConvertAll<System.Object>(System.Converter`2<!0,!!0>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * List_1_ConvertAll_TisRuntimeObject_m39119D5F90FECCB900EB2C5F3D74A81957A6456B_gshared (List_1_tB719F9AEA1042BBCF17CC50DC1881550E74D3695 * __this, Converter_2_t1B68F918E07BCC47A334E94FFE61DFFA469713B0 * ___converter0, const RuntimeMethod* method);

// System.Void TealiumCommon.Collectors::set_Value(System.String)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Collectors_set_Value_m263E39F60B836412CAC7C5C3665C4F4F594D0D9F_inline (Collectors_tF2C4928DE0A75E12B7700E84D52749D66D48F723 * __this, String_t* ___value0, const RuntimeMethod* method);
// System.Void TealiumCommon.Collectors::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Collectors__ctor_m3BD06000437F58AF92D057812876816AB8380975 (Collectors_tF2C4928DE0A75E12B7700E84D52749D66D48F723 * __this, String_t* ___value0, const RuntimeMethod* method);
// System.String TealiumCommon.Collectors::get_Value()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* Collectors_get_Value_mA96FD040FE21ACFE885603005B2042D21E2B0F52_inline (Collectors_tF2C4928DE0A75E12B7700E84D52749D66D48F723 * __this, const RuntimeMethod* method);
// System.Void TealiumCommon.ConsentCategories::set_Value(System.String)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ConsentCategories_set_Value_m84CB68EB66AC90CE7C9D55DD29289BF40D9A44D2_inline (ConsentCategories_t7F1FDE7995E2ABB2BEF4A4DC381AE8DEE9B8429F * __this, String_t* ___value0, const RuntimeMethod* method);
// System.Void TealiumCommon.ConsentCategories::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConsentCategories__ctor_mD29F198528FEAC03F61FC521EFABCB88FC7169EE (ConsentCategories_t7F1FDE7995E2ABB2BEF4A4DC381AE8DEE9B8429F * __this, String_t* ___value0, const RuntimeMethod* method);
// System.String TealiumCommon.ConsentCategories::get_Value()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* ConsentCategories_get_Value_m2E4707B478B2A5B3329FA5978C527176B189EAF7_inline (ConsentCategories_t7F1FDE7995E2ABB2BEF4A4DC381AE8DEE9B8429F * __this, const RuntimeMethod* method);
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405 (RuntimeObject * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Object>::.ctor()
inline void Dictionary_2__ctor_mCD0C2F0325B7677B9BC340A60AA3FB9C7A88FF63 (Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 * __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 *, const RuntimeMethod*))Dictionary_2__ctor_m2C8EE5C13636D67F6C451C4935049F534AEC658F_gshared)(__this, method);
}
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Object>::Add(!0,!1)
inline void Dictionary_2_Add_m005F33425CDAEC23027518EC759F8F439AF34F3F (Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 * __this, String_t* ___key0, RuntimeObject * ___value1, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 *, String_t*, RuntimeObject *, const RuntimeMethod*))Dictionary_2_Add_m830DC29CD6F7128D4990D460CCCDE032E3B693D9_gshared)(__this, ___key0, ___value1, method);
}
// System.String TealiumCommon.TimeUnit::get_Value()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* TimeUnit_get_Value_m9392FC6C65BB94088AAADC8EA5F63470CBB1FADC_inline (TimeUnit_tEDC26F433AD0E93FB173CBB14399B6B806B7F78D * __this, const RuntimeMethod* method);
// System.Void TealiumCommon.ConsentPolicy::set_Value(System.String)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ConsentPolicy_set_Value_m4344135F1898E3738C0A647E82990B20F5C7582D_inline (ConsentPolicy_tA405DFF59561F55C0C5C738E3ECC75B8032B6A01 * __this, String_t* ___value0, const RuntimeMethod* method);
// System.Void TealiumCommon.ConsentPolicy::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConsentPolicy__ctor_m52E852DA30812D6ECE66BAA04EEA49FD3EAA712E (ConsentPolicy_tA405DFF59561F55C0C5C738E3ECC75B8032B6A01 * __this, String_t* ___value0, const RuntimeMethod* method);
// System.String TealiumCommon.ConsentPolicy::get_Value()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* ConsentPolicy_get_Value_mECB55CC0D233FB6CC9865E4839457B76DDD6EB1F_inline (ConsentPolicy_tA405DFF59561F55C0C5C738E3ECC75B8032B6A01 * __this, const RuntimeMethod* method);
// System.Void TealiumCommon.ConsentStatus::set_Value(System.String)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ConsentStatus_set_Value_m6559AA65577983981E4F5B5A5214A10B5D8AA2BF_inline (ConsentStatus_t6263FFF5C886922D62B1DDC450EFE8CE2036F101 * __this, String_t* ___value0, const RuntimeMethod* method);
// System.Void TealiumCommon.ConsentStatus::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConsentStatus__ctor_mFB9435FCDD5874106DCA5003557A65384467E0A5 (ConsentStatus_t6263FFF5C886922D62B1DDC450EFE8CE2036F101 * __this, String_t* ___value0, const RuntimeMethod* method);
// System.String TealiumCommon.ConsentStatus::get_Value()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* ConsentStatus_get_Value_mE6D4CEC397F8DF285456F8FC9CA485FAD4DE6819_inline (ConsentStatus_t6263FFF5C886922D62B1DDC450EFE8CE2036F101 * __this, const RuntimeMethod* method);
// System.Void TealiumCommon.Dispatchers::set_Value(System.String)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Dispatchers_set_Value_mBFDF13FCD45AA1E470F4D36A55FD9CBA4C54C598_inline (Dispatchers_tB9298ED86C40129DF8BF09E2B9EBEC23F8C5A236 * __this, String_t* ___value0, const RuntimeMethod* method);
// System.Void TealiumCommon.Dispatchers::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dispatchers__ctor_m9A9AB9015BEAAF6CB8D38A7C78E074FAB476BBF7 (Dispatchers_tB9298ED86C40129DF8BF09E2B9EBEC23F8C5A236 * __this, String_t* ___value0, const RuntimeMethod* method);
// System.String TealiumCommon.Dispatchers::get_Value()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* Dispatchers_get_Value_m8E3CBA1DD9471A6DD45BCB5B2F81553E102D9510_inline (Dispatchers_tB9298ED86C40129DF8BF09E2B9EBEC23F8C5A236 * __this, const RuntimeMethod* method);
// System.Void System.Attribute::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Attribute__ctor_m5C1862A7DFC2C25A4797A8C5F681FBB5CB53ECE1 (Attribute_t037CA9D9F3B742C063DB364D2EEBBF9FC5772C71 * __this, const RuntimeMethod* method);
// System.Void TealiumCommon.Expiry::set_Value(System.String)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Expiry_set_Value_m01A424420372045086D8EB2B4992D144722CCA4D_inline (Expiry_tCC1CF50318A9D2722F63B5E5842DCD2D0FCA8137 * __this, String_t* ___value0, const RuntimeMethod* method);
// System.Void TealiumCommon.Expiry::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Expiry__ctor_m41432A3B1448C0F850D94D71548E8B35CF1EEB12 (Expiry_tCC1CF50318A9D2722F63B5E5842DCD2D0FCA8137 * __this, String_t* ___value0, const RuntimeMethod* method);
// System.String TealiumCommon.Expiry::get_Value()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* Expiry_get_Value_m26ED3077C06BF3DFEB44E88E432DA6149E203CA4_inline (Expiry_tCC1CF50318A9D2722F63B5E5842DCD2D0FCA8137 * __this, const RuntimeMethod* method);
// System.Void TealiumCommon.LogLevel::set_Value(System.String)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void LogLevel_set_Value_m2CB6AB544572542164B28F41BE06090CB2FC694B_inline (LogLevel_tC8A9CB2FDD6BA29729D740AB210BD2214ACC9ECD * __this, String_t* ___value0, const RuntimeMethod* method);
// System.Void TealiumCommon.LogLevel::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LogLevel__ctor_m1866708E8CA1EC940723188C79F02502B7838531 (LogLevel_tC8A9CB2FDD6BA29729D740AB210BD2214ACC9ECD * __this, String_t* ___value0, const RuntimeMethod* method);
// System.String TealiumCommon.LogLevel::get_Value()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* LogLevel_get_Value_mC918DB8824B386771CA57BA448D46B86ECCAEED0_inline (LogLevel_tC8A9CB2FDD6BA29729D740AB210BD2214ACC9ECD * __this, const RuntimeMethod* method);
// System.Void UnityEngine.AndroidJavaClass::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidJavaClass__ctor_mEFF9F51871F231955D97DABDE9AB4A6B4EDA5541 (AndroidJavaClass_t52E934B16476D72AA6E4B248F989F2F825EB62D4 * __this, String_t* ___className0, const RuntimeMethod* method);
// !!0 UnityEngine.AndroidJavaObject::GetStatic<UnityEngine.AndroidJavaObject>(System.String)
inline AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * AndroidJavaObject_GetStatic_TisAndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E_mC84C97A7EC20ED712D21107C9FA32E0785021153 (AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * __this, String_t* ___fieldName0, const RuntimeMethod* method)
{
	return ((  AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * (*) (AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E *, String_t*, const RuntimeMethod*))AndroidJavaObject_GetStatic_TisRuntimeObject_mEC743ECF275CB896DE039A9FC1E5672B30C8B3D0_gshared)(__this, ___fieldName0, method);
}
// !!0[] System.Array::Empty<System.Object>()
inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* Array_Empty_TisRuntimeObject_m1FBC21243DF3542384C523801E8CA8A97606C747_inline (const RuntimeMethod* method)
{
	return ((  ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* (*) (const RuntimeMethod*))Array_Empty_TisRuntimeObject_m1FBC21243DF3542384C523801E8CA8A97606C747_gshared_inline)(method);
}
// !!0 UnityEngine.AndroidJavaObject::Call<UnityEngine.AndroidJavaObject>(System.String,System.Object[])
inline AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * AndroidJavaObject_Call_TisAndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E_mC5ED59BBD9C24EFFD98D8C3819C7E15DFE08F412 (AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * __this, String_t* ___methodName0, ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ___args1, const RuntimeMethod* method)
{
	return ((  AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * (*) (AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E *, String_t*, ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*, const RuntimeMethod*))AndroidJavaObject_Call_TisRuntimeObject_mB802C2A6B0365A1670402D283EB7FA241C326B0E_gshared)(__this, ___methodName0, ___args1, method);
}
// System.String Newtonsoft.Json.JsonConvert::SerializeObject(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* JsonConvert_SerializeObject_mA9001ADA0DB9EA238BED332AB41743609EB6AD9D (RuntimeObject * ___value0, const RuntimeMethod* method);
// !!0 UnityEngine.AndroidJavaObject::CallStatic<System.Boolean>(System.String,System.Object[])
inline bool AndroidJavaObject_CallStatic_TisBoolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_m08A8ECF220D35069EF5A4A50C2F38E925F0852FB (AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * __this, String_t* ___methodName0, ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ___args1, const RuntimeMethod* method)
{
	return ((  bool (*) (AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E *, String_t*, ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*, const RuntimeMethod*))AndroidJavaObject_CallStatic_TisBoolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_m08A8ECF220D35069EF5A4A50C2F38E925F0852FB_gshared)(__this, ___methodName0, ___args1, method);
}
// System.Void System.Action`1<System.Boolean>::Invoke(!0)
inline void Action_1_Invoke_m95E5C9FC67F7B0BDC3CD5E00AC5D4C8A00C97AC5 (Action_1_tCE2D770918A65CAD277C08C4E8C05385EA267E83 * __this, bool ___obj0, const RuntimeMethod* method)
{
	((  void (*) (Action_1_tCE2D770918A65CAD277C08C4E8C05385EA267E83 *, bool, const RuntimeMethod*))Action_1_Invoke_m95E5C9FC67F7B0BDC3CD5E00AC5D4C8A00C97AC5_gshared)(__this, ___obj0, method);
}
// System.Void UnityEngine.AndroidJavaObject::CallStatic(System.String,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidJavaObject_CallStatic_m5A97968767E1603C021023809276443ED24577FB (AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * __this, String_t* ___methodName0, ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ___args1, const RuntimeMethod* method);
// System.Type System.Object::GetType()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t * Object_GetType_m571FE8360C10B98C23AAF1F066D92C08CC94F45B (RuntimeObject * __this, const RuntimeMethod* method);
// System.Type System.Type::GetTypeFromHandle(System.RuntimeTypeHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t * Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E (RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  ___handle0, const RuntimeMethod* method);
// System.Boolean System.Type::op_Equality(System.Type,System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Type_op_Equality_mA438719A1FDF103C7BBBB08AEF564E7FAEEA0046 (Type_t * ___left0, Type_t * ___right1, const RuntimeMethod* method);
// !!0 UnityEngine.AndroidJavaObject::CallStatic<System.String>(System.String,System.Object[])
inline String_t* AndroidJavaObject_CallStatic_TisString_t_m5A20C2CE3D48240700CE5881319C2557947CDC7A (AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * __this, String_t* ___methodName0, ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ___args1, const RuntimeMethod* method)
{
	return ((  String_t* (*) (AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E *, String_t*, ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*, const RuntimeMethod*))AndroidJavaObject_CallStatic_TisRuntimeObject_m29BD05B7A29F937D71B746DFFE889B90E1142509_gshared)(__this, ___methodName0, ___args1, method);
}
// !!0 Newtonsoft.Json.JsonConvert::DeserializeObject<System.Collections.Generic.Dictionary`2<System.String,System.Object>>(System.String)
inline Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 * JsonConvert_DeserializeObject_TisDictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399_m9C72B9A7CA671CB0DAE02CAE6B37E464873D87E6 (String_t* ___value0, const RuntimeMethod* method)
{
	return ((  Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 * (*) (String_t*, const RuntimeMethod*))JsonConvert_DeserializeObject_TisRuntimeObject_m3BBCDB816C8B67B0728467ED827CDF4C7F1E9A86_gshared)(___value0, method);
}
// !1 System.Collections.Generic.Dictionary`2<System.String,System.Object>::get_Item(!0)
inline RuntimeObject * Dictionary_2_get_Item_m88AA4580D695AEA212B0DF17D8B55C98CF3B624D (Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 * __this, String_t* ___key0, const RuntimeMethod* method)
{
	return ((  RuntimeObject * (*) (Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 *, String_t*, const RuntimeMethod*))Dictionary_2_get_Item_mB1398A10D048A0246178C59F95003BD338CE7394_gshared)(__this, ___key0, method);
}
// System.Object TealiumUnityPlugin::ToCollections(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * TealiumUnityPlugin_ToCollections_m5E2B1D64A02C34EE7ADBCCCB5B6C3040A2CC3C75 (RuntimeObject * ___o0, const RuntimeMethod* method);
// TealiumCommon.ConsentStatus TealiumCommon.ConsentStatus::FromString(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ConsentStatus_t6263FFF5C886922D62B1DDC450EFE8CE2036F101  ConsentStatus_FromString_m1E231205664209DC9B4A7095BEDFCB7D6ECB9BEF (String_t* ___status0, const RuntimeMethod* method);
// System.String[] System.String::Split(System.Char[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* String_Split_m2C74DC2B85B322998094BEDE787C378822E1F28B (String_t* __this, CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* ___separator0, const RuntimeMethod* method);
// System.Collections.Generic.List`1<!!0> System.Linq.Enumerable::ToList<System.String>(System.Collections.Generic.IEnumerable`1<!!0>)
inline List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * Enumerable_ToList_TisString_t_m6685B37A12E077BE26D988D9881A6EA4BF3AE295 (RuntimeObject* ___source0, const RuntimeMethod* method)
{
	return ((  List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * (*) (RuntimeObject*, const RuntimeMethod*))Enumerable_ToList_TisRuntimeObject_mA4E485F973C6DF746B8DB54CA6F54192D4231CA2_gshared)(___source0, method);
}
// System.Void System.Converter`2<System.String,TealiumCommon.ConsentCategories>::.ctor(System.Object,System.IntPtr)
inline void Converter_2__ctor_mB0A0BDAE8830CC5A9B0328128E1C51944643F609 (Converter_2_tF015A85C226F06C29481EF50AC5392D4975A7B7D * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Converter_2_tF015A85C226F06C29481EF50AC5392D4975A7B7D *, RuntimeObject *, intptr_t, const RuntimeMethod*))Converter_2__ctor_m6B035C201C66F9926F6FB05C14A3C22572D188FE_gshared)(__this, ___object0, ___method1, method);
}
// System.Collections.Generic.List`1<!!0> System.Collections.Generic.List`1<System.String>::ConvertAll<TealiumCommon.ConsentCategories>(System.Converter`2<!0,!!0>)
inline List_1_tB719F9AEA1042BBCF17CC50DC1881550E74D3695 * List_1_ConvertAll_TisConsentCategories_t7F1FDE7995E2ABB2BEF4A4DC381AE8DEE9B8429F_m8905DF3C269C817A2860FF5B6FAA60411982A49E (List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * __this, Converter_2_tF015A85C226F06C29481EF50AC5392D4975A7B7D * ___converter0, const RuntimeMethod* method)
{
	return ((  List_1_tB719F9AEA1042BBCF17CC50DC1881550E74D3695 * (*) (List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 *, Converter_2_tF015A85C226F06C29481EF50AC5392D4975A7B7D *, const RuntimeMethod*))List_1_ConvertAll_TisConsentCategories_t7F1FDE7995E2ABB2BEF4A4DC381AE8DEE9B8429F_mF7EFDB8E04B4AA948BA5BA31C56EBE4EE3C9AEDB_gshared)(__this, ___converter0, method);
}
// System.Void TealiumUnityPlugin::OnRemoteCommandCompletion(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TealiumUnityPlugin_OnRemoteCommandCompletion_mB3D09BD131A2E5EDDA6A0862CD7822B6A031F00C (String_t* ___payload0, const RuntimeMethod* method);
// System.Void TealiumUnityPlugin::OnVisitorServiceUpdate(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TealiumUnityPlugin_OnVisitorServiceUpdate_m1A6C692F0799B188F8FBF219808CE9A41059864A (String_t* ___payload0, const RuntimeMethod* method);
// System.Void TealiumUnityPlugin::OnConsentExpiration()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TealiumUnityPlugin_OnConsentExpiration_m325589A0A06C82CA30DDE8B90B9984E6361E06BA (const RuntimeMethod* method);
// System.Void UnityEngine.MonoBehaviour::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED (MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A * __this, const RuntimeMethod* method);
// System.Void UnityEngine.GameObject::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameObject__ctor_mDF8BF31EAE3E03F24421531B25FB4BEDB7C87144 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, String_t* ___name0, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::AddComponent<TealiumAndroid>()
inline TealiumAndroid_t3261BB388DA01765B53016B078B894DB9573A857 * GameObject_AddComponent_TisTealiumAndroid_t3261BB388DA01765B53016B078B894DB9573A857_mAF82A6D740899969FBC664219EB54FD63C233643 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method)
{
	return ((  TealiumAndroid_t3261BB388DA01765B53016B078B894DB9573A857 * (*) (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *, const RuntimeMethod*))GameObject_AddComponent_TisRuntimeObject_mBDBD6EC58A4409E35E4C5D08757C36E4938256B1_gshared)(__this, method);
}
// System.String TealiumCommon.TealiumEnvironment::get_Value()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* TealiumEnvironment_get_Value_m5ABEEBC4404B7A85E598D677BE066B85DB543681_inline (TealiumEnvironment_t24AF72642DBC059461FBBF69A92B7A4EE25A7446 * __this, const RuntimeMethod* method);
// System.Void System.Converter`2<TealiumCommon.Dispatchers,System.String>::.ctor(System.Object,System.IntPtr)
inline void Converter_2__ctor_m912E9EE293C82A94F0E88045680627CD01BB8C48 (Converter_2_t8DCD435D80605558FF0393EA8820ECC291B6130D * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Converter_2_t8DCD435D80605558FF0393EA8820ECC291B6130D *, RuntimeObject *, intptr_t, const RuntimeMethod*))Converter_2__ctor_m81C080BC66CC7D608CD368D76BCA89EA1038EF34_gshared)(__this, ___object0, ___method1, method);
}
// System.Collections.Generic.List`1<!!0> System.Collections.Generic.List`1<TealiumCommon.Dispatchers>::ConvertAll<System.String>(System.Converter`2<!0,!!0>)
inline List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * List_1_ConvertAll_TisString_t_m9B58AA35146B6E87DA967CEEB7AD8AF0B526D42E (List_1_t5140BA5F1B10A238CE781B1DC4039B4AFCE4E240 * __this, Converter_2_t8DCD435D80605558FF0393EA8820ECC291B6130D * ___converter0, const RuntimeMethod* method)
{
	return ((  List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * (*) (List_1_t5140BA5F1B10A238CE781B1DC4039B4AFCE4E240 *, Converter_2_t8DCD435D80605558FF0393EA8820ECC291B6130D *, const RuntimeMethod*))List_1_ConvertAll_TisRuntimeObject_m911B1E90095E52934B1514013AC4B274AEA6AADA_gshared)(__this, ___converter0, method);
}
// System.Void System.Converter`2<TealiumCommon.Collectors,System.String>::.ctor(System.Object,System.IntPtr)
inline void Converter_2__ctor_m0C7282FA6A13370BC41DECB7F55A22758C7E2B99 (Converter_2_t8966C243E6818DA305580ED799C4458A967FBC4B * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Converter_2_t8966C243E6818DA305580ED799C4458A967FBC4B *, RuntimeObject *, intptr_t, const RuntimeMethod*))Converter_2__ctor_m953E76A3799D75C1EB7D5A1674A81B99AE8687E2_gshared)(__this, ___object0, ___method1, method);
}
// System.Collections.Generic.List`1<!!0> System.Collections.Generic.List`1<TealiumCommon.Collectors>::ConvertAll<System.String>(System.Converter`2<!0,!!0>)
inline List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * List_1_ConvertAll_TisString_t_mFB120017498D56D7A706F6A1EB9E05F740ACB7BC (List_1_t1AF4DE87B3698887C7A6973FA2CF366D49D00A41 * __this, Converter_2_t8966C243E6818DA305580ED799C4458A967FBC4B * ___converter0, const RuntimeMethod* method)
{
	return ((  List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * (*) (List_1_t1AF4DE87B3698887C7A6973FA2CF366D49D00A41 *, Converter_2_t8966C243E6818DA305580ED799C4458A967FBC4B *, const RuntimeMethod*))List_1_ConvertAll_TisRuntimeObject_m3ADA791B9911709F3911F02A468426DC4C6CA192_gshared)(__this, ___converter0, method);
}
// System.Boolean System.Nullable`1<TealiumCommon.LogLevel>::get_HasValue()
inline bool Nullable_1_get_HasValue_m5C68BCA359253ED7BAF57AEC0411DC539E1D52B5_inline (Nullable_1_tEDD6DE645137CA544DA6DFB826B36BF4C9425A28 * __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Nullable_1_tEDD6DE645137CA544DA6DFB826B36BF4C9425A28 *, const RuntimeMethod*))Nullable_1_get_HasValue_m5C68BCA359253ED7BAF57AEC0411DC539E1D52B5_gshared_inline)(__this, method);
}
// !0 System.Nullable`1<TealiumCommon.LogLevel>::GetValueOrDefault()
inline LogLevel_tC8A9CB2FDD6BA29729D740AB210BD2214ACC9ECD  Nullable_1_GetValueOrDefault_mB6AF2E00017652A7A460E421622828E15FB4F437_inline (Nullable_1_tEDD6DE645137CA544DA6DFB826B36BF4C9425A28 * __this, const RuntimeMethod* method)
{
	return ((  LogLevel_tC8A9CB2FDD6BA29729D740AB210BD2214ACC9ECD  (*) (Nullable_1_tEDD6DE645137CA544DA6DFB826B36BF4C9425A28 *, const RuntimeMethod*))Nullable_1_GetValueOrDefault_mB6AF2E00017652A7A460E421622828E15FB4F437_gshared_inline)(__this, method);
}
// System.Boolean System.Nullable`1<TealiumCommon.ConsentPolicy>::get_HasValue()
inline bool Nullable_1_get_HasValue_m8043104DA135F5C852621E53CEB0FD85ACD0DC68_inline (Nullable_1_t10B092B32DAE6088B0BC1F2903DC4B4D0A477307 * __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Nullable_1_t10B092B32DAE6088B0BC1F2903DC4B4D0A477307 *, const RuntimeMethod*))Nullable_1_get_HasValue_m8043104DA135F5C852621E53CEB0FD85ACD0DC68_gshared_inline)(__this, method);
}
// !0 System.Nullable`1<TealiumCommon.ConsentPolicy>::GetValueOrDefault()
inline ConsentPolicy_tA405DFF59561F55C0C5C738E3ECC75B8032B6A01  Nullable_1_GetValueOrDefault_m86DD280389373DC6112C612AF57005073D7829CA_inline (Nullable_1_t10B092B32DAE6088B0BC1F2903DC4B4D0A477307 * __this, const RuntimeMethod* method)
{
	return ((  ConsentPolicy_tA405DFF59561F55C0C5C738E3ECC75B8032B6A01  (*) (Nullable_1_t10B092B32DAE6088B0BC1F2903DC4B4D0A477307 *, const RuntimeMethod*))Nullable_1_GetValueOrDefault_m86DD280389373DC6112C612AF57005073D7829CA_gshared_inline)(__this, method);
}
// System.Collections.Generic.Dictionary`2<System.String,System.Object> TealiumCommon.ConsentExpiry::ToDictionary()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 * ConsentExpiry_ToDictionary_m994268DD15C0EEE496D87D9EA465146CB719EA1F (ConsentExpiry_tF0E363E167F8B963812764554538F6BD7ABF9BC5 * __this, const RuntimeMethod* method);
// System.Void TealiumCommon.TealiumEnvironment::set_Value(System.String)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void TealiumEnvironment_set_Value_mF074D158F1AC98622598BBFE595B8A2D9DA45D2E_inline (TealiumEnvironment_t24AF72642DBC059461FBBF69A92B7A4EE25A7446 * __this, String_t* ___value0, const RuntimeMethod* method);
// System.Void TealiumCommon.TealiumEnvironment::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TealiumEnvironment__ctor_mC888043FCA56BBE8AD316D92AA291C797DCE7921 (TealiumEnvironment_t24AF72642DBC059461FBBF69A92B7A4EE25A7446 * __this, String_t* ___value0, const RuntimeMethod* method);
// System.Void TealiumCommon.TealiumDispatch::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TealiumDispatch__ctor_m6ADA3A1CB9620F6BD0D2E4FD21AB32129439B72D (TealiumDispatch_tBC7A4951FD4926BB6EFF74865AF1EC9D1C6BAFB9 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Debug::LogFormat(UnityEngine.LogType,UnityEngine.LogOption,UnityEngine.Object,System.String,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_LogFormat_m73109637CE17FEF4B151F55297091368A1BE46E0 (int32_t ___logType0, int32_t ___logOptions1, Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___context2, String_t* ___format3, ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ___args4, const RuntimeMethod* method);
// System.Void TealiumiOS::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TealiumiOS__ctor_m319377341A42A585B18118A88243DC63C8BAD535 (TealiumiOS_t733CCF8E376EBE4BA5D0C61D6D01A4CE824F8BC4 * __this, const RuntimeMethod* method);
// TealiumUnity TealiumUnityPlugin::get_Tealium()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TealiumUnityPlugin_get_Tealium_m7BAFB8F34F51BBD6B074C55011186D85AAE687FF (const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Action`1<System.Collections.Generic.Dictionary`2<System.String,System.Object>>>::set_Item(!0,!1)
inline void Dictionary_2_set_Item_m4A823B95FF63222C99CEB2CEA5D2B9C72159CB22 (Dictionary_2_tA582BF436674B8CBA45DA2033E1A98F298DBADA9 * __this, String_t* ___key0, Action_1_t6B2EAA2D3491CBA6FEF1ECDF624EEF00DFD194C1 * ___value1, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_tA582BF436674B8CBA45DA2033E1A98F298DBADA9 *, String_t*, Action_1_t6B2EAA2D3491CBA6FEF1ECDF624EEF00DFD194C1 *, const RuntimeMethod*))Dictionary_2_set_Item_mE6BF870B04922441F9F2760E782DEE6EE682615A_gshared)(__this, ___key0, ___value1, method);
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,System.Action`1<System.Collections.Generic.Dictionary`2<System.String,System.Object>>>::Remove(!0)
inline bool Dictionary_2_Remove_m0D984C0C6C1ABE13FBFD0300F1BE325115995A15 (Dictionary_2_tA582BF436674B8CBA45DA2033E1A98F298DBADA9 * __this, String_t* ___key0, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_tA582BF436674B8CBA45DA2033E1A98F298DBADA9 *, String_t*, const RuntimeMethod*))Dictionary_2_Remove_m32325BAD86F31C471AEBE80C6A7A8A6908EB0611_gshared)(__this, ___key0, method);
}
// System.Collections.Generic.Dictionary`2<System.String,System.Object> TealiumUnityPlugin::ConvertValuesToCollections(System.Collections.Generic.Dictionary`2<System.String,System.Object>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 * TealiumUnityPlugin_ConvertValuesToCollections_mA5295D0CB3019841397ABA2DD64635DA8F280877 (Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 * ___dictionary0, const RuntimeMethod* method);
// !1 System.Collections.Generic.Dictionary`2<System.String,System.Action`1<System.Collections.Generic.Dictionary`2<System.String,System.Object>>>::get_Item(!0)
inline Action_1_t6B2EAA2D3491CBA6FEF1ECDF624EEF00DFD194C1 * Dictionary_2_get_Item_m4360B651F20BDDD67A015E3975308D36D156FE06 (Dictionary_2_tA582BF436674B8CBA45DA2033E1A98F298DBADA9 * __this, String_t* ___key0, const RuntimeMethod* method)
{
	return ((  Action_1_t6B2EAA2D3491CBA6FEF1ECDF624EEF00DFD194C1 * (*) (Dictionary_2_tA582BF436674B8CBA45DA2033E1A98F298DBADA9 *, String_t*, const RuntimeMethod*))Dictionary_2_get_Item_mB1398A10D048A0246178C59F95003BD338CE7394_gshared)(__this, ___key0, method);
}
// System.Void System.Action`1<System.Collections.Generic.Dictionary`2<System.String,System.Object>>::Invoke(!0)
inline void Action_1_Invoke_m761F631FCAC3E0A9D38C7F2D6035B687B9FD7BE2 (Action_1_t6B2EAA2D3491CBA6FEF1ECDF624EEF00DFD194C1 * __this, Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 * ___obj0, const RuntimeMethod* method)
{
	((  void (*) (Action_1_t6B2EAA2D3491CBA6FEF1ECDF624EEF00DFD194C1 *, Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 *, const RuntimeMethod*))Action_1_Invoke_m587509C88BB83721D7918D89DF07606BB752D744_gshared)(__this, ___obj0, method);
}
// System.Void System.Action::Invoke()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_Invoke_m3FFA5BE3D64F0FF8E1E1CB6F953913FADB5EB89E (Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * __this, const RuntimeMethod* method);
// System.Collections.Generic.Dictionary`2/Enumerator<!0,!1> System.Collections.Generic.Dictionary`2<System.String,System.Object>::GetEnumerator()
inline Enumerator_t3E7848C1896025E8CF7A49817DB0E38F0ADD0E15  Dictionary_2_GetEnumerator_m2081C22E67B979AFF0710DA64B3BFE895BAE1635 (Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 * __this, const RuntimeMethod* method)
{
	return ((  Enumerator_t3E7848C1896025E8CF7A49817DB0E38F0ADD0E15  (*) (Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 *, const RuntimeMethod*))Dictionary_2_GetEnumerator_mA44BBB15DFBD8E08B5E60E23AA5044D45C3F889F_gshared)(__this, method);
}
// System.Collections.Generic.KeyValuePair`2<!0,!1> System.Collections.Generic.Dictionary`2/Enumerator<System.String,System.Object>::get_Current()
inline KeyValuePair_2_tD6E57B7EAC6134DCA97F39E5E598EB43B44A5EAE  Enumerator_get_Current_m5D01A6607C2199E7A7B5856E49119C26FE5327BB_inline (Enumerator_t3E7848C1896025E8CF7A49817DB0E38F0ADD0E15 * __this, const RuntimeMethod* method)
{
	return ((  KeyValuePair_2_tD6E57B7EAC6134DCA97F39E5E598EB43B44A5EAE  (*) (Enumerator_t3E7848C1896025E8CF7A49817DB0E38F0ADD0E15 *, const RuntimeMethod*))Enumerator_get_Current_m17E1C36ECBB09CC2AB892710866F8655D83A6048_gshared_inline)(__this, method);
}
// !0 System.Collections.Generic.KeyValuePair`2<System.String,System.Object>::get_Key()
inline String_t* KeyValuePair_2_get_Key_mC43FCB322E586364D4402E639DB247702C4A6E6F_inline (KeyValuePair_2_tD6E57B7EAC6134DCA97F39E5E598EB43B44A5EAE * __this, const RuntimeMethod* method)
{
	return ((  String_t* (*) (KeyValuePair_2_tD6E57B7EAC6134DCA97F39E5E598EB43B44A5EAE *, const RuntimeMethod*))KeyValuePair_2_get_Key_mCAD7B121DB998D7C56EB0281215A860EFE9DCD95_gshared_inline)(__this, method);
}
// !1 System.Collections.Generic.KeyValuePair`2<System.String,System.Object>::get_Value()
inline RuntimeObject * KeyValuePair_2_get_Value_m9506505CADCD1ED074BD28FB1B26D48BBC7A9FA7_inline (KeyValuePair_2_tD6E57B7EAC6134DCA97F39E5E598EB43B44A5EAE * __this, const RuntimeMethod* method)
{
	return ((  RuntimeObject * (*) (KeyValuePair_2_tD6E57B7EAC6134DCA97F39E5E598EB43B44A5EAE *, const RuntimeMethod*))KeyValuePair_2_get_Value_m622223593F7461E7812C581DDB145270016ED303_gshared_inline)(__this, method);
}
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Object>::set_Item(!0,!1)
inline void Dictionary_2_set_Item_mD86FD5EED3CEB42690DDFEB80B2494A5A48A3EB9 (Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 * __this, String_t* ___key0, RuntimeObject * ___value1, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 *, String_t*, RuntimeObject *, const RuntimeMethod*))Dictionary_2_set_Item_mE6BF870B04922441F9F2760E782DEE6EE682615A_gshared)(__this, ___key0, ___value1, method);
}
// System.Boolean System.Collections.Generic.Dictionary`2/Enumerator<System.String,System.Object>::MoveNext()
inline bool Enumerator_MoveNext_m27DDAE22558733AB59D955136A7EF5AF05B1F4CE (Enumerator_t3E7848C1896025E8CF7A49817DB0E38F0ADD0E15 * __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_t3E7848C1896025E8CF7A49817DB0E38F0ADD0E15 *, const RuntimeMethod*))Enumerator_MoveNext_mCAD84084129516BD41DE5CC3E1FABA5A8DF836D0_gshared)(__this, method);
}
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.String,System.Object>::Dispose()
inline void Enumerator_Dispose_m7D3C5AB9967DFDFE269DC54DF367D0B21C59E356 (Enumerator_t3E7848C1896025E8CF7A49817DB0E38F0ADD0E15 * __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_t3E7848C1896025E8CF7A49817DB0E38F0ADD0E15 *, const RuntimeMethod*))Enumerator_Dispose_m85CA135BAB22C9F0C87C84AB90FF6740D1859279_gshared)(__this, method);
}
// !!0 Newtonsoft.Json.Linq.JToken::ToObject<System.Collections.Generic.IDictionary`2<System.String,System.Object>>()
inline RuntimeObject* JToken_ToObject_TisIDictionary_2_tED3FAE588A6FD3ED0A4589C52122AB8F53D8A3B8_mF33354572D8E7938287DF92385EC71FF35E9CBB3 (JToken_tAB8CCFD034E5837FFBBDA62C92FC28F49A7C525E * __this, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (JToken_tAB8CCFD034E5837FFBBDA62C92FC28F49A7C525E *, const RuntimeMethod*))JToken_ToObject_TisRuntimeObject_m98FFBB28B8ABB689929C87AF73B903C1BE9A8696_gshared)(__this, method);
}
// System.Void System.Func`2<System.Collections.Generic.KeyValuePair`2<System.String,System.Object>,System.String>::.ctor(System.Object,System.IntPtr)
inline void Func_2__ctor_m31D090A081982F561CFBE47CEB0C75636F91D0BC (Func_2_t1CA29703D8E4788617FC1EC9FA62DEBEE1E2CF3A * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Func_2_t1CA29703D8E4788617FC1EC9FA62DEBEE1E2CF3A *, RuntimeObject *, intptr_t, const RuntimeMethod*))Func_2__ctor_m63767C2AD1295D9C38EBAD72A237C0A5A3D18A71_gshared)(__this, ___object0, ___method1, method);
}
// System.Void System.Func`2<System.Collections.Generic.KeyValuePair`2<System.String,System.Object>,System.Object>::.ctor(System.Object,System.IntPtr)
inline void Func_2__ctor_m2943627DBB46AAA049B4566A35BDF2E91734CCCF (Func_2_t04E847CA06FFEF3C03EF2513C3B1F9F57A39D797 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Func_2_t04E847CA06FFEF3C03EF2513C3B1F9F57A39D797 *, RuntimeObject *, intptr_t, const RuntimeMethod*))Func_2__ctor_m63767C2AD1295D9C38EBAD72A237C0A5A3D18A71_gshared)(__this, ___object0, ___method1, method);
}
// System.Collections.Generic.Dictionary`2<!!1,!!2> System.Linq.Enumerable::ToDictionary<System.Collections.Generic.KeyValuePair`2<System.String,System.Object>,System.String,System.Object>(System.Collections.Generic.IEnumerable`1<!!0>,System.Func`2<!!0,!!1>,System.Func`2<!!0,!!2>)
inline Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 * Enumerable_ToDictionary_TisKeyValuePair_2_tD6E57B7EAC6134DCA97F39E5E598EB43B44A5EAE_TisString_t_TisRuntimeObject_mFBEE06B96A0FECCFE5342B372E6808E08B4CE4EF (RuntimeObject* ___source0, Func_2_t1CA29703D8E4788617FC1EC9FA62DEBEE1E2CF3A * ___keySelector1, Func_2_t04E847CA06FFEF3C03EF2513C3B1F9F57A39D797 * ___elementSelector2, const RuntimeMethod* method)
{
	return ((  Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 * (*) (RuntimeObject*, Func_2_t1CA29703D8E4788617FC1EC9FA62DEBEE1E2CF3A *, Func_2_t04E847CA06FFEF3C03EF2513C3B1F9F57A39D797 *, const RuntimeMethod*))Enumerable_ToDictionary_TisKeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625_TisRuntimeObject_TisRuntimeObject_mBDF6C6DD35A92D9E746EF77831C3819959A60050_gshared)(___source0, ___keySelector1, ___elementSelector2, method);
}
// !!0 Newtonsoft.Json.Linq.JToken::ToObject<System.Collections.Generic.List`1<System.Object>>()
inline List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * JToken_ToObject_TisList_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5_mD3541B7931BF12E8B7C5996D78FCFBD30E7A2272 (JToken_tAB8CCFD034E5837FFBBDA62C92FC28F49A7C525E * __this, const RuntimeMethod* method)
{
	return ((  List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * (*) (JToken_tAB8CCFD034E5837FFBBDA62C92FC28F49A7C525E *, const RuntimeMethod*))JToken_ToObject_TisRuntimeObject_m98FFBB28B8ABB689929C87AF73B903C1BE9A8696_gshared)(__this, method);
}
// System.Void System.Func`2<System.Object,System.Object>::.ctor(System.Object,System.IntPtr)
inline void Func_2__ctor_mA7F3C5A0612B84E910DE92E77BA95101FD68EEDB (Func_2_tFF5BB8F40A35B1BEA00D4EBBC6CBE7184A584436 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Func_2_tFF5BB8F40A35B1BEA00D4EBBC6CBE7184A584436 *, RuntimeObject *, intptr_t, const RuntimeMethod*))Func_2__ctor_mA7F3C5A0612B84E910DE92E77BA95101FD68EEDB_gshared)(__this, ___object0, ___method1, method);
}
// System.Collections.Generic.IEnumerable`1<!!1> System.Linq.Enumerable::Select<System.Object,System.Object>(System.Collections.Generic.IEnumerable`1<!!0>,System.Func`2<!!0,!!1>)
inline RuntimeObject* Enumerable_Select_TisRuntimeObject_TisRuntimeObject_mC0F1DA980E0433D70A6CF9DD7CD1942BB7FE87C0 (RuntimeObject* ___source0, Func_2_tFF5BB8F40A35B1BEA00D4EBBC6CBE7184A584436 * ___selector1, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (RuntimeObject*, Func_2_tFF5BB8F40A35B1BEA00D4EBBC6CBE7184A584436 *, const RuntimeMethod*))Enumerable_Select_TisRuntimeObject_TisRuntimeObject_mC0F1DA980E0433D70A6CF9DD7CD1942BB7FE87C0_gshared)(___source0, ___selector1, method);
}
// System.Collections.Generic.List`1<!!0> System.Linq.Enumerable::ToList<System.Object>(System.Collections.Generic.IEnumerable`1<!!0>)
inline List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * Enumerable_ToList_TisRuntimeObject_mA4E485F973C6DF746B8DB54CA6F54192D4231CA2 (RuntimeObject* ___source0, const RuntimeMethod* method)
{
	return ((  List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * (*) (RuntimeObject*, const RuntimeMethod*))Enumerable_ToList_TisRuntimeObject_mA4E485F973C6DF746B8DB54CA6F54192D4231CA2_gshared)(___source0, method);
}
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Action`1<System.Collections.Generic.Dictionary`2<System.String,System.Object>>>::.ctor()
inline void Dictionary_2__ctor_mC220EB1A68D502946EF9BE5A73F1339CC1BF7B46 (Dictionary_2_tA582BF436674B8CBA45DA2033E1A98F298DBADA9 * __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_tA582BF436674B8CBA45DA2033E1A98F298DBADA9 *, const RuntimeMethod*))Dictionary_2__ctor_m2C8EE5C13636D67F6C451C4935049F534AEC658F_gshared)(__this, method);
}
// System.Void TealiumiOS::initializationResponseReceived(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TealiumiOS_initializationResponseReceived_mF10D18463C3B0946F6678F3BFEA2B617C9C99AA0 (bool ___success0, const RuntimeMethod* method);
// System.Void TealiumiOS::remoteCommandReceived(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TealiumiOS_remoteCommandReceived_m0946C4CE24BF4B75C7D0B023C7F02927B7C557B2 (String_t* ___payload0, const RuntimeMethod* method);
// System.Void TealiumiOS::visitorServiceUpdateReceived(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TealiumiOS_visitorServiceUpdateReceived_mD5ED91A5C2447F4F238D19197D12ACE013849733 (String_t* ___payload0, const RuntimeMethod* method);
// System.Void TealiumiOS::consentExpirationReceived()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TealiumiOS_consentExpirationReceived_m239594694333B253BA54AEA556015ABF9FA87692 (const RuntimeMethod* method);
// System.Void TealiumUnityPlugin::OnInitialized(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TealiumUnityPlugin_OnInitialized_m3EF6AF695ECED304D06CEE68BE597CB46473885A (bool ___success0, const RuntimeMethod* method);
// System.Void TealiumiOS/InitializeDelegateMessage::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InitializeDelegateMessage__ctor_mC818570297D2A3FB6964038D3C6F9890E96A8F1E (InitializeDelegateMessage_tC95BD6C7C57DC458B247CC4A70D6AF216960A493 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Void TealiumiOS::Tealium_SetInitializeDelegate(TealiumiOS/InitializeDelegateMessage)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TealiumiOS_Tealium_SetInitializeDelegate_m89E2D4C46574206CC635F2B008ACBE476AD5F126 (InitializeDelegateMessage_tC95BD6C7C57DC458B247CC4A70D6AF216960A493 * ___callback0, const RuntimeMethod* method);
// System.Void TealiumiOS::Tealium_Initialize(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TealiumiOS_Tealium_Initialize_m24CEE3A18ED580627CE0A36985A0D54F8E9464C3 (String_t* ___config0, const RuntimeMethod* method);
// System.Void TealiumiOS::Tealium_Terminate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TealiumiOS_Tealium_Terminate_m15FC6955522EA9ECC8B03057F1E5E7A066344FF0 (const RuntimeMethod* method);
// System.Void TealiumiOS::Tealium_Track(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TealiumiOS_Tealium_Track_mEFA0B2E3BDEA3B93463A31BAE516BC555AC570E6 (String_t* ___dispatch0, const RuntimeMethod* method);
// System.Void TealiumiOS::Tealium_AddToDataLayer(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TealiumiOS_Tealium_AddToDataLayer_m4FCE1CE87090F7F3A63EB73E56C57BFD8B8F95A5 (String_t* ___data0, String_t* ___expiry1, const RuntimeMethod* method);
// System.String TealiumiOS::Tealium_GetFromDataLayer(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* TealiumiOS_Tealium_GetFromDataLayer_m308F0007E4340C53CAC1675E112991EFC3FEDC81 (String_t* ___id0, const RuntimeMethod* method);
// System.String System.String::Join(System.String,System.Collections.Generic.IEnumerable`1<System.String>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Join_m7E55204B5C94F9EB939D144E7EE684D016F90509 (String_t* ___separator0, RuntimeObject* ___values1, const RuntimeMethod* method);
// System.Void TealiumiOS::Tealium_RemoveFromDataLayer(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TealiumiOS_Tealium_RemoveFromDataLayer_m6393645609F99C36A877A03793C60150CFE2CBA5 (String_t* ___keys0, const RuntimeMethod* method);
// System.Void TealiumiOS::Tealium_SetConsentStatus(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TealiumiOS_Tealium_SetConsentStatus_m3F2BFED60D249128C19A17DD5F1FE4F46E0BF168 (String_t* ___status0, const RuntimeMethod* method);
// System.String TealiumiOS::Tealium_GetConsentStatus()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* TealiumiOS_Tealium_GetConsentStatus_mD075010B8E615627E73A2C4551AF499771D44CF3 (const RuntimeMethod* method);
// System.Void System.Converter`2<TealiumCommon.ConsentCategories,System.String>::.ctor(System.Object,System.IntPtr)
inline void Converter_2__ctor_m141352FD3DA11D48649963F9EA218AEFFD0A64BD (Converter_2_t05F0413FDB211EFC6EFA05D8F8F2EF8FC9265BCB * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Converter_2_t05F0413FDB211EFC6EFA05D8F8F2EF8FC9265BCB *, RuntimeObject *, intptr_t, const RuntimeMethod*))Converter_2__ctor_m3075492FB5FFD09F6F07F0285BC29C71A106205D_gshared)(__this, ___object0, ___method1, method);
}
// System.Collections.Generic.List`1<!!0> System.Collections.Generic.List`1<TealiumCommon.ConsentCategories>::ConvertAll<System.String>(System.Converter`2<!0,!!0>)
inline List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * List_1_ConvertAll_TisString_t_m993F7A5FE3A66D5750E4815B6DD41DE547D8535F (List_1_tB719F9AEA1042BBCF17CC50DC1881550E74D3695 * __this, Converter_2_t05F0413FDB211EFC6EFA05D8F8F2EF8FC9265BCB * ___converter0, const RuntimeMethod* method)
{
	return ((  List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * (*) (List_1_tB719F9AEA1042BBCF17CC50DC1881550E74D3695 *, Converter_2_t05F0413FDB211EFC6EFA05D8F8F2EF8FC9265BCB *, const RuntimeMethod*))List_1_ConvertAll_TisRuntimeObject_m39119D5F90FECCB900EB2C5F3D74A81957A6456B_gshared)(__this, ___converter0, method);
}
// System.Void TealiumiOS::Tealium_SetConsentCategories(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TealiumiOS_Tealium_SetConsentCategories_mFE62A43D2EA8C219484CA49D18599D3277F6E8A7 (String_t* ___categories0, const RuntimeMethod* method);
// System.String TealiumiOS::Tealium_GetConsentCategories()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* TealiumiOS_Tealium_GetConsentCategories_m9DA31041D2D97CCC320180512585CCCB53D91E38 (const RuntimeMethod* method);
// System.Void TealiumiOS/RemoteCommandDelegateMessage::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RemoteCommandDelegateMessage__ctor_mF34246CC8940B6CAABA5DE3CE3D32B8D93899F07 (RemoteCommandDelegateMessage_t5D69DB6883CD6653EC3E70F18E3C096FD043342D * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Void TealiumiOS::Tealium_SetRemoteCommandDelegate(TealiumiOS/RemoteCommandDelegateMessage)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TealiumiOS_Tealium_SetRemoteCommandDelegate_mA354FE025118691025F63B1E9D32F8E3B6E18DD1 (RemoteCommandDelegateMessage_t5D69DB6883CD6653EC3E70F18E3C096FD043342D * ___callback0, const RuntimeMethod* method);
// System.Void TealiumiOS::Tealium_AddRemoteCommand(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TealiumiOS_Tealium_AddRemoteCommand_mEA73257FAE7C2E8D346BFC739D3F03191EBED98D (String_t* ___id0, const RuntimeMethod* method);
// System.Void TealiumiOS::Tealium_RemoveRemoteCommand(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TealiumiOS_Tealium_RemoveRemoteCommand_m8C86040015B1F90420D7A8567150B1C853AAA5FE (String_t* ___id0, const RuntimeMethod* method);
// System.Void TealiumiOS::Tealium_JoinTrace(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TealiumiOS_Tealium_JoinTrace_m39C30E34AB9F5824DCC368313F347375B9B7A6AC (String_t* ___id0, const RuntimeMethod* method);
// System.Void TealiumiOS::Tealium_LeaveTrace()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TealiumiOS_Tealium_LeaveTrace_m6C5C5CD1B1E52F70EA2F4BCB9532C13CD1A8B733 (const RuntimeMethod* method);
// System.Void TealiumiOS/VisitorServiceDelegateMessage::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VisitorServiceDelegateMessage__ctor_m7760E515AE1925C13E3EE7D68CFBD6225EDD5DA8 (VisitorServiceDelegateMessage_t6B8D159765A2F10FA86086BFA8BD3F4FFB9DE18B * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Void TealiumiOS::Tealium_SetVisitorServiceDelegate(TealiumiOS/VisitorServiceDelegateMessage)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TealiumiOS_Tealium_SetVisitorServiceDelegate_m37C9EA4AAA2FE47269AF7C236F40493AAD2B1E38 (VisitorServiceDelegateMessage_t6B8D159765A2F10FA86086BFA8BD3F4FFB9DE18B * ___callback0, const RuntimeMethod* method);
// System.Void TealiumiOS/ConsentExpiryDelegateMessage::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConsentExpiryDelegateMessage__ctor_mCE24545D358D22749BB0849A2D2C6096B98DC30F (ConsentExpiryDelegateMessage_t086235450063F54925F0E78B7BE640C668914E6D * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Void TealiumiOS::Tealium_SetConsentExpiryDelegate(TealiumiOS/ConsentExpiryDelegateMessage)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TealiumiOS_Tealium_SetConsentExpiryDelegate_m2BFA8C74D9897A41FC056399EF96F8F15DB8A556 (ConsentExpiryDelegateMessage_t086235450063F54925F0E78B7BE640C668914E6D * ___callback0, const RuntimeMethod* method);
// System.String TealiumiOS::Tealium_GetVisitorId()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* TealiumiOS_Tealium_GetVisitorId_m4F213D3E9875C11ACB9AE43D6AFEE0DCB485828B (const RuntimeMethod* method);
// System.Boolean System.String::op_Equality(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB (String_t* ___a0, String_t* ___b1, const RuntimeMethod* method);
// System.Void TealiumCommon.TimeUnit::set_Value(System.String)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void TimeUnit_set_Value_mC79E04C1505BB47A15575375C2F436F0AC225ED3_inline (TimeUnit_tEDC26F433AD0E93FB173CBB14399B6B806B7F78D * __this, String_t* ___value0, const RuntimeMethod* method);
// System.Void TealiumCommon.TimeUnit::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TimeUnit__ctor_m0E9CA962D6F1AEBBB6B0CF3ACE84819C92821DE1 (TimeUnit_tEDC26F433AD0E93FB173CBB14399B6B806B7F78D * __this, String_t* ___value0, const RuntimeMethod* method);
// System.Void TealiumAndroid/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_mAE8A71250486D6D0AA6FCF9CA9024394B0E7179F (U3CU3Ec_t09F86AA9C724B6431311FD4F6B328ECB9D87A170 * __this, const RuntimeMethod* method);
// TealiumCommon.ConsentCategories TealiumCommon.ConsentCategories::FromString(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ConsentCategories_t7F1FDE7995E2ABB2BEF4A4DC381AE8DEE9B8429F  ConsentCategories_FromString_m376068953C39588BC3206B6D1C6BD7D9D0AC69CB (String_t* ___category0, const RuntimeMethod* method);
// System.Void TealiumCommon.TealiumConfig/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m664FDA1C4D794A3878AD16D83A9EAD4F06DC6CF7 (U3CU3Ec_t36D92B931A0CC3CAB85CB5872E3A3AD4EB480F83 * __this, const RuntimeMethod* method);
// System.Void TealiumUnityPlugin/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m82C293067FD21D21F5BEB94AC7C81204A3628CC8 (U3CU3Ec_t7521AAF4473714E35BDD03C93690F00668C0D29E * __this, const RuntimeMethod* method);
// System.Void TealiumiOS/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m42EF4AD0DA632A79CB504B1CA272A0FF8789E2C5 (U3CU3Ec_t9D2D486C0C56ED747E3B614EF2F08E5FBD4ACCB4 * __this, const RuntimeMethod* method);
IL2CPP_EXTERN_C void DEFAULT_CALL Tealium_Initialize(char*);
IL2CPP_EXTERN_C void DEFAULT_CALL Tealium_Track(char*);
IL2CPP_EXTERN_C void DEFAULT_CALL Tealium_Terminate();
IL2CPP_EXTERN_C void DEFAULT_CALL Tealium_AddToDataLayer(char*, char*);
IL2CPP_EXTERN_C char* DEFAULT_CALL Tealium_GetFromDataLayer(char*);
IL2CPP_EXTERN_C void DEFAULT_CALL Tealium_RemoveFromDataLayer(char*);
IL2CPP_EXTERN_C void DEFAULT_CALL Tealium_SetConsentStatus(char*);
IL2CPP_EXTERN_C char* DEFAULT_CALL Tealium_GetConsentStatus();
IL2CPP_EXTERN_C void DEFAULT_CALL Tealium_SetConsentCategories(char*);
IL2CPP_EXTERN_C char* DEFAULT_CALL Tealium_GetConsentCategories();
IL2CPP_EXTERN_C void DEFAULT_CALL Tealium_JoinTrace(char*);
IL2CPP_EXTERN_C void DEFAULT_CALL Tealium_LeaveTrace();
IL2CPP_EXTERN_C void DEFAULT_CALL Tealium_AddRemoteCommand(char*);
IL2CPP_EXTERN_C void DEFAULT_CALL Tealium_RemoveRemoteCommand(char*);
IL2CPP_EXTERN_C char* DEFAULT_CALL Tealium_GetVisitorId();
IL2CPP_EXTERN_C void DEFAULT_CALL Tealium_SetInitializeDelegate(Il2CppMethodPointer);
IL2CPP_EXTERN_C void DEFAULT_CALL Tealium_SetRemoteCommandDelegate(Il2CppMethodPointer);
IL2CPP_EXTERN_C void DEFAULT_CALL Tealium_SetVisitorServiceDelegate(Il2CppMethodPointer);
IL2CPP_EXTERN_C void DEFAULT_CALL Tealium_SetConsentExpiryDelegate(Il2CppMethodPointer);
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Conversion methods for marshalling of: TealiumCommon.Collectors
IL2CPP_EXTERN_C void Collectors_tF2C4928DE0A75E12B7700E84D52749D66D48F723_marshal_pinvoke(const Collectors_tF2C4928DE0A75E12B7700E84D52749D66D48F723& unmarshaled, Collectors_tF2C4928DE0A75E12B7700E84D52749D66D48F723_marshaled_pinvoke& marshaled)
{
	marshaled.___U3CValueU3Ek__BackingField_0 = il2cpp_codegen_marshal_string(unmarshaled.get_U3CValueU3Ek__BackingField_0());
}
IL2CPP_EXTERN_C void Collectors_tF2C4928DE0A75E12B7700E84D52749D66D48F723_marshal_pinvoke_back(const Collectors_tF2C4928DE0A75E12B7700E84D52749D66D48F723_marshaled_pinvoke& marshaled, Collectors_tF2C4928DE0A75E12B7700E84D52749D66D48F723& unmarshaled)
{
	unmarshaled.set_U3CValueU3Ek__BackingField_0(il2cpp_codegen_marshal_string_result(marshaled.___U3CValueU3Ek__BackingField_0));
}
// Conversion method for clean up from marshalling of: TealiumCommon.Collectors
IL2CPP_EXTERN_C void Collectors_tF2C4928DE0A75E12B7700E84D52749D66D48F723_marshal_pinvoke_cleanup(Collectors_tF2C4928DE0A75E12B7700E84D52749D66D48F723_marshaled_pinvoke& marshaled)
{
	il2cpp_codegen_marshal_free(marshaled.___U3CValueU3Ek__BackingField_0);
	marshaled.___U3CValueU3Ek__BackingField_0 = NULL;
}
// Conversion methods for marshalling of: TealiumCommon.Collectors
IL2CPP_EXTERN_C void Collectors_tF2C4928DE0A75E12B7700E84D52749D66D48F723_marshal_com(const Collectors_tF2C4928DE0A75E12B7700E84D52749D66D48F723& unmarshaled, Collectors_tF2C4928DE0A75E12B7700E84D52749D66D48F723_marshaled_com& marshaled)
{
	marshaled.___U3CValueU3Ek__BackingField_0 = il2cpp_codegen_marshal_bstring(unmarshaled.get_U3CValueU3Ek__BackingField_0());
}
IL2CPP_EXTERN_C void Collectors_tF2C4928DE0A75E12B7700E84D52749D66D48F723_marshal_com_back(const Collectors_tF2C4928DE0A75E12B7700E84D52749D66D48F723_marshaled_com& marshaled, Collectors_tF2C4928DE0A75E12B7700E84D52749D66D48F723& unmarshaled)
{
	unmarshaled.set_U3CValueU3Ek__BackingField_0(il2cpp_codegen_marshal_bstring_result(marshaled.___U3CValueU3Ek__BackingField_0));
}
// Conversion method for clean up from marshalling of: TealiumCommon.Collectors
IL2CPP_EXTERN_C void Collectors_tF2C4928DE0A75E12B7700E84D52749D66D48F723_marshal_com_cleanup(Collectors_tF2C4928DE0A75E12B7700E84D52749D66D48F723_marshaled_com& marshaled)
{
	il2cpp_codegen_marshal_free_bstring(marshaled.___U3CValueU3Ek__BackingField_0);
	marshaled.___U3CValueU3Ek__BackingField_0 = NULL;
}
// System.Void TealiumCommon.Collectors::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Collectors__ctor_m3BD06000437F58AF92D057812876816AB8380975 (Collectors_tF2C4928DE0A75E12B7700E84D52749D66D48F723 * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		// private Collectors(string value) { Value = value; }
		String_t* L_0 = ___value0;
		Collectors_set_Value_m263E39F60B836412CAC7C5C3665C4F4F594D0D9F_inline((Collectors_tF2C4928DE0A75E12B7700E84D52749D66D48F723 *)__this, L_0, /*hidden argument*/NULL);
		// private Collectors(string value) { Value = value; }
		return;
	}
}
IL2CPP_EXTERN_C  void Collectors__ctor_m3BD06000437F58AF92D057812876816AB8380975_AdjustorThunk (RuntimeObject * __this, String_t* ___value0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	Collectors_tF2C4928DE0A75E12B7700E84D52749D66D48F723 * _thisAdjusted = reinterpret_cast<Collectors_tF2C4928DE0A75E12B7700E84D52749D66D48F723 *>(__this + _offset);
	Collectors__ctor_m3BD06000437F58AF92D057812876816AB8380975(_thisAdjusted, ___value0, method);
}
// System.String TealiumCommon.Collectors::get_Value()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Collectors_get_Value_mA96FD040FE21ACFE885603005B2042D21E2B0F52 (Collectors_tF2C4928DE0A75E12B7700E84D52749D66D48F723 * __this, const RuntimeMethod* method)
{
	{
		// public string Value { get; set; }
		String_t* L_0 = __this->get_U3CValueU3Ek__BackingField_0();
		return L_0;
	}
}
IL2CPP_EXTERN_C  String_t* Collectors_get_Value_mA96FD040FE21ACFE885603005B2042D21E2B0F52_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	Collectors_tF2C4928DE0A75E12B7700E84D52749D66D48F723 * _thisAdjusted = reinterpret_cast<Collectors_tF2C4928DE0A75E12B7700E84D52749D66D48F723 *>(__this + _offset);
	String_t* _returnValue;
	_returnValue = Collectors_get_Value_mA96FD040FE21ACFE885603005B2042D21E2B0F52_inline(_thisAdjusted, method);
	return _returnValue;
}
// System.Void TealiumCommon.Collectors::set_Value(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Collectors_set_Value_m263E39F60B836412CAC7C5C3665C4F4F594D0D9F (Collectors_tF2C4928DE0A75E12B7700E84D52749D66D48F723 * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		// public string Value { get; set; }
		String_t* L_0 = ___value0;
		__this->set_U3CValueU3Ek__BackingField_0(L_0);
		return;
	}
}
IL2CPP_EXTERN_C  void Collectors_set_Value_m263E39F60B836412CAC7C5C3665C4F4F594D0D9F_AdjustorThunk (RuntimeObject * __this, String_t* ___value0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	Collectors_tF2C4928DE0A75E12B7700E84D52749D66D48F723 * _thisAdjusted = reinterpret_cast<Collectors_tF2C4928DE0A75E12B7700E84D52749D66D48F723 *>(__this + _offset);
	Collectors_set_Value_m263E39F60B836412CAC7C5C3665C4F4F594D0D9F_inline(_thisAdjusted, ___value0, method);
}
// TealiumCommon.Collectors TealiumCommon.Collectors::get_AppData()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Collectors_tF2C4928DE0A75E12B7700E84D52749D66D48F723  Collectors_get_AppData_m6A866829985FD7EA36BDA1DB94713DA0EC99035D (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0533F02BB4D6E446972E566470632374F09D49BD);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static Collectors AppData { get { return new Collectors("AppData"); } }
		Collectors_tF2C4928DE0A75E12B7700E84D52749D66D48F723  L_0;
		memset((&L_0), 0, sizeof(L_0));
		Collectors__ctor_m3BD06000437F58AF92D057812876816AB8380975((&L_0), _stringLiteral0533F02BB4D6E446972E566470632374F09D49BD, /*hidden argument*/NULL);
		return L_0;
	}
}
// TealiumCommon.Collectors TealiumCommon.Collectors::get_Connectivity()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Collectors_tF2C4928DE0A75E12B7700E84D52749D66D48F723  Collectors_get_Connectivity_m47BF7CA37198AB7488B51E8B9A2460B7A25F4703 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7D144960E57E3EF7E0052B89CD26C2BABBEEF061);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static Collectors Connectivity { get { return new Collectors("Connectivity"); } }
		Collectors_tF2C4928DE0A75E12B7700E84D52749D66D48F723  L_0;
		memset((&L_0), 0, sizeof(L_0));
		Collectors__ctor_m3BD06000437F58AF92D057812876816AB8380975((&L_0), _stringLiteral7D144960E57E3EF7E0052B89CD26C2BABBEEF061, /*hidden argument*/NULL);
		return L_0;
	}
}
// TealiumCommon.Collectors TealiumCommon.Collectors::get_DeviceData()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Collectors_tF2C4928DE0A75E12B7700E84D52749D66D48F723  Collectors_get_DeviceData_mC40D9F2A93A6BC7EA9F0E27D0C7ED5EEAC426356 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral997B02E0A865F8EDC8D6D7622CBA8EE63AD5126D);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static Collectors DeviceData { get { return new Collectors("DeviceData"); } }
		Collectors_tF2C4928DE0A75E12B7700E84D52749D66D48F723  L_0;
		memset((&L_0), 0, sizeof(L_0));
		Collectors__ctor_m3BD06000437F58AF92D057812876816AB8380975((&L_0), _stringLiteral997B02E0A865F8EDC8D6D7622CBA8EE63AD5126D, /*hidden argument*/NULL);
		return L_0;
	}
}
// TealiumCommon.Collectors TealiumCommon.Collectors::get_Lifecycle()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Collectors_tF2C4928DE0A75E12B7700E84D52749D66D48F723  Collectors_get_Lifecycle_mFDE86968A675B27F67DAC4B0C051007BF5299722 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral71F489A9135B6AEF062E927E3AA7854B8C53C11C);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static Collectors Lifecycle { get { return new Collectors("Lifecycle"); } }
		Collectors_tF2C4928DE0A75E12B7700E84D52749D66D48F723  L_0;
		memset((&L_0), 0, sizeof(L_0));
		Collectors__ctor_m3BD06000437F58AF92D057812876816AB8380975((&L_0), _stringLiteral71F489A9135B6AEF062E927E3AA7854B8C53C11C, /*hidden argument*/NULL);
		return L_0;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Conversion methods for marshalling of: TealiumCommon.ConsentCategories
IL2CPP_EXTERN_C void ConsentCategories_t7F1FDE7995E2ABB2BEF4A4DC381AE8DEE9B8429F_marshal_pinvoke(const ConsentCategories_t7F1FDE7995E2ABB2BEF4A4DC381AE8DEE9B8429F& unmarshaled, ConsentCategories_t7F1FDE7995E2ABB2BEF4A4DC381AE8DEE9B8429F_marshaled_pinvoke& marshaled)
{
	marshaled.___U3CValueU3Ek__BackingField_0 = il2cpp_codegen_marshal_string(unmarshaled.get_U3CValueU3Ek__BackingField_0());
}
IL2CPP_EXTERN_C void ConsentCategories_t7F1FDE7995E2ABB2BEF4A4DC381AE8DEE9B8429F_marshal_pinvoke_back(const ConsentCategories_t7F1FDE7995E2ABB2BEF4A4DC381AE8DEE9B8429F_marshaled_pinvoke& marshaled, ConsentCategories_t7F1FDE7995E2ABB2BEF4A4DC381AE8DEE9B8429F& unmarshaled)
{
	unmarshaled.set_U3CValueU3Ek__BackingField_0(il2cpp_codegen_marshal_string_result(marshaled.___U3CValueU3Ek__BackingField_0));
}
// Conversion method for clean up from marshalling of: TealiumCommon.ConsentCategories
IL2CPP_EXTERN_C void ConsentCategories_t7F1FDE7995E2ABB2BEF4A4DC381AE8DEE9B8429F_marshal_pinvoke_cleanup(ConsentCategories_t7F1FDE7995E2ABB2BEF4A4DC381AE8DEE9B8429F_marshaled_pinvoke& marshaled)
{
	il2cpp_codegen_marshal_free(marshaled.___U3CValueU3Ek__BackingField_0);
	marshaled.___U3CValueU3Ek__BackingField_0 = NULL;
}
// Conversion methods for marshalling of: TealiumCommon.ConsentCategories
IL2CPP_EXTERN_C void ConsentCategories_t7F1FDE7995E2ABB2BEF4A4DC381AE8DEE9B8429F_marshal_com(const ConsentCategories_t7F1FDE7995E2ABB2BEF4A4DC381AE8DEE9B8429F& unmarshaled, ConsentCategories_t7F1FDE7995E2ABB2BEF4A4DC381AE8DEE9B8429F_marshaled_com& marshaled)
{
	marshaled.___U3CValueU3Ek__BackingField_0 = il2cpp_codegen_marshal_bstring(unmarshaled.get_U3CValueU3Ek__BackingField_0());
}
IL2CPP_EXTERN_C void ConsentCategories_t7F1FDE7995E2ABB2BEF4A4DC381AE8DEE9B8429F_marshal_com_back(const ConsentCategories_t7F1FDE7995E2ABB2BEF4A4DC381AE8DEE9B8429F_marshaled_com& marshaled, ConsentCategories_t7F1FDE7995E2ABB2BEF4A4DC381AE8DEE9B8429F& unmarshaled)
{
	unmarshaled.set_U3CValueU3Ek__BackingField_0(il2cpp_codegen_marshal_bstring_result(marshaled.___U3CValueU3Ek__BackingField_0));
}
// Conversion method for clean up from marshalling of: TealiumCommon.ConsentCategories
IL2CPP_EXTERN_C void ConsentCategories_t7F1FDE7995E2ABB2BEF4A4DC381AE8DEE9B8429F_marshal_com_cleanup(ConsentCategories_t7F1FDE7995E2ABB2BEF4A4DC381AE8DEE9B8429F_marshaled_com& marshaled)
{
	il2cpp_codegen_marshal_free_bstring(marshaled.___U3CValueU3Ek__BackingField_0);
	marshaled.___U3CValueU3Ek__BackingField_0 = NULL;
}
// System.Void TealiumCommon.ConsentCategories::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConsentCategories__ctor_mD29F198528FEAC03F61FC521EFABCB88FC7169EE (ConsentCategories_t7F1FDE7995E2ABB2BEF4A4DC381AE8DEE9B8429F * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		// private ConsentCategories(string value) { Value = value; }
		String_t* L_0 = ___value0;
		ConsentCategories_set_Value_m84CB68EB66AC90CE7C9D55DD29289BF40D9A44D2_inline((ConsentCategories_t7F1FDE7995E2ABB2BEF4A4DC381AE8DEE9B8429F *)__this, L_0, /*hidden argument*/NULL);
		// private ConsentCategories(string value) { Value = value; }
		return;
	}
}
IL2CPP_EXTERN_C  void ConsentCategories__ctor_mD29F198528FEAC03F61FC521EFABCB88FC7169EE_AdjustorThunk (RuntimeObject * __this, String_t* ___value0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	ConsentCategories_t7F1FDE7995E2ABB2BEF4A4DC381AE8DEE9B8429F * _thisAdjusted = reinterpret_cast<ConsentCategories_t7F1FDE7995E2ABB2BEF4A4DC381AE8DEE9B8429F *>(__this + _offset);
	ConsentCategories__ctor_mD29F198528FEAC03F61FC521EFABCB88FC7169EE(_thisAdjusted, ___value0, method);
}
// System.String TealiumCommon.ConsentCategories::get_Value()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* ConsentCategories_get_Value_m2E4707B478B2A5B3329FA5978C527176B189EAF7 (ConsentCategories_t7F1FDE7995E2ABB2BEF4A4DC381AE8DEE9B8429F * __this, const RuntimeMethod* method)
{
	{
		// public string Value { get; set; }
		String_t* L_0 = __this->get_U3CValueU3Ek__BackingField_0();
		return L_0;
	}
}
IL2CPP_EXTERN_C  String_t* ConsentCategories_get_Value_m2E4707B478B2A5B3329FA5978C527176B189EAF7_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	ConsentCategories_t7F1FDE7995E2ABB2BEF4A4DC381AE8DEE9B8429F * _thisAdjusted = reinterpret_cast<ConsentCategories_t7F1FDE7995E2ABB2BEF4A4DC381AE8DEE9B8429F *>(__this + _offset);
	String_t* _returnValue;
	_returnValue = ConsentCategories_get_Value_m2E4707B478B2A5B3329FA5978C527176B189EAF7_inline(_thisAdjusted, method);
	return _returnValue;
}
// System.Void TealiumCommon.ConsentCategories::set_Value(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConsentCategories_set_Value_m84CB68EB66AC90CE7C9D55DD29289BF40D9A44D2 (ConsentCategories_t7F1FDE7995E2ABB2BEF4A4DC381AE8DEE9B8429F * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		// public string Value { get; set; }
		String_t* L_0 = ___value0;
		__this->set_U3CValueU3Ek__BackingField_0(L_0);
		return;
	}
}
IL2CPP_EXTERN_C  void ConsentCategories_set_Value_m84CB68EB66AC90CE7C9D55DD29289BF40D9A44D2_AdjustorThunk (RuntimeObject * __this, String_t* ___value0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	ConsentCategories_t7F1FDE7995E2ABB2BEF4A4DC381AE8DEE9B8429F * _thisAdjusted = reinterpret_cast<ConsentCategories_t7F1FDE7995E2ABB2BEF4A4DC381AE8DEE9B8429F *>(__this + _offset);
	ConsentCategories_set_Value_m84CB68EB66AC90CE7C9D55DD29289BF40D9A44D2_inline(_thisAdjusted, ___value0, method);
}
// TealiumCommon.ConsentCategories TealiumCommon.ConsentCategories::get_Analytics()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ConsentCategories_t7F1FDE7995E2ABB2BEF4A4DC381AE8DEE9B8429F  ConsentCategories_get_Analytics_mDBABE86F9430B9014A35B7FDDBCB4CC83E43F8DB (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8DE0CBA7BF0AAAFA4927500E94B54EAA544A2E0C);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static ConsentCategories Analytics { get { return new ConsentCategories("analytics"); } }
		ConsentCategories_t7F1FDE7995E2ABB2BEF4A4DC381AE8DEE9B8429F  L_0;
		memset((&L_0), 0, sizeof(L_0));
		ConsentCategories__ctor_mD29F198528FEAC03F61FC521EFABCB88FC7169EE((&L_0), _stringLiteral8DE0CBA7BF0AAAFA4927500E94B54EAA544A2E0C, /*hidden argument*/NULL);
		return L_0;
	}
}
// TealiumCommon.ConsentCategories TealiumCommon.ConsentCategories::get_Affiliates()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ConsentCategories_t7F1FDE7995E2ABB2BEF4A4DC381AE8DEE9B8429F  ConsentCategories_get_Affiliates_m722AC429C25F7B9A0390596B99CFB59F5514282B (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFF5DEAF70616D48B7E2803326DF898EFB4D79B55);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static ConsentCategories Affiliates { get { return new ConsentCategories("affiliates"); } }
		ConsentCategories_t7F1FDE7995E2ABB2BEF4A4DC381AE8DEE9B8429F  L_0;
		memset((&L_0), 0, sizeof(L_0));
		ConsentCategories__ctor_mD29F198528FEAC03F61FC521EFABCB88FC7169EE((&L_0), _stringLiteralFF5DEAF70616D48B7E2803326DF898EFB4D79B55, /*hidden argument*/NULL);
		return L_0;
	}
}
// TealiumCommon.ConsentCategories TealiumCommon.ConsentCategories::get_DisplayAds()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ConsentCategories_t7F1FDE7995E2ABB2BEF4A4DC381AE8DEE9B8429F  ConsentCategories_get_DisplayAds_mDF7BC16C00FE437852BEDE460F5B0FFEC77D7CB9 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA38A73589D1C87B982AF83CCBC174E6D4FD4B5FD);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static ConsentCategories DisplayAds { get { return new ConsentCategories("displayAds"); } }
		ConsentCategories_t7F1FDE7995E2ABB2BEF4A4DC381AE8DEE9B8429F  L_0;
		memset((&L_0), 0, sizeof(L_0));
		ConsentCategories__ctor_mD29F198528FEAC03F61FC521EFABCB88FC7169EE((&L_0), _stringLiteralA38A73589D1C87B982AF83CCBC174E6D4FD4B5FD, /*hidden argument*/NULL);
		return L_0;
	}
}
// TealiumCommon.ConsentCategories TealiumCommon.ConsentCategories::get_Email()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ConsentCategories_t7F1FDE7995E2ABB2BEF4A4DC381AE8DEE9B8429F  ConsentCategories_get_Email_m35781D176EB09A26B185705C65A8906B0ED5131A (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral51921D99887DD5ED233F87333EF648AE91A8BF7C);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static ConsentCategories Email { get { return new ConsentCategories("email"); } }
		ConsentCategories_t7F1FDE7995E2ABB2BEF4A4DC381AE8DEE9B8429F  L_0;
		memset((&L_0), 0, sizeof(L_0));
		ConsentCategories__ctor_mD29F198528FEAC03F61FC521EFABCB88FC7169EE((&L_0), _stringLiteral51921D99887DD5ED233F87333EF648AE91A8BF7C, /*hidden argument*/NULL);
		return L_0;
	}
}
// TealiumCommon.ConsentCategories TealiumCommon.ConsentCategories::get_Personalization()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ConsentCategories_t7F1FDE7995E2ABB2BEF4A4DC381AE8DEE9B8429F  ConsentCategories_get_Personalization_mF9613EA007E02D821806FC56BDCE07EA1A75D5B5 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC273A7F58AF4687870AD1CBA68D8467700CBCFA1);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static ConsentCategories Personalization { get { return new ConsentCategories("personalization"); } }
		ConsentCategories_t7F1FDE7995E2ABB2BEF4A4DC381AE8DEE9B8429F  L_0;
		memset((&L_0), 0, sizeof(L_0));
		ConsentCategories__ctor_mD29F198528FEAC03F61FC521EFABCB88FC7169EE((&L_0), _stringLiteralC273A7F58AF4687870AD1CBA68D8467700CBCFA1, /*hidden argument*/NULL);
		return L_0;
	}
}
// TealiumCommon.ConsentCategories TealiumCommon.ConsentCategories::get_Search()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ConsentCategories_t7F1FDE7995E2ABB2BEF4A4DC381AE8DEE9B8429F  ConsentCategories_get_Search_mA8E8C699CC0426E87CC6F46AD87EAE45C19EE4D0 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral80B9862F6FD4673A33E49F33829053D1CC06403D);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static ConsentCategories Search { get { return new ConsentCategories("search"); } }
		ConsentCategories_t7F1FDE7995E2ABB2BEF4A4DC381AE8DEE9B8429F  L_0;
		memset((&L_0), 0, sizeof(L_0));
		ConsentCategories__ctor_mD29F198528FEAC03F61FC521EFABCB88FC7169EE((&L_0), _stringLiteral80B9862F6FD4673A33E49F33829053D1CC06403D, /*hidden argument*/NULL);
		return L_0;
	}
}
// TealiumCommon.ConsentCategories TealiumCommon.ConsentCategories::get_Social()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ConsentCategories_t7F1FDE7995E2ABB2BEF4A4DC381AE8DEE9B8429F  ConsentCategories_get_Social_m6D5A5F3EAF2E6F83617DA35423FCDDD8AE208AC2 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral386D46E8E03D5EAD3DEAD8B7F9DF16793B2CB9B8);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static ConsentCategories Social { get { return new ConsentCategories("social"); } }
		ConsentCategories_t7F1FDE7995E2ABB2BEF4A4DC381AE8DEE9B8429F  L_0;
		memset((&L_0), 0, sizeof(L_0));
		ConsentCategories__ctor_mD29F198528FEAC03F61FC521EFABCB88FC7169EE((&L_0), _stringLiteral386D46E8E03D5EAD3DEAD8B7F9DF16793B2CB9B8, /*hidden argument*/NULL);
		return L_0;
	}
}
// TealiumCommon.ConsentCategories TealiumCommon.ConsentCategories::get_BigData()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ConsentCategories_t7F1FDE7995E2ABB2BEF4A4DC381AE8DEE9B8429F  ConsentCategories_get_BigData_m64C42A193D1D060A228CF780F883AC588F41096D (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1E0254397A24FABC20FE3C8737909AC2BB9DC8F9);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static ConsentCategories BigData { get { return new ConsentCategories("bigData"); } }
		ConsentCategories_t7F1FDE7995E2ABB2BEF4A4DC381AE8DEE9B8429F  L_0;
		memset((&L_0), 0, sizeof(L_0));
		ConsentCategories__ctor_mD29F198528FEAC03F61FC521EFABCB88FC7169EE((&L_0), _stringLiteral1E0254397A24FABC20FE3C8737909AC2BB9DC8F9, /*hidden argument*/NULL);
		return L_0;
	}
}
// TealiumCommon.ConsentCategories TealiumCommon.ConsentCategories::get_Mobile()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ConsentCategories_t7F1FDE7995E2ABB2BEF4A4DC381AE8DEE9B8429F  ConsentCategories_get_Mobile_m4D8A42351111E82575AED69D0558F222E71EAC4D (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFA855702F3E0239B3B0D1F427461543C440733A6);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static ConsentCategories Mobile { get { return new ConsentCategories("mobile"); } }
		ConsentCategories_t7F1FDE7995E2ABB2BEF4A4DC381AE8DEE9B8429F  L_0;
		memset((&L_0), 0, sizeof(L_0));
		ConsentCategories__ctor_mD29F198528FEAC03F61FC521EFABCB88FC7169EE((&L_0), _stringLiteralFA855702F3E0239B3B0D1F427461543C440733A6, /*hidden argument*/NULL);
		return L_0;
	}
}
// TealiumCommon.ConsentCategories TealiumCommon.ConsentCategories::get_Engagement()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ConsentCategories_t7F1FDE7995E2ABB2BEF4A4DC381AE8DEE9B8429F  ConsentCategories_get_Engagement_m3604D8F61E6CE5E7707BF62854015FF5F6B72EFD (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral85D392ABE7C69C3680F6D252A9C10DA6C7A0CD82);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static ConsentCategories Engagement { get { return new ConsentCategories("engagement"); } }
		ConsentCategories_t7F1FDE7995E2ABB2BEF4A4DC381AE8DEE9B8429F  L_0;
		memset((&L_0), 0, sizeof(L_0));
		ConsentCategories__ctor_mD29F198528FEAC03F61FC521EFABCB88FC7169EE((&L_0), _stringLiteral85D392ABE7C69C3680F6D252A9C10DA6C7A0CD82, /*hidden argument*/NULL);
		return L_0;
	}
}
// TealiumCommon.ConsentCategories TealiumCommon.ConsentCategories::get_Monitoring()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ConsentCategories_t7F1FDE7995E2ABB2BEF4A4DC381AE8DEE9B8429F  ConsentCategories_get_Monitoring_m3754051196A63E3199370721D50AFC520EE4414F (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0DDBF00A84B37F0C399BD2AF7C401EAF365F79F0);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static ConsentCategories Monitoring { get { return new ConsentCategories("monitoring"); } }
		ConsentCategories_t7F1FDE7995E2ABB2BEF4A4DC381AE8DEE9B8429F  L_0;
		memset((&L_0), 0, sizeof(L_0));
		ConsentCategories__ctor_mD29F198528FEAC03F61FC521EFABCB88FC7169EE((&L_0), _stringLiteral0DDBF00A84B37F0C399BD2AF7C401EAF365F79F0, /*hidden argument*/NULL);
		return L_0;
	}
}
// TealiumCommon.ConsentCategories TealiumCommon.ConsentCategories::get_Crm()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ConsentCategories_t7F1FDE7995E2ABB2BEF4A4DC381AE8DEE9B8429F  ConsentCategories_get_Crm_m3CF64A3231FF3A93DE96497602669FF3F470248F (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB8F70E34B8CAFB60E91E803AC048C2A88EBAE345);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static ConsentCategories Crm { get { return new ConsentCategories("crm"); } }
		ConsentCategories_t7F1FDE7995E2ABB2BEF4A4DC381AE8DEE9B8429F  L_0;
		memset((&L_0), 0, sizeof(L_0));
		ConsentCategories__ctor_mD29F198528FEAC03F61FC521EFABCB88FC7169EE((&L_0), _stringLiteralB8F70E34B8CAFB60E91E803AC048C2A88EBAE345, /*hidden argument*/NULL);
		return L_0;
	}
}
// TealiumCommon.ConsentCategories TealiumCommon.ConsentCategories::get_Cdp()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ConsentCategories_t7F1FDE7995E2ABB2BEF4A4DC381AE8DEE9B8429F  ConsentCategories_get_Cdp_mDEA5BE8D2F23C602764339459902AD210697D31B (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral61FEA542FC352C81BCDF0BCCD242066AD9B75CDA);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static ConsentCategories Cdp { get { return new ConsentCategories("cdp"); } }
		ConsentCategories_t7F1FDE7995E2ABB2BEF4A4DC381AE8DEE9B8429F  L_0;
		memset((&L_0), 0, sizeof(L_0));
		ConsentCategories__ctor_mD29F198528FEAC03F61FC521EFABCB88FC7169EE((&L_0), _stringLiteral61FEA542FC352C81BCDF0BCCD242066AD9B75CDA, /*hidden argument*/NULL);
		return L_0;
	}
}
// TealiumCommon.ConsentCategories TealiumCommon.ConsentCategories::get_CookieMatch()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ConsentCategories_t7F1FDE7995E2ABB2BEF4A4DC381AE8DEE9B8429F  ConsentCategories_get_CookieMatch_m0339B0A773DDCD57DFE0C0AF85DC2D826840F75E (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFDA48FFC18BFBB720C787B2DAC79761F03D04C6D);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static ConsentCategories CookieMatch { get { return new ConsentCategories("cookieMatch"); } }
		ConsentCategories_t7F1FDE7995E2ABB2BEF4A4DC381AE8DEE9B8429F  L_0;
		memset((&L_0), 0, sizeof(L_0));
		ConsentCategories__ctor_mD29F198528FEAC03F61FC521EFABCB88FC7169EE((&L_0), _stringLiteralFDA48FFC18BFBB720C787B2DAC79761F03D04C6D, /*hidden argument*/NULL);
		return L_0;
	}
}
// TealiumCommon.ConsentCategories TealiumCommon.ConsentCategories::get_Misc()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ConsentCategories_t7F1FDE7995E2ABB2BEF4A4DC381AE8DEE9B8429F  ConsentCategories_get_Misc_mB0422DE6E5517F9E408D1C57E2FBCF1EC0236345 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6D7FEF36DD08136CF9F955B6852E48FE2961B65C);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static ConsentCategories Misc { get { return new ConsentCategories("misc"); } }
		ConsentCategories_t7F1FDE7995E2ABB2BEF4A4DC381AE8DEE9B8429F  L_0;
		memset((&L_0), 0, sizeof(L_0));
		ConsentCategories__ctor_mD29F198528FEAC03F61FC521EFABCB88FC7169EE((&L_0), _stringLiteral6D7FEF36DD08136CF9F955B6852E48FE2961B65C, /*hidden argument*/NULL);
		return L_0;
	}
}
// TealiumCommon.ConsentCategories TealiumCommon.ConsentCategories::FromString(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ConsentCategories_t7F1FDE7995E2ABB2BEF4A4DC381AE8DEE9B8429F  ConsentCategories_FromString_m376068953C39588BC3206B6D1C6BD7D9D0AC69CB (String_t* ___category0, const RuntimeMethod* method)
{
	{
		// public static ConsentCategories FromString(string category) => new ConsentCategories(category);
		String_t* L_0 = ___category0;
		ConsentCategories_t7F1FDE7995E2ABB2BEF4A4DC381AE8DEE9B8429F  L_1;
		memset((&L_1), 0, sizeof(L_1));
		ConsentCategories__ctor_mD29F198528FEAC03F61FC521EFABCB88FC7169EE((&L_1), L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void TealiumCommon.ConsentExpiry::.ctor(System.Int32,TealiumCommon.TimeUnit)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConsentExpiry__ctor_mC71A6AFF1A47E19FBEBFAA492B68C2EFF122CF84 (ConsentExpiry_tF0E363E167F8B963812764554538F6BD7ABF9BC5 * __this, int32_t ___time0, TimeUnit_tEDC26F433AD0E93FB173CBB14399B6B806B7F78D  ___unit1, const RuntimeMethod* method)
{
	{
		// public ConsentExpiry(int time, TimeUnit unit)
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		// this.time = time;
		int32_t L_0 = ___time0;
		__this->set_time_0(L_0);
		// this.timeUnit = unit;
		TimeUnit_tEDC26F433AD0E93FB173CBB14399B6B806B7F78D  L_1 = ___unit1;
		__this->set_timeUnit_1(L_1);
		// }
		return;
	}
}
// System.Collections.Generic.Dictionary`2<System.String,System.Object> TealiumCommon.ConsentExpiry::ToDictionary()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 * ConsentExpiry_ToDictionary_m994268DD15C0EEE496D87D9EA465146CB719EA1F (ConsentExpiry_tF0E363E167F8B963812764554538F6BD7ABF9BC5 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_Add_m005F33425CDAEC23027518EC759F8F439AF34F3F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_mCD0C2F0325B7677B9BC340A60AA3FB9C7A88FF63_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral51C6279E31F7483126B79E3000116001A915B690);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral70CBC502A11BF3CFF17643F18B0AA99AFA4B55F1);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return new Dictionary<string, object>() {
		//     {"time", this.time},
		//     {"timeUnit", this.timeUnit.Value}
		// };
		Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 * L_0 = (Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 *)il2cpp_codegen_object_new(Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_mCD0C2F0325B7677B9BC340A60AA3FB9C7A88FF63(L_0, /*hidden argument*/Dictionary_2__ctor_mCD0C2F0325B7677B9BC340A60AA3FB9C7A88FF63_RuntimeMethod_var);
		Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 * L_1 = L_0;
		int32_t L_2 = __this->get_time_0();
		int32_t L_3 = L_2;
		RuntimeObject * L_4 = Box(Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var, &L_3);
		NullCheck(L_1);
		Dictionary_2_Add_m005F33425CDAEC23027518EC759F8F439AF34F3F(L_1, _stringLiteral51C6279E31F7483126B79E3000116001A915B690, L_4, /*hidden argument*/Dictionary_2_Add_m005F33425CDAEC23027518EC759F8F439AF34F3F_RuntimeMethod_var);
		Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 * L_5 = L_1;
		TimeUnit_tEDC26F433AD0E93FB173CBB14399B6B806B7F78D * L_6 = __this->get_address_of_timeUnit_1();
		String_t* L_7;
		L_7 = TimeUnit_get_Value_m9392FC6C65BB94088AAADC8EA5F63470CBB1FADC_inline((TimeUnit_tEDC26F433AD0E93FB173CBB14399B6B806B7F78D *)L_6, /*hidden argument*/NULL);
		NullCheck(L_5);
		Dictionary_2_Add_m005F33425CDAEC23027518EC759F8F439AF34F3F(L_5, _stringLiteral70CBC502A11BF3CFF17643F18B0AA99AFA4B55F1, L_7, /*hidden argument*/Dictionary_2_Add_m005F33425CDAEC23027518EC759F8F439AF34F3F_RuntimeMethod_var);
		return L_5;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Conversion methods for marshalling of: TealiumCommon.ConsentPolicy
IL2CPP_EXTERN_C void ConsentPolicy_tA405DFF59561F55C0C5C738E3ECC75B8032B6A01_marshal_pinvoke(const ConsentPolicy_tA405DFF59561F55C0C5C738E3ECC75B8032B6A01& unmarshaled, ConsentPolicy_tA405DFF59561F55C0C5C738E3ECC75B8032B6A01_marshaled_pinvoke& marshaled)
{
	marshaled.___U3CValueU3Ek__BackingField_0 = il2cpp_codegen_marshal_string(unmarshaled.get_U3CValueU3Ek__BackingField_0());
}
IL2CPP_EXTERN_C void ConsentPolicy_tA405DFF59561F55C0C5C738E3ECC75B8032B6A01_marshal_pinvoke_back(const ConsentPolicy_tA405DFF59561F55C0C5C738E3ECC75B8032B6A01_marshaled_pinvoke& marshaled, ConsentPolicy_tA405DFF59561F55C0C5C738E3ECC75B8032B6A01& unmarshaled)
{
	unmarshaled.set_U3CValueU3Ek__BackingField_0(il2cpp_codegen_marshal_string_result(marshaled.___U3CValueU3Ek__BackingField_0));
}
// Conversion method for clean up from marshalling of: TealiumCommon.ConsentPolicy
IL2CPP_EXTERN_C void ConsentPolicy_tA405DFF59561F55C0C5C738E3ECC75B8032B6A01_marshal_pinvoke_cleanup(ConsentPolicy_tA405DFF59561F55C0C5C738E3ECC75B8032B6A01_marshaled_pinvoke& marshaled)
{
	il2cpp_codegen_marshal_free(marshaled.___U3CValueU3Ek__BackingField_0);
	marshaled.___U3CValueU3Ek__BackingField_0 = NULL;
}
// Conversion methods for marshalling of: TealiumCommon.ConsentPolicy
IL2CPP_EXTERN_C void ConsentPolicy_tA405DFF59561F55C0C5C738E3ECC75B8032B6A01_marshal_com(const ConsentPolicy_tA405DFF59561F55C0C5C738E3ECC75B8032B6A01& unmarshaled, ConsentPolicy_tA405DFF59561F55C0C5C738E3ECC75B8032B6A01_marshaled_com& marshaled)
{
	marshaled.___U3CValueU3Ek__BackingField_0 = il2cpp_codegen_marshal_bstring(unmarshaled.get_U3CValueU3Ek__BackingField_0());
}
IL2CPP_EXTERN_C void ConsentPolicy_tA405DFF59561F55C0C5C738E3ECC75B8032B6A01_marshal_com_back(const ConsentPolicy_tA405DFF59561F55C0C5C738E3ECC75B8032B6A01_marshaled_com& marshaled, ConsentPolicy_tA405DFF59561F55C0C5C738E3ECC75B8032B6A01& unmarshaled)
{
	unmarshaled.set_U3CValueU3Ek__BackingField_0(il2cpp_codegen_marshal_bstring_result(marshaled.___U3CValueU3Ek__BackingField_0));
}
// Conversion method for clean up from marshalling of: TealiumCommon.ConsentPolicy
IL2CPP_EXTERN_C void ConsentPolicy_tA405DFF59561F55C0C5C738E3ECC75B8032B6A01_marshal_com_cleanup(ConsentPolicy_tA405DFF59561F55C0C5C738E3ECC75B8032B6A01_marshaled_com& marshaled)
{
	il2cpp_codegen_marshal_free_bstring(marshaled.___U3CValueU3Ek__BackingField_0);
	marshaled.___U3CValueU3Ek__BackingField_0 = NULL;
}
// System.Void TealiumCommon.ConsentPolicy::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConsentPolicy__ctor_m52E852DA30812D6ECE66BAA04EEA49FD3EAA712E (ConsentPolicy_tA405DFF59561F55C0C5C738E3ECC75B8032B6A01 * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		// private ConsentPolicy(string value) { Value = value; }
		String_t* L_0 = ___value0;
		ConsentPolicy_set_Value_m4344135F1898E3738C0A647E82990B20F5C7582D_inline((ConsentPolicy_tA405DFF59561F55C0C5C738E3ECC75B8032B6A01 *)__this, L_0, /*hidden argument*/NULL);
		// private ConsentPolicy(string value) { Value = value; }
		return;
	}
}
IL2CPP_EXTERN_C  void ConsentPolicy__ctor_m52E852DA30812D6ECE66BAA04EEA49FD3EAA712E_AdjustorThunk (RuntimeObject * __this, String_t* ___value0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	ConsentPolicy_tA405DFF59561F55C0C5C738E3ECC75B8032B6A01 * _thisAdjusted = reinterpret_cast<ConsentPolicy_tA405DFF59561F55C0C5C738E3ECC75B8032B6A01 *>(__this + _offset);
	ConsentPolicy__ctor_m52E852DA30812D6ECE66BAA04EEA49FD3EAA712E(_thisAdjusted, ___value0, method);
}
// System.String TealiumCommon.ConsentPolicy::get_Value()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* ConsentPolicy_get_Value_mECB55CC0D233FB6CC9865E4839457B76DDD6EB1F (ConsentPolicy_tA405DFF59561F55C0C5C738E3ECC75B8032B6A01 * __this, const RuntimeMethod* method)
{
	{
		// public string Value { get; set; }
		String_t* L_0 = __this->get_U3CValueU3Ek__BackingField_0();
		return L_0;
	}
}
IL2CPP_EXTERN_C  String_t* ConsentPolicy_get_Value_mECB55CC0D233FB6CC9865E4839457B76DDD6EB1F_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	ConsentPolicy_tA405DFF59561F55C0C5C738E3ECC75B8032B6A01 * _thisAdjusted = reinterpret_cast<ConsentPolicy_tA405DFF59561F55C0C5C738E3ECC75B8032B6A01 *>(__this + _offset);
	String_t* _returnValue;
	_returnValue = ConsentPolicy_get_Value_mECB55CC0D233FB6CC9865E4839457B76DDD6EB1F_inline(_thisAdjusted, method);
	return _returnValue;
}
// System.Void TealiumCommon.ConsentPolicy::set_Value(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConsentPolicy_set_Value_m4344135F1898E3738C0A647E82990B20F5C7582D (ConsentPolicy_tA405DFF59561F55C0C5C738E3ECC75B8032B6A01 * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		// public string Value { get; set; }
		String_t* L_0 = ___value0;
		__this->set_U3CValueU3Ek__BackingField_0(L_0);
		return;
	}
}
IL2CPP_EXTERN_C  void ConsentPolicy_set_Value_m4344135F1898E3738C0A647E82990B20F5C7582D_AdjustorThunk (RuntimeObject * __this, String_t* ___value0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	ConsentPolicy_tA405DFF59561F55C0C5C738E3ECC75B8032B6A01 * _thisAdjusted = reinterpret_cast<ConsentPolicy_tA405DFF59561F55C0C5C738E3ECC75B8032B6A01 *>(__this + _offset);
	ConsentPolicy_set_Value_m4344135F1898E3738C0A647E82990B20F5C7582D_inline(_thisAdjusted, ___value0, method);
}
// TealiumCommon.ConsentPolicy TealiumCommon.ConsentPolicy::get_GDPR()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ConsentPolicy_tA405DFF59561F55C0C5C738E3ECC75B8032B6A01  ConsentPolicy_get_GDPR_m3C0096B6F05AF96467120A51397547FB73544E44 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDC0FBD54AAB0A9BDDAF97372B7B718E106E0D9C7);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static ConsentPolicy GDPR { get { return new ConsentPolicy("gdpr"); } }
		ConsentPolicy_tA405DFF59561F55C0C5C738E3ECC75B8032B6A01  L_0;
		memset((&L_0), 0, sizeof(L_0));
		ConsentPolicy__ctor_m52E852DA30812D6ECE66BAA04EEA49FD3EAA712E((&L_0), _stringLiteralDC0FBD54AAB0A9BDDAF97372B7B718E106E0D9C7, /*hidden argument*/NULL);
		return L_0;
	}
}
// TealiumCommon.ConsentPolicy TealiumCommon.ConsentPolicy::get_CCPA()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ConsentPolicy_tA405DFF59561F55C0C5C738E3ECC75B8032B6A01  ConsentPolicy_get_CCPA_m9B899D5E0052F27DFFECCF9006DEA7557CBD9B40 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4BBBCE0CA5ECCD4D20BDBB9DF24C687DB5F7A1DE);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static ConsentPolicy CCPA { get { return new ConsentPolicy("ccpa"); } }
		ConsentPolicy_tA405DFF59561F55C0C5C738E3ECC75B8032B6A01  L_0;
		memset((&L_0), 0, sizeof(L_0));
		ConsentPolicy__ctor_m52E852DA30812D6ECE66BAA04EEA49FD3EAA712E((&L_0), _stringLiteral4BBBCE0CA5ECCD4D20BDBB9DF24C687DB5F7A1DE, /*hidden argument*/NULL);
		return L_0;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Conversion methods for marshalling of: TealiumCommon.ConsentStatus
IL2CPP_EXTERN_C void ConsentStatus_t6263FFF5C886922D62B1DDC450EFE8CE2036F101_marshal_pinvoke(const ConsentStatus_t6263FFF5C886922D62B1DDC450EFE8CE2036F101& unmarshaled, ConsentStatus_t6263FFF5C886922D62B1DDC450EFE8CE2036F101_marshaled_pinvoke& marshaled)
{
	marshaled.___U3CValueU3Ek__BackingField_0 = il2cpp_codegen_marshal_string(unmarshaled.get_U3CValueU3Ek__BackingField_0());
}
IL2CPP_EXTERN_C void ConsentStatus_t6263FFF5C886922D62B1DDC450EFE8CE2036F101_marshal_pinvoke_back(const ConsentStatus_t6263FFF5C886922D62B1DDC450EFE8CE2036F101_marshaled_pinvoke& marshaled, ConsentStatus_t6263FFF5C886922D62B1DDC450EFE8CE2036F101& unmarshaled)
{
	unmarshaled.set_U3CValueU3Ek__BackingField_0(il2cpp_codegen_marshal_string_result(marshaled.___U3CValueU3Ek__BackingField_0));
}
// Conversion method for clean up from marshalling of: TealiumCommon.ConsentStatus
IL2CPP_EXTERN_C void ConsentStatus_t6263FFF5C886922D62B1DDC450EFE8CE2036F101_marshal_pinvoke_cleanup(ConsentStatus_t6263FFF5C886922D62B1DDC450EFE8CE2036F101_marshaled_pinvoke& marshaled)
{
	il2cpp_codegen_marshal_free(marshaled.___U3CValueU3Ek__BackingField_0);
	marshaled.___U3CValueU3Ek__BackingField_0 = NULL;
}
// Conversion methods for marshalling of: TealiumCommon.ConsentStatus
IL2CPP_EXTERN_C void ConsentStatus_t6263FFF5C886922D62B1DDC450EFE8CE2036F101_marshal_com(const ConsentStatus_t6263FFF5C886922D62B1DDC450EFE8CE2036F101& unmarshaled, ConsentStatus_t6263FFF5C886922D62B1DDC450EFE8CE2036F101_marshaled_com& marshaled)
{
	marshaled.___U3CValueU3Ek__BackingField_0 = il2cpp_codegen_marshal_bstring(unmarshaled.get_U3CValueU3Ek__BackingField_0());
}
IL2CPP_EXTERN_C void ConsentStatus_t6263FFF5C886922D62B1DDC450EFE8CE2036F101_marshal_com_back(const ConsentStatus_t6263FFF5C886922D62B1DDC450EFE8CE2036F101_marshaled_com& marshaled, ConsentStatus_t6263FFF5C886922D62B1DDC450EFE8CE2036F101& unmarshaled)
{
	unmarshaled.set_U3CValueU3Ek__BackingField_0(il2cpp_codegen_marshal_bstring_result(marshaled.___U3CValueU3Ek__BackingField_0));
}
// Conversion method for clean up from marshalling of: TealiumCommon.ConsentStatus
IL2CPP_EXTERN_C void ConsentStatus_t6263FFF5C886922D62B1DDC450EFE8CE2036F101_marshal_com_cleanup(ConsentStatus_t6263FFF5C886922D62B1DDC450EFE8CE2036F101_marshaled_com& marshaled)
{
	il2cpp_codegen_marshal_free_bstring(marshaled.___U3CValueU3Ek__BackingField_0);
	marshaled.___U3CValueU3Ek__BackingField_0 = NULL;
}
// System.Void TealiumCommon.ConsentStatus::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConsentStatus__ctor_mFB9435FCDD5874106DCA5003557A65384467E0A5 (ConsentStatus_t6263FFF5C886922D62B1DDC450EFE8CE2036F101 * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		// private ConsentStatus(string value) { Value = value; }
		String_t* L_0 = ___value0;
		ConsentStatus_set_Value_m6559AA65577983981E4F5B5A5214A10B5D8AA2BF_inline((ConsentStatus_t6263FFF5C886922D62B1DDC450EFE8CE2036F101 *)__this, L_0, /*hidden argument*/NULL);
		// private ConsentStatus(string value) { Value = value; }
		return;
	}
}
IL2CPP_EXTERN_C  void ConsentStatus__ctor_mFB9435FCDD5874106DCA5003557A65384467E0A5_AdjustorThunk (RuntimeObject * __this, String_t* ___value0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	ConsentStatus_t6263FFF5C886922D62B1DDC450EFE8CE2036F101 * _thisAdjusted = reinterpret_cast<ConsentStatus_t6263FFF5C886922D62B1DDC450EFE8CE2036F101 *>(__this + _offset);
	ConsentStatus__ctor_mFB9435FCDD5874106DCA5003557A65384467E0A5(_thisAdjusted, ___value0, method);
}
// System.String TealiumCommon.ConsentStatus::get_Value()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* ConsentStatus_get_Value_mE6D4CEC397F8DF285456F8FC9CA485FAD4DE6819 (ConsentStatus_t6263FFF5C886922D62B1DDC450EFE8CE2036F101 * __this, const RuntimeMethod* method)
{
	{
		// public string Value { get; set; }
		String_t* L_0 = __this->get_U3CValueU3Ek__BackingField_0();
		return L_0;
	}
}
IL2CPP_EXTERN_C  String_t* ConsentStatus_get_Value_mE6D4CEC397F8DF285456F8FC9CA485FAD4DE6819_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	ConsentStatus_t6263FFF5C886922D62B1DDC450EFE8CE2036F101 * _thisAdjusted = reinterpret_cast<ConsentStatus_t6263FFF5C886922D62B1DDC450EFE8CE2036F101 *>(__this + _offset);
	String_t* _returnValue;
	_returnValue = ConsentStatus_get_Value_mE6D4CEC397F8DF285456F8FC9CA485FAD4DE6819_inline(_thisAdjusted, method);
	return _returnValue;
}
// System.Void TealiumCommon.ConsentStatus::set_Value(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConsentStatus_set_Value_m6559AA65577983981E4F5B5A5214A10B5D8AA2BF (ConsentStatus_t6263FFF5C886922D62B1DDC450EFE8CE2036F101 * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		// public string Value { get; set; }
		String_t* L_0 = ___value0;
		__this->set_U3CValueU3Ek__BackingField_0(L_0);
		return;
	}
}
IL2CPP_EXTERN_C  void ConsentStatus_set_Value_m6559AA65577983981E4F5B5A5214A10B5D8AA2BF_AdjustorThunk (RuntimeObject * __this, String_t* ___value0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	ConsentStatus_t6263FFF5C886922D62B1DDC450EFE8CE2036F101 * _thisAdjusted = reinterpret_cast<ConsentStatus_t6263FFF5C886922D62B1DDC450EFE8CE2036F101 *>(__this + _offset);
	ConsentStatus_set_Value_m6559AA65577983981E4F5B5A5214A10B5D8AA2BF_inline(_thisAdjusted, ___value0, method);
}
// TealiumCommon.ConsentStatus TealiumCommon.ConsentStatus::get_Consented()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ConsentStatus_t6263FFF5C886922D62B1DDC450EFE8CE2036F101  ConsentStatus_get_Consented_m47813DEAAE0DE3F026E985488879B5B2517C722B (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2D61DA2B252C0206904680768204D8EAD452A532);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static ConsentStatus Consented { get { return new ConsentStatus("consented"); } }
		ConsentStatus_t6263FFF5C886922D62B1DDC450EFE8CE2036F101  L_0;
		memset((&L_0), 0, sizeof(L_0));
		ConsentStatus__ctor_mFB9435FCDD5874106DCA5003557A65384467E0A5((&L_0), _stringLiteral2D61DA2B252C0206904680768204D8EAD452A532, /*hidden argument*/NULL);
		return L_0;
	}
}
// TealiumCommon.ConsentStatus TealiumCommon.ConsentStatus::get_NotConsented()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ConsentStatus_t6263FFF5C886922D62B1DDC450EFE8CE2036F101  ConsentStatus_get_NotConsented_mFF053045FB2438FD7D6057122134E38350E78E24 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral282BFCCDCC88CE32BE4CC3BEF8E0CC3566FD7E4F);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static ConsentStatus NotConsented { get { return new ConsentStatus("notConsented"); } }
		ConsentStatus_t6263FFF5C886922D62B1DDC450EFE8CE2036F101  L_0;
		memset((&L_0), 0, sizeof(L_0));
		ConsentStatus__ctor_mFB9435FCDD5874106DCA5003557A65384467E0A5((&L_0), _stringLiteral282BFCCDCC88CE32BE4CC3BEF8E0CC3566FD7E4F, /*hidden argument*/NULL);
		return L_0;
	}
}
// TealiumCommon.ConsentStatus TealiumCommon.ConsentStatus::get_Unknown()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ConsentStatus_t6263FFF5C886922D62B1DDC450EFE8CE2036F101  ConsentStatus_get_Unknown_m21752C0438C340B069E062D2307A47F15EDF03A3 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2C3323E6A37819D4C4AC310608DA4CF7FB13A968);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static ConsentStatus Unknown { get { return new ConsentStatus("unknown"); } }
		ConsentStatus_t6263FFF5C886922D62B1DDC450EFE8CE2036F101  L_0;
		memset((&L_0), 0, sizeof(L_0));
		ConsentStatus__ctor_mFB9435FCDD5874106DCA5003557A65384467E0A5((&L_0), _stringLiteral2C3323E6A37819D4C4AC310608DA4CF7FB13A968, /*hidden argument*/NULL);
		return L_0;
	}
}
// TealiumCommon.ConsentStatus TealiumCommon.ConsentStatus::FromString(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ConsentStatus_t6263FFF5C886922D62B1DDC450EFE8CE2036F101  ConsentStatus_FromString_m1E231205664209DC9B4A7095BEDFCB7D6ECB9BEF (String_t* ___status0, const RuntimeMethod* method)
{
	{
		// public static ConsentStatus FromString(string status) => new ConsentStatus(status);
		String_t* L_0 = ___status0;
		ConsentStatus_t6263FFF5C886922D62B1DDC450EFE8CE2036F101  L_1;
		memset((&L_1), 0, sizeof(L_1));
		ConsentStatus__ctor_mFB9435FCDD5874106DCA5003557A65384467E0A5((&L_1), L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Conversion methods for marshalling of: TealiumCommon.Dispatchers
IL2CPP_EXTERN_C void Dispatchers_tB9298ED86C40129DF8BF09E2B9EBEC23F8C5A236_marshal_pinvoke(const Dispatchers_tB9298ED86C40129DF8BF09E2B9EBEC23F8C5A236& unmarshaled, Dispatchers_tB9298ED86C40129DF8BF09E2B9EBEC23F8C5A236_marshaled_pinvoke& marshaled)
{
	marshaled.___U3CValueU3Ek__BackingField_0 = il2cpp_codegen_marshal_string(unmarshaled.get_U3CValueU3Ek__BackingField_0());
}
IL2CPP_EXTERN_C void Dispatchers_tB9298ED86C40129DF8BF09E2B9EBEC23F8C5A236_marshal_pinvoke_back(const Dispatchers_tB9298ED86C40129DF8BF09E2B9EBEC23F8C5A236_marshaled_pinvoke& marshaled, Dispatchers_tB9298ED86C40129DF8BF09E2B9EBEC23F8C5A236& unmarshaled)
{
	unmarshaled.set_U3CValueU3Ek__BackingField_0(il2cpp_codegen_marshal_string_result(marshaled.___U3CValueU3Ek__BackingField_0));
}
// Conversion method for clean up from marshalling of: TealiumCommon.Dispatchers
IL2CPP_EXTERN_C void Dispatchers_tB9298ED86C40129DF8BF09E2B9EBEC23F8C5A236_marshal_pinvoke_cleanup(Dispatchers_tB9298ED86C40129DF8BF09E2B9EBEC23F8C5A236_marshaled_pinvoke& marshaled)
{
	il2cpp_codegen_marshal_free(marshaled.___U3CValueU3Ek__BackingField_0);
	marshaled.___U3CValueU3Ek__BackingField_0 = NULL;
}
// Conversion methods for marshalling of: TealiumCommon.Dispatchers
IL2CPP_EXTERN_C void Dispatchers_tB9298ED86C40129DF8BF09E2B9EBEC23F8C5A236_marshal_com(const Dispatchers_tB9298ED86C40129DF8BF09E2B9EBEC23F8C5A236& unmarshaled, Dispatchers_tB9298ED86C40129DF8BF09E2B9EBEC23F8C5A236_marshaled_com& marshaled)
{
	marshaled.___U3CValueU3Ek__BackingField_0 = il2cpp_codegen_marshal_bstring(unmarshaled.get_U3CValueU3Ek__BackingField_0());
}
IL2CPP_EXTERN_C void Dispatchers_tB9298ED86C40129DF8BF09E2B9EBEC23F8C5A236_marshal_com_back(const Dispatchers_tB9298ED86C40129DF8BF09E2B9EBEC23F8C5A236_marshaled_com& marshaled, Dispatchers_tB9298ED86C40129DF8BF09E2B9EBEC23F8C5A236& unmarshaled)
{
	unmarshaled.set_U3CValueU3Ek__BackingField_0(il2cpp_codegen_marshal_bstring_result(marshaled.___U3CValueU3Ek__BackingField_0));
}
// Conversion method for clean up from marshalling of: TealiumCommon.Dispatchers
IL2CPP_EXTERN_C void Dispatchers_tB9298ED86C40129DF8BF09E2B9EBEC23F8C5A236_marshal_com_cleanup(Dispatchers_tB9298ED86C40129DF8BF09E2B9EBEC23F8C5A236_marshaled_com& marshaled)
{
	il2cpp_codegen_marshal_free_bstring(marshaled.___U3CValueU3Ek__BackingField_0);
	marshaled.___U3CValueU3Ek__BackingField_0 = NULL;
}
// System.Void TealiumCommon.Dispatchers::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dispatchers__ctor_m9A9AB9015BEAAF6CB8D38A7C78E074FAB476BBF7 (Dispatchers_tB9298ED86C40129DF8BF09E2B9EBEC23F8C5A236 * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		// private Dispatchers(string value) { Value = value; }
		String_t* L_0 = ___value0;
		Dispatchers_set_Value_mBFDF13FCD45AA1E470F4D36A55FD9CBA4C54C598_inline((Dispatchers_tB9298ED86C40129DF8BF09E2B9EBEC23F8C5A236 *)__this, L_0, /*hidden argument*/NULL);
		// private Dispatchers(string value) { Value = value; }
		return;
	}
}
IL2CPP_EXTERN_C  void Dispatchers__ctor_m9A9AB9015BEAAF6CB8D38A7C78E074FAB476BBF7_AdjustorThunk (RuntimeObject * __this, String_t* ___value0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	Dispatchers_tB9298ED86C40129DF8BF09E2B9EBEC23F8C5A236 * _thisAdjusted = reinterpret_cast<Dispatchers_tB9298ED86C40129DF8BF09E2B9EBEC23F8C5A236 *>(__this + _offset);
	Dispatchers__ctor_m9A9AB9015BEAAF6CB8D38A7C78E074FAB476BBF7(_thisAdjusted, ___value0, method);
}
// System.String TealiumCommon.Dispatchers::get_Value()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Dispatchers_get_Value_m8E3CBA1DD9471A6DD45BCB5B2F81553E102D9510 (Dispatchers_tB9298ED86C40129DF8BF09E2B9EBEC23F8C5A236 * __this, const RuntimeMethod* method)
{
	{
		// public string Value { get; set; }
		String_t* L_0 = __this->get_U3CValueU3Ek__BackingField_0();
		return L_0;
	}
}
IL2CPP_EXTERN_C  String_t* Dispatchers_get_Value_m8E3CBA1DD9471A6DD45BCB5B2F81553E102D9510_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	Dispatchers_tB9298ED86C40129DF8BF09E2B9EBEC23F8C5A236 * _thisAdjusted = reinterpret_cast<Dispatchers_tB9298ED86C40129DF8BF09E2B9EBEC23F8C5A236 *>(__this + _offset);
	String_t* _returnValue;
	_returnValue = Dispatchers_get_Value_m8E3CBA1DD9471A6DD45BCB5B2F81553E102D9510_inline(_thisAdjusted, method);
	return _returnValue;
}
// System.Void TealiumCommon.Dispatchers::set_Value(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dispatchers_set_Value_mBFDF13FCD45AA1E470F4D36A55FD9CBA4C54C598 (Dispatchers_tB9298ED86C40129DF8BF09E2B9EBEC23F8C5A236 * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		// public string Value { get; set; }
		String_t* L_0 = ___value0;
		__this->set_U3CValueU3Ek__BackingField_0(L_0);
		return;
	}
}
IL2CPP_EXTERN_C  void Dispatchers_set_Value_mBFDF13FCD45AA1E470F4D36A55FD9CBA4C54C598_AdjustorThunk (RuntimeObject * __this, String_t* ___value0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	Dispatchers_tB9298ED86C40129DF8BF09E2B9EBEC23F8C5A236 * _thisAdjusted = reinterpret_cast<Dispatchers_tB9298ED86C40129DF8BF09E2B9EBEC23F8C5A236 *>(__this + _offset);
	Dispatchers_set_Value_mBFDF13FCD45AA1E470F4D36A55FD9CBA4C54C598_inline(_thisAdjusted, ___value0, method);
}
// TealiumCommon.Dispatchers TealiumCommon.Dispatchers::get_TagManagement()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Dispatchers_tB9298ED86C40129DF8BF09E2B9EBEC23F8C5A236  Dispatchers_get_TagManagement_m3128D59DF5DB30CA6163F525CAA4F61007BAA752 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD477056B94946E6F9241554606E82ADC6D20261E);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static Dispatchers TagManagement { get { return new Dispatchers("TagManagement"); } }
		Dispatchers_tB9298ED86C40129DF8BF09E2B9EBEC23F8C5A236  L_0;
		memset((&L_0), 0, sizeof(L_0));
		Dispatchers__ctor_m9A9AB9015BEAAF6CB8D38A7C78E074FAB476BBF7((&L_0), _stringLiteralD477056B94946E6F9241554606E82ADC6D20261E, /*hidden argument*/NULL);
		return L_0;
	}
}
// TealiumCommon.Dispatchers TealiumCommon.Dispatchers::get_Collect()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Dispatchers_tB9298ED86C40129DF8BF09E2B9EBEC23F8C5A236  Dispatchers_get_Collect_mA54175C1CACAAB1A207A8FCFFA8FB937B75C1798 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA17474CA0C600D38D899463D436DB6E0973F01A2);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static Dispatchers Collect { get { return new Dispatchers("Collect"); } }
		Dispatchers_tB9298ED86C40129DF8BF09E2B9EBEC23F8C5A236  L_0;
		memset((&L_0), 0, sizeof(L_0));
		Dispatchers__ctor_m9A9AB9015BEAAF6CB8D38A7C78E074FAB476BBF7((&L_0), _stringLiteralA17474CA0C600D38D899463D436DB6E0973F01A2, /*hidden argument*/NULL);
		return L_0;
	}
}
// TealiumCommon.Dispatchers TealiumCommon.Dispatchers::get_RemoteCommands()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Dispatchers_tB9298ED86C40129DF8BF09E2B9EBEC23F8C5A236  Dispatchers_get_RemoteCommands_mB1F3B9346B5653311AA9F355DB68DD0E7073299A (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBE76852B0423E781981A98A86315BA95199E9317);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static Dispatchers RemoteCommands { get { return new Dispatchers("RemoteCommands"); } }
		Dispatchers_tB9298ED86C40129DF8BF09E2B9EBEC23F8C5A236  L_0;
		memset((&L_0), 0, sizeof(L_0));
		Dispatchers__ctor_m9A9AB9015BEAAF6CB8D38A7C78E074FAB476BBF7((&L_0), _stringLiteralBE76852B0423E781981A98A86315BA95199E9317, /*hidden argument*/NULL);
		return L_0;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Microsoft.CodeAnalysis.EmbeddedAttribute::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EmbeddedAttribute__ctor_mF1E65F7F65556F91B89EA5686F6DB53CDEBFB11A (EmbeddedAttribute_t965A2B907C497043C4CEECCFA70B2A0C4EECC41D * __this, const RuntimeMethod* method)
{
	{
		Attribute__ctor_m5C1862A7DFC2C25A4797A8C5F681FBB5CB53ECE1(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Conversion methods for marshalling of: TealiumCommon.Expiry
IL2CPP_EXTERN_C void Expiry_tCC1CF50318A9D2722F63B5E5842DCD2D0FCA8137_marshal_pinvoke(const Expiry_tCC1CF50318A9D2722F63B5E5842DCD2D0FCA8137& unmarshaled, Expiry_tCC1CF50318A9D2722F63B5E5842DCD2D0FCA8137_marshaled_pinvoke& marshaled)
{
	marshaled.___U3CValueU3Ek__BackingField_0 = il2cpp_codegen_marshal_string(unmarshaled.get_U3CValueU3Ek__BackingField_0());
}
IL2CPP_EXTERN_C void Expiry_tCC1CF50318A9D2722F63B5E5842DCD2D0FCA8137_marshal_pinvoke_back(const Expiry_tCC1CF50318A9D2722F63B5E5842DCD2D0FCA8137_marshaled_pinvoke& marshaled, Expiry_tCC1CF50318A9D2722F63B5E5842DCD2D0FCA8137& unmarshaled)
{
	unmarshaled.set_U3CValueU3Ek__BackingField_0(il2cpp_codegen_marshal_string_result(marshaled.___U3CValueU3Ek__BackingField_0));
}
// Conversion method for clean up from marshalling of: TealiumCommon.Expiry
IL2CPP_EXTERN_C void Expiry_tCC1CF50318A9D2722F63B5E5842DCD2D0FCA8137_marshal_pinvoke_cleanup(Expiry_tCC1CF50318A9D2722F63B5E5842DCD2D0FCA8137_marshaled_pinvoke& marshaled)
{
	il2cpp_codegen_marshal_free(marshaled.___U3CValueU3Ek__BackingField_0);
	marshaled.___U3CValueU3Ek__BackingField_0 = NULL;
}
// Conversion methods for marshalling of: TealiumCommon.Expiry
IL2CPP_EXTERN_C void Expiry_tCC1CF50318A9D2722F63B5E5842DCD2D0FCA8137_marshal_com(const Expiry_tCC1CF50318A9D2722F63B5E5842DCD2D0FCA8137& unmarshaled, Expiry_tCC1CF50318A9D2722F63B5E5842DCD2D0FCA8137_marshaled_com& marshaled)
{
	marshaled.___U3CValueU3Ek__BackingField_0 = il2cpp_codegen_marshal_bstring(unmarshaled.get_U3CValueU3Ek__BackingField_0());
}
IL2CPP_EXTERN_C void Expiry_tCC1CF50318A9D2722F63B5E5842DCD2D0FCA8137_marshal_com_back(const Expiry_tCC1CF50318A9D2722F63B5E5842DCD2D0FCA8137_marshaled_com& marshaled, Expiry_tCC1CF50318A9D2722F63B5E5842DCD2D0FCA8137& unmarshaled)
{
	unmarshaled.set_U3CValueU3Ek__BackingField_0(il2cpp_codegen_marshal_bstring_result(marshaled.___U3CValueU3Ek__BackingField_0));
}
// Conversion method for clean up from marshalling of: TealiumCommon.Expiry
IL2CPP_EXTERN_C void Expiry_tCC1CF50318A9D2722F63B5E5842DCD2D0FCA8137_marshal_com_cleanup(Expiry_tCC1CF50318A9D2722F63B5E5842DCD2D0FCA8137_marshaled_com& marshaled)
{
	il2cpp_codegen_marshal_free_bstring(marshaled.___U3CValueU3Ek__BackingField_0);
	marshaled.___U3CValueU3Ek__BackingField_0 = NULL;
}
// System.Void TealiumCommon.Expiry::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Expiry__ctor_m41432A3B1448C0F850D94D71548E8B35CF1EEB12 (Expiry_tCC1CF50318A9D2722F63B5E5842DCD2D0FCA8137 * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		// private Expiry(string value) { Value = value; }
		String_t* L_0 = ___value0;
		Expiry_set_Value_m01A424420372045086D8EB2B4992D144722CCA4D_inline((Expiry_tCC1CF50318A9D2722F63B5E5842DCD2D0FCA8137 *)__this, L_0, /*hidden argument*/NULL);
		// private Expiry(string value) { Value = value; }
		return;
	}
}
IL2CPP_EXTERN_C  void Expiry__ctor_m41432A3B1448C0F850D94D71548E8B35CF1EEB12_AdjustorThunk (RuntimeObject * __this, String_t* ___value0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	Expiry_tCC1CF50318A9D2722F63B5E5842DCD2D0FCA8137 * _thisAdjusted = reinterpret_cast<Expiry_tCC1CF50318A9D2722F63B5E5842DCD2D0FCA8137 *>(__this + _offset);
	Expiry__ctor_m41432A3B1448C0F850D94D71548E8B35CF1EEB12(_thisAdjusted, ___value0, method);
}
// System.String TealiumCommon.Expiry::get_Value()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Expiry_get_Value_m26ED3077C06BF3DFEB44E88E432DA6149E203CA4 (Expiry_tCC1CF50318A9D2722F63B5E5842DCD2D0FCA8137 * __this, const RuntimeMethod* method)
{
	{
		// public string Value { get; set; }
		String_t* L_0 = __this->get_U3CValueU3Ek__BackingField_0();
		return L_0;
	}
}
IL2CPP_EXTERN_C  String_t* Expiry_get_Value_m26ED3077C06BF3DFEB44E88E432DA6149E203CA4_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	Expiry_tCC1CF50318A9D2722F63B5E5842DCD2D0FCA8137 * _thisAdjusted = reinterpret_cast<Expiry_tCC1CF50318A9D2722F63B5E5842DCD2D0FCA8137 *>(__this + _offset);
	String_t* _returnValue;
	_returnValue = Expiry_get_Value_m26ED3077C06BF3DFEB44E88E432DA6149E203CA4_inline(_thisAdjusted, method);
	return _returnValue;
}
// System.Void TealiumCommon.Expiry::set_Value(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Expiry_set_Value_m01A424420372045086D8EB2B4992D144722CCA4D (Expiry_tCC1CF50318A9D2722F63B5E5842DCD2D0FCA8137 * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		// public string Value { get; set; }
		String_t* L_0 = ___value0;
		__this->set_U3CValueU3Ek__BackingField_0(L_0);
		return;
	}
}
IL2CPP_EXTERN_C  void Expiry_set_Value_m01A424420372045086D8EB2B4992D144722CCA4D_AdjustorThunk (RuntimeObject * __this, String_t* ___value0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	Expiry_tCC1CF50318A9D2722F63B5E5842DCD2D0FCA8137 * _thisAdjusted = reinterpret_cast<Expiry_tCC1CF50318A9D2722F63B5E5842DCD2D0FCA8137 *>(__this + _offset);
	Expiry_set_Value_m01A424420372045086D8EB2B4992D144722CCA4D_inline(_thisAdjusted, ___value0, method);
}
// TealiumCommon.Expiry TealiumCommon.Expiry::get_Forever()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Expiry_tCC1CF50318A9D2722F63B5E5842DCD2D0FCA8137  Expiry_get_Forever_m29362B68165C16CFCCEE9BB52E35F9E5ADA25A71 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1C510DC0D8DE79B274855931DF7342DC1584FA1F);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static Expiry Forever { get { return new Expiry("forever"); } }
		Expiry_tCC1CF50318A9D2722F63B5E5842DCD2D0FCA8137  L_0;
		memset((&L_0), 0, sizeof(L_0));
		Expiry__ctor_m41432A3B1448C0F850D94D71548E8B35CF1EEB12((&L_0), _stringLiteral1C510DC0D8DE79B274855931DF7342DC1584FA1F, /*hidden argument*/NULL);
		return L_0;
	}
}
// TealiumCommon.Expiry TealiumCommon.Expiry::get_Session()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Expiry_tCC1CF50318A9D2722F63B5E5842DCD2D0FCA8137  Expiry_get_Session_m547B3A06A2256F9B27AC185914941B8DBFE00DD2 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral42E49EB985DBD525F9131D975D4A1458641A6558);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static Expiry Session { get { return new Expiry("session"); } }
		Expiry_tCC1CF50318A9D2722F63B5E5842DCD2D0FCA8137  L_0;
		memset((&L_0), 0, sizeof(L_0));
		Expiry__ctor_m41432A3B1448C0F850D94D71548E8B35CF1EEB12((&L_0), _stringLiteral42E49EB985DBD525F9131D975D4A1458641A6558, /*hidden argument*/NULL);
		return L_0;
	}
}
// TealiumCommon.Expiry TealiumCommon.Expiry::get_UntilRestart()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Expiry_tCC1CF50318A9D2722F63B5E5842DCD2D0FCA8137  Expiry_get_UntilRestart_m31A95E3A502B6D61D39A28522D9FF1C17D867A78 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralAC402423BE2BC762F2E1D9275C7D9E0CA088B145);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static Expiry UntilRestart { get { return new Expiry("untilRestart"); } }
		Expiry_tCC1CF50318A9D2722F63B5E5842DCD2D0FCA8137  L_0;
		memset((&L_0), 0, sizeof(L_0));
		Expiry__ctor_m41432A3B1448C0F850D94D71548E8B35CF1EEB12((&L_0), _stringLiteralAC402423BE2BC762F2E1D9275C7D9E0CA088B145, /*hidden argument*/NULL);
		return L_0;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void System.Runtime.CompilerServices.IsReadOnlyAttribute::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IsReadOnlyAttribute__ctor_mEFB31FB6B26F4BF76FA3E24FBD0281CB3E137E36 (IsReadOnlyAttribute_tCB7D9361CFA9DCFC070186FA6895154B90B23888 * __this, const RuntimeMethod* method)
{
	{
		Attribute__ctor_m5C1862A7DFC2C25A4797A8C5F681FBB5CB53ECE1(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Conversion methods for marshalling of: TealiumCommon.LogLevel
IL2CPP_EXTERN_C void LogLevel_tC8A9CB2FDD6BA29729D740AB210BD2214ACC9ECD_marshal_pinvoke(const LogLevel_tC8A9CB2FDD6BA29729D740AB210BD2214ACC9ECD& unmarshaled, LogLevel_tC8A9CB2FDD6BA29729D740AB210BD2214ACC9ECD_marshaled_pinvoke& marshaled)
{
	marshaled.___U3CValueU3Ek__BackingField_0 = il2cpp_codegen_marshal_string(unmarshaled.get_U3CValueU3Ek__BackingField_0());
}
IL2CPP_EXTERN_C void LogLevel_tC8A9CB2FDD6BA29729D740AB210BD2214ACC9ECD_marshal_pinvoke_back(const LogLevel_tC8A9CB2FDD6BA29729D740AB210BD2214ACC9ECD_marshaled_pinvoke& marshaled, LogLevel_tC8A9CB2FDD6BA29729D740AB210BD2214ACC9ECD& unmarshaled)
{
	unmarshaled.set_U3CValueU3Ek__BackingField_0(il2cpp_codegen_marshal_string_result(marshaled.___U3CValueU3Ek__BackingField_0));
}
// Conversion method for clean up from marshalling of: TealiumCommon.LogLevel
IL2CPP_EXTERN_C void LogLevel_tC8A9CB2FDD6BA29729D740AB210BD2214ACC9ECD_marshal_pinvoke_cleanup(LogLevel_tC8A9CB2FDD6BA29729D740AB210BD2214ACC9ECD_marshaled_pinvoke& marshaled)
{
	il2cpp_codegen_marshal_free(marshaled.___U3CValueU3Ek__BackingField_0);
	marshaled.___U3CValueU3Ek__BackingField_0 = NULL;
}
// Conversion methods for marshalling of: TealiumCommon.LogLevel
IL2CPP_EXTERN_C void LogLevel_tC8A9CB2FDD6BA29729D740AB210BD2214ACC9ECD_marshal_com(const LogLevel_tC8A9CB2FDD6BA29729D740AB210BD2214ACC9ECD& unmarshaled, LogLevel_tC8A9CB2FDD6BA29729D740AB210BD2214ACC9ECD_marshaled_com& marshaled)
{
	marshaled.___U3CValueU3Ek__BackingField_0 = il2cpp_codegen_marshal_bstring(unmarshaled.get_U3CValueU3Ek__BackingField_0());
}
IL2CPP_EXTERN_C void LogLevel_tC8A9CB2FDD6BA29729D740AB210BD2214ACC9ECD_marshal_com_back(const LogLevel_tC8A9CB2FDD6BA29729D740AB210BD2214ACC9ECD_marshaled_com& marshaled, LogLevel_tC8A9CB2FDD6BA29729D740AB210BD2214ACC9ECD& unmarshaled)
{
	unmarshaled.set_U3CValueU3Ek__BackingField_0(il2cpp_codegen_marshal_bstring_result(marshaled.___U3CValueU3Ek__BackingField_0));
}
// Conversion method for clean up from marshalling of: TealiumCommon.LogLevel
IL2CPP_EXTERN_C void LogLevel_tC8A9CB2FDD6BA29729D740AB210BD2214ACC9ECD_marshal_com_cleanup(LogLevel_tC8A9CB2FDD6BA29729D740AB210BD2214ACC9ECD_marshaled_com& marshaled)
{
	il2cpp_codegen_marshal_free_bstring(marshaled.___U3CValueU3Ek__BackingField_0);
	marshaled.___U3CValueU3Ek__BackingField_0 = NULL;
}
// System.Void TealiumCommon.LogLevel::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LogLevel__ctor_m1866708E8CA1EC940723188C79F02502B7838531 (LogLevel_tC8A9CB2FDD6BA29729D740AB210BD2214ACC9ECD * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		// private LogLevel(string value) { Value = value; }
		String_t* L_0 = ___value0;
		LogLevel_set_Value_m2CB6AB544572542164B28F41BE06090CB2FC694B_inline((LogLevel_tC8A9CB2FDD6BA29729D740AB210BD2214ACC9ECD *)__this, L_0, /*hidden argument*/NULL);
		// private LogLevel(string value) { Value = value; }
		return;
	}
}
IL2CPP_EXTERN_C  void LogLevel__ctor_m1866708E8CA1EC940723188C79F02502B7838531_AdjustorThunk (RuntimeObject * __this, String_t* ___value0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	LogLevel_tC8A9CB2FDD6BA29729D740AB210BD2214ACC9ECD * _thisAdjusted = reinterpret_cast<LogLevel_tC8A9CB2FDD6BA29729D740AB210BD2214ACC9ECD *>(__this + _offset);
	LogLevel__ctor_m1866708E8CA1EC940723188C79F02502B7838531(_thisAdjusted, ___value0, method);
}
// System.String TealiumCommon.LogLevel::get_Value()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* LogLevel_get_Value_mC918DB8824B386771CA57BA448D46B86ECCAEED0 (LogLevel_tC8A9CB2FDD6BA29729D740AB210BD2214ACC9ECD * __this, const RuntimeMethod* method)
{
	{
		// public string Value { get; set; }
		String_t* L_0 = __this->get_U3CValueU3Ek__BackingField_0();
		return L_0;
	}
}
IL2CPP_EXTERN_C  String_t* LogLevel_get_Value_mC918DB8824B386771CA57BA448D46B86ECCAEED0_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	LogLevel_tC8A9CB2FDD6BA29729D740AB210BD2214ACC9ECD * _thisAdjusted = reinterpret_cast<LogLevel_tC8A9CB2FDD6BA29729D740AB210BD2214ACC9ECD *>(__this + _offset);
	String_t* _returnValue;
	_returnValue = LogLevel_get_Value_mC918DB8824B386771CA57BA448D46B86ECCAEED0_inline(_thisAdjusted, method);
	return _returnValue;
}
// System.Void TealiumCommon.LogLevel::set_Value(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LogLevel_set_Value_m2CB6AB544572542164B28F41BE06090CB2FC694B (LogLevel_tC8A9CB2FDD6BA29729D740AB210BD2214ACC9ECD * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		// public string Value { get; set; }
		String_t* L_0 = ___value0;
		__this->set_U3CValueU3Ek__BackingField_0(L_0);
		return;
	}
}
IL2CPP_EXTERN_C  void LogLevel_set_Value_m2CB6AB544572542164B28F41BE06090CB2FC694B_AdjustorThunk (RuntimeObject * __this, String_t* ___value0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	LogLevel_tC8A9CB2FDD6BA29729D740AB210BD2214ACC9ECD * _thisAdjusted = reinterpret_cast<LogLevel_tC8A9CB2FDD6BA29729D740AB210BD2214ACC9ECD *>(__this + _offset);
	LogLevel_set_Value_m2CB6AB544572542164B28F41BE06090CB2FC694B_inline(_thisAdjusted, ___value0, method);
}
// TealiumCommon.LogLevel TealiumCommon.LogLevel::get_Dev()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR LogLevel_tC8A9CB2FDD6BA29729D740AB210BD2214ACC9ECD  LogLevel_get_Dev_m0F741C0DADC07944B97215D415DC80B4EEF56412 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB8FF942E118389A9B5468029ADBFCA8D7512D496);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static LogLevel Dev { get { return new LogLevel("dev"); } }
		LogLevel_tC8A9CB2FDD6BA29729D740AB210BD2214ACC9ECD  L_0;
		memset((&L_0), 0, sizeof(L_0));
		LogLevel__ctor_m1866708E8CA1EC940723188C79F02502B7838531((&L_0), _stringLiteralB8FF942E118389A9B5468029ADBFCA8D7512D496, /*hidden argument*/NULL);
		return L_0;
	}
}
// TealiumCommon.LogLevel TealiumCommon.LogLevel::get_Qa()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR LogLevel_tC8A9CB2FDD6BA29729D740AB210BD2214ACC9ECD  LogLevel_get_Qa_m190A79B8607D188806E5772BF9D845F5CEB49F1A (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4E50C8A435ACA2194870053CF1BEAA753D54DC79);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static LogLevel Qa { get { return new LogLevel("qa"); } }
		LogLevel_tC8A9CB2FDD6BA29729D740AB210BD2214ACC9ECD  L_0;
		memset((&L_0), 0, sizeof(L_0));
		LogLevel__ctor_m1866708E8CA1EC940723188C79F02502B7838531((&L_0), _stringLiteral4E50C8A435ACA2194870053CF1BEAA753D54DC79, /*hidden argument*/NULL);
		return L_0;
	}
}
// TealiumCommon.LogLevel TealiumCommon.LogLevel::get_Prod()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR LogLevel_tC8A9CB2FDD6BA29729D740AB210BD2214ACC9ECD  LogLevel_get_Prod_m7E68CCC8684B3ED9766A6BF6FD4CF1B529A92126 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralAC7CABC19DF3A499E7F4F414D5A99EF246778B9D);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static LogLevel Prod { get { return new LogLevel("prod"); } }
		LogLevel_tC8A9CB2FDD6BA29729D740AB210BD2214ACC9ECD  L_0;
		memset((&L_0), 0, sizeof(L_0));
		LogLevel__ctor_m1866708E8CA1EC940723188C79F02502B7838531((&L_0), _stringLiteralAC7CABC19DF3A499E7F4F414D5A99EF246778B9D, /*hidden argument*/NULL);
		return L_0;
	}
}
// TealiumCommon.LogLevel TealiumCommon.LogLevel::get_Silent()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR LogLevel_tC8A9CB2FDD6BA29729D740AB210BD2214ACC9ECD  LogLevel_get_Silent_m28E4B2070CF541ECF52E0C30A7B7D9EC6B170D4A (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral74F649435800A0F67D0E1CDB9823ADFC792B824F);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static LogLevel Silent { get { return new LogLevel("silent"); } }
		LogLevel_tC8A9CB2FDD6BA29729D740AB210BD2214ACC9ECD  L_0;
		memset((&L_0), 0, sizeof(L_0));
		LogLevel__ctor_m1866708E8CA1EC940723188C79F02502B7838531((&L_0), _stringLiteral74F649435800A0F67D0E1CDB9823ADFC792B824F, /*hidden argument*/NULL);
		return L_0;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void System.Runtime.CompilerServices.NullableAttribute::.ctor(System.Byte)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NullableAttribute__ctor_m3E96339EEB87F86E36C0FF2C226E2B15B1A68A68 (NullableAttribute_tB8A251B780438E6488EE0598956824F01072AD63 * __this, uint8_t p0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Attribute__ctor_m5C1862A7DFC2C25A4797A8C5F681FBB5CB53ECE1(__this, /*hidden argument*/NULL);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_0 = (ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*)(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*)SZArrayNew(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726_il2cpp_TypeInfo_var, (uint32_t)1);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_1 = L_0;
		uint8_t L_2 = p0;
		NullCheck(L_1);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(0), (uint8_t)L_2);
		__this->set_NullableFlags_0(L_1);
		return;
	}
}
// System.Void System.Runtime.CompilerServices.NullableAttribute::.ctor(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NullableAttribute__ctor_m0F0A41DA86D32F6BE7AB21CDD17FCBB9D1685B16 (NullableAttribute_tB8A251B780438E6488EE0598956824F01072AD63 * __this, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* p0, const RuntimeMethod* method)
{
	{
		Attribute__ctor_m5C1862A7DFC2C25A4797A8C5F681FBB5CB53ECE1(__this, /*hidden argument*/NULL);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_0 = p0;
		__this->set_NullableFlags_0(L_0);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void System.Runtime.CompilerServices.NullableContextAttribute::.ctor(System.Byte)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NullableContextAttribute__ctor_m4D096315361B10F05CD76564B44D70013B40EC97 (NullableContextAttribute_t697570588636776DE204716B19FA439C049BA167 * __this, uint8_t p0, const RuntimeMethod* method)
{
	{
		Attribute__ctor_m5C1862A7DFC2C25A4797A8C5F681FBB5CB53ECE1(__this, /*hidden argument*/NULL);
		uint8_t L_0 = p0;
		__this->set_Flag_0(L_0);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void TealiumAndroid::Initialize(TealiumCommon.TealiumConfig,System.Action`1<System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TealiumAndroid_Initialize_m076474D5062CC05C0B8F96C44A7652A3DF664579 (TealiumAndroid_t3261BB388DA01765B53016B078B894DB9573A857 * __this, TealiumConfig_t57F15E74367FE1C2622F3D0395F144F4D505F4B7 * ___config0, Action_1_tCE2D770918A65CAD277C08C4E8C05385EA267E83 * ___callback1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_Invoke_m95E5C9FC67F7B0BDC3CD5E00AC5D4C8A00C97AC5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaClass_t52E934B16476D72AA6E4B248F989F2F825EB62D4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaObject_CallStatic_TisBoolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_m08A8ECF220D35069EF5A4A50C2F38E925F0852FB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaObject_Call_TisAndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E_mC5ED59BBD9C24EFFD98D8C3819C7E15DFE08F412_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaObject_GetStatic_TisAndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E_mC84C97A7EC20ED712D21107C9FA32E0785021153_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Array_Empty_TisRuntimeObject_m1FBC21243DF3542384C523801E8CA8A97606C747_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonConvert_t046ADD1F0B1F4BD3323ABEE6BA9E41C189BDC21A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TealiumAndroid_t3261BB388DA01765B53016B078B894DB9573A857_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3753DF735E896BD3C9F2E5D3740D83C85D747CF9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4D613657609485AE586A3379BA0E3FC13C1E1078);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD289A15F06D391673864A3B5CEDBFF42865743C1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF79B3927124CE34A31910F4AD953084FA0AD4BB6);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFB4AE4F77150C3A8E8E4F8B23E734E0C7277B7D9);
		s_Il2CppMethodInitialized = true;
	}
	AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * V_0 = NULL;
	bool V_1 = false;
	{
		// AndroidJavaClass playerClass = new AndroidJavaClass("com.unity3d.player.UnityPlayer");
		AndroidJavaClass_t52E934B16476D72AA6E4B248F989F2F825EB62D4 * L_0 = (AndroidJavaClass_t52E934B16476D72AA6E4B248F989F2F825EB62D4 *)il2cpp_codegen_object_new(AndroidJavaClass_t52E934B16476D72AA6E4B248F989F2F825EB62D4_il2cpp_TypeInfo_var);
		AndroidJavaClass__ctor_mEFF9F51871F231955D97DABDE9AB4A6B4EDA5541(L_0, _stringLiteral4D613657609485AE586A3379BA0E3FC13C1E1078, /*hidden argument*/NULL);
		// AndroidJavaObject activity = playerClass.GetStatic<AndroidJavaObject>("currentActivity");
		NullCheck(L_0);
		AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * L_1;
		L_1 = AndroidJavaObject_GetStatic_TisAndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E_mC84C97A7EC20ED712D21107C9FA32E0785021153(L_0, _stringLiteralFB4AE4F77150C3A8E8E4F8B23E734E0C7277B7D9, /*hidden argument*/AndroidJavaObject_GetStatic_TisAndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E_mC84C97A7EC20ED712D21107C9FA32E0785021153_RuntimeMethod_var);
		// AndroidJavaObject context = activity.Call<AndroidJavaObject>("getApplicationContext");
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_2;
		L_2 = Array_Empty_TisRuntimeObject_m1FBC21243DF3542384C523801E8CA8A97606C747_inline(/*hidden argument*/Array_Empty_TisRuntimeObject_m1FBC21243DF3542384C523801E8CA8A97606C747_RuntimeMethod_var);
		NullCheck(L_1);
		AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * L_3;
		L_3 = AndroidJavaObject_Call_TisAndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E_mC5ED59BBD9C24EFFD98D8C3819C7E15DFE08F412(L_1, _stringLiteral3753DF735E896BD3C9F2E5D3740D83C85D747CF9, L_2, /*hidden argument*/AndroidJavaObject_Call_TisAndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E_mC5ED59BBD9C24EFFD98D8C3819C7E15DFE08F412_RuntimeMethod_var);
		V_0 = L_3;
		// _tealiumUnityObject = new AndroidJavaClass(KOTLIN_STATIC_TEALIUM);
		AndroidJavaClass_t52E934B16476D72AA6E4B248F989F2F825EB62D4 * L_4 = (AndroidJavaClass_t52E934B16476D72AA6E4B248F989F2F825EB62D4 *)il2cpp_codegen_object_new(AndroidJavaClass_t52E934B16476D72AA6E4B248F989F2F825EB62D4_il2cpp_TypeInfo_var);
		AndroidJavaClass__ctor_mEFF9F51871F231955D97DABDE9AB4A6B4EDA5541(L_4, _stringLiteralF79B3927124CE34A31910F4AD953084FA0AD4BB6, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(TealiumAndroid_t3261BB388DA01765B53016B078B894DB9573A857_il2cpp_TypeInfo_var);
		((TealiumAndroid_t3261BB388DA01765B53016B078B894DB9573A857_StaticFields*)il2cpp_codegen_static_fields_for(TealiumAndroid_t3261BB388DA01765B53016B078B894DB9573A857_il2cpp_TypeInfo_var))->set__tealiumUnityObject_6(L_4);
		// bool initialized = _tealiumUnityObject.CallStatic<bool>("initialize", context, JsonConvert.SerializeObject(config));
		AndroidJavaClass_t52E934B16476D72AA6E4B248F989F2F825EB62D4 * L_5 = ((TealiumAndroid_t3261BB388DA01765B53016B078B894DB9573A857_StaticFields*)il2cpp_codegen_static_fields_for(TealiumAndroid_t3261BB388DA01765B53016B078B894DB9573A857_il2cpp_TypeInfo_var))->get__tealiumUnityObject_6();
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_6 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)SZArrayNew(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var, (uint32_t)2);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_7 = L_6;
		AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * L_8 = V_0;
		NullCheck(L_7);
		ArrayElementTypeCheck (L_7, L_8);
		(L_7)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_8);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_9 = L_7;
		TealiumConfig_t57F15E74367FE1C2622F3D0395F144F4D505F4B7 * L_10 = ___config0;
		IL2CPP_RUNTIME_CLASS_INIT(JsonConvert_t046ADD1F0B1F4BD3323ABEE6BA9E41C189BDC21A_il2cpp_TypeInfo_var);
		String_t* L_11;
		L_11 = JsonConvert_SerializeObject_mA9001ADA0DB9EA238BED332AB41743609EB6AD9D(L_10, /*hidden argument*/NULL);
		NullCheck(L_9);
		ArrayElementTypeCheck (L_9, L_11);
		(L_9)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject *)L_11);
		NullCheck(L_5);
		bool L_12;
		L_12 = AndroidJavaObject_CallStatic_TisBoolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_m08A8ECF220D35069EF5A4A50C2F38E925F0852FB(L_5, _stringLiteralD289A15F06D391673864A3B5CEDBFF42865743C1, L_9, /*hidden argument*/AndroidJavaObject_CallStatic_TisBoolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_m08A8ECF220D35069EF5A4A50C2F38E925F0852FB_RuntimeMethod_var);
		V_1 = L_12;
		// if (callback != null)
		Action_1_tCE2D770918A65CAD277C08C4E8C05385EA267E83 * L_13 = ___callback1;
		if (!L_13)
		{
			goto IL_0060;
		}
	}
	{
		// callback.Invoke(initialized);
		Action_1_tCE2D770918A65CAD277C08C4E8C05385EA267E83 * L_14 = ___callback1;
		bool L_15 = V_1;
		NullCheck(L_14);
		Action_1_Invoke_m95E5C9FC67F7B0BDC3CD5E00AC5D4C8A00C97AC5(L_14, L_15, /*hidden argument*/Action_1_Invoke_m95E5C9FC67F7B0BDC3CD5E00AC5D4C8A00C97AC5_RuntimeMethod_var);
	}

IL_0060:
	{
		// }
		return;
	}
}
// System.Void TealiumAndroid::Terminate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TealiumAndroid_Terminate_m8A120513516C18FDD23AFC2E4B1DCC8CE4CE0162 (TealiumAndroid_t3261BB388DA01765B53016B078B894DB9573A857 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Array_Empty_TisRuntimeObject_m1FBC21243DF3542384C523801E8CA8A97606C747_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TealiumAndroid_t3261BB388DA01765B53016B078B894DB9573A857_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6B3DBC6BF6E0409637395E8DC018689E33707401);
		s_Il2CppMethodInitialized = true;
	}
	{
		// _tealiumUnityObject.CallStatic("terminate");
		IL2CPP_RUNTIME_CLASS_INIT(TealiumAndroid_t3261BB388DA01765B53016B078B894DB9573A857_il2cpp_TypeInfo_var);
		AndroidJavaClass_t52E934B16476D72AA6E4B248F989F2F825EB62D4 * L_0 = ((TealiumAndroid_t3261BB388DA01765B53016B078B894DB9573A857_StaticFields*)il2cpp_codegen_static_fields_for(TealiumAndroid_t3261BB388DA01765B53016B078B894DB9573A857_il2cpp_TypeInfo_var))->get__tealiumUnityObject_6();
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_1;
		L_1 = Array_Empty_TisRuntimeObject_m1FBC21243DF3542384C523801E8CA8A97606C747_inline(/*hidden argument*/Array_Empty_TisRuntimeObject_m1FBC21243DF3542384C523801E8CA8A97606C747_RuntimeMethod_var);
		NullCheck(L_0);
		AndroidJavaObject_CallStatic_m5A97968767E1603C021023809276443ED24577FB(L_0, _stringLiteral6B3DBC6BF6E0409637395E8DC018689E33707401, L_1, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void TealiumAndroid::Track(TealiumCommon.TealiumDispatch)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TealiumAndroid_Track_mC5788C5EEE4AFA7EDA60E8E1907A1929E5872E17 (TealiumAndroid_t3261BB388DA01765B53016B078B894DB9573A857 * __this, TealiumDispatch_tBC7A4951FD4926BB6EFF74865AF1EC9D1C6BAFB9 * ___dispatch0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonConvert_t046ADD1F0B1F4BD3323ABEE6BA9E41C189BDC21A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TealiumAndroid_t3261BB388DA01765B53016B078B894DB9573A857_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TealiumEvent_t276997051BFCEBF7FAC959F860C9F4C6B34E4023_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TealiumEvent_t276997051BFCEBF7FAC959F860C9F4C6B34E4023_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TealiumView_tC9D20EFC963EBBF82B70428435F13CE3D6417716_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TealiumView_tC9D20EFC963EBBF82B70428435F13CE3D6417716_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral09FD22DA3CEFEACE96CB263E19361486F432DB29);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	{
		// string? payload = null;
		V_0 = (String_t*)NULL;
		// if (dispatch.GetType() == typeof(TealiumEvent))
		TealiumDispatch_tBC7A4951FD4926BB6EFF74865AF1EC9D1C6BAFB9 * L_0 = ___dispatch0;
		NullCheck(L_0);
		Type_t * L_1;
		L_1 = Object_GetType_m571FE8360C10B98C23AAF1F066D92C08CC94F45B(L_0, /*hidden argument*/NULL);
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_2 = { reinterpret_cast<intptr_t> (TealiumEvent_t276997051BFCEBF7FAC959F860C9F4C6B34E4023_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_3;
		L_3 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E(L_2, /*hidden argument*/NULL);
		bool L_4;
		L_4 = Type_op_Equality_mA438719A1FDF103C7BBBB08AEF564E7FAEEA0046(L_1, L_3, /*hidden argument*/NULL);
		if (!L_4)
		{
			goto IL_0027;
		}
	}
	{
		// TealiumEvent tealEvent = (TealiumEvent)dispatch;
		TealiumDispatch_tBC7A4951FD4926BB6EFF74865AF1EC9D1C6BAFB9 * L_5 = ___dispatch0;
		// payload = JsonConvert.SerializeObject(tealEvent);
		IL2CPP_RUNTIME_CLASS_INIT(JsonConvert_t046ADD1F0B1F4BD3323ABEE6BA9E41C189BDC21A_il2cpp_TypeInfo_var);
		String_t* L_6;
		L_6 = JsonConvert_SerializeObject_mA9001ADA0DB9EA238BED332AB41743609EB6AD9D(((TealiumEvent_t276997051BFCEBF7FAC959F860C9F4C6B34E4023 *)CastclassSealed((RuntimeObject*)L_5, TealiumEvent_t276997051BFCEBF7FAC959F860C9F4C6B34E4023_il2cpp_TypeInfo_var)), /*hidden argument*/NULL);
		V_0 = L_6;
		// }
		goto IL_004a;
	}

IL_0027:
	{
		// else if (dispatch.GetType() == typeof(TealiumView))
		TealiumDispatch_tBC7A4951FD4926BB6EFF74865AF1EC9D1C6BAFB9 * L_7 = ___dispatch0;
		NullCheck(L_7);
		Type_t * L_8;
		L_8 = Object_GetType_m571FE8360C10B98C23AAF1F066D92C08CC94F45B(L_7, /*hidden argument*/NULL);
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_9 = { reinterpret_cast<intptr_t> (TealiumView_tC9D20EFC963EBBF82B70428435F13CE3D6417716_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_10;
		L_10 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E(L_9, /*hidden argument*/NULL);
		bool L_11;
		L_11 = Type_op_Equality_mA438719A1FDF103C7BBBB08AEF564E7FAEEA0046(L_8, L_10, /*hidden argument*/NULL);
		if (!L_11)
		{
			goto IL_004a;
		}
	}
	{
		// TealiumView tealView = (TealiumView)dispatch;
		TealiumDispatch_tBC7A4951FD4926BB6EFF74865AF1EC9D1C6BAFB9 * L_12 = ___dispatch0;
		// payload = JsonConvert.SerializeObject(tealView);
		IL2CPP_RUNTIME_CLASS_INIT(JsonConvert_t046ADD1F0B1F4BD3323ABEE6BA9E41C189BDC21A_il2cpp_TypeInfo_var);
		String_t* L_13;
		L_13 = JsonConvert_SerializeObject_mA9001ADA0DB9EA238BED332AB41743609EB6AD9D(((TealiumView_tC9D20EFC963EBBF82B70428435F13CE3D6417716 *)CastclassSealed((RuntimeObject*)L_12, TealiumView_tC9D20EFC963EBBF82B70428435F13CE3D6417716_il2cpp_TypeInfo_var)), /*hidden argument*/NULL);
		V_0 = L_13;
	}

IL_004a:
	{
		// _tealiumUnityObject.CallStatic("track", payload);
		IL2CPP_RUNTIME_CLASS_INIT(TealiumAndroid_t3261BB388DA01765B53016B078B894DB9573A857_il2cpp_TypeInfo_var);
		AndroidJavaClass_t52E934B16476D72AA6E4B248F989F2F825EB62D4 * L_14 = ((TealiumAndroid_t3261BB388DA01765B53016B078B894DB9573A857_StaticFields*)il2cpp_codegen_static_fields_for(TealiumAndroid_t3261BB388DA01765B53016B078B894DB9573A857_il2cpp_TypeInfo_var))->get__tealiumUnityObject_6();
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_15 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)SZArrayNew(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var, (uint32_t)1);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_16 = L_15;
		String_t* L_17 = V_0;
		NullCheck(L_16);
		ArrayElementTypeCheck (L_16, L_17);
		(L_16)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_17);
		NullCheck(L_14);
		AndroidJavaObject_CallStatic_m5A97968767E1603C021023809276443ED24577FB(L_14, _stringLiteral09FD22DA3CEFEACE96CB263E19361486F432DB29, L_16, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void TealiumAndroid::AddToDataLayer(System.Collections.Generic.Dictionary`2<System.String,System.Object>,TealiumCommon.Expiry)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TealiumAndroid_AddToDataLayer_mDF1707A577C8D6CD0D240F05E0112A577D45B93F (TealiumAndroid_t3261BB388DA01765B53016B078B894DB9573A857 * __this, Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 * ___data0, Expiry_tCC1CF50318A9D2722F63B5E5842DCD2D0FCA8137  ___expiry1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonConvert_t046ADD1F0B1F4BD3323ABEE6BA9E41C189BDC21A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TealiumAndroid_t3261BB388DA01765B53016B078B894DB9573A857_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE9665AE49C73D0859A034EB155329FA4C96D5FCC);
		s_Il2CppMethodInitialized = true;
	}
	{
		// _tealiumUnityObject.CallStatic("addToDataLayer", JsonConvert.SerializeObject(data), expiry.Value);
		IL2CPP_RUNTIME_CLASS_INIT(TealiumAndroid_t3261BB388DA01765B53016B078B894DB9573A857_il2cpp_TypeInfo_var);
		AndroidJavaClass_t52E934B16476D72AA6E4B248F989F2F825EB62D4 * L_0 = ((TealiumAndroid_t3261BB388DA01765B53016B078B894DB9573A857_StaticFields*)il2cpp_codegen_static_fields_for(TealiumAndroid_t3261BB388DA01765B53016B078B894DB9573A857_il2cpp_TypeInfo_var))->get__tealiumUnityObject_6();
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_1 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)SZArrayNew(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var, (uint32_t)2);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_2 = L_1;
		Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 * L_3 = ___data0;
		IL2CPP_RUNTIME_CLASS_INIT(JsonConvert_t046ADD1F0B1F4BD3323ABEE6BA9E41C189BDC21A_il2cpp_TypeInfo_var);
		String_t* L_4;
		L_4 = JsonConvert_SerializeObject_mA9001ADA0DB9EA238BED332AB41743609EB6AD9D(L_3, /*hidden argument*/NULL);
		NullCheck(L_2);
		ArrayElementTypeCheck (L_2, L_4);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_4);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_5 = L_2;
		String_t* L_6;
		L_6 = Expiry_get_Value_m26ED3077C06BF3DFEB44E88E432DA6149E203CA4_inline((Expiry_tCC1CF50318A9D2722F63B5E5842DCD2D0FCA8137 *)(&___expiry1), /*hidden argument*/NULL);
		NullCheck(L_5);
		ArrayElementTypeCheck (L_5, L_6);
		(L_5)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject *)L_6);
		NullCheck(L_0);
		AndroidJavaObject_CallStatic_m5A97968767E1603C021023809276443ED24577FB(L_0, _stringLiteralE9665AE49C73D0859A034EB155329FA4C96D5FCC, L_5, /*hidden argument*/NULL);
		return;
	}
}
// System.Object TealiumAndroid::GetFromDataLayer(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * TealiumAndroid_GetFromDataLayer_m2B9524B74D5DAD2C782E13C7CF1312DBB9051668 (TealiumAndroid_t3261BB388DA01765B53016B078B894DB9573A857 * __this, String_t* ___id0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaObject_CallStatic_TisString_t_m5A20C2CE3D48240700CE5881319C2557947CDC7A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Item_m88AA4580D695AEA212B0DF17D8B55C98CF3B624D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonConvert_DeserializeObject_TisDictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399_m9C72B9A7CA671CB0DAE02CAE6B37E464873D87E6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonConvert_t046ADD1F0B1F4BD3323ABEE6BA9E41C189BDC21A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TealiumAndroid_t3261BB388DA01765B53016B078B894DB9573A857_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TealiumUnityPlugin_t8B3797338182C27740783841F277A92D6D40AC55_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9114DD7DD6A3CF73058180EE667FF9F9CE534BB6);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	{
		// string? data = _tealiumUnityObject.CallStatic<string>("getFromDataLayer", id);
		IL2CPP_RUNTIME_CLASS_INIT(TealiumAndroid_t3261BB388DA01765B53016B078B894DB9573A857_il2cpp_TypeInfo_var);
		AndroidJavaClass_t52E934B16476D72AA6E4B248F989F2F825EB62D4 * L_0 = ((TealiumAndroid_t3261BB388DA01765B53016B078B894DB9573A857_StaticFields*)il2cpp_codegen_static_fields_for(TealiumAndroid_t3261BB388DA01765B53016B078B894DB9573A857_il2cpp_TypeInfo_var))->get__tealiumUnityObject_6();
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_1 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)SZArrayNew(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var, (uint32_t)1);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_2 = L_1;
		String_t* L_3 = ___id0;
		NullCheck(L_2);
		ArrayElementTypeCheck (L_2, L_3);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_3);
		NullCheck(L_0);
		String_t* L_4;
		L_4 = AndroidJavaObject_CallStatic_TisString_t_m5A20C2CE3D48240700CE5881319C2557947CDC7A(L_0, _stringLiteral9114DD7DD6A3CF73058180EE667FF9F9CE534BB6, L_2, /*hidden argument*/AndroidJavaObject_CallStatic_TisString_t_m5A20C2CE3D48240700CE5881319C2557947CDC7A_RuntimeMethod_var);
		V_0 = L_4;
		// if (data == null) {
		String_t* L_5 = V_0;
		if (L_5)
		{
			goto IL_001f;
		}
	}
	{
		// return null;
		return NULL;
	}

IL_001f:
	{
		// Dictionary<string, object> dataDictionary = JsonConvert.DeserializeObject<Dictionary<string, object>>(data);
		String_t* L_6 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(JsonConvert_t046ADD1F0B1F4BD3323ABEE6BA9E41C189BDC21A_il2cpp_TypeInfo_var);
		Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 * L_7;
		L_7 = JsonConvert_DeserializeObject_TisDictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399_m9C72B9A7CA671CB0DAE02CAE6B37E464873D87E6(L_6, /*hidden argument*/JsonConvert_DeserializeObject_TisDictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399_m9C72B9A7CA671CB0DAE02CAE6B37E464873D87E6_RuntimeMethod_var);
		// object? dataValue = TealiumUnityPlugin.ToCollections(dataDictionary[id]);
		String_t* L_8 = ___id0;
		NullCheck(L_7);
		RuntimeObject * L_9;
		L_9 = Dictionary_2_get_Item_m88AA4580D695AEA212B0DF17D8B55C98CF3B624D(L_7, L_8, /*hidden argument*/Dictionary_2_get_Item_m88AA4580D695AEA212B0DF17D8B55C98CF3B624D_RuntimeMethod_var);
		IL2CPP_RUNTIME_CLASS_INIT(TealiumUnityPlugin_t8B3797338182C27740783841F277A92D6D40AC55_il2cpp_TypeInfo_var);
		RuntimeObject * L_10;
		L_10 = TealiumUnityPlugin_ToCollections_m5E2B1D64A02C34EE7ADBCCCB5B6C3040A2CC3C75(L_9, /*hidden argument*/NULL);
		// return dataValue;
		return L_10;
	}
}
// System.Void TealiumAndroid::RemoveFromDataLayer(System.Collections.Generic.List`1<System.String>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TealiumAndroid_RemoveFromDataLayer_m420D5D5C444050A51213FF5A4ED3919A57D7C44F (TealiumAndroid_t3261BB388DA01765B53016B078B894DB9573A857 * __this, List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * ___keys0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonConvert_t046ADD1F0B1F4BD3323ABEE6BA9E41C189BDC21A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TealiumAndroid_t3261BB388DA01765B53016B078B894DB9573A857_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA1CF2D9EE7291076F273B2585551F9172E574891);
		s_Il2CppMethodInitialized = true;
	}
	{
		// _tealiumUnityObject.CallStatic("removeFromDataLayer", JsonConvert.SerializeObject(keys));
		IL2CPP_RUNTIME_CLASS_INIT(TealiumAndroid_t3261BB388DA01765B53016B078B894DB9573A857_il2cpp_TypeInfo_var);
		AndroidJavaClass_t52E934B16476D72AA6E4B248F989F2F825EB62D4 * L_0 = ((TealiumAndroid_t3261BB388DA01765B53016B078B894DB9573A857_StaticFields*)il2cpp_codegen_static_fields_for(TealiumAndroid_t3261BB388DA01765B53016B078B894DB9573A857_il2cpp_TypeInfo_var))->get__tealiumUnityObject_6();
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_1 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)SZArrayNew(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var, (uint32_t)1);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_2 = L_1;
		List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * L_3 = ___keys0;
		IL2CPP_RUNTIME_CLASS_INIT(JsonConvert_t046ADD1F0B1F4BD3323ABEE6BA9E41C189BDC21A_il2cpp_TypeInfo_var);
		String_t* L_4;
		L_4 = JsonConvert_SerializeObject_mA9001ADA0DB9EA238BED332AB41743609EB6AD9D(L_3, /*hidden argument*/NULL);
		NullCheck(L_2);
		ArrayElementTypeCheck (L_2, L_4);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_4);
		NullCheck(L_0);
		AndroidJavaObject_CallStatic_m5A97968767E1603C021023809276443ED24577FB(L_0, _stringLiteralA1CF2D9EE7291076F273B2585551F9172E574891, L_2, /*hidden argument*/NULL);
		return;
	}
}
// System.Void TealiumAndroid::SetConsentStatus(TealiumCommon.ConsentStatus)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TealiumAndroid_SetConsentStatus_m57AC6C2F3F70856281FA826C32C35CEA3DAE6B2F (TealiumAndroid_t3261BB388DA01765B53016B078B894DB9573A857 * __this, ConsentStatus_t6263FFF5C886922D62B1DDC450EFE8CE2036F101  ___status0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TealiumAndroid_t3261BB388DA01765B53016B078B894DB9573A857_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB721BD1BCAA2A9CAA44D8DAA69E9645567BF5329);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public void SetConsentStatus(ConsentStatus status) => _tealiumUnityObject.CallStatic("setConsentStatus", status.Value);
		IL2CPP_RUNTIME_CLASS_INIT(TealiumAndroid_t3261BB388DA01765B53016B078B894DB9573A857_il2cpp_TypeInfo_var);
		AndroidJavaClass_t52E934B16476D72AA6E4B248F989F2F825EB62D4 * L_0 = ((TealiumAndroid_t3261BB388DA01765B53016B078B894DB9573A857_StaticFields*)il2cpp_codegen_static_fields_for(TealiumAndroid_t3261BB388DA01765B53016B078B894DB9573A857_il2cpp_TypeInfo_var))->get__tealiumUnityObject_6();
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_1 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)SZArrayNew(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var, (uint32_t)1);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_2 = L_1;
		String_t* L_3;
		L_3 = ConsentStatus_get_Value_mE6D4CEC397F8DF285456F8FC9CA485FAD4DE6819_inline((ConsentStatus_t6263FFF5C886922D62B1DDC450EFE8CE2036F101 *)(&___status0), /*hidden argument*/NULL);
		NullCheck(L_2);
		ArrayElementTypeCheck (L_2, L_3);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_3);
		NullCheck(L_0);
		AndroidJavaObject_CallStatic_m5A97968767E1603C021023809276443ED24577FB(L_0, _stringLiteralB721BD1BCAA2A9CAA44D8DAA69E9645567BF5329, L_2, /*hidden argument*/NULL);
		return;
	}
}
// TealiumCommon.ConsentStatus TealiumAndroid::GetConsentStatus()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ConsentStatus_t6263FFF5C886922D62B1DDC450EFE8CE2036F101  TealiumAndroid_GetConsentStatus_mF1407DA55D58D88405874D0F9806A968B6A80A24 (TealiumAndroid_t3261BB388DA01765B53016B078B894DB9573A857 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaObject_CallStatic_TisString_t_m5A20C2CE3D48240700CE5881319C2557947CDC7A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Array_Empty_TisRuntimeObject_m1FBC21243DF3542384C523801E8CA8A97606C747_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TealiumAndroid_t3261BB388DA01765B53016B078B894DB9573A857_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral244940E192616C6FDCE2CD494CC5BE9AA60F5CD8);
		s_Il2CppMethodInitialized = true;
	}
	{
		// string status = _tealiumUnityObject.CallStatic<string>("getConsentStatus");
		IL2CPP_RUNTIME_CLASS_INIT(TealiumAndroid_t3261BB388DA01765B53016B078B894DB9573A857_il2cpp_TypeInfo_var);
		AndroidJavaClass_t52E934B16476D72AA6E4B248F989F2F825EB62D4 * L_0 = ((TealiumAndroid_t3261BB388DA01765B53016B078B894DB9573A857_StaticFields*)il2cpp_codegen_static_fields_for(TealiumAndroid_t3261BB388DA01765B53016B078B894DB9573A857_il2cpp_TypeInfo_var))->get__tealiumUnityObject_6();
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_1;
		L_1 = Array_Empty_TisRuntimeObject_m1FBC21243DF3542384C523801E8CA8A97606C747_inline(/*hidden argument*/Array_Empty_TisRuntimeObject_m1FBC21243DF3542384C523801E8CA8A97606C747_RuntimeMethod_var);
		NullCheck(L_0);
		String_t* L_2;
		L_2 = AndroidJavaObject_CallStatic_TisString_t_m5A20C2CE3D48240700CE5881319C2557947CDC7A(L_0, _stringLiteral244940E192616C6FDCE2CD494CC5BE9AA60F5CD8, L_1, /*hidden argument*/AndroidJavaObject_CallStatic_TisString_t_m5A20C2CE3D48240700CE5881319C2557947CDC7A_RuntimeMethod_var);
		// return ConsentStatus.FromString(status);
		ConsentStatus_t6263FFF5C886922D62B1DDC450EFE8CE2036F101  L_3;
		L_3 = ConsentStatus_FromString_m1E231205664209DC9B4A7095BEDFCB7D6ECB9BEF(L_2, /*hidden argument*/NULL);
		return L_3;
	}
}
// System.Void TealiumAndroid::SetConsentCategories(System.Collections.Generic.List`1<TealiumCommon.ConsentCategories>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TealiumAndroid_SetConsentCategories_m96989D2E63BFB8B6CECEC03A154C758541AAA648 (TealiumAndroid_t3261BB388DA01765B53016B078B894DB9573A857 * __this, List_1_tB719F9AEA1042BBCF17CC50DC1881550E74D3695 * ___categories0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonConvert_t046ADD1F0B1F4BD3323ABEE6BA9E41C189BDC21A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TealiumAndroid_t3261BB388DA01765B53016B078B894DB9573A857_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralAB8D54CA47E48375515466A79C3577E379802A06);
		s_Il2CppMethodInitialized = true;
	}
	{
		// _tealiumUnityObject.CallStatic("setConsentCategories", JsonConvert.SerializeObject(categories));
		IL2CPP_RUNTIME_CLASS_INIT(TealiumAndroid_t3261BB388DA01765B53016B078B894DB9573A857_il2cpp_TypeInfo_var);
		AndroidJavaClass_t52E934B16476D72AA6E4B248F989F2F825EB62D4 * L_0 = ((TealiumAndroid_t3261BB388DA01765B53016B078B894DB9573A857_StaticFields*)il2cpp_codegen_static_fields_for(TealiumAndroid_t3261BB388DA01765B53016B078B894DB9573A857_il2cpp_TypeInfo_var))->get__tealiumUnityObject_6();
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_1 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)SZArrayNew(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var, (uint32_t)1);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_2 = L_1;
		List_1_tB719F9AEA1042BBCF17CC50DC1881550E74D3695 * L_3 = ___categories0;
		IL2CPP_RUNTIME_CLASS_INIT(JsonConvert_t046ADD1F0B1F4BD3323ABEE6BA9E41C189BDC21A_il2cpp_TypeInfo_var);
		String_t* L_4;
		L_4 = JsonConvert_SerializeObject_mA9001ADA0DB9EA238BED332AB41743609EB6AD9D(L_3, /*hidden argument*/NULL);
		NullCheck(L_2);
		ArrayElementTypeCheck (L_2, L_4);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_4);
		NullCheck(L_0);
		AndroidJavaObject_CallStatic_m5A97968767E1603C021023809276443ED24577FB(L_0, _stringLiteralAB8D54CA47E48375515466A79C3577E379802A06, L_2, /*hidden argument*/NULL);
		return;
	}
}
// System.Collections.Generic.List`1<TealiumCommon.ConsentCategories> TealiumAndroid::GetConsentCategories()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_tB719F9AEA1042BBCF17CC50DC1881550E74D3695 * TealiumAndroid_GetConsentCategories_m0333E4F67C31D398A4C2A715E0E8EB1967610ECA (TealiumAndroid_t3261BB388DA01765B53016B078B894DB9573A857 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaObject_CallStatic_TisString_t_m5A20C2CE3D48240700CE5881319C2557947CDC7A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Array_Empty_TisRuntimeObject_m1FBC21243DF3542384C523801E8CA8A97606C747_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Converter_2__ctor_mB0A0BDAE8830CC5A9B0328128E1C51944643F609_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Converter_2_tF015A85C226F06C29481EF50AC5392D4975A7B7D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_ToList_TisString_t_m6685B37A12E077BE26D988D9881A6EA4BF3AE295_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_ConvertAll_TisConsentCategories_t7F1FDE7995E2ABB2BEF4A4DC381AE8DEE9B8429F_m8905DF3C269C817A2860FF5B6FAA60411982A49E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TealiumAndroid_t3261BB388DA01765B53016B078B894DB9573A857_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_U3CGetConsentCategoriesU3Eb__12_0_mB5493B4DB69DFDEDE5D6391E60E81A003D38839B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_t09F86AA9C724B6431311FD4F6B328ECB9D87A170_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBEDF7EFBD5B4C5954C7D25E58C4880A92B355872);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	Converter_2_tF015A85C226F06C29481EF50AC5392D4975A7B7D * G_B4_0 = NULL;
	List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * G_B4_1 = NULL;
	Converter_2_tF015A85C226F06C29481EF50AC5392D4975A7B7D * G_B3_0 = NULL;
	List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * G_B3_1 = NULL;
	{
		// string? categories = _tealiumUnityObject.CallStatic<string>("getConsentCategories");
		IL2CPP_RUNTIME_CLASS_INIT(TealiumAndroid_t3261BB388DA01765B53016B078B894DB9573A857_il2cpp_TypeInfo_var);
		AndroidJavaClass_t52E934B16476D72AA6E4B248F989F2F825EB62D4 * L_0 = ((TealiumAndroid_t3261BB388DA01765B53016B078B894DB9573A857_StaticFields*)il2cpp_codegen_static_fields_for(TealiumAndroid_t3261BB388DA01765B53016B078B894DB9573A857_il2cpp_TypeInfo_var))->get__tealiumUnityObject_6();
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_1;
		L_1 = Array_Empty_TisRuntimeObject_m1FBC21243DF3542384C523801E8CA8A97606C747_inline(/*hidden argument*/Array_Empty_TisRuntimeObject_m1FBC21243DF3542384C523801E8CA8A97606C747_RuntimeMethod_var);
		NullCheck(L_0);
		String_t* L_2;
		L_2 = AndroidJavaObject_CallStatic_TisString_t_m5A20C2CE3D48240700CE5881319C2557947CDC7A(L_0, _stringLiteralBEDF7EFBD5B4C5954C7D25E58C4880A92B355872, L_1, /*hidden argument*/AndroidJavaObject_CallStatic_TisString_t_m5A20C2CE3D48240700CE5881319C2557947CDC7A_RuntimeMethod_var);
		V_0 = L_2;
		// if (categories == null) {
		String_t* L_3 = V_0;
		if (L_3)
		{
			goto IL_001a;
		}
	}
	{
		// return null;
		return (List_1_tB719F9AEA1042BBCF17CC50DC1881550E74D3695 *)NULL;
	}

IL_001a:
	{
		// List<ConsentCategories> formattedCategories = categories.Split(',').ToList().ConvertAll(category => ConsentCategories.FromString(category));
		String_t* L_4 = V_0;
		CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_5 = (CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34*)(CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34*)SZArrayNew(CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34_il2cpp_TypeInfo_var, (uint32_t)1);
		CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_6 = L_5;
		NullCheck(L_6);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(0), (Il2CppChar)((int32_t)44));
		NullCheck(L_4);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_7;
		L_7 = String_Split_m2C74DC2B85B322998094BEDE787C378822E1F28B(L_4, L_6, /*hidden argument*/NULL);
		List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * L_8;
		L_8 = Enumerable_ToList_TisString_t_m6685B37A12E077BE26D988D9881A6EA4BF3AE295((RuntimeObject*)(RuntimeObject*)L_7, /*hidden argument*/Enumerable_ToList_TisString_t_m6685B37A12E077BE26D988D9881A6EA4BF3AE295_RuntimeMethod_var);
		IL2CPP_RUNTIME_CLASS_INIT(U3CU3Ec_t09F86AA9C724B6431311FD4F6B328ECB9D87A170_il2cpp_TypeInfo_var);
		Converter_2_tF015A85C226F06C29481EF50AC5392D4975A7B7D * L_9 = ((U3CU3Ec_t09F86AA9C724B6431311FD4F6B328ECB9D87A170_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t09F86AA9C724B6431311FD4F6B328ECB9D87A170_il2cpp_TypeInfo_var))->get_U3CU3E9__12_0_1();
		Converter_2_tF015A85C226F06C29481EF50AC5392D4975A7B7D * L_10 = L_9;
		G_B3_0 = L_10;
		G_B3_1 = L_8;
		if (L_10)
		{
			G_B4_0 = L_10;
			G_B4_1 = L_8;
			goto IL_004f;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(U3CU3Ec_t09F86AA9C724B6431311FD4F6B328ECB9D87A170_il2cpp_TypeInfo_var);
		U3CU3Ec_t09F86AA9C724B6431311FD4F6B328ECB9D87A170 * L_11 = ((U3CU3Ec_t09F86AA9C724B6431311FD4F6B328ECB9D87A170_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t09F86AA9C724B6431311FD4F6B328ECB9D87A170_il2cpp_TypeInfo_var))->get_U3CU3E9_0();
		Converter_2_tF015A85C226F06C29481EF50AC5392D4975A7B7D * L_12 = (Converter_2_tF015A85C226F06C29481EF50AC5392D4975A7B7D *)il2cpp_codegen_object_new(Converter_2_tF015A85C226F06C29481EF50AC5392D4975A7B7D_il2cpp_TypeInfo_var);
		Converter_2__ctor_mB0A0BDAE8830CC5A9B0328128E1C51944643F609(L_12, L_11, (intptr_t)((intptr_t)U3CU3Ec_U3CGetConsentCategoriesU3Eb__12_0_mB5493B4DB69DFDEDE5D6391E60E81A003D38839B_RuntimeMethod_var), /*hidden argument*/Converter_2__ctor_mB0A0BDAE8830CC5A9B0328128E1C51944643F609_RuntimeMethod_var);
		Converter_2_tF015A85C226F06C29481EF50AC5392D4975A7B7D * L_13 = L_12;
		((U3CU3Ec_t09F86AA9C724B6431311FD4F6B328ECB9D87A170_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t09F86AA9C724B6431311FD4F6B328ECB9D87A170_il2cpp_TypeInfo_var))->set_U3CU3E9__12_0_1(L_13);
		G_B4_0 = L_13;
		G_B4_1 = G_B3_1;
	}

IL_004f:
	{
		NullCheck(G_B4_1);
		List_1_tB719F9AEA1042BBCF17CC50DC1881550E74D3695 * L_14;
		L_14 = List_1_ConvertAll_TisConsentCategories_t7F1FDE7995E2ABB2BEF4A4DC381AE8DEE9B8429F_m8905DF3C269C817A2860FF5B6FAA60411982A49E(G_B4_1, G_B4_0, /*hidden argument*/List_1_ConvertAll_TisConsentCategories_t7F1FDE7995E2ABB2BEF4A4DC381AE8DEE9B8429F_m8905DF3C269C817A2860FF5B6FAA60411982A49E_RuntimeMethod_var);
		// return formattedCategories;
		return L_14;
	}
}
// System.Void TealiumAndroid::AddRemoteCommand(System.String,System.Action`1<System.Collections.Generic.Dictionary`2<System.String,System.Object>>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TealiumAndroid_AddRemoteCommand_mCDEB6B326E257C46BE82DCD63937722A07D0897D (TealiumAndroid_t3261BB388DA01765B53016B078B894DB9573A857 * __this, String_t* ___id0, Action_1_t6B2EAA2D3491CBA6FEF1ECDF624EEF00DFD194C1 * ___callback1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TealiumAndroid_t3261BB388DA01765B53016B078B894DB9573A857_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4A7B8364EF73661DDA9D7FEF4C8714233932EB28);
		s_Il2CppMethodInitialized = true;
	}
	{
		// _tealiumUnityObject.CallStatic("addRemoteCommand", id);
		IL2CPP_RUNTIME_CLASS_INIT(TealiumAndroid_t3261BB388DA01765B53016B078B894DB9573A857_il2cpp_TypeInfo_var);
		AndroidJavaClass_t52E934B16476D72AA6E4B248F989F2F825EB62D4 * L_0 = ((TealiumAndroid_t3261BB388DA01765B53016B078B894DB9573A857_StaticFields*)il2cpp_codegen_static_fields_for(TealiumAndroid_t3261BB388DA01765B53016B078B894DB9573A857_il2cpp_TypeInfo_var))->get__tealiumUnityObject_6();
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_1 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)SZArrayNew(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var, (uint32_t)1);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_2 = L_1;
		String_t* L_3 = ___id0;
		NullCheck(L_2);
		ArrayElementTypeCheck (L_2, L_3);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_3);
		NullCheck(L_0);
		AndroidJavaObject_CallStatic_m5A97968767E1603C021023809276443ED24577FB(L_0, _stringLiteral4A7B8364EF73661DDA9D7FEF4C8714233932EB28, L_2, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void TealiumAndroid::RemoveRemoteCommand(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TealiumAndroid_RemoveRemoteCommand_m2A018DA591B2F13100ECE9A7B4C61D166A52CD79 (TealiumAndroid_t3261BB388DA01765B53016B078B894DB9573A857 * __this, String_t* ___id0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TealiumAndroid_t3261BB388DA01765B53016B078B894DB9573A857_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD3DC035B48B0C6084DB3AD45C1CE1E54DC89BCD0);
		s_Il2CppMethodInitialized = true;
	}
	{
		// _tealiumUnityObject.CallStatic("removeRemoteCommand", id);
		IL2CPP_RUNTIME_CLASS_INIT(TealiumAndroid_t3261BB388DA01765B53016B078B894DB9573A857_il2cpp_TypeInfo_var);
		AndroidJavaClass_t52E934B16476D72AA6E4B248F989F2F825EB62D4 * L_0 = ((TealiumAndroid_t3261BB388DA01765B53016B078B894DB9573A857_StaticFields*)il2cpp_codegen_static_fields_for(TealiumAndroid_t3261BB388DA01765B53016B078B894DB9573A857_il2cpp_TypeInfo_var))->get__tealiumUnityObject_6();
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_1 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)SZArrayNew(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var, (uint32_t)1);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_2 = L_1;
		String_t* L_3 = ___id0;
		NullCheck(L_2);
		ArrayElementTypeCheck (L_2, L_3);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_3);
		NullCheck(L_0);
		AndroidJavaObject_CallStatic_m5A97968767E1603C021023809276443ED24577FB(L_0, _stringLiteralD3DC035B48B0C6084DB3AD45C1CE1E54DC89BCD0, L_2, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void TealiumAndroid::JoinTrace(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TealiumAndroid_JoinTrace_m3145BF692FA998DCA6753F17E57846EB61F5B43B (TealiumAndroid_t3261BB388DA01765B53016B078B894DB9573A857 * __this, String_t* ___id0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TealiumAndroid_t3261BB388DA01765B53016B078B894DB9573A857_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2D8F1FB9835486A24FDEA4BCF7C897A5291A25FF);
		s_Il2CppMethodInitialized = true;
	}
	{
		// _tealiumUnityObject.CallStatic("joinTrace", id);
		IL2CPP_RUNTIME_CLASS_INIT(TealiumAndroid_t3261BB388DA01765B53016B078B894DB9573A857_il2cpp_TypeInfo_var);
		AndroidJavaClass_t52E934B16476D72AA6E4B248F989F2F825EB62D4 * L_0 = ((TealiumAndroid_t3261BB388DA01765B53016B078B894DB9573A857_StaticFields*)il2cpp_codegen_static_fields_for(TealiumAndroid_t3261BB388DA01765B53016B078B894DB9573A857_il2cpp_TypeInfo_var))->get__tealiumUnityObject_6();
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_1 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)SZArrayNew(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var, (uint32_t)1);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_2 = L_1;
		String_t* L_3 = ___id0;
		NullCheck(L_2);
		ArrayElementTypeCheck (L_2, L_3);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_3);
		NullCheck(L_0);
		AndroidJavaObject_CallStatic_m5A97968767E1603C021023809276443ED24577FB(L_0, _stringLiteral2D8F1FB9835486A24FDEA4BCF7C897A5291A25FF, L_2, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void TealiumAndroid::LeaveTrace()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TealiumAndroid_LeaveTrace_m90370F06EA5B240CDDF458C13D791D49889C0A1E (TealiumAndroid_t3261BB388DA01765B53016B078B894DB9573A857 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Array_Empty_TisRuntimeObject_m1FBC21243DF3542384C523801E8CA8A97606C747_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TealiumAndroid_t3261BB388DA01765B53016B078B894DB9573A857_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1B7B316294AE787BBC03FFFDB125C80E03A04E70);
		s_Il2CppMethodInitialized = true;
	}
	{
		// _tealiumUnityObject.CallStatic("leaveTrace");
		IL2CPP_RUNTIME_CLASS_INIT(TealiumAndroid_t3261BB388DA01765B53016B078B894DB9573A857_il2cpp_TypeInfo_var);
		AndroidJavaClass_t52E934B16476D72AA6E4B248F989F2F825EB62D4 * L_0 = ((TealiumAndroid_t3261BB388DA01765B53016B078B894DB9573A857_StaticFields*)il2cpp_codegen_static_fields_for(TealiumAndroid_t3261BB388DA01765B53016B078B894DB9573A857_il2cpp_TypeInfo_var))->get__tealiumUnityObject_6();
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_1;
		L_1 = Array_Empty_TisRuntimeObject_m1FBC21243DF3542384C523801E8CA8A97606C747_inline(/*hidden argument*/Array_Empty_TisRuntimeObject_m1FBC21243DF3542384C523801E8CA8A97606C747_RuntimeMethod_var);
		NullCheck(L_0);
		AndroidJavaObject_CallStatic_m5A97968767E1603C021023809276443ED24577FB(L_0, _stringLiteral1B7B316294AE787BBC03FFFDB125C80E03A04E70, L_1, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.String TealiumAndroid::GetVisitorId()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* TealiumAndroid_GetVisitorId_mBA51C9EDCBD89F63EC3C4A2794C2AE50E5AC1966 (TealiumAndroid_t3261BB388DA01765B53016B078B894DB9573A857 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaObject_CallStatic_TisString_t_m5A20C2CE3D48240700CE5881319C2557947CDC7A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Array_Empty_TisRuntimeObject_m1FBC21243DF3542384C523801E8CA8A97606C747_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TealiumAndroid_t3261BB388DA01765B53016B078B894DB9573A857_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral83D75EFE10E61242D8B77D81FC841EF3AF75EF8F);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return _tealiumUnityObject.CallStatic<string>("getVisitorId");
		IL2CPP_RUNTIME_CLASS_INIT(TealiumAndroid_t3261BB388DA01765B53016B078B894DB9573A857_il2cpp_TypeInfo_var);
		AndroidJavaClass_t52E934B16476D72AA6E4B248F989F2F825EB62D4 * L_0 = ((TealiumAndroid_t3261BB388DA01765B53016B078B894DB9573A857_StaticFields*)il2cpp_codegen_static_fields_for(TealiumAndroid_t3261BB388DA01765B53016B078B894DB9573A857_il2cpp_TypeInfo_var))->get__tealiumUnityObject_6();
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_1;
		L_1 = Array_Empty_TisRuntimeObject_m1FBC21243DF3542384C523801E8CA8A97606C747_inline(/*hidden argument*/Array_Empty_TisRuntimeObject_m1FBC21243DF3542384C523801E8CA8A97606C747_RuntimeMethod_var);
		NullCheck(L_0);
		String_t* L_2;
		L_2 = AndroidJavaObject_CallStatic_TisString_t_m5A20C2CE3D48240700CE5881319C2557947CDC7A(L_0, _stringLiteral83D75EFE10E61242D8B77D81FC841EF3AF75EF8F, L_1, /*hidden argument*/AndroidJavaObject_CallStatic_TisString_t_m5A20C2CE3D48240700CE5881319C2557947CDC7A_RuntimeMethod_var);
		return L_2;
	}
}
// System.Void TealiumAndroid::SetVisitorServiceListener(System.Action`1<System.Collections.Generic.Dictionary`2<System.String,System.Object>>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TealiumAndroid_SetVisitorServiceListener_m6F7CDCE143B171278A33F503532CEFF228BAD343 (TealiumAndroid_t3261BB388DA01765B53016B078B894DB9573A857 * __this, Action_1_t6B2EAA2D3491CBA6FEF1ECDF624EEF00DFD194C1 * ___callback0, const RuntimeMethod* method)
{
	{
		// }
		return;
	}
}
// System.Void TealiumAndroid::SetConsentExpiryListener(System.Action)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TealiumAndroid_SetConsentExpiryListener_mA1CF3FF64ECC26D3C906C9AB34681A2A0C1949A8 (TealiumAndroid_t3261BB388DA01765B53016B078B894DB9573A857 * __this, Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * ___callback0, const RuntimeMethod* method)
{
	{
		// }
		return;
	}
}
// System.Void TealiumAndroid::HandleRemoteCommandResponse(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TealiumAndroid_HandleRemoteCommandResponse_mE502F978B487E1F3BD25B7F148471FD42C89DF58 (TealiumAndroid_t3261BB388DA01765B53016B078B894DB9573A857 * __this, String_t* ___response0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TealiumUnityPlugin_t8B3797338182C27740783841F277A92D6D40AC55_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// TealiumUnityPlugin.OnRemoteCommandCompletion(response);
		String_t* L_0 = ___response0;
		IL2CPP_RUNTIME_CLASS_INIT(TealiumUnityPlugin_t8B3797338182C27740783841F277A92D6D40AC55_il2cpp_TypeInfo_var);
		TealiumUnityPlugin_OnRemoteCommandCompletion_mB3D09BD131A2E5EDDA6A0862CD7822B6A031F00C(L_0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void TealiumAndroid::HandleVisitorProfileUpdate(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TealiumAndroid_HandleVisitorProfileUpdate_m5BC4A9451DF90D418EE3A9E6FD833CD13A9A4F59 (TealiumAndroid_t3261BB388DA01765B53016B078B894DB9573A857 * __this, String_t* ___updates0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TealiumUnityPlugin_t8B3797338182C27740783841F277A92D6D40AC55_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// TealiumUnityPlugin.OnVisitorServiceUpdate(updates);
		String_t* L_0 = ___updates0;
		IL2CPP_RUNTIME_CLASS_INIT(TealiumUnityPlugin_t8B3797338182C27740783841F277A92D6D40AC55_il2cpp_TypeInfo_var);
		TealiumUnityPlugin_OnVisitorServiceUpdate_m1A6C692F0799B188F8FBF219808CE9A41059864A(L_0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void TealiumAndroid::HandleConsentUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TealiumAndroid_HandleConsentUpdate_m9DBA81A415B8D1F72D7A279756688F72AD4198E3 (TealiumAndroid_t3261BB388DA01765B53016B078B894DB9573A857 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TealiumUnityPlugin_t8B3797338182C27740783841F277A92D6D40AC55_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// TealiumUnityPlugin.OnConsentExpiration();
		IL2CPP_RUNTIME_CLASS_INIT(TealiumUnityPlugin_t8B3797338182C27740783841F277A92D6D40AC55_il2cpp_TypeInfo_var);
		TealiumUnityPlugin_OnConsentExpiration_m325589A0A06C82CA30DDE8B90B9984E6361E06BA(/*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void TealiumAndroid::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TealiumAndroid__ctor_mBF69F1F37644BF3B7191237FE98B1C0284C88FB6 (TealiumAndroid_t3261BB388DA01765B53016B078B894DB9573A857 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void TealiumAndroid::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TealiumAndroid__cctor_m103E3D31E705B1FF0C259A6CB66E4AEE3CF5F3B3 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_AddComponent_TisTealiumAndroid_t3261BB388DA01765B53016B078B894DB9573A857_mAF82A6D740899969FBC664219EB54FD63C233643_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TealiumAndroid_t3261BB388DA01765B53016B078B894DB9573A857_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA8CDC49139C9F70342D7D90A72F625062B7DD35C);
		s_Il2CppMethodInitialized = true;
	}
	{
		// static TealiumAndroid _instance = new GameObject("TealiumAndroid").AddComponent<TealiumAndroid>();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0 = (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *)il2cpp_codegen_object_new(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_il2cpp_TypeInfo_var);
		GameObject__ctor_mDF8BF31EAE3E03F24421531B25FB4BEDB7C87144(L_0, _stringLiteralA8CDC49139C9F70342D7D90A72F625062B7DD35C, /*hidden argument*/NULL);
		NullCheck(L_0);
		TealiumAndroid_t3261BB388DA01765B53016B078B894DB9573A857 * L_1;
		L_1 = GameObject_AddComponent_TisTealiumAndroid_t3261BB388DA01765B53016B078B894DB9573A857_mAF82A6D740899969FBC664219EB54FD63C233643(L_0, /*hidden argument*/GameObject_AddComponent_TisTealiumAndroid_t3261BB388DA01765B53016B078B894DB9573A857_mAF82A6D740899969FBC664219EB54FD63C233643_RuntimeMethod_var);
		((TealiumAndroid_t3261BB388DA01765B53016B078B894DB9573A857_StaticFields*)il2cpp_codegen_static_fields_for(TealiumAndroid_t3261BB388DA01765B53016B078B894DB9573A857_il2cpp_TypeInfo_var))->set__instance_4(L_1);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void TealiumCommon.TealiumConfig::.ctor(System.String,System.String,TealiumCommon.TealiumEnvironment,System.Collections.Generic.List`1<TealiumCommon.Dispatchers>,System.Collections.Generic.List`1<TealiumCommon.Collectors>,System.String,System.String,System.Nullable`1<System.Boolean>,System.String,System.String,System.String,System.String,System.String,System.Nullable`1<System.Boolean>,System.Nullable`1<System.Boolean>,System.Nullable`1<TealiumCommon.LogLevel>,System.Nullable`1<System.Boolean>,System.Nullable`1<TealiumCommon.ConsentPolicy>,TealiumCommon.ConsentExpiry,System.Nullable`1<System.Boolean>,System.Nullable`1<System.Boolean>,System.Nullable`1<System.Boolean>,System.Nullable`1<System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TealiumConfig__ctor_m7F50244E354AD246DBB0358052C6CB270CE18FC6 (TealiumConfig_t57F15E74367FE1C2622F3D0395F144F4D505F4B7 * __this, String_t* ___account0, String_t* ___profile1, TealiumEnvironment_t24AF72642DBC059461FBBF69A92B7A4EE25A7446  ___env2, List_1_t5140BA5F1B10A238CE781B1DC4039B4AFCE4E240 * ___dispatchers3, List_1_t1AF4DE87B3698887C7A6973FA2CF366D49D00A41 * ___collectors4, String_t* ___dataSource5, String_t* ___customVisitorId6, Nullable_1_t1D1CD146BFCBDC2E53E1F700889F8C5C21063EF3  ___memoryReportingEnabled7, String_t* ___overrideCollectURL8, String_t* ___overrideCollectBatchURL9, String_t* ___overrideCollectDomain10, String_t* ___overrideLibrarySettingsURL11, String_t* ___overrideTagManagementURL12, Nullable_1_t1D1CD146BFCBDC2E53E1F700889F8C5C21063EF3  ___deepLinkTrackingEnabled13, Nullable_1_t1D1CD146BFCBDC2E53E1F700889F8C5C21063EF3  ___qrTraceEnabled14, Nullable_1_tEDD6DE645137CA544DA6DFB826B36BF4C9425A28  ___logLevel15, Nullable_1_t1D1CD146BFCBDC2E53E1F700889F8C5C21063EF3  ___consentLoggingEnabled16, Nullable_1_t10B092B32DAE6088B0BC1F2903DC4B4D0A477307  ___consentPolicy17, ConsentExpiry_tF0E363E167F8B963812764554538F6BD7ABF9BC5 * ___consentExpiry18, Nullable_1_t1D1CD146BFCBDC2E53E1F700889F8C5C21063EF3  ___batchingEnabled19, Nullable_1_t1D1CD146BFCBDC2E53E1F700889F8C5C21063EF3  ___lifecycleAutotrackingEnabled20, Nullable_1_t1D1CD146BFCBDC2E53E1F700889F8C5C21063EF3  ___useRemoteLibrarySettings21, Nullable_1_t1D1CD146BFCBDC2E53E1F700889F8C5C21063EF3  ___visitorServiceEnabled22, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Converter_2__ctor_m0C7282FA6A13370BC41DECB7F55A22758C7E2B99_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Converter_2__ctor_m912E9EE293C82A94F0E88045680627CD01BB8C48_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Converter_2_t8966C243E6818DA305580ED799C4458A967FBC4B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Converter_2_t8DCD435D80605558FF0393EA8820ECC291B6130D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_ConvertAll_TisString_t_m9B58AA35146B6E87DA967CEEB7AD8AF0B526D42E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_ConvertAll_TisString_t_mFB120017498D56D7A706F6A1EB9E05F740ACB7BC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1_GetValueOrDefault_m86DD280389373DC6112C612AF57005073D7829CA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1_GetValueOrDefault_mB6AF2E00017652A7A460E421622828E15FB4F437_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1_get_HasValue_m5C68BCA359253ED7BAF57AEC0411DC539E1D52B5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1_get_HasValue_m8043104DA135F5C852621E53CEB0FD85ACD0DC68_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_U3C_ctorU3Eb__23_0_m45EB64D6EA93C3BDE4D0EFDA90B9B22982B76AE2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_U3C_ctorU3Eb__23_1_mCD65AD4FE7A3FA13BAA222CEAB1757550EB5B7CA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_t36D92B931A0CC3CAB85CB5872E3A3AD4EB480F83_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	LogLevel_tC8A9CB2FDD6BA29729D740AB210BD2214ACC9ECD  V_0;
	memset((&V_0), 0, sizeof(V_0));
	ConsentPolicy_tA405DFF59561F55C0C5C738E3ECC75B8032B6A01  V_1;
	memset((&V_1), 0, sizeof(V_1));
	Converter_2_t8DCD435D80605558FF0393EA8820ECC291B6130D * G_B2_0 = NULL;
	List_1_t5140BA5F1B10A238CE781B1DC4039B4AFCE4E240 * G_B2_1 = NULL;
	TealiumConfig_t57F15E74367FE1C2622F3D0395F144F4D505F4B7 * G_B2_2 = NULL;
	Converter_2_t8DCD435D80605558FF0393EA8820ECC291B6130D * G_B1_0 = NULL;
	List_1_t5140BA5F1B10A238CE781B1DC4039B4AFCE4E240 * G_B1_1 = NULL;
	TealiumConfig_t57F15E74367FE1C2622F3D0395F144F4D505F4B7 * G_B1_2 = NULL;
	Converter_2_t8966C243E6818DA305580ED799C4458A967FBC4B * G_B4_0 = NULL;
	List_1_t1AF4DE87B3698887C7A6973FA2CF366D49D00A41 * G_B4_1 = NULL;
	TealiumConfig_t57F15E74367FE1C2622F3D0395F144F4D505F4B7 * G_B4_2 = NULL;
	Converter_2_t8966C243E6818DA305580ED799C4458A967FBC4B * G_B3_0 = NULL;
	List_1_t1AF4DE87B3698887C7A6973FA2CF366D49D00A41 * G_B3_1 = NULL;
	TealiumConfig_t57F15E74367FE1C2622F3D0395F144F4D505F4B7 * G_B3_2 = NULL;
	TealiumConfig_t57F15E74367FE1C2622F3D0395F144F4D505F4B7 * G_B6_0 = NULL;
	TealiumConfig_t57F15E74367FE1C2622F3D0395F144F4D505F4B7 * G_B5_0 = NULL;
	String_t* G_B7_0 = NULL;
	TealiumConfig_t57F15E74367FE1C2622F3D0395F144F4D505F4B7 * G_B7_1 = NULL;
	TealiumConfig_t57F15E74367FE1C2622F3D0395F144F4D505F4B7 * G_B9_0 = NULL;
	TealiumConfig_t57F15E74367FE1C2622F3D0395F144F4D505F4B7 * G_B8_0 = NULL;
	String_t* G_B10_0 = NULL;
	TealiumConfig_t57F15E74367FE1C2622F3D0395F144F4D505F4B7 * G_B10_1 = NULL;
	TealiumConfig_t57F15E74367FE1C2622F3D0395F144F4D505F4B7 * G_B12_0 = NULL;
	TealiumConfig_t57F15E74367FE1C2622F3D0395F144F4D505F4B7 * G_B11_0 = NULL;
	Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 * G_B13_0 = NULL;
	TealiumConfig_t57F15E74367FE1C2622F3D0395F144F4D505F4B7 * G_B13_1 = NULL;
	{
		//    public TealiumConfig(
		//        string account,
		//        string profile,
		//        TealiumEnvironment env,
		//        List<Dispatchers> dispatchers,
		//        List<Collectors> collectors,
		//        // optional params
		//        string? dataSource = null,
		//        string? customVisitorId = null,
		//        bool? memoryReportingEnabled = null,
		//        string? overrideCollectURL = null,
		//        string? overrideCollectBatchURL = null,
		//        string? overrideCollectDomain = null,
		//        string? overrideLibrarySettingsURL = null,
		//        string? overrideTagManagementURL = null,
		//        bool? deepLinkTrackingEnabled = null,
		//        bool? qrTraceEnabled = null,
		//        LogLevel? logLevel = null,
		//        bool? consentLoggingEnabled = null,
		//        ConsentPolicy? consentPolicy = null,
		//        ConsentExpiry? consentExpiry = null,
		//        bool? batchingEnabled = null,
		//        bool? lifecycleAutotrackingEnabled = null,
		//        bool? useRemoteLibrarySettings = null,
		//        bool? visitorServiceEnabled = null
		// )
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		// this.account = account;
		String_t* L_0 = ___account0;
		__this->set_account_0(L_0);
		// this.profile = profile;
		String_t* L_1 = ___profile1;
		__this->set_profile_1(L_1);
		// this.environment = env.Value;
		String_t* L_2;
		L_2 = TealiumEnvironment_get_Value_m5ABEEBC4404B7A85E598D677BE066B85DB543681_inline((TealiumEnvironment_t24AF72642DBC059461FBBF69A92B7A4EE25A7446 *)(&___env2), /*hidden argument*/NULL);
		__this->set_environment_2(L_2);
		// this.dispatchers = dispatchers.ConvertAll<string>(dispatcher => dispatcher.Value);
		List_1_t5140BA5F1B10A238CE781B1DC4039B4AFCE4E240 * L_3 = ___dispatchers3;
		IL2CPP_RUNTIME_CLASS_INIT(U3CU3Ec_t36D92B931A0CC3CAB85CB5872E3A3AD4EB480F83_il2cpp_TypeInfo_var);
		Converter_2_t8DCD435D80605558FF0393EA8820ECC291B6130D * L_4 = ((U3CU3Ec_t36D92B931A0CC3CAB85CB5872E3A3AD4EB480F83_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t36D92B931A0CC3CAB85CB5872E3A3AD4EB480F83_il2cpp_TypeInfo_var))->get_U3CU3E9__23_0_1();
		Converter_2_t8DCD435D80605558FF0393EA8820ECC291B6130D * L_5 = L_4;
		G_B1_0 = L_5;
		G_B1_1 = L_3;
		G_B1_2 = __this;
		if (L_5)
		{
			G_B2_0 = L_5;
			G_B2_1 = L_3;
			G_B2_2 = __this;
			goto IL_0043;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(U3CU3Ec_t36D92B931A0CC3CAB85CB5872E3A3AD4EB480F83_il2cpp_TypeInfo_var);
		U3CU3Ec_t36D92B931A0CC3CAB85CB5872E3A3AD4EB480F83 * L_6 = ((U3CU3Ec_t36D92B931A0CC3CAB85CB5872E3A3AD4EB480F83_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t36D92B931A0CC3CAB85CB5872E3A3AD4EB480F83_il2cpp_TypeInfo_var))->get_U3CU3E9_0();
		Converter_2_t8DCD435D80605558FF0393EA8820ECC291B6130D * L_7 = (Converter_2_t8DCD435D80605558FF0393EA8820ECC291B6130D *)il2cpp_codegen_object_new(Converter_2_t8DCD435D80605558FF0393EA8820ECC291B6130D_il2cpp_TypeInfo_var);
		Converter_2__ctor_m912E9EE293C82A94F0E88045680627CD01BB8C48(L_7, L_6, (intptr_t)((intptr_t)U3CU3Ec_U3C_ctorU3Eb__23_0_m45EB64D6EA93C3BDE4D0EFDA90B9B22982B76AE2_RuntimeMethod_var), /*hidden argument*/Converter_2__ctor_m912E9EE293C82A94F0E88045680627CD01BB8C48_RuntimeMethod_var);
		Converter_2_t8DCD435D80605558FF0393EA8820ECC291B6130D * L_8 = L_7;
		((U3CU3Ec_t36D92B931A0CC3CAB85CB5872E3A3AD4EB480F83_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t36D92B931A0CC3CAB85CB5872E3A3AD4EB480F83_il2cpp_TypeInfo_var))->set_U3CU3E9__23_0_1(L_8);
		G_B2_0 = L_8;
		G_B2_1 = G_B1_1;
		G_B2_2 = G_B1_2;
	}

IL_0043:
	{
		NullCheck(G_B2_1);
		List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * L_9;
		L_9 = List_1_ConvertAll_TisString_t_m9B58AA35146B6E87DA967CEEB7AD8AF0B526D42E(G_B2_1, G_B2_0, /*hidden argument*/List_1_ConvertAll_TisString_t_m9B58AA35146B6E87DA967CEEB7AD8AF0B526D42E_RuntimeMethod_var);
		NullCheck(G_B2_2);
		G_B2_2->set_dispatchers_4(L_9);
		// this.collectors = collectors.ConvertAll<string>(collector => collector.Value);
		List_1_t1AF4DE87B3698887C7A6973FA2CF366D49D00A41 * L_10 = ___collectors4;
		IL2CPP_RUNTIME_CLASS_INIT(U3CU3Ec_t36D92B931A0CC3CAB85CB5872E3A3AD4EB480F83_il2cpp_TypeInfo_var);
		Converter_2_t8966C243E6818DA305580ED799C4458A967FBC4B * L_11 = ((U3CU3Ec_t36D92B931A0CC3CAB85CB5872E3A3AD4EB480F83_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t36D92B931A0CC3CAB85CB5872E3A3AD4EB480F83_il2cpp_TypeInfo_var))->get_U3CU3E9__23_1_2();
		Converter_2_t8966C243E6818DA305580ED799C4458A967FBC4B * L_12 = L_11;
		G_B3_0 = L_12;
		G_B3_1 = L_10;
		G_B3_2 = __this;
		if (L_12)
		{
			G_B4_0 = L_12;
			G_B4_1 = L_10;
			G_B4_2 = __this;
			goto IL_006f;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(U3CU3Ec_t36D92B931A0CC3CAB85CB5872E3A3AD4EB480F83_il2cpp_TypeInfo_var);
		U3CU3Ec_t36D92B931A0CC3CAB85CB5872E3A3AD4EB480F83 * L_13 = ((U3CU3Ec_t36D92B931A0CC3CAB85CB5872E3A3AD4EB480F83_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t36D92B931A0CC3CAB85CB5872E3A3AD4EB480F83_il2cpp_TypeInfo_var))->get_U3CU3E9_0();
		Converter_2_t8966C243E6818DA305580ED799C4458A967FBC4B * L_14 = (Converter_2_t8966C243E6818DA305580ED799C4458A967FBC4B *)il2cpp_codegen_object_new(Converter_2_t8966C243E6818DA305580ED799C4458A967FBC4B_il2cpp_TypeInfo_var);
		Converter_2__ctor_m0C7282FA6A13370BC41DECB7F55A22758C7E2B99(L_14, L_13, (intptr_t)((intptr_t)U3CU3Ec_U3C_ctorU3Eb__23_1_mCD65AD4FE7A3FA13BAA222CEAB1757550EB5B7CA_RuntimeMethod_var), /*hidden argument*/Converter_2__ctor_m0C7282FA6A13370BC41DECB7F55A22758C7E2B99_RuntimeMethod_var);
		Converter_2_t8966C243E6818DA305580ED799C4458A967FBC4B * L_15 = L_14;
		((U3CU3Ec_t36D92B931A0CC3CAB85CB5872E3A3AD4EB480F83_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t36D92B931A0CC3CAB85CB5872E3A3AD4EB480F83_il2cpp_TypeInfo_var))->set_U3CU3E9__23_1_2(L_15);
		G_B4_0 = L_15;
		G_B4_1 = G_B3_1;
		G_B4_2 = G_B3_2;
	}

IL_006f:
	{
		NullCheck(G_B4_1);
		List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * L_16;
		L_16 = List_1_ConvertAll_TisString_t_mFB120017498D56D7A706F6A1EB9E05F740ACB7BC(G_B4_1, G_B4_0, /*hidden argument*/List_1_ConvertAll_TisString_t_mFB120017498D56D7A706F6A1EB9E05F740ACB7BC_RuntimeMethod_var);
		NullCheck(G_B4_2);
		G_B4_2->set_collectors_3(L_16);
		// this.dataSource = dataSource;
		String_t* L_17 = ___dataSource5;
		__this->set_dataSource_5(L_17);
		// this.customVisitorId = customVisitorId;
		String_t* L_18 = ___customVisitorId6;
		__this->set_customVisitorId_6(L_18);
		// this.memoryReportingEnabled = memoryReportingEnabled;
		Nullable_1_t1D1CD146BFCBDC2E53E1F700889F8C5C21063EF3  L_19 = ___memoryReportingEnabled7;
		__this->set_memoryReportingEnabled_7(L_19);
		// this.overrideCollectURL = overrideCollectURL;
		String_t* L_20 = ___overrideCollectURL8;
		__this->set_overrideCollectURL_8(L_20);
		// this.overrideCollectBatchURL = overrideCollectBatchURL;
		String_t* L_21 = ___overrideCollectBatchURL9;
		__this->set_overrideCollectBatchURL_9(L_21);
		// this.overrideCollectDomain = overrideCollectDomain;
		String_t* L_22 = ___overrideCollectDomain10;
		__this->set_overrideCollectDomain_10(L_22);
		// this.overrideLibrarySettingsURL = overrideLibrarySettingsURL;
		String_t* L_23 = ___overrideLibrarySettingsURL11;
		__this->set_overrideLibrarySettingsURL_11(L_23);
		// this.overrideTagManagementURL = overrideTagManagementURL;
		String_t* L_24 = ___overrideTagManagementURL12;
		__this->set_overrideTagManagementURL_12(L_24);
		// this.deepLinkTrackingEnabled = deepLinkTrackingEnabled;
		Nullable_1_t1D1CD146BFCBDC2E53E1F700889F8C5C21063EF3  L_25 = ___deepLinkTrackingEnabled13;
		__this->set_deepLinkTrackingEnabled_13(L_25);
		// this.qrTraceEnabled = qrTraceEnabled;
		Nullable_1_t1D1CD146BFCBDC2E53E1F700889F8C5C21063EF3  L_26 = ___qrTraceEnabled14;
		__this->set_qrTraceEnabled_14(L_26);
		// this.logLevel = logLevel?.Value;
		bool L_27;
		L_27 = Nullable_1_get_HasValue_m5C68BCA359253ED7BAF57AEC0411DC539E1D52B5_inline((Nullable_1_tEDD6DE645137CA544DA6DFB826B36BF4C9425A28 *)(&___logLevel15), /*hidden argument*/Nullable_1_get_HasValue_m5C68BCA359253ED7BAF57AEC0411DC539E1D52B5_RuntimeMethod_var);
		G_B5_0 = __this;
		if (L_27)
		{
			G_B6_0 = __this;
			goto IL_00d6;
		}
	}
	{
		G_B7_0 = ((String_t*)(NULL));
		G_B7_1 = G_B5_0;
		goto IL_00e5;
	}

IL_00d6:
	{
		LogLevel_tC8A9CB2FDD6BA29729D740AB210BD2214ACC9ECD  L_28;
		L_28 = Nullable_1_GetValueOrDefault_mB6AF2E00017652A7A460E421622828E15FB4F437_inline((Nullable_1_tEDD6DE645137CA544DA6DFB826B36BF4C9425A28 *)(&___logLevel15), /*hidden argument*/Nullable_1_GetValueOrDefault_mB6AF2E00017652A7A460E421622828E15FB4F437_RuntimeMethod_var);
		V_0 = L_28;
		String_t* L_29;
		L_29 = LogLevel_get_Value_mC918DB8824B386771CA57BA448D46B86ECCAEED0_inline((LogLevel_tC8A9CB2FDD6BA29729D740AB210BD2214ACC9ECD *)(&V_0), /*hidden argument*/NULL);
		G_B7_0 = L_29;
		G_B7_1 = G_B6_0;
	}

IL_00e5:
	{
		NullCheck(G_B7_1);
		G_B7_1->set_logLevel_15(G_B7_0);
		// this.consentLoggingEnabled = consentLoggingEnabled;
		Nullable_1_t1D1CD146BFCBDC2E53E1F700889F8C5C21063EF3  L_30 = ___consentLoggingEnabled16;
		__this->set_consentLoggingEnabled_16(L_30);
		// this.consentPolicy = consentPolicy?.Value;
		bool L_31;
		L_31 = Nullable_1_get_HasValue_m8043104DA135F5C852621E53CEB0FD85ACD0DC68_inline((Nullable_1_t10B092B32DAE6088B0BC1F2903DC4B4D0A477307 *)(&___consentPolicy17), /*hidden argument*/Nullable_1_get_HasValue_m8043104DA135F5C852621E53CEB0FD85ACD0DC68_RuntimeMethod_var);
		G_B8_0 = __this;
		if (L_31)
		{
			G_B9_0 = __this;
			goto IL_00ff;
		}
	}
	{
		G_B10_0 = ((String_t*)(NULL));
		G_B10_1 = G_B8_0;
		goto IL_010e;
	}

IL_00ff:
	{
		ConsentPolicy_tA405DFF59561F55C0C5C738E3ECC75B8032B6A01  L_32;
		L_32 = Nullable_1_GetValueOrDefault_m86DD280389373DC6112C612AF57005073D7829CA_inline((Nullable_1_t10B092B32DAE6088B0BC1F2903DC4B4D0A477307 *)(&___consentPolicy17), /*hidden argument*/Nullable_1_GetValueOrDefault_m86DD280389373DC6112C612AF57005073D7829CA_RuntimeMethod_var);
		V_1 = L_32;
		String_t* L_33;
		L_33 = ConsentPolicy_get_Value_mECB55CC0D233FB6CC9865E4839457B76DDD6EB1F_inline((ConsentPolicy_tA405DFF59561F55C0C5C738E3ECC75B8032B6A01 *)(&V_1), /*hidden argument*/NULL);
		G_B10_0 = L_33;
		G_B10_1 = G_B9_0;
	}

IL_010e:
	{
		NullCheck(G_B10_1);
		G_B10_1->set_consentPolicy_17(G_B10_0);
		// this.consentExpiry = consentExpiry?.ToDictionary();
		ConsentExpiry_tF0E363E167F8B963812764554538F6BD7ABF9BC5 * L_34 = ___consentExpiry18;
		G_B11_0 = __this;
		if (L_34)
		{
			G_B12_0 = __this;
			goto IL_011b;
		}
	}
	{
		G_B13_0 = ((Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 *)(NULL));
		G_B13_1 = G_B11_0;
		goto IL_0122;
	}

IL_011b:
	{
		ConsentExpiry_tF0E363E167F8B963812764554538F6BD7ABF9BC5 * L_35 = ___consentExpiry18;
		NullCheck(L_35);
		Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 * L_36;
		L_36 = ConsentExpiry_ToDictionary_m994268DD15C0EEE496D87D9EA465146CB719EA1F(L_35, /*hidden argument*/NULL);
		G_B13_0 = L_36;
		G_B13_1 = G_B12_0;
	}

IL_0122:
	{
		NullCheck(G_B13_1);
		G_B13_1->set_consentExpiry_18(G_B13_0);
		// this.batchingEnabled = batchingEnabled;
		Nullable_1_t1D1CD146BFCBDC2E53E1F700889F8C5C21063EF3  L_37 = ___batchingEnabled19;
		__this->set_batchingEnabled_19(L_37);
		// this.lifecycleAutotrackingEnabled = lifecycleAutotrackingEnabled;
		Nullable_1_t1D1CD146BFCBDC2E53E1F700889F8C5C21063EF3  L_38 = ___lifecycleAutotrackingEnabled20;
		__this->set_lifecycleAutotrackingEnabled_20(L_38);
		// this.useRemoteLibrarySettings = useRemoteLibrarySettings;
		Nullable_1_t1D1CD146BFCBDC2E53E1F700889F8C5C21063EF3  L_39 = ___useRemoteLibrarySettings21;
		__this->set_useRemoteLibrarySettings_21(L_39);
		// this.visitorServiceEnabled = visitorServiceEnabled;
		Nullable_1_t1D1CD146BFCBDC2E53E1F700889F8C5C21063EF3  L_40 = ___visitorServiceEnabled22;
		__this->set_visitorServiceEnabled_22(L_40);
		// }
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void TealiumCommon.TealiumDispatch::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TealiumDispatch__ctor_m6ADA3A1CB9620F6BD0D2E4FD21AB32129439B72D (TealiumDispatch_tBC7A4951FD4926BB6EFF74865AF1EC9D1C6BAFB9 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Conversion methods for marshalling of: TealiumCommon.TealiumEnvironment
IL2CPP_EXTERN_C void TealiumEnvironment_t24AF72642DBC059461FBBF69A92B7A4EE25A7446_marshal_pinvoke(const TealiumEnvironment_t24AF72642DBC059461FBBF69A92B7A4EE25A7446& unmarshaled, TealiumEnvironment_t24AF72642DBC059461FBBF69A92B7A4EE25A7446_marshaled_pinvoke& marshaled)
{
	marshaled.___U3CValueU3Ek__BackingField_0 = il2cpp_codegen_marshal_string(unmarshaled.get_U3CValueU3Ek__BackingField_0());
}
IL2CPP_EXTERN_C void TealiumEnvironment_t24AF72642DBC059461FBBF69A92B7A4EE25A7446_marshal_pinvoke_back(const TealiumEnvironment_t24AF72642DBC059461FBBF69A92B7A4EE25A7446_marshaled_pinvoke& marshaled, TealiumEnvironment_t24AF72642DBC059461FBBF69A92B7A4EE25A7446& unmarshaled)
{
	unmarshaled.set_U3CValueU3Ek__BackingField_0(il2cpp_codegen_marshal_string_result(marshaled.___U3CValueU3Ek__BackingField_0));
}
// Conversion method for clean up from marshalling of: TealiumCommon.TealiumEnvironment
IL2CPP_EXTERN_C void TealiumEnvironment_t24AF72642DBC059461FBBF69A92B7A4EE25A7446_marshal_pinvoke_cleanup(TealiumEnvironment_t24AF72642DBC059461FBBF69A92B7A4EE25A7446_marshaled_pinvoke& marshaled)
{
	il2cpp_codegen_marshal_free(marshaled.___U3CValueU3Ek__BackingField_0);
	marshaled.___U3CValueU3Ek__BackingField_0 = NULL;
}
// Conversion methods for marshalling of: TealiumCommon.TealiumEnvironment
IL2CPP_EXTERN_C void TealiumEnvironment_t24AF72642DBC059461FBBF69A92B7A4EE25A7446_marshal_com(const TealiumEnvironment_t24AF72642DBC059461FBBF69A92B7A4EE25A7446& unmarshaled, TealiumEnvironment_t24AF72642DBC059461FBBF69A92B7A4EE25A7446_marshaled_com& marshaled)
{
	marshaled.___U3CValueU3Ek__BackingField_0 = il2cpp_codegen_marshal_bstring(unmarshaled.get_U3CValueU3Ek__BackingField_0());
}
IL2CPP_EXTERN_C void TealiumEnvironment_t24AF72642DBC059461FBBF69A92B7A4EE25A7446_marshal_com_back(const TealiumEnvironment_t24AF72642DBC059461FBBF69A92B7A4EE25A7446_marshaled_com& marshaled, TealiumEnvironment_t24AF72642DBC059461FBBF69A92B7A4EE25A7446& unmarshaled)
{
	unmarshaled.set_U3CValueU3Ek__BackingField_0(il2cpp_codegen_marshal_bstring_result(marshaled.___U3CValueU3Ek__BackingField_0));
}
// Conversion method for clean up from marshalling of: TealiumCommon.TealiumEnvironment
IL2CPP_EXTERN_C void TealiumEnvironment_t24AF72642DBC059461FBBF69A92B7A4EE25A7446_marshal_com_cleanup(TealiumEnvironment_t24AF72642DBC059461FBBF69A92B7A4EE25A7446_marshaled_com& marshaled)
{
	il2cpp_codegen_marshal_free_bstring(marshaled.___U3CValueU3Ek__BackingField_0);
	marshaled.___U3CValueU3Ek__BackingField_0 = NULL;
}
// System.Void TealiumCommon.TealiumEnvironment::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TealiumEnvironment__ctor_mC888043FCA56BBE8AD316D92AA291C797DCE7921 (TealiumEnvironment_t24AF72642DBC059461FBBF69A92B7A4EE25A7446 * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		// private TealiumEnvironment(string value) { Value = value; }
		String_t* L_0 = ___value0;
		TealiumEnvironment_set_Value_mF074D158F1AC98622598BBFE595B8A2D9DA45D2E_inline((TealiumEnvironment_t24AF72642DBC059461FBBF69A92B7A4EE25A7446 *)__this, L_0, /*hidden argument*/NULL);
		// private TealiumEnvironment(string value) { Value = value; }
		return;
	}
}
IL2CPP_EXTERN_C  void TealiumEnvironment__ctor_mC888043FCA56BBE8AD316D92AA291C797DCE7921_AdjustorThunk (RuntimeObject * __this, String_t* ___value0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	TealiumEnvironment_t24AF72642DBC059461FBBF69A92B7A4EE25A7446 * _thisAdjusted = reinterpret_cast<TealiumEnvironment_t24AF72642DBC059461FBBF69A92B7A4EE25A7446 *>(__this + _offset);
	TealiumEnvironment__ctor_mC888043FCA56BBE8AD316D92AA291C797DCE7921(_thisAdjusted, ___value0, method);
}
// System.String TealiumCommon.TealiumEnvironment::get_Value()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* TealiumEnvironment_get_Value_m5ABEEBC4404B7A85E598D677BE066B85DB543681 (TealiumEnvironment_t24AF72642DBC059461FBBF69A92B7A4EE25A7446 * __this, const RuntimeMethod* method)
{
	{
		// public string Value { get; set; }
		String_t* L_0 = __this->get_U3CValueU3Ek__BackingField_0();
		return L_0;
	}
}
IL2CPP_EXTERN_C  String_t* TealiumEnvironment_get_Value_m5ABEEBC4404B7A85E598D677BE066B85DB543681_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	TealiumEnvironment_t24AF72642DBC059461FBBF69A92B7A4EE25A7446 * _thisAdjusted = reinterpret_cast<TealiumEnvironment_t24AF72642DBC059461FBBF69A92B7A4EE25A7446 *>(__this + _offset);
	String_t* _returnValue;
	_returnValue = TealiumEnvironment_get_Value_m5ABEEBC4404B7A85E598D677BE066B85DB543681_inline(_thisAdjusted, method);
	return _returnValue;
}
// System.Void TealiumCommon.TealiumEnvironment::set_Value(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TealiumEnvironment_set_Value_mF074D158F1AC98622598BBFE595B8A2D9DA45D2E (TealiumEnvironment_t24AF72642DBC059461FBBF69A92B7A4EE25A7446 * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		// public string Value { get; set; }
		String_t* L_0 = ___value0;
		__this->set_U3CValueU3Ek__BackingField_0(L_0);
		return;
	}
}
IL2CPP_EXTERN_C  void TealiumEnvironment_set_Value_mF074D158F1AC98622598BBFE595B8A2D9DA45D2E_AdjustorThunk (RuntimeObject * __this, String_t* ___value0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	TealiumEnvironment_t24AF72642DBC059461FBBF69A92B7A4EE25A7446 * _thisAdjusted = reinterpret_cast<TealiumEnvironment_t24AF72642DBC059461FBBF69A92B7A4EE25A7446 *>(__this + _offset);
	TealiumEnvironment_set_Value_mF074D158F1AC98622598BBFE595B8A2D9DA45D2E_inline(_thisAdjusted, ___value0, method);
}
// TealiumCommon.TealiumEnvironment TealiumCommon.TealiumEnvironment::get_DEV()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TealiumEnvironment_t24AF72642DBC059461FBBF69A92B7A4EE25A7446  TealiumEnvironment_get_DEV_m01B13649C2BCE6AE9F2D683E033C2DCB9EA12D5A (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB8FF942E118389A9B5468029ADBFCA8D7512D496);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static TealiumEnvironment DEV { get { return new TealiumEnvironment("dev"); } }
		TealiumEnvironment_t24AF72642DBC059461FBBF69A92B7A4EE25A7446  L_0;
		memset((&L_0), 0, sizeof(L_0));
		TealiumEnvironment__ctor_mC888043FCA56BBE8AD316D92AA291C797DCE7921((&L_0), _stringLiteralB8FF942E118389A9B5468029ADBFCA8D7512D496, /*hidden argument*/NULL);
		return L_0;
	}
}
// TealiumCommon.TealiumEnvironment TealiumCommon.TealiumEnvironment::get_QA()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TealiumEnvironment_t24AF72642DBC059461FBBF69A92B7A4EE25A7446  TealiumEnvironment_get_QA_m1D10556ABDEEA2DCF9E671EC402C26207762545C (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4E50C8A435ACA2194870053CF1BEAA753D54DC79);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static TealiumEnvironment QA { get { return new TealiumEnvironment("qa"); } }
		TealiumEnvironment_t24AF72642DBC059461FBBF69A92B7A4EE25A7446  L_0;
		memset((&L_0), 0, sizeof(L_0));
		TealiumEnvironment__ctor_mC888043FCA56BBE8AD316D92AA291C797DCE7921((&L_0), _stringLiteral4E50C8A435ACA2194870053CF1BEAA753D54DC79, /*hidden argument*/NULL);
		return L_0;
	}
}
// TealiumCommon.TealiumEnvironment TealiumCommon.TealiumEnvironment::get_PROD()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TealiumEnvironment_t24AF72642DBC059461FBBF69A92B7A4EE25A7446  TealiumEnvironment_get_PROD_mE483519D0994E4032BCD4FFBD625B2B02C4ABDCB (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralAC7CABC19DF3A499E7F4F414D5A99EF246778B9D);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static TealiumEnvironment PROD { get { return new TealiumEnvironment("prod"); } }
		TealiumEnvironment_t24AF72642DBC059461FBBF69A92B7A4EE25A7446  L_0;
		memset((&L_0), 0, sizeof(L_0));
		TealiumEnvironment__ctor_mC888043FCA56BBE8AD316D92AA291C797DCE7921((&L_0), _stringLiteralAC7CABC19DF3A499E7F4F414D5A99EF246778B9D, /*hidden argument*/NULL);
		return L_0;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void TealiumCommon.TealiumEvent::.ctor(System.String,System.Collections.Generic.Dictionary`2<System.String,System.Object>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TealiumEvent__ctor_m459D01E2D5400D2B01B0F7E8CA507FD326E148C4 (TealiumEvent_t276997051BFCEBF7FAC959F860C9F4C6B34E4023 * __this, String_t* ___name0, Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 * ___dataLayer1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralEAA8D9C3445FEBFE3701DDB0406A86D63B80BB2F);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public string type = "event";
		__this->set_type_2(_stringLiteralEAA8D9C3445FEBFE3701DDB0406A86D63B80BB2F);
		// public TealiumEvent(string name, Dictionary<string, object>? dataLayer = null)
		TealiumDispatch__ctor_m6ADA3A1CB9620F6BD0D2E4FD21AB32129439B72D(__this, /*hidden argument*/NULL);
		// this.eventName = name;
		String_t* L_0 = ___name0;
		__this->set_eventName_3(L_0);
		// this.dataLayer = dataLayer;
		Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 * L_1 = ___dataLayer1;
		__this->set_dataLayer_4(L_1);
		// }
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void TealiumCommon.TealiumLogger::Log(System.String,System.String,System.String,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TealiumLogger_Log_m5812A6F33E35946AD03C87D359E3541CFF86D1D9 (String_t* ___msg0, String_t* ___methodName1, String_t* ___fileName2, int32_t ___lineNo3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral23114468D04FA2B7A2DA455B545DB914D0A3ED94);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral900D858FE9ABCD2ED2B25CD27110A78ADCC6EC6B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		s_Il2CppMethodInitialized = true;
	}
	String_t* G_B2_0 = NULL;
	int32_t G_B2_1 = 0;
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* G_B2_2 = NULL;
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* G_B2_3 = NULL;
	String_t* G_B2_4 = NULL;
	RuntimeObject * G_B2_5 = NULL;
	int32_t G_B2_6 = 0;
	int32_t G_B2_7 = 0;
	String_t* G_B1_0 = NULL;
	int32_t G_B1_1 = 0;
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* G_B1_2 = NULL;
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* G_B1_3 = NULL;
	String_t* G_B1_4 = NULL;
	RuntimeObject * G_B1_5 = NULL;
	int32_t G_B1_6 = 0;
	int32_t G_B1_7 = 0;
	String_t* G_B4_0 = NULL;
	int32_t G_B4_1 = 0;
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* G_B4_2 = NULL;
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* G_B4_3 = NULL;
	String_t* G_B4_4 = NULL;
	RuntimeObject * G_B4_5 = NULL;
	int32_t G_B4_6 = 0;
	int32_t G_B4_7 = 0;
	String_t* G_B3_0 = NULL;
	int32_t G_B3_1 = 0;
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* G_B3_2 = NULL;
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* G_B3_3 = NULL;
	String_t* G_B3_4 = NULL;
	RuntimeObject * G_B3_5 = NULL;
	int32_t G_B3_6 = 0;
	int32_t G_B3_7 = 0;
	{
		// UnityEngine.Debug.LogFormat( LogType.Log, LogOption.NoStacktrace, null, "{0}", $"{msg}" ?? "NULL" );
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_0 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)SZArrayNew(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var, (uint32_t)1);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_1 = L_0;
		String_t* L_2 = ___msg0;
		String_t* L_3 = L_2;
		G_B1_0 = L_3;
		G_B1_1 = 0;
		G_B1_2 = L_1;
		G_B1_3 = L_1;
		G_B1_4 = _stringLiteral23114468D04FA2B7A2DA455B545DB914D0A3ED94;
		G_B1_5 = NULL;
		G_B1_6 = 1;
		G_B1_7 = 3;
		if (L_3)
		{
			G_B2_0 = L_3;
			G_B2_1 = 0;
			G_B2_2 = L_1;
			G_B2_3 = L_1;
			G_B2_4 = _stringLiteral23114468D04FA2B7A2DA455B545DB914D0A3ED94;
			G_B2_5 = NULL;
			G_B2_6 = 1;
			G_B2_7 = 3;
			goto IL_001a;
		}
	}
	{
		G_B2_0 = _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
		G_B2_1 = G_B1_1;
		G_B2_2 = G_B1_2;
		G_B2_3 = G_B1_3;
		G_B2_4 = G_B1_4;
		G_B2_5 = G_B1_5;
		G_B2_6 = G_B1_6;
		G_B2_7 = G_B1_7;
	}

IL_001a:
	{
		String_t* L_4 = G_B2_0;
		G_B3_0 = L_4;
		G_B3_1 = G_B2_1;
		G_B3_2 = G_B2_2;
		G_B3_3 = G_B2_3;
		G_B3_4 = G_B2_4;
		G_B3_5 = G_B2_5;
		G_B3_6 = G_B2_6;
		G_B3_7 = G_B2_7;
		if (L_4)
		{
			G_B4_0 = L_4;
			G_B4_1 = G_B2_1;
			G_B4_2 = G_B2_2;
			G_B4_3 = G_B2_3;
			G_B4_4 = G_B2_4;
			G_B4_5 = G_B2_5;
			G_B4_6 = G_B2_6;
			G_B4_7 = G_B2_7;
			goto IL_0023;
		}
	}
	{
		G_B4_0 = _stringLiteral900D858FE9ABCD2ED2B25CD27110A78ADCC6EC6B;
		G_B4_1 = G_B3_1;
		G_B4_2 = G_B3_2;
		G_B4_3 = G_B3_3;
		G_B4_4 = G_B3_4;
		G_B4_5 = G_B3_5;
		G_B4_6 = G_B3_6;
		G_B4_7 = G_B3_7;
	}

IL_0023:
	{
		NullCheck(G_B4_2);
		ArrayElementTypeCheck (G_B4_2, G_B4_0);
		(G_B4_2)->SetAt(static_cast<il2cpp_array_size_t>(G_B4_1), (RuntimeObject *)G_B4_0);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_LogFormat_m73109637CE17FEF4B151F55297091368A1BE46E0(G_B4_7, G_B4_6, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)G_B4_5, G_B4_4, G_B4_3, /*hidden argument*/NULL);
		// }
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// TealiumUnity TealiumUnityPlugin::get_Tealium()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TealiumUnityPlugin_get_Tealium_m7BAFB8F34F51BBD6B074C55011186D85AAE687FF (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TealiumUnityPlugin_t8B3797338182C27740783841F277A92D6D40AC55_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TealiumiOS_t733CCF8E376EBE4BA5D0C61D6D01A4CE824F8BC4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (tealium == null)
		IL2CPP_RUNTIME_CLASS_INIT(TealiumUnityPlugin_t8B3797338182C27740783841F277A92D6D40AC55_il2cpp_TypeInfo_var);
		RuntimeObject* L_0 = ((TealiumUnityPlugin_t8B3797338182C27740783841F277A92D6D40AC55_StaticFields*)il2cpp_codegen_static_fields_for(TealiumUnityPlugin_t8B3797338182C27740783841F277A92D6D40AC55_il2cpp_TypeInfo_var))->get_tealium_4();
		if (L_0)
		{
			goto IL_0011;
		}
	}
	{
		// tealium = new TealiumiOS();
		TealiumiOS_t733CCF8E376EBE4BA5D0C61D6D01A4CE824F8BC4 * L_1 = (TealiumiOS_t733CCF8E376EBE4BA5D0C61D6D01A4CE824F8BC4 *)il2cpp_codegen_object_new(TealiumiOS_t733CCF8E376EBE4BA5D0C61D6D01A4CE824F8BC4_il2cpp_TypeInfo_var);
		TealiumiOS__ctor_m319377341A42A585B18118A88243DC63C8BAD535(L_1, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(TealiumUnityPlugin_t8B3797338182C27740783841F277A92D6D40AC55_il2cpp_TypeInfo_var);
		((TealiumUnityPlugin_t8B3797338182C27740783841F277A92D6D40AC55_StaticFields*)il2cpp_codegen_static_fields_for(TealiumUnityPlugin_t8B3797338182C27740783841F277A92D6D40AC55_il2cpp_TypeInfo_var))->set_tealium_4(L_1);
	}

IL_0011:
	{
		// return tealium;
		IL2CPP_RUNTIME_CLASS_INIT(TealiumUnityPlugin_t8B3797338182C27740783841F277A92D6D40AC55_il2cpp_TypeInfo_var);
		RuntimeObject* L_2 = ((TealiumUnityPlugin_t8B3797338182C27740783841F277A92D6D40AC55_StaticFields*)il2cpp_codegen_static_fields_for(TealiumUnityPlugin_t8B3797338182C27740783841F277A92D6D40AC55_il2cpp_TypeInfo_var))->get_tealium_4();
		return L_2;
	}
}
// System.Void TealiumUnityPlugin::Initialize(TealiumCommon.TealiumConfig,System.Action`1<System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TealiumUnityPlugin_Initialize_mC1170437F76E31D5884AEEE64D44D2D8C46A1987 (TealiumConfig_t57F15E74367FE1C2622F3D0395F144F4D505F4B7 * ___config0, Action_1_tCE2D770918A65CAD277C08C4E8C05385EA267E83 * ___callback1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TealiumUnityPlugin_t8B3797338182C27740783841F277A92D6D40AC55_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TealiumUnity_t738197AC1B223138623C62A1C6B1D99485B44484_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// onInitialized = callback;
		Action_1_tCE2D770918A65CAD277C08C4E8C05385EA267E83 * L_0 = ___callback1;
		IL2CPP_RUNTIME_CLASS_INIT(TealiumUnityPlugin_t8B3797338182C27740783841F277A92D6D40AC55_il2cpp_TypeInfo_var);
		((TealiumUnityPlugin_t8B3797338182C27740783841F277A92D6D40AC55_StaticFields*)il2cpp_codegen_static_fields_for(TealiumUnityPlugin_t8B3797338182C27740783841F277A92D6D40AC55_il2cpp_TypeInfo_var))->set_onInitialized_5(L_0);
		// Tealium.Initialize(config, callback);
		RuntimeObject* L_1;
		L_1 = TealiumUnityPlugin_get_Tealium_m7BAFB8F34F51BBD6B074C55011186D85AAE687FF(/*hidden argument*/NULL);
		TealiumConfig_t57F15E74367FE1C2622F3D0395F144F4D505F4B7 * L_2 = ___config0;
		Action_1_tCE2D770918A65CAD277C08C4E8C05385EA267E83 * L_3 = ___callback1;
		NullCheck(L_1);
		InterfaceActionInvoker2< TealiumConfig_t57F15E74367FE1C2622F3D0395F144F4D505F4B7 *, Action_1_tCE2D770918A65CAD277C08C4E8C05385EA267E83 * >::Invoke(0 /* System.Void TealiumUnity::Initialize(TealiumCommon.TealiumConfig,System.Action`1<System.Boolean>) */, TealiumUnity_t738197AC1B223138623C62A1C6B1D99485B44484_il2cpp_TypeInfo_var, L_1, L_2, L_3);
		// }
		return;
	}
}
// System.Void TealiumUnityPlugin::Terminate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TealiumUnityPlugin_Terminate_mD3D92D4C97E5E5DB1B0C7A0C379E3BD3B3DC6D8E (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TealiumUnityPlugin_t8B3797338182C27740783841F277A92D6D40AC55_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TealiumUnity_t738197AC1B223138623C62A1C6B1D99485B44484_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static void Terminate() => Tealium.Terminate();
		IL2CPP_RUNTIME_CLASS_INIT(TealiumUnityPlugin_t8B3797338182C27740783841F277A92D6D40AC55_il2cpp_TypeInfo_var);
		RuntimeObject* L_0;
		L_0 = TealiumUnityPlugin_get_Tealium_m7BAFB8F34F51BBD6B074C55011186D85AAE687FF(/*hidden argument*/NULL);
		NullCheck(L_0);
		InterfaceActionInvoker0::Invoke(1 /* System.Void TealiumUnity::Terminate() */, TealiumUnity_t738197AC1B223138623C62A1C6B1D99485B44484_il2cpp_TypeInfo_var, L_0);
		return;
	}
}
// System.Void TealiumUnityPlugin::Track(TealiumCommon.TealiumDispatch)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TealiumUnityPlugin_Track_m4945DD18B1A6F6BE4E8588AF259A20C18A7BA7C0 (TealiumDispatch_tBC7A4951FD4926BB6EFF74865AF1EC9D1C6BAFB9 * ___dispatch0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TealiumUnityPlugin_t8B3797338182C27740783841F277A92D6D40AC55_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TealiumUnity_t738197AC1B223138623C62A1C6B1D99485B44484_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static void Track(TealiumDispatch dispatch) => Tealium.Track(dispatch);
		IL2CPP_RUNTIME_CLASS_INIT(TealiumUnityPlugin_t8B3797338182C27740783841F277A92D6D40AC55_il2cpp_TypeInfo_var);
		RuntimeObject* L_0;
		L_0 = TealiumUnityPlugin_get_Tealium_m7BAFB8F34F51BBD6B074C55011186D85AAE687FF(/*hidden argument*/NULL);
		TealiumDispatch_tBC7A4951FD4926BB6EFF74865AF1EC9D1C6BAFB9 * L_1 = ___dispatch0;
		NullCheck(L_0);
		InterfaceActionInvoker1< TealiumDispatch_tBC7A4951FD4926BB6EFF74865AF1EC9D1C6BAFB9 * >::Invoke(2 /* System.Void TealiumUnity::Track(TealiumCommon.TealiumDispatch) */, TealiumUnity_t738197AC1B223138623C62A1C6B1D99485B44484_il2cpp_TypeInfo_var, L_0, L_1);
		return;
	}
}
// System.Void TealiumUnityPlugin::AddToDataLayer(System.Collections.Generic.Dictionary`2<System.String,System.Object>,TealiumCommon.Expiry)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TealiumUnityPlugin_AddToDataLayer_m6C640C8663B2200294472401BDEE66152B00F2B8 (Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 * ___data0, Expiry_tCC1CF50318A9D2722F63B5E5842DCD2D0FCA8137  ___expiry1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TealiumUnityPlugin_t8B3797338182C27740783841F277A92D6D40AC55_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TealiumUnity_t738197AC1B223138623C62A1C6B1D99485B44484_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static void AddToDataLayer(Dictionary<string, object> data, Expiry expiry) => Tealium.AddToDataLayer(data, expiry);
		IL2CPP_RUNTIME_CLASS_INIT(TealiumUnityPlugin_t8B3797338182C27740783841F277A92D6D40AC55_il2cpp_TypeInfo_var);
		RuntimeObject* L_0;
		L_0 = TealiumUnityPlugin_get_Tealium_m7BAFB8F34F51BBD6B074C55011186D85AAE687FF(/*hidden argument*/NULL);
		Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 * L_1 = ___data0;
		Expiry_tCC1CF50318A9D2722F63B5E5842DCD2D0FCA8137  L_2 = ___expiry1;
		NullCheck(L_0);
		InterfaceActionInvoker2< Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 *, Expiry_tCC1CF50318A9D2722F63B5E5842DCD2D0FCA8137  >::Invoke(3 /* System.Void TealiumUnity::AddToDataLayer(System.Collections.Generic.Dictionary`2<System.String,System.Object>,TealiumCommon.Expiry) */, TealiumUnity_t738197AC1B223138623C62A1C6B1D99485B44484_il2cpp_TypeInfo_var, L_0, L_1, L_2);
		return;
	}
}
// System.Object TealiumUnityPlugin::GetFromDataLayer(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * TealiumUnityPlugin_GetFromDataLayer_mBEA44D2FFA79ACE3160C99D1E79AE45E56C8850F (String_t* ___key0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TealiumUnityPlugin_t8B3797338182C27740783841F277A92D6D40AC55_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TealiumUnity_t738197AC1B223138623C62A1C6B1D99485B44484_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static object? GetFromDataLayer(string key) => Tealium.GetFromDataLayer(key);
		IL2CPP_RUNTIME_CLASS_INIT(TealiumUnityPlugin_t8B3797338182C27740783841F277A92D6D40AC55_il2cpp_TypeInfo_var);
		RuntimeObject* L_0;
		L_0 = TealiumUnityPlugin_get_Tealium_m7BAFB8F34F51BBD6B074C55011186D85AAE687FF(/*hidden argument*/NULL);
		String_t* L_1 = ___key0;
		NullCheck(L_0);
		RuntimeObject * L_2;
		L_2 = InterfaceFuncInvoker1< RuntimeObject *, String_t* >::Invoke(4 /* System.Object TealiumUnity::GetFromDataLayer(System.String) */, TealiumUnity_t738197AC1B223138623C62A1C6B1D99485B44484_il2cpp_TypeInfo_var, L_0, L_1);
		return L_2;
	}
}
// System.Void TealiumUnityPlugin::RemoveFromDataLayer(System.Collections.Generic.List`1<System.String>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TealiumUnityPlugin_RemoveFromDataLayer_mC2CD5532E4618E7D5B686413D5500125077FBAA9 (List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * ___keys0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TealiumUnityPlugin_t8B3797338182C27740783841F277A92D6D40AC55_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TealiumUnity_t738197AC1B223138623C62A1C6B1D99485B44484_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static void RemoveFromDataLayer(List<string> keys) => Tealium.RemoveFromDataLayer(keys);
		IL2CPP_RUNTIME_CLASS_INIT(TealiumUnityPlugin_t8B3797338182C27740783841F277A92D6D40AC55_il2cpp_TypeInfo_var);
		RuntimeObject* L_0;
		L_0 = TealiumUnityPlugin_get_Tealium_m7BAFB8F34F51BBD6B074C55011186D85AAE687FF(/*hidden argument*/NULL);
		List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * L_1 = ___keys0;
		NullCheck(L_0);
		InterfaceActionInvoker1< List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * >::Invoke(5 /* System.Void TealiumUnity::RemoveFromDataLayer(System.Collections.Generic.List`1<System.String>) */, TealiumUnity_t738197AC1B223138623C62A1C6B1D99485B44484_il2cpp_TypeInfo_var, L_0, L_1);
		return;
	}
}
// System.Void TealiumUnityPlugin::SetConsentStatus(TealiumCommon.ConsentStatus)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TealiumUnityPlugin_SetConsentStatus_m4E9297C7BD753F9C885D250E3EF33E649B44960E (ConsentStatus_t6263FFF5C886922D62B1DDC450EFE8CE2036F101  ___status0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TealiumUnityPlugin_t8B3797338182C27740783841F277A92D6D40AC55_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TealiumUnity_t738197AC1B223138623C62A1C6B1D99485B44484_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static void SetConsentStatus(ConsentStatus status) => Tealium.SetConsentStatus(status);
		IL2CPP_RUNTIME_CLASS_INIT(TealiumUnityPlugin_t8B3797338182C27740783841F277A92D6D40AC55_il2cpp_TypeInfo_var);
		RuntimeObject* L_0;
		L_0 = TealiumUnityPlugin_get_Tealium_m7BAFB8F34F51BBD6B074C55011186D85AAE687FF(/*hidden argument*/NULL);
		ConsentStatus_t6263FFF5C886922D62B1DDC450EFE8CE2036F101  L_1 = ___status0;
		NullCheck(L_0);
		InterfaceActionInvoker1< ConsentStatus_t6263FFF5C886922D62B1DDC450EFE8CE2036F101  >::Invoke(6 /* System.Void TealiumUnity::SetConsentStatus(TealiumCommon.ConsentStatus) */, TealiumUnity_t738197AC1B223138623C62A1C6B1D99485B44484_il2cpp_TypeInfo_var, L_0, L_1);
		return;
	}
}
// TealiumCommon.ConsentStatus TealiumUnityPlugin::GetConsentStatus()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ConsentStatus_t6263FFF5C886922D62B1DDC450EFE8CE2036F101  TealiumUnityPlugin_GetConsentStatus_m4ED89DDE07DD167C649F2C5D605BF2F17A35BF3B (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TealiumUnityPlugin_t8B3797338182C27740783841F277A92D6D40AC55_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TealiumUnity_t738197AC1B223138623C62A1C6B1D99485B44484_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static ConsentStatus GetConsentStatus() => Tealium.GetConsentStatus();
		IL2CPP_RUNTIME_CLASS_INIT(TealiumUnityPlugin_t8B3797338182C27740783841F277A92D6D40AC55_il2cpp_TypeInfo_var);
		RuntimeObject* L_0;
		L_0 = TealiumUnityPlugin_get_Tealium_m7BAFB8F34F51BBD6B074C55011186D85AAE687FF(/*hidden argument*/NULL);
		NullCheck(L_0);
		ConsentStatus_t6263FFF5C886922D62B1DDC450EFE8CE2036F101  L_1;
		L_1 = InterfaceFuncInvoker0< ConsentStatus_t6263FFF5C886922D62B1DDC450EFE8CE2036F101  >::Invoke(7 /* TealiumCommon.ConsentStatus TealiumUnity::GetConsentStatus() */, TealiumUnity_t738197AC1B223138623C62A1C6B1D99485B44484_il2cpp_TypeInfo_var, L_0);
		return L_1;
	}
}
// System.Void TealiumUnityPlugin::SetConsentCategories(System.Collections.Generic.List`1<TealiumCommon.ConsentCategories>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TealiumUnityPlugin_SetConsentCategories_m895C29657EC9CC7201188BC1C1D465F68D28035A (List_1_tB719F9AEA1042BBCF17CC50DC1881550E74D3695 * ___categories0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TealiumUnityPlugin_t8B3797338182C27740783841F277A92D6D40AC55_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TealiumUnity_t738197AC1B223138623C62A1C6B1D99485B44484_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static void SetConsentCategories(List<ConsentCategories> categories) => Tealium.SetConsentCategories(categories);
		IL2CPP_RUNTIME_CLASS_INIT(TealiumUnityPlugin_t8B3797338182C27740783841F277A92D6D40AC55_il2cpp_TypeInfo_var);
		RuntimeObject* L_0;
		L_0 = TealiumUnityPlugin_get_Tealium_m7BAFB8F34F51BBD6B074C55011186D85AAE687FF(/*hidden argument*/NULL);
		List_1_tB719F9AEA1042BBCF17CC50DC1881550E74D3695 * L_1 = ___categories0;
		NullCheck(L_0);
		InterfaceActionInvoker1< List_1_tB719F9AEA1042BBCF17CC50DC1881550E74D3695 * >::Invoke(8 /* System.Void TealiumUnity::SetConsentCategories(System.Collections.Generic.List`1<TealiumCommon.ConsentCategories>) */, TealiumUnity_t738197AC1B223138623C62A1C6B1D99485B44484_il2cpp_TypeInfo_var, L_0, L_1);
		return;
	}
}
// System.Collections.Generic.List`1<TealiumCommon.ConsentCategories> TealiumUnityPlugin::GetConsentCategories()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_tB719F9AEA1042BBCF17CC50DC1881550E74D3695 * TealiumUnityPlugin_GetConsentCategories_m262C3AE200DF905A452E6F6E53713DC1BB083939 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TealiumUnityPlugin_t8B3797338182C27740783841F277A92D6D40AC55_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TealiumUnity_t738197AC1B223138623C62A1C6B1D99485B44484_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static List<ConsentCategories> GetConsentCategories() => Tealium.GetConsentCategories();
		IL2CPP_RUNTIME_CLASS_INIT(TealiumUnityPlugin_t8B3797338182C27740783841F277A92D6D40AC55_il2cpp_TypeInfo_var);
		RuntimeObject* L_0;
		L_0 = TealiumUnityPlugin_get_Tealium_m7BAFB8F34F51BBD6B074C55011186D85AAE687FF(/*hidden argument*/NULL);
		NullCheck(L_0);
		List_1_tB719F9AEA1042BBCF17CC50DC1881550E74D3695 * L_1;
		L_1 = InterfaceFuncInvoker0< List_1_tB719F9AEA1042BBCF17CC50DC1881550E74D3695 * >::Invoke(9 /* System.Collections.Generic.List`1<TealiumCommon.ConsentCategories> TealiumUnity::GetConsentCategories() */, TealiumUnity_t738197AC1B223138623C62A1C6B1D99485B44484_il2cpp_TypeInfo_var, L_0);
		return L_1;
	}
}
// System.Void TealiumUnityPlugin::AddRemoteCommand(System.String,System.Action`1<System.Collections.Generic.Dictionary`2<System.String,System.Object>>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TealiumUnityPlugin_AddRemoteCommand_m3F239C3BA6183D45E9DB9E5CBE450B8F2C3D1A6A (String_t* ___id0, Action_1_t6B2EAA2D3491CBA6FEF1ECDF624EEF00DFD194C1 * ___callback1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_set_Item_m4A823B95FF63222C99CEB2CEA5D2B9C72159CB22_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TealiumUnityPlugin_t8B3797338182C27740783841F277A92D6D40AC55_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TealiumUnity_t738197AC1B223138623C62A1C6B1D99485B44484_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// onRemoteCommandCompletionCallbacks[id] = callback;
		IL2CPP_RUNTIME_CLASS_INIT(TealiumUnityPlugin_t8B3797338182C27740783841F277A92D6D40AC55_il2cpp_TypeInfo_var);
		Dictionary_2_tA582BF436674B8CBA45DA2033E1A98F298DBADA9 * L_0 = ((TealiumUnityPlugin_t8B3797338182C27740783841F277A92D6D40AC55_StaticFields*)il2cpp_codegen_static_fields_for(TealiumUnityPlugin_t8B3797338182C27740783841F277A92D6D40AC55_il2cpp_TypeInfo_var))->get_onRemoteCommandCompletionCallbacks_6();
		String_t* L_1 = ___id0;
		Action_1_t6B2EAA2D3491CBA6FEF1ECDF624EEF00DFD194C1 * L_2 = ___callback1;
		NullCheck(L_0);
		Dictionary_2_set_Item_m4A823B95FF63222C99CEB2CEA5D2B9C72159CB22(L_0, L_1, L_2, /*hidden argument*/Dictionary_2_set_Item_m4A823B95FF63222C99CEB2CEA5D2B9C72159CB22_RuntimeMethod_var);
		// Tealium.AddRemoteCommand(id, callback);
		RuntimeObject* L_3;
		L_3 = TealiumUnityPlugin_get_Tealium_m7BAFB8F34F51BBD6B074C55011186D85AAE687FF(/*hidden argument*/NULL);
		String_t* L_4 = ___id0;
		Action_1_t6B2EAA2D3491CBA6FEF1ECDF624EEF00DFD194C1 * L_5 = ___callback1;
		NullCheck(L_3);
		InterfaceActionInvoker2< String_t*, Action_1_t6B2EAA2D3491CBA6FEF1ECDF624EEF00DFD194C1 * >::Invoke(10 /* System.Void TealiumUnity::AddRemoteCommand(System.String,System.Action`1<System.Collections.Generic.Dictionary`2<System.String,System.Object>>) */, TealiumUnity_t738197AC1B223138623C62A1C6B1D99485B44484_il2cpp_TypeInfo_var, L_3, L_4, L_5);
		// }
		return;
	}
}
// System.Void TealiumUnityPlugin::RemoveRemoteCommand(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TealiumUnityPlugin_RemoveRemoteCommand_mE179D943A224A947DF3BDF89C8748833E0513184 (String_t* ___id0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_Remove_m0D984C0C6C1ABE13FBFD0300F1BE325115995A15_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TealiumUnityPlugin_t8B3797338182C27740783841F277A92D6D40AC55_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TealiumUnity_t738197AC1B223138623C62A1C6B1D99485B44484_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// onRemoteCommandCompletionCallbacks.Remove(id);
		IL2CPP_RUNTIME_CLASS_INIT(TealiumUnityPlugin_t8B3797338182C27740783841F277A92D6D40AC55_il2cpp_TypeInfo_var);
		Dictionary_2_tA582BF436674B8CBA45DA2033E1A98F298DBADA9 * L_0 = ((TealiumUnityPlugin_t8B3797338182C27740783841F277A92D6D40AC55_StaticFields*)il2cpp_codegen_static_fields_for(TealiumUnityPlugin_t8B3797338182C27740783841F277A92D6D40AC55_il2cpp_TypeInfo_var))->get_onRemoteCommandCompletionCallbacks_6();
		String_t* L_1 = ___id0;
		NullCheck(L_0);
		bool L_2;
		L_2 = Dictionary_2_Remove_m0D984C0C6C1ABE13FBFD0300F1BE325115995A15(L_0, L_1, /*hidden argument*/Dictionary_2_Remove_m0D984C0C6C1ABE13FBFD0300F1BE325115995A15_RuntimeMethod_var);
		// Tealium.RemoveRemoteCommand(id);
		RuntimeObject* L_3;
		L_3 = TealiumUnityPlugin_get_Tealium_m7BAFB8F34F51BBD6B074C55011186D85AAE687FF(/*hidden argument*/NULL);
		String_t* L_4 = ___id0;
		NullCheck(L_3);
		InterfaceActionInvoker1< String_t* >::Invoke(11 /* System.Void TealiumUnity::RemoveRemoteCommand(System.String) */, TealiumUnity_t738197AC1B223138623C62A1C6B1D99485B44484_il2cpp_TypeInfo_var, L_3, L_4);
		// }
		return;
	}
}
// System.Void TealiumUnityPlugin::JoinTrace(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TealiumUnityPlugin_JoinTrace_mCACF842FBBC6FF99E5F60AED57F7698D3CC41257 (String_t* ___id0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TealiumUnityPlugin_t8B3797338182C27740783841F277A92D6D40AC55_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TealiumUnity_t738197AC1B223138623C62A1C6B1D99485B44484_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static void JoinTrace(string id) => Tealium.JoinTrace(id);
		IL2CPP_RUNTIME_CLASS_INIT(TealiumUnityPlugin_t8B3797338182C27740783841F277A92D6D40AC55_il2cpp_TypeInfo_var);
		RuntimeObject* L_0;
		L_0 = TealiumUnityPlugin_get_Tealium_m7BAFB8F34F51BBD6B074C55011186D85AAE687FF(/*hidden argument*/NULL);
		String_t* L_1 = ___id0;
		NullCheck(L_0);
		InterfaceActionInvoker1< String_t* >::Invoke(12 /* System.Void TealiumUnity::JoinTrace(System.String) */, TealiumUnity_t738197AC1B223138623C62A1C6B1D99485B44484_il2cpp_TypeInfo_var, L_0, L_1);
		return;
	}
}
// System.Void TealiumUnityPlugin::LeaveTrace()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TealiumUnityPlugin_LeaveTrace_mC4CE772655E431F23485E42DED0447FC9208F476 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TealiumUnityPlugin_t8B3797338182C27740783841F277A92D6D40AC55_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TealiumUnity_t738197AC1B223138623C62A1C6B1D99485B44484_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static void LeaveTrace() => Tealium.LeaveTrace();
		IL2CPP_RUNTIME_CLASS_INIT(TealiumUnityPlugin_t8B3797338182C27740783841F277A92D6D40AC55_il2cpp_TypeInfo_var);
		RuntimeObject* L_0;
		L_0 = TealiumUnityPlugin_get_Tealium_m7BAFB8F34F51BBD6B074C55011186D85AAE687FF(/*hidden argument*/NULL);
		NullCheck(L_0);
		InterfaceActionInvoker0::Invoke(13 /* System.Void TealiumUnity::LeaveTrace() */, TealiumUnity_t738197AC1B223138623C62A1C6B1D99485B44484_il2cpp_TypeInfo_var, L_0);
		return;
	}
}
// System.Void TealiumUnityPlugin::SetVisitorServiceListener(System.Action`1<System.Collections.Generic.Dictionary`2<System.String,System.Object>>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TealiumUnityPlugin_SetVisitorServiceListener_m688A99C59818AAB79F24AC7FFA51FC5183BA44CC (Action_1_t6B2EAA2D3491CBA6FEF1ECDF624EEF00DFD194C1 * ___callback0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TealiumUnityPlugin_t8B3797338182C27740783841F277A92D6D40AC55_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TealiumUnity_t738197AC1B223138623C62A1C6B1D99485B44484_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// onVisitorServiceDidUpdate = callback;
		Action_1_t6B2EAA2D3491CBA6FEF1ECDF624EEF00DFD194C1 * L_0 = ___callback0;
		IL2CPP_RUNTIME_CLASS_INIT(TealiumUnityPlugin_t8B3797338182C27740783841F277A92D6D40AC55_il2cpp_TypeInfo_var);
		((TealiumUnityPlugin_t8B3797338182C27740783841F277A92D6D40AC55_StaticFields*)il2cpp_codegen_static_fields_for(TealiumUnityPlugin_t8B3797338182C27740783841F277A92D6D40AC55_il2cpp_TypeInfo_var))->set_onVisitorServiceDidUpdate_7(L_0);
		// Tealium.SetVisitorServiceListener(callback);
		RuntimeObject* L_1;
		L_1 = TealiumUnityPlugin_get_Tealium_m7BAFB8F34F51BBD6B074C55011186D85AAE687FF(/*hidden argument*/NULL);
		Action_1_t6B2EAA2D3491CBA6FEF1ECDF624EEF00DFD194C1 * L_2 = ___callback0;
		NullCheck(L_1);
		InterfaceActionInvoker1< Action_1_t6B2EAA2D3491CBA6FEF1ECDF624EEF00DFD194C1 * >::Invoke(15 /* System.Void TealiumUnity::SetVisitorServiceListener(System.Action`1<System.Collections.Generic.Dictionary`2<System.String,System.Object>>) */, TealiumUnity_t738197AC1B223138623C62A1C6B1D99485B44484_il2cpp_TypeInfo_var, L_1, L_2);
		// }
		return;
	}
}
// System.Void TealiumUnityPlugin::SetConsentExpiryListener(System.Action)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TealiumUnityPlugin_SetConsentExpiryListener_m3E19229CEE1078F808AFE67C0C06DE8E21041108 (Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * ___callback0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TealiumUnityPlugin_t8B3797338182C27740783841F277A92D6D40AC55_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TealiumUnity_t738197AC1B223138623C62A1C6B1D99485B44484_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// onConsentExpiration = callback;
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_0 = ___callback0;
		IL2CPP_RUNTIME_CLASS_INIT(TealiumUnityPlugin_t8B3797338182C27740783841F277A92D6D40AC55_il2cpp_TypeInfo_var);
		((TealiumUnityPlugin_t8B3797338182C27740783841F277A92D6D40AC55_StaticFields*)il2cpp_codegen_static_fields_for(TealiumUnityPlugin_t8B3797338182C27740783841F277A92D6D40AC55_il2cpp_TypeInfo_var))->set_onConsentExpiration_8(L_0);
		// Tealium.SetConsentExpiryListener(callback);
		RuntimeObject* L_1;
		L_1 = TealiumUnityPlugin_get_Tealium_m7BAFB8F34F51BBD6B074C55011186D85AAE687FF(/*hidden argument*/NULL);
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_2 = ___callback0;
		NullCheck(L_1);
		InterfaceActionInvoker1< Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * >::Invoke(16 /* System.Void TealiumUnity::SetConsentExpiryListener(System.Action) */, TealiumUnity_t738197AC1B223138623C62A1C6B1D99485B44484_il2cpp_TypeInfo_var, L_1, L_2);
		// }
		return;
	}
}
// System.String TealiumUnityPlugin::GetVisitorId()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* TealiumUnityPlugin_GetVisitorId_m9C1749E5982051FA48C019FAB1AE3A4E03F00A35 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TealiumUnityPlugin_t8B3797338182C27740783841F277A92D6D40AC55_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TealiumUnity_t738197AC1B223138623C62A1C6B1D99485B44484_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static string? GetVisitorId() => Tealium.GetVisitorId();
		IL2CPP_RUNTIME_CLASS_INIT(TealiumUnityPlugin_t8B3797338182C27740783841F277A92D6D40AC55_il2cpp_TypeInfo_var);
		RuntimeObject* L_0;
		L_0 = TealiumUnityPlugin_get_Tealium_m7BAFB8F34F51BBD6B074C55011186D85AAE687FF(/*hidden argument*/NULL);
		NullCheck(L_0);
		String_t* L_1;
		L_1 = InterfaceFuncInvoker0< String_t* >::Invoke(14 /* System.String TealiumUnity::GetVisitorId() */, TealiumUnity_t738197AC1B223138623C62A1C6B1D99485B44484_il2cpp_TypeInfo_var, L_0);
		return L_1;
	}
}
// System.Void TealiumUnityPlugin::OnInitialized(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TealiumUnityPlugin_OnInitialized_m3EF6AF695ECED304D06CEE68BE597CB46473885A (bool ___success0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_Invoke_m95E5C9FC67F7B0BDC3CD5E00AC5D4C8A00C97AC5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TealiumUnityPlugin_t8B3797338182C27740783841F277A92D6D40AC55_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (onInitialized != null)
		IL2CPP_RUNTIME_CLASS_INIT(TealiumUnityPlugin_t8B3797338182C27740783841F277A92D6D40AC55_il2cpp_TypeInfo_var);
		Action_1_tCE2D770918A65CAD277C08C4E8C05385EA267E83 * L_0 = ((TealiumUnityPlugin_t8B3797338182C27740783841F277A92D6D40AC55_StaticFields*)il2cpp_codegen_static_fields_for(TealiumUnityPlugin_t8B3797338182C27740783841F277A92D6D40AC55_il2cpp_TypeInfo_var))->get_onInitialized_5();
		if (!L_0)
		{
			goto IL_0012;
		}
	}
	{
		// onInitialized(success);
		IL2CPP_RUNTIME_CLASS_INIT(TealiumUnityPlugin_t8B3797338182C27740783841F277A92D6D40AC55_il2cpp_TypeInfo_var);
		Action_1_tCE2D770918A65CAD277C08C4E8C05385EA267E83 * L_1 = ((TealiumUnityPlugin_t8B3797338182C27740783841F277A92D6D40AC55_StaticFields*)il2cpp_codegen_static_fields_for(TealiumUnityPlugin_t8B3797338182C27740783841F277A92D6D40AC55_il2cpp_TypeInfo_var))->get_onInitialized_5();
		bool L_2 = ___success0;
		NullCheck(L_1);
		Action_1_Invoke_m95E5C9FC67F7B0BDC3CD5E00AC5D4C8A00C97AC5(L_1, L_2, /*hidden argument*/Action_1_Invoke_m95E5C9FC67F7B0BDC3CD5E00AC5D4C8A00C97AC5_RuntimeMethod_var);
	}

IL_0012:
	{
		// }
		return;
	}
}
// System.Void TealiumUnityPlugin::OnRemoteCommandCompletion(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TealiumUnityPlugin_OnRemoteCommandCompletion_mB3D09BD131A2E5EDDA6A0862CD7822B6A031F00C (String_t* ___payload0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_Invoke_m761F631FCAC3E0A9D38C7F2D6035B687B9FD7BE2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Item_m4360B651F20BDDD67A015E3975308D36D156FE06_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Item_m88AA4580D695AEA212B0DF17D8B55C98CF3B624D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonConvert_DeserializeObject_TisDictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399_m9C72B9A7CA671CB0DAE02CAE6B37E464873D87E6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonConvert_t046ADD1F0B1F4BD3323ABEE6BA9E41C189BDC21A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TealiumUnityPlugin_t8B3797338182C27740783841F277A92D6D40AC55_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral07756FCF72584F7AFE92F5DB492B5516EC1E5F96);
		s_Il2CppMethodInitialized = true;
	}
	Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 * V_0 = NULL;
	String_t* V_1 = NULL;
	{
		// Dictionary<string, object> decodedPayload = JsonConvert.DeserializeObject<Dictionary<string, object>>(payload);
		String_t* L_0 = ___payload0;
		IL2CPP_RUNTIME_CLASS_INIT(JsonConvert_t046ADD1F0B1F4BD3323ABEE6BA9E41C189BDC21A_il2cpp_TypeInfo_var);
		Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 * L_1;
		L_1 = JsonConvert_DeserializeObject_TisDictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399_m9C72B9A7CA671CB0DAE02CAE6B37E464873D87E6(L_0, /*hidden argument*/JsonConvert_DeserializeObject_TisDictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399_m9C72B9A7CA671CB0DAE02CAE6B37E464873D87E6_RuntimeMethod_var);
		// Dictionary<string, object> finalPayload = ConvertValuesToCollections(decodedPayload);
		IL2CPP_RUNTIME_CLASS_INIT(TealiumUnityPlugin_t8B3797338182C27740783841F277A92D6D40AC55_il2cpp_TypeInfo_var);
		Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 * L_2;
		L_2 = TealiumUnityPlugin_ConvertValuesToCollections_mA5295D0CB3019841397ABA2DD64635DA8F280877(L_1, /*hidden argument*/NULL);
		V_0 = L_2;
		// string? commandId = (string)finalPayload["command_id"];
		Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 * L_3 = V_0;
		NullCheck(L_3);
		RuntimeObject * L_4;
		L_4 = Dictionary_2_get_Item_m88AA4580D695AEA212B0DF17D8B55C98CF3B624D(L_3, _stringLiteral07756FCF72584F7AFE92F5DB492B5516EC1E5F96, /*hidden argument*/Dictionary_2_get_Item_m88AA4580D695AEA212B0DF17D8B55C98CF3B624D_RuntimeMethod_var);
		V_1 = ((String_t*)CastclassSealed((RuntimeObject*)L_4, String_t_il2cpp_TypeInfo_var));
		// if (commandId != null && onRemoteCommandCompletionCallbacks[commandId] != null)
		String_t* L_5 = V_1;
		if (!L_5)
		{
			goto IL_003e;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(TealiumUnityPlugin_t8B3797338182C27740783841F277A92D6D40AC55_il2cpp_TypeInfo_var);
		Dictionary_2_tA582BF436674B8CBA45DA2033E1A98F298DBADA9 * L_6 = ((TealiumUnityPlugin_t8B3797338182C27740783841F277A92D6D40AC55_StaticFields*)il2cpp_codegen_static_fields_for(TealiumUnityPlugin_t8B3797338182C27740783841F277A92D6D40AC55_il2cpp_TypeInfo_var))->get_onRemoteCommandCompletionCallbacks_6();
		String_t* L_7 = V_1;
		NullCheck(L_6);
		Action_1_t6B2EAA2D3491CBA6FEF1ECDF624EEF00DFD194C1 * L_8;
		L_8 = Dictionary_2_get_Item_m4360B651F20BDDD67A015E3975308D36D156FE06(L_6, L_7, /*hidden argument*/Dictionary_2_get_Item_m4360B651F20BDDD67A015E3975308D36D156FE06_RuntimeMethod_var);
		if (!L_8)
		{
			goto IL_003e;
		}
	}
	{
		// Action<Dictionary<string, object>> callback = onRemoteCommandCompletionCallbacks[commandId];
		IL2CPP_RUNTIME_CLASS_INIT(TealiumUnityPlugin_t8B3797338182C27740783841F277A92D6D40AC55_il2cpp_TypeInfo_var);
		Dictionary_2_tA582BF436674B8CBA45DA2033E1A98F298DBADA9 * L_9 = ((TealiumUnityPlugin_t8B3797338182C27740783841F277A92D6D40AC55_StaticFields*)il2cpp_codegen_static_fields_for(TealiumUnityPlugin_t8B3797338182C27740783841F277A92D6D40AC55_il2cpp_TypeInfo_var))->get_onRemoteCommandCompletionCallbacks_6();
		String_t* L_10 = V_1;
		NullCheck(L_9);
		Action_1_t6B2EAA2D3491CBA6FEF1ECDF624EEF00DFD194C1 * L_11;
		L_11 = Dictionary_2_get_Item_m4360B651F20BDDD67A015E3975308D36D156FE06(L_9, L_10, /*hidden argument*/Dictionary_2_get_Item_m4360B651F20BDDD67A015E3975308D36D156FE06_RuntimeMethod_var);
		// callback(finalPayload);
		Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 * L_12 = V_0;
		NullCheck(L_11);
		Action_1_Invoke_m761F631FCAC3E0A9D38C7F2D6035B687B9FD7BE2(L_11, L_12, /*hidden argument*/Action_1_Invoke_m761F631FCAC3E0A9D38C7F2D6035B687B9FD7BE2_RuntimeMethod_var);
	}

IL_003e:
	{
		// }
		return;
	}
}
// System.Void TealiumUnityPlugin::OnVisitorServiceUpdate(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TealiumUnityPlugin_OnVisitorServiceUpdate_m1A6C692F0799B188F8FBF219808CE9A41059864A (String_t* ___payload0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_Invoke_m761F631FCAC3E0A9D38C7F2D6035B687B9FD7BE2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonConvert_DeserializeObject_TisDictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399_m9C72B9A7CA671CB0DAE02CAE6B37E464873D87E6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonConvert_t046ADD1F0B1F4BD3323ABEE6BA9E41C189BDC21A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TealiumUnityPlugin_t8B3797338182C27740783841F277A92D6D40AC55_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 * V_0 = NULL;
	{
		// Dictionary<string, object> decodedPayload = JsonConvert.DeserializeObject<Dictionary<string, object>>(payload);
		String_t* L_0 = ___payload0;
		IL2CPP_RUNTIME_CLASS_INIT(JsonConvert_t046ADD1F0B1F4BD3323ABEE6BA9E41C189BDC21A_il2cpp_TypeInfo_var);
		Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 * L_1;
		L_1 = JsonConvert_DeserializeObject_TisDictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399_m9C72B9A7CA671CB0DAE02CAE6B37E464873D87E6(L_0, /*hidden argument*/JsonConvert_DeserializeObject_TisDictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399_m9C72B9A7CA671CB0DAE02CAE6B37E464873D87E6_RuntimeMethod_var);
		// Dictionary<string, object> finalPayload = ConvertValuesToCollections(decodedPayload);
		IL2CPP_RUNTIME_CLASS_INIT(TealiumUnityPlugin_t8B3797338182C27740783841F277A92D6D40AC55_il2cpp_TypeInfo_var);
		Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 * L_2;
		L_2 = TealiumUnityPlugin_ConvertValuesToCollections_mA5295D0CB3019841397ABA2DD64635DA8F280877(L_1, /*hidden argument*/NULL);
		V_0 = L_2;
		// if (onVisitorServiceDidUpdate != null)
		Action_1_t6B2EAA2D3491CBA6FEF1ECDF624EEF00DFD194C1 * L_3 = ((TealiumUnityPlugin_t8B3797338182C27740783841F277A92D6D40AC55_StaticFields*)il2cpp_codegen_static_fields_for(TealiumUnityPlugin_t8B3797338182C27740783841F277A92D6D40AC55_il2cpp_TypeInfo_var))->get_onVisitorServiceDidUpdate_7();
		if (!L_3)
		{
			goto IL_001e;
		}
	}
	{
		// onVisitorServiceDidUpdate(finalPayload);
		IL2CPP_RUNTIME_CLASS_INIT(TealiumUnityPlugin_t8B3797338182C27740783841F277A92D6D40AC55_il2cpp_TypeInfo_var);
		Action_1_t6B2EAA2D3491CBA6FEF1ECDF624EEF00DFD194C1 * L_4 = ((TealiumUnityPlugin_t8B3797338182C27740783841F277A92D6D40AC55_StaticFields*)il2cpp_codegen_static_fields_for(TealiumUnityPlugin_t8B3797338182C27740783841F277A92D6D40AC55_il2cpp_TypeInfo_var))->get_onVisitorServiceDidUpdate_7();
		Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 * L_5 = V_0;
		NullCheck(L_4);
		Action_1_Invoke_m761F631FCAC3E0A9D38C7F2D6035B687B9FD7BE2(L_4, L_5, /*hidden argument*/Action_1_Invoke_m761F631FCAC3E0A9D38C7F2D6035B687B9FD7BE2_RuntimeMethod_var);
	}

IL_001e:
	{
		// }
		return;
	}
}
// System.Void TealiumUnityPlugin::OnConsentExpiration()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TealiumUnityPlugin_OnConsentExpiration_m325589A0A06C82CA30DDE8B90B9984E6361E06BA (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TealiumUnityPlugin_t8B3797338182C27740783841F277A92D6D40AC55_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (onConsentExpiration != null)
		IL2CPP_RUNTIME_CLASS_INIT(TealiumUnityPlugin_t8B3797338182C27740783841F277A92D6D40AC55_il2cpp_TypeInfo_var);
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_0 = ((TealiumUnityPlugin_t8B3797338182C27740783841F277A92D6D40AC55_StaticFields*)il2cpp_codegen_static_fields_for(TealiumUnityPlugin_t8B3797338182C27740783841F277A92D6D40AC55_il2cpp_TypeInfo_var))->get_onConsentExpiration_8();
		if (!L_0)
		{
			goto IL_0011;
		}
	}
	{
		// onConsentExpiration();
		IL2CPP_RUNTIME_CLASS_INIT(TealiumUnityPlugin_t8B3797338182C27740783841F277A92D6D40AC55_il2cpp_TypeInfo_var);
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_1 = ((TealiumUnityPlugin_t8B3797338182C27740783841F277A92D6D40AC55_StaticFields*)il2cpp_codegen_static_fields_for(TealiumUnityPlugin_t8B3797338182C27740783841F277A92D6D40AC55_il2cpp_TypeInfo_var))->get_onConsentExpiration_8();
		NullCheck(L_1);
		Action_Invoke_m3FFA5BE3D64F0FF8E1E1CB6F953913FADB5EB89E(L_1, /*hidden argument*/NULL);
	}

IL_0011:
	{
		// }
		return;
	}
}
// System.Collections.Generic.Dictionary`2<System.String,System.Object> TealiumUnityPlugin::ConvertValuesToCollections(System.Collections.Generic.Dictionary`2<System.String,System.Object>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 * TealiumUnityPlugin_ConvertValuesToCollections_mA5295D0CB3019841397ABA2DD64635DA8F280877 (Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 * ___dictionary0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_GetEnumerator_m2081C22E67B979AFF0710DA64B3BFE895BAE1635_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_mCD0C2F0325B7677B9BC340A60AA3FB9C7A88FF63_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_set_Item_mD86FD5EED3CEB42690DDFEB80B2494A5A48A3EB9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_m7D3C5AB9967DFDFE269DC54DF367D0B21C59E356_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_m27DDAE22558733AB59D955136A7EF5AF05B1F4CE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_m5D01A6607C2199E7A7B5856E49119C26FE5327BB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeyValuePair_2_get_Key_mC43FCB322E586364D4402E639DB247702C4A6E6F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeyValuePair_2_get_Value_m9506505CADCD1ED074BD28FB1B26D48BBC7A9FA7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TealiumUnityPlugin_t8B3797338182C27740783841F277A92D6D40AC55_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 * V_0 = NULL;
	Enumerator_t3E7848C1896025E8CF7A49817DB0E38F0ADD0E15  V_1;
	memset((&V_1), 0, sizeof(V_1));
	KeyValuePair_2_tD6E57B7EAC6134DCA97F39E5E598EB43B44A5EAE  V_2;
	memset((&V_2), 0, sizeof(V_2));
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 1> __leave_targets;
	{
		// Dictionary<string, object> result = new Dictionary<string, object>();
		Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 * L_0 = (Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 *)il2cpp_codegen_object_new(Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_mCD0C2F0325B7677B9BC340A60AA3FB9C7A88FF63(L_0, /*hidden argument*/Dictionary_2__ctor_mCD0C2F0325B7677B9BC340A60AA3FB9C7A88FF63_RuntimeMethod_var);
		V_0 = L_0;
		// foreach (KeyValuePair<string, object> entry in dictionary)
		Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 * L_1 = ___dictionary0;
		NullCheck(L_1);
		Enumerator_t3E7848C1896025E8CF7A49817DB0E38F0ADD0E15  L_2;
		L_2 = Dictionary_2_GetEnumerator_m2081C22E67B979AFF0710DA64B3BFE895BAE1635(L_1, /*hidden argument*/Dictionary_2_GetEnumerator_m2081C22E67B979AFF0710DA64B3BFE895BAE1635_RuntimeMethod_var);
		V_1 = L_2;
	}

IL_000d:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0030;
		}

IL_000f:
		{
			// foreach (KeyValuePair<string, object> entry in dictionary)
			KeyValuePair_2_tD6E57B7EAC6134DCA97F39E5E598EB43B44A5EAE  L_3;
			L_3 = Enumerator_get_Current_m5D01A6607C2199E7A7B5856E49119C26FE5327BB_inline((Enumerator_t3E7848C1896025E8CF7A49817DB0E38F0ADD0E15 *)(&V_1), /*hidden argument*/Enumerator_get_Current_m5D01A6607C2199E7A7B5856E49119C26FE5327BB_RuntimeMethod_var);
			V_2 = L_3;
			// result[entry.Key] = ToCollections(entry.Value);
			Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 * L_4 = V_0;
			String_t* L_5;
			L_5 = KeyValuePair_2_get_Key_mC43FCB322E586364D4402E639DB247702C4A6E6F_inline((KeyValuePair_2_tD6E57B7EAC6134DCA97F39E5E598EB43B44A5EAE *)(&V_2), /*hidden argument*/KeyValuePair_2_get_Key_mC43FCB322E586364D4402E639DB247702C4A6E6F_RuntimeMethod_var);
			RuntimeObject * L_6;
			L_6 = KeyValuePair_2_get_Value_m9506505CADCD1ED074BD28FB1B26D48BBC7A9FA7_inline((KeyValuePair_2_tD6E57B7EAC6134DCA97F39E5E598EB43B44A5EAE *)(&V_2), /*hidden argument*/KeyValuePair_2_get_Value_m9506505CADCD1ED074BD28FB1B26D48BBC7A9FA7_RuntimeMethod_var);
			IL2CPP_RUNTIME_CLASS_INIT(TealiumUnityPlugin_t8B3797338182C27740783841F277A92D6D40AC55_il2cpp_TypeInfo_var);
			RuntimeObject * L_7;
			L_7 = TealiumUnityPlugin_ToCollections_m5E2B1D64A02C34EE7ADBCCCB5B6C3040A2CC3C75(L_6, /*hidden argument*/NULL);
			NullCheck(L_4);
			Dictionary_2_set_Item_mD86FD5EED3CEB42690DDFEB80B2494A5A48A3EB9(L_4, L_5, L_7, /*hidden argument*/Dictionary_2_set_Item_mD86FD5EED3CEB42690DDFEB80B2494A5A48A3EB9_RuntimeMethod_var);
		}

IL_0030:
		{
			// foreach (KeyValuePair<string, object> entry in dictionary)
			bool L_8;
			L_8 = Enumerator_MoveNext_m27DDAE22558733AB59D955136A7EF5AF05B1F4CE((Enumerator_t3E7848C1896025E8CF7A49817DB0E38F0ADD0E15 *)(&V_1), /*hidden argument*/Enumerator_MoveNext_m27DDAE22558733AB59D955136A7EF5AF05B1F4CE_RuntimeMethod_var);
			if (L_8)
			{
				goto IL_000f;
			}
		}

IL_0039:
		{
			IL2CPP_LEAVE(0x49, FINALLY_003b);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_003b;
	}

FINALLY_003b:
	{ // begin finally (depth: 1)
		Enumerator_Dispose_m7D3C5AB9967DFDFE269DC54DF367D0B21C59E356((Enumerator_t3E7848C1896025E8CF7A49817DB0E38F0ADD0E15 *)(&V_1), /*hidden argument*/Enumerator_Dispose_m7D3C5AB9967DFDFE269DC54DF367D0B21C59E356_RuntimeMethod_var);
		IL2CPP_END_FINALLY(59)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(59)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x49, IL_0049)
	}

IL_0049:
	{
		// return result;
		Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 * L_9 = V_0;
		return L_9;
	}
}
// System.Object TealiumUnityPlugin::ToCollections(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * TealiumUnityPlugin_ToCollections_m5E2B1D64A02C34EE7ADBCCCB5B6C3040A2CC3C75 (RuntimeObject * ___o0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_Select_TisRuntimeObject_TisRuntimeObject_mC0F1DA980E0433D70A6CF9DD7CD1942BB7FE87C0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_ToDictionary_TisKeyValuePair_2_tD6E57B7EAC6134DCA97F39E5E598EB43B44A5EAE_TisString_t_TisRuntimeObject_mFBEE06B96A0FECCFE5342B372E6808E08B4CE4EF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_ToList_TisRuntimeObject_mA4E485F973C6DF746B8DB54CA6F54192D4231CA2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_2__ctor_m2943627DBB46AAA049B4566A35BDF2E91734CCCF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_2__ctor_m31D090A081982F561CFBE47CEB0C75636F91D0BC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_2__ctor_mA7F3C5A0612B84E910DE92E77BA95101FD68EEDB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_2_t04E847CA06FFEF3C03EF2513C3B1F9F57A39D797_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_2_t1CA29703D8E4788617FC1EC9FA62DEBEE1E2CF3A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_2_tFF5BB8F40A35B1BEA00D4EBBC6CBE7184A584436_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JArray_t9F02428A8EE6460B1AB0CA1FB5D2C9EE7332E7B3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JObject_t55E456F4BAFC1A97265C571EDE7F421663976807_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JToken_ToObject_TisIDictionary_2_tED3FAE588A6FD3ED0A4589C52122AB8F53D8A3B8_mF33354572D8E7938287DF92385EC71FF35E9CBB3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JToken_ToObject_TisList_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5_mD3541B7931BF12E8B7C5996D78FCFBD30E7A2272_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TealiumUnityPlugin_ToCollections_m5E2B1D64A02C34EE7ADBCCCB5B6C3040A2CC3C75_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_U3CToCollectionsU3Eb__29_0_m47930E76A8BB5C4199A42255C8C9442AFB6AB660_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_U3CToCollectionsU3Eb__29_1_m75378B42603DD66A38FA9F1EB8F406B93DBDDD1B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_t7521AAF4473714E35BDD03C93690F00668C0D29E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	JObject_t55E456F4BAFC1A97265C571EDE7F421663976807 * V_0 = NULL;
	JArray_t9F02428A8EE6460B1AB0CA1FB5D2C9EE7332E7B3 * V_1 = NULL;
	Func_2_t1CA29703D8E4788617FC1EC9FA62DEBEE1E2CF3A * G_B3_0 = NULL;
	RuntimeObject* G_B3_1 = NULL;
	Func_2_t1CA29703D8E4788617FC1EC9FA62DEBEE1E2CF3A * G_B2_0 = NULL;
	RuntimeObject* G_B2_1 = NULL;
	Func_2_t04E847CA06FFEF3C03EF2513C3B1F9F57A39D797 * G_B5_0 = NULL;
	Func_2_t1CA29703D8E4788617FC1EC9FA62DEBEE1E2CF3A * G_B5_1 = NULL;
	RuntimeObject* G_B5_2 = NULL;
	Func_2_t04E847CA06FFEF3C03EF2513C3B1F9F57A39D797 * G_B4_0 = NULL;
	Func_2_t1CA29703D8E4788617FC1EC9FA62DEBEE1E2CF3A * G_B4_1 = NULL;
	RuntimeObject* G_B4_2 = NULL;
	{
		// if (o is JObject jo) return jo.ToObject<IDictionary<string, object>>().ToDictionary(k => k.Key, v => ToCollections(v.Value));
		RuntimeObject * L_0 = ___o0;
		V_0 = ((JObject_t55E456F4BAFC1A97265C571EDE7F421663976807 *)IsInstClass((RuntimeObject*)L_0, JObject_t55E456F4BAFC1A97265C571EDE7F421663976807_il2cpp_TypeInfo_var));
		JObject_t55E456F4BAFC1A97265C571EDE7F421663976807 * L_1 = V_0;
		if (!L_1)
		{
			goto IL_0054;
		}
	}
	{
		// if (o is JObject jo) return jo.ToObject<IDictionary<string, object>>().ToDictionary(k => k.Key, v => ToCollections(v.Value));
		JObject_t55E456F4BAFC1A97265C571EDE7F421663976807 * L_2 = V_0;
		NullCheck(L_2);
		RuntimeObject* L_3;
		L_3 = JToken_ToObject_TisIDictionary_2_tED3FAE588A6FD3ED0A4589C52122AB8F53D8A3B8_mF33354572D8E7938287DF92385EC71FF35E9CBB3(L_2, /*hidden argument*/JToken_ToObject_TisIDictionary_2_tED3FAE588A6FD3ED0A4589C52122AB8F53D8A3B8_mF33354572D8E7938287DF92385EC71FF35E9CBB3_RuntimeMethod_var);
		IL2CPP_RUNTIME_CLASS_INIT(U3CU3Ec_t7521AAF4473714E35BDD03C93690F00668C0D29E_il2cpp_TypeInfo_var);
		Func_2_t1CA29703D8E4788617FC1EC9FA62DEBEE1E2CF3A * L_4 = ((U3CU3Ec_t7521AAF4473714E35BDD03C93690F00668C0D29E_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t7521AAF4473714E35BDD03C93690F00668C0D29E_il2cpp_TypeInfo_var))->get_U3CU3E9__29_0_1();
		Func_2_t1CA29703D8E4788617FC1EC9FA62DEBEE1E2CF3A * L_5 = L_4;
		G_B2_0 = L_5;
		G_B2_1 = L_3;
		if (L_5)
		{
			G_B3_0 = L_5;
			G_B3_1 = L_3;
			goto IL_002f;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(U3CU3Ec_t7521AAF4473714E35BDD03C93690F00668C0D29E_il2cpp_TypeInfo_var);
		U3CU3Ec_t7521AAF4473714E35BDD03C93690F00668C0D29E * L_6 = ((U3CU3Ec_t7521AAF4473714E35BDD03C93690F00668C0D29E_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t7521AAF4473714E35BDD03C93690F00668C0D29E_il2cpp_TypeInfo_var))->get_U3CU3E9_0();
		Func_2_t1CA29703D8E4788617FC1EC9FA62DEBEE1E2CF3A * L_7 = (Func_2_t1CA29703D8E4788617FC1EC9FA62DEBEE1E2CF3A *)il2cpp_codegen_object_new(Func_2_t1CA29703D8E4788617FC1EC9FA62DEBEE1E2CF3A_il2cpp_TypeInfo_var);
		Func_2__ctor_m31D090A081982F561CFBE47CEB0C75636F91D0BC(L_7, L_6, (intptr_t)((intptr_t)U3CU3Ec_U3CToCollectionsU3Eb__29_0_m47930E76A8BB5C4199A42255C8C9442AFB6AB660_RuntimeMethod_var), /*hidden argument*/Func_2__ctor_m31D090A081982F561CFBE47CEB0C75636F91D0BC_RuntimeMethod_var);
		Func_2_t1CA29703D8E4788617FC1EC9FA62DEBEE1E2CF3A * L_8 = L_7;
		((U3CU3Ec_t7521AAF4473714E35BDD03C93690F00668C0D29E_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t7521AAF4473714E35BDD03C93690F00668C0D29E_il2cpp_TypeInfo_var))->set_U3CU3E9__29_0_1(L_8);
		G_B3_0 = L_8;
		G_B3_1 = G_B2_1;
	}

IL_002f:
	{
		IL2CPP_RUNTIME_CLASS_INIT(U3CU3Ec_t7521AAF4473714E35BDD03C93690F00668C0D29E_il2cpp_TypeInfo_var);
		Func_2_t04E847CA06FFEF3C03EF2513C3B1F9F57A39D797 * L_9 = ((U3CU3Ec_t7521AAF4473714E35BDD03C93690F00668C0D29E_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t7521AAF4473714E35BDD03C93690F00668C0D29E_il2cpp_TypeInfo_var))->get_U3CU3E9__29_1_2();
		Func_2_t04E847CA06FFEF3C03EF2513C3B1F9F57A39D797 * L_10 = L_9;
		G_B4_0 = L_10;
		G_B4_1 = G_B3_0;
		G_B4_2 = G_B3_1;
		if (L_10)
		{
			G_B5_0 = L_10;
			G_B5_1 = G_B3_0;
			G_B5_2 = G_B3_1;
			goto IL_004e;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(U3CU3Ec_t7521AAF4473714E35BDD03C93690F00668C0D29E_il2cpp_TypeInfo_var);
		U3CU3Ec_t7521AAF4473714E35BDD03C93690F00668C0D29E * L_11 = ((U3CU3Ec_t7521AAF4473714E35BDD03C93690F00668C0D29E_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t7521AAF4473714E35BDD03C93690F00668C0D29E_il2cpp_TypeInfo_var))->get_U3CU3E9_0();
		Func_2_t04E847CA06FFEF3C03EF2513C3B1F9F57A39D797 * L_12 = (Func_2_t04E847CA06FFEF3C03EF2513C3B1F9F57A39D797 *)il2cpp_codegen_object_new(Func_2_t04E847CA06FFEF3C03EF2513C3B1F9F57A39D797_il2cpp_TypeInfo_var);
		Func_2__ctor_m2943627DBB46AAA049B4566A35BDF2E91734CCCF(L_12, L_11, (intptr_t)((intptr_t)U3CU3Ec_U3CToCollectionsU3Eb__29_1_m75378B42603DD66A38FA9F1EB8F406B93DBDDD1B_RuntimeMethod_var), /*hidden argument*/Func_2__ctor_m2943627DBB46AAA049B4566A35BDF2E91734CCCF_RuntimeMethod_var);
		Func_2_t04E847CA06FFEF3C03EF2513C3B1F9F57A39D797 * L_13 = L_12;
		((U3CU3Ec_t7521AAF4473714E35BDD03C93690F00668C0D29E_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t7521AAF4473714E35BDD03C93690F00668C0D29E_il2cpp_TypeInfo_var))->set_U3CU3E9__29_1_2(L_13);
		G_B5_0 = L_13;
		G_B5_1 = G_B4_1;
		G_B5_2 = G_B4_2;
	}

IL_004e:
	{
		Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 * L_14;
		L_14 = Enumerable_ToDictionary_TisKeyValuePair_2_tD6E57B7EAC6134DCA97F39E5E598EB43B44A5EAE_TisString_t_TisRuntimeObject_mFBEE06B96A0FECCFE5342B372E6808E08B4CE4EF(G_B5_2, G_B5_1, G_B5_0, /*hidden argument*/Enumerable_ToDictionary_TisKeyValuePair_2_tD6E57B7EAC6134DCA97F39E5E598EB43B44A5EAE_TisString_t_TisRuntimeObject_mFBEE06B96A0FECCFE5342B372E6808E08B4CE4EF_RuntimeMethod_var);
		return L_14;
	}

IL_0054:
	{
		// if (o is JArray ja) return ja.ToObject<List<object>>().Select(ToCollections).ToList();
		RuntimeObject * L_15 = ___o0;
		V_1 = ((JArray_t9F02428A8EE6460B1AB0CA1FB5D2C9EE7332E7B3 *)IsInstClass((RuntimeObject*)L_15, JArray_t9F02428A8EE6460B1AB0CA1FB5D2C9EE7332E7B3_il2cpp_TypeInfo_var));
		JArray_t9F02428A8EE6460B1AB0CA1FB5D2C9EE7332E7B3 * L_16 = V_1;
		if (!L_16)
		{
			goto IL_007b;
		}
	}
	{
		// if (o is JArray ja) return ja.ToObject<List<object>>().Select(ToCollections).ToList();
		JArray_t9F02428A8EE6460B1AB0CA1FB5D2C9EE7332E7B3 * L_17 = V_1;
		NullCheck(L_17);
		List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * L_18;
		L_18 = JToken_ToObject_TisList_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5_mD3541B7931BF12E8B7C5996D78FCFBD30E7A2272(L_17, /*hidden argument*/JToken_ToObject_TisList_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5_mD3541B7931BF12E8B7C5996D78FCFBD30E7A2272_RuntimeMethod_var);
		Func_2_tFF5BB8F40A35B1BEA00D4EBBC6CBE7184A584436 * L_19 = (Func_2_tFF5BB8F40A35B1BEA00D4EBBC6CBE7184A584436 *)il2cpp_codegen_object_new(Func_2_tFF5BB8F40A35B1BEA00D4EBBC6CBE7184A584436_il2cpp_TypeInfo_var);
		Func_2__ctor_mA7F3C5A0612B84E910DE92E77BA95101FD68EEDB(L_19, NULL, (intptr_t)((intptr_t)TealiumUnityPlugin_ToCollections_m5E2B1D64A02C34EE7ADBCCCB5B6C3040A2CC3C75_RuntimeMethod_var), /*hidden argument*/Func_2__ctor_mA7F3C5A0612B84E910DE92E77BA95101FD68EEDB_RuntimeMethod_var);
		RuntimeObject* L_20;
		L_20 = Enumerable_Select_TisRuntimeObject_TisRuntimeObject_mC0F1DA980E0433D70A6CF9DD7CD1942BB7FE87C0(L_18, L_19, /*hidden argument*/Enumerable_Select_TisRuntimeObject_TisRuntimeObject_mC0F1DA980E0433D70A6CF9DD7CD1942BB7FE87C0_RuntimeMethod_var);
		List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * L_21;
		L_21 = Enumerable_ToList_TisRuntimeObject_mA4E485F973C6DF746B8DB54CA6F54192D4231CA2(L_20, /*hidden argument*/Enumerable_ToList_TisRuntimeObject_mA4E485F973C6DF746B8DB54CA6F54192D4231CA2_RuntimeMethod_var);
		return L_21;
	}

IL_007b:
	{
		// return o;
		RuntimeObject * L_22 = ___o0;
		return L_22;
	}
}
// System.Void TealiumUnityPlugin::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TealiumUnityPlugin__ctor_mEA4E0CE700ACFDCD66F4E19C13EC5423E995378C (TealiumUnityPlugin_t8B3797338182C27740783841F277A92D6D40AC55 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void TealiumUnityPlugin::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TealiumUnityPlugin__cctor_m0428A51D8B89DF411C1F79DE1921EF92965AE7BE (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_mC220EB1A68D502946EF9BE5A73F1339CC1BF7B46_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_tA582BF436674B8CBA45DA2033E1A98F298DBADA9_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TealiumUnityPlugin_t8B3797338182C27740783841F277A92D6D40AC55_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private static Dictionary<string, Action<Dictionary<string, object>>> onRemoteCommandCompletionCallbacks = new Dictionary<string, Action<Dictionary<string, object>>>();
		Dictionary_2_tA582BF436674B8CBA45DA2033E1A98F298DBADA9 * L_0 = (Dictionary_2_tA582BF436674B8CBA45DA2033E1A98F298DBADA9 *)il2cpp_codegen_object_new(Dictionary_2_tA582BF436674B8CBA45DA2033E1A98F298DBADA9_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_mC220EB1A68D502946EF9BE5A73F1339CC1BF7B46(L_0, /*hidden argument*/Dictionary_2__ctor_mC220EB1A68D502946EF9BE5A73F1339CC1BF7B46_RuntimeMethod_var);
		((TealiumUnityPlugin_t8B3797338182C27740783841F277A92D6D40AC55_StaticFields*)il2cpp_codegen_static_fields_for(TealiumUnityPlugin_t8B3797338182C27740783841F277A92D6D40AC55_il2cpp_TypeInfo_var))->set_onRemoteCommandCompletionCallbacks_6(L_0);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void TealiumCommon.TealiumView::.ctor(System.String,System.Collections.Generic.Dictionary`2<System.String,System.Object>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TealiumView__ctor_m6F0ADCF157B33A311018E6A989D48C4DDFE7DFD3 (TealiumView_tC9D20EFC963EBBF82B70428435F13CE3D6417716 * __this, String_t* ___name0, Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 * ___dataLayer1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1D987D14D8E0C888F1095B9A3F3E261A95CEACCC);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public string type = "view";
		__this->set_type_2(_stringLiteral1D987D14D8E0C888F1095B9A3F3E261A95CEACCC);
		// public TealiumView(string name, Dictionary<string, object>? dataLayer = null)
		TealiumDispatch__ctor_m6ADA3A1CB9620F6BD0D2E4FD21AB32129439B72D(__this, /*hidden argument*/NULL);
		// this.viewName = name;
		String_t* L_0 = ___name0;
		__this->set_viewName_3(L_0);
		// this.dataLayer = dataLayer;
		Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 * L_1 = ___dataLayer1;
		__this->set_dataLayer_4(L_1);
		// }
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_TealiumiOS_initializationResponseReceived_mF10D18463C3B0946F6678F3BFEA2B617C9C99AA0(int32_t ___success0)
{
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Managed method invocation
	TealiumiOS_initializationResponseReceived_mF10D18463C3B0946F6678F3BFEA2B617C9C99AA0(static_cast<bool>(___success0), NULL);

}
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_TealiumiOS_remoteCommandReceived_m0946C4CE24BF4B75C7D0B023C7F02927B7C557B2(char* ___payload0)
{
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Marshaling of parameter '___payload0' to managed representation
	String_t* ____payload0_unmarshaled = NULL;
	____payload0_unmarshaled = il2cpp_codegen_marshal_string_result(___payload0);

	// Managed method invocation
	TealiumiOS_remoteCommandReceived_m0946C4CE24BF4B75C7D0B023C7F02927B7C557B2(____payload0_unmarshaled, NULL);

}
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_TealiumiOS_visitorServiceUpdateReceived_mD5ED91A5C2447F4F238D19197D12ACE013849733(char* ___payload0)
{
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Marshaling of parameter '___payload0' to managed representation
	String_t* ____payload0_unmarshaled = NULL;
	____payload0_unmarshaled = il2cpp_codegen_marshal_string_result(___payload0);

	// Managed method invocation
	TealiumiOS_visitorServiceUpdateReceived_mD5ED91A5C2447F4F238D19197D12ACE013849733(____payload0_unmarshaled, NULL);

}
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_TealiumiOS_consentExpirationReceived_m239594694333B253BA54AEA556015ABF9FA87692()
{
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Managed method invocation
	TealiumiOS_consentExpirationReceived_m239594694333B253BA54AEA556015ABF9FA87692(NULL);

}
// System.Void TealiumiOS::Tealium_Initialize(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TealiumiOS_Tealium_Initialize_m24CEE3A18ED580627CE0A36985A0D54F8E9464C3 (String_t* ___config0, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (char*);

	// Marshaling of parameter '___config0' to native representation
	char* ____config0_marshaled = NULL;
	____config0_marshaled = il2cpp_codegen_marshal_string(___config0);

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(Tealium_Initialize)(____config0_marshaled);

	// Marshaling cleanup of parameter '___config0' native representation
	il2cpp_codegen_marshal_free(____config0_marshaled);
	____config0_marshaled = NULL;

}
// System.Void TealiumiOS::Tealium_Track(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TealiumiOS_Tealium_Track_mEFA0B2E3BDEA3B93463A31BAE516BC555AC570E6 (String_t* ___dispatch0, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (char*);

	// Marshaling of parameter '___dispatch0' to native representation
	char* ____dispatch0_marshaled = NULL;
	____dispatch0_marshaled = il2cpp_codegen_marshal_string(___dispatch0);

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(Tealium_Track)(____dispatch0_marshaled);

	// Marshaling cleanup of parameter '___dispatch0' native representation
	il2cpp_codegen_marshal_free(____dispatch0_marshaled);
	____dispatch0_marshaled = NULL;

}
// System.Void TealiumiOS::Tealium_Terminate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TealiumiOS_Tealium_Terminate_m15FC6955522EA9ECC8B03057F1E5E7A066344FF0 (const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) ();

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(Tealium_Terminate)();

}
// System.Void TealiumiOS::Tealium_AddToDataLayer(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TealiumiOS_Tealium_AddToDataLayer_m4FCE1CE87090F7F3A63EB73E56C57BFD8B8F95A5 (String_t* ___data0, String_t* ___expiry1, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (char*, char*);

	// Marshaling of parameter '___data0' to native representation
	char* ____data0_marshaled = NULL;
	____data0_marshaled = il2cpp_codegen_marshal_string(___data0);

	// Marshaling of parameter '___expiry1' to native representation
	char* ____expiry1_marshaled = NULL;
	____expiry1_marshaled = il2cpp_codegen_marshal_string(___expiry1);

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(Tealium_AddToDataLayer)(____data0_marshaled, ____expiry1_marshaled);

	// Marshaling cleanup of parameter '___data0' native representation
	il2cpp_codegen_marshal_free(____data0_marshaled);
	____data0_marshaled = NULL;

	// Marshaling cleanup of parameter '___expiry1' native representation
	il2cpp_codegen_marshal_free(____expiry1_marshaled);
	____expiry1_marshaled = NULL;

}
// System.String TealiumiOS::Tealium_GetFromDataLayer(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* TealiumiOS_Tealium_GetFromDataLayer_m308F0007E4340C53CAC1675E112991EFC3FEDC81 (String_t* ___id0, const RuntimeMethod* method)
{
	typedef char* (DEFAULT_CALL *PInvokeFunc) (char*);

	// Marshaling of parameter '___id0' to native representation
	char* ____id0_marshaled = NULL;
	____id0_marshaled = il2cpp_codegen_marshal_string(___id0);

	// Native function invocation
	char* returnValue = reinterpret_cast<PInvokeFunc>(Tealium_GetFromDataLayer)(____id0_marshaled);

	// Marshaling of return value back from native representation
	String_t* _returnValue_unmarshaled = NULL;
	_returnValue_unmarshaled = il2cpp_codegen_marshal_string_result(returnValue);

	// Marshaling cleanup of return value native representation
	il2cpp_codegen_marshal_free(returnValue);
	returnValue = NULL;

	// Marshaling cleanup of parameter '___id0' native representation
	il2cpp_codegen_marshal_free(____id0_marshaled);
	____id0_marshaled = NULL;

	return _returnValue_unmarshaled;
}
// System.Void TealiumiOS::Tealium_RemoveFromDataLayer(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TealiumiOS_Tealium_RemoveFromDataLayer_m6393645609F99C36A877A03793C60150CFE2CBA5 (String_t* ___keys0, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (char*);

	// Marshaling of parameter '___keys0' to native representation
	char* ____keys0_marshaled = NULL;
	____keys0_marshaled = il2cpp_codegen_marshal_string(___keys0);

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(Tealium_RemoveFromDataLayer)(____keys0_marshaled);

	// Marshaling cleanup of parameter '___keys0' native representation
	il2cpp_codegen_marshal_free(____keys0_marshaled);
	____keys0_marshaled = NULL;

}
// System.Void TealiumiOS::Tealium_SetConsentStatus(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TealiumiOS_Tealium_SetConsentStatus_m3F2BFED60D249128C19A17DD5F1FE4F46E0BF168 (String_t* ___status0, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (char*);

	// Marshaling of parameter '___status0' to native representation
	char* ____status0_marshaled = NULL;
	____status0_marshaled = il2cpp_codegen_marshal_string(___status0);

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(Tealium_SetConsentStatus)(____status0_marshaled);

	// Marshaling cleanup of parameter '___status0' native representation
	il2cpp_codegen_marshal_free(____status0_marshaled);
	____status0_marshaled = NULL;

}
// System.String TealiumiOS::Tealium_GetConsentStatus()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* TealiumiOS_Tealium_GetConsentStatus_mD075010B8E615627E73A2C4551AF499771D44CF3 (const RuntimeMethod* method)
{
	typedef char* (DEFAULT_CALL *PInvokeFunc) ();

	// Native function invocation
	char* returnValue = reinterpret_cast<PInvokeFunc>(Tealium_GetConsentStatus)();

	// Marshaling of return value back from native representation
	String_t* _returnValue_unmarshaled = NULL;
	_returnValue_unmarshaled = il2cpp_codegen_marshal_string_result(returnValue);

	// Marshaling cleanup of return value native representation
	il2cpp_codegen_marshal_free(returnValue);
	returnValue = NULL;

	return _returnValue_unmarshaled;
}
// System.Void TealiumiOS::Tealium_SetConsentCategories(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TealiumiOS_Tealium_SetConsentCategories_mFE62A43D2EA8C219484CA49D18599D3277F6E8A7 (String_t* ___categories0, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (char*);

	// Marshaling of parameter '___categories0' to native representation
	char* ____categories0_marshaled = NULL;
	____categories0_marshaled = il2cpp_codegen_marshal_string(___categories0);

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(Tealium_SetConsentCategories)(____categories0_marshaled);

	// Marshaling cleanup of parameter '___categories0' native representation
	il2cpp_codegen_marshal_free(____categories0_marshaled);
	____categories0_marshaled = NULL;

}
// System.String TealiumiOS::Tealium_GetConsentCategories()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* TealiumiOS_Tealium_GetConsentCategories_m9DA31041D2D97CCC320180512585CCCB53D91E38 (const RuntimeMethod* method)
{
	typedef char* (DEFAULT_CALL *PInvokeFunc) ();

	// Native function invocation
	char* returnValue = reinterpret_cast<PInvokeFunc>(Tealium_GetConsentCategories)();

	// Marshaling of return value back from native representation
	String_t* _returnValue_unmarshaled = NULL;
	_returnValue_unmarshaled = il2cpp_codegen_marshal_string_result(returnValue);

	// Marshaling cleanup of return value native representation
	il2cpp_codegen_marshal_free(returnValue);
	returnValue = NULL;

	return _returnValue_unmarshaled;
}
// System.Void TealiumiOS::Tealium_JoinTrace(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TealiumiOS_Tealium_JoinTrace_m39C30E34AB9F5824DCC368313F347375B9B7A6AC (String_t* ___id0, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (char*);

	// Marshaling of parameter '___id0' to native representation
	char* ____id0_marshaled = NULL;
	____id0_marshaled = il2cpp_codegen_marshal_string(___id0);

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(Tealium_JoinTrace)(____id0_marshaled);

	// Marshaling cleanup of parameter '___id0' native representation
	il2cpp_codegen_marshal_free(____id0_marshaled);
	____id0_marshaled = NULL;

}
// System.Void TealiumiOS::Tealium_LeaveTrace()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TealiumiOS_Tealium_LeaveTrace_m6C5C5CD1B1E52F70EA2F4BCB9532C13CD1A8B733 (const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) ();

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(Tealium_LeaveTrace)();

}
// System.Void TealiumiOS::Tealium_AddRemoteCommand(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TealiumiOS_Tealium_AddRemoteCommand_mEA73257FAE7C2E8D346BFC739D3F03191EBED98D (String_t* ___id0, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (char*);

	// Marshaling of parameter '___id0' to native representation
	char* ____id0_marshaled = NULL;
	____id0_marshaled = il2cpp_codegen_marshal_string(___id0);

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(Tealium_AddRemoteCommand)(____id0_marshaled);

	// Marshaling cleanup of parameter '___id0' native representation
	il2cpp_codegen_marshal_free(____id0_marshaled);
	____id0_marshaled = NULL;

}
// System.Void TealiumiOS::Tealium_RemoveRemoteCommand(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TealiumiOS_Tealium_RemoveRemoteCommand_m8C86040015B1F90420D7A8567150B1C853AAA5FE (String_t* ___id0, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (char*);

	// Marshaling of parameter '___id0' to native representation
	char* ____id0_marshaled = NULL;
	____id0_marshaled = il2cpp_codegen_marshal_string(___id0);

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(Tealium_RemoveRemoteCommand)(____id0_marshaled);

	// Marshaling cleanup of parameter '___id0' native representation
	il2cpp_codegen_marshal_free(____id0_marshaled);
	____id0_marshaled = NULL;

}
// System.String TealiumiOS::Tealium_GetVisitorId()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* TealiumiOS_Tealium_GetVisitorId_m4F213D3E9875C11ACB9AE43D6AFEE0DCB485828B (const RuntimeMethod* method)
{
	typedef char* (DEFAULT_CALL *PInvokeFunc) ();

	// Native function invocation
	char* returnValue = reinterpret_cast<PInvokeFunc>(Tealium_GetVisitorId)();

	// Marshaling of return value back from native representation
	String_t* _returnValue_unmarshaled = NULL;
	_returnValue_unmarshaled = il2cpp_codegen_marshal_string_result(returnValue);

	// Marshaling cleanup of return value native representation
	il2cpp_codegen_marshal_free(returnValue);
	returnValue = NULL;

	return _returnValue_unmarshaled;
}
// System.Void TealiumiOS::Tealium_SetInitializeDelegate(TealiumiOS/InitializeDelegateMessage)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TealiumiOS_Tealium_SetInitializeDelegate_m89E2D4C46574206CC635F2B008ACBE476AD5F126 (InitializeDelegateMessage_tC95BD6C7C57DC458B247CC4A70D6AF216960A493 * ___callback0, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (Il2CppMethodPointer);

	// Marshaling of parameter '___callback0' to native representation
	Il2CppMethodPointer ____callback0_marshaled = NULL;
	____callback0_marshaled = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(___callback0));

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(Tealium_SetInitializeDelegate)(____callback0_marshaled);

}
// System.Void TealiumiOS::Tealium_SetRemoteCommandDelegate(TealiumiOS/RemoteCommandDelegateMessage)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TealiumiOS_Tealium_SetRemoteCommandDelegate_mA354FE025118691025F63B1E9D32F8E3B6E18DD1 (RemoteCommandDelegateMessage_t5D69DB6883CD6653EC3E70F18E3C096FD043342D * ___callback0, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (Il2CppMethodPointer);

	// Marshaling of parameter '___callback0' to native representation
	Il2CppMethodPointer ____callback0_marshaled = NULL;
	____callback0_marshaled = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(___callback0));

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(Tealium_SetRemoteCommandDelegate)(____callback0_marshaled);

}
// System.Void TealiumiOS::Tealium_SetVisitorServiceDelegate(TealiumiOS/VisitorServiceDelegateMessage)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TealiumiOS_Tealium_SetVisitorServiceDelegate_m37C9EA4AAA2FE47269AF7C236F40493AAD2B1E38 (VisitorServiceDelegateMessage_t6B8D159765A2F10FA86086BFA8BD3F4FFB9DE18B * ___callback0, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (Il2CppMethodPointer);

	// Marshaling of parameter '___callback0' to native representation
	Il2CppMethodPointer ____callback0_marshaled = NULL;
	____callback0_marshaled = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(___callback0));

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(Tealium_SetVisitorServiceDelegate)(____callback0_marshaled);

}
// System.Void TealiumiOS::Tealium_SetConsentExpiryDelegate(TealiumiOS/ConsentExpiryDelegateMessage)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TealiumiOS_Tealium_SetConsentExpiryDelegate_m2BFA8C74D9897A41FC056399EF96F8F15DB8A556 (ConsentExpiryDelegateMessage_t086235450063F54925F0E78B7BE640C668914E6D * ___callback0, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (Il2CppMethodPointer);

	// Marshaling of parameter '___callback0' to native representation
	Il2CppMethodPointer ____callback0_marshaled = NULL;
	____callback0_marshaled = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(___callback0));

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(Tealium_SetConsentExpiryDelegate)(____callback0_marshaled);

}
// System.Void TealiumiOS::initializationResponseReceived(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TealiumiOS_initializationResponseReceived_mF10D18463C3B0946F6678F3BFEA2B617C9C99AA0 (bool ___success0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TealiumUnityPlugin_t8B3797338182C27740783841F277A92D6D40AC55_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// TealiumUnityPlugin.OnInitialized(success);
		bool L_0 = ___success0;
		IL2CPP_RUNTIME_CLASS_INIT(TealiumUnityPlugin_t8B3797338182C27740783841F277A92D6D40AC55_il2cpp_TypeInfo_var);
		TealiumUnityPlugin_OnInitialized_m3EF6AF695ECED304D06CEE68BE597CB46473885A(L_0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void TealiumiOS::remoteCommandReceived(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TealiumiOS_remoteCommandReceived_m0946C4CE24BF4B75C7D0B023C7F02927B7C557B2 (String_t* ___payload0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TealiumUnityPlugin_t8B3797338182C27740783841F277A92D6D40AC55_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// TealiumUnityPlugin.OnRemoteCommandCompletion(payload);
		String_t* L_0 = ___payload0;
		IL2CPP_RUNTIME_CLASS_INIT(TealiumUnityPlugin_t8B3797338182C27740783841F277A92D6D40AC55_il2cpp_TypeInfo_var);
		TealiumUnityPlugin_OnRemoteCommandCompletion_mB3D09BD131A2E5EDDA6A0862CD7822B6A031F00C(L_0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void TealiumiOS::visitorServiceUpdateReceived(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TealiumiOS_visitorServiceUpdateReceived_mD5ED91A5C2447F4F238D19197D12ACE013849733 (String_t* ___payload0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TealiumUnityPlugin_t8B3797338182C27740783841F277A92D6D40AC55_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// TealiumUnityPlugin.OnVisitorServiceUpdate(payload);
		String_t* L_0 = ___payload0;
		IL2CPP_RUNTIME_CLASS_INIT(TealiumUnityPlugin_t8B3797338182C27740783841F277A92D6D40AC55_il2cpp_TypeInfo_var);
		TealiumUnityPlugin_OnVisitorServiceUpdate_m1A6C692F0799B188F8FBF219808CE9A41059864A(L_0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void TealiumiOS::consentExpirationReceived()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TealiumiOS_consentExpirationReceived_m239594694333B253BA54AEA556015ABF9FA87692 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TealiumUnityPlugin_t8B3797338182C27740783841F277A92D6D40AC55_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// TealiumUnityPlugin.OnConsentExpiration();
		IL2CPP_RUNTIME_CLASS_INIT(TealiumUnityPlugin_t8B3797338182C27740783841F277A92D6D40AC55_il2cpp_TypeInfo_var);
		TealiumUnityPlugin_OnConsentExpiration_m325589A0A06C82CA30DDE8B90B9984E6361E06BA(/*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void TealiumiOS::Initialize(TealiumCommon.TealiumConfig,System.Action`1<System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TealiumiOS_Initialize_mD4F34AD49647FB8C332B6FD4AA65B2EF0661AE9A (TealiumiOS_t733CCF8E376EBE4BA5D0C61D6D01A4CE824F8BC4 * __this, TealiumConfig_t57F15E74367FE1C2622F3D0395F144F4D505F4B7 * ___config0, Action_1_tCE2D770918A65CAD277C08C4E8C05385EA267E83 * ___callback1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InitializeDelegateMessage_tC95BD6C7C57DC458B247CC4A70D6AF216960A493_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonConvert_t046ADD1F0B1F4BD3323ABEE6BA9E41C189BDC21A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TealiumiOS_initializationResponseReceived_mF10D18463C3B0946F6678F3BFEA2B617C9C99AA0_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (callback != null) {
		Action_1_tCE2D770918A65CAD277C08C4E8C05385EA267E83 * L_0 = ___callback1;
		if (!L_0)
		{
			goto IL_0014;
		}
	}
	{
		// Tealium_SetInitializeDelegate(initializationResponseReceived);
		InitializeDelegateMessage_tC95BD6C7C57DC458B247CC4A70D6AF216960A493 * L_1 = (InitializeDelegateMessage_tC95BD6C7C57DC458B247CC4A70D6AF216960A493 *)il2cpp_codegen_object_new(InitializeDelegateMessage_tC95BD6C7C57DC458B247CC4A70D6AF216960A493_il2cpp_TypeInfo_var);
		InitializeDelegateMessage__ctor_mC818570297D2A3FB6964038D3C6F9890E96A8F1E(L_1, NULL, (intptr_t)((intptr_t)TealiumiOS_initializationResponseReceived_mF10D18463C3B0946F6678F3BFEA2B617C9C99AA0_RuntimeMethod_var), /*hidden argument*/NULL);
		TealiumiOS_Tealium_SetInitializeDelegate_m89E2D4C46574206CC635F2B008ACBE476AD5F126(L_1, /*hidden argument*/NULL);
	}

IL_0014:
	{
		// string? configString = JsonConvert.SerializeObject(config);
		TealiumConfig_t57F15E74367FE1C2622F3D0395F144F4D505F4B7 * L_2 = ___config0;
		IL2CPP_RUNTIME_CLASS_INIT(JsonConvert_t046ADD1F0B1F4BD3323ABEE6BA9E41C189BDC21A_il2cpp_TypeInfo_var);
		String_t* L_3;
		L_3 = JsonConvert_SerializeObject_mA9001ADA0DB9EA238BED332AB41743609EB6AD9D(L_2, /*hidden argument*/NULL);
		// Tealium_Initialize(configString);
		TealiumiOS_Tealium_Initialize_m24CEE3A18ED580627CE0A36985A0D54F8E9464C3(L_3, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void TealiumiOS::Terminate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TealiumiOS_Terminate_m43B6D47ABDBFBB60423CFCA7FCB078D8C173AEE3 (TealiumiOS_t733CCF8E376EBE4BA5D0C61D6D01A4CE824F8BC4 * __this, const RuntimeMethod* method)
{
	{
		// public void Terminate() => Tealium_Terminate();
		TealiumiOS_Tealium_Terminate_m15FC6955522EA9ECC8B03057F1E5E7A066344FF0(/*hidden argument*/NULL);
		return;
	}
}
// System.Void TealiumiOS::Track(TealiumCommon.TealiumDispatch)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TealiumiOS_Track_mCA37757B29FC8B705292D1DB4D28FCAF1C8487E6 (TealiumiOS_t733CCF8E376EBE4BA5D0C61D6D01A4CE824F8BC4 * __this, TealiumDispatch_tBC7A4951FD4926BB6EFF74865AF1EC9D1C6BAFB9 * ___dispatch0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonConvert_t046ADD1F0B1F4BD3323ABEE6BA9E41C189BDC21A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// string? dispatchString = JsonConvert.SerializeObject(dispatch);
		TealiumDispatch_tBC7A4951FD4926BB6EFF74865AF1EC9D1C6BAFB9 * L_0 = ___dispatch0;
		IL2CPP_RUNTIME_CLASS_INIT(JsonConvert_t046ADD1F0B1F4BD3323ABEE6BA9E41C189BDC21A_il2cpp_TypeInfo_var);
		String_t* L_1;
		L_1 = JsonConvert_SerializeObject_mA9001ADA0DB9EA238BED332AB41743609EB6AD9D(L_0, /*hidden argument*/NULL);
		// Tealium_Track(dispatchString);
		TealiumiOS_Tealium_Track_mEFA0B2E3BDEA3B93463A31BAE516BC555AC570E6(L_1, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void TealiumiOS::AddToDataLayer(System.Collections.Generic.Dictionary`2<System.String,System.Object>,TealiumCommon.Expiry)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TealiumiOS_AddToDataLayer_m6CDBCF8F91626899B69F1E62C7308539716808D4 (TealiumiOS_t733CCF8E376EBE4BA5D0C61D6D01A4CE824F8BC4 * __this, Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 * ___data0, Expiry_tCC1CF50318A9D2722F63B5E5842DCD2D0FCA8137  ___expiry1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonConvert_t046ADD1F0B1F4BD3323ABEE6BA9E41C189BDC21A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	{
		// string? dataLayer = JsonConvert.SerializeObject(data);
		Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 * L_0 = ___data0;
		IL2CPP_RUNTIME_CLASS_INIT(JsonConvert_t046ADD1F0B1F4BD3323ABEE6BA9E41C189BDC21A_il2cpp_TypeInfo_var);
		String_t* L_1;
		L_1 = JsonConvert_SerializeObject_mA9001ADA0DB9EA238BED332AB41743609EB6AD9D(L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		// if (dataLayer != null) {
		String_t* L_2 = V_0;
		if (!L_2)
		{
			goto IL_0017;
		}
	}
	{
		// Tealium_AddToDataLayer(dataLayer, expiry.Value);
		String_t* L_3 = V_0;
		String_t* L_4;
		L_4 = Expiry_get_Value_m26ED3077C06BF3DFEB44E88E432DA6149E203CA4_inline((Expiry_tCC1CF50318A9D2722F63B5E5842DCD2D0FCA8137 *)(&___expiry1), /*hidden argument*/NULL);
		TealiumiOS_Tealium_AddToDataLayer_m4FCE1CE87090F7F3A63EB73E56C57BFD8B8F95A5(L_3, L_4, /*hidden argument*/NULL);
	}

IL_0017:
	{
		// }
		return;
	}
}
// System.Object TealiumiOS::GetFromDataLayer(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * TealiumiOS_GetFromDataLayer_mE36420699743728CDB63D0BDD04BF9295CDA4D3D (TealiumiOS_t733CCF8E376EBE4BA5D0C61D6D01A4CE824F8BC4 * __this, String_t* ___id0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Item_m88AA4580D695AEA212B0DF17D8B55C98CF3B624D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonConvert_DeserializeObject_TisDictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399_m9C72B9A7CA671CB0DAE02CAE6B37E464873D87E6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonConvert_t046ADD1F0B1F4BD3323ABEE6BA9E41C189BDC21A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TealiumUnityPlugin_t8B3797338182C27740783841F277A92D6D40AC55_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	{
		// string valueString = Tealium_GetFromDataLayer(id);
		String_t* L_0 = ___id0;
		String_t* L_1;
		L_1 = TealiumiOS_Tealium_GetFromDataLayer_m308F0007E4340C53CAC1675E112991EFC3FEDC81(L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		// if (valueString == null) {
		String_t* L_2 = V_0;
		if (L_2)
		{
			goto IL_000c;
		}
	}
	{
		// return null;
		return NULL;
	}

IL_000c:
	{
		// Dictionary<string, object> valueDictionary = JsonConvert.DeserializeObject<Dictionary<string, object>>(valueString);
		String_t* L_3 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(JsonConvert_t046ADD1F0B1F4BD3323ABEE6BA9E41C189BDC21A_il2cpp_TypeInfo_var);
		Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 * L_4;
		L_4 = JsonConvert_DeserializeObject_TisDictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399_m9C72B9A7CA671CB0DAE02CAE6B37E464873D87E6(L_3, /*hidden argument*/JsonConvert_DeserializeObject_TisDictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399_m9C72B9A7CA671CB0DAE02CAE6B37E464873D87E6_RuntimeMethod_var);
		// object value = TealiumUnityPlugin.ToCollections(valueDictionary[id]);
		String_t* L_5 = ___id0;
		NullCheck(L_4);
		RuntimeObject * L_6;
		L_6 = Dictionary_2_get_Item_m88AA4580D695AEA212B0DF17D8B55C98CF3B624D(L_4, L_5, /*hidden argument*/Dictionary_2_get_Item_m88AA4580D695AEA212B0DF17D8B55C98CF3B624D_RuntimeMethod_var);
		IL2CPP_RUNTIME_CLASS_INIT(TealiumUnityPlugin_t8B3797338182C27740783841F277A92D6D40AC55_il2cpp_TypeInfo_var);
		RuntimeObject * L_7;
		L_7 = TealiumUnityPlugin_ToCollections_m5E2B1D64A02C34EE7ADBCCCB5B6C3040A2CC3C75(L_6, /*hidden argument*/NULL);
		// return value;
		return L_7;
	}
}
// System.Void TealiumiOS::RemoveFromDataLayer(System.Collections.Generic.List`1<System.String>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TealiumiOS_RemoveFromDataLayer_m0F7D20952D737D81A5AB3F7531C7FEDF5173AC3B (TealiumiOS_t733CCF8E376EBE4BA5D0C61D6D01A4CE824F8BC4 * __this, List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * ___keys0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC18C9BB6DF0D5C60CE5A5D2D3D6111BEB6F8CCEB);
		s_Il2CppMethodInitialized = true;
	}
	{
		// string stringKeys = String.Join(",", keys);
		List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * L_0 = ___keys0;
		String_t* L_1;
		L_1 = String_Join_m7E55204B5C94F9EB939D144E7EE684D016F90509(_stringLiteralC18C9BB6DF0D5C60CE5A5D2D3D6111BEB6F8CCEB, L_0, /*hidden argument*/NULL);
		// Tealium_RemoveFromDataLayer(stringKeys);
		TealiumiOS_Tealium_RemoveFromDataLayer_m6393645609F99C36A877A03793C60150CFE2CBA5(L_1, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void TealiumiOS::SetConsentStatus(TealiumCommon.ConsentStatus)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TealiumiOS_SetConsentStatus_m3767ECB3FD0BF60273384B24A02293130A2DA8C8 (TealiumiOS_t733CCF8E376EBE4BA5D0C61D6D01A4CE824F8BC4 * __this, ConsentStatus_t6263FFF5C886922D62B1DDC450EFE8CE2036F101  ___status0, const RuntimeMethod* method)
{
	{
		// public void SetConsentStatus(ConsentStatus status) => Tealium_SetConsentStatus(status.Value);
		String_t* L_0;
		L_0 = ConsentStatus_get_Value_mE6D4CEC397F8DF285456F8FC9CA485FAD4DE6819_inline((ConsentStatus_t6263FFF5C886922D62B1DDC450EFE8CE2036F101 *)(&___status0), /*hidden argument*/NULL);
		TealiumiOS_Tealium_SetConsentStatus_m3F2BFED60D249128C19A17DD5F1FE4F46E0BF168(L_0, /*hidden argument*/NULL);
		return;
	}
}
// TealiumCommon.ConsentStatus TealiumiOS::GetConsentStatus()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ConsentStatus_t6263FFF5C886922D62B1DDC450EFE8CE2036F101  TealiumiOS_GetConsentStatus_m3E40A262DE040A8A00A374B2A7A593409BD0A630 (TealiumiOS_t733CCF8E376EBE4BA5D0C61D6D01A4CE824F8BC4 * __this, const RuntimeMethod* method)
{
	{
		// public ConsentStatus GetConsentStatus() => ConsentStatus.FromString(Tealium_GetConsentStatus());
		String_t* L_0;
		L_0 = TealiumiOS_Tealium_GetConsentStatus_mD075010B8E615627E73A2C4551AF499771D44CF3(/*hidden argument*/NULL);
		ConsentStatus_t6263FFF5C886922D62B1DDC450EFE8CE2036F101  L_1;
		L_1 = ConsentStatus_FromString_m1E231205664209DC9B4A7095BEDFCB7D6ECB9BEF(L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Void TealiumiOS::SetConsentCategories(System.Collections.Generic.List`1<TealiumCommon.ConsentCategories>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TealiumiOS_SetConsentCategories_m51A28CD1C19EB559A4F1BFDE2AB91E00F130BE5D (TealiumiOS_t733CCF8E376EBE4BA5D0C61D6D01A4CE824F8BC4 * __this, List_1_tB719F9AEA1042BBCF17CC50DC1881550E74D3695 * ___categories0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Converter_2__ctor_m141352FD3DA11D48649963F9EA218AEFFD0A64BD_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Converter_2_t05F0413FDB211EFC6EFA05D8F8F2EF8FC9265BCB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_ConvertAll_TisString_t_m993F7A5FE3A66D5750E4815B6DD41DE547D8535F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_U3CSetConsentCategoriesU3Eb__35_0_m02AC32BBBB6B618534F0DD6C6C48ED692462E4E2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_t9D2D486C0C56ED747E3B614EF2F08E5FBD4ACCB4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC18C9BB6DF0D5C60CE5A5D2D3D6111BEB6F8CCEB);
		s_Il2CppMethodInitialized = true;
	}
	Converter_2_t05F0413FDB211EFC6EFA05D8F8F2EF8FC9265BCB * G_B2_0 = NULL;
	List_1_tB719F9AEA1042BBCF17CC50DC1881550E74D3695 * G_B2_1 = NULL;
	String_t* G_B2_2 = NULL;
	Converter_2_t05F0413FDB211EFC6EFA05D8F8F2EF8FC9265BCB * G_B1_0 = NULL;
	List_1_tB719F9AEA1042BBCF17CC50DC1881550E74D3695 * G_B1_1 = NULL;
	String_t* G_B1_2 = NULL;
	{
		// public void SetConsentCategories(List<ConsentCategories> categories) => Tealium_SetConsentCategories(String.Join(",", categories.ConvertAll(category => category.Value)));
		List_1_tB719F9AEA1042BBCF17CC50DC1881550E74D3695 * L_0 = ___categories0;
		IL2CPP_RUNTIME_CLASS_INIT(U3CU3Ec_t9D2D486C0C56ED747E3B614EF2F08E5FBD4ACCB4_il2cpp_TypeInfo_var);
		Converter_2_t05F0413FDB211EFC6EFA05D8F8F2EF8FC9265BCB * L_1 = ((U3CU3Ec_t9D2D486C0C56ED747E3B614EF2F08E5FBD4ACCB4_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t9D2D486C0C56ED747E3B614EF2F08E5FBD4ACCB4_il2cpp_TypeInfo_var))->get_U3CU3E9__35_0_1();
		Converter_2_t05F0413FDB211EFC6EFA05D8F8F2EF8FC9265BCB * L_2 = L_1;
		G_B1_0 = L_2;
		G_B1_1 = L_0;
		G_B1_2 = _stringLiteralC18C9BB6DF0D5C60CE5A5D2D3D6111BEB6F8CCEB;
		if (L_2)
		{
			G_B2_0 = L_2;
			G_B2_1 = L_0;
			G_B2_2 = _stringLiteralC18C9BB6DF0D5C60CE5A5D2D3D6111BEB6F8CCEB;
			goto IL_0025;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(U3CU3Ec_t9D2D486C0C56ED747E3B614EF2F08E5FBD4ACCB4_il2cpp_TypeInfo_var);
		U3CU3Ec_t9D2D486C0C56ED747E3B614EF2F08E5FBD4ACCB4 * L_3 = ((U3CU3Ec_t9D2D486C0C56ED747E3B614EF2F08E5FBD4ACCB4_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t9D2D486C0C56ED747E3B614EF2F08E5FBD4ACCB4_il2cpp_TypeInfo_var))->get_U3CU3E9_0();
		Converter_2_t05F0413FDB211EFC6EFA05D8F8F2EF8FC9265BCB * L_4 = (Converter_2_t05F0413FDB211EFC6EFA05D8F8F2EF8FC9265BCB *)il2cpp_codegen_object_new(Converter_2_t05F0413FDB211EFC6EFA05D8F8F2EF8FC9265BCB_il2cpp_TypeInfo_var);
		Converter_2__ctor_m141352FD3DA11D48649963F9EA218AEFFD0A64BD(L_4, L_3, (intptr_t)((intptr_t)U3CU3Ec_U3CSetConsentCategoriesU3Eb__35_0_m02AC32BBBB6B618534F0DD6C6C48ED692462E4E2_RuntimeMethod_var), /*hidden argument*/Converter_2__ctor_m141352FD3DA11D48649963F9EA218AEFFD0A64BD_RuntimeMethod_var);
		Converter_2_t05F0413FDB211EFC6EFA05D8F8F2EF8FC9265BCB * L_5 = L_4;
		((U3CU3Ec_t9D2D486C0C56ED747E3B614EF2F08E5FBD4ACCB4_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t9D2D486C0C56ED747E3B614EF2F08E5FBD4ACCB4_il2cpp_TypeInfo_var))->set_U3CU3E9__35_0_1(L_5);
		G_B2_0 = L_5;
		G_B2_1 = G_B1_1;
		G_B2_2 = G_B1_2;
	}

IL_0025:
	{
		NullCheck(G_B2_1);
		List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * L_6;
		L_6 = List_1_ConvertAll_TisString_t_m993F7A5FE3A66D5750E4815B6DD41DE547D8535F(G_B2_1, G_B2_0, /*hidden argument*/List_1_ConvertAll_TisString_t_m993F7A5FE3A66D5750E4815B6DD41DE547D8535F_RuntimeMethod_var);
		String_t* L_7;
		L_7 = String_Join_m7E55204B5C94F9EB939D144E7EE684D016F90509(G_B2_2, L_6, /*hidden argument*/NULL);
		TealiumiOS_Tealium_SetConsentCategories_mFE62A43D2EA8C219484CA49D18599D3277F6E8A7(L_7, /*hidden argument*/NULL);
		return;
	}
}
// System.Collections.Generic.List`1<TealiumCommon.ConsentCategories> TealiumiOS::GetConsentCategories()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_tB719F9AEA1042BBCF17CC50DC1881550E74D3695 * TealiumiOS_GetConsentCategories_m8ABD7B6F1255F5ED486052B35381384CCDE091F0 (TealiumiOS_t733CCF8E376EBE4BA5D0C61D6D01A4CE824F8BC4 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Converter_2__ctor_mB0A0BDAE8830CC5A9B0328128E1C51944643F609_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Converter_2_tF015A85C226F06C29481EF50AC5392D4975A7B7D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_ToList_TisString_t_m6685B37A12E077BE26D988D9881A6EA4BF3AE295_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_ConvertAll_TisConsentCategories_t7F1FDE7995E2ABB2BEF4A4DC381AE8DEE9B8429F_m8905DF3C269C817A2860FF5B6FAA60411982A49E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_U3CGetConsentCategoriesU3Eb__36_0_mD7CEECA49895BCECBC0709574462646A80ED3BA3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_t9D2D486C0C56ED747E3B614EF2F08E5FBD4ACCB4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Converter_2_tF015A85C226F06C29481EF50AC5392D4975A7B7D * G_B2_0 = NULL;
	List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * G_B2_1 = NULL;
	Converter_2_tF015A85C226F06C29481EF50AC5392D4975A7B7D * G_B1_0 = NULL;
	List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * G_B1_1 = NULL;
	{
		// public List<ConsentCategories> GetConsentCategories() => Tealium_GetConsentCategories().Split(',').ToList().ConvertAll(category => ConsentCategories.FromString(category));
		String_t* L_0;
		L_0 = TealiumiOS_Tealium_GetConsentCategories_m9DA31041D2D97CCC320180512585CCCB53D91E38(/*hidden argument*/NULL);
		CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_1 = (CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34*)(CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34*)SZArrayNew(CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34_il2cpp_TypeInfo_var, (uint32_t)1);
		CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_2 = L_1;
		NullCheck(L_2);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(0), (Il2CppChar)((int32_t)44));
		NullCheck(L_0);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_3;
		L_3 = String_Split_m2C74DC2B85B322998094BEDE787C378822E1F28B(L_0, L_2, /*hidden argument*/NULL);
		List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * L_4;
		L_4 = Enumerable_ToList_TisString_t_m6685B37A12E077BE26D988D9881A6EA4BF3AE295((RuntimeObject*)(RuntimeObject*)L_3, /*hidden argument*/Enumerable_ToList_TisString_t_m6685B37A12E077BE26D988D9881A6EA4BF3AE295_RuntimeMethod_var);
		IL2CPP_RUNTIME_CLASS_INIT(U3CU3Ec_t9D2D486C0C56ED747E3B614EF2F08E5FBD4ACCB4_il2cpp_TypeInfo_var);
		Converter_2_tF015A85C226F06C29481EF50AC5392D4975A7B7D * L_5 = ((U3CU3Ec_t9D2D486C0C56ED747E3B614EF2F08E5FBD4ACCB4_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t9D2D486C0C56ED747E3B614EF2F08E5FBD4ACCB4_il2cpp_TypeInfo_var))->get_U3CU3E9__36_0_2();
		Converter_2_tF015A85C226F06C29481EF50AC5392D4975A7B7D * L_6 = L_5;
		G_B1_0 = L_6;
		G_B1_1 = L_4;
		if (L_6)
		{
			G_B2_0 = L_6;
			G_B2_1 = L_4;
			goto IL_0039;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(U3CU3Ec_t9D2D486C0C56ED747E3B614EF2F08E5FBD4ACCB4_il2cpp_TypeInfo_var);
		U3CU3Ec_t9D2D486C0C56ED747E3B614EF2F08E5FBD4ACCB4 * L_7 = ((U3CU3Ec_t9D2D486C0C56ED747E3B614EF2F08E5FBD4ACCB4_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t9D2D486C0C56ED747E3B614EF2F08E5FBD4ACCB4_il2cpp_TypeInfo_var))->get_U3CU3E9_0();
		Converter_2_tF015A85C226F06C29481EF50AC5392D4975A7B7D * L_8 = (Converter_2_tF015A85C226F06C29481EF50AC5392D4975A7B7D *)il2cpp_codegen_object_new(Converter_2_tF015A85C226F06C29481EF50AC5392D4975A7B7D_il2cpp_TypeInfo_var);
		Converter_2__ctor_mB0A0BDAE8830CC5A9B0328128E1C51944643F609(L_8, L_7, (intptr_t)((intptr_t)U3CU3Ec_U3CGetConsentCategoriesU3Eb__36_0_mD7CEECA49895BCECBC0709574462646A80ED3BA3_RuntimeMethod_var), /*hidden argument*/Converter_2__ctor_mB0A0BDAE8830CC5A9B0328128E1C51944643F609_RuntimeMethod_var);
		Converter_2_tF015A85C226F06C29481EF50AC5392D4975A7B7D * L_9 = L_8;
		((U3CU3Ec_t9D2D486C0C56ED747E3B614EF2F08E5FBD4ACCB4_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t9D2D486C0C56ED747E3B614EF2F08E5FBD4ACCB4_il2cpp_TypeInfo_var))->set_U3CU3E9__36_0_2(L_9);
		G_B2_0 = L_9;
		G_B2_1 = G_B1_1;
	}

IL_0039:
	{
		NullCheck(G_B2_1);
		List_1_tB719F9AEA1042BBCF17CC50DC1881550E74D3695 * L_10;
		L_10 = List_1_ConvertAll_TisConsentCategories_t7F1FDE7995E2ABB2BEF4A4DC381AE8DEE9B8429F_m8905DF3C269C817A2860FF5B6FAA60411982A49E(G_B2_1, G_B2_0, /*hidden argument*/List_1_ConvertAll_TisConsentCategories_t7F1FDE7995E2ABB2BEF4A4DC381AE8DEE9B8429F_m8905DF3C269C817A2860FF5B6FAA60411982A49E_RuntimeMethod_var);
		return L_10;
	}
}
// System.Void TealiumiOS::AddRemoteCommand(System.String,System.Action`1<System.Collections.Generic.Dictionary`2<System.String,System.Object>>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TealiumiOS_AddRemoteCommand_m0CE8AF8F44397F21D55C6B898C77E540713EAC08 (TealiumiOS_t733CCF8E376EBE4BA5D0C61D6D01A4CE824F8BC4 * __this, String_t* ___id0, Action_1_t6B2EAA2D3491CBA6FEF1ECDF624EEF00DFD194C1 * ___callback1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RemoteCommandDelegateMessage_t5D69DB6883CD6653EC3E70F18E3C096FD043342D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TealiumiOS_remoteCommandReceived_m0946C4CE24BF4B75C7D0B023C7F02927B7C557B2_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Tealium_SetRemoteCommandDelegate(remoteCommandReceived);
		RemoteCommandDelegateMessage_t5D69DB6883CD6653EC3E70F18E3C096FD043342D * L_0 = (RemoteCommandDelegateMessage_t5D69DB6883CD6653EC3E70F18E3C096FD043342D *)il2cpp_codegen_object_new(RemoteCommandDelegateMessage_t5D69DB6883CD6653EC3E70F18E3C096FD043342D_il2cpp_TypeInfo_var);
		RemoteCommandDelegateMessage__ctor_mF34246CC8940B6CAABA5DE3CE3D32B8D93899F07(L_0, NULL, (intptr_t)((intptr_t)TealiumiOS_remoteCommandReceived_m0946C4CE24BF4B75C7D0B023C7F02927B7C557B2_RuntimeMethod_var), /*hidden argument*/NULL);
		TealiumiOS_Tealium_SetRemoteCommandDelegate_mA354FE025118691025F63B1E9D32F8E3B6E18DD1(L_0, /*hidden argument*/NULL);
		// Tealium_AddRemoteCommand(id);
		String_t* L_1 = ___id0;
		TealiumiOS_Tealium_AddRemoteCommand_mEA73257FAE7C2E8D346BFC739D3F03191EBED98D(L_1, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void TealiumiOS::RemoveRemoteCommand(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TealiumiOS_RemoveRemoteCommand_m768E86ABC687CF22A97E0298FBFE42014596DB3A (TealiumiOS_t733CCF8E376EBE4BA5D0C61D6D01A4CE824F8BC4 * __this, String_t* ___id0, const RuntimeMethod* method)
{
	{
		// public void RemoveRemoteCommand(string id) => Tealium_RemoveRemoteCommand(id);
		String_t* L_0 = ___id0;
		TealiumiOS_Tealium_RemoveRemoteCommand_m8C86040015B1F90420D7A8567150B1C853AAA5FE(L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void TealiumiOS::JoinTrace(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TealiumiOS_JoinTrace_mFCC8142D68CEEFFD0355A3C00A647325D18E20BB (TealiumiOS_t733CCF8E376EBE4BA5D0C61D6D01A4CE824F8BC4 * __this, String_t* ___id0, const RuntimeMethod* method)
{
	{
		// public void JoinTrace(string id) => Tealium_JoinTrace(id);
		String_t* L_0 = ___id0;
		TealiumiOS_Tealium_JoinTrace_m39C30E34AB9F5824DCC368313F347375B9B7A6AC(L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void TealiumiOS::LeaveTrace()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TealiumiOS_LeaveTrace_m54DE740CAE1B0DD3004B75448DD008C875666253 (TealiumiOS_t733CCF8E376EBE4BA5D0C61D6D01A4CE824F8BC4 * __this, const RuntimeMethod* method)
{
	{
		// public void LeaveTrace() => Tealium_LeaveTrace();
		TealiumiOS_Tealium_LeaveTrace_m6C5C5CD1B1E52F70EA2F4BCB9532C13CD1A8B733(/*hidden argument*/NULL);
		return;
	}
}
// System.Void TealiumiOS::SetVisitorServiceListener(System.Action`1<System.Collections.Generic.Dictionary`2<System.String,System.Object>>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TealiumiOS_SetVisitorServiceListener_mD3AD51A4675450164D39662E2D9C55CAE6C62D21 (TealiumiOS_t733CCF8E376EBE4BA5D0C61D6D01A4CE824F8BC4 * __this, Action_1_t6B2EAA2D3491CBA6FEF1ECDF624EEF00DFD194C1 * ___callback0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TealiumiOS_visitorServiceUpdateReceived_mD5ED91A5C2447F4F238D19197D12ACE013849733_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&VisitorServiceDelegateMessage_t6B8D159765A2F10FA86086BFA8BD3F4FFB9DE18B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public void SetVisitorServiceListener(Action<Dictionary<string, object>> callback) => Tealium_SetVisitorServiceDelegate(visitorServiceUpdateReceived);
		VisitorServiceDelegateMessage_t6B8D159765A2F10FA86086BFA8BD3F4FFB9DE18B * L_0 = (VisitorServiceDelegateMessage_t6B8D159765A2F10FA86086BFA8BD3F4FFB9DE18B *)il2cpp_codegen_object_new(VisitorServiceDelegateMessage_t6B8D159765A2F10FA86086BFA8BD3F4FFB9DE18B_il2cpp_TypeInfo_var);
		VisitorServiceDelegateMessage__ctor_m7760E515AE1925C13E3EE7D68CFBD6225EDD5DA8(L_0, NULL, (intptr_t)((intptr_t)TealiumiOS_visitorServiceUpdateReceived_mD5ED91A5C2447F4F238D19197D12ACE013849733_RuntimeMethod_var), /*hidden argument*/NULL);
		TealiumiOS_Tealium_SetVisitorServiceDelegate_m37C9EA4AAA2FE47269AF7C236F40493AAD2B1E38(L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void TealiumiOS::SetConsentExpiryListener(System.Action)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TealiumiOS_SetConsentExpiryListener_m4CE46E62D2347700E1FE3BB79D24AFE2C55B1847 (TealiumiOS_t733CCF8E376EBE4BA5D0C61D6D01A4CE824F8BC4 * __this, Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * ___callback0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConsentExpiryDelegateMessage_t086235450063F54925F0E78B7BE640C668914E6D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TealiumiOS_consentExpirationReceived_m239594694333B253BA54AEA556015ABF9FA87692_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public void SetConsentExpiryListener(Action callback) => Tealium_SetConsentExpiryDelegate(consentExpirationReceived);
		ConsentExpiryDelegateMessage_t086235450063F54925F0E78B7BE640C668914E6D * L_0 = (ConsentExpiryDelegateMessage_t086235450063F54925F0E78B7BE640C668914E6D *)il2cpp_codegen_object_new(ConsentExpiryDelegateMessage_t086235450063F54925F0E78B7BE640C668914E6D_il2cpp_TypeInfo_var);
		ConsentExpiryDelegateMessage__ctor_mCE24545D358D22749BB0849A2D2C6096B98DC30F(L_0, NULL, (intptr_t)((intptr_t)TealiumiOS_consentExpirationReceived_m239594694333B253BA54AEA556015ABF9FA87692_RuntimeMethod_var), /*hidden argument*/NULL);
		TealiumiOS_Tealium_SetConsentExpiryDelegate_m2BFA8C74D9897A41FC056399EF96F8F15DB8A556(L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.String TealiumiOS::GetVisitorId()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* TealiumiOS_GetVisitorId_m8602EA75F9F77ED7352D7B988F219FD2572AC729 (TealiumiOS_t733CCF8E376EBE4BA5D0C61D6D01A4CE824F8BC4 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	{
		// string visitorId = Tealium_GetVisitorId();
		String_t* L_0;
		L_0 = TealiumiOS_Tealium_GetVisitorId_m4F213D3E9875C11ACB9AE43D6AFEE0DCB485828B(/*hidden argument*/NULL);
		V_0 = L_0;
		// if (visitorId == "") {
		String_t* L_1 = V_0;
		bool L_2;
		L_2 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_1, _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_0015;
		}
	}
	{
		// return null;
		return (String_t*)NULL;
	}

IL_0015:
	{
		// return visitorId;
		String_t* L_3 = V_0;
		return L_3;
	}
}
// System.Void TealiumiOS::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TealiumiOS__ctor_m319377341A42A585B18118A88243DC63C8BAD535 (TealiumiOS_t733CCF8E376EBE4BA5D0C61D6D01A4CE824F8BC4 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Conversion methods for marshalling of: TealiumCommon.TimeUnit
IL2CPP_EXTERN_C void TimeUnit_tEDC26F433AD0E93FB173CBB14399B6B806B7F78D_marshal_pinvoke(const TimeUnit_tEDC26F433AD0E93FB173CBB14399B6B806B7F78D& unmarshaled, TimeUnit_tEDC26F433AD0E93FB173CBB14399B6B806B7F78D_marshaled_pinvoke& marshaled)
{
	marshaled.___U3CValueU3Ek__BackingField_0 = il2cpp_codegen_marshal_string(unmarshaled.get_U3CValueU3Ek__BackingField_0());
}
IL2CPP_EXTERN_C void TimeUnit_tEDC26F433AD0E93FB173CBB14399B6B806B7F78D_marshal_pinvoke_back(const TimeUnit_tEDC26F433AD0E93FB173CBB14399B6B806B7F78D_marshaled_pinvoke& marshaled, TimeUnit_tEDC26F433AD0E93FB173CBB14399B6B806B7F78D& unmarshaled)
{
	unmarshaled.set_U3CValueU3Ek__BackingField_0(il2cpp_codegen_marshal_string_result(marshaled.___U3CValueU3Ek__BackingField_0));
}
// Conversion method for clean up from marshalling of: TealiumCommon.TimeUnit
IL2CPP_EXTERN_C void TimeUnit_tEDC26F433AD0E93FB173CBB14399B6B806B7F78D_marshal_pinvoke_cleanup(TimeUnit_tEDC26F433AD0E93FB173CBB14399B6B806B7F78D_marshaled_pinvoke& marshaled)
{
	il2cpp_codegen_marshal_free(marshaled.___U3CValueU3Ek__BackingField_0);
	marshaled.___U3CValueU3Ek__BackingField_0 = NULL;
}
// Conversion methods for marshalling of: TealiumCommon.TimeUnit
IL2CPP_EXTERN_C void TimeUnit_tEDC26F433AD0E93FB173CBB14399B6B806B7F78D_marshal_com(const TimeUnit_tEDC26F433AD0E93FB173CBB14399B6B806B7F78D& unmarshaled, TimeUnit_tEDC26F433AD0E93FB173CBB14399B6B806B7F78D_marshaled_com& marshaled)
{
	marshaled.___U3CValueU3Ek__BackingField_0 = il2cpp_codegen_marshal_bstring(unmarshaled.get_U3CValueU3Ek__BackingField_0());
}
IL2CPP_EXTERN_C void TimeUnit_tEDC26F433AD0E93FB173CBB14399B6B806B7F78D_marshal_com_back(const TimeUnit_tEDC26F433AD0E93FB173CBB14399B6B806B7F78D_marshaled_com& marshaled, TimeUnit_tEDC26F433AD0E93FB173CBB14399B6B806B7F78D& unmarshaled)
{
	unmarshaled.set_U3CValueU3Ek__BackingField_0(il2cpp_codegen_marshal_bstring_result(marshaled.___U3CValueU3Ek__BackingField_0));
}
// Conversion method for clean up from marshalling of: TealiumCommon.TimeUnit
IL2CPP_EXTERN_C void TimeUnit_tEDC26F433AD0E93FB173CBB14399B6B806B7F78D_marshal_com_cleanup(TimeUnit_tEDC26F433AD0E93FB173CBB14399B6B806B7F78D_marshaled_com& marshaled)
{
	il2cpp_codegen_marshal_free_bstring(marshaled.___U3CValueU3Ek__BackingField_0);
	marshaled.___U3CValueU3Ek__BackingField_0 = NULL;
}
// System.Void TealiumCommon.TimeUnit::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TimeUnit__ctor_m0E9CA962D6F1AEBBB6B0CF3ACE84819C92821DE1 (TimeUnit_tEDC26F433AD0E93FB173CBB14399B6B806B7F78D * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		// private TimeUnit(string value) { Value = value; }
		String_t* L_0 = ___value0;
		TimeUnit_set_Value_mC79E04C1505BB47A15575375C2F436F0AC225ED3_inline((TimeUnit_tEDC26F433AD0E93FB173CBB14399B6B806B7F78D *)__this, L_0, /*hidden argument*/NULL);
		// private TimeUnit(string value) { Value = value; }
		return;
	}
}
IL2CPP_EXTERN_C  void TimeUnit__ctor_m0E9CA962D6F1AEBBB6B0CF3ACE84819C92821DE1_AdjustorThunk (RuntimeObject * __this, String_t* ___value0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	TimeUnit_tEDC26F433AD0E93FB173CBB14399B6B806B7F78D * _thisAdjusted = reinterpret_cast<TimeUnit_tEDC26F433AD0E93FB173CBB14399B6B806B7F78D *>(__this + _offset);
	TimeUnit__ctor_m0E9CA962D6F1AEBBB6B0CF3ACE84819C92821DE1(_thisAdjusted, ___value0, method);
}
// System.String TealiumCommon.TimeUnit::get_Value()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* TimeUnit_get_Value_m9392FC6C65BB94088AAADC8EA5F63470CBB1FADC (TimeUnit_tEDC26F433AD0E93FB173CBB14399B6B806B7F78D * __this, const RuntimeMethod* method)
{
	{
		// public string Value { get; set; }
		String_t* L_0 = __this->get_U3CValueU3Ek__BackingField_0();
		return L_0;
	}
}
IL2CPP_EXTERN_C  String_t* TimeUnit_get_Value_m9392FC6C65BB94088AAADC8EA5F63470CBB1FADC_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	TimeUnit_tEDC26F433AD0E93FB173CBB14399B6B806B7F78D * _thisAdjusted = reinterpret_cast<TimeUnit_tEDC26F433AD0E93FB173CBB14399B6B806B7F78D *>(__this + _offset);
	String_t* _returnValue;
	_returnValue = TimeUnit_get_Value_m9392FC6C65BB94088AAADC8EA5F63470CBB1FADC_inline(_thisAdjusted, method);
	return _returnValue;
}
// System.Void TealiumCommon.TimeUnit::set_Value(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TimeUnit_set_Value_mC79E04C1505BB47A15575375C2F436F0AC225ED3 (TimeUnit_tEDC26F433AD0E93FB173CBB14399B6B806B7F78D * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		// public string Value { get; set; }
		String_t* L_0 = ___value0;
		__this->set_U3CValueU3Ek__BackingField_0(L_0);
		return;
	}
}
IL2CPP_EXTERN_C  void TimeUnit_set_Value_mC79E04C1505BB47A15575375C2F436F0AC225ED3_AdjustorThunk (RuntimeObject * __this, String_t* ___value0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	TimeUnit_tEDC26F433AD0E93FB173CBB14399B6B806B7F78D * _thisAdjusted = reinterpret_cast<TimeUnit_tEDC26F433AD0E93FB173CBB14399B6B806B7F78D *>(__this + _offset);
	TimeUnit_set_Value_mC79E04C1505BB47A15575375C2F436F0AC225ED3_inline(_thisAdjusted, ___value0, method);
}
// TealiumCommon.TimeUnit TealiumCommon.TimeUnit::get_Minutes()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TimeUnit_tEDC26F433AD0E93FB173CBB14399B6B806B7F78D  TimeUnit_get_Minutes_mFD026A4712DA5EE9E07E5F34300978E0926DC8A0 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6912992FC50D2764B34BA8408AECF2DF5DB8080F);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static TimeUnit Minutes { get { return new TimeUnit("minutes"); } }
		TimeUnit_tEDC26F433AD0E93FB173CBB14399B6B806B7F78D  L_0;
		memset((&L_0), 0, sizeof(L_0));
		TimeUnit__ctor_m0E9CA962D6F1AEBBB6B0CF3ACE84819C92821DE1((&L_0), _stringLiteral6912992FC50D2764B34BA8408AECF2DF5DB8080F, /*hidden argument*/NULL);
		return L_0;
	}
}
// TealiumCommon.TimeUnit TealiumCommon.TimeUnit::get_Hours()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TimeUnit_tEDC26F433AD0E93FB173CBB14399B6B806B7F78D  TimeUnit_get_Hours_m6B82D3E06A6FD51BACC733940A6C1731752E91CF (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9104E82394351D786F4B739689D0B28ACF18A43D);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static TimeUnit Hours { get { return new TimeUnit("hours"); } }
		TimeUnit_tEDC26F433AD0E93FB173CBB14399B6B806B7F78D  L_0;
		memset((&L_0), 0, sizeof(L_0));
		TimeUnit__ctor_m0E9CA962D6F1AEBBB6B0CF3ACE84819C92821DE1((&L_0), _stringLiteral9104E82394351D786F4B739689D0B28ACF18A43D, /*hidden argument*/NULL);
		return L_0;
	}
}
// TealiumCommon.TimeUnit TealiumCommon.TimeUnit::get_Days()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TimeUnit_tEDC26F433AD0E93FB173CBB14399B6B806B7F78D  TimeUnit_get_Days_m9D4C67BEEC52987FD1893890B16D4EA26D3DD78C (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8243BA18D267E0E612210F4920079D9700A5DEEF);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static TimeUnit Days { get { return new TimeUnit("days"); } }
		TimeUnit_tEDC26F433AD0E93FB173CBB14399B6B806B7F78D  L_0;
		memset((&L_0), 0, sizeof(L_0));
		TimeUnit__ctor_m0E9CA962D6F1AEBBB6B0CF3ACE84819C92821DE1((&L_0), _stringLiteral8243BA18D267E0E612210F4920079D9700A5DEEF, /*hidden argument*/NULL);
		return L_0;
	}
}
// TealiumCommon.TimeUnit TealiumCommon.TimeUnit::get_Months()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TimeUnit_tEDC26F433AD0E93FB173CBB14399B6B806B7F78D  TimeUnit_get_Months_m31F94925F71FD14D90AF1B345479F825DC6C1F60 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD83041E889BDAEB8F029AF50549D1347BD7FC949);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static TimeUnit Months { get { return new TimeUnit("months"); } }
		TimeUnit_tEDC26F433AD0E93FB173CBB14399B6B806B7F78D  L_0;
		memset((&L_0), 0, sizeof(L_0));
		TimeUnit__ctor_m0E9CA962D6F1AEBBB6B0CF3ACE84819C92821DE1((&L_0), _stringLiteralD83041E889BDAEB8F029AF50549D1347BD7FC949, /*hidden argument*/NULL);
		return L_0;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void TealiumAndroid/<>c::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__cctor_mD489ECB1432D9B11B1889CE32117B9C39FDF31CA (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_t09F86AA9C724B6431311FD4F6B328ECB9D87A170_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CU3Ec_t09F86AA9C724B6431311FD4F6B328ECB9D87A170 * L_0 = (U3CU3Ec_t09F86AA9C724B6431311FD4F6B328ECB9D87A170 *)il2cpp_codegen_object_new(U3CU3Ec_t09F86AA9C724B6431311FD4F6B328ECB9D87A170_il2cpp_TypeInfo_var);
		U3CU3Ec__ctor_mAE8A71250486D6D0AA6FCF9CA9024394B0E7179F(L_0, /*hidden argument*/NULL);
		((U3CU3Ec_t09F86AA9C724B6431311FD4F6B328ECB9D87A170_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t09F86AA9C724B6431311FD4F6B328ECB9D87A170_il2cpp_TypeInfo_var))->set_U3CU3E9_0(L_0);
		return;
	}
}
// System.Void TealiumAndroid/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_mAE8A71250486D6D0AA6FCF9CA9024394B0E7179F (U3CU3Ec_t09F86AA9C724B6431311FD4F6B328ECB9D87A170 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// TealiumCommon.ConsentCategories TealiumAndroid/<>c::<GetConsentCategories>b__12_0(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ConsentCategories_t7F1FDE7995E2ABB2BEF4A4DC381AE8DEE9B8429F  U3CU3Ec_U3CGetConsentCategoriesU3Eb__12_0_mB5493B4DB69DFDEDE5D6391E60E81A003D38839B (U3CU3Ec_t09F86AA9C724B6431311FD4F6B328ECB9D87A170 * __this, String_t* ___category0, const RuntimeMethod* method)
{
	{
		// List<ConsentCategories> formattedCategories = categories.Split(',').ToList().ConvertAll(category => ConsentCategories.FromString(category));
		String_t* L_0 = ___category0;
		ConsentCategories_t7F1FDE7995E2ABB2BEF4A4DC381AE8DEE9B8429F  L_1;
		L_1 = ConsentCategories_FromString_m376068953C39588BC3206B6D1C6BD7D9D0AC69CB(L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void TealiumCommon.TealiumConfig/<>c::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__cctor_m90B42C3AF288CC391ECD8016482C34E44E287A5A (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_t36D92B931A0CC3CAB85CB5872E3A3AD4EB480F83_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CU3Ec_t36D92B931A0CC3CAB85CB5872E3A3AD4EB480F83 * L_0 = (U3CU3Ec_t36D92B931A0CC3CAB85CB5872E3A3AD4EB480F83 *)il2cpp_codegen_object_new(U3CU3Ec_t36D92B931A0CC3CAB85CB5872E3A3AD4EB480F83_il2cpp_TypeInfo_var);
		U3CU3Ec__ctor_m664FDA1C4D794A3878AD16D83A9EAD4F06DC6CF7(L_0, /*hidden argument*/NULL);
		((U3CU3Ec_t36D92B931A0CC3CAB85CB5872E3A3AD4EB480F83_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t36D92B931A0CC3CAB85CB5872E3A3AD4EB480F83_il2cpp_TypeInfo_var))->set_U3CU3E9_0(L_0);
		return;
	}
}
// System.Void TealiumCommon.TealiumConfig/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m664FDA1C4D794A3878AD16D83A9EAD4F06DC6CF7 (U3CU3Ec_t36D92B931A0CC3CAB85CB5872E3A3AD4EB480F83 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.String TealiumCommon.TealiumConfig/<>c::<.ctor>b__23_0(TealiumCommon.Dispatchers)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* U3CU3Ec_U3C_ctorU3Eb__23_0_m45EB64D6EA93C3BDE4D0EFDA90B9B22982B76AE2 (U3CU3Ec_t36D92B931A0CC3CAB85CB5872E3A3AD4EB480F83 * __this, Dispatchers_tB9298ED86C40129DF8BF09E2B9EBEC23F8C5A236  ___dispatcher0, const RuntimeMethod* method)
{
	{
		// this.dispatchers = dispatchers.ConvertAll<string>(dispatcher => dispatcher.Value);
		String_t* L_0;
		L_0 = Dispatchers_get_Value_m8E3CBA1DD9471A6DD45BCB5B2F81553E102D9510_inline((Dispatchers_tB9298ED86C40129DF8BF09E2B9EBEC23F8C5A236 *)(&___dispatcher0), /*hidden argument*/NULL);
		return L_0;
	}
}
// System.String TealiumCommon.TealiumConfig/<>c::<.ctor>b__23_1(TealiumCommon.Collectors)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* U3CU3Ec_U3C_ctorU3Eb__23_1_mCD65AD4FE7A3FA13BAA222CEAB1757550EB5B7CA (U3CU3Ec_t36D92B931A0CC3CAB85CB5872E3A3AD4EB480F83 * __this, Collectors_tF2C4928DE0A75E12B7700E84D52749D66D48F723  ___collector0, const RuntimeMethod* method)
{
	{
		// this.collectors = collectors.ConvertAll<string>(collector => collector.Value);
		String_t* L_0;
		L_0 = Collectors_get_Value_mA96FD040FE21ACFE885603005B2042D21E2B0F52_inline((Collectors_tF2C4928DE0A75E12B7700E84D52749D66D48F723 *)(&___collector0), /*hidden argument*/NULL);
		return L_0;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void TealiumUnityPlugin/<>c::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__cctor_mCFDB7C81BE0726CC8ABBEFB498C8CCBF40F89498 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_t7521AAF4473714E35BDD03C93690F00668C0D29E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CU3Ec_t7521AAF4473714E35BDD03C93690F00668C0D29E * L_0 = (U3CU3Ec_t7521AAF4473714E35BDD03C93690F00668C0D29E *)il2cpp_codegen_object_new(U3CU3Ec_t7521AAF4473714E35BDD03C93690F00668C0D29E_il2cpp_TypeInfo_var);
		U3CU3Ec__ctor_m82C293067FD21D21F5BEB94AC7C81204A3628CC8(L_0, /*hidden argument*/NULL);
		((U3CU3Ec_t7521AAF4473714E35BDD03C93690F00668C0D29E_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t7521AAF4473714E35BDD03C93690F00668C0D29E_il2cpp_TypeInfo_var))->set_U3CU3E9_0(L_0);
		return;
	}
}
// System.Void TealiumUnityPlugin/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m82C293067FD21D21F5BEB94AC7C81204A3628CC8 (U3CU3Ec_t7521AAF4473714E35BDD03C93690F00668C0D29E * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.String TealiumUnityPlugin/<>c::<ToCollections>b__29_0(System.Collections.Generic.KeyValuePair`2<System.String,System.Object>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* U3CU3Ec_U3CToCollectionsU3Eb__29_0_m47930E76A8BB5C4199A42255C8C9442AFB6AB660 (U3CU3Ec_t7521AAF4473714E35BDD03C93690F00668C0D29E * __this, KeyValuePair_2_tD6E57B7EAC6134DCA97F39E5E598EB43B44A5EAE  ___k0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeyValuePair_2_get_Key_mC43FCB322E586364D4402E639DB247702C4A6E6F_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (o is JObject jo) return jo.ToObject<IDictionary<string, object>>().ToDictionary(k => k.Key, v => ToCollections(v.Value));
		String_t* L_0;
		L_0 = KeyValuePair_2_get_Key_mC43FCB322E586364D4402E639DB247702C4A6E6F_inline((KeyValuePair_2_tD6E57B7EAC6134DCA97F39E5E598EB43B44A5EAE *)(&___k0), /*hidden argument*/KeyValuePair_2_get_Key_mC43FCB322E586364D4402E639DB247702C4A6E6F_RuntimeMethod_var);
		return L_0;
	}
}
// System.Object TealiumUnityPlugin/<>c::<ToCollections>b__29_1(System.Collections.Generic.KeyValuePair`2<System.String,System.Object>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CU3Ec_U3CToCollectionsU3Eb__29_1_m75378B42603DD66A38FA9F1EB8F406B93DBDDD1B (U3CU3Ec_t7521AAF4473714E35BDD03C93690F00668C0D29E * __this, KeyValuePair_2_tD6E57B7EAC6134DCA97F39E5E598EB43B44A5EAE  ___v0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeyValuePair_2_get_Value_m9506505CADCD1ED074BD28FB1B26D48BBC7A9FA7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TealiumUnityPlugin_t8B3797338182C27740783841F277A92D6D40AC55_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (o is JObject jo) return jo.ToObject<IDictionary<string, object>>().ToDictionary(k => k.Key, v => ToCollections(v.Value));
		RuntimeObject * L_0;
		L_0 = KeyValuePair_2_get_Value_m9506505CADCD1ED074BD28FB1B26D48BBC7A9FA7_inline((KeyValuePair_2_tD6E57B7EAC6134DCA97F39E5E598EB43B44A5EAE *)(&___v0), /*hidden argument*/KeyValuePair_2_get_Value_m9506505CADCD1ED074BD28FB1B26D48BBC7A9FA7_RuntimeMethod_var);
		IL2CPP_RUNTIME_CLASS_INIT(TealiumUnityPlugin_t8B3797338182C27740783841F277A92D6D40AC55_il2cpp_TypeInfo_var);
		RuntimeObject * L_1;
		L_1 = TealiumUnityPlugin_ToCollections_m5E2B1D64A02C34EE7ADBCCCB5B6C3040A2CC3C75(L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void TealiumiOS/<>c::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__cctor_m0E20E71644AE6C94ACC448F1297AF31FD789E9F1 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_t9D2D486C0C56ED747E3B614EF2F08E5FBD4ACCB4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CU3Ec_t9D2D486C0C56ED747E3B614EF2F08E5FBD4ACCB4 * L_0 = (U3CU3Ec_t9D2D486C0C56ED747E3B614EF2F08E5FBD4ACCB4 *)il2cpp_codegen_object_new(U3CU3Ec_t9D2D486C0C56ED747E3B614EF2F08E5FBD4ACCB4_il2cpp_TypeInfo_var);
		U3CU3Ec__ctor_m42EF4AD0DA632A79CB504B1CA272A0FF8789E2C5(L_0, /*hidden argument*/NULL);
		((U3CU3Ec_t9D2D486C0C56ED747E3B614EF2F08E5FBD4ACCB4_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t9D2D486C0C56ED747E3B614EF2F08E5FBD4ACCB4_il2cpp_TypeInfo_var))->set_U3CU3E9_0(L_0);
		return;
	}
}
// System.Void TealiumiOS/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m42EF4AD0DA632A79CB504B1CA272A0FF8789E2C5 (U3CU3Ec_t9D2D486C0C56ED747E3B614EF2F08E5FBD4ACCB4 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.String TealiumiOS/<>c::<SetConsentCategories>b__35_0(TealiumCommon.ConsentCategories)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* U3CU3Ec_U3CSetConsentCategoriesU3Eb__35_0_m02AC32BBBB6B618534F0DD6C6C48ED692462E4E2 (U3CU3Ec_t9D2D486C0C56ED747E3B614EF2F08E5FBD4ACCB4 * __this, ConsentCategories_t7F1FDE7995E2ABB2BEF4A4DC381AE8DEE9B8429F  ___category0, const RuntimeMethod* method)
{
	{
		// public void SetConsentCategories(List<ConsentCategories> categories) => Tealium_SetConsentCategories(String.Join(",", categories.ConvertAll(category => category.Value)));
		String_t* L_0;
		L_0 = ConsentCategories_get_Value_m2E4707B478B2A5B3329FA5978C527176B189EAF7_inline((ConsentCategories_t7F1FDE7995E2ABB2BEF4A4DC381AE8DEE9B8429F *)(&___category0), /*hidden argument*/NULL);
		return L_0;
	}
}
// TealiumCommon.ConsentCategories TealiumiOS/<>c::<GetConsentCategories>b__36_0(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ConsentCategories_t7F1FDE7995E2ABB2BEF4A4DC381AE8DEE9B8429F  U3CU3Ec_U3CGetConsentCategoriesU3Eb__36_0_mD7CEECA49895BCECBC0709574462646A80ED3BA3 (U3CU3Ec_t9D2D486C0C56ED747E3B614EF2F08E5FBD4ACCB4 * __this, String_t* ___category0, const RuntimeMethod* method)
{
	{
		// public List<ConsentCategories> GetConsentCategories() => Tealium_GetConsentCategories().Split(',').ToList().ConvertAll(category => ConsentCategories.FromString(category));
		String_t* L_0 = ___category0;
		ConsentCategories_t7F1FDE7995E2ABB2BEF4A4DC381AE8DEE9B8429F  L_1;
		L_1 = ConsentCategories_FromString_m376068953C39588BC3206B6D1C6BD7D9D0AC69CB(L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_ConsentExpiryDelegateMessage_t086235450063F54925F0E78B7BE640C668914E6D (ConsentExpiryDelegateMessage_t086235450063F54925F0E78B7BE640C668914E6D * __this, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)();
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_method_pointer(((RuntimeDelegate*)__this)->method));

	// Native function invocation
	il2cppPInvokeFunc();

}
// System.Void TealiumiOS/ConsentExpiryDelegateMessage::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConsentExpiryDelegateMessage__ctor_mCE24545D358D22749BB0849A2D2C6096B98DC30F (ConsentExpiryDelegateMessage_t086235450063F54925F0E78B7BE640C668914E6D * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void TealiumiOS/ConsentExpiryDelegateMessage::Invoke()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConsentExpiryDelegateMessage_Invoke_m27A3C6801B929B26EA947FF0A1C06034686EA6B5 (ConsentExpiryDelegateMessage_t086235450063F54925F0E78B7BE640C668914E6D * __this, const RuntimeMethod* method)
{
	DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* delegateArrayToInvoke = __this->get_delegates_11();
	Delegate_t** delegatesToInvoke;
	il2cpp_array_size_t length;
	if (delegateArrayToInvoke != NULL)
	{
		length = delegateArrayToInvoke->max_length;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(delegateArrayToInvoke->GetAddressAtUnchecked(0));
	}
	else
	{
		length = 1;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(&__this);
	}

	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		Delegate_t* currentDelegate = delegatesToInvoke[i];
		Il2CppMethodPointer targetMethodPointer = currentDelegate->get_method_ptr_0();
		RuntimeObject* targetThis = currentDelegate->get_m_target_2();
		RuntimeMethod* targetMethod = (RuntimeMethod*)(currentDelegate->get_method_3());
		if (!il2cpp_codegen_method_is_virtual(targetMethod))
		{
			il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
		}
		bool ___methodIsStatic = MethodIsStatic(targetMethod);
		int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
		if (___methodIsStatic)
		{
			if (___parameterCount == 0)
			{
				// open
				typedef void (*FunctionPointerType) (const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (void*, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, targetMethod);
			}
		}
		else
		{
			// closed
			if (targetThis != NULL && il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker0::Invoke(targetMethod, targetThis);
					else
						GenericVirtActionInvoker0::Invoke(targetMethod, targetThis);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker0::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis);
					else
						VirtActionInvoker0::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis);
				}
			}
			else
			{
				typedef void (*FunctionPointerType) (void*, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, targetMethod);
			}
		}
	}
}
// System.IAsyncResult TealiumiOS/ConsentExpiryDelegateMessage::BeginInvoke(System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ConsentExpiryDelegateMessage_BeginInvoke_mCF5093085C7B56AA68FE99A3D63961ABAF274CA3 (ConsentExpiryDelegateMessage_t086235450063F54925F0E78B7BE640C668914E6D * __this, AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___callback0, RuntimeObject * ___object1, const RuntimeMethod* method)
{
	void *__d_args[1] = {0};
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback0, (RuntimeObject*)___object1);;
}
// System.Void TealiumiOS/ConsentExpiryDelegateMessage::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConsentExpiryDelegateMessage_EndInvoke_mB39771543DB927CE5546BF0CF8F3A9FDECDF2D7B (ConsentExpiryDelegateMessage_t086235450063F54925F0E78B7BE640C668914E6D * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_InitializeDelegateMessage_tC95BD6C7C57DC458B247CC4A70D6AF216960A493 (InitializeDelegateMessage_tC95BD6C7C57DC458B247CC4A70D6AF216960A493 * __this, bool ___success0, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)(int32_t);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_method_pointer(((RuntimeDelegate*)__this)->method));

	// Native function invocation
	il2cppPInvokeFunc(static_cast<int32_t>(___success0));

}
// System.Void TealiumiOS/InitializeDelegateMessage::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InitializeDelegateMessage__ctor_mC818570297D2A3FB6964038D3C6F9890E96A8F1E (InitializeDelegateMessage_tC95BD6C7C57DC458B247CC4A70D6AF216960A493 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void TealiumiOS/InitializeDelegateMessage::Invoke(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InitializeDelegateMessage_Invoke_m0F14E85620499887636D9A151995C3FE32A7B700 (InitializeDelegateMessage_tC95BD6C7C57DC458B247CC4A70D6AF216960A493 * __this, bool ___success0, const RuntimeMethod* method)
{
	DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* delegateArrayToInvoke = __this->get_delegates_11();
	Delegate_t** delegatesToInvoke;
	il2cpp_array_size_t length;
	if (delegateArrayToInvoke != NULL)
	{
		length = delegateArrayToInvoke->max_length;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(delegateArrayToInvoke->GetAddressAtUnchecked(0));
	}
	else
	{
		length = 1;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(&__this);
	}

	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		Delegate_t* currentDelegate = delegatesToInvoke[i];
		Il2CppMethodPointer targetMethodPointer = currentDelegate->get_method_ptr_0();
		RuntimeObject* targetThis = currentDelegate->get_m_target_2();
		RuntimeMethod* targetMethod = (RuntimeMethod*)(currentDelegate->get_method_3());
		if (!il2cpp_codegen_method_is_virtual(targetMethod))
		{
			il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
		}
		bool ___methodIsStatic = MethodIsStatic(targetMethod);
		int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
		if (___methodIsStatic)
		{
			if (___parameterCount == 1)
			{
				// open
				typedef void (*FunctionPointerType) (bool, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___success0, targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (void*, bool, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___success0, targetMethod);
			}
		}
		else
		{
			// closed
			if (targetThis != NULL && il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker1< bool >::Invoke(targetMethod, targetThis, ___success0);
					else
						GenericVirtActionInvoker1< bool >::Invoke(targetMethod, targetThis, ___success0);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker1< bool >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___success0);
					else
						VirtActionInvoker1< bool >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___success0);
				}
			}
			else
			{
				typedef void (*FunctionPointerType) (void*, bool, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___success0, targetMethod);
			}
		}
	}
}
// System.IAsyncResult TealiumiOS/InitializeDelegateMessage::BeginInvoke(System.Boolean,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* InitializeDelegateMessage_BeginInvoke_m8AB2BC1441614E162D9F3E694CE244339012AFFE (InitializeDelegateMessage_tC95BD6C7C57DC458B247CC4A70D6AF216960A493 * __this, bool ___success0, AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___callback1, RuntimeObject * ___object2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[2] = {0};
	__d_args[0] = Box(Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_il2cpp_TypeInfo_var, &___success0);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback1, (RuntimeObject*)___object2);;
}
// System.Void TealiumiOS/InitializeDelegateMessage::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InitializeDelegateMessage_EndInvoke_m38D4581B4514FC2B56F1A857696CD70DB212B838 (InitializeDelegateMessage_tC95BD6C7C57DC458B247CC4A70D6AF216960A493 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_RemoteCommandDelegateMessage_t5D69DB6883CD6653EC3E70F18E3C096FD043342D (RemoteCommandDelegateMessage_t5D69DB6883CD6653EC3E70F18E3C096FD043342D * __this, String_t* ___payload0, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)(char*);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_method_pointer(((RuntimeDelegate*)__this)->method));

	// Marshaling of parameter '___payload0' to native representation
	char* ____payload0_marshaled = NULL;
	____payload0_marshaled = il2cpp_codegen_marshal_string(___payload0);

	// Native function invocation
	il2cppPInvokeFunc(____payload0_marshaled);

	// Marshaling cleanup of parameter '___payload0' native representation
	il2cpp_codegen_marshal_free(____payload0_marshaled);
	____payload0_marshaled = NULL;

}
// System.Void TealiumiOS/RemoteCommandDelegateMessage::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RemoteCommandDelegateMessage__ctor_mF34246CC8940B6CAABA5DE3CE3D32B8D93899F07 (RemoteCommandDelegateMessage_t5D69DB6883CD6653EC3E70F18E3C096FD043342D * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void TealiumiOS/RemoteCommandDelegateMessage::Invoke(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RemoteCommandDelegateMessage_Invoke_m9AAE2D94B14EFADB6F5B3F11BC0493C818494B38 (RemoteCommandDelegateMessage_t5D69DB6883CD6653EC3E70F18E3C096FD043342D * __this, String_t* ___payload0, const RuntimeMethod* method)
{
	DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* delegateArrayToInvoke = __this->get_delegates_11();
	Delegate_t** delegatesToInvoke;
	il2cpp_array_size_t length;
	if (delegateArrayToInvoke != NULL)
	{
		length = delegateArrayToInvoke->max_length;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(delegateArrayToInvoke->GetAddressAtUnchecked(0));
	}
	else
	{
		length = 1;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(&__this);
	}

	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		Delegate_t* currentDelegate = delegatesToInvoke[i];
		Il2CppMethodPointer targetMethodPointer = currentDelegate->get_method_ptr_0();
		RuntimeObject* targetThis = currentDelegate->get_m_target_2();
		RuntimeMethod* targetMethod = (RuntimeMethod*)(currentDelegate->get_method_3());
		if (!il2cpp_codegen_method_is_virtual(targetMethod))
		{
			il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
		}
		bool ___methodIsStatic = MethodIsStatic(targetMethod);
		int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
		if (___methodIsStatic)
		{
			if (___parameterCount == 1)
			{
				// open
				typedef void (*FunctionPointerType) (String_t*, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___payload0, targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (void*, String_t*, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___payload0, targetMethod);
			}
		}
		else if (___parameterCount != 1)
		{
			// open
			if (il2cpp_codegen_method_is_virtual(targetMethod) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker0::Invoke(targetMethod, ___payload0);
					else
						GenericVirtActionInvoker0::Invoke(targetMethod, ___payload0);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker0::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), ___payload0);
					else
						VirtActionInvoker0::Invoke(il2cpp_codegen_method_get_slot(targetMethod), ___payload0);
				}
			}
			else
			{
				typedef void (*FunctionPointerType) (String_t*, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___payload0, targetMethod);
			}
		}
		else
		{
			// closed
			if (targetThis != NULL && il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker1< String_t* >::Invoke(targetMethod, targetThis, ___payload0);
					else
						GenericVirtActionInvoker1< String_t* >::Invoke(targetMethod, targetThis, ___payload0);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker1< String_t* >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___payload0);
					else
						VirtActionInvoker1< String_t* >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___payload0);
				}
			}
			else
			{
				if (targetThis == NULL)
				{
					typedef void (*FunctionPointerType) (String_t*, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(___payload0, targetMethod);
				}
				else
				{
					typedef void (*FunctionPointerType) (void*, String_t*, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(targetThis, ___payload0, targetMethod);
				}
			}
		}
	}
}
// System.IAsyncResult TealiumiOS/RemoteCommandDelegateMessage::BeginInvoke(System.String,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* RemoteCommandDelegateMessage_BeginInvoke_mBFCCCB8391DBCFEF9E7F435D5C9C7C7822B87592 (RemoteCommandDelegateMessage_t5D69DB6883CD6653EC3E70F18E3C096FD043342D * __this, String_t* ___payload0, AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___callback1, RuntimeObject * ___object2, const RuntimeMethod* method)
{
	void *__d_args[2] = {0};
	__d_args[0] = ___payload0;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback1, (RuntimeObject*)___object2);;
}
// System.Void TealiumiOS/RemoteCommandDelegateMessage::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RemoteCommandDelegateMessage_EndInvoke_mEDBB9CFC929754E21942A8BC8783ACA848AD8D30 (RemoteCommandDelegateMessage_t5D69DB6883CD6653EC3E70F18E3C096FD043342D * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_VisitorServiceDelegateMessage_t6B8D159765A2F10FA86086BFA8BD3F4FFB9DE18B (VisitorServiceDelegateMessage_t6B8D159765A2F10FA86086BFA8BD3F4FFB9DE18B * __this, String_t* ___payload0, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)(char*);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_method_pointer(((RuntimeDelegate*)__this)->method));

	// Marshaling of parameter '___payload0' to native representation
	char* ____payload0_marshaled = NULL;
	____payload0_marshaled = il2cpp_codegen_marshal_string(___payload0);

	// Native function invocation
	il2cppPInvokeFunc(____payload0_marshaled);

	// Marshaling cleanup of parameter '___payload0' native representation
	il2cpp_codegen_marshal_free(____payload0_marshaled);
	____payload0_marshaled = NULL;

}
// System.Void TealiumiOS/VisitorServiceDelegateMessage::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VisitorServiceDelegateMessage__ctor_m7760E515AE1925C13E3EE7D68CFBD6225EDD5DA8 (VisitorServiceDelegateMessage_t6B8D159765A2F10FA86086BFA8BD3F4FFB9DE18B * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void TealiumiOS/VisitorServiceDelegateMessage::Invoke(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VisitorServiceDelegateMessage_Invoke_m2E44A85571E0BB0A6E5537A19D05E7FD66C9F762 (VisitorServiceDelegateMessage_t6B8D159765A2F10FA86086BFA8BD3F4FFB9DE18B * __this, String_t* ___payload0, const RuntimeMethod* method)
{
	DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* delegateArrayToInvoke = __this->get_delegates_11();
	Delegate_t** delegatesToInvoke;
	il2cpp_array_size_t length;
	if (delegateArrayToInvoke != NULL)
	{
		length = delegateArrayToInvoke->max_length;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(delegateArrayToInvoke->GetAddressAtUnchecked(0));
	}
	else
	{
		length = 1;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(&__this);
	}

	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		Delegate_t* currentDelegate = delegatesToInvoke[i];
		Il2CppMethodPointer targetMethodPointer = currentDelegate->get_method_ptr_0();
		RuntimeObject* targetThis = currentDelegate->get_m_target_2();
		RuntimeMethod* targetMethod = (RuntimeMethod*)(currentDelegate->get_method_3());
		if (!il2cpp_codegen_method_is_virtual(targetMethod))
		{
			il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
		}
		bool ___methodIsStatic = MethodIsStatic(targetMethod);
		int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
		if (___methodIsStatic)
		{
			if (___parameterCount == 1)
			{
				// open
				typedef void (*FunctionPointerType) (String_t*, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___payload0, targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (void*, String_t*, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___payload0, targetMethod);
			}
		}
		else if (___parameterCount != 1)
		{
			// open
			if (il2cpp_codegen_method_is_virtual(targetMethod) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker0::Invoke(targetMethod, ___payload0);
					else
						GenericVirtActionInvoker0::Invoke(targetMethod, ___payload0);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker0::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), ___payload0);
					else
						VirtActionInvoker0::Invoke(il2cpp_codegen_method_get_slot(targetMethod), ___payload0);
				}
			}
			else
			{
				typedef void (*FunctionPointerType) (String_t*, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___payload0, targetMethod);
			}
		}
		else
		{
			// closed
			if (targetThis != NULL && il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker1< String_t* >::Invoke(targetMethod, targetThis, ___payload0);
					else
						GenericVirtActionInvoker1< String_t* >::Invoke(targetMethod, targetThis, ___payload0);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker1< String_t* >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___payload0);
					else
						VirtActionInvoker1< String_t* >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___payload0);
				}
			}
			else
			{
				if (targetThis == NULL)
				{
					typedef void (*FunctionPointerType) (String_t*, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(___payload0, targetMethod);
				}
				else
				{
					typedef void (*FunctionPointerType) (void*, String_t*, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(targetThis, ___payload0, targetMethod);
				}
			}
		}
	}
}
// System.IAsyncResult TealiumiOS/VisitorServiceDelegateMessage::BeginInvoke(System.String,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* VisitorServiceDelegateMessage_BeginInvoke_mB5E2722D27F8BBB1FD9FBFACA7B1A090C3B3241B (VisitorServiceDelegateMessage_t6B8D159765A2F10FA86086BFA8BD3F4FFB9DE18B * __this, String_t* ___payload0, AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___callback1, RuntimeObject * ___object2, const RuntimeMethod* method)
{
	void *__d_args[2] = {0};
	__d_args[0] = ___payload0;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback1, (RuntimeObject*)___object2);;
}
// System.Void TealiumiOS/VisitorServiceDelegateMessage::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VisitorServiceDelegateMessage_EndInvoke_m9E10338B5714964AB064BF042EFCD324F9FAD278 (VisitorServiceDelegateMessage_t6B8D159765A2F10FA86086BFA8BD3F4FFB9DE18B * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Collectors_set_Value_m263E39F60B836412CAC7C5C3665C4F4F594D0D9F_inline (Collectors_tF2C4928DE0A75E12B7700E84D52749D66D48F723 * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		// public string Value { get; set; }
		String_t* L_0 = ___value0;
		__this->set_U3CValueU3Ek__BackingField_0(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* Collectors_get_Value_mA96FD040FE21ACFE885603005B2042D21E2B0F52_inline (Collectors_tF2C4928DE0A75E12B7700E84D52749D66D48F723 * __this, const RuntimeMethod* method)
{
	{
		// public string Value { get; set; }
		String_t* L_0 = __this->get_U3CValueU3Ek__BackingField_0();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ConsentCategories_set_Value_m84CB68EB66AC90CE7C9D55DD29289BF40D9A44D2_inline (ConsentCategories_t7F1FDE7995E2ABB2BEF4A4DC381AE8DEE9B8429F * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		// public string Value { get; set; }
		String_t* L_0 = ___value0;
		__this->set_U3CValueU3Ek__BackingField_0(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* ConsentCategories_get_Value_m2E4707B478B2A5B3329FA5978C527176B189EAF7_inline (ConsentCategories_t7F1FDE7995E2ABB2BEF4A4DC381AE8DEE9B8429F * __this, const RuntimeMethod* method)
{
	{
		// public string Value { get; set; }
		String_t* L_0 = __this->get_U3CValueU3Ek__BackingField_0();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* TimeUnit_get_Value_m9392FC6C65BB94088AAADC8EA5F63470CBB1FADC_inline (TimeUnit_tEDC26F433AD0E93FB173CBB14399B6B806B7F78D * __this, const RuntimeMethod* method)
{
	{
		// public string Value { get; set; }
		String_t* L_0 = __this->get_U3CValueU3Ek__BackingField_0();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ConsentPolicy_set_Value_m4344135F1898E3738C0A647E82990B20F5C7582D_inline (ConsentPolicy_tA405DFF59561F55C0C5C738E3ECC75B8032B6A01 * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		// public string Value { get; set; }
		String_t* L_0 = ___value0;
		__this->set_U3CValueU3Ek__BackingField_0(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* ConsentPolicy_get_Value_mECB55CC0D233FB6CC9865E4839457B76DDD6EB1F_inline (ConsentPolicy_tA405DFF59561F55C0C5C738E3ECC75B8032B6A01 * __this, const RuntimeMethod* method)
{
	{
		// public string Value { get; set; }
		String_t* L_0 = __this->get_U3CValueU3Ek__BackingField_0();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ConsentStatus_set_Value_m6559AA65577983981E4F5B5A5214A10B5D8AA2BF_inline (ConsentStatus_t6263FFF5C886922D62B1DDC450EFE8CE2036F101 * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		// public string Value { get; set; }
		String_t* L_0 = ___value0;
		__this->set_U3CValueU3Ek__BackingField_0(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* ConsentStatus_get_Value_mE6D4CEC397F8DF285456F8FC9CA485FAD4DE6819_inline (ConsentStatus_t6263FFF5C886922D62B1DDC450EFE8CE2036F101 * __this, const RuntimeMethod* method)
{
	{
		// public string Value { get; set; }
		String_t* L_0 = __this->get_U3CValueU3Ek__BackingField_0();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Dispatchers_set_Value_mBFDF13FCD45AA1E470F4D36A55FD9CBA4C54C598_inline (Dispatchers_tB9298ED86C40129DF8BF09E2B9EBEC23F8C5A236 * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		// public string Value { get; set; }
		String_t* L_0 = ___value0;
		__this->set_U3CValueU3Ek__BackingField_0(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* Dispatchers_get_Value_m8E3CBA1DD9471A6DD45BCB5B2F81553E102D9510_inline (Dispatchers_tB9298ED86C40129DF8BF09E2B9EBEC23F8C5A236 * __this, const RuntimeMethod* method)
{
	{
		// public string Value { get; set; }
		String_t* L_0 = __this->get_U3CValueU3Ek__BackingField_0();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Expiry_set_Value_m01A424420372045086D8EB2B4992D144722CCA4D_inline (Expiry_tCC1CF50318A9D2722F63B5E5842DCD2D0FCA8137 * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		// public string Value { get; set; }
		String_t* L_0 = ___value0;
		__this->set_U3CValueU3Ek__BackingField_0(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* Expiry_get_Value_m26ED3077C06BF3DFEB44E88E432DA6149E203CA4_inline (Expiry_tCC1CF50318A9D2722F63B5E5842DCD2D0FCA8137 * __this, const RuntimeMethod* method)
{
	{
		// public string Value { get; set; }
		String_t* L_0 = __this->get_U3CValueU3Ek__BackingField_0();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void LogLevel_set_Value_m2CB6AB544572542164B28F41BE06090CB2FC694B_inline (LogLevel_tC8A9CB2FDD6BA29729D740AB210BD2214ACC9ECD * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		// public string Value { get; set; }
		String_t* L_0 = ___value0;
		__this->set_U3CValueU3Ek__BackingField_0(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* LogLevel_get_Value_mC918DB8824B386771CA57BA448D46B86ECCAEED0_inline (LogLevel_tC8A9CB2FDD6BA29729D740AB210BD2214ACC9ECD * __this, const RuntimeMethod* method)
{
	{
		// public string Value { get; set; }
		String_t* L_0 = __this->get_U3CValueU3Ek__BackingField_0();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* TealiumEnvironment_get_Value_m5ABEEBC4404B7A85E598D677BE066B85DB543681_inline (TealiumEnvironment_t24AF72642DBC059461FBBF69A92B7A4EE25A7446 * __this, const RuntimeMethod* method)
{
	{
		// public string Value { get; set; }
		String_t* L_0 = __this->get_U3CValueU3Ek__BackingField_0();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void TealiumEnvironment_set_Value_mF074D158F1AC98622598BBFE595B8A2D9DA45D2E_inline (TealiumEnvironment_t24AF72642DBC059461FBBF69A92B7A4EE25A7446 * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		// public string Value { get; set; }
		String_t* L_0 = ___value0;
		__this->set_U3CValueU3Ek__BackingField_0(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void TimeUnit_set_Value_mC79E04C1505BB47A15575375C2F436F0AC225ED3_inline (TimeUnit_tEDC26F433AD0E93FB173CBB14399B6B806B7F78D * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		// public string Value { get; set; }
		String_t* L_0 = ___value0;
		__this->set_U3CValueU3Ek__BackingField_0(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* Array_Empty_TisRuntimeObject_m1FBC21243DF3542384C523801E8CA8A97606C747_gshared_inline (const RuntimeMethod* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->rgctx_data, 0));
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_0 = ((EmptyArray_1_tBF73225DFA890366D579424FE8F40073BF9FBAD4_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->rgctx_data, 0)))->get_Value_0();
		return (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Nullable_1_get_HasValue_m5C68BCA359253ED7BAF57AEC0411DC539E1D52B5_gshared_inline (Nullable_1_tEDD6DE645137CA544DA6DFB826B36BF4C9425A28 * __this, const RuntimeMethod* method)
{
	{
		bool L_0 = (bool)__this->get_has_value_1();
		return (bool)L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR LogLevel_tC8A9CB2FDD6BA29729D740AB210BD2214ACC9ECD  Nullable_1_GetValueOrDefault_mB6AF2E00017652A7A460E421622828E15FB4F437_gshared_inline (Nullable_1_tEDD6DE645137CA544DA6DFB826B36BF4C9425A28 * __this, const RuntimeMethod* method)
{
	{
		LogLevel_tC8A9CB2FDD6BA29729D740AB210BD2214ACC9ECD  L_0 = (LogLevel_tC8A9CB2FDD6BA29729D740AB210BD2214ACC9ECD )__this->get_value_0();
		return (LogLevel_tC8A9CB2FDD6BA29729D740AB210BD2214ACC9ECD )L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Nullable_1_get_HasValue_m8043104DA135F5C852621E53CEB0FD85ACD0DC68_gshared_inline (Nullable_1_t10B092B32DAE6088B0BC1F2903DC4B4D0A477307 * __this, const RuntimeMethod* method)
{
	{
		bool L_0 = (bool)__this->get_has_value_1();
		return (bool)L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ConsentPolicy_tA405DFF59561F55C0C5C738E3ECC75B8032B6A01  Nullable_1_GetValueOrDefault_m86DD280389373DC6112C612AF57005073D7829CA_gshared_inline (Nullable_1_t10B092B32DAE6088B0BC1F2903DC4B4D0A477307 * __this, const RuntimeMethod* method)
{
	{
		ConsentPolicy_tA405DFF59561F55C0C5C738E3ECC75B8032B6A01  L_0 = (ConsentPolicy_tA405DFF59561F55C0C5C738E3ECC75B8032B6A01 )__this->get_value_0();
		return (ConsentPolicy_tA405DFF59561F55C0C5C738E3ECC75B8032B6A01 )L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625  Enumerator_get_Current_m17E1C36ECBB09CC2AB892710866F8655D83A6048_gshared_inline (Enumerator_tE4E91EE5578038530CF0C46227953BA787E7A0A0 * __this, const RuntimeMethod* method)
{
	{
		KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625  L_0 = (KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625 )__this->get_current_3();
		return (KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625 )L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject * KeyValuePair_2_get_Key_mCAD7B121DB998D7C56EB0281215A860EFE9DCD95_gshared_inline (KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = (RuntimeObject *)__this->get_key_0();
		return (RuntimeObject *)L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject * KeyValuePair_2_get_Value_m622223593F7461E7812C581DDB145270016ED303_gshared_inline (KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = (RuntimeObject *)__this->get_value_1();
		return (RuntimeObject *)L_0;
	}
}
