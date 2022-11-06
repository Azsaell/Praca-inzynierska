#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>
#include <stdint.h>


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
struct InterfaceActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
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

// System.Action`1<System.Int32>
struct Action_1_tD69A6DC9FBE94131E52F5A73B2A9D4AB51EEC404;
// System.Action`2<UnityEngine.InputSystem.InputControl,UnityEngine.InputSystem.LowLevel.InputEventPtr>
struct Action_2_t6A27AF0A3585FFCF87D39ADE472BCFD2F2930F19;
// System.Action`2<UnityEngine.InputSystem.InputDevice,UnityEngine.InputSystem.InputDeviceChange>
struct Action_2_tB79528C85CFEF7DFF52C575DDAA398D2FE6BC333;
// System.Action`2<UnityEngine.InputSystem.LowLevel.InputEventPtr,UnityEngine.InputSystem.InputDevice>
struct Action_2_t4943DD8C32CAB983950535CEF3BABA85DF8C9AAA;
// System.Action`2<System.Int32,System.Int32>
struct Action_2_tD7438462601D3939500ED67463331FE00CFFBDB8;
// System.Action`2<System.Object,UnityEngine.InputSystem.InputActionChange>
struct Action_2_t4D6C6A84A6B44BE6193A1F64753F6E48558FBE9D;
// System.Action`3<UnityEngine.InputSystem.Users.InputUser,UnityEngine.InputSystem.Users.InputUserChange,UnityEngine.InputSystem.InputDevice>
struct Action_3_tE646D5EE2107669AE49025C0E3DC04C831ACCAE0;
// System.Collections.Generic.Dictionary`2<System.String,Unity.WebRTC.RTCRtpSender>
struct Dictionary_2_t5C2794E98907BE3FFA1055C9B004080A15D1C3A2;
// System.Func`3<UnityEngine.InputSystem.InputDevice,UnityEngine.InputSystem.LowLevel.InputEventPtr,System.Boolean>
struct Func_3_t42E9F5CDEF4CF174C35D943F427EF585FE829937;
// System.Collections.Generic.HashSet`1<UnityEngine.XR.Management.XRLoader>
struct HashSet_1_t174593AE6599738C19A33586587D63534CED9F0F;
// System.Collections.Generic.IReadOnlyList`1<UnityEngine.XR.Management.XRLoader>
struct IReadOnlyList_1_tA80C12111618D2D89FCD26036BFD26E605419A2A;
// System.Collections.Generic.List`1<UnityEngine.Component>
struct List_1_t584CB490C8F4C21E0A0D5545409ED60BF71F3FE4;
// System.Collections.Generic.List`1<UnityEngine.XR.Management.XRLoader>
struct List_1_tA1A04BD6B1EE83992AE369D5DB31A028E9B57822;
// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween>
struct TweenRunner_1_t5BB0582F926E75E2FE795492679A6CF55A4B4BC4;
// System.Action`2<UnityEngine.InputSystem.InputControl,UnityEngine.InputSystem.LowLevel.InputEventPtr>[]
struct Action_2U5BU5D_tBE18774DE78EE629377991D4C8F3B44D96E3A529;
// System.Action`3<UnityEngine.InputSystem.Users.InputUser,UnityEngine.InputSystem.Users.InputUserChange,UnityEngine.InputSystem.InputDevice>[]
struct Action_3U5BU5D_t624B9D1D653A8F69756207CB2B95EEF3143387DB;
// System.Func`3<UnityEngine.InputSystem.InputDevice,UnityEngine.InputSystem.LowLevel.InputEventPtr,System.Boolean>[]
struct Func_3U5BU5D_t46F58FB7530550D36B775F49E118190032295BE6;
// System.Char[]
struct CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB;
// System.Delegate[]
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
// UnityEngine.InputSystem.InputDevice[]
struct InputDeviceU5BU5D_tA9AEFC6AF63557D3D5DCFB2B26DDA6F63147D548;
// UnityEngine.InputSystem.Users.InputUser[]
struct InputUserU5BU5D_t4B71AE3CDE5BB252EADB6494FEE05EE141C2B1FD;
// UnityEngine.Vector2[]
struct Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA;
// UnityEngine.Vector3[]
struct Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C;
// UnityEngine.XR.Management.XRLoader[]
struct XRLoaderU5BU5D_t106FBE2039A03743430BD384D0D69555CCD0BA99;
// UnityEngine.InputSystem.Users.InputUser/OngoingAccountSelection[]
struct OngoingAccountSelectionU5BU5D_t0CC84AB78BA7B45022C3D6E08B0DADA7A61BCBD8;
// UnityEngine.InputSystem.Users.InputUser/UserData[]
struct UserDataU5BU5D_t5CB4987877C71E61FA131704B58CA6D8E5272C7E;
// UnityEngine.InputSystem.PlayerInput/ActionEvent[]
struct ActionEventU5BU5D_t45BD340B9AA6F3287339EA686E3FE0A47801E88F;
// System.AsyncCallback
struct AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C;
// UnityEngine.AudioSource
struct AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299;
// Unity.RenderStreaming.AudioStreamReceiver
struct AudioStreamReceiver_t259328EA2AA138847368362753FD630E8209F285;
// Unity.RenderStreaming.Samples.BroadcastSample
struct BroadcastSample_t9CEFF3CD3FD2181485A532B75E4C6A44914D7CE9;
// UnityEngine.Camera
struct Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184;
// CameraController
struct CameraController_tDC4FF0FA10418272A26E5E7539156F4F4A98E8C5;
// UnityEngine.Canvas
struct Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26;
// UnityEngine.CanvasRenderer
struct CanvasRenderer_tAB9A55A976C4E3B2B37D0CE5616E5685A8B43860;
// UnityEngine.Component
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3;
// Unity.RenderStreaming.DataChannelBase
struct DataChannelBase_t4D3AC9FFEE36E810DC397F71E543F20030C1F744;
// System.Delegate
struct Delegate_t;
// System.DelegateData
struct DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E;
// UnityEngine.GameObject
struct GameObject_t76FEDD663AB33C991A9C9A23129337651094216F;
// UnityEngine.UI.Graphic
struct Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931;
// System.IAsyncResult
struct IAsyncResult_t7B9B5A0ECB35DCEC31B8A8122C37D687369253B5;
// System.IDisposable
struct IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5;
// Unity.RenderStreaming.IRenderStreamingHandler
struct IRenderStreamingHandler_tDDD83BD3407716DCF60C17C5BFF4FDF7AD144816;
// UnityEngine.InputSystem.InputActionAsset
struct InputActionAsset_tF217AC5223B4AAA46EBCB44B33E9259FB117417D;
// UnityEngine.InputSystem.InputActionMap
struct InputActionMap_tFCE82E0E014319D4DED9F8962B06655DD0420A09;
// UnityEngine.InputSystem.InputActionState
struct InputActionState_t780948EA293BAA800AD8699518B58B59FFB8A700;
// UnityEngine.InputSystem.InputDevice
struct InputDevice_t8BCF67533E872A75779C24C93D1D7085B72D364B;
// Unity.RenderStreaming.InputReceiver
struct InputReceiver_tCE96B944D62722F35D322813BA122A58F71F765B;
// Unity.RenderStreaming.InputSystem.InputRemoting
struct InputRemoting_t4BBB51BEA47ACD8A408459C612008D52240C6985;
// Unity.RenderStreaming.InputSender
struct InputSender_t07ED4DAB78F74631B4BF39A9C1554423DAAAD845;
// LookAround
struct LookAround_t2A113C1D53E1B896A7E8F2FE149EF0889F59F24B;
// UnityEngine.Material
struct Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3;
// Unity.WebRTC.MediaStreamTrack
struct MediaStreamTrack_tE9A3A14A55BD53667B26B202AF719053FDBDC2E6;
// UnityEngine.Mesh
struct Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4;
// UnityEngine.MeshRenderer
struct MeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71;
// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C;
// Unity.RenderStreaming.OnStartedChannelHandler
struct OnStartedChannelHandler_tB71FDF0B00102C6564E6FA774D39574C043A8A33;
// Unity.RenderStreaming.OnStartedStreamHandler
struct OnStartedStreamHandler_t4707129559723D6EE9C3DECA4D3AB1D970CA5490;
// Unity.RenderStreaming.OnStoppedChannelHandler
struct OnStoppedChannelHandler_t99F9E7A9CB260042E3BC47D13AB3E1926ABB7DFE;
// Unity.RenderStreaming.OnStoppedStreamHandler
struct OnStoppedStreamHandler_t7FA5840B2AB05DA6481BB74571A1CD795301252E;
// Unity.WebRTC.RTCDataChannel
struct RTCDataChannel_t249C16A38FD2A994D1A45381523F701A49BF1A77;
// Unity.WebRTC.RTCRtpReceiver
struct RTCRtpReceiver_tAF4DCA606AD86A954F0AECC3CF03CD7E20407836;
// UnityEngine.UI.RawImage
struct RawImage_tFF12F7DB574FBDC1863CF607C7A12A5D9F8D6179;
// Unity.RenderStreaming.InputSystem.Receiver
struct Receiver_t3693E96FFA61969B9B9F01B3F38E241C176E8B13;
// UnityEngine.UI.RectMask2D
struct RectMask2D_tACF92BE999C791A665BD1ADEABF5BCEB82846670;
// UnityEngine.RectTransform
struct RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5;
// Unity.RenderStreaming.RenderStreaming
struct RenderStreaming_t2035CE1B2000768E9829DB1D41A9EFA1644199EA;
// UnityEngine.Renderer
struct Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF;
// Unity.RenderStreaming.InputSystem.Sender
struct Sender_t234F1DB016429A45DA2E9C7DF59EA1A57E1A83BF;
// Unity.RenderStreaming.SingleConnection
struct SingleConnection_tD953841F9CDC98CD0761ABE269BD6D9BFBA9FE7B;
// System.String
struct String_t;
// Test
struct Test_tE08E78D2148871B8D08F758019DD90BE185E5B2D;
// UnityEngine.Texture
struct Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700;
// UnityEngine.Texture2D
struct Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4;
// UnityEngine.Transform
struct Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1;
// UnityEngine.Events.UnityAction
struct UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7;
// UnityEngine.UI.VertexHelper
struct VertexHelper_tB905FCB02AE67CBEE5F265FE37A5938FC5D136FE;
// Unity.RenderStreaming.VideoStreamReceiver
struct VideoStreamReceiver_t368CE6A3F484D7F61F4D2C1BE8DF2C6D83148C71;
// Unity.RenderStreaming.VideoStreamSender
struct VideoStreamSender_tC843D8A5E98D87418FF7AF2D4FE59038DF0F4066;
// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
// UnityEngine.XR.Management.XRGeneralSettings
struct XRGeneralSettings_t8F8D096944606B5AD845D010706BF7094ADEC8CE;
// UnityEngine.XR.Management.XRLoader
struct XRLoader_t80B1B1934C40561C5352ABC95D567DC2A7C9C976;
// UnityEngine.XR.Management.XRManagerSettings
struct XRManagerSettings_t7923B66EB3FEE58C7B9F85FF61749B774D3B9E52;
// Unity.Template.VR.XRPlatformControllerSetup
struct XRPlatformControllerSetup_tF3241056E2DD26648305E205151EB2ACF3333628;
// Unity.RenderStreaming.AudioStreamReceiver/OnUpdateReceiveAudioSourceHandler
struct OnUpdateReceiveAudioSourceHandler_tB00165D87D9F75327FB32136DF771EBE3F324D6C;
// UnityEngine.Camera/CameraCallback
struct CameraCallback_t844E527BFE37BC0495E7F67993E43C07642DA9DD;
// UnityEngine.Canvas/WillRenderCanvases
struct WillRenderCanvases_tA4A6E66DBA797DCB45B995DBA449A9D1D80D0FBC;
// UnityEngine.UI.MaskableGraphic/CullStateChangedEvent
struct CullStateChangedEvent_t6073CD0D951EC1256BF74B8F9107D68FC89B99B8;
// UnityEngine.RectTransform/ReapplyDrivenProperties
struct ReapplyDrivenProperties_t3482EA130A01FF7EE2EEFE37F66A5215D08CFE24;
// Test/<>c
struct U3CU3Ec_tBF9F5AFB6F4C4AFADB968C649ABEB2706AA5DB44;
// Unity.RenderStreaming.VideoStreamReceiver/OnUpdateReceiveTextureHandler
struct OnUpdateReceiveTextureHandler_t8B95A7333D7120C552A9BD2043B9DCC43E7AE398;

IL2CPP_EXTERN_C RuntimeClass* CallbackContext_tB251EE41F509C6E8A6B05EC97C029A45DF4F5FA8_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerable_1_t468455E75DD3CE53FB1BEFFBDB5DBB1C5905801C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerator_1_tE9023775CE757CAAA4A054FB61980FF18EC394AE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* OnStartedChannelHandler_tB71FDF0B00102C6564E6FA774D39574C043A8A33_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* OnUpdateReceiveAudioSourceHandler_tB00165D87D9F75327FB32136DF771EBE3F324D6C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* OnUpdateReceiveTextureHandler_t8B95A7333D7120C552A9BD2043B9DCC43E7AE398_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* RectTransformUtility_t65C00A84A72F17D78B81F2E7D88C2AA98AB61244_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* String_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec_tBF9F5AFB6F4C4AFADB968C649ABEB2706AA5DB44_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* XRGeneralSettings_t8F8D096944606B5AD845D010706BF7094ADEC8CE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral16DD21BE77B115D392226EB71A2D3A9FDC29E3F0;
IL2CPP_EXTERN_C String_t* _stringLiteral5DA441CB66F0570B3AE372C4CA15C4C23A99A018;
IL2CPP_EXTERN_C String_t* _stringLiteral68F66B355DF7CF6656A942CC84519B7F10C669AA;
IL2CPP_EXTERN_C String_t* _stringLiteral6D031E1CB47AAA52A4B0EB17AB8462FD33EBD210;
IL2CPP_EXTERN_C String_t* _stringLiteral8243A16D425F93AF62CAAB2BFAE01A2D6246A5FE;
IL2CPP_EXTERN_C String_t* _stringLiteral88BEE283254D7094E258B3A88730F4CC4F1E4AC7;
IL2CPP_EXTERN_C String_t* _stringLiteralB87CC029578F0C6F88E01A8257EBF1ED95223CEC;
IL2CPP_EXTERN_C String_t* _stringLiteralE42E8BB820D4F7550A0F04619F4E15FDC56943B9;
IL2CPP_EXTERN_C const RuntimeMethod* BroadcastSample_OnStartedChannel_m3FD96236A1FA43FBFC1D86E7BB6826FFF7992420_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* CallbackContext_ReadValue_TisQuaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_m020AD5873BB6CE85B752DF8D11920FA5FB46214E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* CallbackContext_ReadValue_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_m454ADEAE74A5A469E011CF78D6303A1034659830_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisInputSender_t07ED4DAB78F74631B4BF39A9C1554423DAAAD845_m6869E81BCE0A15CB7CD5EB41245F29278E126B30_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Test_OnStartedChannel_m482FBF96DF0FA11B8A56185C6D1F08E4B0F7271E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Test_OnUpdateReceiveTexture_m0E48CD9747E942251E955C6ACD6816B37394C672_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec_U3CAwakeU3Eb__8_0_m9EA29B09F3F85A0BF5FF6682BDB7F6CC1526BBC2_RuntimeMethod_var;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct InputUser_tD938B6FAC4D79FB2BA7040DE247549A4F832000E;
struct UserData_t0F7AA24AC638FDFB7CF552415A75CAE057C2D42C_marshaled_com;
struct UserData_t0F7AA24AC638FDFB7CF552415A75CAE057C2D42C_marshaled_pinvoke;

struct Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct U3CModuleU3E_tBB65183F1134474D09FF49B95625D25472B9BA8B 
{
};

// System.Collections.Generic.List`1<UnityEngine.XR.Management.XRLoader>
struct List_1_tA1A04BD6B1EE83992AE369D5DB31A028E9B57822  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	XRLoaderU5BU5D_t106FBE2039A03743430BD384D0D69555CCD0BA99* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_tA1A04BD6B1EE83992AE369D5DB31A028E9B57822_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	XRLoaderU5BU5D_t106FBE2039A03743430BD384D0D69555CCD0BA99* ___s_emptyArray_5;
};
struct Il2CppArrayBounds;

// Unity.RenderStreaming.Samples.InputReceiverExtension
struct InputReceiverExtension_t4096242B210F86E414732D45ADBF632F21A742C7  : public RuntimeObject
{
};

// InputSenderExtension
struct InputSenderExtension_tC8001359E6977A7CB2F8956824643C56E2FD6F49  : public RuntimeObject
{
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

// Test/<>c
struct U3CU3Ec_tBF9F5AFB6F4C4AFADB968C649ABEB2706AA5DB44  : public RuntimeObject
{
};

struct U3CU3Ec_tBF9F5AFB6F4C4AFADB968C649ABEB2706AA5DB44_StaticFields
{
	// Test/<>c Test/<>c::<>9
	U3CU3Ec_tBF9F5AFB6F4C4AFADB968C649ABEB2706AA5DB44* ___U3CU3E9_0;
	// Unity.RenderStreaming.AudioStreamReceiver/OnUpdateReceiveAudioSourceHandler Test/<>c::<>9__8_0
	OnUpdateReceiveAudioSourceHandler_tB00165D87D9F75327FB32136DF771EBE3F324D6C* ___U3CU3E9__8_0_1;
};

// UnityEngine.InputSystem.Utilities.InlinedArray`1<System.Action`2<UnityEngine.InputSystem.InputControl,UnityEngine.InputSystem.LowLevel.InputEventPtr>>
struct InlinedArray_1_tB2FA5372BE7591F760748AE97979B26DDD7E9A0E 
{
	// System.Int32 UnityEngine.InputSystem.Utilities.InlinedArray`1::length
	int32_t ___length_0;
	// TValue UnityEngine.InputSystem.Utilities.InlinedArray`1::firstValue
	Action_2_t6A27AF0A3585FFCF87D39ADE472BCFD2F2930F19* ___firstValue_1;
	// TValue[] UnityEngine.InputSystem.Utilities.InlinedArray`1::additionalValues
	Action_2U5BU5D_tBE18774DE78EE629377991D4C8F3B44D96E3A529* ___additionalValues_2;
};

// UnityEngine.InputSystem.Utilities.InlinedArray`1<System.Action`3<UnityEngine.InputSystem.Users.InputUser,UnityEngine.InputSystem.Users.InputUserChange,UnityEngine.InputSystem.InputDevice>>
struct InlinedArray_1_tC64553F2D494A77784441699A84E32D1096DC2F2 
{
	// System.Int32 UnityEngine.InputSystem.Utilities.InlinedArray`1::length
	int32_t ___length_0;
	// TValue UnityEngine.InputSystem.Utilities.InlinedArray`1::firstValue
	Action_3_tE646D5EE2107669AE49025C0E3DC04C831ACCAE0* ___firstValue_1;
	// TValue[] UnityEngine.InputSystem.Utilities.InlinedArray`1::additionalValues
	Action_3U5BU5D_t624B9D1D653A8F69756207CB2B95EEF3143387DB* ___additionalValues_2;
};

// UnityEngine.InputSystem.Utilities.InlinedArray`1<System.Func`3<UnityEngine.InputSystem.InputDevice,UnityEngine.InputSystem.LowLevel.InputEventPtr,System.Boolean>>
struct InlinedArray_1_t89D09048674475F5C319FE41264ED79405A8209D 
{
	// System.Int32 UnityEngine.InputSystem.Utilities.InlinedArray`1::length
	int32_t ___length_0;
	// TValue UnityEngine.InputSystem.Utilities.InlinedArray`1::firstValue
	Func_3_t42E9F5CDEF4CF174C35D943F427EF585FE829937* ___firstValue_1;
	// TValue[] UnityEngine.InputSystem.Utilities.InlinedArray`1::additionalValues
	Func_3U5BU5D_t46F58FB7530550D36B775F49E118190032295BE6* ___additionalValues_2;
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

// UnityEngine.Color
struct Color_tD001788D726C3A7F1379BEED0260B9591F440C1F 
{
	// System.Single UnityEngine.Color::r
	float ___r_0;
	// System.Single UnityEngine.Color::g
	float ___g_1;
	// System.Single UnityEngine.Color::b
	float ___b_2;
	// System.Single UnityEngine.Color::a
	float ___a_3;
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

// System.Guid
struct Guid_t 
{
	// System.Int32 System.Guid::_a
	int32_t ____a_1;
	// System.Int16 System.Guid::_b
	int16_t ____b_2;
	// System.Int16 System.Guid::_c
	int16_t ____c_3;
	// System.Byte System.Guid::_d
	uint8_t ____d_4;
	// System.Byte System.Guid::_e
	uint8_t ____e_5;
	// System.Byte System.Guid::_f
	uint8_t ____f_6;
	// System.Byte System.Guid::_g
	uint8_t ____g_7;
	// System.Byte System.Guid::_h
	uint8_t ____h_8;
	// System.Byte System.Guid::_i
	uint8_t ____i_9;
	// System.Byte System.Guid::_j
	uint8_t ____j_10;
	// System.Byte System.Guid::_k
	uint8_t ____k_11;
};

struct Guid_t_StaticFields
{
	// System.Guid System.Guid::Empty
	Guid_t ___Empty_0;
};

// System.Int32
struct Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C 
{
	// System.Int32 System.Int32::m_value
	int32_t ___m_value_0;
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

// UnityEngine.Quaternion
struct Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 
{
	// System.Single UnityEngine.Quaternion::x
	float ___x_0;
	// System.Single UnityEngine.Quaternion::y
	float ___y_1;
	// System.Single UnityEngine.Quaternion::z
	float ___z_2;
	// System.Single UnityEngine.Quaternion::w
	float ___w_3;
};

struct Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_StaticFields
{
	// UnityEngine.Quaternion UnityEngine.Quaternion::identityQuaternion
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___identityQuaternion_4;
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

// System.Single
struct Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C 
{
	// System.Single System.Single::m_value
	float ___m_value_0;
};

// UnityEngine.Vector2
struct Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 
{
	// System.Single UnityEngine.Vector2::x
	float ___x_0;
	// System.Single UnityEngine.Vector2::y
	float ___y_1;
};

struct Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_StaticFields
{
	// UnityEngine.Vector2 UnityEngine.Vector2::zeroVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___zeroVector_2;
	// UnityEngine.Vector2 UnityEngine.Vector2::oneVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___oneVector_3;
	// UnityEngine.Vector2 UnityEngine.Vector2::upVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___upVector_4;
	// UnityEngine.Vector2 UnityEngine.Vector2::downVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___downVector_5;
	// UnityEngine.Vector2 UnityEngine.Vector2::leftVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___leftVector_6;
	// UnityEngine.Vector2 UnityEngine.Vector2::rightVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___rightVector_7;
	// UnityEngine.Vector2 UnityEngine.Vector2::positiveInfinityVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___positiveInfinityVector_8;
	// UnityEngine.Vector2 UnityEngine.Vector2::negativeInfinityVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___negativeInfinityVector_9;
};

// UnityEngine.Vector2Int
struct Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A 
{
	// System.Int32 UnityEngine.Vector2Int::m_X
	int32_t ___m_X_0;
	// System.Int32 UnityEngine.Vector2Int::m_Y
	int32_t ___m_Y_1;
};

struct Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A_StaticFields
{
	// UnityEngine.Vector2Int UnityEngine.Vector2Int::s_Zero
	Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A ___s_Zero_2;
	// UnityEngine.Vector2Int UnityEngine.Vector2Int::s_One
	Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A ___s_One_3;
	// UnityEngine.Vector2Int UnityEngine.Vector2Int::s_Up
	Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A ___s_Up_4;
	// UnityEngine.Vector2Int UnityEngine.Vector2Int::s_Down
	Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A ___s_Down_5;
	// UnityEngine.Vector2Int UnityEngine.Vector2Int::s_Left
	Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A ___s_Left_6;
	// UnityEngine.Vector2Int UnityEngine.Vector2Int::s_Right
	Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A ___s_Right_7;
};

// UnityEngine.Vector3
struct Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 
{
	// System.Single UnityEngine.Vector3::x
	float ___x_2;
	// System.Single UnityEngine.Vector3::y
	float ___y_3;
	// System.Single UnityEngine.Vector3::z
	float ___z_4;
};

struct Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_StaticFields
{
	// UnityEngine.Vector3 UnityEngine.Vector3::zeroVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___zeroVector_5;
	// UnityEngine.Vector3 UnityEngine.Vector3::oneVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___oneVector_6;
	// UnityEngine.Vector3 UnityEngine.Vector3::upVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___upVector_7;
	// UnityEngine.Vector3 UnityEngine.Vector3::downVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___downVector_8;
	// UnityEngine.Vector3 UnityEngine.Vector3::leftVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___leftVector_9;
	// UnityEngine.Vector3 UnityEngine.Vector3::rightVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___rightVector_10;
	// UnityEngine.Vector3 UnityEngine.Vector3::forwardVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___forwardVector_11;
	// UnityEngine.Vector3 UnityEngine.Vector3::backVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___backVector_12;
	// UnityEngine.Vector3 UnityEngine.Vector3::positiveInfinityVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___positiveInfinityVector_13;
	// UnityEngine.Vector3 UnityEngine.Vector3::negativeInfinityVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___negativeInfinityVector_14;
};

// UnityEngine.Vector4
struct Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 
{
	// System.Single UnityEngine.Vector4::x
	float ___x_1;
	// System.Single UnityEngine.Vector4::y
	float ___y_2;
	// System.Single UnityEngine.Vector4::z
	float ___z_3;
	// System.Single UnityEngine.Vector4::w
	float ___w_4;
};

struct Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_StaticFields
{
	// UnityEngine.Vector4 UnityEngine.Vector4::zeroVector
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___zeroVector_5;
	// UnityEngine.Vector4 UnityEngine.Vector4::oneVector
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___oneVector_6;
	// UnityEngine.Vector4 UnityEngine.Vector4::positiveInfinityVector
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___positiveInfinityVector_7;
	// UnityEngine.Vector4 UnityEngine.Vector4::negativeInfinityVector
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___negativeInfinityVector_8;
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

// UnityEngine.InputSystem.InputAction/CallbackContext
struct CallbackContext_tB251EE41F509C6E8A6B05EC97C029A45DF4F5FA8 
{
	// UnityEngine.InputSystem.InputActionState UnityEngine.InputSystem.InputAction/CallbackContext::m_State
	InputActionState_t780948EA293BAA800AD8699518B58B59FFB8A700* ___m_State_0;
	// System.Int32 UnityEngine.InputSystem.InputAction/CallbackContext::m_ActionIndex
	int32_t ___m_ActionIndex_1;
};
// Native definition for P/Invoke marshalling of UnityEngine.InputSystem.InputAction/CallbackContext
struct CallbackContext_tB251EE41F509C6E8A6B05EC97C029A45DF4F5FA8_marshaled_pinvoke
{
	InputActionState_t780948EA293BAA800AD8699518B58B59FFB8A700* ___m_State_0;
	int32_t ___m_ActionIndex_1;
};
// Native definition for COM marshalling of UnityEngine.InputSystem.InputAction/CallbackContext
struct CallbackContext_tB251EE41F509C6E8A6B05EC97C029A45DF4F5FA8_marshaled_com
{
	InputActionState_t780948EA293BAA800AD8699518B58B59FFB8A700* ___m_State_0;
	int32_t ___m_ActionIndex_1;
};

// UnityEngine.InputSystem.Users.InputUser/OngoingAccountSelection
struct OngoingAccountSelection_t8471F20105109B19CE04657B1C72EB8D23976956 
{
	// UnityEngine.InputSystem.InputDevice UnityEngine.InputSystem.Users.InputUser/OngoingAccountSelection::device
	InputDevice_t8BCF67533E872A75779C24C93D1D7085B72D364B* ___device_0;
	// System.UInt32 UnityEngine.InputSystem.Users.InputUser/OngoingAccountSelection::userId
	uint32_t ___userId_1;
};
// Native definition for P/Invoke marshalling of UnityEngine.InputSystem.Users.InputUser/OngoingAccountSelection
struct OngoingAccountSelection_t8471F20105109B19CE04657B1C72EB8D23976956_marshaled_pinvoke
{
	InputDevice_t8BCF67533E872A75779C24C93D1D7085B72D364B* ___device_0;
	uint32_t ___userId_1;
};
// Native definition for COM marshalling of UnityEngine.InputSystem.Users.InputUser/OngoingAccountSelection
struct OngoingAccountSelection_t8471F20105109B19CE04657B1C72EB8D23976956_marshaled_com
{
	InputDevice_t8BCF67533E872A75779C24C93D1D7085B72D364B* ___device_0;
	uint32_t ___userId_1;
};

// UnityEngine.InputSystem.Utilities.CallbackArray`1<System.Action`2<UnityEngine.InputSystem.InputControl,UnityEngine.InputSystem.LowLevel.InputEventPtr>>
struct CallbackArray_1_tE2A0EB348F3111C908D22768F814AE7219DB4F34 
{
	// System.Boolean UnityEngine.InputSystem.Utilities.CallbackArray`1::m_CannotMutateCallbacksArray
	bool ___m_CannotMutateCallbacksArray_0;
	// UnityEngine.InputSystem.Utilities.InlinedArray`1<TDelegate> UnityEngine.InputSystem.Utilities.CallbackArray`1::m_Callbacks
	InlinedArray_1_tB2FA5372BE7591F760748AE97979B26DDD7E9A0E ___m_Callbacks_1;
	// UnityEngine.InputSystem.Utilities.InlinedArray`1<TDelegate> UnityEngine.InputSystem.Utilities.CallbackArray`1::m_CallbacksToAdd
	InlinedArray_1_tB2FA5372BE7591F760748AE97979B26DDD7E9A0E ___m_CallbacksToAdd_2;
	// UnityEngine.InputSystem.Utilities.InlinedArray`1<TDelegate> UnityEngine.InputSystem.Utilities.CallbackArray`1::m_CallbacksToRemove
	InlinedArray_1_tB2FA5372BE7591F760748AE97979B26DDD7E9A0E ___m_CallbacksToRemove_3;
};

// UnityEngine.InputSystem.Utilities.CallbackArray`1<System.Action`3<UnityEngine.InputSystem.Users.InputUser,UnityEngine.InputSystem.Users.InputUserChange,UnityEngine.InputSystem.InputDevice>>
struct CallbackArray_1_tB60CC6CDA475FF8033F707EC1B4A66AF5B83F9E9 
{
	// System.Boolean UnityEngine.InputSystem.Utilities.CallbackArray`1::m_CannotMutateCallbacksArray
	bool ___m_CannotMutateCallbacksArray_0;
	// UnityEngine.InputSystem.Utilities.InlinedArray`1<TDelegate> UnityEngine.InputSystem.Utilities.CallbackArray`1::m_Callbacks
	InlinedArray_1_tC64553F2D494A77784441699A84E32D1096DC2F2 ___m_Callbacks_1;
	// UnityEngine.InputSystem.Utilities.InlinedArray`1<TDelegate> UnityEngine.InputSystem.Utilities.CallbackArray`1::m_CallbacksToAdd
	InlinedArray_1_tC64553F2D494A77784441699A84E32D1096DC2F2 ___m_CallbacksToAdd_2;
	// UnityEngine.InputSystem.Utilities.InlinedArray`1<TDelegate> UnityEngine.InputSystem.Utilities.CallbackArray`1::m_CallbacksToRemove
	InlinedArray_1_tC64553F2D494A77784441699A84E32D1096DC2F2 ___m_CallbacksToRemove_3;
};

// UnityEngine.InputSystem.Utilities.CallbackArray`1<System.Func`3<UnityEngine.InputSystem.InputDevice,UnityEngine.InputSystem.LowLevel.InputEventPtr,System.Boolean>>
struct CallbackArray_1_t1A72A00347540C99C2A4BF0488E37A8C1B45C1BE 
{
	// System.Boolean UnityEngine.InputSystem.Utilities.CallbackArray`1::m_CannotMutateCallbacksArray
	bool ___m_CannotMutateCallbacksArray_0;
	// UnityEngine.InputSystem.Utilities.InlinedArray`1<TDelegate> UnityEngine.InputSystem.Utilities.CallbackArray`1::m_Callbacks
	InlinedArray_1_t89D09048674475F5C319FE41264ED79405A8209D ___m_Callbacks_1;
	// UnityEngine.InputSystem.Utilities.InlinedArray`1<TDelegate> UnityEngine.InputSystem.Utilities.CallbackArray`1::m_CallbacksToAdd
	InlinedArray_1_t89D09048674475F5C319FE41264ED79405A8209D ___m_CallbacksToAdd_2;
	// UnityEngine.InputSystem.Utilities.InlinedArray`1<TDelegate> UnityEngine.InputSystem.Utilities.CallbackArray`1::m_CallbacksToRemove
	InlinedArray_1_t89D09048674475F5C319FE41264ED79405A8209D ___m_CallbacksToRemove_3;
};

// UnityEngine.InputSystem.Utilities.InlinedArray`1<UnityEngine.InputSystem.Users.InputUser/OngoingAccountSelection>
struct InlinedArray_1_tED5DB880E229C88EB2F96B60C2BFBEC2CA7EC28C 
{
	// System.Int32 UnityEngine.InputSystem.Utilities.InlinedArray`1::length
	int32_t ___length_0;
	// TValue UnityEngine.InputSystem.Utilities.InlinedArray`1::firstValue
	OngoingAccountSelection_t8471F20105109B19CE04657B1C72EB8D23976956 ___firstValue_1;
	// TValue[] UnityEngine.InputSystem.Utilities.InlinedArray`1::additionalValues
	OngoingAccountSelectionU5BU5D_t0CC84AB78BA7B45022C3D6E08B0DADA7A61BCBD8* ___additionalValues_2;
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

// Unity.WebRTC.TrackKind
struct TrackKind_tBB4912E76BF7A9943C034D54CCBE5B74B629558F 
{
	// System.Int32 Unity.WebRTC.TrackKind::value__
	int32_t ___value___2;
};

// UnityEngine.Component
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// UnityEngine.GameObject
struct GameObject_t76FEDD663AB33C991A9C9A23129337651094216F  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// UnityEngine.Material
struct Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
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

// UnityEngine.ScriptableObject
struct ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};
// Native definition for P/Invoke marshalling of UnityEngine.ScriptableObject
struct ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A_marshaled_pinvoke : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_pinvoke
{
};
// Native definition for COM marshalling of UnityEngine.ScriptableObject
struct ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A_marshaled_com : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_com
{
};

// UnityEngine.Texture
struct Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

struct Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700_StaticFields
{
	// System.Int32 UnityEngine.Texture::GenerateAllMips
	int32_t ___GenerateAllMips_4;
};

// UnityEngine.InputSystem.Users.InputUser/GlobalState
struct GlobalState_t11A6C6C3EF611D00EF34976903A48BCABCD6C9D3 
{
	// System.Int32 UnityEngine.InputSystem.Users.InputUser/GlobalState::pairingStateVersion
	int32_t ___pairingStateVersion_0;
	// System.UInt32 UnityEngine.InputSystem.Users.InputUser/GlobalState::lastUserId
	uint32_t ___lastUserId_1;
	// System.Int32 UnityEngine.InputSystem.Users.InputUser/GlobalState::allUserCount
	int32_t ___allUserCount_2;
	// System.Int32 UnityEngine.InputSystem.Users.InputUser/GlobalState::allPairedDeviceCount
	int32_t ___allPairedDeviceCount_3;
	// System.Int32 UnityEngine.InputSystem.Users.InputUser/GlobalState::allLostDeviceCount
	int32_t ___allLostDeviceCount_4;
	// UnityEngine.InputSystem.Users.InputUser[] UnityEngine.InputSystem.Users.InputUser/GlobalState::allUsers
	InputUserU5BU5D_t4B71AE3CDE5BB252EADB6494FEE05EE141C2B1FD* ___allUsers_5;
	// UnityEngine.InputSystem.Users.InputUser/UserData[] UnityEngine.InputSystem.Users.InputUser/GlobalState::allUserData
	UserDataU5BU5D_t5CB4987877C71E61FA131704B58CA6D8E5272C7E* ___allUserData_6;
	// UnityEngine.InputSystem.InputDevice[] UnityEngine.InputSystem.Users.InputUser/GlobalState::allPairedDevices
	InputDeviceU5BU5D_tA9AEFC6AF63557D3D5DCFB2B26DDA6F63147D548* ___allPairedDevices_7;
	// UnityEngine.InputSystem.InputDevice[] UnityEngine.InputSystem.Users.InputUser/GlobalState::allLostDevices
	InputDeviceU5BU5D_tA9AEFC6AF63557D3D5DCFB2B26DDA6F63147D548* ___allLostDevices_8;
	// UnityEngine.InputSystem.Utilities.InlinedArray`1<UnityEngine.InputSystem.Users.InputUser/OngoingAccountSelection> UnityEngine.InputSystem.Users.InputUser/GlobalState::ongoingAccountSelections
	InlinedArray_1_tED5DB880E229C88EB2F96B60C2BFBEC2CA7EC28C ___ongoingAccountSelections_9;
	// UnityEngine.InputSystem.Utilities.CallbackArray`1<System.Action`3<UnityEngine.InputSystem.Users.InputUser,UnityEngine.InputSystem.Users.InputUserChange,UnityEngine.InputSystem.InputDevice>> UnityEngine.InputSystem.Users.InputUser/GlobalState::onChange
	CallbackArray_1_tB60CC6CDA475FF8033F707EC1B4A66AF5B83F9E9 ___onChange_10;
	// UnityEngine.InputSystem.Utilities.CallbackArray`1<System.Action`2<UnityEngine.InputSystem.InputControl,UnityEngine.InputSystem.LowLevel.InputEventPtr>> UnityEngine.InputSystem.Users.InputUser/GlobalState::onUnpairedDeviceUsed
	CallbackArray_1_tE2A0EB348F3111C908D22768F814AE7219DB4F34 ___onUnpairedDeviceUsed_11;
	// UnityEngine.InputSystem.Utilities.CallbackArray`1<System.Func`3<UnityEngine.InputSystem.InputDevice,UnityEngine.InputSystem.LowLevel.InputEventPtr,System.Boolean>> UnityEngine.InputSystem.Users.InputUser/GlobalState::onPreFilterUnpairedDeviceUsed
	CallbackArray_1_t1A72A00347540C99C2A4BF0488E37A8C1B45C1BE ___onPreFilterUnpairedDeviceUsed_12;
	// System.Action`2<System.Object,UnityEngine.InputSystem.InputActionChange> UnityEngine.InputSystem.Users.InputUser/GlobalState::actionChangeDelegate
	Action_2_t4D6C6A84A6B44BE6193A1F64753F6E48558FBE9D* ___actionChangeDelegate_13;
	// System.Action`2<UnityEngine.InputSystem.InputDevice,UnityEngine.InputSystem.InputDeviceChange> UnityEngine.InputSystem.Users.InputUser/GlobalState::onDeviceChangeDelegate
	Action_2_tB79528C85CFEF7DFF52C575DDAA398D2FE6BC333* ___onDeviceChangeDelegate_14;
	// System.Action`2<UnityEngine.InputSystem.LowLevel.InputEventPtr,UnityEngine.InputSystem.InputDevice> UnityEngine.InputSystem.Users.InputUser/GlobalState::onEventDelegate
	Action_2_t4943DD8C32CAB983950535CEF3BABA85DF8C9AAA* ___onEventDelegate_15;
	// System.Boolean UnityEngine.InputSystem.Users.InputUser/GlobalState::onActionChangeHooked
	bool ___onActionChangeHooked_16;
	// System.Boolean UnityEngine.InputSystem.Users.InputUser/GlobalState::onDeviceChangeHooked
	bool ___onDeviceChangeHooked_17;
	// System.Boolean UnityEngine.InputSystem.Users.InputUser/GlobalState::onEventHooked
	bool ___onEventHooked_18;
	// System.Int32 UnityEngine.InputSystem.Users.InputUser/GlobalState::listenForUnpairedDeviceActivity
	int32_t ___listenForUnpairedDeviceActivity_19;
};
// Native definition for P/Invoke marshalling of UnityEngine.InputSystem.Users.InputUser/GlobalState
struct GlobalState_t11A6C6C3EF611D00EF34976903A48BCABCD6C9D3_marshaled_pinvoke
{
	int32_t ___pairingStateVersion_0;
	uint32_t ___lastUserId_1;
	int32_t ___allUserCount_2;
	int32_t ___allPairedDeviceCount_3;
	int32_t ___allLostDeviceCount_4;
	InputUser_tD938B6FAC4D79FB2BA7040DE247549A4F832000E* ___allUsers_5;
	UserData_t0F7AA24AC638FDFB7CF552415A75CAE057C2D42C_marshaled_pinvoke* ___allUserData_6;
	InputDeviceU5BU5D_tA9AEFC6AF63557D3D5DCFB2B26DDA6F63147D548* ___allPairedDevices_7;
	InputDeviceU5BU5D_tA9AEFC6AF63557D3D5DCFB2B26DDA6F63147D548* ___allLostDevices_8;
	InlinedArray_1_tED5DB880E229C88EB2F96B60C2BFBEC2CA7EC28C ___ongoingAccountSelections_9;
	CallbackArray_1_tB60CC6CDA475FF8033F707EC1B4A66AF5B83F9E9 ___onChange_10;
	CallbackArray_1_tE2A0EB348F3111C908D22768F814AE7219DB4F34 ___onUnpairedDeviceUsed_11;
	CallbackArray_1_t1A72A00347540C99C2A4BF0488E37A8C1B45C1BE ___onPreFilterUnpairedDeviceUsed_12;
	Il2CppMethodPointer ___actionChangeDelegate_13;
	Il2CppMethodPointer ___onDeviceChangeDelegate_14;
	Il2CppMethodPointer ___onEventDelegate_15;
	int32_t ___onActionChangeHooked_16;
	int32_t ___onDeviceChangeHooked_17;
	int32_t ___onEventHooked_18;
	int32_t ___listenForUnpairedDeviceActivity_19;
};
// Native definition for COM marshalling of UnityEngine.InputSystem.Users.InputUser/GlobalState
struct GlobalState_t11A6C6C3EF611D00EF34976903A48BCABCD6C9D3_marshaled_com
{
	int32_t ___pairingStateVersion_0;
	uint32_t ___lastUserId_1;
	int32_t ___allUserCount_2;
	int32_t ___allPairedDeviceCount_3;
	int32_t ___allLostDeviceCount_4;
	InputUser_tD938B6FAC4D79FB2BA7040DE247549A4F832000E* ___allUsers_5;
	UserData_t0F7AA24AC638FDFB7CF552415A75CAE057C2D42C_marshaled_com* ___allUserData_6;
	InputDeviceU5BU5D_tA9AEFC6AF63557D3D5DCFB2B26DDA6F63147D548* ___allPairedDevices_7;
	InputDeviceU5BU5D_tA9AEFC6AF63557D3D5DCFB2B26DDA6F63147D548* ___allLostDevices_8;
	InlinedArray_1_tED5DB880E229C88EB2F96B60C2BFBEC2CA7EC28C ___ongoingAccountSelections_9;
	CallbackArray_1_tB60CC6CDA475FF8033F707EC1B4A66AF5B83F9E9 ___onChange_10;
	CallbackArray_1_tE2A0EB348F3111C908D22768F814AE7219DB4F34 ___onUnpairedDeviceUsed_11;
	CallbackArray_1_t1A72A00347540C99C2A4BF0488E37A8C1B45C1BE ___onPreFilterUnpairedDeviceUsed_12;
	Il2CppMethodPointer ___actionChangeDelegate_13;
	Il2CppMethodPointer ___onDeviceChangeDelegate_14;
	Il2CppMethodPointer ___onEventDelegate_15;
	int32_t ___onActionChangeHooked_16;
	int32_t ___onDeviceChangeHooked_17;
	int32_t ___onEventHooked_18;
	int32_t ___listenForUnpairedDeviceActivity_19;
};

// UnityEngine.Behaviour
struct Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// UnityEngine.InputSystem.Users.InputUser
struct InputUser_tD938B6FAC4D79FB2BA7040DE247549A4F832000E 
{
	// System.UInt32 UnityEngine.InputSystem.Users.InputUser::m_Id
	uint32_t ___m_Id_1;
};

struct InputUser_tD938B6FAC4D79FB2BA7040DE247549A4F832000E_StaticFields
{
	// UnityEngine.InputSystem.Users.InputUser/GlobalState UnityEngine.InputSystem.Users.InputUser::s_GlobalState
	GlobalState_t11A6C6C3EF611D00EF34976903A48BCABCD6C9D3 ___s_GlobalState_2;
};

// Unity.RenderStreaming.OnStartedChannelHandler
struct OnStartedChannelHandler_tB71FDF0B00102C6564E6FA774D39574C043A8A33  : public MulticastDelegate_t
{
};

// UnityEngine.Renderer
struct Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// UnityEngine.Transform
struct Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// UnityEngine.XR.Management.XRGeneralSettings
struct XRGeneralSettings_t8F8D096944606B5AD845D010706BF7094ADEC8CE  : public ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A
{
	// UnityEngine.XR.Management.XRManagerSettings UnityEngine.XR.Management.XRGeneralSettings::m_LoaderManagerInstance
	XRManagerSettings_t7923B66EB3FEE58C7B9F85FF61749B774D3B9E52* ___m_LoaderManagerInstance_6;
	// System.Boolean UnityEngine.XR.Management.XRGeneralSettings::m_InitManagerOnStart
	bool ___m_InitManagerOnStart_7;
	// UnityEngine.XR.Management.XRManagerSettings UnityEngine.XR.Management.XRGeneralSettings::m_XRManager
	XRManagerSettings_t7923B66EB3FEE58C7B9F85FF61749B774D3B9E52* ___m_XRManager_8;
	// System.Boolean UnityEngine.XR.Management.XRGeneralSettings::m_ProviderIntialized
	bool ___m_ProviderIntialized_9;
	// System.Boolean UnityEngine.XR.Management.XRGeneralSettings::m_ProviderStarted
	bool ___m_ProviderStarted_10;
};

struct XRGeneralSettings_t8F8D096944606B5AD845D010706BF7094ADEC8CE_StaticFields
{
	// System.String UnityEngine.XR.Management.XRGeneralSettings::k_SettingsKey
	String_t* ___k_SettingsKey_4;
	// UnityEngine.XR.Management.XRGeneralSettings UnityEngine.XR.Management.XRGeneralSettings::s_RuntimeSettingsInstance
	XRGeneralSettings_t8F8D096944606B5AD845D010706BF7094ADEC8CE* ___s_RuntimeSettingsInstance_5;
};

// UnityEngine.XR.Management.XRLoader
struct XRLoader_t80B1B1934C40561C5352ABC95D567DC2A7C9C976  : public ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A
{
};

// UnityEngine.XR.Management.XRManagerSettings
struct XRManagerSettings_t7923B66EB3FEE58C7B9F85FF61749B774D3B9E52  : public ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A
{
	// System.Boolean UnityEngine.XR.Management.XRManagerSettings::m_InitializationComplete
	bool ___m_InitializationComplete_4;
	// System.Boolean UnityEngine.XR.Management.XRManagerSettings::m_RequiresSettingsUpdate
	bool ___m_RequiresSettingsUpdate_5;
	// System.Boolean UnityEngine.XR.Management.XRManagerSettings::m_AutomaticLoading
	bool ___m_AutomaticLoading_6;
	// System.Boolean UnityEngine.XR.Management.XRManagerSettings::m_AutomaticRunning
	bool ___m_AutomaticRunning_7;
	// System.Collections.Generic.List`1<UnityEngine.XR.Management.XRLoader> UnityEngine.XR.Management.XRManagerSettings::m_Loaders
	List_1_tA1A04BD6B1EE83992AE369D5DB31A028E9B57822* ___m_Loaders_8;
	// System.Collections.Generic.HashSet`1<UnityEngine.XR.Management.XRLoader> UnityEngine.XR.Management.XRManagerSettings::m_RegisteredLoaders
	HashSet_1_t174593AE6599738C19A33586587D63534CED9F0F* ___m_RegisteredLoaders_9;
	// UnityEngine.XR.Management.XRLoader UnityEngine.XR.Management.XRManagerSettings::<activeLoader>k__BackingField
	XRLoader_t80B1B1934C40561C5352ABC95D567DC2A7C9C976* ___U3CactiveLoaderU3Ek__BackingField_10;
};

// Unity.RenderStreaming.AudioStreamReceiver/OnUpdateReceiveAudioSourceHandler
struct OnUpdateReceiveAudioSourceHandler_tB00165D87D9F75327FB32136DF771EBE3F324D6C  : public MulticastDelegate_t
{
};

// Unity.RenderStreaming.VideoStreamReceiver/OnUpdateReceiveTextureHandler
struct OnUpdateReceiveTextureHandler_t8B95A7333D7120C552A9BD2043B9DCC43E7AE398  : public MulticastDelegate_t
{
};

// UnityEngine.AudioBehaviour
struct AudioBehaviour_t2DC0BEF7B020C952F3D2DA5AAAC88501C7EEB941  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

// UnityEngine.Camera
struct Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

struct Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184_StaticFields
{
	// UnityEngine.Camera/CameraCallback UnityEngine.Camera::onPreCull
	CameraCallback_t844E527BFE37BC0495E7F67993E43C07642DA9DD* ___onPreCull_4;
	// UnityEngine.Camera/CameraCallback UnityEngine.Camera::onPreRender
	CameraCallback_t844E527BFE37BC0495E7F67993E43C07642DA9DD* ___onPreRender_5;
	// UnityEngine.Camera/CameraCallback UnityEngine.Camera::onPostRender
	CameraCallback_t844E527BFE37BC0495E7F67993E43C07642DA9DD* ___onPostRender_6;
};

// UnityEngine.Canvas
struct Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

struct Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26_StaticFields
{
	// UnityEngine.Canvas/WillRenderCanvases UnityEngine.Canvas::preWillRenderCanvases
	WillRenderCanvases_tA4A6E66DBA797DCB45B995DBA449A9D1D80D0FBC* ___preWillRenderCanvases_4;
	// UnityEngine.Canvas/WillRenderCanvases UnityEngine.Canvas::willRenderCanvases
	WillRenderCanvases_tA4A6E66DBA797DCB45B995DBA449A9D1D80D0FBC* ___willRenderCanvases_5;
	// System.Action`1<System.Int32> UnityEngine.Canvas::<externBeginRenderOverlays>k__BackingField
	Action_1_tD69A6DC9FBE94131E52F5A73B2A9D4AB51EEC404* ___U3CexternBeginRenderOverlaysU3Ek__BackingField_6;
	// System.Action`2<System.Int32,System.Int32> UnityEngine.Canvas::<externRenderOverlaysBefore>k__BackingField
	Action_2_tD7438462601D3939500ED67463331FE00CFFBDB8* ___U3CexternRenderOverlaysBeforeU3Ek__BackingField_7;
	// System.Action`1<System.Int32> UnityEngine.Canvas::<externEndRenderOverlays>k__BackingField
	Action_1_tD69A6DC9FBE94131E52F5A73B2A9D4AB51EEC404* ___U3CexternEndRenderOverlaysU3Ek__BackingField_8;
};

// UnityEngine.MeshRenderer
struct MeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE  : public Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF
{
};

// UnityEngine.MonoBehaviour
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

// UnityEngine.RectTransform
struct RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5  : public Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1
{
};

struct RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5_StaticFields
{
	// UnityEngine.RectTransform/ReapplyDrivenProperties UnityEngine.RectTransform::reapplyDrivenProperties
	ReapplyDrivenProperties_t3482EA130A01FF7EE2EEFE37F66A5215D08CFE24* ___reapplyDrivenProperties_4;
};

// UnityEngine.AudioSource
struct AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299  : public AudioBehaviour_t2DC0BEF7B020C952F3D2DA5AAAC88501C7EEB941
{
};

// Unity.RenderStreaming.Samples.BroadcastSample
struct BroadcastSample_t9CEFF3CD3FD2181485A532B75E4C6A44914D7CE9  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// Unity.RenderStreaming.InputReceiver Unity.RenderStreaming.Samples.BroadcastSample::inputReceiver
	InputReceiver_tCE96B944D62722F35D322813BA122A58F71F765B* ___inputReceiver_4;
	// Unity.RenderStreaming.VideoStreamSender Unity.RenderStreaming.Samples.BroadcastSample::videoStreamSender
	VideoStreamSender_tC843D8A5E98D87418FF7AF2D4FE59038DF0F4066* ___videoStreamSender_5;
};

// CameraController
struct CameraController_tDC4FF0FA10418272A26E5E7539156F4F4A98E8C5  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
};

// Unity.RenderStreaming.DataChannelBase
struct DataChannelBase_t4D3AC9FFEE36E810DC397F71E543F20030C1F744  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Boolean Unity.RenderStreaming.DataChannelBase::local
	bool ___local_4;
	// System.String Unity.RenderStreaming.DataChannelBase::label
	String_t* ___label_5;
	// Unity.WebRTC.RTCDataChannel Unity.RenderStreaming.DataChannelBase::<Channel>k__BackingField
	RTCDataChannel_t249C16A38FD2A994D1A45381523F701A49BF1A77* ___U3CChannelU3Ek__BackingField_6;
	// Unity.RenderStreaming.OnStartedChannelHandler Unity.RenderStreaming.DataChannelBase::<OnStartedChannel>k__BackingField
	OnStartedChannelHandler_tB71FDF0B00102C6564E6FA774D39574C043A8A33* ___U3COnStartedChannelU3Ek__BackingField_7;
	// Unity.RenderStreaming.OnStoppedChannelHandler Unity.RenderStreaming.DataChannelBase::<OnStoppedChannel>k__BackingField
	OnStoppedChannelHandler_t99F9E7A9CB260042E3BC47D13AB3E1926ABB7DFE* ___U3COnStoppedChannelU3Ek__BackingField_8;
};

// LookAround
struct LookAround_t2A113C1D53E1B896A7E8F2FE149EF0889F59F24B  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
};

// Unity.RenderStreaming.SignalingHandlerBase
struct SignalingHandlerBase_t9747CBF6F94ACBA3C2F67846F8F0C792789721AB  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// Unity.RenderStreaming.IRenderStreamingHandler Unity.RenderStreaming.SignalingHandlerBase::m_handler
	RuntimeObject* ___m_handler_4;
};

// Unity.RenderStreaming.StreamReceiverBase
struct StreamReceiverBase_t98839D9EBAFAE58DC0657725A0717550A3C0846C  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// Unity.RenderStreaming.OnStartedStreamHandler Unity.RenderStreaming.StreamReceiverBase::<OnStartedStream>k__BackingField
	OnStartedStreamHandler_t4707129559723D6EE9C3DECA4D3AB1D970CA5490* ___U3COnStartedStreamU3Ek__BackingField_4;
	// Unity.RenderStreaming.OnStoppedStreamHandler Unity.RenderStreaming.StreamReceiverBase::<OnStoppedStream>k__BackingField
	OnStoppedStreamHandler_t7FA5840B2AB05DA6481BB74571A1CD795301252E* ___U3COnStoppedStreamU3Ek__BackingField_5;
	// Unity.WebRTC.RTCRtpReceiver Unity.RenderStreaming.StreamReceiverBase::m_receiver
	RTCRtpReceiver_tAF4DCA606AD86A954F0AECC3CF03CD7E20407836* ___m_receiver_6;
	// Unity.WebRTC.MediaStreamTrack Unity.RenderStreaming.StreamReceiverBase::<Track>k__BackingField
	MediaStreamTrack_tE9A3A14A55BD53667B26B202AF719053FDBDC2E6* ___U3CTrackU3Ek__BackingField_7;
	// Unity.WebRTC.TrackKind Unity.RenderStreaming.StreamReceiverBase::<Kind>k__BackingField
	int32_t ___U3CKindU3Ek__BackingField_8;
};

// Unity.RenderStreaming.StreamSenderBase
struct StreamSenderBase_t671631066490377DB07EC2DB0AFD605C899E5E67  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// Unity.RenderStreaming.OnStartedStreamHandler Unity.RenderStreaming.StreamSenderBase::<OnStartedStream>k__BackingField
	OnStartedStreamHandler_t4707129559723D6EE9C3DECA4D3AB1D970CA5490* ___U3COnStartedStreamU3Ek__BackingField_4;
	// Unity.RenderStreaming.OnStoppedStreamHandler Unity.RenderStreaming.StreamSenderBase::<OnStoppedStream>k__BackingField
	OnStoppedStreamHandler_t7FA5840B2AB05DA6481BB74571A1CD795301252E* ___U3COnStoppedStreamU3Ek__BackingField_5;
	// Unity.WebRTC.MediaStreamTrack Unity.RenderStreaming.StreamSenderBase::m_track
	MediaStreamTrack_tE9A3A14A55BD53667B26B202AF719053FDBDC2E6* ___m_track_6;
	// System.Collections.Generic.Dictionary`2<System.String,Unity.WebRTC.RTCRtpSender> Unity.RenderStreaming.StreamSenderBase::m_senders
	Dictionary_2_t5C2794E98907BE3FFA1055C9B004080A15D1C3A2* ___m_senders_7;
};

// Test
struct Test_tE08E78D2148871B8D08F758019DD90BE185E5B2D  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// Unity.RenderStreaming.RenderStreaming Test::renderStreaming
	RenderStreaming_t2035CE1B2000768E9829DB1D41A9EFA1644199EA* ___renderStreaming_4;
	// UnityEngine.MeshRenderer Test::planeMesh
	MeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE* ___planeMesh_5;
	// UnityEngine.AudioSource Test::remoteAudioSource
	AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* ___remoteAudioSource_6;
	// Unity.RenderStreaming.AudioStreamReceiver Test::receiveAudioViewer
	AudioStreamReceiver_t259328EA2AA138847368362753FD630E8209F285* ___receiveAudioViewer_7;
	// Unity.RenderStreaming.VideoStreamReceiver Test::receiveVideoViewer
	VideoStreamReceiver_t368CE6A3F484D7F61F4D2C1BE8DF2C6D83148C71* ___receiveVideoViewer_8;
	// Unity.RenderStreaming.SingleConnection Test::connection
	SingleConnection_tD953841F9CDC98CD0761ABE269BD6D9BFBA9FE7B* ___connection_9;
	// System.String Test::connectionId
	String_t* ___connectionId_10;
	// Unity.RenderStreaming.InputSender Test::inputSender
	InputSender_t07ED4DAB78F74631B4BF39A9C1554423DAAAD845* ___inputSender_11;
};

// UnityEngine.EventSystems.UIBehaviour
struct UIBehaviour_tB9D4295827BD2EEDEF0749200C6CA7090C742A9D  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
};

// Unity.Template.VR.XRPlatformControllerSetup
struct XRPlatformControllerSetup_tF3241056E2DD26648305E205151EB2ACF3333628  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.GameObject Unity.Template.VR.XRPlatformControllerSetup::m_LeftController
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___m_LeftController_4;
	// UnityEngine.GameObject Unity.Template.VR.XRPlatformControllerSetup::m_RightController
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___m_RightController_5;
	// UnityEngine.GameObject Unity.Template.VR.XRPlatformControllerSetup::m_LeftControllerOculusPackage
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___m_LeftControllerOculusPackage_6;
	// UnityEngine.GameObject Unity.Template.VR.XRPlatformControllerSetup::m_RightControllerOculusPackage
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___m_RightControllerOculusPackage_7;
};

// Unity.RenderStreaming.AudioStreamReceiver
struct AudioStreamReceiver_t259328EA2AA138847368362753FD630E8209F285  : public StreamReceiverBase_t98839D9EBAFAE58DC0657725A0717550A3C0846C
{
	// Unity.RenderStreaming.AudioStreamReceiver/OnUpdateReceiveAudioSourceHandler Unity.RenderStreaming.AudioStreamReceiver::OnUpdateReceiveAudioSource
	OnUpdateReceiveAudioSourceHandler_tB00165D87D9F75327FB32136DF771EBE3F324D6C* ___OnUpdateReceiveAudioSource_9;
	// UnityEngine.AudioSource Unity.RenderStreaming.AudioStreamReceiver::m_source
	AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* ___m_source_10;
};

// UnityEngine.UI.Graphic
struct Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931  : public UIBehaviour_tB9D4295827BD2EEDEF0749200C6CA7090C742A9D
{
	// UnityEngine.Material UnityEngine.UI.Graphic::m_Material
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___m_Material_6;
	// UnityEngine.Color UnityEngine.UI.Graphic::m_Color
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_Color_7;
	// System.Boolean UnityEngine.UI.Graphic::m_SkipLayoutUpdate
	bool ___m_SkipLayoutUpdate_8;
	// System.Boolean UnityEngine.UI.Graphic::m_SkipMaterialUpdate
	bool ___m_SkipMaterialUpdate_9;
	// System.Boolean UnityEngine.UI.Graphic::m_RaycastTarget
	bool ___m_RaycastTarget_10;
	// UnityEngine.Vector4 UnityEngine.UI.Graphic::m_RaycastPadding
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___m_RaycastPadding_11;
	// UnityEngine.RectTransform UnityEngine.UI.Graphic::m_RectTransform
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___m_RectTransform_12;
	// UnityEngine.CanvasRenderer UnityEngine.UI.Graphic::m_CanvasRenderer
	CanvasRenderer_tAB9A55A976C4E3B2B37D0CE5616E5685A8B43860* ___m_CanvasRenderer_13;
	// UnityEngine.Canvas UnityEngine.UI.Graphic::m_Canvas
	Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26* ___m_Canvas_14;
	// System.Boolean UnityEngine.UI.Graphic::m_VertsDirty
	bool ___m_VertsDirty_15;
	// System.Boolean UnityEngine.UI.Graphic::m_MaterialDirty
	bool ___m_MaterialDirty_16;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyLayoutCallback
	UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* ___m_OnDirtyLayoutCallback_17;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyVertsCallback
	UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* ___m_OnDirtyVertsCallback_18;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyMaterialCallback
	UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* ___m_OnDirtyMaterialCallback_19;
	// UnityEngine.Mesh UnityEngine.UI.Graphic::m_CachedMesh
	Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* ___m_CachedMesh_22;
	// UnityEngine.Vector2[] UnityEngine.UI.Graphic::m_CachedUvs
	Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* ___m_CachedUvs_23;
	// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween> UnityEngine.UI.Graphic::m_ColorTweenRunner
	TweenRunner_1_t5BB0582F926E75E2FE795492679A6CF55A4B4BC4* ___m_ColorTweenRunner_24;
	// System.Boolean UnityEngine.UI.Graphic::<useLegacyMeshGeneration>k__BackingField
	bool ___U3CuseLegacyMeshGenerationU3Ek__BackingField_25;
};

struct Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931_StaticFields
{
	// UnityEngine.Material UnityEngine.UI.Graphic::s_DefaultUI
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___s_DefaultUI_4;
	// UnityEngine.Texture2D UnityEngine.UI.Graphic::s_WhiteTexture
	Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* ___s_WhiteTexture_5;
	// UnityEngine.Mesh UnityEngine.UI.Graphic::s_Mesh
	Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* ___s_Mesh_20;
	// UnityEngine.UI.VertexHelper UnityEngine.UI.Graphic::s_VertexHelper
	VertexHelper_tB905FCB02AE67CBEE5F265FE37A5938FC5D136FE* ___s_VertexHelper_21;
};

// Unity.RenderStreaming.InputChannelReceiverBase
struct InputChannelReceiverBase_t04BA82F02C33D42DF0682D0F81FE128E751CB98B  : public DataChannelBase_t4D3AC9FFEE36E810DC397F71E543F20030C1F744
{
	// System.Action`2<UnityEngine.InputSystem.InputDevice,UnityEngine.InputSystem.InputDeviceChange> Unity.RenderStreaming.InputChannelReceiverBase::onDeviceChange
	Action_2_tB79528C85CFEF7DFF52C575DDAA398D2FE6BC333* ___onDeviceChange_9;
};

// Unity.RenderStreaming.InputSender
struct InputSender_t07ED4DAB78F74631B4BF39A9C1554423DAAAD845  : public DataChannelBase_t4D3AC9FFEE36E810DC397F71E543F20030C1F744
{
	// Unity.RenderStreaming.InputSystem.Sender Unity.RenderStreaming.InputSender::sender
	Sender_t234F1DB016429A45DA2E9C7DF59EA1A57E1A83BF* ___sender_9;
	// Unity.RenderStreaming.InputSystem.InputRemoting Unity.RenderStreaming.InputSender::senderInput
	InputRemoting_t4BBB51BEA47ACD8A408459C612008D52240C6985* ___senderInput_10;
	// System.IDisposable Unity.RenderStreaming.InputSender::suscriberDisposer
	RuntimeObject* ___suscriberDisposer_11;
};

// Unity.RenderStreaming.SingleConnection
struct SingleConnection_tD953841F9CDC98CD0761ABE269BD6D9BFBA9FE7B  : public SignalingHandlerBase_t9747CBF6F94ACBA3C2F67846F8F0C792789721AB
{
	// System.Collections.Generic.List`1<UnityEngine.Component> Unity.RenderStreaming.SingleConnection::streams
	List_1_t584CB490C8F4C21E0A0D5545409ED60BF71F3FE4* ___streams_5;
	// System.String Unity.RenderStreaming.SingleConnection::connectionId
	String_t* ___connectionId_6;
};

// Unity.RenderStreaming.VideoStreamReceiver
struct VideoStreamReceiver_t368CE6A3F484D7F61F4D2C1BE8DF2C6D83148C71  : public StreamReceiverBase_t98839D9EBAFAE58DC0657725A0717550A3C0846C
{
	// Unity.RenderStreaming.VideoStreamReceiver/OnUpdateReceiveTextureHandler Unity.RenderStreaming.VideoStreamReceiver::OnUpdateReceiveTexture
	OnUpdateReceiveTextureHandler_t8B95A7333D7120C552A9BD2043B9DCC43E7AE398* ___OnUpdateReceiveTexture_9;
	// UnityEngine.Vector2Int Unity.RenderStreaming.VideoStreamReceiver::streamingSize
	Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A ___streamingSize_10;
	// UnityEngine.Texture Unity.RenderStreaming.VideoStreamReceiver::m_receiveTexture
	Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* ___m_receiveTexture_11;
};

// Unity.RenderStreaming.VideoStreamSender
struct VideoStreamSender_tC843D8A5E98D87418FF7AF2D4FE59038DF0F4066  : public StreamSenderBase_t671631066490377DB07EC2DB0AFD605C899E5E67
{
	// UnityEngine.Vector2Int Unity.RenderStreaming.VideoStreamSender::streamingSize
	Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A ___streamingSize_8;
	// UnityEngine.Texture Unity.RenderStreaming.VideoStreamSender::<SendTexture>k__BackingField
	Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* ___U3CSendTextureU3Ek__BackingField_9;
};

// Unity.RenderStreaming.InputReceiver
struct InputReceiver_tCE96B944D62722F35D322813BA122A58F71F765B  : public InputChannelReceiverBase_t04BA82F02C33D42DF0682D0F81FE128E751CB98B
{
	// System.Action`2<UnityEngine.InputSystem.InputDevice,UnityEngine.InputSystem.InputDeviceChange> Unity.RenderStreaming.InputReceiver::onDeviceChange
	Action_2_tB79528C85CFEF7DFF52C575DDAA398D2FE6BC333* ___onDeviceChange_10;
	// UnityEngine.InputSystem.InputActionAsset Unity.RenderStreaming.InputReceiver::m_Actions
	InputActionAsset_tF217AC5223B4AAA46EBCB44B33E9259FB117417D* ___m_Actions_11;
	// UnityEngine.InputSystem.PlayerInput/ActionEvent[] Unity.RenderStreaming.InputReceiver::m_ActionEvents
	ActionEventU5BU5D_t45BD340B9AA6F3287339EA686E3FE0A47801E88F* ___m_ActionEvents_12;
	// System.String Unity.RenderStreaming.InputReceiver::m_DefaultActionMap
	String_t* ___m_DefaultActionMap_13;
	// UnityEngine.InputSystem.InputActionMap Unity.RenderStreaming.InputReceiver::m_CurrentActionMap
	InputActionMap_tFCE82E0E014319D4DED9F8962B06655DD0420A09* ___m_CurrentActionMap_14;
	// System.Boolean Unity.RenderStreaming.InputReceiver::m_InputActive
	bool ___m_InputActive_15;
	// System.Boolean Unity.RenderStreaming.InputReceiver::m_Enabled
	bool ___m_Enabled_16;
	// System.Boolean Unity.RenderStreaming.InputReceiver::m_ActionsInitialized
	bool ___m_ActionsInitialized_17;
	// UnityEngine.InputSystem.Users.InputUser Unity.RenderStreaming.InputReceiver::m_InputUser
	InputUser_tD938B6FAC4D79FB2BA7040DE247549A4F832000E ___m_InputUser_18;
	// Unity.RenderStreaming.InputSystem.Receiver Unity.RenderStreaming.InputReceiver::receiver
	Receiver_t3693E96FFA61969B9B9F01B3F38E241C176E8B13* ___receiver_19;
	// Unity.RenderStreaming.InputSystem.InputRemoting Unity.RenderStreaming.InputReceiver::receiverInput
	InputRemoting_t4BBB51BEA47ACD8A408459C612008D52240C6985* ___receiverInput_20;
	// System.IDisposable Unity.RenderStreaming.InputReceiver::subscriberDisposer
	RuntimeObject* ___subscriberDisposer_21;
};

// UnityEngine.UI.MaskableGraphic
struct MaskableGraphic_tFC5B6BE351C90DE53744DF2A70940242774B361E  : public Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931
{
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_ShouldRecalculateStencil
	bool ___m_ShouldRecalculateStencil_26;
	// UnityEngine.Material UnityEngine.UI.MaskableGraphic::m_MaskMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___m_MaskMaterial_27;
	// UnityEngine.UI.RectMask2D UnityEngine.UI.MaskableGraphic::m_ParentMask
	RectMask2D_tACF92BE999C791A665BD1ADEABF5BCEB82846670* ___m_ParentMask_28;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_Maskable
	bool ___m_Maskable_29;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_IsMaskingGraphic
	bool ___m_IsMaskingGraphic_30;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_IncludeForMasking
	bool ___m_IncludeForMasking_31;
	// UnityEngine.UI.MaskableGraphic/CullStateChangedEvent UnityEngine.UI.MaskableGraphic::m_OnCullStateChanged
	CullStateChangedEvent_t6073CD0D951EC1256BF74B8F9107D68FC89B99B8* ___m_OnCullStateChanged_32;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_ShouldRecalculate
	bool ___m_ShouldRecalculate_33;
	// System.Int32 UnityEngine.UI.MaskableGraphic::m_StencilValue
	int32_t ___m_StencilValue_34;
	// UnityEngine.Vector3[] UnityEngine.UI.MaskableGraphic::m_Corners
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___m_Corners_35;
};

// UnityEngine.UI.RawImage
struct RawImage_tFF12F7DB574FBDC1863CF607C7A12A5D9F8D6179  : public MaskableGraphic_tFC5B6BE351C90DE53744DF2A70940242774B361E
{
	// UnityEngine.Texture UnityEngine.UI.RawImage::m_Texture
	Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* ___m_Texture_36;
	// UnityEngine.Rect UnityEngine.UI.RawImage::m_UVRect
	Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D ___m_UVRect_37;
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif
// UnityEngine.Vector3[]
struct Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C  : public RuntimeArray
{
	ALIGN_FIELD (8) Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 m_Items[1];

	inline Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 value)
	{
		m_Items[index] = value;
	}
};


// TValue UnityEngine.InputSystem.InputAction/CallbackContext::ReadValue<UnityEngine.Vector2>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 CallbackContext_ReadValue_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_m454ADEAE74A5A469E011CF78D6303A1034659830_gshared (CallbackContext_tB251EE41F509C6E8A6B05EC97C029A45DF4F5FA8* __this, const RuntimeMethod* method) ;
// TValue UnityEngine.InputSystem.InputAction/CallbackContext::ReadValue<UnityEngine.Quaternion>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 CallbackContext_ReadValue_TisQuaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_m020AD5873BB6CE85B752DF8D11920FA5FB46214E_gshared (CallbackContext_tB251EE41F509C6E8A6B05EC97C029A45DF4F5FA8* __this, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;

// System.Void UnityEngine.MonoBehaviour::print(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour_print_mED815C779E369787B3E9646A6DE96FBC2944BF0B (RuntimeObject* ___message0, const RuntimeMethod* method) ;
// TValue UnityEngine.InputSystem.InputAction/CallbackContext::ReadValue<UnityEngine.Vector2>()
inline Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 CallbackContext_ReadValue_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_m454ADEAE74A5A469E011CF78D6303A1034659830 (CallbackContext_tB251EE41F509C6E8A6B05EC97C029A45DF4F5FA8* __this, const RuntimeMethod* method)
{
	return ((  Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 (*) (CallbackContext_tB251EE41F509C6E8A6B05EC97C029A45DF4F5FA8*, const RuntimeMethod*))CallbackContext_ReadValue_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_m454ADEAE74A5A469E011CF78D6303A1034659830_gshared)(__this, method);
}
// UnityEngine.Transform UnityEngine.Component::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Transform::get_eulerAngles()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Transform_get_eulerAngles_mCAAF48EFCF628F1ED91C2FFE75A4FD19C039DD6A (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Vector3::.ctor(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, float ___x0, float ___y1, float ___z2, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::op_Addition(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Addition_m087D6F0EC60843D455F9F83D25FE42B2433AAD1D_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___b1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::set_eulerAngles(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_eulerAngles_m9F0BC484A7915A51FAB87230644229B75BACA004 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___value0, const RuntimeMethod* method) ;
// TValue UnityEngine.InputSystem.InputAction/CallbackContext::ReadValue<UnityEngine.Quaternion>()
inline Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 CallbackContext_ReadValue_TisQuaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_m020AD5873BB6CE85B752DF8D11920FA5FB46214E (CallbackContext_tB251EE41F509C6E8A6B05EC97C029A45DF4F5FA8* __this, const RuntimeMethod* method)
{
	return ((  Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 (*) (CallbackContext_tB251EE41F509C6E8A6B05EC97C029A45DF4F5FA8*, const RuntimeMethod*))CallbackContext_ReadValue_TisQuaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_m020AD5873BB6CE85B752DF8D11920FA5FB46214E_gshared)(__this, method);
}
// System.Void UnityEngine.Transform::set_rotation(UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_rotation_m61340DE74726CF0F9946743A727C4D444397331D (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.MonoBehaviour::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Input::GetMouseButton(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Input_GetMouseButton_mE545CF4B790C6E202808B827E3141BEC3330DB70 (int32_t ___button0, const RuntimeMethod* method) ;
// System.Void LookAround::HandleHorizontalRotation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LookAround_HandleHorizontalRotation_m32F1EF8A1EF0CA2DBF1740D226DE4B540F34CA05 (LookAround_t2A113C1D53E1B896A7E8F2FE149EF0889F59F24B* __this, const RuntimeMethod* method) ;
// System.Void LookAround::HandleVerticalRotation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LookAround_HandleVerticalRotation_mC2A0E3B8CC0B942C851B05FE0E5D11ADB415739F (LookAround_t2A113C1D53E1B896A7E8F2FE149EF0889F59F24B* __this, const RuntimeMethod* method) ;
// System.Single UnityEngine.Input::GetAxis(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Input_GetAxis_m1F49B26F24032F45FB4583C95FB24E6771A161D4 (String_t* ___axisName0, const RuntimeMethod* method) ;
// UnityEngine.Quaternion UnityEngine.Transform::get_localRotation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Transform_get_localRotation_mD53D37611A5DAE93EC6C7BBCAC337408C5CACA77 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Quaternion::get_eulerAngles()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Quaternion_get_eulerAngles_m2DB5158B5C3A71FD60FC8A6EE43D3AAA1CFED122_inline (Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974* __this, const RuntimeMethod* method) ;
// UnityEngine.Quaternion UnityEngine.Quaternion::Euler(UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_Euler_m66E346161C9778DF8486DB4FE823D8F81A54AF1D_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___euler0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::set_localRotation(UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_localRotation_mAB4A011D134BA58AB780BECC0025CA65F16185FA (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___value0, const RuntimeMethod* method) ;
// UnityEngine.RectTransform UnityEngine.UI.Graphic::get_rectTransform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* Graphic_get_rectTransform_mF4752E8934267D630810E84CE02CDFB81EB1FD6D (Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.RectTransform::GetWorldCorners(UnityEngine.Vector3[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RectTransform_GetWorldCorners_m6E15303C3B065B2F65E0A7F0E0217695564C2E09 (RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* __this, Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___fourCornersArray0, const RuntimeMethod* method) ;
// UnityEngine.Canvas UnityEngine.UI.Graphic::get_canvas()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26* Graphic_get_canvas_mEA2161DF3BD736541DE41F9B814C4860FEB76419 (Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931* __this, const RuntimeMethod* method) ;
// UnityEngine.Camera UnityEngine.Canvas::get_worldCamera()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* Canvas_get_worldCamera_mD2FDE13B61A5213F4E64B40008EB0A8D2D07B853 (Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector2 UnityEngine.RectTransformUtility::WorldToScreenPoint(UnityEngine.Camera,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 RectTransformUtility_WorldToScreenPoint_m5629068CE7C8D2E654F8F529E89DC5802F3452BB (Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* ___cam0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___worldPoint1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Rect::.ctor(System.Single,System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rect__ctor_m18C3033D135097BEE424AAA68D91C706D2647F23 (Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D* __this, float ___x0, float ___y1, float ___width2, float ___height3, const RuntimeMethod* method) ;
// UnityEngine.Texture UnityEngine.UI.RawImage::get_texture()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* RawImage_get_texture_m84CCFDF78F6886F73EBE5A7C78D6E9C3CA903813 (RawImage_tFF12F7DB574FBDC1863CF607C7A12A5D9F8D6179* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Vector2Int::.ctor(System.Int32,System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector2Int__ctor_mC20D1312133EB8CB63EC11067088B043660F11CE_inline (Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A* __this, int32_t ___x0, int32_t ___y1, const RuntimeMethod* method) ;
// System.Void Unity.RenderStreaming.InputSender::SetInputRange(UnityEngine.Rect,UnityEngine.Vector2Int)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputSender_SetInputRange_mA2039F1DF70744AA19731CEE356F715B79A0030B (InputSender_t07ED4DAB78F74631B4BF39A9C1554423DAAAD845* __this, Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D ___region0, Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A ___size1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Debug::Log(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_Log_m86567BCF22BBE7809747817453CACA0E41E68219 (RuntimeObject* ___message0, const RuntimeMethod* method) ;
// System.Void Unity.RenderStreaming.VideoStreamReceiver/OnUpdateReceiveTextureHandler::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OnUpdateReceiveTextureHandler__ctor_m891E0C8C52DCAC75D6042996A9DF96476CA85653 (OnUpdateReceiveTextureHandler_t8B95A7333D7120C552A9BD2043B9DCC43E7AE398* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// System.Delegate System.Delegate::Combine(System.Delegate,System.Delegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Delegate_t* Delegate_Combine_m8B9D24CED35033C7FC56501DFE650F5CB7FF012C (Delegate_t* ___a0, Delegate_t* ___b1, const RuntimeMethod* method) ;
// System.Void Unity.RenderStreaming.AudioStreamReceiver::SetSource(UnityEngine.AudioSource)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioStreamReceiver_SetSource_m93F439BE07EEE14710A03AAEEF573DAF1F4B9B96 (AudioStreamReceiver_t259328EA2AA138847368362753FD630E8209F285* __this, AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* ___source0, const RuntimeMethod* method) ;
// System.Void Unity.RenderStreaming.AudioStreamReceiver/OnUpdateReceiveAudioSourceHandler::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OnUpdateReceiveAudioSourceHandler__ctor_m4F066AFAF5B259D9506E14317142DF4AFF25D347 (OnUpdateReceiveAudioSourceHandler_tB00165D87D9F75327FB32136DF771EBE3F324D6C* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponent<Unity.RenderStreaming.InputSender>()
inline InputSender_t07ED4DAB78F74631B4BF39A9C1554423DAAAD845* Component_GetComponent_TisInputSender_t07ED4DAB78F74631B4BF39A9C1554423DAAAD845_m6869E81BCE0A15CB7CD5EB41245F29278E126B30 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  InputSender_t07ED4DAB78F74631B4BF39A9C1554423DAAAD845* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// Unity.RenderStreaming.OnStartedChannelHandler Unity.RenderStreaming.DataChannelBase::get_OnStartedChannel()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR OnStartedChannelHandler_tB71FDF0B00102C6564E6FA774D39574C043A8A33* DataChannelBase_get_OnStartedChannel_mC5F7AD20D80B842A4FC0BC48DDC2BBFA1BDCE4F8_inline (DataChannelBase_t4D3AC9FFEE36E810DC397F71E543F20030C1F744* __this, const RuntimeMethod* method) ;
// System.Void Unity.RenderStreaming.OnStartedChannelHandler::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OnStartedChannelHandler__ctor_m8A1BEE345DB284048A2BB3899175531D4ACD8D97 (OnStartedChannelHandler_tB71FDF0B00102C6564E6FA774D39574C043A8A33* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// System.Void Unity.RenderStreaming.DataChannelBase::set_OnStartedChannel(Unity.RenderStreaming.OnStartedChannelHandler)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void DataChannelBase_set_OnStartedChannel_m3BD9A4A76218ECEF13DC68C0113507DA1EF57B63_inline (DataChannelBase_t4D3AC9FFEE36E810DC397F71E543F20030C1F744* __this, OnStartedChannelHandler_tB71FDF0B00102C6564E6FA774D39574C043A8A33* ___value0, const RuntimeMethod* method) ;
// System.Void Test::OnStart()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Test_OnStart_m9CBF5F4EB8B20C465B5A6B0CCC2DB63E5597FF29 (Test_tE08E78D2148871B8D08F758019DD90BE185E5B2D* __this, const RuntimeMethod* method) ;
// UnityEngine.Material UnityEngine.Renderer::get_material()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* Renderer_get_material_m5BA2A00816C4CC66580D4B2E409CF10718C15656 (Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Material::set_mainTexture(UnityEngine.Texture)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Material_set_mainTexture_m389E048BA9C81B603EBF36BD792212B296317AC0 (Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* __this, Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* ___value0, const RuntimeMethod* method) ;
// System.Void Test::SetInputChange()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Test_SetInputChange_mD755EB8C7A9DE336DEFCA939A3F178D2833C9E66 (Test_tE08E78D2148871B8D08F758019DD90BE185E5B2D* __this, const RuntimeMethod* method) ;
// System.Boolean Unity.RenderStreaming.DataChannelBase::get_IsConnected()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool DataChannelBase_get_IsConnected_m3367F7CFA659D157425112BFD11BFAEA4C7BEA01 (DataChannelBase_t4D3AC9FFEE36E810DC397F71E543F20030C1F744* __this, const RuntimeMethod* method) ;
// UnityEngine.Texture UnityEngine.Material::get_mainTexture()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* Material_get_mainTexture_mC6C6B860B44321F0342AEFA0DD7702384334F37D (Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Object::op_Equality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Equality_mD3DB0D72CE0250C84033DC2A90AEF9D59896E536 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___x0, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___y1, const RuntimeMethod* method) ;
// System.Void Unity.RenderStreaming.InputSender::EnableInputPositionCorrection(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputSender_EnableInputPositionCorrection_mE2350BB8096101E6F33BC0D3024EAD3F66586F4E (InputSender_t07ED4DAB78F74631B4BF39A9C1554423DAAAD845* __this, bool ___enabled0, const RuntimeMethod* method) ;
// System.Boolean System.String::IsNullOrEmpty(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_IsNullOrEmpty_m54CF0907E7C4F3AFB2E796A13DC751ECBB8DB64A (String_t* ___value0, const RuntimeMethod* method) ;
// System.Guid System.Guid::NewGuid()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Guid_t Guid_NewGuid_m1827D92D71326C3F3C263F057F6E90F907617903 (const RuntimeMethod* method) ;
// System.String System.Guid::ToString(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Guid_ToString_mDAA91A4A993E3A7AD8339665E3F0CC35FE00E833 (Guid_t* __this, String_t* ___format0, const RuntimeMethod* method) ;
// System.Void Test/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m71CD9559B62F6D31495396C9EB82C02D8C990AAA (U3CU3Ec_tBF9F5AFB6F4C4AFADB968C649ABEB2706AA5DB44* __this, const RuntimeMethod* method) ;
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2 (RuntimeObject* __this, const RuntimeMethod* method) ;
// System.Boolean Unity.VisualScripting.UnityObjectUtility::IsUnityNull(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UnityObjectUtility_IsUnityNull_mA930F90A7AA178553879A76F100D32F02A0D13D0 (RuntimeObject* ___obj0, const RuntimeMethod* method) ;
// System.Void UnityEngine.AudioSource::set_loop(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioSource_set_loop_m834A590939D8456008C0F897FD80B0ECFFB7FE56 (AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* __this, bool ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.AudioSource::Play()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioSource_Play_m95DF07111C61D0E0F00257A00384D31531D590C3 (AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* __this, const RuntimeMethod* method) ;
// UnityEngine.XR.Management.XRGeneralSettings UnityEngine.XR.Management.XRGeneralSettings::get_Instance()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR XRGeneralSettings_t8F8D096944606B5AD845D010706BF7094ADEC8CE* XRGeneralSettings_get_Instance_mF17EAF521849B0E007AEE3B009727D3DF9EF110F (const RuntimeMethod* method) ;
// UnityEngine.XR.Management.XRManagerSettings UnityEngine.XR.Management.XRGeneralSettings::get_Manager()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR XRManagerSettings_t7923B66EB3FEE58C7B9F85FF61749B774D3B9E52* XRGeneralSettings_get_Manager_m112FEB4E6DFB7B5F5C4A2DEC4E975CF2EBD51B42 (XRGeneralSettings_t8F8D096944606B5AD845D010706BF7094ADEC8CE* __this, const RuntimeMethod* method) ;
// System.Collections.Generic.IReadOnlyList`1<UnityEngine.XR.Management.XRLoader> UnityEngine.XR.Management.XRManagerSettings::get_activeLoaders()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* XRManagerSettings_get_activeLoaders_m47D0FF16B7012A87F56D93124DC5D8DA0ACA591F_inline (XRManagerSettings_t7923B66EB3FEE58C7B9F85FF61749B774D3B9E52* __this, const RuntimeMethod* method) ;
// System.String UnityEngine.Object::get_name()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Object_get_name_mAC2F6B897CF1303BA4249B4CB55271AFACBB6392 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* __this, const RuntimeMethod* method) ;
// System.Boolean System.String::Equals(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_Equals_mCD5F35DEDCAFE51ACD4E033726FC2EF8DF7E9B4D (String_t* __this, String_t* ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.GameObject::SetActive(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, bool ___value0, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.Screen::get_width()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Screen_get_width_mCA5D955A53CF6D29C8C7118D517D0FC84AE8056C (const RuntimeMethod* method) ;
// System.Int32 UnityEngine.Screen::get_height()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Screen_get_height_m624DD2D53F34087064E3B9D09AC2207DB4E86CA8 (const RuntimeMethod* method) ;
// System.Void Unity.RenderStreaming.InputReceiver::SetInputRange(UnityEngine.Vector2Int,UnityEngine.Rect)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputReceiver_SetInputRange_m45E3AFB1801967B9A5B314BA14E0AD9BA8EE89F5 (InputReceiver_tCE96B944D62722F35D322813BA122A58F71F765B* __this, Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A ___size0, Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D ___region1, const RuntimeMethod* method) ;
// System.Void Unity.RenderStreaming.Samples.InputReceiverExtension::SetInputRange(Unity.RenderStreaming.InputReceiver,UnityEngine.Vector2Int)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputReceiverExtension_SetInputRange_m45AA03C816EDF750A26BB4A679D86115FD02F014 (InputReceiver_tCE96B944D62722F35D322813BA122A58F71F765B* ___reveiver0, Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A ___size1, const RuntimeMethod* method) ;
// System.Void Unity.RenderStreaming.InputReceiver::SetEnableInputPositionCorrection(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputReceiver_SetEnableInputPositionCorrection_mF7B8604E34717D9541CCA6B217803E2FF3670714 (InputReceiver_tCE96B944D62722F35D322813BA122A58F71F765B* __this, bool ___enabled0, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Quaternion::Internal_ToEulerRad(UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Quaternion_Internal_ToEulerRad_m9B2C77284AEE6F2C43B6C42F1F888FB4FC904462 (Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___rotation0, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::op_Multiply(UnityEngine.Vector3,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Multiply_m516FE285F5342F922C6EB3FCB33197E9017FF484_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, float ___d1, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Quaternion::Internal_MakePositive(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Quaternion_Internal_MakePositive_m864320DA2D027C186C95B2A5BC2C66B0EB4A6C11 (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___euler0, const RuntimeMethod* method) ;
// UnityEngine.Quaternion UnityEngine.Quaternion::Internal_FromEulerRad(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_Internal_FromEulerRad_m2842B9FFB31CDC0F80B7C2172E22831D11D91E93 (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___euler0, const RuntimeMethod* method) ;
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
// System.Void CameraController::Look(UnityEngine.InputSystem.InputAction/CallbackContext)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CameraController_Look_mE4EEAF4D584971153389430C5D84734E332148F8 (CameraController_tDC4FF0FA10418272A26E5E7539156F4F4A98E8C5* __this, CallbackContext_tB251EE41F509C6E8A6B05EC97C029A45DF4F5FA8 ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CallbackContext_ReadValue_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_m454ADEAE74A5A469E011CF78D6303A1034659830_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CallbackContext_tB251EE41F509C6E8A6B05EC97C029A45DF4F5FA8_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// print(value);
		CallbackContext_tB251EE41F509C6E8A6B05EC97C029A45DF4F5FA8 L_0 = ___value0;
		CallbackContext_tB251EE41F509C6E8A6B05EC97C029A45DF4F5FA8 L_1 = L_0;
		RuntimeObject* L_2 = Box(CallbackContext_tB251EE41F509C6E8A6B05EC97C029A45DF4F5FA8_il2cpp_TypeInfo_var, &L_1);
		MonoBehaviour_print_mED815C779E369787B3E9646A6DE96FBC2944BF0B(L_2, NULL);
		// Vector2 input = value.ReadValue<Vector2>();
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_3;
		L_3 = CallbackContext_ReadValue_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_m454ADEAE74A5A469E011CF78D6303A1034659830((&___value0), CallbackContext_ReadValue_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_m454ADEAE74A5A469E011CF78D6303A1034659830_RuntimeMethod_var);
		V_0 = L_3;
		// transform.eulerAngles += new Vector3(-input.y*0.1f, input.x*0.1f, 0);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_4;
		L_4 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_5 = L_4;
		NullCheck(L_5);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6;
		L_6 = Transform_get_eulerAngles_mCAAF48EFCF628F1ED91C2FFE75A4FD19C039DD6A(L_5, NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_7 = V_0;
		float L_8 = L_7.___y_1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_9 = V_0;
		float L_10 = L_9.___x_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_11;
		memset((&L_11), 0, sizeof(L_11));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_11), ((float)il2cpp_codegen_multiply(((-L_8)), (0.100000001f))), ((float)il2cpp_codegen_multiply(L_10, (0.100000001f))), (0.0f), /*hidden argument*/NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_12;
		L_12 = Vector3_op_Addition_m087D6F0EC60843D455F9F83D25FE42B2433AAD1D_inline(L_6, L_11, NULL);
		NullCheck(L_5);
		Transform_set_eulerAngles_m9F0BC484A7915A51FAB87230644229B75BACA004(L_5, L_12, NULL);
		// }
		return;
	}
}
// System.Void CameraController::LookVr(UnityEngine.InputSystem.InputAction/CallbackContext)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CameraController_LookVr_mF2E06B0593014AD5D5F660F835FF617B9DD88366 (CameraController_tDC4FF0FA10418272A26E5E7539156F4F4A98E8C5* __this, CallbackContext_tB251EE41F509C6E8A6B05EC97C029A45DF4F5FA8 ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CallbackContext_ReadValue_TisQuaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_m020AD5873BB6CE85B752DF8D11920FA5FB46214E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CallbackContext_tB251EE41F509C6E8A6B05EC97C029A45DF4F5FA8_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// print(value);
		CallbackContext_tB251EE41F509C6E8A6B05EC97C029A45DF4F5FA8 L_0 = ___value0;
		CallbackContext_tB251EE41F509C6E8A6B05EC97C029A45DF4F5FA8 L_1 = L_0;
		RuntimeObject* L_2 = Box(CallbackContext_tB251EE41F509C6E8A6B05EC97C029A45DF4F5FA8_il2cpp_TypeInfo_var, &L_1);
		MonoBehaviour_print_mED815C779E369787B3E9646A6DE96FBC2944BF0B(L_2, NULL);
		// Quaternion input = value.ReadValue<Quaternion>();
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_3;
		L_3 = CallbackContext_ReadValue_TisQuaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_m020AD5873BB6CE85B752DF8D11920FA5FB46214E((&___value0), CallbackContext_ReadValue_TisQuaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_m020AD5873BB6CE85B752DF8D11920FA5FB46214E_RuntimeMethod_var);
		V_0 = L_3;
		// transform.rotation = input;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_4;
		L_4 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_5 = V_0;
		NullCheck(L_4);
		Transform_set_rotation_m61340DE74726CF0F9946743A727C4D444397331D(L_4, L_5, NULL);
		// }
		return;
	}
}
// System.Void CameraController::LookVr2(UnityEngine.InputSystem.InputAction/CallbackContext)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CameraController_LookVr2_mBCAA19E5C632FD8A4FEC3A02A3B2834E97492C00 (CameraController_tDC4FF0FA10418272A26E5E7539156F4F4A98E8C5* __this, CallbackContext_tB251EE41F509C6E8A6B05EC97C029A45DF4F5FA8 ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CallbackContext_ReadValue_TisQuaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_m020AD5873BB6CE85B752DF8D11920FA5FB46214E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CallbackContext_tB251EE41F509C6E8A6B05EC97C029A45DF4F5FA8_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// print(value);
		CallbackContext_tB251EE41F509C6E8A6B05EC97C029A45DF4F5FA8 L_0 = ___value0;
		CallbackContext_tB251EE41F509C6E8A6B05EC97C029A45DF4F5FA8 L_1 = L_0;
		RuntimeObject* L_2 = Box(CallbackContext_tB251EE41F509C6E8A6B05EC97C029A45DF4F5FA8_il2cpp_TypeInfo_var, &L_1);
		MonoBehaviour_print_mED815C779E369787B3E9646A6DE96FBC2944BF0B(L_2, NULL);
		// Quaternion input = value.ReadValue<Quaternion>();
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_3;
		L_3 = CallbackContext_ReadValue_TisQuaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_m020AD5873BB6CE85B752DF8D11920FA5FB46214E((&___value0), CallbackContext_ReadValue_TisQuaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_m020AD5873BB6CE85B752DF8D11920FA5FB46214E_RuntimeMethod_var);
		V_0 = L_3;
		// transform.rotation = input;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_4;
		L_4 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_5 = V_0;
		NullCheck(L_4);
		Transform_set_rotation_m61340DE74726CF0F9946743A727C4D444397331D(L_4, L_5, NULL);
		// }
		return;
	}
}
// System.Void CameraController::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CameraController__ctor_mE196A6332BDDED632D6F9DB6260E424594598950 (CameraController_tDC4FF0FA10418272A26E5E7539156F4F4A98E8C5* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// System.Void LookAround::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LookAround_Start_m383BBCE61CCE70FB2CD7E039ED7DB2B3D56BB333 (LookAround_t2A113C1D53E1B896A7E8F2FE149EF0889F59F24B* __this, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void LookAround::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LookAround_Update_mB03D949C85E21526D963256AE79EDD4A021BF56E (LookAround_t2A113C1D53E1B896A7E8F2FE149EF0889F59F24B* __this, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		// if (Input.GetMouseButton(0)) {
		bool L_0;
		L_0 = Input_GetMouseButton_mE545CF4B790C6E202808B827E3141BEC3330DB70(0, NULL);
		V_0 = L_0;
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_001b;
		}
	}
	{
		// HandleHorizontalRotation();
		LookAround_HandleHorizontalRotation_m32F1EF8A1EF0CA2DBF1740D226DE4B540F34CA05(__this, NULL);
		// HandleVerticalRotation();
		LookAround_HandleVerticalRotation_mC2A0E3B8CC0B942C851B05FE0E5D11ADB415739F(__this, NULL);
	}

IL_001b:
	{
		// }
		return;
	}
}
// System.Void LookAround::HandleVerticalRotation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LookAround_HandleVerticalRotation_mC2A0E3B8CC0B942C851B05FE0E5D11ADB415739F (LookAround_t2A113C1D53E1B896A7E8F2FE149EF0889F59F24B* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral16DD21BE77B115D392226EB71A2D3A9FDC29E3F0);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_1;
	memset((&V_1), 0, sizeof(V_1));
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		// var mouseVerticalRotation = Input.GetAxis("Mouse Y");
		float L_0;
		L_0 = Input_GetAxis_m1F49B26F24032F45FB4583C95FB24E6771A161D4(_stringLiteral16DD21BE77B115D392226EB71A2D3A9FDC29E3F0, NULL);
		V_0 = L_0;
		// var newRotation = transform.localRotation.eulerAngles;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_1;
		L_1 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_1);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_2;
		L_2 = Transform_get_localRotation_mD53D37611A5DAE93EC6C7BBCAC337408C5CACA77(L_1, NULL);
		V_2 = L_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3;
		L_3 = Quaternion_get_eulerAngles_m2DB5158B5C3A71FD60FC8A6EE43D3AAA1CFED122_inline((&V_2), NULL);
		V_1 = L_3;
		// newRotation.x += mouseVerticalRotation*1.2f;
		float* L_4 = (&(&V_1)->___x_2);
		float* L_5 = L_4;
		float L_6 = *((float*)L_5);
		float L_7 = V_0;
		*((float*)L_5) = (float)((float)il2cpp_codegen_add(L_6, ((float)il2cpp_codegen_multiply(L_7, (1.20000005f)))));
		// transform.localRotation = Quaternion.Euler(newRotation);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_8;
		L_8 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9 = V_1;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_10;
		L_10 = Quaternion_Euler_m66E346161C9778DF8486DB4FE823D8F81A54AF1D_inline(L_9, NULL);
		NullCheck(L_8);
		Transform_set_localRotation_mAB4A011D134BA58AB780BECC0025CA65F16185FA(L_8, L_10, NULL);
		// }
		return;
	}
}
// System.Void LookAround::HandleHorizontalRotation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LookAround_HandleHorizontalRotation_m32F1EF8A1EF0CA2DBF1740D226DE4B540F34CA05 (LookAround_t2A113C1D53E1B896A7E8F2FE149EF0889F59F24B* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral88BEE283254D7094E258B3A88730F4CC4F1E4AC7);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_1;
	memset((&V_1), 0, sizeof(V_1));
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		// var mouseHorizontalRotation = Input.GetAxis("Mouse X");
		float L_0;
		L_0 = Input_GetAxis_m1F49B26F24032F45FB4583C95FB24E6771A161D4(_stringLiteral88BEE283254D7094E258B3A88730F4CC4F1E4AC7, NULL);
		V_0 = L_0;
		// var newRotation = transform.localRotation.eulerAngles;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_1;
		L_1 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_1);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_2;
		L_2 = Transform_get_localRotation_mD53D37611A5DAE93EC6C7BBCAC337408C5CACA77(L_1, NULL);
		V_2 = L_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3;
		L_3 = Quaternion_get_eulerAngles_m2DB5158B5C3A71FD60FC8A6EE43D3AAA1CFED122_inline((&V_2), NULL);
		V_1 = L_3;
		// newRotation.y -= mouseHorizontalRotation*1.2f;
		float* L_4 = (&(&V_1)->___y_3);
		float* L_5 = L_4;
		float L_6 = *((float*)L_5);
		float L_7 = V_0;
		*((float*)L_5) = (float)((float)il2cpp_codegen_subtract(L_6, ((float)il2cpp_codegen_multiply(L_7, (1.20000005f)))));
		// transform.localRotation = Quaternion.Euler(newRotation);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_8;
		L_8 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9 = V_1;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_10;
		L_10 = Quaternion_Euler_m66E346161C9778DF8486DB4FE823D8F81A54AF1D_inline(L_9, NULL);
		NullCheck(L_8);
		Transform_set_localRotation_mAB4A011D134BA58AB780BECC0025CA65F16185FA(L_8, L_10, NULL);
		// }
		return;
	}
}
// System.Void LookAround::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LookAround__ctor_m15A987622C5D20B6514203387CB9530AC8DB60ED (LookAround_t2A113C1D53E1B896A7E8F2FE149EF0889F59F24B* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// System.Void InputSenderExtension::SetInputRange(Unity.RenderStreaming.InputSender,UnityEngine.UI.RawImage)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputSenderExtension_SetInputRange_m9E96057AC5F1B68D3F537F53F236831EB888BBB7 (InputSender_t07ED4DAB78F74631B4BF39A9C1554423DAAAD845* ___sender0, RawImage_tFF12F7DB574FBDC1863CF607C7A12A5D9F8D6179* ___image1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RectTransformUtility_t65C00A84A72F17D78B81F2E7D88C2AA98AB61244_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* V_0 = NULL;
	Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* V_1 = NULL;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_2;
	memset((&V_2), 0, sizeof(V_2));
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_3;
	memset((&V_3), 0, sizeof(V_3));
	Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D V_4;
	memset((&V_4), 0, sizeof(V_4));
	Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A V_5;
	memset((&V_5), 0, sizeof(V_5));
	{
		// Vector3[] corners = new Vector3[4];
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_0 = (Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C*)(Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C*)SZArrayNew(Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C_il2cpp_TypeInfo_var, (uint32_t)4);
		V_0 = L_0;
		// image.rectTransform.GetWorldCorners(corners);
		RawImage_tFF12F7DB574FBDC1863CF607C7A12A5D9F8D6179* L_1 = ___image1;
		NullCheck(L_1);
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_2;
		L_2 = Graphic_get_rectTransform_mF4752E8934267D630810E84CE02CDFB81EB1FD6D(L_1, NULL);
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_3 = V_0;
		NullCheck(L_2);
		RectTransform_GetWorldCorners_m6E15303C3B065B2F65E0A7F0E0217695564C2E09(L_2, L_3, NULL);
		// Camera camera = image.canvas.worldCamera;
		RawImage_tFF12F7DB574FBDC1863CF607C7A12A5D9F8D6179* L_4 = ___image1;
		NullCheck(L_4);
		Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26* L_5;
		L_5 = Graphic_get_canvas_mEA2161DF3BD736541DE41F9B814C4860FEB76419(L_4, NULL);
		NullCheck(L_5);
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_6;
		L_6 = Canvas_get_worldCamera_mD2FDE13B61A5213F4E64B40008EB0A8D2D07B853(L_5, NULL);
		V_1 = L_6;
		// var corner0 = RectTransformUtility.WorldToScreenPoint(camera, corners[0]);
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_7 = V_1;
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_8 = V_0;
		NullCheck(L_8);
		int32_t L_9 = 0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = (L_8)->GetAt(static_cast<il2cpp_array_size_t>(L_9));
		il2cpp_codegen_runtime_class_init_inline(RectTransformUtility_t65C00A84A72F17D78B81F2E7D88C2AA98AB61244_il2cpp_TypeInfo_var);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_11;
		L_11 = RectTransformUtility_WorldToScreenPoint_m5629068CE7C8D2E654F8F529E89DC5802F3452BB(L_7, L_10, NULL);
		V_2 = L_11;
		// var corner2 = RectTransformUtility.WorldToScreenPoint(camera, corners[2]);
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_12 = V_1;
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_13 = V_0;
		NullCheck(L_13);
		int32_t L_14 = 2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_15 = (L_13)->GetAt(static_cast<il2cpp_array_size_t>(L_14));
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_16;
		L_16 = RectTransformUtility_WorldToScreenPoint_m5629068CE7C8D2E654F8F529E89DC5802F3452BB(L_12, L_15, NULL);
		V_3 = L_16;
		// var region = new Rect(
		//     corner0.x,
		//     corner0.y,
		//     corner2.x - corner0.x,
		//     corner2.y - corner0.y
		// );
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_17 = V_2;
		float L_18 = L_17.___x_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_19 = V_2;
		float L_20 = L_19.___y_1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_21 = V_3;
		float L_22 = L_21.___x_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_23 = V_2;
		float L_24 = L_23.___x_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_25 = V_3;
		float L_26 = L_25.___y_1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_27 = V_2;
		float L_28 = L_27.___y_1;
		Rect__ctor_m18C3033D135097BEE424AAA68D91C706D2647F23((&V_4), L_18, L_20, ((float)il2cpp_codegen_subtract(L_22, L_24)), ((float)il2cpp_codegen_subtract(L_26, L_28)), NULL);
		// var size = new Vector2Int(image.texture.width, image.texture.height);
		RawImage_tFF12F7DB574FBDC1863CF607C7A12A5D9F8D6179* L_29 = ___image1;
		NullCheck(L_29);
		Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* L_30;
		L_30 = RawImage_get_texture_m84CCFDF78F6886F73EBE5A7C78D6E9C3CA903813(L_29, NULL);
		NullCheck(L_30);
		int32_t L_31;
		L_31 = VirtualFuncInvoker0< int32_t >::Invoke(5 /* System.Int32 UnityEngine.Texture::get_width() */, L_30);
		RawImage_tFF12F7DB574FBDC1863CF607C7A12A5D9F8D6179* L_32 = ___image1;
		NullCheck(L_32);
		Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* L_33;
		L_33 = RawImage_get_texture_m84CCFDF78F6886F73EBE5A7C78D6E9C3CA903813(L_32, NULL);
		NullCheck(L_33);
		int32_t L_34;
		L_34 = VirtualFuncInvoker0< int32_t >::Invoke(7 /* System.Int32 UnityEngine.Texture::get_height() */, L_33);
		Vector2Int__ctor_mC20D1312133EB8CB63EC11067088B043660F11CE_inline((&V_5), L_31, L_34, NULL);
		// sender.SetInputRange(region, size);
		InputSender_t07ED4DAB78F74631B4BF39A9C1554423DAAAD845* L_35 = ___sender0;
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D L_36 = V_4;
		Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A L_37 = V_5;
		NullCheck(L_35);
		InputSender_SetInputRange_mA2039F1DF70744AA19731CEE356F715B79A0030B(L_35, L_36, L_37, NULL);
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
// System.Void Test::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Test_Awake_m13A7B7938BA67D1CD19AE89EA693B5E3D32580AD (Test_tE08E78D2148871B8D08F758019DD90BE185E5B2D* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OnUpdateReceiveAudioSourceHandler_tB00165D87D9F75327FB32136DF771EBE3F324D6C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OnUpdateReceiveTextureHandler_t8B95A7333D7120C552A9BD2043B9DCC43E7AE398_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Test_OnUpdateReceiveTexture_m0E48CD9747E942251E955C6ACD6816B37394C672_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_U3CAwakeU3Eb__8_0_m9EA29B09F3F85A0BF5FF6682BDB7F6CC1526BBC2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_tBF9F5AFB6F4C4AFADB968C649ABEB2706AA5DB44_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6D031E1CB47AAA52A4B0EB17AB8462FD33EBD210);
		s_Il2CppMethodInitialized = true;
	}
	OnUpdateReceiveAudioSourceHandler_tB00165D87D9F75327FB32136DF771EBE3F324D6C* G_B2_0 = NULL;
	OnUpdateReceiveAudioSourceHandler_tB00165D87D9F75327FB32136DF771EBE3F324D6C* G_B2_1 = NULL;
	AudioStreamReceiver_t259328EA2AA138847368362753FD630E8209F285* G_B2_2 = NULL;
	OnUpdateReceiveAudioSourceHandler_tB00165D87D9F75327FB32136DF771EBE3F324D6C* G_B1_0 = NULL;
	OnUpdateReceiveAudioSourceHandler_tB00165D87D9F75327FB32136DF771EBE3F324D6C* G_B1_1 = NULL;
	AudioStreamReceiver_t259328EA2AA138847368362753FD630E8209F285* G_B1_2 = NULL;
	{
		// Debug.Log("awake");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m86567BCF22BBE7809747817453CACA0E41E68219(_stringLiteral6D031E1CB47AAA52A4B0EB17AB8462FD33EBD210, NULL);
		// receiveVideoViewer.OnUpdateReceiveTexture += OnUpdateReceiveTexture;
		VideoStreamReceiver_t368CE6A3F484D7F61F4D2C1BE8DF2C6D83148C71* L_0 = __this->___receiveVideoViewer_8;
		VideoStreamReceiver_t368CE6A3F484D7F61F4D2C1BE8DF2C6D83148C71* L_1 = L_0;
		NullCheck(L_1);
		OnUpdateReceiveTextureHandler_t8B95A7333D7120C552A9BD2043B9DCC43E7AE398* L_2 = L_1->___OnUpdateReceiveTexture_9;
		OnUpdateReceiveTextureHandler_t8B95A7333D7120C552A9BD2043B9DCC43E7AE398* L_3 = (OnUpdateReceiveTextureHandler_t8B95A7333D7120C552A9BD2043B9DCC43E7AE398*)il2cpp_codegen_object_new(OnUpdateReceiveTextureHandler_t8B95A7333D7120C552A9BD2043B9DCC43E7AE398_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		OnUpdateReceiveTextureHandler__ctor_m891E0C8C52DCAC75D6042996A9DF96476CA85653(L_3, __this, (intptr_t)((void*)Test_OnUpdateReceiveTexture_m0E48CD9747E942251E955C6ACD6816B37394C672_RuntimeMethod_var), NULL);
		Delegate_t* L_4;
		L_4 = Delegate_Combine_m8B9D24CED35033C7FC56501DFE650F5CB7FF012C(L_2, L_3, NULL);
		NullCheck(L_1);
		L_1->___OnUpdateReceiveTexture_9 = ((OnUpdateReceiveTextureHandler_t8B95A7333D7120C552A9BD2043B9DCC43E7AE398*)CastclassSealed((RuntimeObject*)L_4, OnUpdateReceiveTextureHandler_t8B95A7333D7120C552A9BD2043B9DCC43E7AE398_il2cpp_TypeInfo_var));
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___OnUpdateReceiveTexture_9), (void*)((OnUpdateReceiveTextureHandler_t8B95A7333D7120C552A9BD2043B9DCC43E7AE398*)CastclassSealed((RuntimeObject*)L_4, OnUpdateReceiveTextureHandler_t8B95A7333D7120C552A9BD2043B9DCC43E7AE398_il2cpp_TypeInfo_var)));
		// receiveAudioViewer.SetSource(remoteAudioSource);
		AudioStreamReceiver_t259328EA2AA138847368362753FD630E8209F285* L_5 = __this->___receiveAudioViewer_7;
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_6 = __this->___remoteAudioSource_6;
		NullCheck(L_5);
		AudioStreamReceiver_SetSource_m93F439BE07EEE14710A03AAEEF573DAF1F4B9B96(L_5, L_6, NULL);
		// receiveAudioViewer.OnUpdateReceiveAudioSource += source =>
		// {
		//     Debug.Log("In receive audio source");
		//     if (!source.IsUnityNull()) {
		//         Debug.Log("source nie jest null");
		//         source.loop = true;
		//         source.Play();
		//     }
		// 
		// };
		AudioStreamReceiver_t259328EA2AA138847368362753FD630E8209F285* L_7 = __this->___receiveAudioViewer_7;
		AudioStreamReceiver_t259328EA2AA138847368362753FD630E8209F285* L_8 = L_7;
		NullCheck(L_8);
		OnUpdateReceiveAudioSourceHandler_tB00165D87D9F75327FB32136DF771EBE3F324D6C* L_9 = L_8->___OnUpdateReceiveAudioSource_9;
		il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_tBF9F5AFB6F4C4AFADB968C649ABEB2706AA5DB44_il2cpp_TypeInfo_var);
		OnUpdateReceiveAudioSourceHandler_tB00165D87D9F75327FB32136DF771EBE3F324D6C* L_10 = ((U3CU3Ec_tBF9F5AFB6F4C4AFADB968C649ABEB2706AA5DB44_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tBF9F5AFB6F4C4AFADB968C649ABEB2706AA5DB44_il2cpp_TypeInfo_var))->___U3CU3E9__8_0_1;
		OnUpdateReceiveAudioSourceHandler_tB00165D87D9F75327FB32136DF771EBE3F324D6C* L_11 = L_10;
		G_B1_0 = L_11;
		G_B1_1 = L_9;
		G_B1_2 = L_8;
		if (L_11)
		{
			G_B2_0 = L_11;
			G_B2_1 = L_9;
			G_B2_2 = L_8;
			goto IL_0070;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_tBF9F5AFB6F4C4AFADB968C649ABEB2706AA5DB44_il2cpp_TypeInfo_var);
		U3CU3Ec_tBF9F5AFB6F4C4AFADB968C649ABEB2706AA5DB44* L_12 = ((U3CU3Ec_tBF9F5AFB6F4C4AFADB968C649ABEB2706AA5DB44_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tBF9F5AFB6F4C4AFADB968C649ABEB2706AA5DB44_il2cpp_TypeInfo_var))->___U3CU3E9_0;
		OnUpdateReceiveAudioSourceHandler_tB00165D87D9F75327FB32136DF771EBE3F324D6C* L_13 = (OnUpdateReceiveAudioSourceHandler_tB00165D87D9F75327FB32136DF771EBE3F324D6C*)il2cpp_codegen_object_new(OnUpdateReceiveAudioSourceHandler_tB00165D87D9F75327FB32136DF771EBE3F324D6C_il2cpp_TypeInfo_var);
		NullCheck(L_13);
		OnUpdateReceiveAudioSourceHandler__ctor_m4F066AFAF5B259D9506E14317142DF4AFF25D347(L_13, L_12, (intptr_t)((void*)U3CU3Ec_U3CAwakeU3Eb__8_0_m9EA29B09F3F85A0BF5FF6682BDB7F6CC1526BBC2_RuntimeMethod_var), NULL);
		OnUpdateReceiveAudioSourceHandler_tB00165D87D9F75327FB32136DF771EBE3F324D6C* L_14 = L_13;
		((U3CU3Ec_tBF9F5AFB6F4C4AFADB968C649ABEB2706AA5DB44_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tBF9F5AFB6F4C4AFADB968C649ABEB2706AA5DB44_il2cpp_TypeInfo_var))->___U3CU3E9__8_0_1 = L_14;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3Ec_tBF9F5AFB6F4C4AFADB968C649ABEB2706AA5DB44_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tBF9F5AFB6F4C4AFADB968C649ABEB2706AA5DB44_il2cpp_TypeInfo_var))->___U3CU3E9__8_0_1), (void*)L_14);
		G_B2_0 = L_14;
		G_B2_1 = G_B1_1;
		G_B2_2 = G_B1_2;
	}

IL_0070:
	{
		Delegate_t* L_15;
		L_15 = Delegate_Combine_m8B9D24CED35033C7FC56501DFE650F5CB7FF012C(G_B2_1, G_B2_0, NULL);
		NullCheck(G_B2_2);
		G_B2_2->___OnUpdateReceiveAudioSource_9 = ((OnUpdateReceiveAudioSourceHandler_tB00165D87D9F75327FB32136DF771EBE3F324D6C*)CastclassSealed((RuntimeObject*)L_15, OnUpdateReceiveAudioSourceHandler_tB00165D87D9F75327FB32136DF771EBE3F324D6C_il2cpp_TypeInfo_var));
		Il2CppCodeGenWriteBarrier((void**)(&G_B2_2->___OnUpdateReceiveAudioSource_9), (void*)((OnUpdateReceiveAudioSourceHandler_tB00165D87D9F75327FB32136DF771EBE3F324D6C*)CastclassSealed((RuntimeObject*)L_15, OnUpdateReceiveAudioSourceHandler_tB00165D87D9F75327FB32136DF771EBE3F324D6C_il2cpp_TypeInfo_var)));
		// }
		return;
	}
}
// System.Void Test::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Test_Start_mA902842AF55C0A063D71F22B280F28BF0FB01497 (Test_tE08E78D2148871B8D08F758019DD90BE185E5B2D* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisInputSender_t07ED4DAB78F74631B4BF39A9C1554423DAAAD845_m6869E81BCE0A15CB7CD5EB41245F29278E126B30_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OnStartedChannelHandler_tB71FDF0B00102C6564E6FA774D39574C043A8A33_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Test_OnStartedChannel_m482FBF96DF0FA11B8A56185C6D1F08E4B0F7271E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8243A16D425F93AF62CAAB2BFAE01A2D6246A5FE);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Debug.Log("Start");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m86567BCF22BBE7809747817453CACA0E41E68219(_stringLiteral8243A16D425F93AF62CAAB2BFAE01A2D6246A5FE, NULL);
		// inputSender = GetComponent<InputSender>();
		InputSender_t07ED4DAB78F74631B4BF39A9C1554423DAAAD845* L_0;
		L_0 = Component_GetComponent_TisInputSender_t07ED4DAB78F74631B4BF39A9C1554423DAAAD845_m6869E81BCE0A15CB7CD5EB41245F29278E126B30(__this, Component_GetComponent_TisInputSender_t07ED4DAB78F74631B4BF39A9C1554423DAAAD845_m6869E81BCE0A15CB7CD5EB41245F29278E126B30_RuntimeMethod_var);
		__this->___inputSender_11 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___inputSender_11), (void*)L_0);
		// inputSender.OnStartedChannel += OnStartedChannel;
		InputSender_t07ED4DAB78F74631B4BF39A9C1554423DAAAD845* L_1 = __this->___inputSender_11;
		InputSender_t07ED4DAB78F74631B4BF39A9C1554423DAAAD845* L_2 = L_1;
		NullCheck(L_2);
		OnStartedChannelHandler_tB71FDF0B00102C6564E6FA774D39574C043A8A33* L_3;
		L_3 = DataChannelBase_get_OnStartedChannel_mC5F7AD20D80B842A4FC0BC48DDC2BBFA1BDCE4F8_inline(L_2, NULL);
		OnStartedChannelHandler_tB71FDF0B00102C6564E6FA774D39574C043A8A33* L_4 = (OnStartedChannelHandler_tB71FDF0B00102C6564E6FA774D39574C043A8A33*)il2cpp_codegen_object_new(OnStartedChannelHandler_tB71FDF0B00102C6564E6FA774D39574C043A8A33_il2cpp_TypeInfo_var);
		NullCheck(L_4);
		OnStartedChannelHandler__ctor_m8A1BEE345DB284048A2BB3899175531D4ACD8D97(L_4, __this, (intptr_t)((void*)Test_OnStartedChannel_m482FBF96DF0FA11B8A56185C6D1F08E4B0F7271E_RuntimeMethod_var), NULL);
		Delegate_t* L_5;
		L_5 = Delegate_Combine_m8B9D24CED35033C7FC56501DFE650F5CB7FF012C(L_3, L_4, NULL);
		NullCheck(L_2);
		DataChannelBase_set_OnStartedChannel_m3BD9A4A76218ECEF13DC68C0113507DA1EF57B63_inline(L_2, ((OnStartedChannelHandler_tB71FDF0B00102C6564E6FA774D39574C043A8A33*)CastclassSealed((RuntimeObject*)L_5, OnStartedChannelHandler_tB71FDF0B00102C6564E6FA774D39574C043A8A33_il2cpp_TypeInfo_var)), NULL);
		// OnStart();
		Test_OnStart_m9CBF5F4EB8B20C465B5A6B0CCC2DB63E5597FF29(__this, NULL);
		// }
		return;
	}
}
// System.Void Test::OnUpdateReceiveTexture(UnityEngine.Texture)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Test_OnUpdateReceiveTexture_m0E48CD9747E942251E955C6ACD6816B37394C672 (Test_tE08E78D2148871B8D08F758019DD90BE185E5B2D* __this, Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* ___texture0, const RuntimeMethod* method) 
{
	{
		// planeMesh.material.mainTexture = texture;
		MeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE* L_0 = __this->___planeMesh_5;
		NullCheck(L_0);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_1;
		L_1 = Renderer_get_material_m5BA2A00816C4CC66580D4B2E409CF10718C15656(L_0, NULL);
		Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* L_2 = ___texture0;
		NullCheck(L_1);
		Material_set_mainTexture_m389E048BA9C81B603EBF36BD792212B296317AC0(L_1, L_2, NULL);
		// SetInputChange();
		Test_SetInputChange_mD755EB8C7A9DE336DEFCA939A3F178D2833C9E66(__this, NULL);
		// }
		return;
	}
}
// System.Void Test::OnStartedChannel(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Test_OnStartedChannel_m482FBF96DF0FA11B8A56185C6D1F08E4B0F7271E (Test_tE08E78D2148871B8D08F758019DD90BE185E5B2D* __this, String_t* ___connectionId0, const RuntimeMethod* method) 
{
	{
		// SetInputChange();
		Test_SetInputChange_mD755EB8C7A9DE336DEFCA939A3F178D2833C9E66(__this, NULL);
		// }
		return;
	}
}
// System.Void Test::SetInputChange()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Test_SetInputChange_mD755EB8C7A9DE336DEFCA939A3F178D2833C9E66 (Test_tE08E78D2148871B8D08F758019DD90BE185E5B2D* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	int32_t G_B3_0 = 0;
	{
		// if (!inputSender.IsConnected || planeMesh.material.mainTexture == null)
		InputSender_t07ED4DAB78F74631B4BF39A9C1554423DAAAD845* L_0 = __this->___inputSender_11;
		NullCheck(L_0);
		bool L_1;
		L_1 = DataChannelBase_get_IsConnected_m3367F7CFA659D157425112BFD11BFAEA4C7BEA01(L_0, NULL);
		if (!L_1)
		{
			goto IL_0026;
		}
	}
	{
		MeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE* L_2 = __this->___planeMesh_5;
		NullCheck(L_2);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_3;
		L_3 = Renderer_get_material_m5BA2A00816C4CC66580D4B2E409CF10718C15656(L_2, NULL);
		NullCheck(L_3);
		Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* L_4;
		L_4 = Material_get_mainTexture_mC6C6B860B44321F0342AEFA0DD7702384334F37D(L_3, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_5;
		L_5 = Object_op_Equality_mD3DB0D72CE0250C84033DC2A90AEF9D59896E536(L_4, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		G_B3_0 = ((int32_t)(L_5));
		goto IL_0027;
	}

IL_0026:
	{
		G_B3_0 = 1;
	}

IL_0027:
	{
		V_0 = (bool)G_B3_0;
		bool L_6 = V_0;
		if (!L_6)
		{
			goto IL_002d;
		}
	}
	{
		// return;
		goto IL_003a;
	}

IL_002d:
	{
		// inputSender.EnableInputPositionCorrection(true);
		InputSender_t07ED4DAB78F74631B4BF39A9C1554423DAAAD845* L_7 = __this->___inputSender_11;
		NullCheck(L_7);
		InputSender_EnableInputPositionCorrection_mE2350BB8096101E6F33BC0D3024EAD3F66586F4E(L_7, (bool)1, NULL);
	}

IL_003a:
	{
		// }
		return;
	}
}
// System.Void Test::OnStart()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Test_OnStart_m9CBF5F4EB8B20C465B5A6B0CCC2DB63E5597FF29 (Test_tE08E78D2148871B8D08F758019DD90BE185E5B2D* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE42E8BB820D4F7550A0F04619F4E15FDC56943B9);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	Guid_t V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		// if (string.IsNullOrEmpty(connectionId))
		String_t* L_0 = __this->___connectionId_10;
		bool L_1;
		L_1 = String_IsNullOrEmpty_m54CF0907E7C4F3AFB2E796A13DC751ECBB8DB64A(L_0, NULL);
		V_0 = L_1;
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_002a;
		}
	}
	{
		// connectionId = System.Guid.NewGuid().ToString("N");
		Guid_t L_3;
		L_3 = Guid_NewGuid_m1827D92D71326C3F3C263F057F6E90F907617903(NULL);
		V_1 = L_3;
		String_t* L_4;
		L_4 = Guid_ToString_mDAA91A4A993E3A7AD8339665E3F0CC35FE00E833((&V_1), _stringLiteralE42E8BB820D4F7550A0F04619F4E15FDC56943B9, NULL);
		__this->___connectionId_10 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___connectionId_10), (void*)L_4);
	}

IL_002a:
	{
		// Debug.Log(connectionId);
		String_t* L_5 = __this->___connectionId_10;
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m86567BCF22BBE7809747817453CACA0E41E68219(L_5, NULL);
		// connection.CreateConnection(connectionId);
		SingleConnection_tD953841F9CDC98CD0761ABE269BD6D9BFBA9FE7B* L_6 = __this->___connection_9;
		String_t* L_7 = __this->___connectionId_10;
		NullCheck(L_6);
		VirtualActionInvoker1< String_t* >::Invoke(4 /* System.Void Unity.RenderStreaming.SignalingHandlerBase::CreateConnection(System.String) */, L_6, L_7);
		// }
		return;
	}
}
// System.Void Test::StartOnSpace(UnityEngine.InputSystem.InputAction/CallbackContext)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Test_StartOnSpace_m7C531B26ED1541DC830B9463F516319615CE2205 (Test_tE08E78D2148871B8D08F758019DD90BE185E5B2D* __this, CallbackContext_tB251EE41F509C6E8A6B05EC97C029A45DF4F5FA8 ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE42E8BB820D4F7550A0F04619F4E15FDC56943B9);
		s_Il2CppMethodInitialized = true;
	}
	Guid_t V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// connection.DeleteConnection(connectionId);
		SingleConnection_tD953841F9CDC98CD0761ABE269BD6D9BFBA9FE7B* L_0 = __this->___connection_9;
		String_t* L_1 = __this->___connectionId_10;
		NullCheck(L_0);
		VirtualActionInvoker1< String_t* >::Invoke(5 /* System.Void Unity.RenderStreaming.SignalingHandlerBase::DeleteConnection(System.String) */, L_0, L_1);
		// connectionId = System.Guid.NewGuid().ToString("N");
		Guid_t L_2;
		L_2 = Guid_NewGuid_m1827D92D71326C3F3C263F057F6E90F907617903(NULL);
		V_0 = L_2;
		String_t* L_3;
		L_3 = Guid_ToString_mDAA91A4A993E3A7AD8339665E3F0CC35FE00E833((&V_0), _stringLiteralE42E8BB820D4F7550A0F04619F4E15FDC56943B9, NULL);
		__this->___connectionId_10 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___connectionId_10), (void*)L_3);
		// Debug.Log(connectionId);
		String_t* L_4 = __this->___connectionId_10;
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m86567BCF22BBE7809747817453CACA0E41E68219(L_4, NULL);
		// connection.CreateConnection(connectionId);
		SingleConnection_tD953841F9CDC98CD0761ABE269BD6D9BFBA9FE7B* L_5 = __this->___connection_9;
		String_t* L_6 = __this->___connectionId_10;
		NullCheck(L_5);
		VirtualActionInvoker1< String_t* >::Invoke(4 /* System.Void Unity.RenderStreaming.SignalingHandlerBase::CreateConnection(System.String) */, L_5, L_6);
		// }
		return;
	}
}
// System.Void Test::OnStop()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Test_OnStop_mC50F291DE2CFCB37C0042CE8902F6EE9082D902B (Test_tE08E78D2148871B8D08F758019DD90BE185E5B2D* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// connection.DeleteConnection(connectionId);
		SingleConnection_tD953841F9CDC98CD0761ABE269BD6D9BFBA9FE7B* L_0 = __this->___connection_9;
		String_t* L_1 = __this->___connectionId_10;
		NullCheck(L_0);
		VirtualActionInvoker1< String_t* >::Invoke(5 /* System.Void Unity.RenderStreaming.SignalingHandlerBase::DeleteConnection(System.String) */, L_0, L_1);
		// connectionId = String.Empty;
		String_t* L_2 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
		__this->___connectionId_10 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___connectionId_10), (void*)L_2);
		// }
		return;
	}
}
// System.Void Test::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Test__ctor_mB84DF4A3888723C395E76E3879FDFB8AA1EFEDCB (Test_tE08E78D2148871B8D08F758019DD90BE185E5B2D* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// System.Void Test/<>c::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__cctor_mEEE4E834D1618F7B205D9D916A48918E004F4B24 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_tBF9F5AFB6F4C4AFADB968C649ABEB2706AA5DB44_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CU3Ec_tBF9F5AFB6F4C4AFADB968C649ABEB2706AA5DB44* L_0 = (U3CU3Ec_tBF9F5AFB6F4C4AFADB968C649ABEB2706AA5DB44*)il2cpp_codegen_object_new(U3CU3Ec_tBF9F5AFB6F4C4AFADB968C649ABEB2706AA5DB44_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CU3Ec__ctor_m71CD9559B62F6D31495396C9EB82C02D8C990AAA(L_0, NULL);
		((U3CU3Ec_tBF9F5AFB6F4C4AFADB968C649ABEB2706AA5DB44_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tBF9F5AFB6F4C4AFADB968C649ABEB2706AA5DB44_il2cpp_TypeInfo_var))->___U3CU3E9_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3Ec_tBF9F5AFB6F4C4AFADB968C649ABEB2706AA5DB44_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tBF9F5AFB6F4C4AFADB968C649ABEB2706AA5DB44_il2cpp_TypeInfo_var))->___U3CU3E9_0), (void*)L_0);
		return;
	}
}
// System.Void Test/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m71CD9559B62F6D31495396C9EB82C02D8C990AAA (U3CU3Ec_tBF9F5AFB6F4C4AFADB968C649ABEB2706AA5DB44* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Void Test/<>c::<Awake>b__8_0(UnityEngine.AudioSource)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec_U3CAwakeU3Eb__8_0_m9EA29B09F3F85A0BF5FF6682BDB7F6CC1526BBC2 (U3CU3Ec_tBF9F5AFB6F4C4AFADB968C649ABEB2706AA5DB44* __this, AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* ___source0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5DA441CB66F0570B3AE372C4CA15C4C23A99A018);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral68F66B355DF7CF6656A942CC84519B7F10C669AA);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		// Debug.Log("In receive audio source");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m86567BCF22BBE7809747817453CACA0E41E68219(_stringLiteral68F66B355DF7CF6656A942CC84519B7F10C669AA, NULL);
		// if (!source.IsUnityNull()) {
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_0 = ___source0;
		bool L_1;
		L_1 = UnityObjectUtility_IsUnityNull_mA930F90A7AA178553879A76F100D32F02A0D13D0(L_0, NULL);
		V_0 = (bool)((((int32_t)L_1) == ((int32_t)0))? 1 : 0);
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_0035;
		}
	}
	{
		// Debug.Log("source nie jest null");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m86567BCF22BBE7809747817453CACA0E41E68219(_stringLiteral5DA441CB66F0570B3AE372C4CA15C4C23A99A018, NULL);
		// source.loop = true;
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_3 = ___source0;
		NullCheck(L_3);
		AudioSource_set_loop_m834A590939D8456008C0F897FD80B0ECFFB7FE56(L_3, (bool)1, NULL);
		// source.Play();
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_4 = ___source0;
		NullCheck(L_4);
		AudioSource_Play_m95DF07111C61D0E0F00257A00384D31531D590C3(L_4, NULL);
	}

IL_0035:
	{
		// };
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
// System.Void Unity.Template.VR.XRPlatformControllerSetup::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRPlatformControllerSetup_Start_m1F22FCA29DFD83DC0E343C3F391D04A7C52085BF (XRPlatformControllerSetup_tF3241056E2DD26648305E205151EB2ACF3333628* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerable_1_t468455E75DD3CE53FB1BEFFBDB5DBB1C5905801C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_1_tE9023775CE757CAAA4A054FB61980FF18EC394AE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XRGeneralSettings_t8F8D096944606B5AD845D010706BF7094ADEC8CE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB87CC029578F0C6F88E01A8257EBF1ED95223CEC);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	RuntimeObject* V_1 = NULL;
	XRLoader_t80B1B1934C40561C5352ABC95D567DC2A7C9C976* V_2 = NULL;
	bool V_3 = false;
	{
		// var loaders = XRGeneralSettings.Instance.Manager.activeLoaders;
		il2cpp_codegen_runtime_class_init_inline(XRGeneralSettings_t8F8D096944606B5AD845D010706BF7094ADEC8CE_il2cpp_TypeInfo_var);
		XRGeneralSettings_t8F8D096944606B5AD845D010706BF7094ADEC8CE* L_0;
		L_0 = XRGeneralSettings_get_Instance_mF17EAF521849B0E007AEE3B009727D3DF9EF110F(NULL);
		NullCheck(L_0);
		XRManagerSettings_t7923B66EB3FEE58C7B9F85FF61749B774D3B9E52* L_1;
		L_1 = XRGeneralSettings_get_Manager_m112FEB4E6DFB7B5F5C4A2DEC4E975CF2EBD51B42(L_0, NULL);
		NullCheck(L_1);
		RuntimeObject* L_2;
		L_2 = XRManagerSettings_get_activeLoaders_m47D0FF16B7012A87F56D93124DC5D8DA0ACA591F_inline(L_1, NULL);
		V_0 = L_2;
		// foreach (var loader in loaders)
		RuntimeObject* L_3 = V_0;
		NullCheck(L_3);
		RuntimeObject* L_4;
		L_4 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<UnityEngine.XR.Management.XRLoader>::GetEnumerator() */, IEnumerable_1_t468455E75DD3CE53FB1BEFFBDB5DBB1C5905801C_il2cpp_TypeInfo_var, L_3);
		V_1 = L_4;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0078:
			{// begin finally (depth: 1)
				{
					RuntimeObject* L_5 = V_1;
					if (!L_5)
					{
						goto IL_0082;
					}
				}
				{
					RuntimeObject* L_6 = V_1;
					NullCheck(L_6);
					InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_6);
				}

IL_0082:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_006e_1;
			}

IL_001b_1:
			{
				// foreach (var loader in loaders)
				RuntimeObject* L_7 = V_1;
				NullCheck(L_7);
				XRLoader_t80B1B1934C40561C5352ABC95D567DC2A7C9C976* L_8;
				L_8 = InterfaceFuncInvoker0< XRLoader_t80B1B1934C40561C5352ABC95D567DC2A7C9C976* >::Invoke(0 /* T System.Collections.Generic.IEnumerator`1<UnityEngine.XR.Management.XRLoader>::get_Current() */, IEnumerator_1_tE9023775CE757CAAA4A054FB61980FF18EC394AE_il2cpp_TypeInfo_var, L_7);
				V_2 = L_8;
				// if (loader.name.Equals("Oculus Loader"))
				XRLoader_t80B1B1934C40561C5352ABC95D567DC2A7C9C976* L_9 = V_2;
				NullCheck(L_9);
				String_t* L_10;
				L_10 = Object_get_name_mAC2F6B897CF1303BA4249B4CB55271AFACBB6392(L_9, NULL);
				NullCheck(L_10);
				bool L_11;
				L_11 = String_Equals_mCD5F35DEDCAFE51ACD4E033726FC2EF8DF7E9B4D(L_10, _stringLiteralB87CC029578F0C6F88E01A8257EBF1ED95223CEC, NULL);
				V_3 = L_11;
				bool L_12 = V_3;
				if (!L_12)
				{
					goto IL_006d_1;
				}
			}
			{
				// m_RightController.SetActive(false);
				GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_13 = __this->___m_RightController_5;
				NullCheck(L_13);
				GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_13, (bool)0, NULL);
				// m_LeftController.SetActive(false);
				GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_14 = __this->___m_LeftController_4;
				NullCheck(L_14);
				GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_14, (bool)0, NULL);
				// m_RightControllerOculusPackage.SetActive(true);
				GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_15 = __this->___m_RightControllerOculusPackage_7;
				NullCheck(L_15);
				GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_15, (bool)1, NULL);
				// m_LeftControllerOculusPackage.SetActive(true);
				GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_16 = __this->___m_LeftControllerOculusPackage_6;
				NullCheck(L_16);
				GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_16, (bool)1, NULL);
			}

IL_006d_1:
			{
			}

IL_006e_1:
			{
				// foreach (var loader in loaders)
				RuntimeObject* L_17 = V_1;
				NullCheck(L_17);
				bool L_18;
				L_18 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_17);
				if (L_18)
				{
					goto IL_001b_1;
				}
			}
			{
				goto IL_0083;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0083:
	{
		// }
		return;
	}
}
// System.Void Unity.Template.VR.XRPlatformControllerSetup::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRPlatformControllerSetup__ctor_mF9A3998AF90962CF8F35BAF2221558BDF5F6596E (XRPlatformControllerSetup_tF3241056E2DD26648305E205151EB2ACF3333628* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// System.Void Unity.RenderStreaming.Samples.InputReceiverExtension::SetInputRange(Unity.RenderStreaming.InputReceiver,UnityEngine.Vector2Int)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputReceiverExtension_SetInputRange_m45AA03C816EDF750A26BB4A679D86115FD02F014 (InputReceiver_tCE96B944D62722F35D322813BA122A58F71F765B* ___reveiver0, Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A ___size1, const RuntimeMethod* method) 
{
	{
		// reveiver.SetInputRange(size, new Rect(0, 0, Screen.width, Screen.height));
		InputReceiver_tCE96B944D62722F35D322813BA122A58F71F765B* L_0 = ___reveiver0;
		Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A L_1 = ___size1;
		int32_t L_2;
		L_2 = Screen_get_width_mCA5D955A53CF6D29C8C7118D517D0FC84AE8056C(NULL);
		int32_t L_3;
		L_3 = Screen_get_height_m624DD2D53F34087064E3B9D09AC2207DB4E86CA8(NULL);
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D L_4;
		memset((&L_4), 0, sizeof(L_4));
		Rect__ctor_m18C3033D135097BEE424AAA68D91C706D2647F23((&L_4), (0.0f), (0.0f), ((float)L_2), ((float)L_3), /*hidden argument*/NULL);
		NullCheck(L_0);
		InputReceiver_SetInputRange_m45E3AFB1801967B9A5B314BA14E0AD9BA8EE89F5(L_0, L_1, L_4, NULL);
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
// System.Void Unity.RenderStreaming.Samples.BroadcastSample::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BroadcastSample_Awake_m3EA3C7F8FE706BD070687B839C1CE9222D1E5397 (BroadcastSample_t9CEFF3CD3FD2181485A532B75E4C6A44914D7CE9* __this, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void Unity.RenderStreaming.Samples.BroadcastSample::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BroadcastSample_Start_m5FAB9728D38B3471C2EECAF6AA29DE814DA33497 (BroadcastSample_t9CEFF3CD3FD2181485A532B75E4C6A44914D7CE9* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BroadcastSample_OnStartedChannel_m3FD96236A1FA43FBFC1D86E7BB6826FFF7992420_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OnStartedChannelHandler_tB71FDF0B00102C6564E6FA774D39574C043A8A33_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// inputReceiver.OnStartedChannel += OnStartedChannel;
		InputReceiver_tCE96B944D62722F35D322813BA122A58F71F765B* L_0 = __this->___inputReceiver_4;
		InputReceiver_tCE96B944D62722F35D322813BA122A58F71F765B* L_1 = L_0;
		NullCheck(L_1);
		OnStartedChannelHandler_tB71FDF0B00102C6564E6FA774D39574C043A8A33* L_2;
		L_2 = DataChannelBase_get_OnStartedChannel_mC5F7AD20D80B842A4FC0BC48DDC2BBFA1BDCE4F8_inline(L_1, NULL);
		OnStartedChannelHandler_tB71FDF0B00102C6564E6FA774D39574C043A8A33* L_3 = (OnStartedChannelHandler_tB71FDF0B00102C6564E6FA774D39574C043A8A33*)il2cpp_codegen_object_new(OnStartedChannelHandler_tB71FDF0B00102C6564E6FA774D39574C043A8A33_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		OnStartedChannelHandler__ctor_m8A1BEE345DB284048A2BB3899175531D4ACD8D97(L_3, __this, (intptr_t)((void*)BroadcastSample_OnStartedChannel_m3FD96236A1FA43FBFC1D86E7BB6826FFF7992420_RuntimeMethod_var), NULL);
		Delegate_t* L_4;
		L_4 = Delegate_Combine_m8B9D24CED35033C7FC56501DFE650F5CB7FF012C(L_2, L_3, NULL);
		NullCheck(L_1);
		DataChannelBase_set_OnStartedChannel_m3BD9A4A76218ECEF13DC68C0113507DA1EF57B63_inline(L_1, ((OnStartedChannelHandler_tB71FDF0B00102C6564E6FA774D39574C043A8A33*)CastclassSealed((RuntimeObject*)L_4, OnStartedChannelHandler_tB71FDF0B00102C6564E6FA774D39574C043A8A33_il2cpp_TypeInfo_var)), NULL);
		// }
		return;
	}
}
// System.Void Unity.RenderStreaming.Samples.BroadcastSample::OnStartedChannel(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BroadcastSample_OnStartedChannel_m3FD96236A1FA43FBFC1D86E7BB6826FFF7992420 (BroadcastSample_t9CEFF3CD3FD2181485A532B75E4C6A44914D7CE9* __this, String_t* ___connectionId0, const RuntimeMethod* method) 
{
	{
		// inputReceiver.SetInputRange(videoStreamSender.streamingSize);
		InputReceiver_tCE96B944D62722F35D322813BA122A58F71F765B* L_0 = __this->___inputReceiver_4;
		VideoStreamSender_tC843D8A5E98D87418FF7AF2D4FE59038DF0F4066* L_1 = __this->___videoStreamSender_5;
		NullCheck(L_1);
		Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A L_2 = L_1->___streamingSize_8;
		InputReceiverExtension_SetInputRange_m45AA03C816EDF750A26BB4A679D86115FD02F014(L_0, L_2, NULL);
		// inputReceiver.SetEnableInputPositionCorrection(true);
		InputReceiver_tCE96B944D62722F35D322813BA122A58F71F765B* L_3 = __this->___inputReceiver_4;
		NullCheck(L_3);
		InputReceiver_SetEnableInputPositionCorrection_mF7B8604E34717D9541CCA6B217803E2FF3670714(L_3, (bool)1, NULL);
		// }
		return;
	}
}
// System.Void Unity.RenderStreaming.Samples.BroadcastSample::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BroadcastSample__ctor_m19AD6EAB553FCF8705B37D3303675FD4DE63538A (BroadcastSample_t9CEFF3CD3FD2181485A532B75E4C6A44914D7CE9* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, float ___x0, float ___y1, float ___z2, const RuntimeMethod* method) 
{
	{
		float L_0 = ___x0;
		__this->___x_2 = L_0;
		float L_1 = ___y1;
		__this->___y_3 = L_1;
		float L_2 = ___z2;
		__this->___z_4 = L_2;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Addition_m087D6F0EC60843D455F9F83D25FE42B2433AAD1D_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___b1, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___a0;
		float L_1 = L_0.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___b1;
		float L_3 = L_2.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___a0;
		float L_5 = L_4.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___b1;
		float L_7 = L_6.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = ___a0;
		float L_9 = L_8.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = ___b1;
		float L_11 = L_10.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_12;
		memset((&L_12), 0, sizeof(L_12));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_12), ((float)il2cpp_codegen_add(L_1, L_3)), ((float)il2cpp_codegen_add(L_5, L_7)), ((float)il2cpp_codegen_add(L_9, L_11)), /*hidden argument*/NULL);
		V_0 = L_12;
		goto IL_0030;
	}

IL_0030:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13 = V_0;
		return L_13;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Quaternion_get_eulerAngles_m2DB5158B5C3A71FD60FC8A6EE43D3AAA1CFED122_inline (Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974* __this, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_0 = (*(Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974*)__this);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1;
		L_1 = Quaternion_Internal_ToEulerRad_m9B2C77284AEE6F2C43B6C42F1F888FB4FC904462(L_0, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2;
		L_2 = Vector3_op_Multiply_m516FE285F5342F922C6EB3FCB33197E9017FF484_inline(L_1, (57.2957802f), NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3;
		L_3 = Quaternion_Internal_MakePositive_m864320DA2D027C186C95B2A5BC2C66B0EB4A6C11(L_2, NULL);
		V_0 = L_3;
		goto IL_001e;
	}

IL_001e:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = V_0;
		return L_4;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_Euler_m66E346161C9778DF8486DB4FE823D8F81A54AF1D_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___euler0, const RuntimeMethod* method) 
{
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___euler0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1;
		L_1 = Vector3_op_Multiply_m516FE285F5342F922C6EB3FCB33197E9017FF484_inline(L_0, (0.0174532924f), NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_2;
		L_2 = Quaternion_Internal_FromEulerRad_m2842B9FFB31CDC0F80B7C2172E22831D11D91E93(L_1, NULL);
		V_0 = L_2;
		goto IL_0014;
	}

IL_0014:
	{
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_3 = V_0;
		return L_3;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector2Int__ctor_mC20D1312133EB8CB63EC11067088B043660F11CE_inline (Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A* __this, int32_t ___x0, int32_t ___y1, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___x0;
		__this->___m_X_0 = L_0;
		int32_t L_1 = ___y1;
		__this->___m_Y_1 = L_1;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR OnStartedChannelHandler_tB71FDF0B00102C6564E6FA774D39574C043A8A33* DataChannelBase_get_OnStartedChannel_mC5F7AD20D80B842A4FC0BC48DDC2BBFA1BDCE4F8_inline (DataChannelBase_t4D3AC9FFEE36E810DC397F71E543F20030C1F744* __this, const RuntimeMethod* method) 
{
	{
		// public OnStartedChannelHandler OnStartedChannel { get; set; }
		OnStartedChannelHandler_tB71FDF0B00102C6564E6FA774D39574C043A8A33* L_0 = __this->___U3COnStartedChannelU3Ek__BackingField_7;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void DataChannelBase_set_OnStartedChannel_m3BD9A4A76218ECEF13DC68C0113507DA1EF57B63_inline (DataChannelBase_t4D3AC9FFEE36E810DC397F71E543F20030C1F744* __this, OnStartedChannelHandler_tB71FDF0B00102C6564E6FA774D39574C043A8A33* ___value0, const RuntimeMethod* method) 
{
	{
		// public OnStartedChannelHandler OnStartedChannel { get; set; }
		OnStartedChannelHandler_tB71FDF0B00102C6564E6FA774D39574C043A8A33* L_0 = ___value0;
		__this->___U3COnStartedChannelU3Ek__BackingField_7 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3COnStartedChannelU3Ek__BackingField_7), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* XRManagerSettings_get_activeLoaders_m47D0FF16B7012A87F56D93124DC5D8DA0ACA591F_inline (XRManagerSettings_t7923B66EB3FEE58C7B9F85FF61749B774D3B9E52* __this, const RuntimeMethod* method) 
{
	{
		// public IReadOnlyList<XRLoader> activeLoaders => m_Loaders;
		List_1_tA1A04BD6B1EE83992AE369D5DB31A028E9B57822* L_0 = __this->___m_Loaders_8;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Multiply_m516FE285F5342F922C6EB3FCB33197E9017FF484_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, float ___d1, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___a0;
		float L_1 = L_0.___x_2;
		float L_2 = ___d1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3 = ___a0;
		float L_4 = L_3.___y_3;
		float L_5 = ___d1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___a0;
		float L_7 = L_6.___z_4;
		float L_8 = ___d1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9;
		memset((&L_9), 0, sizeof(L_9));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_9), ((float)il2cpp_codegen_multiply(L_1, L_2)), ((float)il2cpp_codegen_multiply(L_4, L_5)), ((float)il2cpp_codegen_multiply(L_7, L_8)), /*hidden argument*/NULL);
		V_0 = L_9;
		goto IL_0021;
	}

IL_0021:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = V_0;
		return L_10;
	}
}
