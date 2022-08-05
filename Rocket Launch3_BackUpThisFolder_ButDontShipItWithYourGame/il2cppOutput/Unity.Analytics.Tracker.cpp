#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>
#include <stdint.h>


template <typename R>
struct VirtualFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename R, typename T1>
struct VirtualFuncInvoker1
{
	typedef R (*Func)(void*, T1, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename R, typename T1, typename T2>
struct VirtualFuncInvoker2
{
	typedef R (*Func)(void*, T1, T2, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};
struct InvokerActionInvoker0
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj)
	{
		method->invoker_method(methodPtr, method, obj, NULL, NULL);
	}
};
template <typename T1>
struct InvokerActionInvoker1;
template <typename T1>
struct InvokerActionInvoker1<T1*>
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1)
	{
		void* params[1] = { p1 };
		method->invoker_method(methodPtr, method, obj, params, NULL);
	}
};

// System.Collections.Generic.Dictionary`2<System.Object,System.Object>
struct Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA;
// System.Collections.Generic.Dictionary`2<System.String,System.Collections.Generic.List`1<System.Boolean>>
struct Dictionary_2_tC1BD2E5DC97017673DF7A42E09736890AFD8B0C3;
// System.Collections.Generic.Dictionary`2<System.String,System.Object>
struct Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710;
// System.Collections.Generic.IDictionary`2<System.String,System.Object>
struct IDictionary_2_t79D4ADB15B238AC117DF72982FEA3C42EF5AFA19;
// System.Collections.Generic.IEqualityComparer`1<System.String>
struct IEqualityComparer_1_tAE94C8F24AD5B94D4EE85CA9FC59E3409D41CAF7;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.Object,System.Object>
struct KeyCollection_tB45A861D090B15129521119AE48ED3813820A974;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.String,System.Collections.Generic.List`1<System.Boolean>>
struct KeyCollection_tA845E107A897F0C5C9CE39E283764084ABD5421E;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.String,System.Object>
struct KeyCollection_tE66790F09E854C19C7F612BEAD203AE626E90A36;
// System.Collections.Generic.List`1<UnityEngine.Analytics.AnalyticsEventParam>
struct List_1_t9DD115095F7C5EEA37796C3B52E5EADC08B27030;
// System.Collections.Generic.List`1<System.Boolean>
struct List_1_t01207CE5982A7640E56B1F9F672A06F96B09367A;
// System.Collections.Generic.List`1<System.Object>
struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D;
// System.Collections.Generic.List`1<UnityEngine.Analytics.TriggerRule>
struct List_1_t3585B91917CA5C4854A4496D5F41B409BCE66B30;
// System.Collections.Generic.List`1<UnityEngine.Analytics.TrackableProperty/FieldWithTarget>
struct List_1_t20E90EB749670C2DEEE278FBBA3E9DE0A00E09CC;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.String,System.Collections.Generic.List`1<System.Boolean>>
struct ValueCollection_tCACE7B6B40C65CC3EED2A54D6081571A2CC00BA6;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.String,System.Object>
struct ValueCollection_tC9D91E8A3198E40EA339059703AB10DFC9F5CC2E;
// System.Collections.Generic.Dictionary`2/Entry<System.String,System.Collections.Generic.List`1<System.Boolean>>[]
struct EntryU5BU5D_t8A45E5A657FAAEC1426EF68237E190C440728D3D;
// System.Collections.Generic.Dictionary`2/Entry<System.String,System.Object>[]
struct EntryU5BU5D_t233BB24ED01E2D8D65B0651D54B8E3AD125CAF96;
// UnityEngine.Analytics.AnalyticsEventParam[]
struct AnalyticsEventParamU5BU5D_t57AEF0B9EC976ABD54E949911D6CB7DA69092602;
// System.Boolean[]
struct BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4;
// System.Byte[]
struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031;
// System.Char[]
struct CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB;
// System.Delegate[]
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
// System.Int32[]
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
// System.IntPtr[]
struct IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832;
// System.Object[]
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF;
// System.String[]
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248;
// UnityEngine.Analytics.TriggerRule[]
struct TriggerRuleU5BU5D_t318FCBB1971A4DDBA8648335A550E73E3E934117;
// System.Type[]
struct TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB;
// UnityEngine.Analytics.TrackableProperty/FieldWithTarget[]
struct FieldWithTargetU5BU5D_tC7CCFF269A448169248B80CD3F4E5732BCFD95A3;
// UnityEngine.Analytics.AnalyticsEventParam
struct AnalyticsEventParam_t6FBABF1961987CB0E6F88338A5C48EE1E3E60974;
// UnityEngine.Analytics.AnalyticsEventParamListContainer
struct AnalyticsEventParamListContainer_tAE992B5199A074975EF5CC6CF4A80FCCFCBF4C02;
// UnityEngine.Analytics.AnalyticsEventTracker
struct AnalyticsEventTracker_t43C623F37E8BC18790D02385CAFC4E145F35E994;
// UnityEngine.Analytics.AnalyticsTracker
struct AnalyticsTracker_t1DD335B622ADA1AABB848B69311C67605DEF6301;
// System.AsyncCallback
struct AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C;
// System.Reflection.Binder
struct Binder_t91BFCE95A7057FADF4D8A1A342AFE52872246235;
// UnityEngine.Component
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3;
// UnityEngine.Coroutine
struct Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B;
// System.Delegate
struct Delegate_t;
// System.DelegateData
struct DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E;
// UnityEngine.Analytics.EventTrigger
struct EventTrigger_t85ABB3C787BF555580DE542822F8E973718C5791;
// System.Exception
struct Exception_t;
// System.Reflection.FieldInfo
struct FieldInfo_t;
// UnityEngine.GameObject
struct GameObject_t76FEDD663AB33C991A9C9A23129337651094216F;
// System.IAsyncResult
struct IAsyncResult_t7B9B5A0ECB35DCEC31B8A8122C37D687369253B5;
// System.Collections.IDictionary
struct IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220;
// System.Collections.IEnumerator
struct IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA;
// System.Reflection.MemberFilter
struct MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71;
// System.NotSupportedException
struct NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A;
// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C;
// System.Reflection.PropertyInfo
struct PropertyInfo_t;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6;
// UnityEngine.Analytics.StandardEventPayload
struct StandardEventPayload_tC18B9CF0832CA32A1280D8ECDB81596C45ED4EA7;
// System.String
struct String_t;
// UnityEngine.Analytics.TrackableField
struct TrackableField_t6DC55D40EE374F2FFA111344BC840FA36CF76D7F;
// UnityEngine.Analytics.TrackableProperty
struct TrackableProperty_tD94C354D884EDFB6603639EE6559289850F5E720;
// UnityEngine.Analytics.TrackablePropertyBase
struct TrackablePropertyBase_t1D13B0FF07AB12F6973658EF46A70504D578017E;
// UnityEngine.Analytics.TrackableTrigger
struct TrackableTrigger_t034420C16AA820B759DDF89D1E1B9BD1FC3355A6;
// UnityEngine.Analytics.TriggerListContainer
struct TriggerListContainer_t05237759E7AFB582C672447CB1FBBF079AEE03C9;
// UnityEngine.Analytics.TriggerMethod
struct TriggerMethod_tBC1D8594D5A8902E70A147C107EE646EDEE4EE8B;
// UnityEngine.Analytics.TriggerRule
struct TriggerRule_tB684F4AC495F20C6A8BA52384547780771817E4E;
// System.Type
struct Type_t;
// UnityEngine.Analytics.ValueProperty
struct ValueProperty_tB152A92DD3101A108D3C41589959AB70AAD68436;
// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
// UnityEngine.WaitForSeconds
struct WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3;
// UnityEngine.Analytics.AnalyticsEventTracker/<TimedTrigger>c__Iterator0
struct U3CTimedTriggerU3Ec__Iterator0_t9F1A338E6CDCAA02C998F44F5607E9C204ADCAEC;
// UnityEngine.Analytics.EventTrigger/OnTrigger
struct OnTrigger_t92557FB8650E42F9EA346F70E6763F95A0CB9AE8;
// UnityEngine.Analytics.TrackableProperty/FieldWithTarget
struct FieldWithTarget_t504FF69C27D0DC4A727BE0A6CE8167EC2A967448;

IL2CPP_EXTERN_C RuntimeClass* AnalyticsEventParamListContainer_tAE992B5199A074975EF5CC6CF4A80FCCFCBF4C02_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* AnalyticsEventTrackerSettings_t33E0391BADF271E0838F525F276FF198975C8A00_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* AnalyticsEvent_tF3074E7A475B67047B033BD5A1930AD68BDA2575_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Dictionary_2_tC1BD2E5DC97017673DF7A42E09736890AFD8B0C3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* EventTrigger_t85ABB3C787BF555580DE542822F8E973718C5791_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Exception_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t01207CE5982A7640E56B1F9F672A06F96B09367A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t3585B91917CA5C4854A4496D5F41B409BCE66B30_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t9DD115095F7C5EEA37796C3B52E5EADC08B27030_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* RuntimeObject_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StandardEventPayload_tC18B9CF0832CA32A1280D8ECDB81596C45ED4EA7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* String_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TrackableProperty_tD94C354D884EDFB6603639EE6559289850F5E720_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TriggerListContainer_t05237759E7AFB582C672447CB1FBBF079AEE03C9_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TriggerRule_tB684F4AC495F20C6A8BA52384547780771817E4E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Type_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CTimedTriggerU3Ec__Iterator0_t9F1A338E6CDCAA02C998F44F5607E9C204ADCAEC_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral0AEA2C46AAEB233C6D2DF0275EF92FB2E56BAFE9;
IL2CPP_EXTERN_C String_t* _stringLiteral29902F5CA78BFEDCD32C035E61FCBAB3339DA796;
IL2CPP_EXTERN_C String_t* _stringLiteral384565B8399EC9A224FB52B7078096010121FA9F;
IL2CPP_EXTERN_C String_t* _stringLiteral3A57AAFB3C82B30F7E8F76A4FAB0A711CE7DC20F;
IL2CPP_EXTERN_C String_t* _stringLiteral5C892507F81350BC93DF9EE399E30E4AF8F03514;
IL2CPP_EXTERN_C String_t* _stringLiteral5E07EA7D7E1EEA3C820E698756516B2730A5F8CF;
IL2CPP_EXTERN_C String_t* _stringLiteral9817066B6D9CACF92B641838E838154CE32619CF;
IL2CPP_EXTERN_C String_t* _stringLiteral9A15720E849DE10032FA522EE93FF9CEE6CB32A1;
IL2CPP_EXTERN_C String_t* _stringLiteralC39D56A159A8B99DD2EADD3DE95D99C7E8259D1A;
IL2CPP_EXTERN_C String_t* _stringLiteralD132ABB49FADBB9BEC71FB78530BA8772EC64969;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_Add_m27C98D4107649BA0703A939EAD8CEBA9DD5DE798_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_Add_m5875DF2ACE933D734119C088B2E7C9C63F49B443_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_Clear_mBC8B8FD18821E87AC78242BEAB058EB832641EAB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_ContainsKey_m70BD45E946DC5A0F38184B4D44969BD5EAAE5B23_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2__ctor_mC1412FC33CB4A79B897DC06F5AA4A925E069E8F3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2__ctor_mC4F3DF292BAD88F4BF193C49CD689FAEBC4570A9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_get_Item_mD03DF8E6DD66382B6083D4FBA93F74E1E50F3271_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_get_Keys_mA67CCC9A76D1AA5EEF7C54AB87D74E41098DA8F3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_set_Item_m7CCA97075B48AFB2B97E5A072B94BC7679374341_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_Dispose_m2610B9DB8629C6834CFDECAD1BAAC3FECEFEA935_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_Dispose_m41CE57EEFF33375A4FE7015A93712DADE5183B92_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_Dispose_m93CD93F0EF69D1B4C47D96529D6BC0C89741EC49_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_m19E1710634EDF32441A6C90C87083A8CB0D1AAD1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_m6ECC9ED45B697379B5EA6AEC8B345D856D1AC9AB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_m81CF8F1BD0C690D8A792D559CEF2A22502292685_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_mB352E1B59DC4B99A9C23DC1082BBABECAD549C2E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_mD611F18C5CBDC2FC8EA79C110DAB242664E304CA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_mD61C743655B8013D8FCBF85FF00A6AD791180B7E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* KeyCollection_GetEnumerator_m2E205C00BEAF54451047512036299F6D947B194A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_m5AAB6DCB6C30EB5769B4E8DB8170E50319F0A9ED_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_mE0944F5B3F6E51E82C3C8C04D5FCE7CC51EFA415_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Contains_mC82ECFA72602553B2896828FCD67FDAE8A18C190_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_GetEnumerator_m6E06038B7A99366EC2A623827FA9A561F7BF36B1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_GetEnumerator_mD366F6A991F5EA2D00D0E13933213F743D76B5C8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_RemoveAt_mE6E7E96156505BA81D9D441FCFB21EC1E84DBA1A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m1C0E552290CF0082F375DA163B260162A77979ED_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m5DA4A556E2988745972B20829116B07F3AB5C599_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m87539832B82A3453971F3BCC702C7346E8D3F953_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_m623FA42FEDF361CAEF7B7C5D1252EE0E304A65F9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_m65DF182EA281FF9FB3F7772C960CABC4DE30B6F6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_mEEC1E2184F9386280BF8617077CC0F6AED7EE26F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_mF55BE282EB49F386CBBB671C7FD770C921A01F1D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* StandardEventPayload_Send_m0AC5797A4947B2D36BC7A5E3CEC331194A387A34_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Type_GetType_m71A077E0B5DA3BD1DC0AB9AE387056CFCF56F93F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CTimedTriggerU3Ec__Iterator0_Reset_m6E126E43F65BA1078E7ECC3197E093F19CC59FDD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ValueProperty_IsValid_m7311497A4AD251C0A9765A699CFDA41F91325DBC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeType* Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* Int16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* String_t_0_0_0_var;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4;
struct CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB;
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248;
struct TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct U3CModuleU3E_t4B54BD7C47450D1CF08B31604E8E0C7BDF6240FD 
{
};

// System.Collections.Generic.Dictionary`2<System.String,System.Collections.Generic.List`1<System.Boolean>>
struct Dictionary_2_tC1BD2E5DC97017673DF7A42E09736890AFD8B0C3  : public RuntimeObject
{
	// System.Int32[] System.Collections.Generic.Dictionary`2::_buckets
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::_entries
	EntryU5BU5D_t8A45E5A657FAAEC1426EF68237E190C440728D3D* ____entries_1;
	// System.Int32 System.Collections.Generic.Dictionary`2::_count
	int32_t ____count_2;
	// System.Int32 System.Collections.Generic.Dictionary`2::_freeList
	int32_t ____freeList_3;
	// System.Int32 System.Collections.Generic.Dictionary`2::_freeCount
	int32_t ____freeCount_4;
	// System.Int32 System.Collections.Generic.Dictionary`2::_version
	int32_t ____version_5;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Generic.Dictionary`2::_comparer
	RuntimeObject* ____comparer_6;
	// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_keys
	KeyCollection_tA845E107A897F0C5C9CE39E283764084ABD5421E* ____keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_values
	ValueCollection_tCACE7B6B40C65CC3EED2A54D6081571A2CC00BA6* ____values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject* ____syncRoot_9;
};

// System.Collections.Generic.Dictionary`2<System.String,System.Object>
struct Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710  : public RuntimeObject
{
	// System.Int32[] System.Collections.Generic.Dictionary`2::_buckets
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::_entries
	EntryU5BU5D_t233BB24ED01E2D8D65B0651D54B8E3AD125CAF96* ____entries_1;
	// System.Int32 System.Collections.Generic.Dictionary`2::_count
	int32_t ____count_2;
	// System.Int32 System.Collections.Generic.Dictionary`2::_freeList
	int32_t ____freeList_3;
	// System.Int32 System.Collections.Generic.Dictionary`2::_freeCount
	int32_t ____freeCount_4;
	// System.Int32 System.Collections.Generic.Dictionary`2::_version
	int32_t ____version_5;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Generic.Dictionary`2::_comparer
	RuntimeObject* ____comparer_6;
	// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_keys
	KeyCollection_tE66790F09E854C19C7F612BEAD203AE626E90A36* ____keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_values
	ValueCollection_tC9D91E8A3198E40EA339059703AB10DFC9F5CC2E* ____values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject* ____syncRoot_9;
};

// System.Collections.Generic.Dictionary`2/KeyCollection<System.String,System.Collections.Generic.List`1<System.Boolean>>
struct KeyCollection_tA845E107A897F0C5C9CE39E283764084ABD5421E  : public RuntimeObject
{
	// System.Collections.Generic.Dictionary`2<TKey,TValue> System.Collections.Generic.Dictionary`2/KeyCollection::_dictionary
	Dictionary_2_tC1BD2E5DC97017673DF7A42E09736890AFD8B0C3* ____dictionary_0;
};

// System.Collections.Generic.List`1<UnityEngine.Analytics.AnalyticsEventParam>
struct List_1_t9DD115095F7C5EEA37796C3B52E5EADC08B27030  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	AnalyticsEventParamU5BU5D_t57AEF0B9EC976ABD54E949911D6CB7DA69092602* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_t9DD115095F7C5EEA37796C3B52E5EADC08B27030_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	AnalyticsEventParamU5BU5D_t57AEF0B9EC976ABD54E949911D6CB7DA69092602* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<System.Boolean>
struct List_1_t01207CE5982A7640E56B1F9F672A06F96B09367A  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_t01207CE5982A7640E56B1F9F672A06F96B09367A_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<System.Object>
struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<UnityEngine.Analytics.TriggerRule>
struct List_1_t3585B91917CA5C4854A4496D5F41B409BCE66B30  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	TriggerRuleU5BU5D_t318FCBB1971A4DDBA8648335A550E73E3E934117* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_t3585B91917CA5C4854A4496D5F41B409BCE66B30_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	TriggerRuleU5BU5D_t318FCBB1971A4DDBA8648335A550E73E3E934117* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<UnityEngine.Analytics.TrackableProperty/FieldWithTarget>
struct List_1_t20E90EB749670C2DEEE278FBBA3E9DE0A00E09CC  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	FieldWithTargetU5BU5D_tC7CCFF269A448169248B80CD3F4E5732BCFD95A3* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_t20E90EB749670C2DEEE278FBBA3E9DE0A00E09CC_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	FieldWithTargetU5BU5D_tC7CCFF269A448169248B80CD3F4E5732BCFD95A3* ___s_emptyArray_5;
};

// UnityEngine.Analytics.AnalyticsEventParam
struct AnalyticsEventParam_t6FBABF1961987CB0E6F88338A5C48EE1E3E60974  : public RuntimeObject
{
	// UnityEngine.Analytics.AnalyticsEventParam/RequirementType UnityEngine.Analytics.AnalyticsEventParam::m_RequirementType
	int32_t ___m_RequirementType_0;
	// System.String UnityEngine.Analytics.AnalyticsEventParam::m_GroupID
	String_t* ___m_GroupID_1;
	// System.String UnityEngine.Analytics.AnalyticsEventParam::m_Tooltip
	String_t* ___m_Tooltip_2;
	// System.String UnityEngine.Analytics.AnalyticsEventParam::m_Name
	String_t* ___m_Name_3;
	// UnityEngine.Analytics.ValueProperty UnityEngine.Analytics.AnalyticsEventParam::m_Value
	ValueProperty_tB152A92DD3101A108D3C41589959AB70AAD68436* ___m_Value_4;
};

// UnityEngine.Analytics.AnalyticsEventParamListContainer
struct AnalyticsEventParamListContainer_tAE992B5199A074975EF5CC6CF4A80FCCFCBF4C02  : public RuntimeObject
{
	// System.Collections.Generic.List`1<UnityEngine.Analytics.AnalyticsEventParam> UnityEngine.Analytics.AnalyticsEventParamListContainer::m_Parameters
	List_1_t9DD115095F7C5EEA37796C3B52E5EADC08B27030* ___m_Parameters_0;
};

// UnityEngine.Analytics.AnalyticsEventTrackerSettings
struct AnalyticsEventTrackerSettings_t33E0391BADF271E0838F525F276FF198975C8A00  : public RuntimeObject
{
};

struct AnalyticsEventTrackerSettings_t33E0391BADF271E0838F525F276FF198975C8A00_StaticFields
{
	// System.Int32 UnityEngine.Analytics.AnalyticsEventTrackerSettings::paramCountMax
	int32_t ___paramCountMax_0;
	// System.Int32 UnityEngine.Analytics.AnalyticsEventTrackerSettings::triggerRuleCountMax
	int32_t ___triggerRuleCountMax_1;
};
struct Il2CppArrayBounds;

// UnityEngine.Analytics.EventTrigger
struct EventTrigger_t85ABB3C787BF555580DE542822F8E973718C5791  : public RuntimeObject
{
	// System.Boolean UnityEngine.Analytics.EventTrigger::m_IsTriggerExpanded
	bool ___m_IsTriggerExpanded_0;
	// UnityEngine.Analytics.TriggerType UnityEngine.Analytics.EventTrigger::m_Type
	int32_t ___m_Type_1;
	// UnityEngine.Analytics.TriggerLifecycleEvent UnityEngine.Analytics.EventTrigger::m_LifecycleEvent
	int32_t ___m_LifecycleEvent_2;
	// System.Boolean UnityEngine.Analytics.EventTrigger::m_ApplyRules
	bool ___m_ApplyRules_3;
	// UnityEngine.Analytics.TriggerListContainer UnityEngine.Analytics.EventTrigger::m_Rules
	TriggerListContainer_t05237759E7AFB582C672447CB1FBBF079AEE03C9* ___m_Rules_4;
	// UnityEngine.Analytics.TriggerBool UnityEngine.Analytics.EventTrigger::m_TriggerBool
	int32_t ___m_TriggerBool_5;
	// System.Single UnityEngine.Analytics.EventTrigger::m_InitTime
	float ___m_InitTime_6;
	// System.Single UnityEngine.Analytics.EventTrigger::m_RepeatTime
	float ___m_RepeatTime_7;
	// System.Int32 UnityEngine.Analytics.EventTrigger::m_Repetitions
	int32_t ___m_Repetitions_8;
	// System.Int32 UnityEngine.Analytics.EventTrigger::repetitionCount
	int32_t ___repetitionCount_9;
	// UnityEngine.Analytics.EventTrigger/OnTrigger UnityEngine.Analytics.EventTrigger::m_TriggerFunction
	OnTrigger_t92557FB8650E42F9EA346F70E6763F95A0CB9AE8* ___m_TriggerFunction_10;
	// UnityEngine.Analytics.TriggerMethod UnityEngine.Analytics.EventTrigger::m_Method
	TriggerMethod_tBC1D8594D5A8902E70A147C107EE646EDEE4EE8B* ___m_Method_11;
};

// System.Reflection.MemberInfo
struct MemberInfo_t  : public RuntimeObject
{
};

// UnityEngine.Analytics.StandardEventPayload
struct StandardEventPayload_tC18B9CF0832CA32A1280D8ECDB81596C45ED4EA7  : public RuntimeObject
{
	// System.Boolean UnityEngine.Analytics.StandardEventPayload::m_IsEventExpanded
	bool ___m_IsEventExpanded_0;
	// System.String UnityEngine.Analytics.StandardEventPayload::m_StandardEventType
	String_t* ___m_StandardEventType_1;
	// System.Type UnityEngine.Analytics.StandardEventPayload::standardEventType
	Type_t* ___standardEventType_2;
	// UnityEngine.Analytics.AnalyticsEventParamListContainer UnityEngine.Analytics.StandardEventPayload::m_Parameters
	AnalyticsEventParamListContainer_tAE992B5199A074975EF5CC6CF4A80FCCFCBF4C02* ___m_Parameters_3;
	// System.String UnityEngine.Analytics.StandardEventPayload::m_Name
	String_t* ___m_Name_5;
};

struct StandardEventPayload_tC18B9CF0832CA32A1280D8ECDB81596C45ED4EA7_StaticFields
{
	// System.Collections.Generic.Dictionary`2<System.String,System.Object> UnityEngine.Analytics.StandardEventPayload::m_EventData
	Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* ___m_EventData_4;
};

// System.String
struct String_t  : public RuntimeObject
{
	// System.Int32 System.String::_stringLength
	int32_t ____stringLength_4;
	// System.Char System.String::_firstChar
	Il2CppChar ____firstChar_5;
};

struct String_t_StaticFields
{
	// System.String System.String::Empty
	String_t* ___Empty_6;
};

// UnityEngine.Analytics.TrackableProperty
struct TrackableProperty_tD94C354D884EDFB6603639EE6559289850F5E720  : public RuntimeObject
{
	// System.Collections.Generic.List`1<UnityEngine.Analytics.TrackableProperty/FieldWithTarget> UnityEngine.Analytics.TrackableProperty::m_Fields
	List_1_t20E90EB749670C2DEEE278FBBA3E9DE0A00E09CC* ___m_Fields_1;
};

// UnityEngine.Analytics.TrackablePropertyBase
struct TrackablePropertyBase_t1D13B0FF07AB12F6973658EF46A70504D578017E  : public RuntimeObject
{
	// UnityEngine.Object UnityEngine.Analytics.TrackablePropertyBase::m_Target
	Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___m_Target_0;
	// System.String UnityEngine.Analytics.TrackablePropertyBase::m_Path
	String_t* ___m_Path_1;
};

// UnityEngine.Analytics.TrackableTrigger
struct TrackableTrigger_t034420C16AA820B759DDF89D1E1B9BD1FC3355A6  : public RuntimeObject
{
	// UnityEngine.GameObject UnityEngine.Analytics.TrackableTrigger::m_Target
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___m_Target_0;
	// System.String UnityEngine.Analytics.TrackableTrigger::m_MethodPath
	String_t* ___m_MethodPath_1;
};

// UnityEngine.Analytics.TriggerListContainer
struct TriggerListContainer_t05237759E7AFB582C672447CB1FBBF079AEE03C9  : public RuntimeObject
{
	// System.Collections.Generic.List`1<UnityEngine.Analytics.TriggerRule> UnityEngine.Analytics.TriggerListContainer::m_Rules
	List_1_t3585B91917CA5C4854A4496D5F41B409BCE66B30* ___m_Rules_0;
};

// UnityEngine.Analytics.TriggerMethod
struct TriggerMethod_tBC1D8594D5A8902E70A147C107EE646EDEE4EE8B  : public RuntimeObject
{
};

// UnityEngine.Analytics.TriggerRule
struct TriggerRule_tB684F4AC495F20C6A8BA52384547780771817E4E  : public RuntimeObject
{
	// UnityEngine.Analytics.TrackableField UnityEngine.Analytics.TriggerRule::m_Target
	TrackableField_t6DC55D40EE374F2FFA111344BC840FA36CF76D7F* ___m_Target_0;
	// UnityEngine.Analytics.TriggerOperator UnityEngine.Analytics.TriggerRule::m_Operator
	int32_t ___m_Operator_1;
	// UnityEngine.Analytics.ValueProperty UnityEngine.Analytics.TriggerRule::m_Value
	ValueProperty_tB152A92DD3101A108D3C41589959AB70AAD68436* ___m_Value_2;
	// UnityEngine.Analytics.ValueProperty UnityEngine.Analytics.TriggerRule::m_Value2
	ValueProperty_tB152A92DD3101A108D3C41589959AB70AAD68436* ___m_Value2_3;
};

// UnityEngine.Analytics.ValueProperty
struct ValueProperty_tB152A92DD3101A108D3C41589959AB70AAD68436  : public RuntimeObject
{
	// System.Boolean UnityEngine.Analytics.ValueProperty::m_EditingCustomValue
	bool ___m_EditingCustomValue_0;
	// System.Int32 UnityEngine.Analytics.ValueProperty::m_PopupIndex
	int32_t ___m_PopupIndex_1;
	// System.String UnityEngine.Analytics.ValueProperty::m_CustomValue
	String_t* ___m_CustomValue_2;
	// System.Boolean UnityEngine.Analytics.ValueProperty::m_FixedType
	bool ___m_FixedType_3;
	// System.String UnityEngine.Analytics.ValueProperty::m_EnumType
	String_t* ___m_EnumType_4;
	// System.Boolean UnityEngine.Analytics.ValueProperty::m_EnumTypeIsCustomizable
	bool ___m_EnumTypeIsCustomizable_5;
	// System.Boolean UnityEngine.Analytics.ValueProperty::m_CanDisable
	bool ___m_CanDisable_6;
	// UnityEngine.Analytics.ValueProperty/PropertyType UnityEngine.Analytics.ValueProperty::m_PropertyType
	int32_t ___m_PropertyType_7;
	// System.String UnityEngine.Analytics.ValueProperty::m_ValueType
	String_t* ___m_ValueType_8;
	// System.String UnityEngine.Analytics.ValueProperty::m_Value
	String_t* ___m_Value_9;
	// UnityEngine.Analytics.TrackableField UnityEngine.Analytics.ValueProperty::m_Target
	TrackableField_t6DC55D40EE374F2FFA111344BC840FA36CF76D7F* ___m_Target_10;
};

// System.ValueType
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F  : public RuntimeObject
{
};
// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F_marshaled_com
{
};

// UnityEngine.YieldInstruction
struct YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D  : public RuntimeObject
{
};
// Native definition for P/Invoke marshalling of UnityEngine.YieldInstruction
struct YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_pinvoke
{
};
// Native definition for COM marshalling of UnityEngine.YieldInstruction
struct YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_com
{
};

// UnityEngine.Analytics.AnalyticsEventTracker/<TimedTrigger>c__Iterator0
struct U3CTimedTriggerU3Ec__Iterator0_t9F1A338E6CDCAA02C998F44F5607E9C204ADCAEC  : public RuntimeObject
{
	// UnityEngine.Analytics.AnalyticsEventTracker UnityEngine.Analytics.AnalyticsEventTracker/<TimedTrigger>c__Iterator0::$this
	AnalyticsEventTracker_t43C623F37E8BC18790D02385CAFC4E145F35E994* ___U24this_0;
	// System.Object UnityEngine.Analytics.AnalyticsEventTracker/<TimedTrigger>c__Iterator0::$current
	RuntimeObject* ___U24current_1;
	// System.Boolean UnityEngine.Analytics.AnalyticsEventTracker/<TimedTrigger>c__Iterator0::$disposing
	bool ___U24disposing_2;
	// System.Int32 UnityEngine.Analytics.AnalyticsEventTracker/<TimedTrigger>c__Iterator0::$PC
	int32_t ___U24PC_3;
};

// UnityEngine.Analytics.TrackableProperty/FieldWithTarget
struct FieldWithTarget_t504FF69C27D0DC4A727BE0A6CE8167EC2A967448  : public RuntimeObject
{
	// System.String UnityEngine.Analytics.TrackableProperty/FieldWithTarget::m_ParamName
	String_t* ___m_ParamName_0;
	// UnityEngine.Object UnityEngine.Analytics.TrackableProperty/FieldWithTarget::m_Target
	Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___m_Target_1;
	// System.String UnityEngine.Analytics.TrackableProperty/FieldWithTarget::m_FieldPath
	String_t* ___m_FieldPath_2;
	// System.String UnityEngine.Analytics.TrackableProperty/FieldWithTarget::m_TypeString
	String_t* ___m_TypeString_3;
	// System.Boolean UnityEngine.Analytics.TrackableProperty/FieldWithTarget::m_DoStatic
	bool ___m_DoStatic_4;
	// System.String UnityEngine.Analytics.TrackableProperty/FieldWithTarget::m_StaticString
	String_t* ___m_StaticString_5;
};

// System.Collections.Generic.List`1/Enumerator<System.Object>
struct Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A 
{
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::_list
	List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* ____list_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_index
	int32_t ____index_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_version
	int32_t ____version_2;
	// T System.Collections.Generic.List`1/Enumerator::_current
	RuntimeObject* ____current_3;
};

// System.Collections.Generic.List`1/Enumerator<UnityEngine.Analytics.TriggerRule>
struct Enumerator_tA2A4569CD78EC2E58E591972CAF75AC13181D5B1 
{
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::_list
	List_1_t3585B91917CA5C4854A4496D5F41B409BCE66B30* ____list_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_index
	int32_t ____index_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_version
	int32_t ____version_2;
	// T System.Collections.Generic.List`1/Enumerator::_current
	TriggerRule_tB684F4AC495F20C6A8BA52384547780771817E4E* ____current_3;
};

// System.Collections.Generic.List`1/Enumerator<UnityEngine.Analytics.TrackableProperty/FieldWithTarget>
struct Enumerator_tB497C5B7709BD2CAFA3F994CD12CFB6F80000713 
{
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::_list
	List_1_t20E90EB749670C2DEEE278FBBA3E9DE0A00E09CC* ____list_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_index
	int32_t ____index_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_version
	int32_t ____version_2;
	// T System.Collections.Generic.List`1/Enumerator::_current
	FieldWithTarget_t504FF69C27D0DC4A727BE0A6CE8167EC2A967448* ____current_3;
};

// System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator<System.Object,System.Object>
struct Enumerator_t65CC956745B1180C04CE6C6910FB27C5F32BB9FF 
{
	// System.Collections.Generic.Dictionary`2<TKey,TValue> System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator::_dictionary
	Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* ____dictionary_0;
	// System.Int32 System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator::_index
	int32_t ____index_1;
	// System.Int32 System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator::_version
	int32_t ____version_2;
	// TKey System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator::_currentKey
	RuntimeObject* ____currentKey_3;
};

// System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator<System.String,System.Collections.Generic.List`1<System.Boolean>>
struct Enumerator_t2BE86F405FCFA2DF433334EED3CAB9B9C764584E 
{
	// System.Collections.Generic.Dictionary`2<TKey,TValue> System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator::_dictionary
	Dictionary_2_tC1BD2E5DC97017673DF7A42E09736890AFD8B0C3* ____dictionary_0;
	// System.Int32 System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator::_index
	int32_t ____index_1;
	// System.Int32 System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator::_version
	int32_t ____version_2;
	// TKey System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator::_currentKey
	String_t* ____currentKey_3;
};

// System.Boolean
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22 
{
	// System.Boolean System.Boolean::m_value
	bool ___m_value_0;
};

struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_StaticFields
{
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_5;
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_6;
};

// System.Char
struct Char_t521A6F19B456D956AF452D926C32709DC03D6B17 
{
	// System.Char System.Char::m_value
	Il2CppChar ___m_value_0;
};

struct Char_t521A6F19B456D956AF452D926C32709DC03D6B17_StaticFields
{
	// System.Byte[] System.Char::s_categoryForLatin1
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___s_categoryForLatin1_3;
};

// System.Decimal
struct Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F 
{
	union
	{
		#pragma pack(push, tp, 1)
		struct
		{
			// System.Int32 System.Decimal::flags
			int32_t ___flags_8;
		};
		#pragma pack(pop, tp)
		struct
		{
			int32_t ___flags_8_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___hi_9_OffsetPadding[4];
			// System.Int32 System.Decimal::hi
			int32_t ___hi_9;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___hi_9_OffsetPadding_forAlignmentOnly[4];
			int32_t ___hi_9_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___lo_10_OffsetPadding[8];
			// System.Int32 System.Decimal::lo
			int32_t ___lo_10;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___lo_10_OffsetPadding_forAlignmentOnly[8];
			int32_t ___lo_10_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___mid_11_OffsetPadding[12];
			// System.Int32 System.Decimal::mid
			int32_t ___mid_11;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___mid_11_OffsetPadding_forAlignmentOnly[12];
			int32_t ___mid_11_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___ulomidLE_12_OffsetPadding[8];
			// System.UInt64 System.Decimal::ulomidLE
			uint64_t ___ulomidLE_12;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___ulomidLE_12_OffsetPadding_forAlignmentOnly[8];
			uint64_t ___ulomidLE_12_forAlignmentOnly;
		};
	};
};

struct Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F_StaticFields
{
	// System.Decimal System.Decimal::Zero
	Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F ___Zero_3;
	// System.Decimal System.Decimal::One
	Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F ___One_4;
	// System.Decimal System.Decimal::MinusOne
	Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F ___MinusOne_5;
	// System.Decimal System.Decimal::MaxValue
	Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F ___MaxValue_6;
	// System.Decimal System.Decimal::MinValue
	Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F ___MinValue_7;
};

// System.Double
struct Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F 
{
	// System.Double System.Double::m_value
	double ___m_value_0;
};

// System.Enum
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2  : public ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F
{
};

struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_StaticFields
{
	// System.Char[] System.Enum::enumSeperatorCharArray
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___enumSeperatorCharArray_0;
};
// Native definition for P/Invoke marshalling of System.Enum
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.Enum
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_marshaled_com
{
};

// System.Reflection.FieldInfo
struct FieldInfo_t  : public MemberInfo_t
{
};

// System.Int16
struct Int16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175 
{
	// System.Int16 System.Int16::m_value
	int16_t ___m_value_0;
};

// System.Int32
struct Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C 
{
	// System.Int32 System.Int32::m_value
	int32_t ___m_value_0;
};

// System.Int64
struct Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3 
{
	// System.Int64 System.Int64::m_value
	int64_t ___m_value_0;
};

// System.IntPtr
struct IntPtr_t 
{
	// System.Void* System.IntPtr::m_value
	void* ___m_value_0;
};

struct IntPtr_t_StaticFields
{
	// System.IntPtr System.IntPtr::Zero
	intptr_t ___Zero_1;
};

// System.Reflection.PropertyInfo
struct PropertyInfo_t  : public MemberInfo_t
{
};

// System.Single
struct Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C 
{
	// System.Single System.Single::m_value
	float ___m_value_0;
};

// UnityEngine.Analytics.TrackableField
struct TrackableField_t6DC55D40EE374F2FFA111344BC840FA36CF76D7F  : public TrackablePropertyBase_t1D13B0FF07AB12F6973658EF46A70504D578017E
{
	// System.String[] UnityEngine.Analytics.TrackableField::m_ValidTypeNames
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___m_ValidTypeNames_2;
	// System.String UnityEngine.Analytics.TrackableField::m_Type
	String_t* ___m_Type_3;
	// System.String UnityEngine.Analytics.TrackableField::m_EnumType
	String_t* ___m_EnumType_4;
};

// System.UInt32
struct UInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B 
{
	// System.UInt32 System.UInt32::m_value
	uint32_t ___m_value_0;
};

// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915 
{
	union
	{
		struct
		{
		};
		uint8_t Void_t4861ACF8F4594C3437BB48B6E56783494B843915__padding[1];
	};
};

// UnityEngine.WaitForSeconds
struct WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3  : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D
{
	// System.Single UnityEngine.WaitForSeconds::m_Seconds
	float ___m_Seconds_0;
};
// Native definition for P/Invoke marshalling of UnityEngine.WaitForSeconds
struct WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_marshaled_pinvoke : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_pinvoke
{
	float ___m_Seconds_0;
};
// Native definition for COM marshalling of UnityEngine.WaitForSeconds
struct WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_marshaled_com : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_com
{
	float ___m_Seconds_0;
};

// UnityEngine.Coroutine
struct Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B  : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D
{
	// System.IntPtr UnityEngine.Coroutine::m_Ptr
	intptr_t ___m_Ptr_0;
};
// Native definition for P/Invoke marshalling of UnityEngine.Coroutine
struct Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B_marshaled_pinvoke : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
};
// Native definition for COM marshalling of UnityEngine.Coroutine
struct Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B_marshaled_com : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_com
{
	intptr_t ___m_Ptr_0;
};

// System.Delegate
struct Delegate_t  : public RuntimeObject
{
	// System.IntPtr System.Delegate::method_ptr
	Il2CppMethodPointer ___method_ptr_0;
	// System.IntPtr System.Delegate::invoke_impl
	intptr_t ___invoke_impl_1;
	// System.Object System.Delegate::m_target
	RuntimeObject* ___m_target_2;
	// System.IntPtr System.Delegate::method
	intptr_t ___method_3;
	// System.IntPtr System.Delegate::delegate_trampoline
	intptr_t ___delegate_trampoline_4;
	// System.IntPtr System.Delegate::extra_arg
	intptr_t ___extra_arg_5;
	// System.IntPtr System.Delegate::method_code
	intptr_t ___method_code_6;
	// System.IntPtr System.Delegate::interp_method
	intptr_t ___interp_method_7;
	// System.IntPtr System.Delegate::interp_invoke_impl
	intptr_t ___interp_invoke_impl_8;
	// System.Reflection.MethodInfo System.Delegate::method_info
	MethodInfo_t* ___method_info_9;
	// System.Reflection.MethodInfo System.Delegate::original_method_info
	MethodInfo_t* ___original_method_info_10;
	// System.DelegateData System.Delegate::data
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data_11;
	// System.Boolean System.Delegate::method_is_virtual
	bool ___method_is_virtual_12;
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
	intptr_t ___interp_method_7;
	intptr_t ___interp_invoke_impl_8;
	MethodInfo_t* ___method_info_9;
	MethodInfo_t* ___original_method_info_10;
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data_11;
	int32_t ___method_is_virtual_12;
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
	intptr_t ___interp_method_7;
	intptr_t ___interp_invoke_impl_8;
	MethodInfo_t* ___method_info_9;
	MethodInfo_t* ___original_method_info_10;
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data_11;
	int32_t ___method_is_virtual_12;
};

// System.Exception
struct Exception_t  : public RuntimeObject
{
	// System.String System.Exception::_className
	String_t* ____className_1;
	// System.String System.Exception::_message
	String_t* ____message_2;
	// System.Collections.IDictionary System.Exception::_data
	RuntimeObject* ____data_3;
	// System.Exception System.Exception::_innerException
	Exception_t* ____innerException_4;
	// System.String System.Exception::_helpURL
	String_t* ____helpURL_5;
	// System.Object System.Exception::_stackTrace
	RuntimeObject* ____stackTrace_6;
	// System.String System.Exception::_stackTraceString
	String_t* ____stackTraceString_7;
	// System.String System.Exception::_remoteStackTraceString
	String_t* ____remoteStackTraceString_8;
	// System.Int32 System.Exception::_remoteStackIndex
	int32_t ____remoteStackIndex_9;
	// System.Object System.Exception::_dynamicMethods
	RuntimeObject* ____dynamicMethods_10;
	// System.Int32 System.Exception::_HResult
	int32_t ____HResult_11;
	// System.String System.Exception::_source
	String_t* ____source_12;
	// System.Runtime.Serialization.SafeSerializationManager System.Exception::_safeSerializationManager
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager_13;
	// System.Diagnostics.StackTrace[] System.Exception::captured_traces
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces_14;
	// System.IntPtr[] System.Exception::native_trace_ips
	IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832* ___native_trace_ips_15;
	// System.Int32 System.Exception::caught_in_unmanaged
	int32_t ___caught_in_unmanaged_16;
};

struct Exception_t_StaticFields
{
	// System.Object System.Exception::s_EDILock
	RuntimeObject* ___s_EDILock_0;
};
// Native definition for P/Invoke marshalling of System.Exception
struct Exception_t_marshaled_pinvoke
{
	char* ____className_1;
	char* ____message_2;
	RuntimeObject* ____data_3;
	Exception_t_marshaled_pinvoke* ____innerException_4;
	char* ____helpURL_5;
	Il2CppIUnknown* ____stackTrace_6;
	char* ____stackTraceString_7;
	char* ____remoteStackTraceString_8;
	int32_t ____remoteStackIndex_9;
	Il2CppIUnknown* ____dynamicMethods_10;
	int32_t ____HResult_11;
	char* ____source_12;
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager_13;
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
	int32_t ___caught_in_unmanaged_16;
};
// Native definition for COM marshalling of System.Exception
struct Exception_t_marshaled_com
{
	Il2CppChar* ____className_1;
	Il2CppChar* ____message_2;
	RuntimeObject* ____data_3;
	Exception_t_marshaled_com* ____innerException_4;
	Il2CppChar* ____helpURL_5;
	Il2CppIUnknown* ____stackTrace_6;
	Il2CppChar* ____stackTraceString_7;
	Il2CppChar* ____remoteStackTraceString_8;
	int32_t ____remoteStackIndex_9;
	Il2CppIUnknown* ____dynamicMethods_10;
	int32_t ____HResult_11;
	Il2CppChar* ____source_12;
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager_13;
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
	int32_t ___caught_in_unmanaged_16;
};

// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C  : public RuntimeObject
{
	// System.IntPtr UnityEngine.Object::m_CachedPtr
	intptr_t ___m_CachedPtr_0;
};

struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_StaticFields
{
	// System.Int32 UnityEngine.Object::OffsetOfInstanceIDInCPlusPlusObject
	int32_t ___OffsetOfInstanceIDInCPlusPlusObject_1;
};
// Native definition for P/Invoke marshalling of UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_pinvoke
{
	intptr_t ___m_CachedPtr_0;
};
// Native definition for COM marshalling of UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_com
{
	intptr_t ___m_CachedPtr_0;
};

// System.RuntimeTypeHandle
struct RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B 
{
	// System.IntPtr System.RuntimeTypeHandle::value
	intptr_t ___value_0;
};

// UnityEngine.Component
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// UnityEngine.GameObject
struct GameObject_t76FEDD663AB33C991A9C9A23129337651094216F  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// System.MulticastDelegate
struct MulticastDelegate_t  : public Delegate_t
{
	// System.Delegate[] System.MulticastDelegate::delegates
	DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771* ___delegates_13;
};
// Native definition for P/Invoke marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_pinvoke : public Delegate_t_marshaled_pinvoke
{
	Delegate_t_marshaled_pinvoke** ___delegates_13;
};
// Native definition for COM marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_com : public Delegate_t_marshaled_com
{
	Delegate_t_marshaled_com** ___delegates_13;
};

// System.SystemException
struct SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295  : public Exception_t
{
};

// System.Type
struct Type_t  : public MemberInfo_t
{
	// System.RuntimeTypeHandle System.Type::_impl
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B ____impl_8;
};

struct Type_t_StaticFields
{
	// System.Reflection.Binder modreq(System.Runtime.CompilerServices.IsVolatile) System.Type::s_defaultBinder
	Binder_t91BFCE95A7057FADF4D8A1A342AFE52872246235* ___s_defaultBinder_0;
	// System.Char System.Type::Delimiter
	Il2CppChar ___Delimiter_1;
	// System.Type[] System.Type::EmptyTypes
	TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* ___EmptyTypes_2;
	// System.Object System.Type::Missing
	RuntimeObject* ___Missing_3;
	// System.Reflection.MemberFilter System.Type::FilterAttribute
	MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553* ___FilterAttribute_4;
	// System.Reflection.MemberFilter System.Type::FilterName
	MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553* ___FilterName_5;
	// System.Reflection.MemberFilter System.Type::FilterNameIgnoreCase
	MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553* ___FilterNameIgnoreCase_6;
};

// System.AsyncCallback
struct AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C  : public MulticastDelegate_t
{
};

// UnityEngine.Behaviour
struct Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// System.NotSupportedException
struct NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};

// UnityEngine.Analytics.EventTrigger/OnTrigger
struct OnTrigger_t92557FB8650E42F9EA346F70E6763F95A0CB9AE8  : public MulticastDelegate_t
{
};

// UnityEngine.MonoBehaviour
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

// UnityEngine.Analytics.AnalyticsEventTracker
struct AnalyticsEventTracker_t43C623F37E8BC18790D02385CAFC4E145F35E994  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.Analytics.EventTrigger UnityEngine.Analytics.AnalyticsEventTracker::m_Trigger
	EventTrigger_t85ABB3C787BF555580DE542822F8E973718C5791* ___m_Trigger_4;
	// UnityEngine.Analytics.StandardEventPayload UnityEngine.Analytics.AnalyticsEventTracker::m_EventPayload
	StandardEventPayload_tC18B9CF0832CA32A1280D8ECDB81596C45ED4EA7* ___m_EventPayload_5;
};

// UnityEngine.Analytics.AnalyticsTracker
struct AnalyticsTracker_t1DD335B622ADA1AABB848B69311C67605DEF6301  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.String UnityEngine.Analytics.AnalyticsTracker::m_EventName
	String_t* ___m_EventName_4;
	// System.Collections.Generic.Dictionary`2<System.String,System.Object> UnityEngine.Analytics.AnalyticsTracker::m_Dict
	Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* ___m_Dict_5;
	// System.Int32 UnityEngine.Analytics.AnalyticsTracker::m_PrevDictHash
	int32_t ___m_PrevDictHash_6;
	// UnityEngine.Analytics.TrackableProperty UnityEngine.Analytics.AnalyticsTracker::m_TrackableProperty
	TrackableProperty_tD94C354D884EDFB6603639EE6559289850F5E720* ___m_TrackableProperty_7;
	// UnityEngine.Analytics.AnalyticsTracker/Trigger UnityEngine.Analytics.AnalyticsTracker::m_Trigger
	int32_t ___m_Trigger_8;
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif
// System.Type[]
struct TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB  : public RuntimeArray
{
	ALIGN_FIELD (8) Type_t* m_Items[1];

	inline Type_t* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Type_t** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Type_t* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Type_t* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Type_t** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Type_t* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.String[]
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248  : public RuntimeArray
{
	ALIGN_FIELD (8) String_t* m_Items[1];

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
// System.Char[]
struct CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB  : public RuntimeArray
{
	ALIGN_FIELD (8) Il2CppChar m_Items[1];

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
// System.Object[]
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918  : public RuntimeArray
{
	ALIGN_FIELD (8) RuntimeObject* m_Items[1];

	inline RuntimeObject* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline RuntimeObject** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, RuntimeObject* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline RuntimeObject* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline RuntimeObject** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, RuntimeObject* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.Delegate[]
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771  : public RuntimeArray
{
	ALIGN_FIELD (8) Delegate_t* m_Items[1];

	inline Delegate_t* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Delegate_t** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Delegate_t* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Delegate_t* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Delegate_t** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Delegate_t* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.Boolean[]
struct BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4  : public RuntimeArray
{
	ALIGN_FIELD (8) bool m_Items[1];

	inline bool GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline bool* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, bool value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline bool GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline bool* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, bool value)
	{
		m_Items[index] = value;
	}
};


// System.Void System.Collections.Generic.List`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::Clear()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Clear_mCFB5EA7351D5860D2B91592B91A84CA265A41433_gshared (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* __this, const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1<System.Object>::get_Item(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* List_1_get_Item_m33561245D64798C2AB07584C0EC4F240E4839A38_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, int32_t ___index0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::Add(TKey,TValue)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Add_m93FFFABE8FCE7FA9793F0915E2A8842C7CD0C0C1_gshared (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* __this, RuntimeObject* ___key0, RuntimeObject* ___value1, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.List`1<System.Object>::get_Count()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m5B32FBC624618211EB461D59CFBB10E987FD1329_gshared (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* __this, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::ContainsKey(TKey)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_ContainsKey_m703047C213F7AB55C9DC346596287773A1F670CD_gshared (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* __this, RuntimeObject* ___key0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Boolean>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m87539832B82A3453971F3BCC702C7346E8D3F953_gshared (List_1_t01207CE5982A7640E56B1F9F672A06F96B09367A* __this, const RuntimeMethod* method) ;
// TValue System.Collections.Generic.Dictionary`2<System.Object,System.Object>::get_Item(TKey)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_get_Item_m4AAAECBE902A211BF2126E6AFA280AEF73A3E0D6_gshared (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* __this, RuntimeObject* ___key0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Boolean>::Add(T)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_m5AAB6DCB6C30EB5769B4E8DB8170E50319F0A9ED_gshared_inline (List_1_t01207CE5982A7640E56B1F9F672A06F96B09367A* __this, bool ___item0, const RuntimeMethod* method) ;
// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Object>::get_Keys()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR KeyCollection_tB45A861D090B15129521119AE48ED3813820A974* Dictionary_2_get_Keys_m72D290F90654BFD683FA7AA7C63D9F4F692218B6_gshared (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* __this, const RuntimeMethod* method) ;
// System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2/KeyCollection<System.Object,System.Object>::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_t65CC956745B1180C04CE6C6910FB27C5F32BB9FF KeyCollection_GetEnumerator_m7E77FBA7DE2D3876EC02F396712C4AA5B1D535A5_gshared (KeyCollection_tB45A861D090B15129521119AE48ED3813820A974* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator<System.Object,System.Object>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator_Dispose_mEB2A61F3F3F420C1B1DFD5C74EEFD4BD7761BCF7_gshared (Enumerator_t65CC956745B1180C04CE6C6910FB27C5F32BB9FF* __this, const RuntimeMethod* method) ;
// TKey System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator<System.Object,System.Object>::get_Current()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* Enumerator_get_Current_mD6472FA27D28B9AE64A0FEF796C72ABBC2420EBF_gshared_inline (Enumerator_t65CC956745B1180C04CE6C6910FB27C5F32BB9FF* __this, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.List`1<System.Boolean>::Contains(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool List_1_Contains_mC82ECFA72602553B2896828FCD67FDAE8A18C190_gshared (List_1_t01207CE5982A7640E56B1F9F672A06F96B09367A* __this, bool ___item0, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator<System.Object,System.Object>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_mB5E00F11BCA3AC963F9BA72659FA76B107863F3C_gshared (Enumerator_t65CC956745B1180C04CE6C6910FB27C5F32BB9FF* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::set_Item(TKey,TValue)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_set_Item_m1A840355E8EDAECEA9D0C6F5E51B248FAA449CBD_gshared (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* __this, RuntimeObject* ___key0, RuntimeObject* ___value1, const RuntimeMethod* method) ;
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<System.Object>::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A List_1_GetEnumerator_mD8294A7FA2BEB1929487127D476F8EC1CDC23BFC_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1/Enumerator<System.Object>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator_Dispose_mD9DC3E3C3697830A4823047AB29A77DBBB5ED419_gshared (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* __this, const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1/Enumerator<System.Object>::get_Current()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* Enumerator_get_Current_m6330F15D18EE4F547C05DF9BF83C5EB710376027_gshared_inline (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* __this, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.List`1/Enumerator<System.Object>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_mE921CC8F29FBBDE7CC3209A0ED0D921D58D00BCB_gshared (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::Add(T)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___item0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::RemoveAt(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_RemoveAt_m54F62297ADEE4D4FDA697F49ED807BF901201B54_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, int32_t ___index0, const RuntimeMethod* method) ;

// System.Void UnityEngine.Analytics.EventTrigger::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EventTrigger__ctor_mF533E0363CF00A617CF02B5A3D53E0CE15F40CA4 (EventTrigger_t85ABB3C787BF555580DE542822F8E973718C5791* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Analytics.StandardEventPayload::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StandardEventPayload__ctor_m4A0B697AB8DB52CD3D502D430AE52B188DBBE58B (StandardEventPayload_tC18B9CF0832CA32A1280D8ECDB81596C45ED4EA7* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.MonoBehaviour::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* __this, const RuntimeMethod* method) ;
// UnityEngine.Analytics.AnalyticsResult UnityEngine.Analytics.AnalyticsEventTracker::SendEvent()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t AnalyticsEventTracker_SendEvent_m2BF32B52CA60300EE2CF237E4F14CD41CD7B0050 (AnalyticsEventTracker_t43C623F37E8BC18790D02385CAFC4E145F35E994* __this, const RuntimeMethod* method) ;
// UnityEngine.GameObject UnityEngine.Component::get_gameObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Analytics.EventTrigger::Test(UnityEngine.GameObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool EventTrigger_Test_mAAD519892E8E884B177E7853EA30AD20EF94E5EE (EventTrigger_t85ABB3C787BF555580DE542822F8E973718C5791* __this, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___gameObject0, const RuntimeMethod* method) ;
// UnityEngine.Analytics.StandardEventPayload UnityEngine.Analytics.AnalyticsEventTracker::get_payload()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR StandardEventPayload_tC18B9CF0832CA32A1280D8ECDB81596C45ED4EA7* AnalyticsEventTracker_get_payload_m3969D906E5B805CC4666951E0EFC33DB5A3A6AC8_inline (AnalyticsEventTracker_t43C623F37E8BC18790D02385CAFC4E145F35E994* __this, const RuntimeMethod* method) ;
// UnityEngine.Analytics.TriggerType UnityEngine.Analytics.EventTrigger::get_triggerType()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t EventTrigger_get_triggerType_m97FA977005FBC481D4937BA11E1EE84A8175A31C_inline (EventTrigger_t85ABB3C787BF555580DE542822F8E973718C5791* __this, const RuntimeMethod* method) ;
// UnityEngine.Analytics.TriggerLifecycleEvent UnityEngine.Analytics.EventTrigger::get_lifecycleEvent()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t EventTrigger_get_lifecycleEvent_mC6629116356D0599B91AECDD775C0E8EE0F66963_inline (EventTrigger_t85ABB3C787BF555580DE542822F8E973718C5791* __this, const RuntimeMethod* method) ;
// System.Collections.IEnumerator UnityEngine.Analytics.AnalyticsEventTracker::TimedTrigger()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* AnalyticsEventTracker_TimedTrigger_m47380808F19DBC38021D857D77233B73137D0844 (AnalyticsEventTracker_t43C623F37E8BC18790D02385CAFC4E145F35E994* __this, const RuntimeMethod* method) ;
// UnityEngine.Coroutine UnityEngine.MonoBehaviour::StartCoroutine(System.Collections.IEnumerator)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812 (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* __this, RuntimeObject* ___routine0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Analytics.AnalyticsEventTracker/<TimedTrigger>c__Iterator0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CTimedTriggerU3Ec__Iterator0__ctor_m2ACAFB91911E62F21543B989DDD2ECB8D1E29527 (U3CTimedTriggerU3Ec__Iterator0_t9F1A338E6CDCAA02C998F44F5607E9C204ADCAEC* __this, const RuntimeMethod* method) ;
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2 (RuntimeObject* __this, const RuntimeMethod* method) ;
// System.Single UnityEngine.Analytics.EventTrigger::get_initTime()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float EventTrigger_get_initTime_m7CD123F71FD55CC12D417521C70038CAEA37339B_inline (EventTrigger_t85ABB3C787BF555580DE542822F8E973718C5791* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.WaitForSeconds::.ctor(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WaitForSeconds__ctor_m579F95BADEDBAB4B3A7E302C6EE3995926EF2EFC (WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3* __this, float ___seconds0, const RuntimeMethod* method) ;
// System.Single UnityEngine.Analytics.EventTrigger::get_repeatTime()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float EventTrigger_get_repeatTime_mF1D62DF10BED6C110BE2FB2DA3E69E25E4CCBF1F_inline (EventTrigger_t85ABB3C787BF555580DE542822F8E973718C5791* __this, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.Analytics.EventTrigger::get_repetitions()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t EventTrigger_get_repetitions_mC09AFA3A46F74144A6CE7982248FC794C5015B2B_inline (EventTrigger_t85ABB3C787BF555580DE542822F8E973718C5791* __this, const RuntimeMethod* method) ;
// System.Void System.NotSupportedException::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* __this, const RuntimeMethod* method) ;
// System.String System.String::Trim()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Trim_mCD6D8C6D4CFD15225D12DB7D3E0544CA80FB8DA5 (String_t* __this, const RuntimeMethod* method) ;
// System.String UnityEngine.Analytics.ValueProperty::get_propertyValue()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* ValueProperty_get_propertyValue_mFC1DBF8E2C72655224C6E30E2FCEF41B3E19B1F5 (ValueProperty_tB152A92DD3101A108D3C41589959AB70AAD68436* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<UnityEngine.Analytics.AnalyticsEventParam>::.ctor()
inline void List_1__ctor_m1C0E552290CF0082F375DA163B260162A77979ED (List_1_t9DD115095F7C5EEA37796C3B52E5EADC08B27030* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t9DD115095F7C5EEA37796C3B52E5EADC08B27030*, const RuntimeMethod*))List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared)(__this, method);
}
// System.Void UnityEngine.Analytics.AnalyticsEventParamListContainer::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnalyticsEventParamListContainer__ctor_mD37625639933B1B1797D0739E953A8D5AEEBAD17 (AnalyticsEventParamListContainer_tAE992B5199A074975EF5CC6CF4A80FCCFCBF4C02* __this, const RuntimeMethod* method) ;
// System.String UnityEngine.Analytics.StandardEventPayload::get_name()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* StandardEventPayload_get_name_m039945159E59D0A08DB40AAB683A6325338CFE2D_inline (StandardEventPayload_tC18B9CF0832CA32A1280D8ECDB81596C45ED4EA7* __this, const RuntimeMethod* method) ;
// System.Boolean System.String::IsNullOrEmpty(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_IsNullOrEmpty_mEA9E3FB005AC28FE02E69FCF95A7B8456192B478 (String_t* ___value0, const RuntimeMethod* method) ;
// System.Void System.Exception::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Exception__ctor_m9B2BD92CD68916245A75109105D9071C9D430E7F (Exception_t* __this, String_t* ___message0, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Analytics.StandardEventPayload::IsCustomDataValid()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool StandardEventPayload_IsCustomDataValid_m657EAAED5B6C10BB7ECCE3632840A110B7AF0BBF (StandardEventPayload_tC18B9CF0832CA32A1280D8ECDB81596C45ED4EA7* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Analytics.StandardEventPayload::IsRequiredDataValid()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool StandardEventPayload_IsRequiredDataValid_m44BD34700FBB853C2E04D3ABFB306835F0BB2297 (StandardEventPayload_tC18B9CF0832CA32A1280D8ECDB81596C45ED4EA7* __this, const RuntimeMethod* method) ;
// System.Collections.Generic.IDictionary`2<System.String,System.Object> UnityEngine.Analytics.StandardEventPayload::GetParameters()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* StandardEventPayload_GetParameters_m3AA4492539D2BB9A280482EEF089B42416FAA804 (StandardEventPayload_tC18B9CF0832CA32A1280D8ECDB81596C45ED4EA7* __this, const RuntimeMethod* method) ;
// UnityEngine.Analytics.AnalyticsResult UnityEngine.Analytics.AnalyticsEvent::Custom(System.String,System.Collections.Generic.IDictionary`2<System.String,System.Object>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t AnalyticsEvent_Custom_m3F7C48F9A5835908A67F754B5C0DBB979403C5C8 (String_t* ___eventName0, RuntimeObject* ___eventData1, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Object>::Clear()
inline void Dictionary_2_Clear_mBC8B8FD18821E87AC78242BEAB058EB832641EAB (Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710*, const RuntimeMethod*))Dictionary_2_Clear_mCFB5EA7351D5860D2B91592B91A84CA265A41433_gshared)(__this, method);
}
// UnityEngine.Analytics.AnalyticsEventParamListContainer UnityEngine.Analytics.StandardEventPayload::get_parameters()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR AnalyticsEventParamListContainer_tAE992B5199A074975EF5CC6CF4A80FCCFCBF4C02* StandardEventPayload_get_parameters_mDEF87E957DD90917F8FD0744ADE2B0290D43E465_inline (StandardEventPayload_tC18B9CF0832CA32A1280D8ECDB81596C45ED4EA7* __this, const RuntimeMethod* method) ;
// System.Collections.Generic.List`1<UnityEngine.Analytics.AnalyticsEventParam> UnityEngine.Analytics.AnalyticsEventParamListContainer::get_parameters()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR List_1_t9DD115095F7C5EEA37796C3B52E5EADC08B27030* AnalyticsEventParamListContainer_get_parameters_m3CC2C44E55D190E4714C71D3BCC10A03B105FE5F_inline (AnalyticsEventParamListContainer_tAE992B5199A074975EF5CC6CF4A80FCCFCBF4C02* __this, const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1<UnityEngine.Analytics.AnalyticsEventParam>::get_Item(System.Int32)
inline AnalyticsEventParam_t6FBABF1961987CB0E6F88338A5C48EE1E3E60974* List_1_get_Item_mF55BE282EB49F386CBBB671C7FD770C921A01F1D (List_1_t9DD115095F7C5EEA37796C3B52E5EADC08B27030* __this, int32_t ___index0, const RuntimeMethod* method)
{
	return ((  AnalyticsEventParam_t6FBABF1961987CB0E6F88338A5C48EE1E3E60974* (*) (List_1_t9DD115095F7C5EEA37796C3B52E5EADC08B27030*, int32_t, const RuntimeMethod*))List_1_get_Item_m33561245D64798C2AB07584C0EC4F240E4839A38_gshared)(__this, ___index0, method);
}
// UnityEngine.Analytics.ValueProperty UnityEngine.Analytics.AnalyticsEventParam::get_valueProperty()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ValueProperty_tB152A92DD3101A108D3C41589959AB70AAD68436* AnalyticsEventParam_get_valueProperty_m09B7D0AF1FFA904617560B33E971AC1DB3A5B4F6_inline (AnalyticsEventParam_t6FBABF1961987CB0E6F88338A5C48EE1E3E60974* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Analytics.ValueProperty::IsValid()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ValueProperty_IsValid_m7311497A4AD251C0A9765A699CFDA41F91325DBC (ValueProperty_tB152A92DD3101A108D3C41589959AB70AAD68436* __this, const RuntimeMethod* method) ;
// System.String UnityEngine.Analytics.AnalyticsEventParam::get_name()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* AnalyticsEventParam_get_name_mA57F2665280411110BACB2841E4627D5B0EFD02B_inline (AnalyticsEventParam_t6FBABF1961987CB0E6F88338A5C48EE1E3E60974* __this, const RuntimeMethod* method) ;
// System.Object UnityEngine.Analytics.AnalyticsEventParam::get_value()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* AnalyticsEventParam_get_value_m5BB687FBBFD62B46D003495434DC0345B92C3631 (AnalyticsEventParam_t6FBABF1961987CB0E6F88338A5C48EE1E3E60974* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Object>::Add(TKey,TValue)
inline void Dictionary_2_Add_m5875DF2ACE933D734119C088B2E7C9C63F49B443 (Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* __this, String_t* ___key0, RuntimeObject* ___value1, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710*, String_t*, RuntimeObject*, const RuntimeMethod*))Dictionary_2_Add_m93FFFABE8FCE7FA9793F0915E2A8842C7CD0C0C1_gshared)(__this, ___key0, ___value1, method);
}
// System.Int32 System.Collections.Generic.List`1<UnityEngine.Analytics.AnalyticsEventParam>::get_Count()
inline int32_t List_1_get_Count_m623FA42FEDF361CAEF7B7C5D1252EE0E304A65F9_inline (List_1_t9DD115095F7C5EEA37796C3B52E5EADC08B27030* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_t9DD115095F7C5EEA37796C3B52E5EADC08B27030*, const RuntimeMethod*))List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline)(__this, method);
}
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Collections.Generic.List`1<System.Boolean>>::.ctor()
inline void Dictionary_2__ctor_mC1412FC33CB4A79B897DC06F5AA4A925E069E8F3 (Dictionary_2_tC1BD2E5DC97017673DF7A42E09736890AFD8B0C3* __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_tC1BD2E5DC97017673DF7A42E09736890AFD8B0C3*, const RuntimeMethod*))Dictionary_2__ctor_m5B32FBC624618211EB461D59CFBB10E987FD1329_gshared)(__this, method);
}
// UnityEngine.Analytics.AnalyticsEventParam/RequirementType UnityEngine.Analytics.AnalyticsEventParam::get_requirementType()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t AnalyticsEventParam_get_requirementType_m2ABD4A4A22B1C1E0C14E988DDD97C77B7DD1809A_inline (AnalyticsEventParam_t6FBABF1961987CB0E6F88338A5C48EE1E3E60974* __this, const RuntimeMethod* method) ;
// System.String UnityEngine.Analytics.AnalyticsEventParam::get_groupID()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* AnalyticsEventParam_get_groupID_mDD8977AB9D95813C7CEF465672E77A47E4A2D023_inline (AnalyticsEventParam_t6FBABF1961987CB0E6F88338A5C48EE1E3E60974* __this, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,System.Collections.Generic.List`1<System.Boolean>>::ContainsKey(TKey)
inline bool Dictionary_2_ContainsKey_m70BD45E946DC5A0F38184B4D44969BD5EAAE5B23 (Dictionary_2_tC1BD2E5DC97017673DF7A42E09736890AFD8B0C3* __this, String_t* ___key0, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_tC1BD2E5DC97017673DF7A42E09736890AFD8B0C3*, String_t*, const RuntimeMethod*))Dictionary_2_ContainsKey_m703047C213F7AB55C9DC346596287773A1F670CD_gshared)(__this, ___key0, method);
}
// System.Void System.Collections.Generic.List`1<System.Boolean>::.ctor()
inline void List_1__ctor_m87539832B82A3453971F3BCC702C7346E8D3F953 (List_1_t01207CE5982A7640E56B1F9F672A06F96B09367A* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t01207CE5982A7640E56B1F9F672A06F96B09367A*, const RuntimeMethod*))List_1__ctor_m87539832B82A3453971F3BCC702C7346E8D3F953_gshared)(__this, method);
}
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Collections.Generic.List`1<System.Boolean>>::Add(TKey,TValue)
inline void Dictionary_2_Add_m27C98D4107649BA0703A939EAD8CEBA9DD5DE798 (Dictionary_2_tC1BD2E5DC97017673DF7A42E09736890AFD8B0C3* __this, String_t* ___key0, List_1_t01207CE5982A7640E56B1F9F672A06F96B09367A* ___value1, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_tC1BD2E5DC97017673DF7A42E09736890AFD8B0C3*, String_t*, List_1_t01207CE5982A7640E56B1F9F672A06F96B09367A*, const RuntimeMethod*))Dictionary_2_Add_m93FFFABE8FCE7FA9793F0915E2A8842C7CD0C0C1_gshared)(__this, ___key0, ___value1, method);
}
// TValue System.Collections.Generic.Dictionary`2<System.String,System.Collections.Generic.List`1<System.Boolean>>::get_Item(TKey)
inline List_1_t01207CE5982A7640E56B1F9F672A06F96B09367A* Dictionary_2_get_Item_mD03DF8E6DD66382B6083D4FBA93F74E1E50F3271 (Dictionary_2_tC1BD2E5DC97017673DF7A42E09736890AFD8B0C3* __this, String_t* ___key0, const RuntimeMethod* method)
{
	return ((  List_1_t01207CE5982A7640E56B1F9F672A06F96B09367A* (*) (Dictionary_2_tC1BD2E5DC97017673DF7A42E09736890AFD8B0C3*, String_t*, const RuntimeMethod*))Dictionary_2_get_Item_m4AAAECBE902A211BF2126E6AFA280AEF73A3E0D6_gshared)(__this, ___key0, method);
}
// System.Void System.Collections.Generic.List`1<System.Boolean>::Add(T)
inline void List_1_Add_m5AAB6DCB6C30EB5769B4E8DB8170E50319F0A9ED_inline (List_1_t01207CE5982A7640E56B1F9F672A06F96B09367A* __this, bool ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t01207CE5982A7640E56B1F9F672A06F96B09367A*, bool, const RuntimeMethod*))List_1_Add_m5AAB6DCB6C30EB5769B4E8DB8170E50319F0A9ED_gshared_inline)(__this, ___item0, method);
}
// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.String,System.Collections.Generic.List`1<System.Boolean>>::get_Keys()
inline KeyCollection_tA845E107A897F0C5C9CE39E283764084ABD5421E* Dictionary_2_get_Keys_mA67CCC9A76D1AA5EEF7C54AB87D74E41098DA8F3 (Dictionary_2_tC1BD2E5DC97017673DF7A42E09736890AFD8B0C3* __this, const RuntimeMethod* method)
{
	return ((  KeyCollection_tA845E107A897F0C5C9CE39E283764084ABD5421E* (*) (Dictionary_2_tC1BD2E5DC97017673DF7A42E09736890AFD8B0C3*, const RuntimeMethod*))Dictionary_2_get_Keys_m72D290F90654BFD683FA7AA7C63D9F4F692218B6_gshared)(__this, method);
}
// System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2/KeyCollection<System.String,System.Collections.Generic.List`1<System.Boolean>>::GetEnumerator()
inline Enumerator_t2BE86F405FCFA2DF433334EED3CAB9B9C764584E KeyCollection_GetEnumerator_m2E205C00BEAF54451047512036299F6D947B194A (KeyCollection_tA845E107A897F0C5C9CE39E283764084ABD5421E* __this, const RuntimeMethod* method)
{
	return ((  Enumerator_t2BE86F405FCFA2DF433334EED3CAB9B9C764584E (*) (KeyCollection_tA845E107A897F0C5C9CE39E283764084ABD5421E*, const RuntimeMethod*))KeyCollection_GetEnumerator_m7E77FBA7DE2D3876EC02F396712C4AA5B1D535A5_gshared)(__this, method);
}
// System.Void System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator<System.String,System.Collections.Generic.List`1<System.Boolean>>::Dispose()
inline void Enumerator_Dispose_m93CD93F0EF69D1B4C47D96529D6BC0C89741EC49 (Enumerator_t2BE86F405FCFA2DF433334EED3CAB9B9C764584E* __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_t2BE86F405FCFA2DF433334EED3CAB9B9C764584E*, const RuntimeMethod*))Enumerator_Dispose_mEB2A61F3F3F420C1B1DFD5C74EEFD4BD7761BCF7_gshared)(__this, method);
}
// TKey System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator<System.String,System.Collections.Generic.List`1<System.Boolean>>::get_Current()
inline String_t* Enumerator_get_Current_mD611F18C5CBDC2FC8EA79C110DAB242664E304CA_inline (Enumerator_t2BE86F405FCFA2DF433334EED3CAB9B9C764584E* __this, const RuntimeMethod* method)
{
	return ((  String_t* (*) (Enumerator_t2BE86F405FCFA2DF433334EED3CAB9B9C764584E*, const RuntimeMethod*))Enumerator_get_Current_mD6472FA27D28B9AE64A0FEF796C72ABBC2420EBF_gshared_inline)(__this, method);
}
// System.Boolean System.String::op_Equality(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1 (String_t* ___a0, String_t* ___b1, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.List`1<System.Boolean>::Contains(T)
inline bool List_1_Contains_mC82ECFA72602553B2896828FCD67FDAE8A18C190 (List_1_t01207CE5982A7640E56B1F9F672A06F96B09367A* __this, bool ___item0, const RuntimeMethod* method)
{
	return ((  bool (*) (List_1_t01207CE5982A7640E56B1F9F672A06F96B09367A*, bool, const RuntimeMethod*))List_1_Contains_mC82ECFA72602553B2896828FCD67FDAE8A18C190_gshared)(__this, ___item0, method);
}
// System.Boolean System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator<System.String,System.Collections.Generic.List`1<System.Boolean>>::MoveNext()
inline bool Enumerator_MoveNext_m19E1710634EDF32441A6C90C87083A8CB0D1AAD1 (Enumerator_t2BE86F405FCFA2DF433334EED3CAB9B9C764584E* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_t2BE86F405FCFA2DF433334EED3CAB9B9C764584E*, const RuntimeMethod*))Enumerator_MoveNext_mB5E00F11BCA3AC963F9BA72659FA76B107863F3C_gshared)(__this, method);
}
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Object>::.ctor()
inline void Dictionary_2__ctor_mC4F3DF292BAD88F4BF193C49CD689FAEBC4570A9 (Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710*, const RuntimeMethod*))Dictionary_2__ctor_m5B32FBC624618211EB461D59CFBB10E987FD1329_gshared)(__this, method);
}
// System.Void UnityEngine.Analytics.TrackablePropertyBase::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TrackablePropertyBase__ctor_m76FD5F897D850039433A908F68AC9F20B5C9C5A1 (TrackablePropertyBase_t1D13B0FF07AB12F6973658EF46A70504D578017E* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Object::op_Equality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___x0, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___y1, const RuntimeMethod* method) ;
// System.String[] System.String::Split(System.Char[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* String_Split_m101D35FEC86371D2BB4E3480F6F896880093B2E9 (String_t* __this, CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___separator0, const RuntimeMethod* method) ;
// System.Type System.Object::GetType()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t* Object_GetType_mE10A8FC1E57F3DF29972CCBC026C2DC3942263B3 (RuntimeObject* __this, const RuntimeMethod* method) ;
// System.Reflection.PropertyInfo System.Type::GetProperty(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PropertyInfo_t* Type_GetProperty_mD183124FC8A89121E8368058B327A7750B14281D (Type_t* __this, String_t* ___name0, const RuntimeMethod* method) ;
// System.Boolean System.Reflection.PropertyInfo::op_Inequality(System.Reflection.PropertyInfo,System.Reflection.PropertyInfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PropertyInfo_op_Inequality_mE75A4F14CC678D8A670730FBD4338C718CACB51B (PropertyInfo_t* ___left0, PropertyInfo_t* ___right1, const RuntimeMethod* method) ;
// System.Reflection.FieldInfo System.Type::GetField(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR FieldInfo_t* Type_GetField_m0BF55B1A27A1B6AB6D3477E7F9E1CF2A3451E1E0 (Type_t* __this, String_t* ___name0, const RuntimeMethod* method) ;
// System.Boolean System.Reflection.FieldInfo::op_Inequality(System.Reflection.FieldInfo,System.Reflection.FieldInfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool FieldInfo_op_Inequality_m95789A98E646494987E66A9E4188DCA86185066B (FieldInfo_t* ___left0, FieldInfo_t* ___right1, const RuntimeMethod* method) ;
// System.Object UnityEngine.Analytics.TrackableField::GetValue()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TrackableField_GetValue_mC5ECCA29B21EDF39021816EBF0F82E1FC905566D (TrackableField_t6DC55D40EE374F2FFA111344BC840FA36CF76D7F* __this, const RuntimeMethod* method) ;
// System.Type System.Type::GetTypeFromHandle(System.RuntimeTypeHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t* Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57 (RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B ___handle0, const RuntimeMethod* method) ;
// System.Boolean System.Type::op_Inequality(System.Type,System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Type_op_Inequality_m83209C7BB3C05DFBEA3B6199B0BEFE8037301172 (Type_t* ___left0, Type_t* ___right1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Analytics.TrackableProperty::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TrackableProperty__ctor_m2F72F98BEB650F8592E0A03F856EDF0BAB691D83 (TrackableProperty_tD94C354D884EDFB6603639EE6559289850F5E720* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Analytics.AnalyticsTracker::TriggerEvent()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnalyticsTracker_TriggerEvent_m0EAC83A18418B14270F17147A1F7A48D3057BCEE (AnalyticsTracker_t1DD335B622ADA1AABB848B69311C67605DEF6301* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Analytics.AnalyticsTracker::BuildParameters()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnalyticsTracker_BuildParameters_m00D3C3CB26FAADE34D0D6266122C8CFFB6865048 (AnalyticsTracker_t1DD335B622ADA1AABB848B69311C67605DEF6301* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Analytics.AnalyticsTracker::SendEvent()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnalyticsTracker_SendEvent_m982C032ADB2C3942E02EC4F1B4A4E651E1B55DD2 (AnalyticsTracker_t1DD335B622ADA1AABB848B69311C67605DEF6301* __this, const RuntimeMethod* method) ;
// UnityEngine.Analytics.AnalyticsResult UnityEngine.Analytics.Analytics::CustomEvent(System.String,System.Collections.Generic.IDictionary`2<System.String,System.Object>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Analytics_CustomEvent_m663CDDCA04FF832169D1BCEE01C943A7FB6D4363 (String_t* ___customEventName0, RuntimeObject* ___eventData1, const RuntimeMethod* method) ;
// System.Collections.Generic.List`1<UnityEngine.Analytics.TrackableProperty/FieldWithTarget> UnityEngine.Analytics.TrackableProperty::get_fields()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR List_1_t20E90EB749670C2DEEE278FBBA3E9DE0A00E09CC* TrackableProperty_get_fields_mAC2317B77B724B6774EC2C61E8CD5B736151E185_inline (TrackableProperty_tD94C354D884EDFB6603639EE6559289850F5E720* __this, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.List`1<UnityEngine.Analytics.TrackableProperty/FieldWithTarget>::get_Count()
inline int32_t List_1_get_Count_m65DF182EA281FF9FB3F7772C960CABC4DE30B6F6_inline (List_1_t20E90EB749670C2DEEE278FBBA3E9DE0A00E09CC* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_t20E90EB749670C2DEEE278FBBA3E9DE0A00E09CC*, const RuntimeMethod*))List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline)(__this, method);
}
// T System.Collections.Generic.List`1<UnityEngine.Analytics.TrackableProperty/FieldWithTarget>::get_Item(System.Int32)
inline FieldWithTarget_t504FF69C27D0DC4A727BE0A6CE8167EC2A967448* List_1_get_Item_mEEC1E2184F9386280BF8617077CC0F6AED7EE26F (List_1_t20E90EB749670C2DEEE278FBBA3E9DE0A00E09CC* __this, int32_t ___index0, const RuntimeMethod* method)
{
	return ((  FieldWithTarget_t504FF69C27D0DC4A727BE0A6CE8167EC2A967448* (*) (List_1_t20E90EB749670C2DEEE278FBBA3E9DE0A00E09CC*, int32_t, const RuntimeMethod*))List_1_get_Item_m33561245D64798C2AB07584C0EC4F240E4839A38_gshared)(__this, ___index0, method);
}
// UnityEngine.Object UnityEngine.Analytics.TrackableProperty/FieldWithTarget::get_target()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* FieldWithTarget_get_target_m52EE4805B935E272E67F8EAC8B9C96B31BDE4FD1_inline (FieldWithTarget_t504FF69C27D0DC4A727BE0A6CE8167EC2A967448* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Object::op_Inequality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___x0, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___y1, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Analytics.TrackableProperty/FieldWithTarget::get_doStatic()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool FieldWithTarget_get_doStatic_m2697393C3475C7D5CEC0E3DEF64A10F89B150DC2_inline (FieldWithTarget_t504FF69C27D0DC4A727BE0A6CE8167EC2A967448* __this, const RuntimeMethod* method) ;
// System.Object UnityEngine.Analytics.TrackableProperty/FieldWithTarget::GetValue()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* FieldWithTarget_GetValue_m8D8927E5DF419A7AAEFAA51740BD249265264C28 (FieldWithTarget_t504FF69C27D0DC4A727BE0A6CE8167EC2A967448* __this, const RuntimeMethod* method) ;
// System.String UnityEngine.Analytics.TrackableProperty/FieldWithTarget::get_paramName()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* FieldWithTarget_get_paramName_mC678A4E0D89455CE785B0F9C74AAE7820AE6FF84_inline (FieldWithTarget_t504FF69C27D0DC4A727BE0A6CE8167EC2A967448* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Object>::set_Item(TKey,TValue)
inline void Dictionary_2_set_Item_m7CCA97075B48AFB2B97E5A072B94BC7679374341 (Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* __this, String_t* ___key0, RuntimeObject* ___value1, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710*, String_t*, RuntimeObject*, const RuntimeMethod*))Dictionary_2_set_Item_m1A840355E8EDAECEA9D0C6F5E51B248FAA449CBD_gshared)(__this, ___key0, ___value1, method);
}
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<UnityEngine.Analytics.TrackableProperty/FieldWithTarget>::GetEnumerator()
inline Enumerator_tB497C5B7709BD2CAFA3F994CD12CFB6F80000713 List_1_GetEnumerator_mD366F6A991F5EA2D00D0E13933213F743D76B5C8 (List_1_t20E90EB749670C2DEEE278FBBA3E9DE0A00E09CC* __this, const RuntimeMethod* method)
{
	return ((  Enumerator_tB497C5B7709BD2CAFA3F994CD12CFB6F80000713 (*) (List_1_t20E90EB749670C2DEEE278FBBA3E9DE0A00E09CC*, const RuntimeMethod*))List_1_GetEnumerator_mD8294A7FA2BEB1929487127D476F8EC1CDC23BFC_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1/Enumerator<UnityEngine.Analytics.TrackableProperty/FieldWithTarget>::Dispose()
inline void Enumerator_Dispose_m41CE57EEFF33375A4FE7015A93712DADE5183B92 (Enumerator_tB497C5B7709BD2CAFA3F994CD12CFB6F80000713* __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_tB497C5B7709BD2CAFA3F994CD12CFB6F80000713*, const RuntimeMethod*))Enumerator_Dispose_mD9DC3E3C3697830A4823047AB29A77DBBB5ED419_gshared)(__this, method);
}
// T System.Collections.Generic.List`1/Enumerator<UnityEngine.Analytics.TrackableProperty/FieldWithTarget>::get_Current()
inline FieldWithTarget_t504FF69C27D0DC4A727BE0A6CE8167EC2A967448* Enumerator_get_Current_mB352E1B59DC4B99A9C23DC1082BBABECAD549C2E_inline (Enumerator_tB497C5B7709BD2CAFA3F994CD12CFB6F80000713* __this, const RuntimeMethod* method)
{
	return ((  FieldWithTarget_t504FF69C27D0DC4A727BE0A6CE8167EC2A967448* (*) (Enumerator_tB497C5B7709BD2CAFA3F994CD12CFB6F80000713*, const RuntimeMethod*))Enumerator_get_Current_m6330F15D18EE4F547C05DF9BF83C5EB710376027_gshared_inline)(__this, method);
}
// System.Boolean System.Collections.Generic.List`1/Enumerator<UnityEngine.Analytics.TrackableProperty/FieldWithTarget>::MoveNext()
inline bool Enumerator_MoveNext_m81CF8F1BD0C690D8A792D559CEF2A22502292685 (Enumerator_tB497C5B7709BD2CAFA3F994CD12CFB6F80000713* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_tB497C5B7709BD2CAFA3F994CD12CFB6F80000713*, const RuntimeMethod*))Enumerator_MoveNext_mE921CC8F29FBBDE7CC3209A0ED0D921D58D00BCB_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1<UnityEngine.Analytics.TriggerRule>::.ctor()
inline void List_1__ctor_m5DA4A556E2988745972B20829116B07F3AB5C599 (List_1_t3585B91917CA5C4854A4496D5F41B409BCE66B30* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t3585B91917CA5C4854A4496D5F41B409BCE66B30*, const RuntimeMethod*))List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared)(__this, method);
}
// System.Void UnityEngine.Analytics.TriggerListContainer::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TriggerListContainer__ctor_m4BB88B3C7879CDF43C619115785ACC6FD16C9BD3 (TriggerListContainer_t05237759E7AFB582C672447CB1FBBF079AEE03C9* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Analytics.TriggerRule::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TriggerRule__ctor_mF693D176A070734760C94C083A34456E7A595544 (TriggerRule_tB684F4AC495F20C6A8BA52384547780771817E4E* __this, const RuntimeMethod* method) ;
// System.Collections.Generic.List`1<UnityEngine.Analytics.TriggerRule> UnityEngine.Analytics.TriggerListContainer::get_rules()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR List_1_t3585B91917CA5C4854A4496D5F41B409BCE66B30* TriggerListContainer_get_rules_mC10082C97197C553D702943A2A1F3CEB3A120074_inline (TriggerListContainer_t05237759E7AFB582C672447CB1FBBF079AEE03C9* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<UnityEngine.Analytics.TriggerRule>::Add(T)
inline void List_1_Add_mE0944F5B3F6E51E82C3C8C04D5FCE7CC51EFA415_inline (List_1_t3585B91917CA5C4854A4496D5F41B409BCE66B30* __this, TriggerRule_tB684F4AC495F20C6A8BA52384547780771817E4E* ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t3585B91917CA5C4854A4496D5F41B409BCE66B30*, TriggerRule_tB684F4AC495F20C6A8BA52384547780771817E4E*, const RuntimeMethod*))List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline)(__this, ___item0, method);
}
// System.Void System.Collections.Generic.List`1<UnityEngine.Analytics.TriggerRule>::RemoveAt(System.Int32)
inline void List_1_RemoveAt_mE6E7E96156505BA81D9D441FCFB21EC1E84DBA1A (List_1_t3585B91917CA5C4854A4496D5F41B409BCE66B30* __this, int32_t ___index0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t3585B91917CA5C4854A4496D5F41B409BCE66B30*, int32_t, const RuntimeMethod*))List_1_RemoveAt_m54F62297ADEE4D4FDA697F49ED807BF901201B54_gshared)(__this, ___index0, method);
}
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<UnityEngine.Analytics.TriggerRule>::GetEnumerator()
inline Enumerator_tA2A4569CD78EC2E58E591972CAF75AC13181D5B1 List_1_GetEnumerator_m6E06038B7A99366EC2A623827FA9A561F7BF36B1 (List_1_t3585B91917CA5C4854A4496D5F41B409BCE66B30* __this, const RuntimeMethod* method)
{
	return ((  Enumerator_tA2A4569CD78EC2E58E591972CAF75AC13181D5B1 (*) (List_1_t3585B91917CA5C4854A4496D5F41B409BCE66B30*, const RuntimeMethod*))List_1_GetEnumerator_mD8294A7FA2BEB1929487127D476F8EC1CDC23BFC_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1/Enumerator<UnityEngine.Analytics.TriggerRule>::Dispose()
inline void Enumerator_Dispose_m2610B9DB8629C6834CFDECAD1BAAC3FECEFEA935 (Enumerator_tA2A4569CD78EC2E58E591972CAF75AC13181D5B1* __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_tA2A4569CD78EC2E58E591972CAF75AC13181D5B1*, const RuntimeMethod*))Enumerator_Dispose_mD9DC3E3C3697830A4823047AB29A77DBBB5ED419_gshared)(__this, method);
}
// T System.Collections.Generic.List`1/Enumerator<UnityEngine.Analytics.TriggerRule>::get_Current()
inline TriggerRule_tB684F4AC495F20C6A8BA52384547780771817E4E* Enumerator_get_Current_mD61C743655B8013D8FCBF85FF00A6AD791180B7E_inline (Enumerator_tA2A4569CD78EC2E58E591972CAF75AC13181D5B1* __this, const RuntimeMethod* method)
{
	return ((  TriggerRule_tB684F4AC495F20C6A8BA52384547780771817E4E* (*) (Enumerator_tA2A4569CD78EC2E58E591972CAF75AC13181D5B1*, const RuntimeMethod*))Enumerator_get_Current_m6330F15D18EE4F547C05DF9BF83C5EB710376027_gshared_inline)(__this, method);
}
// System.Boolean UnityEngine.Analytics.TriggerRule::Test(System.Boolean&,System.String&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TriggerRule_Test_m2FD1BEAE814D507AC6F62A20264F4B7B91E0898C (TriggerRule_tB684F4AC495F20C6A8BA52384547780771817E4E* __this, bool* ___error0, String_t** ___message1, const RuntimeMethod* method) ;
// System.String UnityEngine.Object::get_name()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Object_get_name_mAC2F6B897CF1303BA4249B4CB55271AFACBB6392 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* __this, const RuntimeMethod* method) ;
// System.String System.String::Format(System.String,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_mA8DBB4C2516B9723C5A41E6CB1E2FAF4BBE96DD8 (String_t* ___format0, RuntimeObject* ___arg01, const RuntimeMethod* method) ;
// System.Void UnityEngine.Debug::LogWarningFormat(System.String,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_LogWarningFormat_mD8224DEBCB6050F4E2BF55151F0C6A29B87DEFBC (String_t* ___format0, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___args1, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.List`1/Enumerator<UnityEngine.Analytics.TriggerRule>::MoveNext()
inline bool Enumerator_MoveNext_m6ECC9ED45B697379B5EA6AEC8B345D856D1AC9AB (Enumerator_tA2A4569CD78EC2E58E591972CAF75AC13181D5B1* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_tA2A4569CD78EC2E58E591972CAF75AC13181D5B1*, const RuntimeMethod*))Enumerator_MoveNext_mE921CC8F29FBBDE7CC3209A0ED0D921D58D00BCB_gshared)(__this, method);
}
// UnityEngine.Analytics.TrackableField UnityEngine.Analytics.ValueProperty::get_target()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR TrackableField_t6DC55D40EE374F2FFA111344BC840FA36CF76D7F* ValueProperty_get_target_mFF245D412287A49C6FEB5FA53AC422765321F5B7_inline (ValueProperty_tB152A92DD3101A108D3C41589959AB70AAD68436* __this, const RuntimeMethod* method) ;
// System.String UnityEngine.Analytics.ValueProperty::get_valueType()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* ValueProperty_get_valueType_m2C587EC9748004FDD34A2D84DEE9937D5002FABB_inline (ValueProperty_tB152A92DD3101A108D3C41589959AB70AAD68436* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Analytics.TriggerRule::TestByString(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TriggerRule_TestByString_mDCB8214C74C5C52CE647E10341FBE8613C8D7054 (TriggerRule_tB684F4AC495F20C6A8BA52384547780771817E4E* __this, String_t* ___currentValue0, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Analytics.TriggerRule::TestByBool(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TriggerRule_TestByBool_m702C29606FA66BD62A3C1643E621B5CE0D3D63AE (TriggerRule_tB684F4AC495F20C6A8BA52384547780771817E4E* __this, bool ___currentValue0, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Analytics.TriggerRule::TestByDouble(System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TriggerRule_TestByDouble_m15033565485EDE74DB03C4E4B5CF720E3D4B2C9F (TriggerRule_tB684F4AC495F20C6A8BA52384547780771817E4E* __this, double ___currentValue0, const RuntimeMethod* method) ;
// System.Double System.Decimal::op_Explicit(System.Decimal)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double Decimal_op_Explicit_mA8577A95CD02E86110976D415CA149550AD5A6C0 (Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F ___value0, const RuntimeMethod* method) ;
// System.String System.String::ToLower()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_ToLower_m6191ABA3DC514ED47C10BDA23FD0DDCEAE7ACFBD (String_t* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Analytics.TriggerRule::TestByEnum(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TriggerRule_TestByEnum_m8212FF3857BFD2D9A4C21FFD874716A28DFD716D (TriggerRule_tB684F4AC495F20C6A8BA52384547780771817E4E* __this, String_t* ___currentValue0, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Analytics.TriggerRule::TestByObject(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TriggerRule_TestByObject_m7230D253A89F5ED4CE38CAC0BEBBF95490E4F852 (TriggerRule_tB684F4AC495F20C6A8BA52384547780771817E4E* __this, RuntimeObject* ___currentValue0, const RuntimeMethod* method) ;
// System.Boolean System.String::Equals(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_Equals_mCD5F35DEDCAFE51ACD4E033726FC2EF8DF7E9B4D (String_t* __this, String_t* ___value0, const RuntimeMethod* method) ;
// System.Boolean System.Boolean::Parse(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Boolean_Parse_mC9B4406FE9DA904E2B7D75267CAD38E837D39A6D (String_t* ___value0, const RuntimeMethod* method) ;
// System.Boolean System.Boolean::Equals(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Boolean_Equals_mC020D5EB2F64274CD623E8449E8777A70BEC6CC9 (bool* __this, bool ___obj0, const RuntimeMethod* method) ;
// System.Double UnityEngine.Analytics.TriggerRule::GetDouble(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double TriggerRule_GetDouble_m98DB51900A6A662EADB055272F87D2670182D385 (TriggerRule_tB684F4AC495F20C6A8BA52384547780771817E4E* __this, RuntimeObject* ___value0, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Analytics.TriggerRule::SafeEquals(System.Double,System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TriggerRule_SafeEquals_m70CEF895C63BB0915EE7ED7E3FB9617F897A3472 (TriggerRule_tB684F4AC495F20C6A8BA52384547780771817E4E* __this, double ___double10, double ___double21, const RuntimeMethod* method) ;
// System.Double System.Double::Parse(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double Double_Parse_mEBC644CE0C86A405283EC4839F872EF9E556670A (String_t* ___s0, const RuntimeMethod* method) ;
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
// System.Void UnityEngine.Analytics.AnalyticsEventTracker::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnalyticsEventTracker__ctor_m5C5E41AB545B1BA2822C3F014EA0941BF0A0B944 (AnalyticsEventTracker_t43C623F37E8BC18790D02385CAFC4E145F35E994* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventTrigger_t85ABB3C787BF555580DE542822F8E973718C5791_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StandardEventPayload_tC18B9CF0832CA32A1280D8ECDB81596C45ED4EA7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		EventTrigger_t85ABB3C787BF555580DE542822F8E973718C5791* L_0 = (EventTrigger_t85ABB3C787BF555580DE542822F8E973718C5791*)il2cpp_codegen_object_new(EventTrigger_t85ABB3C787BF555580DE542822F8E973718C5791_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		EventTrigger__ctor_mF533E0363CF00A617CF02B5A3D53E0CE15F40CA4(L_0, NULL);
		__this->___m_Trigger_4 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_Trigger_4), (void*)L_0);
		StandardEventPayload_tC18B9CF0832CA32A1280D8ECDB81596C45ED4EA7* L_1 = (StandardEventPayload_tC18B9CF0832CA32A1280D8ECDB81596C45ED4EA7*)il2cpp_codegen_object_new(StandardEventPayload_tC18B9CF0832CA32A1280D8ECDB81596C45ED4EA7_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		StandardEventPayload__ctor_m4A0B697AB8DB52CD3D502D430AE52B188DBBE58B(L_1, NULL);
		__this->___m_EventPayload_5 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_EventPayload_5), (void*)L_1);
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
// UnityEngine.Analytics.StandardEventPayload UnityEngine.Analytics.AnalyticsEventTracker::get_payload()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StandardEventPayload_tC18B9CF0832CA32A1280D8ECDB81596C45ED4EA7* AnalyticsEventTracker_get_payload_m3969D906E5B805CC4666951E0EFC33DB5A3A6AC8 (AnalyticsEventTracker_t43C623F37E8BC18790D02385CAFC4E145F35E994* __this, const RuntimeMethod* method) 
{
	{
		StandardEventPayload_tC18B9CF0832CA32A1280D8ECDB81596C45ED4EA7* L_0 = __this->___m_EventPayload_5;
		return L_0;
	}
}
// System.Void UnityEngine.Analytics.AnalyticsEventTracker::TriggerEvent()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnalyticsEventTracker_TriggerEvent_m62C5941FC0D090C365E37402D2FEEB780E87C212 (AnalyticsEventTracker_t43C623F37E8BC18790D02385CAFC4E145F35E994* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0;
		L_0 = AnalyticsEventTracker_SendEvent_m2BF32B52CA60300EE2CF237E4F14CD41CD7B0050(__this, NULL);
		return;
	}
}
// UnityEngine.Analytics.AnalyticsResult UnityEngine.Analytics.AnalyticsEventTracker::SendEvent()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t AnalyticsEventTracker_SendEvent_m2BF32B52CA60300EE2CF237E4F14CD41CD7B0050 (AnalyticsEventTracker_t43C623F37E8BC18790D02385CAFC4E145F35E994* __this, const RuntimeMethod* method) 
{
	{
		EventTrigger_t85ABB3C787BF555580DE542822F8E973718C5791* L_0 = __this->___m_Trigger_4;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1;
		L_1 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		NullCheck(L_0);
		bool L_2;
		L_2 = EventTrigger_Test_mAAD519892E8E884B177E7853EA30AD20EF94E5EE(L_0, L_1, NULL);
		if (!L_2)
		{
			goto IL_0022;
		}
	}
	{
		StandardEventPayload_tC18B9CF0832CA32A1280D8ECDB81596C45ED4EA7* L_3;
		L_3 = AnalyticsEventTracker_get_payload_m3969D906E5B805CC4666951E0EFC33DB5A3A6AC8_inline(__this, NULL);
		NullCheck(L_3);
		int32_t L_4;
		L_4 = VirtualFuncInvoker0< int32_t >::Invoke(4 /* UnityEngine.Analytics.AnalyticsResult UnityEngine.Analytics.StandardEventPayload::Send() */, L_3);
		return L_4;
	}

IL_0022:
	{
		return (int32_t)(0);
	}
}
// System.Void UnityEngine.Analytics.AnalyticsEventTracker::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnalyticsEventTracker_Awake_m9F520DD4903370C299ABEB4BB9B03C9C8A294C65 (AnalyticsEventTracker_t43C623F37E8BC18790D02385CAFC4E145F35E994* __this, const RuntimeMethod* method) 
{
	{
		EventTrigger_t85ABB3C787BF555580DE542822F8E973718C5791* L_0 = __this->___m_Trigger_4;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = EventTrigger_get_triggerType_m97FA977005FBC481D4937BA11E1EE84A8175A31C_inline(L_0, NULL);
		if (L_1)
		{
			goto IL_0028;
		}
	}
	{
		EventTrigger_t85ABB3C787BF555580DE542822F8E973718C5791* L_2 = __this->___m_Trigger_4;
		NullCheck(L_2);
		int32_t L_3;
		L_3 = EventTrigger_get_lifecycleEvent_mC6629116356D0599B91AECDD775C0E8EE0F66963_inline(L_2, NULL);
		if ((!(((uint32_t)L_3) == ((uint32_t)1))))
		{
			goto IL_0028;
		}
	}
	{
		int32_t L_4;
		L_4 = AnalyticsEventTracker_SendEvent_m2BF32B52CA60300EE2CF237E4F14CD41CD7B0050(__this, NULL);
	}

IL_0028:
	{
		return;
	}
}
// System.Void UnityEngine.Analytics.AnalyticsEventTracker::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnalyticsEventTracker_Start_m7AB66A686343EF5731DC2AFC20C0F1307681E5E9 (AnalyticsEventTracker_t43C623F37E8BC18790D02385CAFC4E145F35E994* __this, const RuntimeMethod* method) 
{
	{
		EventTrigger_t85ABB3C787BF555580DE542822F8E973718C5791* L_0 = __this->___m_Trigger_4;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = EventTrigger_get_triggerType_m97FA977005FBC481D4937BA11E1EE84A8175A31C_inline(L_0, NULL);
		if (L_1)
		{
			goto IL_002d;
		}
	}
	{
		EventTrigger_t85ABB3C787BF555580DE542822F8E973718C5791* L_2 = __this->___m_Trigger_4;
		NullCheck(L_2);
		int32_t L_3;
		L_3 = EventTrigger_get_lifecycleEvent_mC6629116356D0599B91AECDD775C0E8EE0F66963_inline(L_2, NULL);
		if ((!(((uint32_t)L_3) == ((uint32_t)2))))
		{
			goto IL_002d;
		}
	}
	{
		int32_t L_4;
		L_4 = AnalyticsEventTracker_SendEvent_m2BF32B52CA60300EE2CF237E4F14CD41CD7B0050(__this, NULL);
		goto IL_004b;
	}

IL_002d:
	{
		EventTrigger_t85ABB3C787BF555580DE542822F8E973718C5791* L_5 = __this->___m_Trigger_4;
		NullCheck(L_5);
		int32_t L_6;
		L_6 = EventTrigger_get_triggerType_m97FA977005FBC481D4937BA11E1EE84A8175A31C_inline(L_5, NULL);
		if ((!(((uint32_t)L_6) == ((uint32_t)2))))
		{
			goto IL_004b;
		}
	}
	{
		RuntimeObject* L_7;
		L_7 = AnalyticsEventTracker_TimedTrigger_m47380808F19DBC38021D857D77233B73137D0844(__this, NULL);
		Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* L_8;
		L_8 = MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812(__this, L_7, NULL);
	}

IL_004b:
	{
		return;
	}
}
// System.Void UnityEngine.Analytics.AnalyticsEventTracker::OnEnable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnalyticsEventTracker_OnEnable_m96ED48D3DD8C28E8B9403FB9E855D8776424CA85 (AnalyticsEventTracker_t43C623F37E8BC18790D02385CAFC4E145F35E994* __this, const RuntimeMethod* method) 
{
	{
		EventTrigger_t85ABB3C787BF555580DE542822F8E973718C5791* L_0 = __this->___m_Trigger_4;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = EventTrigger_get_triggerType_m97FA977005FBC481D4937BA11E1EE84A8175A31C_inline(L_0, NULL);
		if (L_1)
		{
			goto IL_0028;
		}
	}
	{
		EventTrigger_t85ABB3C787BF555580DE542822F8E973718C5791* L_2 = __this->___m_Trigger_4;
		NullCheck(L_2);
		int32_t L_3;
		L_3 = EventTrigger_get_lifecycleEvent_mC6629116356D0599B91AECDD775C0E8EE0F66963_inline(L_2, NULL);
		if ((!(((uint32_t)L_3) == ((uint32_t)3))))
		{
			goto IL_0028;
		}
	}
	{
		int32_t L_4;
		L_4 = AnalyticsEventTracker_SendEvent_m2BF32B52CA60300EE2CF237E4F14CD41CD7B0050(__this, NULL);
	}

IL_0028:
	{
		return;
	}
}
// System.Void UnityEngine.Analytics.AnalyticsEventTracker::OnDisable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnalyticsEventTracker_OnDisable_m92AD075DC7211E57C90CDA39CADAB76FC89A9CAD (AnalyticsEventTracker_t43C623F37E8BC18790D02385CAFC4E145F35E994* __this, const RuntimeMethod* method) 
{
	{
		EventTrigger_t85ABB3C787BF555580DE542822F8E973718C5791* L_0 = __this->___m_Trigger_4;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = EventTrigger_get_triggerType_m97FA977005FBC481D4937BA11E1EE84A8175A31C_inline(L_0, NULL);
		if (L_1)
		{
			goto IL_0028;
		}
	}
	{
		EventTrigger_t85ABB3C787BF555580DE542822F8E973718C5791* L_2 = __this->___m_Trigger_4;
		NullCheck(L_2);
		int32_t L_3;
		L_3 = EventTrigger_get_lifecycleEvent_mC6629116356D0599B91AECDD775C0E8EE0F66963_inline(L_2, NULL);
		if ((!(((uint32_t)L_3) == ((uint32_t)4))))
		{
			goto IL_0028;
		}
	}
	{
		int32_t L_4;
		L_4 = AnalyticsEventTracker_SendEvent_m2BF32B52CA60300EE2CF237E4F14CD41CD7B0050(__this, NULL);
	}

IL_0028:
	{
		return;
	}
}
// System.Void UnityEngine.Analytics.AnalyticsEventTracker::OnApplicationPause(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnalyticsEventTracker_OnApplicationPause_mF64C4B32D9F376C73ADE7683BB3020D8AD0250E0 (AnalyticsEventTracker_t43C623F37E8BC18790D02385CAFC4E145F35E994* __this, bool ___paused0, const RuntimeMethod* method) 
{
	{
		EventTrigger_t85ABB3C787BF555580DE542822F8E973718C5791* L_0 = __this->___m_Trigger_4;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = EventTrigger_get_triggerType_m97FA977005FBC481D4937BA11E1EE84A8175A31C_inline(L_0, NULL);
		if (L_1)
		{
			goto IL_0051;
		}
	}
	{
		bool L_2 = ___paused0;
		if (!L_2)
		{
			goto IL_0033;
		}
	}
	{
		EventTrigger_t85ABB3C787BF555580DE542822F8E973718C5791* L_3 = __this->___m_Trigger_4;
		NullCheck(L_3);
		int32_t L_4;
		L_4 = EventTrigger_get_lifecycleEvent_mC6629116356D0599B91AECDD775C0E8EE0F66963_inline(L_3, NULL);
		if ((!(((uint32_t)L_4) == ((uint32_t)5))))
		{
			goto IL_0033;
		}
	}
	{
		int32_t L_5;
		L_5 = AnalyticsEventTracker_SendEvent_m2BF32B52CA60300EE2CF237E4F14CD41CD7B0050(__this, NULL);
		goto IL_0051;
	}

IL_0033:
	{
		bool L_6 = ___paused0;
		if (L_6)
		{
			goto IL_0051;
		}
	}
	{
		EventTrigger_t85ABB3C787BF555580DE542822F8E973718C5791* L_7 = __this->___m_Trigger_4;
		NullCheck(L_7);
		int32_t L_8;
		L_8 = EventTrigger_get_lifecycleEvent_mC6629116356D0599B91AECDD775C0E8EE0F66963_inline(L_7, NULL);
		if ((!(((uint32_t)L_8) == ((uint32_t)6))))
		{
			goto IL_0051;
		}
	}
	{
		int32_t L_9;
		L_9 = AnalyticsEventTracker_SendEvent_m2BF32B52CA60300EE2CF237E4F14CD41CD7B0050(__this, NULL);
	}

IL_0051:
	{
		return;
	}
}
// System.Void UnityEngine.Analytics.AnalyticsEventTracker::OnDestroy()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnalyticsEventTracker_OnDestroy_m26351EC393011CA536F73F1AD67A196809C33B1B (AnalyticsEventTracker_t43C623F37E8BC18790D02385CAFC4E145F35E994* __this, const RuntimeMethod* method) 
{
	{
		EventTrigger_t85ABB3C787BF555580DE542822F8E973718C5791* L_0 = __this->___m_Trigger_4;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = EventTrigger_get_triggerType_m97FA977005FBC481D4937BA11E1EE84A8175A31C_inline(L_0, NULL);
		if (L_1)
		{
			goto IL_0028;
		}
	}
	{
		EventTrigger_t85ABB3C787BF555580DE542822F8E973718C5791* L_2 = __this->___m_Trigger_4;
		NullCheck(L_2);
		int32_t L_3;
		L_3 = EventTrigger_get_lifecycleEvent_mC6629116356D0599B91AECDD775C0E8EE0F66963_inline(L_2, NULL);
		if ((!(((uint32_t)L_3) == ((uint32_t)7))))
		{
			goto IL_0028;
		}
	}
	{
		int32_t L_4;
		L_4 = AnalyticsEventTracker_SendEvent_m2BF32B52CA60300EE2CF237E4F14CD41CD7B0050(__this, NULL);
	}

IL_0028:
	{
		return;
	}
}
// System.Collections.IEnumerator UnityEngine.Analytics.AnalyticsEventTracker::TimedTrigger()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* AnalyticsEventTracker_TimedTrigger_m47380808F19DBC38021D857D77233B73137D0844 (AnalyticsEventTracker_t43C623F37E8BC18790D02385CAFC4E145F35E994* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CTimedTriggerU3Ec__Iterator0_t9F1A338E6CDCAA02C998F44F5607E9C204ADCAEC_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	U3CTimedTriggerU3Ec__Iterator0_t9F1A338E6CDCAA02C998F44F5607E9C204ADCAEC* V_0 = NULL;
	{
		U3CTimedTriggerU3Ec__Iterator0_t9F1A338E6CDCAA02C998F44F5607E9C204ADCAEC* L_0 = (U3CTimedTriggerU3Ec__Iterator0_t9F1A338E6CDCAA02C998F44F5607E9C204ADCAEC*)il2cpp_codegen_object_new(U3CTimedTriggerU3Ec__Iterator0_t9F1A338E6CDCAA02C998F44F5607E9C204ADCAEC_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CTimedTriggerU3Ec__Iterator0__ctor_m2ACAFB91911E62F21543B989DDD2ECB8D1E29527(L_0, NULL);
		V_0 = L_0;
		U3CTimedTriggerU3Ec__Iterator0_t9F1A338E6CDCAA02C998F44F5607E9C204ADCAEC* L_1 = V_0;
		NullCheck(L_1);
		L_1->___U24this_0 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___U24this_0), (void*)__this);
		U3CTimedTriggerU3Ec__Iterator0_t9F1A338E6CDCAA02C998F44F5607E9C204ADCAEC* L_2 = V_0;
		return L_2;
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
// System.Void UnityEngine.Analytics.AnalyticsEventTracker/<TimedTrigger>c__Iterator0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CTimedTriggerU3Ec__Iterator0__ctor_m2ACAFB91911E62F21543B989DDD2ECB8D1E29527 (U3CTimedTriggerU3Ec__Iterator0_t9F1A338E6CDCAA02C998F44F5607E9C204ADCAEC* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Boolean UnityEngine.Analytics.AnalyticsEventTracker/<TimedTrigger>c__Iterator0::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CTimedTriggerU3Ec__Iterator0_MoveNext_m18BB542E829359C38BBEA6CD94360251BA46C036 (U3CTimedTriggerU3Ec__Iterator0_t9F1A338E6CDCAA02C998F44F5607E9C204ADCAEC* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	uint32_t V_0 = 0;
	{
		int32_t L_0 = __this->___U24PC_3;
		V_0 = L_0;
		__this->___U24PC_3 = (-1);
		uint32_t L_1 = V_0;
		switch (L_1)
		{
			case 0:
			{
				goto IL_0029;
			}
			case 1:
			{
				goto IL_0072;
			}
			case 2:
			{
				goto IL_00cc;
			}
			case 3:
			{
				goto IL_00ec;
			}
		}
	}
	{
		goto IL_0139;
	}

IL_0029:
	{
		AnalyticsEventTracker_t43C623F37E8BC18790D02385CAFC4E145F35E994* L_2 = __this->___U24this_0;
		NullCheck(L_2);
		EventTrigger_t85ABB3C787BF555580DE542822F8E973718C5791* L_3 = L_2->___m_Trigger_4;
		NullCheck(L_3);
		float L_4;
		L_4 = EventTrigger_get_initTime_m7CD123F71FD55CC12D417521C70038CAEA37339B_inline(L_3, NULL);
		if ((!(((float)L_4) > ((float)(0.0f)))))
		{
			goto IL_0072;
		}
	}
	{
		AnalyticsEventTracker_t43C623F37E8BC18790D02385CAFC4E145F35E994* L_5 = __this->___U24this_0;
		NullCheck(L_5);
		EventTrigger_t85ABB3C787BF555580DE542822F8E973718C5791* L_6 = L_5->___m_Trigger_4;
		NullCheck(L_6);
		float L_7;
		L_7 = EventTrigger_get_initTime_m7CD123F71FD55CC12D417521C70038CAEA37339B_inline(L_6, NULL);
		WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3* L_8 = (WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3*)il2cpp_codegen_object_new(WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var);
		NullCheck(L_8);
		WaitForSeconds__ctor_m579F95BADEDBAB4B3A7E302C6EE3995926EF2EFC(L_8, L_7, NULL);
		__this->___U24current_1 = L_8;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U24current_1), (void*)L_8);
		bool L_9 = __this->___U24disposing_2;
		if (L_9)
		{
			goto IL_006d;
		}
	}
	{
		__this->___U24PC_3 = 1;
	}

IL_006d:
	{
		goto IL_013b;
	}

IL_0072:
	{
		AnalyticsEventTracker_t43C623F37E8BC18790D02385CAFC4E145F35E994* L_10 = __this->___U24this_0;
		NullCheck(L_10);
		int32_t L_11;
		L_11 = AnalyticsEventTracker_SendEvent_m2BF32B52CA60300EE2CF237E4F14CD41CD7B0050(L_10, NULL);
		goto IL_00f8;
	}

IL_0083:
	{
		AnalyticsEventTracker_t43C623F37E8BC18790D02385CAFC4E145F35E994* L_12 = __this->___U24this_0;
		NullCheck(L_12);
		EventTrigger_t85ABB3C787BF555580DE542822F8E973718C5791* L_13 = L_12->___m_Trigger_4;
		NullCheck(L_13);
		float L_14;
		L_14 = EventTrigger_get_repeatTime_mF1D62DF10BED6C110BE2FB2DA3E69E25E4CCBF1F_inline(L_13, NULL);
		if ((!(((float)L_14) > ((float)(0.0f)))))
		{
			goto IL_00d1;
		}
	}
	{
		AnalyticsEventTracker_t43C623F37E8BC18790D02385CAFC4E145F35E994* L_15 = __this->___U24this_0;
		NullCheck(L_15);
		EventTrigger_t85ABB3C787BF555580DE542822F8E973718C5791* L_16 = L_15->___m_Trigger_4;
		NullCheck(L_16);
		float L_17;
		L_17 = EventTrigger_get_repeatTime_mF1D62DF10BED6C110BE2FB2DA3E69E25E4CCBF1F_inline(L_16, NULL);
		WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3* L_18 = (WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3*)il2cpp_codegen_object_new(WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var);
		NullCheck(L_18);
		WaitForSeconds__ctor_m579F95BADEDBAB4B3A7E302C6EE3995926EF2EFC(L_18, L_17, NULL);
		__this->___U24current_1 = L_18;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U24current_1), (void*)L_18);
		bool L_19 = __this->___U24disposing_2;
		if (L_19)
		{
			goto IL_00c7;
		}
	}
	{
		__this->___U24PC_3 = 2;
	}

IL_00c7:
	{
		goto IL_013b;
	}

IL_00cc:
	{
		goto IL_00ec;
	}

IL_00d1:
	{
		__this->___U24current_1 = NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U24current_1), (void*)NULL);
		bool L_20 = __this->___U24disposing_2;
		if (L_20)
		{
			goto IL_00e7;
		}
	}
	{
		__this->___U24PC_3 = 3;
	}

IL_00e7:
	{
		goto IL_013b;
	}

IL_00ec:
	{
		AnalyticsEventTracker_t43C623F37E8BC18790D02385CAFC4E145F35E994* L_21 = __this->___U24this_0;
		NullCheck(L_21);
		int32_t L_22;
		L_22 = AnalyticsEventTracker_SendEvent_m2BF32B52CA60300EE2CF237E4F14CD41CD7B0050(L_21, NULL);
	}

IL_00f8:
	{
		AnalyticsEventTracker_t43C623F37E8BC18790D02385CAFC4E145F35E994* L_23 = __this->___U24this_0;
		NullCheck(L_23);
		EventTrigger_t85ABB3C787BF555580DE542822F8E973718C5791* L_24 = L_23->___m_Trigger_4;
		NullCheck(L_24);
		int32_t L_25;
		L_25 = EventTrigger_get_repetitions_mC09AFA3A46F74144A6CE7982248FC794C5015B2B_inline(L_24, NULL);
		if (!L_25)
		{
			goto IL_0083;
		}
	}
	{
		AnalyticsEventTracker_t43C623F37E8BC18790D02385CAFC4E145F35E994* L_26 = __this->___U24this_0;
		NullCheck(L_26);
		EventTrigger_t85ABB3C787BF555580DE542822F8E973718C5791* L_27 = L_26->___m_Trigger_4;
		NullCheck(L_27);
		int32_t L_28 = L_27->___repetitionCount_9;
		AnalyticsEventTracker_t43C623F37E8BC18790D02385CAFC4E145F35E994* L_29 = __this->___U24this_0;
		NullCheck(L_29);
		EventTrigger_t85ABB3C787BF555580DE542822F8E973718C5791* L_30 = L_29->___m_Trigger_4;
		NullCheck(L_30);
		int32_t L_31;
		L_31 = EventTrigger_get_repetitions_mC09AFA3A46F74144A6CE7982248FC794C5015B2B_inline(L_30, NULL);
		if ((((int32_t)L_28) <= ((int32_t)L_31)))
		{
			goto IL_0083;
		}
	}
	{
		__this->___U24PC_3 = (-1);
	}

IL_0139:
	{
		return (bool)0;
	}

IL_013b:
	{
		return (bool)1;
	}
}
// System.Object UnityEngine.Analytics.AnalyticsEventTracker/<TimedTrigger>c__Iterator0::System.Collections.Generic.IEnumerator<object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CTimedTriggerU3Ec__Iterator0_System_Collections_Generic_IEnumeratorU3CobjectU3E_get_Current_m99DCE04F33D0CCA97995385E358AA5FA85034CB5 (U3CTimedTriggerU3Ec__Iterator0_t9F1A338E6CDCAA02C998F44F5607E9C204ADCAEC* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U24current_1;
		return L_0;
	}
}
// System.Object UnityEngine.Analytics.AnalyticsEventTracker/<TimedTrigger>c__Iterator0::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CTimedTriggerU3Ec__Iterator0_System_Collections_IEnumerator_get_Current_m2E36B93A8402C5FAE71FC6D0FDBD18FA7B69F324 (U3CTimedTriggerU3Ec__Iterator0_t9F1A338E6CDCAA02C998F44F5607E9C204ADCAEC* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U24current_1;
		return L_0;
	}
}
// System.Void UnityEngine.Analytics.AnalyticsEventTracker/<TimedTrigger>c__Iterator0::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CTimedTriggerU3Ec__Iterator0_Dispose_m6706BD1D8B6ED8761C78094903DEECF35F08AB5B (U3CTimedTriggerU3Ec__Iterator0_t9F1A338E6CDCAA02C998F44F5607E9C204ADCAEC* __this, const RuntimeMethod* method) 
{
	{
		__this->___U24disposing_2 = (bool)1;
		__this->___U24PC_3 = (-1);
		return;
	}
}
// System.Void UnityEngine.Analytics.AnalyticsEventTracker/<TimedTrigger>c__Iterator0::Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CTimedTriggerU3Ec__Iterator0_Reset_m6E126E43F65BA1078E7ECC3197E093F19CC59FDD (U3CTimedTriggerU3Ec__Iterator0_t9F1A338E6CDCAA02C998F44F5607E9C204ADCAEC* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CTimedTriggerU3Ec__Iterator0_Reset_m6E126E43F65BA1078E7ECC3197E093F19CC59FDD_RuntimeMethod_var)));
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
// System.Void UnityEngine.Analytics.AnalyticsEventTrackerSettings::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnalyticsEventTrackerSettings__cctor_m59F05E31C9456994C202F8558D1E80FE06865B40 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AnalyticsEventTrackerSettings_t33E0391BADF271E0838F525F276FF198975C8A00_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		((AnalyticsEventTrackerSettings_t33E0391BADF271E0838F525F276FF198975C8A00_StaticFields*)il2cpp_codegen_static_fields_for(AnalyticsEventTrackerSettings_t33E0391BADF271E0838F525F276FF198975C8A00_il2cpp_TypeInfo_var))->___paramCountMax_0 = ((int32_t)10);
		((AnalyticsEventTrackerSettings_t33E0391BADF271E0838F525F276FF198975C8A00_StaticFields*)il2cpp_codegen_static_fields_for(AnalyticsEventTrackerSettings_t33E0391BADF271E0838F525F276FF198975C8A00_il2cpp_TypeInfo_var))->___triggerRuleCountMax_1 = 5;
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
// System.Void UnityEngine.Analytics.AnalyticsEventParam::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnalyticsEventParam__ctor_m088D0FB907A6D70CEBC2A4A00D35C20BA25E3BD9 (AnalyticsEventParam_t6FBABF1961987CB0E6F88338A5C48EE1E3E60974* __this, String_t* ___name0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
		__this->___m_Tooltip_2 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_Tooltip_2), (void*)L_0);
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		String_t* L_1 = ___name0;
		NullCheck(L_1);
		String_t* L_2;
		L_2 = String_Trim_mCD6D8C6D4CFD15225D12DB7D3E0544CA80FB8DA5(L_1, NULL);
		__this->___m_Name_3 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_Name_3), (void*)L_2);
		return;
	}
}
// UnityEngine.Analytics.AnalyticsEventParam/RequirementType UnityEngine.Analytics.AnalyticsEventParam::get_requirementType()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t AnalyticsEventParam_get_requirementType_m2ABD4A4A22B1C1E0C14E988DDD97C77B7DD1809A (AnalyticsEventParam_t6FBABF1961987CB0E6F88338A5C48EE1E3E60974* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___m_RequirementType_0;
		return L_0;
	}
}
// System.String UnityEngine.Analytics.AnalyticsEventParam::get_groupID()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* AnalyticsEventParam_get_groupID_mDD8977AB9D95813C7CEF465672E77A47E4A2D023 (AnalyticsEventParam_t6FBABF1961987CB0E6F88338A5C48EE1E3E60974* __this, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = __this->___m_GroupID_1;
		return L_0;
	}
}
// UnityEngine.Analytics.ValueProperty UnityEngine.Analytics.AnalyticsEventParam::get_valueProperty()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ValueProperty_tB152A92DD3101A108D3C41589959AB70AAD68436* AnalyticsEventParam_get_valueProperty_m09B7D0AF1FFA904617560B33E971AC1DB3A5B4F6 (AnalyticsEventParam_t6FBABF1961987CB0E6F88338A5C48EE1E3E60974* __this, const RuntimeMethod* method) 
{
	{
		ValueProperty_tB152A92DD3101A108D3C41589959AB70AAD68436* L_0 = __this->___m_Value_4;
		return L_0;
	}
}
// System.String UnityEngine.Analytics.AnalyticsEventParam::get_name()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* AnalyticsEventParam_get_name_mA57F2665280411110BACB2841E4627D5B0EFD02B (AnalyticsEventParam_t6FBABF1961987CB0E6F88338A5C48EE1E3E60974* __this, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = __this->___m_Name_3;
		return L_0;
	}
}
// System.Object UnityEngine.Analytics.AnalyticsEventParam::get_value()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* AnalyticsEventParam_get_value_m5BB687FBBFD62B46D003495434DC0345B92C3631 (AnalyticsEventParam_t6FBABF1961987CB0E6F88338A5C48EE1E3E60974* __this, const RuntimeMethod* method) 
{
	{
		ValueProperty_tB152A92DD3101A108D3C41589959AB70AAD68436* L_0 = __this->___m_Value_4;
		NullCheck(L_0);
		String_t* L_1;
		L_1 = ValueProperty_get_propertyValue_mFC1DBF8E2C72655224C6E30E2FCEF41B3E19B1F5(L_0, NULL);
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
// System.Void UnityEngine.Analytics.AnalyticsEventParamListContainer::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnalyticsEventParamListContainer__ctor_mD37625639933B1B1797D0739E953A8D5AEEBAD17 (AnalyticsEventParamListContainer_tAE992B5199A074975EF5CC6CF4A80FCCFCBF4C02* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m1C0E552290CF0082F375DA163B260162A77979ED_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t9DD115095F7C5EEA37796C3B52E5EADC08B27030_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		List_1_t9DD115095F7C5EEA37796C3B52E5EADC08B27030* L_0 = (List_1_t9DD115095F7C5EEA37796C3B52E5EADC08B27030*)il2cpp_codegen_object_new(List_1_t9DD115095F7C5EEA37796C3B52E5EADC08B27030_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		List_1__ctor_m1C0E552290CF0082F375DA163B260162A77979ED(L_0, List_1__ctor_m1C0E552290CF0082F375DA163B260162A77979ED_RuntimeMethod_var);
		__this->___m_Parameters_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_Parameters_0), (void*)L_0);
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Collections.Generic.List`1<UnityEngine.Analytics.AnalyticsEventParam> UnityEngine.Analytics.AnalyticsEventParamListContainer::get_parameters()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_t9DD115095F7C5EEA37796C3B52E5EADC08B27030* AnalyticsEventParamListContainer_get_parameters_m3CC2C44E55D190E4714C71D3BCC10A03B105FE5F (AnalyticsEventParamListContainer_tAE992B5199A074975EF5CC6CF4A80FCCFCBF4C02* __this, const RuntimeMethod* method) 
{
	{
		List_1_t9DD115095F7C5EEA37796C3B52E5EADC08B27030* L_0 = __this->___m_Parameters_0;
		return L_0;
	}
}
// System.Void UnityEngine.Analytics.AnalyticsEventParamListContainer::set_parameters(System.Collections.Generic.List`1<UnityEngine.Analytics.AnalyticsEventParam>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnalyticsEventParamListContainer_set_parameters_m1D8670D8F7ADD8EF8C4650EDCD99F7B845ECA2F3 (AnalyticsEventParamListContainer_tAE992B5199A074975EF5CC6CF4A80FCCFCBF4C02* __this, List_1_t9DD115095F7C5EEA37796C3B52E5EADC08B27030* ___value0, const RuntimeMethod* method) 
{
	{
		List_1_t9DD115095F7C5EEA37796C3B52E5EADC08B27030* L_0 = ___value0;
		__this->___m_Parameters_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_Parameters_0), (void*)L_0);
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
// System.Void UnityEngine.Analytics.StandardEventPayload::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StandardEventPayload__ctor_m4A0B697AB8DB52CD3D502D430AE52B188DBBE58B (StandardEventPayload_tC18B9CF0832CA32A1280D8ECDB81596C45ED4EA7* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AnalyticsEventParamListContainer_tAE992B5199A074975EF5CC6CF4A80FCCFCBF4C02_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral29902F5CA78BFEDCD32C035E61FCBAB3339DA796);
		s_Il2CppMethodInitialized = true;
	}
	{
		__this->___m_IsEventExpanded_0 = (bool)1;
		__this->___m_StandardEventType_1 = _stringLiteral29902F5CA78BFEDCD32C035E61FCBAB3339DA796;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_StandardEventType_1), (void*)_stringLiteral29902F5CA78BFEDCD32C035E61FCBAB3339DA796);
		String_t* L_0 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
		__this->___m_Name_5 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_Name_5), (void*)L_0);
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		AnalyticsEventParamListContainer_tAE992B5199A074975EF5CC6CF4A80FCCFCBF4C02* L_1 = (AnalyticsEventParamListContainer_tAE992B5199A074975EF5CC6CF4A80FCCFCBF4C02*)il2cpp_codegen_object_new(AnalyticsEventParamListContainer_tAE992B5199A074975EF5CC6CF4A80FCCFCBF4C02_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		AnalyticsEventParamListContainer__ctor_mD37625639933B1B1797D0739E953A8D5AEEBAD17(L_1, NULL);
		__this->___m_Parameters_3 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_Parameters_3), (void*)L_1);
		return;
	}
}
// UnityEngine.Analytics.AnalyticsEventParamListContainer UnityEngine.Analytics.StandardEventPayload::get_parameters()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AnalyticsEventParamListContainer_tAE992B5199A074975EF5CC6CF4A80FCCFCBF4C02* StandardEventPayload_get_parameters_mDEF87E957DD90917F8FD0744ADE2B0290D43E465 (StandardEventPayload_tC18B9CF0832CA32A1280D8ECDB81596C45ED4EA7* __this, const RuntimeMethod* method) 
{
	{
		AnalyticsEventParamListContainer_tAE992B5199A074975EF5CC6CF4A80FCCFCBF4C02* L_0 = __this->___m_Parameters_3;
		return L_0;
	}
}
// System.String UnityEngine.Analytics.StandardEventPayload::get_name()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* StandardEventPayload_get_name_m039945159E59D0A08DB40AAB683A6325338CFE2D (StandardEventPayload_tC18B9CF0832CA32A1280D8ECDB81596C45ED4EA7* __this, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = __this->___m_Name_5;
		return L_0;
	}
}
// System.Void UnityEngine.Analytics.StandardEventPayload::set_name(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StandardEventPayload_set_name_m0E1D5AB0FB94258C73DCE6A2C1E7AAA511489604 (StandardEventPayload_tC18B9CF0832CA32A1280D8ECDB81596C45ED4EA7* __this, String_t* ___value0, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = ___value0;
		__this->___m_Name_5 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_Name_5), (void*)L_0);
		return;
	}
}
// UnityEngine.Analytics.AnalyticsResult UnityEngine.Analytics.StandardEventPayload::Send()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t StandardEventPayload_Send_m0AC5797A4947B2D36BC7A5E3CEC331194A387A34 (StandardEventPayload_tC18B9CF0832CA32A1280D8ECDB81596C45ED4EA7* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AnalyticsEvent_tF3074E7A475B67047B033BD5A1930AD68BDA2575_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0;
		L_0 = StandardEventPayload_get_name_m039945159E59D0A08DB40AAB683A6325338CFE2D_inline(__this, NULL);
		bool L_1;
		L_1 = String_IsNullOrEmpty_mEA9E3FB005AC28FE02E69FCF95A7B8456192B478(L_0, NULL);
		if (!L_1)
		{
			goto IL_001b;
		}
	}
	{
		Exception_t* L_2 = (Exception_t*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)));
		NullCheck(L_2);
		Exception__ctor_m9B2BD92CD68916245A75109105D9071C9D430E7F(L_2, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral5E07EA7D7E1EEA3C820E698756516B2730A5F8CF)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&StandardEventPayload_Send_m0AC5797A4947B2D36BC7A5E3CEC331194A387A34_RuntimeMethod_var)));
	}

IL_001b:
	{
		bool L_3;
		L_3 = StandardEventPayload_IsCustomDataValid_m657EAAED5B6C10BB7ECCE3632840A110B7AF0BBF(__this, NULL);
		if (L_3)
		{
			goto IL_0031;
		}
	}
	{
		Exception_t* L_4 = (Exception_t*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)));
		NullCheck(L_4);
		Exception__ctor_m9B2BD92CD68916245A75109105D9071C9D430E7F(L_4, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralD132ABB49FADBB9BEC71FB78530BA8772EC64969)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&StandardEventPayload_Send_m0AC5797A4947B2D36BC7A5E3CEC331194A387A34_RuntimeMethod_var)));
	}

IL_0031:
	{
		bool L_5;
		L_5 = StandardEventPayload_IsRequiredDataValid_m44BD34700FBB853C2E04D3ABFB306835F0BB2297(__this, NULL);
		if (L_5)
		{
			goto IL_0047;
		}
	}
	{
		Exception_t* L_6 = (Exception_t*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)));
		NullCheck(L_6);
		Exception__ctor_m9B2BD92CD68916245A75109105D9071C9D430E7F(L_6, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral9A15720E849DE10032FA522EE93FF9CEE6CB32A1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_6, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&StandardEventPayload_Send_m0AC5797A4947B2D36BC7A5E3CEC331194A387A34_RuntimeMethod_var)));
	}

IL_0047:
	{
		String_t* L_7;
		L_7 = StandardEventPayload_get_name_m039945159E59D0A08DB40AAB683A6325338CFE2D_inline(__this, NULL);
		NullCheck(L_7);
		String_t* L_8;
		L_8 = String_Trim_mCD6D8C6D4CFD15225D12DB7D3E0544CA80FB8DA5(L_7, NULL);
		RuntimeObject* L_9;
		L_9 = StandardEventPayload_GetParameters_m3AA4492539D2BB9A280482EEF089B42416FAA804(__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(AnalyticsEvent_tF3074E7A475B67047B033BD5A1930AD68BDA2575_il2cpp_TypeInfo_var);
		int32_t L_10;
		L_10 = AnalyticsEvent_Custom_m3F7C48F9A5835908A67F754B5C0DBB979403C5C8(L_8, L_9, NULL);
		return L_10;
	}
}
// System.Collections.Generic.IDictionary`2<System.String,System.Object> UnityEngine.Analytics.StandardEventPayload::GetParameters()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* StandardEventPayload_GetParameters_m3AA4492539D2BB9A280482EEF089B42416FAA804 (StandardEventPayload_tC18B9CF0832CA32A1280D8ECDB81596C45ED4EA7* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_Add_m5875DF2ACE933D734119C088B2E7C9C63F49B443_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_Clear_mBC8B8FD18821E87AC78242BEAB058EB832641EAB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m623FA42FEDF361CAEF7B7C5D1252EE0E304A65F9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_mF55BE282EB49F386CBBB671C7FD770C921A01F1D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StandardEventPayload_tC18B9CF0832CA32A1280D8ECDB81596C45ED4EA7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	List_1_t9DD115095F7C5EEA37796C3B52E5EADC08B27030* V_0 = NULL;
	int32_t V_1 = 0;
	{
		il2cpp_codegen_runtime_class_init_inline(StandardEventPayload_tC18B9CF0832CA32A1280D8ECDB81596C45ED4EA7_il2cpp_TypeInfo_var);
		Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* L_0 = ((StandardEventPayload_tC18B9CF0832CA32A1280D8ECDB81596C45ED4EA7_StaticFields*)il2cpp_codegen_static_fields_for(StandardEventPayload_tC18B9CF0832CA32A1280D8ECDB81596C45ED4EA7_il2cpp_TypeInfo_var))->___m_EventData_4;
		NullCheck(L_0);
		Dictionary_2_Clear_mBC8B8FD18821E87AC78242BEAB058EB832641EAB(L_0, Dictionary_2_Clear_mBC8B8FD18821E87AC78242BEAB058EB832641EAB_RuntimeMethod_var);
		AnalyticsEventParamListContainer_tAE992B5199A074975EF5CC6CF4A80FCCFCBF4C02* L_1;
		L_1 = StandardEventPayload_get_parameters_mDEF87E957DD90917F8FD0744ADE2B0290D43E465_inline(__this, NULL);
		NullCheck(L_1);
		List_1_t9DD115095F7C5EEA37796C3B52E5EADC08B27030* L_2;
		L_2 = AnalyticsEventParamListContainer_get_parameters_m3CC2C44E55D190E4714C71D3BCC10A03B105FE5F_inline(L_1, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0065;
	}

IL_001d:
	{
		List_1_t9DD115095F7C5EEA37796C3B52E5EADC08B27030* L_3 = V_0;
		int32_t L_4 = V_1;
		NullCheck(L_3);
		AnalyticsEventParam_t6FBABF1961987CB0E6F88338A5C48EE1E3E60974* L_5;
		L_5 = List_1_get_Item_mF55BE282EB49F386CBBB671C7FD770C921A01F1D(L_3, L_4, List_1_get_Item_mF55BE282EB49F386CBBB671C7FD770C921A01F1D_RuntimeMethod_var);
		if (!L_5)
		{
			goto IL_0061;
		}
	}
	{
		List_1_t9DD115095F7C5EEA37796C3B52E5EADC08B27030* L_6 = V_0;
		int32_t L_7 = V_1;
		NullCheck(L_6);
		AnalyticsEventParam_t6FBABF1961987CB0E6F88338A5C48EE1E3E60974* L_8;
		L_8 = List_1_get_Item_mF55BE282EB49F386CBBB671C7FD770C921A01F1D(L_6, L_7, List_1_get_Item_mF55BE282EB49F386CBBB671C7FD770C921A01F1D_RuntimeMethod_var);
		NullCheck(L_8);
		ValueProperty_tB152A92DD3101A108D3C41589959AB70AAD68436* L_9;
		L_9 = AnalyticsEventParam_get_valueProperty_m09B7D0AF1FFA904617560B33E971AC1DB3A5B4F6_inline(L_8, NULL);
		NullCheck(L_9);
		bool L_10;
		L_10 = ValueProperty_IsValid_m7311497A4AD251C0A9765A699CFDA41F91325DBC(L_9, NULL);
		if (!L_10)
		{
			goto IL_0061;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(StandardEventPayload_tC18B9CF0832CA32A1280D8ECDB81596C45ED4EA7_il2cpp_TypeInfo_var);
		Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* L_11 = ((StandardEventPayload_tC18B9CF0832CA32A1280D8ECDB81596C45ED4EA7_StaticFields*)il2cpp_codegen_static_fields_for(StandardEventPayload_tC18B9CF0832CA32A1280D8ECDB81596C45ED4EA7_il2cpp_TypeInfo_var))->___m_EventData_4;
		List_1_t9DD115095F7C5EEA37796C3B52E5EADC08B27030* L_12 = V_0;
		int32_t L_13 = V_1;
		NullCheck(L_12);
		AnalyticsEventParam_t6FBABF1961987CB0E6F88338A5C48EE1E3E60974* L_14;
		L_14 = List_1_get_Item_mF55BE282EB49F386CBBB671C7FD770C921A01F1D(L_12, L_13, List_1_get_Item_mF55BE282EB49F386CBBB671C7FD770C921A01F1D_RuntimeMethod_var);
		NullCheck(L_14);
		String_t* L_15;
		L_15 = AnalyticsEventParam_get_name_mA57F2665280411110BACB2841E4627D5B0EFD02B_inline(L_14, NULL);
		List_1_t9DD115095F7C5EEA37796C3B52E5EADC08B27030* L_16 = V_0;
		int32_t L_17 = V_1;
		NullCheck(L_16);
		AnalyticsEventParam_t6FBABF1961987CB0E6F88338A5C48EE1E3E60974* L_18;
		L_18 = List_1_get_Item_mF55BE282EB49F386CBBB671C7FD770C921A01F1D(L_16, L_17, List_1_get_Item_mF55BE282EB49F386CBBB671C7FD770C921A01F1D_RuntimeMethod_var);
		NullCheck(L_18);
		RuntimeObject* L_19;
		L_19 = AnalyticsEventParam_get_value_m5BB687FBBFD62B46D003495434DC0345B92C3631(L_18, NULL);
		NullCheck(L_11);
		Dictionary_2_Add_m5875DF2ACE933D734119C088B2E7C9C63F49B443(L_11, L_15, L_19, Dictionary_2_Add_m5875DF2ACE933D734119C088B2E7C9C63F49B443_RuntimeMethod_var);
	}

IL_0061:
	{
		int32_t L_20 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_20, 1));
	}

IL_0065:
	{
		int32_t L_21 = V_1;
		List_1_t9DD115095F7C5EEA37796C3B52E5EADC08B27030* L_22 = V_0;
		NullCheck(L_22);
		int32_t L_23;
		L_23 = List_1_get_Count_m623FA42FEDF361CAEF7B7C5D1252EE0E304A65F9_inline(L_22, List_1_get_Count_m623FA42FEDF361CAEF7B7C5D1252EE0E304A65F9_RuntimeMethod_var);
		if ((((int32_t)L_21) < ((int32_t)L_23)))
		{
			goto IL_001d;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(StandardEventPayload_tC18B9CF0832CA32A1280D8ECDB81596C45ED4EA7_il2cpp_TypeInfo_var);
		Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* L_24 = ((StandardEventPayload_tC18B9CF0832CA32A1280D8ECDB81596C45ED4EA7_StaticFields*)il2cpp_codegen_static_fields_for(StandardEventPayload_tC18B9CF0832CA32A1280D8ECDB81596C45ED4EA7_il2cpp_TypeInfo_var))->___m_EventData_4;
		return L_24;
	}
}
// System.Boolean UnityEngine.Analytics.StandardEventPayload::IsCustomDataValid()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool StandardEventPayload_IsCustomDataValid_m657EAAED5B6C10BB7ECCE3632840A110B7AF0BBF (StandardEventPayload_tC18B9CF0832CA32A1280D8ECDB81596C45ED4EA7* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m623FA42FEDF361CAEF7B7C5D1252EE0E304A65F9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_mF55BE282EB49F386CBBB671C7FD770C921A01F1D_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	List_1_t9DD115095F7C5EEA37796C3B52E5EADC08B27030* V_0 = NULL;
	int32_t V_1 = 0;
	{
		AnalyticsEventParamListContainer_tAE992B5199A074975EF5CC6CF4A80FCCFCBF4C02* L_0;
		L_0 = StandardEventPayload_get_parameters_mDEF87E957DD90917F8FD0744ADE2B0290D43E465_inline(__this, NULL);
		NullCheck(L_0);
		List_1_t9DD115095F7C5EEA37796C3B52E5EADC08B27030* L_1;
		L_1 = AnalyticsEventParamListContainer_get_parameters_m3CC2C44E55D190E4714C71D3BCC10A03B105FE5F_inline(L_0, NULL);
		V_0 = L_1;
		V_1 = 0;
		goto IL_0056;
	}

IL_0013:
	{
		List_1_t9DD115095F7C5EEA37796C3B52E5EADC08B27030* L_2 = V_0;
		int32_t L_3 = V_1;
		NullCheck(L_2);
		AnalyticsEventParam_t6FBABF1961987CB0E6F88338A5C48EE1E3E60974* L_4;
		L_4 = List_1_get_Item_mF55BE282EB49F386CBBB671C7FD770C921A01F1D(L_2, L_3, List_1_get_Item_mF55BE282EB49F386CBBB671C7FD770C921A01F1D_RuntimeMethod_var);
		if (L_4)
		{
			goto IL_0024;
		}
	}
	{
		goto IL_0052;
	}

IL_0024:
	{
		List_1_t9DD115095F7C5EEA37796C3B52E5EADC08B27030* L_5 = V_0;
		int32_t L_6 = V_1;
		NullCheck(L_5);
		AnalyticsEventParam_t6FBABF1961987CB0E6F88338A5C48EE1E3E60974* L_7;
		L_7 = List_1_get_Item_mF55BE282EB49F386CBBB671C7FD770C921A01F1D(L_5, L_6, List_1_get_Item_mF55BE282EB49F386CBBB671C7FD770C921A01F1D_RuntimeMethod_var);
		NullCheck(L_7);
		String_t* L_8;
		L_8 = AnalyticsEventParam_get_name_mA57F2665280411110BACB2841E4627D5B0EFD02B_inline(L_7, NULL);
		bool L_9;
		L_9 = String_IsNullOrEmpty_mEA9E3FB005AC28FE02E69FCF95A7B8456192B478(L_8, NULL);
		if (!L_9)
		{
			goto IL_0052;
		}
	}
	{
		List_1_t9DD115095F7C5EEA37796C3B52E5EADC08B27030* L_10 = V_0;
		int32_t L_11 = V_1;
		NullCheck(L_10);
		AnalyticsEventParam_t6FBABF1961987CB0E6F88338A5C48EE1E3E60974* L_12;
		L_12 = List_1_get_Item_mF55BE282EB49F386CBBB671C7FD770C921A01F1D(L_10, L_11, List_1_get_Item_mF55BE282EB49F386CBBB671C7FD770C921A01F1D_RuntimeMethod_var);
		NullCheck(L_12);
		ValueProperty_tB152A92DD3101A108D3C41589959AB70AAD68436* L_13;
		L_13 = AnalyticsEventParam_get_valueProperty_m09B7D0AF1FFA904617560B33E971AC1DB3A5B4F6_inline(L_12, NULL);
		NullCheck(L_13);
		bool L_14;
		L_14 = ValueProperty_IsValid_m7311497A4AD251C0A9765A699CFDA41F91325DBC(L_13, NULL);
		if (!L_14)
		{
			goto IL_0052;
		}
	}
	{
		return (bool)0;
	}

IL_0052:
	{
		int32_t L_15 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_15, 1));
	}

IL_0056:
	{
		int32_t L_16 = V_1;
		List_1_t9DD115095F7C5EEA37796C3B52E5EADC08B27030* L_17 = V_0;
		NullCheck(L_17);
		int32_t L_18;
		L_18 = List_1_get_Count_m623FA42FEDF361CAEF7B7C5D1252EE0E304A65F9_inline(L_17, List_1_get_Count_m623FA42FEDF361CAEF7B7C5D1252EE0E304A65F9_RuntimeMethod_var);
		if ((((int32_t)L_16) < ((int32_t)L_18)))
		{
			goto IL_0013;
		}
	}
	{
		return (bool)1;
	}
}
// System.Boolean UnityEngine.Analytics.StandardEventPayload::IsRequiredDataValid()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool StandardEventPayload_IsRequiredDataValid_m44BD34700FBB853C2E04D3ABFB306835F0BB2297 (StandardEventPayload_tC18B9CF0832CA32A1280D8ECDB81596C45ED4EA7* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_Add_m27C98D4107649BA0703A939EAD8CEBA9DD5DE798_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_ContainsKey_m70BD45E946DC5A0F38184B4D44969BD5EAAE5B23_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_mC1412FC33CB4A79B897DC06F5AA4A925E069E8F3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Item_mD03DF8E6DD66382B6083D4FBA93F74E1E50F3271_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Keys_mA67CCC9A76D1AA5EEF7C54AB87D74E41098DA8F3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_tC1BD2E5DC97017673DF7A42E09736890AFD8B0C3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_m93CD93F0EF69D1B4C47D96529D6BC0C89741EC49_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_m19E1710634EDF32441A6C90C87083A8CB0D1AAD1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_mD611F18C5CBDC2FC8EA79C110DAB242664E304CA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeyCollection_GetEnumerator_m2E205C00BEAF54451047512036299F6D947B194A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m5AAB6DCB6C30EB5769B4E8DB8170E50319F0A9ED_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Contains_mC82ECFA72602553B2896828FCD67FDAE8A18C190_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m87539832B82A3453971F3BCC702C7346E8D3F953_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m623FA42FEDF361CAEF7B7C5D1252EE0E304A65F9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_mF55BE282EB49F386CBBB671C7FD770C921A01F1D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t01207CE5982A7640E56B1F9F672A06F96B09367A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0AEA2C46AAEB233C6D2DF0275EF92FB2E56BAFE9);
		s_Il2CppMethodInitialized = true;
	}
	List_1_t9DD115095F7C5EEA37796C3B52E5EADC08B27030* V_0 = NULL;
	Dictionary_2_tC1BD2E5DC97017673DF7A42E09736890AFD8B0C3* V_1 = NULL;
	int32_t V_2 = 0;
	String_t* V_3 = NULL;
	Enumerator_t2BE86F405FCFA2DF433334EED3CAB9B9C764584E V_4;
	memset((&V_4), 0, sizeof(V_4));
	bool V_5 = false;
	{
		AnalyticsEventParamListContainer_tAE992B5199A074975EF5CC6CF4A80FCCFCBF4C02* L_0;
		L_0 = StandardEventPayload_get_parameters_mDEF87E957DD90917F8FD0744ADE2B0290D43E465_inline(__this, NULL);
		NullCheck(L_0);
		List_1_t9DD115095F7C5EEA37796C3B52E5EADC08B27030* L_1;
		L_1 = AnalyticsEventParamListContainer_get_parameters_m3CC2C44E55D190E4714C71D3BCC10A03B105FE5F_inline(L_0, NULL);
		V_0 = L_1;
		Dictionary_2_tC1BD2E5DC97017673DF7A42E09736890AFD8B0C3* L_2 = (Dictionary_2_tC1BD2E5DC97017673DF7A42E09736890AFD8B0C3*)il2cpp_codegen_object_new(Dictionary_2_tC1BD2E5DC97017673DF7A42E09736890AFD8B0C3_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		Dictionary_2__ctor_mC1412FC33CB4A79B897DC06F5AA4A925E069E8F3(L_2, Dictionary_2__ctor_mC1412FC33CB4A79B897DC06F5AA4A925E069E8F3_RuntimeMethod_var);
		V_1 = L_2;
		V_2 = 0;
		goto IL_00ed;
	}

IL_0019:
	{
		List_1_t9DD115095F7C5EEA37796C3B52E5EADC08B27030* L_3 = V_0;
		int32_t L_4 = V_2;
		NullCheck(L_3);
		AnalyticsEventParam_t6FBABF1961987CB0E6F88338A5C48EE1E3E60974* L_5;
		L_5 = List_1_get_Item_mF55BE282EB49F386CBBB671C7FD770C921A01F1D(L_3, L_4, List_1_get_Item_mF55BE282EB49F386CBBB671C7FD770C921A01F1D_RuntimeMethod_var);
		if (!L_5)
		{
			goto IL_00e9;
		}
	}
	{
		List_1_t9DD115095F7C5EEA37796C3B52E5EADC08B27030* L_6 = V_0;
		int32_t L_7 = V_2;
		NullCheck(L_6);
		AnalyticsEventParam_t6FBABF1961987CB0E6F88338A5C48EE1E3E60974* L_8;
		L_8 = List_1_get_Item_mF55BE282EB49F386CBBB671C7FD770C921A01F1D(L_6, L_7, List_1_get_Item_mF55BE282EB49F386CBBB671C7FD770C921A01F1D_RuntimeMethod_var);
		NullCheck(L_8);
		int32_t L_9;
		L_9 = AnalyticsEventParam_get_requirementType_m2ABD4A4A22B1C1E0C14E988DDD97C77B7DD1809A_inline(L_8, NULL);
		if ((!(((uint32_t)L_9) == ((uint32_t)1))))
		{
			goto IL_00e9;
		}
	}
	{
		List_1_t9DD115095F7C5EEA37796C3B52E5EADC08B27030* L_10 = V_0;
		int32_t L_11 = V_2;
		NullCheck(L_10);
		AnalyticsEventParam_t6FBABF1961987CB0E6F88338A5C48EE1E3E60974* L_12;
		L_12 = List_1_get_Item_mF55BE282EB49F386CBBB671C7FD770C921A01F1D(L_10, L_11, List_1_get_Item_mF55BE282EB49F386CBBB671C7FD770C921A01F1D_RuntimeMethod_var);
		NullCheck(L_12);
		String_t* L_13;
		L_13 = AnalyticsEventParam_get_groupID_mDD8977AB9D95813C7CEF465672E77A47E4A2D023_inline(L_12, NULL);
		bool L_14;
		L_14 = String_IsNullOrEmpty_mEA9E3FB005AC28FE02E69FCF95A7B8456192B478(L_13, NULL);
		if (!L_14)
		{
			goto IL_0093;
		}
	}
	{
		Dictionary_2_tC1BD2E5DC97017673DF7A42E09736890AFD8B0C3* L_15 = V_1;
		NullCheck(L_15);
		bool L_16;
		L_16 = Dictionary_2_ContainsKey_m70BD45E946DC5A0F38184B4D44969BD5EAAE5B23(L_15, _stringLiteral0AEA2C46AAEB233C6D2DF0275EF92FB2E56BAFE9, Dictionary_2_ContainsKey_m70BD45E946DC5A0F38184B4D44969BD5EAAE5B23_RuntimeMethod_var);
		if (L_16)
		{
			goto IL_006d;
		}
	}
	{
		Dictionary_2_tC1BD2E5DC97017673DF7A42E09736890AFD8B0C3* L_17 = V_1;
		List_1_t01207CE5982A7640E56B1F9F672A06F96B09367A* L_18 = (List_1_t01207CE5982A7640E56B1F9F672A06F96B09367A*)il2cpp_codegen_object_new(List_1_t01207CE5982A7640E56B1F9F672A06F96B09367A_il2cpp_TypeInfo_var);
		NullCheck(L_18);
		List_1__ctor_m87539832B82A3453971F3BCC702C7346E8D3F953(L_18, List_1__ctor_m87539832B82A3453971F3BCC702C7346E8D3F953_RuntimeMethod_var);
		NullCheck(L_17);
		Dictionary_2_Add_m27C98D4107649BA0703A939EAD8CEBA9DD5DE798(L_17, _stringLiteral0AEA2C46AAEB233C6D2DF0275EF92FB2E56BAFE9, L_18, Dictionary_2_Add_m27C98D4107649BA0703A939EAD8CEBA9DD5DE798_RuntimeMethod_var);
	}

IL_006d:
	{
		Dictionary_2_tC1BD2E5DC97017673DF7A42E09736890AFD8B0C3* L_19 = V_1;
		NullCheck(L_19);
		List_1_t01207CE5982A7640E56B1F9F672A06F96B09367A* L_20;
		L_20 = Dictionary_2_get_Item_mD03DF8E6DD66382B6083D4FBA93F74E1E50F3271(L_19, _stringLiteral0AEA2C46AAEB233C6D2DF0275EF92FB2E56BAFE9, Dictionary_2_get_Item_mD03DF8E6DD66382B6083D4FBA93F74E1E50F3271_RuntimeMethod_var);
		List_1_t9DD115095F7C5EEA37796C3B52E5EADC08B27030* L_21 = V_0;
		int32_t L_22 = V_2;
		NullCheck(L_21);
		AnalyticsEventParam_t6FBABF1961987CB0E6F88338A5C48EE1E3E60974* L_23;
		L_23 = List_1_get_Item_mF55BE282EB49F386CBBB671C7FD770C921A01F1D(L_21, L_22, List_1_get_Item_mF55BE282EB49F386CBBB671C7FD770C921A01F1D_RuntimeMethod_var);
		NullCheck(L_23);
		ValueProperty_tB152A92DD3101A108D3C41589959AB70AAD68436* L_24;
		L_24 = AnalyticsEventParam_get_valueProperty_m09B7D0AF1FFA904617560B33E971AC1DB3A5B4F6_inline(L_23, NULL);
		NullCheck(L_24);
		bool L_25;
		L_25 = ValueProperty_IsValid_m7311497A4AD251C0A9765A699CFDA41F91325DBC(L_24, NULL);
		NullCheck(L_20);
		List_1_Add_m5AAB6DCB6C30EB5769B4E8DB8170E50319F0A9ED_inline(L_20, L_25, List_1_Add_m5AAB6DCB6C30EB5769B4E8DB8170E50319F0A9ED_RuntimeMethod_var);
		goto IL_00e9;
	}

IL_0093:
	{
		Dictionary_2_tC1BD2E5DC97017673DF7A42E09736890AFD8B0C3* L_26 = V_1;
		List_1_t9DD115095F7C5EEA37796C3B52E5EADC08B27030* L_27 = V_0;
		int32_t L_28 = V_2;
		NullCheck(L_27);
		AnalyticsEventParam_t6FBABF1961987CB0E6F88338A5C48EE1E3E60974* L_29;
		L_29 = List_1_get_Item_mF55BE282EB49F386CBBB671C7FD770C921A01F1D(L_27, L_28, List_1_get_Item_mF55BE282EB49F386CBBB671C7FD770C921A01F1D_RuntimeMethod_var);
		NullCheck(L_29);
		String_t* L_30;
		L_30 = AnalyticsEventParam_get_groupID_mDD8977AB9D95813C7CEF465672E77A47E4A2D023_inline(L_29, NULL);
		NullCheck(L_26);
		bool L_31;
		L_31 = Dictionary_2_ContainsKey_m70BD45E946DC5A0F38184B4D44969BD5EAAE5B23(L_26, L_30, Dictionary_2_ContainsKey_m70BD45E946DC5A0F38184B4D44969BD5EAAE5B23_RuntimeMethod_var);
		if (L_31)
		{
			goto IL_00c1;
		}
	}
	{
		Dictionary_2_tC1BD2E5DC97017673DF7A42E09736890AFD8B0C3* L_32 = V_1;
		List_1_t9DD115095F7C5EEA37796C3B52E5EADC08B27030* L_33 = V_0;
		int32_t L_34 = V_2;
		NullCheck(L_33);
		AnalyticsEventParam_t6FBABF1961987CB0E6F88338A5C48EE1E3E60974* L_35;
		L_35 = List_1_get_Item_mF55BE282EB49F386CBBB671C7FD770C921A01F1D(L_33, L_34, List_1_get_Item_mF55BE282EB49F386CBBB671C7FD770C921A01F1D_RuntimeMethod_var);
		NullCheck(L_35);
		String_t* L_36;
		L_36 = AnalyticsEventParam_get_groupID_mDD8977AB9D95813C7CEF465672E77A47E4A2D023_inline(L_35, NULL);
		List_1_t01207CE5982A7640E56B1F9F672A06F96B09367A* L_37 = (List_1_t01207CE5982A7640E56B1F9F672A06F96B09367A*)il2cpp_codegen_object_new(List_1_t01207CE5982A7640E56B1F9F672A06F96B09367A_il2cpp_TypeInfo_var);
		NullCheck(L_37);
		List_1__ctor_m87539832B82A3453971F3BCC702C7346E8D3F953(L_37, List_1__ctor_m87539832B82A3453971F3BCC702C7346E8D3F953_RuntimeMethod_var);
		NullCheck(L_32);
		Dictionary_2_Add_m27C98D4107649BA0703A939EAD8CEBA9DD5DE798(L_32, L_36, L_37, Dictionary_2_Add_m27C98D4107649BA0703A939EAD8CEBA9DD5DE798_RuntimeMethod_var);
	}

IL_00c1:
	{
		Dictionary_2_tC1BD2E5DC97017673DF7A42E09736890AFD8B0C3* L_38 = V_1;
		List_1_t9DD115095F7C5EEA37796C3B52E5EADC08B27030* L_39 = V_0;
		int32_t L_40 = V_2;
		NullCheck(L_39);
		AnalyticsEventParam_t6FBABF1961987CB0E6F88338A5C48EE1E3E60974* L_41;
		L_41 = List_1_get_Item_mF55BE282EB49F386CBBB671C7FD770C921A01F1D(L_39, L_40, List_1_get_Item_mF55BE282EB49F386CBBB671C7FD770C921A01F1D_RuntimeMethod_var);
		NullCheck(L_41);
		String_t* L_42;
		L_42 = AnalyticsEventParam_get_groupID_mDD8977AB9D95813C7CEF465672E77A47E4A2D023_inline(L_41, NULL);
		NullCheck(L_38);
		List_1_t01207CE5982A7640E56B1F9F672A06F96B09367A* L_43;
		L_43 = Dictionary_2_get_Item_mD03DF8E6DD66382B6083D4FBA93F74E1E50F3271(L_38, L_42, Dictionary_2_get_Item_mD03DF8E6DD66382B6083D4FBA93F74E1E50F3271_RuntimeMethod_var);
		List_1_t9DD115095F7C5EEA37796C3B52E5EADC08B27030* L_44 = V_0;
		int32_t L_45 = V_2;
		NullCheck(L_44);
		AnalyticsEventParam_t6FBABF1961987CB0E6F88338A5C48EE1E3E60974* L_46;
		L_46 = List_1_get_Item_mF55BE282EB49F386CBBB671C7FD770C921A01F1D(L_44, L_45, List_1_get_Item_mF55BE282EB49F386CBBB671C7FD770C921A01F1D_RuntimeMethod_var);
		NullCheck(L_46);
		ValueProperty_tB152A92DD3101A108D3C41589959AB70AAD68436* L_47;
		L_47 = AnalyticsEventParam_get_valueProperty_m09B7D0AF1FFA904617560B33E971AC1DB3A5B4F6_inline(L_46, NULL);
		NullCheck(L_47);
		bool L_48;
		L_48 = ValueProperty_IsValid_m7311497A4AD251C0A9765A699CFDA41F91325DBC(L_47, NULL);
		NullCheck(L_43);
		List_1_Add_m5AAB6DCB6C30EB5769B4E8DB8170E50319F0A9ED_inline(L_43, L_48, List_1_Add_m5AAB6DCB6C30EB5769B4E8DB8170E50319F0A9ED_RuntimeMethod_var);
	}

IL_00e9:
	{
		int32_t L_49 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_49, 1));
	}

IL_00ed:
	{
		int32_t L_50 = V_2;
		List_1_t9DD115095F7C5EEA37796C3B52E5EADC08B27030* L_51 = V_0;
		NullCheck(L_51);
		int32_t L_52;
		L_52 = List_1_get_Count_m623FA42FEDF361CAEF7B7C5D1252EE0E304A65F9_inline(L_51, List_1_get_Count_m623FA42FEDF361CAEF7B7C5D1252EE0E304A65F9_RuntimeMethod_var);
		if ((((int32_t)L_50) < ((int32_t)L_52)))
		{
			goto IL_0019;
		}
	}
	{
		Dictionary_2_tC1BD2E5DC97017673DF7A42E09736890AFD8B0C3* L_53 = V_1;
		NullCheck(L_53);
		KeyCollection_tA845E107A897F0C5C9CE39E283764084ABD5421E* L_54;
		L_54 = Dictionary_2_get_Keys_mA67CCC9A76D1AA5EEF7C54AB87D74E41098DA8F3(L_53, Dictionary_2_get_Keys_mA67CCC9A76D1AA5EEF7C54AB87D74E41098DA8F3_RuntimeMethod_var);
		NullCheck(L_54);
		Enumerator_t2BE86F405FCFA2DF433334EED3CAB9B9C764584E L_55;
		L_55 = KeyCollection_GetEnumerator_m2E205C00BEAF54451047512036299F6D947B194A(L_54, KeyCollection_GetEnumerator_m2E205C00BEAF54451047512036299F6D947B194A_RuntimeMethod_var);
		V_4 = L_55;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_017d:
			{// begin finally (depth: 1)
				Enumerator_Dispose_m93CD93F0EF69D1B4C47D96529D6BC0C89741EC49((&V_4), Enumerator_Dispose_m93CD93F0EF69D1B4C47D96529D6BC0C89741EC49_RuntimeMethod_var);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_016c_1;
			}

IL_010b_1:
			{
				String_t* L_56;
				L_56 = Enumerator_get_Current_mD611F18C5CBDC2FC8EA79C110DAB242664E304CA_inline((&V_4), Enumerator_get_Current_mD611F18C5CBDC2FC8EA79C110DAB242664E304CA_RuntimeMethod_var);
				V_3 = L_56;
				String_t* L_57 = V_3;
				if (!L_57)
				{
					goto IL_014d_1;
				}
			}
			{
				String_t* L_58 = V_3;
				bool L_59;
				L_59 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_58, _stringLiteral0AEA2C46AAEB233C6D2DF0275EF92FB2E56BAFE9, NULL);
				if (L_59)
				{
					goto IL_012e_1;
				}
			}
			{
				goto IL_014d_1;
			}

IL_012e_1:
			{
				Dictionary_2_tC1BD2E5DC97017673DF7A42E09736890AFD8B0C3* L_60 = V_1;
				String_t* L_61 = V_3;
				NullCheck(L_60);
				List_1_t01207CE5982A7640E56B1F9F672A06F96B09367A* L_62;
				L_62 = Dictionary_2_get_Item_mD03DF8E6DD66382B6083D4FBA93F74E1E50F3271(L_60, L_61, Dictionary_2_get_Item_mD03DF8E6DD66382B6083D4FBA93F74E1E50F3271_RuntimeMethod_var);
				NullCheck(L_62);
				bool L_63;
				L_63 = List_1_Contains_mC82ECFA72602553B2896828FCD67FDAE8A18C190(L_62, (bool)0, List_1_Contains_mC82ECFA72602553B2896828FCD67FDAE8A18C190_RuntimeMethod_var);
				if (!L_63)
				{
					goto IL_0148_1;
				}
			}
			{
				V_5 = (bool)0;
				goto IL_018d;
			}

IL_0148_1:
			{
				goto IL_016c_1;
			}

IL_014d_1:
			{
				Dictionary_2_tC1BD2E5DC97017673DF7A42E09736890AFD8B0C3* L_64 = V_1;
				String_t* L_65 = V_3;
				NullCheck(L_64);
				List_1_t01207CE5982A7640E56B1F9F672A06F96B09367A* L_66;
				L_66 = Dictionary_2_get_Item_mD03DF8E6DD66382B6083D4FBA93F74E1E50F3271(L_64, L_65, Dictionary_2_get_Item_mD03DF8E6DD66382B6083D4FBA93F74E1E50F3271_RuntimeMethod_var);
				NullCheck(L_66);
				bool L_67;
				L_67 = List_1_Contains_mC82ECFA72602553B2896828FCD67FDAE8A18C190(L_66, (bool)1, List_1_Contains_mC82ECFA72602553B2896828FCD67FDAE8A18C190_RuntimeMethod_var);
				if (L_67)
				{
					goto IL_0167_1;
				}
			}
			{
				V_5 = (bool)0;
				goto IL_018d;
			}

IL_0167_1:
			{
				goto IL_016c_1;
			}

IL_016c_1:
			{
				bool L_68;
				L_68 = Enumerator_MoveNext_m19E1710634EDF32441A6C90C87083A8CB0D1AAD1((&V_4), Enumerator_MoveNext_m19E1710634EDF32441A6C90C87083A8CB0D1AAD1_RuntimeMethod_var);
				if (L_68)
				{
					goto IL_010b_1;
				}
			}
			{
				goto IL_018b;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_018b:
	{
		return (bool)1;
	}

IL_018d:
	{
		bool L_69 = V_5;
		return L_69;
	}
}
// System.Void UnityEngine.Analytics.StandardEventPayload::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StandardEventPayload__cctor_m0E9E06C8C88215FAB98BD5A8C86FA8CCDD61FE86 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_mC4F3DF292BAD88F4BF193C49CD689FAEBC4570A9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StandardEventPayload_tC18B9CF0832CA32A1280D8ECDB81596C45ED4EA7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* L_0 = (Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710*)il2cpp_codegen_object_new(Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		Dictionary_2__ctor_mC4F3DF292BAD88F4BF193C49CD689FAEBC4570A9(L_0, Dictionary_2__ctor_mC4F3DF292BAD88F4BF193C49CD689FAEBC4570A9_RuntimeMethod_var);
		((StandardEventPayload_tC18B9CF0832CA32A1280D8ECDB81596C45ED4EA7_StaticFields*)il2cpp_codegen_static_fields_for(StandardEventPayload_tC18B9CF0832CA32A1280D8ECDB81596C45ED4EA7_il2cpp_TypeInfo_var))->___m_EventData_4 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((StandardEventPayload_tC18B9CF0832CA32A1280D8ECDB81596C45ED4EA7_StaticFields*)il2cpp_codegen_static_fields_for(StandardEventPayload_tC18B9CF0832CA32A1280D8ECDB81596C45ED4EA7_il2cpp_TypeInfo_var))->___m_EventData_4), (void*)L_0);
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
// System.Void UnityEngine.Analytics.TrackableField::.ctor(System.Type[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TrackableField__ctor_m3EA046CEBD8A0A8B3969704CA8FD5187824C13C2 (TrackableField_t6DC55D40EE374F2FFA111344BC840FA36CF76D7F* __this, TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* ___validTypes0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		TrackablePropertyBase__ctor_m76FD5F897D850039433A908F68AC9F20B5C9C5A1(__this, NULL);
		TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* L_0 = ___validTypes0;
		if (!L_0)
		{
			goto IL_0014;
		}
	}
	{
		TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* L_1 = ___validTypes0;
		NullCheck(L_1);
		if (((int32_t)(((RuntimeArray*)L_1)->max_length)))
		{
			goto IL_0015;
		}
	}

IL_0014:
	{
		return;
	}

IL_0015:
	{
		TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* L_2 = ___validTypes0;
		NullCheck(L_2);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_3 = (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)SZArrayNew(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var, (uint32_t)((int32_t)(((RuntimeArray*)L_2)->max_length)));
		__this->___m_ValidTypeNames_2 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_ValidTypeNames_2), (void*)L_3);
		V_0 = 0;
		goto IL_003e;
	}

IL_002a:
	{
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_4 = __this->___m_ValidTypeNames_2;
		int32_t L_5 = V_0;
		TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* L_6 = ___validTypes0;
		int32_t L_7 = V_0;
		NullCheck(L_6);
		int32_t L_8 = L_7;
		Type_t* L_9 = (L_6)->GetAt(static_cast<il2cpp_array_size_t>(L_8));
		NullCheck(L_9);
		String_t* L_10;
		L_10 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_9);
		NullCheck(L_4);
		ArrayElementTypeCheck (L_4, L_10);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(L_5), (String_t*)L_10);
		int32_t L_11 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_11, 1));
	}

IL_003e:
	{
		int32_t L_12 = V_0;
		TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* L_13 = ___validTypes0;
		NullCheck(L_13);
		if ((((int32_t)L_12) < ((int32_t)((int32_t)(((RuntimeArray*)L_13)->max_length)))))
		{
			goto IL_002a;
		}
	}
	{
		return;
	}
}
// System.Object UnityEngine.Analytics.TrackableField::GetValue()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TrackableField_GetValue_mC5ECCA29B21EDF39021816EBF0F82E1FC905566D (TrackableField_t6DC55D40EE374F2FFA111344BC840FA36CF76D7F* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	String_t* V_1 = NULL;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* V_2 = NULL;
	int32_t V_3 = 0;
	PropertyInfo_t* V_4 = NULL;
	FieldInfo_t* V_5 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_0 = ((TrackablePropertyBase_t1D13B0FF07AB12F6973658EF46A70504D578017E*)__this)->___m_Target_0;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (L_1)
		{
			goto IL_0021;
		}
	}
	{
		String_t* L_2 = ((TrackablePropertyBase_t1D13B0FF07AB12F6973658EF46A70504D578017E*)__this)->___m_Path_1;
		bool L_3;
		L_3 = String_IsNullOrEmpty_mEA9E3FB005AC28FE02E69FCF95A7B8456192B478(L_2, NULL);
		if (!L_3)
		{
			goto IL_0023;
		}
	}

IL_0021:
	{
		return NULL;
	}

IL_0023:
	{
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_4 = ((TrackablePropertyBase_t1D13B0FF07AB12F6973658EF46A70504D578017E*)__this)->___m_Target_0;
		V_0 = L_4;
		String_t* L_5 = ((TrackablePropertyBase_t1D13B0FF07AB12F6973658EF46A70504D578017E*)__this)->___m_Path_1;
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_6 = (CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB*)(CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB*)SZArrayNew(CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB_il2cpp_TypeInfo_var, (uint32_t)1);
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_7 = L_6;
		NullCheck(L_7);
		(L_7)->SetAt(static_cast<il2cpp_array_size_t>(0), (Il2CppChar)((int32_t)46));
		NullCheck(L_5);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_8;
		L_8 = String_Split_m101D35FEC86371D2BB4E3480F6F896880093B2E9(L_5, L_7, NULL);
		V_2 = L_8;
		V_3 = 0;
		goto IL_00a4;
	}

IL_0048:
	{
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_9 = V_2;
		int32_t L_10 = V_3;
		NullCheck(L_9);
		int32_t L_11 = L_10;
		String_t* L_12 = (L_9)->GetAt(static_cast<il2cpp_array_size_t>(L_11));
		V_1 = L_12;
	}
	try
	{// begin try (depth: 1)
		{
			RuntimeObject* L_13 = V_0;
			NullCheck(L_13);
			Type_t* L_14;
			L_14 = Object_GetType_mE10A8FC1E57F3DF29972CCBC026C2DC3942263B3(L_13, NULL);
			String_t* L_15 = V_1;
			NullCheck(L_14);
			PropertyInfo_t* L_16;
			L_16 = Type_GetProperty_mD183124FC8A89121E8368058B327A7750B14281D(L_14, L_15, NULL);
			V_4 = L_16;
			PropertyInfo_t* L_17 = V_4;
			bool L_18;
			L_18 = PropertyInfo_op_Inequality_mE75A4F14CC678D8A670730FBD4338C718CACB51B(L_17, (PropertyInfo_t*)NULL, NULL);
			if (!L_18)
			{
				goto IL_0071_1;
			}
		}
		{
			PropertyInfo_t* L_19 = V_4;
			RuntimeObject* L_20 = V_0;
			NullCheck(L_19);
			RuntimeObject* L_21;
			L_21 = VirtualFuncInvoker2< RuntimeObject*, RuntimeObject*, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* >::Invoke(24 /* System.Object System.Reflection.PropertyInfo::GetValue(System.Object,System.Object[]) */, L_19, L_20, (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)NULL);
			V_0 = L_21;
		}

IL_0071_1:
		{
			goto IL_00a0;
		}
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RuntimeObject_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0076;
		}
		throw e;
	}

CATCH_0076:
	{// begin catch(System.Object)
		{
			RuntimeObject* L_22 = V_0;
			NullCheck(L_22);
			Type_t* L_23;
			L_23 = Object_GetType_mE10A8FC1E57F3DF29972CCBC026C2DC3942263B3(L_22, NULL);
			String_t* L_24 = V_1;
			NullCheck(L_23);
			FieldInfo_t* L_25;
			L_25 = Type_GetField_m0BF55B1A27A1B6AB6D3477E7F9E1CF2A3451E1E0(L_23, L_24, NULL);
			V_5 = L_25;
			FieldInfo_t* L_26 = V_5;
			bool L_27;
			L_27 = FieldInfo_op_Inequality_m95789A98E646494987E66A9E4188DCA86185066B(L_26, (FieldInfo_t*)NULL, NULL);
			if (!L_27)
			{
				goto IL_009b;
			}
		}
		{
			FieldInfo_t* L_28 = V_5;
			RuntimeObject* L_29 = V_0;
			NullCheck(L_28);
			RuntimeObject* L_30;
			L_30 = VirtualFuncInvoker1< RuntimeObject*, RuntimeObject* >::Invoke(25 /* System.Object System.Reflection.FieldInfo::GetValue(System.Object) */, L_28, L_29);
			V_0 = L_30;
		}

IL_009b:
		{
			IL2CPP_POP_ACTIVE_EXCEPTION();
			goto IL_00a0;
		}
	}// end catch (depth: 1)

IL_00a0:
	{
		int32_t L_31 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_31, 1));
	}

IL_00a4:
	{
		int32_t L_32 = V_3;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_33 = V_2;
		NullCheck(L_33);
		if ((((int32_t)L_32) < ((int32_t)((int32_t)(((RuntimeArray*)L_33)->max_length)))))
		{
			goto IL_0048;
		}
	}
	{
		RuntimeObject* L_34 = V_0;
		return L_34;
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
// System.Void UnityEngine.Analytics.TrackablePropertyBase::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TrackablePropertyBase__ctor_m76FD5F897D850039433A908F68AC9F20B5C9C5A1 (TrackablePropertyBase_t1D13B0FF07AB12F6973658EF46A70504D578017E* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
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
// System.Void UnityEngine.Analytics.ValueProperty::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ValueProperty__ctor_mA89410204F0161099E25988F22D44CD6EAC715D3 (ValueProperty_tB152A92DD3101A108D3C41589959AB70AAD68436* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		__this->___m_EnumTypeIsCustomizable_5 = (bool)1;
		__this->___m_PropertyType_7 = 1;
		String_t* L_0 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
		__this->___m_Value_9 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_Value_9), (void*)L_0);
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.String UnityEngine.Analytics.ValueProperty::get_valueType()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* ValueProperty_get_valueType_m2C587EC9748004FDD34A2D84DEE9937D5002FABB (ValueProperty_tB152A92DD3101A108D3C41589959AB70AAD68436* __this, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = __this->___m_ValueType_8;
		return L_0;
	}
}
// System.Void UnityEngine.Analytics.ValueProperty::set_valueType(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ValueProperty_set_valueType_mC7D8B360C93120315769EF82CCFC527CF44A1B36 (ValueProperty_tB152A92DD3101A108D3C41589959AB70AAD68436* __this, String_t* ___value0, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = ___value0;
		__this->___m_ValueType_8 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_ValueType_8), (void*)L_0);
		return;
	}
}
// System.String UnityEngine.Analytics.ValueProperty::get_propertyValue()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* ValueProperty_get_propertyValue_mFC1DBF8E2C72655224C6E30E2FCEF41B3E19B1F5 (ValueProperty_tB152A92DD3101A108D3C41589959AB70AAD68436* __this, const RuntimeMethod* method) 
{
	RuntimeObject* V_0 = NULL;
	String_t* G_B5_0 = NULL;
	String_t* G_B9_0 = NULL;
	{
		int32_t L_0 = __this->___m_PropertyType_7;
		if ((!(((uint32_t)L_0) == ((uint32_t)2))))
		{
			goto IL_003b;
		}
	}
	{
		TrackableField_t6DC55D40EE374F2FFA111344BC840FA36CF76D7F* L_1 = __this->___m_Target_10;
		if (!L_1)
		{
			goto IL_003b;
		}
	}
	{
		TrackableField_t6DC55D40EE374F2FFA111344BC840FA36CF76D7F* L_2 = __this->___m_Target_10;
		NullCheck(L_2);
		RuntimeObject* L_3;
		L_3 = TrackableField_GetValue_mC5ECCA29B21EDF39021816EBF0F82E1FC905566D(L_2, NULL);
		V_0 = L_3;
		RuntimeObject* L_4 = V_0;
		if (L_4)
		{
			goto IL_002f;
		}
	}
	{
		G_B5_0 = ((String_t*)(NULL));
		goto IL_003a;
	}

IL_002f:
	{
		RuntimeObject* L_5 = V_0;
		NullCheck(L_5);
		String_t* L_6;
		L_6 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_5);
		NullCheck(L_6);
		String_t* L_7;
		L_7 = String_Trim_mCD6D8C6D4CFD15225D12DB7D3E0544CA80FB8DA5(L_6, NULL);
		G_B5_0 = L_7;
	}

IL_003a:
	{
		return G_B5_0;
	}

IL_003b:
	{
		String_t* L_8 = __this->___m_Value_9;
		if (L_8)
		{
			goto IL_004c;
		}
	}
	{
		G_B9_0 = ((String_t*)(NULL));
		goto IL_0057;
	}

IL_004c:
	{
		String_t* L_9 = __this->___m_Value_9;
		NullCheck(L_9);
		String_t* L_10;
		L_10 = String_Trim_mCD6D8C6D4CFD15225D12DB7D3E0544CA80FB8DA5(L_9, NULL);
		G_B9_0 = L_10;
	}

IL_0057:
	{
		return G_B9_0;
	}
}
// UnityEngine.Analytics.TrackableField UnityEngine.Analytics.ValueProperty::get_target()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TrackableField_t6DC55D40EE374F2FFA111344BC840FA36CF76D7F* ValueProperty_get_target_mFF245D412287A49C6FEB5FA53AC422765321F5B7 (ValueProperty_tB152A92DD3101A108D3C41589959AB70AAD68436* __this, const RuntimeMethod* method) 
{
	{
		TrackableField_t6DC55D40EE374F2FFA111344BC840FA36CF76D7F* L_0 = __this->___m_Target_10;
		return L_0;
	}
}
// System.Boolean UnityEngine.Analytics.ValueProperty::IsValid()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ValueProperty_IsValid_m7311497A4AD251C0A9765A699CFDA41F91325DBC (ValueProperty_tB152A92DD3101A108D3C41589959AB70AAD68436* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_GetType_m71A077E0B5DA3BD1DC0AB9AE387056CFCF56F93F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ValueProperty_IsValid_m7311497A4AD251C0A9765A699CFDA41F91325DBC_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t G_B5_0 = 0;
	int32_t G_B9_0 = 0;
	{
		int32_t L_0 = __this->___m_PropertyType_7;
		V_0 = L_0;
		int32_t L_1 = V_0;
		switch (L_1)
		{
			case 0:
			{
				goto IL_006c;
			}
			case 1:
			{
				goto IL_001e;
			}
			case 2:
			{
				goto IL_004c;
			}
		}
	}
	{
		goto IL_006c;
	}

IL_001e:
	{
		String_t* L_2 = __this->___m_Value_9;
		bool L_3;
		L_3 = String_IsNullOrEmpty_mEA9E3FB005AC28FE02E69FCF95A7B8456192B478(L_2, NULL);
		if (!L_3)
		{
			goto IL_004a;
		}
	}
	{
		String_t* L_4 = __this->___m_ValueType_8;
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_5;
		L_5 = il2cpp_codegen_get_type(L_4, Type_GetType_m71A077E0B5DA3BD1DC0AB9AE387056CFCF56F93F_RuntimeMethod_var, ValueProperty_IsValid_m7311497A4AD251C0A9765A699CFDA41F91325DBC_RuntimeMethod_var);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_6 = { reinterpret_cast<intptr_t> (String_t_0_0_0_var) };
		Type_t* L_7;
		L_7 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_6, NULL);
		bool L_8;
		L_8 = Type_op_Inequality_m83209C7BB3C05DFBEA3B6199B0BEFE8037301172(L_5, L_7, NULL);
		G_B5_0 = ((int32_t)(L_8));
		goto IL_004b;
	}

IL_004a:
	{
		G_B5_0 = 1;
	}

IL_004b:
	{
		return (bool)G_B5_0;
	}

IL_004c:
	{
		TrackableField_t6DC55D40EE374F2FFA111344BC840FA36CF76D7F* L_9 = __this->___m_Target_10;
		if (!L_9)
		{
			goto IL_006a;
		}
	}
	{
		TrackableField_t6DC55D40EE374F2FFA111344BC840FA36CF76D7F* L_10 = __this->___m_Target_10;
		NullCheck(L_10);
		RuntimeObject* L_11;
		L_11 = TrackableField_GetValue_mC5ECCA29B21EDF39021816EBF0F82E1FC905566D(L_10, NULL);
		G_B9_0 = ((((int32_t)((((RuntimeObject*)(RuntimeObject*)L_11) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_006b;
	}

IL_006a:
	{
		G_B9_0 = 0;
	}

IL_006b:
	{
		return (bool)G_B9_0;
	}

IL_006c:
	{
		return (bool)0;
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
// System.Void UnityEngine.Analytics.AnalyticsTracker::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnalyticsTracker__ctor_m35AF43FBDB0E88CFEE1D47457D0BD0827D58722E (AnalyticsTracker_t1DD335B622ADA1AABB848B69311C67605DEF6301* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_mC4F3DF292BAD88F4BF193C49CD689FAEBC4570A9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TrackableProperty_tD94C354D884EDFB6603639EE6559289850F5E720_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* L_0 = (Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710*)il2cpp_codegen_object_new(Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		Dictionary_2__ctor_mC4F3DF292BAD88F4BF193C49CD689FAEBC4570A9(L_0, Dictionary_2__ctor_mC4F3DF292BAD88F4BF193C49CD689FAEBC4570A9_RuntimeMethod_var);
		__this->___m_Dict_5 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_Dict_5), (void*)L_0);
		TrackableProperty_tD94C354D884EDFB6603639EE6559289850F5E720* L_1 = (TrackableProperty_tD94C354D884EDFB6603639EE6559289850F5E720*)il2cpp_codegen_object_new(TrackableProperty_tD94C354D884EDFB6603639EE6559289850F5E720_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		TrackableProperty__ctor_m2F72F98BEB650F8592E0A03F856EDF0BAB691D83(L_1, NULL);
		__this->___m_TrackableProperty_7 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_TrackableProperty_7), (void*)L_1);
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
// System.String UnityEngine.Analytics.AnalyticsTracker::get_eventName()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* AnalyticsTracker_get_eventName_m195CD18E034B3E9C3CAAF362FED686691E96E133 (AnalyticsTracker_t1DD335B622ADA1AABB848B69311C67605DEF6301* __this, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = __this->___m_EventName_4;
		return L_0;
	}
}
// System.Void UnityEngine.Analytics.AnalyticsTracker::set_eventName(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnalyticsTracker_set_eventName_m13A7EC12100EAAAFF8814A957607286DA5463EC2 (AnalyticsTracker_t1DD335B622ADA1AABB848B69311C67605DEF6301* __this, String_t* ___value0, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = ___value0;
		__this->___m_EventName_4 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_EventName_4), (void*)L_0);
		return;
	}
}
// UnityEngine.Analytics.TrackableProperty UnityEngine.Analytics.AnalyticsTracker::get_TP()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TrackableProperty_tD94C354D884EDFB6603639EE6559289850F5E720* AnalyticsTracker_get_TP_m9156E2C82B49CEC70BE07147E88BFA826C6612B6 (AnalyticsTracker_t1DD335B622ADA1AABB848B69311C67605DEF6301* __this, const RuntimeMethod* method) 
{
	{
		TrackableProperty_tD94C354D884EDFB6603639EE6559289850F5E720* L_0 = __this->___m_TrackableProperty_7;
		return L_0;
	}
}
// System.Void UnityEngine.Analytics.AnalyticsTracker::set_TP(UnityEngine.Analytics.TrackableProperty)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnalyticsTracker_set_TP_m927C0855DCB7E53765BEB2E8825C4A0A119B0F82 (AnalyticsTracker_t1DD335B622ADA1AABB848B69311C67605DEF6301* __this, TrackableProperty_tD94C354D884EDFB6603639EE6559289850F5E720* ___value0, const RuntimeMethod* method) 
{
	{
		TrackableProperty_tD94C354D884EDFB6603639EE6559289850F5E720* L_0 = ___value0;
		__this->___m_TrackableProperty_7 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_TrackableProperty_7), (void*)L_0);
		return;
	}
}
// System.Void UnityEngine.Analytics.AnalyticsTracker::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnalyticsTracker_Awake_mB56E16C171D3B43E241E114F1C763DB9353E6248 (AnalyticsTracker_t1DD335B622ADA1AABB848B69311C67605DEF6301* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___m_Trigger_8;
		if ((!(((uint32_t)L_0) == ((uint32_t)1))))
		{
			goto IL_0012;
		}
	}
	{
		AnalyticsTracker_TriggerEvent_m0EAC83A18418B14270F17147A1F7A48D3057BCEE(__this, NULL);
	}

IL_0012:
	{
		return;
	}
}
// System.Void UnityEngine.Analytics.AnalyticsTracker::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnalyticsTracker_Start_mC401A2239EEE2E0EB0B6BDB55097E5512DD7F9BC (AnalyticsTracker_t1DD335B622ADA1AABB848B69311C67605DEF6301* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___m_Trigger_8;
		if ((!(((uint32_t)L_0) == ((uint32_t)2))))
		{
			goto IL_0012;
		}
	}
	{
		AnalyticsTracker_TriggerEvent_m0EAC83A18418B14270F17147A1F7A48D3057BCEE(__this, NULL);
	}

IL_0012:
	{
		return;
	}
}
// System.Void UnityEngine.Analytics.AnalyticsTracker::OnEnable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnalyticsTracker_OnEnable_mE0132E9D8FC8EEC61DC4B8F88555147985ED711E (AnalyticsTracker_t1DD335B622ADA1AABB848B69311C67605DEF6301* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___m_Trigger_8;
		if ((!(((uint32_t)L_0) == ((uint32_t)3))))
		{
			goto IL_0012;
		}
	}
	{
		AnalyticsTracker_TriggerEvent_m0EAC83A18418B14270F17147A1F7A48D3057BCEE(__this, NULL);
	}

IL_0012:
	{
		return;
	}
}
// System.Void UnityEngine.Analytics.AnalyticsTracker::OnDisable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnalyticsTracker_OnDisable_m7DCBBFBC796D7DA9ADC9F06E70A8A5D980658C55 (AnalyticsTracker_t1DD335B622ADA1AABB848B69311C67605DEF6301* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___m_Trigger_8;
		if ((!(((uint32_t)L_0) == ((uint32_t)4))))
		{
			goto IL_0012;
		}
	}
	{
		AnalyticsTracker_TriggerEvent_m0EAC83A18418B14270F17147A1F7A48D3057BCEE(__this, NULL);
	}

IL_0012:
	{
		return;
	}
}
// System.Void UnityEngine.Analytics.AnalyticsTracker::OnApplicationPause()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnalyticsTracker_OnApplicationPause_mF61C23E2441DD10E74DBD4852ED331D12D6EB769 (AnalyticsTracker_t1DD335B622ADA1AABB848B69311C67605DEF6301* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___m_Trigger_8;
		if ((!(((uint32_t)L_0) == ((uint32_t)5))))
		{
			goto IL_0012;
		}
	}
	{
		AnalyticsTracker_TriggerEvent_m0EAC83A18418B14270F17147A1F7A48D3057BCEE(__this, NULL);
	}

IL_0012:
	{
		return;
	}
}
// System.Void UnityEngine.Analytics.AnalyticsTracker::OnDestroy()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnalyticsTracker_OnDestroy_m3BC2FACC542C576ABD990E23430D4F3C5BA58051 (AnalyticsTracker_t1DD335B622ADA1AABB848B69311C67605DEF6301* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___m_Trigger_8;
		if ((!(((uint32_t)L_0) == ((uint32_t)6))))
		{
			goto IL_0012;
		}
	}
	{
		AnalyticsTracker_TriggerEvent_m0EAC83A18418B14270F17147A1F7A48D3057BCEE(__this, NULL);
	}

IL_0012:
	{
		return;
	}
}
// System.Void UnityEngine.Analytics.AnalyticsTracker::TriggerEvent()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnalyticsTracker_TriggerEvent_m0EAC83A18418B14270F17147A1F7A48D3057BCEE (AnalyticsTracker_t1DD335B622ADA1AABB848B69311C67605DEF6301* __this, const RuntimeMethod* method) 
{
	{
		AnalyticsTracker_BuildParameters_m00D3C3CB26FAADE34D0D6266122C8CFFB6865048(__this, NULL);
		AnalyticsTracker_SendEvent_m982C032ADB2C3942E02EC4F1B4A4E651E1B55DD2(__this, NULL);
		return;
	}
}
// System.Void UnityEngine.Analytics.AnalyticsTracker::SendEvent()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnalyticsTracker_SendEvent_m982C032ADB2C3942E02EC4F1B4A4E651E1B55DD2 (AnalyticsTracker_t1DD335B622ADA1AABB848B69311C67605DEF6301* __this, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = __this->___m_EventName_4;
		Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* L_1 = __this->___m_Dict_5;
		int32_t L_2;
		L_2 = Analytics_CustomEvent_m663CDDCA04FF832169D1BCEE01C943A7FB6D4363(L_0, L_1, NULL);
		return;
	}
}
// System.Void UnityEngine.Analytics.AnalyticsTracker::BuildParameters()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnalyticsTracker_BuildParameters_m00D3C3CB26FAADE34D0D6266122C8CFFB6865048 (AnalyticsTracker_t1DD335B622ADA1AABB848B69311C67605DEF6301* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_Clear_mBC8B8FD18821E87AC78242BEAB058EB832641EAB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_set_Item_m7CCA97075B48AFB2B97E5A072B94BC7679374341_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m65DF182EA281FF9FB3F7772C960CABC4DE30B6F6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_mEEC1E2184F9386280BF8617077CC0F6AED7EE26F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	FieldWithTarget_t504FF69C27D0DC4A727BE0A6CE8167EC2A967448* V_3 = NULL;
	String_t* V_4 = NULL;
	{
		TrackableProperty_tD94C354D884EDFB6603639EE6559289850F5E720* L_0 = __this->___m_TrackableProperty_7;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = VirtualFuncInvoker0< int32_t >::Invoke(2 /* System.Int32 System.Object::GetHashCode() */, L_0);
		V_0 = L_1;
		int32_t L_2 = V_0;
		int32_t L_3 = __this->___m_PrevDictHash_6;
		if ((((int32_t)L_2) == ((int32_t)L_3)))
		{
			goto IL_0023;
		}
	}
	{
		Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* L_4 = __this->___m_Dict_5;
		NullCheck(L_4);
		Dictionary_2_Clear_mBC8B8FD18821E87AC78242BEAB058EB832641EAB(L_4, Dictionary_2_Clear_mBC8B8FD18821E87AC78242BEAB058EB832641EAB_RuntimeMethod_var);
	}

IL_0023:
	{
		int32_t L_5 = V_0;
		__this->___m_PrevDictHash_6 = L_5;
		V_1 = 0;
		TrackableProperty_tD94C354D884EDFB6603639EE6559289850F5E720* L_6 = __this->___m_TrackableProperty_7;
		NullCheck(L_6);
		List_1_t20E90EB749670C2DEEE278FBBA3E9DE0A00E09CC* L_7;
		L_7 = TrackableProperty_get_fields_mAC2317B77B724B6774EC2C61E8CD5B736151E185_inline(L_6, NULL);
		NullCheck(L_7);
		int32_t L_8;
		L_8 = List_1_get_Count_m65DF182EA281FF9FB3F7772C960CABC4DE30B6F6_inline(L_7, List_1_get_Count_m65DF182EA281FF9FB3F7772C960CABC4DE30B6F6_RuntimeMethod_var);
		V_2 = L_8;
		goto IL_0094;
	}

IL_0042:
	{
		TrackableProperty_tD94C354D884EDFB6603639EE6559289850F5E720* L_9 = __this->___m_TrackableProperty_7;
		NullCheck(L_9);
		List_1_t20E90EB749670C2DEEE278FBBA3E9DE0A00E09CC* L_10;
		L_10 = TrackableProperty_get_fields_mAC2317B77B724B6774EC2C61E8CD5B736151E185_inline(L_9, NULL);
		int32_t L_11 = V_1;
		NullCheck(L_10);
		FieldWithTarget_t504FF69C27D0DC4A727BE0A6CE8167EC2A967448* L_12;
		L_12 = List_1_get_Item_mEEC1E2184F9386280BF8617077CC0F6AED7EE26F(L_10, L_11, List_1_get_Item_mEEC1E2184F9386280BF8617077CC0F6AED7EE26F_RuntimeMethod_var);
		V_3 = L_12;
		FieldWithTarget_t504FF69C27D0DC4A727BE0A6CE8167EC2A967448* L_13 = V_3;
		NullCheck(L_13);
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_14;
		L_14 = FieldWithTarget_get_target_m52EE4805B935E272E67F8EAC8B9C96B31BDE4FD1_inline(L_13, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_15;
		L_15 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_14, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (L_15)
		{
			goto IL_0070;
		}
	}
	{
		FieldWithTarget_t504FF69C27D0DC4A727BE0A6CE8167EC2A967448* L_16 = V_3;
		NullCheck(L_16);
		bool L_17;
		L_17 = FieldWithTarget_get_doStatic_m2697393C3475C7D5CEC0E3DEF64A10F89B150DC2_inline(L_16, NULL);
		if (!L_17)
		{
			goto IL_0090;
		}
	}

IL_0070:
	{
		FieldWithTarget_t504FF69C27D0DC4A727BE0A6CE8167EC2A967448* L_18 = V_3;
		NullCheck(L_18);
		RuntimeObject* L_19;
		L_19 = FieldWithTarget_GetValue_m8D8927E5DF419A7AAEFAA51740BD249265264C28(L_18, NULL);
		NullCheck(L_19);
		String_t* L_20;
		L_20 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_19);
		V_4 = L_20;
		Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* L_21 = __this->___m_Dict_5;
		FieldWithTarget_t504FF69C27D0DC4A727BE0A6CE8167EC2A967448* L_22 = V_3;
		NullCheck(L_22);
		String_t* L_23;
		L_23 = FieldWithTarget_get_paramName_mC678A4E0D89455CE785B0F9C74AAE7820AE6FF84_inline(L_22, NULL);
		String_t* L_24 = V_4;
		NullCheck(L_21);
		Dictionary_2_set_Item_m7CCA97075B48AFB2B97E5A072B94BC7679374341(L_21, L_23, L_24, Dictionary_2_set_Item_m7CCA97075B48AFB2B97E5A072B94BC7679374341_RuntimeMethod_var);
	}

IL_0090:
	{
		int32_t L_25 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_25, 1));
	}

IL_0094:
	{
		int32_t L_26 = V_1;
		int32_t L_27 = V_2;
		if ((((int32_t)L_26) < ((int32_t)L_27)))
		{
			goto IL_0042;
		}
	}
	{
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
// System.Void UnityEngine.Analytics.TrackableProperty::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TrackableProperty__ctor_m2F72F98BEB650F8592E0A03F856EDF0BAB691D83 (TrackableProperty_tD94C354D884EDFB6603639EE6559289850F5E720* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Collections.Generic.List`1<UnityEngine.Analytics.TrackableProperty/FieldWithTarget> UnityEngine.Analytics.TrackableProperty::get_fields()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_t20E90EB749670C2DEEE278FBBA3E9DE0A00E09CC* TrackableProperty_get_fields_mAC2317B77B724B6774EC2C61E8CD5B736151E185 (TrackableProperty_tD94C354D884EDFB6603639EE6559289850F5E720* __this, const RuntimeMethod* method) 
{
	{
		List_1_t20E90EB749670C2DEEE278FBBA3E9DE0A00E09CC* L_0 = __this->___m_Fields_1;
		return L_0;
	}
}
// System.Void UnityEngine.Analytics.TrackableProperty::set_fields(System.Collections.Generic.List`1<UnityEngine.Analytics.TrackableProperty/FieldWithTarget>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TrackableProperty_set_fields_m6A98CFC1A9D474F9E5D7E58DCC395935870A2FF6 (TrackableProperty_tD94C354D884EDFB6603639EE6559289850F5E720* __this, List_1_t20E90EB749670C2DEEE278FBBA3E9DE0A00E09CC* ___value0, const RuntimeMethod* method) 
{
	{
		List_1_t20E90EB749670C2DEEE278FBBA3E9DE0A00E09CC* L_0 = ___value0;
		__this->___m_Fields_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_Fields_1), (void*)L_0);
		return;
	}
}
// System.Int32 UnityEngine.Analytics.TrackableProperty::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t TrackableProperty_GetHashCode_mE1328E9A7AD9FFBD9E4608E8B0DE354AC2827959 (TrackableProperty_tD94C354D884EDFB6603639EE6559289850F5E720* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_m41CE57EEFF33375A4FE7015A93712DADE5183B92_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_m81CF8F1BD0C690D8A792D559CEF2A22502292685_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_mB352E1B59DC4B99A9C23DC1082BBABECAD549C2E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_mD366F6A991F5EA2D00D0E13933213F743D76B5C8_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	FieldWithTarget_t504FF69C27D0DC4A727BE0A6CE8167EC2A967448* V_1 = NULL;
	Enumerator_tB497C5B7709BD2CAFA3F994CD12CFB6F80000713 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		V_0 = ((int32_t)17);
		List_1_t20E90EB749670C2DEEE278FBBA3E9DE0A00E09CC* L_0 = __this->___m_Fields_1;
		NullCheck(L_0);
		Enumerator_tB497C5B7709BD2CAFA3F994CD12CFB6F80000713 L_1;
		L_1 = List_1_GetEnumerator_mD366F6A991F5EA2D00D0E13933213F743D76B5C8(L_0, List_1_GetEnumerator_mD366F6A991F5EA2D00D0E13933213F743D76B5C8_RuntimeMethod_var);
		V_2 = L_1;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_003e:
			{// begin finally (depth: 1)
				Enumerator_Dispose_m41CE57EEFF33375A4FE7015A93712DADE5183B92((&V_2), Enumerator_Dispose_m41CE57EEFF33375A4FE7015A93712DADE5183B92_RuntimeMethod_var);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_002d_1;
			}

IL_0014_1:
			{
				FieldWithTarget_t504FF69C27D0DC4A727BE0A6CE8167EC2A967448* L_2;
				L_2 = Enumerator_get_Current_mB352E1B59DC4B99A9C23DC1082BBABECAD549C2E_inline((&V_2), Enumerator_get_Current_mB352E1B59DC4B99A9C23DC1082BBABECAD549C2E_RuntimeMethod_var);
				V_1 = L_2;
				int32_t L_3 = V_0;
				FieldWithTarget_t504FF69C27D0DC4A727BE0A6CE8167EC2A967448* L_4 = V_1;
				NullCheck(L_4);
				String_t* L_5;
				L_5 = FieldWithTarget_get_paramName_mC678A4E0D89455CE785B0F9C74AAE7820AE6FF84_inline(L_4, NULL);
				NullCheck(L_5);
				int32_t L_6;
				L_6 = VirtualFuncInvoker0< int32_t >::Invoke(2 /* System.Int32 System.Object::GetHashCode() */, L_5);
				V_0 = ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_multiply(L_3, ((int32_t)23))), L_6));
			}

IL_002d_1:
			{
				bool L_7;
				L_7 = Enumerator_MoveNext_m81CF8F1BD0C690D8A792D559CEF2A22502292685((&V_2), Enumerator_MoveNext_m81CF8F1BD0C690D8A792D559CEF2A22502292685_RuntimeMethod_var);
				if (L_7)
				{
					goto IL_0014_1;
				}
			}
			{
				goto IL_004c;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_004c:
	{
		int32_t L_8 = V_0;
		return L_8;
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
// System.Void UnityEngine.Analytics.TrackableProperty/FieldWithTarget::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FieldWithTarget__ctor_mBE589F32BAB95309EBB024FDF292B58C378C1F5F (FieldWithTarget_t504FF69C27D0DC4A727BE0A6CE8167EC2A967448* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.String UnityEngine.Analytics.TrackableProperty/FieldWithTarget::get_paramName()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* FieldWithTarget_get_paramName_mC678A4E0D89455CE785B0F9C74AAE7820AE6FF84 (FieldWithTarget_t504FF69C27D0DC4A727BE0A6CE8167EC2A967448* __this, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = __this->___m_ParamName_0;
		return L_0;
	}
}
// System.Void UnityEngine.Analytics.TrackableProperty/FieldWithTarget::set_paramName(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FieldWithTarget_set_paramName_mF66016EAC348C6F17A0C6DEE8B45751F4787C501 (FieldWithTarget_t504FF69C27D0DC4A727BE0A6CE8167EC2A967448* __this, String_t* ___value0, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = ___value0;
		__this->___m_ParamName_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_ParamName_0), (void*)L_0);
		return;
	}
}
// UnityEngine.Object UnityEngine.Analytics.TrackableProperty/FieldWithTarget::get_target()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* FieldWithTarget_get_target_m52EE4805B935E272E67F8EAC8B9C96B31BDE4FD1 (FieldWithTarget_t504FF69C27D0DC4A727BE0A6CE8167EC2A967448* __this, const RuntimeMethod* method) 
{
	{
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_0 = __this->___m_Target_1;
		return L_0;
	}
}
// System.Void UnityEngine.Analytics.TrackableProperty/FieldWithTarget::set_target(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FieldWithTarget_set_target_mE02628F282A466FD041E4CBE885D5DB0BD126615 (FieldWithTarget_t504FF69C27D0DC4A727BE0A6CE8167EC2A967448* __this, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___value0, const RuntimeMethod* method) 
{
	{
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_0 = ___value0;
		__this->___m_Target_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_Target_1), (void*)L_0);
		return;
	}
}
// System.String UnityEngine.Analytics.TrackableProperty/FieldWithTarget::get_fieldPath()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* FieldWithTarget_get_fieldPath_mEEC7C8856433AD6B29EAFDE475B9BE4908AC411E (FieldWithTarget_t504FF69C27D0DC4A727BE0A6CE8167EC2A967448* __this, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = __this->___m_FieldPath_2;
		return L_0;
	}
}
// System.Void UnityEngine.Analytics.TrackableProperty/FieldWithTarget::set_fieldPath(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FieldWithTarget_set_fieldPath_mE3DD29E2C084E9B57820C854FB5540CBCF0F2730 (FieldWithTarget_t504FF69C27D0DC4A727BE0A6CE8167EC2A967448* __this, String_t* ___value0, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = ___value0;
		__this->___m_FieldPath_2 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_FieldPath_2), (void*)L_0);
		return;
	}
}
// System.String UnityEngine.Analytics.TrackableProperty/FieldWithTarget::get_typeString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* FieldWithTarget_get_typeString_m050F5B50E158D90EE4323CF779223F221EF6C0FC (FieldWithTarget_t504FF69C27D0DC4A727BE0A6CE8167EC2A967448* __this, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = __this->___m_TypeString_3;
		return L_0;
	}
}
// System.Void UnityEngine.Analytics.TrackableProperty/FieldWithTarget::set_typeString(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FieldWithTarget_set_typeString_mED0F576590180DA02254FBFA4A4B4A6C11198CA8 (FieldWithTarget_t504FF69C27D0DC4A727BE0A6CE8167EC2A967448* __this, String_t* ___value0, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = ___value0;
		__this->___m_TypeString_3 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_TypeString_3), (void*)L_0);
		return;
	}
}
// System.Boolean UnityEngine.Analytics.TrackableProperty/FieldWithTarget::get_doStatic()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool FieldWithTarget_get_doStatic_m2697393C3475C7D5CEC0E3DEF64A10F89B150DC2 (FieldWithTarget_t504FF69C27D0DC4A727BE0A6CE8167EC2A967448* __this, const RuntimeMethod* method) 
{
	{
		bool L_0 = __this->___m_DoStatic_4;
		return L_0;
	}
}
// System.Void UnityEngine.Analytics.TrackableProperty/FieldWithTarget::set_doStatic(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FieldWithTarget_set_doStatic_m3586B010EEBB536D02EF1F4EA0987F3E380172DD (FieldWithTarget_t504FF69C27D0DC4A727BE0A6CE8167EC2A967448* __this, bool ___value0, const RuntimeMethod* method) 
{
	{
		bool L_0 = ___value0;
		__this->___m_DoStatic_4 = L_0;
		return;
	}
}
// System.String UnityEngine.Analytics.TrackableProperty/FieldWithTarget::get_staticString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* FieldWithTarget_get_staticString_m27D16732AA5BD73DBB4C477318FEE720F8545C7B (FieldWithTarget_t504FF69C27D0DC4A727BE0A6CE8167EC2A967448* __this, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = __this->___m_StaticString_5;
		return L_0;
	}
}
// System.Void UnityEngine.Analytics.TrackableProperty/FieldWithTarget::set_staticString(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FieldWithTarget_set_staticString_mE7306B288ECE5C288A0FBBE9790B74459536AA02 (FieldWithTarget_t504FF69C27D0DC4A727BE0A6CE8167EC2A967448* __this, String_t* ___value0, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = ___value0;
		__this->___m_StaticString_5 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_StaticString_5), (void*)L_0);
		return;
	}
}
// System.Object UnityEngine.Analytics.TrackableProperty/FieldWithTarget::GetValue()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* FieldWithTarget_GetValue_m8D8927E5DF419A7AAEFAA51740BD249265264C28 (FieldWithTarget_t504FF69C27D0DC4A727BE0A6CE8167EC2A967448* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	String_t* V_1 = NULL;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* V_2 = NULL;
	int32_t V_3 = 0;
	Type_t* V_4 = NULL;
	PropertyInfo_t* V_5 = NULL;
	FieldInfo_t* V_6 = NULL;
	{
		bool L_0 = __this->___m_DoStatic_4;
		if (!L_0)
		{
			goto IL_0012;
		}
	}
	{
		String_t* L_1 = __this->___m_StaticString_5;
		return L_1;
	}

IL_0012:
	{
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_2 = __this->___m_Target_1;
		V_0 = L_2;
		String_t* L_3 = __this->___m_FieldPath_2;
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_4 = (CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB*)(CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB*)SZArrayNew(CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB_il2cpp_TypeInfo_var, (uint32_t)1);
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_5 = L_4;
		NullCheck(L_5);
		(L_5)->SetAt(static_cast<il2cpp_array_size_t>(0), (Il2CppChar)((int32_t)46));
		NullCheck(L_3);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_6;
		L_6 = String_Split_m101D35FEC86371D2BB4E3480F6F896880093B2E9(L_3, L_5, NULL);
		V_2 = L_6;
		V_3 = 0;
		goto IL_0094;
	}

IL_0037:
	{
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_7 = V_2;
		int32_t L_8 = V_3;
		NullCheck(L_7);
		int32_t L_9 = L_8;
		String_t* L_10 = (L_7)->GetAt(static_cast<il2cpp_array_size_t>(L_9));
		V_1 = L_10;
		RuntimeObject* L_11 = V_0;
		NullCheck(L_11);
		Type_t* L_12;
		L_12 = Object_GetType_mE10A8FC1E57F3DF29972CCBC026C2DC3942263B3(L_11, NULL);
		V_4 = L_12;
		Type_t* L_13 = V_4;
		String_t* L_14 = V_1;
		NullCheck(L_13);
		PropertyInfo_t* L_15;
		L_15 = Type_GetProperty_mD183124FC8A89121E8368058B327A7750B14281D(L_13, L_14, NULL);
		V_5 = L_15;
		Type_t* L_16 = V_4;
		String_t* L_17 = V_1;
		NullCheck(L_16);
		FieldInfo_t* L_18;
		L_18 = Type_GetField_m0BF55B1A27A1B6AB6D3477E7F9E1CF2A3451E1E0(L_16, L_17, NULL);
		V_6 = L_18;
		PropertyInfo_t* L_19 = V_5;
		bool L_20;
		L_20 = PropertyInfo_op_Inequality_mE75A4F14CC678D8A670730FBD4338C718CACB51B(L_19, (PropertyInfo_t*)NULL, NULL);
		if (!L_20)
		{
			goto IL_0073;
		}
	}
	{
		PropertyInfo_t* L_21 = V_5;
		RuntimeObject* L_22 = V_0;
		NullCheck(L_21);
		RuntimeObject* L_23;
		L_23 = VirtualFuncInvoker2< RuntimeObject*, RuntimeObject*, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* >::Invoke(24 /* System.Object System.Reflection.PropertyInfo::GetValue(System.Object,System.Object[]) */, L_21, L_22, (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)NULL);
		V_0 = L_23;
		goto IL_0090;
	}

IL_0073:
	{
		FieldInfo_t* L_24 = V_6;
		bool L_25;
		L_25 = FieldInfo_op_Inequality_m95789A98E646494987E66A9E4188DCA86185066B(L_24, (FieldInfo_t*)NULL, NULL);
		if (!L_25)
		{
			goto IL_008e;
		}
	}
	{
		FieldInfo_t* L_26 = V_6;
		RuntimeObject* L_27 = V_0;
		NullCheck(L_26);
		RuntimeObject* L_28;
		L_28 = VirtualFuncInvoker1< RuntimeObject*, RuntimeObject* >::Invoke(25 /* System.Object System.Reflection.FieldInfo::GetValue(System.Object) */, L_26, L_27);
		V_0 = L_28;
		goto IL_0090;
	}

IL_008e:
	{
		return NULL;
	}

IL_0090:
	{
		int32_t L_29 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_29, 1));
	}

IL_0094:
	{
		int32_t L_30 = V_3;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_31 = V_2;
		NullCheck(L_31);
		if ((((int32_t)L_30) < ((int32_t)((int32_t)(((RuntimeArray*)L_31)->max_length)))))
		{
			goto IL_0037;
		}
	}
	{
		RuntimeObject* L_32 = V_0;
		return L_32;
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
// System.Void UnityEngine.Analytics.TriggerListContainer::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TriggerListContainer__ctor_m4BB88B3C7879CDF43C619115785ACC6FD16C9BD3 (TriggerListContainer_t05237759E7AFB582C672447CB1FBBF079AEE03C9* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m5DA4A556E2988745972B20829116B07F3AB5C599_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t3585B91917CA5C4854A4496D5F41B409BCE66B30_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		List_1_t3585B91917CA5C4854A4496D5F41B409BCE66B30* L_0 = (List_1_t3585B91917CA5C4854A4496D5F41B409BCE66B30*)il2cpp_codegen_object_new(List_1_t3585B91917CA5C4854A4496D5F41B409BCE66B30_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		List_1__ctor_m5DA4A556E2988745972B20829116B07F3AB5C599(L_0, List_1__ctor_m5DA4A556E2988745972B20829116B07F3AB5C599_RuntimeMethod_var);
		__this->___m_Rules_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_Rules_0), (void*)L_0);
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Collections.Generic.List`1<UnityEngine.Analytics.TriggerRule> UnityEngine.Analytics.TriggerListContainer::get_rules()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_t3585B91917CA5C4854A4496D5F41B409BCE66B30* TriggerListContainer_get_rules_mC10082C97197C553D702943A2A1F3CEB3A120074 (TriggerListContainer_t05237759E7AFB582C672447CB1FBBF079AEE03C9* __this, const RuntimeMethod* method) 
{
	{
		List_1_t3585B91917CA5C4854A4496D5F41B409BCE66B30* L_0 = __this->___m_Rules_0;
		return L_0;
	}
}
// System.Void UnityEngine.Analytics.TriggerListContainer::set_rules(System.Collections.Generic.List`1<UnityEngine.Analytics.TriggerRule>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TriggerListContainer_set_rules_mC08CD096BEC07F04FEE29DB47FF10ED544C6F72F (TriggerListContainer_t05237759E7AFB582C672447CB1FBBF079AEE03C9* __this, List_1_t3585B91917CA5C4854A4496D5F41B409BCE66B30* ___value0, const RuntimeMethod* method) 
{
	{
		List_1_t3585B91917CA5C4854A4496D5F41B409BCE66B30* L_0 = ___value0;
		__this->___m_Rules_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_Rules_0), (void*)L_0);
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
// System.Void UnityEngine.Analytics.EventTrigger::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EventTrigger__ctor_mF533E0363CF00A617CF02B5A3D53E0CE15F40CA4 (EventTrigger_t85ABB3C787BF555580DE542822F8E973718C5791* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TriggerListContainer_t05237759E7AFB582C672447CB1FBBF079AEE03C9_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		__this->___m_IsTriggerExpanded_0 = (bool)1;
		__this->___m_InitTime_6 = (5.0f);
		__this->___m_RepeatTime_7 = (5.0f);
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		TriggerListContainer_t05237759E7AFB582C672447CB1FBBF079AEE03C9* L_0 = (TriggerListContainer_t05237759E7AFB582C672447CB1FBBF079AEE03C9*)il2cpp_codegen_object_new(TriggerListContainer_t05237759E7AFB582C672447CB1FBBF079AEE03C9_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		TriggerListContainer__ctor_m4BB88B3C7879CDF43C619115785ACC6FD16C9BD3(L_0, NULL);
		__this->___m_Rules_4 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_Rules_4), (void*)L_0);
		return;
	}
}
// UnityEngine.Analytics.TriggerType UnityEngine.Analytics.EventTrigger::get_triggerType()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t EventTrigger_get_triggerType_m97FA977005FBC481D4937BA11E1EE84A8175A31C (EventTrigger_t85ABB3C787BF555580DE542822F8E973718C5791* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___m_Type_1;
		return L_0;
	}
}
// UnityEngine.Analytics.TriggerLifecycleEvent UnityEngine.Analytics.EventTrigger::get_lifecycleEvent()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t EventTrigger_get_lifecycleEvent_mC6629116356D0599B91AECDD775C0E8EE0F66963 (EventTrigger_t85ABB3C787BF555580DE542822F8E973718C5791* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___m_LifecycleEvent_2;
		return L_0;
	}
}
// System.Single UnityEngine.Analytics.EventTrigger::get_initTime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float EventTrigger_get_initTime_m7CD123F71FD55CC12D417521C70038CAEA37339B (EventTrigger_t85ABB3C787BF555580DE542822F8E973718C5791* __this, const RuntimeMethod* method) 
{
	{
		float L_0 = __this->___m_InitTime_6;
		return L_0;
	}
}
// System.Void UnityEngine.Analytics.EventTrigger::set_initTime(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EventTrigger_set_initTime_mD26A3E2DDF73DF647EBA7FFDCBB96D75A8FB0972 (EventTrigger_t85ABB3C787BF555580DE542822F8E973718C5791* __this, float ___value0, const RuntimeMethod* method) 
{
	{
		float L_0 = ___value0;
		__this->___m_InitTime_6 = L_0;
		return;
	}
}
// System.Single UnityEngine.Analytics.EventTrigger::get_repeatTime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float EventTrigger_get_repeatTime_mF1D62DF10BED6C110BE2FB2DA3E69E25E4CCBF1F (EventTrigger_t85ABB3C787BF555580DE542822F8E973718C5791* __this, const RuntimeMethod* method) 
{
	{
		float L_0 = __this->___m_RepeatTime_7;
		return L_0;
	}
}
// System.Void UnityEngine.Analytics.EventTrigger::set_repeatTime(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EventTrigger_set_repeatTime_mC8E807592AD7C92E97B505347CE7991BBAAF28BD (EventTrigger_t85ABB3C787BF555580DE542822F8E973718C5791* __this, float ___value0, const RuntimeMethod* method) 
{
	{
		float L_0 = ___value0;
		__this->___m_RepeatTime_7 = L_0;
		return;
	}
}
// System.Int32 UnityEngine.Analytics.EventTrigger::get_repetitions()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t EventTrigger_get_repetitions_mC09AFA3A46F74144A6CE7982248FC794C5015B2B (EventTrigger_t85ABB3C787BF555580DE542822F8E973718C5791* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___m_Repetitions_8;
		return L_0;
	}
}
// System.Void UnityEngine.Analytics.EventTrigger::set_repetitions(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EventTrigger_set_repetitions_m918991D986DD756250D1CBD67D919FA0A5E43933 (EventTrigger_t85ABB3C787BF555580DE542822F8E973718C5791* __this, int32_t ___value0, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___value0;
		__this->___m_Repetitions_8 = L_0;
		return;
	}
}
// System.Void UnityEngine.Analytics.EventTrigger::AddRule()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EventTrigger_AddRule_mF9F07B09F87E5975BA42C76F1C2DAF4B7A1537E6 (EventTrigger_t85ABB3C787BF555580DE542822F8E973718C5791* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_mE0944F5B3F6E51E82C3C8C04D5FCE7CC51EFA415_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TriggerRule_tB684F4AC495F20C6A8BA52384547780771817E4E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	TriggerRule_tB684F4AC495F20C6A8BA52384547780771817E4E* V_0 = NULL;
	{
		TriggerRule_tB684F4AC495F20C6A8BA52384547780771817E4E* L_0 = (TriggerRule_tB684F4AC495F20C6A8BA52384547780771817E4E*)il2cpp_codegen_object_new(TriggerRule_tB684F4AC495F20C6A8BA52384547780771817E4E_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		TriggerRule__ctor_mF693D176A070734760C94C083A34456E7A595544(L_0, NULL);
		V_0 = L_0;
		TriggerListContainer_t05237759E7AFB582C672447CB1FBBF079AEE03C9* L_1 = __this->___m_Rules_4;
		NullCheck(L_1);
		List_1_t3585B91917CA5C4854A4496D5F41B409BCE66B30* L_2;
		L_2 = TriggerListContainer_get_rules_mC10082C97197C553D702943A2A1F3CEB3A120074_inline(L_1, NULL);
		TriggerRule_tB684F4AC495F20C6A8BA52384547780771817E4E* L_3 = V_0;
		NullCheck(L_2);
		List_1_Add_mE0944F5B3F6E51E82C3C8C04D5FCE7CC51EFA415_inline(L_2, L_3, List_1_Add_mE0944F5B3F6E51E82C3C8C04D5FCE7CC51EFA415_RuntimeMethod_var);
		return;
	}
}
// System.Void UnityEngine.Analytics.EventTrigger::RemoveRule(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EventTrigger_RemoveRule_m0A70FD4E5083A205EE1B9F506B22D28B63C01B92 (EventTrigger_t85ABB3C787BF555580DE542822F8E973718C5791* __this, int32_t ___index0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_RemoveAt_mE6E7E96156505BA81D9D441FCFB21EC1E84DBA1A_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		TriggerListContainer_t05237759E7AFB582C672447CB1FBBF079AEE03C9* L_0 = __this->___m_Rules_4;
		NullCheck(L_0);
		List_1_t3585B91917CA5C4854A4496D5F41B409BCE66B30* L_1;
		L_1 = TriggerListContainer_get_rules_mC10082C97197C553D702943A2A1F3CEB3A120074_inline(L_0, NULL);
		int32_t L_2 = ___index0;
		NullCheck(L_1);
		List_1_RemoveAt_mE6E7E96156505BA81D9D441FCFB21EC1E84DBA1A(L_1, L_2, List_1_RemoveAt_mE6E7E96156505BA81D9D441FCFB21EC1E84DBA1A_RuntimeMethod_var);
		return;
	}
}
// System.Boolean UnityEngine.Analytics.EventTrigger::Test(UnityEngine.GameObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool EventTrigger_Test_mAAD519892E8E884B177E7853EA30AD20EF94E5EE (EventTrigger_t85ABB3C787BF555580DE542822F8E973718C5791* __this, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___gameObject0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_m2610B9DB8629C6834CFDECAD1BAAC3FECEFEA935_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_m6ECC9ED45B697379B5EA6AEC8B345D856D1AC9AB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_mD61C743655B8013D8FCBF85FF00A6AD791180B7E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_m6E06038B7A99366EC2A623827FA9A561F7BF36B1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3A57AAFB3C82B30F7E8F76A4FAB0A711CE7DC20F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5C892507F81350BC93DF9EE399E30E4AF8F03514);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	TriggerRule_tB684F4AC495F20C6A8BA52384547780771817E4E* V_3 = NULL;
	Enumerator_tA2A4569CD78EC2E58E591972CAF75AC13181D5B1 V_4;
	memset((&V_4), 0, sizeof(V_4));
	bool V_5 = false;
	String_t* V_6 = NULL;
	int32_t V_7 = 0;
	int32_t G_B12_0 = 0;
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* G_B12_1 = NULL;
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* G_B12_2 = NULL;
	String_t* G_B12_3 = NULL;
	int32_t G_B11_0 = 0;
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* G_B11_1 = NULL;
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* G_B11_2 = NULL;
	String_t* G_B11_3 = NULL;
	String_t* G_B13_0 = NULL;
	int32_t G_B13_1 = 0;
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* G_B13_2 = NULL;
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* G_B13_3 = NULL;
	String_t* G_B13_4 = NULL;
	{
		bool L_0 = __this->___m_ApplyRules_3;
		if (L_0)
		{
			goto IL_000d;
		}
	}
	{
		return (bool)1;
	}

IL_000d:
	{
		int32_t L_1;
		L_1 = EventTrigger_get_repetitions_mC09AFA3A46F74144A6CE7982248FC794C5015B2B_inline(__this, NULL);
		if ((((int32_t)L_1) <= ((int32_t)0)))
		{
			goto IL_002c;
		}
	}
	{
		int32_t L_2 = __this->___repetitionCount_9;
		int32_t L_3;
		L_3 = EventTrigger_get_repetitions_mC09AFA3A46F74144A6CE7982248FC794C5015B2B_inline(__this, NULL);
		if ((((int32_t)L_2) < ((int32_t)L_3)))
		{
			goto IL_002c;
		}
	}
	{
		return (bool)0;
	}

IL_002c:
	{
		V_0 = (bool)0;
		V_1 = 0;
		V_2 = 0;
		TriggerListContainer_t05237759E7AFB582C672447CB1FBBF079AEE03C9* L_4 = __this->___m_Rules_4;
		NullCheck(L_4);
		List_1_t3585B91917CA5C4854A4496D5F41B409BCE66B30* L_5;
		L_5 = TriggerListContainer_get_rules_mC10082C97197C553D702943A2A1F3CEB3A120074_inline(L_4, NULL);
		NullCheck(L_5);
		Enumerator_tA2A4569CD78EC2E58E591972CAF75AC13181D5B1 L_6;
		L_6 = List_1_GetEnumerator_m6E06038B7A99366EC2A623827FA9A561F7BF36B1(L_5, List_1_GetEnumerator_m6E06038B7A99366EC2A623827FA9A561F7BF36B1_RuntimeMethod_var);
		V_4 = L_6;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0125:
			{// begin finally (depth: 1)
				Enumerator_Dispose_m2610B9DB8629C6834CFDECAD1BAAC3FECEFEA935((&V_4), Enumerator_Dispose_m2610B9DB8629C6834CFDECAD1BAAC3FECEFEA935_RuntimeMethod_var);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_0114_1;
			}

IL_0049_1:
			{
				TriggerRule_tB684F4AC495F20C6A8BA52384547780771817E4E* L_7;
				L_7 = Enumerator_get_Current_mD61C743655B8013D8FCBF85FF00A6AD791180B7E_inline((&V_4), Enumerator_get_Current_mD61C743655B8013D8FCBF85FF00A6AD791180B7E_RuntimeMethod_var);
				V_3 = L_7;
				int32_t L_8 = V_2;
				V_2 = ((int32_t)il2cpp_codegen_add(L_8, 1));
				TriggerRule_tB684F4AC495F20C6A8BA52384547780771817E4E* L_9 = V_3;
				NullCheck(L_9);
				bool L_10;
				L_10 = TriggerRule_Test_m2FD1BEAE814D507AC6F62A20264F4B7B91E0898C(L_9, (&V_5), (&V_6), NULL);
				if (!L_10)
				{
					goto IL_006d_1;
				}
			}
			{
				int32_t L_11 = V_1;
				V_1 = ((int32_t)il2cpp_codegen_add(L_11, 1));
				goto IL_00b7_1;
			}

IL_006d_1:
			{
				bool L_12 = V_5;
				if (!L_12)
				{
					goto IL_00b7_1;
				}
			}
			{
				ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_13 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)3);
				ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_14 = L_13;
				int32_t L_15 = V_2;
				int32_t L_16 = L_15;
				RuntimeObject* L_17 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_16);
				NullCheck(L_14);
				ArrayElementTypeCheck (L_14, L_17);
				(L_14)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_17);
				ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_18 = L_14;
				String_t* L_19 = V_6;
				NullCheck(L_18);
				ArrayElementTypeCheck (L_18, L_19);
				(L_18)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject*)L_19);
				ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_20 = L_18;
				GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_21 = ___gameObject0;
				il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
				bool L_22;
				L_22 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_21, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
				G_B11_0 = 2;
				G_B11_1 = L_20;
				G_B11_2 = L_20;
				G_B11_3 = _stringLiteral3A57AAFB3C82B30F7E8F76A4FAB0A711CE7DC20F;
				if (!L_22)
				{
					G_B12_0 = 2;
					G_B12_1 = L_20;
					G_B12_2 = L_20;
					G_B12_3 = _stringLiteral3A57AAFB3C82B30F7E8F76A4FAB0A711CE7DC20F;
					goto IL_00a1_1;
				}
			}
			{
				G_B13_0 = ((String_t*)(NULL));
				G_B13_1 = G_B11_0;
				G_B13_2 = G_B11_1;
				G_B13_3 = G_B11_2;
				G_B13_4 = G_B11_3;
				goto IL_00b1_1;
			}

IL_00a1_1:
			{
				GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_23 = ___gameObject0;
				NullCheck(L_23);
				String_t* L_24;
				L_24 = Object_get_name_mAC2F6B897CF1303BA4249B4CB55271AFACBB6392(L_23, NULL);
				String_t* L_25;
				L_25 = String_Format_mA8DBB4C2516B9723C5A41E6CB1E2FAF4BBE96DD8(_stringLiteral5C892507F81350BC93DF9EE399E30E4AF8F03514, L_24, NULL);
				G_B13_0 = L_25;
				G_B13_1 = G_B12_0;
				G_B13_2 = G_B12_1;
				G_B13_3 = G_B12_2;
				G_B13_4 = G_B12_3;
			}

IL_00b1_1:
			{
				NullCheck(G_B13_2);
				ArrayElementTypeCheck (G_B13_2, G_B13_0);
				(G_B13_2)->SetAt(static_cast<il2cpp_array_size_t>(G_B13_1), (RuntimeObject*)G_B13_0);
				il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
				Debug_LogWarningFormat_mD8224DEBCB6050F4E2BF55151F0C6A29B87DEFBC(G_B13_4, G_B13_3, NULL);
			}

IL_00b7_1:
			{
				int32_t L_26 = __this->___m_TriggerBool_5;
				V_7 = L_26;
				int32_t L_27 = V_7;
				if (!L_27)
				{
					goto IL_00db_1;
				}
			}
			{
				int32_t L_28 = V_7;
				if ((((int32_t)L_28) == ((int32_t)2)))
				{
					goto IL_00ee_1;
				}
			}
			{
				int32_t L_29 = V_7;
				if ((((int32_t)L_29) == ((int32_t)1)))
				{
					goto IL_0101_1;
				}
			}
			{
				goto IL_0114_1;
			}

IL_00db_1:
			{
				int32_t L_30 = V_1;
				int32_t L_31 = V_2;
				if ((((int32_t)L_30) >= ((int32_t)L_31)))
				{
					goto IL_00e9_1;
				}
			}
			{
				V_0 = (bool)0;
				goto IL_0114_1;
			}

IL_00e9_1:
			{
				goto IL_0114_1;
			}

IL_00ee_1:
			{
				int32_t L_32 = V_1;
				if ((((int32_t)L_32) <= ((int32_t)0)))
				{
					goto IL_00fc_1;
				}
			}
			{
				V_0 = (bool)0;
				goto IL_0114_1;
			}

IL_00fc_1:
			{
				goto IL_0114_1;
			}

IL_0101_1:
			{
				int32_t L_33 = V_1;
				if ((((int32_t)L_33) <= ((int32_t)0)))
				{
					goto IL_010f_1;
				}
			}
			{
				V_0 = (bool)1;
				goto IL_0114_1;
			}

IL_010f_1:
			{
				goto IL_0114_1;
			}

IL_0114_1:
			{
				bool L_34;
				L_34 = Enumerator_MoveNext_m6ECC9ED45B697379B5EA6AEC8B345D856D1AC9AB((&V_4), Enumerator_MoveNext_m6ECC9ED45B697379B5EA6AEC8B345D856D1AC9AB_RuntimeMethod_var);
				if (L_34)
				{
					goto IL_0049_1;
				}
			}
			{
				goto IL_0133;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0133:
	{
		int32_t L_35 = __this->___m_TriggerBool_5;
		if (L_35)
		{
			goto IL_0145;
		}
	}
	{
		int32_t L_36 = V_1;
		int32_t L_37 = V_2;
		if ((((int32_t)L_36) == ((int32_t)L_37)))
		{
			goto IL_0157;
		}
	}

IL_0145:
	{
		int32_t L_38 = __this->___m_TriggerBool_5;
		if ((!(((uint32_t)L_38) == ((uint32_t)2))))
		{
			goto IL_0159;
		}
	}
	{
		int32_t L_39 = V_1;
		if (L_39)
		{
			goto IL_0159;
		}
	}

IL_0157:
	{
		V_0 = (bool)1;
	}

IL_0159:
	{
		int32_t L_40;
		L_40 = EventTrigger_get_repetitions_mC09AFA3A46F74144A6CE7982248FC794C5015B2B_inline(__this, NULL);
		if ((((int32_t)L_40) <= ((int32_t)0)))
		{
			goto IL_0179;
		}
	}
	{
		bool L_41 = V_0;
		if (!L_41)
		{
			goto IL_0179;
		}
	}
	{
		int32_t L_42 = __this->___repetitionCount_9;
		__this->___repetitionCount_9 = ((int32_t)il2cpp_codegen_add(L_42, 1));
	}

IL_0179:
	{
		bool L_43 = V_0;
		return L_43;
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
void OnTrigger_Invoke_m0F79C5298DFB44FF0005F1F10095F5CF07327F4C_Multicast(OnTrigger_t92557FB8650E42F9EA346F70E6763F95A0CB9AE8* __this, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		OnTrigger_t92557FB8650E42F9EA346F70E6763F95A0CB9AE8* currentDelegate = reinterpret_cast<OnTrigger_t92557FB8650E42F9EA346F70E6763F95A0CB9AE8*>(delegatesToInvoke[i]);
		typedef void (*FunctionPointerType) (RuntimeObject*, const RuntimeMethod*);
		((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
}
void OnTrigger_Invoke_m0F79C5298DFB44FF0005F1F10095F5CF07327F4C_OpenInst(OnTrigger_t92557FB8650E42F9EA346F70E6763F95A0CB9AE8* __this, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(method);
}
void OnTrigger_Invoke_m0F79C5298DFB44FF0005F1F10095F5CF07327F4C_OpenStatic(OnTrigger_t92557FB8650E42F9EA346F70E6763F95A0CB9AE8* __this, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(method);
}
void OnTrigger_Invoke_m0F79C5298DFB44FF0005F1F10095F5CF07327F4C_OpenStaticInvoker(OnTrigger_t92557FB8650E42F9EA346F70E6763F95A0CB9AE8* __this, const RuntimeMethod* method)
{
	InvokerActionInvoker0::Invoke(__this->___method_ptr_0, method, NULL);
}
void OnTrigger_Invoke_m0F79C5298DFB44FF0005F1F10095F5CF07327F4C_ClosedStaticInvoker(OnTrigger_t92557FB8650E42F9EA346F70E6763F95A0CB9AE8* __this, const RuntimeMethod* method)
{
	InvokerActionInvoker1< RuntimeObject* >::Invoke(__this->___method_ptr_0, method, NULL, __this->___m_target_2);
}
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_OnTrigger_t92557FB8650E42F9EA346F70E6763F95A0CB9AE8 (OnTrigger_t92557FB8650E42F9EA346F70E6763F95A0CB9AE8* __this, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)();
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_reverse_pinvoke_function_ptr(__this));
	// Native function invocation
	il2cppPInvokeFunc();

}
// System.Void UnityEngine.Analytics.EventTrigger/OnTrigger::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OnTrigger__ctor_m28D361A92B54A19DA3B32CD6869B7FAFA9276975 (OnTrigger_t92557FB8650E42F9EA346F70E6763F95A0CB9AE8* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) 
{
	__this->___method_ptr_0 = il2cpp_codegen_get_virtual_call_method_pointer((RuntimeMethod*)___method1);
	__this->___method_3 = ___method1;
	__this->___m_target_2 = ___object0;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target_2), (void*)___object0);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___method1);
	__this->___method_code_6 = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___method1))
	{
		bool isOpen = parameterCount == 0;
		if (il2cpp_codegen_call_method_via_invoker((RuntimeMethod*)___method1))
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&OnTrigger_Invoke_m0F79C5298DFB44FF0005F1F10095F5CF07327F4C_OpenStaticInvoker;
			else
				__this->___invoke_impl_1 = (intptr_t)&OnTrigger_Invoke_m0F79C5298DFB44FF0005F1F10095F5CF07327F4C_ClosedStaticInvoker;
		else
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&OnTrigger_Invoke_m0F79C5298DFB44FF0005F1F10095F5CF07327F4C_OpenStatic;
			else
				{
					__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
					__this->___method_code_6 = (intptr_t)__this->___m_target_2;
				}
	}
	else
	{
		if (___object0 == NULL)
			il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
		__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
		__this->___method_code_6 = (intptr_t)__this->___m_target_2;
	}
	__this->___extra_arg_5 = (intptr_t)&OnTrigger_Invoke_m0F79C5298DFB44FF0005F1F10095F5CF07327F4C_Multicast;
}
// System.Void UnityEngine.Analytics.EventTrigger/OnTrigger::Invoke()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OnTrigger_Invoke_m0F79C5298DFB44FF0005F1F10095F5CF07327F4C (OnTrigger_t92557FB8650E42F9EA346F70E6763F95A0CB9AE8* __this, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
// System.IAsyncResult UnityEngine.Analytics.EventTrigger/OnTrigger::BeginInvoke(System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* OnTrigger_BeginInvoke_m8552396D675324393D04DAF0B747AF4F14A0B014 (OnTrigger_t92557FB8650E42F9EA346F70E6763F95A0CB9AE8* __this, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___callback0, RuntimeObject* ___object1, const RuntimeMethod* method) 
{
	void *__d_args[1] = {0};
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback0, (RuntimeObject*)___object1);
}
// System.Void UnityEngine.Analytics.EventTrigger/OnTrigger::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OnTrigger_EndInvoke_m20D3FCE7127334348AC82F86C033725A11584ECE (OnTrigger_t92557FB8650E42F9EA346F70E6763F95A0CB9AE8* __this, RuntimeObject* ___result0, const RuntimeMethod* method) 
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
// System.Void UnityEngine.Analytics.TrackableTrigger::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TrackableTrigger__ctor_m171D2FEFE9B3CA721AABF9E72355332FCCC8655E (TrackableTrigger_t034420C16AA820B759DDF89D1E1B9BD1FC3355A6* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
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
// System.Void UnityEngine.Analytics.TriggerMethod::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TriggerMethod__ctor_m8A67C9041C23F3459B26A000ACCE0A44FFC8C84E (TriggerMethod_tBC1D8594D5A8902E70A147C107EE646EDEE4EE8B* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
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
// System.Void UnityEngine.Analytics.TriggerRule::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TriggerRule__ctor_mF693D176A070734760C94C083A34456E7A595544 (TriggerRule_tB684F4AC495F20C6A8BA52384547780771817E4E* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Boolean UnityEngine.Analytics.TriggerRule::Test()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TriggerRule_Test_m28CBFB986892BF1F276C82D0C2F24028CF204678 (TriggerRule_tB684F4AC495F20C6A8BA52384547780771817E4E* __this, const RuntimeMethod* method) 
{
	bool V_0 = false;
	String_t* V_1 = NULL;
	{
		bool L_0;
		L_0 = TriggerRule_Test_m2FD1BEAE814D507AC6F62A20264F4B7B91E0898C(__this, (&V_0), (&V_1), NULL);
		return L_0;
	}
}
// System.Boolean UnityEngine.Analytics.TriggerRule::Test(System.Boolean&,System.String&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TriggerRule_Test_m2FD1BEAE814D507AC6F62A20264F4B7B91E0898C (TriggerRule_tB684F4AC495F20C6A8BA52384547780771817E4E* __this, bool* ___error0, String_t** ___message1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral384565B8399EC9A224FB52B7078096010121FA9F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9817066B6D9CACF92B641838E838154CE32619CF);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC39D56A159A8B99DD2EADD3DE95D99C7E8259D1A);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	String_t* V_1 = NULL;
	{
		bool* L_0 = ___error0;
		*((int8_t*)L_0) = (int8_t)0;
		String_t** L_1 = ___message1;
		*((RuntimeObject**)L_1) = (RuntimeObject*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject**)L_1, (void*)(RuntimeObject*)NULL);
		TrackableField_t6DC55D40EE374F2FFA111344BC840FA36CF76D7F* L_2 = __this->___m_Target_0;
		if (!L_2)
		{
			goto IL_0021;
		}
	}
	{
		TrackableField_t6DC55D40EE374F2FFA111344BC840FA36CF76D7F* L_3 = __this->___m_Target_0;
		NullCheck(L_3);
		RuntimeObject* L_4;
		L_4 = TrackableField_GetValue_mC5ECCA29B21EDF39021816EBF0F82E1FC905566D(L_3, NULL);
		if (L_4)
		{
			goto IL_002d;
		}
	}

IL_0021:
	{
		bool* L_5 = ___error0;
		*((int8_t*)L_5) = (int8_t)1;
		String_t** L_6 = ___message1;
		*((RuntimeObject**)L_6) = (RuntimeObject*)_stringLiteral9817066B6D9CACF92B641838E838154CE32619CF;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject**)L_6, (void*)(RuntimeObject*)_stringLiteral9817066B6D9CACF92B641838E838154CE32619CF);
		return (bool)0;
	}

IL_002d:
	{
		ValueProperty_tB152A92DD3101A108D3C41589959AB70AAD68436* L_7 = __this->___m_Value_2;
		if (!L_7)
		{
			goto IL_0058;
		}
	}
	{
		ValueProperty_tB152A92DD3101A108D3C41589959AB70AAD68436* L_8 = __this->___m_Value_2;
		NullCheck(L_8);
		TrackableField_t6DC55D40EE374F2FFA111344BC840FA36CF76D7F* L_9;
		L_9 = ValueProperty_get_target_mFF245D412287A49C6FEB5FA53AC422765321F5B7_inline(L_8, NULL);
		if (!L_9)
		{
			goto IL_0058;
		}
	}
	{
		ValueProperty_tB152A92DD3101A108D3C41589959AB70AAD68436* L_10 = __this->___m_Value_2;
		NullCheck(L_10);
		String_t* L_11;
		L_11 = ValueProperty_get_propertyValue_mFC1DBF8E2C72655224C6E30E2FCEF41B3E19B1F5(L_10, NULL);
		if (L_11)
		{
			goto IL_0064;
		}
	}

IL_0058:
	{
		bool* L_12 = ___error0;
		*((int8_t*)L_12) = (int8_t)1;
		String_t** L_13 = ___message1;
		*((RuntimeObject**)L_13) = (RuntimeObject*)_stringLiteralC39D56A159A8B99DD2EADD3DE95D99C7E8259D1A;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject**)L_13, (void*)(RuntimeObject*)_stringLiteralC39D56A159A8B99DD2EADD3DE95D99C7E8259D1A);
		return (bool)0;
	}

IL_0064:
	{
		TrackableField_t6DC55D40EE374F2FFA111344BC840FA36CF76D7F* L_14 = __this->___m_Target_0;
		NullCheck(L_14);
		RuntimeObject* L_15;
		L_15 = TrackableField_GetValue_mC5ECCA29B21EDF39021816EBF0F82E1FC905566D(L_14, NULL);
		V_0 = L_15;
		ValueProperty_tB152A92DD3101A108D3C41589959AB70AAD68436* L_16 = __this->___m_Value_2;
		NullCheck(L_16);
		String_t* L_17;
		L_17 = ValueProperty_get_valueType_m2C587EC9748004FDD34A2D84DEE9937D5002FABB_inline(L_16, NULL);
		V_1 = L_17;
		String_t* L_18 = V_1;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_19 = { reinterpret_cast<intptr_t> (String_t_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_20;
		L_20 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_19, NULL);
		NullCheck(L_20);
		String_t* L_21;
		L_21 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_20);
		bool L_22;
		L_22 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_18, L_21, NULL);
		if (!L_22)
		{
			goto IL_00a3;
		}
	}
	{
		RuntimeObject* L_23 = V_0;
		bool L_24;
		L_24 = TriggerRule_TestByString_mDCB8214C74C5C52CE647E10341FBE8613C8D7054(__this, ((String_t*)CastclassSealed((RuntimeObject*)L_23, String_t_il2cpp_TypeInfo_var)), NULL);
		return L_24;
	}

IL_00a3:
	{
		String_t* L_25 = V_1;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_26 = { reinterpret_cast<intptr_t> (Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_27;
		L_27 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_26, NULL);
		NullCheck(L_27);
		String_t* L_28;
		L_28 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_27);
		bool L_29;
		L_29 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_25, L_28, NULL);
		if (!L_29)
		{
			goto IL_00ca;
		}
	}
	{
		RuntimeObject* L_30 = V_0;
		bool L_31;
		L_31 = TriggerRule_TestByBool_m702C29606FA66BD62A3C1643E621B5CE0D3D63AE(__this, ((*(bool*)((bool*)(bool*)UnBox(L_30, Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var)))), NULL);
		return L_31;
	}

IL_00ca:
	{
		String_t* L_32 = V_1;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_33 = { reinterpret_cast<intptr_t> (Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_34;
		L_34 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_33, NULL);
		NullCheck(L_34);
		String_t* L_35;
		L_35 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_34);
		bool L_36;
		L_36 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_32, L_35, NULL);
		if (!L_36)
		{
			goto IL_00f2;
		}
	}
	{
		RuntimeObject* L_37 = V_0;
		bool L_38;
		L_38 = TriggerRule_TestByDouble_m15033565485EDE74DB03C4E4B5CF720E3D4B2C9F(__this, ((double)((*(float*)((float*)(float*)UnBox(L_37, Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_il2cpp_TypeInfo_var))))), NULL);
		return L_38;
	}

IL_00f2:
	{
		String_t* L_39 = V_1;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_40 = { reinterpret_cast<intptr_t> (Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_41;
		L_41 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_40, NULL);
		NullCheck(L_41);
		String_t* L_42;
		L_42 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_41);
		bool L_43;
		L_43 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_39, L_42, NULL);
		if (!L_43)
		{
			goto IL_0119;
		}
	}
	{
		RuntimeObject* L_44 = V_0;
		bool L_45;
		L_45 = TriggerRule_TestByDouble_m15033565485EDE74DB03C4E4B5CF720E3D4B2C9F(__this, ((*(double*)((double*)(double*)UnBox(L_44, Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_il2cpp_TypeInfo_var)))), NULL);
		return L_45;
	}

IL_0119:
	{
		String_t* L_46 = V_1;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_47 = { reinterpret_cast<intptr_t> (Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_48;
		L_48 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_47, NULL);
		NullCheck(L_48);
		String_t* L_49;
		L_49 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_48);
		bool L_50;
		L_50 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_46, L_49, NULL);
		if (!L_50)
		{
			goto IL_0145;
		}
	}
	{
		RuntimeObject* L_51 = V_0;
		il2cpp_codegen_runtime_class_init_inline(Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F_il2cpp_TypeInfo_var);
		double L_52;
		L_52 = Decimal_op_Explicit_mA8577A95CD02E86110976D415CA149550AD5A6C0(((*(Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F*)((Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F*)(Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F*)UnBox(L_51, Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F_il2cpp_TypeInfo_var)))), NULL);
		bool L_53;
		L_53 = TriggerRule_TestByDouble_m15033565485EDE74DB03C4E4B5CF720E3D4B2C9F(__this, L_52, NULL);
		return L_53;
	}

IL_0145:
	{
		String_t* L_54 = V_1;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_55 = { reinterpret_cast<intptr_t> (Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_56;
		L_56 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_55, NULL);
		NullCheck(L_56);
		String_t* L_57;
		L_57 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_56);
		bool L_58;
		L_58 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_54, L_57, NULL);
		if (!L_58)
		{
			goto IL_016d;
		}
	}
	{
		RuntimeObject* L_59 = V_0;
		bool L_60;
		L_60 = TriggerRule_TestByDouble_m15033565485EDE74DB03C4E4B5CF720E3D4B2C9F(__this, ((double)((*(int32_t*)((int32_t*)(int32_t*)UnBox(L_59, Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var))))), NULL);
		return L_60;
	}

IL_016d:
	{
		String_t* L_61 = V_1;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_62 = { reinterpret_cast<intptr_t> (Int16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_63;
		L_63 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_62, NULL);
		NullCheck(L_63);
		String_t* L_64;
		L_64 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_63);
		bool L_65;
		L_65 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_61, L_64, NULL);
		if (!L_65)
		{
			goto IL_0195;
		}
	}
	{
		RuntimeObject* L_66 = V_0;
		bool L_67;
		L_67 = TriggerRule_TestByDouble_m15033565485EDE74DB03C4E4B5CF720E3D4B2C9F(__this, ((double)((*(int16_t*)((int16_t*)(int16_t*)UnBox(L_66, Int16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_il2cpp_TypeInfo_var))))), NULL);
		return L_67;
	}

IL_0195:
	{
		String_t* L_68 = V_1;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_69 = { reinterpret_cast<intptr_t> (Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_70;
		L_70 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_69, NULL);
		NullCheck(L_70);
		String_t* L_71;
		L_71 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_70);
		bool L_72;
		L_72 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_68, L_71, NULL);
		if (!L_72)
		{
			goto IL_01bd;
		}
	}
	{
		RuntimeObject* L_73 = V_0;
		bool L_74;
		L_74 = TriggerRule_TestByDouble_m15033565485EDE74DB03C4E4B5CF720E3D4B2C9F(__this, ((double)((*(int64_t*)((int64_t*)(int64_t*)UnBox(L_73, Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_il2cpp_TypeInfo_var))))), NULL);
		return L_74;
	}

IL_01bd:
	{
		String_t* L_75 = V_1;
		bool L_76;
		L_76 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_75, _stringLiteral384565B8399EC9A224FB52B7078096010121FA9F, NULL);
		if (!L_76)
		{
			goto IL_01e4;
		}
	}
	{
		RuntimeObject* L_77 = V_0;
		NullCheck(((Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2*)CastclassClass((RuntimeObject*)L_77, Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_il2cpp_TypeInfo_var)));
		String_t* L_78;
		L_78 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ((Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2*)CastclassClass((RuntimeObject*)L_77, Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_il2cpp_TypeInfo_var)));
		NullCheck(L_78);
		String_t* L_79;
		L_79 = String_ToLower_m6191ABA3DC514ED47C10BDA23FD0DDCEAE7ACFBD(L_78, NULL);
		bool L_80;
		L_80 = TriggerRule_TestByEnum_m8212FF3857BFD2D9A4C21FFD874716A28DFD716D(__this, L_79, NULL);
		return L_80;
	}

IL_01e4:
	{
		RuntimeObject* L_81 = V_0;
		bool L_82;
		L_82 = TriggerRule_TestByObject_m7230D253A89F5ED4CE38CAC0BEBBF95490E4F852(__this, L_81, NULL);
		return L_82;
	}
}
// System.Boolean UnityEngine.Analytics.TriggerRule::TestByObject(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TriggerRule_TestByObject_m7230D253A89F5ED4CE38CAC0BEBBF95490E4F852 (TriggerRule_tB684F4AC495F20C6A8BA52384547780771817E4E* __this, RuntimeObject* ___currentValue0, const RuntimeMethod* method) 
{
	bool V_0 = false;
	int32_t V_1 = 0;
	{
		V_0 = (bool)0;
		int32_t L_0 = __this->___m_Operator_1;
		V_1 = L_0;
		int32_t L_1 = V_1;
		if (!L_1)
		{
			goto IL_001b;
		}
	}
	{
		int32_t L_2 = V_1;
		if ((((int32_t)L_2) == ((int32_t)1)))
		{
			goto IL_0032;
		}
	}
	{
		goto IL_004c;
	}

IL_001b:
	{
		RuntimeObject* L_3 = ___currentValue0;
		ValueProperty_tB152A92DD3101A108D3C41589959AB70AAD68436* L_4 = __this->___m_Value_2;
		NullCheck(L_4);
		String_t* L_5;
		L_5 = ValueProperty_get_propertyValue_mFC1DBF8E2C72655224C6E30E2FCEF41B3E19B1F5(L_4, NULL);
		NullCheck(L_3);
		bool L_6;
		L_6 = VirtualFuncInvoker1< bool, RuntimeObject* >::Invoke(0 /* System.Boolean System.Object::Equals(System.Object) */, L_3, L_5);
		V_0 = L_6;
		goto IL_004c;
	}

IL_0032:
	{
		RuntimeObject* L_7 = ___currentValue0;
		ValueProperty_tB152A92DD3101A108D3C41589959AB70AAD68436* L_8 = __this->___m_Value_2;
		NullCheck(L_8);
		String_t* L_9;
		L_9 = ValueProperty_get_propertyValue_mFC1DBF8E2C72655224C6E30E2FCEF41B3E19B1F5(L_8, NULL);
		NullCheck(L_7);
		bool L_10;
		L_10 = VirtualFuncInvoker1< bool, RuntimeObject* >::Invoke(0 /* System.Boolean System.Object::Equals(System.Object) */, L_7, L_9);
		V_0 = (bool)((((int32_t)L_10) == ((int32_t)0))? 1 : 0);
		goto IL_004c;
	}

IL_004c:
	{
		bool L_11 = V_0;
		return L_11;
	}
}
// System.Boolean UnityEngine.Analytics.TriggerRule::TestByEnum(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TriggerRule_TestByEnum_m8212FF3857BFD2D9A4C21FFD874716A28DFD716D (TriggerRule_tB684F4AC495F20C6A8BA52384547780771817E4E* __this, String_t* ___currentValue0, const RuntimeMethod* method) 
{
	bool V_0 = false;
	int32_t V_1 = 0;
	{
		V_0 = (bool)0;
		int32_t L_0 = __this->___m_Operator_1;
		V_1 = L_0;
		int32_t L_1 = V_1;
		if (!L_1)
		{
			goto IL_001b;
		}
	}
	{
		int32_t L_2 = V_1;
		if ((((int32_t)L_2) == ((int32_t)1)))
		{
			goto IL_003c;
		}
	}
	{
		goto IL_0060;
	}

IL_001b:
	{
		String_t* L_3 = ___currentValue0;
		ValueProperty_tB152A92DD3101A108D3C41589959AB70AAD68436* L_4 = __this->___m_Value_2;
		NullCheck(L_4);
		String_t* L_5;
		L_5 = ValueProperty_get_propertyValue_mFC1DBF8E2C72655224C6E30E2FCEF41B3E19B1F5(L_4, NULL);
		NullCheck(L_5);
		String_t* L_6;
		L_6 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_5);
		NullCheck(L_6);
		String_t* L_7;
		L_7 = String_ToLower_m6191ABA3DC514ED47C10BDA23FD0DDCEAE7ACFBD(L_6, NULL);
		NullCheck(L_3);
		bool L_8;
		L_8 = String_Equals_mCD5F35DEDCAFE51ACD4E033726FC2EF8DF7E9B4D(L_3, L_7, NULL);
		V_0 = L_8;
		goto IL_0060;
	}

IL_003c:
	{
		String_t* L_9 = ___currentValue0;
		ValueProperty_tB152A92DD3101A108D3C41589959AB70AAD68436* L_10 = __this->___m_Value_2;
		NullCheck(L_10);
		String_t* L_11;
		L_11 = ValueProperty_get_propertyValue_mFC1DBF8E2C72655224C6E30E2FCEF41B3E19B1F5(L_10, NULL);
		NullCheck(L_11);
		String_t* L_12;
		L_12 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_11);
		NullCheck(L_12);
		String_t* L_13;
		L_13 = String_ToLower_m6191ABA3DC514ED47C10BDA23FD0DDCEAE7ACFBD(L_12, NULL);
		NullCheck(L_9);
		bool L_14;
		L_14 = String_Equals_mCD5F35DEDCAFE51ACD4E033726FC2EF8DF7E9B4D(L_9, L_13, NULL);
		V_0 = (bool)((((int32_t)L_14) == ((int32_t)0))? 1 : 0);
		goto IL_0060;
	}

IL_0060:
	{
		bool L_15 = V_0;
		return L_15;
	}
}
// System.Boolean UnityEngine.Analytics.TriggerRule::TestByString(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TriggerRule_TestByString_mDCB8214C74C5C52CE647E10341FBE8613C8D7054 (TriggerRule_tB684F4AC495F20C6A8BA52384547780771817E4E* __this, String_t* ___currentValue0, const RuntimeMethod* method) 
{
	bool V_0 = false;
	int32_t V_1 = 0;
	{
		V_0 = (bool)0;
		int32_t L_0 = __this->___m_Operator_1;
		V_1 = L_0;
		int32_t L_1 = V_1;
		if (!L_1)
		{
			goto IL_001b;
		}
	}
	{
		int32_t L_2 = V_1;
		if ((((int32_t)L_2) == ((int32_t)1)))
		{
			goto IL_0032;
		}
	}
	{
		goto IL_004c;
	}

IL_001b:
	{
		String_t* L_3 = ___currentValue0;
		ValueProperty_tB152A92DD3101A108D3C41589959AB70AAD68436* L_4 = __this->___m_Value_2;
		NullCheck(L_4);
		String_t* L_5;
		L_5 = ValueProperty_get_propertyValue_mFC1DBF8E2C72655224C6E30E2FCEF41B3E19B1F5(L_4, NULL);
		NullCheck(L_3);
		bool L_6;
		L_6 = String_Equals_mCD5F35DEDCAFE51ACD4E033726FC2EF8DF7E9B4D(L_3, L_5, NULL);
		V_0 = L_6;
		goto IL_004c;
	}

IL_0032:
	{
		String_t* L_7 = ___currentValue0;
		ValueProperty_tB152A92DD3101A108D3C41589959AB70AAD68436* L_8 = __this->___m_Value_2;
		NullCheck(L_8);
		String_t* L_9;
		L_9 = ValueProperty_get_propertyValue_mFC1DBF8E2C72655224C6E30E2FCEF41B3E19B1F5(L_8, NULL);
		NullCheck(L_7);
		bool L_10;
		L_10 = String_Equals_mCD5F35DEDCAFE51ACD4E033726FC2EF8DF7E9B4D(L_7, L_9, NULL);
		V_0 = (bool)((((int32_t)L_10) == ((int32_t)0))? 1 : 0);
		goto IL_004c;
	}

IL_004c:
	{
		bool L_11 = V_0;
		return L_11;
	}
}
// System.Boolean UnityEngine.Analytics.TriggerRule::TestByBool(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TriggerRule_TestByBool_m702C29606FA66BD62A3C1643E621B5CE0D3D63AE (TriggerRule_tB684F4AC495F20C6A8BA52384547780771817E4E* __this, bool ___currentValue0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	int32_t V_2 = 0;
	{
		V_0 = (bool)0;
		ValueProperty_tB152A92DD3101A108D3C41589959AB70AAD68436* L_0 = __this->___m_Value_2;
		NullCheck(L_0);
		String_t* L_1;
		L_1 = ValueProperty_get_propertyValue_mFC1DBF8E2C72655224C6E30E2FCEF41B3E19B1F5(L_0, NULL);
		il2cpp_codegen_runtime_class_init_inline(Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = Boolean_Parse_mC9B4406FE9DA904E2B7D75267CAD38E837D39A6D(L_1, NULL);
		V_1 = L_2;
		int32_t L_3 = __this->___m_Operator_1;
		V_2 = L_3;
		int32_t L_4 = V_2;
		if (!L_4)
		{
			goto IL_002c;
		}
	}
	{
		int32_t L_5 = V_2;
		if ((((int32_t)L_5) == ((int32_t)1)))
		{
			goto IL_003a;
		}
	}
	{
		goto IL_004b;
	}

IL_002c:
	{
		bool L_6 = V_1;
		bool L_7;
		L_7 = Boolean_Equals_mC020D5EB2F64274CD623E8449E8777A70BEC6CC9((&___currentValue0), L_6, NULL);
		V_0 = L_7;
		goto IL_004b;
	}

IL_003a:
	{
		bool L_8 = V_1;
		bool L_9;
		L_9 = Boolean_Equals_mC020D5EB2F64274CD623E8449E8777A70BEC6CC9((&___currentValue0), L_8, NULL);
		V_0 = (bool)((((int32_t)L_9) == ((int32_t)0))? 1 : 0);
		goto IL_004b;
	}

IL_004b:
	{
		bool L_10 = V_0;
		return L_10;
	}
}
// System.Boolean UnityEngine.Analytics.TriggerRule::TestByDouble(System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TriggerRule_TestByDouble_m15033565485EDE74DB03C4E4B5CF720E3D4B2C9F (TriggerRule_tB684F4AC495F20C6A8BA52384547780771817E4E* __this, double ___currentValue0, const RuntimeMethod* method) 
{
	bool V_0 = false;
	double V_1 = 0.0;
	int32_t V_2 = 0;
	double V_3 = 0.0;
	double V_4 = 0.0;
	int32_t G_B8_0 = 0;
	int32_t G_B13_0 = 0;
	int32_t G_B17_0 = 0;
	int32_t G_B23_0 = 0;
	int32_t G_B25_0 = 0;
	{
		V_0 = (bool)0;
		ValueProperty_tB152A92DD3101A108D3C41589959AB70AAD68436* L_0 = __this->___m_Value_2;
		NullCheck(L_0);
		String_t* L_1;
		L_1 = ValueProperty_get_propertyValue_mFC1DBF8E2C72655224C6E30E2FCEF41B3E19B1F5(L_0, NULL);
		double L_2;
		L_2 = TriggerRule_GetDouble_m98DB51900A6A662EADB055272F87D2670182D385(__this, L_1, NULL);
		V_1 = L_2;
		int32_t L_3 = __this->___m_Operator_1;
		V_2 = L_3;
		int32_t L_4 = V_2;
		switch (L_4)
		{
			case 0:
			{
				goto IL_0046;
			}
			case 1:
			{
				goto IL_0054;
			}
			case 2:
			{
				goto IL_0065;
			}
			case 3:
			{
				goto IL_006f;
			}
			case 4:
			{
				goto IL_0087;
			}
			case 5:
			{
				goto IL_0091;
			}
			case 6:
			{
				goto IL_00a9;
			}
			case 7:
			{
				goto IL_00cf;
			}
		}
	}
	{
		goto IL_0115;
	}

IL_0046:
	{
		double L_5 = ___currentValue0;
		double L_6 = V_1;
		bool L_7;
		L_7 = TriggerRule_SafeEquals_m70CEF895C63BB0915EE7ED7E3FB9617F897A3472(__this, L_5, L_6, NULL);
		V_0 = L_7;
		goto IL_0115;
	}

IL_0054:
	{
		double L_8 = ___currentValue0;
		double L_9 = V_1;
		bool L_10;
		L_10 = TriggerRule_SafeEquals_m70CEF895C63BB0915EE7ED7E3FB9617F897A3472(__this, L_8, L_9, NULL);
		V_0 = (bool)((((int32_t)L_10) == ((int32_t)0))? 1 : 0);
		goto IL_0115;
	}

IL_0065:
	{
		double L_11 = ___currentValue0;
		double L_12 = V_1;
		V_0 = (bool)((((double)L_11) > ((double)L_12))? 1 : 0);
		goto IL_0115;
	}

IL_006f:
	{
		double L_13 = ___currentValue0;
		double L_14 = V_1;
		if ((((double)L_13) > ((double)L_14)))
		{
			goto IL_0080;
		}
	}
	{
		double L_15 = ___currentValue0;
		double L_16 = V_1;
		bool L_17;
		L_17 = TriggerRule_SafeEquals_m70CEF895C63BB0915EE7ED7E3FB9617F897A3472(__this, L_15, L_16, NULL);
		G_B8_0 = ((int32_t)(L_17));
		goto IL_0081;
	}

IL_0080:
	{
		G_B8_0 = 1;
	}

IL_0081:
	{
		V_0 = (bool)G_B8_0;
		goto IL_0115;
	}

IL_0087:
	{
		double L_18 = ___currentValue0;
		double L_19 = V_1;
		V_0 = (bool)((((double)L_18) < ((double)L_19))? 1 : 0);
		goto IL_0115;
	}

IL_0091:
	{
		double L_20 = ___currentValue0;
		double L_21 = V_1;
		if ((((double)L_20) < ((double)L_21)))
		{
			goto IL_00a2;
		}
	}
	{
		double L_22 = ___currentValue0;
		double L_23 = V_1;
		bool L_24;
		L_24 = TriggerRule_SafeEquals_m70CEF895C63BB0915EE7ED7E3FB9617F897A3472(__this, L_22, L_23, NULL);
		G_B13_0 = ((int32_t)(L_24));
		goto IL_00a3;
	}

IL_00a2:
	{
		G_B13_0 = 1;
	}

IL_00a3:
	{
		V_0 = (bool)G_B13_0;
		goto IL_0115;
	}

IL_00a9:
	{
		ValueProperty_tB152A92DD3101A108D3C41589959AB70AAD68436* L_25 = __this->___m_Value2_3;
		NullCheck(L_25);
		String_t* L_26;
		L_26 = ValueProperty_get_propertyValue_mFC1DBF8E2C72655224C6E30E2FCEF41B3E19B1F5(L_25, NULL);
		double L_27;
		L_27 = TriggerRule_GetDouble_m98DB51900A6A662EADB055272F87D2670182D385(__this, L_26, NULL);
		V_3 = L_27;
		double L_28 = ___currentValue0;
		double L_29 = V_1;
		if ((!(((double)L_28) > ((double)L_29))))
		{
			goto IL_00c8;
		}
	}
	{
		double L_30 = ___currentValue0;
		double L_31 = V_3;
		G_B17_0 = ((((double)L_30) < ((double)L_31))? 1 : 0);
		goto IL_00c9;
	}

IL_00c8:
	{
		G_B17_0 = 0;
	}

IL_00c9:
	{
		V_0 = (bool)G_B17_0;
		goto IL_0115;
	}

IL_00cf:
	{
		ValueProperty_tB152A92DD3101A108D3C41589959AB70AAD68436* L_32 = __this->___m_Value2_3;
		NullCheck(L_32);
		String_t* L_33;
		L_33 = ValueProperty_get_propertyValue_mFC1DBF8E2C72655224C6E30E2FCEF41B3E19B1F5(L_32, NULL);
		double L_34;
		L_34 = TriggerRule_GetDouble_m98DB51900A6A662EADB055272F87D2670182D385(__this, L_33, NULL);
		V_4 = L_34;
		double L_35 = ___currentValue0;
		double L_36 = V_1;
		bool L_37;
		L_37 = TriggerRule_SafeEquals_m70CEF895C63BB0915EE7ED7E3FB9617F897A3472(__this, L_35, L_36, NULL);
		if (L_37)
		{
			goto IL_010e;
		}
	}
	{
		double L_38 = ___currentValue0;
		double L_39 = V_4;
		bool L_40;
		L_40 = TriggerRule_SafeEquals_m70CEF895C63BB0915EE7ED7E3FB9617F897A3472(__this, L_38, L_39, NULL);
		if (L_40)
		{
			goto IL_010e;
		}
	}
	{
		double L_41 = ___currentValue0;
		double L_42 = V_1;
		if ((!(((double)L_41) > ((double)L_42))))
		{
			goto IL_010b;
		}
	}
	{
		double L_43 = ___currentValue0;
		double L_44 = V_4;
		G_B23_0 = ((((double)L_43) < ((double)L_44))? 1 : 0);
		goto IL_010c;
	}

IL_010b:
	{
		G_B23_0 = 0;
	}

IL_010c:
	{
		G_B25_0 = G_B23_0;
		goto IL_010f;
	}

IL_010e:
	{
		G_B25_0 = 1;
	}

IL_010f:
	{
		V_0 = (bool)G_B25_0;
		goto IL_0115;
	}

IL_0115:
	{
		bool L_45 = V_0;
		return L_45;
	}
}
// System.Boolean UnityEngine.Analytics.TriggerRule::SafeEquals(System.Double,System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TriggerRule_SafeEquals_m70CEF895C63BB0915EE7ED7E3FB9617F897A3472 (TriggerRule_tB684F4AC495F20C6A8BA52384547780771817E4E* __this, double ___double10, double ___double21, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		double L_0 = ___double10;
		double L_1 = ___double21;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		double L_2;
		L_2 = fabs(((double)il2cpp_codegen_subtract(L_0, L_1)));
		return (bool)((((double)L_2) < ((double)(9.9999999999999995E-08)))? 1 : 0);
	}
}
// System.Double UnityEngine.Analytics.TriggerRule::GetDouble(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double TriggerRule_GetDouble_m98DB51900A6A662EADB055272F87D2670182D385 (TriggerRule_tB684F4AC495F20C6A8BA52384547780771817E4E* __this, RuntimeObject* ___value0, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___value0;
		NullCheck(L_0);
		String_t* L_1;
		L_1 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_0);
		double L_2;
		L_2 = Double_Parse_mEBC644CE0C86A405283EC4839F872EF9E556670A(L_1, NULL);
		return L_2;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR StandardEventPayload_tC18B9CF0832CA32A1280D8ECDB81596C45ED4EA7* AnalyticsEventTracker_get_payload_m3969D906E5B805CC4666951E0EFC33DB5A3A6AC8_inline (AnalyticsEventTracker_t43C623F37E8BC18790D02385CAFC4E145F35E994* __this, const RuntimeMethod* method) 
{
	{
		StandardEventPayload_tC18B9CF0832CA32A1280D8ECDB81596C45ED4EA7* L_0 = __this->___m_EventPayload_5;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t EventTrigger_get_triggerType_m97FA977005FBC481D4937BA11E1EE84A8175A31C_inline (EventTrigger_t85ABB3C787BF555580DE542822F8E973718C5791* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___m_Type_1;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t EventTrigger_get_lifecycleEvent_mC6629116356D0599B91AECDD775C0E8EE0F66963_inline (EventTrigger_t85ABB3C787BF555580DE542822F8E973718C5791* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___m_LifecycleEvent_2;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float EventTrigger_get_initTime_m7CD123F71FD55CC12D417521C70038CAEA37339B_inline (EventTrigger_t85ABB3C787BF555580DE542822F8E973718C5791* __this, const RuntimeMethod* method) 
{
	{
		float L_0 = __this->___m_InitTime_6;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float EventTrigger_get_repeatTime_mF1D62DF10BED6C110BE2FB2DA3E69E25E4CCBF1F_inline (EventTrigger_t85ABB3C787BF555580DE542822F8E973718C5791* __this, const RuntimeMethod* method) 
{
	{
		float L_0 = __this->___m_RepeatTime_7;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t EventTrigger_get_repetitions_mC09AFA3A46F74144A6CE7982248FC794C5015B2B_inline (EventTrigger_t85ABB3C787BF555580DE542822F8E973718C5791* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___m_Repetitions_8;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* StandardEventPayload_get_name_m039945159E59D0A08DB40AAB683A6325338CFE2D_inline (StandardEventPayload_tC18B9CF0832CA32A1280D8ECDB81596C45ED4EA7* __this, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = __this->___m_Name_5;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR AnalyticsEventParamListContainer_tAE992B5199A074975EF5CC6CF4A80FCCFCBF4C02* StandardEventPayload_get_parameters_mDEF87E957DD90917F8FD0744ADE2B0290D43E465_inline (StandardEventPayload_tC18B9CF0832CA32A1280D8ECDB81596C45ED4EA7* __this, const RuntimeMethod* method) 
{
	{
		AnalyticsEventParamListContainer_tAE992B5199A074975EF5CC6CF4A80FCCFCBF4C02* L_0 = __this->___m_Parameters_3;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR List_1_t9DD115095F7C5EEA37796C3B52E5EADC08B27030* AnalyticsEventParamListContainer_get_parameters_m3CC2C44E55D190E4714C71D3BCC10A03B105FE5F_inline (AnalyticsEventParamListContainer_tAE992B5199A074975EF5CC6CF4A80FCCFCBF4C02* __this, const RuntimeMethod* method) 
{
	{
		List_1_t9DD115095F7C5EEA37796C3B52E5EADC08B27030* L_0 = __this->___m_Parameters_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ValueProperty_tB152A92DD3101A108D3C41589959AB70AAD68436* AnalyticsEventParam_get_valueProperty_m09B7D0AF1FFA904617560B33E971AC1DB3A5B4F6_inline (AnalyticsEventParam_t6FBABF1961987CB0E6F88338A5C48EE1E3E60974* __this, const RuntimeMethod* method) 
{
	{
		ValueProperty_tB152A92DD3101A108D3C41589959AB70AAD68436* L_0 = __this->___m_Value_4;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* AnalyticsEventParam_get_name_mA57F2665280411110BACB2841E4627D5B0EFD02B_inline (AnalyticsEventParam_t6FBABF1961987CB0E6F88338A5C48EE1E3E60974* __this, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = __this->___m_Name_3;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t AnalyticsEventParam_get_requirementType_m2ABD4A4A22B1C1E0C14E988DDD97C77B7DD1809A_inline (AnalyticsEventParam_t6FBABF1961987CB0E6F88338A5C48EE1E3E60974* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___m_RequirementType_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* AnalyticsEventParam_get_groupID_mDD8977AB9D95813C7CEF465672E77A47E4A2D023_inline (AnalyticsEventParam_t6FBABF1961987CB0E6F88338A5C48EE1E3E60974* __this, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = __this->___m_GroupID_1;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR List_1_t20E90EB749670C2DEEE278FBBA3E9DE0A00E09CC* TrackableProperty_get_fields_mAC2317B77B724B6774EC2C61E8CD5B736151E185_inline (TrackableProperty_tD94C354D884EDFB6603639EE6559289850F5E720* __this, const RuntimeMethod* method) 
{
	{
		List_1_t20E90EB749670C2DEEE278FBBA3E9DE0A00E09CC* L_0 = __this->___m_Fields_1;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* FieldWithTarget_get_target_m52EE4805B935E272E67F8EAC8B9C96B31BDE4FD1_inline (FieldWithTarget_t504FF69C27D0DC4A727BE0A6CE8167EC2A967448* __this, const RuntimeMethod* method) 
{
	{
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_0 = __this->___m_Target_1;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool FieldWithTarget_get_doStatic_m2697393C3475C7D5CEC0E3DEF64A10F89B150DC2_inline (FieldWithTarget_t504FF69C27D0DC4A727BE0A6CE8167EC2A967448* __this, const RuntimeMethod* method) 
{
	{
		bool L_0 = __this->___m_DoStatic_4;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* FieldWithTarget_get_paramName_mC678A4E0D89455CE785B0F9C74AAE7820AE6FF84_inline (FieldWithTarget_t504FF69C27D0DC4A727BE0A6CE8167EC2A967448* __this, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = __this->___m_ParamName_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR List_1_t3585B91917CA5C4854A4496D5F41B409BCE66B30* TriggerListContainer_get_rules_mC10082C97197C553D702943A2A1F3CEB3A120074_inline (TriggerListContainer_t05237759E7AFB582C672447CB1FBBF079AEE03C9* __this, const RuntimeMethod* method) 
{
	{
		List_1_t3585B91917CA5C4854A4496D5F41B409BCE66B30* L_0 = __this->___m_Rules_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR TrackableField_t6DC55D40EE374F2FFA111344BC840FA36CF76D7F* ValueProperty_get_target_mFF245D412287A49C6FEB5FA53AC422765321F5B7_inline (ValueProperty_tB152A92DD3101A108D3C41589959AB70AAD68436* __this, const RuntimeMethod* method) 
{
	{
		TrackableField_t6DC55D40EE374F2FFA111344BC840FA36CF76D7F* L_0 = __this->___m_Target_10;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* ValueProperty_get_valueType_m2C587EC9748004FDD34A2D84DEE9937D5002FABB_inline (ValueProperty_tB152A92DD3101A108D3C41589959AB70AAD68436* __this, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = __this->___m_ValueType_8;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = (int32_t)__this->____size_2;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_m5AAB6DCB6C30EB5769B4E8DB8170E50319F0A9ED_gshared_inline (List_1_t01207CE5982A7640E56B1F9F672A06F96B09367A* __this, bool ___item0, const RuntimeMethod* method) 
{
	BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4* V_0 = NULL;
	int32_t V_1 = 0;
	{
		int32_t L_0 = (int32_t)__this->____version_3;
		__this->____version_3 = ((int32_t)il2cpp_codegen_add(L_0, 1));
		BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4* L_1 = (BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4*)__this->____items_1;
		V_0 = L_1;
		int32_t L_2 = (int32_t)__this->____size_2;
		V_1 = L_2;
		int32_t L_3 = V_1;
		BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4* L_4 = V_0;
		NullCheck(L_4);
		if ((!(((uint32_t)L_3) < ((uint32_t)((int32_t)(((RuntimeArray*)L_4)->max_length))))))
		{
			goto IL_0034;
		}
	}
	{
		int32_t L_5 = V_1;
		__this->____size_2 = ((int32_t)il2cpp_codegen_add(L_5, 1));
		BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4* L_6 = V_0;
		int32_t L_7 = V_1;
		bool L_8 = ___item0;
		NullCheck(L_6);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(L_7), (bool)L_8);
		return;
	}

IL_0034:
	{
		bool L_9 = ___item0;
		((  void (*) (List_1_t01207CE5982A7640E56B1F9F672A06F96B09367A*, bool, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 11)))(__this, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 11));
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* Enumerator_get_Current_mD6472FA27D28B9AE64A0FEF796C72ABBC2420EBF_gshared_inline (Enumerator_t65CC956745B1180C04CE6C6910FB27C5F32BB9FF* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = (RuntimeObject*)__this->____currentKey_3;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* Enumerator_get_Current_m6330F15D18EE4F547C05DF9BF83C5EB710376027_gshared_inline (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = (RuntimeObject*)__this->____current_3;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___item0, const RuntimeMethod* method) 
{
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* V_0 = NULL;
	int32_t V_1 = 0;
	{
		int32_t L_0 = (int32_t)__this->____version_3;
		__this->____version_3 = ((int32_t)il2cpp_codegen_add(L_0, 1));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)__this->____items_1;
		V_0 = L_1;
		int32_t L_2 = (int32_t)__this->____size_2;
		V_1 = L_2;
		int32_t L_3 = V_1;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_4 = V_0;
		NullCheck(L_4);
		if ((!(((uint32_t)L_3) < ((uint32_t)((int32_t)(((RuntimeArray*)L_4)->max_length))))))
		{
			goto IL_0034;
		}
	}
	{
		int32_t L_5 = V_1;
		__this->____size_2 = ((int32_t)il2cpp_codegen_add(L_5, 1));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_6 = V_0;
		int32_t L_7 = V_1;
		RuntimeObject* L_8 = ___item0;
		NullCheck(L_6);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(L_7), (RuntimeObject*)L_8);
		return;
	}

IL_0034:
	{
		RuntimeObject* L_9 = ___item0;
		((  void (*) (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D*, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 11)))(__this, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 11));
		return;
	}
}
