#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>
#include <stdint.h>


struct VirtualActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename T1>
struct VirtualActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename T1, typename T2>
struct VirtualActionInvoker2
{
	typedef void (*Action)(void*, T1, T2, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};
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
struct GenericVirtualActionInvoker0
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
struct GenericVirtualActionInvoker1
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
struct GenericVirtualActionInvoker2
{
	typedef void (*Action)(void*, T1, T2, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1, T2 p2)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
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
template <typename T1, typename T2, typename T3>
struct InterfaceActionInvoker3
{
	typedef void (*Action)(void*, T1, T2, T3, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2 p2, T3 p3)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, invokeData.method);
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
template <typename R, typename T1, typename T2, typename T3>
struct InterfaceFuncInvoker3
{
	typedef R (*Func)(void*, T1, T2, T3, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2 p2, T3 p3)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, p3, invokeData.method);
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
template <typename T1, typename T2>
struct GenericInterfaceActionInvoker2
{
	typedef void (*Action)(void*, T1, T2, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1, T2 p2)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
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
template <typename T1, typename T2>
struct InvokerActionInvoker2;
template <typename T1, typename T2>
struct InvokerActionInvoker2<T1*, T2*>
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2* p2)
	{
		void* params[2] = { p1, p2 };
		method->invoker_method(methodPtr, method, obj, params, NULL);
	}
};
template <typename T1, typename T2, typename T3>
struct InvokerActionInvoker3;
template <typename T1, typename T2, typename T3>
struct InvokerActionInvoker3<T1*, T2*, T3>
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2* p2, T3 p3)
	{
		void* params[3] = { p1, p2, &p3 };
		method->invoker_method(methodPtr, method, obj, params, NULL);
	}
};
template <typename T1, typename T2, typename T3>
struct InvokerActionInvoker3<T1*, T2*, T3*>
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2* p2, T3* p3)
	{
		void* params[3] = { p1, p2, p3 };
		method->invoker_method(methodPtr, method, obj, params, NULL);
	}
};
template <typename T1, typename T2, typename T3, typename T4>
struct InvokerActionInvoker4;
template <typename T1, typename T2, typename T3, typename T4>
struct InvokerActionInvoker4<T1*, T2*, T3*, T4>
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2* p2, T3* p3, T4 p4)
	{
		void* params[4] = { p1, p2, p3, &p4 };
		method->invoker_method(methodPtr, method, obj, params, NULL);
	}
};

// System.Action`1<WebSocketSharp.MessageEventArgs>
struct Action_1_t84E0474180BE74DC186BB652F051419C72E75519;
// System.Action`1<Unity.RenderStreaming.InputSystem.InputRemoting/Message>
struct Action_1_t62CFC7E46D3237DF830A4F831466D93C80CCEB03;
// System.Action`2<UnityEngine.InputSystem.InputDevice,UnityEngine.InputSystem.InputDeviceChange>
struct Action_2_tB79528C85CFEF7DFF52C575DDAA398D2FE6BC333;
// System.Action`2<UnityEngine.InputSystem.LowLevel.InputEventPtr,UnityEngine.InputSystem.InputDevice>
struct Action_2_t4943DD8C32CAB983950535CEF3BABA85DF8C9AAA;
// System.Action`2<UnityEngine.InputSystem.LowLevel.InputEventPtr,System.Object>
struct Action_2_tD987B97B18D27B9920365359C46BC12702AD4F7D;
// System.Action`2<System.Object,System.Int32Enum>
struct Action_2_t9C4E97D0565650F0AEF7C72077EB8A0F9326E40B;
// System.Action`2<System.String,UnityEngine.InputSystem.InputControlLayoutChange>
struct Action_2_t4797B88C63509F2EE4385D6DABE6A4B5AD5393F7;
// System.Threading.AsyncLocal`1<System.Globalization.CultureInfo>
struct AsyncLocal_1_t1D3339EA4C8650D2DEDDF9553E5C932B3DC2CCFD;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Text.Encoding>
struct Dictionary_2_t87EDE08B2E48F793A22DE50D6B3CC2E7EBB2DB54;
// System.Collections.Generic.Dictionary`2<UnityEngine.InputSystem.Utilities.InternedString,System.Func`1<UnityEngine.InputSystem.Layouts.InputControlLayout>>
struct Dictionary_2_tFF0F3921D8B2465193365C2463B7D6A977E874DA;
// System.Collections.Generic.Dictionary`2<UnityEngine.InputSystem.Utilities.InternedString,UnityEngine.InputSystem.Utilities.InternedString[]>
struct Dictionary_2_tA8E192E813E347FF19EC3868E2C565607445394C;
// System.Collections.Generic.Dictionary`2<UnityEngine.InputSystem.Utilities.InternedString,UnityEngine.InputSystem.Layouts.InputControlLayout>
struct Dictionary_2_t058B78C04CBFB0F1C72F95C9880AE09DA041219F;
// System.Collections.Generic.Dictionary`2<UnityEngine.InputSystem.Utilities.InternedString,UnityEngine.InputSystem.Utilities.InternedString>
struct Dictionary_2_t433D1FE2CDB69C9F583F79D5252A34112439D0AD;
// System.Collections.Generic.Dictionary`2<UnityEngine.InputSystem.Utilities.InternedString,System.String>
struct Dictionary_2_tEB3FF1660C6129E11F3B4771A549DE9F169B5103;
// System.Collections.Generic.Dictionary`2<UnityEngine.InputSystem.Utilities.InternedString,System.Type>
struct Dictionary_2_t1FFEE4C9AF6AF524CAD4FDCEA8F3AB34E585451D;
// System.Collections.Generic.Dictionary`2<UnityEngine.InputSystem.Utilities.InternedString,UnityEngine.InputSystem.Layouts.InputControlLayout/Collection/PrecompiledLayout>
struct Dictionary_2_tD68C40116E127FE79F9E7AF07820CFDDBF20A8C1;
// System.Collections.Generic.Dictionary`2<System.Object,System.Object>
struct Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA;
// System.Collections.Generic.Dictionary`2<System.String,System.String>
struct Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83;
// System.EventHandler`1<WebSocketSharp.CloseEventArgs>
struct EventHandler_1_t522FAB2F4CBA6A3D12166027B1D4A1C8C94D68E5;
// System.EventHandler`1<WebSocketSharp.ErrorEventArgs>
struct EventHandler_1_tEF41E797A6883ACCC9C7536EEEB557E1EFC8C291;
// System.EventHandler`1<WebSocketSharp.MessageEventArgs>
struct EventHandler_1_t8D76D9242722744EEBFEF94F3AE19600E1D651B9;
// System.EventHandler`1<System.Object>
struct EventHandler_1_tD8C4A5BE1F7C91B1A7E99AE87AFD2F5432C38746;
// System.Func`2<Unity.RenderStreaming.DescData,System.String>
struct Func_2_t0EF978B55294DA2AD6D168419F9F353470641F2F;
// System.Func`2<UnityEngine.InputSystem.Utilities.InternedString,System.Object>
struct Func_2_t63BCD2DEBA7363CAD4DAAF9703EF65C11A4C7BBB;
// System.Func`2<UnityEngine.InputSystem.Utilities.InternedString,System.String>
struct Func_2_tE0082B3C229A425A69ECDABB19259709EC9F540F;
// System.Func`2<System.Object,System.Boolean>
struct Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00;
// System.Func`2<System.String,System.Boolean>
struct Func_2_tAB9727E0C937894E19032D575D98A8A9AB5EE47D;
// System.Func`2<WebSocketSharp.Net.WebSockets.WebSocketContext,System.String>
struct Func_2_tB1D9C1FFE40358509EACFB290C5E10A3C519CF1E;
// System.Collections.Generic.HashSet`1<UnityEngine.InputSystem.Utilities.InternedString>
struct HashSet_1_t87C47CF88B1B88398D4F9A1E51E92F834CF5160B;
// System.Collections.Generic.HashSet`1<System.String>
struct HashSet_1_tEFC6605F7DE53F71946C33FD371E53C3100F2178;
// System.Collections.Generic.IEnumerable`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>
struct IEnumerable_1_t60509816D8966320E2A9660FC756B6C440ADFC50;
// System.Collections.Generic.IEnumerable`1<System.Collections.Generic.KeyValuePair`2<System.String,System.String>>
struct IEnumerable_1_t3C6913E067AB1171D9894C79A396D8A8E90E311B;
// System.Collections.Generic.IEnumerable`1<UnityEngine.InputSystem.Utilities.InternedString>
struct IEnumerable_1_t5359DEC999AA35C7E2DE775B0455A4760550ED7F;
// System.Collections.Generic.IEnumerable`1<System.Object>
struct IEnumerable_1_tF95C9E01A913DD50575531C8305932628663D9E9;
// System.Collections.Generic.IEnumerable`1<System.String>
struct IEnumerable_1_t349E66EC5F09B881A8E52EE40A1AB9EC60E08E44;
// System.Collections.Generic.IEqualityComparer`1<System.String>
struct IEqualityComparer_1_tAE94C8F24AD5B94D4EE85CA9FC59E3409D41CAF7;
// System.IObserver`1<Unity.RenderStreaming.InputSystem.InputRemoting/Message>
struct IObserver_1_tA894BCB49185E04D668DE4BB4E585AF78FE55A01;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.Object,System.Object>
struct KeyCollection_tB45A861D090B15129521119AE48ED3813820A974;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.String,System.String>
struct KeyCollection_t2EDD317F5771E575ACB63527B5AFB71291040342;
// System.Collections.Generic.KeyValuePair`2<UnityEngine.InputSystem.Utilities.InternedString,System.Object>
struct KeyValuePair_2_tC24A74EF64A292F5C6BA77D0B04CD6620D2DE3AC;
// System.Collections.Generic.List`1<UnityEngine.InputSystem.InputDevice>
struct List_1_t7228B1F3AC7E48407209173C7BF2B2AFBED5A4F7;
// System.Collections.Generic.List`1<System.Object>
struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D;
// System.Collections.Generic.List`1<System.String>
struct List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD;
// System.Collections.Generic.List`1<UnityEngine.InputSystem.Layouts.InputControlLayout/Collection/LayoutMatcher>
struct List_1_t4E502B2E42676E48E6F9A8F0251ADB1DF4BD490E;
// System.Collections.Generic.Queue`1<WebSocketSharp.MessageEventArgs>
struct Queue_1_t1FF73914A1CB7D2DFC1BFD8FAA96C8701452A85B;
// Unity.RenderStreaming.RoutedMessage`1<Unity.RenderStreaming.CandidateData>
struct RoutedMessage_1_t51E4C83A51CF0CC596E11B7566144BD0FDE84DD1;
// Unity.RenderStreaming.RoutedMessage`1<Unity.RenderStreaming.DescData>
struct RoutedMessage_1_t72CE37549A13355407A8430A32D1B9899B96C4B5;
// Unity.RenderStreaming.RoutedMessage`1<System.Object>
struct RoutedMessage_1_tA81CDC48341CFD7764F51400E677FCC916623AD6;
// Unity.RenderStreaming.RoutedMessage`1<Unity.RenderStreaming.SignalingMessage>
struct RoutedMessage_1_t4D757D0545252511B26BDC0D6D8F2C2F36DF1664;
// System.Threading.Tasks.Task`1<System.Int32>
struct Task_1_t4C228DE57804012969575431CFF12D57C875552D;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.String,System.String>
struct ValueCollection_t238D0D2427C6B841A01F522A41540165A2C4AE76;
// System.Collections.Generic.Dictionary`2/Entry<System.String,System.String>[]
struct EntryU5BU5D_t1AF33AD0B7330843448956EC4277517081658AE7;
// System.Collections.Generic.KeyValuePair`2<UnityEngine.InputSystem.Utilities.InternedString,System.Object>[]
struct KeyValuePair_2U5BU5D_tF8154B2302178CCE00D745DBF55F703880469DFC;
// System.Byte[]
struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031;
// System.Char[]
struct CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB;
// System.Delegate[]
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
// UnityEngine.InputSystem.InputControl[]
struct InputControlU5BU5D_t0B951FEF1504D6340387C4735F5D6F426F40FE17;
// UnityEngine.InputSystem.InputDevice[]
struct InputDeviceU5BU5D_tA9AEFC6AF63557D3D5DCFB2B26DDA6F63147D548;
// System.Int32[]
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
// System.IntPtr[]
struct IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832;
// UnityEngine.InputSystem.Utilities.InternedString[]
struct InternedStringU5BU5D_t0B851758733FC0B118D84BE83AED10A0404C18D5;
// System.Object[]
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF;
// System.String[]
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248;
// System.Type[]
struct TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB;
// System.UInt32[]
struct UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA;
// UnityEngine.InputSystem.Layouts.InputControlLayout/ControlItem[]
struct ControlItemU5BU5D_t7798E8B7C7F58B8F6D13B567539CD82E962C7104;
// Unity.RenderStreaming.InputSystem.InputRemoting/RemoteInputDevice[]
struct RemoteInputDeviceU5BU5D_tD2988955C31E6E6005201B6F2E728B014340134E;
// Unity.RenderStreaming.InputSystem.InputRemoting/RemoteSender[]
struct RemoteSenderU5BU5D_tFE32D763FD37124BA0F477F37A797F29868A3C3F;
// Unity.RenderStreaming.InputSystem.InputRemoting/Subscriber[]
struct SubscriberU5BU5D_tF989EA4535B55CD10D08D7C8C981FC376FC12C18;
// System.Action
struct Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07;
// System.ArgumentNullException
struct ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129;
// System.AsyncCallback
struct AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C;
// WebSocketSharp.Net.AuthenticationChallenge
struct AuthenticationChallenge_t6EADF65CD74974F1783AD785778A24AA7F6D00A2;
// System.Threading.AutoResetEvent
struct AutoResetEvent_t7F792F3F7AD11BEF7B411E771D98E5266A8CE7C0;
// UnityEngine.InputSystem.Controls.AxisControl
struct AxisControl_tD6613A2445A3C2BFA22C77E16CA3201AF72354A7;
// System.IO.BinaryReader
struct BinaryReader_t9A6D85F0FE9AE4EBB5E8D66997DFD1D84939E158;
// System.IO.BinaryWriter
struct BinaryWriter_tFB94D67EDFA3F6A34744A163BDABE287FDF2ED1E;
// System.Reflection.Binder
struct Binder_t91BFCE95A7057FADF4D8A1A342AFE52872246235;
// UnityEngine.InputSystem.Controls.ButtonControl
struct ButtonControl_t85949109B98AAF5B7ADC0285F0EC98A61EC88ECF;
// Unity.RenderStreaming.CandidateData
struct CandidateData_t37575B19A1050FDC713708C9C0CBD2EB498F2567;
// WebSocketSharp.Net.ClientSslConfiguration
struct ClientSslConfiguration_t212ECC383B70D9C462DC423E9D3CD27C9E74A603;
// WebSocketSharp.CloseEventArgs
struct CloseEventArgs_t5388F91E45CE32C877EA43C79F519682A7A7A609;
// System.Globalization.CodePageDataItem
struct CodePageDataItem_t52460FA30AE37F4F26ACB81055E58002262F19F2;
// WebSocketSharp.Net.CookieCollection
struct CookieCollection_t338EE72A3B05CDF04DFEE639DE5B9B1F61DDD315;
// Unity.RenderStreaming.CreateConnectionResData
struct CreateConnectionResData_tD662C466168AFA244D176C16A96FC170D132825E;
// System.Globalization.CultureInfo
struct CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0;
// System.Text.Decoder
struct Decoder_tE16E789E38B25DD304004FC630EA8B21000ECBBC;
// System.Text.DecoderFallback
struct DecoderFallback_t7324102215E4ED41EC065C02EB501CB0BC23CD90;
// System.Delegate
struct Delegate_t;
// System.DelegateData
struct DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E;
// Unity.WebRTC.DelegateOnClose
struct DelegateOnClose_t0DD876AECC9993D034876D81BB37285DD7E90BA6;
// Unity.WebRTC.DelegateOnMessage
struct DelegateOnMessage_tE81CBB87203E4F40FF44C6FEDE4BA23064ABBB62;
// Unity.WebRTC.DelegateOnOpen
struct DelegateOnOpen_tE1084803E7FCFCE83DB26F227D99BA16FB0BFA63;
// Unity.RenderStreaming.DescData
struct DescData_tA4EB7C7305FA906F4E120329023F8C778EFCB1B8;
// System.Text.Encoder
struct Encoder_tAF9067231A76315584BDF4CD27990E2F485A78FA;
// System.Text.EncoderFallback
struct EncoderFallback_tD2C40CE114AA9D8E1F7196608B2D088548015293;
// System.Text.Encoding
struct Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095;
// WebSocketSharp.ErrorEventArgs
struct ErrorEventArgs_t4A4E35A3A95F4B9C871AB4E92A97A973C1711143;
// System.EventArgs
struct EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377;
// System.EventHandler
struct EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82;
// System.Threading.EventWaitHandle
struct EventWaitHandle_t18F2EB0161747B0646A9A406015A61A214A1EB7E;
// System.Exception
struct Exception_t;
// System.Threading.ExecutionContext
struct ExecutionContext_t9D6EDFD92F0B2D391751963E2D77A8B03CB81710;
// System.Reflection.FieldInfo
struct FieldInfo_t;
// Unity.RenderStreaming.Signaling.HttpSignaling
struct HttpSignaling_t8AD4F9C09704A5FB300F225484FF569B5FDE1B9F;
// System.IAsyncResult
struct IAsyncResult_t7B9B5A0ECB35DCEC31B8A8122C37D687369253B5;
// System.Collections.IDictionary
struct IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220;
// System.IDisposable
struct IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5;
// Unity.RenderStreaming.InputSystem.IInputManager
struct IInputManager_t04CB02929EBE1ED1FFF08A760DE56B1371440513;
// System.Security.Principal.IPrincipal
struct IPrincipal_tE7AF5096287F6C3472585E124CB38FF2A51EAB5F;
// Unity.RenderStreaming.Signaling.ISignaling
struct ISignaling_t7793A8B28C799AF43ACB348A240226A19B0FA762;
// UnityEngine.InputSystem.InputControl
struct InputControl_t74F06B623518F992BF8E38656A5E0857169E3E2E;
// UnityEngine.InputSystem.Layouts.InputControlLayout
struct InputControlLayout_t46A40BE4C976BE33E85F61E63EB34323FED9831D;
// UnityEngine.InputSystem.InputDevice
struct InputDevice_t8BCF67533E872A75779C24C93D1D7085B72D364B;
// UnityEngine.InputSystem.Layouts.InputDeviceDescription
struct InputDeviceDescription_tE86DD77422AAF60ADDAC788B31E5A05E739B708F;
// UnityEngine.InputSystem.LowLevel.InputEvent
struct InputEvent_t10F727342D1A79DCFC06529C203BB61C194AEBC5;
// Unity.RenderStreaming.InputSystem.InputManager
struct InputManager_t57C115A76BE8B9259F24CF3980EF669C858CA071;
// Unity.RenderStreaming.InputPositionCorrector
struct InputPositionCorrector_tCF23AF130F6DFC2147C5A591578CB80F6C6475C2;
// Unity.RenderStreaming.InputSystem.InputRemoting
struct InputRemoting_t4BBB51BEA47ACD8A408459C612008D52240C6985;
// System.Threading.InternalThread
struct InternalThread_tF40B7BFCBD60C82BD8475A22FF5186CA10293687;
// System.InvalidOperationException
struct InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB;
// System.Net.Security.LocalCertificateSelectionCallback
struct LocalCertificateSelectionCallback_t71A03329606A5610ECC62BFBE6327C1EF9195859;
// System.LocalDataStoreHolder
struct LocalDataStoreHolder_t789DD474AE5141213C2105CE57830ECFC2D3C03F;
// System.LocalDataStoreMgr
struct LocalDataStoreMgr_t205F1783D5CC2B148E829B5882E5406FF9A3AC1E;
// WebSocketSharp.Logger
struct Logger_tEAC74E518027694C3653F7516547CE57FA0D4EB7;
// System.Threading.ManualResetEvent
struct ManualResetEvent_t63959486AA41A113A4353D0BF4A68E77EBA0A158;
// System.Reflection.MemberFilter
struct MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553;
// System.IO.MemoryStream
struct MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2;
// WebSocketSharp.MessageEventArgs
struct MessageEventArgs_tAA9D7AC324337F7494A3084C3A2E5ECA24AA6BD4;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.MulticastDelegate
struct MulticastDelegate_t;
// WebSocketSharp.Net.NetworkCredential
struct NetworkCredential_tAF63174AAA7DA3BECD41DCE272F38FC13984DFF7;
// Unity.RenderStreaming.InputSystem.Observer
struct Observer_tD4C9BC0438A3BD3EF1C50CDA6C55C2F5E12890E6;
// Unity.RenderStreaming.Signaling.OnAnswerHandler
struct OnAnswerHandler_tBF64DA7C3AB41984E338F75F069C194C8F0A1A19;
// Unity.RenderStreaming.Signaling.OnConnectHandler
struct OnConnectHandler_tF4A8A1EC5ED4BCEAB7EA0D252D6586EC660ABEB3;
// Unity.RenderStreaming.Signaling.OnDisconnectHandler
struct OnDisconnectHandler_tB1C80CDBF420D2C6F13BE728865E1912E08383C9;
// Unity.RenderStreaming.Signaling.OnIceCandidateHandler
struct OnIceCandidateHandler_tB82627B771BEE335DBC8D44AEC93B2AEC8B1E139;
// Unity.RenderStreaming.Signaling.OnOfferHandler
struct OnOfferHandler_t741D2F8DBDFDA8C010DBB5276E8D5CC35569FF86;
// Unity.RenderStreaming.Signaling.OnStartHandler
struct OnStartHandler_t295FEA9A47BD02A9B36195C055961D94C233A56F;
// WebSocketSharp.PayloadData
struct PayloadData_t70E4CA5A7C753357850775A9186AB3F9AE29F1A1;
// Unity.WebRTC.RTCDataChannel
struct RTCDataChannel_t249C16A38FD2A994D1A45381523F701A49BF1A77;
// Unity.WebRTC.RTCIceCandidate
struct RTCIceCandidate_t934E142F42C60EB706D94154B8596B73E7AB5CE4;
// System.Security.Cryptography.RandomNumberGenerator
struct RandomNumberGenerator_t4E862666A2F7D55324960670C7A1B4C2D40222F3;
// Unity.RenderStreaming.InputSystem.Receiver
struct Receiver_t3693E96FFA61969B9B9F01B3F38E241C176E8B13;
// System.Net.Security.RemoteCertificateValidationCallback
struct RemoteCertificateValidationCallback_t2F4C5801F96B2C2BF934511796C5BFEAEBF01955;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6;
// Microsoft.Win32.SafeHandles.SafeWaitHandle
struct SafeWaitHandle_t58F5662CD56F6462A687198A64987F8980804449;
// System.Threading.SemaphoreSlim
struct SemaphoreSlim_t0D5CB5685D9BFA5BF95CEC6E7395490F933E8DB2;
// System.Threading.SendOrPostCallback
struct SendOrPostCallback_t5C292A12062F24027A98492F52ECFE9802AA6F0E;
// Unity.RenderStreaming.InputSystem.Sender
struct Sender_t234F1DB016429A45DA2E9C7DF59EA1A57E1A83BF;
// Unity.RenderStreaming.SignalingMessage
struct SignalingMessage_t2661291D3E1FD73AA68A5F4C6F56E2D48DD28F75;
// System.IO.Stream
struct Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE;
// System.String
struct String_t;
// System.Threading.SynchronizationContext
struct SynchronizationContext_tCDB842BBE53B050802CBBB59C6E6DC45B5B06DC0;
// System.Net.Sockets.TcpClient
struct TcpClient_t753B702EE06B59897564F75CEBFB6C8AFF10BD58;
// System.Threading.Thread
struct Thread_t0A773B9DE873D2DCAA7D229EAB36757B500E207F;
// System.Threading.ThreadStart
struct ThreadStart_t7662D98F1793EDE90192D7304D1C3C44119328A2;
// System.Type
struct Type_t;
// System.Uri
struct Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E;
// UnityEngine.InputSystem.Controls.Vector2Control
struct Vector2Control_t8D1B4021A1D82671AF916D3C0A476AA94E46A432;
// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
// WebSocketSharp.WebSocket
struct WebSocket_tBCA6DA25533993CDAE05954CA6F61926CF134BB4;
// WebSocketSharp.Net.WebSockets.WebSocketContext
struct WebSocketContext_t864B980CACE6C6D128960E555404BC87E7A4C3F2;
// Unity.RenderStreaming.Signaling.WebSocketSignaling
struct WebSocketSignaling_t1CF887D8D67DBF0E7FA4D9FFD852C1656BCAB60F;
// System.Security.Cryptography.X509Certificates.X509Certificate
struct X509Certificate_t966CC553AF25AE7991F5B4C2AACBCF6C66C8F9C4;
// System.Security.Cryptography.X509Certificates.X509CertificateCollection
struct X509CertificateCollection_t2900D71D188EDCA7DEB5077D36103EE5DA6805CE;
// System.Security.Cryptography.X509Certificates.X509CertificateImpl
struct X509CertificateImpl_tF590E81705CE1FE152C590E5A875D4FE3BE348EF;
// System.Security.Cryptography.X509Certificates.X509Chain
struct X509Chain_t2E7F88A4C97CAB82AF938F13A11354A0475469E5;
// System.Security.Cryptography.X509Certificates.X509ChainImpl
struct X509ChainImpl_tBA1BF154DB9DC321EE068BBC53C7CF43CAA2621F;
// Unity.RenderStreaming.Signaling.HttpSignaling/<>c
struct U3CU3Ec_tBCC97D6F6D28AE3DF8C0949CEC44C2E00DD50B61;
// Unity.RenderStreaming.Signaling.HttpSignaling/<>c__DisplayClass48_0
struct U3CU3Ec__DisplayClass48_0_tF5D23F982C5E31486AD35E6BF7247BFB3290462E;
// Unity.RenderStreaming.Signaling.HttpSignaling/<>c__DisplayClass49_0
struct U3CU3Ec__DisplayClass49_0_tD14934A107086CFADD957BC657064FA93C30784D;
// Unity.RenderStreaming.Signaling.HttpSignaling/<>c__DisplayClass50_0
struct U3CU3Ec__DisplayClass50_0_t7596E60ADDA83F9C3C2E3A4941593D6E78455848;
// Unity.RenderStreaming.Signaling.HttpSignaling/<>c__DisplayClass51_0
struct U3CU3Ec__DisplayClass51_0_t9E91BBBBB3444FD00DCD137FE577EA1C12DC63DA;
// Unity.RenderStreaming.Signaling.HttpSignaling/<>c__DisplayClass52_0
struct U3CU3Ec__DisplayClass52_0_tFC89C3DCEBE64E8E91972D7E5BD90583A4345116;
// Unity.RenderStreaming.Signaling.HttpSignaling/<>c__DisplayClass53_0
struct U3CU3Ec__DisplayClass53_0_t94FCE6370518C0A6C8736E34867A0BD2903970BD;
// UnityEngine.InputSystem.LowLevel.InputEventListener/ObserverState
struct ObserverState_t147E85316A8DB8E0C6B3D4485B1480B41EA6A1A8;
// Unity.RenderStreaming.InputSystem.InputRemoting/RemoteInputDevice
struct RemoteInputDevice_t7E8AF8B413C68B7205B1F4D9EDA5BBD53ABCDB27;
// Unity.RenderStreaming.InputSystem.InputRemoting/RemoteSender
struct RemoteSender_tE4F28E5B7F46F15B1B18D890E2B8C7E96AB5F6A0;
// Unity.RenderStreaming.InputSystem.InputRemoting/Subscriber
struct Subscriber_tCE25893C3FF2E8E4590B8EFBE9DE0316FC0AD8E7;
// Unity.RenderStreaming.InputSystem.Receiver/<>c__DisplayClass33_0
struct U3CU3Ec__DisplayClass33_0_t7BB9C2C6DF625E4E7D58A039705AF481AA86BE1E;
// System.IO.Stream/ReadWriteTask
struct ReadWriteTask_t0821BF49EE38596C7734E86E1A6A39D769BE2C05;
// Unity.RenderStreaming.Signaling.WebSocketSignaling/<>c__DisplayClass40_0
struct U3CU3Ec__DisplayClass40_0_t99C91E680A787779B8EF8C4F759C3D5F0253CD9C;
// Unity.RenderStreaming.Signaling.WebSocketSignaling/<>c__DisplayClass40_1
struct U3CU3Ec__DisplayClass40_1_t89052BF20BD4AE4E27BCEE4CB46B0449FE981A85;
// Unity.RenderStreaming.Signaling.WebSocketSignaling/<>c__DisplayClass40_2
struct U3CU3Ec__DisplayClass40_2_t2FD87832B5721C3236040338A04B8D226CE932FA;
// Unity.RenderStreaming.Signaling.WebSocketSignaling/<>c__DisplayClass40_3
struct U3CU3Ec__DisplayClass40_3_t2495E95291EA54819DDC684E5F9994BF6C7D7158;
// Unity.RenderStreaming.InputSystem.InputRemoting/ChangeUsageMsg/<>c
struct U3CU3Ec_tA2EA796D5C35FC8D6899C102F19A1D897D01B010;

IL2CPP_EXTERN_C RuntimeClass* Action_1_t62CFC7E46D3237DF830A4F831466D93C80CCEB03_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Action_2_t4797B88C63509F2EE4385D6DABE6A4B5AD5393F7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Action_2_t4943DD8C32CAB983950535CEF3BABA85DF8C9AAA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Action_2_tB79528C85CFEF7DFF52C575DDAA398D2FE6BC333_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* AutoResetEvent_t7F792F3F7AD11BEF7B411E771D98E5266A8CE7C0_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* BinaryReader_t9A6D85F0FE9AE4EBB5E8D66997DFD1D84939E158_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* BinaryWriter_tFB94D67EDFA3F6A34744A163BDABE287FDF2ED1E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* BitConverter_t6E99605185963BC12B3D369E13F2B88997E64A27_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* CandidateData_t37575B19A1050FDC713708C9C0CBD2EB498F2567_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Data_t388E6D9BE25175D528F87ED2B794D4CCA12E1632_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* DelegateOnMessage_tE81CBB87203E4F40FF44C6FEDE4BA23064ABBB62_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* DescData_tA4EB7C7305FA906F4E120329023F8C778EFCB1B8_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* EventHandler_1_t522FAB2F4CBA6A3D12166027B1D4A1C8C94D68E5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* EventHandler_1_t8D76D9242722744EEBFEF94F3AE19600E1D651B9_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* EventHandler_1_tEF41E797A6883ACCC9C7536EEEB557E1EFC8C291_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Exception_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Func_2_tAB9727E0C937894E19032D575D98A8A9AB5EE47D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Func_2_tE0082B3C229A425A69ECDABB19259709EC9F540F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerable_1_t349E66EC5F09B881A8E52EE40A1AB9EC60E08E44_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerator_1_t73FD060C436E3C4264A734C8F8DCC01DFF6046B8_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IInputManager_t04CB02929EBE1ED1FFF08A760DE56B1371440513_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IObserver_1_tA894BCB49185E04D668DE4BB4E585AF78FE55A01_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* InputDeviceDescription_tE86DD77422AAF60ADDAC788B31E5A05E739B708F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* InputDeviceExtension_t90A527D9A693F6B5659B842825B8CB85FF12BA75_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* InputPositionCorrector_tCF23AF130F6DFC2147C5A591578CB80F6C6475C2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* InputRemoting_t4BBB51BEA47ACD8A408459C612008D52240C6985_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* InputSystem_t4120CA4FE7DCFD56AF9391933FC3F1F485350164_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t7228B1F3AC7E48407209173C7BF2B2AFBED5A4F7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* OnAnswerHandler_tBF64DA7C3AB41984E338F75F069C194C8F0A1A19_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* OnConnectHandler_tF4A8A1EC5ED4BCEAB7EA0D252D6586EC660ABEB3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* OnDisconnectHandler_tB1C80CDBF420D2C6F13BE728865E1912E08383C9_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* OnIceCandidateHandler_tB82627B771BEE335DBC8D44AEC93B2AEC8B1E139_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* OnOfferHandler_t741D2F8DBDFDA8C010DBB5276E8D5CC35569FF86_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* OnStartHandler_t295FEA9A47BD02A9B36195C055961D94C233A56F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Pointer_t800EF2832B62E889AC9C182E3B18098AF220E32A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ReadOnlyArray_1_t1C2864D7CF4D444AB2616316AC8DD33932F77064_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* RoutedMessage_1_t51E4C83A51CF0CC596E11B7566144BD0FDE84DD1_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* RoutedMessage_1_t72CE37549A13355407A8430A32D1B9899B96C4B5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SendOrPostCallback_t5C292A12062F24027A98492F52ECFE9802AA6F0E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* String_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Subscriber_tCE25893C3FF2E8E4590B8EFBE9DE0316FC0AD8E7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ThreadAbortException_tCA1833E5D49782387EDF3BDCBDB90597B273F3C4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ThreadStart_t7662D98F1793EDE90192D7304D1C3C44119328A2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Thread_t0A773B9DE873D2DCAA7D229EAB36757B500E207F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Type_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec__DisplayClass33_0_t7BB9C2C6DF625E4E7D58A039705AF481AA86BE1E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec__DisplayClass40_0_t99C91E680A787779B8EF8C4F759C3D5F0253CD9C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec__DisplayClass40_1_t89052BF20BD4AE4E27BCEE4CB46B0449FE981A85_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec__DisplayClass40_2_t2FD87832B5721C3236040338A04B8D226CE932FA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec__DisplayClass40_3_t2495E95291EA54819DDC684E5F9994BF6C7D7158_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec_tA2EA796D5C35FC8D6899C102F19A1D897D01B010_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec_tBCC97D6F6D28AE3DF8C0949CEC44C2E00DD50B61_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* WebSocket_tBCA6DA25533993CDAE05954CA6F61926CF134BB4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral003531A8905C0318CCA6B86CFBA2B8FA0E6167FD;
IL2CPP_EXTERN_C String_t* _stringLiteral0D7B09E12485C810F081F17A8044CDE7672DB625;
IL2CPP_EXTERN_C String_t* _stringLiteral0FD7B3C1033C1EF1C45607B35492B62E1CFC7C11;
IL2CPP_EXTERN_C String_t* _stringLiteral229E903C904BB5E01E1C45CFDA6C05B7D8D31376;
IL2CPP_EXTERN_C String_t* _stringLiteral29CFF9E8577D5EAEC7E04E5FB6FBCD085686B9FE;
IL2CPP_EXTERN_C String_t* _stringLiteral35B7DCBEA1091B04EE590ABDB15EAB07E49F379A;
IL2CPP_EXTERN_C String_t* _stringLiteral464F70DC593F98B22B468600E676CA836C447D3D;
IL2CPP_EXTERN_C String_t* _stringLiteral4FB3818413F5C6BB2073C3F5D962C6CBF406B669;
IL2CPP_EXTERN_C String_t* _stringLiteral56D7741BCA89552362FD24D11BB8980E3D8A444C;
IL2CPP_EXTERN_C String_t* _stringLiteral63E06DA33BF42B84F79A3155FFA82A75445E9851;
IL2CPP_EXTERN_C String_t* _stringLiteral6A96E171FF5210D477623DA1C8B47807B594EA39;
IL2CPP_EXTERN_C String_t* _stringLiteral7120117F05D22D2E7896A683779335C0436DA385;
IL2CPP_EXTERN_C String_t* _stringLiteral7EABC29EBD9BD52BA963D8983452A4A7407EBE6F;
IL2CPP_EXTERN_C String_t* _stringLiteral86A58CBE637BA144B1B73130A283C762A1E941A1;
IL2CPP_EXTERN_C String_t* _stringLiteral876404D8489FA4C9A937BE834E63D4975D8904E0;
IL2CPP_EXTERN_C String_t* _stringLiteral89D2F03F951168C1FEEF991E1A8224E044D67583;
IL2CPP_EXTERN_C String_t* _stringLiteral8DCE5BB934884385E28323297AB2F0E3F3B45643;
IL2CPP_EXTERN_C String_t* _stringLiteral8FD2FCE61414AB2192F02CF2453DC0DD532613F8;
IL2CPP_EXTERN_C String_t* _stringLiteral9A9DC7F908538ABD4F1AF19725A892AB2EE8A719;
IL2CPP_EXTERN_C String_t* _stringLiteralB224BE3FF06739D3E85730D9911028055A683608;
IL2CPP_EXTERN_C String_t* _stringLiteralB291DDBE097863E5F2E2AF085D00F6BAA42C7409;
IL2CPP_EXTERN_C String_t* _stringLiteralBAD5FE84D15EDBD517B275E85C3C6624E54479AD;
IL2CPP_EXTERN_C String_t* _stringLiteralBB3781D7286A764A3E7F998A050070B48E727D5B;
IL2CPP_EXTERN_C String_t* _stringLiteralBD167AEAE5312BD016BB8E53CBDF290947BF4F27;
IL2CPP_EXTERN_C String_t* _stringLiteralC21AA4F5FE69346E31AFC76EDFE0CD96E3B75776;
IL2CPP_EXTERN_C String_t* _stringLiteralC5F9A00AEC344617DD2E1677B514B1A5BEBCDDFC;
IL2CPP_EXTERN_C String_t* _stringLiteralD5F2751FCD979A5D75A2B143601934884E0565F4;
IL2CPP_EXTERN_C String_t* _stringLiteralE7B220013188086E72EF0A5D72D3E2087CEA10DB;
IL2CPP_EXTERN_C String_t* _stringLiteralF15E72E03C607420BD2E3D65E07F0C50155C1C30;
IL2CPP_EXTERN_C String_t* _stringLiteralF985F8BC55251C0AE00E3E2022EC6C7180CE8764;
IL2CPP_EXTERN_C String_t* _stringLiteralFCA74A9060DDEE6A3ECAE73E6AB96086770BE7E2;
IL2CPP_EXTERN_C const RuntimeMethod* ArrayHelpers_Append_TisRemoteInputDevice_t7E8AF8B413C68B7205B1F4D9EDA5BBD53ABCDB27_m3D2487C0F5E3A17654513B724F09E9DA7EBEC8BB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ArrayHelpers_Append_TisRemoteSender_tE4F28E5B7F46F15B1B18D890E2B8C7E96AB5F6A0_m1303D0C5E4B417079D6D681FC811AEE8E645F162_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ArrayHelpers_Append_TisString_t_m329B98CBF498D193DCD469806BBB87D8A4578EE0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ArrayHelpers_Append_TisSubscriber_tCE25893C3FF2E8E4590B8EFBE9DE0316FC0AD8E7_m6BEE27048FF4C626789BA127C739F3210F3FE9CD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ArrayHelpers_EraseAt_TisRemoteSender_tE4F28E5B7F46F15B1B18D890E2B8C7E96AB5F6A0_m79F8957091D78FB48FB1BF51DA20C4CE5DD3ADB6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ArrayHelpers_Erase_TisSubscriber_tCE25893C3FF2E8E4590B8EFBE9DE0316FC0AD8E7_m057DFF39D9E682660E1EA3FC6302450854771944_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Array_Empty_TisString_t_m065B1C7D00E4F3FB1305F00C8AF7E73B05CE825B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_Add_mC78C20D5901C87AAC38F37C906FAB6946BDE5F13_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_Remove_mD816BB81544F3B37050A72FD7BA22E6A3D53BBFC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_TryGetValue_mA86D965CB5F74CE8675B7995C61945BEB6E594CB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2__ctor_m768E076F1E804CE4959F4E71D3E6A9ADE2F55052_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_get_Count_m65C62C77C355CFCE2CC0ED6D817637E1909E0843_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_get_Keys_m0014C8E91B9B4377ACFBD26A9175A7E5C016D9E9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerable_Count_TisString_t_m817BB8D7A32098126CC975E91C64732B1DB8CFB0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerable_Empty_TisString_t_m59E0A7B1D4568D8BAFB2A883E33227C84FA2B167_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerable_First_TisKeyValuePair_2_t47AB280304B50F542FD7E14F25DB2C374AEDD80A_m2F7A0F03DDFAC20AB000E80BAF5BDDD68EE9FF1C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerable_Select_TisInternedString_t8D62A48CB7D85AAE9CFCCCFB0A77AC2844905735_TisString_t_m4121F7A55EC2BCE9D2E38AF2C27E16AA95C8D893_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerable_ToArray_TisString_t_mCD2BC789CBFF834E06F00948FC47E15E720936DC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_Dispose_mF7167BCE82C30E7D09082FFCA3F3EFFD32B186CB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_mFAC408E08BBD06FE731A9E84F5E79461F23EACBC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_mFB31F2643918A411B2F1539CA180A763D0200945_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* InputEventPtr_IsA_TisStateEvent_tB93D5F08B084A2BC9FFC71B084409DBBD2516C0F_mA9BDDBB4B234A924F74AB0343F6F3CFDBFF70327_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* InputRemoting_DeserializeData_TisData_t388E6D9BE25175D528F87ED2B794D4CCA12E1632_m1B84B22792D9FD67CAA168344CB753E44F221357_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* InputRemoting_DeserializeData_TisData_t3CDE355508AFD01E1939C50BA8D1CADCC2959561_m2CE0C78AFB0AE1DADC5B6D9D21D3670A65FD8B02_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* InputRemoting_DeserializeData_TisData_t996B414526496A00392F034F2FE6F541A31CA819_m9B4ADD5BE9DCFB37101D1759CF50E2A818F909F8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* InputRemoting_SendDeviceChange_m4BB79774162C085ACB5A7DCE444726B62EE4306B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* InputRemoting_SendEvent_m31F4EAB61919DC06BD3B8DA7D2550B41A37EE7E2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* InputRemoting_SendLayoutChange_m7EAFDE3C941AF2C15E923CC6119FBA502D2FCE80_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* InputRemoting_Send_m5D671416EDF3316E84D23325654D4E92E3874481_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* InputRemoting_SerializeData_TisData_t3CDE355508AFD01E1939C50BA8D1CADCC2959561_mFE321BB814975EA3E148F680FF725B4B051DFA1E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* InputRemoting_SerializeData_TisData_t996B414526496A00392F034F2FE6F541A31CA819_m8C575790DA6AC3108C560FDC020920C2CBA41846_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* InputRemoting_Subscribe_m3650F1D497C46AFBB380F631F219E0621757B181_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* InputRemoting__ctor_m402BE2C33DD02EEED0FF43941D7F25042FB77E15_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* JsonUtility_FromJson_TisRoutedMessage_1_t4D757D0545252511B26BDC0D6D8F2C2F36DF1664_mEB26E05A22F9AB83AE1FD09DEF8BFE7E2D646DC2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* JsonUtility_FromJson_TisSignalingMessage_t2661291D3E1FD73AA68A5F4C6F56E2D48DD28F75_m4661B0E5AB867B5EC321C3BE8B5060494FCBF55E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* KeyValuePair_2_get_Key_m654BCCAE2F20CB11D8E8C2D2C886A0C8A13EB1C4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_m3EA74E0C476E0197F84637414E722866A8EE48E1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Contains_m359254483BE42CAD4DCA8FBAFB87473FB4CF00E1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Remove_m2BC507498E26A6E5D158CC7FB8EDEDDFC6BDC647_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Remove_mD9E8CFB6777A99046B3C0195F7343FE771A2E99D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_ToArray_m0677C6BE36424C545A5EBE70F7F1F509CE9B95A3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m7F6D93ACCD15D757B54BDB302DB4D63F855418C4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_mCA8DD57EAC70C2B5923DBB9D5A77CEAC22E7068E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_mA1ED4EC9A15A623C97C494578B74F7F49BADE472_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_m3537C03FE10D4B303FDA30D5D9919811FCCB7C87_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* NativeArray_1_Dispose_m8B0F342847ECB90EB814E1F6AA5BF7DC2F271AEA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Nullable_1_GetValueOrDefault_m0F743BF8CC3F18E8288210EBA987C3DBFA7FC8C9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Nullable_1__ctor_mAD5430FE1FB829B55B9BE53CC89A036069AEDC90_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Nullable_1_get_HasValue_mB0EB37808971A8C9C6034F5EF00AA28A8758520C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Nullable_1_get_Value_m5E4FBECB1D4CDA8E5D1BB691EDF90C4F3510E3B9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Observer__ctor_mE0865EC4A7DC5417CA869AAEBC1AC255AFEFC55F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ReadOnlyArray_1_GetEnumerator_m40DC2BB2BC3C855369753E8780E2B2DE6F38E88C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ReadOnlyArray_1__ctor_mB7B2530C845265544A7EEC8827BDBDC9AAD59967_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ReadOnlyArray_1__ctor_mD59ECD80D43585A6BAEE5238FDA72B9D15F9E6D3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Receiver_AddDevice_m9A90B2BADC0E35A3EBA37E5012C9BD172A4B0380_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Receiver_OnMessage_mA279BBE3C3FE2E6D6D3B80F96278E8026C0D8838_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Receiver_U3C_ctorU3Eb__19_0_m9ADAF334C7EA1BA4F2AB721FF8B676803F8BDCB1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Receiver__ctor_m55A42D83C0FA4A3CCD34B65A2F046E1E76A53A05_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* RoutedMessage_1__ctor_m1F6081FAA95C98F9346C78BDB810A6165DE7D01F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* RoutedMessage_1__ctor_mE946583C5CA695C6701F66A66BEC57B1ECF24D06_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Sender_OnDeviceChange_m38E18E128487F5B5BF8E2DDC563A6FB880BD1C4C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Sender_OnEvent_mCCC4F229AAF58287A7D847336E6E7716B7972968_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Sender_OnLayoutChange_mEFD1A33A65C4CEF4C9A7AC16D4F4877149B5DD53_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Sender_U3C_ctorU3Eb__11_0_m49B33F3E980B1C6F2D348872BC508AEA29DE10DE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec_U3CCreateU3Eb__1_0_m38E04646821C60BF5DFF7492E7A54D10ACDF2B6A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass33_0_U3CAddDeviceU3Eb__0_mC4557290A9C0C0D19B67630EC93225107C5A6E4F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass40_0_U3CWSProcessMessageU3Eb__0_m8167F73D148449556A63867E9823576D10F38AB2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass40_0_U3CWSProcessMessageU3Eb__1_m9ACC4D613B84AEA48E9464A39D4C0B6D5225AEE9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass40_1_U3CWSProcessMessageU3Eb__2_mAB198CB34675DCD657CC4AEE1A04047741CD7F77_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass40_2_U3CWSProcessMessageU3Eb__3_m0D4D8D94FD9BE6A44BF2EEAE69B832D00BFE18BD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass40_3_U3CWSProcessMessageU3Eb__4_mEADFA38B7E32E5B9F4C86E2738EB04F876D2B78A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* WebSocketSignaling_Start_mAB5254331FDE04725D2352A075D2277E2B6043D0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* WebSocketSignaling_U3CWSConnectedU3Eb__41_0_m61689DEFD0E6CC072C559E8869F61FE18B5ED5F9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* WebSocketSignaling_WSClosed_mB101C26ECD6C7C8361A689FEAFB6711FBC81C8F3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* WebSocketSignaling_WSConnected_mD28D6B5B97E0B84086AFFDB5139A248174E86C10_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* WebSocketSignaling_WSError_mB634A7245B74AF24881D111C814634A72586ADA9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* WebSocketSignaling_WSManage_m7EDE83D822EE2344FEEEBF12AE21372504A2B814_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* WebSocketSignaling_WSProcessMessage_m9BC18052522F1ADC3781E186DA401EB7D9337C46_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeType* InputDevice_t8BCF67533E872A75779C24C93D1D7085B72D364B_0_0_0_var;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;
struct InputDeviceDescription_tE86DD77422AAF60ADDAC788B31E5A05E739B708F;;
struct InputDeviceDescription_tE86DD77422AAF60ADDAC788B31E5A05E739B708F_marshaled_com;
struct InputDeviceDescription_tE86DD77422AAF60ADDAC788B31E5A05E739B708F_marshaled_com;;
struct InputDeviceDescription_tE86DD77422AAF60ADDAC788B31E5A05E739B708F_marshaled_pinvoke;
struct InputDeviceDescription_tE86DD77422AAF60ADDAC788B31E5A05E739B708F_marshaled_pinvoke;;
struct RemoteInputDevice_t7E8AF8B413C68B7205B1F4D9EDA5BBD53ABCDB27;;
struct RemoteInputDevice_t7E8AF8B413C68B7205B1F4D9EDA5BBD53ABCDB27_marshaled_com;
struct RemoteInputDevice_t7E8AF8B413C68B7205B1F4D9EDA5BBD53ABCDB27_marshaled_com;;
struct RemoteInputDevice_t7E8AF8B413C68B7205B1F4D9EDA5BBD53ABCDB27_marshaled_pinvoke;
struct RemoteInputDevice_t7E8AF8B413C68B7205B1F4D9EDA5BBD53ABCDB27_marshaled_pinvoke;;
struct RemoteSender_tE4F28E5B7F46F15B1B18D890E2B8C7E96AB5F6A0;;
struct RemoteSender_tE4F28E5B7F46F15B1B18D890E2B8C7E96AB5F6A0_marshaled_com;
struct RemoteSender_tE4F28E5B7F46F15B1B18D890E2B8C7E96AB5F6A0_marshaled_com;;
struct RemoteSender_tE4F28E5B7F46F15B1B18D890E2B8C7E96AB5F6A0_marshaled_pinvoke;
struct RemoteSender_tE4F28E5B7F46F15B1B18D890E2B8C7E96AB5F6A0_marshaled_pinvoke;;

struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031;
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
struct InputDeviceU5BU5D_tA9AEFC6AF63557D3D5DCFB2B26DDA6F63147D548;
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248;
struct RemoteInputDeviceU5BU5D_tD2988955C31E6E6005201B6F2E728B014340134E;
struct RemoteSenderU5BU5D_tFE32D763FD37124BA0F477F37A797F29868A3C3F;
struct SubscriberU5BU5D_tF989EA4535B55CD10D08D7C8C981FC376FC12C18;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.Dictionary`2<System.String,System.String>
struct Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83  : public RuntimeObject
{
	// System.Int32[] System.Collections.Generic.Dictionary`2::_buckets
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::_entries
	EntryU5BU5D_t1AF33AD0B7330843448956EC4277517081658AE7* ____entries_1;
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
	KeyCollection_t2EDD317F5771E575ACB63527B5AFB71291040342* ____keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_values
	ValueCollection_t238D0D2427C6B841A01F522A41540165A2C4AE76* ____values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject* ____syncRoot_9;
};

// System.EmptyArray`1<System.Object>
struct EmptyArray_1_tDF0DD7256B115243AA6BD5558417387A734240EE  : public RuntimeObject
{
};

struct EmptyArray_1_tDF0DD7256B115243AA6BD5558417387A734240EE_StaticFields
{
	// T[] System.EmptyArray`1::Value
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___Value_0;
};

// System.Linq.EmptyEnumerable`1<System.Object>
struct EmptyEnumerable_1_t8C8873EF4F89FB0F86D91BA5B4D640E3A23AD28E  : public RuntimeObject
{
};

struct EmptyEnumerable_1_t8C8873EF4F89FB0F86D91BA5B4D640E3A23AD28E_StaticFields
{
	// TElement[] System.Linq.EmptyEnumerable`1::Instance
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___Instance_0;
};

// System.Collections.Generic.Dictionary`2/KeyCollection<System.String,System.String>
struct KeyCollection_t2EDD317F5771E575ACB63527B5AFB71291040342  : public RuntimeObject
{
	// System.Collections.Generic.Dictionary`2<TKey,TValue> System.Collections.Generic.Dictionary`2/KeyCollection::_dictionary
	Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* ____dictionary_0;
};

// System.Collections.Generic.List`1<UnityEngine.InputSystem.InputDevice>
struct List_1_t7228B1F3AC7E48407209173C7BF2B2AFBED5A4F7  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	InputDeviceU5BU5D_tA9AEFC6AF63557D3D5DCFB2B26DDA6F63147D548* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_t7228B1F3AC7E48407209173C7BF2B2AFBED5A4F7_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	InputDeviceU5BU5D_tA9AEFC6AF63557D3D5DCFB2B26DDA6F63147D548* ___s_emptyArray_5;
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

// System.Collections.Generic.List`1<System.String>
struct List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___s_emptyArray_5;
};

// Unity.RenderStreaming.RoutedMessage`1<Unity.RenderStreaming.CandidateData>
struct RoutedMessage_1_t51E4C83A51CF0CC596E11B7566144BD0FDE84DD1  : public RuntimeObject
{
	// System.String Unity.RenderStreaming.RoutedMessage`1::from
	String_t* ___from_0;
	// System.String Unity.RenderStreaming.RoutedMessage`1::to
	String_t* ___to_1;
	// System.String Unity.RenderStreaming.RoutedMessage`1::type
	String_t* ___type_2;
	// T Unity.RenderStreaming.RoutedMessage`1::data
	CandidateData_t37575B19A1050FDC713708C9C0CBD2EB498F2567* ___data_3;
};

// Unity.RenderStreaming.RoutedMessage`1<Unity.RenderStreaming.DescData>
struct RoutedMessage_1_t72CE37549A13355407A8430A32D1B9899B96C4B5  : public RuntimeObject
{
	// System.String Unity.RenderStreaming.RoutedMessage`1::from
	String_t* ___from_0;
	// System.String Unity.RenderStreaming.RoutedMessage`1::to
	String_t* ___to_1;
	// System.String Unity.RenderStreaming.RoutedMessage`1::type
	String_t* ___type_2;
	// T Unity.RenderStreaming.RoutedMessage`1::data
	DescData_tA4EB7C7305FA906F4E120329023F8C778EFCB1B8* ___data_3;
};

// Unity.RenderStreaming.RoutedMessage`1<Unity.RenderStreaming.SignalingMessage>
struct RoutedMessage_1_t4D757D0545252511B26BDC0D6D8F2C2F36DF1664  : public RuntimeObject
{
	// System.String Unity.RenderStreaming.RoutedMessage`1::from
	String_t* ___from_0;
	// System.String Unity.RenderStreaming.RoutedMessage`1::to
	String_t* ___to_1;
	// System.String Unity.RenderStreaming.RoutedMessage`1::type
	String_t* ___type_2;
	// T Unity.RenderStreaming.RoutedMessage`1::data
	SignalingMessage_t2661291D3E1FD73AA68A5F4C6F56E2D48DD28F75* ___data_3;
};
struct Il2CppArrayBounds;

// System.IO.BinaryReader
struct BinaryReader_t9A6D85F0FE9AE4EBB5E8D66997DFD1D84939E158  : public RuntimeObject
{
	// System.IO.Stream System.IO.BinaryReader::m_stream
	Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* ___m_stream_0;
	// System.Byte[] System.IO.BinaryReader::m_buffer
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___m_buffer_1;
	// System.Text.Decoder System.IO.BinaryReader::m_decoder
	Decoder_tE16E789E38B25DD304004FC630EA8B21000ECBBC* ___m_decoder_2;
	// System.Byte[] System.IO.BinaryReader::m_charBytes
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___m_charBytes_3;
	// System.Char[] System.IO.BinaryReader::m_singleChar
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___m_singleChar_4;
	// System.Char[] System.IO.BinaryReader::m_charBuffer
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___m_charBuffer_5;
	// System.Int32 System.IO.BinaryReader::m_maxCharsSize
	int32_t ___m_maxCharsSize_6;
	// System.Boolean System.IO.BinaryReader::m_2BytesPerChar
	bool ___m_2BytesPerChar_7;
	// System.Boolean System.IO.BinaryReader::m_isMemoryStream
	bool ___m_isMemoryStream_8;
	// System.Boolean System.IO.BinaryReader::m_leaveOpen
	bool ___m_leaveOpen_9;
};

// System.IO.BinaryWriter
struct BinaryWriter_tFB94D67EDFA3F6A34744A163BDABE287FDF2ED1E  : public RuntimeObject
{
	// System.IO.Stream System.IO.BinaryWriter::OutStream
	Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* ___OutStream_1;
	// System.Byte[] System.IO.BinaryWriter::_buffer
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ____buffer_2;
	// System.Text.Encoding System.IO.BinaryWriter::_encoding
	Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ____encoding_3;
	// System.Text.Encoder System.IO.BinaryWriter::_encoder
	Encoder_tAF9067231A76315584BDF4CD27990E2F485A78FA* ____encoder_4;
	// System.Boolean System.IO.BinaryWriter::_leaveOpen
	bool ____leaveOpen_5;
	// System.Byte[] System.IO.BinaryWriter::_largeByteBuffer
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ____largeByteBuffer_6;
	// System.Int32 System.IO.BinaryWriter::_maxChars
	int32_t ____maxChars_7;
};

struct BinaryWriter_tFB94D67EDFA3F6A34744A163BDABE287FDF2ED1E_StaticFields
{
	// System.IO.BinaryWriter System.IO.BinaryWriter::Null
	BinaryWriter_tFB94D67EDFA3F6A34744A163BDABE287FDF2ED1E* ___Null_0;
};

// Unity.RenderStreaming.CandidateData
struct CandidateData_t37575B19A1050FDC713708C9C0CBD2EB498F2567  : public RuntimeObject
{
	// System.String Unity.RenderStreaming.CandidateData::connectionId
	String_t* ___connectionId_0;
	// System.String Unity.RenderStreaming.CandidateData::candidate
	String_t* ___candidate_1;
	// System.String Unity.RenderStreaming.CandidateData::sdpMid
	String_t* ___sdpMid_2;
	// System.Int32 Unity.RenderStreaming.CandidateData::sdpMLineIndex
	int32_t ___sdpMLineIndex_3;
};

// Unity.RenderStreaming.CreateConnectionResData
struct CreateConnectionResData_tD662C466168AFA244D176C16A96FC170D132825E  : public RuntimeObject
{
	// System.String Unity.RenderStreaming.CreateConnectionResData::connectionId
	String_t* ___connectionId_0;
	// System.Boolean Unity.RenderStreaming.CreateConnectionResData::polite
	bool ___polite_1;
};

// System.Runtime.ConstrainedExecution.CriticalFinalizerObject
struct CriticalFinalizerObject_t1DCAB623CAEA6529A96F5F3EDE3C7048A6E313C9  : public RuntimeObject
{
};

// Unity.RenderStreaming.DescData
struct DescData_tA4EB7C7305FA906F4E120329023F8C778EFCB1B8  : public RuntimeObject
{
	// System.String Unity.RenderStreaming.DescData::connectionId
	String_t* ___connectionId_0;
	// System.String Unity.RenderStreaming.DescData::sdp
	String_t* ___sdp_1;
	// System.String Unity.RenderStreaming.DescData::type
	String_t* ___type_2;
	// System.Boolean Unity.RenderStreaming.DescData::polite
	bool ___polite_3;
};

// System.Text.Encoding
struct Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095  : public RuntimeObject
{
	// System.Int32 System.Text.Encoding::m_codePage
	int32_t ___m_codePage_9;
	// System.Globalization.CodePageDataItem System.Text.Encoding::dataItem
	CodePageDataItem_t52460FA30AE37F4F26ACB81055E58002262F19F2* ___dataItem_10;
	// System.Boolean System.Text.Encoding::m_deserializedFromEverett
	bool ___m_deserializedFromEverett_11;
	// System.Boolean System.Text.Encoding::m_isReadOnly
	bool ___m_isReadOnly_12;
	// System.Text.EncoderFallback System.Text.Encoding::encoderFallback
	EncoderFallback_tD2C40CE114AA9D8E1F7196608B2D088548015293* ___encoderFallback_13;
	// System.Text.DecoderFallback System.Text.Encoding::decoderFallback
	DecoderFallback_t7324102215E4ED41EC065C02EB501CB0BC23CD90* ___decoderFallback_14;
};

struct Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095_StaticFields
{
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::defaultEncoding
	Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___defaultEncoding_0;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::unicodeEncoding
	Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___unicodeEncoding_1;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::bigEndianUnicode
	Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___bigEndianUnicode_2;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::utf7Encoding
	Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___utf7Encoding_3;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::utf8Encoding
	Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___utf8Encoding_4;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::utf32Encoding
	Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___utf32Encoding_5;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::asciiEncoding
	Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___asciiEncoding_6;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::latin1Encoding
	Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___latin1Encoding_7;
	// System.Collections.Generic.Dictionary`2<System.Int32,System.Text.Encoding> modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::encodings
	Dictionary_2_t87EDE08B2E48F793A22DE50D6B3CC2E7EBB2DB54* ___encodings_8;
	// System.Object System.Text.Encoding::s_InternalSyncObject
	RuntimeObject* ___s_InternalSyncObject_15;
};

// System.EventArgs
struct EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377  : public RuntimeObject
{
};

struct EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377_StaticFields
{
	// System.EventArgs System.EventArgs::Empty
	EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377* ___Empty_0;
};

// Unity.RenderStreaming.Signaling.HttpSignaling
struct HttpSignaling_t8AD4F9C09704A5FB300F225484FF569B5FDE1B9F  : public RuntimeObject
{
	// System.String Unity.RenderStreaming.Signaling.HttpSignaling::m_url
	String_t* ___m_url_0;
	// System.Single Unity.RenderStreaming.Signaling.HttpSignaling::m_timeout
	float ___m_timeout_1;
	// System.Threading.SynchronizationContext Unity.RenderStreaming.Signaling.HttpSignaling::m_mainThreadContext
	SynchronizationContext_tCDB842BBE53B050802CBBB59C6E6DC45B5B06DC0* ___m_mainThreadContext_2;
	// System.Boolean Unity.RenderStreaming.Signaling.HttpSignaling::m_running
	bool ___m_running_3;
	// System.Threading.Thread Unity.RenderStreaming.Signaling.HttpSignaling::m_signalingThread
	Thread_t0A773B9DE873D2DCAA7D229EAB36757B500E207F* ___m_signalingThread_4;
	// System.String Unity.RenderStreaming.Signaling.HttpSignaling::m_sessionId
	String_t* ___m_sessionId_5;
	// System.Int64 Unity.RenderStreaming.Signaling.HttpSignaling::m_lastTimeGetOfferRequest
	int64_t ___m_lastTimeGetOfferRequest_6;
	// System.Int64 Unity.RenderStreaming.Signaling.HttpSignaling::m_lastTimeGetAnswerRequest
	int64_t ___m_lastTimeGetAnswerRequest_7;
	// System.Int64 Unity.RenderStreaming.Signaling.HttpSignaling::m_lastTimeGetCandidateRequest
	int64_t ___m_lastTimeGetCandidateRequest_8;
	// System.Collections.Generic.HashSet`1<System.String> Unity.RenderStreaming.Signaling.HttpSignaling::m_connection
	HashSet_1_tEFC6605F7DE53F71946C33FD371E53C3100F2178* ___m_connection_9;
	// Unity.RenderStreaming.Signaling.OnStartHandler Unity.RenderStreaming.Signaling.HttpSignaling::OnStart
	OnStartHandler_t295FEA9A47BD02A9B36195C055961D94C233A56F* ___OnStart_10;
	// Unity.RenderStreaming.Signaling.OnConnectHandler Unity.RenderStreaming.Signaling.HttpSignaling::OnCreateConnection
	OnConnectHandler_tF4A8A1EC5ED4BCEAB7EA0D252D6586EC660ABEB3* ___OnCreateConnection_11;
	// Unity.RenderStreaming.Signaling.OnDisconnectHandler Unity.RenderStreaming.Signaling.HttpSignaling::OnDestroyConnection
	OnDisconnectHandler_tB1C80CDBF420D2C6F13BE728865E1912E08383C9* ___OnDestroyConnection_12;
	// Unity.RenderStreaming.Signaling.OnOfferHandler Unity.RenderStreaming.Signaling.HttpSignaling::OnOffer
	OnOfferHandler_t741D2F8DBDFDA8C010DBB5276E8D5CC35569FF86* ___OnOffer_13;
	// Unity.RenderStreaming.Signaling.OnAnswerHandler Unity.RenderStreaming.Signaling.HttpSignaling::OnAnswer
	OnAnswerHandler_tBF64DA7C3AB41984E338F75F069C194C8F0A1A19* ___OnAnswer_14;
	// Unity.RenderStreaming.Signaling.OnIceCandidateHandler Unity.RenderStreaming.Signaling.HttpSignaling::OnIceCandidate
	OnIceCandidateHandler_tB82627B771BEE335DBC8D44AEC93B2AEC8B1E139* ___OnIceCandidate_15;
};

// Unity.RenderStreaming.InputSystem.InputDeviceExtension
struct InputDeviceExtension_t90A527D9A693F6B5659B842825B8CB85FF12BA75  : public RuntimeObject
{
};

struct InputDeviceExtension_t90A527D9A693F6B5659B842825B8CB85FF12BA75_StaticFields
{
	// System.Type Unity.RenderStreaming.InputSystem.InputDeviceExtension::typeInputDevice
	Type_t* ___typeInputDevice_0;
	// System.Reflection.FieldInfo Unity.RenderStreaming.InputSystem.InputDeviceExtension::fieldInfoParticipantId
	FieldInfo_t* ___fieldInfoParticipantId_1;
	// System.Reflection.FieldInfo Unity.RenderStreaming.InputSystem.InputDeviceExtension::fieldInfoDescription
	FieldInfo_t* ___fieldInfoDescription_2;
	// System.Reflection.FieldInfo Unity.RenderStreaming.InputSystem.InputDeviceExtension::fieldInfoDeviceFlags
	FieldInfo_t* ___fieldInfoDeviceFlags_3;
};

// Unity.RenderStreaming.InputSystem.InputManager
struct InputManager_t57C115A76BE8B9259F24CF3980EF669C858CA071  : public RuntimeObject
{
	// System.Action`1<Unity.RenderStreaming.InputSystem.InputRemoting/Message> Unity.RenderStreaming.InputSystem.InputManager::onMessage
	Action_1_t62CFC7E46D3237DF830A4F831466D93C80CCEB03* ___onMessage_0;
	// System.Action`2<UnityEngine.InputSystem.LowLevel.InputEventPtr,UnityEngine.InputSystem.InputDevice> Unity.RenderStreaming.InputSystem.InputManager::onEvent
	Action_2_t4943DD8C32CAB983950535CEF3BABA85DF8C9AAA* ___onEvent_1;
	// System.Action`2<UnityEngine.InputSystem.InputDevice,UnityEngine.InputSystem.InputDeviceChange> Unity.RenderStreaming.InputSystem.InputManager::onDeviceChange
	Action_2_tB79528C85CFEF7DFF52C575DDAA398D2FE6BC333* ___onDeviceChange_2;
	// System.Action`2<System.String,UnityEngine.InputSystem.InputControlLayoutChange> Unity.RenderStreaming.InputSystem.InputManager::onLayoutChange
	Action_2_t4797B88C63509F2EE4385D6DABE6A4B5AD5393F7* ___onLayoutChange_3;
};

// System.MarshalByRefObject
struct MarshalByRefObject_t8C2F4C5854177FD60439EB1FCCFC1B3CFAFE8DCE  : public RuntimeObject
{
	// System.Object System.MarshalByRefObject::_identity
	RuntimeObject* ____identity_0;
};
// Native definition for P/Invoke marshalling of System.MarshalByRefObject
struct MarshalByRefObject_t8C2F4C5854177FD60439EB1FCCFC1B3CFAFE8DCE_marshaled_pinvoke
{
	Il2CppIUnknown* ____identity_0;
};
// Native definition for COM marshalling of System.MarshalByRefObject
struct MarshalByRefObject_t8C2F4C5854177FD60439EB1FCCFC1B3CFAFE8DCE_marshaled_com
{
	Il2CppIUnknown* ____identity_0;
};

// System.Reflection.MemberInfo
struct MemberInfo_t  : public RuntimeObject
{
};

// Unity.RenderStreaming.InputSystem.MessageSerializer
struct MessageSerializer_t81499EB92FA005B3846D4E43ACA0389F4D5DEBA5  : public RuntimeObject
{
};

// Unity.RenderStreaming.InputSystem.Observer
struct Observer_tD4C9BC0438A3BD3EF1C50CDA6C55C2F5E12890E6  : public RuntimeObject
{
	// Unity.WebRTC.RTCDataChannel Unity.RenderStreaming.InputSystem.Observer::_channel
	RTCDataChannel_t249C16A38FD2A994D1A45381523F701A49BF1A77* ____channel_0;
};

// Unity.RenderStreaming.SignalingMessage
struct SignalingMessage_t2661291D3E1FD73AA68A5F4C6F56E2D48DD28F75  : public RuntimeObject
{
	// System.String Unity.RenderStreaming.SignalingMessage::status
	String_t* ___status_0;
	// System.String Unity.RenderStreaming.SignalingMessage::message
	String_t* ___message_1;
	// System.String Unity.RenderStreaming.SignalingMessage::sessionId
	String_t* ___sessionId_2;
	// System.String Unity.RenderStreaming.SignalingMessage::connectionId
	String_t* ___connectionId_3;
	// System.Boolean Unity.RenderStreaming.SignalingMessage::polite
	bool ___polite_4;
	// System.String Unity.RenderStreaming.SignalingMessage::sdp
	String_t* ___sdp_5;
	// System.String Unity.RenderStreaming.SignalingMessage::type
	String_t* ___type_6;
	// System.String Unity.RenderStreaming.SignalingMessage::candidate
	String_t* ___candidate_7;
	// System.String Unity.RenderStreaming.SignalingMessage::sdpMid
	String_t* ___sdpMid_8;
	// System.Int32 Unity.RenderStreaming.SignalingMessage::sdpMLineIndex
	int32_t ___sdpMLineIndex_9;
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

// Unity.RenderStreaming.Signaling.WebSocketSignaling
struct WebSocketSignaling_t1CF887D8D67DBF0E7FA4D9FFD852C1656BCAB60F  : public RuntimeObject
{
	// System.String Unity.RenderStreaming.Signaling.WebSocketSignaling::m_url
	String_t* ___m_url_0;
	// System.Single Unity.RenderStreaming.Signaling.WebSocketSignaling::m_timeout
	float ___m_timeout_1;
	// System.Threading.SynchronizationContext Unity.RenderStreaming.Signaling.WebSocketSignaling::m_mainThreadContext
	SynchronizationContext_tCDB842BBE53B050802CBBB59C6E6DC45B5B06DC0* ___m_mainThreadContext_2;
	// System.Boolean Unity.RenderStreaming.Signaling.WebSocketSignaling::m_running
	bool ___m_running_3;
	// System.Threading.Thread Unity.RenderStreaming.Signaling.WebSocketSignaling::m_signalingThread
	Thread_t0A773B9DE873D2DCAA7D229EAB36757B500E207F* ___m_signalingThread_4;
	// System.Threading.AutoResetEvent Unity.RenderStreaming.Signaling.WebSocketSignaling::m_wsCloseEvent
	AutoResetEvent_t7F792F3F7AD11BEF7B411E771D98E5266A8CE7C0* ___m_wsCloseEvent_5;
	// WebSocketSharp.WebSocket Unity.RenderStreaming.Signaling.WebSocketSignaling::m_webSocket
	WebSocket_tBCA6DA25533993CDAE05954CA6F61926CF134BB4* ___m_webSocket_6;
	// Unity.RenderStreaming.Signaling.OnStartHandler Unity.RenderStreaming.Signaling.WebSocketSignaling::OnStart
	OnStartHandler_t295FEA9A47BD02A9B36195C055961D94C233A56F* ___OnStart_7;
	// Unity.RenderStreaming.Signaling.OnConnectHandler Unity.RenderStreaming.Signaling.WebSocketSignaling::OnCreateConnection
	OnConnectHandler_tF4A8A1EC5ED4BCEAB7EA0D252D6586EC660ABEB3* ___OnCreateConnection_8;
	// Unity.RenderStreaming.Signaling.OnDisconnectHandler Unity.RenderStreaming.Signaling.WebSocketSignaling::OnDestroyConnection
	OnDisconnectHandler_tB1C80CDBF420D2C6F13BE728865E1912E08383C9* ___OnDestroyConnection_9;
	// Unity.RenderStreaming.Signaling.OnOfferHandler Unity.RenderStreaming.Signaling.WebSocketSignaling::OnOffer
	OnOfferHandler_t741D2F8DBDFDA8C010DBB5276E8D5CC35569FF86* ___OnOffer_10;
	// Unity.RenderStreaming.Signaling.OnAnswerHandler Unity.RenderStreaming.Signaling.WebSocketSignaling::OnAnswer
	OnAnswerHandler_tBF64DA7C3AB41984E338F75F069C194C8F0A1A19* ___OnAnswer_11;
	// Unity.RenderStreaming.Signaling.OnIceCandidateHandler Unity.RenderStreaming.Signaling.WebSocketSignaling::OnIceCandidate
	OnIceCandidateHandler_tB82627B771BEE335DBC8D44AEC93B2AEC8B1E139* ___OnIceCandidate_12;
};

// System.Security.Cryptography.X509Certificates.X509Chain
struct X509Chain_t2E7F88A4C97CAB82AF938F13A11354A0475469E5  : public RuntimeObject
{
	// System.Security.Cryptography.X509Certificates.X509ChainImpl System.Security.Cryptography.X509Certificates.X509Chain::impl
	X509ChainImpl_tBA1BF154DB9DC321EE068BBC53C7CF43CAA2621F* ___impl_0;
};

// Unity.RenderStreaming.Signaling.HttpSignaling/<>c
struct U3CU3Ec_tBCC97D6F6D28AE3DF8C0949CEC44C2E00DD50B61  : public RuntimeObject
{
};

struct U3CU3Ec_tBCC97D6F6D28AE3DF8C0949CEC44C2E00DD50B61_StaticFields
{
	// Unity.RenderStreaming.Signaling.HttpSignaling/<>c Unity.RenderStreaming.Signaling.HttpSignaling/<>c::<>9
	U3CU3Ec_tBCC97D6F6D28AE3DF8C0949CEC44C2E00DD50B61* ___U3CU3E9_0;
	// System.Net.Security.RemoteCertificateValidationCallback Unity.RenderStreaming.Signaling.HttpSignaling/<>c::<>9__14_0
	RemoteCertificateValidationCallback_t2F4C5801F96B2C2BF934511796C5BFEAEBF01955* ___U3CU3E9__14_0_1;
	// System.Func`2<Unity.RenderStreaming.DescData,System.String> Unity.RenderStreaming.Signaling.HttpSignaling/<>c::<>9__50_0
	Func_2_t0EF978B55294DA2AD6D168419F9F353470641F2F* ___U3CU3E9__50_0_2;
};

// Unity.RenderStreaming.Signaling.HttpSignaling/<>c__DisplayClass48_0
struct U3CU3Ec__DisplayClass48_0_tF5D23F982C5E31486AD35E6BF7247BFB3290462E  : public RuntimeObject
{
	// Unity.RenderStreaming.Signaling.HttpSignaling Unity.RenderStreaming.Signaling.HttpSignaling/<>c__DisplayClass48_0::<>4__this
	HttpSignaling_t8AD4F9C09704A5FB300F225484FF569B5FDE1B9F* ___U3CU3E4__this_0;
	// Unity.RenderStreaming.CreateConnectionResData Unity.RenderStreaming.Signaling.HttpSignaling/<>c__DisplayClass48_0::data
	CreateConnectionResData_tD662C466168AFA244D176C16A96FC170D132825E* ___data_1;
};

// Unity.RenderStreaming.Signaling.HttpSignaling/<>c__DisplayClass49_0
struct U3CU3Ec__DisplayClass49_0_tD14934A107086CFADD957BC657064FA93C30784D  : public RuntimeObject
{
	// Unity.RenderStreaming.Signaling.HttpSignaling Unity.RenderStreaming.Signaling.HttpSignaling/<>c__DisplayClass49_0::<>4__this
	HttpSignaling_t8AD4F9C09704A5FB300F225484FF569B5FDE1B9F* ___U3CU3E4__this_0;
	// System.String Unity.RenderStreaming.Signaling.HttpSignaling/<>c__DisplayClass49_0::connectionId
	String_t* ___connectionId_1;
};

// Unity.RenderStreaming.Signaling.HttpSignaling/<>c__DisplayClass50_0
struct U3CU3Ec__DisplayClass50_0_t7596E60ADDA83F9C3C2E3A4941593D6E78455848  : public RuntimeObject
{
	// System.String Unity.RenderStreaming.Signaling.HttpSignaling/<>c__DisplayClass50_0::deleted
	String_t* ___deleted_0;
	// Unity.RenderStreaming.Signaling.HttpSignaling Unity.RenderStreaming.Signaling.HttpSignaling/<>c__DisplayClass50_0::<>4__this
	HttpSignaling_t8AD4F9C09704A5FB300F225484FF569B5FDE1B9F* ___U3CU3E4__this_1;
};

// Unity.RenderStreaming.Signaling.HttpSignaling/<>c__DisplayClass51_0
struct U3CU3Ec__DisplayClass51_0_t9E91BBBBB3444FD00DCD137FE577EA1C12DC63DA  : public RuntimeObject
{
	// Unity.RenderStreaming.DescData Unity.RenderStreaming.Signaling.HttpSignaling/<>c__DisplayClass51_0::offer
	DescData_tA4EB7C7305FA906F4E120329023F8C778EFCB1B8* ___offer_0;
	// Unity.RenderStreaming.Signaling.HttpSignaling Unity.RenderStreaming.Signaling.HttpSignaling/<>c__DisplayClass51_0::<>4__this
	HttpSignaling_t8AD4F9C09704A5FB300F225484FF569B5FDE1B9F* ___U3CU3E4__this_1;
};

// Unity.RenderStreaming.Signaling.HttpSignaling/<>c__DisplayClass52_0
struct U3CU3Ec__DisplayClass52_0_tFC89C3DCEBE64E8E91972D7E5BD90583A4345116  : public RuntimeObject
{
	// Unity.RenderStreaming.DescData Unity.RenderStreaming.Signaling.HttpSignaling/<>c__DisplayClass52_0::answer
	DescData_tA4EB7C7305FA906F4E120329023F8C778EFCB1B8* ___answer_0;
	// Unity.RenderStreaming.Signaling.HttpSignaling Unity.RenderStreaming.Signaling.HttpSignaling/<>c__DisplayClass52_0::<>4__this
	HttpSignaling_t8AD4F9C09704A5FB300F225484FF569B5FDE1B9F* ___U3CU3E4__this_1;
};

// Unity.RenderStreaming.Signaling.HttpSignaling/<>c__DisplayClass53_0
struct U3CU3Ec__DisplayClass53_0_t94FCE6370518C0A6C8736E34867A0BD2903970BD  : public RuntimeObject
{
	// Unity.RenderStreaming.CandidateData Unity.RenderStreaming.Signaling.HttpSignaling/<>c__DisplayClass53_0::candidate
	CandidateData_t37575B19A1050FDC713708C9C0CBD2EB498F2567* ___candidate_0;
	// Unity.RenderStreaming.Signaling.HttpSignaling Unity.RenderStreaming.Signaling.HttpSignaling/<>c__DisplayClass53_0::<>4__this
	HttpSignaling_t8AD4F9C09704A5FB300F225484FF569B5FDE1B9F* ___U3CU3E4__this_1;
};

// Unity.RenderStreaming.InputSystem.InputRemoting/ChangeUsageMsg
struct ChangeUsageMsg_t2C1859F19203261F274461CD9D1953E9422A711B  : public RuntimeObject
{
};

// Unity.RenderStreaming.InputSystem.InputRemoting/ConnectMsg
struct ConnectMsg_tFFAF963E4ABF150E27446BC43BE997D298783B5F  : public RuntimeObject
{
};

// Unity.RenderStreaming.InputSystem.InputRemoting/DisconnectMsg
struct DisconnectMsg_t2CEF3AEEDE537DED527DD2683B803630EA98896B  : public RuntimeObject
{
};

// Unity.RenderStreaming.InputSystem.InputRemoting/NewDeviceMsg
struct NewDeviceMsg_tDC34D8AB6C1DA668B03632104137367B7CBCCB54  : public RuntimeObject
{
};

// Unity.RenderStreaming.InputSystem.InputRemoting/NewEventsMsg
struct NewEventsMsg_tDA1C07919BC314257E4352D4B921D7E614912809  : public RuntimeObject
{
};

// Unity.RenderStreaming.InputSystem.InputRemoting/NewLayoutMsg
struct NewLayoutMsg_tB8D5E8E4860CD08864E4642D65B0F4CD87E6BC5F  : public RuntimeObject
{
};

// Unity.RenderStreaming.InputSystem.InputRemoting/RemoveDeviceMsg
struct RemoveDeviceMsg_t25248EFD83BE19B3E11A8A7E003A242B3456DF5F  : public RuntimeObject
{
};

// Unity.RenderStreaming.InputSystem.InputRemoting/RemoveLayoutMsg
struct RemoveLayoutMsg_tAC4F2AD9D914D11C8A0C8228DCF693830A4599D1  : public RuntimeObject
{
};

// Unity.RenderStreaming.InputSystem.InputRemoting/StartSendingMsg
struct StartSendingMsg_tF668A0988311CAE5333ED2477B4F648CBC4760C5  : public RuntimeObject
{
};

// Unity.RenderStreaming.InputSystem.InputRemoting/StopSendingMsg
struct StopSendingMsg_t3CDF449E663D8A4DA9BD9C223336D45224E8F55B  : public RuntimeObject
{
};

// Unity.RenderStreaming.InputSystem.InputRemoting/Subscriber
struct Subscriber_tCE25893C3FF2E8E4590B8EFBE9DE0316FC0AD8E7  : public RuntimeObject
{
	// Unity.RenderStreaming.InputSystem.InputRemoting Unity.RenderStreaming.InputSystem.InputRemoting/Subscriber::owner
	InputRemoting_t4BBB51BEA47ACD8A408459C612008D52240C6985* ___owner_0;
	// System.IObserver`1<Unity.RenderStreaming.InputSystem.InputRemoting/Message> Unity.RenderStreaming.InputSystem.InputRemoting/Subscriber::observer
	RuntimeObject* ___observer_1;
};

// Unity.RenderStreaming.InputSystem.Receiver/<>c__DisplayClass33_0
struct U3CU3Ec__DisplayClass33_0_t7BB9C2C6DF625E4E7D58A039705AF481AA86BE1E  : public RuntimeObject
{
	// System.String Unity.RenderStreaming.InputSystem.Receiver/<>c__DisplayClass33_0::layout
	String_t* ___layout_0;
};

// Unity.RenderStreaming.Signaling.WebSocketSignaling/<>c__DisplayClass40_0
struct U3CU3Ec__DisplayClass40_0_t99C91E680A787779B8EF8C4F759C3D5F0253CD9C  : public RuntimeObject
{
	// Unity.RenderStreaming.SignalingMessage Unity.RenderStreaming.Signaling.WebSocketSignaling/<>c__DisplayClass40_0::msg
	SignalingMessage_t2661291D3E1FD73AA68A5F4C6F56E2D48DD28F75* ___msg_0;
	// Unity.RenderStreaming.Signaling.WebSocketSignaling Unity.RenderStreaming.Signaling.WebSocketSignaling/<>c__DisplayClass40_0::<>4__this
	WebSocketSignaling_t1CF887D8D67DBF0E7FA4D9FFD852C1656BCAB60F* ___U3CU3E4__this_1;
};

// Unity.RenderStreaming.Signaling.WebSocketSignaling/<>c__DisplayClass40_1
struct U3CU3Ec__DisplayClass40_1_t89052BF20BD4AE4E27BCEE4CB46B0449FE981A85  : public RuntimeObject
{
	// Unity.RenderStreaming.DescData Unity.RenderStreaming.Signaling.WebSocketSignaling/<>c__DisplayClass40_1::offer
	DescData_tA4EB7C7305FA906F4E120329023F8C778EFCB1B8* ___offer_0;
	// Unity.RenderStreaming.Signaling.WebSocketSignaling/<>c__DisplayClass40_0 Unity.RenderStreaming.Signaling.WebSocketSignaling/<>c__DisplayClass40_1::CS$<>8__locals1
	U3CU3Ec__DisplayClass40_0_t99C91E680A787779B8EF8C4F759C3D5F0253CD9C* ___CSU24U3CU3E8__locals1_1;
};

// Unity.RenderStreaming.Signaling.WebSocketSignaling/<>c__DisplayClass40_2
struct U3CU3Ec__DisplayClass40_2_t2FD87832B5721C3236040338A04B8D226CE932FA  : public RuntimeObject
{
	// Unity.RenderStreaming.DescData Unity.RenderStreaming.Signaling.WebSocketSignaling/<>c__DisplayClass40_2::answer
	DescData_tA4EB7C7305FA906F4E120329023F8C778EFCB1B8* ___answer_0;
	// Unity.RenderStreaming.Signaling.WebSocketSignaling/<>c__DisplayClass40_0 Unity.RenderStreaming.Signaling.WebSocketSignaling/<>c__DisplayClass40_2::CS$<>8__locals2
	U3CU3Ec__DisplayClass40_0_t99C91E680A787779B8EF8C4F759C3D5F0253CD9C* ___CSU24U3CU3E8__locals2_1;
};

// Unity.RenderStreaming.Signaling.WebSocketSignaling/<>c__DisplayClass40_3
struct U3CU3Ec__DisplayClass40_3_t2495E95291EA54819DDC684E5F9994BF6C7D7158  : public RuntimeObject
{
	// Unity.RenderStreaming.CandidateData Unity.RenderStreaming.Signaling.WebSocketSignaling/<>c__DisplayClass40_3::candidate
	CandidateData_t37575B19A1050FDC713708C9C0CBD2EB498F2567* ___candidate_0;
	// Unity.RenderStreaming.Signaling.WebSocketSignaling/<>c__DisplayClass40_0 Unity.RenderStreaming.Signaling.WebSocketSignaling/<>c__DisplayClass40_3::CS$<>8__locals3
	U3CU3Ec__DisplayClass40_0_t99C91E680A787779B8EF8C4F759C3D5F0253CD9C* ___CSU24U3CU3E8__locals3_1;
};

// Unity.RenderStreaming.InputSystem.InputRemoting/ChangeUsageMsg/<>c
struct U3CU3Ec_tA2EA796D5C35FC8D6899C102F19A1D897D01B010  : public RuntimeObject
{
};

struct U3CU3Ec_tA2EA796D5C35FC8D6899C102F19A1D897D01B010_StaticFields
{
	// Unity.RenderStreaming.InputSystem.InputRemoting/ChangeUsageMsg/<>c Unity.RenderStreaming.InputSystem.InputRemoting/ChangeUsageMsg/<>c::<>9
	U3CU3Ec_tA2EA796D5C35FC8D6899C102F19A1D897D01B010* ___U3CU3E9_0;
	// System.Func`2<UnityEngine.InputSystem.Utilities.InternedString,System.String> Unity.RenderStreaming.InputSystem.InputRemoting/ChangeUsageMsg/<>c::<>9__1_0
	Func_2_tE0082B3C229A425A69ECDABB19259709EC9F540F* ___U3CU3E9__1_0_1;
};

// UnityEngine.InputSystem.Utilities.ReadOnlyArray`1/Enumerator<UnityEngine.InputSystem.InputDevice>
struct Enumerator_t81E72BA990D25C50893E883131DA5DF2157A185B 
{
	// TValue[] UnityEngine.InputSystem.Utilities.ReadOnlyArray`1/Enumerator::m_Array
	InputDeviceU5BU5D_tA9AEFC6AF63557D3D5DCFB2B26DDA6F63147D548* ___m_Array_0;
	// System.Int32 UnityEngine.InputSystem.Utilities.ReadOnlyArray`1/Enumerator::m_IndexStart
	int32_t ___m_IndexStart_1;
	// System.Int32 UnityEngine.InputSystem.Utilities.ReadOnlyArray`1/Enumerator::m_IndexEnd
	int32_t ___m_IndexEnd_2;
	// System.Int32 UnityEngine.InputSystem.Utilities.ReadOnlyArray`1/Enumerator::m_Index
	int32_t ___m_Index_3;
};

// UnityEngine.InputSystem.Utilities.ReadOnlyArray`1/Enumerator<System.Object>
struct Enumerator_t13B0EDB01F0A85A952803970AFD1073D96A46C94 
{
	// TValue[] UnityEngine.InputSystem.Utilities.ReadOnlyArray`1/Enumerator::m_Array
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___m_Array_0;
	// System.Int32 UnityEngine.InputSystem.Utilities.ReadOnlyArray`1/Enumerator::m_IndexStart
	int32_t ___m_IndexStart_1;
	// System.Int32 UnityEngine.InputSystem.Utilities.ReadOnlyArray`1/Enumerator::m_IndexEnd
	int32_t ___m_IndexEnd_2;
	// System.Int32 UnityEngine.InputSystem.Utilities.ReadOnlyArray`1/Enumerator::m_Index
	int32_t ___m_Index_3;
};

// System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>
struct KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230 
{
	// TKey System.Collections.Generic.KeyValuePair`2::key
	RuntimeObject* ___key_0;
	// TValue System.Collections.Generic.KeyValuePair`2::value
	RuntimeObject* ___value_1;
};

// System.Collections.Generic.KeyValuePair`2<System.String,System.String>
struct KeyValuePair_2_t47AB280304B50F542FD7E14F25DB2C374AEDD80A 
{
	// TKey System.Collections.Generic.KeyValuePair`2::key
	String_t* ___key_0;
	// TValue System.Collections.Generic.KeyValuePair`2::value
	String_t* ___value_1;
};

// System.Nullable`1<System.Boolean>
struct Nullable_1_t78F453FADB4A9F50F267A4E349019C34410D1A01 
{
	// System.Boolean System.Nullable`1::hasValue
	bool ___hasValue_0;
	// T System.Nullable`1::value
	bool ___value_1;
};

// System.Nullable`1<System.Int32>
struct Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 
{
	// System.Boolean System.Nullable`1::hasValue
	bool ___hasValue_0;
	// T System.Nullable`1::value
	int32_t ___value_1;
};

// UnityEngine.InputSystem.Utilities.ReadOnlyArray`1<UnityEngine.InputSystem.InputDevice>
struct ReadOnlyArray_1_t21E90B3F1DF1E9A2088EA0523F03C47910735BCA 
{
	// TValue[] UnityEngine.InputSystem.Utilities.ReadOnlyArray`1::m_Array
	InputDeviceU5BU5D_tA9AEFC6AF63557D3D5DCFB2B26DDA6F63147D548* ___m_Array_0;
	// System.Int32 UnityEngine.InputSystem.Utilities.ReadOnlyArray`1::m_StartIndex
	int32_t ___m_StartIndex_1;
	// System.Int32 UnityEngine.InputSystem.Utilities.ReadOnlyArray`1::m_Length
	int32_t ___m_Length_2;
};

// UnityEngine.InputSystem.Utilities.ReadOnlyArray`1<UnityEngine.InputSystem.Utilities.InternedString>
struct ReadOnlyArray_1_t1C2864D7CF4D444AB2616316AC8DD33932F77064 
{
	// TValue[] UnityEngine.InputSystem.Utilities.ReadOnlyArray`1::m_Array
	InternedStringU5BU5D_t0B851758733FC0B118D84BE83AED10A0404C18D5* ___m_Array_0;
	// System.Int32 UnityEngine.InputSystem.Utilities.ReadOnlyArray`1::m_StartIndex
	int32_t ___m_StartIndex_1;
	// System.Int32 UnityEngine.InputSystem.Utilities.ReadOnlyArray`1::m_Length
	int32_t ___m_Length_2;
};

// UnityEngine.InputSystem.Utilities.ReadOnlyArray`1<System.Object>
struct ReadOnlyArray_1_t40B8DDDCD6ACBA3B2C0AF1387BE23D68DAEF77B5 
{
	// TValue[] UnityEngine.InputSystem.Utilities.ReadOnlyArray`1::m_Array
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___m_Array_0;
	// System.Int32 UnityEngine.InputSystem.Utilities.ReadOnlyArray`1::m_StartIndex
	int32_t ___m_StartIndex_1;
	// System.Int32 UnityEngine.InputSystem.Utilities.ReadOnlyArray`1::m_Length
	int32_t ___m_Length_2;
};

// UnityEngine.InputSystem.Utilities.ReadOnlyArray`1<System.String>
struct ReadOnlyArray_1_t2221E33FFA1DEDB4C4179E62014550834DDAE95E 
{
	// TValue[] UnityEngine.InputSystem.Utilities.ReadOnlyArray`1::m_Array
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___m_Array_0;
	// System.Int32 UnityEngine.InputSystem.Utilities.ReadOnlyArray`1::m_StartIndex
	int32_t ___m_StartIndex_1;
	// System.Int32 UnityEngine.InputSystem.Utilities.ReadOnlyArray`1::m_Length
	int32_t ___m_Length_2;
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

// System.Byte
struct Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3 
{
	// System.Byte System.Byte::m_value
	uint8_t ___m_value_0;
};

// WebSocketSharp.CloseEventArgs
struct CloseEventArgs_t5388F91E45CE32C877EA43C79F519682A7A7A609  : public EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377
{
	// System.Boolean WebSocketSharp.CloseEventArgs::_clean
	bool ____clean_1;
	// WebSocketSharp.PayloadData WebSocketSharp.CloseEventArgs::_payloadData
	PayloadData_t70E4CA5A7C753357850775A9186AB3F9AE29F1A1* ____payloadData_2;
};

// System.DateTime
struct DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D 
{
	// System.UInt64 System.DateTime::_dateData
	uint64_t ____dateData_46;
};

struct DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D_StaticFields
{
	// System.Int32[] System.DateTime::s_daysToMonth365
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___s_daysToMonth365_30;
	// System.Int32[] System.DateTime::s_daysToMonth366
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___s_daysToMonth366_31;
	// System.DateTime System.DateTime::MinValue
	DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D ___MinValue_32;
	// System.DateTime System.DateTime::MaxValue
	DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D ___MaxValue_33;
	// System.DateTime System.DateTime::UnixEpoch
	DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D ___UnixEpoch_34;
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

// WebSocketSharp.ErrorEventArgs
struct ErrorEventArgs_t4A4E35A3A95F4B9C871AB4E92A97A973C1711143  : public EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377
{
	// System.Exception WebSocketSharp.ErrorEventArgs::_exception
	Exception_t* ____exception_1;
	// System.String WebSocketSharp.ErrorEventArgs::_message
	String_t* ____message_2;
};

// System.Reflection.FieldInfo
struct FieldInfo_t  : public MemberInfo_t
{
};

// UnityEngine.InputSystem.Utilities.FourCC
struct FourCC_tA6CAA4015BC25A7F1053B6C512202D57A9C994ED 
{
	// System.Int32 UnityEngine.InputSystem.Utilities.FourCC::m_Code
	int32_t ___m_Code_0;
};

// UnityEngine.InputSystem.Layouts.InputDeviceDescription
struct InputDeviceDescription_tE86DD77422AAF60ADDAC788B31E5A05E739B708F 
{
	// System.String UnityEngine.InputSystem.Layouts.InputDeviceDescription::m_InterfaceName
	String_t* ___m_InterfaceName_0;
	// System.String UnityEngine.InputSystem.Layouts.InputDeviceDescription::m_DeviceClass
	String_t* ___m_DeviceClass_1;
	// System.String UnityEngine.InputSystem.Layouts.InputDeviceDescription::m_Manufacturer
	String_t* ___m_Manufacturer_2;
	// System.String UnityEngine.InputSystem.Layouts.InputDeviceDescription::m_Product
	String_t* ___m_Product_3;
	// System.String UnityEngine.InputSystem.Layouts.InputDeviceDescription::m_Serial
	String_t* ___m_Serial_4;
	// System.String UnityEngine.InputSystem.Layouts.InputDeviceDescription::m_Version
	String_t* ___m_Version_5;
	// System.String UnityEngine.InputSystem.Layouts.InputDeviceDescription::m_Capabilities
	String_t* ___m_Capabilities_6;
};
// Native definition for P/Invoke marshalling of UnityEngine.InputSystem.Layouts.InputDeviceDescription
struct InputDeviceDescription_tE86DD77422AAF60ADDAC788B31E5A05E739B708F_marshaled_pinvoke
{
	char* ___m_InterfaceName_0;
	char* ___m_DeviceClass_1;
	char* ___m_Manufacturer_2;
	char* ___m_Product_3;
	char* ___m_Serial_4;
	char* ___m_Version_5;
	char* ___m_Capabilities_6;
};
// Native definition for COM marshalling of UnityEngine.InputSystem.Layouts.InputDeviceDescription
struct InputDeviceDescription_tE86DD77422AAF60ADDAC788B31E5A05E739B708F_marshaled_com
{
	Il2CppChar* ___m_InterfaceName_0;
	Il2CppChar* ___m_DeviceClass_1;
	Il2CppChar* ___m_Manufacturer_2;
	Il2CppChar* ___m_Product_3;
	Il2CppChar* ___m_Serial_4;
	Il2CppChar* ___m_Version_5;
	Il2CppChar* ___m_Capabilities_6;
};

// UnityEngine.InputSystem.LowLevel.InputEventListener
struct InputEventListener_tB0B541BC249BB696401201CF9DCAB4DFA1462B1D 
{
	union
	{
		struct
		{
		};
		uint8_t InputEventListener_tB0B541BC249BB696401201CF9DCAB4DFA1462B1D__padding[1];
	};
};

struct InputEventListener_tB0B541BC249BB696401201CF9DCAB4DFA1462B1D_StaticFields
{
	// UnityEngine.InputSystem.LowLevel.InputEventListener/ObserverState UnityEngine.InputSystem.LowLevel.InputEventListener::s_ObserverState
	ObserverState_t147E85316A8DB8E0C6B3D4485B1480B41EA6A1A8* ___s_ObserverState_0;
};

// UnityEngine.InputSystem.LowLevel.InputEventPtr
struct InputEventPtr_tC2A58521C9AFB479CC88789D5E0797D817C721C0 
{
	// UnityEngine.InputSystem.LowLevel.InputEvent* UnityEngine.InputSystem.LowLevel.InputEventPtr::m_EventPtr
	InputEvent_t10F727342D1A79DCFC06529C203BB61C194AEBC5* ___m_EventPtr_0;
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

// UnityEngine.InputSystem.Utilities.InternedString
struct InternedString_t8D62A48CB7D85AAE9CFCCCFB0A77AC2844905735 
{
	// System.String UnityEngine.InputSystem.Utilities.InternedString::m_StringOriginalCase
	String_t* ___m_StringOriginalCase_0;
	// System.String UnityEngine.InputSystem.Utilities.InternedString::m_StringLowerCase
	String_t* ___m_StringLowerCase_1;
};
// Native definition for P/Invoke marshalling of UnityEngine.InputSystem.Utilities.InternedString
struct InternedString_t8D62A48CB7D85AAE9CFCCCFB0A77AC2844905735_marshaled_pinvoke
{
	char* ___m_StringOriginalCase_0;
	char* ___m_StringLowerCase_1;
};
// Native definition for COM marshalling of UnityEngine.InputSystem.Utilities.InternedString
struct InternedString_t8D62A48CB7D85AAE9CFCCCFB0A77AC2844905735_marshaled_com
{
	Il2CppChar* ___m_StringOriginalCase_0;
	Il2CppChar* ___m_StringLowerCase_1;
};

// Unity.RenderStreaming.InputSystem.Receiver
struct Receiver_t3693E96FFA61969B9B9F01B3F38E241C176E8B13  : public InputManager_t57C115A76BE8B9259F24CF3980EF669C858CA071
{
	// System.Action`1<Unity.RenderStreaming.InputSystem.InputRemoting/Message> Unity.RenderStreaming.InputSystem.Receiver::onMessage
	Action_1_t62CFC7E46D3237DF830A4F831466D93C80CCEB03* ___onMessage_4;
	// System.Action`2<UnityEngine.InputSystem.InputDevice,UnityEngine.InputSystem.InputDeviceChange> Unity.RenderStreaming.InputSystem.Receiver::onDeviceChange
	Action_2_tB79528C85CFEF7DFF52C575DDAA398D2FE6BC333* ___onDeviceChange_5;
	// System.Action`2<System.String,UnityEngine.InputSystem.InputControlLayoutChange> Unity.RenderStreaming.InputSystem.Receiver::onLayoutChange
	Action_2_t4797B88C63509F2EE4385D6DABE6A4B5AD5393F7* ___onLayoutChange_6;
	// Unity.WebRTC.RTCDataChannel Unity.RenderStreaming.InputSystem.Receiver::_channel
	RTCDataChannel_t249C16A38FD2A994D1A45381523F701A49BF1A77* ____channel_7;
	// System.Collections.Generic.List`1<UnityEngine.InputSystem.InputDevice> Unity.RenderStreaming.InputSystem.Receiver::_remoteDevices
	List_1_t7228B1F3AC7E48407209173C7BF2B2AFBED5A4F7* ____remoteDevices_8;
	// System.Collections.Generic.Dictionary`2<System.String,System.String> Unity.RenderStreaming.InputSystem.Receiver::_remoteLayouts
	Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* ____remoteLayouts_9;
	// System.Collections.Generic.List`1<System.String> Unity.RenderStreaming.InputSystem.Receiver::_registeredRemoteLayout
	List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* ____registeredRemoteLayout_10;
	// Unity.RenderStreaming.InputPositionCorrector Unity.RenderStreaming.InputSystem.Receiver::_corrector
	InputPositionCorrector_tCF23AF130F6DFC2147C5A591578CB80F6C6475C2* ____corrector_11;
	// System.Action`2<UnityEngine.InputSystem.LowLevel.InputEventPtr,UnityEngine.InputSystem.InputDevice> Unity.RenderStreaming.InputSystem.Receiver::_onEvent
	Action_2_t4943DD8C32CAB983950535CEF3BABA85DF8C9AAA* ____onEvent_12;
	// System.Boolean Unity.RenderStreaming.InputSystem.Receiver::<EnableInputPositionCorrection>k__BackingField
	bool ___U3CEnableInputPositionCorrectionU3Ek__BackingField_13;
};

// UnityEngine.Rect
struct Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D 
{
	// System.Single UnityEngine.Rect::m_XMin
	float ___m_XMin_0;
	// System.Single UnityEngine.Rect::m_YMin
	float ___m_YMin_1;
	// System.Single UnityEngine.Rect::m_Width
	float ___m_Width_2;
	// System.Single UnityEngine.Rect::m_Height
	float ___m_Height_3;
};

// Unity.RenderStreaming.InputSystem.Sender
struct Sender_t234F1DB016429A45DA2E9C7DF59EA1A57E1A83BF  : public InputManager_t57C115A76BE8B9259F24CF3980EF669C858CA071
{
	// System.Action`2<UnityEngine.InputSystem.LowLevel.InputEventPtr,UnityEngine.InputSystem.InputDevice> Unity.RenderStreaming.InputSystem.Sender::onEvent
	Action_2_t4943DD8C32CAB983950535CEF3BABA85DF8C9AAA* ___onEvent_4;
	// System.Action`2<UnityEngine.InputSystem.InputDevice,UnityEngine.InputSystem.InputDeviceChange> Unity.RenderStreaming.InputSystem.Sender::onDeviceChange
	Action_2_tB79528C85CFEF7DFF52C575DDAA398D2FE6BC333* ___onDeviceChange_5;
	// System.Action`2<System.String,UnityEngine.InputSystem.InputControlLayoutChange> Unity.RenderStreaming.InputSystem.Sender::onLayoutChange
	Action_2_t4797B88C63509F2EE4385D6DABE6A4B5AD5393F7* ___onLayoutChange_6;
	// Unity.RenderStreaming.InputPositionCorrector Unity.RenderStreaming.InputSystem.Sender::_corrector
	InputPositionCorrector_tCF23AF130F6DFC2147C5A591578CB80F6C6475C2* ____corrector_7;
	// System.Action`2<UnityEngine.InputSystem.LowLevel.InputEventPtr,UnityEngine.InputSystem.InputDevice> Unity.RenderStreaming.InputSystem.Sender::_onEvent
	Action_2_t4943DD8C32CAB983950535CEF3BABA85DF8C9AAA* ____onEvent_8;
	// System.Boolean Unity.RenderStreaming.InputSystem.Sender::<EnableInputPositionCorrection>k__BackingField
	bool ___U3CEnableInputPositionCorrectionU3Ek__BackingField_9;
};

// System.Single
struct Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C 
{
	// System.Single System.Single::m_value
	float ___m_value_0;
};

// System.IO.Stream
struct Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE  : public MarshalByRefObject_t8C2F4C5854177FD60439EB1FCCFC1B3CFAFE8DCE
{
	// System.IO.Stream/ReadWriteTask System.IO.Stream::_activeReadWriteTask
	ReadWriteTask_t0821BF49EE38596C7734E86E1A6A39D769BE2C05* ____activeReadWriteTask_2;
	// System.Threading.SemaphoreSlim System.IO.Stream::_asyncActiveSemaphore
	SemaphoreSlim_t0D5CB5685D9BFA5BF95CEC6E7395490F933E8DB2* ____asyncActiveSemaphore_3;
};

struct Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE_StaticFields
{
	// System.IO.Stream System.IO.Stream::Null
	Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* ___Null_1;
};

// System.Threading.Thread
struct Thread_t0A773B9DE873D2DCAA7D229EAB36757B500E207F  : public CriticalFinalizerObject_t1DCAB623CAEA6529A96F5F3EDE3C7048A6E313C9
{
	// System.Threading.InternalThread System.Threading.Thread::internal_thread
	InternalThread_tF40B7BFCBD60C82BD8475A22FF5186CA10293687* ___internal_thread_6;
	// System.Object System.Threading.Thread::m_ThreadStartArg
	RuntimeObject* ___m_ThreadStartArg_7;
	// System.Object System.Threading.Thread::pending_exception
	RuntimeObject* ___pending_exception_8;
	// System.MulticastDelegate System.Threading.Thread::m_Delegate
	MulticastDelegate_t* ___m_Delegate_10;
	// System.Threading.ExecutionContext System.Threading.Thread::m_ExecutionContext
	ExecutionContext_t9D6EDFD92F0B2D391751963E2D77A8B03CB81710* ___m_ExecutionContext_11;
	// System.Boolean System.Threading.Thread::m_ExecutionContextBelongsToOuterScope
	bool ___m_ExecutionContextBelongsToOuterScope_12;
	// System.Security.Principal.IPrincipal System.Threading.Thread::principal
	RuntimeObject* ___principal_13;
	// System.Int32 System.Threading.Thread::principal_version
	int32_t ___principal_version_14;
};

struct Thread_t0A773B9DE873D2DCAA7D229EAB36757B500E207F_StaticFields
{
	// System.LocalDataStoreMgr System.Threading.Thread::s_LocalDataStoreMgr
	LocalDataStoreMgr_t205F1783D5CC2B148E829B5882E5406FF9A3AC1E* ___s_LocalDataStoreMgr_0;
	// System.Threading.AsyncLocal`1<System.Globalization.CultureInfo> System.Threading.Thread::s_asyncLocalCurrentCulture
	AsyncLocal_1_t1D3339EA4C8650D2DEDDF9553E5C932B3DC2CCFD* ___s_asyncLocalCurrentCulture_4;
	// System.Threading.AsyncLocal`1<System.Globalization.CultureInfo> System.Threading.Thread::s_asyncLocalCurrentUICulture
	AsyncLocal_1_t1D3339EA4C8650D2DEDDF9553E5C932B3DC2CCFD* ___s_asyncLocalCurrentUICulture_5;
};

struct Thread_t0A773B9DE873D2DCAA7D229EAB36757B500E207F_ThreadStaticFields
{
	// System.LocalDataStoreHolder System.Threading.Thread::s_LocalDataStore
	LocalDataStoreHolder_t789DD474AE5141213C2105CE57830ECFC2D3C03F* ___s_LocalDataStore_1;
	// System.Globalization.CultureInfo System.Threading.Thread::m_CurrentCulture
	CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* ___m_CurrentCulture_2;
	// System.Globalization.CultureInfo System.Threading.Thread::m_CurrentUICulture
	CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* ___m_CurrentUICulture_3;
	// System.Threading.Thread System.Threading.Thread::current_thread
	Thread_t0A773B9DE873D2DCAA7D229EAB36757B500E207F* ___current_thread_9;
};

// System.TimeSpan
struct TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A 
{
	// System.Int64 System.TimeSpan::_ticks
	int64_t ____ticks_22;
};

struct TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A_StaticFields
{
	// System.TimeSpan System.TimeSpan::Zero
	TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A ___Zero_19;
	// System.TimeSpan System.TimeSpan::MaxValue
	TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A ___MaxValue_20;
	// System.TimeSpan System.TimeSpan::MinValue
	TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A ___MinValue_21;
};

// System.UInt16
struct UInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455 
{
	// System.UInt16 System.UInt16::m_value
	uint16_t ___m_value_0;
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

// UnityEngine.InputSystem.Layouts.InputControlLayout/Cache
struct Cache_tB837109647F577DCE3795AEE2E9E0E3F61F543AB 
{
	// System.Collections.Generic.Dictionary`2<UnityEngine.InputSystem.Utilities.InternedString,UnityEngine.InputSystem.Layouts.InputControlLayout> UnityEngine.InputSystem.Layouts.InputControlLayout/Cache::table
	Dictionary_2_t058B78C04CBFB0F1C72F95C9880AE09DA041219F* ___table_0;
};
// Native definition for P/Invoke marshalling of UnityEngine.InputSystem.Layouts.InputControlLayout/Cache
struct Cache_tB837109647F577DCE3795AEE2E9E0E3F61F543AB_marshaled_pinvoke
{
	Dictionary_2_t058B78C04CBFB0F1C72F95C9880AE09DA041219F* ___table_0;
};
// Native definition for COM marshalling of UnityEngine.InputSystem.Layouts.InputControlLayout/Cache
struct Cache_tB837109647F577DCE3795AEE2E9E0E3F61F543AB_marshaled_com
{
	Dictionary_2_t058B78C04CBFB0F1C72F95C9880AE09DA041219F* ___table_0;
};

// UnityEngine.InputSystem.Layouts.InputControlLayout/Collection
struct Collection_t6E9F85AD439CF26269683541C4DC58BA3B6756C5 
{
	// System.Collections.Generic.Dictionary`2<UnityEngine.InputSystem.Utilities.InternedString,System.Type> UnityEngine.InputSystem.Layouts.InputControlLayout/Collection::layoutTypes
	Dictionary_2_t1FFEE4C9AF6AF524CAD4FDCEA8F3AB34E585451D* ___layoutTypes_1;
	// System.Collections.Generic.Dictionary`2<UnityEngine.InputSystem.Utilities.InternedString,System.String> UnityEngine.InputSystem.Layouts.InputControlLayout/Collection::layoutStrings
	Dictionary_2_tEB3FF1660C6129E11F3B4771A549DE9F169B5103* ___layoutStrings_2;
	// System.Collections.Generic.Dictionary`2<UnityEngine.InputSystem.Utilities.InternedString,System.Func`1<UnityEngine.InputSystem.Layouts.InputControlLayout>> UnityEngine.InputSystem.Layouts.InputControlLayout/Collection::layoutBuilders
	Dictionary_2_tFF0F3921D8B2465193365C2463B7D6A977E874DA* ___layoutBuilders_3;
	// System.Collections.Generic.Dictionary`2<UnityEngine.InputSystem.Utilities.InternedString,UnityEngine.InputSystem.Utilities.InternedString> UnityEngine.InputSystem.Layouts.InputControlLayout/Collection::baseLayoutTable
	Dictionary_2_t433D1FE2CDB69C9F583F79D5252A34112439D0AD* ___baseLayoutTable_4;
	// System.Collections.Generic.Dictionary`2<UnityEngine.InputSystem.Utilities.InternedString,UnityEngine.InputSystem.Utilities.InternedString[]> UnityEngine.InputSystem.Layouts.InputControlLayout/Collection::layoutOverrides
	Dictionary_2_tA8E192E813E347FF19EC3868E2C565607445394C* ___layoutOverrides_5;
	// System.Collections.Generic.HashSet`1<UnityEngine.InputSystem.Utilities.InternedString> UnityEngine.InputSystem.Layouts.InputControlLayout/Collection::layoutOverrideNames
	HashSet_1_t87C47CF88B1B88398D4F9A1E51E92F834CF5160B* ___layoutOverrideNames_6;
	// System.Collections.Generic.Dictionary`2<UnityEngine.InputSystem.Utilities.InternedString,UnityEngine.InputSystem.Layouts.InputControlLayout/Collection/PrecompiledLayout> UnityEngine.InputSystem.Layouts.InputControlLayout/Collection::precompiledLayouts
	Dictionary_2_tD68C40116E127FE79F9E7AF07820CFDDBF20A8C1* ___precompiledLayouts_7;
	// System.Collections.Generic.List`1<UnityEngine.InputSystem.Layouts.InputControlLayout/Collection/LayoutMatcher> UnityEngine.InputSystem.Layouts.InputControlLayout/Collection::layoutMatchers
	List_1_t4E502B2E42676E48E6F9A8F0251ADB1DF4BD490E* ___layoutMatchers_8;
};
// Native definition for P/Invoke marshalling of UnityEngine.InputSystem.Layouts.InputControlLayout/Collection
struct Collection_t6E9F85AD439CF26269683541C4DC58BA3B6756C5_marshaled_pinvoke
{
	Dictionary_2_t1FFEE4C9AF6AF524CAD4FDCEA8F3AB34E585451D* ___layoutTypes_1;
	Dictionary_2_tEB3FF1660C6129E11F3B4771A549DE9F169B5103* ___layoutStrings_2;
	Dictionary_2_tFF0F3921D8B2465193365C2463B7D6A977E874DA* ___layoutBuilders_3;
	Dictionary_2_t433D1FE2CDB69C9F583F79D5252A34112439D0AD* ___baseLayoutTable_4;
	Dictionary_2_tA8E192E813E347FF19EC3868E2C565607445394C* ___layoutOverrides_5;
	HashSet_1_t87C47CF88B1B88398D4F9A1E51E92F834CF5160B* ___layoutOverrideNames_6;
	Dictionary_2_tD68C40116E127FE79F9E7AF07820CFDDBF20A8C1* ___precompiledLayouts_7;
	List_1_t4E502B2E42676E48E6F9A8F0251ADB1DF4BD490E* ___layoutMatchers_8;
};
// Native definition for COM marshalling of UnityEngine.InputSystem.Layouts.InputControlLayout/Collection
struct Collection_t6E9F85AD439CF26269683541C4DC58BA3B6756C5_marshaled_com
{
	Dictionary_2_t1FFEE4C9AF6AF524CAD4FDCEA8F3AB34E585451D* ___layoutTypes_1;
	Dictionary_2_tEB3FF1660C6129E11F3B4771A549DE9F169B5103* ___layoutStrings_2;
	Dictionary_2_tFF0F3921D8B2465193365C2463B7D6A977E874DA* ___layoutBuilders_3;
	Dictionary_2_t433D1FE2CDB69C9F583F79D5252A34112439D0AD* ___baseLayoutTable_4;
	Dictionary_2_tA8E192E813E347FF19EC3868E2C565607445394C* ___layoutOverrides_5;
	HashSet_1_t87C47CF88B1B88398D4F9A1E51E92F834CF5160B* ___layoutOverrideNames_6;
	Dictionary_2_tD68C40116E127FE79F9E7AF07820CFDDBF20A8C1* ___precompiledLayouts_7;
	List_1_t4E502B2E42676E48E6F9A8F0251ADB1DF4BD490E* ___layoutMatchers_8;
};

// Unity.RenderStreaming.InputSystem.InputRemoting/RemoteSender
struct RemoteSender_tE4F28E5B7F46F15B1B18D890E2B8C7E96AB5F6A0 
{
	// System.Int32 Unity.RenderStreaming.InputSystem.InputRemoting/RemoteSender::senderId
	int32_t ___senderId_0;
	// System.String[] Unity.RenderStreaming.InputSystem.InputRemoting/RemoteSender::layouts
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___layouts_1;
	// Unity.RenderStreaming.InputSystem.InputRemoting/RemoteInputDevice[] Unity.RenderStreaming.InputSystem.InputRemoting/RemoteSender::devices
	RemoteInputDeviceU5BU5D_tD2988955C31E6E6005201B6F2E728B014340134E* ___devices_2;
};
// Native definition for P/Invoke marshalling of Unity.RenderStreaming.InputSystem.InputRemoting/RemoteSender
struct RemoteSender_tE4F28E5B7F46F15B1B18D890E2B8C7E96AB5F6A0_marshaled_pinvoke
{
	int32_t ___senderId_0;
	char** ___layouts_1;
	RemoteInputDevice_t7E8AF8B413C68B7205B1F4D9EDA5BBD53ABCDB27_marshaled_pinvoke* ___devices_2;
};
// Native definition for COM marshalling of Unity.RenderStreaming.InputSystem.InputRemoting/RemoteSender
struct RemoteSender_tE4F28E5B7F46F15B1B18D890E2B8C7E96AB5F6A0_marshaled_com
{
	int32_t ___senderId_0;
	Il2CppChar** ___layouts_1;
	RemoteInputDevice_t7E8AF8B413C68B7205B1F4D9EDA5BBD53ABCDB27_marshaled_com* ___devices_2;
};

// Unity.RenderStreaming.InputSystem.InputRemoting/SerializedState
struct SerializedState_tA4C88FE82737BD6A346742925EBC644367180A9F 
{
	// System.Int32 Unity.RenderStreaming.InputSystem.InputRemoting/SerializedState::senderId
	int32_t ___senderId_0;
	// Unity.RenderStreaming.InputSystem.InputRemoting/RemoteSender[] Unity.RenderStreaming.InputSystem.InputRemoting/SerializedState::senders
	RemoteSenderU5BU5D_tFE32D763FD37124BA0F477F37A797F29868A3C3F* ___senders_1;
	// Unity.RenderStreaming.InputSystem.InputRemoting/Subscriber[] Unity.RenderStreaming.InputSystem.InputRemoting/SerializedState::subscribers
	SubscriberU5BU5D_tF989EA4535B55CD10D08D7C8C981FC376FC12C18* ___subscribers_2;
};
// Native definition for P/Invoke marshalling of Unity.RenderStreaming.InputSystem.InputRemoting/SerializedState
struct SerializedState_tA4C88FE82737BD6A346742925EBC644367180A9F_marshaled_pinvoke
{
	int32_t ___senderId_0;
	RemoteSender_tE4F28E5B7F46F15B1B18D890E2B8C7E96AB5F6A0_marshaled_pinvoke* ___senders_1;
	SubscriberU5BU5D_tF989EA4535B55CD10D08D7C8C981FC376FC12C18* ___subscribers_2;
};
// Native definition for COM marshalling of Unity.RenderStreaming.InputSystem.InputRemoting/SerializedState
struct SerializedState_tA4C88FE82737BD6A346742925EBC644367180A9F_marshaled_com
{
	int32_t ___senderId_0;
	RemoteSender_tE4F28E5B7F46F15B1B18D890E2B8C7E96AB5F6A0_marshaled_com* ___senders_1;
	SubscriberU5BU5D_tF989EA4535B55CD10D08D7C8C981FC376FC12C18* ___subscribers_2;
};

// Unity.RenderStreaming.InputSystem.InputRemoting/ChangeUsageMsg/Data
struct Data_t3CDE355508AFD01E1939C50BA8D1CADCC2959561 
{
	// System.Int32 Unity.RenderStreaming.InputSystem.InputRemoting/ChangeUsageMsg/Data::deviceId
	int32_t ___deviceId_0;
	// System.String[] Unity.RenderStreaming.InputSystem.InputRemoting/ChangeUsageMsg/Data::usages
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___usages_1;
};
// Native definition for P/Invoke marshalling of Unity.RenderStreaming.InputSystem.InputRemoting/ChangeUsageMsg/Data
struct Data_t3CDE355508AFD01E1939C50BA8D1CADCC2959561_marshaled_pinvoke
{
	int32_t ___deviceId_0;
	char** ___usages_1;
};
// Native definition for COM marshalling of Unity.RenderStreaming.InputSystem.InputRemoting/ChangeUsageMsg/Data
struct Data_t3CDE355508AFD01E1939C50BA8D1CADCC2959561_marshaled_com
{
	int32_t ___deviceId_0;
	Il2CppChar** ___usages_1;
};

// Unity.RenderStreaming.InputSystem.InputRemoting/NewLayoutMsg/Data
struct Data_t996B414526496A00392F034F2FE6F541A31CA819 
{
	// System.String Unity.RenderStreaming.InputSystem.InputRemoting/NewLayoutMsg/Data::name
	String_t* ___name_0;
	// System.String Unity.RenderStreaming.InputSystem.InputRemoting/NewLayoutMsg/Data::layoutJson
	String_t* ___layoutJson_1;
	// System.Boolean Unity.RenderStreaming.InputSystem.InputRemoting/NewLayoutMsg/Data::isOverride
	bool ___isOverride_2;
};
// Native definition for P/Invoke marshalling of Unity.RenderStreaming.InputSystem.InputRemoting/NewLayoutMsg/Data
struct Data_t996B414526496A00392F034F2FE6F541A31CA819_marshaled_pinvoke
{
	char* ___name_0;
	char* ___layoutJson_1;
	int32_t ___isOverride_2;
};
// Native definition for COM marshalling of Unity.RenderStreaming.InputSystem.InputRemoting/NewLayoutMsg/Data
struct Data_t996B414526496A00392F034F2FE6F541A31CA819_marshaled_com
{
	Il2CppChar* ___name_0;
	Il2CppChar* ___layoutJson_1;
	int32_t ___isOverride_2;
};

// UnityEngine.InputSystem.Utilities.InlinedArray`1<UnityEngine.InputSystem.Utilities.InternedString>
struct InlinedArray_1_tAFDFE0972A71B9760077CFA9D4A1DBD7BE435800 
{
	// System.Int32 UnityEngine.InputSystem.Utilities.InlinedArray`1::length
	int32_t ___length_0;
	// TValue UnityEngine.InputSystem.Utilities.InlinedArray`1::firstValue
	InternedString_t8D62A48CB7D85AAE9CFCCCFB0A77AC2844905735 ___firstValue_1;
	// TValue[] UnityEngine.InputSystem.Utilities.InlinedArray`1::additionalValues
	InternedStringU5BU5D_t0B851758733FC0B118D84BE83AED10A0404C18D5* ___additionalValues_2;
};

// Unity.Collections.Allocator
struct Allocator_t996642592271AAD9EE688F142741D512C07B5824 
{
	// System.Int32 Unity.Collections.Allocator::value__
	int32_t ___value___2;
};

// System.Reflection.BindingFlags
struct BindingFlags_t5DC2835E4AE9C1862B3AD172EF35B6A5F4F1812C 
{
	// System.Int32 System.Reflection.BindingFlags::value__
	int32_t ___value___2;
};

// WebSocketSharp.CompressionMethod
struct CompressionMethod_t1B446A9032BAD2F9E31E8070947019B1405C4EC5 
{
	// System.Byte WebSocketSharp.CompressionMethod::value__
	uint8_t ___value___2;
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

// UnityEngine.InputSystem.InputControlLayoutChange
struct InputControlLayoutChange_t61F8342166D22A34A86530E38F9CC0A87CF7AD95 
{
	// System.Int32 UnityEngine.InputSystem.InputControlLayoutChange::value__
	int32_t ___value___2;
};

// UnityEngine.InputSystem.InputDeviceChange
struct InputDeviceChange_t1AD7D7058ABBDAA185C1A2B3A9B5E8FE115D7A78 
{
	// System.Int32 UnityEngine.InputSystem.InputDeviceChange::value__
	int32_t ___value___2;
};

// UnityEngine.InputSystem.Layouts.InputDeviceMatcher
struct InputDeviceMatcher_tF9BA551C8BB4AE41672366A7EBEA951543E0C555 
{
	// System.Collections.Generic.KeyValuePair`2<UnityEngine.InputSystem.Utilities.InternedString,System.Object>[] UnityEngine.InputSystem.Layouts.InputDeviceMatcher::m_Patterns
	KeyValuePair_2U5BU5D_tF8154B2302178CCE00D745DBF55F703880469DFC* ___m_Patterns_0;
};

struct InputDeviceMatcher_tF9BA551C8BB4AE41672366A7EBEA951543E0C555_StaticFields
{
	// UnityEngine.InputSystem.Utilities.InternedString UnityEngine.InputSystem.Layouts.InputDeviceMatcher::kInterfaceKey
	InternedString_t8D62A48CB7D85AAE9CFCCCFB0A77AC2844905735 ___kInterfaceKey_1;
	// UnityEngine.InputSystem.Utilities.InternedString UnityEngine.InputSystem.Layouts.InputDeviceMatcher::kDeviceClassKey
	InternedString_t8D62A48CB7D85AAE9CFCCCFB0A77AC2844905735 ___kDeviceClassKey_2;
	// UnityEngine.InputSystem.Utilities.InternedString UnityEngine.InputSystem.Layouts.InputDeviceMatcher::kManufacturerKey
	InternedString_t8D62A48CB7D85AAE9CFCCCFB0A77AC2844905735 ___kManufacturerKey_3;
	// UnityEngine.InputSystem.Utilities.InternedString UnityEngine.InputSystem.Layouts.InputDeviceMatcher::kProductKey
	InternedString_t8D62A48CB7D85AAE9CFCCCFB0A77AC2844905735 ___kProductKey_4;
	// UnityEngine.InputSystem.Utilities.InternedString UnityEngine.InputSystem.Layouts.InputDeviceMatcher::kVersionKey
	InternedString_t8D62A48CB7D85AAE9CFCCCFB0A77AC2844905735 ___kVersionKey_5;
};
// Native definition for P/Invoke marshalling of UnityEngine.InputSystem.Layouts.InputDeviceMatcher
struct InputDeviceMatcher_tF9BA551C8BB4AE41672366A7EBEA951543E0C555_marshaled_pinvoke
{
	KeyValuePair_2_tC24A74EF64A292F5C6BA77D0B04CD6620D2DE3AC* ___m_Patterns_0;
};
// Native definition for COM marshalling of UnityEngine.InputSystem.Layouts.InputDeviceMatcher
struct InputDeviceMatcher_tF9BA551C8BB4AE41672366A7EBEA951543E0C555_marshaled_com
{
	KeyValuePair_2_tC24A74EF64A292F5C6BA77D0B04CD6620D2DE3AC* ___m_Patterns_0;
};

// Unity.RenderStreaming.InputPositionCorrector
struct InputPositionCorrector_tCF23AF130F6DFC2147C5A591578CB80F6C6475C2  : public RuntimeObject
{
	// UnityEngine.Rect Unity.RenderStreaming.InputPositionCorrector::<inputRegion>k__BackingField
	Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D ___U3CinputRegionU3Ek__BackingField_0;
	// UnityEngine.Rect Unity.RenderStreaming.InputPositionCorrector::<outputRegion>k__BackingField
	Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D ___U3CoutputRegionU3Ek__BackingField_1;
	// System.Action`2<UnityEngine.InputSystem.LowLevel.InputEventPtr,UnityEngine.InputSystem.InputDevice> Unity.RenderStreaming.InputPositionCorrector::_onEvent
	Action_2_t4943DD8C32CAB983950535CEF3BABA85DF8C9AAA* ____onEvent_2;
};

// UnityEngine.InputSystem.LowLevel.InputStateBlock
struct InputStateBlock_t0E05211ACF29A99C0FE7FC9EA7042196BFF1F3B5 
{
	// UnityEngine.InputSystem.Utilities.FourCC UnityEngine.InputSystem.LowLevel.InputStateBlock::<format>k__BackingField
	FourCC_tA6CAA4015BC25A7F1053B6C512202D57A9C994ED ___U3CformatU3Ek__BackingField_33;
	// System.UInt32 UnityEngine.InputSystem.LowLevel.InputStateBlock::<byteOffset>k__BackingField
	uint32_t ___U3CbyteOffsetU3Ek__BackingField_34;
	// System.UInt32 UnityEngine.InputSystem.LowLevel.InputStateBlock::<bitOffset>k__BackingField
	uint32_t ___U3CbitOffsetU3Ek__BackingField_35;
	// System.UInt32 UnityEngine.InputSystem.LowLevel.InputStateBlock::<sizeInBits>k__BackingField
	uint32_t ___U3CsizeInBitsU3Ek__BackingField_36;
};

struct InputStateBlock_t0E05211ACF29A99C0FE7FC9EA7042196BFF1F3B5_StaticFields
{
	// UnityEngine.InputSystem.Utilities.FourCC UnityEngine.InputSystem.LowLevel.InputStateBlock::FormatBit
	FourCC_tA6CAA4015BC25A7F1053B6C512202D57A9C994ED ___FormatBit_2;
	// UnityEngine.InputSystem.Utilities.FourCC UnityEngine.InputSystem.LowLevel.InputStateBlock::FormatSBit
	FourCC_tA6CAA4015BC25A7F1053B6C512202D57A9C994ED ___FormatSBit_4;
	// UnityEngine.InputSystem.Utilities.FourCC UnityEngine.InputSystem.LowLevel.InputStateBlock::FormatInt
	FourCC_tA6CAA4015BC25A7F1053B6C512202D57A9C994ED ___FormatInt_6;
	// UnityEngine.InputSystem.Utilities.FourCC UnityEngine.InputSystem.LowLevel.InputStateBlock::FormatUInt
	FourCC_tA6CAA4015BC25A7F1053B6C512202D57A9C994ED ___FormatUInt_8;
	// UnityEngine.InputSystem.Utilities.FourCC UnityEngine.InputSystem.LowLevel.InputStateBlock::FormatShort
	FourCC_tA6CAA4015BC25A7F1053B6C512202D57A9C994ED ___FormatShort_10;
	// UnityEngine.InputSystem.Utilities.FourCC UnityEngine.InputSystem.LowLevel.InputStateBlock::FormatUShort
	FourCC_tA6CAA4015BC25A7F1053B6C512202D57A9C994ED ___FormatUShort_12;
	// UnityEngine.InputSystem.Utilities.FourCC UnityEngine.InputSystem.LowLevel.InputStateBlock::FormatByte
	FourCC_tA6CAA4015BC25A7F1053B6C512202D57A9C994ED ___FormatByte_14;
	// UnityEngine.InputSystem.Utilities.FourCC UnityEngine.InputSystem.LowLevel.InputStateBlock::FormatSByte
	FourCC_tA6CAA4015BC25A7F1053B6C512202D57A9C994ED ___FormatSByte_16;
	// UnityEngine.InputSystem.Utilities.FourCC UnityEngine.InputSystem.LowLevel.InputStateBlock::FormatLong
	FourCC_tA6CAA4015BC25A7F1053B6C512202D57A9C994ED ___FormatLong_18;
	// UnityEngine.InputSystem.Utilities.FourCC UnityEngine.InputSystem.LowLevel.InputStateBlock::FormatULong
	FourCC_tA6CAA4015BC25A7F1053B6C512202D57A9C994ED ___FormatULong_20;
	// UnityEngine.InputSystem.Utilities.FourCC UnityEngine.InputSystem.LowLevel.InputStateBlock::FormatFloat
	FourCC_tA6CAA4015BC25A7F1053B6C512202D57A9C994ED ___FormatFloat_22;
	// UnityEngine.InputSystem.Utilities.FourCC UnityEngine.InputSystem.LowLevel.InputStateBlock::FormatDouble
	FourCC_tA6CAA4015BC25A7F1053B6C512202D57A9C994ED ___FormatDouble_24;
	// UnityEngine.InputSystem.Utilities.FourCC UnityEngine.InputSystem.LowLevel.InputStateBlock::FormatVector2
	FourCC_tA6CAA4015BC25A7F1053B6C512202D57A9C994ED ___FormatVector2_26;
	// UnityEngine.InputSystem.Utilities.FourCC UnityEngine.InputSystem.LowLevel.InputStateBlock::FormatVector3
	FourCC_tA6CAA4015BC25A7F1053B6C512202D57A9C994ED ___FormatVector3_27;
	// UnityEngine.InputSystem.Utilities.FourCC UnityEngine.InputSystem.LowLevel.InputStateBlock::FormatQuaternion
	FourCC_tA6CAA4015BC25A7F1053B6C512202D57A9C994ED ___FormatQuaternion_28;
	// UnityEngine.InputSystem.Utilities.FourCC UnityEngine.InputSystem.LowLevel.InputStateBlock::FormatVector2Short
	FourCC_tA6CAA4015BC25A7F1053B6C512202D57A9C994ED ___FormatVector2Short_29;
	// UnityEngine.InputSystem.Utilities.FourCC UnityEngine.InputSystem.LowLevel.InputStateBlock::FormatVector3Short
	FourCC_tA6CAA4015BC25A7F1053B6C512202D57A9C994ED ___FormatVector3Short_30;
	// UnityEngine.InputSystem.Utilities.FourCC UnityEngine.InputSystem.LowLevel.InputStateBlock::FormatVector2Byte
	FourCC_tA6CAA4015BC25A7F1053B6C512202D57A9C994ED ___FormatVector2Byte_31;
	// UnityEngine.InputSystem.Utilities.FourCC UnityEngine.InputSystem.LowLevel.InputStateBlock::FormatVector3Byte
	FourCC_tA6CAA4015BC25A7F1053B6C512202D57A9C994ED ___FormatVector3Byte_32;
};

// System.Int32Enum
struct Int32Enum_tCBAC8BA2BFF3A845FA599F303093BBBA374B6F0C 
{
	// System.Int32 System.Int32Enum::value__
	int32_t ___value___2;
};

// System.IO.MemoryStream
struct MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2  : public Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE
{
	// System.Byte[] System.IO.MemoryStream::_buffer
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ____buffer_4;
	// System.Int32 System.IO.MemoryStream::_origin
	int32_t ____origin_5;
	// System.Int32 System.IO.MemoryStream::_position
	int32_t ____position_6;
	// System.Int32 System.IO.MemoryStream::_length
	int32_t ____length_7;
	// System.Int32 System.IO.MemoryStream::_capacity
	int32_t ____capacity_8;
	// System.Boolean System.IO.MemoryStream::_expandable
	bool ____expandable_9;
	// System.Boolean System.IO.MemoryStream::_writable
	bool ____writable_10;
	// System.Boolean System.IO.MemoryStream::_exposable
	bool ____exposable_11;
	// System.Boolean System.IO.MemoryStream::_isOpen
	bool ____isOpen_12;
	// System.Threading.Tasks.Task`1<System.Int32> System.IO.MemoryStream::_lastReadTask
	Task_1_t4C228DE57804012969575431CFF12D57C875552D* ____lastReadTask_13;
};

// UnityEngineInternal.Input.NativeInputEventType
struct NativeInputEventType_t622584116C97356073253408636FA50ECAA9853B 
{
	// System.Int32 UnityEngineInternal.Input.NativeInputEventType::value__
	int32_t ___value___2;
};

// WebSocketSharp.Opcode
struct Opcode_t18EED2E5DFE8EEF29FEF93D61B9D5294B4DD04B9 
{
	// System.Byte WebSocketSharp.Opcode::value__
	uint8_t ___value___2;
};

// Unity.WebRTC.RTCDataChannelState
struct RTCDataChannelState_tA8449E3FDBA1708254DF1392E820F21289402802 
{
	// System.Int32 Unity.WebRTC.RTCDataChannelState::value__
	int32_t ___value___2;
};

// Unity.WebRTC.RTCIceComponent
struct RTCIceComponent_t1196DFC02826F1EB1B7F390ECA0E81E3329548D0 
{
	// System.Int32 Unity.WebRTC.RTCIceComponent::value__
	int32_t ___value___2;
};

// Unity.WebRTC.RTCSdpType
struct RTCSdpType_tE8C84087161E44B64E85420AFFE3242C55DDD893 
{
	// System.Int32 Unity.WebRTC.RTCSdpType::value__
	int32_t ___value___2;
};

// Unity.WebRTC.RefCountedObject
struct RefCountedObject_t854B3011CF94AEE8D385AAF796B3223483A434BC  : public RuntimeObject
{
	// System.IntPtr Unity.WebRTC.RefCountedObject::self
	intptr_t ___self_0;
	// System.Boolean Unity.WebRTC.RefCountedObject::disposed
	bool ___disposed_1;
};

// System.RuntimeTypeHandle
struct RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B 
{
	// System.IntPtr System.RuntimeTypeHandle::value
	intptr_t ___value_0;
};

// System.Net.Security.SslPolicyErrors
struct SslPolicyErrors_t92DF45EC5BA5BEFF38EF53C2C8488B27385EBB08 
{
	// System.Int32 System.Net.Security.SslPolicyErrors::value__
	int32_t ___value___2;
};

// System.Security.Authentication.SslProtocols
struct SslProtocols_t21FADB874FCAEC5039AE593AA3544639C938C77E 
{
	// System.Int32 System.Security.Authentication.SslProtocols::value__
	int32_t ___value___2;
};

// System.Threading.SynchronizationContextProperties
struct SynchronizationContextProperties_t5ED82C778B4C396AD94A93CFBEF00022BDECF058 
{
	// System.Int32 System.Threading.SynchronizationContextProperties::value__
	int32_t ___value___2;
};

// System.Threading.ThreadState
struct ThreadState_t88980884E50F6863016A2A01EBC1549516DB3CB2 
{
	// System.Int32 System.Threading.ThreadState::value__
	int32_t ___value___2;
};

// System.TypeCode
struct TypeCode_tBEF9BE86C8BCF5A6B82F3381219738D27804EF79 
{
	// System.Int32 System.TypeCode::value__
	int32_t ___value___2;
};

// System.Threading.WaitHandle
struct WaitHandle_t08F8DB54593B241FE32E0DD0BD3D82785D3AE3D8  : public MarshalByRefObject_t8C2F4C5854177FD60439EB1FCCFC1B3CFAFE8DCE
{
	// System.IntPtr System.Threading.WaitHandle::waitHandle
	intptr_t ___waitHandle_3;
	// Microsoft.Win32.SafeHandles.SafeWaitHandle modreq(System.Runtime.CompilerServices.IsVolatile) System.Threading.WaitHandle::safeWaitHandle
	SafeWaitHandle_t58F5662CD56F6462A687198A64987F8980804449* ___safeWaitHandle_4;
	// System.Boolean System.Threading.WaitHandle::hasThreadAffinity
	bool ___hasThreadAffinity_5;
};

struct WaitHandle_t08F8DB54593B241FE32E0DD0BD3D82785D3AE3D8_StaticFields
{
	// System.IntPtr System.Threading.WaitHandle::InvalidHandle
	intptr_t ___InvalidHandle_11;
};
// Native definition for P/Invoke marshalling of System.Threading.WaitHandle
struct WaitHandle_t08F8DB54593B241FE32E0DD0BD3D82785D3AE3D8_marshaled_pinvoke : public MarshalByRefObject_t8C2F4C5854177FD60439EB1FCCFC1B3CFAFE8DCE_marshaled_pinvoke
{
	intptr_t ___waitHandle_3;
	void* ___safeWaitHandle_4;
	int32_t ___hasThreadAffinity_5;
};
// Native definition for COM marshalling of System.Threading.WaitHandle
struct WaitHandle_t08F8DB54593B241FE32E0DD0BD3D82785D3AE3D8_marshaled_com : public MarshalByRefObject_t8C2F4C5854177FD60439EB1FCCFC1B3CFAFE8DCE_marshaled_com
{
	intptr_t ___waitHandle_3;
	void* ___safeWaitHandle_4;
	int32_t ___hasThreadAffinity_5;
};

// WebSocketSharp.WebSocketState
struct WebSocketState_t6CE8D2AD975CABEE2E33EC9F5D232C6EF69D9C4F 
{
	// System.UInt16 WebSocketSharp.WebSocketState::value__
	uint16_t ___value___2;
};

// System.Security.Cryptography.X509Certificates.X509Certificate
struct X509Certificate_t966CC553AF25AE7991F5B4C2AACBCF6C66C8F9C4  : public RuntimeObject
{
	// System.Security.Cryptography.X509Certificates.X509CertificateImpl System.Security.Cryptography.X509Certificates.X509Certificate::impl
	X509CertificateImpl_tF590E81705CE1FE152C590E5A875D4FE3BE348EF* ___impl_0;
	// System.Byte[] modreq(System.Runtime.CompilerServices.IsVolatile) System.Security.Cryptography.X509Certificates.X509Certificate::lazyCertHash
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___lazyCertHash_1;
	// System.Byte[] modreq(System.Runtime.CompilerServices.IsVolatile) System.Security.Cryptography.X509Certificates.X509Certificate::lazySerialNumber
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___lazySerialNumber_2;
	// System.String modreq(System.Runtime.CompilerServices.IsVolatile) System.Security.Cryptography.X509Certificates.X509Certificate::lazyIssuer
	String_t* ___lazyIssuer_3;
	// System.String modreq(System.Runtime.CompilerServices.IsVolatile) System.Security.Cryptography.X509Certificates.X509Certificate::lazySubject
	String_t* ___lazySubject_4;
	// System.String modreq(System.Runtime.CompilerServices.IsVolatile) System.Security.Cryptography.X509Certificates.X509Certificate::lazyKeyAlgorithm
	String_t* ___lazyKeyAlgorithm_5;
	// System.Byte[] modreq(System.Runtime.CompilerServices.IsVolatile) System.Security.Cryptography.X509Certificates.X509Certificate::lazyKeyAlgorithmParameters
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___lazyKeyAlgorithmParameters_6;
	// System.Byte[] modreq(System.Runtime.CompilerServices.IsVolatile) System.Security.Cryptography.X509Certificates.X509Certificate::lazyPublicKey
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___lazyPublicKey_7;
	// System.DateTime System.Security.Cryptography.X509Certificates.X509Certificate::lazyNotBefore
	DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D ___lazyNotBefore_8;
	// System.DateTime System.Security.Cryptography.X509Certificates.X509Certificate::lazyNotAfter
	DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D ___lazyNotAfter_9;
};

// UnityEngine.InputSystem.InputControl/ControlFlags
struct ControlFlags_t9C297F208DE19CEB00A0560F7FDE59F6A2004132 
{
	// System.Int32 UnityEngine.InputSystem.InputControl/ControlFlags::value__
	int32_t ___value___2;
};

// UnityEngine.InputSystem.Layouts.InputControlLayout/Flags
struct Flags_t193C2E9B0D9701ACB7ABD982BA8B3B2DB2F74230 
{
	// System.Int32 UnityEngine.InputSystem.Layouts.InputControlLayout/Flags::value__
	int32_t ___value___2;
};

// UnityEngine.InputSystem.InputDevice/DeviceFlags
struct DeviceFlags_tF02F85DA24FF16879A67B540FCA560EC955CE728 
{
	// System.Int32 UnityEngine.InputSystem.InputDevice/DeviceFlags::value__
	int32_t ___value___2;
};

// Unity.RenderStreaming.InputSystem.InputRemoting/Flags
struct Flags_tCAB636F80FEC192A44B213F5755CA4B598864137 
{
	// System.Int32 Unity.RenderStreaming.InputSystem.InputRemoting/Flags::value__
	int32_t ___value___2;
};

// Unity.RenderStreaming.InputSystem.InputRemoting/MessageType
struct MessageType_t434C6340519F3815F79439B6A5FB20D1357578E0 
{
	// System.Int32 Unity.RenderStreaming.InputSystem.InputRemoting/MessageType::value__
	int32_t ___value___2;
};

// Unity.RenderStreaming.InputSystem.InputRemoting/RemoteInputDevice
struct RemoteInputDevice_t7E8AF8B413C68B7205B1F4D9EDA5BBD53ABCDB27 
{
	// System.Int32 Unity.RenderStreaming.InputSystem.InputRemoting/RemoteInputDevice::remoteId
	int32_t ___remoteId_0;
	// System.Int32 Unity.RenderStreaming.InputSystem.InputRemoting/RemoteInputDevice::localId
	int32_t ___localId_1;
	// System.String Unity.RenderStreaming.InputSystem.InputRemoting/RemoteInputDevice::layoutName
	String_t* ___layoutName_2;
	// UnityEngine.InputSystem.Layouts.InputDeviceDescription Unity.RenderStreaming.InputSystem.InputRemoting/RemoteInputDevice::description
	InputDeviceDescription_tE86DD77422AAF60ADDAC788B31E5A05E739B708F ___description_3;
};
// Native definition for P/Invoke marshalling of Unity.RenderStreaming.InputSystem.InputRemoting/RemoteInputDevice
struct RemoteInputDevice_t7E8AF8B413C68B7205B1F4D9EDA5BBD53ABCDB27_marshaled_pinvoke
{
	int32_t ___remoteId_0;
	int32_t ___localId_1;
	char* ___layoutName_2;
	InputDeviceDescription_tE86DD77422AAF60ADDAC788B31E5A05E739B708F_marshaled_pinvoke ___description_3;
};
// Native definition for COM marshalling of Unity.RenderStreaming.InputSystem.InputRemoting/RemoteInputDevice
struct RemoteInputDevice_t7E8AF8B413C68B7205B1F4D9EDA5BBD53ABCDB27_marshaled_com
{
	int32_t ___remoteId_0;
	int32_t ___localId_1;
	Il2CppChar* ___layoutName_2;
	InputDeviceDescription_tE86DD77422AAF60ADDAC788B31E5A05E739B708F_marshaled_com ___description_3;
};

// Unity.RenderStreaming.InputSystem.InputRemoting/NewDeviceMsg/Data
struct Data_t388E6D9BE25175D528F87ED2B794D4CCA12E1632 
{
	// System.String Unity.RenderStreaming.InputSystem.InputRemoting/NewDeviceMsg/Data::name
	String_t* ___name_0;
	// System.String Unity.RenderStreaming.InputSystem.InputRemoting/NewDeviceMsg/Data::layout
	String_t* ___layout_1;
	// System.Int32 Unity.RenderStreaming.InputSystem.InputRemoting/NewDeviceMsg/Data::deviceId
	int32_t ___deviceId_2;
	// System.String Unity.RenderStreaming.InputSystem.InputRemoting/NewDeviceMsg/Data::variants
	String_t* ___variants_3;
	// UnityEngine.InputSystem.Layouts.InputDeviceDescription Unity.RenderStreaming.InputSystem.InputRemoting/NewDeviceMsg/Data::description
	InputDeviceDescription_tE86DD77422AAF60ADDAC788B31E5A05E739B708F ___description_4;
};
// Native definition for P/Invoke marshalling of Unity.RenderStreaming.InputSystem.InputRemoting/NewDeviceMsg/Data
struct Data_t388E6D9BE25175D528F87ED2B794D4CCA12E1632_marshaled_pinvoke
{
	char* ___name_0;
	char* ___layout_1;
	int32_t ___deviceId_2;
	char* ___variants_3;
	InputDeviceDescription_tE86DD77422AAF60ADDAC788B31E5A05E739B708F_marshaled_pinvoke ___description_4;
};
// Native definition for COM marshalling of Unity.RenderStreaming.InputSystem.InputRemoting/NewDeviceMsg/Data
struct Data_t388E6D9BE25175D528F87ED2B794D4CCA12E1632_marshaled_com
{
	Il2CppChar* ___name_0;
	Il2CppChar* ___layout_1;
	int32_t ___deviceId_2;
	Il2CppChar* ___variants_3;
	InputDeviceDescription_tE86DD77422AAF60ADDAC788B31E5A05E739B708F_marshaled_com ___description_4;
};

// Unity.Collections.NativeArray`1<System.Byte>
struct NativeArray_1_t81F55263465517B73C455D3400CF67B4BADD85CF 
{
	// System.Void* Unity.Collections.NativeArray`1::m_Buffer
	void* ___m_Buffer_0;
	// System.Int32 Unity.Collections.NativeArray`1::m_Length
	int32_t ___m_Length_1;
	// Unity.Collections.Allocator Unity.Collections.NativeArray`1::m_AllocatorLabel
	int32_t ___m_AllocatorLabel_2;
};

// System.Nullable`1<UnityEngine.InputSystem.Layouts.InputDeviceMatcher>
struct Nullable_1_t4EEC710224A7596AC94C3B6D292E4CB7D84B7F2C 
{
	// System.Boolean System.Nullable`1::hasValue
	bool ___hasValue_0;
	// T System.Nullable`1::value
	InputDeviceMatcher_tF9BA551C8BB4AE41672366A7EBEA951543E0C555 ___value_1;
};

// Unity.WebRTC.CandidateInternal
struct CandidateInternal_tA7F036DB81B3C50D20C687077B10F6298A7A9EB5 
{
	// System.String Unity.WebRTC.CandidateInternal::candidate
	String_t* ___candidate_0;
	// Unity.WebRTC.RTCIceComponent Unity.WebRTC.CandidateInternal::component
	int32_t ___component_1;
	// System.String Unity.WebRTC.CandidateInternal::foundation
	String_t* ___foundation_2;
	// System.String Unity.WebRTC.CandidateInternal::ip
	String_t* ___ip_3;
	// System.UInt16 Unity.WebRTC.CandidateInternal::port
	uint16_t ___port_4;
	// System.UInt32 Unity.WebRTC.CandidateInternal::priority
	uint32_t ___priority_5;
	// System.String Unity.WebRTC.CandidateInternal::address
	String_t* ___address_6;
	// System.String Unity.WebRTC.CandidateInternal::protocol
	String_t* ___protocol_7;
	// System.String Unity.WebRTC.CandidateInternal::relatedAddress
	String_t* ___relatedAddress_8;
	// System.UInt16 Unity.WebRTC.CandidateInternal::relatedPort
	uint16_t ___relatedPort_9;
	// System.String Unity.WebRTC.CandidateInternal::tcpType
	String_t* ___tcpType_10;
	// System.String Unity.WebRTC.CandidateInternal::type
	String_t* ___type_11;
	// System.String Unity.WebRTC.CandidateInternal::usernameFragment
	String_t* ___usernameFragment_12;
};
// Native definition for P/Invoke marshalling of Unity.WebRTC.CandidateInternal
struct CandidateInternal_tA7F036DB81B3C50D20C687077B10F6298A7A9EB5_marshaled_pinvoke
{
	char* ___candidate_0;
	int32_t ___component_1;
	char* ___foundation_2;
	char* ___ip_3;
	uint16_t ___port_4;
	uint32_t ___priority_5;
	char* ___address_6;
	char* ___protocol_7;
	char* ___relatedAddress_8;
	uint16_t ___relatedPort_9;
	char* ___tcpType_10;
	char* ___type_11;
	char* ___usernameFragment_12;
};
// Native definition for COM marshalling of Unity.WebRTC.CandidateInternal
struct CandidateInternal_tA7F036DB81B3C50D20C687077B10F6298A7A9EB5_marshaled_com
{
	char* ___candidate_0;
	int32_t ___component_1;
	char* ___foundation_2;
	char* ___ip_3;
	uint16_t ___port_4;
	uint32_t ___priority_5;
	char* ___address_6;
	char* ___protocol_7;
	char* ___relatedAddress_8;
	uint16_t ___relatedPort_9;
	char* ___tcpType_10;
	char* ___type_11;
	char* ___usernameFragment_12;
};

// WebSocketSharp.Net.ClientSslConfiguration
struct ClientSslConfiguration_t212ECC383B70D9C462DC423E9D3CD27C9E74A603  : public RuntimeObject
{
	// System.Boolean WebSocketSharp.Net.ClientSslConfiguration::_checkCertRevocation
	bool ____checkCertRevocation_0;
	// System.Net.Security.LocalCertificateSelectionCallback WebSocketSharp.Net.ClientSslConfiguration::_clientCertSelectionCallback
	LocalCertificateSelectionCallback_t71A03329606A5610ECC62BFBE6327C1EF9195859* ____clientCertSelectionCallback_1;
	// System.Security.Cryptography.X509Certificates.X509CertificateCollection WebSocketSharp.Net.ClientSslConfiguration::_clientCerts
	X509CertificateCollection_t2900D71D188EDCA7DEB5077D36103EE5DA6805CE* ____clientCerts_2;
	// System.Security.Authentication.SslProtocols WebSocketSharp.Net.ClientSslConfiguration::_enabledSslProtocols
	int32_t ____enabledSslProtocols_3;
	// System.Net.Security.RemoteCertificateValidationCallback WebSocketSharp.Net.ClientSslConfiguration::_serverCertValidationCallback
	RemoteCertificateValidationCallback_t2F4C5801F96B2C2BF934511796C5BFEAEBF01955* ____serverCertValidationCallback_4;
	// System.String WebSocketSharp.Net.ClientSslConfiguration::_targetHost
	String_t* ____targetHost_5;
};

// System.Threading.EventWaitHandle
struct EventWaitHandle_t18F2EB0161747B0646A9A406015A61A214A1EB7E  : public WaitHandle_t08F8DB54593B241FE32E0DD0BD3D82785D3AE3D8
{
};

// UnityEngine.InputSystem.Layouts.InputControlLayout
struct InputControlLayout_t46A40BE4C976BE33E85F61E63EB34323FED9831D  : public RuntimeObject
{
	// UnityEngine.InputSystem.Utilities.InternedString UnityEngine.InputSystem.Layouts.InputControlLayout::m_Name
	InternedString_t8D62A48CB7D85AAE9CFCCCFB0A77AC2844905735 ___m_Name_2;
	// System.Type UnityEngine.InputSystem.Layouts.InputControlLayout::m_Type
	Type_t* ___m_Type_3;
	// UnityEngine.InputSystem.Utilities.InternedString UnityEngine.InputSystem.Layouts.InputControlLayout::m_Variants
	InternedString_t8D62A48CB7D85AAE9CFCCCFB0A77AC2844905735 ___m_Variants_4;
	// UnityEngine.InputSystem.Utilities.FourCC UnityEngine.InputSystem.Layouts.InputControlLayout::m_StateFormat
	FourCC_tA6CAA4015BC25A7F1053B6C512202D57A9C994ED ___m_StateFormat_5;
	// System.Int32 UnityEngine.InputSystem.Layouts.InputControlLayout::m_StateSizeInBytes
	int32_t ___m_StateSizeInBytes_6;
	// System.Nullable`1<System.Boolean> UnityEngine.InputSystem.Layouts.InputControlLayout::m_UpdateBeforeRender
	Nullable_1_t78F453FADB4A9F50F267A4E349019C34410D1A01 ___m_UpdateBeforeRender_7;
	// UnityEngine.InputSystem.Utilities.InlinedArray`1<UnityEngine.InputSystem.Utilities.InternedString> UnityEngine.InputSystem.Layouts.InputControlLayout::m_BaseLayouts
	InlinedArray_1_tAFDFE0972A71B9760077CFA9D4A1DBD7BE435800 ___m_BaseLayouts_8;
	// UnityEngine.InputSystem.Utilities.InlinedArray`1<UnityEngine.InputSystem.Utilities.InternedString> UnityEngine.InputSystem.Layouts.InputControlLayout::m_AppliedOverrides
	InlinedArray_1_tAFDFE0972A71B9760077CFA9D4A1DBD7BE435800 ___m_AppliedOverrides_9;
	// UnityEngine.InputSystem.Utilities.InternedString[] UnityEngine.InputSystem.Layouts.InputControlLayout::m_CommonUsages
	InternedStringU5BU5D_t0B851758733FC0B118D84BE83AED10A0404C18D5* ___m_CommonUsages_10;
	// UnityEngine.InputSystem.Layouts.InputControlLayout/ControlItem[] UnityEngine.InputSystem.Layouts.InputControlLayout::m_Controls
	ControlItemU5BU5D_t7798E8B7C7F58B8F6D13B567539CD82E962C7104* ___m_Controls_11;
	// System.String UnityEngine.InputSystem.Layouts.InputControlLayout::m_DisplayName
	String_t* ___m_DisplayName_12;
	// System.String UnityEngine.InputSystem.Layouts.InputControlLayout::m_Description
	String_t* ___m_Description_13;
	// UnityEngine.InputSystem.Layouts.InputControlLayout/Flags UnityEngine.InputSystem.Layouts.InputControlLayout::m_Flags
	int32_t ___m_Flags_14;
};

struct InputControlLayout_t46A40BE4C976BE33E85F61E63EB34323FED9831D_StaticFields
{
	// UnityEngine.InputSystem.Utilities.InternedString UnityEngine.InputSystem.Layouts.InputControlLayout::s_DefaultVariant
	InternedString_t8D62A48CB7D85AAE9CFCCCFB0A77AC2844905735 ___s_DefaultVariant_0;
	// UnityEngine.InputSystem.Layouts.InputControlLayout/Collection UnityEngine.InputSystem.Layouts.InputControlLayout::s_Layouts
	Collection_t6E9F85AD439CF26269683541C4DC58BA3B6756C5 ___s_Layouts_15;
	// UnityEngine.InputSystem.Layouts.InputControlLayout/Cache UnityEngine.InputSystem.Layouts.InputControlLayout::s_CacheInstance
	Cache_tB837109647F577DCE3795AEE2E9E0E3F61F543AB ___s_CacheInstance_16;
	// System.Int32 UnityEngine.InputSystem.Layouts.InputControlLayout::s_CacheInstanceRef
	int32_t ___s_CacheInstanceRef_17;
};

// Unity.RenderStreaming.InputSystem.InputRemoting
struct InputRemoting_t4BBB51BEA47ACD8A408459C612008D52240C6985  : public RuntimeObject
{
	// Unity.RenderStreaming.InputSystem.InputRemoting/Flags Unity.RenderStreaming.InputSystem.InputRemoting::m_Flags
	int32_t ___m_Flags_0;
	// Unity.RenderStreaming.InputSystem.IInputManager Unity.RenderStreaming.InputSystem.InputRemoting::m_LocalManager
	RuntimeObject* ___m_LocalManager_1;
	// Unity.RenderStreaming.InputSystem.InputRemoting/Subscriber[] Unity.RenderStreaming.InputSystem.InputRemoting::m_Subscribers
	SubscriberU5BU5D_tF989EA4535B55CD10D08D7C8C981FC376FC12C18* ___m_Subscribers_2;
	// Unity.RenderStreaming.InputSystem.InputRemoting/RemoteSender[] Unity.RenderStreaming.InputSystem.InputRemoting::m_Senders
	RemoteSenderU5BU5D_tFE32D763FD37124BA0F477F37A797F29868A3C3F* ___m_Senders_3;
};

// WebSocketSharp.MessageEventArgs
struct MessageEventArgs_tAA9D7AC324337F7494A3084C3A2E5ECA24AA6BD4  : public EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377
{
	// System.String WebSocketSharp.MessageEventArgs::_data
	String_t* ____data_1;
	// System.Boolean WebSocketSharp.MessageEventArgs::_dataSet
	bool ____dataSet_2;
	// WebSocketSharp.Opcode WebSocketSharp.MessageEventArgs::_opcode
	uint8_t ____opcode_3;
	// System.Byte[] WebSocketSharp.MessageEventArgs::_rawData
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ____rawData_4;
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

// UnityEngineInternal.Input.NativeInputEvent
struct NativeInputEvent_tDE7DE9A48ACA442A8D37E2920836D00C26408CB8 
{
	union
	{
		struct
		{
			union
			{
				#pragma pack(push, tp, 1)
				struct
				{
					// UnityEngineInternal.Input.NativeInputEventType UnityEngineInternal.Input.NativeInputEvent::type
					int32_t ___type_1;
				};
				#pragma pack(pop, tp)
				#pragma pack(push, tp, 1)
				struct
				{
					int32_t ___type_1_forAlignmentOnly;
				};
				#pragma pack(pop, tp)
				#pragma pack(push, tp, 1)
				struct
				{
					char ___sizeInBytes_2_OffsetPadding[4];
					// System.UInt16 UnityEngineInternal.Input.NativeInputEvent::sizeInBytes
					uint16_t ___sizeInBytes_2;
				};
				#pragma pack(pop, tp)
				#pragma pack(push, tp, 1)
				struct
				{
					char ___sizeInBytes_2_OffsetPadding_forAlignmentOnly[4];
					uint16_t ___sizeInBytes_2_forAlignmentOnly;
				};
				#pragma pack(pop, tp)
				#pragma pack(push, tp, 1)
				struct
				{
					char ___deviceId_3_OffsetPadding[6];
					// System.UInt16 UnityEngineInternal.Input.NativeInputEvent::deviceId
					uint16_t ___deviceId_3;
				};
				#pragma pack(pop, tp)
				#pragma pack(push, tp, 1)
				struct
				{
					char ___deviceId_3_OffsetPadding_forAlignmentOnly[6];
					uint16_t ___deviceId_3_forAlignmentOnly;
				};
				#pragma pack(pop, tp)
				#pragma pack(push, tp, 1)
				struct
				{
					char ___time_4_OffsetPadding[8];
					// System.Double UnityEngineInternal.Input.NativeInputEvent::time
					double ___time_4;
				};
				#pragma pack(pop, tp)
				#pragma pack(push, tp, 1)
				struct
				{
					char ___time_4_OffsetPadding_forAlignmentOnly[8];
					double ___time_4_forAlignmentOnly;
				};
				#pragma pack(pop, tp)
				#pragma pack(push, tp, 1)
				struct
				{
					char ___eventId_5_OffsetPadding[16];
					// System.Int32 UnityEngineInternal.Input.NativeInputEvent::eventId
					int32_t ___eventId_5;
				};
				#pragma pack(pop, tp)
				#pragma pack(push, tp, 1)
				struct
				{
					char ___eventId_5_OffsetPadding_forAlignmentOnly[16];
					int32_t ___eventId_5_forAlignmentOnly;
				};
				#pragma pack(pop, tp)
			};
		};
		uint8_t NativeInputEvent_tDE7DE9A48ACA442A8D37E2920836D00C26408CB8__padding[20];
	};
};

// UnityEngine.InputSystem.Utilities.PrimitiveValue
struct PrimitiveValue_t1CC37566F40746757D5E3F87474A05909D85C2D4 
{
	union
	{
		#pragma pack(push, tp, 1)
		struct
		{
			// System.TypeCode UnityEngine.InputSystem.Utilities.PrimitiveValue::m_Type
			int32_t ___m_Type_0;
		};
		#pragma pack(pop, tp)
		struct
		{
			int32_t ___m_Type_0_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_BoolValue_1_OffsetPadding[4];
			// System.Boolean UnityEngine.InputSystem.Utilities.PrimitiveValue::m_BoolValue
			bool ___m_BoolValue_1;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_BoolValue_1_OffsetPadding_forAlignmentOnly[4];
			bool ___m_BoolValue_1_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_CharValue_2_OffsetPadding[4];
			// System.Char UnityEngine.InputSystem.Utilities.PrimitiveValue::m_CharValue
			Il2CppChar ___m_CharValue_2;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_CharValue_2_OffsetPadding_forAlignmentOnly[4];
			Il2CppChar ___m_CharValue_2_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_ByteValue_3_OffsetPadding[4];
			// System.Byte UnityEngine.InputSystem.Utilities.PrimitiveValue::m_ByteValue
			uint8_t ___m_ByteValue_3;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_ByteValue_3_OffsetPadding_forAlignmentOnly[4];
			uint8_t ___m_ByteValue_3_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_SByteValue_4_OffsetPadding[4];
			// System.SByte UnityEngine.InputSystem.Utilities.PrimitiveValue::m_SByteValue
			int8_t ___m_SByteValue_4;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_SByteValue_4_OffsetPadding_forAlignmentOnly[4];
			int8_t ___m_SByteValue_4_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_ShortValue_5_OffsetPadding[4];
			// System.Int16 UnityEngine.InputSystem.Utilities.PrimitiveValue::m_ShortValue
			int16_t ___m_ShortValue_5;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_ShortValue_5_OffsetPadding_forAlignmentOnly[4];
			int16_t ___m_ShortValue_5_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_UShortValue_6_OffsetPadding[4];
			// System.UInt16 UnityEngine.InputSystem.Utilities.PrimitiveValue::m_UShortValue
			uint16_t ___m_UShortValue_6;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_UShortValue_6_OffsetPadding_forAlignmentOnly[4];
			uint16_t ___m_UShortValue_6_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_IntValue_7_OffsetPadding[4];
			// System.Int32 UnityEngine.InputSystem.Utilities.PrimitiveValue::m_IntValue
			int32_t ___m_IntValue_7;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_IntValue_7_OffsetPadding_forAlignmentOnly[4];
			int32_t ___m_IntValue_7_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_UIntValue_8_OffsetPadding[4];
			// System.UInt32 UnityEngine.InputSystem.Utilities.PrimitiveValue::m_UIntValue
			uint32_t ___m_UIntValue_8;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_UIntValue_8_OffsetPadding_forAlignmentOnly[4];
			uint32_t ___m_UIntValue_8_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_LongValue_9_OffsetPadding[4];
			// System.Int64 UnityEngine.InputSystem.Utilities.PrimitiveValue::m_LongValue
			int64_t ___m_LongValue_9;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_LongValue_9_OffsetPadding_forAlignmentOnly[4];
			int64_t ___m_LongValue_9_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_ULongValue_10_OffsetPadding[4];
			// System.UInt64 UnityEngine.InputSystem.Utilities.PrimitiveValue::m_ULongValue
			uint64_t ___m_ULongValue_10;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_ULongValue_10_OffsetPadding_forAlignmentOnly[4];
			uint64_t ___m_ULongValue_10_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_FloatValue_11_OffsetPadding[4];
			// System.Single UnityEngine.InputSystem.Utilities.PrimitiveValue::m_FloatValue
			float ___m_FloatValue_11;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_FloatValue_11_OffsetPadding_forAlignmentOnly[4];
			float ___m_FloatValue_11_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_DoubleValue_12_OffsetPadding[4];
			// System.Double UnityEngine.InputSystem.Utilities.PrimitiveValue::m_DoubleValue
			double ___m_DoubleValue_12;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_DoubleValue_12_OffsetPadding_forAlignmentOnly[4];
			double ___m_DoubleValue_12_forAlignmentOnly;
		};
	};
};
// Native definition for P/Invoke marshalling of UnityEngine.InputSystem.Utilities.PrimitiveValue
struct PrimitiveValue_t1CC37566F40746757D5E3F87474A05909D85C2D4_marshaled_pinvoke
{
	union
	{
		#pragma pack(push, tp, 1)
		struct
		{
			int32_t ___m_Type_0;
		};
		#pragma pack(pop, tp)
		struct
		{
			int32_t ___m_Type_0_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_BoolValue_1_OffsetPadding[4];
			int32_t ___m_BoolValue_1;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_BoolValue_1_OffsetPadding_forAlignmentOnly[4];
			int32_t ___m_BoolValue_1_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_CharValue_2_OffsetPadding[4];
			uint8_t ___m_CharValue_2;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_CharValue_2_OffsetPadding_forAlignmentOnly[4];
			uint8_t ___m_CharValue_2_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_ByteValue_3_OffsetPadding[4];
			uint8_t ___m_ByteValue_3;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_ByteValue_3_OffsetPadding_forAlignmentOnly[4];
			uint8_t ___m_ByteValue_3_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_SByteValue_4_OffsetPadding[4];
			int8_t ___m_SByteValue_4;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_SByteValue_4_OffsetPadding_forAlignmentOnly[4];
			int8_t ___m_SByteValue_4_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_ShortValue_5_OffsetPadding[4];
			int16_t ___m_ShortValue_5;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_ShortValue_5_OffsetPadding_forAlignmentOnly[4];
			int16_t ___m_ShortValue_5_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_UShortValue_6_OffsetPadding[4];
			uint16_t ___m_UShortValue_6;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_UShortValue_6_OffsetPadding_forAlignmentOnly[4];
			uint16_t ___m_UShortValue_6_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_IntValue_7_OffsetPadding[4];
			int32_t ___m_IntValue_7;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_IntValue_7_OffsetPadding_forAlignmentOnly[4];
			int32_t ___m_IntValue_7_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_UIntValue_8_OffsetPadding[4];
			uint32_t ___m_UIntValue_8;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_UIntValue_8_OffsetPadding_forAlignmentOnly[4];
			uint32_t ___m_UIntValue_8_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_LongValue_9_OffsetPadding[4];
			int64_t ___m_LongValue_9;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_LongValue_9_OffsetPadding_forAlignmentOnly[4];
			int64_t ___m_LongValue_9_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_ULongValue_10_OffsetPadding[4];
			uint64_t ___m_ULongValue_10;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_ULongValue_10_OffsetPadding_forAlignmentOnly[4];
			uint64_t ___m_ULongValue_10_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_FloatValue_11_OffsetPadding[4];
			float ___m_FloatValue_11;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_FloatValue_11_OffsetPadding_forAlignmentOnly[4];
			float ___m_FloatValue_11_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_DoubleValue_12_OffsetPadding[4];
			double ___m_DoubleValue_12;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_DoubleValue_12_OffsetPadding_forAlignmentOnly[4];
			double ___m_DoubleValue_12_forAlignmentOnly;
		};
	};
};
// Native definition for COM marshalling of UnityEngine.InputSystem.Utilities.PrimitiveValue
struct PrimitiveValue_t1CC37566F40746757D5E3F87474A05909D85C2D4_marshaled_com
{
	union
	{
		#pragma pack(push, tp, 1)
		struct
		{
			int32_t ___m_Type_0;
		};
		#pragma pack(pop, tp)
		struct
		{
			int32_t ___m_Type_0_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_BoolValue_1_OffsetPadding[4];
			int32_t ___m_BoolValue_1;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_BoolValue_1_OffsetPadding_forAlignmentOnly[4];
			int32_t ___m_BoolValue_1_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_CharValue_2_OffsetPadding[4];
			uint8_t ___m_CharValue_2;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_CharValue_2_OffsetPadding_forAlignmentOnly[4];
			uint8_t ___m_CharValue_2_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_ByteValue_3_OffsetPadding[4];
			uint8_t ___m_ByteValue_3;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_ByteValue_3_OffsetPadding_forAlignmentOnly[4];
			uint8_t ___m_ByteValue_3_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_SByteValue_4_OffsetPadding[4];
			int8_t ___m_SByteValue_4;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_SByteValue_4_OffsetPadding_forAlignmentOnly[4];
			int8_t ___m_SByteValue_4_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_ShortValue_5_OffsetPadding[4];
			int16_t ___m_ShortValue_5;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_ShortValue_5_OffsetPadding_forAlignmentOnly[4];
			int16_t ___m_ShortValue_5_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_UShortValue_6_OffsetPadding[4];
			uint16_t ___m_UShortValue_6;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_UShortValue_6_OffsetPadding_forAlignmentOnly[4];
			uint16_t ___m_UShortValue_6_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_IntValue_7_OffsetPadding[4];
			int32_t ___m_IntValue_7;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_IntValue_7_OffsetPadding_forAlignmentOnly[4];
			int32_t ___m_IntValue_7_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_UIntValue_8_OffsetPadding[4];
			uint32_t ___m_UIntValue_8;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_UIntValue_8_OffsetPadding_forAlignmentOnly[4];
			uint32_t ___m_UIntValue_8_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_LongValue_9_OffsetPadding[4];
			int64_t ___m_LongValue_9;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_LongValue_9_OffsetPadding_forAlignmentOnly[4];
			int64_t ___m_LongValue_9_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_ULongValue_10_OffsetPadding[4];
			uint64_t ___m_ULongValue_10;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_ULongValue_10_OffsetPadding_forAlignmentOnly[4];
			uint64_t ___m_ULongValue_10_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_FloatValue_11_OffsetPadding[4];
			float ___m_FloatValue_11;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_FloatValue_11_OffsetPadding_forAlignmentOnly[4];
			float ___m_FloatValue_11_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_DoubleValue_12_OffsetPadding[4];
			double ___m_DoubleValue_12;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_DoubleValue_12_OffsetPadding_forAlignmentOnly[4];
			double ___m_DoubleValue_12_forAlignmentOnly;
		};
	};
};

// Unity.WebRTC.RTCDataChannel
struct RTCDataChannel_t249C16A38FD2A994D1A45381523F701A49BF1A77  : public RefCountedObject_t854B3011CF94AEE8D385AAF796B3223483A434BC
{
	// Unity.WebRTC.DelegateOnMessage Unity.WebRTC.RTCDataChannel::onMessage
	DelegateOnMessage_tE81CBB87203E4F40FF44C6FEDE4BA23064ABBB62* ___onMessage_2;
	// Unity.WebRTC.DelegateOnOpen Unity.WebRTC.RTCDataChannel::onOpen
	DelegateOnOpen_tE1084803E7FCFCE83DB26F227D99BA16FB0BFA63* ___onOpen_3;
	// Unity.WebRTC.DelegateOnClose Unity.WebRTC.RTCDataChannel::onClose
	DelegateOnClose_t0DD876AECC9993D034876D81BB37285DD7E90BA6* ___onClose_4;
};

// Unity.WebRTC.RTCSessionDescription
struct RTCSessionDescription_t3FA5DAD67F61C0D9822A5CC9FF8C6ED477303B04 
{
	// Unity.WebRTC.RTCSdpType Unity.WebRTC.RTCSessionDescription::type
	int32_t ___type_0;
	// System.String Unity.WebRTC.RTCSessionDescription::sdp
	String_t* ___sdp_1;
};
// Native definition for P/Invoke marshalling of Unity.WebRTC.RTCSessionDescription
struct RTCSessionDescription_t3FA5DAD67F61C0D9822A5CC9FF8C6ED477303B04_marshaled_pinvoke
{
	int32_t ___type_0;
	char* ___sdp_1;
};
// Native definition for COM marshalling of Unity.WebRTC.RTCSessionDescription
struct RTCSessionDescription_t3FA5DAD67F61C0D9822A5CC9FF8C6ED477303B04_marshaled_com
{
	int32_t ___type_0;
	char* ___sdp_1;
};

// System.Threading.SynchronizationContext
struct SynchronizationContext_tCDB842BBE53B050802CBBB59C6E6DC45B5B06DC0  : public RuntimeObject
{
	// System.Threading.SynchronizationContextProperties System.Threading.SynchronizationContext::_props
	int32_t ____props_0;
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

// WebSocketSharp.WebSocket
struct WebSocket_tBCA6DA25533993CDAE05954CA6F61926CF134BB4  : public RuntimeObject
{
	// WebSocketSharp.Net.AuthenticationChallenge WebSocketSharp.WebSocket::_authChallenge
	AuthenticationChallenge_t6EADF65CD74974F1783AD785778A24AA7F6D00A2* ____authChallenge_0;
	// System.String WebSocketSharp.WebSocket::_base64Key
	String_t* ____base64Key_1;
	// System.Boolean WebSocketSharp.WebSocket::_client
	bool ____client_2;
	// System.Action WebSocketSharp.WebSocket::_closeContext
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ____closeContext_3;
	// WebSocketSharp.CompressionMethod WebSocketSharp.WebSocket::_compression
	uint8_t ____compression_4;
	// WebSocketSharp.Net.WebSockets.WebSocketContext WebSocketSharp.WebSocket::_context
	WebSocketContext_t864B980CACE6C6D128960E555404BC87E7A4C3F2* ____context_5;
	// WebSocketSharp.Net.CookieCollection WebSocketSharp.WebSocket::_cookies
	CookieCollection_t338EE72A3B05CDF04DFEE639DE5B9B1F61DDD315* ____cookies_6;
	// WebSocketSharp.Net.NetworkCredential WebSocketSharp.WebSocket::_credentials
	NetworkCredential_tAF63174AAA7DA3BECD41DCE272F38FC13984DFF7* ____credentials_7;
	// System.Boolean WebSocketSharp.WebSocket::_emitOnPing
	bool ____emitOnPing_8;
	// System.Boolean WebSocketSharp.WebSocket::_enableRedirection
	bool ____enableRedirection_9;
	// System.String WebSocketSharp.WebSocket::_extensions
	String_t* ____extensions_10;
	// System.Boolean WebSocketSharp.WebSocket::_extensionsRequested
	bool ____extensionsRequested_11;
	// System.Object WebSocketSharp.WebSocket::_forMessageEventQueue
	RuntimeObject* ____forMessageEventQueue_12;
	// System.Object WebSocketSharp.WebSocket::_forPing
	RuntimeObject* ____forPing_13;
	// System.Object WebSocketSharp.WebSocket::_forSend
	RuntimeObject* ____forSend_14;
	// System.Object WebSocketSharp.WebSocket::_forState
	RuntimeObject* ____forState_15;
	// System.IO.MemoryStream WebSocketSharp.WebSocket::_fragmentsBuffer
	MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2* ____fragmentsBuffer_16;
	// System.Boolean WebSocketSharp.WebSocket::_fragmentsCompressed
	bool ____fragmentsCompressed_17;
	// WebSocketSharp.Opcode WebSocketSharp.WebSocket::_fragmentsOpcode
	uint8_t ____fragmentsOpcode_18;
	// System.Func`2<WebSocketSharp.Net.WebSockets.WebSocketContext,System.String> WebSocketSharp.WebSocket::_handshakeRequestChecker
	Func_2_tB1D9C1FFE40358509EACFB290C5E10A3C519CF1E* ____handshakeRequestChecker_20;
	// System.Boolean WebSocketSharp.WebSocket::_ignoreExtensions
	bool ____ignoreExtensions_21;
	// System.Boolean WebSocketSharp.WebSocket::_inContinuation
	bool ____inContinuation_22;
	// System.Boolean modreq(System.Runtime.CompilerServices.IsVolatile) WebSocketSharp.WebSocket::_inMessage
	bool ____inMessage_23;
	// WebSocketSharp.Logger modreq(System.Runtime.CompilerServices.IsVolatile) WebSocketSharp.WebSocket::_logger
	Logger_tEAC74E518027694C3653F7516547CE57FA0D4EB7* ____logger_24;
	// System.Action`1<WebSocketSharp.MessageEventArgs> WebSocketSharp.WebSocket::_message
	Action_1_t84E0474180BE74DC186BB652F051419C72E75519* ____message_26;
	// System.Collections.Generic.Queue`1<WebSocketSharp.MessageEventArgs> WebSocketSharp.WebSocket::_messageEventQueue
	Queue_1_t1FF73914A1CB7D2DFC1BFD8FAA96C8701452A85B* ____messageEventQueue_27;
	// System.UInt32 WebSocketSharp.WebSocket::_nonceCount
	uint32_t ____nonceCount_28;
	// System.String WebSocketSharp.WebSocket::_origin
	String_t* ____origin_29;
	// System.Threading.ManualResetEvent WebSocketSharp.WebSocket::_pongReceived
	ManualResetEvent_t63959486AA41A113A4353D0BF4A68E77EBA0A158* ____pongReceived_30;
	// System.Boolean WebSocketSharp.WebSocket::_preAuth
	bool ____preAuth_31;
	// System.String WebSocketSharp.WebSocket::_protocol
	String_t* ____protocol_32;
	// System.String[] WebSocketSharp.WebSocket::_protocols
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ____protocols_33;
	// System.Boolean WebSocketSharp.WebSocket::_protocolsRequested
	bool ____protocolsRequested_34;
	// WebSocketSharp.Net.NetworkCredential WebSocketSharp.WebSocket::_proxyCredentials
	NetworkCredential_tAF63174AAA7DA3BECD41DCE272F38FC13984DFF7* ____proxyCredentials_35;
	// System.Uri WebSocketSharp.WebSocket::_proxyUri
	Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E* ____proxyUri_36;
	// WebSocketSharp.WebSocketState modreq(System.Runtime.CompilerServices.IsVolatile) WebSocketSharp.WebSocket::_readyState
	uint16_t ____readyState_37;
	// System.Threading.ManualResetEvent WebSocketSharp.WebSocket::_receivingExited
	ManualResetEvent_t63959486AA41A113A4353D0BF4A68E77EBA0A158* ____receivingExited_38;
	// System.Int32 WebSocketSharp.WebSocket::_retryCountForConnect
	int32_t ____retryCountForConnect_39;
	// System.Boolean WebSocketSharp.WebSocket::_secure
	bool ____secure_40;
	// WebSocketSharp.Net.ClientSslConfiguration WebSocketSharp.WebSocket::_sslConfig
	ClientSslConfiguration_t212ECC383B70D9C462DC423E9D3CD27C9E74A603* ____sslConfig_41;
	// System.IO.Stream WebSocketSharp.WebSocket::_stream
	Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* ____stream_42;
	// System.Net.Sockets.TcpClient WebSocketSharp.WebSocket::_tcpClient
	TcpClient_t753B702EE06B59897564F75CEBFB6C8AFF10BD58* ____tcpClient_43;
	// System.Uri WebSocketSharp.WebSocket::_uri
	Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E* ____uri_44;
	// System.TimeSpan WebSocketSharp.WebSocket::_waitTime
	TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A ____waitTime_46;
	// System.EventHandler`1<WebSocketSharp.CloseEventArgs> WebSocketSharp.WebSocket::OnClose
	EventHandler_1_t522FAB2F4CBA6A3D12166027B1D4A1C8C94D68E5* ___OnClose_50;
	// System.EventHandler`1<WebSocketSharp.ErrorEventArgs> WebSocketSharp.WebSocket::OnError
	EventHandler_1_tEF41E797A6883ACCC9C7536EEEB557E1EFC8C291* ___OnError_51;
	// System.EventHandler`1<WebSocketSharp.MessageEventArgs> WebSocketSharp.WebSocket::OnMessage
	EventHandler_1_t8D76D9242722744EEBFEF94F3AE19600E1D651B9* ___OnMessage_52;
	// System.EventHandler WebSocketSharp.WebSocket::OnOpen
	EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* ___OnOpen_53;
};

struct WebSocket_tBCA6DA25533993CDAE05954CA6F61926CF134BB4_StaticFields
{
	// System.Int32 WebSocketSharp.WebSocket::_maxRetryCountForConnect
	int32_t ____maxRetryCountForConnect_25;
	// System.Byte[] WebSocketSharp.WebSocket::EmptyBytes
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___EmptyBytes_47;
	// System.Int32 WebSocketSharp.WebSocket::FragmentLength
	int32_t ___FragmentLength_48;
	// System.Security.Cryptography.RandomNumberGenerator WebSocketSharp.WebSocket::RandomNumber
	RandomNumberGenerator_t4E862666A2F7D55324960670C7A1B4C2D40222F3* ___RandomNumber_49;
};

// Unity.RenderStreaming.InputSystem.InputRemoting/Message
struct Message_tD936DB9861B7DBCDC7BCEB495736886D5EFAD801 
{
	// System.Int32 Unity.RenderStreaming.InputSystem.InputRemoting/Message::participantId
	int32_t ___participantId_0;
	// Unity.RenderStreaming.InputSystem.InputRemoting/MessageType Unity.RenderStreaming.InputSystem.InputRemoting/Message::type
	int32_t ___type_1;
	// System.Byte[] Unity.RenderStreaming.InputSystem.InputRemoting/Message::data
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___data_2;
};
// Native definition for P/Invoke marshalling of Unity.RenderStreaming.InputSystem.InputRemoting/Message
struct Message_tD936DB9861B7DBCDC7BCEB495736886D5EFAD801_marshaled_pinvoke
{
	int32_t ___participantId_0;
	int32_t ___type_1;
	Il2CppSafeArray/*NONE*/* ___data_2;
};
// Native definition for COM marshalling of Unity.RenderStreaming.InputSystem.InputRemoting/Message
struct Message_tD936DB9861B7DBCDC7BCEB495736886D5EFAD801_marshaled_com
{
	int32_t ___participantId_0;
	int32_t ___type_1;
	Il2CppSafeArray/*NONE*/* ___data_2;
};

// System.Action`1<Unity.RenderStreaming.InputSystem.InputRemoting/Message>
struct Action_1_t62CFC7E46D3237DF830A4F831466D93C80CCEB03  : public MulticastDelegate_t
{
};

// System.Action`2<UnityEngine.InputSystem.InputDevice,UnityEngine.InputSystem.InputDeviceChange>
struct Action_2_tB79528C85CFEF7DFF52C575DDAA398D2FE6BC333  : public MulticastDelegate_t
{
};

// System.Action`2<UnityEngine.InputSystem.LowLevel.InputEventPtr,UnityEngine.InputSystem.InputDevice>
struct Action_2_t4943DD8C32CAB983950535CEF3BABA85DF8C9AAA  : public MulticastDelegate_t
{
};

// System.Action`2<UnityEngine.InputSystem.LowLevel.InputEventPtr,System.Object>
struct Action_2_tD987B97B18D27B9920365359C46BC12702AD4F7D  : public MulticastDelegate_t
{
};

// System.Action`2<System.Object,System.Int32Enum>
struct Action_2_t9C4E97D0565650F0AEF7C72077EB8A0F9326E40B  : public MulticastDelegate_t
{
};

// System.Action`2<System.String,UnityEngine.InputSystem.InputControlLayoutChange>
struct Action_2_t4797B88C63509F2EE4385D6DABE6A4B5AD5393F7  : public MulticastDelegate_t
{
};

// System.EventHandler`1<WebSocketSharp.CloseEventArgs>
struct EventHandler_1_t522FAB2F4CBA6A3D12166027B1D4A1C8C94D68E5  : public MulticastDelegate_t
{
};

// System.EventHandler`1<WebSocketSharp.ErrorEventArgs>
struct EventHandler_1_tEF41E797A6883ACCC9C7536EEEB557E1EFC8C291  : public MulticastDelegate_t
{
};

// System.EventHandler`1<WebSocketSharp.MessageEventArgs>
struct EventHandler_1_t8D76D9242722744EEBFEF94F3AE19600E1D651B9  : public MulticastDelegate_t
{
};

// System.Func`2<UnityEngine.InputSystem.Utilities.InternedString,System.String>
struct Func_2_tE0082B3C229A425A69ECDABB19259709EC9F540F  : public MulticastDelegate_t
{
};

// System.Func`2<System.String,System.Boolean>
struct Func_2_tAB9727E0C937894E19032D575D98A8A9AB5EE47D  : public MulticastDelegate_t
{
};

// System.Nullable`1<Unity.RenderStreaming.InputSystem.InputRemoting/Message>
struct Nullable_1_t90A0E6202C33510EEDDE5954340106E0AF91D5B5 
{
	// System.Boolean System.Nullable`1::hasValue
	bool ___hasValue_0;
	// T System.Nullable`1::value
	Message_tD936DB9861B7DBCDC7BCEB495736886D5EFAD801 ___value_1;
};

// System.ArgumentException
struct ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
	// System.String System.ArgumentException::_paramName
	String_t* ____paramName_18;
};

// System.AsyncCallback
struct AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C  : public MulticastDelegate_t
{
};

// System.Threading.AutoResetEvent
struct AutoResetEvent_t7F792F3F7AD11BEF7B411E771D98E5266A8CE7C0  : public EventWaitHandle_t18F2EB0161747B0646A9A406015A61A214A1EB7E
{
};

// Unity.WebRTC.DelegateOnMessage
struct DelegateOnMessage_tE81CBB87203E4F40FF44C6FEDE4BA23064ABBB62  : public MulticastDelegate_t
{
};

// System.EventHandler
struct EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82  : public MulticastDelegate_t
{
};

// UnityEngine.InputSystem.InputControl
struct InputControl_t74F06B623518F992BF8E38656A5E0857169E3E2E  : public RuntimeObject
{
	// UnityEngine.InputSystem.LowLevel.InputStateBlock UnityEngine.InputSystem.InputControl::m_StateBlock
	InputStateBlock_t0E05211ACF29A99C0FE7FC9EA7042196BFF1F3B5 ___m_StateBlock_0;
	// UnityEngine.InputSystem.Utilities.InternedString UnityEngine.InputSystem.InputControl::m_Name
	InternedString_t8D62A48CB7D85AAE9CFCCCFB0A77AC2844905735 ___m_Name_1;
	// System.String UnityEngine.InputSystem.InputControl::m_Path
	String_t* ___m_Path_2;
	// System.String UnityEngine.InputSystem.InputControl::m_DisplayName
	String_t* ___m_DisplayName_3;
	// System.String UnityEngine.InputSystem.InputControl::m_DisplayNameFromLayout
	String_t* ___m_DisplayNameFromLayout_4;
	// System.String UnityEngine.InputSystem.InputControl::m_ShortDisplayName
	String_t* ___m_ShortDisplayName_5;
	// System.String UnityEngine.InputSystem.InputControl::m_ShortDisplayNameFromLayout
	String_t* ___m_ShortDisplayNameFromLayout_6;
	// UnityEngine.InputSystem.Utilities.InternedString UnityEngine.InputSystem.InputControl::m_Layout
	InternedString_t8D62A48CB7D85AAE9CFCCCFB0A77AC2844905735 ___m_Layout_7;
	// UnityEngine.InputSystem.Utilities.InternedString UnityEngine.InputSystem.InputControl::m_Variants
	InternedString_t8D62A48CB7D85AAE9CFCCCFB0A77AC2844905735 ___m_Variants_8;
	// UnityEngine.InputSystem.InputDevice UnityEngine.InputSystem.InputControl::m_Device
	InputDevice_t8BCF67533E872A75779C24C93D1D7085B72D364B* ___m_Device_9;
	// UnityEngine.InputSystem.InputControl UnityEngine.InputSystem.InputControl::m_Parent
	InputControl_t74F06B623518F992BF8E38656A5E0857169E3E2E* ___m_Parent_10;
	// System.Int32 UnityEngine.InputSystem.InputControl::m_UsageCount
	int32_t ___m_UsageCount_11;
	// System.Int32 UnityEngine.InputSystem.InputControl::m_UsageStartIndex
	int32_t ___m_UsageStartIndex_12;
	// System.Int32 UnityEngine.InputSystem.InputControl::m_AliasCount
	int32_t ___m_AliasCount_13;
	// System.Int32 UnityEngine.InputSystem.InputControl::m_AliasStartIndex
	int32_t ___m_AliasStartIndex_14;
	// System.Int32 UnityEngine.InputSystem.InputControl::m_ChildCount
	int32_t ___m_ChildCount_15;
	// System.Int32 UnityEngine.InputSystem.InputControl::m_ChildStartIndex
	int32_t ___m_ChildStartIndex_16;
	// UnityEngine.InputSystem.InputControl/ControlFlags UnityEngine.InputSystem.InputControl::m_ControlFlags
	int32_t ___m_ControlFlags_17;
	// UnityEngine.InputSystem.Utilities.PrimitiveValue UnityEngine.InputSystem.InputControl::m_DefaultState
	PrimitiveValue_t1CC37566F40746757D5E3F87474A05909D85C2D4 ___m_DefaultState_18;
	// UnityEngine.InputSystem.Utilities.PrimitiveValue UnityEngine.InputSystem.InputControl::m_MinValue
	PrimitiveValue_t1CC37566F40746757D5E3F87474A05909D85C2D4 ___m_MinValue_19;
	// UnityEngine.InputSystem.Utilities.PrimitiveValue UnityEngine.InputSystem.InputControl::m_MaxValue
	PrimitiveValue_t1CC37566F40746757D5E3F87474A05909D85C2D4 ___m_MaxValue_20;
};

// UnityEngine.InputSystem.LowLevel.InputEvent
struct InputEvent_t10F727342D1A79DCFC06529C203BB61C194AEBC5 
{
	union
	{
		struct
		{
			union
			{
				#pragma pack(push, tp, 1)
				struct
				{
					// UnityEngineInternal.Input.NativeInputEvent UnityEngine.InputSystem.LowLevel.InputEvent::m_Event
					NativeInputEvent_tDE7DE9A48ACA442A8D37E2920836D00C26408CB8 ___m_Event_5;
				};
				#pragma pack(pop, tp)
				#pragma pack(push, tp, 1)
				struct
				{
					NativeInputEvent_tDE7DE9A48ACA442A8D37E2920836D00C26408CB8 ___m_Event_5_forAlignmentOnly;
				};
				#pragma pack(pop, tp)
			};
		};
		uint8_t InputEvent_t10F727342D1A79DCFC06529C203BB61C194AEBC5__padding[20];
	};
};

// System.InvalidOperationException
struct InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};

// Unity.RenderStreaming.Signaling.OnAnswerHandler
struct OnAnswerHandler_tBF64DA7C3AB41984E338F75F069C194C8F0A1A19  : public MulticastDelegate_t
{
};

// Unity.RenderStreaming.Signaling.OnConnectHandler
struct OnConnectHandler_tF4A8A1EC5ED4BCEAB7EA0D252D6586EC660ABEB3  : public MulticastDelegate_t
{
};

// Unity.RenderStreaming.Signaling.OnDisconnectHandler
struct OnDisconnectHandler_tB1C80CDBF420D2C6F13BE728865E1912E08383C9  : public MulticastDelegate_t
{
};

// Unity.RenderStreaming.Signaling.OnIceCandidateHandler
struct OnIceCandidateHandler_tB82627B771BEE335DBC8D44AEC93B2AEC8B1E139  : public MulticastDelegate_t
{
};

// Unity.RenderStreaming.Signaling.OnOfferHandler
struct OnOfferHandler_t741D2F8DBDFDA8C010DBB5276E8D5CC35569FF86  : public MulticastDelegate_t
{
};

// Unity.RenderStreaming.Signaling.OnStartHandler
struct OnStartHandler_t295FEA9A47BD02A9B36195C055961D94C233A56F  : public MulticastDelegate_t
{
};

// Unity.WebRTC.RTCIceCandidate
struct RTCIceCandidate_t934E142F42C60EB706D94154B8596B73E7AB5CE4  : public RuntimeObject
{
	// System.IntPtr Unity.WebRTC.RTCIceCandidate::self
	intptr_t ___self_0;
	// Unity.WebRTC.CandidateInternal Unity.WebRTC.RTCIceCandidate::_candidate
	CandidateInternal_tA7F036DB81B3C50D20C687077B10F6298A7A9EB5 ____candidate_1;
	// System.Boolean Unity.WebRTC.RTCIceCandidate::disposed
	bool ___disposed_2;
};

// System.Threading.SendOrPostCallback
struct SendOrPostCallback_t5C292A12062F24027A98492F52ECFE9802AA6F0E  : public MulticastDelegate_t
{
};

// System.Threading.ThreadAbortException
struct ThreadAbortException_tCA1833E5D49782387EDF3BDCBDB90597B273F3C4  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};

// System.Threading.ThreadStart
struct ThreadStart_t7662D98F1793EDE90192D7304D1C3C44119328A2  : public MulticastDelegate_t
{
};

// System.ArgumentNullException
struct ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129  : public ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263
{
};

// UnityEngine.InputSystem.InputDevice
struct InputDevice_t8BCF67533E872A75779C24C93D1D7085B72D364B  : public InputControl_t74F06B623518F992BF8E38656A5E0857169E3E2E
{
	// UnityEngine.InputSystem.InputDevice/DeviceFlags UnityEngine.InputSystem.InputDevice::m_DeviceFlags
	int32_t ___m_DeviceFlags_24;
	// System.Int32 UnityEngine.InputSystem.InputDevice::m_DeviceId
	int32_t ___m_DeviceId_25;
	// System.Int32 UnityEngine.InputSystem.InputDevice::m_ParticipantId
	int32_t ___m_ParticipantId_26;
	// System.Int32 UnityEngine.InputSystem.InputDevice::m_DeviceIndex
	int32_t ___m_DeviceIndex_27;
	// UnityEngine.InputSystem.Layouts.InputDeviceDescription UnityEngine.InputSystem.InputDevice::m_Description
	InputDeviceDescription_tE86DD77422AAF60ADDAC788B31E5A05E739B708F ___m_Description_28;
	// System.Double UnityEngine.InputSystem.InputDevice::m_LastUpdateTimeInternal
	double ___m_LastUpdateTimeInternal_29;
	// System.UInt32 UnityEngine.InputSystem.InputDevice::m_CurrentUpdateStepCount
	uint32_t ___m_CurrentUpdateStepCount_30;
	// UnityEngine.InputSystem.Utilities.InternedString[] UnityEngine.InputSystem.InputDevice::m_AliasesForEachControl
	InternedStringU5BU5D_t0B851758733FC0B118D84BE83AED10A0404C18D5* ___m_AliasesForEachControl_31;
	// UnityEngine.InputSystem.Utilities.InternedString[] UnityEngine.InputSystem.InputDevice::m_UsagesForEachControl
	InternedStringU5BU5D_t0B851758733FC0B118D84BE83AED10A0404C18D5* ___m_UsagesForEachControl_32;
	// UnityEngine.InputSystem.InputControl[] UnityEngine.InputSystem.InputDevice::m_UsageToControl
	InputControlU5BU5D_t0B951FEF1504D6340387C4735F5D6F426F40FE17* ___m_UsageToControl_33;
	// UnityEngine.InputSystem.InputControl[] UnityEngine.InputSystem.InputDevice::m_ChildrenForEachControl
	InputControlU5BU5D_t0B951FEF1504D6340387C4735F5D6F426F40FE17* ___m_ChildrenForEachControl_34;
	// System.UInt32[] UnityEngine.InputSystem.InputDevice::m_StateOffsetToControlMap
	UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___m_StateOffsetToControlMap_35;
};

// UnityEngine.InputSystem.Pointer
struct Pointer_t800EF2832B62E889AC9C182E3B18098AF220E32A  : public InputDevice_t8BCF67533E872A75779C24C93D1D7085B72D364B
{
	// UnityEngine.InputSystem.Controls.Vector2Control UnityEngine.InputSystem.Pointer::<position>k__BackingField
	Vector2Control_t8D1B4021A1D82671AF916D3C0A476AA94E46A432* ___U3CpositionU3Ek__BackingField_39;
	// UnityEngine.InputSystem.Controls.Vector2Control UnityEngine.InputSystem.Pointer::<delta>k__BackingField
	Vector2Control_t8D1B4021A1D82671AF916D3C0A476AA94E46A432* ___U3CdeltaU3Ek__BackingField_40;
	// UnityEngine.InputSystem.Controls.Vector2Control UnityEngine.InputSystem.Pointer::<radius>k__BackingField
	Vector2Control_t8D1B4021A1D82671AF916D3C0A476AA94E46A432* ___U3CradiusU3Ek__BackingField_41;
	// UnityEngine.InputSystem.Controls.AxisControl UnityEngine.InputSystem.Pointer::<pressure>k__BackingField
	AxisControl_tD6613A2445A3C2BFA22C77E16CA3201AF72354A7* ___U3CpressureU3Ek__BackingField_42;
	// UnityEngine.InputSystem.Controls.ButtonControl UnityEngine.InputSystem.Pointer::<press>k__BackingField
	ButtonControl_t85949109B98AAF5B7ADC0285F0EC98A61EC88ECF* ___U3CpressU3Ek__BackingField_43;
};

struct Pointer_t800EF2832B62E889AC9C182E3B18098AF220E32A_StaticFields
{
	// UnityEngine.InputSystem.Pointer UnityEngine.InputSystem.Pointer::<current>k__BackingField
	Pointer_t800EF2832B62E889AC9C182E3B18098AF220E32A* ___U3CcurrentU3Ek__BackingField_44;
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif
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
// System.Byte[]
struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031  : public RuntimeArray
{
	ALIGN_FIELD (8) uint8_t m_Items[1];

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
// Unity.RenderStreaming.InputSystem.InputRemoting/Subscriber[]
struct SubscriberU5BU5D_tF989EA4535B55CD10D08D7C8C981FC376FC12C18  : public RuntimeArray
{
	ALIGN_FIELD (8) Subscriber_tCE25893C3FF2E8E4590B8EFBE9DE0316FC0AD8E7* m_Items[1];

	inline Subscriber_tCE25893C3FF2E8E4590B8EFBE9DE0316FC0AD8E7* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Subscriber_tCE25893C3FF2E8E4590B8EFBE9DE0316FC0AD8E7** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Subscriber_tCE25893C3FF2E8E4590B8EFBE9DE0316FC0AD8E7* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Subscriber_tCE25893C3FF2E8E4590B8EFBE9DE0316FC0AD8E7* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Subscriber_tCE25893C3FF2E8E4590B8EFBE9DE0316FC0AD8E7** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Subscriber_tCE25893C3FF2E8E4590B8EFBE9DE0316FC0AD8E7* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// Unity.RenderStreaming.InputSystem.InputRemoting/RemoteSender[]
struct RemoteSenderU5BU5D_tFE32D763FD37124BA0F477F37A797F29868A3C3F  : public RuntimeArray
{
	ALIGN_FIELD (8) RemoteSender_tE4F28E5B7F46F15B1B18D890E2B8C7E96AB5F6A0 m_Items[1];

	inline RemoteSender_tE4F28E5B7F46F15B1B18D890E2B8C7E96AB5F6A0 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline RemoteSender_tE4F28E5B7F46F15B1B18D890E2B8C7E96AB5F6A0* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, RemoteSender_tE4F28E5B7F46F15B1B18D890E2B8C7E96AB5F6A0 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___layouts_1), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___devices_2), (void*)NULL);
		#endif
	}
	inline RemoteSender_tE4F28E5B7F46F15B1B18D890E2B8C7E96AB5F6A0 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline RemoteSender_tE4F28E5B7F46F15B1B18D890E2B8C7E96AB5F6A0* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, RemoteSender_tE4F28E5B7F46F15B1B18D890E2B8C7E96AB5F6A0 value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___layouts_1), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___devices_2), (void*)NULL);
		#endif
	}
};
// Unity.RenderStreaming.InputSystem.InputRemoting/RemoteInputDevice[]
struct RemoteInputDeviceU5BU5D_tD2988955C31E6E6005201B6F2E728B014340134E  : public RuntimeArray
{
	ALIGN_FIELD (8) RemoteInputDevice_t7E8AF8B413C68B7205B1F4D9EDA5BBD53ABCDB27 m_Items[1];

	inline RemoteInputDevice_t7E8AF8B413C68B7205B1F4D9EDA5BBD53ABCDB27 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline RemoteInputDevice_t7E8AF8B413C68B7205B1F4D9EDA5BBD53ABCDB27* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, RemoteInputDevice_t7E8AF8B413C68B7205B1F4D9EDA5BBD53ABCDB27 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___layoutName_2), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((m_Items + index)->___description_3))->___m_InterfaceName_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((m_Items + index)->___description_3))->___m_DeviceClass_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((m_Items + index)->___description_3))->___m_Manufacturer_2), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((m_Items + index)->___description_3))->___m_Product_3), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((m_Items + index)->___description_3))->___m_Serial_4), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((m_Items + index)->___description_3))->___m_Version_5), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((m_Items + index)->___description_3))->___m_Capabilities_6), (void*)NULL);
		#endif
	}
	inline RemoteInputDevice_t7E8AF8B413C68B7205B1F4D9EDA5BBD53ABCDB27 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline RemoteInputDevice_t7E8AF8B413C68B7205B1F4D9EDA5BBD53ABCDB27* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, RemoteInputDevice_t7E8AF8B413C68B7205B1F4D9EDA5BBD53ABCDB27 value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___layoutName_2), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((m_Items + index)->___description_3))->___m_InterfaceName_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((m_Items + index)->___description_3))->___m_DeviceClass_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((m_Items + index)->___description_3))->___m_Manufacturer_2), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((m_Items + index)->___description_3))->___m_Product_3), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((m_Items + index)->___description_3))->___m_Serial_4), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((m_Items + index)->___description_3))->___m_Version_5), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((m_Items + index)->___description_3))->___m_Capabilities_6), (void*)NULL);
		#endif
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
// UnityEngine.InputSystem.InputDevice[]
struct InputDeviceU5BU5D_tA9AEFC6AF63557D3D5DCFB2B26DDA6F63147D548  : public RuntimeArray
{
	ALIGN_FIELD (8) InputDevice_t8BCF67533E872A75779C24C93D1D7085B72D364B* m_Items[1];

	inline InputDevice_t8BCF67533E872A75779C24C93D1D7085B72D364B* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline InputDevice_t8BCF67533E872A75779C24C93D1D7085B72D364B** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, InputDevice_t8BCF67533E872A75779C24C93D1D7085B72D364B* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline InputDevice_t8BCF67533E872A75779C24C93D1D7085B72D364B* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline InputDevice_t8BCF67533E872A75779C24C93D1D7085B72D364B** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, InputDevice_t8BCF67533E872A75779C24C93D1D7085B72D364B* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};

IL2CPP_EXTERN_C void RemoteInputDevice_t7E8AF8B413C68B7205B1F4D9EDA5BBD53ABCDB27_marshal_pinvoke(const RemoteInputDevice_t7E8AF8B413C68B7205B1F4D9EDA5BBD53ABCDB27& unmarshaled, RemoteInputDevice_t7E8AF8B413C68B7205B1F4D9EDA5BBD53ABCDB27_marshaled_pinvoke& marshaled);
IL2CPP_EXTERN_C void RemoteInputDevice_t7E8AF8B413C68B7205B1F4D9EDA5BBD53ABCDB27_marshal_pinvoke_back(const RemoteInputDevice_t7E8AF8B413C68B7205B1F4D9EDA5BBD53ABCDB27_marshaled_pinvoke& marshaled, RemoteInputDevice_t7E8AF8B413C68B7205B1F4D9EDA5BBD53ABCDB27& unmarshaled);
IL2CPP_EXTERN_C void RemoteInputDevice_t7E8AF8B413C68B7205B1F4D9EDA5BBD53ABCDB27_marshal_pinvoke_cleanup(RemoteInputDevice_t7E8AF8B413C68B7205B1F4D9EDA5BBD53ABCDB27_marshaled_pinvoke& marshaled);
IL2CPP_EXTERN_C void RemoteInputDevice_t7E8AF8B413C68B7205B1F4D9EDA5BBD53ABCDB27_marshal_com(const RemoteInputDevice_t7E8AF8B413C68B7205B1F4D9EDA5BBD53ABCDB27& unmarshaled, RemoteInputDevice_t7E8AF8B413C68B7205B1F4D9EDA5BBD53ABCDB27_marshaled_com& marshaled);
IL2CPP_EXTERN_C void RemoteInputDevice_t7E8AF8B413C68B7205B1F4D9EDA5BBD53ABCDB27_marshal_com_back(const RemoteInputDevice_t7E8AF8B413C68B7205B1F4D9EDA5BBD53ABCDB27_marshaled_com& marshaled, RemoteInputDevice_t7E8AF8B413C68B7205B1F4D9EDA5BBD53ABCDB27& unmarshaled);
IL2CPP_EXTERN_C void RemoteInputDevice_t7E8AF8B413C68B7205B1F4D9EDA5BBD53ABCDB27_marshal_com_cleanup(RemoteInputDevice_t7E8AF8B413C68B7205B1F4D9EDA5BBD53ABCDB27_marshaled_com& marshaled);
IL2CPP_EXTERN_C void InputDeviceDescription_tE86DD77422AAF60ADDAC788B31E5A05E739B708F_marshal_pinvoke(const InputDeviceDescription_tE86DD77422AAF60ADDAC788B31E5A05E739B708F& unmarshaled, InputDeviceDescription_tE86DD77422AAF60ADDAC788B31E5A05E739B708F_marshaled_pinvoke& marshaled);
IL2CPP_EXTERN_C void InputDeviceDescription_tE86DD77422AAF60ADDAC788B31E5A05E739B708F_marshal_pinvoke_back(const InputDeviceDescription_tE86DD77422AAF60ADDAC788B31E5A05E739B708F_marshaled_pinvoke& marshaled, InputDeviceDescription_tE86DD77422AAF60ADDAC788B31E5A05E739B708F& unmarshaled);
IL2CPP_EXTERN_C void InputDeviceDescription_tE86DD77422AAF60ADDAC788B31E5A05E739B708F_marshal_pinvoke_cleanup(InputDeviceDescription_tE86DD77422AAF60ADDAC788B31E5A05E739B708F_marshaled_pinvoke& marshaled);
IL2CPP_EXTERN_C void InputDeviceDescription_tE86DD77422AAF60ADDAC788B31E5A05E739B708F_marshal_com(const InputDeviceDescription_tE86DD77422AAF60ADDAC788B31E5A05E739B708F& unmarshaled, InputDeviceDescription_tE86DD77422AAF60ADDAC788B31E5A05E739B708F_marshaled_com& marshaled);
IL2CPP_EXTERN_C void InputDeviceDescription_tE86DD77422AAF60ADDAC788B31E5A05E739B708F_marshal_com_back(const InputDeviceDescription_tE86DD77422AAF60ADDAC788B31E5A05E739B708F_marshaled_com& marshaled, InputDeviceDescription_tE86DD77422AAF60ADDAC788B31E5A05E739B708F& unmarshaled);
IL2CPP_EXTERN_C void InputDeviceDescription_tE86DD77422AAF60ADDAC788B31E5A05E739B708F_marshal_com_cleanup(InputDeviceDescription_tE86DD77422AAF60ADDAC788B31E5A05E739B708F_marshaled_com& marshaled);
IL2CPP_EXTERN_C void RemoteSender_tE4F28E5B7F46F15B1B18D890E2B8C7E96AB5F6A0_marshal_pinvoke(const RemoteSender_tE4F28E5B7F46F15B1B18D890E2B8C7E96AB5F6A0& unmarshaled, RemoteSender_tE4F28E5B7F46F15B1B18D890E2B8C7E96AB5F6A0_marshaled_pinvoke& marshaled);
IL2CPP_EXTERN_C void RemoteSender_tE4F28E5B7F46F15B1B18D890E2B8C7E96AB5F6A0_marshal_pinvoke_back(const RemoteSender_tE4F28E5B7F46F15B1B18D890E2B8C7E96AB5F6A0_marshaled_pinvoke& marshaled, RemoteSender_tE4F28E5B7F46F15B1B18D890E2B8C7E96AB5F6A0& unmarshaled);
IL2CPP_EXTERN_C void RemoteSender_tE4F28E5B7F46F15B1B18D890E2B8C7E96AB5F6A0_marshal_pinvoke_cleanup(RemoteSender_tE4F28E5B7F46F15B1B18D890E2B8C7E96AB5F6A0_marshaled_pinvoke& marshaled);
IL2CPP_EXTERN_C void RemoteSender_tE4F28E5B7F46F15B1B18D890E2B8C7E96AB5F6A0_marshal_com(const RemoteSender_tE4F28E5B7F46F15B1B18D890E2B8C7E96AB5F6A0& unmarshaled, RemoteSender_tE4F28E5B7F46F15B1B18D890E2B8C7E96AB5F6A0_marshaled_com& marshaled);
IL2CPP_EXTERN_C void RemoteSender_tE4F28E5B7F46F15B1B18D890E2B8C7E96AB5F6A0_marshal_com_back(const RemoteSender_tE4F28E5B7F46F15B1B18D890E2B8C7E96AB5F6A0_marshaled_com& marshaled, RemoteSender_tE4F28E5B7F46F15B1B18D890E2B8C7E96AB5F6A0& unmarshaled);
IL2CPP_EXTERN_C void RemoteSender_tE4F28E5B7F46F15B1B18D890E2B8C7E96AB5F6A0_marshal_com_cleanup(RemoteSender_tE4F28E5B7F46F15B1B18D890E2B8C7E96AB5F6A0_marshaled_com& marshaled);

// System.Void Unity.RenderStreaming.RoutedMessage`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RoutedMessage_1__ctor_mC9E288D00A30EAD170E2B1E0894C389219154530_gshared (RoutedMessage_1_tA81CDC48341CFD7764F51400E677FCC916623AD6* __this, const RuntimeMethod* method) ;
// T System.Nullable`1<System.Int32>::GetValueOrDefault(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Nullable_1_GetValueOrDefault_m0F743BF8CC3F18E8288210EBA987C3DBFA7FC8C9_gshared (Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28* __this, int32_t ___defaultValue0, const RuntimeMethod* method) ;
// T[] System.Array::Empty<System.Object>()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* Array_Empty_TisRuntimeObject_m55011E8360A8199FB239A5787BA8631CDD6116FC_gshared_inline (const RuntimeMethod* method) ;
// System.Void System.EventHandler`1<System.Object>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EventHandler_1__ctor_mBA2E748CFBA7A0EEC0A373A6F634D3B5774EA370_gshared (EventHandler_1_tD8C4A5BE1F7C91B1A7E99AE87AFD2F5432C38746* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// T UnityEngine.JsonUtility::FromJson<System.Object>(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* JsonUtility_FromJson_TisRuntimeObject_m3A645CB2B6525E4A5835EA8A8CEBD39C7E2C444A_gshared (String_t* ___json0, const RuntimeMethod* method) ;
// System.Void System.Action`1<Unity.RenderStreaming.InputSystem.InputRemoting/Message>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_1__ctor_mC48A1C69CDF3D8A288DC1276D72B190A99D9A0CC_gshared (Action_1_t62CFC7E46D3237DF830A4F831466D93C80CCEB03* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// System.Void System.Action`2<UnityEngine.InputSystem.LowLevel.InputEventPtr,System.Object>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_2__ctor_mFC80A1D3B6BA1009B9779F59B49347FEEE827FB6_gshared (Action_2_tD987B97B18D27B9920365359C46BC12702AD4F7D* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// System.Void System.Action`2<System.Object,System.Int32Enum>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_2__ctor_m6DEC13F96CE9CD74561DCCA7017E450079C96942_gshared (Action_2_t9C4E97D0565650F0AEF7C72077EB8A0F9326E40B* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// System.Int32 Unity.RenderStreaming.ArrayHelpers::Append<System.Object>(TValue[]&,TValue)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ArrayHelpers_Append_TisRuntimeObject_mC927D055EFF7C2BEA9F1F36B19822CCE684608DA_gshared (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918** ___array0, RuntimeObject* ___value1, const RuntimeMethod* method) ;
// System.Boolean System.Nullable`1<Unity.RenderStreaming.InputSystem.InputRemoting/Message>::get_HasValue()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Nullable_1_get_HasValue_mB0EB37808971A8C9C6034F5EF00AA28A8758520C_gshared_inline (Nullable_1_t90A0E6202C33510EEDDE5954340106E0AF91D5B5* __this, const RuntimeMethod* method) ;
// T System.Nullable`1<Unity.RenderStreaming.InputSystem.InputRemoting/Message>::get_Value()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Message_tD936DB9861B7DBCDC7BCEB495736886D5EFAD801 Nullable_1_get_Value_m5E4FBECB1D4CDA8E5D1BB691EDF90C4F3510E3B9_gshared (Nullable_1_t90A0E6202C33510EEDDE5954340106E0AF91D5B5* __this, const RuntimeMethod* method) ;
// UnityEngine.InputSystem.Utilities.ReadOnlyArray`1/Enumerator<TValue> UnityEngine.InputSystem.Utilities.ReadOnlyArray`1<System.Object>::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_t13B0EDB01F0A85A952803970AFD1073D96A46C94 ReadOnlyArray_1_GetEnumerator_mE43A032C7C67896D9F8377C6C1C863C22F3044B6_gshared (ReadOnlyArray_1_t40B8DDDCD6ACBA3B2C0AF1387BE23D68DAEF77B5* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.InputSystem.Utilities.ReadOnlyArray`1/Enumerator<System.Object>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator_Dispose_m041721B53AC187277BACB4EA9C86E299322EB0AB_gshared (Enumerator_t13B0EDB01F0A85A952803970AFD1073D96A46C94* __this, const RuntimeMethod* method) ;
// TValue UnityEngine.InputSystem.Utilities.ReadOnlyArray`1/Enumerator<System.Object>::get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Enumerator_get_Current_mC38F33A423715DE1D9EAD3EADE1C8C03C52E4465_gshared (Enumerator_t13B0EDB01F0A85A952803970AFD1073D96A46C94* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.InputSystem.Utilities.ReadOnlyArray`1/Enumerator<System.Object>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_m95272BAC87E97D7B862DB72A8639565003BD244B_gshared (Enumerator_t13B0EDB01F0A85A952803970AFD1073D96A46C94* __this, const RuntimeMethod* method) ;
// System.Int32 Unity.RenderStreaming.ArrayHelpers::Append<Unity.RenderStreaming.InputSystem.InputRemoting/RemoteSender>(TValue[]&,TValue)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ArrayHelpers_Append_TisRemoteSender_tE4F28E5B7F46F15B1B18D890E2B8C7E96AB5F6A0_m1303D0C5E4B417079D6D681FC811AEE8E645F162_gshared (RemoteSenderU5BU5D_tFE32D763FD37124BA0F477F37A797F29868A3C3F** ___array0, RemoteSender_tE4F28E5B7F46F15B1B18D890E2B8C7E96AB5F6A0 ___value1, const RuntimeMethod* method) ;
// System.Void Unity.RenderStreaming.ArrayHelpers::EraseAt<Unity.RenderStreaming.InputSystem.InputRemoting/RemoteSender>(TValue[]&,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArrayHelpers_EraseAt_TisRemoteSender_tE4F28E5B7F46F15B1B18D890E2B8C7E96AB5F6A0_m79F8957091D78FB48FB1BF51DA20C4CE5DD3ADB6_gshared (RemoteSenderU5BU5D_tFE32D763FD37124BA0F477F37A797F29868A3C3F** ___array0, int32_t ___index1, const RuntimeMethod* method) ;
// System.Boolean Unity.RenderStreaming.ArrayHelpers::Erase<System.Object>(TValue[]&,TValue)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ArrayHelpers_Erase_TisRuntimeObject_m9D45F2990B606EA8062FF594413DCFA8E65AE98D_gshared (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918** ___array0, RuntimeObject* ___value1, const RuntimeMethod* method) ;
// System.Byte[] Unity.RenderStreaming.InputSystem.InputRemoting::SerializeData<Unity.RenderStreaming.InputSystem.InputRemoting/NewLayoutMsg/Data>(TData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* InputRemoting_SerializeData_TisData_t996B414526496A00392F034F2FE6F541A31CA819_m8C575790DA6AC3108C560FDC020920C2CBA41846_gshared (Data_t996B414526496A00392F034F2FE6F541A31CA819 ___data0, const RuntimeMethod* method) ;
// System.Void System.Nullable`1<Unity.RenderStreaming.InputSystem.InputRemoting/Message>::.ctor(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Nullable_1__ctor_mAD5430FE1FB829B55B9BE53CC89A036069AEDC90_gshared (Nullable_1_t90A0E6202C33510EEDDE5954340106E0AF91D5B5* __this, Message_tD936DB9861B7DBCDC7BCEB495736886D5EFAD801 ___value0, const RuntimeMethod* method) ;
// TData Unity.RenderStreaming.InputSystem.InputRemoting::DeserializeData<Unity.RenderStreaming.InputSystem.InputRemoting/NewLayoutMsg/Data>(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Data_t996B414526496A00392F034F2FE6F541A31CA819 InputRemoting_DeserializeData_TisData_t996B414526496A00392F034F2FE6F541A31CA819_m9B4ADD5BE9DCFB37101D1759CF50E2A818F909F8_gshared (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___data0, const RuntimeMethod* method) ;
// TData Unity.RenderStreaming.InputSystem.InputRemoting::DeserializeData<Unity.RenderStreaming.InputSystem.InputRemoting/NewDeviceMsg/Data>(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Data_t388E6D9BE25175D528F87ED2B794D4CCA12E1632 InputRemoting_DeserializeData_TisData_t388E6D9BE25175D528F87ED2B794D4CCA12E1632_m1B84B22792D9FD67CAA168344CB753E44F221357_gshared (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___data0, const RuntimeMethod* method) ;
// System.Int32 Unity.RenderStreaming.ArrayHelpers::Append<Unity.RenderStreaming.InputSystem.InputRemoting/RemoteInputDevice>(TValue[]&,TValue)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ArrayHelpers_Append_TisRemoteInputDevice_t7E8AF8B413C68B7205B1F4D9EDA5BBD53ABCDB27_m3D2487C0F5E3A17654513B724F09E9DA7EBEC8BB_gshared (RemoteInputDeviceU5BU5D_tD2988955C31E6E6005201B6F2E728B014340134E** ___array0, RemoteInputDevice_t7E8AF8B413C68B7205B1F4D9EDA5BBD53ABCDB27 ___value1, const RuntimeMethod* method) ;
// System.Void Unity.Collections.NativeArray`1<System.Byte>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeArray_1_Dispose_m8B0F342847ECB90EB814E1F6AA5BF7DC2F271AEA_gshared (NativeArray_1_t81F55263465517B73C455D3400CF67B4BADD85CF* __this, const RuntimeMethod* method) ;
// System.Void System.Func`2<UnityEngine.InputSystem.Utilities.InternedString,System.Object>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Func_2__ctor_mEA865389B1F3B9B7F55A65C4B937BF1A2F7258AC_gshared (Func_2_t63BCD2DEBA7363CAD4DAAF9703EF65C11A4C7BBB* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable::Select<UnityEngine.InputSystem.Utilities.InternedString,System.Object>(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,TResult>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Enumerable_Select_TisInternedString_t8D62A48CB7D85AAE9CFCCCFB0A77AC2844905735_TisRuntimeObject_m6D1E7BE19748636FC77D4F07A11734CCD7C06231_gshared (RuntimeObject* ___source0, Func_2_t63BCD2DEBA7363CAD4DAAF9703EF65C11A4C7BBB* ___selector1, const RuntimeMethod* method) ;
// TSource[] System.Linq.Enumerable::ToArray<System.Object>(System.Collections.Generic.IEnumerable`1<TSource>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* Enumerable_ToArray_TisRuntimeObject_m6B1F26FB2B3EA7B18B82FC81035440AAAEFCE924_gshared (RuntimeObject* ___source0, const RuntimeMethod* method) ;
// System.Byte[] Unity.RenderStreaming.InputSystem.InputRemoting::SerializeData<Unity.RenderStreaming.InputSystem.InputRemoting/ChangeUsageMsg/Data>(TData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* InputRemoting_SerializeData_TisData_t3CDE355508AFD01E1939C50BA8D1CADCC2959561_mFE321BB814975EA3E148F680FF725B4B051DFA1E_gshared (Data_t3CDE355508AFD01E1939C50BA8D1CADCC2959561 ___data0, const RuntimeMethod* method) ;
// TData Unity.RenderStreaming.InputSystem.InputRemoting::DeserializeData<Unity.RenderStreaming.InputSystem.InputRemoting/ChangeUsageMsg/Data>(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Data_t3CDE355508AFD01E1939C50BA8D1CADCC2959561 InputRemoting_DeserializeData_TisData_t3CDE355508AFD01E1939C50BA8D1CADCC2959561_m2CE0C78AFB0AE1DADC5B6D9D21D3670A65FD8B02_gshared (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___data0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m5B32FBC624618211EB461D59CFBB10E987FD1329_gshared (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* __this, const RuntimeMethod* method) ;
// System.Void System.Action`1<Unity.RenderStreaming.InputSystem.InputRemoting/Message>::Invoke(T)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Action_1_Invoke_mF1548FD088108212A1822D5F1ED4FD8BE79743A6_gshared_inline (Action_1_t62CFC7E46D3237DF830A4F831466D93C80CCEB03* __this, Message_tD936DB9861B7DBCDC7BCEB495736886D5EFAD801 ___obj0, const RuntimeMethod* method) ;
// System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable::Empty<System.Object>()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* Enumerable_Empty_TisRuntimeObject_m42BB34F154440C9F0AC402FC3E9BD08C8D678F21_gshared_inline (const RuntimeMethod* method) ;
// T[] System.Collections.Generic.List`1<System.Object>::ToArray()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* List_1_ToArray_mD7E4F8E7C11C3C67CB5739FCC0A6E86106A6291F_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.InputSystem.Utilities.ReadOnlyArray`1<System.Object>::.ctor(TValue[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReadOnlyArray_1__ctor_mA9AA8F6151380781CF993C6F72ADB67D91B9CF41_gshared (ReadOnlyArray_1_t40B8DDDCD6ACBA3B2C0AF1387BE23D68DAEF77B5* __this, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___array0, const RuntimeMethod* method) ;
// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Object>::get_Keys()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR KeyCollection_tB45A861D090B15129521119AE48ED3813820A974* Dictionary_2_get_Keys_m72D290F90654BFD683FA7AA7C63D9F4F692218B6_gshared (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* __this, const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1<System.Object>::get_Item(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* List_1_get_Item_m33561245D64798C2AB07584C0EC4F240E4839A38_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, int32_t ___index0, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.List`1<System.Object>::get_Count()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// TSource System.Linq.Enumerable::First<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>(System.Collections.Generic.IEnumerable`1<TSource>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230 Enumerable_First_TisKeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230_m4EDB83358F4E30FA0404D7F760F652673F6787F1_gshared (RuntimeObject* ___source0, const RuntimeMethod* method) ;
// TKey System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>::get_Key()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* KeyValuePair_2_get_Key_mBD8EA7557C27E6956F2AF29DA3F7499B2F51A282_gshared_inline (KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230* __this, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.Dictionary`2<System.Object,System.Object>::get_Count()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Dictionary_2_get_Count_m4DDA9442C238A443489115E22B026AD366851549_gshared (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* __this, const RuntimeMethod* method) ;
// System.Void System.Func`2<System.Object,System.Boolean>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Func_2__ctor_m13C0A7F33154D861E2A041B52E88461832DA1697_gshared (Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// System.Int32 System.Linq.Enumerable::Count<System.Object>(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Enumerable_Count_TisRuntimeObject_m8989C14122650F2DD5AD9A51D82C7184F91EEB34_gshared (RuntimeObject* ___source0, Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00* ___predicate1, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::TryGetValue(TKey,TValue&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_TryGetValue_mD15380A4ED7CDEE99EA45881577D26BA9CE1B849_gshared (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* __this, RuntimeObject* ___key0, RuntimeObject** ___value1, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::Add(T)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___item0, const RuntimeMethod* method) ;
// System.Void System.Action`2<System.Object,System.Int32Enum>::Invoke(T1,T2)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Action_2_Invoke_m3BFB5987F7235AEF25980B76D635DBD5B56B0F7A_gshared_inline (Action_2_t9C4E97D0565650F0AEF7C72077EB8A0F9326E40B* __this, RuntimeObject* ___arg10, int32_t ___arg21, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.List`1<System.Object>::Remove(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool List_1_Remove_m4DFA48F4CEB9169601E75FC28517C5C06EFA5AD7_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___item0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::Add(TKey,TValue)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Add_m93FFFABE8FCE7FA9793F0915E2A8842C7CD0C0C1_gshared (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* __this, RuntimeObject* ___key0, RuntimeObject* ___value1, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.List`1<System.Object>::Contains(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool List_1_Contains_m4C9139C2A6B23E9343D3F87807B32C6E2CFE660D_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___item0, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::Remove(TKey)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_Remove_m5C7C45E75D951A75843F3F7AADD56ECD64F6BC86_gshared (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* __this, RuntimeObject* ___key0, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.InputSystem.LowLevel.InputEventPtr::IsA<UnityEngine.InputSystem.LowLevel.StateEvent>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool InputEventPtr_IsA_TisStateEvent_tB93D5F08B084A2BC9FFC71B084409DBBD2516C0F_mA9BDDBB4B234A924F74AB0343F6F3CFDBFF70327_gshared (InputEventPtr_tC2A58521C9AFB479CC88789D5E0797D817C721C0* __this, const RuntimeMethod* method) ;
// System.Void System.Action`2<UnityEngine.InputSystem.LowLevel.InputEventPtr,System.Object>::Invoke(T1,T2)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Action_2_Invoke_m5CA7C522C42D2A1120BA23ED9913909EF92762C5_gshared_inline (Action_2_tD987B97B18D27B9920365359C46BC12702AD4F7D* __this, InputEventPtr_tC2A58521C9AFB479CC88789D5E0797D817C721C0 ___arg10, RuntimeObject* ___arg21, const RuntimeMethod* method) ;

// System.Void Unity.RenderStreaming.Signaling.HttpSignaling/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_mA6E769EDF32E71BA44BDF9F4FD17DF627A97ADAA (U3CU3Ec_tBCC97D6F6D28AE3DF8C0949CEC44C2E00DD50B61* __this, const RuntimeMethod* method) ;
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2 (RuntimeObject* __this, const RuntimeMethod* method) ;
// System.Void Unity.RenderStreaming.Signaling.OnConnectHandler::Invoke(Unity.RenderStreaming.Signaling.ISignaling,System.String,System.Boolean)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void OnConnectHandler_Invoke_mC22B99AF330E1CA75BBE54A22E583F9E2BD5DB8A_inline (OnConnectHandler_tF4A8A1EC5ED4BCEAB7EA0D252D6586EC660ABEB3* __this, RuntimeObject* ___signaling0, String_t* ___connectionId1, bool ___polite2, const RuntimeMethod* method) ;
// System.Void Unity.RenderStreaming.Signaling.OnDisconnectHandler::Invoke(Unity.RenderStreaming.Signaling.ISignaling,System.String)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void OnDisconnectHandler_Invoke_m5EA3C0685EA9F8A3B958CE439230A7D3F4E0DA8D_inline (OnDisconnectHandler_tB1C80CDBF420D2C6F13BE728865E1912E08383C9* __this, RuntimeObject* ___signaling0, String_t* ___connectionId1, const RuntimeMethod* method) ;
// System.Void Unity.RenderStreaming.Signaling.OnOfferHandler::Invoke(Unity.RenderStreaming.Signaling.ISignaling,Unity.RenderStreaming.DescData)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void OnOfferHandler_Invoke_m0DE74F0577369C952A9B36ABD622FA356FA853F9_inline (OnOfferHandler_t741D2F8DBDFDA8C010DBB5276E8D5CC35569FF86* __this, RuntimeObject* ___signaling0, DescData_tA4EB7C7305FA906F4E120329023F8C778EFCB1B8* ___e1, const RuntimeMethod* method) ;
// System.Void Unity.RenderStreaming.Signaling.OnAnswerHandler::Invoke(Unity.RenderStreaming.Signaling.ISignaling,Unity.RenderStreaming.DescData)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void OnAnswerHandler_Invoke_m222E27983168292A4C07EA7A122B9D3C6A2BE162_inline (OnAnswerHandler_tBF64DA7C3AB41984E338F75F069C194C8F0A1A19* __this, RuntimeObject* ___signaling0, DescData_tA4EB7C7305FA906F4E120329023F8C778EFCB1B8* ___e1, const RuntimeMethod* method) ;
// System.Void Unity.RenderStreaming.Signaling.OnIceCandidateHandler::Invoke(Unity.RenderStreaming.Signaling.ISignaling,Unity.RenderStreaming.CandidateData)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void OnIceCandidateHandler_Invoke_m799463020BA8E3CF851221DA9D84AA33AF37F621_inline (OnIceCandidateHandler_tB82627B771BEE335DBC8D44AEC93B2AEC8B1E139* __this, RuntimeObject* ___signaling0, CandidateData_t37575B19A1050FDC713708C9C0CBD2EB498F2567* ___e1, const RuntimeMethod* method) ;
// System.Void System.Threading.AutoResetEvent::.ctor(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AutoResetEvent__ctor_mB7C8CD30C5BE11A2C8DB79B27593CF0C5FE82ADE (AutoResetEvent_t7F792F3F7AD11BEF7B411E771D98E5266A8CE7C0* __this, bool ___initialState0, const RuntimeMethod* method) ;
// System.Void System.Object::Finalize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_Finalize_mC98C96301CCABFE00F1A7EF8E15DF507CACD42B2 (RuntimeObject* __this, const RuntimeMethod* method) ;
// System.Void Unity.RenderStreaming.Signaling.WebSocketSignaling::Stop()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebSocketSignaling_Stop_m0EBB7AEAED20E26DAD0263A4DC781AB9B11232FD (WebSocketSignaling_t1CF887D8D67DBF0E7FA4D9FFD852C1656BCAB60F* __this, const RuntimeMethod* method) ;
// System.Void System.InvalidOperationException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162 (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* __this, String_t* ___message0, const RuntimeMethod* method) ;
// System.Void System.Threading.ThreadStart::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThreadStart__ctor_m35CE51F76358F20E4A0C8F2963C3AE14E5FF7E71 (ThreadStart_t7662D98F1793EDE90192D7304D1C3C44119328A2* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// System.Void System.Threading.Thread::.ctor(System.Threading.ThreadStart)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Thread__ctor_m1FA23A179DF4F5B659689D6FA40DE903086212E2 (Thread_t0A773B9DE873D2DCAA7D229EAB36757B500E207F* __this, ThreadStart_t7662D98F1793EDE90192D7304D1C3C44119328A2* ___start0, const RuntimeMethod* method) ;
// System.Void System.Threading.Thread::Start()
IL2CPP_EXTERN_C IL2CPP_NO_INLINE IL2CPP_METHOD_ATTR void Thread_Start_m2230799AA331CA9ACEF49D5500281D0C1A9F72FA (Thread_t0A773B9DE873D2DCAA7D229EAB36757B500E207F* __this, const RuntimeMethod* method) ;
// System.Void WebSocketSharp.WebSocket::Close()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebSocket_Close_mE3876CFD424A250CA1BCB2079D7AA009E795FFC4 (WebSocket_tBCA6DA25533993CDAE05954CA6F61926CF134BB4* __this, const RuntimeMethod* method) ;
// System.Threading.ThreadState System.Threading.Thread::get_ThreadState()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Thread_get_ThreadState_mEEA2DF3EBB42CC1B30E9B6B6732579E799A243A8 (Thread_t0A773B9DE873D2DCAA7D229EAB36757B500E207F* __this, const RuntimeMethod* method) ;
// System.Void System.Threading.Thread::Abort()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Thread_Abort_mB956BACF405EFC38C6A3D0B93142E4CEDD64D941 (Thread_t0A773B9DE873D2DCAA7D229EAB36757B500E207F* __this, const RuntimeMethod* method) ;
// System.Boolean System.Threading.Thread::Join(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Thread_Join_mEE23C739BE03BA0A3D0083A7848300192EF9F5C2 (Thread_t0A773B9DE873D2DCAA7D229EAB36757B500E207F* __this, int32_t ___millisecondsTimeout0, const RuntimeMethod* method) ;
// System.Delegate System.Delegate::Combine(System.Delegate,System.Delegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Delegate_t* Delegate_Combine_m8B9D24CED35033C7FC56501DFE650F5CB7FF012C (Delegate_t* ___a0, Delegate_t* ___b1, const RuntimeMethod* method) ;
// System.Delegate System.Delegate::Remove(System.Delegate,System.Delegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Delegate_t* Delegate_Remove_m40506877934EC1AD4ADAE57F5E97AF0BC0F96116 (Delegate_t* ___source0, Delegate_t* ___value1, const RuntimeMethod* method) ;
// System.Void Unity.RenderStreaming.DescData::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DescData__ctor_m3AA5A3312C9E853B796FA9EFAB20A23AFBE6169B (DescData_tA4EB7C7305FA906F4E120329023F8C778EFCB1B8* __this, const RuntimeMethod* method) ;
// System.Void Unity.RenderStreaming.RoutedMessage`1<Unity.RenderStreaming.DescData>::.ctor()
inline void RoutedMessage_1__ctor_m1F6081FAA95C98F9346C78BDB810A6165DE7D01F (RoutedMessage_1_t72CE37549A13355407A8430A32D1B9899B96C4B5* __this, const RuntimeMethod* method)
{
	((  void (*) (RoutedMessage_1_t72CE37549A13355407A8430A32D1B9899B96C4B5*, const RuntimeMethod*))RoutedMessage_1__ctor_mC9E288D00A30EAD170E2B1E0894C389219154530_gshared)(__this, method);
}
// System.Void Unity.RenderStreaming.Signaling.WebSocketSignaling::WSSend(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebSocketSignaling_WSSend_mA1BBF1C4528CBA7B97ADA6775CE4B6B092B2A291 (WebSocketSignaling_t1CF887D8D67DBF0E7FA4D9FFD852C1656BCAB60F* __this, RuntimeObject* ___data0, const RuntimeMethod* method) ;
// System.Void Unity.RenderStreaming.CandidateData::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CandidateData__ctor_mA859EFF28F12E2966E9D35A302FF8674F4C12A88 (CandidateData_t37575B19A1050FDC713708C9C0CBD2EB498F2567* __this, const RuntimeMethod* method) ;
// System.String Unity.WebRTC.RTCIceCandidate::get_Candidate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* RTCIceCandidate_get_Candidate_m72D6C96D4B55F5B6AD526DEA591EA187F523FC33 (RTCIceCandidate_t934E142F42C60EB706D94154B8596B73E7AB5CE4* __this, const RuntimeMethod* method) ;
// System.Nullable`1<System.Int32> Unity.WebRTC.RTCIceCandidate::get_SdpMLineIndex()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 RTCIceCandidate_get_SdpMLineIndex_m3473B7A6D73AF1BF329BDE27EA979304B3778B5C (RTCIceCandidate_t934E142F42C60EB706D94154B8596B73E7AB5CE4* __this, const RuntimeMethod* method) ;
// T System.Nullable`1<System.Int32>::GetValueOrDefault(T)
inline int32_t Nullable_1_GetValueOrDefault_m0F743BF8CC3F18E8288210EBA987C3DBFA7FC8C9 (Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28* __this, int32_t ___defaultValue0, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28*, int32_t, const RuntimeMethod*))Nullable_1_GetValueOrDefault_m0F743BF8CC3F18E8288210EBA987C3DBFA7FC8C9_gshared)(__this, ___defaultValue0, method);
}
// System.String Unity.WebRTC.RTCIceCandidate::get_SdpMid()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* RTCIceCandidate_get_SdpMid_m6C861CD69BA17EBB90A33F6552B8311B18D8EE3C (RTCIceCandidate_t934E142F42C60EB706D94154B8596B73E7AB5CE4* __this, const RuntimeMethod* method) ;
// System.Void Unity.RenderStreaming.RoutedMessage`1<Unity.RenderStreaming.CandidateData>::.ctor()
inline void RoutedMessage_1__ctor_mE946583C5CA695C6701F66A66BEC57B1ECF24D06 (RoutedMessage_1_t51E4C83A51CF0CC596E11B7566144BD0FDE84DD1* __this, const RuntimeMethod* method)
{
	((  void (*) (RoutedMessage_1_t51E4C83A51CF0CC596E11B7566144BD0FDE84DD1*, const RuntimeMethod*))RoutedMessage_1__ctor_mC9E288D00A30EAD170E2B1E0894C389219154530_gshared)(__this, method);
}
// System.String System.String::Concat(System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m9B13B47FCB3DF61144D9647DDA05F527377251B0 (String_t* ___str00, String_t* ___str11, String_t* ___str22, const RuntimeMethod* method) ;
// System.Void Unity.RenderStreaming.Signaling.WebSocketSignaling::WSCreate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebSocketSignaling_WSCreate_mE821A76D952FA6DAA76F6DFE04A97626A2184486 (WebSocketSignaling_t1CF887D8D67DBF0E7FA4D9FFD852C1656BCAB60F* __this, const RuntimeMethod* method) ;
// System.Void System.Threading.Thread::Sleep(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Thread_Sleep_m63B7D29DC735584F4D80373E48C91B34FF32D1A0 (int32_t ___millisecondsTimeout0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Debug::Log(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_Log_m86567BCF22BBE7809747817453CACA0E41E68219 (RuntimeObject* ___message0, const RuntimeMethod* method) ;
// T[] System.Array::Empty<System.String>()
inline StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* Array_Empty_TisString_t_m065B1C7D00E4F3FB1305F00C8AF7E73B05CE825B_inline (const RuntimeMethod* method)
{
	return ((  StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* (*) (const RuntimeMethod*))Array_Empty_TisRuntimeObject_m55011E8360A8199FB239A5787BA8631CDD6116FC_gshared_inline)(method);
}
// System.Void WebSocketSharp.WebSocket::.ctor(System.String,System.String[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebSocket__ctor_mE61AF5C55A248D7A6B3E3BC14D4BDE24387F6390 (WebSocket_tBCA6DA25533993CDAE05954CA6F61926CF134BB4* __this, String_t* ___url0, StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___protocols1, const RuntimeMethod* method) ;
// System.Boolean System.String::StartsWith(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_StartsWith_mF75DBA1EB709811E711B44E26FF919C88A8E65C0 (String_t* __this, String_t* ___value0, const RuntimeMethod* method) ;
// WebSocketSharp.Net.ClientSslConfiguration WebSocketSharp.WebSocket::get_SslConfiguration()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ClientSslConfiguration_t212ECC383B70D9C462DC423E9D3CD27C9E74A603* WebSocket_get_SslConfiguration_mBDAF6EF7F17D7803842800CE350BD0FDD4EC7B42 (WebSocket_tBCA6DA25533993CDAE05954CA6F61926CF134BB4* __this, const RuntimeMethod* method) ;
// System.Void WebSocketSharp.Net.ClientSslConfiguration::set_EnabledSslProtocols(System.Security.Authentication.SslProtocols)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ClientSslConfiguration_set_EnabledSslProtocols_mB560EC68BCD7965457E59AC7C3843CF050AEB96F (ClientSslConfiguration_t212ECC383B70D9C462DC423E9D3CD27C9E74A603* __this, int32_t ___value0, const RuntimeMethod* method) ;
// System.Void System.EventHandler::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EventHandler__ctor_m95444CE8D5A6F1AFC9793866C3FE884E732DCEB2 (EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// System.Void WebSocketSharp.WebSocket::add_OnOpen(System.EventHandler)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebSocket_add_OnOpen_m5715FC4EA7375D9465E94D361613C8335F16CDCC (WebSocket_tBCA6DA25533993CDAE05954CA6F61926CF134BB4* __this, EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* ___value0, const RuntimeMethod* method) ;
// System.Void System.EventHandler`1<WebSocketSharp.MessageEventArgs>::.ctor(System.Object,System.IntPtr)
inline void EventHandler_1__ctor_mBFF738C5B4A324ADE86116FCFB14BEBD465E278C (EventHandler_1_t8D76D9242722744EEBFEF94F3AE19600E1D651B9* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (EventHandler_1_t8D76D9242722744EEBFEF94F3AE19600E1D651B9*, RuntimeObject*, intptr_t, const RuntimeMethod*))EventHandler_1__ctor_mBA2E748CFBA7A0EEC0A373A6F634D3B5774EA370_gshared)(__this, ___object0, ___method1, method);
}
// System.Void WebSocketSharp.WebSocket::add_OnMessage(System.EventHandler`1<WebSocketSharp.MessageEventArgs>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebSocket_add_OnMessage_m958CB5E0C0A476F4D5AC753E1351F359717B4815 (WebSocket_tBCA6DA25533993CDAE05954CA6F61926CF134BB4* __this, EventHandler_1_t8D76D9242722744EEBFEF94F3AE19600E1D651B9* ___value0, const RuntimeMethod* method) ;
// System.Void System.EventHandler`1<WebSocketSharp.ErrorEventArgs>::.ctor(System.Object,System.IntPtr)
inline void EventHandler_1__ctor_mEE692A37B9A9F48312806EC0503F42A6C0ECB289 (EventHandler_1_tEF41E797A6883ACCC9C7536EEEB557E1EFC8C291* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (EventHandler_1_tEF41E797A6883ACCC9C7536EEEB557E1EFC8C291*, RuntimeObject*, intptr_t, const RuntimeMethod*))EventHandler_1__ctor_mBA2E748CFBA7A0EEC0A373A6F634D3B5774EA370_gshared)(__this, ___object0, ___method1, method);
}
// System.Void WebSocketSharp.WebSocket::add_OnError(System.EventHandler`1<WebSocketSharp.ErrorEventArgs>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebSocket_add_OnError_mC3207DE386AE7B354D314B5CB8F407702E72E95E (WebSocket_tBCA6DA25533993CDAE05954CA6F61926CF134BB4* __this, EventHandler_1_tEF41E797A6883ACCC9C7536EEEB557E1EFC8C291* ___value0, const RuntimeMethod* method) ;
// System.Void System.EventHandler`1<WebSocketSharp.CloseEventArgs>::.ctor(System.Object,System.IntPtr)
inline void EventHandler_1__ctor_m3E0F9E4A1E4586F7783A529A94CF899EF217E3D1 (EventHandler_1_t522FAB2F4CBA6A3D12166027B1D4A1C8C94D68E5* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (EventHandler_1_t522FAB2F4CBA6A3D12166027B1D4A1C8C94D68E5*, RuntimeObject*, intptr_t, const RuntimeMethod*))EventHandler_1__ctor_mBA2E748CFBA7A0EEC0A373A6F634D3B5774EA370_gshared)(__this, ___object0, ___method1, method);
}
// System.Void WebSocketSharp.WebSocket::add_OnClose(System.EventHandler`1<WebSocketSharp.CloseEventArgs>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebSocket_add_OnClose_m09A4F73CC7535D8206A52A8CFBAAA4206D87C0B0 (WebSocket_tBCA6DA25533993CDAE05954CA6F61926CF134BB4* __this, EventHandler_1_t522FAB2F4CBA6A3D12166027B1D4A1C8C94D68E5* ___value0, const RuntimeMethod* method) ;
// System.Void System.Threading.Monitor::Enter(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Monitor_Enter_m2F86C66A2C7C7D8D4A7CC05AF72E3AE3AAB4E529 (RuntimeObject* ___obj0, const RuntimeMethod* method) ;
// System.String System.String::Concat(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_mAF2CE02CC0CB7460753D0A1A91CCF2B1E9804C5D (String_t* ___str00, String_t* ___str11, const RuntimeMethod* method) ;
// System.Void WebSocketSharp.WebSocket::ConnectAsync()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebSocket_ConnectAsync_mB0D857484E7F5D17F380F7DD542534D4D7C43F9A (WebSocket_tBCA6DA25533993CDAE05954CA6F61926CF134BB4* __this, const RuntimeMethod* method) ;
// System.Text.Encoding System.Text.Encoding::get_UTF8()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* Encoding_get_UTF8_m9700ADA8E0F244002B2A89B483F1B2133B8FE336 (const RuntimeMethod* method) ;
// System.Byte[] WebSocketSharp.MessageEventArgs::get_RawData()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* MessageEventArgs_get_RawData_m3DC965D70E03A0373E4AE2C84B34C6F5D871D76F (MessageEventArgs_tAA9D7AC324337F7494A3084C3A2E5ECA24AA6BD4* __this, const RuntimeMethod* method) ;
// System.Void Unity.RenderStreaming.Signaling.WebSocketSignaling/<>c__DisplayClass40_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass40_0__ctor_mC33BA204DE3B19BEBCDAB1103BDC82F65B4D5FD9 (U3CU3Ec__DisplayClass40_0_t99C91E680A787779B8EF8C4F759C3D5F0253CD9C* __this, const RuntimeMethod* method) ;
// T UnityEngine.JsonUtility::FromJson<Unity.RenderStreaming.RoutedMessage`1<Unity.RenderStreaming.SignalingMessage>>(System.String)
inline RoutedMessage_1_t4D757D0545252511B26BDC0D6D8F2C2F36DF1664* JsonUtility_FromJson_TisRoutedMessage_1_t4D757D0545252511B26BDC0D6D8F2C2F36DF1664_mEB26E05A22F9AB83AE1FD09DEF8BFE7E2D646DC2 (String_t* ___json0, const RuntimeMethod* method)
{
	return ((  RoutedMessage_1_t4D757D0545252511B26BDC0D6D8F2C2F36DF1664* (*) (String_t*, const RuntimeMethod*))JsonUtility_FromJson_TisRuntimeObject_m3A645CB2B6525E4A5835EA8A8CEBD39C7E2C444A_gshared)(___json0, method);
}
// System.Boolean System.String::IsNullOrEmpty(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_IsNullOrEmpty_m54CF0907E7C4F3AFB2E796A13DC751ECBB8DB64A (String_t* ___value0, const RuntimeMethod* method) ;
// T UnityEngine.JsonUtility::FromJson<Unity.RenderStreaming.SignalingMessage>(System.String)
inline SignalingMessage_t2661291D3E1FD73AA68A5F4C6F56E2D48DD28F75* JsonUtility_FromJson_TisSignalingMessage_t2661291D3E1FD73AA68A5F4C6F56E2D48DD28F75_m4661B0E5AB867B5EC321C3BE8B5060494FCBF55E (String_t* ___json0, const RuntimeMethod* method)
{
	return ((  SignalingMessage_t2661291D3E1FD73AA68A5F4C6F56E2D48DD28F75* (*) (String_t*, const RuntimeMethod*))JsonUtility_FromJson_TisRuntimeObject_m3A645CB2B6525E4A5835EA8A8CEBD39C7E2C444A_gshared)(___json0, method);
}
// System.Boolean System.String::op_Equality(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0 (String_t* ___a0, String_t* ___b1, const RuntimeMethod* method) ;
// System.Void System.Threading.SendOrPostCallback::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SendOrPostCallback__ctor_mE6F9D9606A00C3C18AEA057422ECF4106C80DA37 (SendOrPostCallback_t5C292A12062F24027A98492F52ECFE9802AA6F0E* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// System.Void Unity.RenderStreaming.Signaling.WebSocketSignaling/<>c__DisplayClass40_1::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass40_1__ctor_m744586716828740663DF32DD5E1CDB5B89089230 (U3CU3Ec__DisplayClass40_1_t89052BF20BD4AE4E27BCEE4CB46B0449FE981A85* __this, const RuntimeMethod* method) ;
// System.Void Unity.RenderStreaming.Signaling.WebSocketSignaling/<>c__DisplayClass40_2::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass40_2__ctor_mD9FEA819678038BFB1B548742BB98A35D2DE831F (U3CU3Ec__DisplayClass40_2_t2FD87832B5721C3236040338A04B8D226CE932FA* __this, const RuntimeMethod* method) ;
// System.Void Unity.RenderStreaming.Signaling.WebSocketSignaling/<>c__DisplayClass40_3::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass40_3__ctor_mE0EB2F1A998025C39B456F26A187708D04D48811 (U3CU3Ec__DisplayClass40_3_t2495E95291EA54819DDC684E5F9994BF6C7D7158* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Debug::LogError(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_LogError_m059825802BB6AF7EA9693FEBEEB0D85F59A3E38E (RuntimeObject* ___message0, const RuntimeMethod* method) ;
// System.String WebSocketSharp.ErrorEventArgs::get_Message()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* ErrorEventArgs_get_Message_mEAB02AF06D891E7DA0A211E58CBE744A0C1F9F7A (ErrorEventArgs_t4A4E35A3A95F4B9C871AB4E92A97A973C1711143* __this, const RuntimeMethod* method) ;
// System.UInt16 WebSocketSharp.CloseEventArgs::get_Code()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint16_t CloseEventArgs_get_Code_m2E0325F4200D8AF0CA5537A890DAEC2670D197F4 (CloseEventArgs_t5388F91E45CE32C877EA43C79F519682A7A7A609* __this, const RuntimeMethod* method) ;
// System.String System.String::Format(System.String,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_m8C122B26BC5AA10E2550AECA16E57DAE10F07E30 (String_t* ___format0, RuntimeObject* ___arg01, const RuntimeMethod* method) ;
// System.Boolean System.Threading.EventWaitHandle::Set()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool EventWaitHandle_Set_mDF98D67F214714A9590DF82A1C51D3D851281E4D (EventWaitHandle_t18F2EB0161747B0646A9A406015A61A214A1EB7E* __this, const RuntimeMethod* method) ;
// WebSocketSharp.WebSocketState WebSocketSharp.WebSocket::get_ReadyState()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint16_t WebSocket_get_ReadyState_m43E1C9BDB871CA2D37F3F83FEC36A8E926B0A39C (WebSocket_tBCA6DA25533993CDAE05954CA6F61926CF134BB4* __this, const RuntimeMethod* method) ;
// System.Void WebSocketSharp.WebSocket::Send(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebSocket_Send_mE275781E5A051D124CA6603C6DDF357E777DF3D1 (WebSocket_tBCA6DA25533993CDAE05954CA6F61926CF134BB4* __this, String_t* ___data0, const RuntimeMethod* method) ;
// System.String UnityEngine.JsonUtility::ToJson(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* JsonUtility_ToJson_mD0FB24DC5A8621A2473FC208E9B15AF43944EBCD (RuntimeObject* ___obj0, const RuntimeMethod* method) ;
// System.Void Unity.RenderStreaming.Signaling.OnStartHandler::Invoke(Unity.RenderStreaming.Signaling.ISignaling)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void OnStartHandler_Invoke_m69E91DABD69A3AB2775AD48F29C1B05748F238E6_inline (OnStartHandler_t295FEA9A47BD02A9B36195C055961D94C233A56F* __this, RuntimeObject* ___signaling0, const RuntimeMethod* method) ;
// System.Type System.Type::GetTypeFromHandle(System.RuntimeTypeHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t* Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E (RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B ___handle0, const RuntimeMethod* method) ;
// System.Void System.Reflection.FieldInfo::SetValue(System.Object,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FieldInfo_SetValue_mD8C0DA3A1A0CFF073F971622BBDBAAB6688B4B6C (FieldInfo_t* __this, RuntimeObject* ___obj0, RuntimeObject* ___value1, const RuntimeMethod* method) ;
// UnityEngine.InputSystem.Utilities.ReadOnlyArray`1<UnityEngine.InputSystem.InputDevice> UnityEngine.InputSystem.InputSystem::get_devices()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ReadOnlyArray_1_t21E90B3F1DF1E9A2088EA0523F03C47910735BCA InputSystem_get_devices_m92D52284ABC0BCE6CF46CB98EB870F2AA3890BF8 (const RuntimeMethod* method) ;
// System.Collections.Generic.IEnumerable`1<System.String> UnityEngine.InputSystem.InputSystem::ListLayouts()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* InputSystem_ListLayouts_m4DD7C02054680DDB24EBFEE504B70F630DF1E1CC (const RuntimeMethod* method) ;
// UnityEngine.InputSystem.InputDevice UnityEngine.InputSystem.InputSystem::GetDeviceById(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR InputDevice_t8BCF67533E872A75779C24C93D1D7085B72D364B* InputSystem_GetDeviceById_m0EC67530A5BB503DD302D95F1F48808D14DA3976 (int32_t ___deviceId0, const RuntimeMethod* method) ;
// UnityEngine.InputSystem.InputDevice UnityEngine.InputSystem.InputSystem::AddDevice(System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR InputDevice_t8BCF67533E872A75779C24C93D1D7085B72D364B* InputSystem_AddDevice_m6A36B1D42CC84336EEA8A36CA6F8EAF7069CA6C1 (String_t* ___layout0, String_t* ___name1, String_t* ___variants2, const RuntimeMethod* method) ;
// System.Void UnityEngine.InputSystem.InputSystem::RemoveDevice(UnityEngine.InputSystem.InputDevice)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputSystem_RemoveDevice_m41F154CEBE1EB94090D2980BEA684E58799EA8B3 (InputDevice_t8BCF67533E872A75779C24C93D1D7085B72D364B* ___device0, const RuntimeMethod* method) ;
// System.Void UnityEngine.InputSystem.InputSystem::SetDeviceUsage(UnityEngine.InputSystem.InputDevice,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputSystem_SetDeviceUsage_m313BA9340F206351D53CD2109DFB9EE657B6873F (InputDevice_t8BCF67533E872A75779C24C93D1D7085B72D364B* ___device0, String_t* ___usage1, const RuntimeMethod* method) ;
// UnityEngine.InputSystem.Layouts.InputControlLayout UnityEngine.InputSystem.InputSystem::LoadLayout(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR InputControlLayout_t46A40BE4C976BE33E85F61E63EB34323FED9831D* InputSystem_LoadLayout_mA58ABD2C31E63EC4E2F47F9E2B7F08A6185366FC (String_t* ___name0, const RuntimeMethod* method) ;
// System.Void UnityEngine.InputSystem.InputSystem::RegisterLayoutOverride(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputSystem_RegisterLayoutOverride_mBAE3A58A6BACBA6F464E8E9CCC367C9198A323C1 (String_t* ___json0, String_t* ___name1, const RuntimeMethod* method) ;
// System.Void UnityEngine.InputSystem.InputSystem::RegisterLayout(System.String,System.String,System.Nullable`1<UnityEngine.InputSystem.Layouts.InputDeviceMatcher>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputSystem_RegisterLayout_m0B85065BF998E684B4CAC7D8DF2759906D551B9D (String_t* ___json0, String_t* ___name1, Nullable_1_t4EEC710224A7596AC94C3B6D292E4CB7D84B7F2C ___matches2, const RuntimeMethod* method) ;
// System.Void UnityEngine.InputSystem.InputSystem::RemoveLayout(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputSystem_RemoveLayout_m7AA59AD8EC2AA0BAA64FAA37B96CF00C2DA27A4D (String_t* ___name0, const RuntimeMethod* method) ;
// System.Void UnityEngine.InputSystem.InputSystem::QueueEvent(UnityEngine.InputSystem.LowLevel.InputEventPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputSystem_QueueEvent_m35F20668E3E09695F94D64AD9E9FA6510F8BBB40 (InputEventPtr_tC2A58521C9AFB479CC88789D5E0797D817C721C0 ___eventPtr0, const RuntimeMethod* method) ;
// System.Void System.ArgumentNullException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* __this, String_t* ___paramName0, const RuntimeMethod* method) ;
// System.Boolean Unity.RenderStreaming.InputSystem.InputRemoting::get_sending()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool InputRemoting_get_sending_m21F0ACD760A4DCFBA070CBAA9391E97D279F88A0 (InputRemoting_t4BBB51BEA47ACD8A408459C612008D52240C6985* __this, const RuntimeMethod* method) ;
// System.Void System.Action`1<Unity.RenderStreaming.InputSystem.InputRemoting/Message>::.ctor(System.Object,System.IntPtr)
inline void Action_1__ctor_mC48A1C69CDF3D8A288DC1276D72B190A99D9A0CC (Action_1_t62CFC7E46D3237DF830A4F831466D93C80CCEB03* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Action_1_t62CFC7E46D3237DF830A4F831466D93C80CCEB03*, RuntimeObject*, intptr_t, const RuntimeMethod*))Action_1__ctor_mC48A1C69CDF3D8A288DC1276D72B190A99D9A0CC_gshared)(__this, ___object0, ___method1, method);
}
// System.Void System.Action`2<UnityEngine.InputSystem.LowLevel.InputEventPtr,UnityEngine.InputSystem.InputDevice>::.ctor(System.Object,System.IntPtr)
inline void Action_2__ctor_m43B5BA62418FAB32773B12CEFF46A46855BF5B10 (Action_2_t4943DD8C32CAB983950535CEF3BABA85DF8C9AAA* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Action_2_t4943DD8C32CAB983950535CEF3BABA85DF8C9AAA*, RuntimeObject*, intptr_t, const RuntimeMethod*))Action_2__ctor_mFC80A1D3B6BA1009B9779F59B49347FEEE827FB6_gshared)(__this, ___object0, ___method1, method);
}
// System.Void System.Action`2<UnityEngine.InputSystem.InputDevice,UnityEngine.InputSystem.InputDeviceChange>::.ctor(System.Object,System.IntPtr)
inline void Action_2__ctor_m23A4911D82F290811EDC6BFC315C339857526804 (Action_2_tB79528C85CFEF7DFF52C575DDAA398D2FE6BC333* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Action_2_tB79528C85CFEF7DFF52C575DDAA398D2FE6BC333*, RuntimeObject*, intptr_t, const RuntimeMethod*))Action_2__ctor_m6DEC13F96CE9CD74561DCCA7017E450079C96942_gshared)(__this, ___object0, ___method1, method);
}
// System.Void System.Action`2<System.String,UnityEngine.InputSystem.InputControlLayoutChange>::.ctor(System.Object,System.IntPtr)
inline void Action_2__ctor_m10175669DF3F5CF6A6EB1DAB1C4A5595AE7EC4FC (Action_2_t4797B88C63509F2EE4385D6DABE6A4B5AD5393F7* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Action_2_t4797B88C63509F2EE4385D6DABE6A4B5AD5393F7*, RuntimeObject*, intptr_t, const RuntimeMethod*))Action_2__ctor_m6DEC13F96CE9CD74561DCCA7017E450079C96942_gshared)(__this, ___object0, ___method1, method);
}
// System.Void Unity.RenderStreaming.InputSystem.InputRemoting::set_sending(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputRemoting_set_sending_m38E4E2654D50BD0E3FE1725FB199C56EBA51D51E (InputRemoting_t4BBB51BEA47ACD8A408459C612008D52240C6985* __this, bool ___value0, const RuntimeMethod* method) ;
// System.Void Unity.RenderStreaming.InputSystem.InputRemoting::SendInitialMessages()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputRemoting_SendInitialMessages_mA46BE703E38096F2B83548E2338F53246E2BE136 (InputRemoting_t4BBB51BEA47ACD8A408459C612008D52240C6985* __this, const RuntimeMethod* method) ;
// System.Void Unity.RenderStreaming.InputSystem.InputRemoting/ConnectMsg::Process(Unity.RenderStreaming.InputSystem.InputRemoting)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConnectMsg_Process_m07B09534D7399ECF06A17B7747F7AAF9EFFC4DEA (InputRemoting_t4BBB51BEA47ACD8A408459C612008D52240C6985* ___Receiver0, const RuntimeMethod* method) ;
// System.Void Unity.RenderStreaming.InputSystem.InputRemoting/DisconnectMsg::Process(Unity.RenderStreaming.InputSystem.InputRemoting,Unity.RenderStreaming.InputSystem.InputRemoting/Message)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DisconnectMsg_Process_mD537D2BDC389E8A8AE85392437EF411432664A9D (InputRemoting_t4BBB51BEA47ACD8A408459C612008D52240C6985* ___Receiver0, Message_tD936DB9861B7DBCDC7BCEB495736886D5EFAD801 ___msg1, const RuntimeMethod* method) ;
// System.Void Unity.RenderStreaming.InputSystem.InputRemoting/NewLayoutMsg::Process(Unity.RenderStreaming.InputSystem.InputRemoting,Unity.RenderStreaming.InputSystem.InputRemoting/Message)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NewLayoutMsg_Process_m398E07BC9F273420602C81BD3F3A9D493ABF124E (InputRemoting_t4BBB51BEA47ACD8A408459C612008D52240C6985* ___Receiver0, Message_tD936DB9861B7DBCDC7BCEB495736886D5EFAD801 ___msg1, const RuntimeMethod* method) ;
// System.Void Unity.RenderStreaming.InputSystem.InputRemoting/RemoveLayoutMsg::Process(Unity.RenderStreaming.InputSystem.InputRemoting,Unity.RenderStreaming.InputSystem.InputRemoting/Message)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RemoveLayoutMsg_Process_m46502048FBC7DFE41A7A930F1821F1DF72E88F54 (InputRemoting_t4BBB51BEA47ACD8A408459C612008D52240C6985* ___Receiver0, Message_tD936DB9861B7DBCDC7BCEB495736886D5EFAD801 ___msg1, const RuntimeMethod* method) ;
// System.Void Unity.RenderStreaming.InputSystem.InputRemoting/NewDeviceMsg::Process(Unity.RenderStreaming.InputSystem.InputRemoting,Unity.RenderStreaming.InputSystem.InputRemoting/Message)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NewDeviceMsg_Process_m22BF4A6B18F0C8F115FC61AB87DDB234BE803A53 (InputRemoting_t4BBB51BEA47ACD8A408459C612008D52240C6985* ___Receiver0, Message_tD936DB9861B7DBCDC7BCEB495736886D5EFAD801 ___msg1, const RuntimeMethod* method) ;
// System.Void Unity.RenderStreaming.InputSystem.InputRemoting/NewEventsMsg::Process(Unity.RenderStreaming.InputSystem.InputRemoting,Unity.RenderStreaming.InputSystem.InputRemoting/Message)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NewEventsMsg_Process_m958137B8A7C9CFCF99C3BE2F2E1523C78009BD81 (InputRemoting_t4BBB51BEA47ACD8A408459C612008D52240C6985* ___Receiver0, Message_tD936DB9861B7DBCDC7BCEB495736886D5EFAD801 ___msg1, const RuntimeMethod* method) ;
// System.Void Unity.RenderStreaming.InputSystem.InputRemoting/ChangeUsageMsg::Process(Unity.RenderStreaming.InputSystem.InputRemoting,Unity.RenderStreaming.InputSystem.InputRemoting/Message)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ChangeUsageMsg_Process_m50A137F20A93FE67272ADE2B96B5705D15D09F85 (InputRemoting_t4BBB51BEA47ACD8A408459C612008D52240C6985* ___Receiver0, Message_tD936DB9861B7DBCDC7BCEB495736886D5EFAD801 ___msg1, const RuntimeMethod* method) ;
// System.Void Unity.RenderStreaming.InputSystem.InputRemoting/RemoveDeviceMsg::Process(Unity.RenderStreaming.InputSystem.InputRemoting,Unity.RenderStreaming.InputSystem.InputRemoting/Message)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RemoveDeviceMsg_Process_m25B08D4A90E34170938B0487BE44ACCCFC4A85F4 (InputRemoting_t4BBB51BEA47ACD8A408459C612008D52240C6985* ___Receiver0, Message_tD936DB9861B7DBCDC7BCEB495736886D5EFAD801 ___msg1, const RuntimeMethod* method) ;
// System.Void Unity.RenderStreaming.InputSystem.InputRemoting/StartSendingMsg::Process(Unity.RenderStreaming.InputSystem.InputRemoting)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StartSendingMsg_Process_m78663D27C08F8C1F73C0ED92414F2B66F02C2020 (InputRemoting_t4BBB51BEA47ACD8A408459C612008D52240C6985* ___Receiver0, const RuntimeMethod* method) ;
// System.Void Unity.RenderStreaming.InputSystem.InputRemoting/StopSendingMsg::Process(Unity.RenderStreaming.InputSystem.InputRemoting)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StopSendingMsg_Process_m59DAD0B9548C832C7A0FC7AF8CBC1C54E3BDDCE1 (InputRemoting_t4BBB51BEA47ACD8A408459C612008D52240C6985* ___Receiver0, const RuntimeMethod* method) ;
// System.Void Unity.RenderStreaming.InputSystem.InputRemoting/Subscriber::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Subscriber__ctor_mE0F29FB4AE3005DAE999192A3A53F3FCBF27237E (Subscriber_tCE25893C3FF2E8E4590B8EFBE9DE0316FC0AD8E7* __this, const RuntimeMethod* method) ;
// System.Int32 Unity.RenderStreaming.ArrayHelpers::Append<Unity.RenderStreaming.InputSystem.InputRemoting/Subscriber>(TValue[]&,TValue)
inline int32_t ArrayHelpers_Append_TisSubscriber_tCE25893C3FF2E8E4590B8EFBE9DE0316FC0AD8E7_m6BEE27048FF4C626789BA127C739F3210F3FE9CD (SubscriberU5BU5D_tF989EA4535B55CD10D08D7C8C981FC376FC12C18** ___array0, Subscriber_tCE25893C3FF2E8E4590B8EFBE9DE0316FC0AD8E7* ___value1, const RuntimeMethod* method)
{
	return ((  int32_t (*) (SubscriberU5BU5D_tF989EA4535B55CD10D08D7C8C981FC376FC12C18**, Subscriber_tCE25893C3FF2E8E4590B8EFBE9DE0316FC0AD8E7*, const RuntimeMethod*))ArrayHelpers_Append_TisRuntimeObject_mC927D055EFF7C2BEA9F1F36B19822CCE684608DA_gshared)(___array0, ___value1, method);
}
// System.Void Unity.RenderStreaming.InputSystem.InputRemoting::SendAllGeneratedLayouts()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputRemoting_SendAllGeneratedLayouts_mF4E6D128D372B32C5FEDDD9B9804F65398F641D2 (InputRemoting_t4BBB51BEA47ACD8A408459C612008D52240C6985* __this, const RuntimeMethod* method) ;
// System.Void Unity.RenderStreaming.InputSystem.InputRemoting::SendAllDevices()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputRemoting_SendAllDevices_mA55292B9896AF776507185AE6D8352655E6B0815 (InputRemoting_t4BBB51BEA47ACD8A408459C612008D52240C6985* __this, const RuntimeMethod* method) ;
// System.Void Unity.RenderStreaming.InputSystem.InputRemoting::SendLayout(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputRemoting_SendLayout_m4DBD3DBFB6215A5D4DAAF0087B41DC361B133584 (InputRemoting_t4BBB51BEA47ACD8A408459C612008D52240C6985* __this, String_t* ___layoutName0, const RuntimeMethod* method) ;
// System.Nullable`1<Unity.RenderStreaming.InputSystem.InputRemoting/Message> Unity.RenderStreaming.InputSystem.InputRemoting/NewLayoutMsg::Create(Unity.RenderStreaming.InputSystem.InputRemoting,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Nullable_1_t90A0E6202C33510EEDDE5954340106E0AF91D5B5 NewLayoutMsg_Create_m3B8780CC5C3FC5C7CA3D388FF852925A0AB6B8A6 (InputRemoting_t4BBB51BEA47ACD8A408459C612008D52240C6985* ___sender0, String_t* ___layoutName1, const RuntimeMethod* method) ;
// System.Boolean System.Nullable`1<Unity.RenderStreaming.InputSystem.InputRemoting/Message>::get_HasValue()
inline bool Nullable_1_get_HasValue_mB0EB37808971A8C9C6034F5EF00AA28A8758520C_inline (Nullable_1_t90A0E6202C33510EEDDE5954340106E0AF91D5B5* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Nullable_1_t90A0E6202C33510EEDDE5954340106E0AF91D5B5*, const RuntimeMethod*))Nullable_1_get_HasValue_mB0EB37808971A8C9C6034F5EF00AA28A8758520C_gshared_inline)(__this, method);
}
// T System.Nullable`1<Unity.RenderStreaming.InputSystem.InputRemoting/Message>::get_Value()
inline Message_tD936DB9861B7DBCDC7BCEB495736886D5EFAD801 Nullable_1_get_Value_m5E4FBECB1D4CDA8E5D1BB691EDF90C4F3510E3B9 (Nullable_1_t90A0E6202C33510EEDDE5954340106E0AF91D5B5* __this, const RuntimeMethod* method)
{
	return ((  Message_tD936DB9861B7DBCDC7BCEB495736886D5EFAD801 (*) (Nullable_1_t90A0E6202C33510EEDDE5954340106E0AF91D5B5*, const RuntimeMethod*))Nullable_1_get_Value_m5E4FBECB1D4CDA8E5D1BB691EDF90C4F3510E3B9_gshared)(__this, method);
}
// System.Void Unity.RenderStreaming.InputSystem.InputRemoting::Send(Unity.RenderStreaming.InputSystem.InputRemoting/Message)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputRemoting_Send_m5D671416EDF3316E84D23325654D4E92E3874481 (InputRemoting_t4BBB51BEA47ACD8A408459C612008D52240C6985* __this, Message_tD936DB9861B7DBCDC7BCEB495736886D5EFAD801 ___msg0, const RuntimeMethod* method) ;
// UnityEngine.InputSystem.Utilities.ReadOnlyArray`1/Enumerator<TValue> UnityEngine.InputSystem.Utilities.ReadOnlyArray`1<UnityEngine.InputSystem.InputDevice>::GetEnumerator()
inline Enumerator_t81E72BA990D25C50893E883131DA5DF2157A185B ReadOnlyArray_1_GetEnumerator_m40DC2BB2BC3C855369753E8780E2B2DE6F38E88C (ReadOnlyArray_1_t21E90B3F1DF1E9A2088EA0523F03C47910735BCA* __this, const RuntimeMethod* method)
{
	return ((  Enumerator_t81E72BA990D25C50893E883131DA5DF2157A185B (*) (ReadOnlyArray_1_t21E90B3F1DF1E9A2088EA0523F03C47910735BCA*, const RuntimeMethod*))ReadOnlyArray_1_GetEnumerator_mE43A032C7C67896D9F8377C6C1C863C22F3044B6_gshared)(__this, method);
}
// System.Void UnityEngine.InputSystem.Utilities.ReadOnlyArray`1/Enumerator<UnityEngine.InputSystem.InputDevice>::Dispose()
inline void Enumerator_Dispose_mF7167BCE82C30E7D09082FFCA3F3EFFD32B186CB (Enumerator_t81E72BA990D25C50893E883131DA5DF2157A185B* __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_t81E72BA990D25C50893E883131DA5DF2157A185B*, const RuntimeMethod*))Enumerator_Dispose_m041721B53AC187277BACB4EA9C86E299322EB0AB_gshared)(__this, method);
}
// TValue UnityEngine.InputSystem.Utilities.ReadOnlyArray`1/Enumerator<UnityEngine.InputSystem.InputDevice>::get_Current()
inline InputDevice_t8BCF67533E872A75779C24C93D1D7085B72D364B* Enumerator_get_Current_mFB31F2643918A411B2F1539CA180A763D0200945 (Enumerator_t81E72BA990D25C50893E883131DA5DF2157A185B* __this, const RuntimeMethod* method)
{
	return ((  InputDevice_t8BCF67533E872A75779C24C93D1D7085B72D364B* (*) (Enumerator_t81E72BA990D25C50893E883131DA5DF2157A185B*, const RuntimeMethod*))Enumerator_get_Current_mC38F33A423715DE1D9EAD3EADE1C8C03C52E4465_gshared)(__this, method);
}
// System.Void Unity.RenderStreaming.InputSystem.InputRemoting::SendDevice(UnityEngine.InputSystem.InputDevice)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputRemoting_SendDevice_m71754ADF39142D9822B50B175842CEFE7F89D755 (InputRemoting_t4BBB51BEA47ACD8A408459C612008D52240C6985* __this, InputDevice_t8BCF67533E872A75779C24C93D1D7085B72D364B* ___device0, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.InputSystem.Utilities.ReadOnlyArray`1/Enumerator<UnityEngine.InputSystem.InputDevice>::MoveNext()
inline bool Enumerator_MoveNext_mFAC408E08BBD06FE731A9E84F5E79461F23EACBC (Enumerator_t81E72BA990D25C50893E883131DA5DF2157A185B* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_t81E72BA990D25C50893E883131DA5DF2157A185B*, const RuntimeMethod*))Enumerator_MoveNext_m95272BAC87E97D7B862DB72A8639565003BD244B_gshared)(__this, method);
}
// System.Boolean UnityEngine.InputSystem.InputDevice::get_remote()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool InputDevice_get_remote_m931E3EE376DAEFA9852ED066A9F9763D473EE1BE (InputDevice_t8BCF67533E872A75779C24C93D1D7085B72D364B* __this, const RuntimeMethod* method) ;
// Unity.RenderStreaming.InputSystem.InputRemoting/Message Unity.RenderStreaming.InputSystem.InputRemoting/NewDeviceMsg::Create(UnityEngine.InputSystem.InputDevice)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Message_tD936DB9861B7DBCDC7BCEB495736886D5EFAD801 NewDeviceMsg_Create_m5DBD04782BA2ED8D8504D33EA44ACAA355C57226 (InputDevice_t8BCF67533E872A75779C24C93D1D7085B72D364B* ___device0, const RuntimeMethod* method) ;
// Unity.RenderStreaming.InputSystem.InputRemoting/Message Unity.RenderStreaming.InputSystem.InputRemoting/NewEventsMsg::CreateStateEvent(UnityEngine.InputSystem.InputDevice)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Message_tD936DB9861B7DBCDC7BCEB495736886D5EFAD801 NewEventsMsg_CreateStateEvent_m963D4E2C468BCC482A3FB51D56A682B189A6B294 (InputDevice_t8BCF67533E872A75779C24C93D1D7085B72D364B* ___device0, const RuntimeMethod* method) ;
// UnityEngine.InputSystem.LowLevel.InputEvent* UnityEngine.InputSystem.LowLevel.InputEventPtr::get_data()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR InputEvent_t10F727342D1A79DCFC06529C203BB61C194AEBC5* InputEventPtr_get_data_m4694B5F91E787CE9586B5C7113AFEB89D33CC616_inline (InputEventPtr_tC2A58521C9AFB479CC88789D5E0797D817C721C0* __this, const RuntimeMethod* method) ;
// Unity.RenderStreaming.InputSystem.InputRemoting/Message Unity.RenderStreaming.InputSystem.InputRemoting/NewEventsMsg::Create(UnityEngine.InputSystem.LowLevel.InputEvent*,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Message_tD936DB9861B7DBCDC7BCEB495736886D5EFAD801 NewEventsMsg_Create_mCA9E8F31223F1B0F843D0EEA4E5BC76AB8DBD392 (InputEvent_t10F727342D1A79DCFC06529C203BB61C194AEBC5* ___events0, int32_t ___eventCount1, const RuntimeMethod* method) ;
// Unity.RenderStreaming.InputSystem.InputRemoting/Message Unity.RenderStreaming.InputSystem.InputRemoting/RemoveDeviceMsg::Create(UnityEngine.InputSystem.InputDevice)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Message_tD936DB9861B7DBCDC7BCEB495736886D5EFAD801 RemoveDeviceMsg_Create_m0FD7F02B1C40A542DB262467E4274CEFE5F878F3 (InputDevice_t8BCF67533E872A75779C24C93D1D7085B72D364B* ___device0, const RuntimeMethod* method) ;
// Unity.RenderStreaming.InputSystem.InputRemoting/Message Unity.RenderStreaming.InputSystem.InputRemoting/ChangeUsageMsg::Create(UnityEngine.InputSystem.InputDevice)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Message_tD936DB9861B7DBCDC7BCEB495736886D5EFAD801 ChangeUsageMsg_Create_m6F62F395DE1B92B848D41D9A5D825944FBACF24A (InputDevice_t8BCF67533E872A75779C24C93D1D7085B72D364B* ___device0, const RuntimeMethod* method) ;
// Unity.RenderStreaming.InputSystem.InputRemoting/Message Unity.RenderStreaming.InputSystem.InputRemoting/RemoveLayoutMsg::Create(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Message_tD936DB9861B7DBCDC7BCEB495736886D5EFAD801 RemoveLayoutMsg_Create_m84B94243FC66205A7FE00ED64C355409BE411261 (String_t* ___layoutName0, const RuntimeMethod* method) ;
// System.Int32 Unity.RenderStreaming.ArrayHelpers::Append<Unity.RenderStreaming.InputSystem.InputRemoting/RemoteSender>(TValue[]&,TValue)
inline int32_t ArrayHelpers_Append_TisRemoteSender_tE4F28E5B7F46F15B1B18D890E2B8C7E96AB5F6A0_m1303D0C5E4B417079D6D681FC811AEE8E645F162 (RemoteSenderU5BU5D_tFE32D763FD37124BA0F477F37A797F29868A3C3F** ___array0, RemoteSender_tE4F28E5B7F46F15B1B18D890E2B8C7E96AB5F6A0 ___value1, const RuntimeMethod* method)
{
	return ((  int32_t (*) (RemoteSenderU5BU5D_tFE32D763FD37124BA0F477F37A797F29868A3C3F**, RemoteSender_tE4F28E5B7F46F15B1B18D890E2B8C7E96AB5F6A0, const RuntimeMethod*))ArrayHelpers_Append_TisRemoteSender_tE4F28E5B7F46F15B1B18D890E2B8C7E96AB5F6A0_m1303D0C5E4B417079D6D681FC811AEE8E645F162_gshared)(___array0, ___value1, method);
}
// System.Int32 Unity.RenderStreaming.InputSystem.InputRemoting::FindLocalDeviceId(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t InputRemoting_FindLocalDeviceId_mD78F4077B78BE2316FB5D44B4258CBA53A7E7213 (InputRemoting_t4BBB51BEA47ACD8A408459C612008D52240C6985* __this, int32_t ___remoteDeviceId0, int32_t ___senderIndex1, const RuntimeMethod* method) ;
// System.Int32 Unity.RenderStreaming.InputSystem.InputRemoting::FindOrCreateSenderRecord(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t InputRemoting_FindOrCreateSenderRecord_mFA9C6363D8897E1FEF20E78A688B668F83CEB8F6 (InputRemoting_t4BBB51BEA47ACD8A408459C612008D52240C6985* __this, int32_t ___senderId0, const RuntimeMethod* method) ;
// System.Void Unity.RenderStreaming.ArrayHelpers::EraseAt<Unity.RenderStreaming.InputSystem.InputRemoting/RemoteSender>(TValue[]&,System.Int32)
inline void ArrayHelpers_EraseAt_TisRemoteSender_tE4F28E5B7F46F15B1B18D890E2B8C7E96AB5F6A0_m79F8957091D78FB48FB1BF51DA20C4CE5DD3ADB6 (RemoteSenderU5BU5D_tFE32D763FD37124BA0F477F37A797F29868A3C3F** ___array0, int32_t ___index1, const RuntimeMethod* method)
{
	((  void (*) (RemoteSenderU5BU5D_tFE32D763FD37124BA0F477F37A797F29868A3C3F**, int32_t, const RuntimeMethod*))ArrayHelpers_EraseAt_TisRemoteSender_tE4F28E5B7F46F15B1B18D890E2B8C7E96AB5F6A0_m79F8957091D78FB48FB1BF51DA20C4CE5DD3ADB6_gshared)(___array0, ___index1, method);
}
// System.Boolean Unity.RenderStreaming.ArrayHelpers::Erase<Unity.RenderStreaming.InputSystem.InputRemoting/Subscriber>(TValue[]&,TValue)
inline bool ArrayHelpers_Erase_TisSubscriber_tCE25893C3FF2E8E4590B8EFBE9DE0316FC0AD8E7_m057DFF39D9E682660E1EA3FC6302450854771944 (SubscriberU5BU5D_tF989EA4535B55CD10D08D7C8C981FC376FC12C18** ___array0, Subscriber_tCE25893C3FF2E8E4590B8EFBE9DE0316FC0AD8E7* ___value1, const RuntimeMethod* method)
{
	return ((  bool (*) (SubscriberU5BU5D_tF989EA4535B55CD10D08D7C8C981FC376FC12C18**, Subscriber_tCE25893C3FF2E8E4590B8EFBE9DE0316FC0AD8E7*, const RuntimeMethod*))ArrayHelpers_Erase_TisRuntimeObject_m9D45F2990B606EA8062FF594413DCFA8E65AE98D_gshared)(___array0, ___value1, method);
}
// System.Void Unity.RenderStreaming.InputSystem.InputRemoting::StartSending()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputRemoting_StartSending_m542F3ECB7945344C54585434ABEE46D833664D63 (InputRemoting_t4BBB51BEA47ACD8A408459C612008D52240C6985* __this, const RuntimeMethod* method) ;
// System.Void Unity.RenderStreaming.InputSystem.InputRemoting::StopSending()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputRemoting_StopSending_m9658A7464DCDFAD141C99D2793CF4B14E1953FE8 (InputRemoting_t4BBB51BEA47ACD8A408459C612008D52240C6985* __this, const RuntimeMethod* method) ;
// System.Void Unity.RenderStreaming.InputSystem.InputRemoting::RemoveRemoteDevices(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputRemoting_RemoveRemoteDevices_m7882723ED04CBA12BF0615C0BC524542F82FA911 (InputRemoting_t4BBB51BEA47ACD8A408459C612008D52240C6985* __this, int32_t ___participantId0, const RuntimeMethod* method) ;
// System.Void UnityEngine.InputSystem.Utilities.InternedString::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InternedString__ctor_m2E9672D46D84C82F705DE799CE8B6123EB95E935 (InternedString_t8D62A48CB7D85AAE9CFCCCFB0A77AC2844905735* __this, String_t* ___text0, const RuntimeMethod* method) ;
// System.String UnityEngine.InputSystem.Utilities.InternedString::op_Implicit(UnityEngine.InputSystem.Utilities.InternedString)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* InternedString_op_Implicit_mF8E1F7DA818367AEB1330013321063D7BDF30526 (InternedString_t8D62A48CB7D85AAE9CFCCCFB0A77AC2844905735 ___str0, const RuntimeMethod* method) ;
// System.String System.String::Format(System.String,System.Object,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_m9499958F4B0BB6089C75760AB647AB3CA4D55806 (String_t* ___format0, RuntimeObject* ___arg01, RuntimeObject* ___arg12, const RuntimeMethod* method) ;
// System.String UnityEngine.InputSystem.Layouts.InputControlLayout::ToJson()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* InputControlLayout_ToJson_mC3A56BD729D0884D80D6215145CBB99BBB3AE358 (InputControlLayout_t46A40BE4C976BE33E85F61E63EB34323FED9831D* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.InputSystem.Layouts.InputControlLayout::get_isOverride()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool InputControlLayout_get_isOverride_mEE41FE7F3857477AD6F4227D0A5606089DB6034C (InputControlLayout_t46A40BE4C976BE33E85F61E63EB34323FED9831D* __this, const RuntimeMethod* method) ;
// System.Byte[] Unity.RenderStreaming.InputSystem.InputRemoting::SerializeData<Unity.RenderStreaming.InputSystem.InputRemoting/NewLayoutMsg/Data>(TData)
inline ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* InputRemoting_SerializeData_TisData_t996B414526496A00392F034F2FE6F541A31CA819_m8C575790DA6AC3108C560FDC020920C2CBA41846 (Data_t996B414526496A00392F034F2FE6F541A31CA819 ___data0, const RuntimeMethod* method)
{
	return ((  ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* (*) (Data_t996B414526496A00392F034F2FE6F541A31CA819, const RuntimeMethod*))InputRemoting_SerializeData_TisData_t996B414526496A00392F034F2FE6F541A31CA819_m8C575790DA6AC3108C560FDC020920C2CBA41846_gshared)(___data0, method);
}
// System.Void System.Nullable`1<Unity.RenderStreaming.InputSystem.InputRemoting/Message>::.ctor(T)
inline void Nullable_1__ctor_mAD5430FE1FB829B55B9BE53CC89A036069AEDC90 (Nullable_1_t90A0E6202C33510EEDDE5954340106E0AF91D5B5* __this, Message_tD936DB9861B7DBCDC7BCEB495736886D5EFAD801 ___value0, const RuntimeMethod* method)
{
	((  void (*) (Nullable_1_t90A0E6202C33510EEDDE5954340106E0AF91D5B5*, Message_tD936DB9861B7DBCDC7BCEB495736886D5EFAD801, const RuntimeMethod*))Nullable_1__ctor_mAD5430FE1FB829B55B9BE53CC89A036069AEDC90_gshared)(__this, ___value0, method);
}
// TData Unity.RenderStreaming.InputSystem.InputRemoting::DeserializeData<Unity.RenderStreaming.InputSystem.InputRemoting/NewLayoutMsg/Data>(System.Byte[])
inline Data_t996B414526496A00392F034F2FE6F541A31CA819 InputRemoting_DeserializeData_TisData_t996B414526496A00392F034F2FE6F541A31CA819_m9B4ADD5BE9DCFB37101D1759CF50E2A818F909F8 (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___data0, const RuntimeMethod* method)
{
	return ((  Data_t996B414526496A00392F034F2FE6F541A31CA819 (*) (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, const RuntimeMethod*))InputRemoting_DeserializeData_TisData_t996B414526496A00392F034F2FE6F541A31CA819_m9B4ADD5BE9DCFB37101D1759CF50E2A818F909F8_gshared)(___data0, method);
}
// System.Int32 Unity.RenderStreaming.ArrayHelpers::Append<System.String>(TValue[]&,TValue)
inline int32_t ArrayHelpers_Append_TisString_t_m329B98CBF498D193DCD469806BBB87D8A4578EE0 (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248** ___array0, String_t* ___value1, const RuntimeMethod* method)
{
	return ((  int32_t (*) (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248**, String_t*, const RuntimeMethod*))ArrayHelpers_Append_TisRuntimeObject_mC927D055EFF7C2BEA9F1F36B19822CCE684608DA_gshared)(___array0, ___value1, method);
}
// System.Void UnityEngine.Debug::Assert(System.Boolean,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_Assert_m9CA35857A4FF29506840C572F2C7BA233805B806 (bool ___condition0, String_t* ___message1, const RuntimeMethod* method) ;
// System.String UnityEngine.InputSystem.InputControl::get_name()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* InputControl_get_name_mCB68FC91A11BEFA1FF26EA0B5FD39D345C4ADC22 (InputControl_t74F06B623518F992BF8E38656A5E0857169E3E2E* __this, const RuntimeMethod* method) ;
// System.String UnityEngine.InputSystem.InputControl::get_layout()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* InputControl_get_layout_mE6054F87BB94A1F1D06355E137A1840B2EFF7971 (InputControl_t74F06B623518F992BF8E38656A5E0857169E3E2E* __this, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.InputSystem.InputDevice::get_deviceId()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t InputDevice_get_deviceId_mC65E69E6117B78DB2F4963F5CF9BF031488AD588_inline (InputDevice_t8BCF67533E872A75779C24C93D1D7085B72D364B* __this, const RuntimeMethod* method) ;
// System.String UnityEngine.InputSystem.InputControl::get_variants()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* InputControl_get_variants_mCA1F10ABE4C44E1A5ED985ED86C9D58EFEB0CC25 (InputControl_t74F06B623518F992BF8E38656A5E0857169E3E2E* __this, const RuntimeMethod* method) ;
// UnityEngine.InputSystem.Layouts.InputDeviceDescription UnityEngine.InputSystem.InputDevice::get_description()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR InputDeviceDescription_tE86DD77422AAF60ADDAC788B31E5A05E739B708F InputDevice_get_description_mD9260BECAC1F217CF72662B7B08FA4A164EE73EB_inline (InputDevice_t8BCF67533E872A75779C24C93D1D7085B72D364B* __this, const RuntimeMethod* method) ;
// TData Unity.RenderStreaming.InputSystem.InputRemoting::DeserializeData<Unity.RenderStreaming.InputSystem.InputRemoting/NewDeviceMsg/Data>(System.Byte[])
inline Data_t388E6D9BE25175D528F87ED2B794D4CCA12E1632 InputRemoting_DeserializeData_TisData_t388E6D9BE25175D528F87ED2B794D4CCA12E1632_m1B84B22792D9FD67CAA168344CB753E44F221357 (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___data0, const RuntimeMethod* method)
{
	return ((  Data_t388E6D9BE25175D528F87ED2B794D4CCA12E1632 (*) (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, const RuntimeMethod*))InputRemoting_DeserializeData_TisData_t388E6D9BE25175D528F87ED2B794D4CCA12E1632_m1B84B22792D9FD67CAA168344CB753E44F221357_gshared)(___data0, method);
}
// System.String System.String::Format(System.String,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_m74FC0A1259DFA02F3DF6538FC7F3ACF3E1AF0C55 (String_t* ___format0, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___args1, const RuntimeMethod* method) ;
// System.Void Unity.RenderStreaming.InputSystem.InputDeviceExtension::SetParticipantId(UnityEngine.InputSystem.InputDevice,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputDeviceExtension_SetParticipantId_mF08A99F02500BE2A39C36CCD6D9F751C6CF5758C (InputDevice_t8BCF67533E872A75779C24C93D1D7085B72D364B* ___device0, int32_t ___value1, const RuntimeMethod* method) ;
// System.String System.String::Format(System.String,System.Object,System.Object,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_m76BF8F3A6AD789E38B708848A2688D400AAC250A (String_t* ___format0, RuntimeObject* ___arg01, RuntimeObject* ___arg12, RuntimeObject* ___arg23, const RuntimeMethod* method) ;
// System.Void Unity.RenderStreaming.InputSystem.InputDeviceExtension::SetDescription(UnityEngine.InputSystem.InputDevice,UnityEngine.InputSystem.Layouts.InputDeviceDescription)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputDeviceExtension_SetDescription_m7BB699454C3E4A5DCD86345785A935CB3889A063 (InputDevice_t8BCF67533E872A75779C24C93D1D7085B72D364B* ___device0, InputDeviceDescription_tE86DD77422AAF60ADDAC788B31E5A05E739B708F ___value1, const RuntimeMethod* method) ;
// System.Int32 Unity.RenderStreaming.InputSystem.InputDeviceExtension::GetDeviceFlags(UnityEngine.InputSystem.InputDevice)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t InputDeviceExtension_GetDeviceFlags_m34A84AC53FB1CFFE8AB1D47688FF1148D8CE7C58 (InputDevice_t8BCF67533E872A75779C24C93D1D7085B72D364B* ___device0, const RuntimeMethod* method) ;
// System.Void Unity.RenderStreaming.InputSystem.InputDeviceExtension::SetDeviceFlags(UnityEngine.InputSystem.InputDevice,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputDeviceExtension_SetDeviceFlags_mF59692E94999F4AAA18349851A8198A67F3C61EB (InputDevice_t8BCF67533E872A75779C24C93D1D7085B72D364B* ___device0, int32_t ___value1, const RuntimeMethod* method) ;
// System.Int32 Unity.RenderStreaming.ArrayHelpers::Append<Unity.RenderStreaming.InputSystem.InputRemoting/RemoteInputDevice>(TValue[]&,TValue)
inline int32_t ArrayHelpers_Append_TisRemoteInputDevice_t7E8AF8B413C68B7205B1F4D9EDA5BBD53ABCDB27_m3D2487C0F5E3A17654513B724F09E9DA7EBEC8BB (RemoteInputDeviceU5BU5D_tD2988955C31E6E6005201B6F2E728B014340134E** ___array0, RemoteInputDevice_t7E8AF8B413C68B7205B1F4D9EDA5BBD53ABCDB27 ___value1, const RuntimeMethod* method)
{
	return ((  int32_t (*) (RemoteInputDeviceU5BU5D_tD2988955C31E6E6005201B6F2E728B014340134E**, RemoteInputDevice_t7E8AF8B413C68B7205B1F4D9EDA5BBD53ABCDB27, const RuntimeMethod*))ArrayHelpers_Append_TisRemoteInputDevice_t7E8AF8B413C68B7205B1F4D9EDA5BBD53ABCDB27_m3D2487C0F5E3A17654513B724F09E9DA7EBEC8BB_gshared)(___array0, ___value1, method);
}
// Unity.Collections.NativeArray`1<System.Byte> UnityEngine.InputSystem.LowLevel.StateEvent::From(UnityEngine.InputSystem.InputDevice,UnityEngine.InputSystem.LowLevel.InputEventPtr&,Unity.Collections.Allocator)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_t81F55263465517B73C455D3400CF67B4BADD85CF StateEvent_From_m7774ECFAB234A273F72C2FC1A1753E68C01BC635 (InputDevice_t8BCF67533E872A75779C24C93D1D7085B72D364B* ___device0, InputEventPtr_tC2A58521C9AFB479CC88789D5E0797D817C721C0* ___eventPtr1, int32_t ___allocator2, const RuntimeMethod* method) ;
// System.Void Unity.Collections.NativeArray`1<System.Byte>::Dispose()
inline void NativeArray_1_Dispose_m8B0F342847ECB90EB814E1F6AA5BF7DC2F271AEA (NativeArray_1_t81F55263465517B73C455D3400CF67B4BADD85CF* __this, const RuntimeMethod* method)
{
	((  void (*) (NativeArray_1_t81F55263465517B73C455D3400CF67B4BADD85CF*, const RuntimeMethod*))NativeArray_1_Dispose_m8B0F342847ECB90EB814E1F6AA5BF7DC2F271AEA_gshared)(__this, method);
}
// System.Void UnityEngine.InputSystem.LowLevel.InputEventPtr::.ctor(UnityEngine.InputSystem.LowLevel.InputEvent*)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputEventPtr__ctor_m42C0DB27FACAB1B1EB79BEFEF640F90004815FF0 (InputEventPtr_tC2A58521C9AFB479CC88789D5E0797D817C721C0* __this, InputEvent_t10F727342D1A79DCFC06529C203BB61C194AEBC5* ___eventPtr0, const RuntimeMethod* method) ;
// System.UInt32 UnityEngine.InputSystem.LowLevel.InputEventPtr::get_sizeInBytes()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t InputEventPtr_get_sizeInBytes_mE060F5A7176AAF8ED749DB4A3DC7976249716597 (InputEventPtr_tC2A58521C9AFB479CC88789D5E0797D817C721C0* __this, const RuntimeMethod* method) ;
// UnityEngine.InputSystem.LowLevel.InputEventPtr UnityEngine.InputSystem.LowLevel.InputEventPtr::Next()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR InputEventPtr_tC2A58521C9AFB479CC88789D5E0797D817C721C0 InputEventPtr_Next_m401E057F7E6DAB9468F04D705173539E8876809D (InputEventPtr_tC2A58521C9AFB479CC88789D5E0797D817C721C0* __this, const RuntimeMethod* method) ;
// System.Void Unity.Collections.LowLevel.Unsafe.UnsafeUtility::MemCpy(System.Void*,System.Void*,System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeUtility_MemCpy_m019E657B952C27F705607F0F3D371EEE526B716B (void* ___destination0, void* ___source1, int64_t ___size2, const RuntimeMethod* method) ;
// System.Void System.IntPtr::.ctor(System.Void*)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void IntPtr__ctor_m4F9A9B80F01996B610D5AE4797F20B98ECD0A3D9_inline (intptr_t* __this, void* ___value0, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.InputSystem.LowLevel.InputEventPtr::get_deviceId()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t InputEventPtr_get_deviceId_mD8B68EDC37D90A69EE67A47B3E17F4D80D4620D3 (InputEventPtr_tC2A58521C9AFB479CC88789D5E0797D817C721C0* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.InputSystem.LowLevel.InputEventPtr::set_deviceId(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputEventPtr_set_deviceId_mDC5B90109CDEECE63A5F1310379DB8B1B31D2B97 (InputEventPtr_tC2A58521C9AFB479CC88789D5E0797D817C721C0* __this, int32_t ___value0, const RuntimeMethod* method) ;
// System.Int64 System.IntPtr::ToInt64()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t IntPtr_ToInt64_m0F81FB6FB08014074D4F5B915EDAB06A08552032 (intptr_t* __this, const RuntimeMethod* method) ;
// UnityEngine.InputSystem.Utilities.ReadOnlyArray`1<UnityEngine.InputSystem.Utilities.InternedString> UnityEngine.InputSystem.InputControl::get_usages()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ReadOnlyArray_1_t1C2864D7CF4D444AB2616316AC8DD33932F77064 InputControl_get_usages_mE4B12715DEF946968F97853D52515463D3A3C555 (InputControl_t74F06B623518F992BF8E38656A5E0857169E3E2E* __this, const RuntimeMethod* method) ;
// System.Void System.Func`2<UnityEngine.InputSystem.Utilities.InternedString,System.String>::.ctor(System.Object,System.IntPtr)
inline void Func_2__ctor_m6763116FA3257580D87BD903E24793FCD6D82548 (Func_2_tE0082B3C229A425A69ECDABB19259709EC9F540F* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Func_2_tE0082B3C229A425A69ECDABB19259709EC9F540F*, RuntimeObject*, intptr_t, const RuntimeMethod*))Func_2__ctor_mEA865389B1F3B9B7F55A65C4B937BF1A2F7258AC_gshared)(__this, ___object0, ___method1, method);
}
// System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable::Select<UnityEngine.InputSystem.Utilities.InternedString,System.String>(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,TResult>)
inline RuntimeObject* Enumerable_Select_TisInternedString_t8D62A48CB7D85AAE9CFCCCFB0A77AC2844905735_TisString_t_m4121F7A55EC2BCE9D2E38AF2C27E16AA95C8D893 (RuntimeObject* ___source0, Func_2_tE0082B3C229A425A69ECDABB19259709EC9F540F* ___selector1, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (RuntimeObject*, Func_2_tE0082B3C229A425A69ECDABB19259709EC9F540F*, const RuntimeMethod*))Enumerable_Select_TisInternedString_t8D62A48CB7D85AAE9CFCCCFB0A77AC2844905735_TisRuntimeObject_m6D1E7BE19748636FC77D4F07A11734CCD7C06231_gshared)(___source0, ___selector1, method);
}
// TSource[] System.Linq.Enumerable::ToArray<System.String>(System.Collections.Generic.IEnumerable`1<TSource>)
inline StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* Enumerable_ToArray_TisString_t_mCD2BC789CBFF834E06F00948FC47E15E720936DC (RuntimeObject* ___source0, const RuntimeMethod* method)
{
	return ((  StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* (*) (RuntimeObject*, const RuntimeMethod*))Enumerable_ToArray_TisRuntimeObject_m6B1F26FB2B3EA7B18B82FC81035440AAAEFCE924_gshared)(___source0, method);
}
// System.Byte[] Unity.RenderStreaming.InputSystem.InputRemoting::SerializeData<Unity.RenderStreaming.InputSystem.InputRemoting/ChangeUsageMsg/Data>(TData)
inline ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* InputRemoting_SerializeData_TisData_t3CDE355508AFD01E1939C50BA8D1CADCC2959561_mFE321BB814975EA3E148F680FF725B4B051DFA1E (Data_t3CDE355508AFD01E1939C50BA8D1CADCC2959561 ___data0, const RuntimeMethod* method)
{
	return ((  ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* (*) (Data_t3CDE355508AFD01E1939C50BA8D1CADCC2959561, const RuntimeMethod*))InputRemoting_SerializeData_TisData_t3CDE355508AFD01E1939C50BA8D1CADCC2959561_mFE321BB814975EA3E148F680FF725B4B051DFA1E_gshared)(___data0, method);
}
// TData Unity.RenderStreaming.InputSystem.InputRemoting::DeserializeData<Unity.RenderStreaming.InputSystem.InputRemoting/ChangeUsageMsg/Data>(System.Byte[])
inline Data_t3CDE355508AFD01E1939C50BA8D1CADCC2959561 InputRemoting_DeserializeData_TisData_t3CDE355508AFD01E1939C50BA8D1CADCC2959561_m2CE0C78AFB0AE1DADC5B6D9D21D3670A65FD8B02 (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___data0, const RuntimeMethod* method)
{
	return ((  Data_t3CDE355508AFD01E1939C50BA8D1CADCC2959561 (*) (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, const RuntimeMethod*))InputRemoting_DeserializeData_TisData_t3CDE355508AFD01E1939C50BA8D1CADCC2959561_m2CE0C78AFB0AE1DADC5B6D9D21D3670A65FD8B02_gshared)(___data0, method);
}
// UnityEngine.InputSystem.InputDevice Unity.RenderStreaming.InputSystem.InputRemoting::TryGetDeviceByRemoteId(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR InputDevice_t8BCF67533E872A75779C24C93D1D7085B72D364B* InputRemoting_TryGetDeviceByRemoteId_m042A5D606A11C95F612BE6BD7770B88F3DA554E9 (InputRemoting_t4BBB51BEA47ACD8A408459C612008D52240C6985* __this, int32_t ___remoteDeviceId0, int32_t ___senderIndex1, const RuntimeMethod* method) ;
// System.Void Unity.RenderStreaming.InputSystem.InputRemoting/ChangeUsageMsg/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m4942BADDEF0D102D1E72098FF892F2A78311A727 (U3CU3Ec_tA2EA796D5C35FC8D6899C102F19A1D897D01B010* __this, const RuntimeMethod* method) ;
// System.String UnityEngine.InputSystem.Utilities.InternedString::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* InternedString_ToString_mED327D67EF001C5EDFF284336F13C3E3F025993A (InternedString_t8D62A48CB7D85AAE9CFCCCFB0A77AC2844905735* __this, const RuntimeMethod* method) ;
// System.Byte[] System.BitConverter::GetBytes(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* BitConverter_GetBytes_m343FFC3DD8CF8D0139D0CAEB8ABB0A4D6DAA98F4 (int32_t ___value0, const RuntimeMethod* method) ;
// System.Int32 System.BitConverter::ToInt32(System.Byte[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t BitConverter_ToInt32_m745DF4DCC23461AB3035A92BC0C4D59AE12E6880 (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___value0, int32_t ___startIndex1, const RuntimeMethod* method) ;
// System.Void System.IO.MemoryStream::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MemoryStream__ctor_m8F3BAE0B48E65BAA13C52FB020E502B3EA22CA6B (MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2* __this, const RuntimeMethod* method) ;
// System.Void System.IO.BinaryWriter::.ctor(System.IO.Stream)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BinaryWriter__ctor_mF2F1235E378C3EC493A8C816597BCEB4205A9CA0 (BinaryWriter_tFB94D67EDFA3F6A34744A163BDABE287FDF2ED1E* __this, Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* ___output0, const RuntimeMethod* method) ;
// System.Void System.IO.MemoryStream::.ctor(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MemoryStream__ctor_m662CA0D5A0004A2E3B475FE8DCD687B654870AA2 (MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___buffer0, const RuntimeMethod* method) ;
// System.Void System.IO.BinaryReader::.ctor(System.IO.Stream)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BinaryReader__ctor_m898732FE0DBEDD480B24F6DE45A9AC696E44CC0F (BinaryReader_t9A6D85F0FE9AE4EBB5E8D66997DFD1D84939E158* __this, Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* ___input0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<UnityEngine.InputSystem.InputDevice>::.ctor()
inline void List_1__ctor_m7F6D93ACCD15D757B54BDB302DB4D63F855418C4 (List_1_t7228B1F3AC7E48407209173C7BF2B2AFBED5A4F7* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t7228B1F3AC7E48407209173C7BF2B2AFBED5A4F7*, const RuntimeMethod*))List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared)(__this, method);
}
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.String>::.ctor()
inline void Dictionary_2__ctor_m768E076F1E804CE4959F4E71D3E6A9ADE2F55052 (Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83*, const RuntimeMethod*))Dictionary_2__ctor_m5B32FBC624618211EB461D59CFBB10E987FD1329_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1<System.String>::.ctor()
inline void List_1__ctor_mCA8DD57EAC70C2B5923DBB9D5A77CEAC22E7068E (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD*, const RuntimeMethod*))List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared)(__this, method);
}
// System.Void Unity.RenderStreaming.InputSystem.InputManager::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputManager__ctor_mC25C0393A1E1F45E38536646098201190E414202 (InputManager_t57C115A76BE8B9259F24CF3980EF669C858CA071* __this, const RuntimeMethod* method) ;
// Unity.WebRTC.DelegateOnMessage Unity.WebRTC.RTCDataChannel::get_OnMessage()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DelegateOnMessage_tE81CBB87203E4F40FF44C6FEDE4BA23064ABBB62* RTCDataChannel_get_OnMessage_m52BF55D1E74B44B448A47E71801EABB086D1EB3F (RTCDataChannel_t249C16A38FD2A994D1A45381523F701A49BF1A77* __this, const RuntimeMethod* method) ;
// System.Void Unity.WebRTC.DelegateOnMessage::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DelegateOnMessage__ctor_mFB12B9D00B2DD7517C073A0AC7FB377BC5659036 (DelegateOnMessage_tE81CBB87203E4F40FF44C6FEDE4BA23064ABBB62* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// System.Void Unity.WebRTC.RTCDataChannel::set_OnMessage(Unity.WebRTC.DelegateOnMessage)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RTCDataChannel_set_OnMessage_mEB5215317A514EBF36D5307FEA6F4949C25A2E6C (RTCDataChannel_t249C16A38FD2A994D1A45381523F701A49BF1A77* __this, DelegateOnMessage_tE81CBB87203E4F40FF44C6FEDE4BA23064ABBB62* ___value0, const RuntimeMethod* method) ;
// System.Void Unity.RenderStreaming.InputPositionCorrector::.ctor(System.Action`2<UnityEngine.InputSystem.LowLevel.InputEventPtr,UnityEngine.InputSystem.InputDevice>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputPositionCorrector__ctor_m43B92A75880BD4090A136C5C4740F0FB363E5605 (InputPositionCorrector_tCF23AF130F6DFC2147C5A591578CB80F6C6475C2* __this, Action_2_t4943DD8C32CAB983950535CEF3BABA85DF8C9AAA* ___onEvent0, const RuntimeMethod* method) ;
// System.Void Unity.RenderStreaming.InputSystem.Receiver::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Receiver_Dispose_mBE492B2B5EEA779DEB37FCF9426374AC6DFA364D (Receiver_t3693E96FFA61969B9B9F01B3F38E241C176E8B13* __this, const RuntimeMethod* method) ;
// System.Void Unity.RenderStreaming.InputSystem.Receiver::RemoveAllRemoteDevices()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Receiver_RemoveAllRemoteDevices_mB281325386548C50286F66CAD79A90610C52182A (Receiver_t3693E96FFA61969B9B9F01B3F38E241C176E8B13* __this, const RuntimeMethod* method) ;
// System.Void Unity.RenderStreaming.InputSystem.Receiver::RemoveAllRemoteLayouts()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Receiver_RemoveAllRemoteLayouts_mBB9508181D8E7A8B4A6CFAF8023129E74B8ACDB8 (Receiver_t3693E96FFA61969B9B9F01B3F38E241C176E8B13* __this, const RuntimeMethod* method) ;
// System.Void Unity.RenderStreaming.InputSystem.MessageSerializer::Deserialize(System.Byte[],Unity.RenderStreaming.InputSystem.InputRemoting/Message&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MessageSerializer_Deserialize_m3B89B24AD19EA1EBD0CE5E8E51C27B06276D0990 (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___bytes0, Message_tD936DB9861B7DBCDC7BCEB495736886D5EFAD801* ___message1, const RuntimeMethod* method) ;
// System.Void System.Action`1<Unity.RenderStreaming.InputSystem.InputRemoting/Message>::Invoke(T)
inline void Action_1_Invoke_mF1548FD088108212A1822D5F1ED4FD8BE79743A6_inline (Action_1_t62CFC7E46D3237DF830A4F831466D93C80CCEB03* __this, Message_tD936DB9861B7DBCDC7BCEB495736886D5EFAD801 ___obj0, const RuntimeMethod* method)
{
	((  void (*) (Action_1_t62CFC7E46D3237DF830A4F831466D93C80CCEB03*, Message_tD936DB9861B7DBCDC7BCEB495736886D5EFAD801, const RuntimeMethod*))Action_1_Invoke_mF1548FD088108212A1822D5F1ED4FD8BE79743A6_gshared_inline)(__this, ___obj0, method);
}
// System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable::Empty<System.String>()
inline RuntimeObject* Enumerable_Empty_TisString_t_m59E0A7B1D4568D8BAFB2A883E33227C84FA2B167_inline (const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (const RuntimeMethod*))Enumerable_Empty_TisRuntimeObject_m42BB34F154440C9F0AC402FC3E9BD08C8D678F21_gshared_inline)(method);
}
// T[] System.Collections.Generic.List`1<UnityEngine.InputSystem.InputDevice>::ToArray()
inline InputDeviceU5BU5D_tA9AEFC6AF63557D3D5DCFB2B26DDA6F63147D548* List_1_ToArray_m0677C6BE36424C545A5EBE70F7F1F509CE9B95A3 (List_1_t7228B1F3AC7E48407209173C7BF2B2AFBED5A4F7* __this, const RuntimeMethod* method)
{
	return ((  InputDeviceU5BU5D_tA9AEFC6AF63557D3D5DCFB2B26DDA6F63147D548* (*) (List_1_t7228B1F3AC7E48407209173C7BF2B2AFBED5A4F7*, const RuntimeMethod*))List_1_ToArray_mD7E4F8E7C11C3C67CB5739FCC0A6E86106A6291F_gshared)(__this, method);
}
// System.Void UnityEngine.InputSystem.Utilities.ReadOnlyArray`1<UnityEngine.InputSystem.InputDevice>::.ctor(TValue[])
inline void ReadOnlyArray_1__ctor_mD59ECD80D43585A6BAEE5238FDA72B9D15F9E6D3 (ReadOnlyArray_1_t21E90B3F1DF1E9A2088EA0523F03C47910735BCA* __this, InputDeviceU5BU5D_tA9AEFC6AF63557D3D5DCFB2B26DDA6F63147D548* ___array0, const RuntimeMethod* method)
{
	((  void (*) (ReadOnlyArray_1_t21E90B3F1DF1E9A2088EA0523F03C47910735BCA*, InputDeviceU5BU5D_tA9AEFC6AF63557D3D5DCFB2B26DDA6F63147D548*, const RuntimeMethod*))ReadOnlyArray_1__ctor_mA9AA8F6151380781CF993C6F72ADB67D91B9CF41_gshared)(__this, ___array0, method);
}
// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.String,System.String>::get_Keys()
inline KeyCollection_t2EDD317F5771E575ACB63527B5AFB71291040342* Dictionary_2_get_Keys_m0014C8E91B9B4377ACFBD26A9175A7E5C016D9E9 (Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* __this, const RuntimeMethod* method)
{
	return ((  KeyCollection_t2EDD317F5771E575ACB63527B5AFB71291040342* (*) (Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83*, const RuntimeMethod*))Dictionary_2_get_Keys_m72D290F90654BFD683FA7AA7C63D9F4F692218B6_gshared)(__this, method);
}
// System.Void UnityEngine.InputSystem.Utilities.ReadOnlyArray`1<System.String>::.ctor(TValue[])
inline void ReadOnlyArray_1__ctor_mB7B2530C845265544A7EEC8827BDBDC9AAD59967 (ReadOnlyArray_1_t2221E33FFA1DEDB4C4179E62014550834DDAE95E* __this, StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___array0, const RuntimeMethod* method)
{
	((  void (*) (ReadOnlyArray_1_t2221E33FFA1DEDB4C4179E62014550834DDAE95E*, StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*, const RuntimeMethod*))ReadOnlyArray_1__ctor_mA9AA8F6151380781CF993C6F72ADB67D91B9CF41_gshared)(__this, ___array0, method);
}
// T System.Collections.Generic.List`1<UnityEngine.InputSystem.InputDevice>::get_Item(System.Int32)
inline InputDevice_t8BCF67533E872A75779C24C93D1D7085B72D364B* List_1_get_Item_m3537C03FE10D4B303FDA30D5D9919811FCCB7C87 (List_1_t7228B1F3AC7E48407209173C7BF2B2AFBED5A4F7* __this, int32_t ___index0, const RuntimeMethod* method)
{
	return ((  InputDevice_t8BCF67533E872A75779C24C93D1D7085B72D364B* (*) (List_1_t7228B1F3AC7E48407209173C7BF2B2AFBED5A4F7*, int32_t, const RuntimeMethod*))List_1_get_Item_m33561245D64798C2AB07584C0EC4F240E4839A38_gshared)(__this, ___index0, method);
}
// System.Int32 System.Collections.Generic.List`1<UnityEngine.InputSystem.InputDevice>::get_Count()
inline int32_t List_1_get_Count_mA1ED4EC9A15A623C97C494578B74F7F49BADE472_inline (List_1_t7228B1F3AC7E48407209173C7BF2B2AFBED5A4F7* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_t7228B1F3AC7E48407209173C7BF2B2AFBED5A4F7*, const RuntimeMethod*))List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline)(__this, method);
}
// TSource System.Linq.Enumerable::First<System.Collections.Generic.KeyValuePair`2<System.String,System.String>>(System.Collections.Generic.IEnumerable`1<TSource>)
inline KeyValuePair_2_t47AB280304B50F542FD7E14F25DB2C374AEDD80A Enumerable_First_TisKeyValuePair_2_t47AB280304B50F542FD7E14F25DB2C374AEDD80A_m2F7A0F03DDFAC20AB000E80BAF5BDDD68EE9FF1C (RuntimeObject* ___source0, const RuntimeMethod* method)
{
	return ((  KeyValuePair_2_t47AB280304B50F542FD7E14F25DB2C374AEDD80A (*) (RuntimeObject*, const RuntimeMethod*))Enumerable_First_TisKeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230_m4EDB83358F4E30FA0404D7F760F652673F6787F1_gshared)(___source0, method);
}
// TKey System.Collections.Generic.KeyValuePair`2<System.String,System.String>::get_Key()
inline String_t* KeyValuePair_2_get_Key_m654BCCAE2F20CB11D8E8C2D2C886A0C8A13EB1C4_inline (KeyValuePair_2_t47AB280304B50F542FD7E14F25DB2C374AEDD80A* __this, const RuntimeMethod* method)
{
	return ((  String_t* (*) (KeyValuePair_2_t47AB280304B50F542FD7E14F25DB2C374AEDD80A*, const RuntimeMethod*))KeyValuePair_2_get_Key_mBD8EA7557C27E6956F2AF29DA3F7499B2F51A282_gshared_inline)(__this, method);
}
// System.Int32 System.Collections.Generic.Dictionary`2<System.String,System.String>::get_Count()
inline int32_t Dictionary_2_get_Count_m65C62C77C355CFCE2CC0ED6D817637E1909E0843 (Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83*, const RuntimeMethod*))Dictionary_2_get_Count_m4DDA9442C238A443489115E22B026AD366851549_gshared)(__this, method);
}
// System.Void Unity.RenderStreaming.InputSystem.Receiver/<>c__DisplayClass33_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass33_0__ctor_m2D0B14E37D400652F19B67365455CFB759F8C8CD (U3CU3Ec__DisplayClass33_0_t7BB9C2C6DF625E4E7D58A039705AF481AA86BE1E* __this, const RuntimeMethod* method) ;
// System.Void System.Func`2<System.String,System.Boolean>::.ctor(System.Object,System.IntPtr)
inline void Func_2__ctor_m247D5044A4E1F518CA84A38B9A9F30E66BDD8184 (Func_2_tAB9727E0C937894E19032D575D98A8A9AB5EE47D* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Func_2_tAB9727E0C937894E19032D575D98A8A9AB5EE47D*, RuntimeObject*, intptr_t, const RuntimeMethod*))Func_2__ctor_m13C0A7F33154D861E2A041B52E88461832DA1697_gshared)(__this, ___object0, ___method1, method);
}
// System.Int32 System.Linq.Enumerable::Count<System.String>(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Boolean>)
inline int32_t Enumerable_Count_TisString_t_m817BB8D7A32098126CC975E91C64732B1DB8CFB0 (RuntimeObject* ___source0, Func_2_tAB9727E0C937894E19032D575D98A8A9AB5EE47D* ___predicate1, const RuntimeMethod* method)
{
	return ((  int32_t (*) (RuntimeObject*, Func_2_tAB9727E0C937894E19032D575D98A8A9AB5EE47D*, const RuntimeMethod*))Enumerable_Count_TisRuntimeObject_m8989C14122650F2DD5AD9A51D82C7184F91EEB34_gshared)(___source0, ___predicate1, method);
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,System.String>::TryGetValue(TKey,TValue&)
inline bool Dictionary_2_TryGetValue_mA86D965CB5F74CE8675B7995C61945BEB6E594CB (Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* __this, String_t* ___key0, String_t** ___value1, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83*, String_t*, String_t**, const RuntimeMethod*))Dictionary_2_TryGetValue_mD15380A4ED7CDEE99EA45881577D26BA9CE1B849_gshared)(__this, ___key0, ___value1, method);
}
// System.Void System.InvalidOperationException::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InvalidOperationException__ctor_m1BE9BD198B904AA1D94F4B10DA88077DFD44B7A5 (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* __this, const RuntimeMethod* method) ;
// System.Void Unity.RenderStreaming.InputSystem.InputManager::RegisterControlLayout(System.String,System.String,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputManager_RegisterControlLayout_m31948AFF22B3F6EF205746DE24EFFD703142610B (InputManager_t57C115A76BE8B9259F24CF3980EF669C858CA071* __this, String_t* ___json0, String_t* ___name1, bool ___isOverride2, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.String>::Add(T)
inline void List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_inline (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* __this, String_t* ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD*, String_t*, const RuntimeMethod*))List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline)(__this, ___item0, method);
}
// UnityEngine.InputSystem.InputDevice Unity.RenderStreaming.InputSystem.InputManager::AddDevice(System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR InputDevice_t8BCF67533E872A75779C24C93D1D7085B72D364B* InputManager_AddDevice_m32F793DBC05A2944CB84558E37B39849C2079132 (InputManager_t57C115A76BE8B9259F24CF3980EF669C858CA071* __this, String_t* ___layout0, String_t* ___name1, String_t* ___variants2, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<UnityEngine.InputSystem.InputDevice>::Add(T)
inline void List_1_Add_m3EA74E0C476E0197F84637414E722866A8EE48E1_inline (List_1_t7228B1F3AC7E48407209173C7BF2B2AFBED5A4F7* __this, InputDevice_t8BCF67533E872A75779C24C93D1D7085B72D364B* ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t7228B1F3AC7E48407209173C7BF2B2AFBED5A4F7*, InputDevice_t8BCF67533E872A75779C24C93D1D7085B72D364B*, const RuntimeMethod*))List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline)(__this, ___item0, method);
}
// System.Void System.Action`2<UnityEngine.InputSystem.InputDevice,UnityEngine.InputSystem.InputDeviceChange>::Invoke(T1,T2)
inline void Action_2_Invoke_m8A62316C5AC7B28A61A46872AE21A8EBFA916850_inline (Action_2_tB79528C85CFEF7DFF52C575DDAA398D2FE6BC333* __this, InputDevice_t8BCF67533E872A75779C24C93D1D7085B72D364B* ___arg10, int32_t ___arg21, const RuntimeMethod* method)
{
	((  void (*) (Action_2_tB79528C85CFEF7DFF52C575DDAA398D2FE6BC333*, InputDevice_t8BCF67533E872A75779C24C93D1D7085B72D364B*, int32_t, const RuntimeMethod*))Action_2_Invoke_m3BFB5987F7235AEF25980B76D635DBD5B56B0F7A_gshared_inline)(__this, ___arg10, ___arg21, method);
}
// System.Void Unity.RenderStreaming.InputSystem.InputManager::RemoveDevice(UnityEngine.InputSystem.InputDevice)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputManager_RemoveDevice_mD6457FACC78EB49B92209003DC40E2E5B9D05EE4 (InputManager_t57C115A76BE8B9259F24CF3980EF669C858CA071* __this, InputDevice_t8BCF67533E872A75779C24C93D1D7085B72D364B* ___device0, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.List`1<UnityEngine.InputSystem.InputDevice>::Remove(T)
inline bool List_1_Remove_m2BC507498E26A6E5D158CC7FB8EDEDDFC6BDC647 (List_1_t7228B1F3AC7E48407209173C7BF2B2AFBED5A4F7* __this, InputDevice_t8BCF67533E872A75779C24C93D1D7085B72D364B* ___item0, const RuntimeMethod* method)
{
	return ((  bool (*) (List_1_t7228B1F3AC7E48407209173C7BF2B2AFBED5A4F7*, InputDevice_t8BCF67533E872A75779C24C93D1D7085B72D364B*, const RuntimeMethod*))List_1_Remove_m4DFA48F4CEB9169601E75FC28517C5C06EFA5AD7_gshared)(__this, ___item0, method);
}
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.String>::Add(TKey,TValue)
inline void Dictionary_2_Add_mC78C20D5901C87AAC38F37C906FAB6946BDE5F13 (Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* __this, String_t* ___key0, String_t* ___value1, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83*, String_t*, String_t*, const RuntimeMethod*))Dictionary_2_Add_m93FFFABE8FCE7FA9793F0915E2A8842C7CD0C0C1_gshared)(__this, ___key0, ___value1, method);
}
// System.Void System.Action`2<System.String,UnityEngine.InputSystem.InputControlLayoutChange>::Invoke(T1,T2)
inline void Action_2_Invoke_m830CD74C20E8D1464D4DCA824B0371008CFE2897_inline (Action_2_t4797B88C63509F2EE4385D6DABE6A4B5AD5393F7* __this, String_t* ___arg10, int32_t ___arg21, const RuntimeMethod* method)
{
	((  void (*) (Action_2_t4797B88C63509F2EE4385D6DABE6A4B5AD5393F7*, String_t*, int32_t, const RuntimeMethod*))Action_2_Invoke_m3BFB5987F7235AEF25980B76D635DBD5B56B0F7A_gshared_inline)(__this, ___arg10, ___arg21, method);
}
// System.Boolean System.Collections.Generic.List`1<System.String>::Contains(T)
inline bool List_1_Contains_m359254483BE42CAD4DCA8FBAFB87473FB4CF00E1 (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* __this, String_t* ___item0, const RuntimeMethod* method)
{
	return ((  bool (*) (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD*, String_t*, const RuntimeMethod*))List_1_Contains_m4C9139C2A6B23E9343D3F87807B32C6E2CFE660D_gshared)(__this, ___item0, method);
}
// System.Void Unity.RenderStreaming.InputSystem.InputManager::RemoveLayout(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputManager_RemoveLayout_mF7A23065EADEEA7D127D2856858E0D1D77B4F63C (InputManager_t57C115A76BE8B9259F24CF3980EF669C858CA071* __this, String_t* ___name0, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.List`1<System.String>::Remove(T)
inline bool List_1_Remove_mD9E8CFB6777A99046B3C0195F7343FE771A2E99D (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* __this, String_t* ___item0, const RuntimeMethod* method)
{
	return ((  bool (*) (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD*, String_t*, const RuntimeMethod*))List_1_Remove_m4DFA48F4CEB9169601E75FC28517C5C06EFA5AD7_gshared)(__this, ___item0, method);
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,System.String>::Remove(TKey)
inline bool Dictionary_2_Remove_mD816BB81544F3B37050A72FD7BA22E6A3D53BBFC (Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* __this, String_t* ___key0, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83*, String_t*, const RuntimeMethod*))Dictionary_2_Remove_m5C7C45E75D951A75843F3F7AADD56ECD64F6BC86_gshared)(__this, ___key0, method);
}
// System.Boolean Unity.RenderStreaming.InputSystem.Receiver::get_EnableInputPositionCorrection()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Receiver_get_EnableInputPositionCorrection_mCA7935398FB989440C50AA6452DB95065821FFB5_inline (Receiver_t3693E96FFA61969B9B9F01B3F38E241C176E8B13* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.InputSystem.LowLevel.InputEventPtr::IsA<UnityEngine.InputSystem.LowLevel.StateEvent>()
inline bool InputEventPtr_IsA_TisStateEvent_tB93D5F08B084A2BC9FFC71B084409DBBD2516C0F_mA9BDDBB4B234A924F74AB0343F6F3CFDBFF70327 (InputEventPtr_tC2A58521C9AFB479CC88789D5E0797D817C721C0* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (InputEventPtr_tC2A58521C9AFB479CC88789D5E0797D817C721C0*, const RuntimeMethod*))InputEventPtr_IsA_TisStateEvent_tB93D5F08B084A2BC9FFC71B084409DBBD2516C0F_mA9BDDBB4B234A924F74AB0343F6F3CFDBFF70327_gshared)(__this, method);
}
// System.Void Unity.RenderStreaming.InputPositionCorrector::Invoke(UnityEngine.InputSystem.LowLevel.InputEventPtr,UnityEngine.InputSystem.InputDevice)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputPositionCorrector_Invoke_mD19A3A5E1AA6373557DD2C8FCC2A0528C9EE3E70 (InputPositionCorrector_tCF23AF130F6DFC2147C5A591578CB80F6C6475C2* __this, InputEventPtr_tC2A58521C9AFB479CC88789D5E0797D817C721C0 ___ptr0, InputDevice_t8BCF67533E872A75779C24C93D1D7085B72D364B* ___device1, const RuntimeMethod* method) ;
// System.Void Unity.RenderStreaming.InputSystem.InputManager::QueueEvent(UnityEngine.InputSystem.LowLevel.InputEventPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputManager_QueueEvent_mE590BB70509448F1966D95DFB29F4988034FAC35 (InputManager_t57C115A76BE8B9259F24CF3980EF669C858CA071* __this, InputEventPtr_tC2A58521C9AFB479CC88789D5E0797D817C721C0 ___eventPtr0, const RuntimeMethod* method) ;
// System.Void Unity.RenderStreaming.InputPositionCorrector::set_inputRegion(UnityEngine.Rect)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void InputPositionCorrector_set_inputRegion_mE164B44E3B0C6507D5BE260A5C8824AE80817B23_inline (InputPositionCorrector_tCF23AF130F6DFC2147C5A591578CB80F6C6475C2* __this, Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D ___value0, const RuntimeMethod* method) ;
// System.Void Unity.RenderStreaming.InputPositionCorrector::set_outputRegion(UnityEngine.Rect)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void InputPositionCorrector_set_outputRegion_mABDE372C024DBC81C748484D0FCBD9FAC2EE275E_inline (InputPositionCorrector_tCF23AF130F6DFC2147C5A591578CB80F6C6475C2* __this, Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D ___value0, const RuntimeMethod* method) ;
// UnityEngine.InputSystem.LowLevel.InputEventListener UnityEngine.InputSystem.InputSystem::get_onEvent()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR InputEventListener_tB0B541BC249BB696401201CF9DCAB4DFA1462B1D InputSystem_get_onEvent_m69B71DB23BBEE4E244701D3A5A42D962C791AD18 (const RuntimeMethod* method) ;
// UnityEngine.InputSystem.LowLevel.InputEventListener UnityEngine.InputSystem.LowLevel.InputEventListener::op_Addition(UnityEngine.InputSystem.LowLevel.InputEventListener,System.Action`2<UnityEngine.InputSystem.LowLevel.InputEventPtr,UnityEngine.InputSystem.InputDevice>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR InputEventListener_tB0B541BC249BB696401201CF9DCAB4DFA1462B1D InputEventListener_op_Addition_m122B39C12D9ADEDFA730C3B3A0B2530AA23172A2 (InputEventListener_tB0B541BC249BB696401201CF9DCAB4DFA1462B1D ____0, Action_2_t4943DD8C32CAB983950535CEF3BABA85DF8C9AAA* ___callback1, const RuntimeMethod* method) ;
// System.Void UnityEngine.InputSystem.InputSystem::set_onEvent(UnityEngine.InputSystem.LowLevel.InputEventListener)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputSystem_set_onEvent_m6B177A8A8F08BE00B5409F0C3136BE803316A4B5 (InputEventListener_tB0B541BC249BB696401201CF9DCAB4DFA1462B1D ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.InputSystem.InputSystem::add_onDeviceChange(System.Action`2<UnityEngine.InputSystem.InputDevice,UnityEngine.InputSystem.InputDeviceChange>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputSystem_add_onDeviceChange_m029F558DF1CF7BE38BCC050CC4FBD6A9EA2C2C35 (Action_2_tB79528C85CFEF7DFF52C575DDAA398D2FE6BC333* ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.InputSystem.InputSystem::add_onLayoutChange(System.Action`2<System.String,UnityEngine.InputSystem.InputControlLayoutChange>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputSystem_add_onLayoutChange_m25E8AC2E8593344CC7F04CF5975B398739C4A6D1 (Action_2_t4797B88C63509F2EE4385D6DABE6A4B5AD5393F7* ___value0, const RuntimeMethod* method) ;
// System.Void Unity.RenderStreaming.InputSystem.Sender::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Sender_Dispose_mBED183044DB644BF5C8A7B4CDC9AC190D7F135F4 (Sender_t234F1DB016429A45DA2E9C7DF59EA1A57E1A83BF* __this, const RuntimeMethod* method) ;
// UnityEngine.InputSystem.LowLevel.InputEventListener UnityEngine.InputSystem.LowLevel.InputEventListener::op_Subtraction(UnityEngine.InputSystem.LowLevel.InputEventListener,System.Action`2<UnityEngine.InputSystem.LowLevel.InputEventPtr,UnityEngine.InputSystem.InputDevice>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR InputEventListener_tB0B541BC249BB696401201CF9DCAB4DFA1462B1D InputEventListener_op_Subtraction_m64F5559B543948C414AC7A0D3E7BA1FE95743328 (InputEventListener_tB0B541BC249BB696401201CF9DCAB4DFA1462B1D ____0, Action_2_t4943DD8C32CAB983950535CEF3BABA85DF8C9AAA* ___callback1, const RuntimeMethod* method) ;
// System.Void UnityEngine.InputSystem.InputSystem::remove_onDeviceChange(System.Action`2<UnityEngine.InputSystem.InputDevice,UnityEngine.InputSystem.InputDeviceChange>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputSystem_remove_onDeviceChange_m772CFE26B5D7C6DBBC8F8DBA78E327EC4CF6C930 (Action_2_tB79528C85CFEF7DFF52C575DDAA398D2FE6BC333* ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.InputSystem.InputSystem::remove_onLayoutChange(System.Action`2<System.String,UnityEngine.InputSystem.InputControlLayoutChange>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputSystem_remove_onLayoutChange_m6BB5F1037542DD9FA9669EB46926DEB9A7A3E2BF (Action_2_t4797B88C63509F2EE4385D6DABE6A4B5AD5393F7* ___value0, const RuntimeMethod* method) ;
// System.Boolean Unity.RenderStreaming.InputSystem.Sender::get_EnableInputPositionCorrection()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Sender_get_EnableInputPositionCorrection_mA4AAA72D90EDB6CBAA9F67243CF4B66ECD23BEA6_inline (Sender_t234F1DB016429A45DA2E9C7DF59EA1A57E1A83BF* __this, const RuntimeMethod* method) ;
// System.Void System.Action`2<UnityEngine.InputSystem.LowLevel.InputEventPtr,UnityEngine.InputSystem.InputDevice>::Invoke(T1,T2)
inline void Action_2_Invoke_m30462DCFDF7C828AF25E69DAA1082FB00F0E2271_inline (Action_2_t4943DD8C32CAB983950535CEF3BABA85DF8C9AAA* __this, InputEventPtr_tC2A58521C9AFB479CC88789D5E0797D817C721C0 ___arg10, InputDevice_t8BCF67533E872A75779C24C93D1D7085B72D364B* ___arg21, const RuntimeMethod* method)
{
	((  void (*) (Action_2_t4943DD8C32CAB983950535CEF3BABA85DF8C9AAA*, InputEventPtr_tC2A58521C9AFB479CC88789D5E0797D817C721C0, InputDevice_t8BCF67533E872A75779C24C93D1D7085B72D364B*, const RuntimeMethod*))Action_2_Invoke_m5CA7C522C42D2A1120BA23ED9913909EF92762C5_gshared_inline)(__this, ___arg10, ___arg21, method);
}
// Unity.WebRTC.RTCDataChannelState Unity.WebRTC.RTCDataChannel::get_ReadyState()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t RTCDataChannel_get_ReadyState_m5AB04041F02762757A4A4FA7821BF3E769666914 (RTCDataChannel_t249C16A38FD2A994D1A45381523F701A49BF1A77* __this, const RuntimeMethod* method) ;
// System.Byte[] Unity.RenderStreaming.InputSystem.MessageSerializer::Serialize(Unity.RenderStreaming.InputSystem.InputRemoting/Message&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* MessageSerializer_Serialize_mEA6EC696FCA9221DCC867E8FFFEB3D885E03BD0A (Message_tD936DB9861B7DBCDC7BCEB495736886D5EFAD801* ___message0, const RuntimeMethod* method) ;
// System.Void Unity.WebRTC.RTCDataChannel::Send(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RTCDataChannel_Send_mFA9B137699242DF5272FFBE361A1860FD91210C1 (RTCDataChannel_t249C16A38FD2A994D1A45381523F701A49BF1A77* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___msg0, const RuntimeMethod* method) ;
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Unity.RenderStreaming.Signaling.HttpSignaling/<>c::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__cctor_m1D75108E42450DAAD0D7C077C768A5190FD9EF7E (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_tBCC97D6F6D28AE3DF8C0949CEC44C2E00DD50B61_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CU3Ec_tBCC97D6F6D28AE3DF8C0949CEC44C2E00DD50B61* L_0 = (U3CU3Ec_tBCC97D6F6D28AE3DF8C0949CEC44C2E00DD50B61*)il2cpp_codegen_object_new(U3CU3Ec_tBCC97D6F6D28AE3DF8C0949CEC44C2E00DD50B61_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CU3Ec__ctor_mA6E769EDF32E71BA44BDF9F4FD17DF627A97ADAA(L_0, NULL);
		((U3CU3Ec_tBCC97D6F6D28AE3DF8C0949CEC44C2E00DD50B61_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tBCC97D6F6D28AE3DF8C0949CEC44C2E00DD50B61_il2cpp_TypeInfo_var))->___U3CU3E9_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3Ec_tBCC97D6F6D28AE3DF8C0949CEC44C2E00DD50B61_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tBCC97D6F6D28AE3DF8C0949CEC44C2E00DD50B61_il2cpp_TypeInfo_var))->___U3CU3E9_0), (void*)L_0);
		return;
	}
}
// System.Void Unity.RenderStreaming.Signaling.HttpSignaling/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_mA6E769EDF32E71BA44BDF9F4FD17DF627A97ADAA (U3CU3Ec_tBCC97D6F6D28AE3DF8C0949CEC44C2E00DD50B61* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Boolean Unity.RenderStreaming.Signaling.HttpSignaling/<>c::<.ctor>b__14_0(System.Object,System.Security.Cryptography.X509Certificates.X509Certificate,System.Security.Cryptography.X509Certificates.X509Chain,System.Net.Security.SslPolicyErrors)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CU3Ec_U3C_ctorU3Eb__14_0_m9D63569DA89ACCFAC0F225D1494798F7ED95AFC2 (U3CU3Ec_tBCC97D6F6D28AE3DF8C0949CEC44C2E00DD50B61* __this, RuntimeObject* ___sender0, X509Certificate_t966CC553AF25AE7991F5B4C2AACBCF6C66C8F9C4* ___certificate1, X509Chain_t2E7F88A4C97CAB82AF938F13A11354A0475469E5* ___chain2, int32_t ___errors3, const RuntimeMethod* method) 
{
	{
		// (sender, certificate, chain, errors) => true;
		return (bool)1;
	}
}
// System.String Unity.RenderStreaming.Signaling.HttpSignaling/<>c::<HTTPGetConnections>b__50_0(Unity.RenderStreaming.DescData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* U3CU3Ec_U3CHTTPGetConnectionsU3Eb__50_0_m48083EBDB76B2C38AEA4803160B941D3E45EE2D1 (U3CU3Ec_tBCC97D6F6D28AE3DF8C0949CEC44C2E00DD50B61* __this, DescData_tA4EB7C7305FA906F4E120329023F8C778EFCB1B8* ___x0, const RuntimeMethod* method) 
{
	{
		// foreach (var deleted in m_connection.Except(list.connections.Select(x => x.connectionId)).ToList())
		DescData_tA4EB7C7305FA906F4E120329023F8C778EFCB1B8* L_0 = ___x0;
		NullCheck(L_0);
		String_t* L_1 = L_0->___connectionId_0;
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
// System.Void Unity.RenderStreaming.Signaling.HttpSignaling/<>c__DisplayClass48_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass48_0__ctor_m92FA5882E90793434498B6A989324B92E262E795 (U3CU3Ec__DisplayClass48_0_tF5D23F982C5E31486AD35E6BF7247BFB3290462E* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Void Unity.RenderStreaming.Signaling.HttpSignaling/<>c__DisplayClass48_0::<HTTPConnect>b__0(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass48_0_U3CHTTPConnectU3Eb__0_m9114171A3465E5BD9BCD20EFA6414978E41D9FD5 (U3CU3Ec__DisplayClass48_0_tF5D23F982C5E31486AD35E6BF7247BFB3290462E* __this, RuntimeObject* ___d0, const RuntimeMethod* method) 
{
	OnConnectHandler_tF4A8A1EC5ED4BCEAB7EA0D252D6586EC660ABEB3* G_B2_0 = NULL;
	OnConnectHandler_tF4A8A1EC5ED4BCEAB7EA0D252D6586EC660ABEB3* G_B1_0 = NULL;
	{
		// m_mainThreadContext.Post(d => OnCreateConnection?.Invoke(this, data.connectionId, data.polite), null);
		HttpSignaling_t8AD4F9C09704A5FB300F225484FF569B5FDE1B9F* L_0 = __this->___U3CU3E4__this_0;
		NullCheck(L_0);
		OnConnectHandler_tF4A8A1EC5ED4BCEAB7EA0D252D6586EC660ABEB3* L_1 = L_0->___OnCreateConnection_11;
		OnConnectHandler_tF4A8A1EC5ED4BCEAB7EA0D252D6586EC660ABEB3* L_2 = L_1;
		G_B1_0 = L_2;
		if (L_2)
		{
			G_B2_0 = L_2;
			goto IL_0011;
		}
	}
	{
		goto IL_0033;
	}

IL_0011:
	{
		HttpSignaling_t8AD4F9C09704A5FB300F225484FF569B5FDE1B9F* L_3 = __this->___U3CU3E4__this_0;
		CreateConnectionResData_tD662C466168AFA244D176C16A96FC170D132825E* L_4 = __this->___data_1;
		NullCheck(L_4);
		String_t* L_5 = L_4->___connectionId_0;
		CreateConnectionResData_tD662C466168AFA244D176C16A96FC170D132825E* L_6 = __this->___data_1;
		NullCheck(L_6);
		bool L_7 = L_6->___polite_1;
		NullCheck(G_B2_0);
		OnConnectHandler_Invoke_mC22B99AF330E1CA75BBE54A22E583F9E2BD5DB8A_inline(G_B2_0, L_3, L_5, L_7, NULL);
	}

IL_0033:
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
// System.Void Unity.RenderStreaming.Signaling.HttpSignaling/<>c__DisplayClass49_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass49_0__ctor_mE4E820FD34B1A369FF351872500D7E9075D9A43A (U3CU3Ec__DisplayClass49_0_tD14934A107086CFADD957BC657064FA93C30784D* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Void Unity.RenderStreaming.Signaling.HttpSignaling/<>c__DisplayClass49_0::<HTTPDisonnect>b__0(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass49_0_U3CHTTPDisonnectU3Eb__0_m7910C07395B756FFC6166430303B24A4813A9C5E (U3CU3Ec__DisplayClass49_0_tD14934A107086CFADD957BC657064FA93C30784D* __this, RuntimeObject* ___d0, const RuntimeMethod* method) 
{
	OnDisconnectHandler_tB1C80CDBF420D2C6F13BE728865E1912E08383C9* G_B2_0 = NULL;
	OnDisconnectHandler_tB1C80CDBF420D2C6F13BE728865E1912E08383C9* G_B1_0 = NULL;
	{
		// m_mainThreadContext.Post(d => OnDestroyConnection?.Invoke(this, connectionId), null);
		HttpSignaling_t8AD4F9C09704A5FB300F225484FF569B5FDE1B9F* L_0 = __this->___U3CU3E4__this_0;
		NullCheck(L_0);
		OnDisconnectHandler_tB1C80CDBF420D2C6F13BE728865E1912E08383C9* L_1 = L_0->___OnDestroyConnection_12;
		OnDisconnectHandler_tB1C80CDBF420D2C6F13BE728865E1912E08383C9* L_2 = L_1;
		G_B1_0 = L_2;
		if (L_2)
		{
			G_B2_0 = L_2;
			goto IL_0011;
		}
	}
	{
		goto IL_0023;
	}

IL_0011:
	{
		HttpSignaling_t8AD4F9C09704A5FB300F225484FF569B5FDE1B9F* L_3 = __this->___U3CU3E4__this_0;
		String_t* L_4 = __this->___connectionId_1;
		NullCheck(G_B2_0);
		OnDisconnectHandler_Invoke_m5EA3C0685EA9F8A3B958CE439230A7D3F4E0DA8D_inline(G_B2_0, L_3, L_4, NULL);
	}

IL_0023:
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
// System.Void Unity.RenderStreaming.Signaling.HttpSignaling/<>c__DisplayClass50_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass50_0__ctor_m1199387BEF1B4D43770151A7AFE51EE2405EAABD (U3CU3Ec__DisplayClass50_0_t7596E60ADDA83F9C3C2E3A4941593D6E78455848* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Void Unity.RenderStreaming.Signaling.HttpSignaling/<>c__DisplayClass50_0::<HTTPGetConnections>b__1(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass50_0_U3CHTTPGetConnectionsU3Eb__1_m4A8373E20BC6DD14DFD255998B9BAB7CCE1360B7 (U3CU3Ec__DisplayClass50_0_t7596E60ADDA83F9C3C2E3A4941593D6E78455848* __this, RuntimeObject* ___d0, const RuntimeMethod* method) 
{
	OnDisconnectHandler_tB1C80CDBF420D2C6F13BE728865E1912E08383C9* G_B2_0 = NULL;
	OnDisconnectHandler_tB1C80CDBF420D2C6F13BE728865E1912E08383C9* G_B1_0 = NULL;
	{
		// m_mainThreadContext.Post(d => OnDestroyConnection?.Invoke(this, deleted), null);
		HttpSignaling_t8AD4F9C09704A5FB300F225484FF569B5FDE1B9F* L_0 = __this->___U3CU3E4__this_1;
		NullCheck(L_0);
		OnDisconnectHandler_tB1C80CDBF420D2C6F13BE728865E1912E08383C9* L_1 = L_0->___OnDestroyConnection_12;
		OnDisconnectHandler_tB1C80CDBF420D2C6F13BE728865E1912E08383C9* L_2 = L_1;
		G_B1_0 = L_2;
		if (L_2)
		{
			G_B2_0 = L_2;
			goto IL_0011;
		}
	}
	{
		goto IL_0023;
	}

IL_0011:
	{
		HttpSignaling_t8AD4F9C09704A5FB300F225484FF569B5FDE1B9F* L_3 = __this->___U3CU3E4__this_1;
		String_t* L_4 = __this->___deleted_0;
		NullCheck(G_B2_0);
		OnDisconnectHandler_Invoke_m5EA3C0685EA9F8A3B958CE439230A7D3F4E0DA8D_inline(G_B2_0, L_3, L_4, NULL);
	}

IL_0023:
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
// System.Void Unity.RenderStreaming.Signaling.HttpSignaling/<>c__DisplayClass51_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass51_0__ctor_m130C9AD230D9B86EB55A353FE2B50CCD39745C0D (U3CU3Ec__DisplayClass51_0_t9E91BBBBB3444FD00DCD137FE577EA1C12DC63DA* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Void Unity.RenderStreaming.Signaling.HttpSignaling/<>c__DisplayClass51_0::<HTTPGetOffers>b__0(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass51_0_U3CHTTPGetOffersU3Eb__0_m607C2B7C99460ED246C8A43AEC8B5404E04362A8 (U3CU3Ec__DisplayClass51_0_t9E91BBBBB3444FD00DCD137FE577EA1C12DC63DA* __this, RuntimeObject* ___d0, const RuntimeMethod* method) 
{
	OnOfferHandler_t741D2F8DBDFDA8C010DBB5276E8D5CC35569FF86* G_B2_0 = NULL;
	OnOfferHandler_t741D2F8DBDFDA8C010DBB5276E8D5CC35569FF86* G_B1_0 = NULL;
	{
		// m_mainThreadContext.Post(d => OnOffer?.Invoke(this, offer), null);
		HttpSignaling_t8AD4F9C09704A5FB300F225484FF569B5FDE1B9F* L_0 = __this->___U3CU3E4__this_1;
		NullCheck(L_0);
		OnOfferHandler_t741D2F8DBDFDA8C010DBB5276E8D5CC35569FF86* L_1 = L_0->___OnOffer_13;
		OnOfferHandler_t741D2F8DBDFDA8C010DBB5276E8D5CC35569FF86* L_2 = L_1;
		G_B1_0 = L_2;
		if (L_2)
		{
			G_B2_0 = L_2;
			goto IL_0011;
		}
	}
	{
		goto IL_0023;
	}

IL_0011:
	{
		HttpSignaling_t8AD4F9C09704A5FB300F225484FF569B5FDE1B9F* L_3 = __this->___U3CU3E4__this_1;
		DescData_tA4EB7C7305FA906F4E120329023F8C778EFCB1B8* L_4 = __this->___offer_0;
		NullCheck(G_B2_0);
		OnOfferHandler_Invoke_m0DE74F0577369C952A9B36ABD622FA356FA853F9_inline(G_B2_0, L_3, L_4, NULL);
	}

IL_0023:
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
// System.Void Unity.RenderStreaming.Signaling.HttpSignaling/<>c__DisplayClass52_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass52_0__ctor_m8CA8C8932261CB387DE31E6C27C7B0246C7971A9 (U3CU3Ec__DisplayClass52_0_tFC89C3DCEBE64E8E91972D7E5BD90583A4345116* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Void Unity.RenderStreaming.Signaling.HttpSignaling/<>c__DisplayClass52_0::<HTTPGetAnswers>b__0(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass52_0_U3CHTTPGetAnswersU3Eb__0_mB9EEE9A1D2DFD9D39FCB37A5781C99F1164DE24E (U3CU3Ec__DisplayClass52_0_tFC89C3DCEBE64E8E91972D7E5BD90583A4345116* __this, RuntimeObject* ___d0, const RuntimeMethod* method) 
{
	OnAnswerHandler_tBF64DA7C3AB41984E338F75F069C194C8F0A1A19* G_B2_0 = NULL;
	OnAnswerHandler_tBF64DA7C3AB41984E338F75F069C194C8F0A1A19* G_B1_0 = NULL;
	{
		// m_mainThreadContext.Post(d => OnAnswer?.Invoke(this, answer), null);
		HttpSignaling_t8AD4F9C09704A5FB300F225484FF569B5FDE1B9F* L_0 = __this->___U3CU3E4__this_1;
		NullCheck(L_0);
		OnAnswerHandler_tBF64DA7C3AB41984E338F75F069C194C8F0A1A19* L_1 = L_0->___OnAnswer_14;
		OnAnswerHandler_tBF64DA7C3AB41984E338F75F069C194C8F0A1A19* L_2 = L_1;
		G_B1_0 = L_2;
		if (L_2)
		{
			G_B2_0 = L_2;
			goto IL_0011;
		}
	}
	{
		goto IL_0023;
	}

IL_0011:
	{
		HttpSignaling_t8AD4F9C09704A5FB300F225484FF569B5FDE1B9F* L_3 = __this->___U3CU3E4__this_1;
		DescData_tA4EB7C7305FA906F4E120329023F8C778EFCB1B8* L_4 = __this->___answer_0;
		NullCheck(G_B2_0);
		OnAnswerHandler_Invoke_m222E27983168292A4C07EA7A122B9D3C6A2BE162_inline(G_B2_0, L_3, L_4, NULL);
	}

IL_0023:
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
// System.Void Unity.RenderStreaming.Signaling.HttpSignaling/<>c__DisplayClass53_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass53_0__ctor_m4CBD8DE885665B9CA970387F4C10594D83549466 (U3CU3Ec__DisplayClass53_0_t94FCE6370518C0A6C8736E34867A0BD2903970BD* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Void Unity.RenderStreaming.Signaling.HttpSignaling/<>c__DisplayClass53_0::<HTTPGetCandidates>b__0(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass53_0_U3CHTTPGetCandidatesU3Eb__0_mCFC8765262026F52EAA5507067F7049D72DC81C9 (U3CU3Ec__DisplayClass53_0_t94FCE6370518C0A6C8736E34867A0BD2903970BD* __this, RuntimeObject* ___d0, const RuntimeMethod* method) 
{
	OnIceCandidateHandler_tB82627B771BEE335DBC8D44AEC93B2AEC8B1E139* G_B2_0 = NULL;
	OnIceCandidateHandler_tB82627B771BEE335DBC8D44AEC93B2AEC8B1E139* G_B1_0 = NULL;
	{
		// m_mainThreadContext.Post(d => OnIceCandidate?.Invoke(this, candidate), null);
		HttpSignaling_t8AD4F9C09704A5FB300F225484FF569B5FDE1B9F* L_0 = __this->___U3CU3E4__this_1;
		NullCheck(L_0);
		OnIceCandidateHandler_tB82627B771BEE335DBC8D44AEC93B2AEC8B1E139* L_1 = L_0->___OnIceCandidate_15;
		OnIceCandidateHandler_tB82627B771BEE335DBC8D44AEC93B2AEC8B1E139* L_2 = L_1;
		G_B1_0 = L_2;
		if (L_2)
		{
			G_B2_0 = L_2;
			goto IL_0011;
		}
	}
	{
		goto IL_0023;
	}

IL_0011:
	{
		HttpSignaling_t8AD4F9C09704A5FB300F225484FF569B5FDE1B9F* L_3 = __this->___U3CU3E4__this_1;
		CandidateData_t37575B19A1050FDC713708C9C0CBD2EB498F2567* L_4 = __this->___candidate_0;
		NullCheck(G_B2_0);
		OnIceCandidateHandler_Invoke_m799463020BA8E3CF851221DA9D84AA33AF37F621_inline(G_B2_0, L_3, L_4, NULL);
	}

IL_0023:
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
void OnStartHandler_Invoke_m69E91DABD69A3AB2775AD48F29C1B05748F238E6_Multicast(OnStartHandler_t295FEA9A47BD02A9B36195C055961D94C233A56F* __this, RuntimeObject* ___signaling0, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		OnStartHandler_t295FEA9A47BD02A9B36195C055961D94C233A56F* currentDelegate = reinterpret_cast<OnStartHandler_t295FEA9A47BD02A9B36195C055961D94C233A56F*>(delegatesToInvoke[i]);
		typedef void (*FunctionPointerType) (RuntimeObject*, RuntimeObject*, const RuntimeMethod*);
		((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, ___signaling0, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
}
void OnStartHandler_Invoke_m69E91DABD69A3AB2775AD48F29C1B05748F238E6_Open(OnStartHandler_t295FEA9A47BD02A9B36195C055961D94C233A56F* __this, RuntimeObject* ___signaling0, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (RuntimeObject*, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___signaling0, method);
}
void OnStartHandler_Invoke_m69E91DABD69A3AB2775AD48F29C1B05748F238E6_OpenStaticInvoker(OnStartHandler_t295FEA9A47BD02A9B36195C055961D94C233A56F* __this, RuntimeObject* ___signaling0, const RuntimeMethod* method)
{
	InvokerActionInvoker1< RuntimeObject* >::Invoke(__this->___method_ptr_0, method, NULL, ___signaling0);
}
void OnStartHandler_Invoke_m69E91DABD69A3AB2775AD48F29C1B05748F238E6_ClosedStaticInvoker(OnStartHandler_t295FEA9A47BD02A9B36195C055961D94C233A56F* __this, RuntimeObject* ___signaling0, const RuntimeMethod* method)
{
	InvokerActionInvoker2< RuntimeObject*, RuntimeObject* >::Invoke(__this->___method_ptr_0, method, NULL, __this->___m_target_2, ___signaling0);
}
void OnStartHandler_Invoke_m69E91DABD69A3AB2775AD48F29C1B05748F238E6_OpenVirtual(OnStartHandler_t295FEA9A47BD02A9B36195C055961D94C233A56F* __this, RuntimeObject* ___signaling0, const RuntimeMethod* method)
{
	VirtualActionInvoker0::Invoke(il2cpp_codegen_method_get_slot(method), ___signaling0);
}
void OnStartHandler_Invoke_m69E91DABD69A3AB2775AD48F29C1B05748F238E6_OpenInterface(OnStartHandler_t295FEA9A47BD02A9B36195C055961D94C233A56F* __this, RuntimeObject* ___signaling0, const RuntimeMethod* method)
{
	InterfaceActionInvoker0::Invoke(il2cpp_codegen_method_get_slot(method), il2cpp_codegen_method_get_declaring_type(method), ___signaling0);
}
void OnStartHandler_Invoke_m69E91DABD69A3AB2775AD48F29C1B05748F238E6_OpenGenericVirtual(OnStartHandler_t295FEA9A47BD02A9B36195C055961D94C233A56F* __this, RuntimeObject* ___signaling0, const RuntimeMethod* method)
{
	GenericVirtualActionInvoker0::Invoke(method, ___signaling0);
}
void OnStartHandler_Invoke_m69E91DABD69A3AB2775AD48F29C1B05748F238E6_OpenGenericInterface(OnStartHandler_t295FEA9A47BD02A9B36195C055961D94C233A56F* __this, RuntimeObject* ___signaling0, const RuntimeMethod* method)
{
	GenericInterfaceActionInvoker0::Invoke(method, ___signaling0);
}
// System.Void Unity.RenderStreaming.Signaling.OnStartHandler::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OnStartHandler__ctor_m798117A110AC34B4DFBFAF516C54BFEA69E47929 (OnStartHandler_t295FEA9A47BD02A9B36195C055961D94C233A56F* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) 
{
	__this->___method_ptr_0 = il2cpp_codegen_get_virtual_call_method_pointer((RuntimeMethod*)___method1);
	__this->___method_3 = ___method1;
	__this->___m_target_2 = ___object0;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target_2), (void*)___object0);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___method1);
	__this->___method_code_6 = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___method1))
	{
		bool isOpen = parameterCount == 1;
		if (il2cpp_codegen_call_method_via_invoker((RuntimeMethod*)___method1))
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&OnStartHandler_Invoke_m69E91DABD69A3AB2775AD48F29C1B05748F238E6_OpenStaticInvoker;
			else
				__this->___invoke_impl_1 = (intptr_t)&OnStartHandler_Invoke_m69E91DABD69A3AB2775AD48F29C1B05748F238E6_ClosedStaticInvoker;
		else
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&OnStartHandler_Invoke_m69E91DABD69A3AB2775AD48F29C1B05748F238E6_Open;
			else
				{
					__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
					__this->___method_code_6 = (intptr_t)__this->___m_target_2;
				}
	}
	else
	{
		bool isOpen = parameterCount == 0;
		if (isOpen)
		{
			if (__this->___method_is_virtual_12)
			{
				if (il2cpp_codegen_method_is_generic_instance_method((RuntimeMethod*)___method1))
					if (il2cpp_codegen_method_is_interface_method((RuntimeMethod*)___method1))
						__this->___invoke_impl_1 = (intptr_t)&OnStartHandler_Invoke_m69E91DABD69A3AB2775AD48F29C1B05748F238E6_OpenGenericInterface;
					else
						__this->___invoke_impl_1 = (intptr_t)&OnStartHandler_Invoke_m69E91DABD69A3AB2775AD48F29C1B05748F238E6_OpenGenericVirtual;
				else
					if (il2cpp_codegen_method_is_interface_method((RuntimeMethod*)___method1))
						__this->___invoke_impl_1 = (intptr_t)&OnStartHandler_Invoke_m69E91DABD69A3AB2775AD48F29C1B05748F238E6_OpenInterface;
					else
						__this->___invoke_impl_1 = (intptr_t)&OnStartHandler_Invoke_m69E91DABD69A3AB2775AD48F29C1B05748F238E6_OpenVirtual;
			}
			else
			{
				__this->___invoke_impl_1 = (intptr_t)&OnStartHandler_Invoke_m69E91DABD69A3AB2775AD48F29C1B05748F238E6_Open;
			}
		}
		else
		{
			__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
			__this->___method_code_6 = (intptr_t)__this->___m_target_2;
		}
	}
	__this->___extra_arg_5 = (intptr_t)&OnStartHandler_Invoke_m69E91DABD69A3AB2775AD48F29C1B05748F238E6_Multicast;
}
// System.Void Unity.RenderStreaming.Signaling.OnStartHandler::Invoke(Unity.RenderStreaming.Signaling.ISignaling)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OnStartHandler_Invoke_m69E91DABD69A3AB2775AD48F29C1B05748F238E6 (OnStartHandler_t295FEA9A47BD02A9B36195C055961D94C233A56F* __this, RuntimeObject* ___signaling0, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, RuntimeObject*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___signaling0, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
// System.IAsyncResult Unity.RenderStreaming.Signaling.OnStartHandler::BeginInvoke(Unity.RenderStreaming.Signaling.ISignaling,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* OnStartHandler_BeginInvoke_m531791FE1F410133264F0E41CE0D83305E544B01 (OnStartHandler_t295FEA9A47BD02A9B36195C055961D94C233A56F* __this, RuntimeObject* ___signaling0, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___callback1, RuntimeObject* ___object2, const RuntimeMethod* method) 
{
	void *__d_args[2] = {0};
	__d_args[0] = ___signaling0;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback1, (RuntimeObject*)___object2);
}
// System.Void Unity.RenderStreaming.Signaling.OnStartHandler::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OnStartHandler_EndInvoke_m4A46556C8DC8FA05FE97E632E569DC16F642C6A5 (OnStartHandler_t295FEA9A47BD02A9B36195C055961D94C233A56F* __this, RuntimeObject* ___result0, const RuntimeMethod* method) 
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
void OnConnectHandler_Invoke_mC22B99AF330E1CA75BBE54A22E583F9E2BD5DB8A_Multicast(OnConnectHandler_tF4A8A1EC5ED4BCEAB7EA0D252D6586EC660ABEB3* __this, RuntimeObject* ___signaling0, String_t* ___connectionId1, bool ___polite2, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		OnConnectHandler_tF4A8A1EC5ED4BCEAB7EA0D252D6586EC660ABEB3* currentDelegate = reinterpret_cast<OnConnectHandler_tF4A8A1EC5ED4BCEAB7EA0D252D6586EC660ABEB3*>(delegatesToInvoke[i]);
		typedef void (*FunctionPointerType) (RuntimeObject*, RuntimeObject*, String_t*, bool, const RuntimeMethod*);
		((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, ___signaling0, ___connectionId1, ___polite2, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
}
void OnConnectHandler_Invoke_mC22B99AF330E1CA75BBE54A22E583F9E2BD5DB8A_Open(OnConnectHandler_tF4A8A1EC5ED4BCEAB7EA0D252D6586EC660ABEB3* __this, RuntimeObject* ___signaling0, String_t* ___connectionId1, bool ___polite2, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (RuntimeObject*, String_t*, bool, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___signaling0, ___connectionId1, ___polite2, method);
}
void OnConnectHandler_Invoke_mC22B99AF330E1CA75BBE54A22E583F9E2BD5DB8A_OpenStaticInvoker(OnConnectHandler_tF4A8A1EC5ED4BCEAB7EA0D252D6586EC660ABEB3* __this, RuntimeObject* ___signaling0, String_t* ___connectionId1, bool ___polite2, const RuntimeMethod* method)
{
	InvokerActionInvoker3< RuntimeObject*, String_t*, bool >::Invoke(__this->___method_ptr_0, method, NULL, ___signaling0, ___connectionId1, ___polite2);
}
void OnConnectHandler_Invoke_mC22B99AF330E1CA75BBE54A22E583F9E2BD5DB8A_ClosedStaticInvoker(OnConnectHandler_tF4A8A1EC5ED4BCEAB7EA0D252D6586EC660ABEB3* __this, RuntimeObject* ___signaling0, String_t* ___connectionId1, bool ___polite2, const RuntimeMethod* method)
{
	InvokerActionInvoker4< RuntimeObject*, RuntimeObject*, String_t*, bool >::Invoke(__this->___method_ptr_0, method, NULL, __this->___m_target_2, ___signaling0, ___connectionId1, ___polite2);
}
void OnConnectHandler_Invoke_mC22B99AF330E1CA75BBE54A22E583F9E2BD5DB8A_OpenVirtual(OnConnectHandler_tF4A8A1EC5ED4BCEAB7EA0D252D6586EC660ABEB3* __this, RuntimeObject* ___signaling0, String_t* ___connectionId1, bool ___polite2, const RuntimeMethod* method)
{
	VirtualActionInvoker2< String_t*, bool >::Invoke(il2cpp_codegen_method_get_slot(method), ___signaling0, ___connectionId1, ___polite2);
}
void OnConnectHandler_Invoke_mC22B99AF330E1CA75BBE54A22E583F9E2BD5DB8A_OpenInterface(OnConnectHandler_tF4A8A1EC5ED4BCEAB7EA0D252D6586EC660ABEB3* __this, RuntimeObject* ___signaling0, String_t* ___connectionId1, bool ___polite2, const RuntimeMethod* method)
{
	InterfaceActionInvoker2< String_t*, bool >::Invoke(il2cpp_codegen_method_get_slot(method), il2cpp_codegen_method_get_declaring_type(method), ___signaling0, ___connectionId1, ___polite2);
}
void OnConnectHandler_Invoke_mC22B99AF330E1CA75BBE54A22E583F9E2BD5DB8A_OpenGenericVirtual(OnConnectHandler_tF4A8A1EC5ED4BCEAB7EA0D252D6586EC660ABEB3* __this, RuntimeObject* ___signaling0, String_t* ___connectionId1, bool ___polite2, const RuntimeMethod* method)
{
	GenericVirtualActionInvoker2< String_t*, bool >::Invoke(method, ___signaling0, ___connectionId1, ___polite2);
}
void OnConnectHandler_Invoke_mC22B99AF330E1CA75BBE54A22E583F9E2BD5DB8A_OpenGenericInterface(OnConnectHandler_tF4A8A1EC5ED4BCEAB7EA0D252D6586EC660ABEB3* __this, RuntimeObject* ___signaling0, String_t* ___connectionId1, bool ___polite2, const RuntimeMethod* method)
{
	GenericInterfaceActionInvoker2< String_t*, bool >::Invoke(method, ___signaling0, ___connectionId1, ___polite2);
}
// System.Void Unity.RenderStreaming.Signaling.OnConnectHandler::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OnConnectHandler__ctor_m6E7D7A56D3A59DC7B2716F4D5DFCEF211535D799 (OnConnectHandler_tF4A8A1EC5ED4BCEAB7EA0D252D6586EC660ABEB3* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) 
{
	__this->___method_ptr_0 = il2cpp_codegen_get_virtual_call_method_pointer((RuntimeMethod*)___method1);
	__this->___method_3 = ___method1;
	__this->___m_target_2 = ___object0;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target_2), (void*)___object0);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___method1);
	__this->___method_code_6 = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___method1))
	{
		bool isOpen = parameterCount == 3;
		if (il2cpp_codegen_call_method_via_invoker((RuntimeMethod*)___method1))
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&OnConnectHandler_Invoke_mC22B99AF330E1CA75BBE54A22E583F9E2BD5DB8A_OpenStaticInvoker;
			else
				__this->___invoke_impl_1 = (intptr_t)&OnConnectHandler_Invoke_mC22B99AF330E1CA75BBE54A22E583F9E2BD5DB8A_ClosedStaticInvoker;
		else
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&OnConnectHandler_Invoke_mC22B99AF330E1CA75BBE54A22E583F9E2BD5DB8A_Open;
			else
				{
					__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
					__this->___method_code_6 = (intptr_t)__this->___m_target_2;
				}
	}
	else
	{
		bool isOpen = parameterCount == 2;
		if (isOpen)
		{
			if (__this->___method_is_virtual_12)
			{
				if (il2cpp_codegen_method_is_generic_instance_method((RuntimeMethod*)___method1))
					if (il2cpp_codegen_method_is_interface_method((RuntimeMethod*)___method1))
						__this->___invoke_impl_1 = (intptr_t)&OnConnectHandler_Invoke_mC22B99AF330E1CA75BBE54A22E583F9E2BD5DB8A_OpenGenericInterface;
					else
						__this->___invoke_impl_1 = (intptr_t)&OnConnectHandler_Invoke_mC22B99AF330E1CA75BBE54A22E583F9E2BD5DB8A_OpenGenericVirtual;
				else
					if (il2cpp_codegen_method_is_interface_method((RuntimeMethod*)___method1))
						__this->___invoke_impl_1 = (intptr_t)&OnConnectHandler_Invoke_mC22B99AF330E1CA75BBE54A22E583F9E2BD5DB8A_OpenInterface;
					else
						__this->___invoke_impl_1 = (intptr_t)&OnConnectHandler_Invoke_mC22B99AF330E1CA75BBE54A22E583F9E2BD5DB8A_OpenVirtual;
			}
			else
			{
				__this->___invoke_impl_1 = (intptr_t)&OnConnectHandler_Invoke_mC22B99AF330E1CA75BBE54A22E583F9E2BD5DB8A_Open;
			}
		}
		else
		{
			__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
			__this->___method_code_6 = (intptr_t)__this->___m_target_2;
		}
	}
	__this->___extra_arg_5 = (intptr_t)&OnConnectHandler_Invoke_mC22B99AF330E1CA75BBE54A22E583F9E2BD5DB8A_Multicast;
}
// System.Void Unity.RenderStreaming.Signaling.OnConnectHandler::Invoke(Unity.RenderStreaming.Signaling.ISignaling,System.String,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OnConnectHandler_Invoke_mC22B99AF330E1CA75BBE54A22E583F9E2BD5DB8A (OnConnectHandler_tF4A8A1EC5ED4BCEAB7EA0D252D6586EC660ABEB3* __this, RuntimeObject* ___signaling0, String_t* ___connectionId1, bool ___polite2, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, RuntimeObject*, String_t*, bool, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___signaling0, ___connectionId1, ___polite2, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
// System.IAsyncResult Unity.RenderStreaming.Signaling.OnConnectHandler::BeginInvoke(Unity.RenderStreaming.Signaling.ISignaling,System.String,System.Boolean,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* OnConnectHandler_BeginInvoke_mF1AD54913C76B38F8769E695E8C954E331CE5F3A (OnConnectHandler_tF4A8A1EC5ED4BCEAB7EA0D252D6586EC660ABEB3* __this, RuntimeObject* ___signaling0, String_t* ___connectionId1, bool ___polite2, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___callback3, RuntimeObject* ___object4, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[4] = {0};
	__d_args[0] = ___signaling0;
	__d_args[1] = ___connectionId1;
	__d_args[2] = Box(Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var, &___polite2);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback3, (RuntimeObject*)___object4);
}
// System.Void Unity.RenderStreaming.Signaling.OnConnectHandler::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OnConnectHandler_EndInvoke_m4195F164522C56230796939D00AB8B83AEAB2D58 (OnConnectHandler_tF4A8A1EC5ED4BCEAB7EA0D252D6586EC660ABEB3* __this, RuntimeObject* ___result0, const RuntimeMethod* method) 
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
void OnDisconnectHandler_Invoke_m5EA3C0685EA9F8A3B958CE439230A7D3F4E0DA8D_Multicast(OnDisconnectHandler_tB1C80CDBF420D2C6F13BE728865E1912E08383C9* __this, RuntimeObject* ___signaling0, String_t* ___connectionId1, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		OnDisconnectHandler_tB1C80CDBF420D2C6F13BE728865E1912E08383C9* currentDelegate = reinterpret_cast<OnDisconnectHandler_tB1C80CDBF420D2C6F13BE728865E1912E08383C9*>(delegatesToInvoke[i]);
		typedef void (*FunctionPointerType) (RuntimeObject*, RuntimeObject*, String_t*, const RuntimeMethod*);
		((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, ___signaling0, ___connectionId1, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
}
void OnDisconnectHandler_Invoke_m5EA3C0685EA9F8A3B958CE439230A7D3F4E0DA8D_Open(OnDisconnectHandler_tB1C80CDBF420D2C6F13BE728865E1912E08383C9* __this, RuntimeObject* ___signaling0, String_t* ___connectionId1, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (RuntimeObject*, String_t*, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___signaling0, ___connectionId1, method);
}
void OnDisconnectHandler_Invoke_m5EA3C0685EA9F8A3B958CE439230A7D3F4E0DA8D_OpenStaticInvoker(OnDisconnectHandler_tB1C80CDBF420D2C6F13BE728865E1912E08383C9* __this, RuntimeObject* ___signaling0, String_t* ___connectionId1, const RuntimeMethod* method)
{
	InvokerActionInvoker2< RuntimeObject*, String_t* >::Invoke(__this->___method_ptr_0, method, NULL, ___signaling0, ___connectionId1);
}
void OnDisconnectHandler_Invoke_m5EA3C0685EA9F8A3B958CE439230A7D3F4E0DA8D_ClosedStaticInvoker(OnDisconnectHandler_tB1C80CDBF420D2C6F13BE728865E1912E08383C9* __this, RuntimeObject* ___signaling0, String_t* ___connectionId1, const RuntimeMethod* method)
{
	InvokerActionInvoker3< RuntimeObject*, RuntimeObject*, String_t* >::Invoke(__this->___method_ptr_0, method, NULL, __this->___m_target_2, ___signaling0, ___connectionId1);
}
void OnDisconnectHandler_Invoke_m5EA3C0685EA9F8A3B958CE439230A7D3F4E0DA8D_OpenVirtual(OnDisconnectHandler_tB1C80CDBF420D2C6F13BE728865E1912E08383C9* __this, RuntimeObject* ___signaling0, String_t* ___connectionId1, const RuntimeMethod* method)
{
	VirtualActionInvoker1< String_t* >::Invoke(il2cpp_codegen_method_get_slot(method), ___signaling0, ___connectionId1);
}
void OnDisconnectHandler_Invoke_m5EA3C0685EA9F8A3B958CE439230A7D3F4E0DA8D_OpenInterface(OnDisconnectHandler_tB1C80CDBF420D2C6F13BE728865E1912E08383C9* __this, RuntimeObject* ___signaling0, String_t* ___connectionId1, const RuntimeMethod* method)
{
	InterfaceActionInvoker1< String_t* >::Invoke(il2cpp_codegen_method_get_slot(method), il2cpp_codegen_method_get_declaring_type(method), ___signaling0, ___connectionId1);
}
void OnDisconnectHandler_Invoke_m5EA3C0685EA9F8A3B958CE439230A7D3F4E0DA8D_OpenGenericVirtual(OnDisconnectHandler_tB1C80CDBF420D2C6F13BE728865E1912E08383C9* __this, RuntimeObject* ___signaling0, String_t* ___connectionId1, const RuntimeMethod* method)
{
	GenericVirtualActionInvoker1< String_t* >::Invoke(method, ___signaling0, ___connectionId1);
}
void OnDisconnectHandler_Invoke_m5EA3C0685EA9F8A3B958CE439230A7D3F4E0DA8D_OpenGenericInterface(OnDisconnectHandler_tB1C80CDBF420D2C6F13BE728865E1912E08383C9* __this, RuntimeObject* ___signaling0, String_t* ___connectionId1, const RuntimeMethod* method)
{
	GenericInterfaceActionInvoker1< String_t* >::Invoke(method, ___signaling0, ___connectionId1);
}
// System.Void Unity.RenderStreaming.Signaling.OnDisconnectHandler::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OnDisconnectHandler__ctor_m482BD8669260BDE6B681F8D7EC6FDD71ED7DB7F8 (OnDisconnectHandler_tB1C80CDBF420D2C6F13BE728865E1912E08383C9* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) 
{
	__this->___method_ptr_0 = il2cpp_codegen_get_virtual_call_method_pointer((RuntimeMethod*)___method1);
	__this->___method_3 = ___method1;
	__this->___m_target_2 = ___object0;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target_2), (void*)___object0);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___method1);
	__this->___method_code_6 = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___method1))
	{
		bool isOpen = parameterCount == 2;
		if (il2cpp_codegen_call_method_via_invoker((RuntimeMethod*)___method1))
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&OnDisconnectHandler_Invoke_m5EA3C0685EA9F8A3B958CE439230A7D3F4E0DA8D_OpenStaticInvoker;
			else
				__this->___invoke_impl_1 = (intptr_t)&OnDisconnectHandler_Invoke_m5EA3C0685EA9F8A3B958CE439230A7D3F4E0DA8D_ClosedStaticInvoker;
		else
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&OnDisconnectHandler_Invoke_m5EA3C0685EA9F8A3B958CE439230A7D3F4E0DA8D_Open;
			else
				{
					__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
					__this->___method_code_6 = (intptr_t)__this->___m_target_2;
				}
	}
	else
	{
		bool isOpen = parameterCount == 1;
		if (isOpen)
		{
			if (__this->___method_is_virtual_12)
			{
				if (il2cpp_codegen_method_is_generic_instance_method((RuntimeMethod*)___method1))
					if (il2cpp_codegen_method_is_interface_method((RuntimeMethod*)___method1))
						__this->___invoke_impl_1 = (intptr_t)&OnDisconnectHandler_Invoke_m5EA3C0685EA9F8A3B958CE439230A7D3F4E0DA8D_OpenGenericInterface;
					else
						__this->___invoke_impl_1 = (intptr_t)&OnDisconnectHandler_Invoke_m5EA3C0685EA9F8A3B958CE439230A7D3F4E0DA8D_OpenGenericVirtual;
				else
					if (il2cpp_codegen_method_is_interface_method((RuntimeMethod*)___method1))
						__this->___invoke_impl_1 = (intptr_t)&OnDisconnectHandler_Invoke_m5EA3C0685EA9F8A3B958CE439230A7D3F4E0DA8D_OpenInterface;
					else
						__this->___invoke_impl_1 = (intptr_t)&OnDisconnectHandler_Invoke_m5EA3C0685EA9F8A3B958CE439230A7D3F4E0DA8D_OpenVirtual;
			}
			else
			{
				__this->___invoke_impl_1 = (intptr_t)&OnDisconnectHandler_Invoke_m5EA3C0685EA9F8A3B958CE439230A7D3F4E0DA8D_Open;
			}
		}
		else
		{
			__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
			__this->___method_code_6 = (intptr_t)__this->___m_target_2;
		}
	}
	__this->___extra_arg_5 = (intptr_t)&OnDisconnectHandler_Invoke_m5EA3C0685EA9F8A3B958CE439230A7D3F4E0DA8D_Multicast;
}
// System.Void Unity.RenderStreaming.Signaling.OnDisconnectHandler::Invoke(Unity.RenderStreaming.Signaling.ISignaling,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OnDisconnectHandler_Invoke_m5EA3C0685EA9F8A3B958CE439230A7D3F4E0DA8D (OnDisconnectHandler_tB1C80CDBF420D2C6F13BE728865E1912E08383C9* __this, RuntimeObject* ___signaling0, String_t* ___connectionId1, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, RuntimeObject*, String_t*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___signaling0, ___connectionId1, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
// System.IAsyncResult Unity.RenderStreaming.Signaling.OnDisconnectHandler::BeginInvoke(Unity.RenderStreaming.Signaling.ISignaling,System.String,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* OnDisconnectHandler_BeginInvoke_mA8E0FEAA88B396BFBC9F1F06EB656E4D40E67A16 (OnDisconnectHandler_tB1C80CDBF420D2C6F13BE728865E1912E08383C9* __this, RuntimeObject* ___signaling0, String_t* ___connectionId1, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___callback2, RuntimeObject* ___object3, const RuntimeMethod* method) 
{
	void *__d_args[3] = {0};
	__d_args[0] = ___signaling0;
	__d_args[1] = ___connectionId1;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback2, (RuntimeObject*)___object3);
}
// System.Void Unity.RenderStreaming.Signaling.OnDisconnectHandler::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OnDisconnectHandler_EndInvoke_m2DD6D0D05526D880CF72F286944532CCF5EFD28D (OnDisconnectHandler_tB1C80CDBF420D2C6F13BE728865E1912E08383C9* __this, RuntimeObject* ___result0, const RuntimeMethod* method) 
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
void OnOfferHandler_Invoke_m0DE74F0577369C952A9B36ABD622FA356FA853F9_Multicast(OnOfferHandler_t741D2F8DBDFDA8C010DBB5276E8D5CC35569FF86* __this, RuntimeObject* ___signaling0, DescData_tA4EB7C7305FA906F4E120329023F8C778EFCB1B8* ___e1, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		OnOfferHandler_t741D2F8DBDFDA8C010DBB5276E8D5CC35569FF86* currentDelegate = reinterpret_cast<OnOfferHandler_t741D2F8DBDFDA8C010DBB5276E8D5CC35569FF86*>(delegatesToInvoke[i]);
		typedef void (*FunctionPointerType) (RuntimeObject*, RuntimeObject*, DescData_tA4EB7C7305FA906F4E120329023F8C778EFCB1B8*, const RuntimeMethod*);
		((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, ___signaling0, ___e1, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
}
void OnOfferHandler_Invoke_m0DE74F0577369C952A9B36ABD622FA356FA853F9_Open(OnOfferHandler_t741D2F8DBDFDA8C010DBB5276E8D5CC35569FF86* __this, RuntimeObject* ___signaling0, DescData_tA4EB7C7305FA906F4E120329023F8C778EFCB1B8* ___e1, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (RuntimeObject*, DescData_tA4EB7C7305FA906F4E120329023F8C778EFCB1B8*, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___signaling0, ___e1, method);
}
void OnOfferHandler_Invoke_m0DE74F0577369C952A9B36ABD622FA356FA853F9_OpenStaticInvoker(OnOfferHandler_t741D2F8DBDFDA8C010DBB5276E8D5CC35569FF86* __this, RuntimeObject* ___signaling0, DescData_tA4EB7C7305FA906F4E120329023F8C778EFCB1B8* ___e1, const RuntimeMethod* method)
{
	InvokerActionInvoker2< RuntimeObject*, DescData_tA4EB7C7305FA906F4E120329023F8C778EFCB1B8* >::Invoke(__this->___method_ptr_0, method, NULL, ___signaling0, ___e1);
}
void OnOfferHandler_Invoke_m0DE74F0577369C952A9B36ABD622FA356FA853F9_ClosedStaticInvoker(OnOfferHandler_t741D2F8DBDFDA8C010DBB5276E8D5CC35569FF86* __this, RuntimeObject* ___signaling0, DescData_tA4EB7C7305FA906F4E120329023F8C778EFCB1B8* ___e1, const RuntimeMethod* method)
{
	InvokerActionInvoker3< RuntimeObject*, RuntimeObject*, DescData_tA4EB7C7305FA906F4E120329023F8C778EFCB1B8* >::Invoke(__this->___method_ptr_0, method, NULL, __this->___m_target_2, ___signaling0, ___e1);
}
void OnOfferHandler_Invoke_m0DE74F0577369C952A9B36ABD622FA356FA853F9_OpenVirtual(OnOfferHandler_t741D2F8DBDFDA8C010DBB5276E8D5CC35569FF86* __this, RuntimeObject* ___signaling0, DescData_tA4EB7C7305FA906F4E120329023F8C778EFCB1B8* ___e1, const RuntimeMethod* method)
{
	VirtualActionInvoker1< DescData_tA4EB7C7305FA906F4E120329023F8C778EFCB1B8* >::Invoke(il2cpp_codegen_method_get_slot(method), ___signaling0, ___e1);
}
void OnOfferHandler_Invoke_m0DE74F0577369C952A9B36ABD622FA356FA853F9_OpenInterface(OnOfferHandler_t741D2F8DBDFDA8C010DBB5276E8D5CC35569FF86* __this, RuntimeObject* ___signaling0, DescData_tA4EB7C7305FA906F4E120329023F8C778EFCB1B8* ___e1, const RuntimeMethod* method)
{
	InterfaceActionInvoker1< DescData_tA4EB7C7305FA906F4E120329023F8C778EFCB1B8* >::Invoke(il2cpp_codegen_method_get_slot(method), il2cpp_codegen_method_get_declaring_type(method), ___signaling0, ___e1);
}
void OnOfferHandler_Invoke_m0DE74F0577369C952A9B36ABD622FA356FA853F9_OpenGenericVirtual(OnOfferHandler_t741D2F8DBDFDA8C010DBB5276E8D5CC35569FF86* __this, RuntimeObject* ___signaling0, DescData_tA4EB7C7305FA906F4E120329023F8C778EFCB1B8* ___e1, const RuntimeMethod* method)
{
	GenericVirtualActionInvoker1< DescData_tA4EB7C7305FA906F4E120329023F8C778EFCB1B8* >::Invoke(method, ___signaling0, ___e1);
}
void OnOfferHandler_Invoke_m0DE74F0577369C952A9B36ABD622FA356FA853F9_OpenGenericInterface(OnOfferHandler_t741D2F8DBDFDA8C010DBB5276E8D5CC35569FF86* __this, RuntimeObject* ___signaling0, DescData_tA4EB7C7305FA906F4E120329023F8C778EFCB1B8* ___e1, const RuntimeMethod* method)
{
	GenericInterfaceActionInvoker1< DescData_tA4EB7C7305FA906F4E120329023F8C778EFCB1B8* >::Invoke(method, ___signaling0, ___e1);
}
// System.Void Unity.RenderStreaming.Signaling.OnOfferHandler::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OnOfferHandler__ctor_m2F86CB3716DA84398619C90D0AD89515D2E10093 (OnOfferHandler_t741D2F8DBDFDA8C010DBB5276E8D5CC35569FF86* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) 
{
	__this->___method_ptr_0 = il2cpp_codegen_get_virtual_call_method_pointer((RuntimeMethod*)___method1);
	__this->___method_3 = ___method1;
	__this->___m_target_2 = ___object0;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target_2), (void*)___object0);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___method1);
	__this->___method_code_6 = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___method1))
	{
		bool isOpen = parameterCount == 2;
		if (il2cpp_codegen_call_method_via_invoker((RuntimeMethod*)___method1))
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&OnOfferHandler_Invoke_m0DE74F0577369C952A9B36ABD622FA356FA853F9_OpenStaticInvoker;
			else
				__this->___invoke_impl_1 = (intptr_t)&OnOfferHandler_Invoke_m0DE74F0577369C952A9B36ABD622FA356FA853F9_ClosedStaticInvoker;
		else
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&OnOfferHandler_Invoke_m0DE74F0577369C952A9B36ABD622FA356FA853F9_Open;
			else
				{
					__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
					__this->___method_code_6 = (intptr_t)__this->___m_target_2;
				}
	}
	else
	{
		bool isOpen = parameterCount == 1;
		if (isOpen)
		{
			if (__this->___method_is_virtual_12)
			{
				if (il2cpp_codegen_method_is_generic_instance_method((RuntimeMethod*)___method1))
					if (il2cpp_codegen_method_is_interface_method((RuntimeMethod*)___method1))
						__this->___invoke_impl_1 = (intptr_t)&OnOfferHandler_Invoke_m0DE74F0577369C952A9B36ABD622FA356FA853F9_OpenGenericInterface;
					else
						__this->___invoke_impl_1 = (intptr_t)&OnOfferHandler_Invoke_m0DE74F0577369C952A9B36ABD622FA356FA853F9_OpenGenericVirtual;
				else
					if (il2cpp_codegen_method_is_interface_method((RuntimeMethod*)___method1))
						__this->___invoke_impl_1 = (intptr_t)&OnOfferHandler_Invoke_m0DE74F0577369C952A9B36ABD622FA356FA853F9_OpenInterface;
					else
						__this->___invoke_impl_1 = (intptr_t)&OnOfferHandler_Invoke_m0DE74F0577369C952A9B36ABD622FA356FA853F9_OpenVirtual;
			}
			else
			{
				__this->___invoke_impl_1 = (intptr_t)&OnOfferHandler_Invoke_m0DE74F0577369C952A9B36ABD622FA356FA853F9_Open;
			}
		}
		else
		{
			__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
			__this->___method_code_6 = (intptr_t)__this->___m_target_2;
		}
	}
	__this->___extra_arg_5 = (intptr_t)&OnOfferHandler_Invoke_m0DE74F0577369C952A9B36ABD622FA356FA853F9_Multicast;
}
// System.Void Unity.RenderStreaming.Signaling.OnOfferHandler::Invoke(Unity.RenderStreaming.Signaling.ISignaling,Unity.RenderStreaming.DescData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OnOfferHandler_Invoke_m0DE74F0577369C952A9B36ABD622FA356FA853F9 (OnOfferHandler_t741D2F8DBDFDA8C010DBB5276E8D5CC35569FF86* __this, RuntimeObject* ___signaling0, DescData_tA4EB7C7305FA906F4E120329023F8C778EFCB1B8* ___e1, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, RuntimeObject*, DescData_tA4EB7C7305FA906F4E120329023F8C778EFCB1B8*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___signaling0, ___e1, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
// System.IAsyncResult Unity.RenderStreaming.Signaling.OnOfferHandler::BeginInvoke(Unity.RenderStreaming.Signaling.ISignaling,Unity.RenderStreaming.DescData,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* OnOfferHandler_BeginInvoke_mBC80E6845A63C2D760A0C5E19A1E47EB5EAE1EB4 (OnOfferHandler_t741D2F8DBDFDA8C010DBB5276E8D5CC35569FF86* __this, RuntimeObject* ___signaling0, DescData_tA4EB7C7305FA906F4E120329023F8C778EFCB1B8* ___e1, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___callback2, RuntimeObject* ___object3, const RuntimeMethod* method) 
{
	void *__d_args[3] = {0};
	__d_args[0] = ___signaling0;
	__d_args[1] = ___e1;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback2, (RuntimeObject*)___object3);
}
// System.Void Unity.RenderStreaming.Signaling.OnOfferHandler::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OnOfferHandler_EndInvoke_m549CA9892309DA4B5B74A824F6EF79633F060B26 (OnOfferHandler_t741D2F8DBDFDA8C010DBB5276E8D5CC35569FF86* __this, RuntimeObject* ___result0, const RuntimeMethod* method) 
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
void OnAnswerHandler_Invoke_m222E27983168292A4C07EA7A122B9D3C6A2BE162_Multicast(OnAnswerHandler_tBF64DA7C3AB41984E338F75F069C194C8F0A1A19* __this, RuntimeObject* ___signaling0, DescData_tA4EB7C7305FA906F4E120329023F8C778EFCB1B8* ___e1, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		OnAnswerHandler_tBF64DA7C3AB41984E338F75F069C194C8F0A1A19* currentDelegate = reinterpret_cast<OnAnswerHandler_tBF64DA7C3AB41984E338F75F069C194C8F0A1A19*>(delegatesToInvoke[i]);
		typedef void (*FunctionPointerType) (RuntimeObject*, RuntimeObject*, DescData_tA4EB7C7305FA906F4E120329023F8C778EFCB1B8*, const RuntimeMethod*);
		((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, ___signaling0, ___e1, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
}
void OnAnswerHandler_Invoke_m222E27983168292A4C07EA7A122B9D3C6A2BE162_Open(OnAnswerHandler_tBF64DA7C3AB41984E338F75F069C194C8F0A1A19* __this, RuntimeObject* ___signaling0, DescData_tA4EB7C7305FA906F4E120329023F8C778EFCB1B8* ___e1, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (RuntimeObject*, DescData_tA4EB7C7305FA906F4E120329023F8C778EFCB1B8*, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___signaling0, ___e1, method);
}
void OnAnswerHandler_Invoke_m222E27983168292A4C07EA7A122B9D3C6A2BE162_OpenStaticInvoker(OnAnswerHandler_tBF64DA7C3AB41984E338F75F069C194C8F0A1A19* __this, RuntimeObject* ___signaling0, DescData_tA4EB7C7305FA906F4E120329023F8C778EFCB1B8* ___e1, const RuntimeMethod* method)
{
	InvokerActionInvoker2< RuntimeObject*, DescData_tA4EB7C7305FA906F4E120329023F8C778EFCB1B8* >::Invoke(__this->___method_ptr_0, method, NULL, ___signaling0, ___e1);
}
void OnAnswerHandler_Invoke_m222E27983168292A4C07EA7A122B9D3C6A2BE162_ClosedStaticInvoker(OnAnswerHandler_tBF64DA7C3AB41984E338F75F069C194C8F0A1A19* __this, RuntimeObject* ___signaling0, DescData_tA4EB7C7305FA906F4E120329023F8C778EFCB1B8* ___e1, const RuntimeMethod* method)
{
	InvokerActionInvoker3< RuntimeObject*, RuntimeObject*, DescData_tA4EB7C7305FA906F4E120329023F8C778EFCB1B8* >::Invoke(__this->___method_ptr_0, method, NULL, __this->___m_target_2, ___signaling0, ___e1);
}
void OnAnswerHandler_Invoke_m222E27983168292A4C07EA7A122B9D3C6A2BE162_OpenVirtual(OnAnswerHandler_tBF64DA7C3AB41984E338F75F069C194C8F0A1A19* __this, RuntimeObject* ___signaling0, DescData_tA4EB7C7305FA906F4E120329023F8C778EFCB1B8* ___e1, const RuntimeMethod* method)
{
	VirtualActionInvoker1< DescData_tA4EB7C7305FA906F4E120329023F8C778EFCB1B8* >::Invoke(il2cpp_codegen_method_get_slot(method), ___signaling0, ___e1);
}
void OnAnswerHandler_Invoke_m222E27983168292A4C07EA7A122B9D3C6A2BE162_OpenInterface(OnAnswerHandler_tBF64DA7C3AB41984E338F75F069C194C8F0A1A19* __this, RuntimeObject* ___signaling0, DescData_tA4EB7C7305FA906F4E120329023F8C778EFCB1B8* ___e1, const RuntimeMethod* method)
{
	InterfaceActionInvoker1< DescData_tA4EB7C7305FA906F4E120329023F8C778EFCB1B8* >::Invoke(il2cpp_codegen_method_get_slot(method), il2cpp_codegen_method_get_declaring_type(method), ___signaling0, ___e1);
}
void OnAnswerHandler_Invoke_m222E27983168292A4C07EA7A122B9D3C6A2BE162_OpenGenericVirtual(OnAnswerHandler_tBF64DA7C3AB41984E338F75F069C194C8F0A1A19* __this, RuntimeObject* ___signaling0, DescData_tA4EB7C7305FA906F4E120329023F8C778EFCB1B8* ___e1, const RuntimeMethod* method)
{
	GenericVirtualActionInvoker1< DescData_tA4EB7C7305FA906F4E120329023F8C778EFCB1B8* >::Invoke(method, ___signaling0, ___e1);
}
void OnAnswerHandler_Invoke_m222E27983168292A4C07EA7A122B9D3C6A2BE162_OpenGenericInterface(OnAnswerHandler_tBF64DA7C3AB41984E338F75F069C194C8F0A1A19* __this, RuntimeObject* ___signaling0, DescData_tA4EB7C7305FA906F4E120329023F8C778EFCB1B8* ___e1, const RuntimeMethod* method)
{
	GenericInterfaceActionInvoker1< DescData_tA4EB7C7305FA906F4E120329023F8C778EFCB1B8* >::Invoke(method, ___signaling0, ___e1);
}
// System.Void Unity.RenderStreaming.Signaling.OnAnswerHandler::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OnAnswerHandler__ctor_mE2733A7AB4B07EAF9B164DFA4E2B82D88278E60C (OnAnswerHandler_tBF64DA7C3AB41984E338F75F069C194C8F0A1A19* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) 
{
	__this->___method_ptr_0 = il2cpp_codegen_get_virtual_call_method_pointer((RuntimeMethod*)___method1);
	__this->___method_3 = ___method1;
	__this->___m_target_2 = ___object0;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target_2), (void*)___object0);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___method1);
	__this->___method_code_6 = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___method1))
	{
		bool isOpen = parameterCount == 2;
		if (il2cpp_codegen_call_method_via_invoker((RuntimeMethod*)___method1))
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&OnAnswerHandler_Invoke_m222E27983168292A4C07EA7A122B9D3C6A2BE162_OpenStaticInvoker;
			else
				__this->___invoke_impl_1 = (intptr_t)&OnAnswerHandler_Invoke_m222E27983168292A4C07EA7A122B9D3C6A2BE162_ClosedStaticInvoker;
		else
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&OnAnswerHandler_Invoke_m222E27983168292A4C07EA7A122B9D3C6A2BE162_Open;
			else
				{
					__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
					__this->___method_code_6 = (intptr_t)__this->___m_target_2;
				}
	}
	else
	{
		bool isOpen = parameterCount == 1;
		if (isOpen)
		{
			if (__this->___method_is_virtual_12)
			{
				if (il2cpp_codegen_method_is_generic_instance_method((RuntimeMethod*)___method1))
					if (il2cpp_codegen_method_is_interface_method((RuntimeMethod*)___method1))
						__this->___invoke_impl_1 = (intptr_t)&OnAnswerHandler_Invoke_m222E27983168292A4C07EA7A122B9D3C6A2BE162_OpenGenericInterface;
					else
						__this->___invoke_impl_1 = (intptr_t)&OnAnswerHandler_Invoke_m222E27983168292A4C07EA7A122B9D3C6A2BE162_OpenGenericVirtual;
				else
					if (il2cpp_codegen_method_is_interface_method((RuntimeMethod*)___method1))
						__this->___invoke_impl_1 = (intptr_t)&OnAnswerHandler_Invoke_m222E27983168292A4C07EA7A122B9D3C6A2BE162_OpenInterface;
					else
						__this->___invoke_impl_1 = (intptr_t)&OnAnswerHandler_Invoke_m222E27983168292A4C07EA7A122B9D3C6A2BE162_OpenVirtual;
			}
			else
			{
				__this->___invoke_impl_1 = (intptr_t)&OnAnswerHandler_Invoke_m222E27983168292A4C07EA7A122B9D3C6A2BE162_Open;
			}
		}
		else
		{
			__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
			__this->___method_code_6 = (intptr_t)__this->___m_target_2;
		}
	}
	__this->___extra_arg_5 = (intptr_t)&OnAnswerHandler_Invoke_m222E27983168292A4C07EA7A122B9D3C6A2BE162_Multicast;
}
// System.Void Unity.RenderStreaming.Signaling.OnAnswerHandler::Invoke(Unity.RenderStreaming.Signaling.ISignaling,Unity.RenderStreaming.DescData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OnAnswerHandler_Invoke_m222E27983168292A4C07EA7A122B9D3C6A2BE162 (OnAnswerHandler_tBF64DA7C3AB41984E338F75F069C194C8F0A1A19* __this, RuntimeObject* ___signaling0, DescData_tA4EB7C7305FA906F4E120329023F8C778EFCB1B8* ___e1, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, RuntimeObject*, DescData_tA4EB7C7305FA906F4E120329023F8C778EFCB1B8*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___signaling0, ___e1, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
// System.IAsyncResult Unity.RenderStreaming.Signaling.OnAnswerHandler::BeginInvoke(Unity.RenderStreaming.Signaling.ISignaling,Unity.RenderStreaming.DescData,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* OnAnswerHandler_BeginInvoke_mE39F0E9F96F185BC3A9074262E37AC3CF232AD27 (OnAnswerHandler_tBF64DA7C3AB41984E338F75F069C194C8F0A1A19* __this, RuntimeObject* ___signaling0, DescData_tA4EB7C7305FA906F4E120329023F8C778EFCB1B8* ___e1, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___callback2, RuntimeObject* ___object3, const RuntimeMethod* method) 
{
	void *__d_args[3] = {0};
	__d_args[0] = ___signaling0;
	__d_args[1] = ___e1;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback2, (RuntimeObject*)___object3);
}
// System.Void Unity.RenderStreaming.Signaling.OnAnswerHandler::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OnAnswerHandler_EndInvoke_m33126908D7E633B71DF0DCFBB933A74288411A57 (OnAnswerHandler_tBF64DA7C3AB41984E338F75F069C194C8F0A1A19* __this, RuntimeObject* ___result0, const RuntimeMethod* method) 
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
void OnIceCandidateHandler_Invoke_m799463020BA8E3CF851221DA9D84AA33AF37F621_Multicast(OnIceCandidateHandler_tB82627B771BEE335DBC8D44AEC93B2AEC8B1E139* __this, RuntimeObject* ___signaling0, CandidateData_t37575B19A1050FDC713708C9C0CBD2EB498F2567* ___e1, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		OnIceCandidateHandler_tB82627B771BEE335DBC8D44AEC93B2AEC8B1E139* currentDelegate = reinterpret_cast<OnIceCandidateHandler_tB82627B771BEE335DBC8D44AEC93B2AEC8B1E139*>(delegatesToInvoke[i]);
		typedef void (*FunctionPointerType) (RuntimeObject*, RuntimeObject*, CandidateData_t37575B19A1050FDC713708C9C0CBD2EB498F2567*, const RuntimeMethod*);
		((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, ___signaling0, ___e1, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
}
void OnIceCandidateHandler_Invoke_m799463020BA8E3CF851221DA9D84AA33AF37F621_Open(OnIceCandidateHandler_tB82627B771BEE335DBC8D44AEC93B2AEC8B1E139* __this, RuntimeObject* ___signaling0, CandidateData_t37575B19A1050FDC713708C9C0CBD2EB498F2567* ___e1, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (RuntimeObject*, CandidateData_t37575B19A1050FDC713708C9C0CBD2EB498F2567*, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___signaling0, ___e1, method);
}
void OnIceCandidateHandler_Invoke_m799463020BA8E3CF851221DA9D84AA33AF37F621_OpenStaticInvoker(OnIceCandidateHandler_tB82627B771BEE335DBC8D44AEC93B2AEC8B1E139* __this, RuntimeObject* ___signaling0, CandidateData_t37575B19A1050FDC713708C9C0CBD2EB498F2567* ___e1, const RuntimeMethod* method)
{
	InvokerActionInvoker2< RuntimeObject*, CandidateData_t37575B19A1050FDC713708C9C0CBD2EB498F2567* >::Invoke(__this->___method_ptr_0, method, NULL, ___signaling0, ___e1);
}
void OnIceCandidateHandler_Invoke_m799463020BA8E3CF851221DA9D84AA33AF37F621_ClosedStaticInvoker(OnIceCandidateHandler_tB82627B771BEE335DBC8D44AEC93B2AEC8B1E139* __this, RuntimeObject* ___signaling0, CandidateData_t37575B19A1050FDC713708C9C0CBD2EB498F2567* ___e1, const RuntimeMethod* method)
{
	InvokerActionInvoker3< RuntimeObject*, RuntimeObject*, CandidateData_t37575B19A1050FDC713708C9C0CBD2EB498F2567* >::Invoke(__this->___method_ptr_0, method, NULL, __this->___m_target_2, ___signaling0, ___e1);
}
void OnIceCandidateHandler_Invoke_m799463020BA8E3CF851221DA9D84AA33AF37F621_OpenVirtual(OnIceCandidateHandler_tB82627B771BEE335DBC8D44AEC93B2AEC8B1E139* __this, RuntimeObject* ___signaling0, CandidateData_t37575B19A1050FDC713708C9C0CBD2EB498F2567* ___e1, const RuntimeMethod* method)
{
	VirtualActionInvoker1< CandidateData_t37575B19A1050FDC713708C9C0CBD2EB498F2567* >::Invoke(il2cpp_codegen_method_get_slot(method), ___signaling0, ___e1);
}
void OnIceCandidateHandler_Invoke_m799463020BA8E3CF851221DA9D84AA33AF37F621_OpenInterface(OnIceCandidateHandler_tB82627B771BEE335DBC8D44AEC93B2AEC8B1E139* __this, RuntimeObject* ___signaling0, CandidateData_t37575B19A1050FDC713708C9C0CBD2EB498F2567* ___e1, const RuntimeMethod* method)
{
	InterfaceActionInvoker1< CandidateData_t37575B19A1050FDC713708C9C0CBD2EB498F2567* >::Invoke(il2cpp_codegen_method_get_slot(method), il2cpp_codegen_method_get_declaring_type(method), ___signaling0, ___e1);
}
void OnIceCandidateHandler_Invoke_m799463020BA8E3CF851221DA9D84AA33AF37F621_OpenGenericVirtual(OnIceCandidateHandler_tB82627B771BEE335DBC8D44AEC93B2AEC8B1E139* __this, RuntimeObject* ___signaling0, CandidateData_t37575B19A1050FDC713708C9C0CBD2EB498F2567* ___e1, const RuntimeMethod* method)
{
	GenericVirtualActionInvoker1< CandidateData_t37575B19A1050FDC713708C9C0CBD2EB498F2567* >::Invoke(method, ___signaling0, ___e1);
}
void OnIceCandidateHandler_Invoke_m799463020BA8E3CF851221DA9D84AA33AF37F621_OpenGenericInterface(OnIceCandidateHandler_tB82627B771BEE335DBC8D44AEC93B2AEC8B1E139* __this, RuntimeObject* ___signaling0, CandidateData_t37575B19A1050FDC713708C9C0CBD2EB498F2567* ___e1, const RuntimeMethod* method)
{
	GenericInterfaceActionInvoker1< CandidateData_t37575B19A1050FDC713708C9C0CBD2EB498F2567* >::Invoke(method, ___signaling0, ___e1);
}
// System.Void Unity.RenderStreaming.Signaling.OnIceCandidateHandler::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OnIceCandidateHandler__ctor_mFC1388ACF0619E0C728323CDA207B9F5CEE39652 (OnIceCandidateHandler_tB82627B771BEE335DBC8D44AEC93B2AEC8B1E139* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) 
{
	__this->___method_ptr_0 = il2cpp_codegen_get_virtual_call_method_pointer((RuntimeMethod*)___method1);
	__this->___method_3 = ___method1;
	__this->___m_target_2 = ___object0;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target_2), (void*)___object0);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___method1);
	__this->___method_code_6 = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___method1))
	{
		bool isOpen = parameterCount == 2;
		if (il2cpp_codegen_call_method_via_invoker((RuntimeMethod*)___method1))
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&OnIceCandidateHandler_Invoke_m799463020BA8E3CF851221DA9D84AA33AF37F621_OpenStaticInvoker;
			else
				__this->___invoke_impl_1 = (intptr_t)&OnIceCandidateHandler_Invoke_m799463020BA8E3CF851221DA9D84AA33AF37F621_ClosedStaticInvoker;
		else
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&OnIceCandidateHandler_Invoke_m799463020BA8E3CF851221DA9D84AA33AF37F621_Open;
			else
				{
					__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
					__this->___method_code_6 = (intptr_t)__this->___m_target_2;
				}
	}
	else
	{
		bool isOpen = parameterCount == 1;
		if (isOpen)
		{
			if (__this->___method_is_virtual_12)
			{
				if (il2cpp_codegen_method_is_generic_instance_method((RuntimeMethod*)___method1))
					if (il2cpp_codegen_method_is_interface_method((RuntimeMethod*)___method1))
						__this->___invoke_impl_1 = (intptr_t)&OnIceCandidateHandler_Invoke_m799463020BA8E3CF851221DA9D84AA33AF37F621_OpenGenericInterface;
					else
						__this->___invoke_impl_1 = (intptr_t)&OnIceCandidateHandler_Invoke_m799463020BA8E3CF851221DA9D84AA33AF37F621_OpenGenericVirtual;
				else
					if (il2cpp_codegen_method_is_interface_method((RuntimeMethod*)___method1))
						__this->___invoke_impl_1 = (intptr_t)&OnIceCandidateHandler_Invoke_m799463020BA8E3CF851221DA9D84AA33AF37F621_OpenInterface;
					else
						__this->___invoke_impl_1 = (intptr_t)&OnIceCandidateHandler_Invoke_m799463020BA8E3CF851221DA9D84AA33AF37F621_OpenVirtual;
			}
			else
			{
				__this->___invoke_impl_1 = (intptr_t)&OnIceCandidateHandler_Invoke_m799463020BA8E3CF851221DA9D84AA33AF37F621_Open;
			}
		}
		else
		{
			__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
			__this->___method_code_6 = (intptr_t)__this->___m_target_2;
		}
	}
	__this->___extra_arg_5 = (intptr_t)&OnIceCandidateHandler_Invoke_m799463020BA8E3CF851221DA9D84AA33AF37F621_Multicast;
}
// System.Void Unity.RenderStreaming.Signaling.OnIceCandidateHandler::Invoke(Unity.RenderStreaming.Signaling.ISignaling,Unity.RenderStreaming.CandidateData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OnIceCandidateHandler_Invoke_m799463020BA8E3CF851221DA9D84AA33AF37F621 (OnIceCandidateHandler_tB82627B771BEE335DBC8D44AEC93B2AEC8B1E139* __this, RuntimeObject* ___signaling0, CandidateData_t37575B19A1050FDC713708C9C0CBD2EB498F2567* ___e1, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, RuntimeObject*, CandidateData_t37575B19A1050FDC713708C9C0CBD2EB498F2567*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___signaling0, ___e1, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
// System.IAsyncResult Unity.RenderStreaming.Signaling.OnIceCandidateHandler::BeginInvoke(Unity.RenderStreaming.Signaling.ISignaling,Unity.RenderStreaming.CandidateData,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* OnIceCandidateHandler_BeginInvoke_m2A5F6D0FD071B4783C3A0878DC5AED0F152598DD (OnIceCandidateHandler_tB82627B771BEE335DBC8D44AEC93B2AEC8B1E139* __this, RuntimeObject* ___signaling0, CandidateData_t37575B19A1050FDC713708C9C0CBD2EB498F2567* ___e1, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___callback2, RuntimeObject* ___object3, const RuntimeMethod* method) 
{
	void *__d_args[3] = {0};
	__d_args[0] = ___signaling0;
	__d_args[1] = ___e1;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback2, (RuntimeObject*)___object3);
}
// System.Void Unity.RenderStreaming.Signaling.OnIceCandidateHandler::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OnIceCandidateHandler_EndInvoke_mE39F344C8D302C01940562341D22D4E3FD7E58A5 (OnIceCandidateHandler_tB82627B771BEE335DBC8D44AEC93B2AEC8B1E139* __this, RuntimeObject* ___result0, const RuntimeMethod* method) 
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
// System.String Unity.RenderStreaming.Signaling.WebSocketSignaling::get_Url()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* WebSocketSignaling_get_Url_mC761368B42D4267A2B9F5B940D30B08D0D0D1582 (WebSocketSignaling_t1CF887D8D67DBF0E7FA4D9FFD852C1656BCAB60F* __this, const RuntimeMethod* method) 
{
	String_t* V_0 = NULL;
	{
		// public string Url { get { return m_url; } }
		String_t* L_0 = __this->___m_url_0;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		// public string Url { get { return m_url; } }
		String_t* L_1 = V_0;
		return L_1;
	}
}
// System.Single Unity.RenderStreaming.Signaling.WebSocketSignaling::get_Interval()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float WebSocketSignaling_get_Interval_mE8B8678B95CEF9589B35BD4B2E26247BA5BAB6CC (WebSocketSignaling_t1CF887D8D67DBF0E7FA4D9FFD852C1656BCAB60F* __this, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	{
		// public float Interval { get { return m_timeout; } }
		float L_0 = __this->___m_timeout_1;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		// public float Interval { get { return m_timeout; } }
		float L_1 = V_0;
		return L_1;
	}
}
// System.Void Unity.RenderStreaming.Signaling.WebSocketSignaling::.ctor(System.String,System.Single,System.Threading.SynchronizationContext)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebSocketSignaling__ctor_m0AC0570930378EB8C18195471B47AFEA1F4A4C39 (WebSocketSignaling_t1CF887D8D67DBF0E7FA4D9FFD852C1656BCAB60F* __this, String_t* ___url0, float ___timeout1, SynchronizationContext_tCDB842BBE53B050802CBBB59C6E6DC45B5B06DC0* ___mainThreadContext2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AutoResetEvent_t7F792F3F7AD11BEF7B411E771D98E5266A8CE7C0_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public WebSocketSignaling(string url, float timeout, SynchronizationContext mainThreadContext)
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		// m_url = url;
		String_t* L_0 = ___url0;
		__this->___m_url_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_url_0), (void*)L_0);
		// m_timeout = timeout;
		float L_1 = ___timeout1;
		__this->___m_timeout_1 = L_1;
		// m_mainThreadContext = mainThreadContext;
		SynchronizationContext_tCDB842BBE53B050802CBBB59C6E6DC45B5B06DC0* L_2 = ___mainThreadContext2;
		__this->___m_mainThreadContext_2 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_mainThreadContext_2), (void*)L_2);
		// m_wsCloseEvent = new AutoResetEvent(false);
		AutoResetEvent_t7F792F3F7AD11BEF7B411E771D98E5266A8CE7C0* L_3 = (AutoResetEvent_t7F792F3F7AD11BEF7B411E771D98E5266A8CE7C0*)il2cpp_codegen_object_new(AutoResetEvent_t7F792F3F7AD11BEF7B411E771D98E5266A8CE7C0_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		AutoResetEvent__ctor_mB7C8CD30C5BE11A2C8DB79B27593CF0C5FE82ADE(L_3, (bool)0, NULL);
		__this->___m_wsCloseEvent_5 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_wsCloseEvent_5), (void*)L_3);
		// }
		return;
	}
}
// System.Void Unity.RenderStreaming.Signaling.WebSocketSignaling::Finalize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebSocketSignaling_Finalize_m8F6AAB1D41D74F6E247510D4B0C461A84696823E (WebSocketSignaling_t1CF887D8D67DBF0E7FA4D9FFD852C1656BCAB60F* __this, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0015:
			{// begin finally (depth: 1)
				// }
				Object_Finalize_mC98C96301CCABFE00F1A7EF8E15DF507CACD42B2(__this, NULL);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				// if (m_running)
				bool L_0 = __this->___m_running_3;
				V_0 = L_0;
				bool L_1 = V_0;
				if (!L_1)
				{
					goto IL_0013_1;
				}
			}
			{
				// Stop();
				WebSocketSignaling_Stop_m0EBB7AEAED20E26DAD0263A4DC781AB9B11232FD(__this, NULL);
			}

IL_0013_1:
			{
				goto IL_001d;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_001d:
	{
		// }
		return;
	}
}
// System.Void Unity.RenderStreaming.Signaling.WebSocketSignaling::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebSocketSignaling_Start_mAB5254331FDE04725D2352A075D2277E2B6043D0 (WebSocketSignaling_t1CF887D8D67DBF0E7FA4D9FFD852C1656BCAB60F* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ThreadStart_t7662D98F1793EDE90192D7304D1C3C44119328A2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Thread_t0A773B9DE873D2DCAA7D229EAB36757B500E207F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WebSocketSignaling_WSManage_m7EDE83D822EE2344FEEEBF12AE21372504A2B814_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		// if (m_running)
		bool L_0 = __this->___m_running_3;
		V_0 = L_0;
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0016;
		}
	}
	{
		// throw new InvalidOperationException("This object is already started.");
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_2 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		NullCheck(L_2);
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_2, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralBAD5FE84D15EDBD517B275E85C3C6624E54479AD)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&WebSocketSignaling_Start_mAB5254331FDE04725D2352A075D2277E2B6043D0_RuntimeMethod_var)));
	}

IL_0016:
	{
		// m_running = true;
		__this->___m_running_3 = (bool)1;
		// m_signalingThread = new Thread(WSManage);
		ThreadStart_t7662D98F1793EDE90192D7304D1C3C44119328A2* L_3 = (ThreadStart_t7662D98F1793EDE90192D7304D1C3C44119328A2*)il2cpp_codegen_object_new(ThreadStart_t7662D98F1793EDE90192D7304D1C3C44119328A2_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		ThreadStart__ctor_m35CE51F76358F20E4A0C8F2963C3AE14E5FF7E71(L_3, __this, (intptr_t)((void*)WebSocketSignaling_WSManage_m7EDE83D822EE2344FEEEBF12AE21372504A2B814_RuntimeMethod_var), NULL);
		Thread_t0A773B9DE873D2DCAA7D229EAB36757B500E207F* L_4 = (Thread_t0A773B9DE873D2DCAA7D229EAB36757B500E207F*)il2cpp_codegen_object_new(Thread_t0A773B9DE873D2DCAA7D229EAB36757B500E207F_il2cpp_TypeInfo_var);
		NullCheck(L_4);
		Thread__ctor_m1FA23A179DF4F5B659689D6FA40DE903086212E2(L_4, L_3, NULL);
		__this->___m_signalingThread_4 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_signalingThread_4), (void*)L_4);
		// m_signalingThread.Start();
		Thread_t0A773B9DE873D2DCAA7D229EAB36757B500E207F* L_5 = __this->___m_signalingThread_4;
		NullCheck(L_5);
		Thread_Start_m2230799AA331CA9ACEF49D5500281D0C1A9F72FA(L_5, NULL);
		// }
		return;
	}
}
// System.Void Unity.RenderStreaming.Signaling.WebSocketSignaling::Stop()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebSocketSignaling_Stop_m0EBB7AEAED20E26DAD0263A4DC781AB9B11232FD (WebSocketSignaling_t1CF887D8D67DBF0E7FA4D9FFD852C1656BCAB60F* __this, const RuntimeMethod* method) 
{
	bool V_0 = false;
	bool V_1 = false;
	WebSocket_tBCA6DA25533993CDAE05954CA6F61926CF134BB4* G_B3_0 = NULL;
	WebSocket_tBCA6DA25533993CDAE05954CA6F61926CF134BB4* G_B2_0 = NULL;
	{
		// if (m_running)
		bool L_0 = __this->___m_running_3;
		V_0 = L_0;
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0063;
		}
	}
	{
		// m_running = false;
		__this->___m_running_3 = (bool)0;
		// m_webSocket?.Close();
		WebSocket_tBCA6DA25533993CDAE05954CA6F61926CF134BB4* L_2 = __this->___m_webSocket_6;
		WebSocket_tBCA6DA25533993CDAE05954CA6F61926CF134BB4* L_3 = L_2;
		G_B2_0 = L_3;
		if (L_3)
		{
			G_B3_0 = L_3;
			goto IL_001f;
		}
	}
	{
		goto IL_0025;
	}

IL_001f:
	{
		NullCheck(G_B3_0);
		WebSocket_Close_mE3876CFD424A250CA1BCB2079D7AA009E795FFC4(G_B3_0, NULL);
	}

IL_0025:
	{
		// if (m_signalingThread.ThreadState == ThreadState.WaitSleepJoin)
		Thread_t0A773B9DE873D2DCAA7D229EAB36757B500E207F* L_4 = __this->___m_signalingThread_4;
		NullCheck(L_4);
		int32_t L_5;
		L_5 = Thread_get_ThreadState_mEEA2DF3EBB42CC1B30E9B6B6732579E799A243A8(L_4, NULL);
		V_1 = (bool)((((int32_t)L_5) == ((int32_t)((int32_t)32)))? 1 : 0);
		bool L_6 = V_1;
		if (!L_6)
		{
			goto IL_0048;
		}
	}
	{
		// m_signalingThread.Abort();
		Thread_t0A773B9DE873D2DCAA7D229EAB36757B500E207F* L_7 = __this->___m_signalingThread_4;
		NullCheck(L_7);
		Thread_Abort_mB956BACF405EFC38C6A3D0B93142E4CEDD64D941(L_7, NULL);
		goto IL_005b;
	}

IL_0048:
	{
		// m_signalingThread.Join(1000);
		Thread_t0A773B9DE873D2DCAA7D229EAB36757B500E207F* L_8 = __this->___m_signalingThread_4;
		NullCheck(L_8);
		bool L_9;
		L_9 = Thread_Join_mEE23C739BE03BA0A3D0083A7848300192EF9F5C2(L_8, ((int32_t)1000), NULL);
	}

IL_005b:
	{
		// m_signalingThread = null;
		__this->___m_signalingThread_4 = (Thread_t0A773B9DE873D2DCAA7D229EAB36757B500E207F*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_signalingThread_4), (void*)(Thread_t0A773B9DE873D2DCAA7D229EAB36757B500E207F*)NULL);
	}

IL_0063:
	{
		// }
		return;
	}
}
// System.Void Unity.RenderStreaming.Signaling.WebSocketSignaling::add_OnStart(Unity.RenderStreaming.Signaling.OnStartHandler)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebSocketSignaling_add_OnStart_m4D5EBD9A9FC6D8FA4F45C575D9386382DC5504EC (WebSocketSignaling_t1CF887D8D67DBF0E7FA4D9FFD852C1656BCAB60F* __this, OnStartHandler_t295FEA9A47BD02A9B36195C055961D94C233A56F* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OnStartHandler_t295FEA9A47BD02A9B36195C055961D94C233A56F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	OnStartHandler_t295FEA9A47BD02A9B36195C055961D94C233A56F* V_0 = NULL;
	OnStartHandler_t295FEA9A47BD02A9B36195C055961D94C233A56F* V_1 = NULL;
	OnStartHandler_t295FEA9A47BD02A9B36195C055961D94C233A56F* V_2 = NULL;
	{
		OnStartHandler_t295FEA9A47BD02A9B36195C055961D94C233A56F* L_0 = __this->___OnStart_7;
		V_0 = L_0;
	}

IL_0007:
	{
		OnStartHandler_t295FEA9A47BD02A9B36195C055961D94C233A56F* L_1 = V_0;
		V_1 = L_1;
		OnStartHandler_t295FEA9A47BD02A9B36195C055961D94C233A56F* L_2 = V_1;
		OnStartHandler_t295FEA9A47BD02A9B36195C055961D94C233A56F* L_3 = ___value0;
		Delegate_t* L_4;
		L_4 = Delegate_Combine_m8B9D24CED35033C7FC56501DFE650F5CB7FF012C(L_2, L_3, NULL);
		V_2 = ((OnStartHandler_t295FEA9A47BD02A9B36195C055961D94C233A56F*)CastclassSealed((RuntimeObject*)L_4, OnStartHandler_t295FEA9A47BD02A9B36195C055961D94C233A56F_il2cpp_TypeInfo_var));
		OnStartHandler_t295FEA9A47BD02A9B36195C055961D94C233A56F** L_5 = (&__this->___OnStart_7);
		OnStartHandler_t295FEA9A47BD02A9B36195C055961D94C233A56F* L_6 = V_2;
		OnStartHandler_t295FEA9A47BD02A9B36195C055961D94C233A56F* L_7 = V_1;
		OnStartHandler_t295FEA9A47BD02A9B36195C055961D94C233A56F* L_8;
		L_8 = InterlockedCompareExchangeImpl<OnStartHandler_t295FEA9A47BD02A9B36195C055961D94C233A56F*>(L_5, L_6, L_7);
		V_0 = L_8;
		OnStartHandler_t295FEA9A47BD02A9B36195C055961D94C233A56F* L_9 = V_0;
		OnStartHandler_t295FEA9A47BD02A9B36195C055961D94C233A56F* L_10 = V_1;
		if ((!(((RuntimeObject*)(OnStartHandler_t295FEA9A47BD02A9B36195C055961D94C233A56F*)L_9) == ((RuntimeObject*)(OnStartHandler_t295FEA9A47BD02A9B36195C055961D94C233A56F*)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void Unity.RenderStreaming.Signaling.WebSocketSignaling::remove_OnStart(Unity.RenderStreaming.Signaling.OnStartHandler)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebSocketSignaling_remove_OnStart_m31A56A3D32F5C2559632E66F3EF70DE1F86F4A97 (WebSocketSignaling_t1CF887D8D67DBF0E7FA4D9FFD852C1656BCAB60F* __this, OnStartHandler_t295FEA9A47BD02A9B36195C055961D94C233A56F* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OnStartHandler_t295FEA9A47BD02A9B36195C055961D94C233A56F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	OnStartHandler_t295FEA9A47BD02A9B36195C055961D94C233A56F* V_0 = NULL;
	OnStartHandler_t295FEA9A47BD02A9B36195C055961D94C233A56F* V_1 = NULL;
	OnStartHandler_t295FEA9A47BD02A9B36195C055961D94C233A56F* V_2 = NULL;
	{
		OnStartHandler_t295FEA9A47BD02A9B36195C055961D94C233A56F* L_0 = __this->___OnStart_7;
		V_0 = L_0;
	}

IL_0007:
	{
		OnStartHandler_t295FEA9A47BD02A9B36195C055961D94C233A56F* L_1 = V_0;
		V_1 = L_1;
		OnStartHandler_t295FEA9A47BD02A9B36195C055961D94C233A56F* L_2 = V_1;
		OnStartHandler_t295FEA9A47BD02A9B36195C055961D94C233A56F* L_3 = ___value0;
		Delegate_t* L_4;
		L_4 = Delegate_Remove_m40506877934EC1AD4ADAE57F5E97AF0BC0F96116(L_2, L_3, NULL);
		V_2 = ((OnStartHandler_t295FEA9A47BD02A9B36195C055961D94C233A56F*)CastclassSealed((RuntimeObject*)L_4, OnStartHandler_t295FEA9A47BD02A9B36195C055961D94C233A56F_il2cpp_TypeInfo_var));
		OnStartHandler_t295FEA9A47BD02A9B36195C055961D94C233A56F** L_5 = (&__this->___OnStart_7);
		OnStartHandler_t295FEA9A47BD02A9B36195C055961D94C233A56F* L_6 = V_2;
		OnStartHandler_t295FEA9A47BD02A9B36195C055961D94C233A56F* L_7 = V_1;
		OnStartHandler_t295FEA9A47BD02A9B36195C055961D94C233A56F* L_8;
		L_8 = InterlockedCompareExchangeImpl<OnStartHandler_t295FEA9A47BD02A9B36195C055961D94C233A56F*>(L_5, L_6, L_7);
		V_0 = L_8;
		OnStartHandler_t295FEA9A47BD02A9B36195C055961D94C233A56F* L_9 = V_0;
		OnStartHandler_t295FEA9A47BD02A9B36195C055961D94C233A56F* L_10 = V_1;
		if ((!(((RuntimeObject*)(OnStartHandler_t295FEA9A47BD02A9B36195C055961D94C233A56F*)L_9) == ((RuntimeObject*)(OnStartHandler_t295FEA9A47BD02A9B36195C055961D94C233A56F*)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void Unity.RenderStreaming.Signaling.WebSocketSignaling::add_OnCreateConnection(Unity.RenderStreaming.Signaling.OnConnectHandler)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebSocketSignaling_add_OnCreateConnection_m23F27D1C7C26EC4F6EB84C47E698F6921B2FDFFD (WebSocketSignaling_t1CF887D8D67DBF0E7FA4D9FFD852C1656BCAB60F* __this, OnConnectHandler_tF4A8A1EC5ED4BCEAB7EA0D252D6586EC660ABEB3* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OnConnectHandler_tF4A8A1EC5ED4BCEAB7EA0D252D6586EC660ABEB3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	OnConnectHandler_tF4A8A1EC5ED4BCEAB7EA0D252D6586EC660ABEB3* V_0 = NULL;
	OnConnectHandler_tF4A8A1EC5ED4BCEAB7EA0D252D6586EC660ABEB3* V_1 = NULL;
	OnConnectHandler_tF4A8A1EC5ED4BCEAB7EA0D252D6586EC660ABEB3* V_2 = NULL;
	{
		OnConnectHandler_tF4A8A1EC5ED4BCEAB7EA0D252D6586EC660ABEB3* L_0 = __this->___OnCreateConnection_8;
		V_0 = L_0;
	}

IL_0007:
	{
		OnConnectHandler_tF4A8A1EC5ED4BCEAB7EA0D252D6586EC660ABEB3* L_1 = V_0;
		V_1 = L_1;
		OnConnectHandler_tF4A8A1EC5ED4BCEAB7EA0D252D6586EC660ABEB3* L_2 = V_1;
		OnConnectHandler_tF4A8A1EC5ED4BCEAB7EA0D252D6586EC660ABEB3* L_3 = ___value0;
		Delegate_t* L_4;
		L_4 = Delegate_Combine_m8B9D24CED35033C7FC56501DFE650F5CB7FF012C(L_2, L_3, NULL);
		V_2 = ((OnConnectHandler_tF4A8A1EC5ED4BCEAB7EA0D252D6586EC660ABEB3*)CastclassSealed((RuntimeObject*)L_4, OnConnectHandler_tF4A8A1EC5ED4BCEAB7EA0D252D6586EC660ABEB3_il2cpp_TypeInfo_var));
		OnConnectHandler_tF4A8A1EC5ED4BCEAB7EA0D252D6586EC660ABEB3** L_5 = (&__this->___OnCreateConnection_8);
		OnConnectHandler_tF4A8A1EC5ED4BCEAB7EA0D252D6586EC660ABEB3* L_6 = V_2;
		OnConnectHandler_tF4A8A1EC5ED4BCEAB7EA0D252D6586EC660ABEB3* L_7 = V_1;
		OnConnectHandler_tF4A8A1EC5ED4BCEAB7EA0D252D6586EC660ABEB3* L_8;
		L_8 = InterlockedCompareExchangeImpl<OnConnectHandler_tF4A8A1EC5ED4BCEAB7EA0D252D6586EC660ABEB3*>(L_5, L_6, L_7);
		V_0 = L_8;
		OnConnectHandler_tF4A8A1EC5ED4BCEAB7EA0D252D6586EC660ABEB3* L_9 = V_0;
		OnConnectHandler_tF4A8A1EC5ED4BCEAB7EA0D252D6586EC660ABEB3* L_10 = V_1;
		if ((!(((RuntimeObject*)(OnConnectHandler_tF4A8A1EC5ED4BCEAB7EA0D252D6586EC660ABEB3*)L_9) == ((RuntimeObject*)(OnConnectHandler_tF4A8A1EC5ED4BCEAB7EA0D252D6586EC660ABEB3*)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void Unity.RenderStreaming.Signaling.WebSocketSignaling::remove_OnCreateConnection(Unity.RenderStreaming.Signaling.OnConnectHandler)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebSocketSignaling_remove_OnCreateConnection_mCA0E366B8ED0953406A7BC0B482C07471575895C (WebSocketSignaling_t1CF887D8D67DBF0E7FA4D9FFD852C1656BCAB60F* __this, OnConnectHandler_tF4A8A1EC5ED4BCEAB7EA0D252D6586EC660ABEB3* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OnConnectHandler_tF4A8A1EC5ED4BCEAB7EA0D252D6586EC660ABEB3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	OnConnectHandler_tF4A8A1EC5ED4BCEAB7EA0D252D6586EC660ABEB3* V_0 = NULL;
	OnConnectHandler_tF4A8A1EC5ED4BCEAB7EA0D252D6586EC660ABEB3* V_1 = NULL;
	OnConnectHandler_tF4A8A1EC5ED4BCEAB7EA0D252D6586EC660ABEB3* V_2 = NULL;
	{
		OnConnectHandler_tF4A8A1EC5ED4BCEAB7EA0D252D6586EC660ABEB3* L_0 = __this->___OnCreateConnection_8;
		V_0 = L_0;
	}

IL_0007:
	{
		OnConnectHandler_tF4A8A1EC5ED4BCEAB7EA0D252D6586EC660ABEB3* L_1 = V_0;
		V_1 = L_1;
		OnConnectHandler_tF4A8A1EC5ED4BCEAB7EA0D252D6586EC660ABEB3* L_2 = V_1;
		OnConnectHandler_tF4A8A1EC5ED4BCEAB7EA0D252D6586EC660ABEB3* L_3 = ___value0;
		Delegate_t* L_4;
		L_4 = Delegate_Remove_m40506877934EC1AD4ADAE57F5E97AF0BC0F96116(L_2, L_3, NULL);
		V_2 = ((OnConnectHandler_tF4A8A1EC5ED4BCEAB7EA0D252D6586EC660ABEB3*)CastclassSealed((RuntimeObject*)L_4, OnConnectHandler_tF4A8A1EC5ED4BCEAB7EA0D252D6586EC660ABEB3_il2cpp_TypeInfo_var));
		OnConnectHandler_tF4A8A1EC5ED4BCEAB7EA0D252D6586EC660ABEB3** L_5 = (&__this->___OnCreateConnection_8);
		OnConnectHandler_tF4A8A1EC5ED4BCEAB7EA0D252D6586EC660ABEB3* L_6 = V_2;
		OnConnectHandler_tF4A8A1EC5ED4BCEAB7EA0D252D6586EC660ABEB3* L_7 = V_1;
		OnConnectHandler_tF4A8A1EC5ED4BCEAB7EA0D252D6586EC660ABEB3* L_8;
		L_8 = InterlockedCompareExchangeImpl<OnConnectHandler_tF4A8A1EC5ED4BCEAB7EA0D252D6586EC660ABEB3*>(L_5, L_6, L_7);
		V_0 = L_8;
		OnConnectHandler_tF4A8A1EC5ED4BCEAB7EA0D252D6586EC660ABEB3* L_9 = V_0;
		OnConnectHandler_tF4A8A1EC5ED4BCEAB7EA0D252D6586EC660ABEB3* L_10 = V_1;
		if ((!(((RuntimeObject*)(OnConnectHandler_tF4A8A1EC5ED4BCEAB7EA0D252D6586EC660ABEB3*)L_9) == ((RuntimeObject*)(OnConnectHandler_tF4A8A1EC5ED4BCEAB7EA0D252D6586EC660ABEB3*)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void Unity.RenderStreaming.Signaling.WebSocketSignaling::add_OnDestroyConnection(Unity.RenderStreaming.Signaling.OnDisconnectHandler)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebSocketSignaling_add_OnDestroyConnection_m17BC4FC292C37E928A56FD16B2345A1FB6355267 (WebSocketSignaling_t1CF887D8D67DBF0E7FA4D9FFD852C1656BCAB60F* __this, OnDisconnectHandler_tB1C80CDBF420D2C6F13BE728865E1912E08383C9* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OnDisconnectHandler_tB1C80CDBF420D2C6F13BE728865E1912E08383C9_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	OnDisconnectHandler_tB1C80CDBF420D2C6F13BE728865E1912E08383C9* V_0 = NULL;
	OnDisconnectHandler_tB1C80CDBF420D2C6F13BE728865E1912E08383C9* V_1 = NULL;
	OnDisconnectHandler_tB1C80CDBF420D2C6F13BE728865E1912E08383C9* V_2 = NULL;
	{
		OnDisconnectHandler_tB1C80CDBF420D2C6F13BE728865E1912E08383C9* L_0 = __this->___OnDestroyConnection_9;
		V_0 = L_0;
	}

IL_0007:
	{
		OnDisconnectHandler_tB1C80CDBF420D2C6F13BE728865E1912E08383C9* L_1 = V_0;
		V_1 = L_1;
		OnDisconnectHandler_tB1C80CDBF420D2C6F13BE728865E1912E08383C9* L_2 = V_1;
		OnDisconnectHandler_tB1C80CDBF420D2C6F13BE728865E1912E08383C9* L_3 = ___value0;
		Delegate_t* L_4;
		L_4 = Delegate_Combine_m8B9D24CED35033C7FC56501DFE650F5CB7FF012C(L_2, L_3, NULL);
		V_2 = ((OnDisconnectHandler_tB1C80CDBF420D2C6F13BE728865E1912E08383C9*)CastclassSealed((RuntimeObject*)L_4, OnDisconnectHandler_tB1C80CDBF420D2C6F13BE728865E1912E08383C9_il2cpp_TypeInfo_var));
		OnDisconnectHandler_tB1C80CDBF420D2C6F13BE728865E1912E08383C9** L_5 = (&__this->___OnDestroyConnection_9);
		OnDisconnectHandler_tB1C80CDBF420D2C6F13BE728865E1912E08383C9* L_6 = V_2;
		OnDisconnectHandler_tB1C80CDBF420D2C6F13BE728865E1912E08383C9* L_7 = V_1;
		OnDisconnectHandler_tB1C80CDBF420D2C6F13BE728865E1912E08383C9* L_8;
		L_8 = InterlockedCompareExchangeImpl<OnDisconnectHandler_tB1C80CDBF420D2C6F13BE728865E1912E08383C9*>(L_5, L_6, L_7);
		V_0 = L_8;
		OnDisconnectHandler_tB1C80CDBF420D2C6F13BE728865E1912E08383C9* L_9 = V_0;
		OnDisconnectHandler_tB1C80CDBF420D2C6F13BE728865E1912E08383C9* L_10 = V_1;
		if ((!(((RuntimeObject*)(OnDisconnectHandler_tB1C80CDBF420D2C6F13BE728865E1912E08383C9*)L_9) == ((RuntimeObject*)(OnDisconnectHandler_tB1C80CDBF420D2C6F13BE728865E1912E08383C9*)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void Unity.RenderStreaming.Signaling.WebSocketSignaling::remove_OnDestroyConnection(Unity.RenderStreaming.Signaling.OnDisconnectHandler)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebSocketSignaling_remove_OnDestroyConnection_mDA0E721C13B85A1594C0E1D02AA1EE15DD955D84 (WebSocketSignaling_t1CF887D8D67DBF0E7FA4D9FFD852C1656BCAB60F* __this, OnDisconnectHandler_tB1C80CDBF420D2C6F13BE728865E1912E08383C9* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OnDisconnectHandler_tB1C80CDBF420D2C6F13BE728865E1912E08383C9_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	OnDisconnectHandler_tB1C80CDBF420D2C6F13BE728865E1912E08383C9* V_0 = NULL;
	OnDisconnectHandler_tB1C80CDBF420D2C6F13BE728865E1912E08383C9* V_1 = NULL;
	OnDisconnectHandler_tB1C80CDBF420D2C6F13BE728865E1912E08383C9* V_2 = NULL;
	{
		OnDisconnectHandler_tB1C80CDBF420D2C6F13BE728865E1912E08383C9* L_0 = __this->___OnDestroyConnection_9;
		V_0 = L_0;
	}

IL_0007:
	{
		OnDisconnectHandler_tB1C80CDBF420D2C6F13BE728865E1912E08383C9* L_1 = V_0;
		V_1 = L_1;
		OnDisconnectHandler_tB1C80CDBF420D2C6F13BE728865E1912E08383C9* L_2 = V_1;
		OnDisconnectHandler_tB1C80CDBF420D2C6F13BE728865E1912E08383C9* L_3 = ___value0;
		Delegate_t* L_4;
		L_4 = Delegate_Remove_m40506877934EC1AD4ADAE57F5E97AF0BC0F96116(L_2, L_3, NULL);
		V_2 = ((OnDisconnectHandler_tB1C80CDBF420D2C6F13BE728865E1912E08383C9*)CastclassSealed((RuntimeObject*)L_4, OnDisconnectHandler_tB1C80CDBF420D2C6F13BE728865E1912E08383C9_il2cpp_TypeInfo_var));
		OnDisconnectHandler_tB1C80CDBF420D2C6F13BE728865E1912E08383C9** L_5 = (&__this->___OnDestroyConnection_9);
		OnDisconnectHandler_tB1C80CDBF420D2C6F13BE728865E1912E08383C9* L_6 = V_2;
		OnDisconnectHandler_tB1C80CDBF420D2C6F13BE728865E1912E08383C9* L_7 = V_1;
		OnDisconnectHandler_tB1C80CDBF420D2C6F13BE728865E1912E08383C9* L_8;
		L_8 = InterlockedCompareExchangeImpl<OnDisconnectHandler_tB1C80CDBF420D2C6F13BE728865E1912E08383C9*>(L_5, L_6, L_7);
		V_0 = L_8;
		OnDisconnectHandler_tB1C80CDBF420D2C6F13BE728865E1912E08383C9* L_9 = V_0;
		OnDisconnectHandler_tB1C80CDBF420D2C6F13BE728865E1912E08383C9* L_10 = V_1;
		if ((!(((RuntimeObject*)(OnDisconnectHandler_tB1C80CDBF420D2C6F13BE728865E1912E08383C9*)L_9) == ((RuntimeObject*)(OnDisconnectHandler_tB1C80CDBF420D2C6F13BE728865E1912E08383C9*)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void Unity.RenderStreaming.Signaling.WebSocketSignaling::add_OnOffer(Unity.RenderStreaming.Signaling.OnOfferHandler)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebSocketSignaling_add_OnOffer_mE23F6C147DD9FC469333F244887B545AE8E33A35 (WebSocketSignaling_t1CF887D8D67DBF0E7FA4D9FFD852C1656BCAB60F* __this, OnOfferHandler_t741D2F8DBDFDA8C010DBB5276E8D5CC35569FF86* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OnOfferHandler_t741D2F8DBDFDA8C010DBB5276E8D5CC35569FF86_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	OnOfferHandler_t741D2F8DBDFDA8C010DBB5276E8D5CC35569FF86* V_0 = NULL;
	OnOfferHandler_t741D2F8DBDFDA8C010DBB5276E8D5CC35569FF86* V_1 = NULL;
	OnOfferHandler_t741D2F8DBDFDA8C010DBB5276E8D5CC35569FF86* V_2 = NULL;
	{
		OnOfferHandler_t741D2F8DBDFDA8C010DBB5276E8D5CC35569FF86* L_0 = __this->___OnOffer_10;
		V_0 = L_0;
	}

IL_0007:
	{
		OnOfferHandler_t741D2F8DBDFDA8C010DBB5276E8D5CC35569FF86* L_1 = V_0;
		V_1 = L_1;
		OnOfferHandler_t741D2F8DBDFDA8C010DBB5276E8D5CC35569FF86* L_2 = V_1;
		OnOfferHandler_t741D2F8DBDFDA8C010DBB5276E8D5CC35569FF86* L_3 = ___value0;
		Delegate_t* L_4;
		L_4 = Delegate_Combine_m8B9D24CED35033C7FC56501DFE650F5CB7FF012C(L_2, L_3, NULL);
		V_2 = ((OnOfferHandler_t741D2F8DBDFDA8C010DBB5276E8D5CC35569FF86*)CastclassSealed((RuntimeObject*)L_4, OnOfferHandler_t741D2F8DBDFDA8C010DBB5276E8D5CC35569FF86_il2cpp_TypeInfo_var));
		OnOfferHandler_t741D2F8DBDFDA8C010DBB5276E8D5CC35569FF86** L_5 = (&__this->___OnOffer_10);
		OnOfferHandler_t741D2F8DBDFDA8C010DBB5276E8D5CC35569FF86* L_6 = V_2;
		OnOfferHandler_t741D2F8DBDFDA8C010DBB5276E8D5CC35569FF86* L_7 = V_1;
		OnOfferHandler_t741D2F8DBDFDA8C010DBB5276E8D5CC35569FF86* L_8;
		L_8 = InterlockedCompareExchangeImpl<OnOfferHandler_t741D2F8DBDFDA8C010DBB5276E8D5CC35569FF86*>(L_5, L_6, L_7);
		V_0 = L_8;
		OnOfferHandler_t741D2F8DBDFDA8C010DBB5276E8D5CC35569FF86* L_9 = V_0;
		OnOfferHandler_t741D2F8DBDFDA8C010DBB5276E8D5CC35569FF86* L_10 = V_1;
		if ((!(((RuntimeObject*)(OnOfferHandler_t741D2F8DBDFDA8C010DBB5276E8D5CC35569FF86*)L_9) == ((RuntimeObject*)(OnOfferHandler_t741D2F8DBDFDA8C010DBB5276E8D5CC35569FF86*)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void Unity.RenderStreaming.Signaling.WebSocketSignaling::remove_OnOffer(Unity.RenderStreaming.Signaling.OnOfferHandler)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebSocketSignaling_remove_OnOffer_mC25F0A4585EA019F04A08B145E7375476854EED6 (WebSocketSignaling_t1CF887D8D67DBF0E7FA4D9FFD852C1656BCAB60F* __this, OnOfferHandler_t741D2F8DBDFDA8C010DBB5276E8D5CC35569FF86* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OnOfferHandler_t741D2F8DBDFDA8C010DBB5276E8D5CC35569FF86_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	OnOfferHandler_t741D2F8DBDFDA8C010DBB5276E8D5CC35569FF86* V_0 = NULL;
	OnOfferHandler_t741D2F8DBDFDA8C010DBB5276E8D5CC35569FF86* V_1 = NULL;
	OnOfferHandler_t741D2F8DBDFDA8C010DBB5276E8D5CC35569FF86* V_2 = NULL;
	{
		OnOfferHandler_t741D2F8DBDFDA8C010DBB5276E8D5CC35569FF86* L_0 = __this->___OnOffer_10;
		V_0 = L_0;
	}

IL_0007:
	{
		OnOfferHandler_t741D2F8DBDFDA8C010DBB5276E8D5CC35569FF86* L_1 = V_0;
		V_1 = L_1;
		OnOfferHandler_t741D2F8DBDFDA8C010DBB5276E8D5CC35569FF86* L_2 = V_1;
		OnOfferHandler_t741D2F8DBDFDA8C010DBB5276E8D5CC35569FF86* L_3 = ___value0;
		Delegate_t* L_4;
		L_4 = Delegate_Remove_m40506877934EC1AD4ADAE57F5E97AF0BC0F96116(L_2, L_3, NULL);
		V_2 = ((OnOfferHandler_t741D2F8DBDFDA8C010DBB5276E8D5CC35569FF86*)CastclassSealed((RuntimeObject*)L_4, OnOfferHandler_t741D2F8DBDFDA8C010DBB5276E8D5CC35569FF86_il2cpp_TypeInfo_var));
		OnOfferHandler_t741D2F8DBDFDA8C010DBB5276E8D5CC35569FF86** L_5 = (&__this->___OnOffer_10);
		OnOfferHandler_t741D2F8DBDFDA8C010DBB5276E8D5CC35569FF86* L_6 = V_2;
		OnOfferHandler_t741D2F8DBDFDA8C010DBB5276E8D5CC35569FF86* L_7 = V_1;
		OnOfferHandler_t741D2F8DBDFDA8C010DBB5276E8D5CC35569FF86* L_8;
		L_8 = InterlockedCompareExchangeImpl<OnOfferHandler_t741D2F8DBDFDA8C010DBB5276E8D5CC35569FF86*>(L_5, L_6, L_7);
		V_0 = L_8;
		OnOfferHandler_t741D2F8DBDFDA8C010DBB5276E8D5CC35569FF86* L_9 = V_0;
		OnOfferHandler_t741D2F8DBDFDA8C010DBB5276E8D5CC35569FF86* L_10 = V_1;
		if ((!(((RuntimeObject*)(OnOfferHandler_t741D2F8DBDFDA8C010DBB5276E8D5CC35569FF86*)L_9) == ((RuntimeObject*)(OnOfferHandler_t741D2F8DBDFDA8C010DBB5276E8D5CC35569FF86*)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void Unity.RenderStreaming.Signaling.WebSocketSignaling::add_OnAnswer(Unity.RenderStreaming.Signaling.OnAnswerHandler)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebSocketSignaling_add_OnAnswer_m5D0476C771AEC9D19DF1A2D993019BBE89C02446 (WebSocketSignaling_t1CF887D8D67DBF0E7FA4D9FFD852C1656BCAB60F* __this, OnAnswerHandler_tBF64DA7C3AB41984E338F75F069C194C8F0A1A19* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OnAnswerHandler_tBF64DA7C3AB41984E338F75F069C194C8F0A1A19_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	OnAnswerHandler_tBF64DA7C3AB41984E338F75F069C194C8F0A1A19* V_0 = NULL;
	OnAnswerHandler_tBF64DA7C3AB41984E338F75F069C194C8F0A1A19* V_1 = NULL;
	OnAnswerHandler_tBF64DA7C3AB41984E338F75F069C194C8F0A1A19* V_2 = NULL;
	{
		OnAnswerHandler_tBF64DA7C3AB41984E338F75F069C194C8F0A1A19* L_0 = __this->___OnAnswer_11;
		V_0 = L_0;
	}

IL_0007:
	{
		OnAnswerHandler_tBF64DA7C3AB41984E338F75F069C194C8F0A1A19* L_1 = V_0;
		V_1 = L_1;
		OnAnswerHandler_tBF64DA7C3AB41984E338F75F069C194C8F0A1A19* L_2 = V_1;
		OnAnswerHandler_tBF64DA7C3AB41984E338F75F069C194C8F0A1A19* L_3 = ___value0;
		Delegate_t* L_4;
		L_4 = Delegate_Combine_m8B9D24CED35033C7FC56501DFE650F5CB7FF012C(L_2, L_3, NULL);
		V_2 = ((OnAnswerHandler_tBF64DA7C3AB41984E338F75F069C194C8F0A1A19*)CastclassSealed((RuntimeObject*)L_4, OnAnswerHandler_tBF64DA7C3AB41984E338F75F069C194C8F0A1A19_il2cpp_TypeInfo_var));
		OnAnswerHandler_tBF64DA7C3AB41984E338F75F069C194C8F0A1A19** L_5 = (&__this->___OnAnswer_11);
		OnAnswerHandler_tBF64DA7C3AB41984E338F75F069C194C8F0A1A19* L_6 = V_2;
		OnAnswerHandler_tBF64DA7C3AB41984E338F75F069C194C8F0A1A19* L_7 = V_1;
		OnAnswerHandler_tBF64DA7C3AB41984E338F75F069C194C8F0A1A19* L_8;
		L_8 = InterlockedCompareExchangeImpl<OnAnswerHandler_tBF64DA7C3AB41984E338F75F069C194C8F0A1A19*>(L_5, L_6, L_7);
		V_0 = L_8;
		OnAnswerHandler_tBF64DA7C3AB41984E338F75F069C194C8F0A1A19* L_9 = V_0;
		OnAnswerHandler_tBF64DA7C3AB41984E338F75F069C194C8F0A1A19* L_10 = V_1;
		if ((!(((RuntimeObject*)(OnAnswerHandler_tBF64DA7C3AB41984E338F75F069C194C8F0A1A19*)L_9) == ((RuntimeObject*)(OnAnswerHandler_tBF64DA7C3AB41984E338F75F069C194C8F0A1A19*)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void Unity.RenderStreaming.Signaling.WebSocketSignaling::remove_OnAnswer(Unity.RenderStreaming.Signaling.OnAnswerHandler)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebSocketSignaling_remove_OnAnswer_m3672AE823DFF95A60E317F63FDB5A85D82D646F2 (WebSocketSignaling_t1CF887D8D67DBF0E7FA4D9FFD852C1656BCAB60F* __this, OnAnswerHandler_tBF64DA7C3AB41984E338F75F069C194C8F0A1A19* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OnAnswerHandler_tBF64DA7C3AB41984E338F75F069C194C8F0A1A19_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	OnAnswerHandler_tBF64DA7C3AB41984E338F75F069C194C8F0A1A19* V_0 = NULL;
	OnAnswerHandler_tBF64DA7C3AB41984E338F75F069C194C8F0A1A19* V_1 = NULL;
	OnAnswerHandler_tBF64DA7C3AB41984E338F75F069C194C8F0A1A19* V_2 = NULL;
	{
		OnAnswerHandler_tBF64DA7C3AB41984E338F75F069C194C8F0A1A19* L_0 = __this->___OnAnswer_11;
		V_0 = L_0;
	}

IL_0007:
	{
		OnAnswerHandler_tBF64DA7C3AB41984E338F75F069C194C8F0A1A19* L_1 = V_0;
		V_1 = L_1;
		OnAnswerHandler_tBF64DA7C3AB41984E338F75F069C194C8F0A1A19* L_2 = V_1;
		OnAnswerHandler_tBF64DA7C3AB41984E338F75F069C194C8F0A1A19* L_3 = ___value0;
		Delegate_t* L_4;
		L_4 = Delegate_Remove_m40506877934EC1AD4ADAE57F5E97AF0BC0F96116(L_2, L_3, NULL);
		V_2 = ((OnAnswerHandler_tBF64DA7C3AB41984E338F75F069C194C8F0A1A19*)CastclassSealed((RuntimeObject*)L_4, OnAnswerHandler_tBF64DA7C3AB41984E338F75F069C194C8F0A1A19_il2cpp_TypeInfo_var));
		OnAnswerHandler_tBF64DA7C3AB41984E338F75F069C194C8F0A1A19** L_5 = (&__this->___OnAnswer_11);
		OnAnswerHandler_tBF64DA7C3AB41984E338F75F069C194C8F0A1A19* L_6 = V_2;
		OnAnswerHandler_tBF64DA7C3AB41984E338F75F069C194C8F0A1A19* L_7 = V_1;
		OnAnswerHandler_tBF64DA7C3AB41984E338F75F069C194C8F0A1A19* L_8;
		L_8 = InterlockedCompareExchangeImpl<OnAnswerHandler_tBF64DA7C3AB41984E338F75F069C194C8F0A1A19*>(L_5, L_6, L_7);
		V_0 = L_8;
		OnAnswerHandler_tBF64DA7C3AB41984E338F75F069C194C8F0A1A19* L_9 = V_0;
		OnAnswerHandler_tBF64DA7C3AB41984E338F75F069C194C8F0A1A19* L_10 = V_1;
		if ((!(((RuntimeObject*)(OnAnswerHandler_tBF64DA7C3AB41984E338F75F069C194C8F0A1A19*)L_9) == ((RuntimeObject*)(OnAnswerHandler_tBF64DA7C3AB41984E338F75F069C194C8F0A1A19*)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void Unity.RenderStreaming.Signaling.WebSocketSignaling::add_OnIceCandidate(Unity.RenderStreaming.Signaling.OnIceCandidateHandler)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebSocketSignaling_add_OnIceCandidate_mC89DF259E412FDA2936F4CC7351A0B86C4166B89 (WebSocketSignaling_t1CF887D8D67DBF0E7FA4D9FFD852C1656BCAB60F* __this, OnIceCandidateHandler_tB82627B771BEE335DBC8D44AEC93B2AEC8B1E139* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OnIceCandidateHandler_tB82627B771BEE335DBC8D44AEC93B2AEC8B1E139_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	OnIceCandidateHandler_tB82627B771BEE335DBC8D44AEC93B2AEC8B1E139* V_0 = NULL;
	OnIceCandidateHandler_tB82627B771BEE335DBC8D44AEC93B2AEC8B1E139* V_1 = NULL;
	OnIceCandidateHandler_tB82627B771BEE335DBC8D44AEC93B2AEC8B1E139* V_2 = NULL;
	{
		OnIceCandidateHandler_tB82627B771BEE335DBC8D44AEC93B2AEC8B1E139* L_0 = __this->___OnIceCandidate_12;
		V_0 = L_0;
	}

IL_0007:
	{
		OnIceCandidateHandler_tB82627B771BEE335DBC8D44AEC93B2AEC8B1E139* L_1 = V_0;
		V_1 = L_1;
		OnIceCandidateHandler_tB82627B771BEE335DBC8D44AEC93B2AEC8B1E139* L_2 = V_1;
		OnIceCandidateHandler_tB82627B771BEE335DBC8D44AEC93B2AEC8B1E139* L_3 = ___value0;
		Delegate_t* L_4;
		L_4 = Delegate_Combine_m8B9D24CED35033C7FC56501DFE650F5CB7FF012C(L_2, L_3, NULL);
		V_2 = ((OnIceCandidateHandler_tB82627B771BEE335DBC8D44AEC93B2AEC8B1E139*)CastclassSealed((RuntimeObject*)L_4, OnIceCandidateHandler_tB82627B771BEE335DBC8D44AEC93B2AEC8B1E139_il2cpp_TypeInfo_var));
		OnIceCandidateHandler_tB82627B771BEE335DBC8D44AEC93B2AEC8B1E139** L_5 = (&__this->___OnIceCandidate_12);
		OnIceCandidateHandler_tB82627B771BEE335DBC8D44AEC93B2AEC8B1E139* L_6 = V_2;
		OnIceCandidateHandler_tB82627B771BEE335DBC8D44AEC93B2AEC8B1E139* L_7 = V_1;
		OnIceCandidateHandler_tB82627B771BEE335DBC8D44AEC93B2AEC8B1E139* L_8;
		L_8 = InterlockedCompareExchangeImpl<OnIceCandidateHandler_tB82627B771BEE335DBC8D44AEC93B2AEC8B1E139*>(L_5, L_6, L_7);
		V_0 = L_8;
		OnIceCandidateHandler_tB82627B771BEE335DBC8D44AEC93B2AEC8B1E139* L_9 = V_0;
		OnIceCandidateHandler_tB82627B771BEE335DBC8D44AEC93B2AEC8B1E139* L_10 = V_1;
		if ((!(((RuntimeObject*)(OnIceCandidateHandler_tB82627B771BEE335DBC8D44AEC93B2AEC8B1E139*)L_9) == ((RuntimeObject*)(OnIceCandidateHandler_tB82627B771BEE335DBC8D44AEC93B2AEC8B1E139*)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void Unity.RenderStreaming.Signaling.WebSocketSignaling::remove_OnIceCandidate(Unity.RenderStreaming.Signaling.OnIceCandidateHandler)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebSocketSignaling_remove_OnIceCandidate_m77280CAD28565FCAED60C1FDE27EDD0B721490F2 (WebSocketSignaling_t1CF887D8D67DBF0E7FA4D9FFD852C1656BCAB60F* __this, OnIceCandidateHandler_tB82627B771BEE335DBC8D44AEC93B2AEC8B1E139* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OnIceCandidateHandler_tB82627B771BEE335DBC8D44AEC93B2AEC8B1E139_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	OnIceCandidateHandler_tB82627B771BEE335DBC8D44AEC93B2AEC8B1E139* V_0 = NULL;
	OnIceCandidateHandler_tB82627B771BEE335DBC8D44AEC93B2AEC8B1E139* V_1 = NULL;
	OnIceCandidateHandler_tB82627B771BEE335DBC8D44AEC93B2AEC8B1E139* V_2 = NULL;
	{
		OnIceCandidateHandler_tB82627B771BEE335DBC8D44AEC93B2AEC8B1E139* L_0 = __this->___OnIceCandidate_12;
		V_0 = L_0;
	}

IL_0007:
	{
		OnIceCandidateHandler_tB82627B771BEE335DBC8D44AEC93B2AEC8B1E139* L_1 = V_0;
		V_1 = L_1;
		OnIceCandidateHandler_tB82627B771BEE335DBC8D44AEC93B2AEC8B1E139* L_2 = V_1;
		OnIceCandidateHandler_tB82627B771BEE335DBC8D44AEC93B2AEC8B1E139* L_3 = ___value0;
		Delegate_t* L_4;
		L_4 = Delegate_Remove_m40506877934EC1AD4ADAE57F5E97AF0BC0F96116(L_2, L_3, NULL);
		V_2 = ((OnIceCandidateHandler_tB82627B771BEE335DBC8D44AEC93B2AEC8B1E139*)CastclassSealed((RuntimeObject*)L_4, OnIceCandidateHandler_tB82627B771BEE335DBC8D44AEC93B2AEC8B1E139_il2cpp_TypeInfo_var));
		OnIceCandidateHandler_tB82627B771BEE335DBC8D44AEC93B2AEC8B1E139** L_5 = (&__this->___OnIceCandidate_12);
		OnIceCandidateHandler_tB82627B771BEE335DBC8D44AEC93B2AEC8B1E139* L_6 = V_2;
		OnIceCandidateHandler_tB82627B771BEE335DBC8D44AEC93B2AEC8B1E139* L_7 = V_1;
		OnIceCandidateHandler_tB82627B771BEE335DBC8D44AEC93B2AEC8B1E139* L_8;
		L_8 = InterlockedCompareExchangeImpl<OnIceCandidateHandler_tB82627B771BEE335DBC8D44AEC93B2AEC8B1E139*>(L_5, L_6, L_7);
		V_0 = L_8;
		OnIceCandidateHandler_tB82627B771BEE335DBC8D44AEC93B2AEC8B1E139* L_9 = V_0;
		OnIceCandidateHandler_tB82627B771BEE335DBC8D44AEC93B2AEC8B1E139* L_10 = V_1;
		if ((!(((RuntimeObject*)(OnIceCandidateHandler_tB82627B771BEE335DBC8D44AEC93B2AEC8B1E139*)L_9) == ((RuntimeObject*)(OnIceCandidateHandler_tB82627B771BEE335DBC8D44AEC93B2AEC8B1E139*)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void Unity.RenderStreaming.Signaling.WebSocketSignaling::SendOffer(System.String,Unity.WebRTC.RTCSessionDescription)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebSocketSignaling_SendOffer_m537D24A6E6A449241F0E6F20D8DCA668457F5EFC (WebSocketSignaling_t1CF887D8D67DBF0E7FA4D9FFD852C1656BCAB60F* __this, String_t* ___connectionId0, RTCSessionDescription_t3FA5DAD67F61C0D9822A5CC9FF8C6ED477303B04 ___offer1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DescData_tA4EB7C7305FA906F4E120329023F8C778EFCB1B8_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RoutedMessage_1__ctor_m1F6081FAA95C98F9346C78BDB810A6165DE7D01F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RoutedMessage_1_t72CE37549A13355407A8430A32D1B9899B96C4B5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8FD2FCE61414AB2192F02CF2453DC0DD532613F8);
		s_Il2CppMethodInitialized = true;
	}
	DescData_tA4EB7C7305FA906F4E120329023F8C778EFCB1B8* V_0 = NULL;
	RoutedMessage_1_t72CE37549A13355407A8430A32D1B9899B96C4B5* V_1 = NULL;
	{
		// DescData data = new DescData();
		DescData_tA4EB7C7305FA906F4E120329023F8C778EFCB1B8* L_0 = (DescData_tA4EB7C7305FA906F4E120329023F8C778EFCB1B8*)il2cpp_codegen_object_new(DescData_tA4EB7C7305FA906F4E120329023F8C778EFCB1B8_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		DescData__ctor_m3AA5A3312C9E853B796FA9EFAB20A23AFBE6169B(L_0, NULL);
		V_0 = L_0;
		// data.connectionId = connectionId;
		DescData_tA4EB7C7305FA906F4E120329023F8C778EFCB1B8* L_1 = V_0;
		String_t* L_2 = ___connectionId0;
		NullCheck(L_1);
		L_1->___connectionId_0 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___connectionId_0), (void*)L_2);
		// data.sdp = offer.sdp;
		DescData_tA4EB7C7305FA906F4E120329023F8C778EFCB1B8* L_3 = V_0;
		RTCSessionDescription_t3FA5DAD67F61C0D9822A5CC9FF8C6ED477303B04 L_4 = ___offer1;
		String_t* L_5 = L_4.___sdp_1;
		NullCheck(L_3);
		L_3->___sdp_1 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&L_3->___sdp_1), (void*)L_5);
		// data.type = "offer";
		DescData_tA4EB7C7305FA906F4E120329023F8C778EFCB1B8* L_6 = V_0;
		NullCheck(L_6);
		L_6->___type_2 = _stringLiteral8FD2FCE61414AB2192F02CF2453DC0DD532613F8;
		Il2CppCodeGenWriteBarrier((void**)(&L_6->___type_2), (void*)_stringLiteral8FD2FCE61414AB2192F02CF2453DC0DD532613F8);
		// RoutedMessage<DescData> routedMessage = new RoutedMessage<DescData>();
		RoutedMessage_1_t72CE37549A13355407A8430A32D1B9899B96C4B5* L_7 = (RoutedMessage_1_t72CE37549A13355407A8430A32D1B9899B96C4B5*)il2cpp_codegen_object_new(RoutedMessage_1_t72CE37549A13355407A8430A32D1B9899B96C4B5_il2cpp_TypeInfo_var);
		NullCheck(L_7);
		RoutedMessage_1__ctor_m1F6081FAA95C98F9346C78BDB810A6165DE7D01F(L_7, RoutedMessage_1__ctor_m1F6081FAA95C98F9346C78BDB810A6165DE7D01F_RuntimeMethod_var);
		V_1 = L_7;
		// routedMessage.from = connectionId;
		RoutedMessage_1_t72CE37549A13355407A8430A32D1B9899B96C4B5* L_8 = V_1;
		String_t* L_9 = ___connectionId0;
		NullCheck(L_8);
		L_8->___from_0 = L_9;
		Il2CppCodeGenWriteBarrier((void**)(&L_8->___from_0), (void*)L_9);
		// routedMessage.data = data;
		RoutedMessage_1_t72CE37549A13355407A8430A32D1B9899B96C4B5* L_10 = V_1;
		DescData_tA4EB7C7305FA906F4E120329023F8C778EFCB1B8* L_11 = V_0;
		NullCheck(L_10);
		L_10->___data_3 = L_11;
		Il2CppCodeGenWriteBarrier((void**)(&L_10->___data_3), (void*)L_11);
		// routedMessage.type = "offer";
		RoutedMessage_1_t72CE37549A13355407A8430A32D1B9899B96C4B5* L_12 = V_1;
		NullCheck(L_12);
		L_12->___type_2 = _stringLiteral8FD2FCE61414AB2192F02CF2453DC0DD532613F8;
		Il2CppCodeGenWriteBarrier((void**)(&L_12->___type_2), (void*)_stringLiteral8FD2FCE61414AB2192F02CF2453DC0DD532613F8);
		// WSSend(routedMessage);
		RoutedMessage_1_t72CE37549A13355407A8430A32D1B9899B96C4B5* L_13 = V_1;
		WebSocketSignaling_WSSend_mA1BBF1C4528CBA7B97ADA6775CE4B6B092B2A291(__this, L_13, NULL);
		// }
		return;
	}
}
// System.Void Unity.RenderStreaming.Signaling.WebSocketSignaling::SendAnswer(System.String,Unity.WebRTC.RTCSessionDescription)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebSocketSignaling_SendAnswer_mFE533AB40ED44EEFEC960C93CC14D9B8E3CC7938 (WebSocketSignaling_t1CF887D8D67DBF0E7FA4D9FFD852C1656BCAB60F* __this, String_t* ___connectionId0, RTCSessionDescription_t3FA5DAD67F61C0D9822A5CC9FF8C6ED477303B04 ___answer1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DescData_tA4EB7C7305FA906F4E120329023F8C778EFCB1B8_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RoutedMessage_1__ctor_m1F6081FAA95C98F9346C78BDB810A6165DE7D01F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RoutedMessage_1_t72CE37549A13355407A8430A32D1B9899B96C4B5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF15E72E03C607420BD2E3D65E07F0C50155C1C30);
		s_Il2CppMethodInitialized = true;
	}
	DescData_tA4EB7C7305FA906F4E120329023F8C778EFCB1B8* V_0 = NULL;
	RoutedMessage_1_t72CE37549A13355407A8430A32D1B9899B96C4B5* V_1 = NULL;
	{
		// DescData data = new DescData();
		DescData_tA4EB7C7305FA906F4E120329023F8C778EFCB1B8* L_0 = (DescData_tA4EB7C7305FA906F4E120329023F8C778EFCB1B8*)il2cpp_codegen_object_new(DescData_tA4EB7C7305FA906F4E120329023F8C778EFCB1B8_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		DescData__ctor_m3AA5A3312C9E853B796FA9EFAB20A23AFBE6169B(L_0, NULL);
		V_0 = L_0;
		// data.connectionId = connectionId;
		DescData_tA4EB7C7305FA906F4E120329023F8C778EFCB1B8* L_1 = V_0;
		String_t* L_2 = ___connectionId0;
		NullCheck(L_1);
		L_1->___connectionId_0 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___connectionId_0), (void*)L_2);
		// data.sdp = answer.sdp;
		DescData_tA4EB7C7305FA906F4E120329023F8C778EFCB1B8* L_3 = V_0;
		RTCSessionDescription_t3FA5DAD67F61C0D9822A5CC9FF8C6ED477303B04 L_4 = ___answer1;
		String_t* L_5 = L_4.___sdp_1;
		NullCheck(L_3);
		L_3->___sdp_1 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&L_3->___sdp_1), (void*)L_5);
		// data.type = "answer";
		DescData_tA4EB7C7305FA906F4E120329023F8C778EFCB1B8* L_6 = V_0;
		NullCheck(L_6);
		L_6->___type_2 = _stringLiteralF15E72E03C607420BD2E3D65E07F0C50155C1C30;
		Il2CppCodeGenWriteBarrier((void**)(&L_6->___type_2), (void*)_stringLiteralF15E72E03C607420BD2E3D65E07F0C50155C1C30);
		// RoutedMessage<DescData> routedMessage = new RoutedMessage<DescData>();
		RoutedMessage_1_t72CE37549A13355407A8430A32D1B9899B96C4B5* L_7 = (RoutedMessage_1_t72CE37549A13355407A8430A32D1B9899B96C4B5*)il2cpp_codegen_object_new(RoutedMessage_1_t72CE37549A13355407A8430A32D1B9899B96C4B5_il2cpp_TypeInfo_var);
		NullCheck(L_7);
		RoutedMessage_1__ctor_m1F6081FAA95C98F9346C78BDB810A6165DE7D01F(L_7, RoutedMessage_1__ctor_m1F6081FAA95C98F9346C78BDB810A6165DE7D01F_RuntimeMethod_var);
		V_1 = L_7;
		// routedMessage.from = connectionId;
		RoutedMessage_1_t72CE37549A13355407A8430A32D1B9899B96C4B5* L_8 = V_1;
		String_t* L_9 = ___connectionId0;
		NullCheck(L_8);
		L_8->___from_0 = L_9;
		Il2CppCodeGenWriteBarrier((void**)(&L_8->___from_0), (void*)L_9);
		// routedMessage.data = data;
		RoutedMessage_1_t72CE37549A13355407A8430A32D1B9899B96C4B5* L_10 = V_1;
		DescData_tA4EB7C7305FA906F4E120329023F8C778EFCB1B8* L_11 = V_0;
		NullCheck(L_10);
		L_10->___data_3 = L_11;
		Il2CppCodeGenWriteBarrier((void**)(&L_10->___data_3), (void*)L_11);
		// routedMessage.type = "answer";
		RoutedMessage_1_t72CE37549A13355407A8430A32D1B9899B96C4B5* L_12 = V_1;
		NullCheck(L_12);
		L_12->___type_2 = _stringLiteralF15E72E03C607420BD2E3D65E07F0C50155C1C30;
		Il2CppCodeGenWriteBarrier((void**)(&L_12->___type_2), (void*)_stringLiteralF15E72E03C607420BD2E3D65E07F0C50155C1C30);
		// WSSend(routedMessage);
		RoutedMessage_1_t72CE37549A13355407A8430A32D1B9899B96C4B5* L_13 = V_1;
		WebSocketSignaling_WSSend_mA1BBF1C4528CBA7B97ADA6775CE4B6B092B2A291(__this, L_13, NULL);
		// }
		return;
	}
}
// System.Void Unity.RenderStreaming.Signaling.WebSocketSignaling::SendCandidate(System.String,Unity.WebRTC.RTCIceCandidate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebSocketSignaling_SendCandidate_m7CDF551B0DD5C78ACD162B9F576D0C5D4F96A1A1 (WebSocketSignaling_t1CF887D8D67DBF0E7FA4D9FFD852C1656BCAB60F* __this, String_t* ___connectionId0, RTCIceCandidate_t934E142F42C60EB706D94154B8596B73E7AB5CE4* ___candidate1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CandidateData_t37575B19A1050FDC713708C9C0CBD2EB498F2567_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1_GetValueOrDefault_m0F743BF8CC3F18E8288210EBA987C3DBFA7FC8C9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RoutedMessage_1__ctor_mE946583C5CA695C6701F66A66BEC57B1ECF24D06_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RoutedMessage_1_t51E4C83A51CF0CC596E11B7566144BD0FDE84DD1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4FB3818413F5C6BB2073C3F5D962C6CBF406B669);
		s_Il2CppMethodInitialized = true;
	}
	CandidateData_t37575B19A1050FDC713708C9C0CBD2EB498F2567* V_0 = NULL;
	RoutedMessage_1_t51E4C83A51CF0CC596E11B7566144BD0FDE84DD1* V_1 = NULL;
	Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		// CandidateData data = new CandidateData();
		CandidateData_t37575B19A1050FDC713708C9C0CBD2EB498F2567* L_0 = (CandidateData_t37575B19A1050FDC713708C9C0CBD2EB498F2567*)il2cpp_codegen_object_new(CandidateData_t37575B19A1050FDC713708C9C0CBD2EB498F2567_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		CandidateData__ctor_mA859EFF28F12E2966E9D35A302FF8674F4C12A88(L_0, NULL);
		V_0 = L_0;
		// data.connectionId = connectionId;
		CandidateData_t37575B19A1050FDC713708C9C0CBD2EB498F2567* L_1 = V_0;
		String_t* L_2 = ___connectionId0;
		NullCheck(L_1);
		L_1->___connectionId_0 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___connectionId_0), (void*)L_2);
		// data.candidate = candidate.Candidate;
		CandidateData_t37575B19A1050FDC713708C9C0CBD2EB498F2567* L_3 = V_0;
		RTCIceCandidate_t934E142F42C60EB706D94154B8596B73E7AB5CE4* L_4 = ___candidate1;
		NullCheck(L_4);
		String_t* L_5;
		L_5 = RTCIceCandidate_get_Candidate_m72D6C96D4B55F5B6AD526DEA591EA187F523FC33(L_4, NULL);
		NullCheck(L_3);
		L_3->___candidate_1 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&L_3->___candidate_1), (void*)L_5);
		// data.sdpMLineIndex = candidate.SdpMLineIndex.GetValueOrDefault(0);
		CandidateData_t37575B19A1050FDC713708C9C0CBD2EB498F2567* L_6 = V_0;
		RTCIceCandidate_t934E142F42C60EB706D94154B8596B73E7AB5CE4* L_7 = ___candidate1;
		NullCheck(L_7);
		Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 L_8;
		L_8 = RTCIceCandidate_get_SdpMLineIndex_m3473B7A6D73AF1BF329BDE27EA979304B3778B5C(L_7, NULL);
		V_2 = L_8;
		int32_t L_9;
		L_9 = Nullable_1_GetValueOrDefault_m0F743BF8CC3F18E8288210EBA987C3DBFA7FC8C9((&V_2), 0, Nullable_1_GetValueOrDefault_m0F743BF8CC3F18E8288210EBA987C3DBFA7FC8C9_RuntimeMethod_var);
		NullCheck(L_6);
		L_6->___sdpMLineIndex_3 = L_9;
		// data.sdpMid = candidate.SdpMid;
		CandidateData_t37575B19A1050FDC713708C9C0CBD2EB498F2567* L_10 = V_0;
		RTCIceCandidate_t934E142F42C60EB706D94154B8596B73E7AB5CE4* L_11 = ___candidate1;
		NullCheck(L_11);
		String_t* L_12;
		L_12 = RTCIceCandidate_get_SdpMid_m6C861CD69BA17EBB90A33F6552B8311B18D8EE3C(L_11, NULL);
		NullCheck(L_10);
		L_10->___sdpMid_2 = L_12;
		Il2CppCodeGenWriteBarrier((void**)(&L_10->___sdpMid_2), (void*)L_12);
		// RoutedMessage<CandidateData> routedMessage = new RoutedMessage<CandidateData>();
		RoutedMessage_1_t51E4C83A51CF0CC596E11B7566144BD0FDE84DD1* L_13 = (RoutedMessage_1_t51E4C83A51CF0CC596E11B7566144BD0FDE84DD1*)il2cpp_codegen_object_new(RoutedMessage_1_t51E4C83A51CF0CC596E11B7566144BD0FDE84DD1_il2cpp_TypeInfo_var);
		NullCheck(L_13);
		RoutedMessage_1__ctor_mE946583C5CA695C6701F66A66BEC57B1ECF24D06(L_13, RoutedMessage_1__ctor_mE946583C5CA695C6701F66A66BEC57B1ECF24D06_RuntimeMethod_var);
		V_1 = L_13;
		// routedMessage.from = connectionId;
		RoutedMessage_1_t51E4C83A51CF0CC596E11B7566144BD0FDE84DD1* L_14 = V_1;
		String_t* L_15 = ___connectionId0;
		NullCheck(L_14);
		L_14->___from_0 = L_15;
		Il2CppCodeGenWriteBarrier((void**)(&L_14->___from_0), (void*)L_15);
		// routedMessage.data = data;
		RoutedMessage_1_t51E4C83A51CF0CC596E11B7566144BD0FDE84DD1* L_16 = V_1;
		CandidateData_t37575B19A1050FDC713708C9C0CBD2EB498F2567* L_17 = V_0;
		NullCheck(L_16);
		L_16->___data_3 = L_17;
		Il2CppCodeGenWriteBarrier((void**)(&L_16->___data_3), (void*)L_17);
		// routedMessage.type = "candidate";
		RoutedMessage_1_t51E4C83A51CF0CC596E11B7566144BD0FDE84DD1* L_18 = V_1;
		NullCheck(L_18);
		L_18->___type_2 = _stringLiteral4FB3818413F5C6BB2073C3F5D962C6CBF406B669;
		Il2CppCodeGenWriteBarrier((void**)(&L_18->___type_2), (void*)_stringLiteral4FB3818413F5C6BB2073C3F5D962C6CBF406B669);
		// WSSend(routedMessage);
		RoutedMessage_1_t51E4C83A51CF0CC596E11B7566144BD0FDE84DD1* L_19 = V_1;
		WebSocketSignaling_WSSend_mA1BBF1C4528CBA7B97ADA6775CE4B6B092B2A291(__this, L_19, NULL);
		// }
		return;
	}
}
// System.Void Unity.RenderStreaming.Signaling.WebSocketSignaling::OpenConnection(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebSocketSignaling_OpenConnection_m493603707DEF9414A37F6EFC3704D32AEBC61741 (WebSocketSignaling_t1CF887D8D67DBF0E7FA4D9FFD852C1656BCAB60F* __this, String_t* ___connectionId0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral229E903C904BB5E01E1C45CFDA6C05B7D8D31376);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD5F2751FCD979A5D75A2B143601934884E0565F4);
		s_Il2CppMethodInitialized = true;
	}
	{
		// this.WSSend($"{{\"type\":\"connect\", \"connectionId\":\"{connectionId}\"}}");
		String_t* L_0 = ___connectionId0;
		String_t* L_1;
		L_1 = String_Concat_m9B13B47FCB3DF61144D9647DDA05F527377251B0(_stringLiteral229E903C904BB5E01E1C45CFDA6C05B7D8D31376, L_0, _stringLiteralD5F2751FCD979A5D75A2B143601934884E0565F4, NULL);
		WebSocketSignaling_WSSend_mA1BBF1C4528CBA7B97ADA6775CE4B6B092B2A291(__this, L_1, NULL);
		// }
		return;
	}
}
// System.Void Unity.RenderStreaming.Signaling.WebSocketSignaling::CloseConnection(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebSocketSignaling_CloseConnection_m94895670B1561ECE3C5B0962D448319680DF4408 (WebSocketSignaling_t1CF887D8D67DBF0E7FA4D9FFD852C1656BCAB60F* __this, String_t* ___connectionId0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD5F2751FCD979A5D75A2B143601934884E0565F4);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF985F8BC55251C0AE00E3E2022EC6C7180CE8764);
		s_Il2CppMethodInitialized = true;
	}
	{
		// this.WSSend($"{{\"type\":\"disconnect\", \"connectionId\":\"{connectionId}\"}}");
		String_t* L_0 = ___connectionId0;
		String_t* L_1;
		L_1 = String_Concat_m9B13B47FCB3DF61144D9647DDA05F527377251B0(_stringLiteralF985F8BC55251C0AE00E3E2022EC6C7180CE8764, L_0, _stringLiteralD5F2751FCD979A5D75A2B143601934884E0565F4, NULL);
		WebSocketSignaling_WSSend_mA1BBF1C4528CBA7B97ADA6775CE4B6B092B2A291(__this, L_1, NULL);
		// }
		return;
	}
}
// System.Void Unity.RenderStreaming.Signaling.WebSocketSignaling::WSManage()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebSocketSignaling_WSManage_m7EDE83D822EE2344FEEEBF12AE21372504A2B814 (WebSocketSignaling_t1CF887D8D67DBF0E7FA4D9FFD852C1656BCAB60F* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral63E06DA33BF42B84F79A3155FFA82A75445E9851);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		goto IL_0033;
	}

IL_0003:
	{
		// WSCreate();
		WebSocketSignaling_WSCreate_mE821A76D952FA6DAA76F6DFE04A97626A2184486(__this, NULL);
	}
	try
	{// begin try (depth: 1)
		// m_wsCloseEvent.WaitOne();
		AutoResetEvent_t7F792F3F7AD11BEF7B411E771D98E5266A8CE7C0* L_0 = __this->___m_wsCloseEvent_5;
		NullCheck(L_0);
		bool L_1;
		L_1 = VirtualFuncInvoker0< bool >::Invoke(10 /* System.Boolean System.Threading.WaitHandle::WaitOne() */, L_0);
		// Thread.Sleep((int)(m_timeout * 1000));
		float L_2 = __this->___m_timeout_1;
		Thread_Sleep_m63B7D29DC735584F4D80373E48C91B34FF32D1A0(il2cpp_codegen_cast_double_to_int<int32_t>(((float)il2cpp_codegen_multiply(L_2, (1000.0f)))), NULL);
		goto IL_0032;
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ThreadAbortException_tCA1833E5D49782387EDF3BDCBDB90597B273F3C4_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_002e;
		}
		throw e;
	}

CATCH_002e:
	{// begin catch(System.Threading.ThreadAbortException)
		// catch (ThreadAbortException)
		// return;
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_0048;
	}// end catch (depth: 1)

IL_0032:
	{
	}

IL_0033:
	{
		// while (m_running)
		bool L_3 = __this->___m_running_3;
		V_0 = L_3;
		bool L_4 = V_0;
		if (L_4)
		{
			goto IL_0003;
		}
	}
	{
		// Debug.Log("Signaling: WS managing thread ended");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m86567BCF22BBE7809747817453CACA0E41E68219(_stringLiteral63E06DA33BF42B84F79A3155FFA82A75445E9851, NULL);
	}

IL_0048:
	{
		// }
		return;
	}
}
// System.Void Unity.RenderStreaming.Signaling.WebSocketSignaling::WSCreate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebSocketSignaling_WSCreate_mE821A76D952FA6DAA76F6DFE04A97626A2184486 (WebSocketSignaling_t1CF887D8D67DBF0E7FA4D9FFD852C1656BCAB60F* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Array_Empty_TisString_t_m065B1C7D00E4F3FB1305F00C8AF7E73B05CE825B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventHandler_1_t522FAB2F4CBA6A3D12166027B1D4A1C8C94D68E5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventHandler_1_t8D76D9242722744EEBFEF94F3AE19600E1D651B9_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventHandler_1_tEF41E797A6883ACCC9C7536EEEB557E1EFC8C291_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WebSocketSignaling_WSClosed_mB101C26ECD6C7C8361A689FEAFB6711FBC81C8F3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WebSocketSignaling_WSConnected_mD28D6B5B97E0B84086AFFDB5139A248174E86C10_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WebSocketSignaling_WSError_mB634A7245B74AF24881D111C814634A72586ADA9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WebSocketSignaling_WSProcessMessage_m9BC18052522F1ADC3781E186DA401EB7D9337C46_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WebSocket_tBCA6DA25533993CDAE05954CA6F61926CF134BB4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral56D7741BCA89552362FD24D11BB8980E3D8A444C);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB291DDBE097863E5F2E2AF085D00F6BAA42C7409);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		// m_webSocket = new WebSocket(m_url);
		String_t* L_0 = __this->___m_url_0;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_1;
		L_1 = Array_Empty_TisString_t_m065B1C7D00E4F3FB1305F00C8AF7E73B05CE825B_inline(Array_Empty_TisString_t_m065B1C7D00E4F3FB1305F00C8AF7E73B05CE825B_RuntimeMethod_var);
		WebSocket_tBCA6DA25533993CDAE05954CA6F61926CF134BB4* L_2 = (WebSocket_tBCA6DA25533993CDAE05954CA6F61926CF134BB4*)il2cpp_codegen_object_new(WebSocket_tBCA6DA25533993CDAE05954CA6F61926CF134BB4_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		WebSocket__ctor_mE61AF5C55A248D7A6B3E3BC14D4BDE24387F6390(L_2, L_0, L_1, NULL);
		__this->___m_webSocket_6 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_webSocket_6), (void*)L_2);
		// if (m_url.StartsWith("wss"))
		String_t* L_3 = __this->___m_url_0;
		NullCheck(L_3);
		bool L_4;
		L_4 = String_StartsWith_mF75DBA1EB709811E711B44E26FF919C88A8E65C0(L_3, _stringLiteral56D7741BCA89552362FD24D11BB8980E3D8A444C, NULL);
		V_0 = L_4;
		bool L_5 = V_0;
		if (!L_5)
		{
			goto IL_0043;
		}
	}
	{
		// m_webSocket.SslConfiguration.EnabledSslProtocols =
		//     SslProtocols.Tls | SslProtocols.Tls11 | SslProtocols.Tls12;
		WebSocket_tBCA6DA25533993CDAE05954CA6F61926CF134BB4* L_6 = __this->___m_webSocket_6;
		NullCheck(L_6);
		ClientSslConfiguration_t212ECC383B70D9C462DC423E9D3CD27C9E74A603* L_7;
		L_7 = WebSocket_get_SslConfiguration_mBDAF6EF7F17D7803842800CE350BD0FDD4EC7B42(L_6, NULL);
		NullCheck(L_7);
		ClientSslConfiguration_set_EnabledSslProtocols_mB560EC68BCD7965457E59AC7C3843CF050AEB96F(L_7, ((int32_t)4032), NULL);
	}

IL_0043:
	{
		// m_webSocket.OnOpen += WSConnected;
		WebSocket_tBCA6DA25533993CDAE05954CA6F61926CF134BB4* L_8 = __this->___m_webSocket_6;
		EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* L_9 = (EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82*)il2cpp_codegen_object_new(EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82_il2cpp_TypeInfo_var);
		NullCheck(L_9);
		EventHandler__ctor_m95444CE8D5A6F1AFC9793866C3FE884E732DCEB2(L_9, __this, (intptr_t)((void*)WebSocketSignaling_WSConnected_mD28D6B5B97E0B84086AFFDB5139A248174E86C10_RuntimeMethod_var), NULL);
		NullCheck(L_8);
		WebSocket_add_OnOpen_m5715FC4EA7375D9465E94D361613C8335F16CDCC(L_8, L_9, NULL);
		// m_webSocket.OnMessage += WSProcessMessage;
		WebSocket_tBCA6DA25533993CDAE05954CA6F61926CF134BB4* L_10 = __this->___m_webSocket_6;
		EventHandler_1_t8D76D9242722744EEBFEF94F3AE19600E1D651B9* L_11 = (EventHandler_1_t8D76D9242722744EEBFEF94F3AE19600E1D651B9*)il2cpp_codegen_object_new(EventHandler_1_t8D76D9242722744EEBFEF94F3AE19600E1D651B9_il2cpp_TypeInfo_var);
		NullCheck(L_11);
		EventHandler_1__ctor_mBFF738C5B4A324ADE86116FCFB14BEBD465E278C(L_11, __this, (intptr_t)((void*)WebSocketSignaling_WSProcessMessage_m9BC18052522F1ADC3781E186DA401EB7D9337C46_RuntimeMethod_var), NULL);
		NullCheck(L_10);
		WebSocket_add_OnMessage_m958CB5E0C0A476F4D5AC753E1351F359717B4815(L_10, L_11, NULL);
		// m_webSocket.OnError += WSError;
		WebSocket_tBCA6DA25533993CDAE05954CA6F61926CF134BB4* L_12 = __this->___m_webSocket_6;
		EventHandler_1_tEF41E797A6883ACCC9C7536EEEB557E1EFC8C291* L_13 = (EventHandler_1_tEF41E797A6883ACCC9C7536EEEB557E1EFC8C291*)il2cpp_codegen_object_new(EventHandler_1_tEF41E797A6883ACCC9C7536EEEB557E1EFC8C291_il2cpp_TypeInfo_var);
		NullCheck(L_13);
		EventHandler_1__ctor_mEE692A37B9A9F48312806EC0503F42A6C0ECB289(L_13, __this, (intptr_t)((void*)WebSocketSignaling_WSError_mB634A7245B74AF24881D111C814634A72586ADA9_RuntimeMethod_var), NULL);
		NullCheck(L_12);
		WebSocket_add_OnError_mC3207DE386AE7B354D314B5CB8F407702E72E95E(L_12, L_13, NULL);
		// m_webSocket.OnClose += WSClosed;
		WebSocket_tBCA6DA25533993CDAE05954CA6F61926CF134BB4* L_14 = __this->___m_webSocket_6;
		EventHandler_1_t522FAB2F4CBA6A3D12166027B1D4A1C8C94D68E5* L_15 = (EventHandler_1_t522FAB2F4CBA6A3D12166027B1D4A1C8C94D68E5*)il2cpp_codegen_object_new(EventHandler_1_t522FAB2F4CBA6A3D12166027B1D4A1C8C94D68E5_il2cpp_TypeInfo_var);
		NullCheck(L_15);
		EventHandler_1__ctor_m3E0F9E4A1E4586F7783A529A94CF899EF217E3D1(L_15, __this, (intptr_t)((void*)WebSocketSignaling_WSClosed_mB101C26ECD6C7C8361A689FEAFB6711FBC81C8F3_RuntimeMethod_var), NULL);
		NullCheck(L_14);
		WebSocket_add_OnClose_m09A4F73CC7535D8206A52A8CFBAAA4206D87C0B0(L_14, L_15, NULL);
		// Monitor.Enter(m_webSocket);
		WebSocket_tBCA6DA25533993CDAE05954CA6F61926CF134BB4* L_16 = __this->___m_webSocket_6;
		Monitor_Enter_m2F86C66A2C7C7D8D4A7CC05AF72E3AE3AAB4E529(L_16, NULL);
		// Debug.Log($"Signaling: Connecting WS {m_url}");
		String_t* L_17 = __this->___m_url_0;
		String_t* L_18;
		L_18 = String_Concat_mAF2CE02CC0CB7460753D0A1A91CCF2B1E9804C5D(_stringLiteralB291DDBE097863E5F2E2AF085D00F6BAA42C7409, L_17, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m86567BCF22BBE7809747817453CACA0E41E68219(L_18, NULL);
		// m_webSocket.ConnectAsync();
		WebSocket_tBCA6DA25533993CDAE05954CA6F61926CF134BB4* L_19 = __this->___m_webSocket_6;
		NullCheck(L_19);
		WebSocket_ConnectAsync_mB0D857484E7F5D17F380F7DD542534D4D7C43F9A(L_19, NULL);
		// }
		return;
	}
}
// System.Void Unity.RenderStreaming.Signaling.WebSocketSignaling::WSProcessMessage(System.Object,WebSocketSharp.MessageEventArgs)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebSocketSignaling_WSProcessMessage_m9BC18052522F1ADC3781E186DA401EB7D9337C46 (WebSocketSignaling_t1CF887D8D67DBF0E7FA4D9FFD852C1656BCAB60F* __this, RuntimeObject* ___sender0, MessageEventArgs_tAA9D7AC324337F7494A3084C3A2E5ECA24AA6BD4* ___e1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CandidateData_t37575B19A1050FDC713708C9C0CBD2EB498F2567_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DescData_tA4EB7C7305FA906F4E120329023F8C778EFCB1B8_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonUtility_FromJson_TisRoutedMessage_1_t4D757D0545252511B26BDC0D6D8F2C2F36DF1664_mEB26E05A22F9AB83AE1FD09DEF8BFE7E2D646DC2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonUtility_FromJson_TisSignalingMessage_t2661291D3E1FD73AA68A5F4C6F56E2D48DD28F75_m4661B0E5AB867B5EC321C3BE8B5060494FCBF55E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SendOrPostCallback_t5C292A12062F24027A98492F52ECFE9802AA6F0E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass40_0_U3CWSProcessMessageU3Eb__0_m8167F73D148449556A63867E9823576D10F38AB2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass40_0_U3CWSProcessMessageU3Eb__1_m9ACC4D613B84AEA48E9464A39D4C0B6D5225AEE9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass40_0_t99C91E680A787779B8EF8C4F759C3D5F0253CD9C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass40_1_U3CWSProcessMessageU3Eb__2_mAB198CB34675DCD657CC4AEE1A04047741CD7F77_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass40_1_t89052BF20BD4AE4E27BCEE4CB46B0449FE981A85_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass40_2_U3CWSProcessMessageU3Eb__3_m0D4D8D94FD9BE6A44BF2EEAE69B832D00BFE18BD_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass40_2_t2FD87832B5721C3236040338A04B8D226CE932FA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass40_3_U3CWSProcessMessageU3Eb__4_mEADFA38B7E32E5B9F4C86E2738EB04F876D2B78A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass40_3_t2495E95291EA54819DDC684E5F9994BF6C7D7158_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0FD7B3C1033C1EF1C45607B35492B62E1CFC7C11);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4FB3818413F5C6BB2073C3F5D962C6CBF406B669);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8FD2FCE61414AB2192F02CF2453DC0DD532613F8);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBB3781D7286A764A3E7F998A050070B48E727D5B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC21AA4F5FE69346E31AFC76EDFE0CD96E3B75776);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF15E72E03C607420BD2E3D65E07F0C50155C1C30);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFCA74A9060DDEE6A3ECAE73E6AB96086770BE7E2);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	U3CU3Ec__DisplayClass40_0_t99C91E680A787779B8EF8C4F759C3D5F0253CD9C* V_1 = NULL;
	RoutedMessage_1_t4D757D0545252511B26BDC0D6D8F2C2F36DF1664* V_2 = NULL;
	bool V_3 = false;
	bool V_4 = false;
	bool V_5 = false;
	bool V_6 = false;
	bool V_7 = false;
	U3CU3Ec__DisplayClass40_1_t89052BF20BD4AE4E27BCEE4CB46B0449FE981A85* V_8 = NULL;
	bool V_9 = false;
	U3CU3Ec__DisplayClass40_2_t2FD87832B5721C3236040338A04B8D226CE932FA* V_10 = NULL;
	bool V_11 = false;
	U3CU3Ec__DisplayClass40_3_t2495E95291EA54819DDC684E5F9994BF6C7D7158* V_12 = NULL;
	bool V_13 = false;
	Exception_t* V_14 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	Exception_t* G_B21_0 = NULL;
	String_t* G_B21_1 = NULL;
	Exception_t* G_B20_0 = NULL;
	String_t* G_B20_1 = NULL;
	String_t* G_B22_0 = NULL;
	String_t* G_B22_1 = NULL;
	{
		// var content = Encoding.UTF8.GetString(e.RawData);
		Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* L_0;
		L_0 = Encoding_get_UTF8_m9700ADA8E0F244002B2A89B483F1B2133B8FE336(NULL);
		MessageEventArgs_tAA9D7AC324337F7494A3084C3A2E5ECA24AA6BD4* L_1 = ___e1;
		NullCheck(L_1);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_2;
		L_2 = MessageEventArgs_get_RawData_m3DC965D70E03A0373E4AE2C84B34C6F5D871D76F(L_1, NULL);
		NullCheck(L_0);
		String_t* L_3;
		L_3 = VirtualFuncInvoker1< String_t*, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* >::Invoke(33 /* System.String System.Text.Encoding::GetString(System.Byte[]) */, L_0, L_2);
		V_0 = L_3;
		// Debug.Log($"Signaling: Receiving message: {content}");
		String_t* L_4 = V_0;
		String_t* L_5;
		L_5 = String_Concat_mAF2CE02CC0CB7460753D0A1A91CCF2B1E9804C5D(_stringLiteralBB3781D7286A764A3E7F998A050070B48E727D5B, L_4, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m86567BCF22BBE7809747817453CACA0E41E68219(L_5, NULL);
	}
	try
	{// begin try (depth: 1)
		{
			U3CU3Ec__DisplayClass40_0_t99C91E680A787779B8EF8C4F759C3D5F0253CD9C* L_6 = (U3CU3Ec__DisplayClass40_0_t99C91E680A787779B8EF8C4F759C3D5F0253CD9C*)il2cpp_codegen_object_new(U3CU3Ec__DisplayClass40_0_t99C91E680A787779B8EF8C4F759C3D5F0253CD9C_il2cpp_TypeInfo_var);
			NullCheck(L_6);
			U3CU3Ec__DisplayClass40_0__ctor_mC33BA204DE3B19BEBCDAB1103BDC82F65B4D5FD9(L_6, NULL);
			V_1 = L_6;
			U3CU3Ec__DisplayClass40_0_t99C91E680A787779B8EF8C4F759C3D5F0253CD9C* L_7 = V_1;
			NullCheck(L_7);
			L_7->___U3CU3E4__this_1 = __this;
			Il2CppCodeGenWriteBarrier((void**)(&L_7->___U3CU3E4__this_1), (void*)__this);
			// var routedMessage = JsonUtility.FromJson<RoutedMessage<SignalingMessage>>(content);
			String_t* L_8 = V_0;
			RoutedMessage_1_t4D757D0545252511B26BDC0D6D8F2C2F36DF1664* L_9;
			L_9 = JsonUtility_FromJson_TisRoutedMessage_1_t4D757D0545252511B26BDC0D6D8F2C2F36DF1664_mEB26E05A22F9AB83AE1FD09DEF8BFE7E2D646DC2(L_8, JsonUtility_FromJson_TisRoutedMessage_1_t4D757D0545252511B26BDC0D6D8F2C2F36DF1664_mEB26E05A22F9AB83AE1FD09DEF8BFE7E2D646DC2_RuntimeMethod_var);
			V_2 = L_9;
			// if (!string.IsNullOrEmpty(routedMessage.type))
			RoutedMessage_1_t4D757D0545252511B26BDC0D6D8F2C2F36DF1664* L_10 = V_2;
			NullCheck(L_10);
			String_t* L_11 = L_10->___type_2;
			bool L_12;
			L_12 = String_IsNullOrEmpty_m54CF0907E7C4F3AFB2E796A13DC751ECBB8DB64A(L_11, NULL);
			V_3 = (bool)((((int32_t)L_12) == ((int32_t)0))? 1 : 0);
			bool L_13 = V_3;
			if (!L_13)
			{
				goto IL_005a_1;
			}
		}
		{
			// msg = routedMessage.data;
			U3CU3Ec__DisplayClass40_0_t99C91E680A787779B8EF8C4F759C3D5F0253CD9C* L_14 = V_1;
			RoutedMessage_1_t4D757D0545252511B26BDC0D6D8F2C2F36DF1664* L_15 = V_2;
			NullCheck(L_15);
			SignalingMessage_t2661291D3E1FD73AA68A5F4C6F56E2D48DD28F75* L_16 = L_15->___data_3;
			NullCheck(L_14);
			L_14->___msg_0 = L_16;
			Il2CppCodeGenWriteBarrier((void**)(&L_14->___msg_0), (void*)L_16);
			goto IL_0068_1;
		}

IL_005a_1:
		{
			// msg = JsonUtility.FromJson<SignalingMessage>(content);
			U3CU3Ec__DisplayClass40_0_t99C91E680A787779B8EF8C4F759C3D5F0253CD9C* L_17 = V_1;
			String_t* L_18 = V_0;
			SignalingMessage_t2661291D3E1FD73AA68A5F4C6F56E2D48DD28F75* L_19;
			L_19 = JsonUtility_FromJson_TisSignalingMessage_t2661291D3E1FD73AA68A5F4C6F56E2D48DD28F75_m4661B0E5AB867B5EC321C3BE8B5060494FCBF55E(L_18, JsonUtility_FromJson_TisSignalingMessage_t2661291D3E1FD73AA68A5F4C6F56E2D48DD28F75_m4661B0E5AB867B5EC321C3BE8B5060494FCBF55E_RuntimeMethod_var);
			NullCheck(L_17);
			L_17->___msg_0 = L_19;
			Il2CppCodeGenWriteBarrier((void**)(&L_17->___msg_0), (void*)L_19);
		}

IL_0068_1:
		{
			// if (!string.IsNullOrEmpty(routedMessage.type))
			RoutedMessage_1_t4D757D0545252511B26BDC0D6D8F2C2F36DF1664* L_20 = V_2;
			NullCheck(L_20);
			String_t* L_21 = L_20->___type_2;
			bool L_22;
			L_22 = String_IsNullOrEmpty_m54CF0907E7C4F3AFB2E796A13DC751ECBB8DB64A(L_21, NULL);
			V_4 = (bool)((((int32_t)L_22) == ((int32_t)0))? 1 : 0);
			bool L_23 = V_4;
			if (!L_23)
			{
				goto IL_02f3_1;
			}
		}
		{
			// if (routedMessage.type == "connect")
			RoutedMessage_1_t4D757D0545252511B26BDC0D6D8F2C2F36DF1664* L_24 = V_2;
			NullCheck(L_24);
			String_t* L_25 = L_24->___type_2;
			bool L_26;
			L_26 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_25, _stringLiteral0FD7B3C1033C1EF1C45607B35492B62E1CFC7C11, NULL);
			V_5 = L_26;
			bool L_27 = V_5;
			if (!L_27)
			{
				goto IL_00c2_1;
			}
		}
		{
			// msg = JsonUtility.FromJson<SignalingMessage>(content);
			U3CU3Ec__DisplayClass40_0_t99C91E680A787779B8EF8C4F759C3D5F0253CD9C* L_28 = V_1;
			String_t* L_29 = V_0;
			SignalingMessage_t2661291D3E1FD73AA68A5F4C6F56E2D48DD28F75* L_30;
			L_30 = JsonUtility_FromJson_TisSignalingMessage_t2661291D3E1FD73AA68A5F4C6F56E2D48DD28F75_m4661B0E5AB867B5EC321C3BE8B5060494FCBF55E(L_29, JsonUtility_FromJson_TisSignalingMessage_t2661291D3E1FD73AA68A5F4C6F56E2D48DD28F75_m4661B0E5AB867B5EC321C3BE8B5060494FCBF55E_RuntimeMethod_var);
			NullCheck(L_28);
			L_28->___msg_0 = L_30;
			Il2CppCodeGenWriteBarrier((void**)(&L_28->___msg_0), (void*)L_30);
			// m_mainThreadContext.Post(d => OnCreateConnection?.Invoke(this, msg.connectionId, msg.polite), null);
			SynchronizationContext_tCDB842BBE53B050802CBBB59C6E6DC45B5B06DC0* L_31 = __this->___m_mainThreadContext_2;
			U3CU3Ec__DisplayClass40_0_t99C91E680A787779B8EF8C4F759C3D5F0253CD9C* L_32 = V_1;
			SendOrPostCallback_t5C292A12062F24027A98492F52ECFE9802AA6F0E* L_33 = (SendOrPostCallback_t5C292A12062F24027A98492F52ECFE9802AA6F0E*)il2cpp_codegen_object_new(SendOrPostCallback_t5C292A12062F24027A98492F52ECFE9802AA6F0E_il2cpp_TypeInfo_var);
			NullCheck(L_33);
			SendOrPostCallback__ctor_mE6F9D9606A00C3C18AEA057422ECF4106C80DA37(L_33, L_32, (intptr_t)((void*)U3CU3Ec__DisplayClass40_0_U3CWSProcessMessageU3Eb__0_m8167F73D148449556A63867E9823576D10F38AB2_RuntimeMethod_var), NULL);
			NullCheck(L_31);
			VirtualActionInvoker2< SendOrPostCallback_t5C292A12062F24027A98492F52ECFE9802AA6F0E*, RuntimeObject* >::Invoke(5 /* System.Void System.Threading.SynchronizationContext::Post(System.Threading.SendOrPostCallback,System.Object) */, L_31, L_33, NULL);
			goto IL_02f2_1;
		}

IL_00c2_1:
		{
			// else if (routedMessage.type == "disconnect")
			RoutedMessage_1_t4D757D0545252511B26BDC0D6D8F2C2F36DF1664* L_34 = V_2;
			NullCheck(L_34);
			String_t* L_35 = L_34->___type_2;
			bool L_36;
			L_36 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_35, _stringLiteralC21AA4F5FE69346E31AFC76EDFE0CD96E3B75776, NULL);
			V_6 = L_36;
			bool L_37 = V_6;
			if (!L_37)
			{
				goto IL_0104_1;
			}
		}
		{
			// msg = JsonUtility.FromJson<SignalingMessage>(content);
			U3CU3Ec__DisplayClass40_0_t99C91E680A787779B8EF8C4F759C3D5F0253CD9C* L_38 = V_1;
			String_t* L_39 = V_0;
			SignalingMessage_t2661291D3E1FD73AA68A5F4C6F56E2D48DD28F75* L_40;
			L_40 = JsonUtility_FromJson_TisSignalingMessage_t2661291D3E1FD73AA68A5F4C6F56E2D48DD28F75_m4661B0E5AB867B5EC321C3BE8B5060494FCBF55E(L_39, JsonUtility_FromJson_TisSignalingMessage_t2661291D3E1FD73AA68A5F4C6F56E2D48DD28F75_m4661B0E5AB867B5EC321C3BE8B5060494FCBF55E_RuntimeMethod_var);
			NullCheck(L_38);
			L_38->___msg_0 = L_40;
			Il2CppCodeGenWriteBarrier((void**)(&L_38->___msg_0), (void*)L_40);
			// m_mainThreadContext.Post(d => OnDestroyConnection?.Invoke(this, msg.connectionId), null);
			SynchronizationContext_tCDB842BBE53B050802CBBB59C6E6DC45B5B06DC0* L_41 = __this->___m_mainThreadContext_2;
			U3CU3Ec__DisplayClass40_0_t99C91E680A787779B8EF8C4F759C3D5F0253CD9C* L_42 = V_1;
			SendOrPostCallback_t5C292A12062F24027A98492F52ECFE9802AA6F0E* L_43 = (SendOrPostCallback_t5C292A12062F24027A98492F52ECFE9802AA6F0E*)il2cpp_codegen_object_new(SendOrPostCallback_t5C292A12062F24027A98492F52ECFE9802AA6F0E_il2cpp_TypeInfo_var);
			NullCheck(L_43);
			SendOrPostCallback__ctor_mE6F9D9606A00C3C18AEA057422ECF4106C80DA37(L_43, L_42, (intptr_t)((void*)U3CU3Ec__DisplayClass40_0_U3CWSProcessMessageU3Eb__1_m9ACC4D613B84AEA48E9464A39D4C0B6D5225AEE9_RuntimeMethod_var), NULL);
			NullCheck(L_41);
			VirtualActionInvoker2< SendOrPostCallback_t5C292A12062F24027A98492F52ECFE9802AA6F0E*, RuntimeObject* >::Invoke(5 /* System.Void System.Threading.SynchronizationContext::Post(System.Threading.SendOrPostCallback,System.Object) */, L_41, L_43, NULL);
			goto IL_02f2_1;
		}

IL_0104_1:
		{
			// else if (routedMessage.type == "offer")
			RoutedMessage_1_t4D757D0545252511B26BDC0D6D8F2C2F36DF1664* L_44 = V_2;
			NullCheck(L_44);
			String_t* L_45 = L_44->___type_2;
			bool L_46;
			L_46 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_45, _stringLiteral8FD2FCE61414AB2192F02CF2453DC0DD532613F8, NULL);
			V_7 = L_46;
			bool L_47 = V_7;
			if (!L_47)
			{
				goto IL_01a5_1;
			}
		}
		{
			U3CU3Ec__DisplayClass40_1_t89052BF20BD4AE4E27BCEE4CB46B0449FE981A85* L_48 = (U3CU3Ec__DisplayClass40_1_t89052BF20BD4AE4E27BCEE4CB46B0449FE981A85*)il2cpp_codegen_object_new(U3CU3Ec__DisplayClass40_1_t89052BF20BD4AE4E27BCEE4CB46B0449FE981A85_il2cpp_TypeInfo_var);
			NullCheck(L_48);
			U3CU3Ec__DisplayClass40_1__ctor_m744586716828740663DF32DD5E1CDB5B89089230(L_48, NULL);
			V_8 = L_48;
			U3CU3Ec__DisplayClass40_1_t89052BF20BD4AE4E27BCEE4CB46B0449FE981A85* L_49 = V_8;
			U3CU3Ec__DisplayClass40_0_t99C91E680A787779B8EF8C4F759C3D5F0253CD9C* L_50 = V_1;
			NullCheck(L_49);
			L_49->___CSU24U3CU3E8__locals1_1 = L_50;
			Il2CppCodeGenWriteBarrier((void**)(&L_49->___CSU24U3CU3E8__locals1_1), (void*)L_50);
			// DescData offer = new DescData();
			U3CU3Ec__DisplayClass40_1_t89052BF20BD4AE4E27BCEE4CB46B0449FE981A85* L_51 = V_8;
			DescData_tA4EB7C7305FA906F4E120329023F8C778EFCB1B8* L_52 = (DescData_tA4EB7C7305FA906F4E120329023F8C778EFCB1B8*)il2cpp_codegen_object_new(DescData_tA4EB7C7305FA906F4E120329023F8C778EFCB1B8_il2cpp_TypeInfo_var);
			NullCheck(L_52);
			DescData__ctor_m3AA5A3312C9E853B796FA9EFAB20A23AFBE6169B(L_52, NULL);
			NullCheck(L_51);
			L_51->___offer_0 = L_52;
			Il2CppCodeGenWriteBarrier((void**)(&L_51->___offer_0), (void*)L_52);
			// offer.connectionId = routedMessage.from;
			U3CU3Ec__DisplayClass40_1_t89052BF20BD4AE4E27BCEE4CB46B0449FE981A85* L_53 = V_8;
			NullCheck(L_53);
			DescData_tA4EB7C7305FA906F4E120329023F8C778EFCB1B8* L_54 = L_53->___offer_0;
			RoutedMessage_1_t4D757D0545252511B26BDC0D6D8F2C2F36DF1664* L_55 = V_2;
			NullCheck(L_55);
			String_t* L_56 = L_55->___from_0;
			NullCheck(L_54);
			L_54->___connectionId_0 = L_56;
			Il2CppCodeGenWriteBarrier((void**)(&L_54->___connectionId_0), (void*)L_56);
			// offer.sdp = msg.sdp;
			U3CU3Ec__DisplayClass40_1_t89052BF20BD4AE4E27BCEE4CB46B0449FE981A85* L_57 = V_8;
			NullCheck(L_57);
			DescData_tA4EB7C7305FA906F4E120329023F8C778EFCB1B8* L_58 = L_57->___offer_0;
			U3CU3Ec__DisplayClass40_1_t89052BF20BD4AE4E27BCEE4CB46B0449FE981A85* L_59 = V_8;
			NullCheck(L_59);
			U3CU3Ec__DisplayClass40_0_t99C91E680A787779B8EF8C4F759C3D5F0253CD9C* L_60 = L_59->___CSU24U3CU3E8__locals1_1;
			NullCheck(L_60);
			SignalingMessage_t2661291D3E1FD73AA68A5F4C6F56E2D48DD28F75* L_61 = L_60->___msg_0;
			NullCheck(L_61);
			String_t* L_62 = L_61->___sdp_5;
			NullCheck(L_58);
			L_58->___sdp_1 = L_62;
			Il2CppCodeGenWriteBarrier((void**)(&L_58->___sdp_1), (void*)L_62);
			// offer.polite = msg.polite;
			U3CU3Ec__DisplayClass40_1_t89052BF20BD4AE4E27BCEE4CB46B0449FE981A85* L_63 = V_8;
			NullCheck(L_63);
			DescData_tA4EB7C7305FA906F4E120329023F8C778EFCB1B8* L_64 = L_63->___offer_0;
			U3CU3Ec__DisplayClass40_1_t89052BF20BD4AE4E27BCEE4CB46B0449FE981A85* L_65 = V_8;
			NullCheck(L_65);
			U3CU3Ec__DisplayClass40_0_t99C91E680A787779B8EF8C4F759C3D5F0253CD9C* L_66 = L_65->___CSU24U3CU3E8__locals1_1;
			NullCheck(L_66);
			SignalingMessage_t2661291D3E1FD73AA68A5F4C6F56E2D48DD28F75* L_67 = L_66->___msg_0;
			NullCheck(L_67);
			bool L_68 = L_67->___polite_4;
			NullCheck(L_64);
			L_64->___polite_3 = L_68;
			// m_mainThreadContext.Post(d => OnOffer?.Invoke(this, offer), null);
			SynchronizationContext_tCDB842BBE53B050802CBBB59C6E6DC45B5B06DC0* L_69 = __this->___m_mainThreadContext_2;
			U3CU3Ec__DisplayClass40_1_t89052BF20BD4AE4E27BCEE4CB46B0449FE981A85* L_70 = V_8;
			SendOrPostCallback_t5C292A12062F24027A98492F52ECFE9802AA6F0E* L_71 = (SendOrPostCallback_t5C292A12062F24027A98492F52ECFE9802AA6F0E*)il2cpp_codegen_object_new(SendOrPostCallback_t5C292A12062F24027A98492F52ECFE9802AA6F0E_il2cpp_TypeInfo_var);
			NullCheck(L_71);
			SendOrPostCallback__ctor_mE6F9D9606A00C3C18AEA057422ECF4106C80DA37(L_71, L_70, (intptr_t)((void*)U3CU3Ec__DisplayClass40_1_U3CWSProcessMessageU3Eb__2_mAB198CB34675DCD657CC4AEE1A04047741CD7F77_RuntimeMethod_var), NULL);
			NullCheck(L_69);
			VirtualActionInvoker2< SendOrPostCallback_t5C292A12062F24027A98492F52ECFE9802AA6F0E*, RuntimeObject* >::Invoke(5 /* System.Void System.Threading.SynchronizationContext::Post(System.Threading.SendOrPostCallback,System.Object) */, L_69, L_71, NULL);
			goto IL_02f2_1;
		}

IL_01a5_1:
		{
			// else if (routedMessage.type == "answer")
			RoutedMessage_1_t4D757D0545252511B26BDC0D6D8F2C2F36DF1664* L_72 = V_2;
			NullCheck(L_72);
			String_t* L_73 = L_72->___type_2;
			bool L_74;
			L_74 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_73, _stringLiteralF15E72E03C607420BD2E3D65E07F0C50155C1C30, NULL);
			V_9 = L_74;
			bool L_75 = V_9;
			if (!L_75)
			{
				goto IL_021a_1;
			}
		}
		{
			U3CU3Ec__DisplayClass40_2_t2FD87832B5721C3236040338A04B8D226CE932FA* L_76 = (U3CU3Ec__DisplayClass40_2_t2FD87832B5721C3236040338A04B8D226CE932FA*)il2cpp_codegen_object_new(U3CU3Ec__DisplayClass40_2_t2FD87832B5721C3236040338A04B8D226CE932FA_il2cpp_TypeInfo_var);
			NullCheck(L_76);
			U3CU3Ec__DisplayClass40_2__ctor_mD9FEA819678038BFB1B548742BB98A35D2DE831F(L_76, NULL);
			V_10 = L_76;
			U3CU3Ec__DisplayClass40_2_t2FD87832B5721C3236040338A04B8D226CE932FA* L_77 = V_10;
			U3CU3Ec__DisplayClass40_0_t99C91E680A787779B8EF8C4F759C3D5F0253CD9C* L_78 = V_1;
			NullCheck(L_77);
			L_77->___CSU24U3CU3E8__locals2_1 = L_78;
			Il2CppCodeGenWriteBarrier((void**)(&L_77->___CSU24U3CU3E8__locals2_1), (void*)L_78);
			// DescData answer = new DescData
			// {
			//     connectionId = routedMessage.from,
			//     sdp = msg.sdp
			// };
			U3CU3Ec__DisplayClass40_2_t2FD87832B5721C3236040338A04B8D226CE932FA* L_79 = V_10;
			DescData_tA4EB7C7305FA906F4E120329023F8C778EFCB1B8* L_80 = (DescData_tA4EB7C7305FA906F4E120329023F8C778EFCB1B8*)il2cpp_codegen_object_new(DescData_tA4EB7C7305FA906F4E120329023F8C778EFCB1B8_il2cpp_TypeInfo_var);
			NullCheck(L_80);
			DescData__ctor_m3AA5A3312C9E853B796FA9EFAB20A23AFBE6169B(L_80, NULL);
			DescData_tA4EB7C7305FA906F4E120329023F8C778EFCB1B8* L_81 = L_80;
			RoutedMessage_1_t4D757D0545252511B26BDC0D6D8F2C2F36DF1664* L_82 = V_2;
			NullCheck(L_82);
			String_t* L_83 = L_82->___from_0;
			NullCheck(L_81);
			L_81->___connectionId_0 = L_83;
			Il2CppCodeGenWriteBarrier((void**)(&L_81->___connectionId_0), (void*)L_83);
			DescData_tA4EB7C7305FA906F4E120329023F8C778EFCB1B8* L_84 = L_81;
			U3CU3Ec__DisplayClass40_2_t2FD87832B5721C3236040338A04B8D226CE932FA* L_85 = V_10;
			NullCheck(L_85);
			U3CU3Ec__DisplayClass40_0_t99C91E680A787779B8EF8C4F759C3D5F0253CD9C* L_86 = L_85->___CSU24U3CU3E8__locals2_1;
			NullCheck(L_86);
			SignalingMessage_t2661291D3E1FD73AA68A5F4C6F56E2D48DD28F75* L_87 = L_86->___msg_0;
			NullCheck(L_87);
			String_t* L_88 = L_87->___sdp_5;
			NullCheck(L_84);
			L_84->___sdp_1 = L_88;
			Il2CppCodeGenWriteBarrier((void**)(&L_84->___sdp_1), (void*)L_88);
			NullCheck(L_79);
			L_79->___answer_0 = L_84;
			Il2CppCodeGenWriteBarrier((void**)(&L_79->___answer_0), (void*)L_84);
			// m_mainThreadContext.Post(d => OnAnswer?.Invoke(this, answer), null);
			SynchronizationContext_tCDB842BBE53B050802CBBB59C6E6DC45B5B06DC0* L_89 = __this->___m_mainThreadContext_2;
			U3CU3Ec__DisplayClass40_2_t2FD87832B5721C3236040338A04B8D226CE932FA* L_90 = V_10;
			SendOrPostCallback_t5C292A12062F24027A98492F52ECFE9802AA6F0E* L_91 = (SendOrPostCallback_t5C292A12062F24027A98492F52ECFE9802AA6F0E*)il2cpp_codegen_object_new(SendOrPostCallback_t5C292A12062F24027A98492F52ECFE9802AA6F0E_il2cpp_TypeInfo_var);
			NullCheck(L_91);
			SendOrPostCallback__ctor_mE6F9D9606A00C3C18AEA057422ECF4106C80DA37(L_91, L_90, (intptr_t)((void*)U3CU3Ec__DisplayClass40_2_U3CWSProcessMessageU3Eb__3_m0D4D8D94FD9BE6A44BF2EEAE69B832D00BFE18BD_RuntimeMethod_var), NULL);
			NullCheck(L_89);
			VirtualActionInvoker2< SendOrPostCallback_t5C292A12062F24027A98492F52ECFE9802AA6F0E*, RuntimeObject* >::Invoke(5 /* System.Void System.Threading.SynchronizationContext::Post(System.Threading.SendOrPostCallback,System.Object) */, L_89, L_91, NULL);
			goto IL_02f2_1;
		}

IL_021a_1:
		{
			// else if (routedMessage.type == "candidate")
			RoutedMessage_1_t4D757D0545252511B26BDC0D6D8F2C2F36DF1664* L_92 = V_2;
			NullCheck(L_92);
			String_t* L_93 = L_92->___type_2;
			bool L_94;
			L_94 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_93, _stringLiteral4FB3818413F5C6BB2073C3F5D962C6CBF406B669, NULL);
			V_11 = L_94;
			bool L_95 = V_11;
			if (!L_95)
			{
				goto IL_02bd_1;
			}
		}
		{
			U3CU3Ec__DisplayClass40_3_t2495E95291EA54819DDC684E5F9994BF6C7D7158* L_96 = (U3CU3Ec__DisplayClass40_3_t2495E95291EA54819DDC684E5F9994BF6C7D7158*)il2cpp_codegen_object_new(U3CU3Ec__DisplayClass40_3_t2495E95291EA54819DDC684E5F9994BF6C7D7158_il2cpp_TypeInfo_var);
			NullCheck(L_96);
			U3CU3Ec__DisplayClass40_3__ctor_mE0EB2F1A998025C39B456F26A187708D04D48811(L_96, NULL);
			V_12 = L_96;
			U3CU3Ec__DisplayClass40_3_t2495E95291EA54819DDC684E5F9994BF6C7D7158* L_97 = V_12;
			U3CU3Ec__DisplayClass40_0_t99C91E680A787779B8EF8C4F759C3D5F0253CD9C* L_98 = V_1;
			NullCheck(L_97);
			L_97->___CSU24U3CU3E8__locals3_1 = L_98;
			Il2CppCodeGenWriteBarrier((void**)(&L_97->___CSU24U3CU3E8__locals3_1), (void*)L_98);
			// CandidateData candidate = new CandidateData
			// {
			//     connectionId = routedMessage.@from,
			//     candidate = msg.candidate,
			//     sdpMLineIndex = msg.sdpMLineIndex,
			//     sdpMid = msg.sdpMid
			// };
			U3CU3Ec__DisplayClass40_3_t2495E95291EA54819DDC684E5F9994BF6C7D7158* L_99 = V_12;
			CandidateData_t37575B19A1050FDC713708C9C0CBD2EB498F2567* L_100 = (CandidateData_t37575B19A1050FDC713708C9C0CBD2EB498F2567*)il2cpp_codegen_object_new(CandidateData_t37575B19A1050FDC713708C9C0CBD2EB498F2567_il2cpp_TypeInfo_var);
			NullCheck(L_100);
			CandidateData__ctor_mA859EFF28F12E2966E9D35A302FF8674F4C12A88(L_100, NULL);
			CandidateData_t37575B19A1050FDC713708C9C0CBD2EB498F2567* L_101 = L_100;
			RoutedMessage_1_t4D757D0545252511B26BDC0D6D8F2C2F36DF1664* L_102 = V_2;
			NullCheck(L_102);
			String_t* L_103 = L_102->___from_0;
			NullCheck(L_101);
			L_101->___connectionId_0 = L_103;
			Il2CppCodeGenWriteBarrier((void**)(&L_101->___connectionId_0), (void*)L_103);
			CandidateData_t37575B19A1050FDC713708C9C0CBD2EB498F2567* L_104 = L_101;
			U3CU3Ec__DisplayClass40_3_t2495E95291EA54819DDC684E5F9994BF6C7D7158* L_105 = V_12;
			NullCheck(L_105);
			U3CU3Ec__DisplayClass40_0_t99C91E680A787779B8EF8C4F759C3D5F0253CD9C* L_106 = L_105->___CSU24U3CU3E8__locals3_1;
			NullCheck(L_106);
			SignalingMessage_t2661291D3E1FD73AA68A5F4C6F56E2D48DD28F75* L_107 = L_106->___msg_0;
			NullCheck(L_107);
			String_t* L_108 = L_107->___candidate_7;
			NullCheck(L_104);
			L_104->___candidate_1 = L_108;
			Il2CppCodeGenWriteBarrier((void**)(&L_104->___candidate_1), (void*)L_108);
			CandidateData_t37575B19A1050FDC713708C9C0CBD2EB498F2567* L_109 = L_104;
			U3CU3Ec__DisplayClass40_3_t2495E95291EA54819DDC684E5F9994BF6C7D7158* L_110 = V_12;
			NullCheck(L_110);
			U3CU3Ec__DisplayClass40_0_t99C91E680A787779B8EF8C4F759C3D5F0253CD9C* L_111 = L_110->___CSU24U3CU3E8__locals3_1;
			NullCheck(L_111);
			SignalingMessage_t2661291D3E1FD73AA68A5F4C6F56E2D48DD28F75* L_112 = L_111->___msg_0;
			NullCheck(L_112);
			int32_t L_113 = L_112->___sdpMLineIndex_9;
			NullCheck(L_109);
			L_109->___sdpMLineIndex_3 = L_113;
			CandidateData_t37575B19A1050FDC713708C9C0CBD2EB498F2567* L_114 = L_109;
			U3CU3Ec__DisplayClass40_3_t2495E95291EA54819DDC684E5F9994BF6C7D7158* L_115 = V_12;
			NullCheck(L_115);
			U3CU3Ec__DisplayClass40_0_t99C91E680A787779B8EF8C4F759C3D5F0253CD9C* L_116 = L_115->___CSU24U3CU3E8__locals3_1;
			NullCheck(L_116);
			SignalingMessage_t2661291D3E1FD73AA68A5F4C6F56E2D48DD28F75* L_117 = L_116->___msg_0;
			NullCheck(L_117);
			String_t* L_118 = L_117->___sdpMid_8;
			NullCheck(L_114);
			L_114->___sdpMid_2 = L_118;
			Il2CppCodeGenWriteBarrier((void**)(&L_114->___sdpMid_2), (void*)L_118);
			NullCheck(L_99);
			L_99->___candidate_0 = L_114;
			Il2CppCodeGenWriteBarrier((void**)(&L_99->___candidate_0), (void*)L_114);
			// m_mainThreadContext.Post(d => OnIceCandidate?.Invoke(this, candidate), null);
			SynchronizationContext_tCDB842BBE53B050802CBBB59C6E6DC45B5B06DC0* L_119 = __this->___m_mainThreadContext_2;
			U3CU3Ec__DisplayClass40_3_t2495E95291EA54819DDC684E5F9994BF6C7D7158* L_120 = V_12;
			SendOrPostCallback_t5C292A12062F24027A98492F52ECFE9802AA6F0E* L_121 = (SendOrPostCallback_t5C292A12062F24027A98492F52ECFE9802AA6F0E*)il2cpp_codegen_object_new(SendOrPostCallback_t5C292A12062F24027A98492F52ECFE9802AA6F0E_il2cpp_TypeInfo_var);
			NullCheck(L_121);
			SendOrPostCallback__ctor_mE6F9D9606A00C3C18AEA057422ECF4106C80DA37(L_121, L_120, (intptr_t)((void*)U3CU3Ec__DisplayClass40_3_U3CWSProcessMessageU3Eb__4_mEADFA38B7E32E5B9F4C86E2738EB04F876D2B78A_RuntimeMethod_var), NULL);
			NullCheck(L_119);
			VirtualActionInvoker2< SendOrPostCallback_t5C292A12062F24027A98492F52ECFE9802AA6F0E*, RuntimeObject* >::Invoke(5 /* System.Void System.Threading.SynchronizationContext::Post(System.Threading.SendOrPostCallback,System.Object) */, L_119, L_121, NULL);
			goto IL_02f2_1;
		}

IL_02bd_1:
		{
			// else if (routedMessage.type == "error")
			RoutedMessage_1_t4D757D0545252511B26BDC0D6D8F2C2F36DF1664* L_122 = V_2;
			NullCheck(L_122);
			String_t* L_123 = L_122->___type_2;
			bool L_124;
			L_124 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_123, _stringLiteralFCA74A9060DDEE6A3ECAE73E6AB96086770BE7E2, NULL);
			V_13 = L_124;
			bool L_125 = V_13;
			if (!L_125)
			{
				goto IL_02f2_1;
			}
		}
		{
			// msg = JsonUtility.FromJson<SignalingMessage>(content);
			U3CU3Ec__DisplayClass40_0_t99C91E680A787779B8EF8C4F759C3D5F0253CD9C* L_126 = V_1;
			String_t* L_127 = V_0;
			SignalingMessage_t2661291D3E1FD73AA68A5F4C6F56E2D48DD28F75* L_128;
			L_128 = JsonUtility_FromJson_TisSignalingMessage_t2661291D3E1FD73AA68A5F4C6F56E2D48DD28F75_m4661B0E5AB867B5EC321C3BE8B5060494FCBF55E(L_127, JsonUtility_FromJson_TisSignalingMessage_t2661291D3E1FD73AA68A5F4C6F56E2D48DD28F75_m4661B0E5AB867B5EC321C3BE8B5060494FCBF55E_RuntimeMethod_var);
			NullCheck(L_126);
			L_126->___msg_0 = L_128;
			Il2CppCodeGenWriteBarrier((void**)(&L_126->___msg_0), (void*)L_128);
			// Debug.LogError(msg.message);
			U3CU3Ec__DisplayClass40_0_t99C91E680A787779B8EF8C4F759C3D5F0253CD9C* L_129 = V_1;
			NullCheck(L_129);
			SignalingMessage_t2661291D3E1FD73AA68A5F4C6F56E2D48DD28F75* L_130 = L_129->___msg_0;
			NullCheck(L_130);
			String_t* L_131 = L_130->___message_1;
			il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
			Debug_LogError_m059825802BB6AF7EA9693FEBEEB0D85F59A3E38E(L_131, NULL);
		}

IL_02f2_1:
		{
		}

IL_02f3_1:
		{
			goto IL_031a;
		}
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_02f6;
		}
		throw e;
	}

CATCH_02f6:
	{// begin catch(System.Exception)
		{
			// catch (Exception ex)
			V_14 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));
			// Debug.LogError("Signaling: Failed to parse message: " + ex);
			Exception_t* L_132 = V_14;
			Exception_t* L_133 = L_132;
			G_B20_0 = L_133;
			G_B20_1 = ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralC5F9A00AEC344617DD2E1677B514B1A5BEBCDDFC));
			if (L_133)
			{
				G_B21_0 = L_133;
				G_B21_1 = ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralC5F9A00AEC344617DD2E1677B514B1A5BEBCDDFC));
				goto IL_0307;
			}
		}
		{
			G_B22_0 = ((String_t*)(NULL));
			G_B22_1 = G_B20_1;
			goto IL_030c;
		}

IL_0307:
		{
			NullCheck(G_B21_0);
			String_t* L_134;
			L_134 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, G_B21_0);
			G_B22_0 = L_134;
			G_B22_1 = G_B21_1;
		}

IL_030c:
		{
			String_t* L_135;
			L_135 = String_Concat_mAF2CE02CC0CB7460753D0A1A91CCF2B1E9804C5D(G_B22_1, G_B22_0, NULL);
			il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var)));
			Debug_LogError_m059825802BB6AF7EA9693FEBEEB0D85F59A3E38E(L_135, NULL);
			IL2CPP_POP_ACTIVE_EXCEPTION();
			goto IL_031a;
		}
	}// end catch (depth: 1)

IL_031a:
	{
		// }
		return;
	}
}
// System.Void Unity.RenderStreaming.Signaling.WebSocketSignaling::WSConnected(System.Object,System.EventArgs)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebSocketSignaling_WSConnected_mD28D6B5B97E0B84086AFFDB5139A248174E86C10 (WebSocketSignaling_t1CF887D8D67DBF0E7FA4D9FFD852C1656BCAB60F* __this, RuntimeObject* ___sender0, EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377* ___e1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SendOrPostCallback_t5C292A12062F24027A98492F52ECFE9802AA6F0E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WebSocketSignaling_U3CWSConnectedU3Eb__41_0_m61689DEFD0E6CC072C559E8869F61FE18B5ED5F9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral35B7DCBEA1091B04EE590ABDB15EAB07E49F379A);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Debug.Log("Signaling: WS connected.");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m86567BCF22BBE7809747817453CACA0E41E68219(_stringLiteral35B7DCBEA1091B04EE590ABDB15EAB07E49F379A, NULL);
		// m_mainThreadContext.Post(d => OnStart?.Invoke(this), null);
		SynchronizationContext_tCDB842BBE53B050802CBBB59C6E6DC45B5B06DC0* L_0 = __this->___m_mainThreadContext_2;
		SendOrPostCallback_t5C292A12062F24027A98492F52ECFE9802AA6F0E* L_1 = (SendOrPostCallback_t5C292A12062F24027A98492F52ECFE9802AA6F0E*)il2cpp_codegen_object_new(SendOrPostCallback_t5C292A12062F24027A98492F52ECFE9802AA6F0E_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		SendOrPostCallback__ctor_mE6F9D9606A00C3C18AEA057422ECF4106C80DA37(L_1, __this, (intptr_t)((void*)WebSocketSignaling_U3CWSConnectedU3Eb__41_0_m61689DEFD0E6CC072C559E8869F61FE18B5ED5F9_RuntimeMethod_var), NULL);
		NullCheck(L_0);
		VirtualActionInvoker2< SendOrPostCallback_t5C292A12062F24027A98492F52ECFE9802AA6F0E*, RuntimeObject* >::Invoke(5 /* System.Void System.Threading.SynchronizationContext::Post(System.Threading.SendOrPostCallback,System.Object) */, L_0, L_1, NULL);
		// }
		return;
	}
}
// System.Void Unity.RenderStreaming.Signaling.WebSocketSignaling::WSError(System.Object,WebSocketSharp.ErrorEventArgs)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebSocketSignaling_WSError_mB634A7245B74AF24881D111C814634A72586ADA9 (WebSocketSignaling_t1CF887D8D67DBF0E7FA4D9FFD852C1656BCAB60F* __this, RuntimeObject* ___sender0, ErrorEventArgs_t4A4E35A3A95F4B9C871AB4E92A97A973C1711143* ___e1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral003531A8905C0318CCA6B86CFBA2B8FA0E6167FD);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Debug.LogError($"Signaling: WS connection error: {e.Message}");
		ErrorEventArgs_t4A4E35A3A95F4B9C871AB4E92A97A973C1711143* L_0 = ___e1;
		NullCheck(L_0);
		String_t* L_1;
		L_1 = ErrorEventArgs_get_Message_mEAB02AF06D891E7DA0A211E58CBE744A0C1F9F7A(L_0, NULL);
		String_t* L_2;
		L_2 = String_Concat_mAF2CE02CC0CB7460753D0A1A91CCF2B1E9804C5D(_stringLiteral003531A8905C0318CCA6B86CFBA2B8FA0E6167FD, L_1, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogError_m059825802BB6AF7EA9693FEBEEB0D85F59A3E38E(L_2, NULL);
		// }
		return;
	}
}
// System.Void Unity.RenderStreaming.Signaling.WebSocketSignaling::WSClosed(System.Object,WebSocketSharp.CloseEventArgs)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebSocketSignaling_WSClosed_mB101C26ECD6C7C8361A689FEAFB6711FBC81C8F3 (WebSocketSignaling_t1CF887D8D67DBF0E7FA4D9FFD852C1656BCAB60F* __this, RuntimeObject* ___sender0, CloseEventArgs_t5388F91E45CE32C877EA43C79F519682A7A7A609* ___e1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral876404D8489FA4C9A937BE834E63D4975D8904E0);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Debug.Log($"Signaling: WS connection closed, code: {e.Code}");
		CloseEventArgs_t5388F91E45CE32C877EA43C79F519682A7A7A609* L_0 = ___e1;
		NullCheck(L_0);
		uint16_t L_1;
		L_1 = CloseEventArgs_get_Code_m2E0325F4200D8AF0CA5537A890DAEC2670D197F4(L_0, NULL);
		uint16_t L_2 = L_1;
		RuntimeObject* L_3 = Box(UInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_il2cpp_TypeInfo_var, &L_2);
		String_t* L_4;
		L_4 = String_Format_m8C122B26BC5AA10E2550AECA16E57DAE10F07E30(_stringLiteral876404D8489FA4C9A937BE834E63D4975D8904E0, L_3, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m86567BCF22BBE7809747817453CACA0E41E68219(L_4, NULL);
		// m_wsCloseEvent.Set();
		AutoResetEvent_t7F792F3F7AD11BEF7B411E771D98E5266A8CE7C0* L_5 = __this->___m_wsCloseEvent_5;
		NullCheck(L_5);
		bool L_6;
		L_6 = EventWaitHandle_Set_mDF98D67F214714A9590DF82A1C51D3D851281E4D(L_5, NULL);
		// m_webSocket = null;
		__this->___m_webSocket_6 = (WebSocket_tBCA6DA25533993CDAE05954CA6F61926CF134BB4*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_webSocket_6), (void*)(WebSocket_tBCA6DA25533993CDAE05954CA6F61926CF134BB4*)NULL);
		// }
		return;
	}
}
// System.Void Unity.RenderStreaming.Signaling.WebSocketSignaling::WSSend(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebSocketSignaling_WSSend_mA1BBF1C4528CBA7B97ADA6775CE4B6B092B2A291 (WebSocketSignaling_t1CF887D8D67DBF0E7FA4D9FFD852C1656BCAB60F* __this, RuntimeObject* ___data0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral29CFF9E8577D5EAEC7E04E5FB6FBCD085686B9FE);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7120117F05D22D2E7896A683779335C0436DA385);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	bool V_1 = false;
	bool V_2 = false;
	String_t* V_3 = NULL;
	int32_t G_B3_0 = 0;
	{
		// if (m_webSocket == null || m_webSocket.ReadyState != WebSocketState.Open)
		WebSocket_tBCA6DA25533993CDAE05954CA6F61926CF134BB4* L_0 = __this->___m_webSocket_6;
		if (!L_0)
		{
			goto IL_001c;
		}
	}
	{
		WebSocket_tBCA6DA25533993CDAE05954CA6F61926CF134BB4* L_1 = __this->___m_webSocket_6;
		NullCheck(L_1);
		uint16_t L_2;
		L_2 = WebSocket_get_ReadyState_m43E1C9BDB871CA2D37F3F83FEC36A8E926B0A39C(L_1, NULL);
		G_B3_0 = ((((int32_t)((((int32_t)L_2) == ((int32_t)1))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_001d;
	}

IL_001c:
	{
		G_B3_0 = 1;
	}

IL_001d:
	{
		V_1 = (bool)G_B3_0;
		bool L_3 = V_1;
		if (!L_3)
		{
			goto IL_002f;
		}
	}
	{
		// Debug.LogError("Signaling: WS is not connected. Unable to send message");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogError_m059825802BB6AF7EA9693FEBEEB0D85F59A3E38E(_stringLiteral29CFF9E8577D5EAEC7E04E5FB6FBCD085686B9FE, NULL);
		// return;
		goto IL_0087;
	}

IL_002f:
	{
		// if (data is string s)
		RuntimeObject* L_4 = ___data0;
		V_0 = ((String_t*)IsInstSealed((RuntimeObject*)L_4, String_t_il2cpp_TypeInfo_var));
		String_t* L_5 = V_0;
		V_2 = (bool)((!(((RuntimeObject*)(String_t*)L_5) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_6 = V_2;
		if (!L_6)
		{
			goto IL_0060;
		}
	}
	{
		// Debug.Log("Signaling: Sending WS data: " + s);
		String_t* L_7 = V_0;
		String_t* L_8;
		L_8 = String_Concat_mAF2CE02CC0CB7460753D0A1A91CCF2B1E9804C5D(_stringLiteral7120117F05D22D2E7896A683779335C0436DA385, L_7, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m86567BCF22BBE7809747817453CACA0E41E68219(L_8, NULL);
		// m_webSocket.Send(s);
		WebSocket_tBCA6DA25533993CDAE05954CA6F61926CF134BB4* L_9 = __this->___m_webSocket_6;
		String_t* L_10 = V_0;
		NullCheck(L_9);
		WebSocket_Send_mE275781E5A051D124CA6603C6DDF357E777DF3D1(L_9, L_10, NULL);
		goto IL_0087;
	}

IL_0060:
	{
		// string str = JsonUtility.ToJson(data);
		RuntimeObject* L_11 = ___data0;
		String_t* L_12;
		L_12 = JsonUtility_ToJson_mD0FB24DC5A8621A2473FC208E9B15AF43944EBCD(L_11, NULL);
		V_3 = L_12;
		// Debug.Log("Signaling: Sending WS data: " + str);
		String_t* L_13 = V_3;
		String_t* L_14;
		L_14 = String_Concat_mAF2CE02CC0CB7460753D0A1A91CCF2B1E9804C5D(_stringLiteral7120117F05D22D2E7896A683779335C0436DA385, L_13, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m86567BCF22BBE7809747817453CACA0E41E68219(L_14, NULL);
		// m_webSocket.Send(str);
		WebSocket_tBCA6DA25533993CDAE05954CA6F61926CF134BB4* L_15 = __this->___m_webSocket_6;
		String_t* L_16 = V_3;
		NullCheck(L_15);
		WebSocket_Send_mE275781E5A051D124CA6603C6DDF357E777DF3D1(L_15, L_16, NULL);
	}

IL_0087:
	{
		// }
		return;
	}
}
// System.Void Unity.RenderStreaming.Signaling.WebSocketSignaling::<WSConnected>b__41_0(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebSocketSignaling_U3CWSConnectedU3Eb__41_0_m61689DEFD0E6CC072C559E8869F61FE18B5ED5F9 (WebSocketSignaling_t1CF887D8D67DBF0E7FA4D9FFD852C1656BCAB60F* __this, RuntimeObject* ___d0, const RuntimeMethod* method) 
{
	OnStartHandler_t295FEA9A47BD02A9B36195C055961D94C233A56F* G_B2_0 = NULL;
	OnStartHandler_t295FEA9A47BD02A9B36195C055961D94C233A56F* G_B1_0 = NULL;
	{
		// m_mainThreadContext.Post(d => OnStart?.Invoke(this), null);
		OnStartHandler_t295FEA9A47BD02A9B36195C055961D94C233A56F* L_0 = __this->___OnStart_7;
		OnStartHandler_t295FEA9A47BD02A9B36195C055961D94C233A56F* L_1 = L_0;
		G_B1_0 = L_1;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_000c;
		}
	}
	{
		goto IL_0013;
	}

IL_000c:
	{
		NullCheck(G_B2_0);
		OnStartHandler_Invoke_m69E91DABD69A3AB2775AD48F29C1B05748F238E6_inline(G_B2_0, __this, NULL);
	}

IL_0013:
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
// System.Void Unity.RenderStreaming.Signaling.WebSocketSignaling/<>c__DisplayClass40_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass40_0__ctor_mC33BA204DE3B19BEBCDAB1103BDC82F65B4D5FD9 (U3CU3Ec__DisplayClass40_0_t99C91E680A787779B8EF8C4F759C3D5F0253CD9C* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Void Unity.RenderStreaming.Signaling.WebSocketSignaling/<>c__DisplayClass40_0::<WSProcessMessage>b__0(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass40_0_U3CWSProcessMessageU3Eb__0_m8167F73D148449556A63867E9823576D10F38AB2 (U3CU3Ec__DisplayClass40_0_t99C91E680A787779B8EF8C4F759C3D5F0253CD9C* __this, RuntimeObject* ___d0, const RuntimeMethod* method) 
{
	OnConnectHandler_tF4A8A1EC5ED4BCEAB7EA0D252D6586EC660ABEB3* G_B2_0 = NULL;
	OnConnectHandler_tF4A8A1EC5ED4BCEAB7EA0D252D6586EC660ABEB3* G_B1_0 = NULL;
	{
		// m_mainThreadContext.Post(d => OnCreateConnection?.Invoke(this, msg.connectionId, msg.polite), null);
		WebSocketSignaling_t1CF887D8D67DBF0E7FA4D9FFD852C1656BCAB60F* L_0 = __this->___U3CU3E4__this_1;
		NullCheck(L_0);
		OnConnectHandler_tF4A8A1EC5ED4BCEAB7EA0D252D6586EC660ABEB3* L_1 = L_0->___OnCreateConnection_8;
		OnConnectHandler_tF4A8A1EC5ED4BCEAB7EA0D252D6586EC660ABEB3* L_2 = L_1;
		G_B1_0 = L_2;
		if (L_2)
		{
			G_B2_0 = L_2;
			goto IL_0011;
		}
	}
	{
		goto IL_0033;
	}

IL_0011:
	{
		WebSocketSignaling_t1CF887D8D67DBF0E7FA4D9FFD852C1656BCAB60F* L_3 = __this->___U3CU3E4__this_1;
		SignalingMessage_t2661291D3E1FD73AA68A5F4C6F56E2D48DD28F75* L_4 = __this->___msg_0;
		NullCheck(L_4);
		String_t* L_5 = L_4->___connectionId_3;
		SignalingMessage_t2661291D3E1FD73AA68A5F4C6F56E2D48DD28F75* L_6 = __this->___msg_0;
		NullCheck(L_6);
		bool L_7 = L_6->___polite_4;
		NullCheck(G_B2_0);
		OnConnectHandler_Invoke_mC22B99AF330E1CA75BBE54A22E583F9E2BD5DB8A_inline(G_B2_0, L_3, L_5, L_7, NULL);
	}

IL_0033:
	{
		return;
	}
}
// System.Void Unity.RenderStreaming.Signaling.WebSocketSignaling/<>c__DisplayClass40_0::<WSProcessMessage>b__1(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass40_0_U3CWSProcessMessageU3Eb__1_m9ACC4D613B84AEA48E9464A39D4C0B6D5225AEE9 (U3CU3Ec__DisplayClass40_0_t99C91E680A787779B8EF8C4F759C3D5F0253CD9C* __this, RuntimeObject* ___d0, const RuntimeMethod* method) 
{
	OnDisconnectHandler_tB1C80CDBF420D2C6F13BE728865E1912E08383C9* G_B2_0 = NULL;
	OnDisconnectHandler_tB1C80CDBF420D2C6F13BE728865E1912E08383C9* G_B1_0 = NULL;
	{
		// m_mainThreadContext.Post(d => OnDestroyConnection?.Invoke(this, msg.connectionId), null);
		WebSocketSignaling_t1CF887D8D67DBF0E7FA4D9FFD852C1656BCAB60F* L_0 = __this->___U3CU3E4__this_1;
		NullCheck(L_0);
		OnDisconnectHandler_tB1C80CDBF420D2C6F13BE728865E1912E08383C9* L_1 = L_0->___OnDestroyConnection_9;
		OnDisconnectHandler_tB1C80CDBF420D2C6F13BE728865E1912E08383C9* L_2 = L_1;
		G_B1_0 = L_2;
		if (L_2)
		{
			G_B2_0 = L_2;
			goto IL_0011;
		}
	}
	{
		goto IL_0028;
	}

IL_0011:
	{
		WebSocketSignaling_t1CF887D8D67DBF0E7FA4D9FFD852C1656BCAB60F* L_3 = __this->___U3CU3E4__this_1;
		SignalingMessage_t2661291D3E1FD73AA68A5F4C6F56E2D48DD28F75* L_4 = __this->___msg_0;
		NullCheck(L_4);
		String_t* L_5 = L_4->___connectionId_3;
		NullCheck(G_B2_0);
		OnDisconnectHandler_Invoke_m5EA3C0685EA9F8A3B958CE439230A7D3F4E0DA8D_inline(G_B2_0, L_3, L_5, NULL);
	}

IL_0028:
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
// System.Void Unity.RenderStreaming.Signaling.WebSocketSignaling/<>c__DisplayClass40_1::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass40_1__ctor_m744586716828740663DF32DD5E1CDB5B89089230 (U3CU3Ec__DisplayClass40_1_t89052BF20BD4AE4E27BCEE4CB46B0449FE981A85* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Void Unity.RenderStreaming.Signaling.WebSocketSignaling/<>c__DisplayClass40_1::<WSProcessMessage>b__2(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass40_1_U3CWSProcessMessageU3Eb__2_mAB198CB34675DCD657CC4AEE1A04047741CD7F77 (U3CU3Ec__DisplayClass40_1_t89052BF20BD4AE4E27BCEE4CB46B0449FE981A85* __this, RuntimeObject* ___d0, const RuntimeMethod* method) 
{
	OnOfferHandler_t741D2F8DBDFDA8C010DBB5276E8D5CC35569FF86* G_B2_0 = NULL;
	OnOfferHandler_t741D2F8DBDFDA8C010DBB5276E8D5CC35569FF86* G_B1_0 = NULL;
	{
		// m_mainThreadContext.Post(d => OnOffer?.Invoke(this, offer), null);
		U3CU3Ec__DisplayClass40_0_t99C91E680A787779B8EF8C4F759C3D5F0253CD9C* L_0 = __this->___CSU24U3CU3E8__locals1_1;
		NullCheck(L_0);
		WebSocketSignaling_t1CF887D8D67DBF0E7FA4D9FFD852C1656BCAB60F* L_1 = L_0->___U3CU3E4__this_1;
		NullCheck(L_1);
		OnOfferHandler_t741D2F8DBDFDA8C010DBB5276E8D5CC35569FF86* L_2 = L_1->___OnOffer_10;
		OnOfferHandler_t741D2F8DBDFDA8C010DBB5276E8D5CC35569FF86* L_3 = L_2;
		G_B1_0 = L_3;
		if (L_3)
		{
			G_B2_0 = L_3;
			goto IL_0016;
		}
	}
	{
		goto IL_002d;
	}

IL_0016:
	{
		U3CU3Ec__DisplayClass40_0_t99C91E680A787779B8EF8C4F759C3D5F0253CD9C* L_4 = __this->___CSU24U3CU3E8__locals1_1;
		NullCheck(L_4);
		WebSocketSignaling_t1CF887D8D67DBF0E7FA4D9FFD852C1656BCAB60F* L_5 = L_4->___U3CU3E4__this_1;
		DescData_tA4EB7C7305FA906F4E120329023F8C778EFCB1B8* L_6 = __this->___offer_0;
		NullCheck(G_B2_0);
		OnOfferHandler_Invoke_m0DE74F0577369C952A9B36ABD622FA356FA853F9_inline(G_B2_0, L_5, L_6, NULL);
	}

IL_002d:
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
// System.Void Unity.RenderStreaming.Signaling.WebSocketSignaling/<>c__DisplayClass40_2::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass40_2__ctor_mD9FEA819678038BFB1B548742BB98A35D2DE831F (U3CU3Ec__DisplayClass40_2_t2FD87832B5721C3236040338A04B8D226CE932FA* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Void Unity.RenderStreaming.Signaling.WebSocketSignaling/<>c__DisplayClass40_2::<WSProcessMessage>b__3(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass40_2_U3CWSProcessMessageU3Eb__3_m0D4D8D94FD9BE6A44BF2EEAE69B832D00BFE18BD (U3CU3Ec__DisplayClass40_2_t2FD87832B5721C3236040338A04B8D226CE932FA* __this, RuntimeObject* ___d0, const RuntimeMethod* method) 
{
	OnAnswerHandler_tBF64DA7C3AB41984E338F75F069C194C8F0A1A19* G_B2_0 = NULL;
	OnAnswerHandler_tBF64DA7C3AB41984E338F75F069C194C8F0A1A19* G_B1_0 = NULL;
	{
		// m_mainThreadContext.Post(d => OnAnswer?.Invoke(this, answer), null);
		U3CU3Ec__DisplayClass40_0_t99C91E680A787779B8EF8C4F759C3D5F0253CD9C* L_0 = __this->___CSU24U3CU3E8__locals2_1;
		NullCheck(L_0);
		WebSocketSignaling_t1CF887D8D67DBF0E7FA4D9FFD852C1656BCAB60F* L_1 = L_0->___U3CU3E4__this_1;
		NullCheck(L_1);
		OnAnswerHandler_tBF64DA7C3AB41984E338F75F069C194C8F0A1A19* L_2 = L_1->___OnAnswer_11;
		OnAnswerHandler_tBF64DA7C3AB41984E338F75F069C194C8F0A1A19* L_3 = L_2;
		G_B1_0 = L_3;
		if (L_3)
		{
			G_B2_0 = L_3;
			goto IL_0016;
		}
	}
	{
		goto IL_002d;
	}

IL_0016:
	{
		U3CU3Ec__DisplayClass40_0_t99C91E680A787779B8EF8C4F759C3D5F0253CD9C* L_4 = __this->___CSU24U3CU3E8__locals2_1;
		NullCheck(L_4);
		WebSocketSignaling_t1CF887D8D67DBF0E7FA4D9FFD852C1656BCAB60F* L_5 = L_4->___U3CU3E4__this_1;
		DescData_tA4EB7C7305FA906F4E120329023F8C778EFCB1B8* L_6 = __this->___answer_0;
		NullCheck(G_B2_0);
		OnAnswerHandler_Invoke_m222E27983168292A4C07EA7A122B9D3C6A2BE162_inline(G_B2_0, L_5, L_6, NULL);
	}

IL_002d:
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
// System.Void Unity.RenderStreaming.Signaling.WebSocketSignaling/<>c__DisplayClass40_3::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass40_3__ctor_mE0EB2F1A998025C39B456F26A187708D04D48811 (U3CU3Ec__DisplayClass40_3_t2495E95291EA54819DDC684E5F9994BF6C7D7158* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Void Unity.RenderStreaming.Signaling.WebSocketSignaling/<>c__DisplayClass40_3::<WSProcessMessage>b__4(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass40_3_U3CWSProcessMessageU3Eb__4_mEADFA38B7E32E5B9F4C86E2738EB04F876D2B78A (U3CU3Ec__DisplayClass40_3_t2495E95291EA54819DDC684E5F9994BF6C7D7158* __this, RuntimeObject* ___d0, const RuntimeMethod* method) 
{
	OnIceCandidateHandler_tB82627B771BEE335DBC8D44AEC93B2AEC8B1E139* G_B2_0 = NULL;
	OnIceCandidateHandler_tB82627B771BEE335DBC8D44AEC93B2AEC8B1E139* G_B1_0 = NULL;
	{
		// m_mainThreadContext.Post(d => OnIceCandidate?.Invoke(this, candidate), null);
		U3CU3Ec__DisplayClass40_0_t99C91E680A787779B8EF8C4F759C3D5F0253CD9C* L_0 = __this->___CSU24U3CU3E8__locals3_1;
		NullCheck(L_0);
		WebSocketSignaling_t1CF887D8D67DBF0E7FA4D9FFD852C1656BCAB60F* L_1 = L_0->___U3CU3E4__this_1;
		NullCheck(L_1);
		OnIceCandidateHandler_tB82627B771BEE335DBC8D44AEC93B2AEC8B1E139* L_2 = L_1->___OnIceCandidate_12;
		OnIceCandidateHandler_tB82627B771BEE335DBC8D44AEC93B2AEC8B1E139* L_3 = L_2;
		G_B1_0 = L_3;
		if (L_3)
		{
			G_B2_0 = L_3;
			goto IL_0016;
		}
	}
	{
		goto IL_002d;
	}

IL_0016:
	{
		U3CU3Ec__DisplayClass40_0_t99C91E680A787779B8EF8C4F759C3D5F0253CD9C* L_4 = __this->___CSU24U3CU3E8__locals3_1;
		NullCheck(L_4);
		WebSocketSignaling_t1CF887D8D67DBF0E7FA4D9FFD852C1656BCAB60F* L_5 = L_4->___U3CU3E4__this_1;
		CandidateData_t37575B19A1050FDC713708C9C0CBD2EB498F2567* L_6 = __this->___candidate_0;
		NullCheck(G_B2_0);
		OnIceCandidateHandler_Invoke_m799463020BA8E3CF851221DA9D84AA33AF37F621_inline(G_B2_0, L_5, L_6, NULL);
	}

IL_002d:
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
// System.Void Unity.RenderStreaming.InputSystem.InputDeviceExtension::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputDeviceExtension__cctor_m2E0866C4CE9D3B49B69F9805C5F25F965D4C849C (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InputDeviceExtension_t90A527D9A693F6B5659B842825B8CB85FF12BA75_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InputDevice_t8BCF67533E872A75779C24C93D1D7085B72D364B_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0D7B09E12485C810F081F17A8044CDE7672DB625);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral86A58CBE637BA144B1B73130A283C762A1E941A1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8DCE5BB934884385E28323297AB2F0E3F3B45643);
		s_Il2CppMethodInitialized = true;
	}
	{
		// typeInputDevice = typeof(InputDevice);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (InputDevice_t8BCF67533E872A75779C24C93D1D7085B72D364B_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E(L_0, NULL);
		((InputDeviceExtension_t90A527D9A693F6B5659B842825B8CB85FF12BA75_StaticFields*)il2cpp_codegen_static_fields_for(InputDeviceExtension_t90A527D9A693F6B5659B842825B8CB85FF12BA75_il2cpp_TypeInfo_var))->___typeInputDevice_0 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&((InputDeviceExtension_t90A527D9A693F6B5659B842825B8CB85FF12BA75_StaticFields*)il2cpp_codegen_static_fields_for(InputDeviceExtension_t90A527D9A693F6B5659B842825B8CB85FF12BA75_il2cpp_TypeInfo_var))->___typeInputDevice_0), (void*)L_1);
		// fieldInfoParticipantId = typeInputDevice.GetField("m_ParticipantId",
		//     BindingFlags.NonPublic | BindingFlags.Instance);
		Type_t* L_2 = ((InputDeviceExtension_t90A527D9A693F6B5659B842825B8CB85FF12BA75_StaticFields*)il2cpp_codegen_static_fields_for(InputDeviceExtension_t90A527D9A693F6B5659B842825B8CB85FF12BA75_il2cpp_TypeInfo_var))->___typeInputDevice_0;
		NullCheck(L_2);
		FieldInfo_t* L_3;
		L_3 = VirtualFuncInvoker2< FieldInfo_t*, String_t*, int32_t >::Invoke(84 /* System.Reflection.FieldInfo System.Type::GetField(System.String,System.Reflection.BindingFlags) */, L_2, _stringLiteral8DCE5BB934884385E28323297AB2F0E3F3B45643, ((int32_t)36));
		((InputDeviceExtension_t90A527D9A693F6B5659B842825B8CB85FF12BA75_StaticFields*)il2cpp_codegen_static_fields_for(InputDeviceExtension_t90A527D9A693F6B5659B842825B8CB85FF12BA75_il2cpp_TypeInfo_var))->___fieldInfoParticipantId_1 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&((InputDeviceExtension_t90A527D9A693F6B5659B842825B8CB85FF12BA75_StaticFields*)il2cpp_codegen_static_fields_for(InputDeviceExtension_t90A527D9A693F6B5659B842825B8CB85FF12BA75_il2cpp_TypeInfo_var))->___fieldInfoParticipantId_1), (void*)L_3);
		// fieldInfoDescription = typeInputDevice.GetField("m_Description",
		//     BindingFlags.NonPublic | BindingFlags.Instance);
		Type_t* L_4 = ((InputDeviceExtension_t90A527D9A693F6B5659B842825B8CB85FF12BA75_StaticFields*)il2cpp_codegen_static_fields_for(InputDeviceExtension_t90A527D9A693F6B5659B842825B8CB85FF12BA75_il2cpp_TypeInfo_var))->___typeInputDevice_0;
		NullCheck(L_4);
		FieldInfo_t* L_5;
		L_5 = VirtualFuncInvoker2< FieldInfo_t*, String_t*, int32_t >::Invoke(84 /* System.Reflection.FieldInfo System.Type::GetField(System.String,System.Reflection.BindingFlags) */, L_4, _stringLiteral0D7B09E12485C810F081F17A8044CDE7672DB625, ((int32_t)36));
		((InputDeviceExtension_t90A527D9A693F6B5659B842825B8CB85FF12BA75_StaticFields*)il2cpp_codegen_static_fields_for(InputDeviceExtension_t90A527D9A693F6B5659B842825B8CB85FF12BA75_il2cpp_TypeInfo_var))->___fieldInfoDescription_2 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&((InputDeviceExtension_t90A527D9A693F6B5659B842825B8CB85FF12BA75_StaticFields*)il2cpp_codegen_static_fields_for(InputDeviceExtension_t90A527D9A693F6B5659B842825B8CB85FF12BA75_il2cpp_TypeInfo_var))->___fieldInfoDescription_2), (void*)L_5);
		// fieldInfoDeviceFlags = typeInputDevice.GetField("m_DeviceFlags",
		//     BindingFlags.NonPublic | BindingFlags.Instance);
		Type_t* L_6 = ((InputDeviceExtension_t90A527D9A693F6B5659B842825B8CB85FF12BA75_StaticFields*)il2cpp_codegen_static_fields_for(InputDeviceExtension_t90A527D9A693F6B5659B842825B8CB85FF12BA75_il2cpp_TypeInfo_var))->___typeInputDevice_0;
		NullCheck(L_6);
		FieldInfo_t* L_7;
		L_7 = VirtualFuncInvoker2< FieldInfo_t*, String_t*, int32_t >::Invoke(84 /* System.Reflection.FieldInfo System.Type::GetField(System.String,System.Reflection.BindingFlags) */, L_6, _stringLiteral86A58CBE637BA144B1B73130A283C762A1E941A1, ((int32_t)36));
		((InputDeviceExtension_t90A527D9A693F6B5659B842825B8CB85FF12BA75_StaticFields*)il2cpp_codegen_static_fields_for(InputDeviceExtension_t90A527D9A693F6B5659B842825B8CB85FF12BA75_il2cpp_TypeInfo_var))->___fieldInfoDeviceFlags_3 = L_7;
		Il2CppCodeGenWriteBarrier((void**)(&((InputDeviceExtension_t90A527D9A693F6B5659B842825B8CB85FF12BA75_StaticFields*)il2cpp_codegen_static_fields_for(InputDeviceExtension_t90A527D9A693F6B5659B842825B8CB85FF12BA75_il2cpp_TypeInfo_var))->___fieldInfoDeviceFlags_3), (void*)L_7);
		// }
		return;
	}
}
// System.Void Unity.RenderStreaming.InputSystem.InputDeviceExtension::SetParticipantId(UnityEngine.InputSystem.InputDevice,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputDeviceExtension_SetParticipantId_mF08A99F02500BE2A39C36CCD6D9F751C6CF5758C (InputDevice_t8BCF67533E872A75779C24C93D1D7085B72D364B* ___device0, int32_t ___value1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InputDeviceExtension_t90A527D9A693F6B5659B842825B8CB85FF12BA75_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// fieldInfoParticipantId.SetValue(device, value);
		il2cpp_codegen_runtime_class_init_inline(InputDeviceExtension_t90A527D9A693F6B5659B842825B8CB85FF12BA75_il2cpp_TypeInfo_var);
		FieldInfo_t* L_0 = ((InputDeviceExtension_t90A527D9A693F6B5659B842825B8CB85FF12BA75_StaticFields*)il2cpp_codegen_static_fields_for(InputDeviceExtension_t90A527D9A693F6B5659B842825B8CB85FF12BA75_il2cpp_TypeInfo_var))->___fieldInfoParticipantId_1;
		InputDevice_t8BCF67533E872A75779C24C93D1D7085B72D364B* L_1 = ___device0;
		int32_t L_2 = ___value1;
		int32_t L_3 = L_2;
		RuntimeObject* L_4 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_3);
		NullCheck(L_0);
		FieldInfo_SetValue_mD8C0DA3A1A0CFF073F971622BBDBAAB6688B4B6C(L_0, L_1, L_4, NULL);
		// }
		return;
	}
}
// System.Int32 Unity.RenderStreaming.InputSystem.InputDeviceExtension::GetParticipantId(UnityEngine.InputSystem.InputDevice)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t InputDeviceExtension_GetParticipantId_m007040AFD6E478CA65EF2911538B4A308718C6AA (InputDevice_t8BCF67533E872A75779C24C93D1D7085B72D364B* ___device0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InputDeviceExtension_t90A527D9A693F6B5659B842825B8CB85FF12BA75_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// return (int)fieldInfoParticipantId.GetValue(device);
		il2cpp_codegen_runtime_class_init_inline(InputDeviceExtension_t90A527D9A693F6B5659B842825B8CB85FF12BA75_il2cpp_TypeInfo_var);
		FieldInfo_t* L_0 = ((InputDeviceExtension_t90A527D9A693F6B5659B842825B8CB85FF12BA75_StaticFields*)il2cpp_codegen_static_fields_for(InputDeviceExtension_t90A527D9A693F6B5659B842825B8CB85FF12BA75_il2cpp_TypeInfo_var))->___fieldInfoParticipantId_1;
		InputDevice_t8BCF67533E872A75779C24C93D1D7085B72D364B* L_1 = ___device0;
		NullCheck(L_0);
		RuntimeObject* L_2;
		L_2 = VirtualFuncInvoker1< RuntimeObject*, RuntimeObject* >::Invoke(24 /* System.Object System.Reflection.FieldInfo::GetValue(System.Object) */, L_0, L_1);
		V_0 = ((*(int32_t*)((int32_t*)(int32_t*)UnBox(L_2, Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var))));
		goto IL_0014;
	}

IL_0014:
	{
		// }
		int32_t L_3 = V_0;
		return L_3;
	}
}
// System.Void Unity.RenderStreaming.InputSystem.InputDeviceExtension::SetDescription(UnityEngine.InputSystem.InputDevice,UnityEngine.InputSystem.Layouts.InputDeviceDescription)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputDeviceExtension_SetDescription_m7BB699454C3E4A5DCD86345785A935CB3889A063 (InputDevice_t8BCF67533E872A75779C24C93D1D7085B72D364B* ___device0, InputDeviceDescription_tE86DD77422AAF60ADDAC788B31E5A05E739B708F ___value1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InputDeviceDescription_tE86DD77422AAF60ADDAC788B31E5A05E739B708F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InputDeviceExtension_t90A527D9A693F6B5659B842825B8CB85FF12BA75_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// fieldInfoDescription.SetValue(device, value);
		il2cpp_codegen_runtime_class_init_inline(InputDeviceExtension_t90A527D9A693F6B5659B842825B8CB85FF12BA75_il2cpp_TypeInfo_var);
		FieldInfo_t* L_0 = ((InputDeviceExtension_t90A527D9A693F6B5659B842825B8CB85FF12BA75_StaticFields*)il2cpp_codegen_static_fields_for(InputDeviceExtension_t90A527D9A693F6B5659B842825B8CB85FF12BA75_il2cpp_TypeInfo_var))->___fieldInfoDescription_2;
		InputDevice_t8BCF67533E872A75779C24C93D1D7085B72D364B* L_1 = ___device0;
		InputDeviceDescription_tE86DD77422AAF60ADDAC788B31E5A05E739B708F L_2 = ___value1;
		InputDeviceDescription_tE86DD77422AAF60ADDAC788B31E5A05E739B708F L_3 = L_2;
		RuntimeObject* L_4 = Box(InputDeviceDescription_tE86DD77422AAF60ADDAC788B31E5A05E739B708F_il2cpp_TypeInfo_var, &L_3);
		NullCheck(L_0);
		FieldInfo_SetValue_mD8C0DA3A1A0CFF073F971622BBDBAAB6688B4B6C(L_0, L_1, L_4, NULL);
		// }
		return;
	}
}
// System.Void Unity.RenderStreaming.InputSystem.InputDeviceExtension::SetDeviceFlags(UnityEngine.InputSystem.InputDevice,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputDeviceExtension_SetDeviceFlags_mF59692E94999F4AAA18349851A8198A67F3C61EB (InputDevice_t8BCF67533E872A75779C24C93D1D7085B72D364B* ___device0, int32_t ___value1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InputDeviceExtension_t90A527D9A693F6B5659B842825B8CB85FF12BA75_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// fieldInfoDeviceFlags.SetValue(device, value);
		il2cpp_codegen_runtime_class_init_inline(InputDeviceExtension_t90A527D9A693F6B5659B842825B8CB85FF12BA75_il2cpp_TypeInfo_var);
		FieldInfo_t* L_0 = ((InputDeviceExtension_t90A527D9A693F6B5659B842825B8CB85FF12BA75_StaticFields*)il2cpp_codegen_static_fields_for(InputDeviceExtension_t90A527D9A693F6B5659B842825B8CB85FF12BA75_il2cpp_TypeInfo_var))->___fieldInfoDeviceFlags_3;
		InputDevice_t8BCF67533E872A75779C24C93D1D7085B72D364B* L_1 = ___device0;
		int32_t L_2 = ___value1;
		int32_t L_3 = L_2;
		RuntimeObject* L_4 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_3);
		NullCheck(L_0);
		FieldInfo_SetValue_mD8C0DA3A1A0CFF073F971622BBDBAAB6688B4B6C(L_0, L_1, L_4, NULL);
		// }
		return;
	}
}
// System.Int32 Unity.RenderStreaming.InputSystem.InputDeviceExtension::GetDeviceFlags(UnityEngine.InputSystem.InputDevice)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t InputDeviceExtension_GetDeviceFlags_m34A84AC53FB1CFFE8AB1D47688FF1148D8CE7C58 (InputDevice_t8BCF67533E872A75779C24C93D1D7085B72D364B* ___device0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InputDeviceExtension_t90A527D9A693F6B5659B842825B8CB85FF12BA75_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// return (int)fieldInfoDeviceFlags.GetValue(device);
		il2cpp_codegen_runtime_class_init_inline(InputDeviceExtension_t90A527D9A693F6B5659B842825B8CB85FF12BA75_il2cpp_TypeInfo_var);
		FieldInfo_t* L_0 = ((InputDeviceExtension_t90A527D9A693F6B5659B842825B8CB85FF12BA75_StaticFields*)il2cpp_codegen_static_fields_for(InputDeviceExtension_t90A527D9A693F6B5659B842825B8CB85FF12BA75_il2cpp_TypeInfo_var))->___fieldInfoDeviceFlags_3;
		InputDevice_t8BCF67533E872A75779C24C93D1D7085B72D364B* L_1 = ___device0;
		NullCheck(L_0);
		RuntimeObject* L_2;
		L_2 = VirtualFuncInvoker1< RuntimeObject*, RuntimeObject* >::Invoke(24 /* System.Object System.Reflection.FieldInfo::GetValue(System.Object) */, L_0, L_1);
		V_0 = ((*(int32_t*)((int32_t*)(int32_t*)UnBox(L_2, Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var))));
		goto IL_0014;
	}

IL_0014:
	{
		// }
		int32_t L_3 = V_0;
		return L_3;
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
// System.Void Unity.RenderStreaming.InputSystem.InputManager::add_onMessage(System.Action`1<Unity.RenderStreaming.InputSystem.InputRemoting/Message>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputManager_add_onMessage_mCED257C4B7BCA222C0AD34E477EAEA7AE31AE686 (InputManager_t57C115A76BE8B9259F24CF3980EF669C858CA071* __this, Action_1_t62CFC7E46D3237DF830A4F831466D93C80CCEB03* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_t62CFC7E46D3237DF830A4F831466D93C80CCEB03_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Action_1_t62CFC7E46D3237DF830A4F831466D93C80CCEB03* V_0 = NULL;
	Action_1_t62CFC7E46D3237DF830A4F831466D93C80CCEB03* V_1 = NULL;
	Action_1_t62CFC7E46D3237DF830A4F831466D93C80CCEB03* V_2 = NULL;
	{
		Action_1_t62CFC7E46D3237DF830A4F831466D93C80CCEB03* L_0 = __this->___onMessage_0;
		V_0 = L_0;
	}

IL_0007:
	{
		Action_1_t62CFC7E46D3237DF830A4F831466D93C80CCEB03* L_1 = V_0;
		V_1 = L_1;
		Action_1_t62CFC7E46D3237DF830A4F831466D93C80CCEB03* L_2 = V_1;
		Action_1_t62CFC7E46D3237DF830A4F831466D93C80CCEB03* L_3 = ___value0;
		Delegate_t* L_4;
		L_4 = Delegate_Combine_m8B9D24CED35033C7FC56501DFE650F5CB7FF012C(L_2, L_3, NULL);
		V_2 = ((Action_1_t62CFC7E46D3237DF830A4F831466D93C80CCEB03*)Castclass((RuntimeObject*)L_4, Action_1_t62CFC7E46D3237DF830A4F831466D93C80CCEB03_il2cpp_TypeInfo_var));
		Action_1_t62CFC7E46D3237DF830A4F831466D93C80CCEB03** L_5 = (&__this->___onMessage_0);
		Action_1_t62CFC7E46D3237DF830A4F831466D93C80CCEB03* L_6 = V_2;
		Action_1_t62CFC7E46D3237DF830A4F831466D93C80CCEB03* L_7 = V_1;
		Action_1_t62CFC7E46D3237DF830A4F831466D93C80CCEB03* L_8;
		L_8 = InterlockedCompareExchangeImpl<Action_1_t62CFC7E46D3237DF830A4F831466D93C80CCEB03*>(L_5, L_6, L_7);
		V_0 = L_8;
		Action_1_t62CFC7E46D3237DF830A4F831466D93C80CCEB03* L_9 = V_0;
		Action_1_t62CFC7E46D3237DF830A4F831466D93C80CCEB03* L_10 = V_1;
		if ((!(((RuntimeObject*)(Action_1_t62CFC7E46D3237DF830A4F831466D93C80CCEB03*)L_9) == ((RuntimeObject*)(Action_1_t62CFC7E46D3237DF830A4F831466D93C80CCEB03*)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void Unity.RenderStreaming.InputSystem.InputManager::remove_onMessage(System.Action`1<Unity.RenderStreaming.InputSystem.InputRemoting/Message>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputManager_remove_onMessage_mB926B12A061BC122590A76A74486CBF65B8002E5 (InputManager_t57C115A76BE8B9259F24CF3980EF669C858CA071* __this, Action_1_t62CFC7E46D3237DF830A4F831466D93C80CCEB03* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_t62CFC7E46D3237DF830A4F831466D93C80CCEB03_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Action_1_t62CFC7E46D3237DF830A4F831466D93C80CCEB03* V_0 = NULL;
	Action_1_t62CFC7E46D3237DF830A4F831466D93C80CCEB03* V_1 = NULL;
	Action_1_t62CFC7E46D3237DF830A4F831466D93C80CCEB03* V_2 = NULL;
	{
		Action_1_t62CFC7E46D3237DF830A4F831466D93C80CCEB03* L_0 = __this->___onMessage_0;
		V_0 = L_0;
	}

IL_0007:
	{
		Action_1_t62CFC7E46D3237DF830A4F831466D93C80CCEB03* L_1 = V_0;
		V_1 = L_1;
		Action_1_t62CFC7E46D3237DF830A4F831466D93C80CCEB03* L_2 = V_1;
		Action_1_t62CFC7E46D3237DF830A4F831466D93C80CCEB03* L_3 = ___value0;
		Delegate_t* L_4;
		L_4 = Delegate_Remove_m40506877934EC1AD4ADAE57F5E97AF0BC0F96116(L_2, L_3, NULL);
		V_2 = ((Action_1_t62CFC7E46D3237DF830A4F831466D93C80CCEB03*)Castclass((RuntimeObject*)L_4, Action_1_t62CFC7E46D3237DF830A4F831466D93C80CCEB03_il2cpp_TypeInfo_var));
		Action_1_t62CFC7E46D3237DF830A4F831466D93C80CCEB03** L_5 = (&__this->___onMessage_0);
		Action_1_t62CFC7E46D3237DF830A4F831466D93C80CCEB03* L_6 = V_2;
		Action_1_t62CFC7E46D3237DF830A4F831466D93C80CCEB03* L_7 = V_1;
		Action_1_t62CFC7E46D3237DF830A4F831466D93C80CCEB03* L_8;
		L_8 = InterlockedCompareExchangeImpl<Action_1_t62CFC7E46D3237DF830A4F831466D93C80CCEB03*>(L_5, L_6, L_7);
		V_0 = L_8;
		Action_1_t62CFC7E46D3237DF830A4F831466D93C80CCEB03* L_9 = V_0;
		Action_1_t62CFC7E46D3237DF830A4F831466D93C80CCEB03* L_10 = V_1;
		if ((!(((RuntimeObject*)(Action_1_t62CFC7E46D3237DF830A4F831466D93C80CCEB03*)L_9) == ((RuntimeObject*)(Action_1_t62CFC7E46D3237DF830A4F831466D93C80CCEB03*)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void Unity.RenderStreaming.InputSystem.InputManager::add_onEvent(System.Action`2<UnityEngine.InputSystem.LowLevel.InputEventPtr,UnityEngine.InputSystem.InputDevice>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputManager_add_onEvent_m0203324DC04B60227F90446BA516F274FCA02B72 (InputManager_t57C115A76BE8B9259F24CF3980EF669C858CA071* __this, Action_2_t4943DD8C32CAB983950535CEF3BABA85DF8C9AAA* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_2_t4943DD8C32CAB983950535CEF3BABA85DF8C9AAA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Action_2_t4943DD8C32CAB983950535CEF3BABA85DF8C9AAA* V_0 = NULL;
	Action_2_t4943DD8C32CAB983950535CEF3BABA85DF8C9AAA* V_1 = NULL;
	Action_2_t4943DD8C32CAB983950535CEF3BABA85DF8C9AAA* V_2 = NULL;
	{
		Action_2_t4943DD8C32CAB983950535CEF3BABA85DF8C9AAA* L_0 = __this->___onEvent_1;
		V_0 = L_0;
	}

IL_0007:
	{
		Action_2_t4943DD8C32CAB983950535CEF3BABA85DF8C9AAA* L_1 = V_0;
		V_1 = L_1;
		Action_2_t4943DD8C32CAB983950535CEF3BABA85DF8C9AAA* L_2 = V_1;
		Action_2_t4943DD8C32CAB983950535CEF3BABA85DF8C9AAA* L_3 = ___value0;
		Delegate_t* L_4;
		L_4 = Delegate_Combine_m8B9D24CED35033C7FC56501DFE650F5CB7FF012C(L_2, L_3, NULL);
		V_2 = ((Action_2_t4943DD8C32CAB983950535CEF3BABA85DF8C9AAA*)Castclass((RuntimeObject*)L_4, Action_2_t4943DD8C32CAB983950535CEF3BABA85DF8C9AAA_il2cpp_TypeInfo_var));
		Action_2_t4943DD8C32CAB983950535CEF3BABA85DF8C9AAA** L_5 = (&__this->___onEvent_1);
		Action_2_t4943DD8C32CAB983950535CEF3BABA85DF8C9AAA* L_6 = V_2;
		Action_2_t4943DD8C32CAB983950535CEF3BABA85DF8C9AAA* L_7 = V_1;
		Action_2_t4943DD8C32CAB983950535CEF3BABA85DF8C9AAA* L_8;
		L_8 = InterlockedCompareExchangeImpl<Action_2_t4943DD8C32CAB983950535CEF3BABA85DF8C9AAA*>(L_5, L_6, L_7);
		V_0 = L_8;
		Action_2_t4943DD8C32CAB983950535CEF3BABA85DF8C9AAA* L_9 = V_0;
		Action_2_t4943DD8C32CAB983950535CEF3BABA85DF8C9AAA* L_10 = V_1;
		if ((!(((RuntimeObject*)(Action_2_t4943DD8C32CAB983950535CEF3BABA85DF8C9AAA*)L_9) == ((RuntimeObject*)(Action_2_t4943DD8C32CAB983950535CEF3BABA85DF8C9AAA*)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void Unity.RenderStreaming.InputSystem.InputManager::remove_onEvent(System.Action`2<UnityEngine.InputSystem.LowLevel.InputEventPtr,UnityEngine.InputSystem.InputDevice>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputManager_remove_onEvent_mF291810965D20096448E7E5853CBBD5D01F68732 (InputManager_t57C115A76BE8B9259F24CF3980EF669C858CA071* __this, Action_2_t4943DD8C32CAB983950535CEF3BABA85DF8C9AAA* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_2_t4943DD8C32CAB983950535CEF3BABA85DF8C9AAA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Action_2_t4943DD8C32CAB983950535CEF3BABA85DF8C9AAA* V_0 = NULL;
	Action_2_t4943DD8C32CAB983950535CEF3BABA85DF8C9AAA* V_1 = NULL;
	Action_2_t4943DD8C32CAB983950535CEF3BABA85DF8C9AAA* V_2 = NULL;
	{
		Action_2_t4943DD8C32CAB983950535CEF3BABA85DF8C9AAA* L_0 = __this->___onEvent_1;
		V_0 = L_0;
	}

IL_0007:
	{
		Action_2_t4943DD8C32CAB983950535CEF3BABA85DF8C9AAA* L_1 = V_0;
		V_1 = L_1;
		Action_2_t4943DD8C32CAB983950535CEF3BABA85DF8C9AAA* L_2 = V_1;
		Action_2_t4943DD8C32CAB983950535CEF3BABA85DF8C9AAA* L_3 = ___value0;
		Delegate_t* L_4;
		L_4 = Delegate_Remove_m40506877934EC1AD4ADAE57F5E97AF0BC0F96116(L_2, L_3, NULL);
		V_2 = ((Action_2_t4943DD8C32CAB983950535CEF3BABA85DF8C9AAA*)Castclass((RuntimeObject*)L_4, Action_2_t4943DD8C32CAB983950535CEF3BABA85DF8C9AAA_il2cpp_TypeInfo_var));
		Action_2_t4943DD8C32CAB983950535CEF3BABA85DF8C9AAA** L_5 = (&__this->___onEvent_1);
		Action_2_t4943DD8C32CAB983950535CEF3BABA85DF8C9AAA* L_6 = V_2;
		Action_2_t4943DD8C32CAB983950535CEF3BABA85DF8C9AAA* L_7 = V_1;
		Action_2_t4943DD8C32CAB983950535CEF3BABA85DF8C9AAA* L_8;
		L_8 = InterlockedCompareExchangeImpl<Action_2_t4943DD8C32CAB983950535CEF3BABA85DF8C9AAA*>(L_5, L_6, L_7);
		V_0 = L_8;
		Action_2_t4943DD8C32CAB983950535CEF3BABA85DF8C9AAA* L_9 = V_0;
		Action_2_t4943DD8C32CAB983950535CEF3BABA85DF8C9AAA* L_10 = V_1;
		if ((!(((RuntimeObject*)(Action_2_t4943DD8C32CAB983950535CEF3BABA85DF8C9AAA*)L_9) == ((RuntimeObject*)(Action_2_t4943DD8C32CAB983950535CEF3BABA85DF8C9AAA*)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void Unity.RenderStreaming.InputSystem.InputManager::add_onDeviceChange(System.Action`2<UnityEngine.InputSystem.InputDevice,UnityEngine.InputSystem.InputDeviceChange>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputManager_add_onDeviceChange_m7E03294EC56383BA1766192B8956DAF8EA4E109B (InputManager_t57C115A76BE8B9259F24CF3980EF669C858CA071* __this, Action_2_tB79528C85CFEF7DFF52C575DDAA398D2FE6BC333* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_2_tB79528C85CFEF7DFF52C575DDAA398D2FE6BC333_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Action_2_tB79528C85CFEF7DFF52C575DDAA398D2FE6BC333* V_0 = NULL;
	Action_2_tB79528C85CFEF7DFF52C575DDAA398D2FE6BC333* V_1 = NULL;
	Action_2_tB79528C85CFEF7DFF52C575DDAA398D2FE6BC333* V_2 = NULL;
	{
		Action_2_tB79528C85CFEF7DFF52C575DDAA398D2FE6BC333* L_0 = __this->___onDeviceChange_2;
		V_0 = L_0;
	}

IL_0007:
	{
		Action_2_tB79528C85CFEF7DFF52C575DDAA398D2FE6BC333* L_1 = V_0;
		V_1 = L_1;
		Action_2_tB79528C85CFEF7DFF52C575DDAA398D2FE6BC333* L_2 = V_1;
		Action_2_tB79528C85CFEF7DFF52C575DDAA398D2FE6BC333* L_3 = ___value0;
		Delegate_t* L_4;
		L_4 = Delegate_Combine_m8B9D24CED35033C7FC56501DFE650F5CB7FF012C(L_2, L_3, NULL);
		V_2 = ((Action_2_tB79528C85CFEF7DFF52C575DDAA398D2FE6BC333*)Castclass((RuntimeObject*)L_4, Action_2_tB79528C85CFEF7DFF52C575DDAA398D2FE6BC333_il2cpp_TypeInfo_var));
		Action_2_tB79528C85CFEF7DFF52C575DDAA398D2FE6BC333** L_5 = (&__this->___onDeviceChange_2);
		Action_2_tB79528C85CFEF7DFF52C575DDAA398D2FE6BC333* L_6 = V_2;
		Action_2_tB79528C85CFEF7DFF52C575DDAA398D2FE6BC333* L_7 = V_1;
		Action_2_tB79528C85CFEF7DFF52C575DDAA398D2FE6BC333* L_8;
		L_8 = InterlockedCompareExchangeImpl<Action_2_tB79528C85CFEF7DFF52C575DDAA398D2FE6BC333*>(L_5, L_6, L_7);
		V_0 = L_8;
		Action_2_tB79528C85CFEF7DFF52C575DDAA398D2FE6BC333* L_9 = V_0;
		Action_2_tB79528C85CFEF7DFF52C575DDAA398D2FE6BC333* L_10 = V_1;
		if ((!(((RuntimeObject*)(Action_2_tB79528C85CFEF7DFF52C575DDAA398D2FE6BC333*)L_9) == ((RuntimeObject*)(Action_2_tB79528C85CFEF7DFF52C575DDAA398D2FE6BC333*)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void Unity.RenderStreaming.InputSystem.InputManager::remove_onDeviceChange(System.Action`2<UnityEngine.InputSystem.InputDevice,UnityEngine.InputSystem.InputDeviceChange>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputManager_remove_onDeviceChange_mF9CB2301985092E52804908461A81075B4CEED29 (InputManager_t57C115A76BE8B9259F24CF3980EF669C858CA071* __this, Action_2_tB79528C85CFEF7DFF52C575DDAA398D2FE6BC333* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_2_tB79528C85CFEF7DFF52C575DDAA398D2FE6BC333_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Action_2_tB79528C85CFEF7DFF52C575DDAA398D2FE6BC333* V_0 = NULL;
	Action_2_tB79528C85CFEF7DFF52C575DDAA398D2FE6BC333* V_1 = NULL;
	Action_2_tB79528C85CFEF7DFF52C575DDAA398D2FE6BC333* V_2 = NULL;
	{
		Action_2_tB79528C85CFEF7DFF52C575DDAA398D2FE6BC333* L_0 = __this->___onDeviceChange_2;
		V_0 = L_0;
	}

IL_0007:
	{
		Action_2_tB79528C85CFEF7DFF52C575DDAA398D2FE6BC333* L_1 = V_0;
		V_1 = L_1;
		Action_2_tB79528C85CFEF7DFF52C575DDAA398D2FE6BC333* L_2 = V_1;
		Action_2_tB79528C85CFEF7DFF52C575DDAA398D2FE6BC333* L_3 = ___value0;
		Delegate_t* L_4;
		L_4 = Delegate_Remove_m40506877934EC1AD4ADAE57F5E97AF0BC0F96116(L_2, L_3, NULL);
		V_2 = ((Action_2_tB79528C85CFEF7DFF52C575DDAA398D2FE6BC333*)Castclass((RuntimeObject*)L_4, Action_2_tB79528C85CFEF7DFF52C575DDAA398D2FE6BC333_il2cpp_TypeInfo_var));
		Action_2_tB79528C85CFEF7DFF52C575DDAA398D2FE6BC333** L_5 = (&__this->___onDeviceChange_2);
		Action_2_tB79528C85CFEF7DFF52C575DDAA398D2FE6BC333* L_6 = V_2;
		Action_2_tB79528C85CFEF7DFF52C575DDAA398D2FE6BC333* L_7 = V_1;
		Action_2_tB79528C85CFEF7DFF52C575DDAA398D2FE6BC333* L_8;
		L_8 = InterlockedCompareExchangeImpl<Action_2_tB79528C85CFEF7DFF52C575DDAA398D2FE6BC333*>(L_5, L_6, L_7);
		V_0 = L_8;
		Action_2_tB79528C85CFEF7DFF52C575DDAA398D2FE6BC333* L_9 = V_0;
		Action_2_tB79528C85CFEF7DFF52C575DDAA398D2FE6BC333* L_10 = V_1;
		if ((!(((RuntimeObject*)(Action_2_tB79528C85CFEF7DFF52C575DDAA398D2FE6BC333*)L_9) == ((RuntimeObject*)(Action_2_tB79528C85CFEF7DFF52C575DDAA398D2FE6BC333*)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void Unity.RenderStreaming.InputSystem.InputManager::add_onLayoutChange(System.Action`2<System.String,UnityEngine.InputSystem.InputControlLayoutChange>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputManager_add_onLayoutChange_m5A452A92DD47E525F72F1A4B7DB0AB2504F5785A (InputManager_t57C115A76BE8B9259F24CF3980EF669C858CA071* __this, Action_2_t4797B88C63509F2EE4385D6DABE6A4B5AD5393F7* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_2_t4797B88C63509F2EE4385D6DABE6A4B5AD5393F7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Action_2_t4797B88C63509F2EE4385D6DABE6A4B5AD5393F7* V_0 = NULL;
	Action_2_t4797B88C63509F2EE4385D6DABE6A4B5AD5393F7* V_1 = NULL;
	Action_2_t4797B88C63509F2EE4385D6DABE6A4B5AD5393F7* V_2 = NULL;
	{
		Action_2_t4797B88C63509F2EE4385D6DABE6A4B5AD5393F7* L_0 = __this->___onLayoutChange_3;
		V_0 = L_0;
	}

IL_0007:
	{
		Action_2_t4797B88C63509F2EE4385D6DABE6A4B5AD5393F7* L_1 = V_0;
		V_1 = L_1;
		Action_2_t4797B88C63509F2EE4385D6DABE6A4B5AD5393F7* L_2 = V_1;
		Action_2_t4797B88C63509F2EE4385D6DABE6A4B5AD5393F7* L_3 = ___value0;
		Delegate_t* L_4;
		L_4 = Delegate_Combine_m8B9D24CED35033C7FC56501DFE650F5CB7FF012C(L_2, L_3, NULL);
		V_2 = ((Action_2_t4797B88C63509F2EE4385D6DABE6A4B5AD5393F7*)Castclass((RuntimeObject*)L_4, Action_2_t4797B88C63509F2EE4385D6DABE6A4B5AD5393F7_il2cpp_TypeInfo_var));
		Action_2_t4797B88C63509F2EE4385D6DABE6A4B5AD5393F7** L_5 = (&__this->___onLayoutChange_3);
		Action_2_t4797B88C63509F2EE4385D6DABE6A4B5AD5393F7* L_6 = V_2;
		Action_2_t4797B88C63509F2EE4385D6DABE6A4B5AD5393F7* L_7 = V_1;
		Action_2_t4797B88C63509F2EE4385D6DABE6A4B5AD5393F7* L_8;
		L_8 = InterlockedCompareExchangeImpl<Action_2_t4797B88C63509F2EE4385D6DABE6A4B5AD5393F7*>(L_5, L_6, L_7);
		V_0 = L_8;
		Action_2_t4797B88C63509F2EE4385D6DABE6A4B5AD5393F7* L_9 = V_0;
		Action_2_t4797B88C63509F2EE4385D6DABE6A4B5AD5393F7* L_10 = V_1;
		if ((!(((RuntimeObject*)(Action_2_t4797B88C63509F2EE4385D6DABE6A4B5AD5393F7*)L_9) == ((RuntimeObject*)(Action_2_t4797B88C63509F2EE4385D6DABE6A4B5AD5393F7*)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void Unity.RenderStreaming.InputSystem.InputManager::remove_onLayoutChange(System.Action`2<System.String,UnityEngine.InputSystem.InputControlLayoutChange>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputManager_remove_onLayoutChange_m38F66D608CABB271241900AE1C49E1DF906B290F (InputManager_t57C115A76BE8B9259F24CF3980EF669C858CA071* __this, Action_2_t4797B88C63509F2EE4385D6DABE6A4B5AD5393F7* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_2_t4797B88C63509F2EE4385D6DABE6A4B5AD5393F7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Action_2_t4797B88C63509F2EE4385D6DABE6A4B5AD5393F7* V_0 = NULL;
	Action_2_t4797B88C63509F2EE4385D6DABE6A4B5AD5393F7* V_1 = NULL;
	Action_2_t4797B88C63509F2EE4385D6DABE6A4B5AD5393F7* V_2 = NULL;
	{
		Action_2_t4797B88C63509F2EE4385D6DABE6A4B5AD5393F7* L_0 = __this->___onLayoutChange_3;
		V_0 = L_0;
	}

IL_0007:
	{
		Action_2_t4797B88C63509F2EE4385D6DABE6A4B5AD5393F7* L_1 = V_0;
		V_1 = L_1;
		Action_2_t4797B88C63509F2EE4385D6DABE6A4B5AD5393F7* L_2 = V_1;
		Action_2_t4797B88C63509F2EE4385D6DABE6A4B5AD5393F7* L_3 = ___value0;
		Delegate_t* L_4;
		L_4 = Delegate_Remove_m40506877934EC1AD4ADAE57F5E97AF0BC0F96116(L_2, L_3, NULL);
		V_2 = ((Action_2_t4797B88C63509F2EE4385D6DABE6A4B5AD5393F7*)Castclass((RuntimeObject*)L_4, Action_2_t4797B88C63509F2EE4385D6DABE6A4B5AD5393F7_il2cpp_TypeInfo_var));
		Action_2_t4797B88C63509F2EE4385D6DABE6A4B5AD5393F7** L_5 = (&__this->___onLayoutChange_3);
		Action_2_t4797B88C63509F2EE4385D6DABE6A4B5AD5393F7* L_6 = V_2;
		Action_2_t4797B88C63509F2EE4385D6DABE6A4B5AD5393F7* L_7 = V_1;
		Action_2_t4797B88C63509F2EE4385D6DABE6A4B5AD5393F7* L_8;
		L_8 = InterlockedCompareExchangeImpl<Action_2_t4797B88C63509F2EE4385D6DABE6A4B5AD5393F7*>(L_5, L_6, L_7);
		V_0 = L_8;
		Action_2_t4797B88C63509F2EE4385D6DABE6A4B5AD5393F7* L_9 = V_0;
		Action_2_t4797B88C63509F2EE4385D6DABE6A4B5AD5393F7* L_10 = V_1;
		if ((!(((RuntimeObject*)(Action_2_t4797B88C63509F2EE4385D6DABE6A4B5AD5393F7*)L_9) == ((RuntimeObject*)(Action_2_t4797B88C63509F2EE4385D6DABE6A4B5AD5393F7*)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// UnityEngine.InputSystem.Utilities.ReadOnlyArray`1<UnityEngine.InputSystem.InputDevice> Unity.RenderStreaming.InputSystem.InputManager::get_devices()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ReadOnlyArray_1_t21E90B3F1DF1E9A2088EA0523F03C47910735BCA InputManager_get_devices_m80FC7C4D90CB0063488A77F7728EB7D90F49518A (InputManager_t57C115A76BE8B9259F24CF3980EF669C858CA071* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InputSystem_t4120CA4FE7DCFD56AF9391933FC3F1F485350164_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ReadOnlyArray_1_t21E90B3F1DF1E9A2088EA0523F03C47910735BCA V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// return InputSystem.devices;
		il2cpp_codegen_runtime_class_init_inline(InputSystem_t4120CA4FE7DCFD56AF9391933FC3F1F485350164_il2cpp_TypeInfo_var);
		ReadOnlyArray_1_t21E90B3F1DF1E9A2088EA0523F03C47910735BCA L_0;
		L_0 = InputSystem_get_devices_m92D52284ABC0BCE6CF46CB98EB870F2AA3890BF8(NULL);
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		// }
		ReadOnlyArray_1_t21E90B3F1DF1E9A2088EA0523F03C47910735BCA L_1 = V_0;
		return L_1;
	}
}
// System.Collections.Generic.IEnumerable`1<System.String> Unity.RenderStreaming.InputSystem.InputManager::get_layouts()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* InputManager_get_layouts_mDEEB4FA1A163A96C0C56CABFDC26236D44578E04 (InputManager_t57C115A76BE8B9259F24CF3980EF669C858CA071* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InputSystem_t4120CA4FE7DCFD56AF9391933FC3F1F485350164_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	{
		// return InputSystem.ListLayouts();
		il2cpp_codegen_runtime_class_init_inline(InputSystem_t4120CA4FE7DCFD56AF9391933FC3F1F485350164_il2cpp_TypeInfo_var);
		RuntimeObject* L_0;
		L_0 = InputSystem_ListLayouts_m4DD7C02054680DDB24EBFEE504B70F630DF1E1CC(NULL);
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		// }
		RuntimeObject* L_1 = V_0;
		return L_1;
	}
}
// UnityEngine.InputSystem.InputDevice Unity.RenderStreaming.InputSystem.InputManager::GetDeviceById(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR InputDevice_t8BCF67533E872A75779C24C93D1D7085B72D364B* InputManager_GetDeviceById_m4BF00FC1A5674D025D66F5A253EDA468EA30C198 (InputManager_t57C115A76BE8B9259F24CF3980EF669C858CA071* __this, int32_t ___deviceId0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InputSystem_t4120CA4FE7DCFD56AF9391933FC3F1F485350164_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	InputDevice_t8BCF67533E872A75779C24C93D1D7085B72D364B* V_0 = NULL;
	{
		// return InputSystem.GetDeviceById(deviceId);
		int32_t L_0 = ___deviceId0;
		il2cpp_codegen_runtime_class_init_inline(InputSystem_t4120CA4FE7DCFD56AF9391933FC3F1F485350164_il2cpp_TypeInfo_var);
		InputDevice_t8BCF67533E872A75779C24C93D1D7085B72D364B* L_1;
		L_1 = InputSystem_GetDeviceById_m0EC67530A5BB503DD302D95F1F48808D14DA3976(L_0, NULL);
		V_0 = L_1;
		goto IL_000a;
	}

IL_000a:
	{
		// }
		InputDevice_t8BCF67533E872A75779C24C93D1D7085B72D364B* L_2 = V_0;
		return L_2;
	}
}
// UnityEngine.InputSystem.InputDevice Unity.RenderStreaming.InputSystem.InputManager::AddDevice(System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR InputDevice_t8BCF67533E872A75779C24C93D1D7085B72D364B* InputManager_AddDevice_m32F793DBC05A2944CB84558E37B39849C2079132 (InputManager_t57C115A76BE8B9259F24CF3980EF669C858CA071* __this, String_t* ___layout0, String_t* ___name1, String_t* ___variants2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InputSystem_t4120CA4FE7DCFD56AF9391933FC3F1F485350164_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	InputDevice_t8BCF67533E872A75779C24C93D1D7085B72D364B* V_0 = NULL;
	{
		// return InputSystem.AddDevice(layout, name, variants);
		String_t* L_0 = ___layout0;
		String_t* L_1 = ___name1;
		String_t* L_2 = ___variants2;
		il2cpp_codegen_runtime_class_init_inline(InputSystem_t4120CA4FE7DCFD56AF9391933FC3F1F485350164_il2cpp_TypeInfo_var);
		InputDevice_t8BCF67533E872A75779C24C93D1D7085B72D364B* L_3;
		L_3 = InputSystem_AddDevice_m6A36B1D42CC84336EEA8A36CA6F8EAF7069CA6C1(L_0, L_1, L_2, NULL);
		V_0 = L_3;
		goto IL_000c;
	}

IL_000c:
	{
		// }
		InputDevice_t8BCF67533E872A75779C24C93D1D7085B72D364B* L_4 = V_0;
		return L_4;
	}
}
// System.Void Unity.RenderStreaming.InputSystem.InputManager::RemoveDevice(UnityEngine.InputSystem.InputDevice)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputManager_RemoveDevice_mD6457FACC78EB49B92209003DC40E2E5B9D05EE4 (InputManager_t57C115A76BE8B9259F24CF3980EF669C858CA071* __this, InputDevice_t8BCF67533E872A75779C24C93D1D7085B72D364B* ___device0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InputSystem_t4120CA4FE7DCFD56AF9391933FC3F1F485350164_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// InputSystem.RemoveDevice(device);
		InputDevice_t8BCF67533E872A75779C24C93D1D7085B72D364B* L_0 = ___device0;
		il2cpp_codegen_runtime_class_init_inline(InputSystem_t4120CA4FE7DCFD56AF9391933FC3F1F485350164_il2cpp_TypeInfo_var);
		InputSystem_RemoveDevice_m41F154CEBE1EB94090D2980BEA684E58799EA8B3(L_0, NULL);
		// }
		return;
	}
}
// System.Void Unity.RenderStreaming.InputSystem.InputManager::SetDeviceUsage(UnityEngine.InputSystem.InputDevice,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputManager_SetDeviceUsage_m22D525E84D894A282D606190CD4D6DC3B1440243 (InputManager_t57C115A76BE8B9259F24CF3980EF669C858CA071* __this, InputDevice_t8BCF67533E872A75779C24C93D1D7085B72D364B* ___device0, String_t* ___usage1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InputSystem_t4120CA4FE7DCFD56AF9391933FC3F1F485350164_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// InputSystem.SetDeviceUsage(device, usage);
		InputDevice_t8BCF67533E872A75779C24C93D1D7085B72D364B* L_0 = ___device0;
		String_t* L_1 = ___usage1;
		il2cpp_codegen_runtime_class_init_inline(InputSystem_t4120CA4FE7DCFD56AF9391933FC3F1F485350164_il2cpp_TypeInfo_var);
		InputSystem_SetDeviceUsage_m313BA9340F206351D53CD2109DFB9EE657B6873F(L_0, L_1, NULL);
		// }
		return;
	}
}
// UnityEngine.InputSystem.Layouts.InputControlLayout Unity.RenderStreaming.InputSystem.InputManager::LoadLayout(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR InputControlLayout_t46A40BE4C976BE33E85F61E63EB34323FED9831D* InputManager_LoadLayout_m8F249CA2AA9CE25D889D1497B9140E82760E9E40 (InputManager_t57C115A76BE8B9259F24CF3980EF669C858CA071* __this, String_t* ___name0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InputSystem_t4120CA4FE7DCFD56AF9391933FC3F1F485350164_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	InputControlLayout_t46A40BE4C976BE33E85F61E63EB34323FED9831D* V_0 = NULL;
	{
		// return InputSystem.LoadLayout(name);
		String_t* L_0 = ___name0;
		il2cpp_codegen_runtime_class_init_inline(InputSystem_t4120CA4FE7DCFD56AF9391933FC3F1F485350164_il2cpp_TypeInfo_var);
		InputControlLayout_t46A40BE4C976BE33E85F61E63EB34323FED9831D* L_1;
		L_1 = InputSystem_LoadLayout_mA58ABD2C31E63EC4E2F47F9E2B7F08A6185366FC(L_0, NULL);
		V_0 = L_1;
		goto IL_000a;
	}

IL_000a:
	{
		// }
		InputControlLayout_t46A40BE4C976BE33E85F61E63EB34323FED9831D* L_2 = V_0;
		return L_2;
	}
}
// System.Void Unity.RenderStreaming.InputSystem.InputManager::RegisterControlLayout(System.String,System.String,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputManager_RegisterControlLayout_m31948AFF22B3F6EF205746DE24EFFD703142610B (InputManager_t57C115A76BE8B9259F24CF3980EF669C858CA071* __this, String_t* ___json0, String_t* ___name1, bool ___isOverride2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InputSystem_t4120CA4FE7DCFD56AF9391933FC3F1F485350164_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	Nullable_1_t4EEC710224A7596AC94C3B6D292E4CB7D84B7F2C V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		// if(isOverride)
		bool L_0 = ___isOverride2;
		V_0 = L_0;
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0010;
		}
	}
	{
		// InputSystem.RegisterLayoutOverride(json, name);
		String_t* L_2 = ___json0;
		String_t* L_3 = ___name1;
		il2cpp_codegen_runtime_class_init_inline(InputSystem_t4120CA4FE7DCFD56AF9391933FC3F1F485350164_il2cpp_TypeInfo_var);
		InputSystem_RegisterLayoutOverride_mBAE3A58A6BACBA6F464E8E9CCC367C9198A323C1(L_2, L_3, NULL);
		goto IL_0021;
	}

IL_0010:
	{
		// InputSystem.RegisterLayout(json, name);
		String_t* L_4 = ___json0;
		String_t* L_5 = ___name1;
		il2cpp_codegen_initobj((&V_1), sizeof(Nullable_1_t4EEC710224A7596AC94C3B6D292E4CB7D84B7F2C));
		Nullable_1_t4EEC710224A7596AC94C3B6D292E4CB7D84B7F2C L_6 = V_1;
		il2cpp_codegen_runtime_class_init_inline(InputSystem_t4120CA4FE7DCFD56AF9391933FC3F1F485350164_il2cpp_TypeInfo_var);
		InputSystem_RegisterLayout_m0B85065BF998E684B4CAC7D8DF2759906D551B9D(L_4, L_5, L_6, NULL);
	}

IL_0021:
	{
		// }
		return;
	}
}
// System.Void Unity.RenderStreaming.InputSystem.InputManager::RemoveLayout(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputManager_RemoveLayout_mF7A23065EADEEA7D127D2856858E0D1D77B4F63C (InputManager_t57C115A76BE8B9259F24CF3980EF669C858CA071* __this, String_t* ___name0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InputSystem_t4120CA4FE7DCFD56AF9391933FC3F1F485350164_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// InputSystem.RemoveLayout(name);
		String_t* L_0 = ___name0;
		il2cpp_codegen_runtime_class_init_inline(InputSystem_t4120CA4FE7DCFD56AF9391933FC3F1F485350164_il2cpp_TypeInfo_var);
		InputSystem_RemoveLayout_m7AA59AD8EC2AA0BAA64FAA37B96CF00C2DA27A4D(L_0, NULL);
		// }
		return;
	}
}
// System.Void Unity.RenderStreaming.InputSystem.InputManager::QueueEvent(UnityEngine.InputSystem.LowLevel.InputEventPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputManager_QueueEvent_mE590BB70509448F1966D95DFB29F4988034FAC35 (InputManager_t57C115A76BE8B9259F24CF3980EF669C858CA071* __this, InputEventPtr_tC2A58521C9AFB479CC88789D5E0797D817C721C0 ___eventPtr0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InputSystem_t4120CA4FE7DCFD56AF9391933FC3F1F485350164_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// InputSystem.QueueEvent(eventPtr);
		InputEventPtr_tC2A58521C9AFB479CC88789D5E0797D817C721C0 L_0 = ___eventPtr0;
		il2cpp_codegen_runtime_class_init_inline(InputSystem_t4120CA4FE7DCFD56AF9391933FC3F1F485350164_il2cpp_TypeInfo_var);
		InputSystem_QueueEvent_m35F20668E3E09695F94D64AD9E9FA6510F8BBB40(L_0, NULL);
		// }
		return;
	}
}
// System.Void Unity.RenderStreaming.InputSystem.InputManager::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputManager__ctor_mC25C0393A1E1F45E38536646098201190E414202 (InputManager_t57C115A76BE8B9259F24CF3980EF669C858CA071* __this, const RuntimeMethod* method) 
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
// System.Boolean Unity.RenderStreaming.InputSystem.InputRemoting::get_sending()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool InputRemoting_get_sending_m21F0ACD760A4DCFBA070CBAA9391E97D279F88A0 (InputRemoting_t4BBB51BEA47ACD8A408459C612008D52240C6985* __this, const RuntimeMethod* method) 
{
	{
		// get => (m_Flags & Flags.Sending) == Flags.Sending;
		int32_t L_0 = __this->___m_Flags_0;
		return (bool)((((int32_t)((int32_t)((int32_t)L_0&1))) == ((int32_t)1))? 1 : 0);
	}
}
// System.Void Unity.RenderStreaming.InputSystem.InputRemoting::set_sending(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputRemoting_set_sending_m38E4E2654D50BD0E3FE1725FB199C56EBA51D51E (InputRemoting_t4BBB51BEA47ACD8A408459C612008D52240C6985* __this, bool ___value0, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		// if (value)
		bool L_0 = ___value0;
		V_0 = L_0;
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0016;
		}
	}
	{
		// m_Flags |= Flags.Sending;
		int32_t L_2 = __this->___m_Flags_0;
		__this->___m_Flags_0 = ((int32_t)((int32_t)L_2|1));
		goto IL_0025;
	}

IL_0016:
	{
		// m_Flags &= ~Flags.Sending;
		int32_t L_3 = __this->___m_Flags_0;
		__this->___m_Flags_0 = ((int32_t)((int32_t)L_3&((int32_t)-2)));
	}

IL_0025:
	{
		// }
		return;
	}
}
// System.Void Unity.RenderStreaming.InputSystem.InputRemoting::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputRemoting__cctor_mE3FF59C45401B687989A259B5247C107D9A06B92 (const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void Unity.RenderStreaming.InputSystem.InputRemoting::.ctor(Unity.RenderStreaming.InputSystem.IInputManager,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputRemoting__ctor_m402BE2C33DD02EEED0FF43941D7F25042FB77E15 (InputRemoting_t4BBB51BEA47ACD8A408459C612008D52240C6985* __this, RuntimeObject* ___manager0, bool ___startSendingOnConnect1, const RuntimeMethod* method) 
{
	bool V_0 = false;
	bool V_1 = false;
	{
		// internal InputRemoting(IInputManager manager, bool startSendingOnConnect = false)
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		// if (manager == null)
		RuntimeObject* L_0 = ___manager0;
		V_0 = (bool)((((RuntimeObject*)(RuntimeObject*)L_0) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_001b;
		}
	}
	{
		// throw new ArgumentNullException("manager");
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_2 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		NullCheck(L_2);
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_2, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral464F70DC593F98B22B468600E676CA836C447D3D)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InputRemoting__ctor_m402BE2C33DD02EEED0FF43941D7F25042FB77E15_RuntimeMethod_var)));
	}

IL_001b:
	{
		// m_LocalManager = manager;
		RuntimeObject* L_3 = ___manager0;
		__this->___m_LocalManager_1 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_LocalManager_1), (void*)L_3);
		// if (startSendingOnConnect)
		bool L_4 = ___startSendingOnConnect1;
		V_1 = L_4;
		bool L_5 = V_1;
		if (!L_5)
		{
			goto IL_0035;
		}
	}
	{
		// m_Flags |= Flags.StartSendingOnConnect;
		int32_t L_6 = __this->___m_Flags_0;
		__this->___m_Flags_0 = ((int32_t)((int32_t)L_6|2));
	}

IL_0035:
	{
		// }
		return;
	}
}
// System.Void Unity.RenderStreaming.InputSystem.InputRemoting::StartSending()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputRemoting_StartSending_m542F3ECB7945344C54585434ABEE46D833664D63 (InputRemoting_t4BBB51BEA47ACD8A408459C612008D52240C6985* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_t62CFC7E46D3237DF830A4F831466D93C80CCEB03_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_2_t4797B88C63509F2EE4385D6DABE6A4B5AD5393F7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_2_t4943DD8C32CAB983950535CEF3BABA85DF8C9AAA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_2_tB79528C85CFEF7DFF52C575DDAA398D2FE6BC333_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IInputManager_t04CB02929EBE1ED1FFF08A760DE56B1371440513_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InputRemoting_SendDeviceChange_m4BB79774162C085ACB5A7DCE444726B62EE4306B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InputRemoting_SendEvent_m31F4EAB61919DC06BD3B8DA7D2550B41A37EE7E2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InputRemoting_SendLayoutChange_m7EAFDE3C941AF2C15E923CC6119FBA502D2FCE80_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InputRemoting_Send_m5D671416EDF3316E84D23325654D4E92E3874481_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		// if (sending)
		bool L_0;
		L_0 = InputRemoting_get_sending_m21F0ACD760A4DCFBA070CBAA9391E97D279F88A0(__this, NULL);
		V_0 = L_0;
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_000d;
		}
	}
	{
		// return;
		goto IL_007c;
	}

IL_000d:
	{
		// m_LocalManager.onMessage += Send;
		RuntimeObject* L_2 = __this->___m_LocalManager_1;
		Action_1_t62CFC7E46D3237DF830A4F831466D93C80CCEB03* L_3 = (Action_1_t62CFC7E46D3237DF830A4F831466D93C80CCEB03*)il2cpp_codegen_object_new(Action_1_t62CFC7E46D3237DF830A4F831466D93C80CCEB03_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		Action_1__ctor_mC48A1C69CDF3D8A288DC1276D72B190A99D9A0CC(L_3, __this, (intptr_t)((void*)InputRemoting_Send_m5D671416EDF3316E84D23325654D4E92E3874481_RuntimeMethod_var), NULL);
		NullCheck(L_2);
		InterfaceActionInvoker1< Action_1_t62CFC7E46D3237DF830A4F831466D93C80CCEB03* >::Invoke(0 /* System.Void Unity.RenderStreaming.InputSystem.IInputManager::add_onMessage(System.Action`1<Unity.RenderStreaming.InputSystem.InputRemoting/Message>) */, IInputManager_t04CB02929EBE1ED1FFF08A760DE56B1371440513_il2cpp_TypeInfo_var, L_2, L_3);
		// m_LocalManager.onEvent += SendEvent;
		RuntimeObject* L_4 = __this->___m_LocalManager_1;
		Action_2_t4943DD8C32CAB983950535CEF3BABA85DF8C9AAA* L_5 = (Action_2_t4943DD8C32CAB983950535CEF3BABA85DF8C9AAA*)il2cpp_codegen_object_new(Action_2_t4943DD8C32CAB983950535CEF3BABA85DF8C9AAA_il2cpp_TypeInfo_var);
		NullCheck(L_5);
		Action_2__ctor_m43B5BA62418FAB32773B12CEFF46A46855BF5B10(L_5, __this, (intptr_t)((void*)InputRemoting_SendEvent_m31F4EAB61919DC06BD3B8DA7D2550B41A37EE7E2_RuntimeMethod_var), NULL);
		NullCheck(L_4);
		InterfaceActionInvoker1< Action_2_t4943DD8C32CAB983950535CEF3BABA85DF8C9AAA* >::Invoke(2 /* System.Void Unity.RenderStreaming.InputSystem.IInputManager::add_onEvent(System.Action`2<UnityEngine.InputSystem.LowLevel.InputEventPtr,UnityEngine.InputSystem.InputDevice>) */, IInputManager_t04CB02929EBE1ED1FFF08A760DE56B1371440513_il2cpp_TypeInfo_var, L_4, L_5);
		// m_LocalManager.onDeviceChange += SendDeviceChange;
		RuntimeObject* L_6 = __this->___m_LocalManager_1;
		Action_2_tB79528C85CFEF7DFF52C575DDAA398D2FE6BC333* L_7 = (Action_2_tB79528C85CFEF7DFF52C575DDAA398D2FE6BC333*)il2cpp_codegen_object_new(Action_2_tB79528C85CFEF7DFF52C575DDAA398D2FE6BC333_il2cpp_TypeInfo_var);
		NullCheck(L_7);
		Action_2__ctor_m23A4911D82F290811EDC6BFC315C339857526804(L_7, __this, (intptr_t)((void*)InputRemoting_SendDeviceChange_m4BB79774162C085ACB5A7DCE444726B62EE4306B_RuntimeMethod_var), NULL);
		NullCheck(L_6);
		InterfaceActionInvoker1< Action_2_tB79528C85CFEF7DFF52C575DDAA398D2FE6BC333* >::Invoke(4 /* System.Void Unity.RenderStreaming.InputSystem.IInputManager::add_onDeviceChange(System.Action`2<UnityEngine.InputSystem.InputDevice,UnityEngine.InputSystem.InputDeviceChange>) */, IInputManager_t04CB02929EBE1ED1FFF08A760DE56B1371440513_il2cpp_TypeInfo_var, L_6, L_7);
		// m_LocalManager.onLayoutChange += SendLayoutChange;
		RuntimeObject* L_8 = __this->___m_LocalManager_1;
		Action_2_t4797B88C63509F2EE4385D6DABE6A4B5AD5393F7* L_9 = (Action_2_t4797B88C63509F2EE4385D6DABE6A4B5AD5393F7*)il2cpp_codegen_object_new(Action_2_t4797B88C63509F2EE4385D6DABE6A4B5AD5393F7_il2cpp_TypeInfo_var);
		NullCheck(L_9);
		Action_2__ctor_m10175669DF3F5CF6A6EB1DAB1C4A5595AE7EC4FC(L_9, __this, (intptr_t)((void*)InputRemoting_SendLayoutChange_m7EAFDE3C941AF2C15E923CC6119FBA502D2FCE80_RuntimeMethod_var), NULL);
		NullCheck(L_8);
		InterfaceActionInvoker1< Action_2_t4797B88C63509F2EE4385D6DABE6A4B5AD5393F7* >::Invoke(6 /* System.Void Unity.RenderStreaming.InputSystem.IInputManager::add_onLayoutChange(System.Action`2<System.String,UnityEngine.InputSystem.InputControlLayoutChange>) */, IInputManager_t04CB02929EBE1ED1FFF08A760DE56B1371440513_il2cpp_TypeInfo_var, L_8, L_9);
		// sending = true;
		InputRemoting_set_sending_m38E4E2654D50BD0E3FE1725FB199C56EBA51D51E(__this, (bool)1, NULL);
		// SendInitialMessages();
		InputRemoting_SendInitialMessages_mA46BE703E38096F2B83548E2338F53246E2BE136(__this, NULL);
	}

IL_007c:
	{
		// }
		return;
	}
}
// System.Void Unity.RenderStreaming.InputSystem.InputRemoting::StopSending()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputRemoting_StopSending_m9658A7464DCDFAD141C99D2793CF4B14E1953FE8 (InputRemoting_t4BBB51BEA47ACD8A408459C612008D52240C6985* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_t62CFC7E46D3237DF830A4F831466D93C80CCEB03_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_2_t4797B88C63509F2EE4385D6DABE6A4B5AD5393F7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_2_t4943DD8C32CAB983950535CEF3BABA85DF8C9AAA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_2_tB79528C85CFEF7DFF52C575DDAA398D2FE6BC333_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IInputManager_t04CB02929EBE1ED1FFF08A760DE56B1371440513_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InputRemoting_SendDeviceChange_m4BB79774162C085ACB5A7DCE444726B62EE4306B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InputRemoting_SendEvent_m31F4EAB61919DC06BD3B8DA7D2550B41A37EE7E2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InputRemoting_SendLayoutChange_m7EAFDE3C941AF2C15E923CC6119FBA502D2FCE80_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InputRemoting_Send_m5D671416EDF3316E84D23325654D4E92E3874481_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		// if (!sending)
		bool L_0;
		L_0 = InputRemoting_get_sending_m21F0ACD760A4DCFBA070CBAA9391E97D279F88A0(__this, NULL);
		V_0 = (bool)((((int32_t)L_0) == ((int32_t)0))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0010;
		}
	}
	{
		// return;
		goto IL_0078;
	}

IL_0010:
	{
		// m_LocalManager.onMessage -= Send;
		RuntimeObject* L_2 = __this->___m_LocalManager_1;
		Action_1_t62CFC7E46D3237DF830A4F831466D93C80CCEB03* L_3 = (Action_1_t62CFC7E46D3237DF830A4F831466D93C80CCEB03*)il2cpp_codegen_object_new(Action_1_t62CFC7E46D3237DF830A4F831466D93C80CCEB03_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		Action_1__ctor_mC48A1C69CDF3D8A288DC1276D72B190A99D9A0CC(L_3, __this, (intptr_t)((void*)InputRemoting_Send_m5D671416EDF3316E84D23325654D4E92E3874481_RuntimeMethod_var), NULL);
		NullCheck(L_2);
		InterfaceActionInvoker1< Action_1_t62CFC7E46D3237DF830A4F831466D93C80CCEB03* >::Invoke(1 /* System.Void Unity.RenderStreaming.InputSystem.IInputManager::remove_onMessage(System.Action`1<Unity.RenderStreaming.InputSystem.InputRemoting/Message>) */, IInputManager_t04CB02929EBE1ED1FFF08A760DE56B1371440513_il2cpp_TypeInfo_var, L_2, L_3);
		// m_LocalManager.onEvent -= SendEvent;
		RuntimeObject* L_4 = __this->___m_LocalManager_1;
		Action_2_t4943DD8C32CAB983950535CEF3BABA85DF8C9AAA* L_5 = (Action_2_t4943DD8C32CAB983950535CEF3BABA85DF8C9AAA*)il2cpp_codegen_object_new(Action_2_t4943DD8C32CAB983950535CEF3BABA85DF8C9AAA_il2cpp_TypeInfo_var);
		NullCheck(L_5);
		Action_2__ctor_m43B5BA62418FAB32773B12CEFF46A46855BF5B10(L_5, __this, (intptr_t)((void*)InputRemoting_SendEvent_m31F4EAB61919DC06BD3B8DA7D2550B41A37EE7E2_RuntimeMethod_var), NULL);
		NullCheck(L_4);
		InterfaceActionInvoker1< Action_2_t4943DD8C32CAB983950535CEF3BABA85DF8C9AAA* >::Invoke(3 /* System.Void Unity.RenderStreaming.InputSystem.IInputManager::remove_onEvent(System.Action`2<UnityEngine.InputSystem.LowLevel.InputEventPtr,UnityEngine.InputSystem.InputDevice>) */, IInputManager_t04CB02929EBE1ED1FFF08A760DE56B1371440513_il2cpp_TypeInfo_var, L_4, L_5);
		// m_LocalManager.onDeviceChange -= SendDeviceChange;
		RuntimeObject* L_6 = __this->___m_LocalManager_1;
		Action_2_tB79528C85CFEF7DFF52C575DDAA398D2FE6BC333* L_7 = (Action_2_tB79528C85CFEF7DFF52C575DDAA398D2FE6BC333*)il2cpp_codegen_object_new(Action_2_tB79528C85CFEF7DFF52C575DDAA398D2FE6BC333_il2cpp_TypeInfo_var);
		NullCheck(L_7);
		Action_2__ctor_m23A4911D82F290811EDC6BFC315C339857526804(L_7, __this, (intptr_t)((void*)InputRemoting_SendDeviceChange_m4BB79774162C085ACB5A7DCE444726B62EE4306B_RuntimeMethod_var), NULL);
		NullCheck(L_6);
		InterfaceActionInvoker1< Action_2_tB79528C85CFEF7DFF52C575DDAA398D2FE6BC333* >::Invoke(5 /* System.Void Unity.RenderStreaming.InputSystem.IInputManager::remove_onDeviceChange(System.Action`2<UnityEngine.InputSystem.InputDevice,UnityEngine.InputSystem.InputDeviceChange>) */, IInputManager_t04CB02929EBE1ED1FFF08A760DE56B1371440513_il2cpp_TypeInfo_var, L_6, L_7);
		// m_LocalManager.onLayoutChange -= SendLayoutChange;
		RuntimeObject* L_8 = __this->___m_LocalManager_1;
		Action_2_t4797B88C63509F2EE4385D6DABE6A4B5AD5393F7* L_9 = (Action_2_t4797B88C63509F2EE4385D6DABE6A4B5AD5393F7*)il2cpp_codegen_object_new(Action_2_t4797B88C63509F2EE4385D6DABE6A4B5AD5393F7_il2cpp_TypeInfo_var);
		NullCheck(L_9);
		Action_2__ctor_m10175669DF3F5CF6A6EB1DAB1C4A5595AE7EC4FC(L_9, __this, (intptr_t)((void*)InputRemoting_SendLayoutChange_m7EAFDE3C941AF2C15E923CC6119FBA502D2FCE80_RuntimeMethod_var), NULL);
		NullCheck(L_8);
		InterfaceActionInvoker1< Action_2_t4797B88C63509F2EE4385D6DABE6A4B5AD5393F7* >::Invoke(7 /* System.Void Unity.RenderStreaming.InputSystem.IInputManager::remove_onLayoutChange(System.Action`2<System.String,UnityEngine.InputSystem.InputControlLayoutChange>) */, IInputManager_t04CB02929EBE1ED1FFF08A760DE56B1371440513_il2cpp_TypeInfo_var, L_8, L_9);
		// sending = false;
		InputRemoting_set_sending_m38E4E2654D50BD0E3FE1725FB199C56EBA51D51E(__this, (bool)0, NULL);
	}

IL_0078:
	{
		// }
		return;
	}
}
// System.Void Unity.RenderStreaming.InputSystem.InputRemoting::System.IObserver<Unity.RenderStreaming.InputSystem.InputRemoting.Message>.OnNext(Unity.RenderStreaming.InputSystem.InputRemoting/Message)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputRemoting_System_IObserverU3CUnity_RenderStreaming_InputSystem_InputRemoting_MessageU3E_OnNext_m1BEF79BD7AE22676B4F6F9B2842234BB4FA6D8ED (InputRemoting_t4BBB51BEA47ACD8A408459C612008D52240C6985* __this, Message_tD936DB9861B7DBCDC7BCEB495736886D5EFAD801 ___msg0, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		// switch (msg.type)
		Message_tD936DB9861B7DBCDC7BCEB495736886D5EFAD801 L_0 = ___msg0;
		int32_t L_1 = L_0.___type_1;
		V_1 = L_1;
		int32_t L_2 = V_1;
		V_0 = L_2;
		int32_t L_3 = V_0;
		switch (L_3)
		{
			case 0:
			{
				goto IL_003a;
			}
			case 1:
			{
				goto IL_0043;
			}
			case 2:
			{
				goto IL_004d;
			}
			case 3:
			{
				goto IL_0061;
			}
			case 4:
			{
				goto IL_006b;
			}
			case 5:
			{
				goto IL_007f;
			}
			case 6:
			{
				goto IL_0057;
			}
			case 7:
			{
				goto IL_0075;
			}
			case 8:
			{
				goto IL_0089;
			}
			case 9:
			{
				goto IL_0092;
			}
		}
	}
	{
		goto IL_009b;
	}

IL_003a:
	{
		// ConnectMsg.Process(this);
		ConnectMsg_Process_m07B09534D7399ECF06A17B7747F7AAF9EFFC4DEA(__this, NULL);
		// break;
		goto IL_009b;
	}

IL_0043:
	{
		// DisconnectMsg.Process(this, msg);
		Message_tD936DB9861B7DBCDC7BCEB495736886D5EFAD801 L_4 = ___msg0;
		DisconnectMsg_Process_mD537D2BDC389E8A8AE85392437EF411432664A9D(__this, L_4, NULL);
		// break;
		goto IL_009b;
	}

IL_004d:
	{
		// NewLayoutMsg.Process(this, msg);
		Message_tD936DB9861B7DBCDC7BCEB495736886D5EFAD801 L_5 = ___msg0;
		NewLayoutMsg_Process_m398E07BC9F273420602C81BD3F3A9D493ABF124E(__this, L_5, NULL);
		// break;
		goto IL_009b;
	}

IL_0057:
	{
		// RemoveLayoutMsg.Process(this, msg);
		Message_tD936DB9861B7DBCDC7BCEB495736886D5EFAD801 L_6 = ___msg0;
		RemoveLayoutMsg_Process_m46502048FBC7DFE41A7A930F1821F1DF72E88F54(__this, L_6, NULL);
		// break;
		goto IL_009b;
	}

IL_0061:
	{
		// NewDeviceMsg.Process(this, msg);
		Message_tD936DB9861B7DBCDC7BCEB495736886D5EFAD801 L_7 = ___msg0;
		NewDeviceMsg_Process_m22BF4A6B18F0C8F115FC61AB87DDB234BE803A53(__this, L_7, NULL);
		// break;
		goto IL_009b;
	}

IL_006b:
	{
		// NewEventsMsg.Process(this, msg);
		Message_tD936DB9861B7DBCDC7BCEB495736886D5EFAD801 L_8 = ___msg0;
		NewEventsMsg_Process_m958137B8A7C9CFCF99C3BE2F2E1523C78009BD81(__this, L_8, NULL);
		// break;
		goto IL_009b;
	}

IL_0075:
	{
		// ChangeUsageMsg.Process(this, msg);
		Message_tD936DB9861B7DBCDC7BCEB495736886D5EFAD801 L_9 = ___msg0;
		ChangeUsageMsg_Process_m50A137F20A93FE67272ADE2B96B5705D15D09F85(__this, L_9, NULL);
		// break;
		goto IL_009b;
	}

IL_007f:
	{
		// RemoveDeviceMsg.Process(this, msg);
		Message_tD936DB9861B7DBCDC7BCEB495736886D5EFAD801 L_10 = ___msg0;
		RemoveDeviceMsg_Process_m25B08D4A90E34170938B0487BE44ACCCFC4A85F4(__this, L_10, NULL);
		// break;
		goto IL_009b;
	}

IL_0089:
	{
		// StartSendingMsg.Process(this);
		StartSendingMsg_Process_m78663D27C08F8C1F73C0ED92414F2B66F02C2020(__this, NULL);
		// break;
		goto IL_009b;
	}

IL_0092:
	{
		// StopSendingMsg.Process(this);
		StopSendingMsg_Process_m59DAD0B9548C832C7A0FC7AF8CBC1C54E3BDDCE1(__this, NULL);
		// break;
		goto IL_009b;
	}

IL_009b:
	{
		// }
		return;
	}
}
// System.Void Unity.RenderStreaming.InputSystem.InputRemoting::System.IObserver<Unity.RenderStreaming.InputSystem.InputRemoting.Message>.OnError(System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputRemoting_System_IObserverU3CUnity_RenderStreaming_InputSystem_InputRemoting_MessageU3E_OnError_mAEC70ABBC6EA078FAC797C16FF1DE5D18E0E482E (InputRemoting_t4BBB51BEA47ACD8A408459C612008D52240C6985* __this, Exception_t* ___error0, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void Unity.RenderStreaming.InputSystem.InputRemoting::System.IObserver<Unity.RenderStreaming.InputSystem.InputRemoting.Message>.OnCompleted()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputRemoting_System_IObserverU3CUnity_RenderStreaming_InputSystem_InputRemoting_MessageU3E_OnCompleted_mB2140D406A7F49D15B29A1CBCDD45D849747CC1D (InputRemoting_t4BBB51BEA47ACD8A408459C612008D52240C6985* __this, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.IDisposable Unity.RenderStreaming.InputSystem.InputRemoting::Subscribe(System.IObserver`1<Unity.RenderStreaming.InputSystem.InputRemoting/Message>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* InputRemoting_Subscribe_m3650F1D497C46AFBB380F631F219E0621757B181 (InputRemoting_t4BBB51BEA47ACD8A408459C612008D52240C6985* __this, RuntimeObject* ___observer0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ArrayHelpers_Append_TisSubscriber_tCE25893C3FF2E8E4590B8EFBE9DE0316FC0AD8E7_m6BEE27048FF4C626789BA127C739F3210F3FE9CD_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Subscriber_tCE25893C3FF2E8E4590B8EFBE9DE0316FC0AD8E7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Subscriber_tCE25893C3FF2E8E4590B8EFBE9DE0316FC0AD8E7* V_0 = NULL;
	bool V_1 = false;
	RuntimeObject* V_2 = NULL;
	{
		// if (observer == null)
		RuntimeObject* L_0 = ___observer0;
		V_1 = (bool)((((RuntimeObject*)(RuntimeObject*)L_0) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_1 = V_1;
		if (!L_1)
		{
			goto IL_0014;
		}
	}
	{
		// throw new ArgumentNullException("observer");
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_2 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		NullCheck(L_2);
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_2, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral6A96E171FF5210D477623DA1C8B47807B594EA39)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InputRemoting_Subscribe_m3650F1D497C46AFBB380F631F219E0621757B181_RuntimeMethod_var)));
	}

IL_0014:
	{
		// var subscriber = new Subscriber { owner = this, observer = observer };
		Subscriber_tCE25893C3FF2E8E4590B8EFBE9DE0316FC0AD8E7* L_3 = (Subscriber_tCE25893C3FF2E8E4590B8EFBE9DE0316FC0AD8E7*)il2cpp_codegen_object_new(Subscriber_tCE25893C3FF2E8E4590B8EFBE9DE0316FC0AD8E7_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		Subscriber__ctor_mE0F29FB4AE3005DAE999192A3A53F3FCBF27237E(L_3, NULL);
		Subscriber_tCE25893C3FF2E8E4590B8EFBE9DE0316FC0AD8E7* L_4 = L_3;
		NullCheck(L_4);
		L_4->___owner_0 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_4->___owner_0), (void*)__this);
		Subscriber_tCE25893C3FF2E8E4590B8EFBE9DE0316FC0AD8E7* L_5 = L_4;
		RuntimeObject* L_6 = ___observer0;
		NullCheck(L_5);
		L_5->___observer_1 = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&L_5->___observer_1), (void*)L_6);
		V_0 = L_5;
		// ArrayHelpers.Append(ref m_Subscribers, subscriber);
		SubscriberU5BU5D_tF989EA4535B55CD10D08D7C8C981FC376FC12C18** L_7 = (&__this->___m_Subscribers_2);
		Subscriber_tCE25893C3FF2E8E4590B8EFBE9DE0316FC0AD8E7* L_8 = V_0;
		int32_t L_9;
		L_9 = ArrayHelpers_Append_TisSubscriber_tCE25893C3FF2E8E4590B8EFBE9DE0316FC0AD8E7_m6BEE27048FF4C626789BA127C739F3210F3FE9CD(L_7, L_8, ArrayHelpers_Append_TisSubscriber_tCE25893C3FF2E8E4590B8EFBE9DE0316FC0AD8E7_m6BEE27048FF4C626789BA127C739F3210F3FE9CD_RuntimeMethod_var);
		// return subscriber;
		Subscriber_tCE25893C3FF2E8E4590B8EFBE9DE0316FC0AD8E7* L_10 = V_0;
		V_2 = L_10;
		goto IL_0039;
	}

IL_0039:
	{
		// }
		RuntimeObject* L_11 = V_2;
		return L_11;
	}
}
// System.Void Unity.RenderStreaming.InputSystem.InputRemoting::SendInitialMessages()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputRemoting_SendInitialMessages_mA46BE703E38096F2B83548E2338F53246E2BE136 (InputRemoting_t4BBB51BEA47ACD8A408459C612008D52240C6985* __this, const RuntimeMethod* method) 
{
	{
		// SendAllGeneratedLayouts();
		InputRemoting_SendAllGeneratedLayouts_mF4E6D128D372B32C5FEDDD9B9804F65398F641D2(__this, NULL);
		// SendAllDevices();
		InputRemoting_SendAllDevices_mA55292B9896AF776507185AE6D8352655E6B0815(__this, NULL);
		// }
		return;
	}
}
// System.Void Unity.RenderStreaming.InputSystem.InputRemoting::SendAllGeneratedLayouts()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputRemoting_SendAllGeneratedLayouts_mF4E6D128D372B32C5FEDDD9B9804F65398F641D2 (InputRemoting_t4BBB51BEA47ACD8A408459C612008D52240C6985* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerable_1_t349E66EC5F09B881A8E52EE40A1AB9EC60E08E44_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_1_t73FD060C436E3C4264A734C8F8DCC01DFF6046B8_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IInputManager_t04CB02929EBE1ED1FFF08A760DE56B1371440513_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	String_t* V_1 = NULL;
	{
		// foreach (var layout in m_LocalManager.layouts)
		RuntimeObject* L_0 = __this->___m_LocalManager_1;
		NullCheck(L_0);
		RuntimeObject* L_1;
		L_1 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(9 /* System.Collections.Generic.IEnumerable`1<System.String> Unity.RenderStreaming.InputSystem.IInputManager::get_layouts() */, IInputManager_t04CB02929EBE1ED1FFF08A760DE56B1371440513_il2cpp_TypeInfo_var, L_0);
		NullCheck(L_1);
		RuntimeObject* L_2;
		L_2 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.String>::GetEnumerator() */, IEnumerable_1_t349E66EC5F09B881A8E52EE40A1AB9EC60E08E44_il2cpp_TypeInfo_var, L_1);
		V_0 = L_2;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_002e:
			{// begin finally (depth: 1)
				{
					RuntimeObject* L_3 = V_0;
					if (!L_3)
					{
						goto IL_0038;
					}
				}
				{
					RuntimeObject* L_4 = V_0;
					NullCheck(L_4);
					InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_4);
				}

IL_0038:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_0024_1;
			}

IL_0015_1:
			{
				// foreach (var layout in m_LocalManager.layouts)
				RuntimeObject* L_5 = V_0;
				NullCheck(L_5);
				String_t* L_6;
				L_6 = InterfaceFuncInvoker0< String_t* >::Invoke(0 /* T System.Collections.Generic.IEnumerator`1<System.String>::get_Current() */, IEnumerator_1_t73FD060C436E3C4264A734C8F8DCC01DFF6046B8_il2cpp_TypeInfo_var, L_5);
				V_1 = L_6;
				// SendLayout(layout);
				String_t* L_7 = V_1;
				InputRemoting_SendLayout_m4DBD3DBFB6215A5D4DAAF0087B41DC361B133584(__this, L_7, NULL);
			}

IL_0024_1:
			{
				// foreach (var layout in m_LocalManager.layouts)
				RuntimeObject* L_8 = V_0;
				NullCheck(L_8);
				bool L_9;
				L_9 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_8);
				if (L_9)
				{
					goto IL_0015_1;
				}
			}
			{
				goto IL_0039;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0039:
	{
		// }
		return;
	}
}
// System.Void Unity.RenderStreaming.InputSystem.InputRemoting::SendLayout(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputRemoting_SendLayout_m4DBD3DBFB6215A5D4DAAF0087B41DC361B133584 (InputRemoting_t4BBB51BEA47ACD8A408459C612008D52240C6985* __this, String_t* ___layoutName0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1_get_HasValue_mB0EB37808971A8C9C6034F5EF00AA28A8758520C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1_get_Value_m5E4FBECB1D4CDA8E5D1BB691EDF90C4F3510E3B9_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	Nullable_1_t90A0E6202C33510EEDDE5954340106E0AF91D5B5 V_0;
	memset((&V_0), 0, sizeof(V_0));
	bool V_1 = false;
	bool V_2 = false;
	{
		// if (m_Subscribers == null)
		SubscriberU5BU5D_tF989EA4535B55CD10D08D7C8C981FC376FC12C18* L_0 = __this->___m_Subscribers_2;
		V_1 = (bool)((((RuntimeObject*)(SubscriberU5BU5D_tF989EA4535B55CD10D08D7C8C981FC376FC12C18*)L_0) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_1 = V_1;
		if (!L_1)
		{
			goto IL_0010;
		}
	}
	{
		// return;
		goto IL_0031;
	}

IL_0010:
	{
		// var message = NewLayoutMsg.Create(this, layoutName);
		String_t* L_2 = ___layoutName0;
		Nullable_1_t90A0E6202C33510EEDDE5954340106E0AF91D5B5 L_3;
		L_3 = NewLayoutMsg_Create_m3B8780CC5C3FC5C7CA3D388FF852925A0AB6B8A6(__this, L_2, NULL);
		V_0 = L_3;
		// if (message != null)
		bool L_4;
		L_4 = Nullable_1_get_HasValue_mB0EB37808971A8C9C6034F5EF00AA28A8758520C_inline((&V_0), Nullable_1_get_HasValue_mB0EB37808971A8C9C6034F5EF00AA28A8758520C_RuntimeMethod_var);
		V_2 = L_4;
		bool L_5 = V_2;
		if (!L_5)
		{
			goto IL_0031;
		}
	}
	{
		// Send(message.Value);
		Message_tD936DB9861B7DBCDC7BCEB495736886D5EFAD801 L_6;
		L_6 = Nullable_1_get_Value_m5E4FBECB1D4CDA8E5D1BB691EDF90C4F3510E3B9((&V_0), Nullable_1_get_Value_m5E4FBECB1D4CDA8E5D1BB691EDF90C4F3510E3B9_RuntimeMethod_var);
		InputRemoting_Send_m5D671416EDF3316E84D23325654D4E92E3874481(__this, L_6, NULL);
	}

IL_0031:
	{
		// }
		return;
	}
}
// System.Void Unity.RenderStreaming.InputSystem.InputRemoting::SendAllDevices()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputRemoting_SendAllDevices_mA55292B9896AF776507185AE6D8352655E6B0815 (InputRemoting_t4BBB51BEA47ACD8A408459C612008D52240C6985* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_mF7167BCE82C30E7D09082FFCA3F3EFFD32B186CB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_mFAC408E08BBD06FE731A9E84F5E79461F23EACBC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_mFB31F2643918A411B2F1539CA180A763D0200945_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IInputManager_t04CB02929EBE1ED1FFF08A760DE56B1371440513_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReadOnlyArray_1_GetEnumerator_m40DC2BB2BC3C855369753E8780E2B2DE6F38E88C_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	ReadOnlyArray_1_t21E90B3F1DF1E9A2088EA0523F03C47910735BCA V_0;
	memset((&V_0), 0, sizeof(V_0));
	Enumerator_t81E72BA990D25C50893E883131DA5DF2157A185B V_1;
	memset((&V_1), 0, sizeof(V_1));
	InputDevice_t8BCF67533E872A75779C24C93D1D7085B72D364B* V_2 = NULL;
	{
		// var devices = m_LocalManager.devices;
		RuntimeObject* L_0 = __this->___m_LocalManager_1;
		NullCheck(L_0);
		ReadOnlyArray_1_t21E90B3F1DF1E9A2088EA0523F03C47910735BCA L_1;
		L_1 = InterfaceFuncInvoker0< ReadOnlyArray_1_t21E90B3F1DF1E9A2088EA0523F03C47910735BCA >::Invoke(8 /* UnityEngine.InputSystem.Utilities.ReadOnlyArray`1<UnityEngine.InputSystem.InputDevice> Unity.RenderStreaming.InputSystem.IInputManager::get_devices() */, IInputManager_t04CB02929EBE1ED1FFF08A760DE56B1371440513_il2cpp_TypeInfo_var, L_0);
		V_0 = L_1;
		// foreach (var device in devices)
		Enumerator_t81E72BA990D25C50893E883131DA5DF2157A185B L_2;
		L_2 = ReadOnlyArray_1_GetEnumerator_m40DC2BB2BC3C855369753E8780E2B2DE6F38E88C((&V_0), ReadOnlyArray_1_GetEnumerator_m40DC2BB2BC3C855369753E8780E2B2DE6F38E88C_RuntimeMethod_var);
		V_1 = L_2;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0033:
			{// begin finally (depth: 1)
				Enumerator_Dispose_mF7167BCE82C30E7D09082FFCA3F3EFFD32B186CB((&V_1), Enumerator_Dispose_mF7167BCE82C30E7D09082FFCA3F3EFFD32B186CB_RuntimeMethod_var);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_0028_1;
			}

IL_0018_1:
			{
				// foreach (var device in devices)
				InputDevice_t8BCF67533E872A75779C24C93D1D7085B72D364B* L_3;
				L_3 = Enumerator_get_Current_mFB31F2643918A411B2F1539CA180A763D0200945((&V_1), Enumerator_get_Current_mFB31F2643918A411B2F1539CA180A763D0200945_RuntimeMethod_var);
				V_2 = L_3;
				// SendDevice(device);
				InputDevice_t8BCF67533E872A75779C24C93D1D7085B72D364B* L_4 = V_2;
				InputRemoting_SendDevice_m71754ADF39142D9822B50B175842CEFE7F89D755(__this, L_4, NULL);
			}

IL_0028_1:
			{
				// foreach (var device in devices)
				bool L_5;
				L_5 = Enumerator_MoveNext_mFAC408E08BBD06FE731A9E84F5E79461F23EACBC((&V_1), Enumerator_MoveNext_mFAC408E08BBD06FE731A9E84F5E79461F23EACBC_RuntimeMethod_var);
				if (L_5)
				{
					goto IL_0018_1;
				}
			}
			{
				goto IL_0042;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0042:
	{
		// }
		return;
	}
}
// System.Void Unity.RenderStreaming.InputSystem.InputRemoting::SendDevice(UnityEngine.InputSystem.InputDevice)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputRemoting_SendDevice_m71754ADF39142D9822B50B175842CEFE7F89D755 (InputRemoting_t4BBB51BEA47ACD8A408459C612008D52240C6985* __this, InputDevice_t8BCF67533E872A75779C24C93D1D7085B72D364B* ___device0, const RuntimeMethod* method) 
{
	Message_tD936DB9861B7DBCDC7BCEB495736886D5EFAD801 V_0;
	memset((&V_0), 0, sizeof(V_0));
	Message_tD936DB9861B7DBCDC7BCEB495736886D5EFAD801 V_1;
	memset((&V_1), 0, sizeof(V_1));
	bool V_2 = false;
	bool V_3 = false;
	{
		// if (m_Subscribers == null)
		SubscriberU5BU5D_tF989EA4535B55CD10D08D7C8C981FC376FC12C18* L_0 = __this->___m_Subscribers_2;
		V_2 = (bool)((((RuntimeObject*)(SubscriberU5BU5D_tF989EA4535B55CD10D08D7C8C981FC376FC12C18*)L_0) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_1 = V_2;
		if (!L_1)
		{
			goto IL_0010;
		}
	}
	{
		// return;
		goto IL_003a;
	}

IL_0010:
	{
		// if (device.remote)
		InputDevice_t8BCF67533E872A75779C24C93D1D7085B72D364B* L_2 = ___device0;
		NullCheck(L_2);
		bool L_3;
		L_3 = InputDevice_get_remote_m931E3EE376DAEFA9852ED066A9F9763D473EE1BE(L_2, NULL);
		V_3 = L_3;
		bool L_4 = V_3;
		if (!L_4)
		{
			goto IL_001c;
		}
	}
	{
		// return;
		goto IL_003a;
	}

IL_001c:
	{
		// var newDeviceMessage = NewDeviceMsg.Create(device);
		InputDevice_t8BCF67533E872A75779C24C93D1D7085B72D364B* L_5 = ___device0;
		Message_tD936DB9861B7DBCDC7BCEB495736886D5EFAD801 L_6;
		L_6 = NewDeviceMsg_Create_m5DBD04782BA2ED8D8504D33EA44ACAA355C57226(L_5, NULL);
		V_0 = L_6;
		// Send(newDeviceMessage);
		Message_tD936DB9861B7DBCDC7BCEB495736886D5EFAD801 L_7 = V_0;
		InputRemoting_Send_m5D671416EDF3316E84D23325654D4E92E3874481(__this, L_7, NULL);
		// var stateEventMessage = NewEventsMsg.CreateStateEvent(device);
		InputDevice_t8BCF67533E872A75779C24C93D1D7085B72D364B* L_8 = ___device0;
		Message_tD936DB9861B7DBCDC7BCEB495736886D5EFAD801 L_9;
		L_9 = NewEventsMsg_CreateStateEvent_m963D4E2C468BCC482A3FB51D56A682B189A6B294(L_8, NULL);
		V_1 = L_9;
		// Send(stateEventMessage);
		Message_tD936DB9861B7DBCDC7BCEB495736886D5EFAD801 L_10 = V_1;
		InputRemoting_Send_m5D671416EDF3316E84D23325654D4E92E3874481(__this, L_10, NULL);
	}

IL_003a:
	{
		// }
		return;
	}
}
// System.Void Unity.RenderStreaming.InputSystem.InputRemoting::SendEvent(UnityEngine.InputSystem.LowLevel.InputEventPtr,UnityEngine.InputSystem.InputDevice)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputRemoting_SendEvent_m31F4EAB61919DC06BD3B8DA7D2550B41A37EE7E2 (InputRemoting_t4BBB51BEA47ACD8A408459C612008D52240C6985* __this, InputEventPtr_tC2A58521C9AFB479CC88789D5E0797D817C721C0 ___eventPtr0, InputDevice_t8BCF67533E872A75779C24C93D1D7085B72D364B* ___device1, const RuntimeMethod* method) 
{
	Message_tD936DB9861B7DBCDC7BCEB495736886D5EFAD801 V_0;
	memset((&V_0), 0, sizeof(V_0));
	bool V_1 = false;
	bool V_2 = false;
	int32_t G_B5_0 = 0;
	{
		// if (m_Subscribers == null)
		SubscriberU5BU5D_tF989EA4535B55CD10D08D7C8C981FC376FC12C18* L_0 = __this->___m_Subscribers_2;
		V_1 = (bool)((((RuntimeObject*)(SubscriberU5BU5D_tF989EA4535B55CD10D08D7C8C981FC376FC12C18*)L_0) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_1 = V_1;
		if (!L_1)
		{
			goto IL_0010;
		}
	}
	{
		// return;
		goto IL_0038;
	}

IL_0010:
	{
		// if (device != null && device.remote)
		InputDevice_t8BCF67533E872A75779C24C93D1D7085B72D364B* L_2 = ___device1;
		if (!L_2)
		{
			goto IL_001b;
		}
	}
	{
		InputDevice_t8BCF67533E872A75779C24C93D1D7085B72D364B* L_3 = ___device1;
		NullCheck(L_3);
		bool L_4;
		L_4 = InputDevice_get_remote_m931E3EE376DAEFA9852ED066A9F9763D473EE1BE(L_3, NULL);
		G_B5_0 = ((int32_t)(L_4));
		goto IL_001c;
	}

IL_001b:
	{
		G_B5_0 = 0;
	}

IL_001c:
	{
		V_2 = (bool)G_B5_0;
		bool L_5 = V_2;
		if (!L_5)
		{
			goto IL_0022;
		}
	}
	{
		// return;
		goto IL_0038;
	}

IL_0022:
	{
		// var message = NewEventsMsg.Create(eventPtr.data, 1);
		InputEvent_t10F727342D1A79DCFC06529C203BB61C194AEBC5* L_6;
		L_6 = InputEventPtr_get_data_m4694B5F91E787CE9586B5C7113AFEB89D33CC616_inline((&___eventPtr0), NULL);
		Message_tD936DB9861B7DBCDC7BCEB495736886D5EFAD801 L_7;
		L_7 = NewEventsMsg_Create_mCA9E8F31223F1B0F843D0EEA4E5BC76AB8DBD392(L_6, 1, NULL);
		V_0 = L_7;
		// Send(message);
		Message_tD936DB9861B7DBCDC7BCEB495736886D5EFAD801 L_8 = V_0;
		InputRemoting_Send_m5D671416EDF3316E84D23325654D4E92E3874481(__this, L_8, NULL);
	}

IL_0038:
	{
		// }
		return;
	}
}
// System.Void Unity.RenderStreaming.InputSystem.InputRemoting::SendDeviceChange(UnityEngine.InputSystem.InputDevice,UnityEngine.InputSystem.InputDeviceChange)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputRemoting_SendDeviceChange_m4BB79774162C085ACB5A7DCE444726B62EE4306B (InputRemoting_t4BBB51BEA47ACD8A408459C612008D52240C6985* __this, InputDevice_t8BCF67533E872A75779C24C93D1D7085B72D364B* ___device0, int32_t ___change1, const RuntimeMethod* method) 
{
	Message_tD936DB9861B7DBCDC7BCEB495736886D5EFAD801 V_0;
	memset((&V_0), 0, sizeof(V_0));
	bool V_1 = false;
	bool V_2 = false;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	{
		// if (m_Subscribers == null)
		SubscriberU5BU5D_tF989EA4535B55CD10D08D7C8C981FC376FC12C18* L_0 = __this->___m_Subscribers_2;
		V_1 = (bool)((((RuntimeObject*)(SubscriberU5BU5D_tF989EA4535B55CD10D08D7C8C981FC376FC12C18*)L_0) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_1 = V_1;
		if (!L_1)
		{
			goto IL_0010;
		}
	}
	{
		// return;
		goto IL_0058;
	}

IL_0010:
	{
		// if (device.remote)
		InputDevice_t8BCF67533E872A75779C24C93D1D7085B72D364B* L_2 = ___device0;
		NullCheck(L_2);
		bool L_3;
		L_3 = InputDevice_get_remote_m931E3EE376DAEFA9852ED066A9F9763D473EE1BE(L_2, NULL);
		V_2 = L_3;
		bool L_4 = V_2;
		if (!L_4)
		{
			goto IL_001c;
		}
	}
	{
		// return;
		goto IL_0058;
	}

IL_001c:
	{
		// switch (change)
		int32_t L_5 = ___change1;
		V_4 = L_5;
		int32_t L_6 = V_4;
		V_3 = L_6;
		int32_t L_7 = V_3;
		if (!L_7)
		{
			goto IL_0033;
		}
	}
	{
		goto IL_0027;
	}

IL_0027:
	{
		int32_t L_8 = V_3;
		if ((((int32_t)L_8) == ((int32_t)1)))
		{
			goto IL_003c;
		}
	}
	{
		goto IL_002d;
	}

IL_002d:
	{
		int32_t L_9 = V_3;
		if ((((int32_t)L_9) == ((int32_t)6)))
		{
			goto IL_0045;
		}
	}
	{
		goto IL_004e;
	}

IL_0033:
	{
		// msg = NewDeviceMsg.Create(device);
		InputDevice_t8BCF67533E872A75779C24C93D1D7085B72D364B* L_10 = ___device0;
		Message_tD936DB9861B7DBCDC7BCEB495736886D5EFAD801 L_11;
		L_11 = NewDeviceMsg_Create_m5DBD04782BA2ED8D8504D33EA44ACAA355C57226(L_10, NULL);
		V_0 = L_11;
		// break;
		goto IL_0050;
	}

IL_003c:
	{
		// msg = RemoveDeviceMsg.Create(device);
		InputDevice_t8BCF67533E872A75779C24C93D1D7085B72D364B* L_12 = ___device0;
		Message_tD936DB9861B7DBCDC7BCEB495736886D5EFAD801 L_13;
		L_13 = RemoveDeviceMsg_Create_m0FD7F02B1C40A542DB262467E4274CEFE5F878F3(L_12, NULL);
		V_0 = L_13;
		// break;
		goto IL_0050;
	}

IL_0045:
	{
		// msg = ChangeUsageMsg.Create(device);
		InputDevice_t8BCF67533E872A75779C24C93D1D7085B72D364B* L_14 = ___device0;
		Message_tD936DB9861B7DBCDC7BCEB495736886D5EFAD801 L_15;
		L_15 = ChangeUsageMsg_Create_m6F62F395DE1B92B848D41D9A5D825944FBACF24A(L_14, NULL);
		V_0 = L_15;
		// break;
		goto IL_0050;
	}

IL_004e:
	{
		// return;
		goto IL_0058;
	}

IL_0050:
	{
		// Send(msg);
		Message_tD936DB9861B7DBCDC7BCEB495736886D5EFAD801 L_16 = V_0;
		InputRemoting_Send_m5D671416EDF3316E84D23325654D4E92E3874481(__this, L_16, NULL);
	}

IL_0058:
	{
		// }
		return;
	}
}
// System.Void Unity.RenderStreaming.InputSystem.InputRemoting::SendLayoutChange(System.String,UnityEngine.InputSystem.InputControlLayoutChange)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputRemoting_SendLayoutChange_m7EAFDE3C941AF2C15E923CC6119FBA502D2FCE80 (InputRemoting_t4BBB51BEA47ACD8A408459C612008D52240C6985* __this, String_t* ___layout0, int32_t ___change1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1_get_HasValue_mB0EB37808971A8C9C6034F5EF00AA28A8758520C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1_get_Value_m5E4FBECB1D4CDA8E5D1BB691EDF90C4F3510E3B9_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	Message_tD936DB9861B7DBCDC7BCEB495736886D5EFAD801 V_0;
	memset((&V_0), 0, sizeof(V_0));
	bool V_1 = false;
	Nullable_1_t90A0E6202C33510EEDDE5954340106E0AF91D5B5 V_2;
	memset((&V_2), 0, sizeof(V_2));
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	bool V_5 = false;
	{
		// if (m_Subscribers == null)
		SubscriberU5BU5D_tF989EA4535B55CD10D08D7C8C981FC376FC12C18* L_0 = __this->___m_Subscribers_2;
		V_1 = (bool)((((RuntimeObject*)(SubscriberU5BU5D_tF989EA4535B55CD10D08D7C8C981FC376FC12C18*)L_0) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_1 = V_1;
		if (!L_1)
		{
			goto IL_0010;
		}
	}
	{
		// return;
		goto IL_0061;
	}

IL_0010:
	{
		// switch (change)
		int32_t L_2 = ___change1;
		V_4 = L_2;
		int32_t L_3 = V_4;
		V_3 = L_3;
		int32_t L_4 = V_3;
		switch (L_4)
		{
			case 0:
			{
				goto IL_002a;
			}
			case 1:
			{
				goto IL_004e;
			}
			case 2:
			{
				goto IL_002a;
			}
		}
	}
	{
		goto IL_0057;
	}

IL_002a:
	{
		// var message = NewLayoutMsg.Create(this, layout);
		String_t* L_5 = ___layout0;
		Nullable_1_t90A0E6202C33510EEDDE5954340106E0AF91D5B5 L_6;
		L_6 = NewLayoutMsg_Create_m3B8780CC5C3FC5C7CA3D388FF852925A0AB6B8A6(__this, L_5, NULL);
		V_2 = L_6;
		// if (message == null)
		bool L_7;
		L_7 = Nullable_1_get_HasValue_mB0EB37808971A8C9C6034F5EF00AA28A8758520C_inline((&V_2), Nullable_1_get_HasValue_mB0EB37808971A8C9C6034F5EF00AA28A8758520C_RuntimeMethod_var);
		V_5 = (bool)((((int32_t)L_7) == ((int32_t)0))? 1 : 0);
		bool L_8 = V_5;
		if (!L_8)
		{
			goto IL_0044;
		}
	}
	{
		// return;
		goto IL_0061;
	}

IL_0044:
	{
		// msg = message.Value;
		Message_tD936DB9861B7DBCDC7BCEB495736886D5EFAD801 L_9;
		L_9 = Nullable_1_get_Value_m5E4FBECB1D4CDA8E5D1BB691EDF90C4F3510E3B9((&V_2), Nullable_1_get_Value_m5E4FBECB1D4CDA8E5D1BB691EDF90C4F3510E3B9_RuntimeMethod_var);
		V_0 = L_9;
		// break;
		goto IL_0059;
	}

IL_004e:
	{
		// msg = RemoveLayoutMsg.Create(layout);
		String_t* L_10 = ___layout0;
		Message_tD936DB9861B7DBCDC7BCEB495736886D5EFAD801 L_11;
		L_11 = RemoveLayoutMsg_Create_m84B94243FC66205A7FE00ED64C355409BE411261(L_10, NULL);
		V_0 = L_11;
		// break;
		goto IL_0059;
	}

IL_0057:
	{
		// return;
		goto IL_0061;
	}

IL_0059:
	{
		// Send(msg);
		Message_tD936DB9861B7DBCDC7BCEB495736886D5EFAD801 L_12 = V_0;
		InputRemoting_Send_m5D671416EDF3316E84D23325654D4E92E3874481(__this, L_12, NULL);
	}

IL_0061:
	{
		// }
		return;
	}
}
// System.Void Unity.RenderStreaming.InputSystem.InputRemoting::Send(Unity.RenderStreaming.InputSystem.InputRemoting/Message)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputRemoting_Send_m5D671416EDF3316E84D23325654D4E92E3874481 (InputRemoting_t4BBB51BEA47ACD8A408459C612008D52240C6985* __this, Message_tD936DB9861B7DBCDC7BCEB495736886D5EFAD801 ___msg0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IObserver_1_tA894BCB49185E04D668DE4BB4E585AF78FE55A01_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	SubscriberU5BU5D_tF989EA4535B55CD10D08D7C8C981FC376FC12C18* V_0 = NULL;
	int32_t V_1 = 0;
	Subscriber_tCE25893C3FF2E8E4590B8EFBE9DE0316FC0AD8E7* V_2 = NULL;
	{
		// foreach (var subscriber in m_Subscribers)
		SubscriberU5BU5D_tF989EA4535B55CD10D08D7C8C981FC376FC12C18* L_0 = __this->___m_Subscribers_2;
		V_0 = L_0;
		V_1 = 0;
		goto IL_0022;
	}

IL_000d:
	{
		// foreach (var subscriber in m_Subscribers)
		SubscriberU5BU5D_tF989EA4535B55CD10D08D7C8C981FC376FC12C18* L_1 = V_0;
		int32_t L_2 = V_1;
		NullCheck(L_1);
		int32_t L_3 = L_2;
		Subscriber_tCE25893C3FF2E8E4590B8EFBE9DE0316FC0AD8E7* L_4 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		V_2 = L_4;
		// subscriber.observer.OnNext(msg);
		Subscriber_tCE25893C3FF2E8E4590B8EFBE9DE0316FC0AD8E7* L_5 = V_2;
		NullCheck(L_5);
		RuntimeObject* L_6 = L_5->___observer_1;
		Message_tD936DB9861B7DBCDC7BCEB495736886D5EFAD801 L_7 = ___msg0;
		NullCheck(L_6);
		InterfaceActionInvoker1< Message_tD936DB9861B7DBCDC7BCEB495736886D5EFAD801 >::Invoke(0 /* System.Void System.IObserver`1<Unity.RenderStreaming.InputSystem.InputRemoting/Message>::OnNext(T) */, IObserver_1_tA894BCB49185E04D668DE4BB4E585AF78FE55A01_il2cpp_TypeInfo_var, L_6, L_7);
		int32_t L_8 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_8, 1));
	}

IL_0022:
	{
		// foreach (var subscriber in m_Subscribers)
		int32_t L_9 = V_1;
		SubscriberU5BU5D_tF989EA4535B55CD10D08D7C8C981FC376FC12C18* L_10 = V_0;
		NullCheck(L_10);
		if ((((int32_t)L_9) < ((int32_t)((int32_t)(((RuntimeArray*)L_10)->max_length)))))
		{
			goto IL_000d;
		}
	}
	{
		// }
		return;
	}
}
// System.Int32 Unity.RenderStreaming.InputSystem.InputRemoting::FindOrCreateSenderRecord(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t InputRemoting_FindOrCreateSenderRecord_mFA9C6363D8897E1FEF20E78A688B668F83CEB8F6 (InputRemoting_t4BBB51BEA47ACD8A408459C612008D52240C6985* __this, int32_t ___senderId0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ArrayHelpers_Append_TisRemoteSender_tE4F28E5B7F46F15B1B18D890E2B8C7E96AB5F6A0_m1303D0C5E4B417079D6D681FC811AEE8E645F162_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	RemoteSender_tE4F28E5B7F46F15B1B18D890E2B8C7E96AB5F6A0 V_0;
	memset((&V_0), 0, sizeof(V_0));
	bool V_1 = false;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	bool V_4 = false;
	int32_t V_5 = 0;
	bool V_6 = false;
	RemoteSender_tE4F28E5B7F46F15B1B18D890E2B8C7E96AB5F6A0 V_7;
	memset((&V_7), 0, sizeof(V_7));
	{
		// if (m_Senders != null)
		RemoteSenderU5BU5D_tFE32D763FD37124BA0F477F37A797F29868A3C3F* L_0 = __this->___m_Senders_3;
		V_1 = (bool)((!(((RuntimeObject*)(RemoteSenderU5BU5D_tFE32D763FD37124BA0F477F37A797F29868A3C3F*)L_0) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_1 = V_1;
		if (!L_1)
		{
			goto IL_004a;
		}
	}
	{
		// var senderCount = m_Senders.Length;
		RemoteSenderU5BU5D_tFE32D763FD37124BA0F477F37A797F29868A3C3F* L_2 = __this->___m_Senders_3;
		NullCheck(L_2);
		V_2 = ((int32_t)(((RuntimeArray*)L_2)->max_length));
		// for (var i = 0; i < senderCount; ++i)
		V_3 = 0;
		goto IL_003f;
	}

IL_001c:
	{
		// if (m_Senders[i].senderId == senderId)
		RemoteSenderU5BU5D_tFE32D763FD37124BA0F477F37A797F29868A3C3F* L_3 = __this->___m_Senders_3;
		int32_t L_4 = V_3;
		NullCheck(L_3);
		int32_t L_5 = ((L_3)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_4)))->___senderId_0;
		int32_t L_6 = ___senderId0;
		V_4 = (bool)((((int32_t)L_5) == ((int32_t)L_6))? 1 : 0);
		bool L_7 = V_4;
		if (!L_7)
		{
			goto IL_003b;
		}
	}
	{
		// return i;
		int32_t L_8 = V_3;
		V_5 = L_8;
		goto IL_006d;
	}

IL_003b:
	{
		// for (var i = 0; i < senderCount; ++i)
		int32_t L_9 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_9, 1));
	}

IL_003f:
	{
		// for (var i = 0; i < senderCount; ++i)
		int32_t L_10 = V_3;
		int32_t L_11 = V_2;
		V_6 = (bool)((((int32_t)L_10) < ((int32_t)L_11))? 1 : 0);
		bool L_12 = V_6;
		if (L_12)
		{
			goto IL_001c;
		}
	}
	{
	}

IL_004a:
	{
		// var sender = new RemoteSender
		// {
		//     senderId = senderId,
		// };
		il2cpp_codegen_initobj((&V_7), sizeof(RemoteSender_tE4F28E5B7F46F15B1B18D890E2B8C7E96AB5F6A0));
		int32_t L_13 = ___senderId0;
		(&V_7)->___senderId_0 = L_13;
		RemoteSender_tE4F28E5B7F46F15B1B18D890E2B8C7E96AB5F6A0 L_14 = V_7;
		V_0 = L_14;
		// return ArrayHelpers.Append(ref m_Senders, sender);
		RemoteSenderU5BU5D_tFE32D763FD37124BA0F477F37A797F29868A3C3F** L_15 = (&__this->___m_Senders_3);
		RemoteSender_tE4F28E5B7F46F15B1B18D890E2B8C7E96AB5F6A0 L_16 = V_0;
		int32_t L_17;
		L_17 = ArrayHelpers_Append_TisRemoteSender_tE4F28E5B7F46F15B1B18D890E2B8C7E96AB5F6A0_m1303D0C5E4B417079D6D681FC811AEE8E645F162(L_15, L_16, ArrayHelpers_Append_TisRemoteSender_tE4F28E5B7F46F15B1B18D890E2B8C7E96AB5F6A0_m1303D0C5E4B417079D6D681FC811AEE8E645F162_RuntimeMethod_var);
		V_5 = L_17;
		goto IL_006d;
	}

IL_006d:
	{
		// }
		int32_t L_18 = V_5;
		return L_18;
	}
}
// System.Int32 Unity.RenderStreaming.InputSystem.InputRemoting::FindLocalDeviceId(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t InputRemoting_FindLocalDeviceId_mD78F4077B78BE2316FB5D44B4258CBA53A7E7213 (InputRemoting_t4BBB51BEA47ACD8A408459C612008D52240C6985* __this, int32_t ___remoteDeviceId0, int32_t ___senderIndex1, const RuntimeMethod* method) 
{
	RemoteInputDeviceU5BU5D_tD2988955C31E6E6005201B6F2E728B014340134E* V_0 = NULL;
	bool V_1 = false;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	bool V_4 = false;
	int32_t V_5 = 0;
	bool V_6 = false;
	{
		// var localDevices = m_Senders[senderIndex].devices;
		RemoteSenderU5BU5D_tFE32D763FD37124BA0F477F37A797F29868A3C3F* L_0 = __this->___m_Senders_3;
		int32_t L_1 = ___senderIndex1;
		NullCheck(L_0);
		RemoteInputDeviceU5BU5D_tD2988955C31E6E6005201B6F2E728B014340134E* L_2 = ((L_0)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_1)))->___devices_2;
		V_0 = L_2;
		// if (localDevices != null)
		RemoteInputDeviceU5BU5D_tD2988955C31E6E6005201B6F2E728B014340134E* L_3 = V_0;
		V_1 = (bool)((!(((RuntimeObject*)(RemoteInputDeviceU5BU5D_tD2988955C31E6E6005201B6F2E728B014340134E*)L_3) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_4 = V_1;
		if (!L_4)
		{
			goto IL_005a;
		}
	}
	{
		// var numLocalDevices = localDevices.Length;
		RemoteInputDeviceU5BU5D_tD2988955C31E6E6005201B6F2E728B014340134E* L_5 = V_0;
		NullCheck(L_5);
		V_2 = ((int32_t)(((RuntimeArray*)L_5)->max_length));
		// for (var i = 0; i < numLocalDevices; ++i)
		V_3 = 0;
		goto IL_004f;
	}

IL_0024:
	{
		// if (localDevices[i].remoteId == remoteDeviceId)
		RemoteInputDeviceU5BU5D_tD2988955C31E6E6005201B6F2E728B014340134E* L_6 = V_0;
		int32_t L_7 = V_3;
		NullCheck(L_6);
		int32_t L_8 = ((L_6)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_7)))->___remoteId_0;
		int32_t L_9 = ___remoteDeviceId0;
		V_4 = (bool)((((int32_t)L_8) == ((int32_t)L_9))? 1 : 0);
		bool L_10 = V_4;
		if (!L_10)
		{
			goto IL_004a;
		}
	}
	{
		// return localDevices[i].localId;
		RemoteInputDeviceU5BU5D_tD2988955C31E6E6005201B6F2E728B014340134E* L_11 = V_0;
		int32_t L_12 = V_3;
		NullCheck(L_11);
		int32_t L_13 = ((L_11)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_12)))->___localId_1;
		V_5 = L_13;
		goto IL_005f;
	}

IL_004a:
	{
		// for (var i = 0; i < numLocalDevices; ++i)
		int32_t L_14 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_14, 1));
	}

IL_004f:
	{
		// for (var i = 0; i < numLocalDevices; ++i)
		int32_t L_15 = V_3;
		int32_t L_16 = V_2;
		V_6 = (bool)((((int32_t)L_15) < ((int32_t)L_16))? 1 : 0);
		bool L_17 = V_6;
		if (L_17)
		{
			goto IL_0024;
		}
	}
	{
	}

IL_005a:
	{
		// return InputDevice.InvalidDeviceId;
		V_5 = 0;
		goto IL_005f;
	}

IL_005f:
	{
		// }
		int32_t L_18 = V_5;
		return L_18;
	}
}
// UnityEngine.InputSystem.InputDevice Unity.RenderStreaming.InputSystem.InputRemoting::TryGetDeviceByRemoteId(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR InputDevice_t8BCF67533E872A75779C24C93D1D7085B72D364B* InputRemoting_TryGetDeviceByRemoteId_m042A5D606A11C95F612BE6BD7770B88F3DA554E9 (InputRemoting_t4BBB51BEA47ACD8A408459C612008D52240C6985* __this, int32_t ___remoteDeviceId0, int32_t ___senderIndex1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IInputManager_t04CB02929EBE1ED1FFF08A760DE56B1371440513_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	InputDevice_t8BCF67533E872A75779C24C93D1D7085B72D364B* V_1 = NULL;
	{
		// var localId = FindLocalDeviceId(remoteDeviceId, senderIndex);
		int32_t L_0 = ___remoteDeviceId0;
		int32_t L_1 = ___senderIndex1;
		int32_t L_2;
		L_2 = InputRemoting_FindLocalDeviceId_mD78F4077B78BE2316FB5D44B4258CBA53A7E7213(__this, L_0, L_1, NULL);
		V_0 = L_2;
		// return m_LocalManager.GetDeviceById(localId);
		RuntimeObject* L_3 = __this->___m_LocalManager_1;
		int32_t L_4 = V_0;
		NullCheck(L_3);
		InputDevice_t8BCF67533E872A75779C24C93D1D7085B72D364B* L_5;
		L_5 = InterfaceFuncInvoker1< InputDevice_t8BCF67533E872A75779C24C93D1D7085B72D364B*, int32_t >::Invoke(10 /* UnityEngine.InputSystem.InputDevice Unity.RenderStreaming.InputSystem.IInputManager::GetDeviceById(System.Int32) */, IInputManager_t04CB02929EBE1ED1FFF08A760DE56B1371440513_il2cpp_TypeInfo_var, L_3, L_4);
		V_1 = L_5;
		goto IL_0019;
	}

IL_0019:
	{
		// }
		InputDevice_t8BCF67533E872A75779C24C93D1D7085B72D364B* L_6 = V_1;
		return L_6;
	}
}
// System.Void Unity.RenderStreaming.InputSystem.InputRemoting::RemoveRemoteDevices(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputRemoting_RemoveRemoteDevices_m7882723ED04CBA12BF0615C0BC524542F82FA911 (InputRemoting_t4BBB51BEA47ACD8A408459C612008D52240C6985* __this, int32_t ___participantId0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ArrayHelpers_EraseAt_TisRemoteSender_tE4F28E5B7F46F15B1B18D890E2B8C7E96AB5F6A0_m79F8957091D78FB48FB1BF51DA20C4CE5DD3ADB6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IInputManager_t04CB02929EBE1ED1FFF08A760DE56B1371440513_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	RemoteInputDeviceU5BU5D_tD2988955C31E6E6005201B6F2E728B014340134E* V_1 = NULL;
	bool V_2 = false;
	RemoteInputDeviceU5BU5D_tD2988955C31E6E6005201B6F2E728B014340134E* V_3 = NULL;
	int32_t V_4 = 0;
	RemoteInputDevice_t7E8AF8B413C68B7205B1F4D9EDA5BBD53ABCDB27 V_5;
	memset((&V_5), 0, sizeof(V_5));
	InputDevice_t8BCF67533E872A75779C24C93D1D7085B72D364B* V_6 = NULL;
	bool V_7 = false;
	{
		// var senderIndex = FindOrCreateSenderRecord(participantId);
		int32_t L_0 = ___participantId0;
		int32_t L_1;
		L_1 = InputRemoting_FindOrCreateSenderRecord_mFA9C6363D8897E1FEF20E78A688B668F83CEB8F6(__this, L_0, NULL);
		V_0 = L_1;
		// var devices = m_Senders[senderIndex].devices;
		RemoteSenderU5BU5D_tFE32D763FD37124BA0F477F37A797F29868A3C3F* L_2 = __this->___m_Senders_3;
		int32_t L_3 = V_0;
		NullCheck(L_2);
		RemoteInputDeviceU5BU5D_tD2988955C31E6E6005201B6F2E728B014340134E* L_4 = ((L_2)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_3)))->___devices_2;
		V_1 = L_4;
		// if (devices != null)
		RemoteInputDeviceU5BU5D_tD2988955C31E6E6005201B6F2E728B014340134E* L_5 = V_1;
		V_2 = (bool)((!(((RuntimeObject*)(RemoteInputDeviceU5BU5D_tD2988955C31E6E6005201B6F2E728B014340134E*)L_5) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_6 = V_2;
		if (!L_6)
		{
			goto IL_0073;
		}
	}
	{
		// foreach (var remoteDevice in devices)
		RemoteInputDeviceU5BU5D_tD2988955C31E6E6005201B6F2E728B014340134E* L_7 = V_1;
		V_3 = L_7;
		V_4 = 0;
		goto IL_006b;
	}

IL_002c:
	{
		// foreach (var remoteDevice in devices)
		RemoteInputDeviceU5BU5D_tD2988955C31E6E6005201B6F2E728B014340134E* L_8 = V_3;
		int32_t L_9 = V_4;
		NullCheck(L_8);
		int32_t L_10 = L_9;
		RemoteInputDevice_t7E8AF8B413C68B7205B1F4D9EDA5BBD53ABCDB27 L_11 = (L_8)->GetAt(static_cast<il2cpp_array_size_t>(L_10));
		V_5 = L_11;
		// var device = m_LocalManager.GetDeviceById(remoteDevice.localId);
		RuntimeObject* L_12 = __this->___m_LocalManager_1;
		RemoteInputDevice_t7E8AF8B413C68B7205B1F4D9EDA5BBD53ABCDB27 L_13 = V_5;
		int32_t L_14 = L_13.___localId_1;
		NullCheck(L_12);
		InputDevice_t8BCF67533E872A75779C24C93D1D7085B72D364B* L_15;
		L_15 = InterfaceFuncInvoker1< InputDevice_t8BCF67533E872A75779C24C93D1D7085B72D364B*, int32_t >::Invoke(10 /* UnityEngine.InputSystem.InputDevice Unity.RenderStreaming.InputSystem.IInputManager::GetDeviceById(System.Int32) */, IInputManager_t04CB02929EBE1ED1FFF08A760DE56B1371440513_il2cpp_TypeInfo_var, L_12, L_14);
		V_6 = L_15;
		// if (device != null)
		InputDevice_t8BCF67533E872A75779C24C93D1D7085B72D364B* L_16 = V_6;
		V_7 = (bool)((!(((RuntimeObject*)(InputDevice_t8BCF67533E872A75779C24C93D1D7085B72D364B*)L_16) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_17 = V_7;
		if (!L_17)
		{
			goto IL_0064;
		}
	}
	{
		// m_LocalManager.RemoveDevice(device);
		RuntimeObject* L_18 = __this->___m_LocalManager_1;
		InputDevice_t8BCF67533E872A75779C24C93D1D7085B72D364B* L_19 = V_6;
		NullCheck(L_18);
		InterfaceActionInvoker1< InputDevice_t8BCF67533E872A75779C24C93D1D7085B72D364B* >::Invoke(12 /* System.Void Unity.RenderStreaming.InputSystem.IInputManager::RemoveDevice(UnityEngine.InputSystem.InputDevice) */, IInputManager_t04CB02929EBE1ED1FFF08A760DE56B1371440513_il2cpp_TypeInfo_var, L_18, L_19);
	}

IL_0064:
	{
		int32_t L_20 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_20, 1));
	}

IL_006b:
	{
		// foreach (var remoteDevice in devices)
		int32_t L_21 = V_4;
		RemoteInputDeviceU5BU5D_tD2988955C31E6E6005201B6F2E728B014340134E* L_22 = V_3;
		NullCheck(L_22);
		if ((((int32_t)L_21) < ((int32_t)((int32_t)(((RuntimeArray*)L_22)->max_length)))))
		{
			goto IL_002c;
		}
	}
	{
	}

IL_0073:
	{
		// ArrayHelpers.EraseAt(ref m_Senders, senderIndex);
		RemoteSenderU5BU5D_tFE32D763FD37124BA0F477F37A797F29868A3C3F** L_23 = (&__this->___m_Senders_3);
		int32_t L_24 = V_0;
		ArrayHelpers_EraseAt_TisRemoteSender_tE4F28E5B7F46F15B1B18D890E2B8C7E96AB5F6A0_m79F8957091D78FB48FB1BF51DA20C4CE5DD3ADB6(L_23, L_24, ArrayHelpers_EraseAt_TisRemoteSender_tE4F28E5B7F46F15B1B18D890E2B8C7E96AB5F6A0_m79F8957091D78FB48FB1BF51DA20C4CE5DD3ADB6_RuntimeMethod_var);
		// }
		return;
	}
}
// Unity.RenderStreaming.InputSystem.InputRemoting/SerializedState Unity.RenderStreaming.InputSystem.InputRemoting::SaveState()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SerializedState_tA4C88FE82737BD6A346742925EBC644367180A9F InputRemoting_SaveState_mC51B20E269C634B52F2803BB266D16DCE34C92C3 (InputRemoting_t4BBB51BEA47ACD8A408459C612008D52240C6985* __this, const RuntimeMethod* method) 
{
	SerializedState_tA4C88FE82737BD6A346742925EBC644367180A9F V_0;
	memset((&V_0), 0, sizeof(V_0));
	SerializedState_tA4C88FE82737BD6A346742925EBC644367180A9F V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		// return new SerializedState
		// {
		//     senders = m_Senders,
		//     subscribers = m_Subscribers
		// };
		il2cpp_codegen_initobj((&V_0), sizeof(SerializedState_tA4C88FE82737BD6A346742925EBC644367180A9F));
		RemoteSenderU5BU5D_tFE32D763FD37124BA0F477F37A797F29868A3C3F* L_0 = __this->___m_Senders_3;
		(&V_0)->___senders_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&(&V_0)->___senders_1), (void*)L_0);
		SubscriberU5BU5D_tF989EA4535B55CD10D08D7C8C981FC376FC12C18* L_1 = __this->___m_Subscribers_2;
		(&V_0)->___subscribers_2 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&(&V_0)->___subscribers_2), (void*)L_1);
		SerializedState_tA4C88FE82737BD6A346742925EBC644367180A9F L_2 = V_0;
		V_1 = L_2;
		goto IL_0027;
	}

IL_0027:
	{
		// }
		SerializedState_tA4C88FE82737BD6A346742925EBC644367180A9F L_3 = V_1;
		return L_3;
	}
}
// System.Void Unity.RenderStreaming.InputSystem.InputRemoting::RestoreState(Unity.RenderStreaming.InputSystem.InputRemoting/SerializedState,Unity.RenderStreaming.InputSystem.IInputManager)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputRemoting_RestoreState_m401377C719FC0AF018ECBB5E24DC762604860E35 (InputRemoting_t4BBB51BEA47ACD8A408459C612008D52240C6985* __this, SerializedState_tA4C88FE82737BD6A346742925EBC644367180A9F ___state0, RuntimeObject* ___manager1, const RuntimeMethod* method) 
{
	{
		// m_LocalManager = manager;
		RuntimeObject* L_0 = ___manager1;
		__this->___m_LocalManager_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_LocalManager_1), (void*)L_0);
		// m_Senders = state.senders;
		SerializedState_tA4C88FE82737BD6A346742925EBC644367180A9F L_1 = ___state0;
		RemoteSenderU5BU5D_tFE32D763FD37124BA0F477F37A797F29868A3C3F* L_2 = L_1.___senders_1;
		__this->___m_Senders_3 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_Senders_3), (void*)L_2);
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Conversion methods for marshalling of: Unity.RenderStreaming.InputSystem.InputRemoting/Message
IL2CPP_EXTERN_C void Message_tD936DB9861B7DBCDC7BCEB495736886D5EFAD801_marshal_pinvoke(const Message_tD936DB9861B7DBCDC7BCEB495736886D5EFAD801& unmarshaled, Message_tD936DB9861B7DBCDC7BCEB495736886D5EFAD801_marshaled_pinvoke& marshaled)
{
	marshaled.___participantId_0 = unmarshaled.___participantId_0;
	marshaled.___type_1 = unmarshaled.___type_1;
	marshaled.___data_2 = il2cpp_codegen_com_marshal_safe_array(IL2CPP_VT_I1, unmarshaled.___data_2);
}
IL2CPP_EXTERN_C void Message_tD936DB9861B7DBCDC7BCEB495736886D5EFAD801_marshal_pinvoke_back(const Message_tD936DB9861B7DBCDC7BCEB495736886D5EFAD801_marshaled_pinvoke& marshaled, Message_tD936DB9861B7DBCDC7BCEB495736886D5EFAD801& unmarshaled)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t unmarshaledparticipantId_temp_0 = 0;
	unmarshaledparticipantId_temp_0 = marshaled.___participantId_0;
	unmarshaled.___participantId_0 = unmarshaledparticipantId_temp_0;
	int32_t unmarshaledtype_temp_1 = 0;
	unmarshaledtype_temp_1 = marshaled.___type_1;
	unmarshaled.___type_1 = unmarshaledtype_temp_1;
	unmarshaled.___data_2 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)il2cpp_codegen_com_marshal_safe_array_result(IL2CPP_VT_I1, Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_il2cpp_TypeInfo_var, marshaled.___data_2);
	Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___data_2), (void*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)il2cpp_codegen_com_marshal_safe_array_result(IL2CPP_VT_I1, Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_il2cpp_TypeInfo_var, marshaled.___data_2));
}
// Conversion method for clean up from marshalling of: Unity.RenderStreaming.InputSystem.InputRemoting/Message
IL2CPP_EXTERN_C void Message_tD936DB9861B7DBCDC7BCEB495736886D5EFAD801_marshal_pinvoke_cleanup(Message_tD936DB9861B7DBCDC7BCEB495736886D5EFAD801_marshaled_pinvoke& marshaled)
{
	il2cpp_codegen_com_destroy_safe_array(marshaled.___data_2);
	marshaled.___data_2 = NULL;
}
// Conversion methods for marshalling of: Unity.RenderStreaming.InputSystem.InputRemoting/Message
IL2CPP_EXTERN_C void Message_tD936DB9861B7DBCDC7BCEB495736886D5EFAD801_marshal_com(const Message_tD936DB9861B7DBCDC7BCEB495736886D5EFAD801& unmarshaled, Message_tD936DB9861B7DBCDC7BCEB495736886D5EFAD801_marshaled_com& marshaled)
{
	marshaled.___participantId_0 = unmarshaled.___participantId_0;
	marshaled.___type_1 = unmarshaled.___type_1;
	marshaled.___data_2 = il2cpp_codegen_com_marshal_safe_array(IL2CPP_VT_I1, unmarshaled.___data_2);
}
IL2CPP_EXTERN_C void Message_tD936DB9861B7DBCDC7BCEB495736886D5EFAD801_marshal_com_back(const Message_tD936DB9861B7DBCDC7BCEB495736886D5EFAD801_marshaled_com& marshaled, Message_tD936DB9861B7DBCDC7BCEB495736886D5EFAD801& unmarshaled)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t unmarshaledparticipantId_temp_0 = 0;
	unmarshaledparticipantId_temp_0 = marshaled.___participantId_0;
	unmarshaled.___participantId_0 = unmarshaledparticipantId_temp_0;
	int32_t unmarshaledtype_temp_1 = 0;
	unmarshaledtype_temp_1 = marshaled.___type_1;
	unmarshaled.___type_1 = unmarshaledtype_temp_1;
	unmarshaled.___data_2 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)il2cpp_codegen_com_marshal_safe_array_result(IL2CPP_VT_I1, Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_il2cpp_TypeInfo_var, marshaled.___data_2);
	Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___data_2), (void*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)il2cpp_codegen_com_marshal_safe_array_result(IL2CPP_VT_I1, Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_il2cpp_TypeInfo_var, marshaled.___data_2));
}
// Conversion method for clean up from marshalling of: Unity.RenderStreaming.InputSystem.InputRemoting/Message
IL2CPP_EXTERN_C void Message_tD936DB9861B7DBCDC7BCEB495736886D5EFAD801_marshal_com_cleanup(Message_tD936DB9861B7DBCDC7BCEB495736886D5EFAD801_marshaled_com& marshaled)
{
	il2cpp_codegen_com_destroy_safe_array(marshaled.___data_2);
	marshaled.___data_2 = NULL;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
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


// Conversion methods for marshalling of: Unity.RenderStreaming.InputSystem.InputRemoting/RemoteSender
IL2CPP_EXTERN_C void RemoteSender_tE4F28E5B7F46F15B1B18D890E2B8C7E96AB5F6A0_marshal_pinvoke(const RemoteSender_tE4F28E5B7F46F15B1B18D890E2B8C7E96AB5F6A0& unmarshaled, RemoteSender_tE4F28E5B7F46F15B1B18D890E2B8C7E96AB5F6A0_marshaled_pinvoke& marshaled)
{
	Exception_t* ___layouts_1Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'layouts' of type 'RemoteSender'.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___layouts_1Exception, NULL);
}
IL2CPP_EXTERN_C void RemoteSender_tE4F28E5B7F46F15B1B18D890E2B8C7E96AB5F6A0_marshal_pinvoke_back(const RemoteSender_tE4F28E5B7F46F15B1B18D890E2B8C7E96AB5F6A0_marshaled_pinvoke& marshaled, RemoteSender_tE4F28E5B7F46F15B1B18D890E2B8C7E96AB5F6A0& unmarshaled)
{
	Exception_t* ___layouts_1Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'layouts' of type 'RemoteSender'.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___layouts_1Exception, NULL);
}
// Conversion method for clean up from marshalling of: Unity.RenderStreaming.InputSystem.InputRemoting/RemoteSender
IL2CPP_EXTERN_C void RemoteSender_tE4F28E5B7F46F15B1B18D890E2B8C7E96AB5F6A0_marshal_pinvoke_cleanup(RemoteSender_tE4F28E5B7F46F15B1B18D890E2B8C7E96AB5F6A0_marshaled_pinvoke& marshaled)
{
}


// Conversion methods for marshalling of: Unity.RenderStreaming.InputSystem.InputRemoting/RemoteSender
IL2CPP_EXTERN_C void RemoteSender_tE4F28E5B7F46F15B1B18D890E2B8C7E96AB5F6A0_marshal_com(const RemoteSender_tE4F28E5B7F46F15B1B18D890E2B8C7E96AB5F6A0& unmarshaled, RemoteSender_tE4F28E5B7F46F15B1B18D890E2B8C7E96AB5F6A0_marshaled_com& marshaled)
{
	Exception_t* ___layouts_1Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'layouts' of type 'RemoteSender'.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___layouts_1Exception, NULL);
}
IL2CPP_EXTERN_C void RemoteSender_tE4F28E5B7F46F15B1B18D890E2B8C7E96AB5F6A0_marshal_com_back(const RemoteSender_tE4F28E5B7F46F15B1B18D890E2B8C7E96AB5F6A0_marshaled_com& marshaled, RemoteSender_tE4F28E5B7F46F15B1B18D890E2B8C7E96AB5F6A0& unmarshaled)
{
	Exception_t* ___layouts_1Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'layouts' of type 'RemoteSender'.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___layouts_1Exception, NULL);
}
// Conversion method for clean up from marshalling of: Unity.RenderStreaming.InputSystem.InputRemoting/RemoteSender
IL2CPP_EXTERN_C void RemoteSender_tE4F28E5B7F46F15B1B18D890E2B8C7E96AB5F6A0_marshal_com_cleanup(RemoteSender_tE4F28E5B7F46F15B1B18D890E2B8C7E96AB5F6A0_marshaled_com& marshaled)
{
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif


// Conversion methods for marshalling of: Unity.RenderStreaming.InputSystem.InputRemoting/RemoteInputDevice
IL2CPP_EXTERN_C void RemoteInputDevice_t7E8AF8B413C68B7205B1F4D9EDA5BBD53ABCDB27_marshal_pinvoke(const RemoteInputDevice_t7E8AF8B413C68B7205B1F4D9EDA5BBD53ABCDB27& unmarshaled, RemoteInputDevice_t7E8AF8B413C68B7205B1F4D9EDA5BBD53ABCDB27_marshaled_pinvoke& marshaled)
{
	marshaled.___remoteId_0 = unmarshaled.___remoteId_0;
	marshaled.___localId_1 = unmarshaled.___localId_1;
	marshaled.___layoutName_2 = il2cpp_codegen_marshal_string(unmarshaled.___layoutName_2);
	InputDeviceDescription_tE86DD77422AAF60ADDAC788B31E5A05E739B708F_marshal_pinvoke(unmarshaled.___description_3, marshaled.___description_3);
}
IL2CPP_EXTERN_C void RemoteInputDevice_t7E8AF8B413C68B7205B1F4D9EDA5BBD53ABCDB27_marshal_pinvoke_back(const RemoteInputDevice_t7E8AF8B413C68B7205B1F4D9EDA5BBD53ABCDB27_marshaled_pinvoke& marshaled, RemoteInputDevice_t7E8AF8B413C68B7205B1F4D9EDA5BBD53ABCDB27& unmarshaled)
{
	int32_t unmarshaledremoteId_temp_0 = 0;
	unmarshaledremoteId_temp_0 = marshaled.___remoteId_0;
	unmarshaled.___remoteId_0 = unmarshaledremoteId_temp_0;
	int32_t unmarshaledlocalId_temp_1 = 0;
	unmarshaledlocalId_temp_1 = marshaled.___localId_1;
	unmarshaled.___localId_1 = unmarshaledlocalId_temp_1;
	unmarshaled.___layoutName_2 = il2cpp_codegen_marshal_string_result(marshaled.___layoutName_2);
	Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___layoutName_2), (void*)il2cpp_codegen_marshal_string_result(marshaled.___layoutName_2));
	InputDeviceDescription_tE86DD77422AAF60ADDAC788B31E5A05E739B708F unmarshaleddescription_temp_3;
	memset((&unmarshaleddescription_temp_3), 0, sizeof(unmarshaleddescription_temp_3));
	InputDeviceDescription_tE86DD77422AAF60ADDAC788B31E5A05E739B708F_marshal_pinvoke_back(marshaled.___description_3, unmarshaleddescription_temp_3);
	unmarshaled.___description_3 = unmarshaleddescription_temp_3;
	Il2CppCodeGenWriteBarrier((void**)&(((&unmarshaled.___description_3))->___m_InterfaceName_0), (void*)NULL);
	#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
	Il2CppCodeGenWriteBarrier((void**)&(((&unmarshaled.___description_3))->___m_DeviceClass_1), (void*)NULL);
	#endif
	#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
	Il2CppCodeGenWriteBarrier((void**)&(((&unmarshaled.___description_3))->___m_Manufacturer_2), (void*)NULL);
	#endif
	#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
	Il2CppCodeGenWriteBarrier((void**)&(((&unmarshaled.___description_3))->___m_Product_3), (void*)NULL);
	#endif
	#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
	Il2CppCodeGenWriteBarrier((void**)&(((&unmarshaled.___description_3))->___m_Serial_4), (void*)NULL);
	#endif
	#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
	Il2CppCodeGenWriteBarrier((void**)&(((&unmarshaled.___description_3))->___m_Version_5), (void*)NULL);
	#endif
	#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
	Il2CppCodeGenWriteBarrier((void**)&(((&unmarshaled.___description_3))->___m_Capabilities_6), (void*)NULL);
	#endif
}
// Conversion method for clean up from marshalling of: Unity.RenderStreaming.InputSystem.InputRemoting/RemoteInputDevice
IL2CPP_EXTERN_C void RemoteInputDevice_t7E8AF8B413C68B7205B1F4D9EDA5BBD53ABCDB27_marshal_pinvoke_cleanup(RemoteInputDevice_t7E8AF8B413C68B7205B1F4D9EDA5BBD53ABCDB27_marshaled_pinvoke& marshaled)
{
	il2cpp_codegen_marshal_free(marshaled.___layoutName_2);
	marshaled.___layoutName_2 = NULL;
	InputDeviceDescription_tE86DD77422AAF60ADDAC788B31E5A05E739B708F_marshal_pinvoke_cleanup(marshaled.___description_3);
}


// Conversion methods for marshalling of: Unity.RenderStreaming.InputSystem.InputRemoting/RemoteInputDevice
IL2CPP_EXTERN_C void RemoteInputDevice_t7E8AF8B413C68B7205B1F4D9EDA5BBD53ABCDB27_marshal_com(const RemoteInputDevice_t7E8AF8B413C68B7205B1F4D9EDA5BBD53ABCDB27& unmarshaled, RemoteInputDevice_t7E8AF8B413C68B7205B1F4D9EDA5BBD53ABCDB27_marshaled_com& marshaled)
{
	marshaled.___remoteId_0 = unmarshaled.___remoteId_0;
	marshaled.___localId_1 = unmarshaled.___localId_1;
	marshaled.___layoutName_2 = il2cpp_codegen_marshal_bstring(unmarshaled.___layoutName_2);
	InputDeviceDescription_tE86DD77422AAF60ADDAC788B31E5A05E739B708F_marshal_com(unmarshaled.___description_3, marshaled.___description_3);
}
IL2CPP_EXTERN_C void RemoteInputDevice_t7E8AF8B413C68B7205B1F4D9EDA5BBD53ABCDB27_marshal_com_back(const RemoteInputDevice_t7E8AF8B413C68B7205B1F4D9EDA5BBD53ABCDB27_marshaled_com& marshaled, RemoteInputDevice_t7E8AF8B413C68B7205B1F4D9EDA5BBD53ABCDB27& unmarshaled)
{
	int32_t unmarshaledremoteId_temp_0 = 0;
	unmarshaledremoteId_temp_0 = marshaled.___remoteId_0;
	unmarshaled.___remoteId_0 = unmarshaledremoteId_temp_0;
	int32_t unmarshaledlocalId_temp_1 = 0;
	unmarshaledlocalId_temp_1 = marshaled.___localId_1;
	unmarshaled.___localId_1 = unmarshaledlocalId_temp_1;
	unmarshaled.___layoutName_2 = il2cpp_codegen_marshal_bstring_result(marshaled.___layoutName_2);
	Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___layoutName_2), (void*)il2cpp_codegen_marshal_bstring_result(marshaled.___layoutName_2));
	InputDeviceDescription_tE86DD77422AAF60ADDAC788B31E5A05E739B708F unmarshaleddescription_temp_3;
	memset((&unmarshaleddescription_temp_3), 0, sizeof(unmarshaleddescription_temp_3));
	InputDeviceDescription_tE86DD77422AAF60ADDAC788B31E5A05E739B708F_marshal_com_back(marshaled.___description_3, unmarshaleddescription_temp_3);
	unmarshaled.___description_3 = unmarshaleddescription_temp_3;
	Il2CppCodeGenWriteBarrier((void**)&(((&unmarshaled.___description_3))->___m_InterfaceName_0), (void*)NULL);
	#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
	Il2CppCodeGenWriteBarrier((void**)&(((&unmarshaled.___description_3))->___m_DeviceClass_1), (void*)NULL);
	#endif
	#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
	Il2CppCodeGenWriteBarrier((void**)&(((&unmarshaled.___description_3))->___m_Manufacturer_2), (void*)NULL);
	#endif
	#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
	Il2CppCodeGenWriteBarrier((void**)&(((&unmarshaled.___description_3))->___m_Product_3), (void*)NULL);
	#endif
	#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
	Il2CppCodeGenWriteBarrier((void**)&(((&unmarshaled.___description_3))->___m_Serial_4), (void*)NULL);
	#endif
	#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
	Il2CppCodeGenWriteBarrier((void**)&(((&unmarshaled.___description_3))->___m_Version_5), (void*)NULL);
	#endif
	#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
	Il2CppCodeGenWriteBarrier((void**)&(((&unmarshaled.___description_3))->___m_Capabilities_6), (void*)NULL);
	#endif
}
// Conversion method for clean up from marshalling of: Unity.RenderStreaming.InputSystem.InputRemoting/RemoteInputDevice
IL2CPP_EXTERN_C void RemoteInputDevice_t7E8AF8B413C68B7205B1F4D9EDA5BBD53ABCDB27_marshal_com_cleanup(RemoteInputDevice_t7E8AF8B413C68B7205B1F4D9EDA5BBD53ABCDB27_marshaled_com& marshaled)
{
	il2cpp_codegen_marshal_free_bstring(marshaled.___layoutName_2);
	marshaled.___layoutName_2 = NULL;
	InputDeviceDescription_tE86DD77422AAF60ADDAC788B31E5A05E739B708F_marshal_com_cleanup(marshaled.___description_3);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Unity.RenderStreaming.InputSystem.InputRemoting/Subscriber::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Subscriber_Dispose_m7FA2E84CD06EDB00D11621501936C6997AFF1089 (Subscriber_tCE25893C3FF2E8E4590B8EFBE9DE0316FC0AD8E7* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ArrayHelpers_Erase_TisSubscriber_tCE25893C3FF2E8E4590B8EFBE9DE0316FC0AD8E7_m057DFF39D9E682660E1EA3FC6302450854771944_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// ArrayHelpers.Erase(ref owner.m_Subscribers, this);
		InputRemoting_t4BBB51BEA47ACD8A408459C612008D52240C6985* L_0 = __this->___owner_0;
		NullCheck(L_0);
		SubscriberU5BU5D_tF989EA4535B55CD10D08D7C8C981FC376FC12C18** L_1 = (&L_0->___m_Subscribers_2);
		bool L_2;
		L_2 = ArrayHelpers_Erase_TisSubscriber_tCE25893C3FF2E8E4590B8EFBE9DE0316FC0AD8E7_m057DFF39D9E682660E1EA3FC6302450854771944(L_1, __this, ArrayHelpers_Erase_TisSubscriber_tCE25893C3FF2E8E4590B8EFBE9DE0316FC0AD8E7_m057DFF39D9E682660E1EA3FC6302450854771944_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void Unity.RenderStreaming.InputSystem.InputRemoting/Subscriber::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Subscriber__ctor_mE0F29FB4AE3005DAE999192A3A53F3FCBF27237E (Subscriber_tCE25893C3FF2E8E4590B8EFBE9DE0316FC0AD8E7* __this, const RuntimeMethod* method) 
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
// System.Void Unity.RenderStreaming.InputSystem.InputRemoting/ConnectMsg::Process(Unity.RenderStreaming.InputSystem.InputRemoting)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConnectMsg_Process_m07B09534D7399ECF06A17B7747F7AAF9EFFC4DEA (InputRemoting_t4BBB51BEA47ACD8A408459C612008D52240C6985* ___Receiver0, const RuntimeMethod* method) 
{
	bool V_0 = false;
	bool V_1 = false;
	{
		// if (Receiver.sending)
		InputRemoting_t4BBB51BEA47ACD8A408459C612008D52240C6985* L_0 = ___Receiver0;
		NullCheck(L_0);
		bool L_1;
		L_1 = InputRemoting_get_sending_m21F0ACD760A4DCFBA070CBAA9391E97D279F88A0(L_0, NULL);
		V_0 = L_1;
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_0016;
		}
	}
	{
		// Receiver.SendAllDevices();
		InputRemoting_t4BBB51BEA47ACD8A408459C612008D52240C6985* L_3 = ___Receiver0;
		NullCheck(L_3);
		InputRemoting_SendAllDevices_mA55292B9896AF776507185AE6D8352655E6B0815(L_3, NULL);
		goto IL_002c;
	}

IL_0016:
	{
		// else if ((Receiver.m_Flags & Flags.StartSendingOnConnect) == Flags.StartSendingOnConnect)
		InputRemoting_t4BBB51BEA47ACD8A408459C612008D52240C6985* L_4 = ___Receiver0;
		NullCheck(L_4);
		int32_t L_5 = L_4->___m_Flags_0;
		V_1 = (bool)((((int32_t)((int32_t)((int32_t)L_5&2))) == ((int32_t)2))? 1 : 0);
		bool L_6 = V_1;
		if (!L_6)
		{
			goto IL_002c;
		}
	}
	{
		// Receiver.StartSending();
		InputRemoting_t4BBB51BEA47ACD8A408459C612008D52240C6985* L_7 = ___Receiver0;
		NullCheck(L_7);
		InputRemoting_StartSending_m542F3ECB7945344C54585434ABEE46D833664D63(L_7, NULL);
	}

IL_002c:
	{
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
// System.Void Unity.RenderStreaming.InputSystem.InputRemoting/StartSendingMsg::Process(Unity.RenderStreaming.InputSystem.InputRemoting)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StartSendingMsg_Process_m78663D27C08F8C1F73C0ED92414F2B66F02C2020 (InputRemoting_t4BBB51BEA47ACD8A408459C612008D52240C6985* ___Receiver0, const RuntimeMethod* method) 
{
	{
		// Receiver.StartSending();
		InputRemoting_t4BBB51BEA47ACD8A408459C612008D52240C6985* L_0 = ___Receiver0;
		NullCheck(L_0);
		InputRemoting_StartSending_m542F3ECB7945344C54585434ABEE46D833664D63(L_0, NULL);
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
// System.Void Unity.RenderStreaming.InputSystem.InputRemoting/StopSendingMsg::Process(Unity.RenderStreaming.InputSystem.InputRemoting)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StopSendingMsg_Process_m59DAD0B9548C832C7A0FC7AF8CBC1C54E3BDDCE1 (InputRemoting_t4BBB51BEA47ACD8A408459C612008D52240C6985* ___Receiver0, const RuntimeMethod* method) 
{
	{
		// Receiver.StopSending();
		InputRemoting_t4BBB51BEA47ACD8A408459C612008D52240C6985* L_0 = ___Receiver0;
		NullCheck(L_0);
		InputRemoting_StopSending_m9658A7464DCDFAD141C99D2793CF4B14E1953FE8(L_0, NULL);
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
// System.Void Unity.RenderStreaming.InputSystem.InputRemoting/DisconnectMsg::Process(Unity.RenderStreaming.InputSystem.InputRemoting,Unity.RenderStreaming.InputSystem.InputRemoting/Message)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DisconnectMsg_Process_mD537D2BDC389E8A8AE85392437EF411432664A9D (InputRemoting_t4BBB51BEA47ACD8A408459C612008D52240C6985* ___Receiver0, Message_tD936DB9861B7DBCDC7BCEB495736886D5EFAD801 ___msg1, const RuntimeMethod* method) 
{
	{
		// Receiver.RemoveRemoteDevices(msg.participantId);
		InputRemoting_t4BBB51BEA47ACD8A408459C612008D52240C6985* L_0 = ___Receiver0;
		Message_tD936DB9861B7DBCDC7BCEB495736886D5EFAD801 L_1 = ___msg1;
		int32_t L_2 = L_1.___participantId_0;
		NullCheck(L_0);
		InputRemoting_RemoveRemoteDevices_m7882723ED04CBA12BF0615C0BC524542F82FA911(L_0, L_2, NULL);
		// Receiver.StopSending();
		InputRemoting_t4BBB51BEA47ACD8A408459C612008D52240C6985* L_3 = ___Receiver0;
		NullCheck(L_3);
		InputRemoting_StopSending_m9658A7464DCDFAD141C99D2793CF4B14E1953FE8(L_3, NULL);
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
// System.Nullable`1<Unity.RenderStreaming.InputSystem.InputRemoting/Message> Unity.RenderStreaming.InputSystem.InputRemoting/NewLayoutMsg::Create(Unity.RenderStreaming.InputSystem.InputRemoting,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Nullable_1_t90A0E6202C33510EEDDE5954340106E0AF91D5B5 NewLayoutMsg_Create_m3B8780CC5C3FC5C7CA3D388FF852925A0AB6B8A6 (InputRemoting_t4BBB51BEA47ACD8A408459C612008D52240C6985* ___sender0, String_t* ___layoutName1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IInputManager_t04CB02929EBE1ED1FFF08A760DE56B1371440513_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InputRemoting_SerializeData_TisData_t996B414526496A00392F034F2FE6F541A31CA819_m8C575790DA6AC3108C560FDC020920C2CBA41846_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InputRemoting_t4BBB51BEA47ACD8A408459C612008D52240C6985_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1__ctor_mAD5430FE1FB829B55B9BE53CC89A036069AEDC90_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE7B220013188086E72EF0A5D72D3E2087CEA10DB);
		s_Il2CppMethodInitialized = true;
	}
	InputControlLayout_t46A40BE4C976BE33E85F61E63EB34323FED9831D* V_0 = NULL;
	Data_t996B414526496A00392F034F2FE6F541A31CA819 V_1;
	memset((&V_1), 0, sizeof(V_1));
	bool V_2 = false;
	Nullable_1_t90A0E6202C33510EEDDE5954340106E0AF91D5B5 V_3;
	memset((&V_3), 0, sizeof(V_3));
	Nullable_1_t90A0E6202C33510EEDDE5954340106E0AF91D5B5 V_4;
	memset((&V_4), 0, sizeof(V_4));
	Exception_t* V_5 = NULL;
	Data_t996B414526496A00392F034F2FE6F541A31CA819 V_6;
	memset((&V_6), 0, sizeof(V_6));
	Message_tD936DB9861B7DBCDC7BCEB495736886D5EFAD801 V_7;
	memset((&V_7), 0, sizeof(V_7));
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
	}
	try
	{// begin try (depth: 1)
		{
			// layout = sender.m_LocalManager.LoadLayout(new InternedString(layoutName));
			InputRemoting_t4BBB51BEA47ACD8A408459C612008D52240C6985* L_0 = ___sender0;
			NullCheck(L_0);
			RuntimeObject* L_1 = L_0->___m_LocalManager_1;
			String_t* L_2 = ___layoutName1;
			InternedString_t8D62A48CB7D85AAE9CFCCCFB0A77AC2844905735 L_3;
			memset((&L_3), 0, sizeof(L_3));
			InternedString__ctor_m2E9672D46D84C82F705DE799CE8B6123EB95E935((&L_3), L_2, /*hidden argument*/NULL);
			String_t* L_4;
			L_4 = InternedString_op_Implicit_mF8E1F7DA818367AEB1330013321063D7BDF30526(L_3, NULL);
			NullCheck(L_1);
			InputControlLayout_t46A40BE4C976BE33E85F61E63EB34323FED9831D* L_5;
			L_5 = InterfaceFuncInvoker1< InputControlLayout_t46A40BE4C976BE33E85F61E63EB34323FED9831D*, String_t* >::Invoke(14 /* UnityEngine.InputSystem.Layouts.InputControlLayout Unity.RenderStreaming.InputSystem.IInputManager::LoadLayout(System.String) */, IInputManager_t04CB02929EBE1ED1FFF08A760DE56B1371440513_il2cpp_TypeInfo_var, L_1, L_4);
			V_0 = L_5;
			// if (layout == null)
			InputControlLayout_t46A40BE4C976BE33E85F61E63EB34323FED9831D* L_6 = V_0;
			V_2 = (bool)((((RuntimeObject*)(InputControlLayout_t46A40BE4C976BE33E85F61E63EB34323FED9831D*)L_6) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
			bool L_7 = V_2;
			if (!L_7)
			{
				goto IL_0040_1;
			}
		}
		{
			// Debug.Log(string.Format(
			//     "Could not find layout '{0}' meant to be sent through remote connection; this should not happen",
			//     layoutName));
			String_t* L_8 = ___layoutName1;
			String_t* L_9;
			L_9 = String_Format_m8C122B26BC5AA10E2550AECA16E57DAE10F07E30(_stringLiteralE7B220013188086E72EF0A5D72D3E2087CEA10DB, L_8, NULL);
			il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
			Debug_Log_m86567BCF22BBE7809747817453CACA0E41E68219(L_9, NULL);
			// return null;
			il2cpp_codegen_initobj((&V_3), sizeof(Nullable_1_t90A0E6202C33510EEDDE5954340106E0AF91D5B5));
			Nullable_1_t90A0E6202C33510EEDDE5954340106E0AF91D5B5 L_10 = V_3;
			V_4 = L_10;
			goto IL_00bb;
		}

IL_0040_1:
		{
			goto IL_0066;
		}
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0043;
		}
		throw e;
	}

CATCH_0043:
	{// begin catch(System.Exception)
		// catch (Exception exception)
		V_5 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));
		// Debug.Log(string.Format(
		//     "Could not load layout '{0}'; not sending to remote listeners (exception: {1})", layoutName,
		//     exception));
		String_t* L_11 = ___layoutName1;
		Exception_t* L_12 = V_5;
		String_t* L_13;
		L_13 = String_Format_m9499958F4B0BB6089C75760AB647AB3CA4D55806(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralBD167AEAE5312BD016BB8E53CBDF290947BF4F27)), L_11, L_12, NULL);
		il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var)));
		Debug_Log_m86567BCF22BBE7809747817453CACA0E41E68219(L_13, NULL);
		// return null;
		il2cpp_codegen_initobj((&V_3), sizeof(Nullable_1_t90A0E6202C33510EEDDE5954340106E0AF91D5B5));
		Nullable_1_t90A0E6202C33510EEDDE5954340106E0AF91D5B5 L_14 = V_3;
		V_4 = L_14;
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_00bb;
	}// end catch (depth: 1)

IL_0066:
	{
		// var data = new Data
		// {
		//     name = layoutName,
		//     layoutJson = layout.ToJson(),
		//     isOverride = layout.isOverride
		// };
		il2cpp_codegen_initobj((&V_6), sizeof(Data_t996B414526496A00392F034F2FE6F541A31CA819));
		String_t* L_15 = ___layoutName1;
		(&V_6)->___name_0 = L_15;
		Il2CppCodeGenWriteBarrier((void**)(&(&V_6)->___name_0), (void*)L_15);
		InputControlLayout_t46A40BE4C976BE33E85F61E63EB34323FED9831D* L_16 = V_0;
		NullCheck(L_16);
		String_t* L_17;
		L_17 = InputControlLayout_ToJson_mC3A56BD729D0884D80D6215145CBB99BBB3AE358(L_16, NULL);
		(&V_6)->___layoutJson_1 = L_17;
		Il2CppCodeGenWriteBarrier((void**)(&(&V_6)->___layoutJson_1), (void*)L_17);
		InputControlLayout_t46A40BE4C976BE33E85F61E63EB34323FED9831D* L_18 = V_0;
		NullCheck(L_18);
		bool L_19;
		L_19 = InputControlLayout_get_isOverride_mEE41FE7F3857477AD6F4227D0A5606089DB6034C(L_18, NULL);
		(&V_6)->___isOverride_2 = L_19;
		Data_t996B414526496A00392F034F2FE6F541A31CA819 L_20 = V_6;
		V_1 = L_20;
		// return new Message
		// {
		//     type = MessageType.NewLayout,
		//     data = SerializeData(data)
		// };
		il2cpp_codegen_initobj((&V_7), sizeof(Message_tD936DB9861B7DBCDC7BCEB495736886D5EFAD801));
		(&V_7)->___type_1 = 2;
		Data_t996B414526496A00392F034F2FE6F541A31CA819 L_21 = V_1;
		il2cpp_codegen_runtime_class_init_inline(InputRemoting_t4BBB51BEA47ACD8A408459C612008D52240C6985_il2cpp_TypeInfo_var);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_22;
		L_22 = InputRemoting_SerializeData_TisData_t996B414526496A00392F034F2FE6F541A31CA819_m8C575790DA6AC3108C560FDC020920C2CBA41846(L_21, InputRemoting_SerializeData_TisData_t996B414526496A00392F034F2FE6F541A31CA819_m8C575790DA6AC3108C560FDC020920C2CBA41846_RuntimeMethod_var);
		(&V_7)->___data_2 = L_22;
		Il2CppCodeGenWriteBarrier((void**)(&(&V_7)->___data_2), (void*)L_22);
		Message_tD936DB9861B7DBCDC7BCEB495736886D5EFAD801 L_23 = V_7;
		Nullable_1_t90A0E6202C33510EEDDE5954340106E0AF91D5B5 L_24;
		memset((&L_24), 0, sizeof(L_24));
		Nullable_1__ctor_mAD5430FE1FB829B55B9BE53CC89A036069AEDC90((&L_24), L_23, /*hidden argument*/Nullable_1__ctor_mAD5430FE1FB829B55B9BE53CC89A036069AEDC90_RuntimeMethod_var);
		V_4 = L_24;
		goto IL_00bb;
	}

IL_00bb:
	{
		// }
		Nullable_1_t90A0E6202C33510EEDDE5954340106E0AF91D5B5 L_25 = V_4;
		return L_25;
	}
}
// System.Void Unity.RenderStreaming.InputSystem.InputRemoting/NewLayoutMsg::Process(Unity.RenderStreaming.InputSystem.InputRemoting,Unity.RenderStreaming.InputSystem.InputRemoting/Message)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NewLayoutMsg_Process_m398E07BC9F273420602C81BD3F3A9D493ABF124E (InputRemoting_t4BBB51BEA47ACD8A408459C612008D52240C6985* ___Receiver0, Message_tD936DB9861B7DBCDC7BCEB495736886D5EFAD801 ___msg1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ArrayHelpers_Append_TisString_t_m329B98CBF498D193DCD469806BBB87D8A4578EE0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IInputManager_t04CB02929EBE1ED1FFF08A760DE56B1371440513_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InputRemoting_DeserializeData_TisData_t996B414526496A00392F034F2FE6F541A31CA819_m9B4ADD5BE9DCFB37101D1759CF50E2A818F909F8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InputRemoting_t4BBB51BEA47ACD8A408459C612008D52240C6985_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Data_t996B414526496A00392F034F2FE6F541A31CA819 V_0;
	memset((&V_0), 0, sizeof(V_0));
	int32_t V_1 = 0;
	InternedString_t8D62A48CB7D85AAE9CFCCCFB0A77AC2844905735 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		// var data = DeserializeData<Data>(msg.data);
		Message_tD936DB9861B7DBCDC7BCEB495736886D5EFAD801 L_0 = ___msg1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1 = L_0.___data_2;
		il2cpp_codegen_runtime_class_init_inline(InputRemoting_t4BBB51BEA47ACD8A408459C612008D52240C6985_il2cpp_TypeInfo_var);
		Data_t996B414526496A00392F034F2FE6F541A31CA819 L_2;
		L_2 = InputRemoting_DeserializeData_TisData_t996B414526496A00392F034F2FE6F541A31CA819_m9B4ADD5BE9DCFB37101D1759CF50E2A818F909F8(L_1, InputRemoting_DeserializeData_TisData_t996B414526496A00392F034F2FE6F541A31CA819_m9B4ADD5BE9DCFB37101D1759CF50E2A818F909F8_RuntimeMethod_var);
		V_0 = L_2;
		// var senderIndex = Receiver.FindOrCreateSenderRecord(msg.participantId);
		InputRemoting_t4BBB51BEA47ACD8A408459C612008D52240C6985* L_3 = ___Receiver0;
		Message_tD936DB9861B7DBCDC7BCEB495736886D5EFAD801 L_4 = ___msg1;
		int32_t L_5 = L_4.___participantId_0;
		NullCheck(L_3);
		int32_t L_6;
		L_6 = InputRemoting_FindOrCreateSenderRecord_mFA9C6363D8897E1FEF20E78A688B668F83CEB8F6(L_3, L_5, NULL);
		V_1 = L_6;
		// var internedLayoutName = new InternedString(data.name);
		Data_t996B414526496A00392F034F2FE6F541A31CA819 L_7 = V_0;
		String_t* L_8 = L_7.___name_0;
		InternedString__ctor_m2E9672D46D84C82F705DE799CE8B6123EB95E935((&V_2), L_8, NULL);
		// Receiver.m_LocalManager.RegisterControlLayout(data.layoutJson, data.name, data.isOverride);
		InputRemoting_t4BBB51BEA47ACD8A408459C612008D52240C6985* L_9 = ___Receiver0;
		NullCheck(L_9);
		RuntimeObject* L_10 = L_9->___m_LocalManager_1;
		Data_t996B414526496A00392F034F2FE6F541A31CA819 L_11 = V_0;
		String_t* L_12 = L_11.___layoutJson_1;
		Data_t996B414526496A00392F034F2FE6F541A31CA819 L_13 = V_0;
		String_t* L_14 = L_13.___name_0;
		Data_t996B414526496A00392F034F2FE6F541A31CA819 L_15 = V_0;
		bool L_16 = L_15.___isOverride_2;
		NullCheck(L_10);
		InterfaceActionInvoker3< String_t*, String_t*, bool >::Invoke(15 /* System.Void Unity.RenderStreaming.InputSystem.IInputManager::RegisterControlLayout(System.String,System.String,System.Boolean) */, IInputManager_t04CB02929EBE1ED1FFF08A760DE56B1371440513_il2cpp_TypeInfo_var, L_10, L_12, L_14, L_16);
		// ArrayHelpers.Append(ref Receiver.m_Senders[senderIndex].layouts, internedLayoutName);
		InputRemoting_t4BBB51BEA47ACD8A408459C612008D52240C6985* L_17 = ___Receiver0;
		NullCheck(L_17);
		RemoteSenderU5BU5D_tFE32D763FD37124BA0F477F37A797F29868A3C3F* L_18 = L_17->___m_Senders_3;
		int32_t L_19 = V_1;
		NullCheck(L_18);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248** L_20 = (&((L_18)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_19)))->___layouts_1);
		InternedString_t8D62A48CB7D85AAE9CFCCCFB0A77AC2844905735 L_21 = V_2;
		String_t* L_22;
		L_22 = InternedString_op_Implicit_mF8E1F7DA818367AEB1330013321063D7BDF30526(L_21, NULL);
		int32_t L_23;
		L_23 = ArrayHelpers_Append_TisString_t_m329B98CBF498D193DCD469806BBB87D8A4578EE0(L_20, L_22, ArrayHelpers_Append_TisString_t_m329B98CBF498D193DCD469806BBB87D8A4578EE0_RuntimeMethod_var);
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
// Conversion methods for marshalling of: Unity.RenderStreaming.InputSystem.InputRemoting/NewLayoutMsg/Data
IL2CPP_EXTERN_C void Data_t996B414526496A00392F034F2FE6F541A31CA819_marshal_pinvoke(const Data_t996B414526496A00392F034F2FE6F541A31CA819& unmarshaled, Data_t996B414526496A00392F034F2FE6F541A31CA819_marshaled_pinvoke& marshaled)
{
	marshaled.___name_0 = il2cpp_codegen_marshal_string(unmarshaled.___name_0);
	marshaled.___layoutJson_1 = il2cpp_codegen_marshal_string(unmarshaled.___layoutJson_1);
	marshaled.___isOverride_2 = static_cast<int32_t>(unmarshaled.___isOverride_2);
}
IL2CPP_EXTERN_C void Data_t996B414526496A00392F034F2FE6F541A31CA819_marshal_pinvoke_back(const Data_t996B414526496A00392F034F2FE6F541A31CA819_marshaled_pinvoke& marshaled, Data_t996B414526496A00392F034F2FE6F541A31CA819& unmarshaled)
{
	unmarshaled.___name_0 = il2cpp_codegen_marshal_string_result(marshaled.___name_0);
	Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___name_0), (void*)il2cpp_codegen_marshal_string_result(marshaled.___name_0));
	unmarshaled.___layoutJson_1 = il2cpp_codegen_marshal_string_result(marshaled.___layoutJson_1);
	Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___layoutJson_1), (void*)il2cpp_codegen_marshal_string_result(marshaled.___layoutJson_1));
	bool unmarshaledisOverride_temp_2 = false;
	unmarshaledisOverride_temp_2 = static_cast<bool>(marshaled.___isOverride_2);
	unmarshaled.___isOverride_2 = unmarshaledisOverride_temp_2;
}
// Conversion method for clean up from marshalling of: Unity.RenderStreaming.InputSystem.InputRemoting/NewLayoutMsg/Data
IL2CPP_EXTERN_C void Data_t996B414526496A00392F034F2FE6F541A31CA819_marshal_pinvoke_cleanup(Data_t996B414526496A00392F034F2FE6F541A31CA819_marshaled_pinvoke& marshaled)
{
	il2cpp_codegen_marshal_free(marshaled.___name_0);
	marshaled.___name_0 = NULL;
	il2cpp_codegen_marshal_free(marshaled.___layoutJson_1);
	marshaled.___layoutJson_1 = NULL;
}
// Conversion methods for marshalling of: Unity.RenderStreaming.InputSystem.InputRemoting/NewLayoutMsg/Data
IL2CPP_EXTERN_C void Data_t996B414526496A00392F034F2FE6F541A31CA819_marshal_com(const Data_t996B414526496A00392F034F2FE6F541A31CA819& unmarshaled, Data_t996B414526496A00392F034F2FE6F541A31CA819_marshaled_com& marshaled)
{
	marshaled.___name_0 = il2cpp_codegen_marshal_bstring(unmarshaled.___name_0);
	marshaled.___layoutJson_1 = il2cpp_codegen_marshal_bstring(unmarshaled.___layoutJson_1);
	marshaled.___isOverride_2 = static_cast<int32_t>(unmarshaled.___isOverride_2);
}
IL2CPP_EXTERN_C void Data_t996B414526496A00392F034F2FE6F541A31CA819_marshal_com_back(const Data_t996B414526496A00392F034F2FE6F541A31CA819_marshaled_com& marshaled, Data_t996B414526496A00392F034F2FE6F541A31CA819& unmarshaled)
{
	unmarshaled.___name_0 = il2cpp_codegen_marshal_bstring_result(marshaled.___name_0);
	Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___name_0), (void*)il2cpp_codegen_marshal_bstring_result(marshaled.___name_0));
	unmarshaled.___layoutJson_1 = il2cpp_codegen_marshal_bstring_result(marshaled.___layoutJson_1);
	Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___layoutJson_1), (void*)il2cpp_codegen_marshal_bstring_result(marshaled.___layoutJson_1));
	bool unmarshaledisOverride_temp_2 = false;
	unmarshaledisOverride_temp_2 = static_cast<bool>(marshaled.___isOverride_2);
	unmarshaled.___isOverride_2 = unmarshaledisOverride_temp_2;
}
// Conversion method for clean up from marshalling of: Unity.RenderStreaming.InputSystem.InputRemoting/NewLayoutMsg/Data
IL2CPP_EXTERN_C void Data_t996B414526496A00392F034F2FE6F541A31CA819_marshal_com_cleanup(Data_t996B414526496A00392F034F2FE6F541A31CA819_marshaled_com& marshaled)
{
	il2cpp_codegen_marshal_free_bstring(marshaled.___name_0);
	marshaled.___name_0 = NULL;
	il2cpp_codegen_marshal_free_bstring(marshaled.___layoutJson_1);
	marshaled.___layoutJson_1 = NULL;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Unity.RenderStreaming.InputSystem.InputRemoting/Message Unity.RenderStreaming.InputSystem.InputRemoting/RemoveLayoutMsg::Create(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Message_tD936DB9861B7DBCDC7BCEB495736886D5EFAD801 RemoveLayoutMsg_Create_m84B94243FC66205A7FE00ED64C355409BE411261 (String_t* ___layoutName0, const RuntimeMethod* method) 
{
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_0 = NULL;
	Message_tD936DB9861B7DBCDC7BCEB495736886D5EFAD801 V_1;
	memset((&V_1), 0, sizeof(V_1));
	Message_tD936DB9861B7DBCDC7BCEB495736886D5EFAD801 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		// var bytes = Encoding.UTF8.GetBytes(layoutName);
		Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* L_0;
		L_0 = Encoding_get_UTF8_m9700ADA8E0F244002B2A89B483F1B2133B8FE336(NULL);
		String_t* L_1 = ___layoutName0;
		NullCheck(L_0);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_2;
		L_2 = VirtualFuncInvoker1< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, String_t* >::Invoke(17 /* System.Byte[] System.Text.Encoding::GetBytes(System.String) */, L_0, L_1);
		V_0 = L_2;
		// return new Message
		// {
		//     type = MessageType.RemoveLayout,
		//     data = bytes
		// };
		il2cpp_codegen_initobj((&V_1), sizeof(Message_tD936DB9861B7DBCDC7BCEB495736886D5EFAD801));
		(&V_1)->___type_1 = 6;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_3 = V_0;
		(&V_1)->___data_2 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&(&V_1)->___data_2), (void*)L_3);
		Message_tD936DB9861B7DBCDC7BCEB495736886D5EFAD801 L_4 = V_1;
		V_2 = L_4;
		goto IL_0029;
	}

IL_0029:
	{
		// }
		Message_tD936DB9861B7DBCDC7BCEB495736886D5EFAD801 L_5 = V_2;
		return L_5;
	}
}
// System.Void Unity.RenderStreaming.InputSystem.InputRemoting/RemoveLayoutMsg::Process(Unity.RenderStreaming.InputSystem.InputRemoting,Unity.RenderStreaming.InputSystem.InputRemoting/Message)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RemoveLayoutMsg_Process_m46502048FBC7DFE41A7A930F1821F1DF72E88F54 (InputRemoting_t4BBB51BEA47ACD8A408459C612008D52240C6985* ___Receiver0, Message_tD936DB9861B7DBCDC7BCEB495736886D5EFAD801 ___msg1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IInputManager_t04CB02929EBE1ED1FFF08A760DE56B1371440513_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	{
		// var layoutName = Encoding.UTF8.GetString(msg.data);
		Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* L_0;
		L_0 = Encoding_get_UTF8_m9700ADA8E0F244002B2A89B483F1B2133B8FE336(NULL);
		Message_tD936DB9861B7DBCDC7BCEB495736886D5EFAD801 L_1 = ___msg1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_2 = L_1.___data_2;
		NullCheck(L_0);
		String_t* L_3;
		L_3 = VirtualFuncInvoker1< String_t*, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* >::Invoke(33 /* System.String System.Text.Encoding::GetString(System.Byte[]) */, L_0, L_2);
		V_0 = L_3;
		// Receiver.m_LocalManager.RemoveLayout(layoutName);
		InputRemoting_t4BBB51BEA47ACD8A408459C612008D52240C6985* L_4 = ___Receiver0;
		NullCheck(L_4);
		RuntimeObject* L_5 = L_4->___m_LocalManager_1;
		String_t* L_6 = V_0;
		NullCheck(L_5);
		InterfaceActionInvoker1< String_t* >::Invoke(16 /* System.Void Unity.RenderStreaming.InputSystem.IInputManager::RemoveLayout(System.String) */, IInputManager_t04CB02929EBE1ED1FFF08A760DE56B1371440513_il2cpp_TypeInfo_var, L_5, L_6);
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
// Unity.RenderStreaming.InputSystem.InputRemoting/Message Unity.RenderStreaming.InputSystem.InputRemoting/NewDeviceMsg::Create(UnityEngine.InputSystem.InputDevice)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Message_tD936DB9861B7DBCDC7BCEB495736886D5EFAD801 NewDeviceMsg_Create_m5DBD04782BA2ED8D8504D33EA44ACAA355C57226 (InputDevice_t8BCF67533E872A75779C24C93D1D7085B72D364B* ___device0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Data_t388E6D9BE25175D528F87ED2B794D4CCA12E1632_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9A9DC7F908538ABD4F1AF19725A892AB2EE8A719);
		s_Il2CppMethodInitialized = true;
	}
	Data_t388E6D9BE25175D528F87ED2B794D4CCA12E1632 V_0;
	memset((&V_0), 0, sizeof(V_0));
	String_t* V_1 = NULL;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_2 = NULL;
	Data_t388E6D9BE25175D528F87ED2B794D4CCA12E1632 V_3;
	memset((&V_3), 0, sizeof(V_3));
	Message_tD936DB9861B7DBCDC7BCEB495736886D5EFAD801 V_4;
	memset((&V_4), 0, sizeof(V_4));
	Message_tD936DB9861B7DBCDC7BCEB495736886D5EFAD801 V_5;
	memset((&V_5), 0, sizeof(V_5));
	{
		// Debug.Assert(!device.remote, "Device being sent to remotes should be a local device, not a remote one");
		InputDevice_t8BCF67533E872A75779C24C93D1D7085B72D364B* L_0 = ___device0;
		NullCheck(L_0);
		bool L_1;
		L_1 = InputDevice_get_remote_m931E3EE376DAEFA9852ED066A9F9763D473EE1BE(L_0, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Assert_m9CA35857A4FF29506840C572F2C7BA233805B806((bool)((((int32_t)L_1) == ((int32_t)0))? 1 : 0), _stringLiteral9A9DC7F908538ABD4F1AF19725A892AB2EE8A719, NULL);
		// var data = new Data
		// {
		//     name = device.name,
		//     layout = device.layout,
		//     deviceId = device.deviceId,
		//     variants = device.variants,
		//     description = device.description
		// };
		il2cpp_codegen_initobj((&V_3), sizeof(Data_t388E6D9BE25175D528F87ED2B794D4CCA12E1632));
		InputDevice_t8BCF67533E872A75779C24C93D1D7085B72D364B* L_2 = ___device0;
		NullCheck(L_2);
		String_t* L_3;
		L_3 = InputControl_get_name_mCB68FC91A11BEFA1FF26EA0B5FD39D345C4ADC22(L_2, NULL);
		(&V_3)->___name_0 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&(&V_3)->___name_0), (void*)L_3);
		InputDevice_t8BCF67533E872A75779C24C93D1D7085B72D364B* L_4 = ___device0;
		NullCheck(L_4);
		String_t* L_5;
		L_5 = InputControl_get_layout_mE6054F87BB94A1F1D06355E137A1840B2EFF7971(L_4, NULL);
		(&V_3)->___layout_1 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&(&V_3)->___layout_1), (void*)L_5);
		InputDevice_t8BCF67533E872A75779C24C93D1D7085B72D364B* L_6 = ___device0;
		NullCheck(L_6);
		int32_t L_7;
		L_7 = InputDevice_get_deviceId_mC65E69E6117B78DB2F4963F5CF9BF031488AD588_inline(L_6, NULL);
		(&V_3)->___deviceId_2 = L_7;
		InputDevice_t8BCF67533E872A75779C24C93D1D7085B72D364B* L_8 = ___device0;
		NullCheck(L_8);
		String_t* L_9;
		L_9 = InputControl_get_variants_mCA1F10ABE4C44E1A5ED985ED86C9D58EFEB0CC25(L_8, NULL);
		(&V_3)->___variants_3 = L_9;
		Il2CppCodeGenWriteBarrier((void**)(&(&V_3)->___variants_3), (void*)L_9);
		InputDevice_t8BCF67533E872A75779C24C93D1D7085B72D364B* L_10 = ___device0;
		NullCheck(L_10);
		InputDeviceDescription_tE86DD77422AAF60ADDAC788B31E5A05E739B708F L_11;
		L_11 = InputDevice_get_description_mD9260BECAC1F217CF72662B7B08FA4A164EE73EB_inline(L_10, NULL);
		(&V_3)->___description_4 = L_11;
		Il2CppCodeGenWriteBarrier((void**)&(((&(&V_3)->___description_4))->___m_InterfaceName_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&(&V_3)->___description_4))->___m_DeviceClass_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&(&V_3)->___description_4))->___m_Manufacturer_2), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&(&V_3)->___description_4))->___m_Product_3), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&(&V_3)->___description_4))->___m_Serial_4), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&(&V_3)->___description_4))->___m_Version_5), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&(&V_3)->___description_4))->___m_Capabilities_6), (void*)NULL);
		#endif
		Data_t388E6D9BE25175D528F87ED2B794D4CCA12E1632 L_12 = V_3;
		V_0 = L_12;
		// var json = JsonUtility.ToJson(data);
		Data_t388E6D9BE25175D528F87ED2B794D4CCA12E1632 L_13 = V_0;
		Data_t388E6D9BE25175D528F87ED2B794D4CCA12E1632 L_14 = L_13;
		RuntimeObject* L_15 = Box(Data_t388E6D9BE25175D528F87ED2B794D4CCA12E1632_il2cpp_TypeInfo_var, &L_14);
		String_t* L_16;
		L_16 = JsonUtility_ToJson_mD0FB24DC5A8621A2473FC208E9B15AF43944EBCD(L_15, NULL);
		V_1 = L_16;
		// var bytes = Encoding.UTF8.GetBytes(json);
		Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* L_17;
		L_17 = Encoding_get_UTF8_m9700ADA8E0F244002B2A89B483F1B2133B8FE336(NULL);
		String_t* L_18 = V_1;
		NullCheck(L_17);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_19;
		L_19 = VirtualFuncInvoker1< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, String_t* >::Invoke(17 /* System.Byte[] System.Text.Encoding::GetBytes(System.String) */, L_17, L_18);
		V_2 = L_19;
		// return new Message
		// {
		//     type = MessageType.NewDevice,
		//     data = bytes
		// };
		il2cpp_codegen_initobj((&V_4), sizeof(Message_tD936DB9861B7DBCDC7BCEB495736886D5EFAD801));
		(&V_4)->___type_1 = 3;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_20 = V_2;
		(&V_4)->___data_2 = L_20;
		Il2CppCodeGenWriteBarrier((void**)(&(&V_4)->___data_2), (void*)L_20);
		Message_tD936DB9861B7DBCDC7BCEB495736886D5EFAD801 L_21 = V_4;
		V_5 = L_21;
		goto IL_0096;
	}

IL_0096:
	{
		// }
		Message_tD936DB9861B7DBCDC7BCEB495736886D5EFAD801 L_22 = V_5;
		return L_22;
	}
}
// System.Void Unity.RenderStreaming.InputSystem.InputRemoting/NewDeviceMsg::Process(Unity.RenderStreaming.InputSystem.InputRemoting,Unity.RenderStreaming.InputSystem.InputRemoting/Message)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NewDeviceMsg_Process_m22BF4A6B18F0C8F115FC61AB87DDB234BE803A53 (InputRemoting_t4BBB51BEA47ACD8A408459C612008D52240C6985* ___Receiver0, Message_tD936DB9861B7DBCDC7BCEB495736886D5EFAD801 ___msg1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ArrayHelpers_Append_TisRemoteInputDevice_t7E8AF8B413C68B7205B1F4D9EDA5BBD53ABCDB27_m3D2487C0F5E3A17654513B724F09E9DA7EBEC8BB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IInputManager_t04CB02929EBE1ED1FFF08A760DE56B1371440513_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InputDeviceDescription_tE86DD77422AAF60ADDAC788B31E5A05E739B708F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InputDeviceExtension_t90A527D9A693F6B5659B842825B8CB85FF12BA75_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InputRemoting_DeserializeData_TisData_t388E6D9BE25175D528F87ED2B794D4CCA12E1632_m1B84B22792D9FD67CAA168344CB753E44F221357_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InputRemoting_t4BBB51BEA47ACD8A408459C612008D52240C6985_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7EABC29EBD9BD52BA963D8983452A4A7407EBE6F);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	Data_t388E6D9BE25175D528F87ED2B794D4CCA12E1632 V_1;
	memset((&V_1), 0, sizeof(V_1));
	RemoteInputDeviceU5BU5D_tD2988955C31E6E6005201B6F2E728B014340134E* V_2 = NULL;
	InputDevice_t8BCF67533E872A75779C24C93D1D7085B72D364B* V_3 = NULL;
	int32_t V_4 = 0;
	RemoteInputDevice_t7E8AF8B413C68B7205B1F4D9EDA5BBD53ABCDB27 V_5;
	memset((&V_5), 0, sizeof(V_5));
	bool V_6 = false;
	RemoteInputDeviceU5BU5D_tD2988955C31E6E6005201B6F2E728B014340134E* V_7 = NULL;
	int32_t V_8 = 0;
	RemoteInputDevice_t7E8AF8B413C68B7205B1F4D9EDA5BBD53ABCDB27 V_9;
	memset((&V_9), 0, sizeof(V_9));
	bool V_10 = false;
	Exception_t* V_11 = NULL;
	RemoteInputDevice_t7E8AF8B413C68B7205B1F4D9EDA5BBD53ABCDB27 V_12;
	memset((&V_12), 0, sizeof(V_12));
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		// var senderIndex = Receiver.FindOrCreateSenderRecord(msg.participantId);
		InputRemoting_t4BBB51BEA47ACD8A408459C612008D52240C6985* L_0 = ___Receiver0;
		Message_tD936DB9861B7DBCDC7BCEB495736886D5EFAD801 L_1 = ___msg1;
		int32_t L_2 = L_1.___participantId_0;
		NullCheck(L_0);
		int32_t L_3;
		L_3 = InputRemoting_FindOrCreateSenderRecord_mFA9C6363D8897E1FEF20E78A688B668F83CEB8F6(L_0, L_2, NULL);
		V_0 = L_3;
		// var data = DeserializeData<Data>(msg.data);
		Message_tD936DB9861B7DBCDC7BCEB495736886D5EFAD801 L_4 = ___msg1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_5 = L_4.___data_2;
		il2cpp_codegen_runtime_class_init_inline(InputRemoting_t4BBB51BEA47ACD8A408459C612008D52240C6985_il2cpp_TypeInfo_var);
		Data_t388E6D9BE25175D528F87ED2B794D4CCA12E1632 L_6;
		L_6 = InputRemoting_DeserializeData_TisData_t388E6D9BE25175D528F87ED2B794D4CCA12E1632_m1B84B22792D9FD67CAA168344CB753E44F221357(L_5, InputRemoting_DeserializeData_TisData_t388E6D9BE25175D528F87ED2B794D4CCA12E1632_m1B84B22792D9FD67CAA168344CB753E44F221357_RuntimeMethod_var);
		V_1 = L_6;
		// var devices = Receiver.m_Senders[senderIndex].devices;
		InputRemoting_t4BBB51BEA47ACD8A408459C612008D52240C6985* L_7 = ___Receiver0;
		NullCheck(L_7);
		RemoteSenderU5BU5D_tFE32D763FD37124BA0F477F37A797F29868A3C3F* L_8 = L_7->___m_Senders_3;
		int32_t L_9 = V_0;
		NullCheck(L_8);
		RemoteInputDeviceU5BU5D_tD2988955C31E6E6005201B6F2E728B014340134E* L_10 = ((L_8)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_9)))->___devices_2;
		V_2 = L_10;
		// if (devices != null)
		RemoteInputDeviceU5BU5D_tD2988955C31E6E6005201B6F2E728B014340134E* L_11 = V_2;
		V_6 = (bool)((!(((RuntimeObject*)(RemoteInputDeviceU5BU5D_tD2988955C31E6E6005201B6F2E728B014340134E*)L_11) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_12 = V_6;
		if (!L_12)
		{
			goto IL_00c1;
		}
	}
	{
		// foreach (var entry in devices)
		RemoteInputDeviceU5BU5D_tD2988955C31E6E6005201B6F2E728B014340134E* L_13 = V_2;
		V_7 = L_13;
		V_8 = 0;
		goto IL_00b8;
	}

IL_0043:
	{
		// foreach (var entry in devices)
		RemoteInputDeviceU5BU5D_tD2988955C31E6E6005201B6F2E728B014340134E* L_14 = V_7;
		int32_t L_15 = V_8;
		NullCheck(L_14);
		int32_t L_16 = L_15;
		RemoteInputDevice_t7E8AF8B413C68B7205B1F4D9EDA5BBD53ABCDB27 L_17 = (L_14)->GetAt(static_cast<il2cpp_array_size_t>(L_16));
		V_9 = L_17;
		// if (entry.remoteId == data.deviceId)
		RemoteInputDevice_t7E8AF8B413C68B7205B1F4D9EDA5BBD53ABCDB27 L_18 = V_9;
		int32_t L_19 = L_18.___remoteId_0;
		Data_t388E6D9BE25175D528F87ED2B794D4CCA12E1632 L_20 = V_1;
		int32_t L_21 = L_20.___deviceId_2;
		V_10 = (bool)((((int32_t)L_19) == ((int32_t)L_21))? 1 : 0);
		bool L_22 = V_10;
		if (!L_22)
		{
			goto IL_00b2;
		}
	}
	{
		// Debug.LogError(string.Format(
		//     "Already received device with id {0} (layout '{1}', description '{3}) from remote {2}",
		//     data.deviceId,
		//     data.layout, msg.participantId, data.description));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_23 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)4);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_24 = L_23;
		Data_t388E6D9BE25175D528F87ED2B794D4CCA12E1632 L_25 = V_1;
		int32_t L_26 = L_25.___deviceId_2;
		int32_t L_27 = L_26;
		RuntimeObject* L_28 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_27);
		NullCheck(L_24);
		ArrayElementTypeCheck (L_24, L_28);
		(L_24)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_28);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_29 = L_24;
		Data_t388E6D9BE25175D528F87ED2B794D4CCA12E1632 L_30 = V_1;
		String_t* L_31 = L_30.___layout_1;
		NullCheck(L_29);
		ArrayElementTypeCheck (L_29, L_31);
		(L_29)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject*)L_31);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_32 = L_29;
		Message_tD936DB9861B7DBCDC7BCEB495736886D5EFAD801 L_33 = ___msg1;
		int32_t L_34 = L_33.___participantId_0;
		int32_t L_35 = L_34;
		RuntimeObject* L_36 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_35);
		NullCheck(L_32);
		ArrayElementTypeCheck (L_32, L_36);
		(L_32)->SetAt(static_cast<il2cpp_array_size_t>(2), (RuntimeObject*)L_36);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_37 = L_32;
		Data_t388E6D9BE25175D528F87ED2B794D4CCA12E1632 L_38 = V_1;
		InputDeviceDescription_tE86DD77422AAF60ADDAC788B31E5A05E739B708F L_39 = L_38.___description_4;
		InputDeviceDescription_tE86DD77422AAF60ADDAC788B31E5A05E739B708F L_40 = L_39;
		RuntimeObject* L_41 = Box(InputDeviceDescription_tE86DD77422AAF60ADDAC788B31E5A05E739B708F_il2cpp_TypeInfo_var, &L_40);
		NullCheck(L_37);
		ArrayElementTypeCheck (L_37, L_41);
		(L_37)->SetAt(static_cast<il2cpp_array_size_t>(3), (RuntimeObject*)L_41);
		String_t* L_42;
		L_42 = String_Format_m74FC0A1259DFA02F3DF6538FC7F3ACF3E1AF0C55(_stringLiteral7EABC29EBD9BD52BA963D8983452A4A7407EBE6F, L_37, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogError_m059825802BB6AF7EA9693FEBEEB0D85F59A3E38E(L_42, NULL);
		// return;
		goto IL_0192;
	}

IL_00b2:
	{
		int32_t L_43 = V_8;
		V_8 = ((int32_t)il2cpp_codegen_add(L_43, 1));
	}

IL_00b8:
	{
		// foreach (var entry in devices)
		int32_t L_44 = V_8;
		RemoteInputDeviceU5BU5D_tD2988955C31E6E6005201B6F2E728B014340134E* L_45 = V_7;
		NullCheck(L_45);
		if ((((int32_t)L_44) < ((int32_t)((int32_t)(((RuntimeArray*)L_45)->max_length)))))
		{
			goto IL_0043;
		}
	}
	{
	}

IL_00c1:
	{
	}
	try
	{// begin try (depth: 1)
		// device = Receiver.m_LocalManager.AddDevice(data.layout, data.name, data.variants);
		InputRemoting_t4BBB51BEA47ACD8A408459C612008D52240C6985* L_46 = ___Receiver0;
		NullCheck(L_46);
		RuntimeObject* L_47 = L_46->___m_LocalManager_1;
		Data_t388E6D9BE25175D528F87ED2B794D4CCA12E1632 L_48 = V_1;
		String_t* L_49 = L_48.___layout_1;
		Data_t388E6D9BE25175D528F87ED2B794D4CCA12E1632 L_50 = V_1;
		String_t* L_51 = L_50.___name_0;
		Data_t388E6D9BE25175D528F87ED2B794D4CCA12E1632 L_52 = V_1;
		String_t* L_53 = L_52.___variants_3;
		NullCheck(L_47);
		InputDevice_t8BCF67533E872A75779C24C93D1D7085B72D364B* L_54;
		L_54 = InterfaceFuncInvoker3< InputDevice_t8BCF67533E872A75779C24C93D1D7085B72D364B*, String_t*, String_t*, String_t* >::Invoke(11 /* UnityEngine.InputSystem.InputDevice Unity.RenderStreaming.InputSystem.IInputManager::AddDevice(System.String,System.String,System.String) */, IInputManager_t04CB02929EBE1ED1FFF08A760DE56B1371440513_il2cpp_TypeInfo_var, L_47, L_49, L_51, L_53);
		V_3 = L_54;
		// device.SetParticipantId(msg.participantId);
		InputDevice_t8BCF67533E872A75779C24C93D1D7085B72D364B* L_55 = V_3;
		Message_tD936DB9861B7DBCDC7BCEB495736886D5EFAD801 L_56 = ___msg1;
		int32_t L_57 = L_56.___participantId_0;
		il2cpp_codegen_runtime_class_init_inline(InputDeviceExtension_t90A527D9A693F6B5659B842825B8CB85FF12BA75_il2cpp_TypeInfo_var);
		InputDeviceExtension_SetParticipantId_mF08A99F02500BE2A39C36CCD6D9F751C6CF5758C(L_55, L_57, NULL);
		goto IL_0119;
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_00f1;
		}
		throw e;
	}

CATCH_00f1:
	{// begin catch(System.Exception)
		// catch (Exception exception)
		V_11 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));
		// Debug.LogError(
		//     $"Could not create remote device '{data.description}' with layout '{data.layout}' locally (exception: {exception})");
		Data_t388E6D9BE25175D528F87ED2B794D4CCA12E1632 L_58 = V_1;
		InputDeviceDescription_tE86DD77422AAF60ADDAC788B31E5A05E739B708F L_59 = L_58.___description_4;
		InputDeviceDescription_tE86DD77422AAF60ADDAC788B31E5A05E739B708F L_60 = L_59;
		RuntimeObject* L_61 = Box(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InputDeviceDescription_tE86DD77422AAF60ADDAC788B31E5A05E739B708F_il2cpp_TypeInfo_var)), &L_60);
		Data_t388E6D9BE25175D528F87ED2B794D4CCA12E1632 L_62 = V_1;
		String_t* L_63 = L_62.___layout_1;
		Exception_t* L_64 = V_11;
		String_t* L_65;
		L_65 = String_Format_m76BF8F3A6AD789E38B708848A2688D400AAC250A(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralB224BE3FF06739D3E85730D9911028055A683608)), L_61, L_63, L_64, NULL);
		il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var)));
		Debug_LogError_m059825802BB6AF7EA9693FEBEEB0D85F59A3E38E(L_65, NULL);
		// return;
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_0192;
	}// end catch (depth: 1)

IL_0119:
	{
		// device.SetDescription(data.description);
		InputDevice_t8BCF67533E872A75779C24C93D1D7085B72D364B* L_66 = V_3;
		Data_t388E6D9BE25175D528F87ED2B794D4CCA12E1632 L_67 = V_1;
		InputDeviceDescription_tE86DD77422AAF60ADDAC788B31E5A05E739B708F L_68 = L_67.___description_4;
		il2cpp_codegen_runtime_class_init_inline(InputDeviceExtension_t90A527D9A693F6B5659B842825B8CB85FF12BA75_il2cpp_TypeInfo_var);
		InputDeviceExtension_SetDescription_m7BB699454C3E4A5DCD86345785A935CB3889A063(L_66, L_68, NULL);
		// var deviceFlagsRemote = 1 << 3;
		V_4 = 8;
		// device.SetDeviceFlags(device.GetDeviceFlags() | deviceFlagsRemote);
		InputDevice_t8BCF67533E872A75779C24C93D1D7085B72D364B* L_69 = V_3;
		InputDevice_t8BCF67533E872A75779C24C93D1D7085B72D364B* L_70 = V_3;
		int32_t L_71;
		L_71 = InputDeviceExtension_GetDeviceFlags_m34A84AC53FB1CFFE8AB1D47688FF1148D8CE7C58(L_70, NULL);
		int32_t L_72 = V_4;
		InputDeviceExtension_SetDeviceFlags_mF59692E94999F4AAA18349851A8198A67F3C61EB(L_69, ((int32_t)(L_71|L_72)), NULL);
		// var record = new RemoteInputDevice
		// {
		//     remoteId = data.deviceId,
		//     localId = device.deviceId,
		//     description = data.description,
		//     layoutName = data.layout
		// };
		il2cpp_codegen_initobj((&V_12), sizeof(RemoteInputDevice_t7E8AF8B413C68B7205B1F4D9EDA5BBD53ABCDB27));
		Data_t388E6D9BE25175D528F87ED2B794D4CCA12E1632 L_73 = V_1;
		int32_t L_74 = L_73.___deviceId_2;
		(&V_12)->___remoteId_0 = L_74;
		InputDevice_t8BCF67533E872A75779C24C93D1D7085B72D364B* L_75 = V_3;
		NullCheck(L_75);
		int32_t L_76;
		L_76 = InputDevice_get_deviceId_mC65E69E6117B78DB2F4963F5CF9BF031488AD588_inline(L_75, NULL);
		(&V_12)->___localId_1 = L_76;
		Data_t388E6D9BE25175D528F87ED2B794D4CCA12E1632 L_77 = V_1;
		InputDeviceDescription_tE86DD77422AAF60ADDAC788B31E5A05E739B708F L_78 = L_77.___description_4;
		(&V_12)->___description_3 = L_78;
		Il2CppCodeGenWriteBarrier((void**)&(((&(&V_12)->___description_3))->___m_InterfaceName_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&(&V_12)->___description_3))->___m_DeviceClass_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&(&V_12)->___description_3))->___m_Manufacturer_2), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&(&V_12)->___description_3))->___m_Product_3), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&(&V_12)->___description_3))->___m_Serial_4), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&(&V_12)->___description_3))->___m_Version_5), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&(&V_12)->___description_3))->___m_Capabilities_6), (void*)NULL);
		#endif
		Data_t388E6D9BE25175D528F87ED2B794D4CCA12E1632 L_79 = V_1;
		String_t* L_80 = L_79.___layout_1;
		(&V_12)->___layoutName_2 = L_80;
		Il2CppCodeGenWriteBarrier((void**)(&(&V_12)->___layoutName_2), (void*)L_80);
		RemoteInputDevice_t7E8AF8B413C68B7205B1F4D9EDA5BBD53ABCDB27 L_81 = V_12;
		V_5 = L_81;
		// ArrayHelpers.Append(ref Receiver.m_Senders[senderIndex].devices, record);
		InputRemoting_t4BBB51BEA47ACD8A408459C612008D52240C6985* L_82 = ___Receiver0;
		NullCheck(L_82);
		RemoteSenderU5BU5D_tFE32D763FD37124BA0F477F37A797F29868A3C3F* L_83 = L_82->___m_Senders_3;
		int32_t L_84 = V_0;
		NullCheck(L_83);
		RemoteInputDeviceU5BU5D_tD2988955C31E6E6005201B6F2E728B014340134E** L_85 = (&((L_83)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_84)))->___devices_2);
		RemoteInputDevice_t7E8AF8B413C68B7205B1F4D9EDA5BBD53ABCDB27 L_86 = V_5;
		int32_t L_87;
		L_87 = ArrayHelpers_Append_TisRemoteInputDevice_t7E8AF8B413C68B7205B1F4D9EDA5BBD53ABCDB27_m3D2487C0F5E3A17654513B724F09E9DA7EBEC8BB(L_85, L_86, ArrayHelpers_Append_TisRemoteInputDevice_t7E8AF8B413C68B7205B1F4D9EDA5BBD53ABCDB27_m3D2487C0F5E3A17654513B724F09E9DA7EBEC8BB_RuntimeMethod_var);
	}

IL_0192:
	{
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


// Conversion methods for marshalling of: Unity.RenderStreaming.InputSystem.InputRemoting/NewDeviceMsg/Data
IL2CPP_EXTERN_C void Data_t388E6D9BE25175D528F87ED2B794D4CCA12E1632_marshal_pinvoke(const Data_t388E6D9BE25175D528F87ED2B794D4CCA12E1632& unmarshaled, Data_t388E6D9BE25175D528F87ED2B794D4CCA12E1632_marshaled_pinvoke& marshaled)
{
	marshaled.___name_0 = il2cpp_codegen_marshal_string(unmarshaled.___name_0);
	marshaled.___layout_1 = il2cpp_codegen_marshal_string(unmarshaled.___layout_1);
	marshaled.___deviceId_2 = unmarshaled.___deviceId_2;
	marshaled.___variants_3 = il2cpp_codegen_marshal_string(unmarshaled.___variants_3);
	InputDeviceDescription_tE86DD77422AAF60ADDAC788B31E5A05E739B708F_marshal_pinvoke(unmarshaled.___description_4, marshaled.___description_4);
}
IL2CPP_EXTERN_C void Data_t388E6D9BE25175D528F87ED2B794D4CCA12E1632_marshal_pinvoke_back(const Data_t388E6D9BE25175D528F87ED2B794D4CCA12E1632_marshaled_pinvoke& marshaled, Data_t388E6D9BE25175D528F87ED2B794D4CCA12E1632& unmarshaled)
{
	unmarshaled.___name_0 = il2cpp_codegen_marshal_string_result(marshaled.___name_0);
	Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___name_0), (void*)il2cpp_codegen_marshal_string_result(marshaled.___name_0));
	unmarshaled.___layout_1 = il2cpp_codegen_marshal_string_result(marshaled.___layout_1);
	Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___layout_1), (void*)il2cpp_codegen_marshal_string_result(marshaled.___layout_1));
	int32_t unmarshaleddeviceId_temp_2 = 0;
	unmarshaleddeviceId_temp_2 = marshaled.___deviceId_2;
	unmarshaled.___deviceId_2 = unmarshaleddeviceId_temp_2;
	unmarshaled.___variants_3 = il2cpp_codegen_marshal_string_result(marshaled.___variants_3);
	Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___variants_3), (void*)il2cpp_codegen_marshal_string_result(marshaled.___variants_3));
	InputDeviceDescription_tE86DD77422AAF60ADDAC788B31E5A05E739B708F unmarshaleddescription_temp_4;
	memset((&unmarshaleddescription_temp_4), 0, sizeof(unmarshaleddescription_temp_4));
	InputDeviceDescription_tE86DD77422AAF60ADDAC788B31E5A05E739B708F_marshal_pinvoke_back(marshaled.___description_4, unmarshaleddescription_temp_4);
	unmarshaled.___description_4 = unmarshaleddescription_temp_4;
	Il2CppCodeGenWriteBarrier((void**)&(((&unmarshaled.___description_4))->___m_InterfaceName_0), (void*)NULL);
	#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
	Il2CppCodeGenWriteBarrier((void**)&(((&unmarshaled.___description_4))->___m_DeviceClass_1), (void*)NULL);
	#endif
	#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
	Il2CppCodeGenWriteBarrier((void**)&(((&unmarshaled.___description_4))->___m_Manufacturer_2), (void*)NULL);
	#endif
	#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
	Il2CppCodeGenWriteBarrier((void**)&(((&unmarshaled.___description_4))->___m_Product_3), (void*)NULL);
	#endif
	#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
	Il2CppCodeGenWriteBarrier((void**)&(((&unmarshaled.___description_4))->___m_Serial_4), (void*)NULL);
	#endif
	#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
	Il2CppCodeGenWriteBarrier((void**)&(((&unmarshaled.___description_4))->___m_Version_5), (void*)NULL);
	#endif
	#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
	Il2CppCodeGenWriteBarrier((void**)&(((&unmarshaled.___description_4))->___m_Capabilities_6), (void*)NULL);
	#endif
}
// Conversion method for clean up from marshalling of: Unity.RenderStreaming.InputSystem.InputRemoting/NewDeviceMsg/Data
IL2CPP_EXTERN_C void Data_t388E6D9BE25175D528F87ED2B794D4CCA12E1632_marshal_pinvoke_cleanup(Data_t388E6D9BE25175D528F87ED2B794D4CCA12E1632_marshaled_pinvoke& marshaled)
{
	il2cpp_codegen_marshal_free(marshaled.___name_0);
	marshaled.___name_0 = NULL;
	il2cpp_codegen_marshal_free(marshaled.___layout_1);
	marshaled.___layout_1 = NULL;
	il2cpp_codegen_marshal_free(marshaled.___variants_3);
	marshaled.___variants_3 = NULL;
	InputDeviceDescription_tE86DD77422AAF60ADDAC788B31E5A05E739B708F_marshal_pinvoke_cleanup(marshaled.___description_4);
}


// Conversion methods for marshalling of: Unity.RenderStreaming.InputSystem.InputRemoting/NewDeviceMsg/Data
IL2CPP_EXTERN_C void Data_t388E6D9BE25175D528F87ED2B794D4CCA12E1632_marshal_com(const Data_t388E6D9BE25175D528F87ED2B794D4CCA12E1632& unmarshaled, Data_t388E6D9BE25175D528F87ED2B794D4CCA12E1632_marshaled_com& marshaled)
{
	marshaled.___name_0 = il2cpp_codegen_marshal_bstring(unmarshaled.___name_0);
	marshaled.___layout_1 = il2cpp_codegen_marshal_bstring(unmarshaled.___layout_1);
	marshaled.___deviceId_2 = unmarshaled.___deviceId_2;
	marshaled.___variants_3 = il2cpp_codegen_marshal_bstring(unmarshaled.___variants_3);
	InputDeviceDescription_tE86DD77422AAF60ADDAC788B31E5A05E739B708F_marshal_com(unmarshaled.___description_4, marshaled.___description_4);
}
IL2CPP_EXTERN_C void Data_t388E6D9BE25175D528F87ED2B794D4CCA12E1632_marshal_com_back(const Data_t388E6D9BE25175D528F87ED2B794D4CCA12E1632_marshaled_com& marshaled, Data_t388E6D9BE25175D528F87ED2B794D4CCA12E1632& unmarshaled)
{
	unmarshaled.___name_0 = il2cpp_codegen_marshal_bstring_result(marshaled.___name_0);
	Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___name_0), (void*)il2cpp_codegen_marshal_bstring_result(marshaled.___name_0));
	unmarshaled.___layout_1 = il2cpp_codegen_marshal_bstring_result(marshaled.___layout_1);
	Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___layout_1), (void*)il2cpp_codegen_marshal_bstring_result(marshaled.___layout_1));
	int32_t unmarshaleddeviceId_temp_2 = 0;
	unmarshaleddeviceId_temp_2 = marshaled.___deviceId_2;
	unmarshaled.___deviceId_2 = unmarshaleddeviceId_temp_2;
	unmarshaled.___variants_3 = il2cpp_codegen_marshal_bstring_result(marshaled.___variants_3);
	Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___variants_3), (void*)il2cpp_codegen_marshal_bstring_result(marshaled.___variants_3));
	InputDeviceDescription_tE86DD77422AAF60ADDAC788B31E5A05E739B708F unmarshaleddescription_temp_4;
	memset((&unmarshaleddescription_temp_4), 0, sizeof(unmarshaleddescription_temp_4));
	InputDeviceDescription_tE86DD77422AAF60ADDAC788B31E5A05E739B708F_marshal_com_back(marshaled.___description_4, unmarshaleddescription_temp_4);
	unmarshaled.___description_4 = unmarshaleddescription_temp_4;
	Il2CppCodeGenWriteBarrier((void**)&(((&unmarshaled.___description_4))->___m_InterfaceName_0), (void*)NULL);
	#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
	Il2CppCodeGenWriteBarrier((void**)&(((&unmarshaled.___description_4))->___m_DeviceClass_1), (void*)NULL);
	#endif
	#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
	Il2CppCodeGenWriteBarrier((void**)&(((&unmarshaled.___description_4))->___m_Manufacturer_2), (void*)NULL);
	#endif
	#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
	Il2CppCodeGenWriteBarrier((void**)&(((&unmarshaled.___description_4))->___m_Product_3), (void*)NULL);
	#endif
	#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
	Il2CppCodeGenWriteBarrier((void**)&(((&unmarshaled.___description_4))->___m_Serial_4), (void*)NULL);
	#endif
	#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
	Il2CppCodeGenWriteBarrier((void**)&(((&unmarshaled.___description_4))->___m_Version_5), (void*)NULL);
	#endif
	#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
	Il2CppCodeGenWriteBarrier((void**)&(((&unmarshaled.___description_4))->___m_Capabilities_6), (void*)NULL);
	#endif
}
// Conversion method for clean up from marshalling of: Unity.RenderStreaming.InputSystem.InputRemoting/NewDeviceMsg/Data
IL2CPP_EXTERN_C void Data_t388E6D9BE25175D528F87ED2B794D4CCA12E1632_marshal_com_cleanup(Data_t388E6D9BE25175D528F87ED2B794D4CCA12E1632_marshaled_com& marshaled)
{
	il2cpp_codegen_marshal_free_bstring(marshaled.___name_0);
	marshaled.___name_0 = NULL;
	il2cpp_codegen_marshal_free_bstring(marshaled.___layout_1);
	marshaled.___layout_1 = NULL;
	il2cpp_codegen_marshal_free_bstring(marshaled.___variants_3);
	marshaled.___variants_3 = NULL;
	InputDeviceDescription_tE86DD77422AAF60ADDAC788B31E5A05E739B708F_marshal_com_cleanup(marshaled.___description_4);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Unity.RenderStreaming.InputSystem.InputRemoting/Message Unity.RenderStreaming.InputSystem.InputRemoting/NewEventsMsg::CreateStateEvent(UnityEngine.InputSystem.InputDevice)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Message_tD936DB9861B7DBCDC7BCEB495736886D5EFAD801 NewEventsMsg_CreateStateEvent_m963D4E2C468BCC482A3FB51D56A682B189A6B294 (InputDevice_t8BCF67533E872A75779C24C93D1D7085B72D364B* ___device0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeArray_1_Dispose_m8B0F342847ECB90EB814E1F6AA5BF7DC2F271AEA_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	InputEventPtr_tC2A58521C9AFB479CC88789D5E0797D817C721C0 V_0;
	memset((&V_0), 0, sizeof(V_0));
	NativeArray_1_t81F55263465517B73C455D3400CF67B4BADD85CF V_1;
	memset((&V_1), 0, sizeof(V_1));
	Message_tD936DB9861B7DBCDC7BCEB495736886D5EFAD801 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		// using (StateEvent.From(device, out var eventPtr))
		InputDevice_t8BCF67533E872A75779C24C93D1D7085B72D364B* L_0 = ___device0;
		NativeArray_1_t81F55263465517B73C455D3400CF67B4BADD85CF L_1;
		L_1 = StateEvent_From_m7774ECFAB234A273F72C2FC1A1753E68C01BC635(L_0, (&V_0), 2, NULL);
		V_1 = L_1;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_001b:
			{// begin finally (depth: 1)
				NativeArray_1_Dispose_m8B0F342847ECB90EB814E1F6AA5BF7DC2F271AEA((&V_1), NativeArray_1_Dispose_m8B0F342847ECB90EB814E1F6AA5BF7DC2F271AEA_RuntimeMethod_var);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			// return Create(eventPtr.data, 1);
			InputEvent_t10F727342D1A79DCFC06529C203BB61C194AEBC5* L_2;
			L_2 = InputEventPtr_get_data_m4694B5F91E787CE9586B5C7113AFEB89D33CC616_inline((&V_0), NULL);
			Message_tD936DB9861B7DBCDC7BCEB495736886D5EFAD801 L_3;
			L_3 = NewEventsMsg_Create_mCA9E8F31223F1B0F843D0EEA4E5BC76AB8DBD392(L_2, 1, NULL);
			V_2 = L_3;
			goto IL_002a;
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_002a:
	{
		// }
		Message_tD936DB9861B7DBCDC7BCEB495736886D5EFAD801 L_4 = V_2;
		return L_4;
	}
}
// Unity.RenderStreaming.InputSystem.InputRemoting/Message Unity.RenderStreaming.InputSystem.InputRemoting/NewEventsMsg::Create(UnityEngine.InputSystem.LowLevel.InputEvent*,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Message_tD936DB9861B7DBCDC7BCEB495736886D5EFAD801 NewEventsMsg_Create_mCA9E8F31223F1B0F843D0EEA4E5BC76AB8DBD392 (InputEvent_t10F727342D1A79DCFC06529C203BB61C194AEBC5* ___events0, int32_t ___eventCount1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	uint32_t V_0 = 0;
	InputEventPtr_tC2A58521C9AFB479CC88789D5E0797D817C721C0 V_1;
	memset((&V_1), 0, sizeof(V_1));
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_2 = NULL;
	int32_t V_3 = 0;
	bool V_4 = false;
	uint8_t* V_5 = NULL;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_6 = NULL;
	Message_tD936DB9861B7DBCDC7BCEB495736886D5EFAD801 V_7;
	memset((&V_7), 0, sizeof(V_7));
	Message_tD936DB9861B7DBCDC7BCEB495736886D5EFAD801 V_8;
	memset((&V_8), 0, sizeof(V_8));
	{
		// var totalSize = 0u;
		V_0 = 0;
		// var eventPtr = new InputEventPtr(events);
		InputEvent_t10F727342D1A79DCFC06529C203BB61C194AEBC5* L_0 = ___events0;
		InputEventPtr__ctor_m42C0DB27FACAB1B1EB79BEFEF640F90004815FF0((&V_1), L_0, NULL);
		// for (var i = 0; i < eventCount; ++i, eventPtr = eventPtr.Next())
		V_3 = 0;
		goto IL_0027;
	}

IL_000f:
	{
		// totalSize += eventPtr.sizeInBytes;
		uint32_t L_1 = V_0;
		uint32_t L_2;
		L_2 = InputEventPtr_get_sizeInBytes_mE060F5A7176AAF8ED749DB4A3DC7976249716597((&V_1), NULL);
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_1, (int32_t)L_2));
		// for (var i = 0; i < eventCount; ++i, eventPtr = eventPtr.Next())
		int32_t L_3 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_3, 1));
		// for (var i = 0; i < eventCount; ++i, eventPtr = eventPtr.Next())
		InputEventPtr_tC2A58521C9AFB479CC88789D5E0797D817C721C0 L_4;
		L_4 = InputEventPtr_Next_m401E057F7E6DAB9468F04D705173539E8876809D((&V_1), NULL);
		V_1 = L_4;
	}

IL_0027:
	{
		// for (var i = 0; i < eventCount; ++i, eventPtr = eventPtr.Next())
		int32_t L_5 = V_3;
		int32_t L_6 = ___eventCount1;
		V_4 = (bool)((((int32_t)L_5) < ((int32_t)L_6))? 1 : 0);
		bool L_7 = V_4;
		if (L_7)
		{
			goto IL_000f;
		}
	}
	{
		// var data = new byte[totalSize];
		uint32_t L_8 = V_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_9 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)L_8);
		V_2 = L_9;
		// fixed (byte* dataPtr = data)
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_10 = V_2;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_11 = L_10;
		V_6 = L_11;
		if (!L_11)
		{
			goto IL_0044;
		}
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_12 = V_6;
		NullCheck(L_12);
		if (((int32_t)(((RuntimeArray*)L_12)->max_length)))
		{
			goto IL_004a;
		}
	}

IL_0044:
	{
		V_5 = (uint8_t*)((uintptr_t)0);
		goto IL_0055;
	}

IL_004a:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_13 = V_6;
		NullCheck(L_13);
		V_5 = (uint8_t*)((uintptr_t)((L_13)->GetAddressAt(static_cast<il2cpp_array_size_t>(0))));
	}

IL_0055:
	{
		// UnsafeUtility.MemCpy(dataPtr, events, totalSize);
		uint8_t* L_14 = V_5;
		InputEvent_t10F727342D1A79DCFC06529C203BB61C194AEBC5* L_15 = ___events0;
		uint32_t L_16 = V_0;
		UnsafeUtility_MemCpy_m019E657B952C27F705607F0F3D371EEE526B716B((void*)L_14, (void*)L_15, ((int64_t)(uint64_t)L_16), NULL);
		V_6 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)NULL;
		// return new Message
		// {
		//     type = MessageType.NewEvents,
		//     data = data
		// };
		il2cpp_codegen_initobj((&V_7), sizeof(Message_tD936DB9861B7DBCDC7BCEB495736886D5EFAD801));
		(&V_7)->___type_1 = 4;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_17 = V_2;
		(&V_7)->___data_2 = L_17;
		Il2CppCodeGenWriteBarrier((void**)(&(&V_7)->___data_2), (void*)L_17);
		Message_tD936DB9861B7DBCDC7BCEB495736886D5EFAD801 L_18 = V_7;
		V_8 = L_18;
		goto IL_0083;
	}

IL_0083:
	{
		// }
		Message_tD936DB9861B7DBCDC7BCEB495736886D5EFAD801 L_19 = V_8;
		return L_19;
	}
}
// System.Void Unity.RenderStreaming.InputSystem.InputRemoting/NewEventsMsg::Process(Unity.RenderStreaming.InputSystem.InputRemoting,Unity.RenderStreaming.InputSystem.InputRemoting/Message)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NewEventsMsg_Process_m958137B8A7C9CFCF99C3BE2F2E1523C78009BD81 (InputRemoting_t4BBB51BEA47ACD8A408459C612008D52240C6985* ___Receiver0, Message_tD936DB9861B7DBCDC7BCEB495736886D5EFAD801 ___msg1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IInputManager_t04CB02929EBE1ED1FFF08A760DE56B1371440513_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	uint8_t* V_1 = NULL;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_2 = NULL;
	intptr_t V_3;
	memset((&V_3), 0, sizeof(V_3));
	int32_t V_4 = 0;
	InputEventPtr_tC2A58521C9AFB479CC88789D5E0797D817C721C0 V_5;
	memset((&V_5), 0, sizeof(V_5));
	int32_t V_6 = 0;
	int32_t V_7 = 0;
	int32_t V_8 = 0;
	bool V_9 = false;
	bool V_10 = false;
	{
		// var manager = Receiver.m_LocalManager;
		InputRemoting_t4BBB51BEA47ACD8A408459C612008D52240C6985* L_0 = ___Receiver0;
		NullCheck(L_0);
		RuntimeObject* L_1 = L_0->___m_LocalManager_1;
		V_0 = L_1;
		// fixed (byte* dataPtr = msg.data)
		Message_tD936DB9861B7DBCDC7BCEB495736886D5EFAD801 L_2 = ___msg1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_3 = L_2.___data_2;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_4 = L_3;
		V_2 = L_4;
		if (!L_4)
		{
			goto IL_0017;
		}
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_5 = V_2;
		NullCheck(L_5);
		if (((int32_t)(((RuntimeArray*)L_5)->max_length)))
		{
			goto IL_001c;
		}
	}

IL_0017:
	{
		V_1 = (uint8_t*)((uintptr_t)0);
		goto IL_0025;
	}

IL_001c:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_6 = V_2;
		NullCheck(L_6);
		V_1 = (uint8_t*)((uintptr_t)((L_6)->GetAddressAt(static_cast<il2cpp_array_size_t>(0))));
	}

IL_0025:
	{
		// var dataEndPtr = new IntPtr(dataPtr + msg.data.Length);
		uint8_t* L_7 = V_1;
		Message_tD936DB9861B7DBCDC7BCEB495736886D5EFAD801 L_8 = ___msg1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_9 = L_8.___data_2;
		NullCheck(L_9);
		IntPtr__ctor_m4F9A9B80F01996B610D5AE4797F20B98ECD0A3D9_inline((&V_3), (void*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_7, ((int32_t)(((RuntimeArray*)L_9)->max_length)))), NULL);
		// var eventCount = 0;
		V_4 = 0;
		// var eventPtr = new InputEventPtr((InputEvent*)dataPtr);
		uint8_t* L_10 = V_1;
		InputEventPtr__ctor_m42C0DB27FACAB1B1EB79BEFEF640F90004815FF0((&V_5), (InputEvent_t10F727342D1A79DCFC06529C203BB61C194AEBC5*)L_10, NULL);
		// var senderIndex = Receiver.FindOrCreateSenderRecord(msg.participantId);
		InputRemoting_t4BBB51BEA47ACD8A408459C612008D52240C6985* L_11 = ___Receiver0;
		Message_tD936DB9861B7DBCDC7BCEB495736886D5EFAD801 L_12 = ___msg1;
		int32_t L_13 = L_12.___participantId_0;
		NullCheck(L_11);
		int32_t L_14;
		L_14 = InputRemoting_FindOrCreateSenderRecord_mFA9C6363D8897E1FEF20E78A688B668F83CEB8F6(L_11, L_13, NULL);
		V_6 = L_14;
		goto IL_0098;
	}

IL_0052:
	{
		// var remoteDeviceId = eventPtr.deviceId;
		int32_t L_15;
		L_15 = InputEventPtr_get_deviceId_mD8B68EDC37D90A69EE67A47B3E17F4D80D4620D3((&V_5), NULL);
		V_7 = L_15;
		// var localDeviceId = Receiver.FindLocalDeviceId(remoteDeviceId, senderIndex);
		InputRemoting_t4BBB51BEA47ACD8A408459C612008D52240C6985* L_16 = ___Receiver0;
		int32_t L_17 = V_7;
		int32_t L_18 = V_6;
		NullCheck(L_16);
		int32_t L_19;
		L_19 = InputRemoting_FindLocalDeviceId_mD78F4077B78BE2316FB5D44B4258CBA53A7E7213(L_16, L_17, L_18, NULL);
		V_8 = L_19;
		// eventPtr.deviceId = localDeviceId;
		int32_t L_20 = V_8;
		InputEventPtr_set_deviceId_mDC5B90109CDEECE63A5F1310379DB8B1B31D2B97((&V_5), L_20, NULL);
		// if (localDeviceId != InputDevice.InvalidDeviceId)
		int32_t L_21 = V_8;
		V_9 = (bool)((!(((uint32_t)L_21) <= ((uint32_t)0)))? 1 : 0);
		bool L_22 = V_9;
		if (!L_22)
		{
			goto IL_0088;
		}
	}
	{
		// manager.QueueEvent(eventPtr);
		RuntimeObject* L_23 = V_0;
		InputEventPtr_tC2A58521C9AFB479CC88789D5E0797D817C721C0 L_24 = V_5;
		NullCheck(L_23);
		InterfaceActionInvoker1< InputEventPtr_tC2A58521C9AFB479CC88789D5E0797D817C721C0 >::Invoke(17 /* System.Void Unity.RenderStreaming.InputSystem.IInputManager::QueueEvent(UnityEngine.InputSystem.LowLevel.InputEventPtr) */, IInputManager_t04CB02929EBE1ED1FFF08A760DE56B1371440513_il2cpp_TypeInfo_var, L_23, L_24);
	}

IL_0088:
	{
		// ++eventCount;
		int32_t L_25 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_25, 1));
		// eventPtr = eventPtr.Next();
		InputEventPtr_tC2A58521C9AFB479CC88789D5E0797D817C721C0 L_26;
		L_26 = InputEventPtr_Next_m401E057F7E6DAB9468F04D705173539E8876809D((&V_5), NULL);
		V_5 = L_26;
	}

IL_0098:
	{
		// while ((Int64)eventPtr.data < dataEndPtr.ToInt64())
		InputEvent_t10F727342D1A79DCFC06529C203BB61C194AEBC5* L_27;
		L_27 = InputEventPtr_get_data_m4694B5F91E787CE9586B5C7113AFEB89D33CC616_inline((&V_5), NULL);
		int64_t L_28;
		L_28 = IntPtr_ToInt64_m0F81FB6FB08014074D4F5B915EDAB06A08552032((&V_3), NULL);
		V_10 = (bool)((((int64_t)((int64_t)(uint64_t)(intptr_t)L_27)) < ((int64_t)L_28))? 1 : 0);
		bool L_29 = V_10;
		if (L_29)
		{
			goto IL_0052;
		}
	}
	{
		V_2 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)NULL;
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
// Unity.RenderStreaming.InputSystem.InputRemoting/Message Unity.RenderStreaming.InputSystem.InputRemoting/ChangeUsageMsg::Create(UnityEngine.InputSystem.InputDevice)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Message_tD936DB9861B7DBCDC7BCEB495736886D5EFAD801 ChangeUsageMsg_Create_m6F62F395DE1B92B848D41D9A5D825944FBACF24A (InputDevice_t8BCF67533E872A75779C24C93D1D7085B72D364B* ___device0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_Select_TisInternedString_t8D62A48CB7D85AAE9CFCCCFB0A77AC2844905735_TisString_t_m4121F7A55EC2BCE9D2E38AF2C27E16AA95C8D893_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_ToArray_TisString_t_mCD2BC789CBFF834E06F00948FC47E15E720936DC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_2_tE0082B3C229A425A69ECDABB19259709EC9F540F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InputRemoting_SerializeData_TisData_t3CDE355508AFD01E1939C50BA8D1CADCC2959561_mFE321BB814975EA3E148F680FF725B4B051DFA1E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InputRemoting_t4BBB51BEA47ACD8A408459C612008D52240C6985_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReadOnlyArray_1_t1C2864D7CF4D444AB2616316AC8DD33932F77064_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_U3CCreateU3Eb__1_0_m38E04646821C60BF5DFF7492E7A54D10ACDF2B6A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_tA2EA796D5C35FC8D6899C102F19A1D897D01B010_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Data_t3CDE355508AFD01E1939C50BA8D1CADCC2959561 V_0;
	memset((&V_0), 0, sizeof(V_0));
	Data_t3CDE355508AFD01E1939C50BA8D1CADCC2959561 V_1;
	memset((&V_1), 0, sizeof(V_1));
	Message_tD936DB9861B7DBCDC7BCEB495736886D5EFAD801 V_2;
	memset((&V_2), 0, sizeof(V_2));
	Message_tD936DB9861B7DBCDC7BCEB495736886D5EFAD801 V_3;
	memset((&V_3), 0, sizeof(V_3));
	Func_2_tE0082B3C229A425A69ECDABB19259709EC9F540F* G_B2_0 = NULL;
	RuntimeObject* G_B2_1 = NULL;
	Data_t3CDE355508AFD01E1939C50BA8D1CADCC2959561* G_B2_2 = NULL;
	Func_2_tE0082B3C229A425A69ECDABB19259709EC9F540F* G_B1_0 = NULL;
	RuntimeObject* G_B1_1 = NULL;
	Data_t3CDE355508AFD01E1939C50BA8D1CADCC2959561* G_B1_2 = NULL;
	{
		// var data = new Data
		// {
		//     deviceId = device.deviceId,
		//     usages = device.usages.Select(x => x.ToString()).ToArray()
		// };
		il2cpp_codegen_initobj((&V_1), sizeof(Data_t3CDE355508AFD01E1939C50BA8D1CADCC2959561));
		InputDevice_t8BCF67533E872A75779C24C93D1D7085B72D364B* L_0 = ___device0;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = InputDevice_get_deviceId_mC65E69E6117B78DB2F4963F5CF9BF031488AD588_inline(L_0, NULL);
		(&V_1)->___deviceId_0 = L_1;
		InputDevice_t8BCF67533E872A75779C24C93D1D7085B72D364B* L_2 = ___device0;
		NullCheck(L_2);
		ReadOnlyArray_1_t1C2864D7CF4D444AB2616316AC8DD33932F77064 L_3;
		L_3 = InputControl_get_usages_mE4B12715DEF946968F97853D52515463D3A3C555(L_2, NULL);
		ReadOnlyArray_1_t1C2864D7CF4D444AB2616316AC8DD33932F77064 L_4 = L_3;
		RuntimeObject* L_5 = Box(ReadOnlyArray_1_t1C2864D7CF4D444AB2616316AC8DD33932F77064_il2cpp_TypeInfo_var, &L_4);
		il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_tA2EA796D5C35FC8D6899C102F19A1D897D01B010_il2cpp_TypeInfo_var);
		Func_2_tE0082B3C229A425A69ECDABB19259709EC9F540F* L_6 = ((U3CU3Ec_tA2EA796D5C35FC8D6899C102F19A1D897D01B010_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tA2EA796D5C35FC8D6899C102F19A1D897D01B010_il2cpp_TypeInfo_var))->___U3CU3E9__1_0_1;
		Func_2_tE0082B3C229A425A69ECDABB19259709EC9F540F* L_7 = L_6;
		G_B1_0 = L_7;
		G_B1_1 = L_5;
		G_B1_2 = (&V_1);
		if (L_7)
		{
			G_B2_0 = L_7;
			G_B2_1 = L_5;
			G_B2_2 = (&V_1);
			goto IL_0042;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_tA2EA796D5C35FC8D6899C102F19A1D897D01B010_il2cpp_TypeInfo_var);
		U3CU3Ec_tA2EA796D5C35FC8D6899C102F19A1D897D01B010* L_8 = ((U3CU3Ec_tA2EA796D5C35FC8D6899C102F19A1D897D01B010_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tA2EA796D5C35FC8D6899C102F19A1D897D01B010_il2cpp_TypeInfo_var))->___U3CU3E9_0;
		Func_2_tE0082B3C229A425A69ECDABB19259709EC9F540F* L_9 = (Func_2_tE0082B3C229A425A69ECDABB19259709EC9F540F*)il2cpp_codegen_object_new(Func_2_tE0082B3C229A425A69ECDABB19259709EC9F540F_il2cpp_TypeInfo_var);
		NullCheck(L_9);
		Func_2__ctor_m6763116FA3257580D87BD903E24793FCD6D82548(L_9, L_8, (intptr_t)((void*)U3CU3Ec_U3CCreateU3Eb__1_0_m38E04646821C60BF5DFF7492E7A54D10ACDF2B6A_RuntimeMethod_var), NULL);
		Func_2_tE0082B3C229A425A69ECDABB19259709EC9F540F* L_10 = L_9;
		((U3CU3Ec_tA2EA796D5C35FC8D6899C102F19A1D897D01B010_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tA2EA796D5C35FC8D6899C102F19A1D897D01B010_il2cpp_TypeInfo_var))->___U3CU3E9__1_0_1 = L_10;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3Ec_tA2EA796D5C35FC8D6899C102F19A1D897D01B010_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tA2EA796D5C35FC8D6899C102F19A1D897D01B010_il2cpp_TypeInfo_var))->___U3CU3E9__1_0_1), (void*)L_10);
		G_B2_0 = L_10;
		G_B2_1 = G_B1_1;
		G_B2_2 = G_B1_2;
	}

IL_0042:
	{
		RuntimeObject* L_11;
		L_11 = Enumerable_Select_TisInternedString_t8D62A48CB7D85AAE9CFCCCFB0A77AC2844905735_TisString_t_m4121F7A55EC2BCE9D2E38AF2C27E16AA95C8D893((RuntimeObject*)G_B2_1, G_B2_0, Enumerable_Select_TisInternedString_t8D62A48CB7D85AAE9CFCCCFB0A77AC2844905735_TisString_t_m4121F7A55EC2BCE9D2E38AF2C27E16AA95C8D893_RuntimeMethod_var);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_12;
		L_12 = Enumerable_ToArray_TisString_t_mCD2BC789CBFF834E06F00948FC47E15E720936DC(L_11, Enumerable_ToArray_TisString_t_mCD2BC789CBFF834E06F00948FC47E15E720936DC_RuntimeMethod_var);
		G_B2_2->___usages_1 = L_12;
		Il2CppCodeGenWriteBarrier((void**)(&G_B2_2->___usages_1), (void*)L_12);
		Data_t3CDE355508AFD01E1939C50BA8D1CADCC2959561 L_13 = V_1;
		V_0 = L_13;
		// return new Message
		// {
		//     type = MessageType.ChangeUsages,
		//     data = SerializeData(data)
		// };
		il2cpp_codegen_initobj((&V_2), sizeof(Message_tD936DB9861B7DBCDC7BCEB495736886D5EFAD801));
		(&V_2)->___type_1 = 7;
		Data_t3CDE355508AFD01E1939C50BA8D1CADCC2959561 L_14 = V_0;
		il2cpp_codegen_runtime_class_init_inline(InputRemoting_t4BBB51BEA47ACD8A408459C612008D52240C6985_il2cpp_TypeInfo_var);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_15;
		L_15 = InputRemoting_SerializeData_TisData_t3CDE355508AFD01E1939C50BA8D1CADCC2959561_mFE321BB814975EA3E148F680FF725B4B051DFA1E(L_14, InputRemoting_SerializeData_TisData_t3CDE355508AFD01E1939C50BA8D1CADCC2959561_mFE321BB814975EA3E148F680FF725B4B051DFA1E_RuntimeMethod_var);
		(&V_2)->___data_2 = L_15;
		Il2CppCodeGenWriteBarrier((void**)(&(&V_2)->___data_2), (void*)L_15);
		Message_tD936DB9861B7DBCDC7BCEB495736886D5EFAD801 L_16 = V_2;
		V_3 = L_16;
		goto IL_0074;
	}

IL_0074:
	{
		// }
		Message_tD936DB9861B7DBCDC7BCEB495736886D5EFAD801 L_17 = V_3;
		return L_17;
	}
}
// System.Void Unity.RenderStreaming.InputSystem.InputRemoting/ChangeUsageMsg::Process(Unity.RenderStreaming.InputSystem.InputRemoting,Unity.RenderStreaming.InputSystem.InputRemoting/Message)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ChangeUsageMsg_Process_m50A137F20A93FE67272ADE2B96B5705D15D09F85 (InputRemoting_t4BBB51BEA47ACD8A408459C612008D52240C6985* ___Receiver0, Message_tD936DB9861B7DBCDC7BCEB495736886D5EFAD801 ___msg1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IInputManager_t04CB02929EBE1ED1FFF08A760DE56B1371440513_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InputRemoting_DeserializeData_TisData_t3CDE355508AFD01E1939C50BA8D1CADCC2959561_m2CE0C78AFB0AE1DADC5B6D9D21D3670A65FD8B02_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InputRemoting_t4BBB51BEA47ACD8A408459C612008D52240C6985_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	Data_t3CDE355508AFD01E1939C50BA8D1CADCC2959561 V_1;
	memset((&V_1), 0, sizeof(V_1));
	InputDevice_t8BCF67533E872A75779C24C93D1D7085B72D364B* V_2 = NULL;
	bool V_3 = false;
	bool V_4 = false;
	{
		// var senderIndex = Receiver.FindOrCreateSenderRecord(msg.participantId);
		InputRemoting_t4BBB51BEA47ACD8A408459C612008D52240C6985* L_0 = ___Receiver0;
		Message_tD936DB9861B7DBCDC7BCEB495736886D5EFAD801 L_1 = ___msg1;
		int32_t L_2 = L_1.___participantId_0;
		NullCheck(L_0);
		int32_t L_3;
		L_3 = InputRemoting_FindOrCreateSenderRecord_mFA9C6363D8897E1FEF20E78A688B668F83CEB8F6(L_0, L_2, NULL);
		V_0 = L_3;
		// var data = DeserializeData<Data>(msg.data);
		Message_tD936DB9861B7DBCDC7BCEB495736886D5EFAD801 L_4 = ___msg1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_5 = L_4.___data_2;
		il2cpp_codegen_runtime_class_init_inline(InputRemoting_t4BBB51BEA47ACD8A408459C612008D52240C6985_il2cpp_TypeInfo_var);
		Data_t3CDE355508AFD01E1939C50BA8D1CADCC2959561 L_6;
		L_6 = InputRemoting_DeserializeData_TisData_t3CDE355508AFD01E1939C50BA8D1CADCC2959561_m2CE0C78AFB0AE1DADC5B6D9D21D3670A65FD8B02(L_5, InputRemoting_DeserializeData_TisData_t3CDE355508AFD01E1939C50BA8D1CADCC2959561_m2CE0C78AFB0AE1DADC5B6D9D21D3670A65FD8B02_RuntimeMethod_var);
		V_1 = L_6;
		// var device = Receiver.TryGetDeviceByRemoteId(data.deviceId, senderIndex);
		InputRemoting_t4BBB51BEA47ACD8A408459C612008D52240C6985* L_7 = ___Receiver0;
		Data_t3CDE355508AFD01E1939C50BA8D1CADCC2959561 L_8 = V_1;
		int32_t L_9 = L_8.___deviceId_0;
		int32_t L_10 = V_0;
		NullCheck(L_7);
		InputDevice_t8BCF67533E872A75779C24C93D1D7085B72D364B* L_11;
		L_11 = InputRemoting_TryGetDeviceByRemoteId_m042A5D606A11C95F612BE6BD7770B88F3DA554E9(L_7, L_9, L_10, NULL);
		V_2 = L_11;
		// if (device != null)
		InputDevice_t8BCF67533E872A75779C24C93D1D7085B72D364B* L_12 = V_2;
		V_3 = (bool)((!(((RuntimeObject*)(InputDevice_t8BCF67533E872A75779C24C93D1D7085B72D364B*)L_12) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_13 = V_3;
		if (!L_13)
		{
			goto IL_0062;
		}
	}
	{
		// if (data.usages.Length == 1)
		Data_t3CDE355508AFD01E1939C50BA8D1CADCC2959561 L_14 = V_1;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_15 = L_14.___usages_1;
		NullCheck(L_15);
		V_4 = (bool)((((int32_t)((int32_t)(((RuntimeArray*)L_15)->max_length))) == ((int32_t)1))? 1 : 0);
		bool L_16 = V_4;
		if (!L_16)
		{
			goto IL_0061;
		}
	}
	{
		// Receiver.m_LocalManager.SetDeviceUsage(device, new InternedString(data.usages[0]));
		InputRemoting_t4BBB51BEA47ACD8A408459C612008D52240C6985* L_17 = ___Receiver0;
		NullCheck(L_17);
		RuntimeObject* L_18 = L_17->___m_LocalManager_1;
		InputDevice_t8BCF67533E872A75779C24C93D1D7085B72D364B* L_19 = V_2;
		Data_t3CDE355508AFD01E1939C50BA8D1CADCC2959561 L_20 = V_1;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_21 = L_20.___usages_1;
		NullCheck(L_21);
		int32_t L_22 = 0;
		String_t* L_23 = (L_21)->GetAt(static_cast<il2cpp_array_size_t>(L_22));
		InternedString_t8D62A48CB7D85AAE9CFCCCFB0A77AC2844905735 L_24;
		memset((&L_24), 0, sizeof(L_24));
		InternedString__ctor_m2E9672D46D84C82F705DE799CE8B6123EB95E935((&L_24), L_23, /*hidden argument*/NULL);
		String_t* L_25;
		L_25 = InternedString_op_Implicit_mF8E1F7DA818367AEB1330013321063D7BDF30526(L_24, NULL);
		NullCheck(L_18);
		InterfaceActionInvoker2< InputDevice_t8BCF67533E872A75779C24C93D1D7085B72D364B*, String_t* >::Invoke(13 /* System.Void Unity.RenderStreaming.InputSystem.IInputManager::SetDeviceUsage(UnityEngine.InputSystem.InputDevice,System.String) */, IInputManager_t04CB02929EBE1ED1FFF08A760DE56B1371440513_il2cpp_TypeInfo_var, L_18, L_19, L_25);
	}

IL_0061:
	{
	}

IL_0062:
	{
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
// Conversion methods for marshalling of: Unity.RenderStreaming.InputSystem.InputRemoting/ChangeUsageMsg/Data
IL2CPP_EXTERN_C void Data_t3CDE355508AFD01E1939C50BA8D1CADCC2959561_marshal_pinvoke(const Data_t3CDE355508AFD01E1939C50BA8D1CADCC2959561& unmarshaled, Data_t3CDE355508AFD01E1939C50BA8D1CADCC2959561_marshaled_pinvoke& marshaled)
{
	Exception_t* ___usages_1Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'usages' of type 'Data'.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___usages_1Exception, NULL);
}
IL2CPP_EXTERN_C void Data_t3CDE355508AFD01E1939C50BA8D1CADCC2959561_marshal_pinvoke_back(const Data_t3CDE355508AFD01E1939C50BA8D1CADCC2959561_marshaled_pinvoke& marshaled, Data_t3CDE355508AFD01E1939C50BA8D1CADCC2959561& unmarshaled)
{
	Exception_t* ___usages_1Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'usages' of type 'Data'.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___usages_1Exception, NULL);
}
// Conversion method for clean up from marshalling of: Unity.RenderStreaming.InputSystem.InputRemoting/ChangeUsageMsg/Data
IL2CPP_EXTERN_C void Data_t3CDE355508AFD01E1939C50BA8D1CADCC2959561_marshal_pinvoke_cleanup(Data_t3CDE355508AFD01E1939C50BA8D1CADCC2959561_marshaled_pinvoke& marshaled)
{
}
// Conversion methods for marshalling of: Unity.RenderStreaming.InputSystem.InputRemoting/ChangeUsageMsg/Data
IL2CPP_EXTERN_C void Data_t3CDE355508AFD01E1939C50BA8D1CADCC2959561_marshal_com(const Data_t3CDE355508AFD01E1939C50BA8D1CADCC2959561& unmarshaled, Data_t3CDE355508AFD01E1939C50BA8D1CADCC2959561_marshaled_com& marshaled)
{
	Exception_t* ___usages_1Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'usages' of type 'Data'.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___usages_1Exception, NULL);
}
IL2CPP_EXTERN_C void Data_t3CDE355508AFD01E1939C50BA8D1CADCC2959561_marshal_com_back(const Data_t3CDE355508AFD01E1939C50BA8D1CADCC2959561_marshaled_com& marshaled, Data_t3CDE355508AFD01E1939C50BA8D1CADCC2959561& unmarshaled)
{
	Exception_t* ___usages_1Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'usages' of type 'Data'.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___usages_1Exception, NULL);
}
// Conversion method for clean up from marshalling of: Unity.RenderStreaming.InputSystem.InputRemoting/ChangeUsageMsg/Data
IL2CPP_EXTERN_C void Data_t3CDE355508AFD01E1939C50BA8D1CADCC2959561_marshal_com_cleanup(Data_t3CDE355508AFD01E1939C50BA8D1CADCC2959561_marshaled_com& marshaled)
{
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Unity.RenderStreaming.InputSystem.InputRemoting/ChangeUsageMsg/<>c::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__cctor_m635110CBDED711B99620AA850D812FB1999F26B9 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_tA2EA796D5C35FC8D6899C102F19A1D897D01B010_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CU3Ec_tA2EA796D5C35FC8D6899C102F19A1D897D01B010* L_0 = (U3CU3Ec_tA2EA796D5C35FC8D6899C102F19A1D897D01B010*)il2cpp_codegen_object_new(U3CU3Ec_tA2EA796D5C35FC8D6899C102F19A1D897D01B010_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CU3Ec__ctor_m4942BADDEF0D102D1E72098FF892F2A78311A727(L_0, NULL);
		((U3CU3Ec_tA2EA796D5C35FC8D6899C102F19A1D897D01B010_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tA2EA796D5C35FC8D6899C102F19A1D897D01B010_il2cpp_TypeInfo_var))->___U3CU3E9_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3Ec_tA2EA796D5C35FC8D6899C102F19A1D897D01B010_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tA2EA796D5C35FC8D6899C102F19A1D897D01B010_il2cpp_TypeInfo_var))->___U3CU3E9_0), (void*)L_0);
		return;
	}
}
// System.Void Unity.RenderStreaming.InputSystem.InputRemoting/ChangeUsageMsg/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m4942BADDEF0D102D1E72098FF892F2A78311A727 (U3CU3Ec_tA2EA796D5C35FC8D6899C102F19A1D897D01B010* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.String Unity.RenderStreaming.InputSystem.InputRemoting/ChangeUsageMsg/<>c::<Create>b__1_0(UnityEngine.InputSystem.Utilities.InternedString)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* U3CU3Ec_U3CCreateU3Eb__1_0_m38E04646821C60BF5DFF7492E7A54D10ACDF2B6A (U3CU3Ec_tA2EA796D5C35FC8D6899C102F19A1D897D01B010* __this, InternedString_t8D62A48CB7D85AAE9CFCCCFB0A77AC2844905735 ___x0, const RuntimeMethod* method) 
{
	{
		// usages = device.usages.Select(x => x.ToString()).ToArray()
		String_t* L_0;
		L_0 = InternedString_ToString_mED327D67EF001C5EDFF284336F13C3E3F025993A((&___x0), NULL);
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
// Unity.RenderStreaming.InputSystem.InputRemoting/Message Unity.RenderStreaming.InputSystem.InputRemoting/RemoveDeviceMsg::Create(UnityEngine.InputSystem.InputDevice)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Message_tD936DB9861B7DBCDC7BCEB495736886D5EFAD801 RemoveDeviceMsg_Create_m0FD7F02B1C40A542DB262467E4274CEFE5F878F3 (InputDevice_t8BCF67533E872A75779C24C93D1D7085B72D364B* ___device0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BitConverter_t6E99605185963BC12B3D369E13F2B88997E64A27_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Message_tD936DB9861B7DBCDC7BCEB495736886D5EFAD801 V_0;
	memset((&V_0), 0, sizeof(V_0));
	Message_tD936DB9861B7DBCDC7BCEB495736886D5EFAD801 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		// return new Message
		// {
		//     type = MessageType.RemoveDevice,
		//     data = BitConverter.GetBytes(device.deviceId)
		// };
		il2cpp_codegen_initobj((&V_0), sizeof(Message_tD936DB9861B7DBCDC7BCEB495736886D5EFAD801));
		(&V_0)->___type_1 = 5;
		InputDevice_t8BCF67533E872A75779C24C93D1D7085B72D364B* L_0 = ___device0;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = InputDevice_get_deviceId_mC65E69E6117B78DB2F4963F5CF9BF031488AD588_inline(L_0, NULL);
		il2cpp_codegen_runtime_class_init_inline(BitConverter_t6E99605185963BC12B3D369E13F2B88997E64A27_il2cpp_TypeInfo_var);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_2;
		L_2 = BitConverter_GetBytes_m343FFC3DD8CF8D0139D0CAEB8ABB0A4D6DAA98F4(L_1, NULL);
		(&V_0)->___data_2 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&(&V_0)->___data_2), (void*)L_2);
		Message_tD936DB9861B7DBCDC7BCEB495736886D5EFAD801 L_3 = V_0;
		V_1 = L_3;
		goto IL_0027;
	}

IL_0027:
	{
		// }
		Message_tD936DB9861B7DBCDC7BCEB495736886D5EFAD801 L_4 = V_1;
		return L_4;
	}
}
// System.Void Unity.RenderStreaming.InputSystem.InputRemoting/RemoveDeviceMsg::Process(Unity.RenderStreaming.InputSystem.InputRemoting,Unity.RenderStreaming.InputSystem.InputRemoting/Message)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RemoveDeviceMsg_Process_m25B08D4A90E34170938B0487BE44ACCCFC4A85F4 (InputRemoting_t4BBB51BEA47ACD8A408459C612008D52240C6985* ___Receiver0, Message_tD936DB9861B7DBCDC7BCEB495736886D5EFAD801 ___msg1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BitConverter_t6E99605185963BC12B3D369E13F2B88997E64A27_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IInputManager_t04CB02929EBE1ED1FFF08A760DE56B1371440513_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	InputDevice_t8BCF67533E872A75779C24C93D1D7085B72D364B* V_2 = NULL;
	bool V_3 = false;
	{
		// var senderIndex = Receiver.FindOrCreateSenderRecord(msg.participantId);
		InputRemoting_t4BBB51BEA47ACD8A408459C612008D52240C6985* L_0 = ___Receiver0;
		Message_tD936DB9861B7DBCDC7BCEB495736886D5EFAD801 L_1 = ___msg1;
		int32_t L_2 = L_1.___participantId_0;
		NullCheck(L_0);
		int32_t L_3;
		L_3 = InputRemoting_FindOrCreateSenderRecord_mFA9C6363D8897E1FEF20E78A688B668F83CEB8F6(L_0, L_2, NULL);
		V_0 = L_3;
		// var remoteDeviceId = BitConverter.ToInt32(msg.data, 0);
		Message_tD936DB9861B7DBCDC7BCEB495736886D5EFAD801 L_4 = ___msg1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_5 = L_4.___data_2;
		il2cpp_codegen_runtime_class_init_inline(BitConverter_t6E99605185963BC12B3D369E13F2B88997E64A27_il2cpp_TypeInfo_var);
		int32_t L_6;
		L_6 = BitConverter_ToInt32_m745DF4DCC23461AB3035A92BC0C4D59AE12E6880(L_5, 0, NULL);
		V_1 = L_6;
		// var device = Receiver.TryGetDeviceByRemoteId(remoteDeviceId, senderIndex);
		InputRemoting_t4BBB51BEA47ACD8A408459C612008D52240C6985* L_7 = ___Receiver0;
		int32_t L_8 = V_1;
		int32_t L_9 = V_0;
		NullCheck(L_7);
		InputDevice_t8BCF67533E872A75779C24C93D1D7085B72D364B* L_10;
		L_10 = InputRemoting_TryGetDeviceByRemoteId_m042A5D606A11C95F612BE6BD7770B88F3DA554E9(L_7, L_8, L_9, NULL);
		V_2 = L_10;
		// if (device != null)
		InputDevice_t8BCF67533E872A75779C24C93D1D7085B72D364B* L_11 = V_2;
		V_3 = (bool)((!(((RuntimeObject*)(InputDevice_t8BCF67533E872A75779C24C93D1D7085B72D364B*)L_11) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_12 = V_3;
		if (!L_12)
		{
			goto IL_0039;
		}
	}
	{
		// Receiver.m_LocalManager.RemoveDevice(device);
		InputRemoting_t4BBB51BEA47ACD8A408459C612008D52240C6985* L_13 = ___Receiver0;
		NullCheck(L_13);
		RuntimeObject* L_14 = L_13->___m_LocalManager_1;
		InputDevice_t8BCF67533E872A75779C24C93D1D7085B72D364B* L_15 = V_2;
		NullCheck(L_14);
		InterfaceActionInvoker1< InputDevice_t8BCF67533E872A75779C24C93D1D7085B72D364B* >::Invoke(12 /* System.Void Unity.RenderStreaming.InputSystem.IInputManager::RemoveDevice(UnityEngine.InputSystem.InputDevice) */, IInputManager_t04CB02929EBE1ED1FFF08A760DE56B1371440513_il2cpp_TypeInfo_var, L_14, L_15);
	}

IL_0039:
	{
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


// Conversion methods for marshalling of: Unity.RenderStreaming.InputSystem.InputRemoting/SerializedState
IL2CPP_EXTERN_C void SerializedState_tA4C88FE82737BD6A346742925EBC644367180A9F_marshal_pinvoke(const SerializedState_tA4C88FE82737BD6A346742925EBC644367180A9F& unmarshaled, SerializedState_tA4C88FE82737BD6A346742925EBC644367180A9F_marshaled_pinvoke& marshaled)
{
	Exception_t* ___senders_1Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'senders' of type 'SerializedState'.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___senders_1Exception, NULL);
}
IL2CPP_EXTERN_C void SerializedState_tA4C88FE82737BD6A346742925EBC644367180A9F_marshal_pinvoke_back(const SerializedState_tA4C88FE82737BD6A346742925EBC644367180A9F_marshaled_pinvoke& marshaled, SerializedState_tA4C88FE82737BD6A346742925EBC644367180A9F& unmarshaled)
{
	Exception_t* ___senders_1Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'senders' of type 'SerializedState'.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___senders_1Exception, NULL);
}
// Conversion method for clean up from marshalling of: Unity.RenderStreaming.InputSystem.InputRemoting/SerializedState
IL2CPP_EXTERN_C void SerializedState_tA4C88FE82737BD6A346742925EBC644367180A9F_marshal_pinvoke_cleanup(SerializedState_tA4C88FE82737BD6A346742925EBC644367180A9F_marshaled_pinvoke& marshaled)
{
}


// Conversion methods for marshalling of: Unity.RenderStreaming.InputSystem.InputRemoting/SerializedState
IL2CPP_EXTERN_C void SerializedState_tA4C88FE82737BD6A346742925EBC644367180A9F_marshal_com(const SerializedState_tA4C88FE82737BD6A346742925EBC644367180A9F& unmarshaled, SerializedState_tA4C88FE82737BD6A346742925EBC644367180A9F_marshaled_com& marshaled)
{
	Exception_t* ___senders_1Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'senders' of type 'SerializedState'.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___senders_1Exception, NULL);
}
IL2CPP_EXTERN_C void SerializedState_tA4C88FE82737BD6A346742925EBC644367180A9F_marshal_com_back(const SerializedState_tA4C88FE82737BD6A346742925EBC644367180A9F_marshaled_com& marshaled, SerializedState_tA4C88FE82737BD6A346742925EBC644367180A9F& unmarshaled)
{
	Exception_t* ___senders_1Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'senders' of type 'SerializedState'.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___senders_1Exception, NULL);
}
// Conversion method for clean up from marshalling of: Unity.RenderStreaming.InputSystem.InputRemoting/SerializedState
IL2CPP_EXTERN_C void SerializedState_tA4C88FE82737BD6A346742925EBC644367180A9F_marshal_com_cleanup(SerializedState_tA4C88FE82737BD6A346742925EBC644367180A9F_marshaled_com& marshaled)
{
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Byte[] Unity.RenderStreaming.InputSystem.MessageSerializer::Serialize(Unity.RenderStreaming.InputSystem.InputRemoting/Message&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* MessageSerializer_Serialize_mEA6EC696FCA9221DCC867E8FFFEB3D885E03BD0A (Message_tD936DB9861B7DBCDC7BCEB495736886D5EFAD801* ___message0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BinaryWriter_tFB94D67EDFA3F6A34744A163BDABE287FDF2ED1E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2* V_0 = NULL;
	BinaryWriter_tFB94D67EDFA3F6A34744A163BDABE287FDF2ED1E* V_1 = NULL;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_2 = NULL;
	{
		// var stream = new MemoryStream();
		MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2* L_0 = (MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2*)il2cpp_codegen_object_new(MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		MemoryStream__ctor_m8F3BAE0B48E65BAA13C52FB020E502B3EA22CA6B(L_0, NULL);
		V_0 = L_0;
		// var writer = new BinaryWriter(stream);
		MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2* L_1 = V_0;
		BinaryWriter_tFB94D67EDFA3F6A34744A163BDABE287FDF2ED1E* L_2 = (BinaryWriter_tFB94D67EDFA3F6A34744A163BDABE287FDF2ED1E*)il2cpp_codegen_object_new(BinaryWriter_tFB94D67EDFA3F6A34744A163BDABE287FDF2ED1E_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		BinaryWriter__ctor_mF2F1235E378C3EC493A8C816597BCEB4205A9CA0(L_2, L_1, NULL);
		V_1 = L_2;
		// writer.Write(message.participantId);
		BinaryWriter_tFB94D67EDFA3F6A34744A163BDABE287FDF2ED1E* L_3 = V_1;
		Message_tD936DB9861B7DBCDC7BCEB495736886D5EFAD801* L_4 = ___message0;
		int32_t L_5 = L_4->___participantId_0;
		NullCheck(L_3);
		VirtualActionInvoker1< int32_t >::Invoke(16 /* System.Void System.IO.BinaryWriter::Write(System.Int32) */, L_3, L_5);
		// writer.Write((int)message.type);
		BinaryWriter_tFB94D67EDFA3F6A34744A163BDABE287FDF2ED1E* L_6 = V_1;
		Message_tD936DB9861B7DBCDC7BCEB495736886D5EFAD801* L_7 = ___message0;
		int32_t L_8 = L_7->___type_1;
		NullCheck(L_6);
		VirtualActionInvoker1< int32_t >::Invoke(16 /* System.Void System.IO.BinaryWriter::Write(System.Int32) */, L_6, L_8);
		// writer.Write(message.data.Length);
		BinaryWriter_tFB94D67EDFA3F6A34744A163BDABE287FDF2ED1E* L_9 = V_1;
		Message_tD936DB9861B7DBCDC7BCEB495736886D5EFAD801* L_10 = ___message0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_11 = L_10->___data_2;
		NullCheck(L_11);
		NullCheck(L_9);
		VirtualActionInvoker1< int32_t >::Invoke(16 /* System.Void System.IO.BinaryWriter::Write(System.Int32) */, L_9, ((int32_t)(((RuntimeArray*)L_11)->max_length)));
		// writer.Write(message.data);
		BinaryWriter_tFB94D67EDFA3F6A34744A163BDABE287FDF2ED1E* L_12 = V_1;
		Message_tD936DB9861B7DBCDC7BCEB495736886D5EFAD801* L_13 = ___message0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_14 = L_13->___data_2;
		NullCheck(L_12);
		VirtualActionInvoker1< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* >::Invoke(9 /* System.Void System.IO.BinaryWriter::Write(System.Byte[]) */, L_12, L_14);
		// return stream.ToArray();
		MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2* L_15 = V_0;
		NullCheck(L_15);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_16;
		L_16 = VirtualFuncInvoker0< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* >::Invoke(40 /* System.Byte[] System.IO.MemoryStream::ToArray() */, L_15);
		V_2 = L_16;
		goto IL_004d;
	}

IL_004d:
	{
		// }
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_17 = V_2;
		return L_17;
	}
}
// System.Void Unity.RenderStreaming.InputSystem.MessageSerializer::Deserialize(System.Byte[],Unity.RenderStreaming.InputSystem.InputRemoting/Message&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MessageSerializer_Deserialize_m3B89B24AD19EA1EBD0CE5E8E51C27B06276D0990 (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___bytes0, Message_tD936DB9861B7DBCDC7BCEB495736886D5EFAD801* ___message1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BinaryReader_t9A6D85F0FE9AE4EBB5E8D66997DFD1D84939E158_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	BinaryReader_t9A6D85F0FE9AE4EBB5E8D66997DFD1D84939E158* V_0 = NULL;
	int32_t V_1 = 0;
	{
		// var reader = new BinaryReader(new MemoryStream(bytes));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ___bytes0;
		MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2* L_1 = (MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2*)il2cpp_codegen_object_new(MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		MemoryStream__ctor_m662CA0D5A0004A2E3B475FE8DCD687B654870AA2(L_1, L_0, NULL);
		BinaryReader_t9A6D85F0FE9AE4EBB5E8D66997DFD1D84939E158* L_2 = (BinaryReader_t9A6D85F0FE9AE4EBB5E8D66997DFD1D84939E158*)il2cpp_codegen_object_new(BinaryReader_t9A6D85F0FE9AE4EBB5E8D66997DFD1D84939E158_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		BinaryReader__ctor_m898732FE0DBEDD480B24F6DE45A9AC696E44CC0F(L_2, L_1, NULL);
		V_0 = L_2;
		// message = default;
		Message_tD936DB9861B7DBCDC7BCEB495736886D5EFAD801* L_3 = ___message1;
		il2cpp_codegen_initobj(L_3, sizeof(Message_tD936DB9861B7DBCDC7BCEB495736886D5EFAD801));
		// message.participantId = reader.ReadInt32();
		Message_tD936DB9861B7DBCDC7BCEB495736886D5EFAD801* L_4 = ___message1;
		BinaryReader_t9A6D85F0FE9AE4EBB5E8D66997DFD1D84939E158* L_5 = V_0;
		NullCheck(L_5);
		int32_t L_6;
		L_6 = VirtualFuncInvoker0< int32_t >::Invoke(15 /* System.Int32 System.IO.BinaryReader::ReadInt32() */, L_5);
		L_4->___participantId_0 = L_6;
		// message.type = (InputRemoting.MessageType)reader.ReadInt32();
		Message_tD936DB9861B7DBCDC7BCEB495736886D5EFAD801* L_7 = ___message1;
		BinaryReader_t9A6D85F0FE9AE4EBB5E8D66997DFD1D84939E158* L_8 = V_0;
		NullCheck(L_8);
		int32_t L_9;
		L_9 = VirtualFuncInvoker0< int32_t >::Invoke(15 /* System.Int32 System.IO.BinaryReader::ReadInt32() */, L_8);
		L_7->___type_1 = L_9;
		// int length = reader.ReadInt32();
		BinaryReader_t9A6D85F0FE9AE4EBB5E8D66997DFD1D84939E158* L_10 = V_0;
		NullCheck(L_10);
		int32_t L_11;
		L_11 = VirtualFuncInvoker0< int32_t >::Invoke(15 /* System.Int32 System.IO.BinaryReader::ReadInt32() */, L_10);
		V_1 = L_11;
		// message.data = reader.ReadBytes(length);
		Message_tD936DB9861B7DBCDC7BCEB495736886D5EFAD801* L_12 = ___message1;
		BinaryReader_t9A6D85F0FE9AE4EBB5E8D66997DFD1D84939E158* L_13 = V_0;
		int32_t L_14 = V_1;
		NullCheck(L_13);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_15;
		L_15 = VirtualFuncInvoker1< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t >::Invoke(25 /* System.Byte[] System.IO.BinaryReader::ReadBytes(System.Int32) */, L_13, L_14);
		L_12->___data_2 = L_15;
		Il2CppCodeGenWriteBarrier((void**)(&L_12->___data_2), (void*)L_15);
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
// System.Void Unity.RenderStreaming.InputSystem.Receiver::add_onMessage(System.Action`1<Unity.RenderStreaming.InputSystem.InputRemoting/Message>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Receiver_add_onMessage_m33C25EC0A37B4AFDA1FE5454D9BB33FE165C9C48 (Receiver_t3693E96FFA61969B9B9F01B3F38E241C176E8B13* __this, Action_1_t62CFC7E46D3237DF830A4F831466D93C80CCEB03* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_t62CFC7E46D3237DF830A4F831466D93C80CCEB03_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Action_1_t62CFC7E46D3237DF830A4F831466D93C80CCEB03* V_0 = NULL;
	Action_1_t62CFC7E46D3237DF830A4F831466D93C80CCEB03* V_1 = NULL;
	Action_1_t62CFC7E46D3237DF830A4F831466D93C80CCEB03* V_2 = NULL;
	{
		Action_1_t62CFC7E46D3237DF830A4F831466D93C80CCEB03* L_0 = __this->___onMessage_4;
		V_0 = L_0;
	}

IL_0007:
	{
		Action_1_t62CFC7E46D3237DF830A4F831466D93C80CCEB03* L_1 = V_0;
		V_1 = L_1;
		Action_1_t62CFC7E46D3237DF830A4F831466D93C80CCEB03* L_2 = V_1;
		Action_1_t62CFC7E46D3237DF830A4F831466D93C80CCEB03* L_3 = ___value0;
		Delegate_t* L_4;
		L_4 = Delegate_Combine_m8B9D24CED35033C7FC56501DFE650F5CB7FF012C(L_2, L_3, NULL);
		V_2 = ((Action_1_t62CFC7E46D3237DF830A4F831466D93C80CCEB03*)Castclass((RuntimeObject*)L_4, Action_1_t62CFC7E46D3237DF830A4F831466D93C80CCEB03_il2cpp_TypeInfo_var));
		Action_1_t62CFC7E46D3237DF830A4F831466D93C80CCEB03** L_5 = (&__this->___onMessage_4);
		Action_1_t62CFC7E46D3237DF830A4F831466D93C80CCEB03* L_6 = V_2;
		Action_1_t62CFC7E46D3237DF830A4F831466D93C80CCEB03* L_7 = V_1;
		Action_1_t62CFC7E46D3237DF830A4F831466D93C80CCEB03* L_8;
		L_8 = InterlockedCompareExchangeImpl<Action_1_t62CFC7E46D3237DF830A4F831466D93C80CCEB03*>(L_5, L_6, L_7);
		V_0 = L_8;
		Action_1_t62CFC7E46D3237DF830A4F831466D93C80CCEB03* L_9 = V_0;
		Action_1_t62CFC7E46D3237DF830A4F831466D93C80CCEB03* L_10 = V_1;
		if ((!(((RuntimeObject*)(Action_1_t62CFC7E46D3237DF830A4F831466D93C80CCEB03*)L_9) == ((RuntimeObject*)(Action_1_t62CFC7E46D3237DF830A4F831466D93C80CCEB03*)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void Unity.RenderStreaming.InputSystem.Receiver::remove_onMessage(System.Action`1<Unity.RenderStreaming.InputSystem.InputRemoting/Message>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Receiver_remove_onMessage_mC53FE6FEB492B9BCAD4FFA3D777C87756314578D (Receiver_t3693E96FFA61969B9B9F01B3F38E241C176E8B13* __this, Action_1_t62CFC7E46D3237DF830A4F831466D93C80CCEB03* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_t62CFC7E46D3237DF830A4F831466D93C80CCEB03_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Action_1_t62CFC7E46D3237DF830A4F831466D93C80CCEB03* V_0 = NULL;
	Action_1_t62CFC7E46D3237DF830A4F831466D93C80CCEB03* V_1 = NULL;
	Action_1_t62CFC7E46D3237DF830A4F831466D93C80CCEB03* V_2 = NULL;
	{
		Action_1_t62CFC7E46D3237DF830A4F831466D93C80CCEB03* L_0 = __this->___onMessage_4;
		V_0 = L_0;
	}

IL_0007:
	{
		Action_1_t62CFC7E46D3237DF830A4F831466D93C80CCEB03* L_1 = V_0;
		V_1 = L_1;
		Action_1_t62CFC7E46D3237DF830A4F831466D93C80CCEB03* L_2 = V_1;
		Action_1_t62CFC7E46D3237DF830A4F831466D93C80CCEB03* L_3 = ___value0;
		Delegate_t* L_4;
		L_4 = Delegate_Remove_m40506877934EC1AD4ADAE57F5E97AF0BC0F96116(L_2, L_3, NULL);
		V_2 = ((Action_1_t62CFC7E46D3237DF830A4F831466D93C80CCEB03*)Castclass((RuntimeObject*)L_4, Action_1_t62CFC7E46D3237DF830A4F831466D93C80CCEB03_il2cpp_TypeInfo_var));
		Action_1_t62CFC7E46D3237DF830A4F831466D93C80CCEB03** L_5 = (&__this->___onMessage_4);
		Action_1_t62CFC7E46D3237DF830A4F831466D93C80CCEB03* L_6 = V_2;
		Action_1_t62CFC7E46D3237DF830A4F831466D93C80CCEB03* L_7 = V_1;
		Action_1_t62CFC7E46D3237DF830A4F831466D93C80CCEB03* L_8;
		L_8 = InterlockedCompareExchangeImpl<Action_1_t62CFC7E46D3237DF830A4F831466D93C80CCEB03*>(L_5, L_6, L_7);
		V_0 = L_8;
		Action_1_t62CFC7E46D3237DF830A4F831466D93C80CCEB03* L_9 = V_0;
		Action_1_t62CFC7E46D3237DF830A4F831466D93C80CCEB03* L_10 = V_1;
		if ((!(((RuntimeObject*)(Action_1_t62CFC7E46D3237DF830A4F831466D93C80CCEB03*)L_9) == ((RuntimeObject*)(Action_1_t62CFC7E46D3237DF830A4F831466D93C80CCEB03*)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void Unity.RenderStreaming.InputSystem.Receiver::add_onDeviceChange(System.Action`2<UnityEngine.InputSystem.InputDevice,UnityEngine.InputSystem.InputDeviceChange>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Receiver_add_onDeviceChange_m3718B2D388A0A9D21EE001467D92E629F26B44CA (Receiver_t3693E96FFA61969B9B9F01B3F38E241C176E8B13* __this, Action_2_tB79528C85CFEF7DFF52C575DDAA398D2FE6BC333* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_2_tB79528C85CFEF7DFF52C575DDAA398D2FE6BC333_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Action_2_tB79528C85CFEF7DFF52C575DDAA398D2FE6BC333* V_0 = NULL;
	Action_2_tB79528C85CFEF7DFF52C575DDAA398D2FE6BC333* V_1 = NULL;
	Action_2_tB79528C85CFEF7DFF52C575DDAA398D2FE6BC333* V_2 = NULL;
	{
		Action_2_tB79528C85CFEF7DFF52C575DDAA398D2FE6BC333* L_0 = __this->___onDeviceChange_5;
		V_0 = L_0;
	}

IL_0007:
	{
		Action_2_tB79528C85CFEF7DFF52C575DDAA398D2FE6BC333* L_1 = V_0;
		V_1 = L_1;
		Action_2_tB79528C85CFEF7DFF52C575DDAA398D2FE6BC333* L_2 = V_1;
		Action_2_tB79528C85CFEF7DFF52C575DDAA398D2FE6BC333* L_3 = ___value0;
		Delegate_t* L_4;
		L_4 = Delegate_Combine_m8B9D24CED35033C7FC56501DFE650F5CB7FF012C(L_2, L_3, NULL);
		V_2 = ((Action_2_tB79528C85CFEF7DFF52C575DDAA398D2FE6BC333*)Castclass((RuntimeObject*)L_4, Action_2_tB79528C85CFEF7DFF52C575DDAA398D2FE6BC333_il2cpp_TypeInfo_var));
		Action_2_tB79528C85CFEF7DFF52C575DDAA398D2FE6BC333** L_5 = (&__this->___onDeviceChange_5);
		Action_2_tB79528C85CFEF7DFF52C575DDAA398D2FE6BC333* L_6 = V_2;
		Action_2_tB79528C85CFEF7DFF52C575DDAA398D2FE6BC333* L_7 = V_1;
		Action_2_tB79528C85CFEF7DFF52C575DDAA398D2FE6BC333* L_8;
		L_8 = InterlockedCompareExchangeImpl<Action_2_tB79528C85CFEF7DFF52C575DDAA398D2FE6BC333*>(L_5, L_6, L_7);
		V_0 = L_8;
		Action_2_tB79528C85CFEF7DFF52C575DDAA398D2FE6BC333* L_9 = V_0;
		Action_2_tB79528C85CFEF7DFF52C575DDAA398D2FE6BC333* L_10 = V_1;
		if ((!(((RuntimeObject*)(Action_2_tB79528C85CFEF7DFF52C575DDAA398D2FE6BC333*)L_9) == ((RuntimeObject*)(Action_2_tB79528C85CFEF7DFF52C575DDAA398D2FE6BC333*)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void Unity.RenderStreaming.InputSystem.Receiver::remove_onDeviceChange(System.Action`2<UnityEngine.InputSystem.InputDevice,UnityEngine.InputSystem.InputDeviceChange>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Receiver_remove_onDeviceChange_mC29758C88300E3E1B7157C063F9B47E28314AA6A (Receiver_t3693E96FFA61969B9B9F01B3F38E241C176E8B13* __this, Action_2_tB79528C85CFEF7DFF52C575DDAA398D2FE6BC333* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_2_tB79528C85CFEF7DFF52C575DDAA398D2FE6BC333_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Action_2_tB79528C85CFEF7DFF52C575DDAA398D2FE6BC333* V_0 = NULL;
	Action_2_tB79528C85CFEF7DFF52C575DDAA398D2FE6BC333* V_1 = NULL;
	Action_2_tB79528C85CFEF7DFF52C575DDAA398D2FE6BC333* V_2 = NULL;
	{
		Action_2_tB79528C85CFEF7DFF52C575DDAA398D2FE6BC333* L_0 = __this->___onDeviceChange_5;
		V_0 = L_0;
	}

IL_0007:
	{
		Action_2_tB79528C85CFEF7DFF52C575DDAA398D2FE6BC333* L_1 = V_0;
		V_1 = L_1;
		Action_2_tB79528C85CFEF7DFF52C575DDAA398D2FE6BC333* L_2 = V_1;
		Action_2_tB79528C85CFEF7DFF52C575DDAA398D2FE6BC333* L_3 = ___value0;
		Delegate_t* L_4;
		L_4 = Delegate_Remove_m40506877934EC1AD4ADAE57F5E97AF0BC0F96116(L_2, L_3, NULL);
		V_2 = ((Action_2_tB79528C85CFEF7DFF52C575DDAA398D2FE6BC333*)Castclass((RuntimeObject*)L_4, Action_2_tB79528C85CFEF7DFF52C575DDAA398D2FE6BC333_il2cpp_TypeInfo_var));
		Action_2_tB79528C85CFEF7DFF52C575DDAA398D2FE6BC333** L_5 = (&__this->___onDeviceChange_5);
		Action_2_tB79528C85CFEF7DFF52C575DDAA398D2FE6BC333* L_6 = V_2;
		Action_2_tB79528C85CFEF7DFF52C575DDAA398D2FE6BC333* L_7 = V_1;
		Action_2_tB79528C85CFEF7DFF52C575DDAA398D2FE6BC333* L_8;
		L_8 = InterlockedCompareExchangeImpl<Action_2_tB79528C85CFEF7DFF52C575DDAA398D2FE6BC333*>(L_5, L_6, L_7);
		V_0 = L_8;
		Action_2_tB79528C85CFEF7DFF52C575DDAA398D2FE6BC333* L_9 = V_0;
		Action_2_tB79528C85CFEF7DFF52C575DDAA398D2FE6BC333* L_10 = V_1;
		if ((!(((RuntimeObject*)(Action_2_tB79528C85CFEF7DFF52C575DDAA398D2FE6BC333*)L_9) == ((RuntimeObject*)(Action_2_tB79528C85CFEF7DFF52C575DDAA398D2FE6BC333*)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void Unity.RenderStreaming.InputSystem.Receiver::add_onLayoutChange(System.Action`2<System.String,UnityEngine.InputSystem.InputControlLayoutChange>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Receiver_add_onLayoutChange_m2EDB12B9869B1F0ECD1163AF916B6321E36D8977 (Receiver_t3693E96FFA61969B9B9F01B3F38E241C176E8B13* __this, Action_2_t4797B88C63509F2EE4385D6DABE6A4B5AD5393F7* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_2_t4797B88C63509F2EE4385D6DABE6A4B5AD5393F7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Action_2_t4797B88C63509F2EE4385D6DABE6A4B5AD5393F7* V_0 = NULL;
	Action_2_t4797B88C63509F2EE4385D6DABE6A4B5AD5393F7* V_1 = NULL;
	Action_2_t4797B88C63509F2EE4385D6DABE6A4B5AD5393F7* V_2 = NULL;
	{
		Action_2_t4797B88C63509F2EE4385D6DABE6A4B5AD5393F7* L_0 = __this->___onLayoutChange_6;
		V_0 = L_0;
	}

IL_0007:
	{
		Action_2_t4797B88C63509F2EE4385D6DABE6A4B5AD5393F7* L_1 = V_0;
		V_1 = L_1;
		Action_2_t4797B88C63509F2EE4385D6DABE6A4B5AD5393F7* L_2 = V_1;
		Action_2_t4797B88C63509F2EE4385D6DABE6A4B5AD5393F7* L_3 = ___value0;
		Delegate_t* L_4;
		L_4 = Delegate_Combine_m8B9D24CED35033C7FC56501DFE650F5CB7FF012C(L_2, L_3, NULL);
		V_2 = ((Action_2_t4797B88C63509F2EE4385D6DABE6A4B5AD5393F7*)Castclass((RuntimeObject*)L_4, Action_2_t4797B88C63509F2EE4385D6DABE6A4B5AD5393F7_il2cpp_TypeInfo_var));
		Action_2_t4797B88C63509F2EE4385D6DABE6A4B5AD5393F7** L_5 = (&__this->___onLayoutChange_6);
		Action_2_t4797B88C63509F2EE4385D6DABE6A4B5AD5393F7* L_6 = V_2;
		Action_2_t4797B88C63509F2EE4385D6DABE6A4B5AD5393F7* L_7 = V_1;
		Action_2_t4797B88C63509F2EE4385D6DABE6A4B5AD5393F7* L_8;
		L_8 = InterlockedCompareExchangeImpl<Action_2_t4797B88C63509F2EE4385D6DABE6A4B5AD5393F7*>(L_5, L_6, L_7);
		V_0 = L_8;
		Action_2_t4797B88C63509F2EE4385D6DABE6A4B5AD5393F7* L_9 = V_0;
		Action_2_t4797B88C63509F2EE4385D6DABE6A4B5AD5393F7* L_10 = V_1;
		if ((!(((RuntimeObject*)(Action_2_t4797B88C63509F2EE4385D6DABE6A4B5AD5393F7*)L_9) == ((RuntimeObject*)(Action_2_t4797B88C63509F2EE4385D6DABE6A4B5AD5393F7*)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void Unity.RenderStreaming.InputSystem.Receiver::remove_onLayoutChange(System.Action`2<System.String,UnityEngine.InputSystem.InputControlLayoutChange>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Receiver_remove_onLayoutChange_m5FD03A9737F476EF2958C3CF06B890C4FEE9946A (Receiver_t3693E96FFA61969B9B9F01B3F38E241C176E8B13* __this, Action_2_t4797B88C63509F2EE4385D6DABE6A4B5AD5393F7* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_2_t4797B88C63509F2EE4385D6DABE6A4B5AD5393F7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Action_2_t4797B88C63509F2EE4385D6DABE6A4B5AD5393F7* V_0 = NULL;
	Action_2_t4797B88C63509F2EE4385D6DABE6A4B5AD5393F7* V_1 = NULL;
	Action_2_t4797B88C63509F2EE4385D6DABE6A4B5AD5393F7* V_2 = NULL;
	{
		Action_2_t4797B88C63509F2EE4385D6DABE6A4B5AD5393F7* L_0 = __this->___onLayoutChange_6;
		V_0 = L_0;
	}

IL_0007:
	{
		Action_2_t4797B88C63509F2EE4385D6DABE6A4B5AD5393F7* L_1 = V_0;
		V_1 = L_1;
		Action_2_t4797B88C63509F2EE4385D6DABE6A4B5AD5393F7* L_2 = V_1;
		Action_2_t4797B88C63509F2EE4385D6DABE6A4B5AD5393F7* L_3 = ___value0;
		Delegate_t* L_4;
		L_4 = Delegate_Remove_m40506877934EC1AD4ADAE57F5E97AF0BC0F96116(L_2, L_3, NULL);
		V_2 = ((Action_2_t4797B88C63509F2EE4385D6DABE6A4B5AD5393F7*)Castclass((RuntimeObject*)L_4, Action_2_t4797B88C63509F2EE4385D6DABE6A4B5AD5393F7_il2cpp_TypeInfo_var));
		Action_2_t4797B88C63509F2EE4385D6DABE6A4B5AD5393F7** L_5 = (&__this->___onLayoutChange_6);
		Action_2_t4797B88C63509F2EE4385D6DABE6A4B5AD5393F7* L_6 = V_2;
		Action_2_t4797B88C63509F2EE4385D6DABE6A4B5AD5393F7* L_7 = V_1;
		Action_2_t4797B88C63509F2EE4385D6DABE6A4B5AD5393F7* L_8;
		L_8 = InterlockedCompareExchangeImpl<Action_2_t4797B88C63509F2EE4385D6DABE6A4B5AD5393F7*>(L_5, L_6, L_7);
		V_0 = L_8;
		Action_2_t4797B88C63509F2EE4385D6DABE6A4B5AD5393F7* L_9 = V_0;
		Action_2_t4797B88C63509F2EE4385D6DABE6A4B5AD5393F7* L_10 = V_1;
		if ((!(((RuntimeObject*)(Action_2_t4797B88C63509F2EE4385D6DABE6A4B5AD5393F7*)L_9) == ((RuntimeObject*)(Action_2_t4797B88C63509F2EE4385D6DABE6A4B5AD5393F7*)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void Unity.RenderStreaming.InputSystem.Receiver::set_EnableInputPositionCorrection(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Receiver_set_EnableInputPositionCorrection_mDEA12BCBC33C2C39DF02FCAF18F2273A3D9CBC84 (Receiver_t3693E96FFA61969B9B9F01B3F38E241C176E8B13* __this, bool ___value0, const RuntimeMethod* method) 
{
	{
		// public bool EnableInputPositionCorrection { set; get; }
		bool L_0 = ___value0;
		__this->___U3CEnableInputPositionCorrectionU3Ek__BackingField_13 = L_0;
		return;
	}
}
// System.Boolean Unity.RenderStreaming.InputSystem.Receiver::get_EnableInputPositionCorrection()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Receiver_get_EnableInputPositionCorrection_mCA7935398FB989440C50AA6452DB95065821FFB5 (Receiver_t3693E96FFA61969B9B9F01B3F38E241C176E8B13* __this, const RuntimeMethod* method) 
{
	{
		// public bool EnableInputPositionCorrection { set; get; }
		bool L_0 = __this->___U3CEnableInputPositionCorrectionU3Ek__BackingField_13;
		return L_0;
	}
}
// System.Void Unity.RenderStreaming.InputSystem.Receiver::.ctor(Unity.WebRTC.RTCDataChannel)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Receiver__ctor_m55A42D83C0FA4A3CCD34B65A2F046E1E76A53A05 (Receiver_t3693E96FFA61969B9B9F01B3F38E241C176E8B13* __this, RTCDataChannel_t249C16A38FD2A994D1A45381523F701A49BF1A77* ___channel0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_2_t4943DD8C32CAB983950535CEF3BABA85DF8C9AAA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DelegateOnMessage_tE81CBB87203E4F40FF44C6FEDE4BA23064ABBB62_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_m768E076F1E804CE4959F4E71D3E6A9ADE2F55052_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InputPositionCorrector_tCF23AF130F6DFC2147C5A591578CB80F6C6475C2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m7F6D93ACCD15D757B54BDB302DB4D63F855418C4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_mCA8DD57EAC70C2B5923DBB9D5A77CEAC22E7068E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t7228B1F3AC7E48407209173C7BF2B2AFBED5A4F7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Receiver_OnMessage_mA279BBE3C3FE2E6D6D3B80F96278E8026C0D8838_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Receiver_U3C_ctorU3Eb__19_0_m9ADAF334C7EA1BA4F2AB721FF8B676803F8BDCB1_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	RTCDataChannel_t249C16A38FD2A994D1A45381523F701A49BF1A77* G_B2_0 = NULL;
	Receiver_t3693E96FFA61969B9B9F01B3F38E241C176E8B13* G_B2_1 = NULL;
	RTCDataChannel_t249C16A38FD2A994D1A45381523F701A49BF1A77* G_B1_0 = NULL;
	Receiver_t3693E96FFA61969B9B9F01B3F38E241C176E8B13* G_B1_1 = NULL;
	{
		// private readonly List<InputDevice> _remoteDevices = new List<InputDevice>();
		List_1_t7228B1F3AC7E48407209173C7BF2B2AFBED5A4F7* L_0 = (List_1_t7228B1F3AC7E48407209173C7BF2B2AFBED5A4F7*)il2cpp_codegen_object_new(List_1_t7228B1F3AC7E48407209173C7BF2B2AFBED5A4F7_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		List_1__ctor_m7F6D93ACCD15D757B54BDB302DB4D63F855418C4(L_0, List_1__ctor_m7F6D93ACCD15D757B54BDB302DB4D63F855418C4_RuntimeMethod_var);
		__this->____remoteDevices_8 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____remoteDevices_8), (void*)L_0);
		// private readonly Dictionary<string, string> _remoteLayouts = new Dictionary<string, string>();
		Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_1 = (Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83*)il2cpp_codegen_object_new(Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		Dictionary_2__ctor_m768E076F1E804CE4959F4E71D3E6A9ADE2F55052(L_1, Dictionary_2__ctor_m768E076F1E804CE4959F4E71D3E6A9ADE2F55052_RuntimeMethod_var);
		__this->____remoteLayouts_9 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____remoteLayouts_9), (void*)L_1);
		// private readonly List<string> _registeredRemoteLayout = new List<string>();
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_2 = (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD*)il2cpp_codegen_object_new(List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		List_1__ctor_mCA8DD57EAC70C2B5923DBB9D5A77CEAC22E7068E(L_2, List_1__ctor_mCA8DD57EAC70C2B5923DBB9D5A77CEAC22E7068E_RuntimeMethod_var);
		__this->____registeredRemoteLayout_10 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____registeredRemoteLayout_10), (void*)L_2);
		// public Receiver(RTCDataChannel channel)
		InputManager__ctor_mC25C0393A1E1F45E38536646098201190E414202(__this, NULL);
		// _channel = channel ?? throw new ArgumentNullException("channel is null");
		RTCDataChannel_t249C16A38FD2A994D1A45381523F701A49BF1A77* L_3 = ___channel0;
		RTCDataChannel_t249C16A38FD2A994D1A45381523F701A49BF1A77* L_4 = L_3;
		G_B1_0 = L_4;
		G_B1_1 = __this;
		if (L_4)
		{
			G_B2_0 = L_4;
			G_B2_1 = __this;
			goto IL_003a;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_5 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		NullCheck(L_5);
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_5, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89D2F03F951168C1FEEF991E1A8224E044D67583)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_5, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Receiver__ctor_m55A42D83C0FA4A3CCD34B65A2F046E1E76A53A05_RuntimeMethod_var)));
	}

IL_003a:
	{
		NullCheck(G_B2_1);
		G_B2_1->____channel_7 = G_B2_0;
		Il2CppCodeGenWriteBarrier((void**)(&G_B2_1->____channel_7), (void*)G_B2_0);
		// _channel.OnMessage += OnMessage;
		RTCDataChannel_t249C16A38FD2A994D1A45381523F701A49BF1A77* L_6 = __this->____channel_7;
		RTCDataChannel_t249C16A38FD2A994D1A45381523F701A49BF1A77* L_7 = L_6;
		NullCheck(L_7);
		DelegateOnMessage_tE81CBB87203E4F40FF44C6FEDE4BA23064ABBB62* L_8;
		L_8 = RTCDataChannel_get_OnMessage_m52BF55D1E74B44B448A47E71801EABB086D1EB3F(L_7, NULL);
		DelegateOnMessage_tE81CBB87203E4F40FF44C6FEDE4BA23064ABBB62* L_9 = (DelegateOnMessage_tE81CBB87203E4F40FF44C6FEDE4BA23064ABBB62*)il2cpp_codegen_object_new(DelegateOnMessage_tE81CBB87203E4F40FF44C6FEDE4BA23064ABBB62_il2cpp_TypeInfo_var);
		NullCheck(L_9);
		DelegateOnMessage__ctor_mFB12B9D00B2DD7517C073A0AC7FB377BC5659036(L_9, __this, (intptr_t)((void*)Receiver_OnMessage_mA279BBE3C3FE2E6D6D3B80F96278E8026C0D8838_RuntimeMethod_var), NULL);
		Delegate_t* L_10;
		L_10 = Delegate_Combine_m8B9D24CED35033C7FC56501DFE650F5CB7FF012C(L_8, L_9, NULL);
		NullCheck(L_7);
		RTCDataChannel_set_OnMessage_mEB5215317A514EBF36D5307FEA6F4949C25A2E6C(L_7, ((DelegateOnMessage_tE81CBB87203E4F40FF44C6FEDE4BA23064ABBB62*)CastclassSealed((RuntimeObject*)L_10, DelegateOnMessage_tE81CBB87203E4F40FF44C6FEDE4BA23064ABBB62_il2cpp_TypeInfo_var)), NULL);
		// _onEvent = (InputEventPtr ptr, InputDevice device) => { base.QueueEvent(ptr); };
		Action_2_t4943DD8C32CAB983950535CEF3BABA85DF8C9AAA* L_11 = (Action_2_t4943DD8C32CAB983950535CEF3BABA85DF8C9AAA*)il2cpp_codegen_object_new(Action_2_t4943DD8C32CAB983950535CEF3BABA85DF8C9AAA_il2cpp_TypeInfo_var);
		NullCheck(L_11);
		Action_2__ctor_m43B5BA62418FAB32773B12CEFF46A46855BF5B10(L_11, __this, (intptr_t)((void*)Receiver_U3C_ctorU3Eb__19_0_m9ADAF334C7EA1BA4F2AB721FF8B676803F8BDCB1_RuntimeMethod_var), NULL);
		__this->____onEvent_12 = L_11;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____onEvent_12), (void*)L_11);
		// _corrector = new InputPositionCorrector(_onEvent);
		Action_2_t4943DD8C32CAB983950535CEF3BABA85DF8C9AAA* L_12 = __this->____onEvent_12;
		InputPositionCorrector_tCF23AF130F6DFC2147C5A591578CB80F6C6475C2* L_13 = (InputPositionCorrector_tCF23AF130F6DFC2147C5A591578CB80F6C6475C2*)il2cpp_codegen_object_new(InputPositionCorrector_tCF23AF130F6DFC2147C5A591578CB80F6C6475C2_il2cpp_TypeInfo_var);
		NullCheck(L_13);
		InputPositionCorrector__ctor_m43B92A75880BD4090A136C5C4740F0FB363E5605(L_13, L_12, NULL);
		__this->____corrector_11 = L_13;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____corrector_11), (void*)L_13);
		// }
		return;
	}
}
// System.Void Unity.RenderStreaming.InputSystem.Receiver::Finalize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Receiver_Finalize_mD7D953EFE5325D6F535727C7C24FA4DFE6C64009 (Receiver_t3693E96FFA61969B9B9F01B3F38E241C176E8B13* __this, const RuntimeMethod* method) 
{
	{
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_000b:
			{// begin finally (depth: 1)
				// }
				Object_Finalize_mC98C96301CCABFE00F1A7EF8E15DF507CACD42B2(__this, NULL);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			// this.Dispose();
			Receiver_Dispose_mBE492B2B5EEA779DEB37FCF9426374AC6DFA364D(__this, NULL);
			goto IL_0013;
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0013:
	{
		// }
		return;
	}
}
// System.Void Unity.RenderStreaming.InputSystem.Receiver::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Receiver_Dispose_mBE492B2B5EEA779DEB37FCF9426374AC6DFA364D (Receiver_t3693E96FFA61969B9B9F01B3F38E241C176E8B13* __this, const RuntimeMethod* method) 
{
	{
		// RemoveAllRemoteDevices();
		Receiver_RemoveAllRemoteDevices_mB281325386548C50286F66CAD79A90610C52182A(__this, NULL);
		// RemoveAllRemoteLayouts();
		Receiver_RemoveAllRemoteLayouts_mBB9508181D8E7A8B4A6CFAF8023129E74B8ACDB8(__this, NULL);
		// }
		return;
	}
}
// System.Void Unity.RenderStreaming.InputSystem.Receiver::OnMessage(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Receiver_OnMessage_mA279BBE3C3FE2E6D6D3B80F96278E8026C0D8838 (Receiver_t3693E96FFA61969B9B9F01B3F38E241C176E8B13* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___bytes0, const RuntimeMethod* method) 
{
	Message_tD936DB9861B7DBCDC7BCEB495736886D5EFAD801 V_0;
	memset((&V_0), 0, sizeof(V_0));
	Action_1_t62CFC7E46D3237DF830A4F831466D93C80CCEB03* G_B2_0 = NULL;
	Action_1_t62CFC7E46D3237DF830A4F831466D93C80CCEB03* G_B1_0 = NULL;
	{
		// MessageSerializer.Deserialize(bytes, out var message);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ___bytes0;
		MessageSerializer_Deserialize_m3B89B24AD19EA1EBD0CE5E8E51C27B06276D0990(L_0, (&V_0), NULL);
		// onMessage?.Invoke(message);
		Action_1_t62CFC7E46D3237DF830A4F831466D93C80CCEB03* L_1 = __this->___onMessage_4;
		Action_1_t62CFC7E46D3237DF830A4F831466D93C80CCEB03* L_2 = L_1;
		G_B1_0 = L_2;
		if (L_2)
		{
			G_B2_0 = L_2;
			goto IL_0016;
		}
	}
	{
		goto IL_001d;
	}

IL_0016:
	{
		Message_tD936DB9861B7DBCDC7BCEB495736886D5EFAD801 L_3 = V_0;
		NullCheck(G_B2_0);
		Action_1_Invoke_mF1548FD088108212A1822D5F1ED4FD8BE79743A6_inline(G_B2_0, L_3, NULL);
	}

IL_001d:
	{
		// }
		return;
	}
}
// UnityEngine.InputSystem.Utilities.ReadOnlyArray`1<UnityEngine.InputSystem.InputDevice> Unity.RenderStreaming.InputSystem.Receiver::get_devices()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ReadOnlyArray_1_t21E90B3F1DF1E9A2088EA0523F03C47910735BCA Receiver_get_devices_m6E5494C2F2440ECD0BA1BEE9C9BD0D94026E52EF (Receiver_t3693E96FFA61969B9B9F01B3F38E241C176E8B13* __this, const RuntimeMethod* method) 
{
	ReadOnlyArray_1_t21E90B3F1DF1E9A2088EA0523F03C47910735BCA V_0;
	memset((&V_0), 0, sizeof(V_0));
	ReadOnlyArray_1_t21E90B3F1DF1E9A2088EA0523F03C47910735BCA V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		// return new ReadOnlyArray<InputDevice>();
		il2cpp_codegen_initobj((&V_0), sizeof(ReadOnlyArray_1_t21E90B3F1DF1E9A2088EA0523F03C47910735BCA));
		ReadOnlyArray_1_t21E90B3F1DF1E9A2088EA0523F03C47910735BCA L_0 = V_0;
		V_1 = L_0;
		goto IL_000d;
	}

IL_000d:
	{
		// }
		ReadOnlyArray_1_t21E90B3F1DF1E9A2088EA0523F03C47910735BCA L_1 = V_1;
		return L_1;
	}
}
// System.Collections.Generic.IEnumerable`1<System.String> Unity.RenderStreaming.InputSystem.Receiver::get_layouts()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Receiver_get_layouts_m1FB4ECB45A1AEE7A40E5BC86692E79EA089925B3 (Receiver_t3693E96FFA61969B9B9F01B3F38E241C176E8B13* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_Empty_TisString_t_m59E0A7B1D4568D8BAFB2A883E33227C84FA2B167_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	{
		// return Enumerable.Empty<string>();
		RuntimeObject* L_0;
		L_0 = Enumerable_Empty_TisString_t_m59E0A7B1D4568D8BAFB2A883E33227C84FA2B167_inline(Enumerable_Empty_TisString_t_m59E0A7B1D4568D8BAFB2A883E33227C84FA2B167_RuntimeMethod_var);
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		// }
		RuntimeObject* L_1 = V_0;
		return L_1;
	}
}
// UnityEngine.InputSystem.Utilities.ReadOnlyArray`1<UnityEngine.InputSystem.InputDevice> Unity.RenderStreaming.InputSystem.Receiver::get_remoteDevices()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ReadOnlyArray_1_t21E90B3F1DF1E9A2088EA0523F03C47910735BCA Receiver_get_remoteDevices_m7CADBF4474A2467343CBD6047C45A5A178153605 (Receiver_t3693E96FFA61969B9B9F01B3F38E241C176E8B13* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_ToArray_m0677C6BE36424C545A5EBE70F7F1F509CE9B95A3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReadOnlyArray_1__ctor_mD59ECD80D43585A6BAEE5238FDA72B9D15F9E6D3_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	ReadOnlyArray_1_t21E90B3F1DF1E9A2088EA0523F03C47910735BCA V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// return new ReadOnlyArray<InputDevice>(_remoteDevices.ToArray());
		List_1_t7228B1F3AC7E48407209173C7BF2B2AFBED5A4F7* L_0 = __this->____remoteDevices_8;
		NullCheck(L_0);
		InputDeviceU5BU5D_tA9AEFC6AF63557D3D5DCFB2B26DDA6F63147D548* L_1;
		L_1 = List_1_ToArray_m0677C6BE36424C545A5EBE70F7F1F509CE9B95A3(L_0, List_1_ToArray_m0677C6BE36424C545A5EBE70F7F1F509CE9B95A3_RuntimeMethod_var);
		ReadOnlyArray_1_t21E90B3F1DF1E9A2088EA0523F03C47910735BCA L_2;
		memset((&L_2), 0, sizeof(L_2));
		ReadOnlyArray_1__ctor_mD59ECD80D43585A6BAEE5238FDA72B9D15F9E6D3((&L_2), L_1, /*hidden argument*/ReadOnlyArray_1__ctor_mD59ECD80D43585A6BAEE5238FDA72B9D15F9E6D3_RuntimeMethod_var);
		V_0 = L_2;
		goto IL_0014;
	}

IL_0014:
	{
		// }
		ReadOnlyArray_1_t21E90B3F1DF1E9A2088EA0523F03C47910735BCA L_3 = V_0;
		return L_3;
	}
}
// UnityEngine.InputSystem.Utilities.ReadOnlyArray`1<System.String> Unity.RenderStreaming.InputSystem.Receiver::get_remoteLayouts()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ReadOnlyArray_1_t2221E33FFA1DEDB4C4179E62014550834DDAE95E Receiver_get_remoteLayouts_mEFC62333CA0E9F062AB1F0A097595E90D37B9738 (Receiver_t3693E96FFA61969B9B9F01B3F38E241C176E8B13* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Keys_m0014C8E91B9B4377ACFBD26A9175A7E5C016D9E9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_ToArray_TisString_t_mCD2BC789CBFF834E06F00948FC47E15E720936DC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReadOnlyArray_1__ctor_mB7B2530C845265544A7EEC8827BDBDC9AAD59967_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	ReadOnlyArray_1_t2221E33FFA1DEDB4C4179E62014550834DDAE95E V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// return new ReadOnlyArray<string>(_remoteLayouts.Keys.ToArray());
		Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_0 = __this->____remoteLayouts_9;
		NullCheck(L_0);
		KeyCollection_t2EDD317F5771E575ACB63527B5AFB71291040342* L_1;
		L_1 = Dictionary_2_get_Keys_m0014C8E91B9B4377ACFBD26A9175A7E5C016D9E9(L_0, Dictionary_2_get_Keys_m0014C8E91B9B4377ACFBD26A9175A7E5C016D9E9_RuntimeMethod_var);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_2;
		L_2 = Enumerable_ToArray_TisString_t_mCD2BC789CBFF834E06F00948FC47E15E720936DC(L_1, Enumerable_ToArray_TisString_t_mCD2BC789CBFF834E06F00948FC47E15E720936DC_RuntimeMethod_var);
		ReadOnlyArray_1_t2221E33FFA1DEDB4C4179E62014550834DDAE95E L_3;
		memset((&L_3), 0, sizeof(L_3));
		ReadOnlyArray_1__ctor_mB7B2530C845265544A7EEC8827BDBDC9AAD59967((&L_3), L_2, /*hidden argument*/ReadOnlyArray_1__ctor_mB7B2530C845265544A7EEC8827BDBDC9AAD59967_RuntimeMethod_var);
		V_0 = L_3;
		goto IL_0019;
	}

IL_0019:
	{
		// }
		ReadOnlyArray_1_t2221E33FFA1DEDB4C4179E62014550834DDAE95E L_4 = V_0;
		return L_4;
	}
}
// System.Void Unity.RenderStreaming.InputSystem.Receiver::RemoveAllRemoteDevices()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Receiver_RemoveAllRemoteDevices_mB281325386548C50286F66CAD79A90610C52182A (Receiver_t3693E96FFA61969B9B9F01B3F38E241C176E8B13* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_mA1ED4EC9A15A623C97C494578B74F7F49BADE472_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m3537C03FE10D4B303FDA30D5D9919811FCCB7C87_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		goto IL_0018;
	}

IL_0003:
	{
		// RemoveDevice(_remoteDevices[0]);
		List_1_t7228B1F3AC7E48407209173C7BF2B2AFBED5A4F7* L_0 = __this->____remoteDevices_8;
		NullCheck(L_0);
		InputDevice_t8BCF67533E872A75779C24C93D1D7085B72D364B* L_1;
		L_1 = List_1_get_Item_m3537C03FE10D4B303FDA30D5D9919811FCCB7C87(L_0, 0, List_1_get_Item_m3537C03FE10D4B303FDA30D5D9919811FCCB7C87_RuntimeMethod_var);
		VirtualActionInvoker1< InputDevice_t8BCF67533E872A75779C24C93D1D7085B72D364B* >::Invoke(34 /* System.Void Unity.RenderStreaming.InputSystem.InputManager::RemoveDevice(UnityEngine.InputSystem.InputDevice) */, __this, L_1);
	}

IL_0018:
	{
		// while (_remoteDevices.Count > 0)
		List_1_t7228B1F3AC7E48407209173C7BF2B2AFBED5A4F7* L_2 = __this->____remoteDevices_8;
		NullCheck(L_2);
		int32_t L_3;
		L_3 = List_1_get_Count_mA1ED4EC9A15A623C97C494578B74F7F49BADE472_inline(L_2, List_1_get_Count_mA1ED4EC9A15A623C97C494578B74F7F49BADE472_RuntimeMethod_var);
		V_0 = (bool)((((int32_t)L_3) > ((int32_t)0))? 1 : 0);
		bool L_4 = V_0;
		if (L_4)
		{
			goto IL_0003;
		}
	}
	{
		// }
		return;
	}
}
// System.Void Unity.RenderStreaming.InputSystem.Receiver::RemoveAllRemoteLayouts()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Receiver_RemoveAllRemoteLayouts_mBB9508181D8E7A8B4A6CFAF8023129E74B8ACDB8 (Receiver_t3693E96FFA61969B9B9F01B3F38E241C176E8B13* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Count_m65C62C77C355CFCE2CC0ED6D817637E1909E0843_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_First_TisKeyValuePair_2_t47AB280304B50F542FD7E14F25DB2C374AEDD80A_m2F7A0F03DDFAC20AB000E80BAF5BDDD68EE9FF1C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeyValuePair_2_get_Key_m654BCCAE2F20CB11D8E8C2D2C886A0C8A13EB1C4_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	KeyValuePair_2_t47AB280304B50F542FD7E14F25DB2C374AEDD80A V_0;
	memset((&V_0), 0, sizeof(V_0));
	bool V_1 = false;
	{
		goto IL_001f;
	}

IL_0003:
	{
		// RemoveLayout(_remoteLayouts.First().Key);
		Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_0 = __this->____remoteLayouts_9;
		KeyValuePair_2_t47AB280304B50F542FD7E14F25DB2C374AEDD80A L_1;
		L_1 = Enumerable_First_TisKeyValuePair_2_t47AB280304B50F542FD7E14F25DB2C374AEDD80A_m2F7A0F03DDFAC20AB000E80BAF5BDDD68EE9FF1C(L_0, Enumerable_First_TisKeyValuePair_2_t47AB280304B50F542FD7E14F25DB2C374AEDD80A_m2F7A0F03DDFAC20AB000E80BAF5BDDD68EE9FF1C_RuntimeMethod_var);
		V_0 = L_1;
		String_t* L_2;
		L_2 = KeyValuePair_2_get_Key_m654BCCAE2F20CB11D8E8C2D2C886A0C8A13EB1C4_inline((&V_0), KeyValuePair_2_get_Key_m654BCCAE2F20CB11D8E8C2D2C886A0C8A13EB1C4_RuntimeMethod_var);
		VirtualActionInvoker1< String_t* >::Invoke(38 /* System.Void Unity.RenderStreaming.InputSystem.InputManager::RemoveLayout(System.String) */, __this, L_2);
	}

IL_001f:
	{
		// while (_remoteLayouts.Count > 0)
		Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_3 = __this->____remoteLayouts_9;
		NullCheck(L_3);
		int32_t L_4;
		L_4 = Dictionary_2_get_Count_m65C62C77C355CFCE2CC0ED6D817637E1909E0843(L_3, Dictionary_2_get_Count_m65C62C77C355CFCE2CC0ED6D817637E1909E0843_RuntimeMethod_var);
		V_1 = (bool)((((int32_t)L_4) > ((int32_t)0))? 1 : 0);
		bool L_5 = V_1;
		if (L_5)
		{
			goto IL_0003;
		}
	}
	{
		// }
		return;
	}
}
// UnityEngine.InputSystem.InputDevice Unity.RenderStreaming.InputSystem.Receiver::AddDevice(System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR InputDevice_t8BCF67533E872A75779C24C93D1D7085B72D364B* Receiver_AddDevice_m9A90B2BADC0E35A3EBA37E5012C9BD172A4B0380 (Receiver_t3693E96FFA61969B9B9F01B3F38E241C176E8B13* __this, String_t* ___layout0, String_t* ___name1, String_t* ___variants2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_TryGetValue_mA86D965CB5F74CE8675B7995C61945BEB6E594CB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_Count_TisString_t_m817BB8D7A32098126CC975E91C64732B1DB8CFB0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_2_tAB9727E0C937894E19032D575D98A8A9AB5EE47D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InputSystem_t4120CA4FE7DCFD56AF9391933FC3F1F485350164_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m3EA74E0C476E0197F84637414E722866A8EE48E1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass33_0_U3CAddDeviceU3Eb__0_mC4557290A9C0C0D19B67630EC93225107C5A6E4F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass33_0_t7BB9C2C6DF625E4E7D58A039705AF481AA86BE1E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	U3CU3Ec__DisplayClass33_0_t7BB9C2C6DF625E4E7D58A039705AF481AA86BE1E* V_0 = NULL;
	InputDevice_t8BCF67533E872A75779C24C93D1D7085B72D364B* V_1 = NULL;
	bool V_2 = false;
	String_t* V_3 = NULL;
	bool V_4 = false;
	InputDevice_t8BCF67533E872A75779C24C93D1D7085B72D364B* V_5 = NULL;
	Action_2_tB79528C85CFEF7DFF52C575DDAA398D2FE6BC333* G_B6_0 = NULL;
	Action_2_tB79528C85CFEF7DFF52C575DDAA398D2FE6BC333* G_B5_0 = NULL;
	{
		U3CU3Ec__DisplayClass33_0_t7BB9C2C6DF625E4E7D58A039705AF481AA86BE1E* L_0 = (U3CU3Ec__DisplayClass33_0_t7BB9C2C6DF625E4E7D58A039705AF481AA86BE1E*)il2cpp_codegen_object_new(U3CU3Ec__DisplayClass33_0_t7BB9C2C6DF625E4E7D58A039705AF481AA86BE1E_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CU3Ec__DisplayClass33_0__ctor_m2D0B14E37D400652F19B67365455CFB759F8C8CD(L_0, NULL);
		V_0 = L_0;
		U3CU3Ec__DisplayClass33_0_t7BB9C2C6DF625E4E7D58A039705AF481AA86BE1E* L_1 = V_0;
		String_t* L_2 = ___layout0;
		NullCheck(L_1);
		L_1->___layout_0 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___layout_0), (void*)L_2);
		// if (InputSystem.ListLayouts().Count(_ => _ == layout) == 0)
		il2cpp_codegen_runtime_class_init_inline(InputSystem_t4120CA4FE7DCFD56AF9391933FC3F1F485350164_il2cpp_TypeInfo_var);
		RuntimeObject* L_3;
		L_3 = InputSystem_ListLayouts_m4DD7C02054680DDB24EBFEE504B70F630DF1E1CC(NULL);
		U3CU3Ec__DisplayClass33_0_t7BB9C2C6DF625E4E7D58A039705AF481AA86BE1E* L_4 = V_0;
		Func_2_tAB9727E0C937894E19032D575D98A8A9AB5EE47D* L_5 = (Func_2_tAB9727E0C937894E19032D575D98A8A9AB5EE47D*)il2cpp_codegen_object_new(Func_2_tAB9727E0C937894E19032D575D98A8A9AB5EE47D_il2cpp_TypeInfo_var);
		NullCheck(L_5);
		Func_2__ctor_m247D5044A4E1F518CA84A38B9A9F30E66BDD8184(L_5, L_4, (intptr_t)((void*)U3CU3Ec__DisplayClass33_0_U3CAddDeviceU3Eb__0_mC4557290A9C0C0D19B67630EC93225107C5A6E4F_RuntimeMethod_var), NULL);
		int32_t L_6;
		L_6 = Enumerable_Count_TisString_t_m817BB8D7A32098126CC975E91C64732B1DB8CFB0(L_3, L_5, Enumerable_Count_TisString_t_m817BB8D7A32098126CC975E91C64732B1DB8CFB0_RuntimeMethod_var);
		V_2 = (bool)((((int32_t)L_6) == ((int32_t)0))? 1 : 0);
		bool L_7 = V_2;
		if (!L_7)
		{
			goto IL_0070;
		}
	}
	{
		// if (!_remoteLayouts.TryGetValue(layout, out string json))
		Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_8 = __this->____remoteLayouts_9;
		U3CU3Ec__DisplayClass33_0_t7BB9C2C6DF625E4E7D58A039705AF481AA86BE1E* L_9 = V_0;
		NullCheck(L_9);
		String_t* L_10 = L_9->___layout_0;
		NullCheck(L_8);
		bool L_11;
		L_11 = Dictionary_2_TryGetValue_mA86D965CB5F74CE8675B7995C61945BEB6E594CB(L_8, L_10, (&V_3), Dictionary_2_TryGetValue_mA86D965CB5F74CE8675B7995C61945BEB6E594CB_RuntimeMethod_var);
		V_4 = (bool)((((int32_t)L_11) == ((int32_t)0))? 1 : 0);
		bool L_12 = V_4;
		if (!L_12)
		{
			goto IL_004e;
		}
	}
	{
		// throw new InvalidOperationException();
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_13 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		NullCheck(L_13);
		InvalidOperationException__ctor_m1BE9BD198B904AA1D94F4B10DA88077DFD44B7A5(L_13, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_13, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Receiver_AddDevice_m9A90B2BADC0E35A3EBA37E5012C9BD172A4B0380_RuntimeMethod_var)));
	}

IL_004e:
	{
		// base.RegisterControlLayout(json, layout);
		String_t* L_14 = V_3;
		U3CU3Ec__DisplayClass33_0_t7BB9C2C6DF625E4E7D58A039705AF481AA86BE1E* L_15 = V_0;
		NullCheck(L_15);
		String_t* L_16 = L_15->___layout_0;
		InputManager_RegisterControlLayout_m31948AFF22B3F6EF205746DE24EFFD703142610B(__this, L_14, L_16, (bool)0, NULL);
		// _registeredRemoteLayout.Add(layout);
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_17 = __this->____registeredRemoteLayout_10;
		U3CU3Ec__DisplayClass33_0_t7BB9C2C6DF625E4E7D58A039705AF481AA86BE1E* L_18 = V_0;
		NullCheck(L_18);
		String_t* L_19 = L_18->___layout_0;
		NullCheck(L_17);
		List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_inline(L_17, L_19, List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_RuntimeMethod_var);
	}

IL_0070:
	{
		// var device = base.AddDevice(layout, name, variants);
		U3CU3Ec__DisplayClass33_0_t7BB9C2C6DF625E4E7D58A039705AF481AA86BE1E* L_20 = V_0;
		NullCheck(L_20);
		String_t* L_21 = L_20->___layout_0;
		String_t* L_22 = ___name1;
		String_t* L_23 = ___variants2;
		InputDevice_t8BCF67533E872A75779C24C93D1D7085B72D364B* L_24;
		L_24 = InputManager_AddDevice_m32F793DBC05A2944CB84558E37B39849C2079132(__this, L_21, L_22, L_23, NULL);
		V_1 = L_24;
		// _remoteDevices.Add(device);
		List_1_t7228B1F3AC7E48407209173C7BF2B2AFBED5A4F7* L_25 = __this->____remoteDevices_8;
		InputDevice_t8BCF67533E872A75779C24C93D1D7085B72D364B* L_26 = V_1;
		NullCheck(L_25);
		List_1_Add_m3EA74E0C476E0197F84637414E722866A8EE48E1_inline(L_25, L_26, List_1_Add_m3EA74E0C476E0197F84637414E722866A8EE48E1_RuntimeMethod_var);
		// onDeviceChange?.Invoke(device, InputDeviceChange.Added);
		Action_2_tB79528C85CFEF7DFF52C575DDAA398D2FE6BC333* L_27 = __this->___onDeviceChange_5;
		Action_2_tB79528C85CFEF7DFF52C575DDAA398D2FE6BC333* L_28 = L_27;
		G_B5_0 = L_28;
		if (L_28)
		{
			G_B6_0 = L_28;
			goto IL_0098;
		}
	}
	{
		goto IL_00a0;
	}

IL_0098:
	{
		InputDevice_t8BCF67533E872A75779C24C93D1D7085B72D364B* L_29 = V_1;
		NullCheck(G_B6_0);
		Action_2_Invoke_m8A62316C5AC7B28A61A46872AE21A8EBFA916850_inline(G_B6_0, L_29, 0, NULL);
	}

IL_00a0:
	{
		// return device;
		InputDevice_t8BCF67533E872A75779C24C93D1D7085B72D364B* L_30 = V_1;
		V_5 = L_30;
		goto IL_00a5;
	}

IL_00a5:
	{
		// }
		InputDevice_t8BCF67533E872A75779C24C93D1D7085B72D364B* L_31 = V_5;
		return L_31;
	}
}
// System.Void Unity.RenderStreaming.InputSystem.Receiver::RemoveDevice(UnityEngine.InputSystem.InputDevice)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Receiver_RemoveDevice_m90005BAD3D9AFBC6ECFD8A43AA99E1D9BCC119F1 (Receiver_t3693E96FFA61969B9B9F01B3F38E241C176E8B13* __this, InputDevice_t8BCF67533E872A75779C24C93D1D7085B72D364B* ___device0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Remove_m2BC507498E26A6E5D158CC7FB8EDEDDFC6BDC647_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	Action_2_tB79528C85CFEF7DFF52C575DDAA398D2FE6BC333* G_B2_0 = NULL;
	Action_2_tB79528C85CFEF7DFF52C575DDAA398D2FE6BC333* G_B1_0 = NULL;
	{
		// base.RemoveDevice(device);
		InputDevice_t8BCF67533E872A75779C24C93D1D7085B72D364B* L_0 = ___device0;
		InputManager_RemoveDevice_mD6457FACC78EB49B92209003DC40E2E5B9D05EE4(__this, L_0, NULL);
		// _remoteDevices.Remove(device);
		List_1_t7228B1F3AC7E48407209173C7BF2B2AFBED5A4F7* L_1 = __this->____remoteDevices_8;
		InputDevice_t8BCF67533E872A75779C24C93D1D7085B72D364B* L_2 = ___device0;
		NullCheck(L_1);
		bool L_3;
		L_3 = List_1_Remove_m2BC507498E26A6E5D158CC7FB8EDEDDFC6BDC647(L_1, L_2, List_1_Remove_m2BC507498E26A6E5D158CC7FB8EDEDDFC6BDC647_RuntimeMethod_var);
		// onDeviceChange?.Invoke(device, InputDeviceChange.Removed);
		Action_2_tB79528C85CFEF7DFF52C575DDAA398D2FE6BC333* L_4 = __this->___onDeviceChange_5;
		Action_2_tB79528C85CFEF7DFF52C575DDAA398D2FE6BC333* L_5 = L_4;
		G_B1_0 = L_5;
		if (L_5)
		{
			G_B2_0 = L_5;
			goto IL_0022;
		}
	}
	{
		goto IL_002a;
	}

IL_0022:
	{
		InputDevice_t8BCF67533E872A75779C24C93D1D7085B72D364B* L_6 = ___device0;
		NullCheck(G_B2_0);
		Action_2_Invoke_m8A62316C5AC7B28A61A46872AE21A8EBFA916850_inline(G_B2_0, L_6, 1, NULL);
	}

IL_002a:
	{
		// }
		return;
	}
}
// System.Void Unity.RenderStreaming.InputSystem.Receiver::RegisterControlLayout(System.String,System.String,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Receiver_RegisterControlLayout_mDB0AB34E503B5F7B69773293E76C2F39EA89436F (Receiver_t3693E96FFA61969B9B9F01B3F38E241C176E8B13* __this, String_t* ___json0, String_t* ___name1, bool ___isOverride2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_Add_mC78C20D5901C87AAC38F37C906FAB6946BDE5F13_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	Action_2_t4797B88C63509F2EE4385D6DABE6A4B5AD5393F7* G_B2_0 = NULL;
	Action_2_t4797B88C63509F2EE4385D6DABE6A4B5AD5393F7* G_B1_0 = NULL;
	{
		// _remoteLayouts.Add(name, json);
		Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_0 = __this->____remoteLayouts_9;
		String_t* L_1 = ___name1;
		String_t* L_2 = ___json0;
		NullCheck(L_0);
		Dictionary_2_Add_mC78C20D5901C87AAC38F37C906FAB6946BDE5F13(L_0, L_1, L_2, Dictionary_2_Add_mC78C20D5901C87AAC38F37C906FAB6946BDE5F13_RuntimeMethod_var);
		// onLayoutChange?.Invoke(name, InputControlLayoutChange.Added);
		Action_2_t4797B88C63509F2EE4385D6DABE6A4B5AD5393F7* L_3 = __this->___onLayoutChange_6;
		Action_2_t4797B88C63509F2EE4385D6DABE6A4B5AD5393F7* L_4 = L_3;
		G_B1_0 = L_4;
		if (L_4)
		{
			G_B2_0 = L_4;
			goto IL_001b;
		}
	}
	{
		goto IL_0023;
	}

IL_001b:
	{
		String_t* L_5 = ___name1;
		NullCheck(G_B2_0);
		Action_2_Invoke_m830CD74C20E8D1464D4DCA824B0371008CFE2897_inline(G_B2_0, L_5, 0, NULL);
	}

IL_0023:
	{
		// }
		return;
	}
}
// System.Void Unity.RenderStreaming.InputSystem.Receiver::RemoveLayout(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Receiver_RemoveLayout_m631BC599FCAA61F3DE68BA7D73FE54E469A13208 (Receiver_t3693E96FFA61969B9B9F01B3F38E241C176E8B13* __this, String_t* ___name0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_Remove_mD816BB81544F3B37050A72FD7BA22E6A3D53BBFC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Contains_m359254483BE42CAD4DCA8FBAFB87473FB4CF00E1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Remove_mD9E8CFB6777A99046B3C0195F7343FE771A2E99D_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	Action_2_t4797B88C63509F2EE4385D6DABE6A4B5AD5393F7* G_B4_0 = NULL;
	Action_2_t4797B88C63509F2EE4385D6DABE6A4B5AD5393F7* G_B3_0 = NULL;
	{
		// if(_registeredRemoteLayout.Contains(name))
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_0 = __this->____registeredRemoteLayout_10;
		String_t* L_1 = ___name0;
		NullCheck(L_0);
		bool L_2;
		L_2 = List_1_Contains_m359254483BE42CAD4DCA8FBAFB87473FB4CF00E1(L_0, L_1, List_1_Contains_m359254483BE42CAD4DCA8FBAFB87473FB4CF00E1_RuntimeMethod_var);
		V_0 = L_2;
		bool L_3 = V_0;
		if (!L_3)
		{
			goto IL_0028;
		}
	}
	{
		// base.RemoveLayout(name);
		String_t* L_4 = ___name0;
		InputManager_RemoveLayout_mF7A23065EADEEA7D127D2856858E0D1D77B4F63C(__this, L_4, NULL);
		// _registeredRemoteLayout.Remove(name);
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_5 = __this->____registeredRemoteLayout_10;
		String_t* L_6 = ___name0;
		NullCheck(L_5);
		bool L_7;
		L_7 = List_1_Remove_mD9E8CFB6777A99046B3C0195F7343FE771A2E99D(L_5, L_6, List_1_Remove_mD9E8CFB6777A99046B3C0195F7343FE771A2E99D_RuntimeMethod_var);
	}

IL_0028:
	{
		// _remoteLayouts.Remove(name);
		Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_8 = __this->____remoteLayouts_9;
		String_t* L_9 = ___name0;
		NullCheck(L_8);
		bool L_10;
		L_10 = Dictionary_2_Remove_mD816BB81544F3B37050A72FD7BA22E6A3D53BBFC(L_8, L_9, Dictionary_2_Remove_mD816BB81544F3B37050A72FD7BA22E6A3D53BBFC_RuntimeMethod_var);
		// onLayoutChange?.Invoke(name, InputControlLayoutChange.Removed);
		Action_2_t4797B88C63509F2EE4385D6DABE6A4B5AD5393F7* L_11 = __this->___onLayoutChange_6;
		Action_2_t4797B88C63509F2EE4385D6DABE6A4B5AD5393F7* L_12 = L_11;
		G_B3_0 = L_12;
		if (L_12)
		{
			G_B4_0 = L_12;
			goto IL_0041;
		}
	}
	{
		goto IL_0049;
	}

IL_0041:
	{
		String_t* L_13 = ___name0;
		NullCheck(G_B4_0);
		Action_2_Invoke_m830CD74C20E8D1464D4DCA824B0371008CFE2897_inline(G_B4_0, L_13, 1, NULL);
	}

IL_0049:
	{
		// }
		return;
	}
}
// System.Void Unity.RenderStreaming.InputSystem.Receiver::QueueEvent(UnityEngine.InputSystem.LowLevel.InputEventPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Receiver_QueueEvent_m108F5D94ADA8B97B47608B48EDA9757285D4018D (Receiver_t3693E96FFA61969B9B9F01B3F38E241C176E8B13* __this, InputEventPtr_tC2A58521C9AFB479CC88789D5E0797D817C721C0 ___ptr0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InputEventPtr_IsA_TisStateEvent_tB93D5F08B084A2BC9FFC71B084409DBBD2516C0F_mA9BDDBB4B234A924F74AB0343F6F3CFDBFF70327_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InputSystem_t4120CA4FE7DCFD56AF9391933FC3F1F485350164_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Pointer_t800EF2832B62E889AC9C182E3B18098AF220E32A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	InputDevice_t8BCF67533E872A75779C24C93D1D7085B72D364B* V_0 = NULL;
	bool V_1 = false;
	int32_t G_B4_0 = 0;
	{
		// InputDevice device = InputSystem.GetDeviceById(ptr.deviceId);
		int32_t L_0;
		L_0 = InputEventPtr_get_deviceId_mD8B68EDC37D90A69EE67A47B3E17F4D80D4620D3((&___ptr0), NULL);
		il2cpp_codegen_runtime_class_init_inline(InputSystem_t4120CA4FE7DCFD56AF9391933FC3F1F485350164_il2cpp_TypeInfo_var);
		InputDevice_t8BCF67533E872A75779C24C93D1D7085B72D364B* L_1;
		L_1 = InputSystem_GetDeviceById_m0EC67530A5BB503DD302D95F1F48808D14DA3976(L_0, NULL);
		V_0 = L_1;
		// if (EnableInputPositionCorrection && device is Pointer && ptr.IsA<StateEvent>())
		bool L_2;
		L_2 = Receiver_get_EnableInputPositionCorrection_mCA7935398FB989440C50AA6452DB95065821FFB5_inline(__this, NULL);
		if (!L_2)
		{
			goto IL_0027;
		}
	}
	{
		InputDevice_t8BCF67533E872A75779C24C93D1D7085B72D364B* L_3 = V_0;
		if (!((Pointer_t800EF2832B62E889AC9C182E3B18098AF220E32A*)IsInstClass((RuntimeObject*)L_3, Pointer_t800EF2832B62E889AC9C182E3B18098AF220E32A_il2cpp_TypeInfo_var)))
		{
			goto IL_0027;
		}
	}
	{
		bool L_4;
		L_4 = InputEventPtr_IsA_TisStateEvent_tB93D5F08B084A2BC9FFC71B084409DBBD2516C0F_mA9BDDBB4B234A924F74AB0343F6F3CFDBFF70327((&___ptr0), InputEventPtr_IsA_TisStateEvent_tB93D5F08B084A2BC9FFC71B084409DBBD2516C0F_mA9BDDBB4B234A924F74AB0343F6F3CFDBFF70327_RuntimeMethod_var);
		G_B4_0 = ((int32_t)(L_4));
		goto IL_0028;
	}

IL_0027:
	{
		G_B4_0 = 0;
	}

IL_0028:
	{
		V_1 = (bool)G_B4_0;
		bool L_5 = V_1;
		if (!L_5)
		{
			goto IL_003e;
		}
	}
	{
		// _corrector.Invoke(ptr, device);
		InputPositionCorrector_tCF23AF130F6DFC2147C5A591578CB80F6C6475C2* L_6 = __this->____corrector_11;
		InputEventPtr_tC2A58521C9AFB479CC88789D5E0797D817C721C0 L_7 = ___ptr0;
		InputDevice_t8BCF67533E872A75779C24C93D1D7085B72D364B* L_8 = V_0;
		NullCheck(L_6);
		InputPositionCorrector_Invoke_mD19A3A5E1AA6373557DD2C8FCC2A0528C9EE3E70(L_6, L_7, L_8, NULL);
		goto IL_0048;
	}

IL_003e:
	{
		// base.QueueEvent(ptr);
		InputEventPtr_tC2A58521C9AFB479CC88789D5E0797D817C721C0 L_9 = ___ptr0;
		InputManager_QueueEvent_mE590BB70509448F1966D95DFB29F4988034FAC35(__this, L_9, NULL);
	}

IL_0048:
	{
		// }
		return;
	}
}
// System.Void Unity.RenderStreaming.InputSystem.Receiver::SetInputRange(UnityEngine.Rect,UnityEngine.Rect)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Receiver_SetInputRange_m9F848848D150A579972122E0BFEC5791AE7600F0 (Receiver_t3693E96FFA61969B9B9F01B3F38E241C176E8B13* __this, Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D ___inputRegion0, Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D ___outputRegion1, const RuntimeMethod* method) 
{
	{
		// _corrector.inputRegion = inputRegion;
		InputPositionCorrector_tCF23AF130F6DFC2147C5A591578CB80F6C6475C2* L_0 = __this->____corrector_11;
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D L_1 = ___inputRegion0;
		NullCheck(L_0);
		InputPositionCorrector_set_inputRegion_mE164B44E3B0C6507D5BE260A5C8824AE80817B23_inline(L_0, L_1, NULL);
		// _corrector.outputRegion = outputRegion;
		InputPositionCorrector_tCF23AF130F6DFC2147C5A591578CB80F6C6475C2* L_2 = __this->____corrector_11;
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D L_3 = ___outputRegion1;
		NullCheck(L_2);
		InputPositionCorrector_set_outputRegion_mABDE372C024DBC81C748484D0FCBD9FAC2EE275E_inline(L_2, L_3, NULL);
		// }
		return;
	}
}
// System.Void Unity.RenderStreaming.InputSystem.Receiver::<.ctor>b__19_0(UnityEngine.InputSystem.LowLevel.InputEventPtr,UnityEngine.InputSystem.InputDevice)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Receiver_U3C_ctorU3Eb__19_0_m9ADAF334C7EA1BA4F2AB721FF8B676803F8BDCB1 (Receiver_t3693E96FFA61969B9B9F01B3F38E241C176E8B13* __this, InputEventPtr_tC2A58521C9AFB479CC88789D5E0797D817C721C0 ___ptr0, InputDevice_t8BCF67533E872A75779C24C93D1D7085B72D364B* ___device1, const RuntimeMethod* method) 
{
	{
		// _onEvent = (InputEventPtr ptr, InputDevice device) => { base.QueueEvent(ptr); };
		InputEventPtr_tC2A58521C9AFB479CC88789D5E0797D817C721C0 L_0 = ___ptr0;
		InputManager_QueueEvent_mE590BB70509448F1966D95DFB29F4988034FAC35(__this, L_0, NULL);
		// _onEvent = (InputEventPtr ptr, InputDevice device) => { base.QueueEvent(ptr); };
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
// System.Void Unity.RenderStreaming.InputSystem.Receiver/<>c__DisplayClass33_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass33_0__ctor_m2D0B14E37D400652F19B67365455CFB759F8C8CD (U3CU3Ec__DisplayClass33_0_t7BB9C2C6DF625E4E7D58A039705AF481AA86BE1E* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Boolean Unity.RenderStreaming.InputSystem.Receiver/<>c__DisplayClass33_0::<AddDevice>b__0(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CU3Ec__DisplayClass33_0_U3CAddDeviceU3Eb__0_mC4557290A9C0C0D19B67630EC93225107C5A6E4F (U3CU3Ec__DisplayClass33_0_t7BB9C2C6DF625E4E7D58A039705AF481AA86BE1E* __this, String_t* ____0, const RuntimeMethod* method) 
{
	{
		// if (InputSystem.ListLayouts().Count(_ => _ == layout) == 0)
		String_t* L_0 = ____0;
		String_t* L_1 = __this->___layout_0;
		bool L_2;
		L_2 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_0, L_1, NULL);
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
// System.Void Unity.RenderStreaming.InputSystem.Sender::add_onEvent(System.Action`2<UnityEngine.InputSystem.LowLevel.InputEventPtr,UnityEngine.InputSystem.InputDevice>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Sender_add_onEvent_mAA8409F28E4DC8AA9E15DFA239A78F5DEC5A7F5B (Sender_t234F1DB016429A45DA2E9C7DF59EA1A57E1A83BF* __this, Action_2_t4943DD8C32CAB983950535CEF3BABA85DF8C9AAA* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_2_t4943DD8C32CAB983950535CEF3BABA85DF8C9AAA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Action_2_t4943DD8C32CAB983950535CEF3BABA85DF8C9AAA* V_0 = NULL;
	Action_2_t4943DD8C32CAB983950535CEF3BABA85DF8C9AAA* V_1 = NULL;
	Action_2_t4943DD8C32CAB983950535CEF3BABA85DF8C9AAA* V_2 = NULL;
	{
		Action_2_t4943DD8C32CAB983950535CEF3BABA85DF8C9AAA* L_0 = __this->___onEvent_4;
		V_0 = L_0;
	}

IL_0007:
	{
		Action_2_t4943DD8C32CAB983950535CEF3BABA85DF8C9AAA* L_1 = V_0;
		V_1 = L_1;
		Action_2_t4943DD8C32CAB983950535CEF3BABA85DF8C9AAA* L_2 = V_1;
		Action_2_t4943DD8C32CAB983950535CEF3BABA85DF8C9AAA* L_3 = ___value0;
		Delegate_t* L_4;
		L_4 = Delegate_Combine_m8B9D24CED35033C7FC56501DFE650F5CB7FF012C(L_2, L_3, NULL);
		V_2 = ((Action_2_t4943DD8C32CAB983950535CEF3BABA85DF8C9AAA*)Castclass((RuntimeObject*)L_4, Action_2_t4943DD8C32CAB983950535CEF3BABA85DF8C9AAA_il2cpp_TypeInfo_var));
		Action_2_t4943DD8C32CAB983950535CEF3BABA85DF8C9AAA** L_5 = (&__this->___onEvent_4);
		Action_2_t4943DD8C32CAB983950535CEF3BABA85DF8C9AAA* L_6 = V_2;
		Action_2_t4943DD8C32CAB983950535CEF3BABA85DF8C9AAA* L_7 = V_1;
		Action_2_t4943DD8C32CAB983950535CEF3BABA85DF8C9AAA* L_8;
		L_8 = InterlockedCompareExchangeImpl<Action_2_t4943DD8C32CAB983950535CEF3BABA85DF8C9AAA*>(L_5, L_6, L_7);
		V_0 = L_8;
		Action_2_t4943DD8C32CAB983950535CEF3BABA85DF8C9AAA* L_9 = V_0;
		Action_2_t4943DD8C32CAB983950535CEF3BABA85DF8C9AAA* L_10 = V_1;
		if ((!(((RuntimeObject*)(Action_2_t4943DD8C32CAB983950535CEF3BABA85DF8C9AAA*)L_9) == ((RuntimeObject*)(Action_2_t4943DD8C32CAB983950535CEF3BABA85DF8C9AAA*)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void Unity.RenderStreaming.InputSystem.Sender::remove_onEvent(System.Action`2<UnityEngine.InputSystem.LowLevel.InputEventPtr,UnityEngine.InputSystem.InputDevice>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Sender_remove_onEvent_mAE70A4D3BF6F2252EE8A4149A3F2D13CF9B9555C (Sender_t234F1DB016429A45DA2E9C7DF59EA1A57E1A83BF* __this, Action_2_t4943DD8C32CAB983950535CEF3BABA85DF8C9AAA* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_2_t4943DD8C32CAB983950535CEF3BABA85DF8C9AAA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Action_2_t4943DD8C32CAB983950535CEF3BABA85DF8C9AAA* V_0 = NULL;
	Action_2_t4943DD8C32CAB983950535CEF3BABA85DF8C9AAA* V_1 = NULL;
	Action_2_t4943DD8C32CAB983950535CEF3BABA85DF8C9AAA* V_2 = NULL;
	{
		Action_2_t4943DD8C32CAB983950535CEF3BABA85DF8C9AAA* L_0 = __this->___onEvent_4;
		V_0 = L_0;
	}

IL_0007:
	{
		Action_2_t4943DD8C32CAB983950535CEF3BABA85DF8C9AAA* L_1 = V_0;
		V_1 = L_1;
		Action_2_t4943DD8C32CAB983950535CEF3BABA85DF8C9AAA* L_2 = V_1;
		Action_2_t4943DD8C32CAB983950535CEF3BABA85DF8C9AAA* L_3 = ___value0;
		Delegate_t* L_4;
		L_4 = Delegate_Remove_m40506877934EC1AD4ADAE57F5E97AF0BC0F96116(L_2, L_3, NULL);
		V_2 = ((Action_2_t4943DD8C32CAB983950535CEF3BABA85DF8C9AAA*)Castclass((RuntimeObject*)L_4, Action_2_t4943DD8C32CAB983950535CEF3BABA85DF8C9AAA_il2cpp_TypeInfo_var));
		Action_2_t4943DD8C32CAB983950535CEF3BABA85DF8C9AAA** L_5 = (&__this->___onEvent_4);
		Action_2_t4943DD8C32CAB983950535CEF3BABA85DF8C9AAA* L_6 = V_2;
		Action_2_t4943DD8C32CAB983950535CEF3BABA85DF8C9AAA* L_7 = V_1;
		Action_2_t4943DD8C32CAB983950535CEF3BABA85DF8C9AAA* L_8;
		L_8 = InterlockedCompareExchangeImpl<Action_2_t4943DD8C32CAB983950535CEF3BABA85DF8C9AAA*>(L_5, L_6, L_7);
		V_0 = L_8;
		Action_2_t4943DD8C32CAB983950535CEF3BABA85DF8C9AAA* L_9 = V_0;
		Action_2_t4943DD8C32CAB983950535CEF3BABA85DF8C9AAA* L_10 = V_1;
		if ((!(((RuntimeObject*)(Action_2_t4943DD8C32CAB983950535CEF3BABA85DF8C9AAA*)L_9) == ((RuntimeObject*)(Action_2_t4943DD8C32CAB983950535CEF3BABA85DF8C9AAA*)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void Unity.RenderStreaming.InputSystem.Sender::add_onDeviceChange(System.Action`2<UnityEngine.InputSystem.InputDevice,UnityEngine.InputSystem.InputDeviceChange>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Sender_add_onDeviceChange_mD42F769B105A81DE6D9A1C027B768EA9DC3B0C3A (Sender_t234F1DB016429A45DA2E9C7DF59EA1A57E1A83BF* __this, Action_2_tB79528C85CFEF7DFF52C575DDAA398D2FE6BC333* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_2_tB79528C85CFEF7DFF52C575DDAA398D2FE6BC333_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Action_2_tB79528C85CFEF7DFF52C575DDAA398D2FE6BC333* V_0 = NULL;
	Action_2_tB79528C85CFEF7DFF52C575DDAA398D2FE6BC333* V_1 = NULL;
	Action_2_tB79528C85CFEF7DFF52C575DDAA398D2FE6BC333* V_2 = NULL;
	{
		Action_2_tB79528C85CFEF7DFF52C575DDAA398D2FE6BC333* L_0 = __this->___onDeviceChange_5;
		V_0 = L_0;
	}

IL_0007:
	{
		Action_2_tB79528C85CFEF7DFF52C575DDAA398D2FE6BC333* L_1 = V_0;
		V_1 = L_1;
		Action_2_tB79528C85CFEF7DFF52C575DDAA398D2FE6BC333* L_2 = V_1;
		Action_2_tB79528C85CFEF7DFF52C575DDAA398D2FE6BC333* L_3 = ___value0;
		Delegate_t* L_4;
		L_4 = Delegate_Combine_m8B9D24CED35033C7FC56501DFE650F5CB7FF012C(L_2, L_3, NULL);
		V_2 = ((Action_2_tB79528C85CFEF7DFF52C575DDAA398D2FE6BC333*)Castclass((RuntimeObject*)L_4, Action_2_tB79528C85CFEF7DFF52C575DDAA398D2FE6BC333_il2cpp_TypeInfo_var));
		Action_2_tB79528C85CFEF7DFF52C575DDAA398D2FE6BC333** L_5 = (&__this->___onDeviceChange_5);
		Action_2_tB79528C85CFEF7DFF52C575DDAA398D2FE6BC333* L_6 = V_2;
		Action_2_tB79528C85CFEF7DFF52C575DDAA398D2FE6BC333* L_7 = V_1;
		Action_2_tB79528C85CFEF7DFF52C575DDAA398D2FE6BC333* L_8;
		L_8 = InterlockedCompareExchangeImpl<Action_2_tB79528C85CFEF7DFF52C575DDAA398D2FE6BC333*>(L_5, L_6, L_7);
		V_0 = L_8;
		Action_2_tB79528C85CFEF7DFF52C575DDAA398D2FE6BC333* L_9 = V_0;
		Action_2_tB79528C85CFEF7DFF52C575DDAA398D2FE6BC333* L_10 = V_1;
		if ((!(((RuntimeObject*)(Action_2_tB79528C85CFEF7DFF52C575DDAA398D2FE6BC333*)L_9) == ((RuntimeObject*)(Action_2_tB79528C85CFEF7DFF52C575DDAA398D2FE6BC333*)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void Unity.RenderStreaming.InputSystem.Sender::remove_onDeviceChange(System.Action`2<UnityEngine.InputSystem.InputDevice,UnityEngine.InputSystem.InputDeviceChange>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Sender_remove_onDeviceChange_m96139DF077EE012C99D6415B862A98227DA6A04B (Sender_t234F1DB016429A45DA2E9C7DF59EA1A57E1A83BF* __this, Action_2_tB79528C85CFEF7DFF52C575DDAA398D2FE6BC333* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_2_tB79528C85CFEF7DFF52C575DDAA398D2FE6BC333_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Action_2_tB79528C85CFEF7DFF52C575DDAA398D2FE6BC333* V_0 = NULL;
	Action_2_tB79528C85CFEF7DFF52C575DDAA398D2FE6BC333* V_1 = NULL;
	Action_2_tB79528C85CFEF7DFF52C575DDAA398D2FE6BC333* V_2 = NULL;
	{
		Action_2_tB79528C85CFEF7DFF52C575DDAA398D2FE6BC333* L_0 = __this->___onDeviceChange_5;
		V_0 = L_0;
	}

IL_0007:
	{
		Action_2_tB79528C85CFEF7DFF52C575DDAA398D2FE6BC333* L_1 = V_0;
		V_1 = L_1;
		Action_2_tB79528C85CFEF7DFF52C575DDAA398D2FE6BC333* L_2 = V_1;
		Action_2_tB79528C85CFEF7DFF52C575DDAA398D2FE6BC333* L_3 = ___value0;
		Delegate_t* L_4;
		L_4 = Delegate_Remove_m40506877934EC1AD4ADAE57F5E97AF0BC0F96116(L_2, L_3, NULL);
		V_2 = ((Action_2_tB79528C85CFEF7DFF52C575DDAA398D2FE6BC333*)Castclass((RuntimeObject*)L_4, Action_2_tB79528C85CFEF7DFF52C575DDAA398D2FE6BC333_il2cpp_TypeInfo_var));
		Action_2_tB79528C85CFEF7DFF52C575DDAA398D2FE6BC333** L_5 = (&__this->___onDeviceChange_5);
		Action_2_tB79528C85CFEF7DFF52C575DDAA398D2FE6BC333* L_6 = V_2;
		Action_2_tB79528C85CFEF7DFF52C575DDAA398D2FE6BC333* L_7 = V_1;
		Action_2_tB79528C85CFEF7DFF52C575DDAA398D2FE6BC333* L_8;
		L_8 = InterlockedCompareExchangeImpl<Action_2_tB79528C85CFEF7DFF52C575DDAA398D2FE6BC333*>(L_5, L_6, L_7);
		V_0 = L_8;
		Action_2_tB79528C85CFEF7DFF52C575DDAA398D2FE6BC333* L_9 = V_0;
		Action_2_tB79528C85CFEF7DFF52C575DDAA398D2FE6BC333* L_10 = V_1;
		if ((!(((RuntimeObject*)(Action_2_tB79528C85CFEF7DFF52C575DDAA398D2FE6BC333*)L_9) == ((RuntimeObject*)(Action_2_tB79528C85CFEF7DFF52C575DDAA398D2FE6BC333*)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void Unity.RenderStreaming.InputSystem.Sender::add_onLayoutChange(System.Action`2<System.String,UnityEngine.InputSystem.InputControlLayoutChange>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Sender_add_onLayoutChange_mFDFB3D956C3609AB576D81BBA01A435621668C8F (Sender_t234F1DB016429A45DA2E9C7DF59EA1A57E1A83BF* __this, Action_2_t4797B88C63509F2EE4385D6DABE6A4B5AD5393F7* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_2_t4797B88C63509F2EE4385D6DABE6A4B5AD5393F7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Action_2_t4797B88C63509F2EE4385D6DABE6A4B5AD5393F7* V_0 = NULL;
	Action_2_t4797B88C63509F2EE4385D6DABE6A4B5AD5393F7* V_1 = NULL;
	Action_2_t4797B88C63509F2EE4385D6DABE6A4B5AD5393F7* V_2 = NULL;
	{
		Action_2_t4797B88C63509F2EE4385D6DABE6A4B5AD5393F7* L_0 = __this->___onLayoutChange_6;
		V_0 = L_0;
	}

IL_0007:
	{
		Action_2_t4797B88C63509F2EE4385D6DABE6A4B5AD5393F7* L_1 = V_0;
		V_1 = L_1;
		Action_2_t4797B88C63509F2EE4385D6DABE6A4B5AD5393F7* L_2 = V_1;
		Action_2_t4797B88C63509F2EE4385D6DABE6A4B5AD5393F7* L_3 = ___value0;
		Delegate_t* L_4;
		L_4 = Delegate_Combine_m8B9D24CED35033C7FC56501DFE650F5CB7FF012C(L_2, L_3, NULL);
		V_2 = ((Action_2_t4797B88C63509F2EE4385D6DABE6A4B5AD5393F7*)Castclass((RuntimeObject*)L_4, Action_2_t4797B88C63509F2EE4385D6DABE6A4B5AD5393F7_il2cpp_TypeInfo_var));
		Action_2_t4797B88C63509F2EE4385D6DABE6A4B5AD5393F7** L_5 = (&__this->___onLayoutChange_6);
		Action_2_t4797B88C63509F2EE4385D6DABE6A4B5AD5393F7* L_6 = V_2;
		Action_2_t4797B88C63509F2EE4385D6DABE6A4B5AD5393F7* L_7 = V_1;
		Action_2_t4797B88C63509F2EE4385D6DABE6A4B5AD5393F7* L_8;
		L_8 = InterlockedCompareExchangeImpl<Action_2_t4797B88C63509F2EE4385D6DABE6A4B5AD5393F7*>(L_5, L_6, L_7);
		V_0 = L_8;
		Action_2_t4797B88C63509F2EE4385D6DABE6A4B5AD5393F7* L_9 = V_0;
		Action_2_t4797B88C63509F2EE4385D6DABE6A4B5AD5393F7* L_10 = V_1;
		if ((!(((RuntimeObject*)(Action_2_t4797B88C63509F2EE4385D6DABE6A4B5AD5393F7*)L_9) == ((RuntimeObject*)(Action_2_t4797B88C63509F2EE4385D6DABE6A4B5AD5393F7*)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void Unity.RenderStreaming.InputSystem.Sender::remove_onLayoutChange(System.Action`2<System.String,UnityEngine.InputSystem.InputControlLayoutChange>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Sender_remove_onLayoutChange_m7A7F28FCF4A106B31CD7CC4575CF8CC2E055359A (Sender_t234F1DB016429A45DA2E9C7DF59EA1A57E1A83BF* __this, Action_2_t4797B88C63509F2EE4385D6DABE6A4B5AD5393F7* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_2_t4797B88C63509F2EE4385D6DABE6A4B5AD5393F7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Action_2_t4797B88C63509F2EE4385D6DABE6A4B5AD5393F7* V_0 = NULL;
	Action_2_t4797B88C63509F2EE4385D6DABE6A4B5AD5393F7* V_1 = NULL;
	Action_2_t4797B88C63509F2EE4385D6DABE6A4B5AD5393F7* V_2 = NULL;
	{
		Action_2_t4797B88C63509F2EE4385D6DABE6A4B5AD5393F7* L_0 = __this->___onLayoutChange_6;
		V_0 = L_0;
	}

IL_0007:
	{
		Action_2_t4797B88C63509F2EE4385D6DABE6A4B5AD5393F7* L_1 = V_0;
		V_1 = L_1;
		Action_2_t4797B88C63509F2EE4385D6DABE6A4B5AD5393F7* L_2 = V_1;
		Action_2_t4797B88C63509F2EE4385D6DABE6A4B5AD5393F7* L_3 = ___value0;
		Delegate_t* L_4;
		L_4 = Delegate_Remove_m40506877934EC1AD4ADAE57F5E97AF0BC0F96116(L_2, L_3, NULL);
		V_2 = ((Action_2_t4797B88C63509F2EE4385D6DABE6A4B5AD5393F7*)Castclass((RuntimeObject*)L_4, Action_2_t4797B88C63509F2EE4385D6DABE6A4B5AD5393F7_il2cpp_TypeInfo_var));
		Action_2_t4797B88C63509F2EE4385D6DABE6A4B5AD5393F7** L_5 = (&__this->___onLayoutChange_6);
		Action_2_t4797B88C63509F2EE4385D6DABE6A4B5AD5393F7* L_6 = V_2;
		Action_2_t4797B88C63509F2EE4385D6DABE6A4B5AD5393F7* L_7 = V_1;
		Action_2_t4797B88C63509F2EE4385D6DABE6A4B5AD5393F7* L_8;
		L_8 = InterlockedCompareExchangeImpl<Action_2_t4797B88C63509F2EE4385D6DABE6A4B5AD5393F7*>(L_5, L_6, L_7);
		V_0 = L_8;
		Action_2_t4797B88C63509F2EE4385D6DABE6A4B5AD5393F7* L_9 = V_0;
		Action_2_t4797B88C63509F2EE4385D6DABE6A4B5AD5393F7* L_10 = V_1;
		if ((!(((RuntimeObject*)(Action_2_t4797B88C63509F2EE4385D6DABE6A4B5AD5393F7*)L_9) == ((RuntimeObject*)(Action_2_t4797B88C63509F2EE4385D6DABE6A4B5AD5393F7*)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void Unity.RenderStreaming.InputSystem.Sender::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Sender__ctor_m9AFE011F74C595DFA05F76AF86E5DA5B97BF6048 (Sender_t234F1DB016429A45DA2E9C7DF59EA1A57E1A83BF* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_2_t4797B88C63509F2EE4385D6DABE6A4B5AD5393F7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_2_t4943DD8C32CAB983950535CEF3BABA85DF8C9AAA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_2_tB79528C85CFEF7DFF52C575DDAA398D2FE6BC333_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InputPositionCorrector_tCF23AF130F6DFC2147C5A591578CB80F6C6475C2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InputSystem_t4120CA4FE7DCFD56AF9391933FC3F1F485350164_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Sender_OnDeviceChange_m38E18E128487F5B5BF8E2DDC563A6FB880BD1C4C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Sender_OnEvent_mCCC4F229AAF58287A7D847336E6E7716B7972968_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Sender_OnLayoutChange_mEFD1A33A65C4CEF4C9A7AC16D4F4877149B5DD53_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Sender_U3C_ctorU3Eb__11_0_m49B33F3E980B1C6F2D348872BC508AEA29DE10DE_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public Sender()
		InputManager__ctor_mC25C0393A1E1F45E38536646098201190E414202(__this, NULL);
		// InputSystem.onEvent += OnEvent;
		il2cpp_codegen_runtime_class_init_inline(InputSystem_t4120CA4FE7DCFD56AF9391933FC3F1F485350164_il2cpp_TypeInfo_var);
		InputEventListener_tB0B541BC249BB696401201CF9DCAB4DFA1462B1D L_0;
		L_0 = InputSystem_get_onEvent_m69B71DB23BBEE4E244701D3A5A42D962C791AD18(NULL);
		Action_2_t4943DD8C32CAB983950535CEF3BABA85DF8C9AAA* L_1 = (Action_2_t4943DD8C32CAB983950535CEF3BABA85DF8C9AAA*)il2cpp_codegen_object_new(Action_2_t4943DD8C32CAB983950535CEF3BABA85DF8C9AAA_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		Action_2__ctor_m43B5BA62418FAB32773B12CEFF46A46855BF5B10(L_1, __this, (intptr_t)((void*)Sender_OnEvent_mCCC4F229AAF58287A7D847336E6E7716B7972968_RuntimeMethod_var), NULL);
		InputEventListener_tB0B541BC249BB696401201CF9DCAB4DFA1462B1D L_2;
		L_2 = InputEventListener_op_Addition_m122B39C12D9ADEDFA730C3B3A0B2530AA23172A2(L_0, L_1, NULL);
		InputSystem_set_onEvent_m6B177A8A8F08BE00B5409F0C3136BE803316A4B5(L_2, NULL);
		// InputSystem.onDeviceChange += OnDeviceChange;
		Action_2_tB79528C85CFEF7DFF52C575DDAA398D2FE6BC333* L_3 = (Action_2_tB79528C85CFEF7DFF52C575DDAA398D2FE6BC333*)il2cpp_codegen_object_new(Action_2_tB79528C85CFEF7DFF52C575DDAA398D2FE6BC333_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		Action_2__ctor_m23A4911D82F290811EDC6BFC315C339857526804(L_3, __this, (intptr_t)((void*)Sender_OnDeviceChange_m38E18E128487F5B5BF8E2DDC563A6FB880BD1C4C_RuntimeMethod_var), NULL);
		InputSystem_add_onDeviceChange_m029F558DF1CF7BE38BCC050CC4FBD6A9EA2C2C35(L_3, NULL);
		// InputSystem.onLayoutChange += OnLayoutChange;
		Action_2_t4797B88C63509F2EE4385D6DABE6A4B5AD5393F7* L_4 = (Action_2_t4797B88C63509F2EE4385D6DABE6A4B5AD5393F7*)il2cpp_codegen_object_new(Action_2_t4797B88C63509F2EE4385D6DABE6A4B5AD5393F7_il2cpp_TypeInfo_var);
		NullCheck(L_4);
		Action_2__ctor_m10175669DF3F5CF6A6EB1DAB1C4A5595AE7EC4FC(L_4, __this, (intptr_t)((void*)Sender_OnLayoutChange_mEFD1A33A65C4CEF4C9A7AC16D4F4877149B5DD53_RuntimeMethod_var), NULL);
		InputSystem_add_onLayoutChange_m25E8AC2E8593344CC7F04CF5975B398739C4A6D1(L_4, NULL);
		// _onEvent = (InputEventPtr ptr, InputDevice device) => { onEvent?.Invoke(ptr, device); };
		Action_2_t4943DD8C32CAB983950535CEF3BABA85DF8C9AAA* L_5 = (Action_2_t4943DD8C32CAB983950535CEF3BABA85DF8C9AAA*)il2cpp_codegen_object_new(Action_2_t4943DD8C32CAB983950535CEF3BABA85DF8C9AAA_il2cpp_TypeInfo_var);
		NullCheck(L_5);
		Action_2__ctor_m43B5BA62418FAB32773B12CEFF46A46855BF5B10(L_5, __this, (intptr_t)((void*)Sender_U3C_ctorU3Eb__11_0_m49B33F3E980B1C6F2D348872BC508AEA29DE10DE_RuntimeMethod_var), NULL);
		__this->____onEvent_8 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____onEvent_8), (void*)L_5);
		// _corrector = new InputPositionCorrector(_onEvent);
		Action_2_t4943DD8C32CAB983950535CEF3BABA85DF8C9AAA* L_6 = __this->____onEvent_8;
		InputPositionCorrector_tCF23AF130F6DFC2147C5A591578CB80F6C6475C2* L_7 = (InputPositionCorrector_tCF23AF130F6DFC2147C5A591578CB80F6C6475C2*)il2cpp_codegen_object_new(InputPositionCorrector_tCF23AF130F6DFC2147C5A591578CB80F6C6475C2_il2cpp_TypeInfo_var);
		NullCheck(L_7);
		InputPositionCorrector__ctor_m43B92A75880BD4090A136C5C4740F0FB363E5605(L_7, L_6, NULL);
		__this->____corrector_7 = L_7;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____corrector_7), (void*)L_7);
		// }
		return;
	}
}
// System.Void Unity.RenderStreaming.InputSystem.Sender::Finalize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Sender_Finalize_mFAE60927E77A444E4008A65F96BA4E4BC5C4113B (Sender_t234F1DB016429A45DA2E9C7DF59EA1A57E1A83BF* __this, const RuntimeMethod* method) 
{
	{
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_000b:
			{// begin finally (depth: 1)
				// }
				Object_Finalize_mC98C96301CCABFE00F1A7EF8E15DF507CACD42B2(__this, NULL);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			// this.Dispose();
			Sender_Dispose_mBED183044DB644BF5C8A7B4CDC9AC190D7F135F4(__this, NULL);
			goto IL_0013;
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0013:
	{
		// }
		return;
	}
}
// System.Void Unity.RenderStreaming.InputSystem.Sender::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Sender_Dispose_mBED183044DB644BF5C8A7B4CDC9AC190D7F135F4 (Sender_t234F1DB016429A45DA2E9C7DF59EA1A57E1A83BF* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_2_t4797B88C63509F2EE4385D6DABE6A4B5AD5393F7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_2_t4943DD8C32CAB983950535CEF3BABA85DF8C9AAA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_2_tB79528C85CFEF7DFF52C575DDAA398D2FE6BC333_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InputSystem_t4120CA4FE7DCFD56AF9391933FC3F1F485350164_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Sender_OnDeviceChange_m38E18E128487F5B5BF8E2DDC563A6FB880BD1C4C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Sender_OnEvent_mCCC4F229AAF58287A7D847336E6E7716B7972968_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Sender_OnLayoutChange_mEFD1A33A65C4CEF4C9A7AC16D4F4877149B5DD53_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// InputSystem.onEvent -= OnEvent;
		il2cpp_codegen_runtime_class_init_inline(InputSystem_t4120CA4FE7DCFD56AF9391933FC3F1F485350164_il2cpp_TypeInfo_var);
		InputEventListener_tB0B541BC249BB696401201CF9DCAB4DFA1462B1D L_0;
		L_0 = InputSystem_get_onEvent_m69B71DB23BBEE4E244701D3A5A42D962C791AD18(NULL);
		Action_2_t4943DD8C32CAB983950535CEF3BABA85DF8C9AAA* L_1 = (Action_2_t4943DD8C32CAB983950535CEF3BABA85DF8C9AAA*)il2cpp_codegen_object_new(Action_2_t4943DD8C32CAB983950535CEF3BABA85DF8C9AAA_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		Action_2__ctor_m43B5BA62418FAB32773B12CEFF46A46855BF5B10(L_1, __this, (intptr_t)((void*)Sender_OnEvent_mCCC4F229AAF58287A7D847336E6E7716B7972968_RuntimeMethod_var), NULL);
		InputEventListener_tB0B541BC249BB696401201CF9DCAB4DFA1462B1D L_2;
		L_2 = InputEventListener_op_Subtraction_m64F5559B543948C414AC7A0D3E7BA1FE95743328(L_0, L_1, NULL);
		InputSystem_set_onEvent_m6B177A8A8F08BE00B5409F0C3136BE803316A4B5(L_2, NULL);
		// InputSystem.onDeviceChange -= OnDeviceChange;
		Action_2_tB79528C85CFEF7DFF52C575DDAA398D2FE6BC333* L_3 = (Action_2_tB79528C85CFEF7DFF52C575DDAA398D2FE6BC333*)il2cpp_codegen_object_new(Action_2_tB79528C85CFEF7DFF52C575DDAA398D2FE6BC333_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		Action_2__ctor_m23A4911D82F290811EDC6BFC315C339857526804(L_3, __this, (intptr_t)((void*)Sender_OnDeviceChange_m38E18E128487F5B5BF8E2DDC563A6FB880BD1C4C_RuntimeMethod_var), NULL);
		InputSystem_remove_onDeviceChange_m772CFE26B5D7C6DBBC8F8DBA78E327EC4CF6C930(L_3, NULL);
		// InputSystem.onLayoutChange -= OnLayoutChange;
		Action_2_t4797B88C63509F2EE4385D6DABE6A4B5AD5393F7* L_4 = (Action_2_t4797B88C63509F2EE4385D6DABE6A4B5AD5393F7*)il2cpp_codegen_object_new(Action_2_t4797B88C63509F2EE4385D6DABE6A4B5AD5393F7_il2cpp_TypeInfo_var);
		NullCheck(L_4);
		Action_2__ctor_m10175669DF3F5CF6A6EB1DAB1C4A5595AE7EC4FC(L_4, __this, (intptr_t)((void*)Sender_OnLayoutChange_mEFD1A33A65C4CEF4C9A7AC16D4F4877149B5DD53_RuntimeMethod_var), NULL);
		InputSystem_remove_onLayoutChange_m6BB5F1037542DD9FA9669EB46926DEB9A7A3E2BF(L_4, NULL);
		// }
		return;
	}
}
// UnityEngine.InputSystem.Utilities.ReadOnlyArray`1<UnityEngine.InputSystem.InputDevice> Unity.RenderStreaming.InputSystem.Sender::get_devices()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ReadOnlyArray_1_t21E90B3F1DF1E9A2088EA0523F03C47910735BCA Sender_get_devices_mB0AE652DF6F6E3868FD27DFC07F65AE148A38F0F (Sender_t234F1DB016429A45DA2E9C7DF59EA1A57E1A83BF* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InputSystem_t4120CA4FE7DCFD56AF9391933FC3F1F485350164_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ReadOnlyArray_1_t21E90B3F1DF1E9A2088EA0523F03C47910735BCA V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// return InputSystem.devices;
		il2cpp_codegen_runtime_class_init_inline(InputSystem_t4120CA4FE7DCFD56AF9391933FC3F1F485350164_il2cpp_TypeInfo_var);
		ReadOnlyArray_1_t21E90B3F1DF1E9A2088EA0523F03C47910735BCA L_0;
		L_0 = InputSystem_get_devices_m92D52284ABC0BCE6CF46CB98EB870F2AA3890BF8(NULL);
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		// }
		ReadOnlyArray_1_t21E90B3F1DF1E9A2088EA0523F03C47910735BCA L_1 = V_0;
		return L_1;
	}
}
// System.Collections.Generic.IEnumerable`1<System.String> Unity.RenderStreaming.InputSystem.Sender::get_layouts()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Sender_get_layouts_m4B0193D1207579772C1077D9BD7504855E6B07EF (Sender_t234F1DB016429A45DA2E9C7DF59EA1A57E1A83BF* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InputSystem_t4120CA4FE7DCFD56AF9391933FC3F1F485350164_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	{
		// return InputSystem.ListLayouts();
		il2cpp_codegen_runtime_class_init_inline(InputSystem_t4120CA4FE7DCFD56AF9391933FC3F1F485350164_il2cpp_TypeInfo_var);
		RuntimeObject* L_0;
		L_0 = InputSystem_ListLayouts_m4DD7C02054680DDB24EBFEE504B70F630DF1E1CC(NULL);
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		// }
		RuntimeObject* L_1 = V_0;
		return L_1;
	}
}
// System.Void Unity.RenderStreaming.InputSystem.Sender::set_EnableInputPositionCorrection(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Sender_set_EnableInputPositionCorrection_m4EC601105F2A3D10563A491C2C5E009965C08290 (Sender_t234F1DB016429A45DA2E9C7DF59EA1A57E1A83BF* __this, bool ___value0, const RuntimeMethod* method) 
{
	{
		// public bool EnableInputPositionCorrection { set; get; }
		bool L_0 = ___value0;
		__this->___U3CEnableInputPositionCorrectionU3Ek__BackingField_9 = L_0;
		return;
	}
}
// System.Boolean Unity.RenderStreaming.InputSystem.Sender::get_EnableInputPositionCorrection()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Sender_get_EnableInputPositionCorrection_mA4AAA72D90EDB6CBAA9F67243CF4B66ECD23BEA6 (Sender_t234F1DB016429A45DA2E9C7DF59EA1A57E1A83BF* __this, const RuntimeMethod* method) 
{
	{
		// public bool EnableInputPositionCorrection { set; get; }
		bool L_0 = __this->___U3CEnableInputPositionCorrectionU3Ek__BackingField_9;
		return L_0;
	}
}
// System.Void Unity.RenderStreaming.InputSystem.Sender::SetInputRange(UnityEngine.Rect,UnityEngine.Rect)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Sender_SetInputRange_mF377BC1619973852F8813AFBB1DCA8CE3775F192 (Sender_t234F1DB016429A45DA2E9C7DF59EA1A57E1A83BF* __this, Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D ___inputRegion0, Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D ___outputRegion1, const RuntimeMethod* method) 
{
	{
		// _corrector.inputRegion = inputRegion;
		InputPositionCorrector_tCF23AF130F6DFC2147C5A591578CB80F6C6475C2* L_0 = __this->____corrector_7;
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D L_1 = ___inputRegion0;
		NullCheck(L_0);
		InputPositionCorrector_set_inputRegion_mE164B44E3B0C6507D5BE260A5C8824AE80817B23_inline(L_0, L_1, NULL);
		// _corrector.outputRegion = outputRegion;
		InputPositionCorrector_tCF23AF130F6DFC2147C5A591578CB80F6C6475C2* L_2 = __this->____corrector_7;
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D L_3 = ___outputRegion1;
		NullCheck(L_2);
		InputPositionCorrector_set_outputRegion_mABDE372C024DBC81C748484D0FCBD9FAC2EE275E_inline(L_2, L_3, NULL);
		// }
		return;
	}
}
// System.Void Unity.RenderStreaming.InputSystem.Sender::OnEvent(UnityEngine.InputSystem.LowLevel.InputEventPtr,UnityEngine.InputSystem.InputDevice)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Sender_OnEvent_mCCC4F229AAF58287A7D847336E6E7716B7972968 (Sender_t234F1DB016429A45DA2E9C7DF59EA1A57E1A83BF* __this, InputEventPtr_tC2A58521C9AFB479CC88789D5E0797D817C721C0 ___ptr0, InputDevice_t8BCF67533E872A75779C24C93D1D7085B72D364B* ___device1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InputEventPtr_IsA_TisStateEvent_tB93D5F08B084A2BC9FFC71B084409DBBD2516C0F_mA9BDDBB4B234A924F74AB0343F6F3CFDBFF70327_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Pointer_t800EF2832B62E889AC9C182E3B18098AF220E32A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	int32_t G_B4_0 = 0;
	Action_2_t4943DD8C32CAB983950535CEF3BABA85DF8C9AAA* G_B8_0 = NULL;
	Action_2_t4943DD8C32CAB983950535CEF3BABA85DF8C9AAA* G_B7_0 = NULL;
	{
		// if (EnableInputPositionCorrection && device is Pointer && ptr.IsA<StateEvent>())
		bool L_0;
		L_0 = Sender_get_EnableInputPositionCorrection_mA4AAA72D90EDB6CBAA9F67243CF4B66ECD23BEA6_inline(__this, NULL);
		if (!L_0)
		{
			goto IL_001a;
		}
	}
	{
		InputDevice_t8BCF67533E872A75779C24C93D1D7085B72D364B* L_1 = ___device1;
		if (!((Pointer_t800EF2832B62E889AC9C182E3B18098AF220E32A*)IsInstClass((RuntimeObject*)L_1, Pointer_t800EF2832B62E889AC9C182E3B18098AF220E32A_il2cpp_TypeInfo_var)))
		{
			goto IL_001a;
		}
	}
	{
		bool L_2;
		L_2 = InputEventPtr_IsA_TisStateEvent_tB93D5F08B084A2BC9FFC71B084409DBBD2516C0F_mA9BDDBB4B234A924F74AB0343F6F3CFDBFF70327((&___ptr0), InputEventPtr_IsA_TisStateEvent_tB93D5F08B084A2BC9FFC71B084409DBBD2516C0F_mA9BDDBB4B234A924F74AB0343F6F3CFDBFF70327_RuntimeMethod_var);
		G_B4_0 = ((int32_t)(L_2));
		goto IL_001b;
	}

IL_001a:
	{
		G_B4_0 = 0;
	}

IL_001b:
	{
		V_0 = (bool)G_B4_0;
		bool L_3 = V_0;
		if (!L_3)
		{
			goto IL_0031;
		}
	}
	{
		// _corrector.Invoke(ptr, device);
		InputPositionCorrector_tCF23AF130F6DFC2147C5A591578CB80F6C6475C2* L_4 = __this->____corrector_7;
		InputEventPtr_tC2A58521C9AFB479CC88789D5E0797D817C721C0 L_5 = ___ptr0;
		InputDevice_t8BCF67533E872A75779C24C93D1D7085B72D364B* L_6 = ___device1;
		NullCheck(L_4);
		InputPositionCorrector_Invoke_mD19A3A5E1AA6373557DD2C8FCC2A0528C9EE3E70(L_4, L_5, L_6, NULL);
		goto IL_0047;
	}

IL_0031:
	{
		// onEvent?.Invoke(ptr, device);
		Action_2_t4943DD8C32CAB983950535CEF3BABA85DF8C9AAA* L_7 = __this->___onEvent_4;
		Action_2_t4943DD8C32CAB983950535CEF3BABA85DF8C9AAA* L_8 = L_7;
		G_B7_0 = L_8;
		if (L_8)
		{
			G_B8_0 = L_8;
			goto IL_003e;
		}
	}
	{
		goto IL_0046;
	}

IL_003e:
	{
		InputEventPtr_tC2A58521C9AFB479CC88789D5E0797D817C721C0 L_9 = ___ptr0;
		InputDevice_t8BCF67533E872A75779C24C93D1D7085B72D364B* L_10 = ___device1;
		NullCheck(G_B8_0);
		Action_2_Invoke_m30462DCFDF7C828AF25E69DAA1082FB00F0E2271_inline(G_B8_0, L_9, L_10, NULL);
	}

IL_0046:
	{
	}

IL_0047:
	{
		// }
		return;
	}
}
// System.Void Unity.RenderStreaming.InputSystem.Sender::OnDeviceChange(UnityEngine.InputSystem.InputDevice,UnityEngine.InputSystem.InputDeviceChange)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Sender_OnDeviceChange_m38E18E128487F5B5BF8E2DDC563A6FB880BD1C4C (Sender_t234F1DB016429A45DA2E9C7DF59EA1A57E1A83BF* __this, InputDevice_t8BCF67533E872A75779C24C93D1D7085B72D364B* ___device0, int32_t ___change1, const RuntimeMethod* method) 
{
	Action_2_tB79528C85CFEF7DFF52C575DDAA398D2FE6BC333* G_B2_0 = NULL;
	Action_2_tB79528C85CFEF7DFF52C575DDAA398D2FE6BC333* G_B1_0 = NULL;
	{
		// onDeviceChange?.Invoke(device, change);
		Action_2_tB79528C85CFEF7DFF52C575DDAA398D2FE6BC333* L_0 = __this->___onDeviceChange_5;
		Action_2_tB79528C85CFEF7DFF52C575DDAA398D2FE6BC333* L_1 = L_0;
		G_B1_0 = L_1;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_000d;
		}
	}
	{
		goto IL_0015;
	}

IL_000d:
	{
		InputDevice_t8BCF67533E872A75779C24C93D1D7085B72D364B* L_2 = ___device0;
		int32_t L_3 = ___change1;
		NullCheck(G_B2_0);
		Action_2_Invoke_m8A62316C5AC7B28A61A46872AE21A8EBFA916850_inline(G_B2_0, L_2, L_3, NULL);
	}

IL_0015:
	{
		// }
		return;
	}
}
// System.Void Unity.RenderStreaming.InputSystem.Sender::OnLayoutChange(System.String,UnityEngine.InputSystem.InputControlLayoutChange)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Sender_OnLayoutChange_mEFD1A33A65C4CEF4C9A7AC16D4F4877149B5DD53 (Sender_t234F1DB016429A45DA2E9C7DF59EA1A57E1A83BF* __this, String_t* ___name0, int32_t ___change1, const RuntimeMethod* method) 
{
	Action_2_t4797B88C63509F2EE4385D6DABE6A4B5AD5393F7* G_B2_0 = NULL;
	Action_2_t4797B88C63509F2EE4385D6DABE6A4B5AD5393F7* G_B1_0 = NULL;
	{
		// onLayoutChange?.Invoke(name, change);
		Action_2_t4797B88C63509F2EE4385D6DABE6A4B5AD5393F7* L_0 = __this->___onLayoutChange_6;
		Action_2_t4797B88C63509F2EE4385D6DABE6A4B5AD5393F7* L_1 = L_0;
		G_B1_0 = L_1;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_000d;
		}
	}
	{
		goto IL_0015;
	}

IL_000d:
	{
		String_t* L_2 = ___name0;
		int32_t L_3 = ___change1;
		NullCheck(G_B2_0);
		Action_2_Invoke_m830CD74C20E8D1464D4DCA824B0371008CFE2897_inline(G_B2_0, L_2, L_3, NULL);
	}

IL_0015:
	{
		// }
		return;
	}
}
// System.Void Unity.RenderStreaming.InputSystem.Sender::<.ctor>b__11_0(UnityEngine.InputSystem.LowLevel.InputEventPtr,UnityEngine.InputSystem.InputDevice)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Sender_U3C_ctorU3Eb__11_0_m49B33F3E980B1C6F2D348872BC508AEA29DE10DE (Sender_t234F1DB016429A45DA2E9C7DF59EA1A57E1A83BF* __this, InputEventPtr_tC2A58521C9AFB479CC88789D5E0797D817C721C0 ___ptr0, InputDevice_t8BCF67533E872A75779C24C93D1D7085B72D364B* ___device1, const RuntimeMethod* method) 
{
	Action_2_t4943DD8C32CAB983950535CEF3BABA85DF8C9AAA* G_B2_0 = NULL;
	Action_2_t4943DD8C32CAB983950535CEF3BABA85DF8C9AAA* G_B1_0 = NULL;
	{
		// _onEvent = (InputEventPtr ptr, InputDevice device) => { onEvent?.Invoke(ptr, device); };
		Action_2_t4943DD8C32CAB983950535CEF3BABA85DF8C9AAA* L_0 = __this->___onEvent_4;
		Action_2_t4943DD8C32CAB983950535CEF3BABA85DF8C9AAA* L_1 = L_0;
		G_B1_0 = L_1;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_000d;
		}
	}
	{
		goto IL_0015;
	}

IL_000d:
	{
		InputEventPtr_tC2A58521C9AFB479CC88789D5E0797D817C721C0 L_2 = ___ptr0;
		InputDevice_t8BCF67533E872A75779C24C93D1D7085B72D364B* L_3 = ___device1;
		NullCheck(G_B2_0);
		Action_2_Invoke_m30462DCFDF7C828AF25E69DAA1082FB00F0E2271_inline(G_B2_0, L_2, L_3, NULL);
	}

IL_0015:
	{
		// _onEvent = (InputEventPtr ptr, InputDevice device) => { onEvent?.Invoke(ptr, device); };
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
// System.Void Unity.RenderStreaming.InputSystem.Observer::.ctor(Unity.WebRTC.RTCDataChannel)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Observer__ctor_mE0865EC4A7DC5417CA869AAEBC1AC255AFEFC55F (Observer_tD4C9BC0438A3BD3EF1C50CDA6C55C2F5E12890E6* __this, RTCDataChannel_t249C16A38FD2A994D1A45381523F701A49BF1A77* ___channel0, const RuntimeMethod* method) 
{
	RTCDataChannel_t249C16A38FD2A994D1A45381523F701A49BF1A77* G_B2_0 = NULL;
	Observer_tD4C9BC0438A3BD3EF1C50CDA6C55C2F5E12890E6* G_B2_1 = NULL;
	RTCDataChannel_t249C16A38FD2A994D1A45381523F701A49BF1A77* G_B1_0 = NULL;
	Observer_tD4C9BC0438A3BD3EF1C50CDA6C55C2F5E12890E6* G_B1_1 = NULL;
	{
		// public Observer(RTCDataChannel channel)
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		// _channel = channel ?? throw new ArgumentNullException("channel is null");
		RTCDataChannel_t249C16A38FD2A994D1A45381523F701A49BF1A77* L_0 = ___channel0;
		RTCDataChannel_t249C16A38FD2A994D1A45381523F701A49BF1A77* L_1 = L_0;
		G_B1_0 = L_1;
		G_B1_1 = __this;
		if (L_1)
		{
			G_B2_0 = L_1;
			G_B2_1 = __this;
			goto IL_0019;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_2 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		NullCheck(L_2);
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_2, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89D2F03F951168C1FEEF991E1A8224E044D67583)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Observer__ctor_mE0865EC4A7DC5417CA869AAEBC1AC255AFEFC55F_RuntimeMethod_var)));
	}

IL_0019:
	{
		NullCheck(G_B2_1);
		G_B2_1->____channel_0 = G_B2_0;
		Il2CppCodeGenWriteBarrier((void**)(&G_B2_1->____channel_0), (void*)G_B2_0);
		// }
		return;
	}
}
// System.Void Unity.RenderStreaming.InputSystem.Observer::OnNext(Unity.RenderStreaming.InputSystem.InputRemoting/Message)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Observer_OnNext_mAABE53832C6DD4298D7340412EB85DB29A34652F (Observer_tD4C9BC0438A3BD3EF1C50CDA6C55C2F5E12890E6* __this, Message_tD936DB9861B7DBCDC7BCEB495736886D5EFAD801 ___value0, const RuntimeMethod* method) 
{
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_0 = NULL;
	bool V_1 = false;
	{
		// if (_channel.ReadyState != RTCDataChannelState.Open)
		RTCDataChannel_t249C16A38FD2A994D1A45381523F701A49BF1A77* L_0 = __this->____channel_0;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = RTCDataChannel_get_ReadyState_m5AB04041F02762757A4A4FA7821BF3E769666914(L_0, NULL);
		V_1 = (bool)((((int32_t)((((int32_t)L_1) == ((int32_t)1))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_2 = V_1;
		if (!L_2)
		{
			goto IL_0018;
		}
	}
	{
		// return;
		goto IL_002d;
	}

IL_0018:
	{
		// byte[] bytes = MessageSerializer.Serialize(ref value);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_3;
		L_3 = MessageSerializer_Serialize_mEA6EC696FCA9221DCC867E8FFFEB3D885E03BD0A((&___value0), NULL);
		V_0 = L_3;
		// _channel.Send(bytes);
		RTCDataChannel_t249C16A38FD2A994D1A45381523F701A49BF1A77* L_4 = __this->____channel_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_5 = V_0;
		NullCheck(L_4);
		RTCDataChannel_Send_mFA9B137699242DF5272FFBE361A1860FD91210C1(L_4, L_5, NULL);
	}

IL_002d:
	{
		// }
		return;
	}
}
// System.Void Unity.RenderStreaming.InputSystem.Observer::OnCompleted()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Observer_OnCompleted_m501CF4F82F8F9DBB49186D3207849C2175CB8F31 (Observer_tD4C9BC0438A3BD3EF1C50CDA6C55C2F5E12890E6* __this, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void Unity.RenderStreaming.InputSystem.Observer::OnError(System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Observer_OnError_mA8622BE564C1A2455A0DFEC4CE1783286F1F36D7 (Observer_tD4C9BC0438A3BD3EF1C50CDA6C55C2F5E12890E6* __this, Exception_t* ___error0, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void OnConnectHandler_Invoke_mC22B99AF330E1CA75BBE54A22E583F9E2BD5DB8A_inline (OnConnectHandler_tF4A8A1EC5ED4BCEAB7EA0D252D6586EC660ABEB3* __this, RuntimeObject* ___signaling0, String_t* ___connectionId1, bool ___polite2, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, RuntimeObject*, String_t*, bool, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___signaling0, ___connectionId1, ___polite2, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void OnDisconnectHandler_Invoke_m5EA3C0685EA9F8A3B958CE439230A7D3F4E0DA8D_inline (OnDisconnectHandler_tB1C80CDBF420D2C6F13BE728865E1912E08383C9* __this, RuntimeObject* ___signaling0, String_t* ___connectionId1, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, RuntimeObject*, String_t*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___signaling0, ___connectionId1, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void OnOfferHandler_Invoke_m0DE74F0577369C952A9B36ABD622FA356FA853F9_inline (OnOfferHandler_t741D2F8DBDFDA8C010DBB5276E8D5CC35569FF86* __this, RuntimeObject* ___signaling0, DescData_tA4EB7C7305FA906F4E120329023F8C778EFCB1B8* ___e1, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, RuntimeObject*, DescData_tA4EB7C7305FA906F4E120329023F8C778EFCB1B8*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___signaling0, ___e1, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void OnAnswerHandler_Invoke_m222E27983168292A4C07EA7A122B9D3C6A2BE162_inline (OnAnswerHandler_tBF64DA7C3AB41984E338F75F069C194C8F0A1A19* __this, RuntimeObject* ___signaling0, DescData_tA4EB7C7305FA906F4E120329023F8C778EFCB1B8* ___e1, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, RuntimeObject*, DescData_tA4EB7C7305FA906F4E120329023F8C778EFCB1B8*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___signaling0, ___e1, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void OnIceCandidateHandler_Invoke_m799463020BA8E3CF851221DA9D84AA33AF37F621_inline (OnIceCandidateHandler_tB82627B771BEE335DBC8D44AEC93B2AEC8B1E139* __this, RuntimeObject* ___signaling0, CandidateData_t37575B19A1050FDC713708C9C0CBD2EB498F2567* ___e1, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, RuntimeObject*, CandidateData_t37575B19A1050FDC713708C9C0CBD2EB498F2567*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___signaling0, ___e1, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void OnStartHandler_Invoke_m69E91DABD69A3AB2775AD48F29C1B05748F238E6_inline (OnStartHandler_t295FEA9A47BD02A9B36195C055961D94C233A56F* __this, RuntimeObject* ___signaling0, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, RuntimeObject*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___signaling0, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR InputEvent_t10F727342D1A79DCFC06529C203BB61C194AEBC5* InputEventPtr_get_data_m4694B5F91E787CE9586B5C7113AFEB89D33CC616_inline (InputEventPtr_tC2A58521C9AFB479CC88789D5E0797D817C721C0* __this, const RuntimeMethod* method) 
{
	{
		// public InputEvent* data => m_EventPtr;
		InputEvent_t10F727342D1A79DCFC06529C203BB61C194AEBC5* L_0 = __this->___m_EventPtr_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t InputDevice_get_deviceId_mC65E69E6117B78DB2F4963F5CF9BF031488AD588_inline (InputDevice_t8BCF67533E872A75779C24C93D1D7085B72D364B* __this, const RuntimeMethod* method) 
{
	{
		// public int deviceId => m_DeviceId;
		int32_t L_0 = __this->___m_DeviceId_25;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR InputDeviceDescription_tE86DD77422AAF60ADDAC788B31E5A05E739B708F InputDevice_get_description_mD9260BECAC1F217CF72662B7B08FA4A164EE73EB_inline (InputDevice_t8BCF67533E872A75779C24C93D1D7085B72D364B* __this, const RuntimeMethod* method) 
{
	{
		// public InputDeviceDescription description => m_Description;
		InputDeviceDescription_tE86DD77422AAF60ADDAC788B31E5A05E739B708F L_0 = __this->___m_Description_28;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void IntPtr__ctor_m4F9A9B80F01996B610D5AE4797F20B98ECD0A3D9_inline (intptr_t* __this, void* ___value0, const RuntimeMethod* method) 
{
	{
		void* L_0 = ___value0;
		*__this = ((intptr_t)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Receiver_get_EnableInputPositionCorrection_mCA7935398FB989440C50AA6452DB95065821FFB5_inline (Receiver_t3693E96FFA61969B9B9F01B3F38E241C176E8B13* __this, const RuntimeMethod* method) 
{
	{
		// public bool EnableInputPositionCorrection { set; get; }
		bool L_0 = __this->___U3CEnableInputPositionCorrectionU3Ek__BackingField_13;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void InputPositionCorrector_set_inputRegion_mE164B44E3B0C6507D5BE260A5C8824AE80817B23_inline (InputPositionCorrector_tCF23AF130F6DFC2147C5A591578CB80F6C6475C2* __this, Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D ___value0, const RuntimeMethod* method) 
{
	{
		// public Rect inputRegion { set; get; }
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D L_0 = ___value0;
		__this->___U3CinputRegionU3Ek__BackingField_0 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void InputPositionCorrector_set_outputRegion_mABDE372C024DBC81C748484D0FCBD9FAC2EE275E_inline (InputPositionCorrector_tCF23AF130F6DFC2147C5A591578CB80F6C6475C2* __this, Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D ___value0, const RuntimeMethod* method) 
{
	{
		// public Rect outputRegion { set; get; }
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D L_0 = ___value0;
		__this->___U3CoutputRegionU3Ek__BackingField_1 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Sender_get_EnableInputPositionCorrection_mA4AAA72D90EDB6CBAA9F67243CF4B66ECD23BEA6_inline (Sender_t234F1DB016429A45DA2E9C7DF59EA1A57E1A83BF* __this, const RuntimeMethod* method) 
{
	{
		// public bool EnableInputPositionCorrection { set; get; }
		bool L_0 = __this->___U3CEnableInputPositionCorrectionU3Ek__BackingField_9;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* Array_Empty_TisRuntimeObject_m55011E8360A8199FB239A5787BA8631CDD6116FC_gshared_inline (const RuntimeMethod* method) 
{
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->rgctx_data, 0));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_0 = ((EmptyArray_1_tDF0DD7256B115243AA6BD5558417387A734240EE_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->rgctx_data, 0)))->___Value_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Nullable_1_get_HasValue_mB0EB37808971A8C9C6034F5EF00AA28A8758520C_gshared_inline (Nullable_1_t90A0E6202C33510EEDDE5954340106E0AF91D5B5* __this, const RuntimeMethod* method) 
{
	{
		bool L_0 = (bool)__this->___hasValue_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Action_1_Invoke_mF1548FD088108212A1822D5F1ED4FD8BE79743A6_gshared_inline (Action_1_t62CFC7E46D3237DF830A4F831466D93C80CCEB03* __this, Message_tD936DB9861B7DBCDC7BCEB495736886D5EFAD801 ___obj0, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, Message_tD936DB9861B7DBCDC7BCEB495736886D5EFAD801, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___obj0, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* Enumerable_Empty_TisRuntimeObject_m42BB34F154440C9F0AC402FC3E9BD08C8D678F21_gshared_inline (const RuntimeMethod* method) 
{
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->rgctx_data, 0));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_0 = ((EmptyEnumerable_1_t8C8873EF4F89FB0F86D91BA5B4D640E3A23AD28E_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->rgctx_data, 0)))->___Instance_0;
		return (RuntimeObject*)L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = (int32_t)__this->____size_2;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* KeyValuePair_2_get_Key_mBD8EA7557C27E6956F2AF29DA3F7499B2F51A282_gshared_inline (KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = (RuntimeObject*)__this->___key_0;
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Action_2_Invoke_m3BFB5987F7235AEF25980B76D635DBD5B56B0F7A_gshared_inline (Action_2_t9C4E97D0565650F0AEF7C72077EB8A0F9326E40B* __this, RuntimeObject* ___arg10, int32_t ___arg21, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, RuntimeObject*, int32_t, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___arg10, ___arg21, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Action_2_Invoke_m5CA7C522C42D2A1120BA23ED9913909EF92762C5_gshared_inline (Action_2_tD987B97B18D27B9920365359C46BC12702AD4F7D* __this, InputEventPtr_tC2A58521C9AFB479CC88789D5E0797D817C721C0 ___arg10, RuntimeObject* ___arg21, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, InputEventPtr_tC2A58521C9AFB479CC88789D5E0797D817C721C0, RuntimeObject*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___arg10, ___arg21, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
