#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>
#include <stdint.h>


struct InterfaceActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename T1, typename T2, typename T3, typename T4, typename T5>
struct InvokerActionInvoker5;
template <typename T1, typename T2, typename T3, typename T4, typename T5>
struct InvokerActionInvoker5<T1*, T2*, T3, T4, T5>
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2* p2, T3 p3, T4 p4, T5 p5)
	{
		void* params[5] = { p1, p2, &p3, &p4, &p5 };
		method->invoker_method(methodPtr, method, obj, params, NULL);
	}
};
template <typename T1, typename T2, typename T3, typename T4, typename T5, typename T6>
struct InvokerActionInvoker6;
template <typename T1, typename T2, typename T3, typename T4, typename T5, typename T6>
struct InvokerActionInvoker6<T1*, T2*, T3*, T4, T5, T6>
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2* p2, T3* p3, T4 p4, T5 p5, T6 p6)
	{
		void* params[6] = { p1, p2, p3, &p4, &p5, &p6 };
		method->invoker_method(methodPtr, method, obj, params, NULL);
	}
};

// System.Collections.Generic.IEnumerable`1<System.ValueTuple`2<System.String,System.Int64>>
struct IEnumerable_1_t37CB511D1945633EA5D7AE36BB66B79F93A98000;
// System.Collections.Generic.List`1<System.ValueTuple`2<System.Object,System.Int64>>
struct List_1_tAB9A066739F9303BCF5EAA66D624F09428AEC252;
// System.Collections.Generic.List`1<System.ValueTuple`2<System.String,System.Int64>>
struct List_1_t9C8E57F9F12FDB51DAAB696934615B4D8586F987;
// System.Collections.Generic.List`1<AprilTag.TagPose>
struct List_1_t46C4469D4D138AB8F0458EE91D417C1CBD938545;
// System.ValueTuple`2<System.Object,System.Int64>[]
struct ValueTuple_2U5BU5D_t4A4D8CB896C18C7C5A09BBB57C0A4A560F26A581;
// System.ValueTuple`2<System.String,System.Int64>[]
struct ValueTuple_2U5BU5D_t9474A9871E34F10BD526359F84581C6DD4224827;
// System.Delegate[]
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
// AprilTag.TagPose[]
struct TagPoseU5BU5D_t6CE9795265AC86847D3F043F9C9957D63B671487;
// System.Type[]
struct TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB;
// System.AsyncCallback
struct AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C;
// System.Attribute
struct Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA;
// System.Reflection.Binder
struct Binder_t91BFCE95A7057FADF4D8A1A342AFE52872246235;
// System.Byte
struct Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3;
// System.Delegate
struct Delegate_t;
// System.DelegateData
struct DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E;
// AprilTag.Interop.Detection
struct Detection_t1625D0598F2D1DB7D1E7AA2C92E1948DAB23A72C;
// AprilTag.Interop.DetectionArray
struct DetectionArray_t8F5F6D9F4D35AB7935ACF076F68C4C4FCDF915A1;
// AprilTag.Interop.Detector
struct Detector_tFE9DE2EA3519A1B91F55A35E8EE68EB1B27B8B1A;
// Microsoft.CodeAnalysis.EmbeddedAttribute
struct EmbeddedAttribute_t25C11B2ABDFF2400FE3FD45F9244E710ACD759EF;
// AprilTag.Interop.Family
struct Family_t7D94F3B6A5D5FB5FC1C3359ACFC3F9F018837F29;
// System.IAsyncResult
struct IAsyncResult_t7B9B5A0ECB35DCEC31B8A8122C37D687369253B5;
// AprilTag.Interop.ImageU8
struct ImageU8_t5D5B6A85A68488DA142C0E877C38D5427927F0D8;
// System.Runtime.CompilerServices.IsUnmanagedAttribute
struct IsUnmanagedAttribute_t77675DFE67789D53EEE0C0AF41E77BDEDE6D3A99;
// System.Reflection.MemberFilter
struct MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.Runtime.InteropServices.SafeHandle
struct SafeHandle_tC1A4DA80DA89B867CC011B707A07275230321BF7;
// Microsoft.Win32.SafeHandles.SafeHandleZeroOrMinusOneIsInvalid
struct SafeHandleZeroOrMinusOneIsInvalid_tC152552D137451170B3B1A304227B0ECADB65629;
// System.String
struct String_t;
// AprilTag.TagDetector
struct TagDetector_t3B7003AE75DF94DE10A317EBB8780D666369F871;
// System.Type
struct Type_t;
// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
// AprilTag.ImageConverter/AprilTag.BurstConvert_00000004$PostfixBurstDelegate
struct BurstConvert_00000004U24PostfixBurstDelegate_t14DF740BE0D3592EEC7F576C460C28596321C404;

IL2CPP_EXTERN_C RuntimeClass* BurstCompiler_t2715484E1FF256726FC4D4D8E17C35A4C8DFA2B8_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* BurstConvert_00000004U24BurstDirectCall_tA74021187A94FD4D215D4AD7BCC6F6E2A29ACF54_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* DetectionArray_t8F5F6D9F4D35AB7935ACF076F68C4C4FCDF915A1_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Detector_tFE9DE2EA3519A1B91F55A35E8EE68EB1B27B8B1A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Family_t7D94F3B6A5D5FB5FC1C3359ACFC3F9F018837F29_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ImageU8_t5D5B6A85A68488DA142C0E877C38D5427927F0D8_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IntPtr_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t46C4469D4D138AB8F0458EE91D417C1CBD938545_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t9C8E57F9F12FDB51DAAB696934615B4D8586F987_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Marshal_tD976A56A90263C3CE2B780D4B1CADADE2E70B4A7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Type_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C const RuntimeMethod* IJobParallelForExtensions_Schedule_TisPoseEstimationJob_tC28BC9261B23D1F28DC5F99692EE0FE3A4B0C1C7_m39C9940EA9C959D693F633F276750A029EEB1CCC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ImageConverter_BurstConvertU24BurstManaged_mC971E9DA121BF1A8689D82CB8C1E194DB679B924_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ImageConverter_BurstConvert_m692693BDCC65D43994012CAD6F42B75140A7DCBF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_mA7CDDF140F219597B0D676AA1124CE5BAFFFDCC9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m9585E3C747694F102010D222B5D1EFFD4C450F08_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_mACB80AEDAEE50A9E5C8555E4B60C05C1F2B9A04A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* NativeArrayExtensions_CopyTo_TisTagPose_t215F79C75676B0849191D37136AF4C1BF74CE70B_m7441055716F7969DE4F6F825DB6E8DCDEFA15E33_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* NativeArray_1_Dispose_m2CCF5DC6491B13230A61EC00B4F0CA4685B47623_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* NativeArray_1_Dispose_m993BF0ACBD5A8CBEF7379FDE1A3107AFEBEE2FCC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* NativeArray_1__ctor_m1AE29D60520158099A4679187A983A74E56CA12A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* NativeArray_1__ctor_mA6E360D28C08575FEECFAB24091DF9A9E6604F05_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* NativeSlice_1__ctor_mE31AB7379C5CB2573EC9DAD158864ED87A397838_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* NativeSlice_1_set_Item_m90D2D3D9E12864F61898EDDD71AA108C3C98AF8C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ReadOnlySpan_1_GetPinnableReference_m50C46112097070A4DBF24DA29011274258CAE62C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Span_1_GetPinnableReference_m55DA180AC02A047DAC0626C7B8CBC2E87626DD0C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Span_1__ctor_mE18EBB601FBFA01BA29FE353364700952A9091FE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Span_1_get_Length_m013E0DABFEA7C0FD3AE59BCF0B17907709CBC70D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Span_1_get_Length_m429BC42023241B4D851D65359CD7271BF938583F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Util_AsPointer_TisDetection_t1625D0598F2D1DB7D1E7AA2C92E1948DAB23A72C_mE86855F57893A4E96AE5199CF04B7C57EF3B1AB2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Util_AsRef_TisDetection_t1625D0598F2D1DB7D1E7AA2C92E1948DAB23A72C_mD62637A8A22433110DA0949D020833E709776D83_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Util_AsRef_TisInternalData_t54BD4B51ACE1D50D1BE9FA821A06541C3C10D477_m4E10219128AC125C3089E9D646DE7CCC72D03433_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Util_AsRef_TisInternalData_tEA74FE54ECC9BD8CAAD20E3A6C6EC7A83CA5119E_m48462DBBAFBD01BFB99707D5BAB9450C3C976A69_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Util_AsRef_TisMatd3x1_t3F60BCA738901CC33975651BDC7166D84C9CF347_m604186F4598F174F7FF3F921E64634D3843F14F4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Util_AsRef_TisMatd3x3_t00E5B51BA77383D28CBEC1E5972F225862672883_mF9678EAA50B09463FFC5198B4467CDAADC375491_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Util_AsRef_TisTimeProfile_tABC93C5F8A866D5F3561E53F913C48885AE9C626_m4F68F07E8ABB11CAF0C468BBA66E8F34741E3B80_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Util_AsRef_TisZArray_1_t6ACA73CBEC75346B0F8A43A809C592617D514A66_mABADA88D2580218A6CA64516CA66BBFE7C45CE0F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ValueTuple_2__ctor_m07EDA6EDF9BDDD9DB44BAFD23DC7AB04E57428E1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ValueTuple_2__ctor_m7C172CEFE485CB2C42B9F713A6FE7BA7625A6BCD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ZArray_1_get_AsSpan_m64F68DED771D00DC4A9D8454CD5718B11ADD9129_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ZArray_1_get_AsSpan_m9A33D353B79649B37CED0768BC228C2F7F382781_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeType* BurstConvert_00000004U24PostfixBurstDelegate_t14DF740BE0D3592EEC7F576C460C28596321C404_0_0_0_var;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;

struct ValueTuple_2U5BU5D_t4A4D8CB896C18C7C5A09BBB57C0A4A560F26A581;
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct U3CModuleU3E_tA56D8F8C32C44C6E272E5B1D5DBE5B6D99B6687D 
{
};

// System.Collections.Generic.List`1<System.ValueTuple`2<System.Object,System.Int64>>
struct List_1_tAB9A066739F9303BCF5EAA66D624F09428AEC252  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	ValueTuple_2U5BU5D_t4A4D8CB896C18C7C5A09BBB57C0A4A560F26A581* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_tAB9A066739F9303BCF5EAA66D624F09428AEC252_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	ValueTuple_2U5BU5D_t4A4D8CB896C18C7C5A09BBB57C0A4A560F26A581* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<System.ValueTuple`2<System.String,System.Int64>>
struct List_1_t9C8E57F9F12FDB51DAAB696934615B4D8586F987  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	ValueTuple_2U5BU5D_t9474A9871E34F10BD526359F84581C6DD4224827* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_t9C8E57F9F12FDB51DAAB696934615B4D8586F987_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	ValueTuple_2U5BU5D_t9474A9871E34F10BD526359F84581C6DD4224827* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<AprilTag.TagPose>
struct List_1_t46C4469D4D138AB8F0458EE91D417C1CBD938545  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	TagPoseU5BU5D_t6CE9795265AC86847D3F043F9C9957D63B671487* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_t46C4469D4D138AB8F0458EE91D417C1CBD938545_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	TagPoseU5BU5D_t6CE9795265AC86847D3F043F9C9957D63B671487* ___s_emptyArray_5;
};

// $BurstDirectCallInitializer
struct U24BurstDirectCallInitializer_tCA210B4A12E98D47B4642B164A47E33E065E1FD4  : public RuntimeObject
{
};
struct Il2CppArrayBounds;

// System.Attribute
struct Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA  : public RuntimeObject
{
};

// AprilTag.Interop.Config
struct Config_t041619E6788F8A8F314F7B6C0E1B88051076A4B3  : public RuntimeObject
{
};

// System.Runtime.ConstrainedExecution.CriticalFinalizerObject
struct CriticalFinalizerObject_t1DCAB623CAEA6529A96F5F3EDE3C7048A6E313C9  : public RuntimeObject
{
};

// AprilTag.ImageConverter
struct ImageConverter_t00A6B6FE4FB5F6B55616207F29E0FCC29E2C3CF8  : public RuntimeObject
{
};

// AprilTag.MatdExtensions
struct MatdExtensions_tB3DF44E3D07DBE7D16F3FBF58E5C913AB6DA2B11  : public RuntimeObject
{
};

// System.Reflection.MemberInfo
struct MemberInfo_t  : public RuntimeObject
{
};

// AprilTag.NativeArrayExtensions
struct NativeArrayExtensions_tC76442D2BD6075FEB82C75B953473FA57D92C7C6  : public RuntimeObject
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

// AprilTag.SystemConfig
struct SystemConfig_t6029A369B98B934344E42DA322552064B9FD2ADF  : public RuntimeObject
{
};

// AprilTag.TagDetector
struct TagDetector_t3B7003AE75DF94DE10A317EBB8780D666369F871  : public RuntimeObject
{
	// AprilTag.Interop.Detector AprilTag.TagDetector::_detector
	Detector_tFE9DE2EA3519A1B91F55A35E8EE68EB1B27B8B1A* ____detector_0;
	// AprilTag.Interop.Family AprilTag.TagDetector::_family
	Family_t7D94F3B6A5D5FB5FC1C3359ACFC3F9F018837F29* ____family_1;
	// AprilTag.Interop.ImageU8 AprilTag.TagDetector::_image
	ImageU8_t5D5B6A85A68488DA142C0E877C38D5427927F0D8* ____image_2;
	// System.Collections.Generic.List`1<AprilTag.TagPose> AprilTag.TagDetector::_detectedTags
	List_1_t46C4469D4D138AB8F0458EE91D417C1CBD938545* ____detectedTags_3;
	// System.Collections.Generic.List`1<System.ValueTuple`2<System.String,System.Int64>> AprilTag.TagDetector::_profileData
	List_1_t9C8E57F9F12FDB51DAAB696934615B4D8586F987* ____profileData_4;
};

// AprilTag.Interop.Util
struct Util_t47DE701587B952FCFA6C1212E9016B5FF7679BB3  : public RuntimeObject
{
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

// Unity.Collections.NativeArray`1<AprilTag.TagPose>
struct NativeArray_1_t2171E0DCF2C16898178BFEC8CA700B87BC4D5D2F 
{
	// System.Void* Unity.Collections.NativeArray`1::m_Buffer
	void* ___m_Buffer_0;
	// System.Int32 Unity.Collections.NativeArray`1::m_Length
	int32_t ___m_Length_1;
	// Unity.Collections.Allocator Unity.Collections.NativeArray`1::m_AllocatorLabel
	int32_t ___m_AllocatorLabel_2;
};

// Unity.Collections.NativeArray`1<AprilTag.PoseEstimationJob/Input>
struct NativeArray_1_tC1235F75D3B6DB733FF8EE0AD736BD46550C482E 
{
	// System.Void* Unity.Collections.NativeArray`1::m_Buffer
	void* ___m_Buffer_0;
	// System.Int32 Unity.Collections.NativeArray`1::m_Length
	int32_t ___m_Length_1;
	// Unity.Collections.Allocator Unity.Collections.NativeArray`1::m_AllocatorLabel
	int32_t ___m_AllocatorLabel_2;
};

// Unity.Collections.NativeSlice`1<AprilTag.PoseEstimationJob/Input>
struct NativeSlice_1_t1A41BF06BEA3647F689FE7A29E8238123AFD676F 
{
	// System.Byte* Unity.Collections.NativeSlice`1::m_Buffer
	uint8_t* ___m_Buffer_0;
	// System.Int32 Unity.Collections.NativeSlice`1::m_Stride
	int32_t ___m_Stride_1;
	// System.Int32 Unity.Collections.NativeSlice`1::m_Length
	int32_t ___m_Length_2;
};

// System.ValueTuple`2<System.Double,System.Double>
struct ValueTuple_2_t6535F6090E6D3C9A7A645F4BFD8ED400CBA8B14C 
{
	// T1 System.ValueTuple`2::Item1
	double ___Item1_0;
	// T2 System.ValueTuple`2::Item2
	double ___Item2_1;
};

// System.ValueTuple`2<System.Object,System.Int64>
struct ValueTuple_2_tAAF55A732C007E60A48A7C771AAAAEE0D53FC1E7 
{
	// T1 System.ValueTuple`2::Item1
	RuntimeObject* ___Item1_0;
	// T2 System.ValueTuple`2::Item2
	int64_t ___Item2_1;
};

// System.ValueTuple`2<System.String,System.Int64>
struct ValueTuple_2_t8418963FF4ACBEA95635FB52C32DE470951472C5 
{
	// T1 System.ValueTuple`2::Item1
	String_t* ___Item1_0;
	// T2 System.ValueTuple`2::Item2
	int64_t ___Item2_1;
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

// UnityEngine.Color32
struct Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B 
{
	union
	{
		#pragma pack(push, tp, 1)
		struct
		{
			// System.Int32 UnityEngine.Color32::rgba
			int32_t ___rgba_0;
		};
		#pragma pack(pop, tp)
		struct
		{
			int32_t ___rgba_0_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			// System.Byte UnityEngine.Color32::r
			uint8_t ___r_1;
		};
		#pragma pack(pop, tp)
		struct
		{
			uint8_t ___r_1_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___g_2_OffsetPadding[1];
			// System.Byte UnityEngine.Color32::g
			uint8_t ___g_2;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___g_2_OffsetPadding_forAlignmentOnly[1];
			uint8_t ___g_2_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___b_3_OffsetPadding[2];
			// System.Byte UnityEngine.Color32::b
			uint8_t ___b_3;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___b_3_OffsetPadding_forAlignmentOnly[2];
			uint8_t ___b_3_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___a_4_OffsetPadding[3];
			// System.Byte UnityEngine.Color32::a
			uint8_t ___a_4;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___a_4_OffsetPadding_forAlignmentOnly[3];
			uint8_t ___a_4_forAlignmentOnly;
		};
	};
};

// System.Double
struct Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F 
{
	// System.Double System.Double::m_value
	double ___m_value_0;
};

// Microsoft.CodeAnalysis.EmbeddedAttribute
struct EmbeddedAttribute_t25C11B2ABDFF2400FE3FD45F9244E710ACD759EF  : public Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA
{
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

// System.Runtime.CompilerServices.IsUnmanagedAttribute
struct IsUnmanagedAttribute_t77675DFE67789D53EEE0C0AF41E77BDEDE6D3A99  : public Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA
{
};

// AprilTag.Interop.Matd3x1
struct Matd3x1_t3F60BCA738901CC33975651BDC7166D84C9CF347 
{
	// System.UInt32 AprilTag.Interop.Matd3x1::nrows
	uint32_t ___nrows_0;
	// System.UInt32 AprilTag.Interop.Matd3x1::ncols
	uint32_t ___ncols_1;
	// System.Double AprilTag.Interop.Matd3x1::e0
	double ___e0_2;
	// System.Double AprilTag.Interop.Matd3x1::e1
	double ___e1_3;
	// System.Double AprilTag.Interop.Matd3x1::e2
	double ___e2_4;
};

// AprilTag.Interop.Matd3x3
struct Matd3x3_t00E5B51BA77383D28CBEC1E5972F225862672883 
{
	// System.UInt32 AprilTag.Interop.Matd3x3::nrows
	uint32_t ___nrows_0;
	// System.UInt32 AprilTag.Interop.Matd3x3::ncols
	uint32_t ___ncols_1;
	// System.Double AprilTag.Interop.Matd3x3::e00
	double ___e00_2;
	// System.Double AprilTag.Interop.Matd3x3::e01
	double ___e01_3;
	// System.Double AprilTag.Interop.Matd3x3::e02
	double ___e02_4;
	// System.Double AprilTag.Interop.Matd3x3::e10
	double ___e10_5;
	// System.Double AprilTag.Interop.Matd3x3::e11
	double ___e11_6;
	// System.Double AprilTag.Interop.Matd3x3::e12
	double ___e12_7;
	// System.Double AprilTag.Interop.Matd3x3::e20
	double ___e20_8;
	// System.Double AprilTag.Interop.Matd3x3::e21
	double ___e21_9;
	// System.Double AprilTag.Interop.Matd3x3::e22
	double ___e22_10;
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

// System.Single
struct Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C 
{
	// System.Single System.Single::m_value
	float ___m_value_0;
};

// System.UInt32
struct UInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B 
{
	// System.UInt32 System.UInt32::m_value
	uint32_t ___m_value_0;
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

// Unity.Mathematics.double2
struct double2_t0A9854C934D0BBE9DD41F2B318B64F830D7253FA 
{
	// System.Double Unity.Mathematics.double2::x
	double ___x_0;
	// System.Double Unity.Mathematics.double2::y
	double ___y_1;
};

struct double2_t0A9854C934D0BBE9DD41F2B318B64F830D7253FA_StaticFields
{
	// Unity.Mathematics.double2 Unity.Mathematics.double2::zero
	double2_t0A9854C934D0BBE9DD41F2B318B64F830D7253FA ___zero_2;
};

// Unity.Mathematics.float3
struct float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E 
{
	// System.Single Unity.Mathematics.float3::x
	float ___x_0;
	// System.Single Unity.Mathematics.float3::y
	float ___y_1;
	// System.Single Unity.Mathematics.float3::z
	float ___z_2;
};

struct float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E_StaticFields
{
	// Unity.Mathematics.float3 Unity.Mathematics.float3::zero
	float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E ___zero_3;
};

// Unity.Mathematics.float4
struct float4_t89D9A294E7A79BD81BFBDD18654508532958555E 
{
	// System.Single Unity.Mathematics.float4::x
	float ___x_0;
	// System.Single Unity.Mathematics.float4::y
	float ___y_1;
	// System.Single Unity.Mathematics.float4::z
	float ___z_2;
	// System.Single Unity.Mathematics.float4::w
	float ___w_3;
};

struct float4_t89D9A294E7A79BD81BFBDD18654508532958555E_StaticFields
{
	// Unity.Mathematics.float4 Unity.Mathematics.float4::zero
	float4_t89D9A294E7A79BD81BFBDD18654508532958555E ___zero_4;
};

// AprilTag.PoseEstimationJob/Input
struct Input_tBBD12BA8F1FDBC43290F58D2BDD6E5CC2D6C1F12 
{
	// AprilTag.Interop.Detection* AprilTag.PoseEstimationJob/Input::p
	Detection_t1625D0598F2D1DB7D1E7AA2C92E1948DAB23A72C* ___p_0;
};

// AprilTag.Interop.TimeProfileEntry/<name>e__FixedBuffer
struct U3CnameU3Ee__FixedBuffer_tD80CC73232F2C346304BF6B2EABBC593107B0277 
{
	union
	{
		struct
		{
			// System.Byte AprilTag.Interop.TimeProfileEntry/<name>e__FixedBuffer::FixedElementField
			uint8_t ___FixedElementField_0;
		};
		uint8_t U3CnameU3Ee__FixedBuffer_tD80CC73232F2C346304BF6B2EABBC593107B0277__padding[32];
	};
};

// System.ByReference`1<System.Byte>
struct ByReference_1_t9C85BCCAAF8C525B6C06B07E922D8D217BE8D6FC 
{
	// System.IntPtr System.ByReference`1::_value
	intptr_t ____value_0;
};

// System.ByReference`1<UnityEngine.Color32>
struct ByReference_1_t2F6DD447F09BA6643D703E03C0CB184F51C4BC97 
{
	// System.IntPtr System.ByReference`1::_value
	intptr_t ____value_0;
};

// System.ByReference`1<System.IntPtr>
struct ByReference_1_t7D5F6DBFFFB9C9EF491974D4BD58587312B9CD38 
{
	// System.IntPtr System.ByReference`1::_value
	intptr_t ____value_0;
};

// System.ByReference`1<AprilTag.Interop.TimeProfileEntry>
struct ByReference_1_t3A092501C420956310066F6C48BBE574860EB586 
{
	// System.IntPtr System.ByReference`1::_value
	intptr_t ____value_0;
};

// AprilTag.Interop.ZArray`1<System.IntPtr>
struct ZArray_1_t6ACA73CBEC75346B0F8A43A809C592617D514A66 
{
	// System.UInt64 AprilTag.Interop.ZArray`1::el_sz
	uint64_t ___el_sz_0;
	// System.Int32 AprilTag.Interop.ZArray`1::size
	int32_t ___size_1;
	// System.Int32 AprilTag.Interop.ZArray`1::alloc
	int32_t ___alloc_2;
	// System.IntPtr AprilTag.Interop.ZArray`1::data
	intptr_t ___data_3;
};

// AprilTag.Interop.ZArray`1<AprilTag.Interop.TimeProfileEntry>
struct ZArray_1_t329BDA8FEF7F1E9C3515198987CF8AA6AEB9938B 
{
	// System.UInt64 AprilTag.Interop.ZArray`1::el_sz
	uint64_t ___el_sz_0;
	// System.Int32 AprilTag.Interop.ZArray`1::size
	int32_t ___size_1;
	// System.Int32 AprilTag.Interop.ZArray`1::alloc
	int32_t ___alloc_2;
	// System.IntPtr AprilTag.Interop.ZArray`1::data
	intptr_t ___data_3;
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

// AprilTag.Interop.Detection
struct Detection_t1625D0598F2D1DB7D1E7AA2C92E1948DAB23A72C 
{
	// System.IntPtr AprilTag.Interop.Detection::family
	intptr_t ___family_0;
	// System.Int32 AprilTag.Interop.Detection::id
	int32_t ___id_1;
	// System.Int32 AprilTag.Interop.Detection::hamming
	int32_t ___hamming_2;
	// System.Single AprilTag.Interop.Detection::decision_margin
	float ___decision_margin_3;
	// System.IntPtr AprilTag.Interop.Detection::H
	intptr_t ___H_4;
	// System.Double AprilTag.Interop.Detection::c0
	double ___c0_5;
	// System.Double AprilTag.Interop.Detection::c1
	double ___c1_6;
	// System.Double AprilTag.Interop.Detection::p00
	double ___p00_7;
	// System.Double AprilTag.Interop.Detection::p01
	double ___p01_8;
	// System.Double AprilTag.Interop.Detection::p10
	double ___p10_9;
	// System.Double AprilTag.Interop.Detection::p11
	double ___p11_10;
	// System.Double AprilTag.Interop.Detection::p20
	double ___p20_11;
	// System.Double AprilTag.Interop.Detection::p21
	double ___p21_12;
	// System.Double AprilTag.Interop.Detection::p30
	double ___p30_13;
	// System.Double AprilTag.Interop.Detection::p31
	double ___p31_14;
};

// AprilTag.Interop.DetectionInfo
struct DetectionInfo_tB74A7A3EC1D7E0160DFA0D90CF7F7F4715A64162 
{
	// System.IntPtr AprilTag.Interop.DetectionInfo::det
	intptr_t ___det_0;
	// System.Double AprilTag.Interop.DetectionInfo::tagsize
	double ___tagsize_1;
	// System.Double AprilTag.Interop.DetectionInfo::fx
	double ___fx_2;
	// System.Double AprilTag.Interop.DetectionInfo::fy
	double ___fy_3;
	// System.Double AprilTag.Interop.DetectionInfo::cx
	double ___cx_4;
	// System.Double AprilTag.Interop.DetectionInfo::cy
	double ___cy_5;
};

// Unity.Jobs.JobHandle
struct JobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08 
{
	// System.IntPtr Unity.Jobs.JobHandle::jobGroup
	intptr_t ___jobGroup_0;
	// System.Int32 Unity.Jobs.JobHandle::version
	int32_t ___version_1;
};

// AprilTag.Interop.Pose
struct Pose_t20909DD795F365496D5FF3EA8D7A14A812C04238 
{
	// System.IntPtr AprilTag.Interop.Pose::matd_r
	intptr_t ___matd_r_0;
	// System.IntPtr AprilTag.Interop.Pose::matd_t
	intptr_t ___matd_t_1;
};

// AprilTag.PoseEstimationJob
struct PoseEstimationJob_tC28BC9261B23D1F28DC5F99692EE0FE3A4B0C1C7 
{
	// Unity.Collections.NativeArray`1<AprilTag.PoseEstimationJob/Input> AprilTag.PoseEstimationJob::_input
	NativeArray_1_tC1235F75D3B6DB733FF8EE0AD736BD46550C482E ____input_0;
	// Unity.Collections.NativeArray`1<AprilTag.TagPose> AprilTag.PoseEstimationJob::_output
	NativeArray_1_t2171E0DCF2C16898178BFEC8CA700B87BC4D5D2F ____output_1;
	// System.Double AprilTag.PoseEstimationJob::_tagSize
	double ____tagSize_2;
	// System.Double AprilTag.PoseEstimationJob::_focalLength
	double ____focalLength_3;
	// Unity.Mathematics.double2 AprilTag.PoseEstimationJob::_focalCenter
	double2_t0A9854C934D0BBE9DD41F2B318B64F830D7253FA ____focalCenter_4;
};

// System.RuntimeMethodHandle
struct RuntimeMethodHandle_tB35B96E97214DCBE20B0B02B1E687884B34680B2 
{
	// System.IntPtr System.RuntimeMethodHandle::value
	intptr_t ___value_0;
};

// System.RuntimeTypeHandle
struct RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B 
{
	// System.IntPtr System.RuntimeTypeHandle::value
	intptr_t ___value_0;
};

// System.Runtime.InteropServices.SafeHandle
struct SafeHandle_tC1A4DA80DA89B867CC011B707A07275230321BF7  : public CriticalFinalizerObject_t1DCAB623CAEA6529A96F5F3EDE3C7048A6E313C9
{
	// System.IntPtr System.Runtime.InteropServices.SafeHandle::handle
	intptr_t ___handle_0;
	// System.Int32 System.Runtime.InteropServices.SafeHandle::_state
	int32_t ____state_1;
	// System.Boolean System.Runtime.InteropServices.SafeHandle::_ownsHandle
	bool ____ownsHandle_2;
	// System.Boolean System.Runtime.InteropServices.SafeHandle::_fullyInitialized
	bool ____fullyInitialized_3;
};

// AprilTag.TagPose
struct TagPose_t215F79C75676B0849191D37136AF4C1BF74CE70B 
{
	// System.Int32 AprilTag.TagPose::<ID>k__BackingField
	int32_t ___U3CIDU3Ek__BackingField_0;
	// UnityEngine.Vector3 AprilTag.TagPose::<Position>k__BackingField
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___U3CPositionU3Ek__BackingField_1;
	// UnityEngine.Quaternion AprilTag.TagPose::<Rotation>k__BackingField
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___U3CRotationU3Ek__BackingField_2;
};

// AprilTag.Interop.TimeProfile
struct TimeProfile_tABC93C5F8A866D5F3561E53F913C48885AE9C626 
{
	// System.Int64 AprilTag.Interop.TimeProfile::utime
	int64_t ___utime_0;
	// System.IntPtr AprilTag.Interop.TimeProfile::stamps
	intptr_t ___stamps_1;
};

// AprilTag.Interop.TimeProfileEntry
struct TimeProfileEntry_t6DA6F7F2A383FC741B1C2F4C623E1CFF2E070EC5 
{
	// AprilTag.Interop.TimeProfileEntry/<name>e__FixedBuffer AprilTag.Interop.TimeProfileEntry::name
	U3CnameU3Ee__FixedBuffer_tD80CC73232F2C346304BF6B2EABBC593107B0277 ___name_0;
	// System.Int64 AprilTag.Interop.TimeProfileEntry::utime
	int64_t ___utime_1;
};

// Unity.Mathematics.float3x3
struct float3x3_tB318DB8C7E54B6CA9E14EB9AC7F5964C1189FC79 
{
	// Unity.Mathematics.float3 Unity.Mathematics.float3x3::c0
	float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E ___c0_0;
	// Unity.Mathematics.float3 Unity.Mathematics.float3x3::c1
	float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E ___c1_1;
	// Unity.Mathematics.float3 Unity.Mathematics.float3x3::c2
	float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E ___c2_2;
};

struct float3x3_tB318DB8C7E54B6CA9E14EB9AC7F5964C1189FC79_StaticFields
{
	// Unity.Mathematics.float3x3 Unity.Mathematics.float3x3::identity
	float3x3_tB318DB8C7E54B6CA9E14EB9AC7F5964C1189FC79 ___identity_3;
	// Unity.Mathematics.float3x3 Unity.Mathematics.float3x3::zero
	float3x3_tB318DB8C7E54B6CA9E14EB9AC7F5964C1189FC79 ___zero_4;
};

// Unity.Mathematics.quaternion
struct quaternion_tD6BCBECAF088B9EBAE2345EC8534C7A1A4C910D4 
{
	// Unity.Mathematics.float4 Unity.Mathematics.quaternion::value
	float4_t89D9A294E7A79BD81BFBDD18654508532958555E ___value_0;
};

struct quaternion_tD6BCBECAF088B9EBAE2345EC8534C7A1A4C910D4_StaticFields
{
	// Unity.Mathematics.quaternion Unity.Mathematics.quaternion::identity
	quaternion_tD6BCBECAF088B9EBAE2345EC8534C7A1A4C910D4 ___identity_1;
};

// AprilTag.Interop.Detector/InternalData
struct InternalData_t54BD4B51ACE1D50D1BE9FA821A06541C3C10D477 
{
	// System.Int32 AprilTag.Interop.Detector/InternalData::nthreads
	int32_t ___nthreads_0;
	// System.Single AprilTag.Interop.Detector/InternalData::quad_decimate
	float ___quad_decimate_1;
	// System.Single AprilTag.Interop.Detector/InternalData::quad_sigma
	float ___quad_sigma_2;
	// System.Int32 AprilTag.Interop.Detector/InternalData::refine_edges
	int32_t ___refine_edges_3;
	// System.Double AprilTag.Interop.Detector/InternalData::decode_sharpening
	double ___decode_sharpening_4;
	// System.Int32 AprilTag.Interop.Detector/InternalData::debug
	int32_t ___debug_5;
	// System.Int32 AprilTag.Interop.Detector/InternalData::min_cluster_pixels
	int32_t ___min_cluster_pixels_6;
	// System.Int32 AprilTag.Interop.Detector/InternalData::max_nmaxima
	int32_t ___max_nmaxima_7;
	// System.Single AprilTag.Interop.Detector/InternalData::critical_rad
	float ___critical_rad_8;
	// System.Single AprilTag.Interop.Detector/InternalData::cos_critical_rad
	float ___cos_critical_rad_9;
	// System.Single AprilTag.Interop.Detector/InternalData::max_line_fit_mse
	float ___max_line_fit_mse_10;
	// System.Int32 AprilTag.Interop.Detector/InternalData::min_white_black_diff
	int32_t ___min_white_black_diff_11;
	// System.Int32 AprilTag.Interop.Detector/InternalData::deglitch
	int32_t ___deglitch_12;
	// System.IntPtr AprilTag.Interop.Detector/InternalData::tp
	intptr_t ___tp_13;
	// System.UInt32 AprilTag.Interop.Detector/InternalData::nedges
	uint32_t ___nedges_14;
	// System.UInt32 AprilTag.Interop.Detector/InternalData::nsegments
	uint32_t ___nsegments_15;
	// System.UInt32 AprilTag.Interop.Detector/InternalData::nquads
	uint32_t ___nquads_16;
	// System.IntPtr AprilTag.Interop.Detector/InternalData::tag_families
	intptr_t ___tag_families_17;
	// System.IntPtr AprilTag.Interop.Detector/InternalData::wp
	intptr_t ___wp_18;
};

// AprilTag.ImageConverter/AprilTag.BurstConvert_00000004$BurstDirectCall
struct BurstConvert_00000004U24BurstDirectCall_tA74021187A94FD4D215D4AD7BCC6F6E2A29ACF54  : public RuntimeObject
{
};

struct BurstConvert_00000004U24BurstDirectCall_tA74021187A94FD4D215D4AD7BCC6F6E2A29ACF54_StaticFields
{
	// System.IntPtr AprilTag.ImageConverter/AprilTag.BurstConvert_00000004$BurstDirectCall::Pointer
	intptr_t ___Pointer_0;
	// System.IntPtr AprilTag.ImageConverter/AprilTag.BurstConvert_00000004$BurstDirectCall::DeferredCompilation
	intptr_t ___DeferredCompilation_1;
};

// AprilTag.Interop.ImageU8/InternalData
struct InternalData_tEA74FE54ECC9BD8CAAD20E3A6C6EC7A83CA5119E 
{
	// System.Int32 AprilTag.Interop.ImageU8/InternalData::width
	int32_t ___width_0;
	// System.Int32 AprilTag.Interop.ImageU8/InternalData::height
	int32_t ___height_1;
	// System.Int32 AprilTag.Interop.ImageU8/InternalData::stride
	int32_t ___stride_2;
	// System.IntPtr AprilTag.Interop.ImageU8/InternalData::buf
	intptr_t ___buf_3;
};

// System.ReadOnlySpan`1<UnityEngine.Color32>
struct ReadOnlySpan_1_t2E193A80641154947640E9A71614019D7A8F3DFC 
{
	// System.ByReference`1<T> System.ReadOnlySpan`1::_pointer
	ByReference_1_t2F6DD447F09BA6643D703E03C0CB184F51C4BC97 ____pointer_0;
	// System.Int32 System.ReadOnlySpan`1::_length
	int32_t ____length_1;
};

// System.Span`1<System.Byte>
struct Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 
{
	// System.ByReference`1<T> System.Span`1::_pointer
	ByReference_1_t9C85BCCAAF8C525B6C06B07E922D8D217BE8D6FC ____pointer_0;
	// System.Int32 System.Span`1::_length
	int32_t ____length_1;
};

// System.Span`1<System.IntPtr>
struct Span_1_t1E317EB665016139E9E9B38B97D6EE8270DF7B68 
{
	// System.ByReference`1<T> System.Span`1::_pointer
	ByReference_1_t7D5F6DBFFFB9C9EF491974D4BD58587312B9CD38 ____pointer_0;
	// System.Int32 System.Span`1::_length
	int32_t ____length_1;
};

// System.Span`1<AprilTag.Interop.TimeProfileEntry>
struct Span_1_tF932EE1F0D4B7A62DA3C00158F42DFEEE51A1E49 
{
	// System.ByReference`1<T> System.Span`1::_pointer
	ByReference_1_t3A092501C420956310066F6C48BBE574860EB586 ____pointer_0;
	// System.Int32 System.Span`1::_length
	int32_t ____length_1;
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

// Microsoft.Win32.SafeHandles.SafeHandleZeroOrMinusOneIsInvalid
struct SafeHandleZeroOrMinusOneIsInvalid_tC152552D137451170B3B1A304227B0ECADB65629  : public SafeHandle_tC1A4DA80DA89B867CC011B707A07275230321BF7
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

// AprilTag.Interop.DetectionArray
struct DetectionArray_t8F5F6D9F4D35AB7935ACF076F68C4C4FCDF915A1  : public SafeHandleZeroOrMinusOneIsInvalid_tC152552D137451170B3B1A304227B0ECADB65629
{
};

// AprilTag.Interop.Detector
struct Detector_tFE9DE2EA3519A1B91F55A35E8EE68EB1B27B8B1A  : public SafeHandleZeroOrMinusOneIsInvalid_tC152552D137451170B3B1A304227B0ECADB65629
{
};

// AprilTag.Interop.Family
struct Family_t7D94F3B6A5D5FB5FC1C3359ACFC3F9F018837F29  : public SafeHandleZeroOrMinusOneIsInvalid_tC152552D137451170B3B1A304227B0ECADB65629
{
};

// AprilTag.Interop.ImageU8
struct ImageU8_t5D5B6A85A68488DA142C0E877C38D5427927F0D8  : public SafeHandleZeroOrMinusOneIsInvalid_tC152552D137451170B3B1A304227B0ECADB65629
{
};

// AprilTag.ImageConverter/AprilTag.BurstConvert_00000004$PostfixBurstDelegate
struct BurstConvert_00000004U24PostfixBurstDelegate_t14DF740BE0D3592EEC7F576C460C28596321C404  : public MulticastDelegate_t
{
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
// System.ValueTuple`2<System.Object,System.Int64>[]
struct ValueTuple_2U5BU5D_t4A4D8CB896C18C7C5A09BBB57C0A4A560F26A581  : public RuntimeArray
{
	ALIGN_FIELD (8) ValueTuple_2_tAAF55A732C007E60A48A7C771AAAAEE0D53FC1E7 m_Items[1];

	inline ValueTuple_2_tAAF55A732C007E60A48A7C771AAAAEE0D53FC1E7 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline ValueTuple_2_tAAF55A732C007E60A48A7C771AAAAEE0D53FC1E7* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, ValueTuple_2_tAAF55A732C007E60A48A7C771AAAAEE0D53FC1E7 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___Item1_0), (void*)NULL);
	}
	inline ValueTuple_2_tAAF55A732C007E60A48A7C771AAAAEE0D53FC1E7 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline ValueTuple_2_tAAF55A732C007E60A48A7C771AAAAEE0D53FC1E7* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, ValueTuple_2_tAAF55A732C007E60A48A7C771AAAAEE0D53FC1E7 value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___Item1_0), (void*)NULL);
	}
};


// T& modreq(System.Runtime.InteropServices.InAttribute) System.ReadOnlySpan`1<UnityEngine.Color32>::GetPinnableReference()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B* ReadOnlySpan_1_GetPinnableReference_m50C46112097070A4DBF24DA29011274258CAE62C_gshared (ReadOnlySpan_1_t2E193A80641154947640E9A71614019D7A8F3DFC* __this, const RuntimeMethod* method) ;
// T& System.Span`1<System.Byte>::GetPinnableReference()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint8_t* Span_1_GetPinnableReference_m55DA180AC02A047DAC0626C7B8CBC2E87626DD0C_gshared (Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305* __this, const RuntimeMethod* method) ;
// System.Void* AprilTag.Interop.Util::AsPointer<AprilTag.Interop.Detection>(T&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void* Util_AsPointer_TisDetection_t1625D0598F2D1DB7D1E7AA2C92E1948DAB23A72C_mE86855F57893A4E96AE5199CF04B7C57EF3B1AB2_gshared (Detection_t1625D0598F2D1DB7D1E7AA2C92E1948DAB23A72C* ___value0, const RuntimeMethod* method) ;
// T& AprilTag.Interop.Util::AsRef<AprilTag.Interop.Detection>(System.Void*)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Detection_t1625D0598F2D1DB7D1E7AA2C92E1948DAB23A72C* Util_AsRef_TisDetection_t1625D0598F2D1DB7D1E7AA2C92E1948DAB23A72C_mD62637A8A22433110DA0949D020833E709776D83_gshared (void* ___source0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<AprilTag.TagPose>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_mACB80AEDAEE50A9E5C8555E4B60C05C1F2B9A04A_gshared (List_1_t46C4469D4D138AB8F0458EE91D417C1CBD938545* __this, const RuntimeMethod* method) ;
// System.Void Unity.Collections.NativeArray`1<AprilTag.PoseEstimationJob/Input>::.ctor(System.Int32,Unity.Collections.Allocator,Unity.Collections.NativeArrayOptions)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeArray_1__ctor_m1AE29D60520158099A4679187A983A74E56CA12A_gshared (NativeArray_1_tC1235F75D3B6DB733FF8EE0AD736BD46550C482E* __this, int32_t ___length0, int32_t ___allocator1, int32_t ___options2, const RuntimeMethod* method) ;
// System.Void Unity.Collections.NativeArray`1<AprilTag.PoseEstimationJob/Input>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeArray_1_Dispose_m2CCF5DC6491B13230A61EC00B4F0CA4685B47623_gshared (NativeArray_1_tC1235F75D3B6DB733FF8EE0AD736BD46550C482E* __this, const RuntimeMethod* method) ;
// System.Void Unity.Collections.NativeSlice`1<AprilTag.PoseEstimationJob/Input>::.ctor(Unity.Collections.NativeArray`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeSlice_1__ctor_mE31AB7379C5CB2573EC9DAD158864ED87A397838_gshared (NativeSlice_1_t1A41BF06BEA3647F689FE7A29E8238123AFD676F* __this, NativeArray_1_tC1235F75D3B6DB733FF8EE0AD736BD46550C482E ___array0, const RuntimeMethod* method) ;
// System.Void Unity.Collections.NativeSlice`1<AprilTag.PoseEstimationJob/Input>::set_Item(System.Int32,T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeSlice_1_set_Item_m90D2D3D9E12864F61898EDDD71AA108C3C98AF8C_gshared (NativeSlice_1_t1A41BF06BEA3647F689FE7A29E8238123AFD676F* __this, int32_t ___index0, Input_tBBD12BA8F1FDBC43290F58D2BDD6E5CC2D6C1F12 ___value1, const RuntimeMethod* method) ;
// System.Void Unity.Collections.NativeArray`1<AprilTag.TagPose>::.ctor(System.Int32,Unity.Collections.Allocator,Unity.Collections.NativeArrayOptions)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeArray_1__ctor_mA6E360D28C08575FEECFAB24091DF9A9E6604F05_gshared (NativeArray_1_t2171E0DCF2C16898178BFEC8CA700B87BC4D5D2F* __this, int32_t ___length0, int32_t ___allocator1, int32_t ___options2, const RuntimeMethod* method) ;
// System.Void Unity.Collections.NativeArray`1<AprilTag.TagPose>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeArray_1_Dispose_m993BF0ACBD5A8CBEF7379FDE1A3107AFEBEE2FCC_gshared (NativeArray_1_t2171E0DCF2C16898178BFEC8CA700B87BC4D5D2F* __this, const RuntimeMethod* method) ;
// Unity.Jobs.JobHandle Unity.Jobs.IJobParallelForExtensions::Schedule<AprilTag.PoseEstimationJob>(T,System.Int32,System.Int32,Unity.Jobs.JobHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR JobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08 IJobParallelForExtensions_Schedule_TisPoseEstimationJob_tC28BC9261B23D1F28DC5F99692EE0FE3A4B0C1C7_m39C9940EA9C959D693F633F276750A029EEB1CCC_gshared (PoseEstimationJob_tC28BC9261B23D1F28DC5F99692EE0FE3A4B0C1C7 ___jobData0, int32_t ___arrayLength1, int32_t ___innerloopBatchCount2, JobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08 ___dependsOn3, const RuntimeMethod* method) ;
// System.Void AprilTag.NativeArrayExtensions::CopyTo<AprilTag.TagPose>(Unity.Collections.NativeArray`1<T>,System.Collections.Generic.List`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeArrayExtensions_CopyTo_TisTagPose_t215F79C75676B0849191D37136AF4C1BF74CE70B_m7441055716F7969DE4F6F825DB6E8DCDEFA15E33_gshared (NativeArray_1_t2171E0DCF2C16898178BFEC8CA700B87BC4D5D2F ___array0, List_1_t46C4469D4D138AB8F0458EE91D417C1CBD938545* ___list1, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.ValueTuple`2<System.Object,System.Int64>>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m115B3CD43CC344E5D47C585F9BCB6676E3CA6B89_gshared (List_1_tAB9A066739F9303BCF5EAA66D624F09428AEC252* __this, const RuntimeMethod* method) ;
// System.Void System.ValueTuple`2<System.Object,System.Int64>::.ctor(T1,T2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ValueTuple_2__ctor_m6C67367F47550F7F1DE131E75F82827810ABAF2B_gshared (ValueTuple_2_tAAF55A732C007E60A48A7C771AAAAEE0D53FC1E7* __this, RuntimeObject* ___item10, int64_t ___item21, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.ValueTuple`2<System.Object,System.Int64>>::Add(T)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_m1A274F0537390E2F4129A7EF130AEC6EEAFB012B_gshared_inline (List_1_tAB9A066739F9303BCF5EAA66D624F09428AEC252* __this, ValueTuple_2_tAAF55A732C007E60A48A7C771AAAAEE0D53FC1E7 ___item0, const RuntimeMethod* method) ;
// System.Int32 System.Span`1<AprilTag.Interop.TimeProfileEntry>::get_Length()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Span_1_get_Length_m013E0DABFEA7C0FD3AE59BCF0B17907709CBC70D_gshared_inline (Span_1_tF932EE1F0D4B7A62DA3C00158F42DFEEE51A1E49* __this, const RuntimeMethod* method) ;
// System.Void System.ValueTuple`2<System.Double,System.Double>::.ctor(T1,T2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ValueTuple_2__ctor_m07EDA6EDF9BDDD9DB44BAFD23DC7AB04E57428E1_gshared (ValueTuple_2_t6535F6090E6D3C9A7A645F4BFD8ED400CBA8B14C* __this, double ___item10, double ___item21, const RuntimeMethod* method) ;
// T& AprilTag.Interop.Util::AsRef<AprilTag.Interop.ZArray`1<System.IntPtr>>(System.Void*)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ZArray_1_t6ACA73CBEC75346B0F8A43A809C592617D514A66* Util_AsRef_TisZArray_1_t6ACA73CBEC75346B0F8A43A809C592617D514A66_mABADA88D2580218A6CA64516CA66BBFE7C45CE0F_gshared (void* ___source0, const RuntimeMethod* method) ;
// System.Span`1<T> AprilTag.Interop.ZArray`1<System.IntPtr>::get_AsSpan()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Span_1_t1E317EB665016139E9E9B38B97D6EE8270DF7B68 ZArray_1_get_AsSpan_m64F68DED771D00DC4A9D8454CD5718B11ADD9129_gshared (ZArray_1_t6ACA73CBEC75346B0F8A43A809C592617D514A66* __this, const RuntimeMethod* method) ;
// System.Int32 System.Span`1<System.IntPtr>::get_Length()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Span_1_get_Length_m429BC42023241B4D851D65359CD7271BF938583F_gshared_inline (Span_1_t1E317EB665016139E9E9B38B97D6EE8270DF7B68* __this, const RuntimeMethod* method) ;
// T& AprilTag.Interop.Util::AsRef<AprilTag.Interop.Detector/InternalData>(System.Void*)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR InternalData_t54BD4B51ACE1D50D1BE9FA821A06541C3C10D477* Util_AsRef_TisInternalData_t54BD4B51ACE1D50D1BE9FA821A06541C3C10D477_m4E10219128AC125C3089E9D646DE7CCC72D03433_gshared (void* ___source0, const RuntimeMethod* method) ;
// T& AprilTag.Interop.Util::AsRef<AprilTag.Interop.TimeProfile>(System.Void*)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TimeProfile_tABC93C5F8A866D5F3561E53F913C48885AE9C626* Util_AsRef_TisTimeProfile_tABC93C5F8A866D5F3561E53F913C48885AE9C626_m4F68F07E8ABB11CAF0C468BBA66E8F34741E3B80_gshared (void* ___source0, const RuntimeMethod* method) ;
// T& AprilTag.Interop.Util::AsRef<AprilTag.Interop.ImageU8/InternalData>(System.Void*)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR InternalData_tEA74FE54ECC9BD8CAAD20E3A6C6EC7A83CA5119E* Util_AsRef_TisInternalData_tEA74FE54ECC9BD8CAAD20E3A6C6EC7A83CA5119E_m48462DBBAFBD01BFB99707D5BAB9450C3C976A69_gshared (void* ___source0, const RuntimeMethod* method) ;
// System.Void System.Span`1<System.Byte>::.ctor(System.Void*,System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Span_1__ctor_mE18EBB601FBFA01BA29FE353364700952A9091FE_gshared_inline (Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305* __this, void* ___pointer0, int32_t ___length1, const RuntimeMethod* method) ;
// T& AprilTag.Interop.Util::AsRef<AprilTag.Interop.Matd3x3>(System.Void*)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Matd3x3_t00E5B51BA77383D28CBEC1E5972F225862672883* Util_AsRef_TisMatd3x3_t00E5B51BA77383D28CBEC1E5972F225862672883_mF9678EAA50B09463FFC5198B4467CDAADC375491_gshared (void* ___source0, const RuntimeMethod* method) ;
// T& AprilTag.Interop.Util::AsRef<AprilTag.Interop.Matd3x1>(System.Void*)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Matd3x1_t3F60BCA738901CC33975651BDC7166D84C9CF347* Util_AsRef_TisMatd3x1_t3F60BCA738901CC33975651BDC7166D84C9CF347_m604186F4598F174F7FF3F921E64634D3843F14F4_gshared (void* ___source0, const RuntimeMethod* method) ;
// System.Span`1<T> AprilTag.Interop.ZArray`1<AprilTag.Interop.TimeProfileEntry>::get_AsSpan()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Span_1_tF932EE1F0D4B7A62DA3C00158F42DFEEE51A1E49 ZArray_1_get_AsSpan_m9A33D353B79649B37CED0768BC228C2F7F382781_gshared (ZArray_1_t329BDA8FEF7F1E9C3515198987CF8AA6AEB9938B* __this, const RuntimeMethod* method) ;

// System.Void System.Attribute::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Attribute__ctor_m79ED1BF1EE36D1E417BA89A0D9F91F8AAD8D19E2 (Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA* __this, const RuntimeMethod* method) ;
// T& modreq(System.Runtime.InteropServices.InAttribute) System.ReadOnlySpan`1<UnityEngine.Color32>::GetPinnableReference()
inline Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B* ReadOnlySpan_1_GetPinnableReference_m50C46112097070A4DBF24DA29011274258CAE62C (ReadOnlySpan_1_t2E193A80641154947640E9A71614019D7A8F3DFC* __this, const RuntimeMethod* method)
{
	return ((  Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B* (*) (ReadOnlySpan_1_t2E193A80641154947640E9A71614019D7A8F3DFC*, const RuntimeMethod*))ReadOnlySpan_1_GetPinnableReference_m50C46112097070A4DBF24DA29011274258CAE62C_gshared)(__this, method);
}
// System.Span`1<System.Byte> AprilTag.Interop.ImageU8::get_Buffer()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 ImageU8_get_Buffer_m041F302D5E700EF81A9727E99020ADA9F2EC391E (ImageU8_t5D5B6A85A68488DA142C0E877C38D5427927F0D8* __this, const RuntimeMethod* method) ;
// T& System.Span`1<System.Byte>::GetPinnableReference()
inline uint8_t* Span_1_GetPinnableReference_m55DA180AC02A047DAC0626C7B8CBC2E87626DD0C (Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305* __this, const RuntimeMethod* method)
{
	return ((  uint8_t* (*) (Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305*, const RuntimeMethod*))Span_1_GetPinnableReference_m55DA180AC02A047DAC0626C7B8CBC2E87626DD0C_gshared)(__this, method);
}
// System.Int32 AprilTag.Interop.ImageU8::get_Width()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ImageU8_get_Width_m1A2B5125DFA09F67EE85B346DA098A8A527FDEF0 (ImageU8_t5D5B6A85A68488DA142C0E877C38D5427927F0D8* __this, const RuntimeMethod* method) ;
// System.Int32 AprilTag.Interop.ImageU8::get_Height()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ImageU8_get_Height_mEE3A5DF4F711252F2B5E4A9FEE1D814AEEEC2439 (ImageU8_t5D5B6A85A68488DA142C0E877C38D5427927F0D8* __this, const RuntimeMethod* method) ;
// System.Int32 AprilTag.Interop.ImageU8::get_Stride()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ImageU8_get_Stride_mAA8708780FE91817E80BEAD4DDD0094A24DD1936 (ImageU8_t5D5B6A85A68488DA142C0E877C38D5427927F0D8* __this, const RuntimeMethod* method) ;
// System.Void AprilTag.ImageConverter::BurstConvert(UnityEngine.Color32*,System.Byte*,System.Int32,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ImageConverter_BurstConvert_m692693BDCC65D43994012CAD6F42B75140A7DCBF (Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B* ___src0, uint8_t* ___dst1, int32_t ___width2, int32_t ___height3, int32_t ___stride4, const RuntimeMethod* method) ;
// System.Void AprilTag.ImageConverter/AprilTag.BurstConvert_00000004$BurstDirectCall::Invoke(UnityEngine.Color32*,System.Byte*,System.Int32,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BurstConvert_00000004U24BurstDirectCall_Invoke_m276F56B4BB3BA0433276310259847BBEAAD8EC7E (Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B* ___src0, uint8_t* ___dst1, int32_t ___width2, int32_t ___height3, int32_t ___stride4, const RuntimeMethod* method) ;
// System.Void* Unity.Burst.BurstCompiler::GetILPPMethodFunctionPointer(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void* BurstCompiler_GetILPPMethodFunctionPointer_m850347229EDA4058D224F885446BEE0137831BD0 (intptr_t ___ilppMethod0, const RuntimeMethod* method) ;
// System.Void AprilTag.ImageConverter/AprilTag.BurstConvert_00000004$BurstDirectCall::GetFunctionPointerDiscard(System.IntPtr&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BurstConvert_00000004U24BurstDirectCall_GetFunctionPointerDiscard_mD744C80D64B582A52A31700A8BAA42B9D817FD13 (intptr_t* p0, const RuntimeMethod* method) ;
// System.IntPtr Unity.Burst.BurstCompiler::CompileILPPMethod(System.RuntimeMethodHandle,System.RuntimeMethodHandle,System.RuntimeTypeHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t BurstCompiler_CompileILPPMethod_m2ADEDFEFDB17376C1A1FFD7C2D1A0C242AB78A8B (RuntimeMethodHandle_tB35B96E97214DCBE20B0B02B1E687884B34680B2 ___burstMethodHandle0, RuntimeMethodHandle_tB35B96E97214DCBE20B0B02B1E687884B34680B2 ___managedMethodHandle1, RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B ___delegateTypeHandle2, const RuntimeMethod* method) ;
// System.Void AprilTag.ImageConverter/AprilTag.BurstConvert_00000004$BurstDirectCall::Constructor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BurstConvert_00000004U24BurstDirectCall_Constructor_mB012EA8D4A55E2EB908F467DCE891D59922B8D57 (const RuntimeMethod* method) ;
// System.Boolean Unity.Burst.BurstCompiler::get_IsEnabled()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool BurstCompiler_get_IsEnabled_mEDA2FAA92A224EC22E16A1AB9E8C55FB0DECD755 (const RuntimeMethod* method) ;
// System.IntPtr AprilTag.ImageConverter/AprilTag.BurstConvert_00000004$BurstDirectCall::GetFunctionPointer()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t BurstConvert_00000004U24BurstDirectCall_GetFunctionPointer_m4EBB2D5439A248EE7AA7A53EC11BF46248F9D75B (const RuntimeMethod* method) ;
// System.Void AprilTag.ImageConverter::BurstConvert$BurstManaged(UnityEngine.Color32*,System.Byte*,System.Int32,System.Int32,System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ImageConverter_BurstConvertU24BurstManaged_mC971E9DA121BF1A8689D82CB8C1E194DB679B924_inline (Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B* ___src0, uint8_t* ___dst1, int32_t ___width2, int32_t ___height3, int32_t ___stride4, const RuntimeMethod* method) ;
// System.Single Unity.Mathematics.math::tan(System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float math_tan_m4B1EC7A066F0E70AAFAEB71626077D80D9BC502D_inline (float ___x0, const RuntimeMethod* method) ;
// Unity.Mathematics.double2 Unity.Mathematics.math::double2(System.Double,System.Double)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR double2_t0A9854C934D0BBE9DD41F2B318B64F830D7253FA math_double2_mC155EC1CD6E2A71A421578801832D7F930609DAE_inline (double ___x0, double ___y1, const RuntimeMethod* method) ;
// Unity.Mathematics.double2 Unity.Mathematics.double2::op_Division(Unity.Mathematics.double2,System.Double)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR double2_t0A9854C934D0BBE9DD41F2B318B64F830D7253FA double2_op_Division_m1A13854486042CA4260F00AC6E391CA70DA6DBFB_inline (double2_t0A9854C934D0BBE9DD41F2B318B64F830D7253FA ___lhs0, double ___rhs1, const RuntimeMethod* method) ;
// System.Void AprilTag.PoseEstimationJob::.ctor(Unity.Collections.NativeArray`1<AprilTag.PoseEstimationJob/Input>,Unity.Collections.NativeArray`1<AprilTag.TagPose>,System.Int32,System.Int32,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_NO_INLINE IL2CPP_METHOD_ATTR void PoseEstimationJob__ctor_mDDB9F1272D6AE4E428F23B0DC5402D67D83F8980 (PoseEstimationJob_tC28BC9261B23D1F28DC5F99692EE0FE3A4B0C1C7* IL2CPP_PARAMETER_RESTRICT __this, NativeArray_1_tC1235F75D3B6DB733FF8EE0AD736BD46550C482E ___input0, NativeArray_1_t2171E0DCF2C16898178BFEC8CA700B87BC4D5D2F ___output1, int32_t ___width2, int32_t ___height3, float ___fov4, float ___tagSize5, const RuntimeMethod* method) ;
// AprilTag.Interop.Detection& AprilTag.PoseEstimationJob/Input::get_Ref()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Detection_t1625D0598F2D1DB7D1E7AA2C92E1948DAB23A72C* Input_get_Ref_mA7C091D36AA92DEEE7D16FFE9E87630C5286D392 (Input_tBBD12BA8F1FDBC43290F58D2BDD6E5CC2D6C1F12* __this, const RuntimeMethod* method) ;
// System.Void AprilTag.Interop.DetectionInfo::.ctor(AprilTag.Interop.Detection&,System.Double,System.Double,System.Double,System.Double,System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DetectionInfo__ctor_mB3833066D920169C8A2EDE967F288547DBF4AC48 (DetectionInfo_tB74A7A3EC1D7E0160DFA0D90CF7F7F4715A64162* __this, Detection_t1625D0598F2D1DB7D1E7AA2C92E1948DAB23A72C* ___detection0, double ___tagSize1, double ___fx2, double ___fy3, double ___cx4, double ___cy5, const RuntimeMethod* method) ;
// System.Void AprilTag.Interop.Pose::.ctor(AprilTag.Interop.DetectionInfo&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Pose__ctor_m697F12A51872ED249002986CB6C86772521E7723 (Pose_t20909DD795F365496D5FF3EA8D7A14A812C04238* __this, DetectionInfo_tB74A7A3EC1D7E0160DFA0D90CF7F7F4715A64162* ___info0, const RuntimeMethod* method) ;
// System.Void AprilTag.Interop.Pose::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Pose_Dispose_mB85F3B23A0F8B8646E6D17914B3B7F84706795ED (Pose_t20909DD795F365496D5FF3EA8D7A14A812C04238* __this, const RuntimeMethod* method) ;
// AprilTag.Interop.Matd3x1& AprilTag.Interop.Pose::get_t()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Matd3x1_t3F60BCA738901CC33975651BDC7166D84C9CF347* Pose_get_t_m20731AAD07A84596F793FD2557F4C5261EA80770 (Pose_t20909DD795F365496D5FF3EA8D7A14A812C04238* __this, const RuntimeMethod* method) ;
// Unity.Mathematics.float3 AprilTag.MatdExtensions::AsFloat3(AprilTag.Interop.Matd3x1&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E MatdExtensions_AsFloat3_m7A018E4A98CF0CEDC3D823623263B176541C418C (Matd3x1_t3F60BCA738901CC33975651BDC7166D84C9CF347* ___src0, const RuntimeMethod* method) ;
// Unity.Mathematics.float3 Unity.Mathematics.math::float3(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E math_float3_m3C0D1DBA85B384CB78960F466FD66195A58E5FFB_inline (float ___x0, float ___y1, float ___z2, const RuntimeMethod* method) ;
// Unity.Mathematics.float3 Unity.Mathematics.float3::op_Multiply(Unity.Mathematics.float3,Unity.Mathematics.float3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E float3_op_Multiply_mF3DE0BD784C29A79E6B5BC0FD56E60B45F694AF3_inline (float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E ___lhs0, float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E ___rhs1, const RuntimeMethod* method) ;
// AprilTag.Interop.Matd3x3& AprilTag.Interop.Pose::get_R()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Matd3x3_t00E5B51BA77383D28CBEC1E5972F225862672883* Pose_get_R_m36B474543FBCC85C62525664F930D47C8EAD841B (Pose_t20909DD795F365496D5FF3EA8D7A14A812C04238* __this, const RuntimeMethod* method) ;
// Unity.Mathematics.float3x3 AprilTag.MatdExtensions::AsFloat3x3(AprilTag.Interop.Matd3x3&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float3x3_tB318DB8C7E54B6CA9E14EB9AC7F5964C1189FC79 MatdExtensions_AsFloat3x3_mD11C9D7C42A8A006A74473AC6A4CF7F4ED793802 (Matd3x3_t00E5B51BA77383D28CBEC1E5972F225862672883* ___src0, const RuntimeMethod* method) ;
// Unity.Mathematics.quaternion Unity.Mathematics.math::quaternion(Unity.Mathematics.float3x3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR quaternion_tD6BCBECAF088B9EBAE2345EC8534C7A1A4C910D4 math_quaternion_m96D124186ABB065411ADFD29D21B527EBADA145D_inline (float3x3_tB318DB8C7E54B6CA9E14EB9AC7F5964C1189FC79 ___m0, const RuntimeMethod* method) ;
// Unity.Mathematics.float4 Unity.Mathematics.math::float4(System.Single,System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float4_t89D9A294E7A79BD81BFBDD18654508532958555E math_float4_m89FFCFE209ED3D76075D738C0CF47B24941757F7_inline (float ___x0, float ___y1, float ___z2, float ___w3, const RuntimeMethod* method) ;
// Unity.Mathematics.float4 Unity.Mathematics.float4::op_Multiply(Unity.Mathematics.float4,Unity.Mathematics.float4)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float4_t89D9A294E7A79BD81BFBDD18654508532958555E float4_op_Multiply_mFA6F3CE69E7BCB9270744513E7E54447C6DBB164_inline (float4_t89D9A294E7A79BD81BFBDD18654508532958555E ___lhs0, float4_t89D9A294E7A79BD81BFBDD18654508532958555E ___rhs1, const RuntimeMethod* method) ;
// Unity.Mathematics.quaternion Unity.Mathematics.quaternion::op_Implicit(Unity.Mathematics.float4)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR quaternion_tD6BCBECAF088B9EBAE2345EC8534C7A1A4C910D4 quaternion_op_Implicit_m5B65713922A062DB08C5DC4C7C1CA4A775F7F397_inline (float4_t89D9A294E7A79BD81BFBDD18654508532958555E ___v0, const RuntimeMethod* method) ;
// System.Int32 AprilTag.Interop.Detection::get_ID()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Detection_get_ID_m34E1C04B3CEEE367076F00407A8D04C789F0E7DC_inline (Detection_t1625D0598F2D1DB7D1E7AA2C92E1948DAB23A72C* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 Unity.Mathematics.float3::op_Implicit(Unity.Mathematics.float3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 float3_op_Implicit_mEFBD5C49B7BC786CEEA7076D3A53D421BF88E2CB (float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E ___v0, const RuntimeMethod* method) ;
// UnityEngine.Quaternion Unity.Mathematics.quaternion::op_Implicit(Unity.Mathematics.quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 quaternion_op_Implicit_m4338E3AF4333CB0CA0D86518FFEF1FEA6DF9350E (quaternion_tD6BCBECAF088B9EBAE2345EC8534C7A1A4C910D4 ___q0, const RuntimeMethod* method) ;
// System.Void AprilTag.TagPose::.ctor(System.Int32,UnityEngine.Vector3,UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TagPose__ctor_mA05BB89D63F91DBC2819453421F790E6F6BE71E9 (TagPose_t215F79C75676B0849191D37136AF4C1BF74CE70B* __this, int32_t ___id0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___position1, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___rotation2, const RuntimeMethod* method) ;
// System.Void AprilTag.PoseEstimationJob::Execute(System.Int32)
IL2CPP_EXTERN_C IL2CPP_NO_INLINE IL2CPP_METHOD_ATTR void PoseEstimationJob_Execute_m3E717E8D5D0208C9D0203EB21BD7F54F06ADB9E7 (PoseEstimationJob_tC28BC9261B23D1F28DC5F99692EE0FE3A4B0C1C7* IL2CPP_PARAMETER_RESTRICT __this, int32_t ___i0, const RuntimeMethod* method) ;
// System.Void* AprilTag.Interop.Util::AsPointer<AprilTag.Interop.Detection>(T&)
inline void* Util_AsPointer_TisDetection_t1625D0598F2D1DB7D1E7AA2C92E1948DAB23A72C_mE86855F57893A4E96AE5199CF04B7C57EF3B1AB2 (Detection_t1625D0598F2D1DB7D1E7AA2C92E1948DAB23A72C* ___value0, const RuntimeMethod* method)
{
	return ((  void* (*) (Detection_t1625D0598F2D1DB7D1E7AA2C92E1948DAB23A72C*, const RuntimeMethod*))Util_AsPointer_TisDetection_t1625D0598F2D1DB7D1E7AA2C92E1948DAB23A72C_mE86855F57893A4E96AE5199CF04B7C57EF3B1AB2_gshared)(___value0, method);
}
// System.Void AprilTag.PoseEstimationJob/Input::.ctor(AprilTag.Interop.Detection&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Input__ctor_m3D7817DF62F15567C8E5E64D3F85263CED9B4BB1 (Input_tBBD12BA8F1FDBC43290F58D2BDD6E5CC2D6C1F12* __this, Detection_t1625D0598F2D1DB7D1E7AA2C92E1948DAB23A72C* ___r0, const RuntimeMethod* method) ;
// T& AprilTag.Interop.Util::AsRef<AprilTag.Interop.Detection>(System.Void*)
inline Detection_t1625D0598F2D1DB7D1E7AA2C92E1948DAB23A72C* Util_AsRef_TisDetection_t1625D0598F2D1DB7D1E7AA2C92E1948DAB23A72C_mD62637A8A22433110DA0949D020833E709776D83 (void* ___source0, const RuntimeMethod* method)
{
	return ((  Detection_t1625D0598F2D1DB7D1E7AA2C92E1948DAB23A72C* (*) (void*, const RuntimeMethod*))Util_AsRef_TisDetection_t1625D0598F2D1DB7D1E7AA2C92E1948DAB23A72C_mD62637A8A22433110DA0949D020833E709776D83_gshared)(___source0, method);
}
// System.Int32 Unity.Jobs.LowLevel.Unsafe.JobsUtility::get_JobWorkerCount()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t JobsUtility_get_JobWorkerCount_mE27B48604091376C19BE7573E06ADD22B24A3D76 (const RuntimeMethod* method) ;
// System.Int32 Unity.Mathematics.math::max(System.Int32,System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t math_max_m5DA4D66E3CC78BDFF8218BA039D6EBB1AC223826_inline (int32_t ___x0, int32_t ___y1, const RuntimeMethod* method) ;
// Unity.Mathematics.float3x3 Unity.Mathematics.math::float3x3(System.Single,System.Single,System.Single,System.Single,System.Single,System.Single,System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float3x3_tB318DB8C7E54B6CA9E14EB9AC7F5964C1189FC79 math_float3x3_m8AEC0695B8C3C8718229D5CCDB5EC087D6C27D7B_inline (float ___m000, float ___m011, float ___m022, float ___m103, float ___m114, float ___m125, float ___m206, float ___m217, float ___m228, const RuntimeMethod* method) ;
// System.Collections.Generic.List`1<System.ValueTuple`2<System.String,System.Int64>> AprilTag.TagDetector::GenerateProfileData()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_t9C8E57F9F12FDB51DAAB696934615B4D8586F987* TagDetector_GenerateProfileData_mAF21566DAC58A23E531ABD9AE2897CFFF4359AFB (TagDetector_t3B7003AE75DF94DE10A317EBB8780D666369F871* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<AprilTag.TagPose>::.ctor()
inline void List_1__ctor_mACB80AEDAEE50A9E5C8555E4B60C05C1F2B9A04A (List_1_t46C4469D4D138AB8F0458EE91D417C1CBD938545* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t46C4469D4D138AB8F0458EE91D417C1CBD938545*, const RuntimeMethod*))List_1__ctor_mACB80AEDAEE50A9E5C8555E4B60C05C1F2B9A04A_gshared)(__this, method);
}
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2 (RuntimeObject* __this, const RuntimeMethod* method) ;
// AprilTag.Interop.Detector AprilTag.Interop.Detector::Create()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Detector_tFE9DE2EA3519A1B91F55A35E8EE68EB1B27B8B1A* Detector_Create_mBDDFAA84DE2143560F3F1071EE26BB12033A83D9 (const RuntimeMethod* method) ;
// AprilTag.Interop.Family AprilTag.Interop.Family::CreateTagStandard41h12()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Family_t7D94F3B6A5D5FB5FC1C3359ACFC3F9F018837F29* Family_CreateTagStandard41h12_m8997F03F743B7113B1B27722DB84B5D49EB20D1E (const RuntimeMethod* method) ;
// AprilTag.Interop.ImageU8 AprilTag.Interop.ImageU8::Create(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ImageU8_t5D5B6A85A68488DA142C0E877C38D5427927F0D8* ImageU8_Create_m03A3DB17EA3B952AD6092609219349BD604CC4B6 (int32_t ___width0, int32_t ___height1, const RuntimeMethod* method) ;
// System.Int32 AprilTag.SystemConfig::get_PreferredThreadCount()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SystemConfig_get_PreferredThreadCount_mEC11F3B3CF2CBB04D9FEA512BD4A937B16A5EEEF (const RuntimeMethod* method) ;
// System.Void AprilTag.Interop.Detector::set_ThreadCount(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Detector_set_ThreadCount_mBCB6FBC6A0FE8149C20D0FF75F34E123B8A3623E (Detector_tFE9DE2EA3519A1B91F55A35E8EE68EB1B27B8B1A* __this, int32_t ___value0, const RuntimeMethod* method) ;
// System.Void AprilTag.Interop.Detector::set_QuadDecimate(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Detector_set_QuadDecimate_m02BD41831DA8F48BB92384B06AC542DE626F5845 (Detector_tFE9DE2EA3519A1B91F55A35E8EE68EB1B27B8B1A* __this, float ___value0, const RuntimeMethod* method) ;
// System.Void AprilTag.Interop.Detector::AddFamily(AprilTag.Interop.Family)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Detector_AddFamily_mFDA57B5832A8ED9A436BB5810F232EC7D5C5FE5D (Detector_tFE9DE2EA3519A1B91F55A35E8EE68EB1B27B8B1A* __this, Family_t7D94F3B6A5D5FB5FC1C3359ACFC3F9F018837F29* ___family0, const RuntimeMethod* method) ;
// System.Void AprilTag.Interop.Detector::RemoveFamily(AprilTag.Interop.Family)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Detector_RemoveFamily_m70F37B7DFE3D3B938C23D2EA9B6CEB88AD69658C (Detector_tFE9DE2EA3519A1B91F55A35E8EE68EB1B27B8B1A* __this, Family_t7D94F3B6A5D5FB5FC1C3359ACFC3F9F018837F29* ___family0, const RuntimeMethod* method) ;
// System.Void System.Runtime.InteropServices.SafeHandle::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SafeHandle_Dispose_m4FB5B8A7ED78B90757F1B570D4025F3BA26A39F3 (SafeHandle_tC1A4DA80DA89B867CC011B707A07275230321BF7* __this, const RuntimeMethod* method) ;
// System.Void AprilTag.ImageConverter::Convert(System.ReadOnlySpan`1<UnityEngine.Color32>,AprilTag.Interop.ImageU8)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ImageConverter_Convert_m8BEA27845A8EA50A1B1F35B7BB4FE12490CCE3CB (ReadOnlySpan_1_t2E193A80641154947640E9A71614019D7A8F3DFC ___data0, ImageU8_t5D5B6A85A68488DA142C0E877C38D5427927F0D8* ___image1, const RuntimeMethod* method) ;
// System.Void AprilTag.TagDetector::RunDetectorAndEstimator(System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TagDetector_RunDetectorAndEstimator_m84DCA181F34365BEDE1E4E77AB29E7A2918431EF (TagDetector_t3B7003AE75DF94DE10A317EBB8780D666369F871* __this, float ___fov0, float ___tagSize1, const RuntimeMethod* method) ;
// AprilTag.Interop.DetectionArray AprilTag.Interop.Detector::Detect(AprilTag.Interop.ImageU8)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DetectionArray_t8F5F6D9F4D35AB7935ACF076F68C4C4FCDF915A1* Detector_Detect_mBD5F04BB95F41635B2FEAAEE5A1CB3297B656E62 (Detector_tFE9DE2EA3519A1B91F55A35E8EE68EB1B27B8B1A* __this, ImageU8_t5D5B6A85A68488DA142C0E877C38D5427927F0D8* ___image0, const RuntimeMethod* method) ;
// System.Int32 AprilTag.Interop.DetectionArray::get_Length()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t DetectionArray_get_Length_mA9853470655852797017DC0361ACB5DFE52B0805 (DetectionArray_t8F5F6D9F4D35AB7935ACF076F68C4C4FCDF915A1* __this, const RuntimeMethod* method) ;
// System.Void Unity.Collections.NativeArray`1<AprilTag.PoseEstimationJob/Input>::.ctor(System.Int32,Unity.Collections.Allocator,Unity.Collections.NativeArrayOptions)
inline void NativeArray_1__ctor_m1AE29D60520158099A4679187A983A74E56CA12A (NativeArray_1_tC1235F75D3B6DB733FF8EE0AD736BD46550C482E* __this, int32_t ___length0, int32_t ___allocator1, int32_t ___options2, const RuntimeMethod* method)
{
	((  void (*) (NativeArray_1_tC1235F75D3B6DB733FF8EE0AD736BD46550C482E*, int32_t, int32_t, int32_t, const RuntimeMethod*))NativeArray_1__ctor_m1AE29D60520158099A4679187A983A74E56CA12A_gshared)(__this, ___length0, ___allocator1, ___options2, method);
}
// System.Void Unity.Collections.NativeArray`1<AprilTag.PoseEstimationJob/Input>::Dispose()
inline void NativeArray_1_Dispose_m2CCF5DC6491B13230A61EC00B4F0CA4685B47623 (NativeArray_1_tC1235F75D3B6DB733FF8EE0AD736BD46550C482E* __this, const RuntimeMethod* method)
{
	((  void (*) (NativeArray_1_tC1235F75D3B6DB733FF8EE0AD736BD46550C482E*, const RuntimeMethod*))NativeArray_1_Dispose_m2CCF5DC6491B13230A61EC00B4F0CA4685B47623_gshared)(__this, method);
}
// System.Void Unity.Collections.NativeSlice`1<AprilTag.PoseEstimationJob/Input>::.ctor(Unity.Collections.NativeArray`1<T>)
inline void NativeSlice_1__ctor_mE31AB7379C5CB2573EC9DAD158864ED87A397838 (NativeSlice_1_t1A41BF06BEA3647F689FE7A29E8238123AFD676F* __this, NativeArray_1_tC1235F75D3B6DB733FF8EE0AD736BD46550C482E ___array0, const RuntimeMethod* method)
{
	((  void (*) (NativeSlice_1_t1A41BF06BEA3647F689FE7A29E8238123AFD676F*, NativeArray_1_tC1235F75D3B6DB733FF8EE0AD736BD46550C482E, const RuntimeMethod*))NativeSlice_1__ctor_mE31AB7379C5CB2573EC9DAD158864ED87A397838_gshared)(__this, ___array0, method);
}
// AprilTag.Interop.Detection& AprilTag.Interop.DetectionArray::get_Item(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Detection_t1625D0598F2D1DB7D1E7AA2C92E1948DAB23A72C* DetectionArray_get_Item_mF57999F04993B96EB09D020545032EAC6CCB2595 (DetectionArray_t8F5F6D9F4D35AB7935ACF076F68C4C4FCDF915A1* __this, int32_t ___i0, const RuntimeMethod* method) ;
// System.Void Unity.Collections.NativeSlice`1<AprilTag.PoseEstimationJob/Input>::set_Item(System.Int32,T)
inline void NativeSlice_1_set_Item_m90D2D3D9E12864F61898EDDD71AA108C3C98AF8C (NativeSlice_1_t1A41BF06BEA3647F689FE7A29E8238123AFD676F* __this, int32_t ___index0, Input_tBBD12BA8F1FDBC43290F58D2BDD6E5CC2D6C1F12 ___value1, const RuntimeMethod* method)
{
	((  void (*) (NativeSlice_1_t1A41BF06BEA3647F689FE7A29E8238123AFD676F*, int32_t, Input_tBBD12BA8F1FDBC43290F58D2BDD6E5CC2D6C1F12, const RuntimeMethod*))NativeSlice_1_set_Item_m90D2D3D9E12864F61898EDDD71AA108C3C98AF8C_gshared)(__this, ___index0, ___value1, method);
}
// System.Void Unity.Collections.NativeArray`1<AprilTag.TagPose>::.ctor(System.Int32,Unity.Collections.Allocator,Unity.Collections.NativeArrayOptions)
inline void NativeArray_1__ctor_mA6E360D28C08575FEECFAB24091DF9A9E6604F05 (NativeArray_1_t2171E0DCF2C16898178BFEC8CA700B87BC4D5D2F* __this, int32_t ___length0, int32_t ___allocator1, int32_t ___options2, const RuntimeMethod* method)
{
	((  void (*) (NativeArray_1_t2171E0DCF2C16898178BFEC8CA700B87BC4D5D2F*, int32_t, int32_t, int32_t, const RuntimeMethod*))NativeArray_1__ctor_mA6E360D28C08575FEECFAB24091DF9A9E6604F05_gshared)(__this, ___length0, ___allocator1, ___options2, method);
}
// System.Void Unity.Collections.NativeArray`1<AprilTag.TagPose>::Dispose()
inline void NativeArray_1_Dispose_m993BF0ACBD5A8CBEF7379FDE1A3107AFEBEE2FCC (NativeArray_1_t2171E0DCF2C16898178BFEC8CA700B87BC4D5D2F* __this, const RuntimeMethod* method)
{
	((  void (*) (NativeArray_1_t2171E0DCF2C16898178BFEC8CA700B87BC4D5D2F*, const RuntimeMethod*))NativeArray_1_Dispose_m993BF0ACBD5A8CBEF7379FDE1A3107AFEBEE2FCC_gshared)(__this, method);
}
// Unity.Jobs.JobHandle Unity.Jobs.IJobParallelForExtensions::Schedule<AprilTag.PoseEstimationJob>(T,System.Int32,System.Int32,Unity.Jobs.JobHandle)
inline JobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08 IJobParallelForExtensions_Schedule_TisPoseEstimationJob_tC28BC9261B23D1F28DC5F99692EE0FE3A4B0C1C7_m39C9940EA9C959D693F633F276750A029EEB1CCC (PoseEstimationJob_tC28BC9261B23D1F28DC5F99692EE0FE3A4B0C1C7 ___jobData0, int32_t ___arrayLength1, int32_t ___innerloopBatchCount2, JobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08 ___dependsOn3, const RuntimeMethod* method)
{
	return ((  JobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08 (*) (PoseEstimationJob_tC28BC9261B23D1F28DC5F99692EE0FE3A4B0C1C7, int32_t, int32_t, JobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08, const RuntimeMethod*))IJobParallelForExtensions_Schedule_TisPoseEstimationJob_tC28BC9261B23D1F28DC5F99692EE0FE3A4B0C1C7_m39C9940EA9C959D693F633F276750A029EEB1CCC_gshared)(___jobData0, ___arrayLength1, ___innerloopBatchCount2, ___dependsOn3, method);
}
// System.Void Unity.Jobs.JobHandle::Complete()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JobHandle_Complete_mDCED35A125AAB37EDDAB2E31C805B4904B614A4A (JobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08* __this, const RuntimeMethod* method) ;
// System.Void AprilTag.NativeArrayExtensions::CopyTo<AprilTag.TagPose>(Unity.Collections.NativeArray`1<T>,System.Collections.Generic.List`1<T>)
inline void NativeArrayExtensions_CopyTo_TisTagPose_t215F79C75676B0849191D37136AF4C1BF74CE70B_m7441055716F7969DE4F6F825DB6E8DCDEFA15E33 (NativeArray_1_t2171E0DCF2C16898178BFEC8CA700B87BC4D5D2F ___array0, List_1_t46C4469D4D138AB8F0458EE91D417C1CBD938545* ___list1, const RuntimeMethod* method)
{
	((  void (*) (NativeArray_1_t2171E0DCF2C16898178BFEC8CA700B87BC4D5D2F, List_1_t46C4469D4D138AB8F0458EE91D417C1CBD938545*, const RuntimeMethod*))NativeArrayExtensions_CopyTo_TisTagPose_t215F79C75676B0849191D37136AF4C1BF74CE70B_m7441055716F7969DE4F6F825DB6E8DCDEFA15E33_gshared)(___array0, ___list1, method);
}
// System.Void System.Collections.Generic.List`1<System.ValueTuple`2<System.String,System.Int64>>::.ctor()
inline void List_1__ctor_m9585E3C747694F102010D222B5D1EFFD4C450F08 (List_1_t9C8E57F9F12FDB51DAAB696934615B4D8586F987* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t9C8E57F9F12FDB51DAAB696934615B4D8586F987*, const RuntimeMethod*))List_1__ctor_m115B3CD43CC344E5D47C585F9BCB6676E3CA6B89_gshared)(__this, method);
}
// AprilTag.Interop.TimeProfile& AprilTag.Interop.Detector::get_TimeProfile()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TimeProfile_tABC93C5F8A866D5F3561E53F913C48885AE9C626* Detector_get_TimeProfile_m20BB92F18E1575D3A7519FF789FC569F425851BF (Detector_tFE9DE2EA3519A1B91F55A35E8EE68EB1B27B8B1A* __this, const RuntimeMethod* method) ;
// System.Span`1<AprilTag.Interop.TimeProfileEntry> AprilTag.Interop.TimeProfile::get_Stamps()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Span_1_tF932EE1F0D4B7A62DA3C00158F42DFEEE51A1E49 TimeProfile_get_Stamps_m5E7E920472AE7067D874AFBAF36DB5FF9BEB3510 (TimeProfile_tABC93C5F8A866D5F3561E53F913C48885AE9C626* __this, const RuntimeMethod* method) ;
// System.Int64 AprilTag.Interop.TimeProfile::get_UTime()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int64_t TimeProfile_get_UTime_m7F71F3D5CD12A38A9868C4FF1838DA591A0E6998_inline (TimeProfile_tABC93C5F8A866D5F3561E53F913C48885AE9C626* __this, const RuntimeMethod* method) ;
// System.String AprilTag.Interop.TimeProfileEntry::get_Name()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* TimeProfileEntry_get_Name_m7523C90D14530E20006AEAC3CA9BD9DE79BC7FD4 (TimeProfileEntry_t6DA6F7F2A383FC741B1C2F4C623E1CFF2E070EC5* __this, const RuntimeMethod* method) ;
// System.Int64 AprilTag.Interop.TimeProfileEntry::get_UTime()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int64_t TimeProfileEntry_get_UTime_mCD71B4AA19A81B7BB9DDE5E10BB5369508F62B58_inline (TimeProfileEntry_t6DA6F7F2A383FC741B1C2F4C623E1CFF2E070EC5* __this, const RuntimeMethod* method) ;
// System.Void System.ValueTuple`2<System.String,System.Int64>::.ctor(T1,T2)
inline void ValueTuple_2__ctor_m7C172CEFE485CB2C42B9F713A6FE7BA7625A6BCD (ValueTuple_2_t8418963FF4ACBEA95635FB52C32DE470951472C5* __this, String_t* ___item10, int64_t ___item21, const RuntimeMethod* method)
{
	((  void (*) (ValueTuple_2_t8418963FF4ACBEA95635FB52C32DE470951472C5*, String_t*, int64_t, const RuntimeMethod*))ValueTuple_2__ctor_m6C67367F47550F7F1DE131E75F82827810ABAF2B_gshared)(__this, ___item10, ___item21, method);
}
// System.Void System.Collections.Generic.List`1<System.ValueTuple`2<System.String,System.Int64>>::Add(T)
inline void List_1_Add_mA7CDDF140F219597B0D676AA1124CE5BAFFFDCC9_inline (List_1_t9C8E57F9F12FDB51DAAB696934615B4D8586F987* __this, ValueTuple_2_t8418963FF4ACBEA95635FB52C32DE470951472C5 ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t9C8E57F9F12FDB51DAAB696934615B4D8586F987*, ValueTuple_2_t8418963FF4ACBEA95635FB52C32DE470951472C5, const RuntimeMethod*))List_1_Add_m1A274F0537390E2F4129A7EF130AEC6EEAFB012B_gshared_inline)(__this, ___item0, method);
}
// System.Int32 System.Span`1<AprilTag.Interop.TimeProfileEntry>::get_Length()
inline int32_t Span_1_get_Length_m013E0DABFEA7C0FD3AE59BCF0B17907709CBC70D_inline (Span_1_tF932EE1F0D4B7A62DA3C00158F42DFEEE51A1E49* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Span_1_tF932EE1F0D4B7A62DA3C00158F42DFEEE51A1E49*, const RuntimeMethod*))Span_1_get_Length_m013E0DABFEA7C0FD3AE59BCF0B17907709CBC70D_gshared_inline)(__this, method);
}
// System.Int32 AprilTag.TagPose::get_ID()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t TagPose_get_ID_m48A90766AFF57644BAA48506DB797989D2E7AAA3_inline (TagPose_t215F79C75676B0849191D37136AF4C1BF74CE70B* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 AprilTag.TagPose::get_Position()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 TagPose_get_Position_mB6EE4290F68E0B957E4F554058806A2CD34AC032_inline (TagPose_t215F79C75676B0849191D37136AF4C1BF74CE70B* __this, const RuntimeMethod* method) ;
// UnityEngine.Quaternion AprilTag.TagPose::get_Rotation()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 TagPose_get_Rotation_mDDF2850E778FA1E59C00B127DF050A2AED92EBA7_inline (TagPose_t215F79C75676B0849191D37136AF4C1BF74CE70B* __this, const RuntimeMethod* method) ;
// System.Int32 AprilTag.Interop.Detection::get_Hamming()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Detection_get_Hamming_m9533F758A7D9A02536B4F2B2982DF0F33CF999A0_inline (Detection_t1625D0598F2D1DB7D1E7AA2C92E1948DAB23A72C* __this, const RuntimeMethod* method) ;
// System.Single AprilTag.Interop.Detection::get_DecisionMargin()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Detection_get_DecisionMargin_mA09DB6EE3D3E729DB31EDECE33C9A66B78B01BD0_inline (Detection_t1625D0598F2D1DB7D1E7AA2C92E1948DAB23A72C* __this, const RuntimeMethod* method) ;
// System.Void System.ValueTuple`2<System.Double,System.Double>::.ctor(T1,T2)
inline void ValueTuple_2__ctor_m07EDA6EDF9BDDD9DB44BAFD23DC7AB04E57428E1 (ValueTuple_2_t6535F6090E6D3C9A7A645F4BFD8ED400CBA8B14C* __this, double ___item10, double ___item21, const RuntimeMethod* method)
{
	((  void (*) (ValueTuple_2_t6535F6090E6D3C9A7A645F4BFD8ED400CBA8B14C*, double, double, const RuntimeMethod*))ValueTuple_2__ctor_m07EDA6EDF9BDDD9DB44BAFD23DC7AB04E57428E1_gshared)(__this, ___item10, ___item21, method);
}
// System.ValueTuple`2<System.Double,System.Double> AprilTag.Interop.Detection::get_Center()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ValueTuple_2_t6535F6090E6D3C9A7A645F4BFD8ED400CBA8B14C Detection_get_Center_m47E0AE2998BA72DAB1D4A11CF78CD678BDEEE729 (Detection_t1625D0598F2D1DB7D1E7AA2C92E1948DAB23A72C* __this, const RuntimeMethod* method) ;
// System.ValueTuple`2<System.Double,System.Double> AprilTag.Interop.Detection::get_Corner1()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ValueTuple_2_t6535F6090E6D3C9A7A645F4BFD8ED400CBA8B14C Detection_get_Corner1_mFE06287109347B779FF28258BC86F058742E2AD4 (Detection_t1625D0598F2D1DB7D1E7AA2C92E1948DAB23A72C* __this, const RuntimeMethod* method) ;
// System.ValueTuple`2<System.Double,System.Double> AprilTag.Interop.Detection::get_Corner2()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ValueTuple_2_t6535F6090E6D3C9A7A645F4BFD8ED400CBA8B14C Detection_get_Corner2_m246DAE2BA3DF3684E36C8078CFE8C66D69830109 (Detection_t1625D0598F2D1DB7D1E7AA2C92E1948DAB23A72C* __this, const RuntimeMethod* method) ;
// System.ValueTuple`2<System.Double,System.Double> AprilTag.Interop.Detection::get_Corner3()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ValueTuple_2_t6535F6090E6D3C9A7A645F4BFD8ED400CBA8B14C Detection_get_Corner3_m584C7BFDF6CFA33793C939D8EE042BBACE013E5B (Detection_t1625D0598F2D1DB7D1E7AA2C92E1948DAB23A72C* __this, const RuntimeMethod* method) ;
// System.ValueTuple`2<System.Double,System.Double> AprilTag.Interop.Detection::get_Corner4()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ValueTuple_2_t6535F6090E6D3C9A7A645F4BFD8ED400CBA8B14C Detection_get_Corner4_m9B7646233BD2029D37CA168B7987D39ECCE53D1D (Detection_t1625D0598F2D1DB7D1E7AA2C92E1948DAB23A72C* __this, const RuntimeMethod* method) ;
// System.Void Microsoft.Win32.SafeHandles.SafeHandleZeroOrMinusOneIsInvalid::.ctor(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SafeHandleZeroOrMinusOneIsInvalid__ctor_m9BA85F78EC25654EE170CA999EC379D9A4B59B89 (SafeHandleZeroOrMinusOneIsInvalid_tC152552D137451170B3B1A304227B0ECADB65629* __this, bool ___ownsHandle0, const RuntimeMethod* method) ;
// System.Void AprilTag.Interop.DetectionArray::_Destroy(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DetectionArray__Destroy_m53B384455648646595AA527AA9A293FFF6EEE2FA (intptr_t ___detections0, const RuntimeMethod* method) ;
// System.Void* System.IntPtr::op_Explicit(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void* IntPtr_op_Explicit_m693F2F9E685EE117D4AC080342B8959DAF684294 (intptr_t ___value0, const RuntimeMethod* method) ;
// T& AprilTag.Interop.Util::AsRef<AprilTag.Interop.ZArray`1<System.IntPtr>>(System.Void*)
inline ZArray_1_t6ACA73CBEC75346B0F8A43A809C592617D514A66* Util_AsRef_TisZArray_1_t6ACA73CBEC75346B0F8A43A809C592617D514A66_mABADA88D2580218A6CA64516CA66BBFE7C45CE0F (void* ___source0, const RuntimeMethod* method)
{
	return ((  ZArray_1_t6ACA73CBEC75346B0F8A43A809C592617D514A66* (*) (void*, const RuntimeMethod*))Util_AsRef_TisZArray_1_t6ACA73CBEC75346B0F8A43A809C592617D514A66_mABADA88D2580218A6CA64516CA66BBFE7C45CE0F_gshared)(___source0, method);
}
// AprilTag.Interop.ZArray`1<System.IntPtr>& AprilTag.Interop.DetectionArray::get_AsPointerArray()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ZArray_1_t6ACA73CBEC75346B0F8A43A809C592617D514A66* DetectionArray_get_AsPointerArray_m61A2E490C33C419339EC14F313CE82B03BD41352 (DetectionArray_t8F5F6D9F4D35AB7935ACF076F68C4C4FCDF915A1* __this, const RuntimeMethod* method) ;
// System.Span`1<T> AprilTag.Interop.ZArray`1<System.IntPtr>::get_AsSpan()
inline Span_1_t1E317EB665016139E9E9B38B97D6EE8270DF7B68 ZArray_1_get_AsSpan_m64F68DED771D00DC4A9D8454CD5718B11ADD9129 (ZArray_1_t6ACA73CBEC75346B0F8A43A809C592617D514A66* __this, const RuntimeMethod* method)
{
	return ((  Span_1_t1E317EB665016139E9E9B38B97D6EE8270DF7B68 (*) (ZArray_1_t6ACA73CBEC75346B0F8A43A809C592617D514A66*, const RuntimeMethod*))ZArray_1_get_AsSpan_m64F68DED771D00DC4A9D8454CD5718B11ADD9129_gshared)(__this, method);
}
// System.Int32 System.Span`1<System.IntPtr>::get_Length()
inline int32_t Span_1_get_Length_m429BC42023241B4D851D65359CD7271BF938583F_inline (Span_1_t1E317EB665016139E9E9B38B97D6EE8270DF7B68* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Span_1_t1E317EB665016139E9E9B38B97D6EE8270DF7B68*, const RuntimeMethod*))Span_1_get_Length_m429BC42023241B4D851D65359CD7271BF938583F_gshared_inline)(__this, method);
}
// System.IntPtr System.IntPtr::op_Explicit(System.Void*)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t IntPtr_op_Explicit_m04BEF6277775C13DD8A986812AAA3FCEC32DCCBE (void* ___value0, const RuntimeMethod* method) ;
// System.Void AprilTag.Interop.Detector::_Destroy(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Detector__Destroy_m8F1ACC00CFB7D622464CD752494574E9B46BC023 (intptr_t ___detector0, const RuntimeMethod* method) ;
// T& AprilTag.Interop.Util::AsRef<AprilTag.Interop.Detector/InternalData>(System.Void*)
inline InternalData_t54BD4B51ACE1D50D1BE9FA821A06541C3C10D477* Util_AsRef_TisInternalData_t54BD4B51ACE1D50D1BE9FA821A06541C3C10D477_m4E10219128AC125C3089E9D646DE7CCC72D03433 (void* ___source0, const RuntimeMethod* method)
{
	return ((  InternalData_t54BD4B51ACE1D50D1BE9FA821A06541C3C10D477* (*) (void*, const RuntimeMethod*))Util_AsRef_TisInternalData_t54BD4B51ACE1D50D1BE9FA821A06541C3C10D477_m4E10219128AC125C3089E9D646DE7CCC72D03433_gshared)(___source0, method);
}
// AprilTag.Interop.Detector/InternalData& AprilTag.Interop.Detector::get_Data()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR InternalData_t54BD4B51ACE1D50D1BE9FA821A06541C3C10D477* Detector_get_Data_mA9621767612A7D74B87BA15AE53A3D0AC3949AF7 (Detector_tFE9DE2EA3519A1B91F55A35E8EE68EB1B27B8B1A* __this, const RuntimeMethod* method) ;
// T& AprilTag.Interop.Util::AsRef<AprilTag.Interop.TimeProfile>(System.Void*)
inline TimeProfile_tABC93C5F8A866D5F3561E53F913C48885AE9C626* Util_AsRef_TisTimeProfile_tABC93C5F8A866D5F3561E53F913C48885AE9C626_m4F68F07E8ABB11CAF0C468BBA66E8F34741E3B80 (void* ___source0, const RuntimeMethod* method)
{
	return ((  TimeProfile_tABC93C5F8A866D5F3561E53F913C48885AE9C626* (*) (void*, const RuntimeMethod*))Util_AsRef_TisTimeProfile_tABC93C5F8A866D5F3561E53F913C48885AE9C626_m4F68F07E8ABB11CAF0C468BBA66E8F34741E3B80_gshared)(___source0, method);
}
// AprilTag.Interop.Detector AprilTag.Interop.Detector::_Create()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Detector_tFE9DE2EA3519A1B91F55A35E8EE68EB1B27B8B1A* Detector__Create_mF2E4FD112F86A0FC77DF0088D4058A819EC342DA (const RuntimeMethod* method) ;
// System.Void AprilTag.Interop.Detector::_AddFamilyBits(AprilTag.Interop.Detector,AprilTag.Interop.Family,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Detector__AddFamilyBits_mCECD5789F60B2000D3EC081C6773D2905D797938 (Detector_tFE9DE2EA3519A1B91F55A35E8EE68EB1B27B8B1A* ___detector0, Family_t7D94F3B6A5D5FB5FC1C3359ACFC3F9F018837F29* ___family1, int32_t ___correctedBits2, const RuntimeMethod* method) ;
// System.Void AprilTag.Interop.Detector::_RemoveFamily(AprilTag.Interop.Detector,AprilTag.Interop.Family)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Detector__RemoveFamily_mE4EFC9AD9D5B427742A1CFA6C3D1E80FB395350D (Detector_tFE9DE2EA3519A1B91F55A35E8EE68EB1B27B8B1A* ___detector0, Family_t7D94F3B6A5D5FB5FC1C3359ACFC3F9F018837F29* ___family1, const RuntimeMethod* method) ;
// AprilTag.Interop.DetectionArray AprilTag.Interop.Detector::_Detect(AprilTag.Interop.Detector,AprilTag.Interop.ImageU8)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DetectionArray_t8F5F6D9F4D35AB7935ACF076F68C4C4FCDF915A1* Detector__Detect_mDFBB72FA6A105FEE0067500AB61C46FE64C1B93F (Detector_tFE9DE2EA3519A1B91F55A35E8EE68EB1B27B8B1A* ___detector0, ImageU8_t5D5B6A85A68488DA142C0E877C38D5427927F0D8* ___image1, const RuntimeMethod* method) ;
// System.Void AprilTag.Interop.Detector::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Detector__ctor_m2E4A54810013E90004E0B768409DA3C971B603ED (Detector_tFE9DE2EA3519A1B91F55A35E8EE68EB1B27B8B1A* __this, const RuntimeMethod* method) ;
// System.Void System.Runtime.InteropServices.SafeHandle::DangerousAddRef(System.Boolean&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SafeHandle_DangerousAddRef_m9FA46208A92D8B33059B8E8712F49AE45BB5E922 (SafeHandle_tC1A4DA80DA89B867CC011B707A07275230321BF7* __this, bool* ___success0, const RuntimeMethod* method) ;
// System.Void System.Runtime.InteropServices.SafeHandle::DangerousRelease()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SafeHandle_DangerousRelease_m30A8B4E5BEA935C8925BC2115CD0AD13B937953E (SafeHandle_tC1A4DA80DA89B867CC011B707A07275230321BF7* __this, const RuntimeMethod* method) ;
// System.Void AprilTag.Interop.DetectionArray::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DetectionArray__ctor_m69EC74F583EBBB6DE157894F19F5A208ABD974A9 (DetectionArray_t8F5F6D9F4D35AB7935ACF076F68C4C4FCDF915A1* __this, const RuntimeMethod* method) ;
// System.Void AprilTag.Interop.Family::_DestroyTagStandard41h12(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Family__DestroyTagStandard41h12_m779BE0399BC92CA1FD76B7816C992037B071BAB8 (intptr_t ___ptr0, const RuntimeMethod* method) ;
// AprilTag.Interop.Family AprilTag.Interop.Family::_CreateTagStandard41h12()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Family_t7D94F3B6A5D5FB5FC1C3359ACFC3F9F018837F29* Family__CreateTagStandard41h12_m6D10403988E967C402EEE072C29285AB800230BE (const RuntimeMethod* method) ;
// System.Void AprilTag.Interop.Family::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Family__ctor_mCCAB37892CACF4BD9348010F1A114F889422702F (Family_t7D94F3B6A5D5FB5FC1C3359ACFC3F9F018837F29* __this, const RuntimeMethod* method) ;
// System.Void AprilTag.Interop.ImageU8::_Destroy(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ImageU8__Destroy_mA0FEC72A9B611B0E77E650F9EE04D4574BB90ADA (intptr_t ___image0, const RuntimeMethod* method) ;
// T& AprilTag.Interop.Util::AsRef<AprilTag.Interop.ImageU8/InternalData>(System.Void*)
inline InternalData_tEA74FE54ECC9BD8CAAD20E3A6C6EC7A83CA5119E* Util_AsRef_TisInternalData_tEA74FE54ECC9BD8CAAD20E3A6C6EC7A83CA5119E_m48462DBBAFBD01BFB99707D5BAB9450C3C976A69 (void* ___source0, const RuntimeMethod* method)
{
	return ((  InternalData_tEA74FE54ECC9BD8CAAD20E3A6C6EC7A83CA5119E* (*) (void*, const RuntimeMethod*))Util_AsRef_TisInternalData_tEA74FE54ECC9BD8CAAD20E3A6C6EC7A83CA5119E_m48462DBBAFBD01BFB99707D5BAB9450C3C976A69_gshared)(___source0, method);
}
// AprilTag.Interop.ImageU8/InternalData& AprilTag.Interop.ImageU8::get_Data()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR InternalData_tEA74FE54ECC9BD8CAAD20E3A6C6EC7A83CA5119E* ImageU8_get_Data_m5E422BEA3602FA80617EA53379BD68534ACAE5A3 (ImageU8_t5D5B6A85A68488DA142C0E877C38D5427927F0D8* __this, const RuntimeMethod* method) ;
// System.Void System.Span`1<System.Byte>::.ctor(System.Void*,System.Int32)
inline void Span_1__ctor_mE18EBB601FBFA01BA29FE353364700952A9091FE_inline (Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305* __this, void* ___pointer0, int32_t ___length1, const RuntimeMethod* method)
{
	((  void (*) (Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305*, void*, int32_t, const RuntimeMethod*))Span_1__ctor_mE18EBB601FBFA01BA29FE353364700952A9091FE_gshared_inline)(__this, ___pointer0, ___length1, method);
}
// AprilTag.Interop.ImageU8 AprilTag.Interop.ImageU8::_Create(System.UInt32,System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ImageU8_t5D5B6A85A68488DA142C0E877C38D5427927F0D8* ImageU8__Create_m361B9DF18B61B7E3A3C101FE94B611F3A3C5BC24 (uint32_t ___width0, uint32_t ___height1, const RuntimeMethod* method) ;
// System.Void AprilTag.Interop.ImageU8::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ImageU8__ctor_m67262A9C7EDEA24F0E5FDDC0DBC00D15CAC3CA46 (ImageU8_t5D5B6A85A68488DA142C0E877C38D5427927F0D8* __this, const RuntimeMethod* method) ;
// T& AprilTag.Interop.Util::AsRef<AprilTag.Interop.Matd3x3>(System.Void*)
inline Matd3x3_t00E5B51BA77383D28CBEC1E5972F225862672883* Util_AsRef_TisMatd3x3_t00E5B51BA77383D28CBEC1E5972F225862672883_mF9678EAA50B09463FFC5198B4467CDAADC375491 (void* ___source0, const RuntimeMethod* method)
{
	return ((  Matd3x3_t00E5B51BA77383D28CBEC1E5972F225862672883* (*) (void*, const RuntimeMethod*))Util_AsRef_TisMatd3x3_t00E5B51BA77383D28CBEC1E5972F225862672883_mF9678EAA50B09463FFC5198B4467CDAADC375491_gshared)(___source0, method);
}
// T& AprilTag.Interop.Util::AsRef<AprilTag.Interop.Matd3x1>(System.Void*)
inline Matd3x1_t3F60BCA738901CC33975651BDC7166D84C9CF347* Util_AsRef_TisMatd3x1_t3F60BCA738901CC33975651BDC7166D84C9CF347_m604186F4598F174F7FF3F921E64634D3843F14F4 (void* ___source0, const RuntimeMethod* method)
{
	return ((  Matd3x1_t3F60BCA738901CC33975651BDC7166D84C9CF347* (*) (void*, const RuntimeMethod*))Util_AsRef_TisMatd3x1_t3F60BCA738901CC33975651BDC7166D84C9CF347_m604186F4598F174F7FF3F921E64634D3843F14F4_gshared)(___source0, method);
}
// System.Double AprilTag.Interop.Pose::_Estimate(AprilTag.Interop.DetectionInfo&,AprilTag.Interop.Pose&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double Pose__Estimate_m5437F623891D38DEEA2C60697FA1F740D424D668 (DetectionInfo_tB74A7A3EC1D7E0160DFA0D90CF7F7F4715A64162* ___info0, Pose_t20909DD795F365496D5FF3EA8D7A14A812C04238* ___pose1, const RuntimeMethod* method) ;
// System.Boolean System.IntPtr::op_Inequality(System.IntPtr,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool IntPtr_op_Inequality_m2F715312CBFCE7E1A81D0689F68B97218E37E5D1 (intptr_t ___value10, intptr_t ___value21, const RuntimeMethod* method) ;
// System.Void AprilTag.Interop.Pose::_MatdDestroy(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Pose__MatdDestroy_mFC35EFD85254B5FACC2677D20D919C3098103BCC (intptr_t ___matd0, const RuntimeMethod* method) ;
// System.String AprilTag.Interop.TimeProfileEntry::ConvertName()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* TimeProfileEntry_ConvertName_m51BDE1059C630986FB8F01500A7D89BC05A9F841 (TimeProfileEntry_t6DA6F7F2A383FC741B1C2F4C623E1CFF2E070EC5* __this, const RuntimeMethod* method) ;
// System.String System.Runtime.InteropServices.Marshal::PtrToStringAnsi(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Marshal_PtrToStringAnsi_m86CDF46D9E4810BD7DB9BB52C1036E24A7DD46EE (intptr_t ___ptr0, const RuntimeMethod* method) ;
// System.Span`1<T> AprilTag.Interop.ZArray`1<AprilTag.Interop.TimeProfileEntry>::get_AsSpan()
inline Span_1_tF932EE1F0D4B7A62DA3C00158F42DFEEE51A1E49 ZArray_1_get_AsSpan_m9A33D353B79649B37CED0768BC228C2F7F382781 (ZArray_1_t329BDA8FEF7F1E9C3515198987CF8AA6AEB9938B* __this, const RuntimeMethod* method)
{
	return ((  Span_1_tF932EE1F0D4B7A62DA3C00158F42DFEEE51A1E49 (*) (ZArray_1_t329BDA8FEF7F1E9C3515198987CF8AA6AEB9938B*, const RuntimeMethod*))ZArray_1_get_AsSpan_m9A33D353B79649B37CED0768BC228C2F7F382781_gshared)(__this, method);
}
// System.Void AprilTag.ImageConverter/AprilTag.BurstConvert_00000004$BurstDirectCall::Initialize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BurstConvert_00000004U24BurstDirectCall_Initialize_m7A94382D03EB343AAC1D61D92E42E8D027F48934 (const RuntimeMethod* method) ;
// System.Void Unity.Mathematics.double2::.ctor(System.Double,System.Double)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void double2__ctor_m4026FE95F69FAEBD29D7092ADAA1CB845A8E859B_inline (double2_t0A9854C934D0BBE9DD41F2B318B64F830D7253FA* __this, double ___x0, double ___y1, const RuntimeMethod* method) ;
// System.Void Unity.Mathematics.float3::.ctor(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void float3__ctor_mC61002CD0EC13D7C37D846D021A78C028FB80DB9_inline (float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E* __this, float ___x0, float ___y1, float ___z2, const RuntimeMethod* method) ;
// System.Void Unity.Mathematics.quaternion::.ctor(Unity.Mathematics.float3x3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void quaternion__ctor_m354F09C0E50CA59DA43037E9993EAE9BF97E9120 (quaternion_tD6BCBECAF088B9EBAE2345EC8534C7A1A4C910D4* __this, float3x3_tB318DB8C7E54B6CA9E14EB9AC7F5964C1189FC79 ___m0, const RuntimeMethod* method) ;
// System.Void Unity.Mathematics.float4::.ctor(System.Single,System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void float4__ctor_mB2F7F2D8BCE8159BEF5A0D6400499E211858ED2D_inline (float4_t89D9A294E7A79BD81BFBDD18654508532958555E* __this, float ___x0, float ___y1, float ___z2, float ___w3, const RuntimeMethod* method) ;
// System.Void Unity.Mathematics.quaternion::.ctor(Unity.Mathematics.float4)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void quaternion__ctor_m2F6A34CCFD1150A326CB4CE108260A8BD8B1D75F_inline (quaternion_tD6BCBECAF088B9EBAE2345EC8534C7A1A4C910D4* __this, float4_t89D9A294E7A79BD81BFBDD18654508532958555E ___value0, const RuntimeMethod* method) ;
// System.Void Unity.Mathematics.float3x3::.ctor(System.Single,System.Single,System.Single,System.Single,System.Single,System.Single,System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void float3x3__ctor_m3AB31C9B587ABDCF15C8BF0E3A5B0158996A75ED_inline (float3x3_tB318DB8C7E54B6CA9E14EB9AC7F5964C1189FC79* __this, float ___m000, float ___m011, float ___m022, float ___m103, float ___m114, float ___m125, float ___m206, float ___m217, float ___m228, const RuntimeMethod* method) ;
// System.Type System.Type::GetTypeFromHandle(System.RuntimeTypeHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t* Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E (RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B ___handle0, const RuntimeMethod* method) ;
// System.Void System.ThrowHelper::ThrowInvalidTypeWithPointersNotSupported(System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_ThrowInvalidTypeWithPointersNotSupported_m6A58AD8706EDDB4CE9C309A6085249B6377C8CB5 (Type_t* ___targetType0, const RuntimeMethod* method) ;
// System.Void System.ThrowHelper::ThrowArgumentOutOfRangeException()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_ThrowArgumentOutOfRangeException_m272CE1B3040BA89B2C478E2CF629670574F30353 (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C void DEFAULT_CALL apriltag_detections_destroy(intptr_t);
IL2CPP_EXTERN_C void* DEFAULT_CALL apriltag_detector_create();
IL2CPP_EXTERN_C void DEFAULT_CALL apriltag_detector_destroy(intptr_t);
IL2CPP_EXTERN_C void DEFAULT_CALL apriltag_detector_add_family_bits(void*, void*, int32_t);
IL2CPP_EXTERN_C void DEFAULT_CALL apriltag_detector_remove_family(void*, void*);
IL2CPP_EXTERN_C void* DEFAULT_CALL apriltag_detector_detect(void*, void*);
IL2CPP_EXTERN_C void* DEFAULT_CALL tagStandard41h12_create();
IL2CPP_EXTERN_C void DEFAULT_CALL tagStandard41h12_destroy(intptr_t);
IL2CPP_EXTERN_C void* DEFAULT_CALL image_u8_create_stride(uint32_t, uint32_t, uint32_t);
IL2CPP_EXTERN_C void* DEFAULT_CALL image_u8_create(uint32_t, uint32_t);
IL2CPP_EXTERN_C void DEFAULT_CALL image_u8_destroy(intptr_t);
IL2CPP_EXTERN_C void DEFAULT_CALL matd_destroy(intptr_t);
IL2CPP_EXTERN_C double DEFAULT_CALL estimate_tag_pose(DetectionInfo_tB74A7A3EC1D7E0160DFA0D90CF7F7F4715A64162*, Pose_t20909DD795F365496D5FF3EA8D7A14A812C04238*);
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
// System.Void Microsoft.CodeAnalysis.EmbeddedAttribute::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EmbeddedAttribute__ctor_m620119DBFD687B16AE37CA01B75518D93AFEA021 (EmbeddedAttribute_t25C11B2ABDFF2400FE3FD45F9244E710ACD759EF* __this, const RuntimeMethod* method) 
{
	{
		Attribute__ctor_m79ED1BF1EE36D1E417BA89A0D9F91F8AAD8D19E2(__this, NULL);
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
// System.Void System.Runtime.CompilerServices.IsUnmanagedAttribute::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IsUnmanagedAttribute__ctor_m84FFE06A4B079AF473D16184109872EC636459E2 (IsUnmanagedAttribute_t77675DFE67789D53EEE0C0AF41E77BDEDE6D3A99* __this, const RuntimeMethod* method) 
{
	{
		Attribute__ctor_m79ED1BF1EE36D1E417BA89A0D9F91F8AAD8D19E2(__this, NULL);
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
// System.Void AprilTag.ImageConverter::Convert(System.ReadOnlySpan`1<UnityEngine.Color32>,AprilTag.Interop.ImageU8)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ImageConverter_Convert_m8BEA27845A8EA50A1B1F35B7BB4FE12490CCE3CB (ReadOnlySpan_1_t2E193A80641154947640E9A71614019D7A8F3DFC ___data0, ImageU8_t5D5B6A85A68488DA142C0E877C38D5427927F0D8* ___image1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReadOnlySpan_1_GetPinnableReference_m50C46112097070A4DBF24DA29011274258CAE62C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Span_1_GetPinnableReference_m55DA180AC02A047DAC0626C7B8CBC2E87626DD0C_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B* V_0 = NULL;
	uint8_t* V_1 = NULL;
	uint8_t* V_2 = NULL;
	Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 V_3;
	memset((&V_3), 0, sizeof(V_3));
	{
		// {
		Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B* L_0;
		L_0 = ReadOnlySpan_1_GetPinnableReference_m50C46112097070A4DBF24DA29011274258CAE62C((&___data0), ReadOnlySpan_1_GetPinnableReference_m50C46112097070A4DBF24DA29011274258CAE62C_RuntimeMethod_var);
		V_0 = L_0;
		// fixed (Color32* src = &data.GetPinnableReference())
		Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B* L_1 = V_0;
		ImageU8_t5D5B6A85A68488DA142C0E877C38D5427927F0D8* L_2 = ___image1;
		NullCheck(L_2);
		Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 L_3;
		L_3 = ImageU8_get_Buffer_m041F302D5E700EF81A9727E99020ADA9F2EC391E(L_2, NULL);
		V_3 = L_3;
		uint8_t* L_4;
		L_4 = Span_1_GetPinnableReference_m55DA180AC02A047DAC0626C7B8CBC2E87626DD0C((&V_3), Span_1_GetPinnableReference_m55DA180AC02A047DAC0626C7B8CBC2E87626DD0C_RuntimeMethod_var);
		V_2 = L_4;
		// fixed (byte* dst = &image.Buffer.GetPinnableReference())
		uint8_t* L_5 = V_2;
		V_1 = (uint8_t*)((uintptr_t)L_5);
		// BurstConvert(src, dst, image.Width, image.Height, image.Stride);
		uint8_t* L_6 = V_1;
		ImageU8_t5D5B6A85A68488DA142C0E877C38D5427927F0D8* L_7 = ___image1;
		NullCheck(L_7);
		int32_t L_8;
		L_8 = ImageU8_get_Width_m1A2B5125DFA09F67EE85B346DA098A8A527FDEF0(L_7, NULL);
		ImageU8_t5D5B6A85A68488DA142C0E877C38D5427927F0D8* L_9 = ___image1;
		NullCheck(L_9);
		int32_t L_10;
		L_10 = ImageU8_get_Height_mEE3A5DF4F711252F2B5E4A9FEE1D814AEEEC2439(L_9, NULL);
		ImageU8_t5D5B6A85A68488DA142C0E877C38D5427927F0D8* L_11 = ___image1;
		NullCheck(L_11);
		int32_t L_12;
		L_12 = ImageU8_get_Stride_mAA8708780FE91817E80BEAD4DDD0094A24DD1936(L_11, NULL);
		ImageConverter_BurstConvert_m692693BDCC65D43994012CAD6F42B75140A7DCBF((Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B*)((uintptr_t)L_1), L_6, L_8, L_10, L_12, NULL);
		V_2 = (uint8_t*)((uintptr_t)0);
		V_0 = (Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B*)((uintptr_t)0);
		// }
		return;
	}
}
// System.Void AprilTag.ImageConverter::BurstConvert(UnityEngine.Color32*,System.Byte*,System.Int32,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ImageConverter_BurstConvert_m692693BDCC65D43994012CAD6F42B75140A7DCBF (Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B* ___src0, uint8_t* ___dst1, int32_t ___width2, int32_t ___height3, int32_t ___stride4, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BurstConvert_00000004U24BurstDirectCall_tA74021187A94FD4D215D4AD7BCC6F6E2A29ACF54_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// var offs_src = 0;
		Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B* L_0 = ___src0;
		uint8_t* L_1 = ___dst1;
		// var offs_dst = stride * (height - 1);
		int32_t L_2 = ___width2;
		int32_t L_3 = ___height3;
		int32_t L_4 = ___stride4;
		il2cpp_codegen_runtime_class_init_inline(BurstConvert_00000004U24BurstDirectCall_tA74021187A94FD4D215D4AD7BCC6F6E2A29ACF54_il2cpp_TypeInfo_var);
		BurstConvert_00000004U24BurstDirectCall_Invoke_m276F56B4BB3BA0433276310259847BBEAAD8EC7E(L_0, L_1, L_2, L_3, L_4, NULL);
		return;
	}
}
// System.Void AprilTag.ImageConverter::BurstConvert$BurstManaged(UnityEngine.Color32*,System.Byte*,System.Int32,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ImageConverter_BurstConvertU24BurstManaged_mC971E9DA121BF1A8689D82CB8C1E194DB679B924 (Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B* ___src0, uint8_t* ___dst1, int32_t ___width2, int32_t ___height3, int32_t ___stride4, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	{
		// var offs_src = 0;
		V_0 = 0;
		// var offs_dst = stride * (height - 1);
		int32_t L_0 = ___stride4;
		int32_t L_1 = ___height3;
		V_1 = ((int32_t)il2cpp_codegen_multiply(L_0, ((int32_t)il2cpp_codegen_subtract(L_1, 1))));
		// for (var y = 0; y < height; y++)
		V_2 = 0;
		goto IL_003e;
	}

IL_000d:
	{
		// for (var x = 0; x < width; x++)
		V_3 = 0;
		goto IL_002d;
	}

IL_0011:
	{
		// dst[offs_dst + x] = src[offs_src + x].g;
		uint8_t* L_2 = ___dst1;
		int32_t L_3 = V_1;
		int32_t L_4 = V_3;
		Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B* L_5 = ___src0;
		int32_t L_6 = V_0;
		int32_t L_7 = V_3;
		uint32_t L_8 = sizeof(Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B);
		NullCheck(((Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B*)il2cpp_codegen_add((intptr_t)L_5, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_add(L_6, L_7))), (int32_t)L_8)))));
		uint8_t L_9 = ((Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B*)il2cpp_codegen_add((intptr_t)L_5, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_add(L_6, L_7))), (int32_t)L_8))))->___g_2;
		*((int8_t*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_2, ((int32_t)il2cpp_codegen_add(L_3, L_4))))) = (int8_t)L_9;
		// for (var x = 0; x < width; x++)
		int32_t L_10 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_10, 1));
	}

IL_002d:
	{
		// for (var x = 0; x < width; x++)
		int32_t L_11 = V_3;
		int32_t L_12 = ___width2;
		if ((((int32_t)L_11) < ((int32_t)L_12)))
		{
			goto IL_0011;
		}
	}
	{
		// offs_src += width;
		int32_t L_13 = V_0;
		int32_t L_14 = ___width2;
		V_0 = ((int32_t)il2cpp_codegen_add(L_13, L_14));
		// offs_dst -= stride;
		int32_t L_15 = V_1;
		int32_t L_16 = ___stride4;
		V_1 = ((int32_t)il2cpp_codegen_subtract(L_15, L_16));
		// for (var y = 0; y < height; y++)
		int32_t L_17 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_17, 1));
	}

IL_003e:
	{
		// for (var y = 0; y < height; y++)
		int32_t L_18 = V_2;
		int32_t L_19 = ___height3;
		if ((((int32_t)L_18) < ((int32_t)L_19)))
		{
			goto IL_000d;
		}
	}
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
void BurstConvert_00000004U24PostfixBurstDelegate_Invoke_m37B7651DCAF19AD5A0381D35E091D101D76D1E8A_Multicast(BurstConvert_00000004U24PostfixBurstDelegate_t14DF740BE0D3592EEC7F576C460C28596321C404* __this, Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B* ___src0, uint8_t* ___dst1, int32_t ___width2, int32_t ___height3, int32_t ___stride4, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		BurstConvert_00000004U24PostfixBurstDelegate_t14DF740BE0D3592EEC7F576C460C28596321C404* currentDelegate = reinterpret_cast<BurstConvert_00000004U24PostfixBurstDelegate_t14DF740BE0D3592EEC7F576C460C28596321C404*>(delegatesToInvoke[i]);
		typedef void (*FunctionPointerType) (RuntimeObject*, Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B*, uint8_t*, int32_t, int32_t, int32_t, const RuntimeMethod*);
		((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, ___src0, ___dst1, ___width2, ___height3, ___stride4, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
}
void BurstConvert_00000004U24PostfixBurstDelegate_Invoke_m37B7651DCAF19AD5A0381D35E091D101D76D1E8A_OpenInst(BurstConvert_00000004U24PostfixBurstDelegate_t14DF740BE0D3592EEC7F576C460C28596321C404* __this, Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B* ___src0, uint8_t* ___dst1, int32_t ___width2, int32_t ___height3, int32_t ___stride4, const RuntimeMethod* method)
{
	NullCheck(___src0);
	typedef void (*FunctionPointerType) (Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B*, uint8_t*, int32_t, int32_t, int32_t, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___src0, ___dst1, ___width2, ___height3, ___stride4, method);
}
void BurstConvert_00000004U24PostfixBurstDelegate_Invoke_m37B7651DCAF19AD5A0381D35E091D101D76D1E8A_OpenStatic(BurstConvert_00000004U24PostfixBurstDelegate_t14DF740BE0D3592EEC7F576C460C28596321C404* __this, Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B* ___src0, uint8_t* ___dst1, int32_t ___width2, int32_t ___height3, int32_t ___stride4, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B*, uint8_t*, int32_t, int32_t, int32_t, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___src0, ___dst1, ___width2, ___height3, ___stride4, method);
}
void BurstConvert_00000004U24PostfixBurstDelegate_Invoke_m37B7651DCAF19AD5A0381D35E091D101D76D1E8A_OpenStaticInvoker(BurstConvert_00000004U24PostfixBurstDelegate_t14DF740BE0D3592EEC7F576C460C28596321C404* __this, Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B* ___src0, uint8_t* ___dst1, int32_t ___width2, int32_t ___height3, int32_t ___stride4, const RuntimeMethod* method)
{
	InvokerActionInvoker5< Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B*, uint8_t*, int32_t, int32_t, int32_t >::Invoke(__this->___method_ptr_0, method, NULL, ___src0, ___dst1, ___width2, ___height3, ___stride4);
}
void BurstConvert_00000004U24PostfixBurstDelegate_Invoke_m37B7651DCAF19AD5A0381D35E091D101D76D1E8A_ClosedStaticInvoker(BurstConvert_00000004U24PostfixBurstDelegate_t14DF740BE0D3592EEC7F576C460C28596321C404* __this, Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B* ___src0, uint8_t* ___dst1, int32_t ___width2, int32_t ___height3, int32_t ___stride4, const RuntimeMethod* method)
{
	InvokerActionInvoker6< RuntimeObject*, Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B*, uint8_t*, int32_t, int32_t, int32_t >::Invoke(__this->___method_ptr_0, method, NULL, __this->___m_target_2, ___src0, ___dst1, ___width2, ___height3, ___stride4);
}
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_BurstConvert_00000004U24PostfixBurstDelegate_t14DF740BE0D3592EEC7F576C460C28596321C404 (BurstConvert_00000004U24PostfixBurstDelegate_t14DF740BE0D3592EEC7F576C460C28596321C404* __this, Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B* ___src0, uint8_t* ___dst1, int32_t ___width2, int32_t ___height3, int32_t ___stride4, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)(Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B*, uint8_t*, int32_t, int32_t, int32_t);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_reverse_pinvoke_function_ptr(__this));
	// Native function invocation
	il2cppPInvokeFunc(___src0, ___dst1, ___width2, ___height3, ___stride4);

}
// System.Void AprilTag.ImageConverter/AprilTag.BurstConvert_00000004$PostfixBurstDelegate::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BurstConvert_00000004U24PostfixBurstDelegate__ctor_mE0C7C9C648ED196F77EA8901EC018ABE8F2AE98F (BurstConvert_00000004U24PostfixBurstDelegate_t14DF740BE0D3592EEC7F576C460C28596321C404* __this, RuntimeObject* p0, intptr_t p1, const RuntimeMethod* method) 
{
	__this->___method_ptr_0 = il2cpp_codegen_get_virtual_call_method_pointer((RuntimeMethod*)p1);
	__this->___method_3 = p1;
	__this->___m_target_2 = p0;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target_2), (void*)p0);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)p1);
	__this->___method_code_6 = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)p1))
	{
		bool isOpen = parameterCount == 5;
		if (il2cpp_codegen_call_method_via_invoker((RuntimeMethod*)p1))
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&BurstConvert_00000004U24PostfixBurstDelegate_Invoke_m37B7651DCAF19AD5A0381D35E091D101D76D1E8A_OpenStaticInvoker;
			else
				__this->___invoke_impl_1 = (intptr_t)&BurstConvert_00000004U24PostfixBurstDelegate_Invoke_m37B7651DCAF19AD5A0381D35E091D101D76D1E8A_ClosedStaticInvoker;
		else
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&BurstConvert_00000004U24PostfixBurstDelegate_Invoke_m37B7651DCAF19AD5A0381D35E091D101D76D1E8A_OpenStatic;
			else
				{
					__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
					__this->___method_code_6 = (intptr_t)__this->___m_target_2;
				}
	}
	else
	{
		bool isOpen = parameterCount == 4;
		if (isOpen)
		{
			__this->___invoke_impl_1 = (intptr_t)&BurstConvert_00000004U24PostfixBurstDelegate_Invoke_m37B7651DCAF19AD5A0381D35E091D101D76D1E8A_OpenInst;
		}
		else
		{
			if (p0 == NULL)
				il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
			__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
			__this->___method_code_6 = (intptr_t)__this->___m_target_2;
		}
	}
	__this->___extra_arg_5 = (intptr_t)&BurstConvert_00000004U24PostfixBurstDelegate_Invoke_m37B7651DCAF19AD5A0381D35E091D101D76D1E8A_Multicast;
}
// System.Void AprilTag.ImageConverter/AprilTag.BurstConvert_00000004$PostfixBurstDelegate::Invoke(UnityEngine.Color32*,System.Byte*,System.Int32,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BurstConvert_00000004U24PostfixBurstDelegate_Invoke_m37B7651DCAF19AD5A0381D35E091D101D76D1E8A (BurstConvert_00000004U24PostfixBurstDelegate_t14DF740BE0D3592EEC7F576C460C28596321C404* __this, Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B* ___src0, uint8_t* ___dst1, int32_t ___width2, int32_t ___height3, int32_t ___stride4, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B*, uint8_t*, int32_t, int32_t, int32_t, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___src0, ___dst1, ___width2, ___height3, ___stride4, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
// System.IAsyncResult AprilTag.ImageConverter/AprilTag.BurstConvert_00000004$PostfixBurstDelegate::BeginInvoke(UnityEngine.Color32*,System.Byte*,System.Int32,System.Int32,System.Int32,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* BurstConvert_00000004U24PostfixBurstDelegate_BeginInvoke_mD78A0036E3A79F7A98F70833D4AFA31AB169B818 (BurstConvert_00000004U24PostfixBurstDelegate_t14DF740BE0D3592EEC7F576C460C28596321C404* __this, Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B* ___src0, uint8_t* ___dst1, int32_t ___width2, int32_t ___height3, int32_t ___stride4, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* p5, RuntimeObject* p6, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[6] = {0};
	__d_args[0] = ___src0;
	__d_args[1] = ___dst1;
	__d_args[2] = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &___width2);
	__d_args[3] = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &___height3);
	__d_args[4] = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &___stride4);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)p5, (RuntimeObject*)p6);
}
// System.Void AprilTag.ImageConverter/AprilTag.BurstConvert_00000004$PostfixBurstDelegate::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BurstConvert_00000004U24PostfixBurstDelegate_EndInvoke_mC9A2A9354F9E0BBE4FCF888EC7DDB8CE64F5372C (BurstConvert_00000004U24PostfixBurstDelegate_t14DF740BE0D3592EEC7F576C460C28596321C404* __this, RuntimeObject* p0, const RuntimeMethod* method) 
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) p0, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void AprilTag.ImageConverter/AprilTag.BurstConvert_00000004$BurstDirectCall::GetFunctionPointerDiscard(System.IntPtr&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BurstConvert_00000004U24BurstDirectCall_GetFunctionPointerDiscard_mD744C80D64B582A52A31700A8BAA42B9D817FD13 (intptr_t* p0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BurstCompiler_t2715484E1FF256726FC4D4D8E17C35A4C8DFA2B8_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BurstConvert_00000004U24BurstDirectCall_tA74021187A94FD4D215D4AD7BCC6F6E2A29ACF54_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(BurstConvert_00000004U24BurstDirectCall_tA74021187A94FD4D215D4AD7BCC6F6E2A29ACF54_il2cpp_TypeInfo_var);
		intptr_t L_0 = ((BurstConvert_00000004U24BurstDirectCall_tA74021187A94FD4D215D4AD7BCC6F6E2A29ACF54_StaticFields*)il2cpp_codegen_static_fields_for(BurstConvert_00000004U24BurstDirectCall_tA74021187A94FD4D215D4AD7BCC6F6E2A29ACF54_il2cpp_TypeInfo_var))->___Pointer_0;
		if (L_0)
		{
			goto IL_0019;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(BurstConvert_00000004U24BurstDirectCall_tA74021187A94FD4D215D4AD7BCC6F6E2A29ACF54_il2cpp_TypeInfo_var);
		intptr_t L_1 = ((BurstConvert_00000004U24BurstDirectCall_tA74021187A94FD4D215D4AD7BCC6F6E2A29ACF54_StaticFields*)il2cpp_codegen_static_fields_for(BurstConvert_00000004U24BurstDirectCall_tA74021187A94FD4D215D4AD7BCC6F6E2A29ACF54_il2cpp_TypeInfo_var))->___DeferredCompilation_1;
		il2cpp_codegen_runtime_class_init_inline(BurstCompiler_t2715484E1FF256726FC4D4D8E17C35A4C8DFA2B8_il2cpp_TypeInfo_var);
		void* L_2;
		L_2 = BurstCompiler_GetILPPMethodFunctionPointer_m850347229EDA4058D224F885446BEE0137831BD0(L_1, NULL);
		((BurstConvert_00000004U24BurstDirectCall_tA74021187A94FD4D215D4AD7BCC6F6E2A29ACF54_StaticFields*)il2cpp_codegen_static_fields_for(BurstConvert_00000004U24BurstDirectCall_tA74021187A94FD4D215D4AD7BCC6F6E2A29ACF54_il2cpp_TypeInfo_var))->___Pointer_0 = (intptr_t)L_2;
	}

IL_0019:
	{
		intptr_t* L_3 = p0;
		il2cpp_codegen_runtime_class_init_inline(BurstConvert_00000004U24BurstDirectCall_tA74021187A94FD4D215D4AD7BCC6F6E2A29ACF54_il2cpp_TypeInfo_var);
		intptr_t L_4 = ((BurstConvert_00000004U24BurstDirectCall_tA74021187A94FD4D215D4AD7BCC6F6E2A29ACF54_StaticFields*)il2cpp_codegen_static_fields_for(BurstConvert_00000004U24BurstDirectCall_tA74021187A94FD4D215D4AD7BCC6F6E2A29ACF54_il2cpp_TypeInfo_var))->___Pointer_0;
		*((intptr_t*)L_3) = (intptr_t)L_4;
		return;
	}
}
// System.IntPtr AprilTag.ImageConverter/AprilTag.BurstConvert_00000004$BurstDirectCall::GetFunctionPointer()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t BurstConvert_00000004U24BurstDirectCall_GetFunctionPointer_m4EBB2D5439A248EE7AA7A53EC11BF46248F9D75B (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BurstConvert_00000004U24BurstDirectCall_tA74021187A94FD4D215D4AD7BCC6F6E2A29ACF54_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	intptr_t V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		V_0 = ((intptr_t)0);
		il2cpp_codegen_runtime_class_init_inline(BurstConvert_00000004U24BurstDirectCall_tA74021187A94FD4D215D4AD7BCC6F6E2A29ACF54_il2cpp_TypeInfo_var);
		BurstConvert_00000004U24BurstDirectCall_GetFunctionPointerDiscard_mD744C80D64B582A52A31700A8BAA42B9D817FD13((&V_0), NULL);
		intptr_t L_0 = V_0;
		return L_0;
	}
}
// System.Void AprilTag.ImageConverter/AprilTag.BurstConvert_00000004$BurstDirectCall::Constructor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BurstConvert_00000004U24BurstDirectCall_Constructor_mB012EA8D4A55E2EB908F467DCE891D59922B8D57 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BurstCompiler_t2715484E1FF256726FC4D4D8E17C35A4C8DFA2B8_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BurstConvert_00000004U24BurstDirectCall_tA74021187A94FD4D215D4AD7BCC6F6E2A29ACF54_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BurstConvert_00000004U24PostfixBurstDelegate_t14DF740BE0D3592EEC7F576C460C28596321C404_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ImageConverter_BurstConvertU24BurstManaged_mC971E9DA121BF1A8689D82CB8C1E194DB679B924_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ImageConverter_BurstConvert_m692693BDCC65D43994012CAD6F42B75140A7DCBF_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeMethodHandle_tB35B96E97214DCBE20B0B02B1E687884B34680B2 L_0 = { reinterpret_cast<intptr_t> (ImageConverter_BurstConvert_m692693BDCC65D43994012CAD6F42B75140A7DCBF_RuntimeMethod_var) };
		RuntimeMethodHandle_tB35B96E97214DCBE20B0B02B1E687884B34680B2 L_1 = { reinterpret_cast<intptr_t> (ImageConverter_BurstConvertU24BurstManaged_mC971E9DA121BF1A8689D82CB8C1E194DB679B924_RuntimeMethod_var) };
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_2 = { reinterpret_cast<intptr_t> (BurstConvert_00000004U24PostfixBurstDelegate_t14DF740BE0D3592EEC7F576C460C28596321C404_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(BurstCompiler_t2715484E1FF256726FC4D4D8E17C35A4C8DFA2B8_il2cpp_TypeInfo_var);
		intptr_t L_3;
		L_3 = BurstCompiler_CompileILPPMethod_m2ADEDFEFDB17376C1A1FFD7C2D1A0C242AB78A8B(L_0, L_1, L_2, NULL);
		il2cpp_codegen_runtime_class_init_inline(BurstConvert_00000004U24BurstDirectCall_tA74021187A94FD4D215D4AD7BCC6F6E2A29ACF54_il2cpp_TypeInfo_var);
		((BurstConvert_00000004U24BurstDirectCall_tA74021187A94FD4D215D4AD7BCC6F6E2A29ACF54_StaticFields*)il2cpp_codegen_static_fields_for(BurstConvert_00000004U24BurstDirectCall_tA74021187A94FD4D215D4AD7BCC6F6E2A29ACF54_il2cpp_TypeInfo_var))->___DeferredCompilation_1 = L_3;
		return;
	}
}
// System.Void AprilTag.ImageConverter/AprilTag.BurstConvert_00000004$BurstDirectCall::Initialize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BurstConvert_00000004U24BurstDirectCall_Initialize_m7A94382D03EB343AAC1D61D92E42E8D027F48934 (const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Void AprilTag.ImageConverter/AprilTag.BurstConvert_00000004$BurstDirectCall::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BurstConvert_00000004U24BurstDirectCall__cctor_m954A07970A1366AC347C93C087167403A209C098 (const RuntimeMethod* method) 
{
	{
		BurstConvert_00000004U24BurstDirectCall_Constructor_mB012EA8D4A55E2EB908F467DCE891D59922B8D57(NULL);
		return;
	}
}
// System.Void AprilTag.ImageConverter/AprilTag.BurstConvert_00000004$BurstDirectCall::Invoke(UnityEngine.Color32*,System.Byte*,System.Int32,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BurstConvert_00000004U24BurstDirectCall_Invoke_m276F56B4BB3BA0433276310259847BBEAAD8EC7E (Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B* ___src0, uint8_t* ___dst1, int32_t ___width2, int32_t ___height3, int32_t ___stride4, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BurstCompiler_t2715484E1FF256726FC4D4D8E17C35A4C8DFA2B8_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BurstConvert_00000004U24BurstDirectCall_tA74021187A94FD4D215D4AD7BCC6F6E2A29ACF54_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	intptr_t V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		il2cpp_codegen_runtime_class_init_inline(BurstCompiler_t2715484E1FF256726FC4D4D8E17C35A4C8DFA2B8_il2cpp_TypeInfo_var);
		bool L_0;
		L_0 = BurstCompiler_get_IsEnabled_mEDA2FAA92A224EC22E16A1AB9E8C55FB0DECD755(NULL);
		if (!L_0)
		{
			goto IL_0023;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(BurstConvert_00000004U24BurstDirectCall_tA74021187A94FD4D215D4AD7BCC6F6E2A29ACF54_il2cpp_TypeInfo_var);
		intptr_t L_1;
		L_1 = BurstConvert_00000004U24BurstDirectCall_GetFunctionPointer_m4EBB2D5439A248EE7AA7A53EC11BF46248F9D75B(NULL);
		V_0 = L_1;
		intptr_t L_2 = V_0;
		if (!L_2)
		{
			goto IL_0023;
		}
	}
	{
		Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B* L_3 = ___src0;
		uint8_t* L_4 = ___dst1;
		int32_t L_5 = ___width2;
		int32_t L_6 = ___height3;
		int32_t L_7 = ___stride4;
		intptr_t L_8 = V_0;
		typedef void (CDECL *func_L_9)(Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B*,uint8_t*,int32_t,int32_t,int32_t);
		((func_L_9)L_8)(L_3,L_4,L_5,L_6,L_7);
		return;
	}

IL_0023:
	{
		Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B* L_10 = ___src0;
		uint8_t* L_11 = ___dst1;
		int32_t L_12 = ___width2;
		int32_t L_13 = ___height3;
		int32_t L_14 = ___stride4;
		ImageConverter_BurstConvertU24BurstManaged_mC971E9DA121BF1A8689D82CB8C1E194DB679B924_inline(L_10, L_11, L_12, L_13, L_14, NULL);
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
// System.Void AprilTag.PoseEstimationJob::.ctor(Unity.Collections.NativeArray`1<AprilTag.PoseEstimationJob/Input>,Unity.Collections.NativeArray`1<AprilTag.TagPose>,System.Int32,System.Int32,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_NO_INLINE IL2CPP_METHOD_ATTR void PoseEstimationJob__ctor_mDDB9F1272D6AE4E428F23B0DC5402D67D83F8980 (PoseEstimationJob_tC28BC9261B23D1F28DC5F99692EE0FE3A4B0C1C7* IL2CPP_PARAMETER_RESTRICT __this, NativeArray_1_tC1235F75D3B6DB733FF8EE0AD736BD46550C482E ___input0, NativeArray_1_t2171E0DCF2C16898178BFEC8CA700B87BC4D5D2F ___output1, int32_t ___width2, int32_t ___height3, float ___fov4, float ___tagSize5, const RuntimeMethod* method) 
{
	{
		// _input = input;
		NativeArray_1_tC1235F75D3B6DB733FF8EE0AD736BD46550C482E L_0 = ___input0;
		__this->____input_0 = L_0;
		// _output = output;
		NativeArray_1_t2171E0DCF2C16898178BFEC8CA700B87BC4D5D2F L_1 = ___output1;
		__this->____output_1 = L_1;
		// _tagSize = tagSize;
		float L_2 = ___tagSize5;
		__this->____tagSize_2 = ((double)L_2);
		// _focalLength = height / 2 / math.tan(fov / 2);
		int32_t L_3 = ___height3;
		float L_4 = ___fov4;
		float L_5;
		L_5 = math_tan_m4B1EC7A066F0E70AAFAEB71626077D80D9BC502D_inline(((float)(L_4/(2.0f))), NULL);
		__this->____focalLength_3 = ((double)((float)(((float)((int32_t)(L_3/2)))/L_5)));
		// _focalCenter = math.double2(width, height) / 2;
		int32_t L_6 = ___width2;
		int32_t L_7 = ___height3;
		double2_t0A9854C934D0BBE9DD41F2B318B64F830D7253FA L_8;
		L_8 = math_double2_mC155EC1CD6E2A71A421578801832D7F930609DAE_inline(((double)L_6), ((double)L_7), NULL);
		double2_t0A9854C934D0BBE9DD41F2B318B64F830D7253FA L_9;
		L_9 = double2_op_Division_m1A13854486042CA4260F00AC6E391CA70DA6DBFB_inline(L_8, (2.0), NULL);
		__this->____focalCenter_4 = L_9;
		// }
		return;
	}
}
IL2CPP_EXTERN_C  void PoseEstimationJob__ctor_mDDB9F1272D6AE4E428F23B0DC5402D67D83F8980_AdjustorThunk (RuntimeObject* IL2CPP_PARAMETER_RESTRICT __this, NativeArray_1_tC1235F75D3B6DB733FF8EE0AD736BD46550C482E ___input0, NativeArray_1_t2171E0DCF2C16898178BFEC8CA700B87BC4D5D2F ___output1, int32_t ___width2, int32_t ___height3, float ___fov4, float ___tagSize5, const RuntimeMethod* method)
{
	PoseEstimationJob_tC28BC9261B23D1F28DC5F99692EE0FE3A4B0C1C7* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<PoseEstimationJob_tC28BC9261B23D1F28DC5F99692EE0FE3A4B0C1C7*>(__this + _offset);
	PoseEstimationJob__ctor_mDDB9F1272D6AE4E428F23B0DC5402D67D83F8980(_thisAdjusted, ___input0, ___output1, ___width2, ___height3, ___fov4, ___tagSize5, method);
}
// System.Void AprilTag.PoseEstimationJob::Execute(System.Int32)
IL2CPP_EXTERN_C IL2CPP_NO_INLINE IL2CPP_METHOD_ATTR void PoseEstimationJob_Execute_m3E717E8D5D0208C9D0203EB21BD7F54F06ADB9E7 (PoseEstimationJob_tC28BC9261B23D1F28DC5F99692EE0FE3A4B0C1C7* IL2CPP_PARAMETER_RESTRICT __this, int32_t ___i0, const RuntimeMethod* method) 
{
	DetectionInfo_tB74A7A3EC1D7E0160DFA0D90CF7F7F4715A64162 V_0;
	memset((&V_0), 0, sizeof(V_0));
	Pose_t20909DD795F365496D5FF3EA8D7A14A812C04238 V_1;
	memset((&V_1), 0, sizeof(V_1));
	float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E V_2;
	memset((&V_2), 0, sizeof(V_2));
	quaternion_tD6BCBECAF088B9EBAE2345EC8534C7A1A4C910D4 V_3;
	memset((&V_3), 0, sizeof(V_3));
	Input_tBBD12BA8F1FDBC43290F58D2BDD6E5CC2D6C1F12 V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
		// var info = new Interop.DetectionInfo(ref _input[i].Ref, _tagSize,
		//    _focalLength, _focalLength, _focalCenter.x, _focalCenter.y);
		NativeArray_1_tC1235F75D3B6DB733FF8EE0AD736BD46550C482E* L_0 = (&__this->____input_0);
		int32_t L_1 = ___i0;
		Input_tBBD12BA8F1FDBC43290F58D2BDD6E5CC2D6C1F12 L_2;
		L_2 = IL2CPP_NATIVEARRAY_GET_ITEM(Input_tBBD12BA8F1FDBC43290F58D2BDD6E5CC2D6C1F12, (L_0)->___m_Buffer_0, L_1);
		V_4 = L_2;
		Detection_t1625D0598F2D1DB7D1E7AA2C92E1948DAB23A72C* L_3;
		L_3 = Input_get_Ref_mA7C091D36AA92DEEE7D16FFE9E87630C5286D392((&V_4), NULL);
		double L_4 = __this->____tagSize_2;
		double L_5 = __this->____focalLength_3;
		double L_6 = __this->____focalLength_3;
		double2_t0A9854C934D0BBE9DD41F2B318B64F830D7253FA* L_7 = (&__this->____focalCenter_4);
		double L_8 = L_7->___x_0;
		double2_t0A9854C934D0BBE9DD41F2B318B64F830D7253FA* L_9 = (&__this->____focalCenter_4);
		double L_10 = L_9->___y_1;
		DetectionInfo_tB74A7A3EC1D7E0160DFA0D90CF7F7F4715A64162 L_11;
		memset((&L_11), 0, sizeof(L_11));
		DetectionInfo__ctor_mB3833066D920169C8A2EDE967F288547DBF4AC48((&L_11), L_3, L_4, L_5, L_6, L_8, L_10, /*hidden argument*/NULL);
		V_0 = L_11;
		// using var pose = new Interop.Pose(ref info);
		Pose_t20909DD795F365496D5FF3EA8D7A14A812C04238 L_12;
		memset((&L_12), 0, sizeof(L_12));
		Pose__ctor_m697F12A51872ED249002986CB6C86772521E7723((&L_12), (&V_0), /*hidden argument*/NULL);
		V_1 = L_12;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_00e6:
			{// begin finally (depth: 1)
				Pose_Dispose_mB85F3B23A0F8B8646E6D17914B3B7F84706795ED((&V_1), NULL);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			// var pos = pose.t.AsFloat3() * math.float3(1, -1, 1);
			Matd3x1_t3F60BCA738901CC33975651BDC7166D84C9CF347* L_13;
			L_13 = Pose_get_t_m20731AAD07A84596F793FD2557F4C5261EA80770((&V_1), NULL);
			float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E L_14;
			L_14 = MatdExtensions_AsFloat3_m7A018E4A98CF0CEDC3D823623263B176541C418C(L_13, NULL);
			float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E L_15;
			L_15 = math_float3_m3C0D1DBA85B384CB78960F466FD66195A58E5FFB_inline((1.0f), (-1.0f), (1.0f), NULL);
			float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E L_16;
			L_16 = float3_op_Multiply_mF3DE0BD784C29A79E6B5BC0FD56E60B45F694AF3_inline(L_14, L_15, NULL);
			V_2 = L_16;
			// var rot = math.quaternion(pose.R.AsFloat3x3());
			Matd3x3_t00E5B51BA77383D28CBEC1E5972F225862672883* L_17;
			L_17 = Pose_get_R_m36B474543FBCC85C62525664F930D47C8EAD841B((&V_1), NULL);
			float3x3_tB318DB8C7E54B6CA9E14EB9AC7F5964C1189FC79 L_18;
			L_18 = MatdExtensions_AsFloat3x3_mD11C9D7C42A8A006A74473AC6A4CF7F4ED793802(L_17, NULL);
			quaternion_tD6BCBECAF088B9EBAE2345EC8534C7A1A4C910D4 L_19;
			L_19 = math_quaternion_m96D124186ABB065411ADFD29D21B527EBADA145D_inline(L_18, NULL);
			V_3 = L_19;
			// rot = rot.value * math.float4(-1, 1, -1, 1);
			quaternion_tD6BCBECAF088B9EBAE2345EC8534C7A1A4C910D4 L_20 = V_3;
			float4_t89D9A294E7A79BD81BFBDD18654508532958555E L_21 = L_20.___value_0;
			float4_t89D9A294E7A79BD81BFBDD18654508532958555E L_22;
			L_22 = math_float4_m89FFCFE209ED3D76075D738C0CF47B24941757F7_inline((-1.0f), (1.0f), (-1.0f), (1.0f), NULL);
			float4_t89D9A294E7A79BD81BFBDD18654508532958555E L_23;
			L_23 = float4_op_Multiply_mFA6F3CE69E7BCB9270744513E7E54447C6DBB164_inline(L_21, L_22, NULL);
			quaternion_tD6BCBECAF088B9EBAE2345EC8534C7A1A4C910D4 L_24;
			L_24 = quaternion_op_Implicit_m5B65713922A062DB08C5DC4C7C1CA4A775F7F397_inline(L_23, NULL);
			V_3 = L_24;
			// _output[i] = new TagPose(_input[i].Ref.ID, pos, rot);
			NativeArray_1_t2171E0DCF2C16898178BFEC8CA700B87BC4D5D2F* L_25 = (&__this->____output_1);
			int32_t L_26 = ___i0;
			NativeArray_1_tC1235F75D3B6DB733FF8EE0AD736BD46550C482E* L_27 = (&__this->____input_0);
			int32_t L_28 = ___i0;
			Input_tBBD12BA8F1FDBC43290F58D2BDD6E5CC2D6C1F12 L_29;
			L_29 = IL2CPP_NATIVEARRAY_GET_ITEM(Input_tBBD12BA8F1FDBC43290F58D2BDD6E5CC2D6C1F12, (L_27)->___m_Buffer_0, L_28);
			V_4 = L_29;
			Detection_t1625D0598F2D1DB7D1E7AA2C92E1948DAB23A72C* L_30;
			L_30 = Input_get_Ref_mA7C091D36AA92DEEE7D16FFE9E87630C5286D392((&V_4), NULL);
			int32_t L_31;
			L_31 = Detection_get_ID_m34E1C04B3CEEE367076F00407A8D04C789F0E7DC_inline(L_30, NULL);
			float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E L_32 = V_2;
			Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_33;
			L_33 = float3_op_Implicit_mEFBD5C49B7BC786CEEA7076D3A53D421BF88E2CB(L_32, NULL);
			quaternion_tD6BCBECAF088B9EBAE2345EC8534C7A1A4C910D4 L_34 = V_3;
			Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_35;
			L_35 = quaternion_op_Implicit_m4338E3AF4333CB0CA0D86518FFEF1FEA6DF9350E(L_34, NULL);
			TagPose_t215F79C75676B0849191D37136AF4C1BF74CE70B L_36;
			memset((&L_36), 0, sizeof(L_36));
			TagPose__ctor_mA05BB89D63F91DBC2819453421F790E6F6BE71E9((&L_36), L_31, L_33, L_35, /*hidden argument*/NULL);
			IL2CPP_NATIVEARRAY_SET_ITEM(TagPose_t215F79C75676B0849191D37136AF4C1BF74CE70B, (L_25)->___m_Buffer_0, L_26, (L_36));
			// }
			goto IL_00f4;
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_00f4:
	{
		// }
		return;
	}
}
IL2CPP_EXTERN_C  void PoseEstimationJob_Execute_m3E717E8D5D0208C9D0203EB21BD7F54F06ADB9E7_AdjustorThunk (RuntimeObject* IL2CPP_PARAMETER_RESTRICT __this, int32_t ___i0, const RuntimeMethod* method)
{
	PoseEstimationJob_tC28BC9261B23D1F28DC5F99692EE0FE3A4B0C1C7* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<PoseEstimationJob_tC28BC9261B23D1F28DC5F99692EE0FE3A4B0C1C7*>(__this + _offset);
	PoseEstimationJob_Execute_m3E717E8D5D0208C9D0203EB21BD7F54F06ADB9E7(_thisAdjusted, ___i0, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void AprilTag.PoseEstimationJob/Input::.ctor(AprilTag.Interop.Detection&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Input__ctor_m3D7817DF62F15567C8E5E64D3F85263CED9B4BB1 (Input_tBBD12BA8F1FDBC43290F58D2BDD6E5CC2D6C1F12* __this, Detection_t1625D0598F2D1DB7D1E7AA2C92E1948DAB23A72C* ___r0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Util_AsPointer_TisDetection_t1625D0598F2D1DB7D1E7AA2C92E1948DAB23A72C_mE86855F57893A4E96AE5199CF04B7C57EF3B1AB2_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// => p = (Interop.Detection*)Interop.Util.AsPointer(ref r);
		Detection_t1625D0598F2D1DB7D1E7AA2C92E1948DAB23A72C* L_0 = ___r0;
		void* L_1;
		L_1 = Util_AsPointer_TisDetection_t1625D0598F2D1DB7D1E7AA2C92E1948DAB23A72C_mE86855F57893A4E96AE5199CF04B7C57EF3B1AB2(L_0, Util_AsPointer_TisDetection_t1625D0598F2D1DB7D1E7AA2C92E1948DAB23A72C_mE86855F57893A4E96AE5199CF04B7C57EF3B1AB2_RuntimeMethod_var);
		__this->___p_0 = (Detection_t1625D0598F2D1DB7D1E7AA2C92E1948DAB23A72C*)L_1;
		return;
	}
}
IL2CPP_EXTERN_C  void Input__ctor_m3D7817DF62F15567C8E5E64D3F85263CED9B4BB1_AdjustorThunk (RuntimeObject* __this, Detection_t1625D0598F2D1DB7D1E7AA2C92E1948DAB23A72C* ___r0, const RuntimeMethod* method)
{
	Input_tBBD12BA8F1FDBC43290F58D2BDD6E5CC2D6C1F12* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<Input_tBBD12BA8F1FDBC43290F58D2BDD6E5CC2D6C1F12*>(__this + _offset);
	Input__ctor_m3D7817DF62F15567C8E5E64D3F85263CED9B4BB1(_thisAdjusted, ___r0, method);
}
// AprilTag.Interop.Detection& AprilTag.PoseEstimationJob/Input::get_Ref()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Detection_t1625D0598F2D1DB7D1E7AA2C92E1948DAB23A72C* Input_get_Ref_mA7C091D36AA92DEEE7D16FFE9E87630C5286D392 (Input_tBBD12BA8F1FDBC43290F58D2BDD6E5CC2D6C1F12* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Util_AsRef_TisDetection_t1625D0598F2D1DB7D1E7AA2C92E1948DAB23A72C_mD62637A8A22433110DA0949D020833E709776D83_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// => ref Interop.Util.AsRef<Interop.Detection>(p);
		Detection_t1625D0598F2D1DB7D1E7AA2C92E1948DAB23A72C* L_0 = __this->___p_0;
		Detection_t1625D0598F2D1DB7D1E7AA2C92E1948DAB23A72C* L_1;
		L_1 = Util_AsRef_TisDetection_t1625D0598F2D1DB7D1E7AA2C92E1948DAB23A72C_mD62637A8A22433110DA0949D020833E709776D83((void*)L_0, Util_AsRef_TisDetection_t1625D0598F2D1DB7D1E7AA2C92E1948DAB23A72C_mD62637A8A22433110DA0949D020833E709776D83_RuntimeMethod_var);
		return L_1;
	}
}
IL2CPP_EXTERN_C  Detection_t1625D0598F2D1DB7D1E7AA2C92E1948DAB23A72C* Input_get_Ref_mA7C091D36AA92DEEE7D16FFE9E87630C5286D392_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	Input_tBBD12BA8F1FDBC43290F58D2BDD6E5CC2D6C1F12* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<Input_tBBD12BA8F1FDBC43290F58D2BDD6E5CC2D6C1F12*>(__this + _offset);
	Detection_t1625D0598F2D1DB7D1E7AA2C92E1948DAB23A72C* _returnValue;
	_returnValue = Input_get_Ref_mA7C091D36AA92DEEE7D16FFE9E87630C5286D392(_thisAdjusted, method);
	return _returnValue;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Int32 AprilTag.SystemConfig::get_PreferredThreadCount()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SystemConfig_get_PreferredThreadCount_mEC11F3B3CF2CBB04D9FEA512BD4A937B16A5EEEF (const RuntimeMethod* method) 
{
	{
		// => math.max(1, JobsUtility.JobWorkerCount);
		int32_t L_0;
		L_0 = JobsUtility_get_JobWorkerCount_mE27B48604091376C19BE7573E06ADD22B24A3D76(NULL);
		int32_t L_1;
		L_1 = math_max_m5DA4D66E3CC78BDFF8218BA039D6EBB1AC223826_inline(1, L_0, NULL);
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Unity.Mathematics.float3 AprilTag.MatdExtensions::AsFloat3(AprilTag.Interop.Matd3x1&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E MatdExtensions_AsFloat3_m7A018E4A98CF0CEDC3D823623263B176541C418C (Matd3x1_t3F60BCA738901CC33975651BDC7166D84C9CF347* ___src0, const RuntimeMethod* method) 
{
	{
		// => math.float3((float)src.e0, (float)src.e1, (float)src.e2);
		Matd3x1_t3F60BCA738901CC33975651BDC7166D84C9CF347* L_0 = ___src0;
		double L_1 = L_0->___e0_2;
		Matd3x1_t3F60BCA738901CC33975651BDC7166D84C9CF347* L_2 = ___src0;
		double L_3 = L_2->___e1_3;
		Matd3x1_t3F60BCA738901CC33975651BDC7166D84C9CF347* L_4 = ___src0;
		double L_5 = L_4->___e2_4;
		float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E L_6;
		L_6 = math_float3_m3C0D1DBA85B384CB78960F466FD66195A58E5FFB_inline(((float)L_1), ((float)L_3), ((float)L_5), NULL);
		return L_6;
	}
}
// Unity.Mathematics.float3x3 AprilTag.MatdExtensions::AsFloat3x3(AprilTag.Interop.Matd3x3&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float3x3_tB318DB8C7E54B6CA9E14EB9AC7F5964C1189FC79 MatdExtensions_AsFloat3x3_mD11C9D7C42A8A006A74473AC6A4CF7F4ED793802 (Matd3x3_t00E5B51BA77383D28CBEC1E5972F225862672883* ___src0, const RuntimeMethod* method) 
{
	{
		// => math.float3x3((float)src.e00, (float)src.e01, (float)src.e02,
		//                  (float)src.e10, (float)src.e11, (float)src.e12,
		//                  (float)src.e20, (float)src.e21, (float)src.e22);
		Matd3x3_t00E5B51BA77383D28CBEC1E5972F225862672883* L_0 = ___src0;
		double L_1 = L_0->___e00_2;
		Matd3x3_t00E5B51BA77383D28CBEC1E5972F225862672883* L_2 = ___src0;
		double L_3 = L_2->___e01_3;
		Matd3x3_t00E5B51BA77383D28CBEC1E5972F225862672883* L_4 = ___src0;
		double L_5 = L_4->___e02_4;
		Matd3x3_t00E5B51BA77383D28CBEC1E5972F225862672883* L_6 = ___src0;
		double L_7 = L_6->___e10_5;
		Matd3x3_t00E5B51BA77383D28CBEC1E5972F225862672883* L_8 = ___src0;
		double L_9 = L_8->___e11_6;
		Matd3x3_t00E5B51BA77383D28CBEC1E5972F225862672883* L_10 = ___src0;
		double L_11 = L_10->___e12_7;
		Matd3x3_t00E5B51BA77383D28CBEC1E5972F225862672883* L_12 = ___src0;
		double L_13 = L_12->___e20_8;
		Matd3x3_t00E5B51BA77383D28CBEC1E5972F225862672883* L_14 = ___src0;
		double L_15 = L_14->___e21_9;
		Matd3x3_t00E5B51BA77383D28CBEC1E5972F225862672883* L_16 = ___src0;
		double L_17 = L_16->___e22_10;
		float3x3_tB318DB8C7E54B6CA9E14EB9AC7F5964C1189FC79 L_18;
		L_18 = math_float3x3_m8AEC0695B8C3C8718229D5CCDB5EC087D6C27D7B_inline(((float)L_1), ((float)L_3), ((float)L_5), ((float)L_7), ((float)L_9), ((float)L_11), ((float)L_13), ((float)L_15), ((float)L_17), NULL);
		return L_18;
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
// System.Collections.Generic.List`1<AprilTag.TagPose> AprilTag.TagDetector::get_DetectedTags()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_t46C4469D4D138AB8F0458EE91D417C1CBD938545* TagDetector_get_DetectedTags_m40EED0EC33C0C44A7066DF2A23376336F11EC2F4 (TagDetector_t3B7003AE75DF94DE10A317EBB8780D666369F871* __this, const RuntimeMethod* method) 
{
	{
		// => _detectedTags;
		List_1_t46C4469D4D138AB8F0458EE91D417C1CBD938545* L_0 = __this->____detectedTags_3;
		return L_0;
	}
}
// System.Collections.Generic.IEnumerable`1<System.ValueTuple`2<System.String,System.Int64>> AprilTag.TagDetector::get_ProfileData()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TagDetector_get_ProfileData_mC85ADCD8BB8B162BF334558EFCDBD5A9C994B926 (TagDetector_t3B7003AE75DF94DE10A317EBB8780D666369F871* __this, const RuntimeMethod* method) 
{
	List_1_t9C8E57F9F12FDB51DAAB696934615B4D8586F987* V_0 = NULL;
	List_1_t9C8E57F9F12FDB51DAAB696934615B4D8586F987* G_B2_0 = NULL;
	List_1_t9C8E57F9F12FDB51DAAB696934615B4D8586F987* G_B1_0 = NULL;
	{
		// => _profileData ?? (_profileData = GenerateProfileData());
		List_1_t9C8E57F9F12FDB51DAAB696934615B4D8586F987* L_0 = __this->____profileData_4;
		List_1_t9C8E57F9F12FDB51DAAB696934615B4D8586F987* L_1 = L_0;
		G_B1_0 = L_1;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_0019;
		}
	}
	{
		List_1_t9C8E57F9F12FDB51DAAB696934615B4D8586F987* L_2;
		L_2 = TagDetector_GenerateProfileData_mAF21566DAC58A23E531ABD9AE2897CFFF4359AFB(__this, NULL);
		List_1_t9C8E57F9F12FDB51DAAB696934615B4D8586F987* L_3 = L_2;
		V_0 = L_3;
		__this->____profileData_4 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____profileData_4), (void*)L_3);
		List_1_t9C8E57F9F12FDB51DAAB696934615B4D8586F987* L_4 = V_0;
		G_B2_0 = L_4;
	}

IL_0019:
	{
		return G_B2_0;
	}
}
// System.Void AprilTag.TagDetector::.ctor(System.Int32,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TagDetector__ctor_m3A66E4EC538A17108DE00992949F0D2B7171C835 (TagDetector_t3B7003AE75DF94DE10A317EBB8780D666369F871* __this, int32_t ___width0, int32_t ___height1, int32_t ___decimation2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_mACB80AEDAEE50A9E5C8555E4B60C05C1F2B9A04A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t46C4469D4D138AB8F0458EE91D417C1CBD938545_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// List<TagPose> _detectedTags = new List<TagPose>();
		List_1_t46C4469D4D138AB8F0458EE91D417C1CBD938545* L_0 = (List_1_t46C4469D4D138AB8F0458EE91D417C1CBD938545*)il2cpp_codegen_object_new(List_1_t46C4469D4D138AB8F0458EE91D417C1CBD938545_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		List_1__ctor_mACB80AEDAEE50A9E5C8555E4B60C05C1F2B9A04A(L_0, List_1__ctor_mACB80AEDAEE50A9E5C8555E4B60C05C1F2B9A04A_RuntimeMethod_var);
		__this->____detectedTags_3 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____detectedTags_3), (void*)L_0);
		// public TagDetector(int width, int height, int decimation = 2)
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		// _detector = Interop.Detector.Create();
		Detector_tFE9DE2EA3519A1B91F55A35E8EE68EB1B27B8B1A* L_1;
		L_1 = Detector_Create_mBDDFAA84DE2143560F3F1071EE26BB12033A83D9(NULL);
		__this->____detector_0 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____detector_0), (void*)L_1);
		// _family = Interop.Family.CreateTagStandard41h12();
		Family_t7D94F3B6A5D5FB5FC1C3359ACFC3F9F018837F29* L_2;
		L_2 = Family_CreateTagStandard41h12_m8997F03F743B7113B1B27722DB84B5D49EB20D1E(NULL);
		__this->____family_1 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____family_1), (void*)L_2);
		// _image = Interop.ImageU8.Create(width, height);
		int32_t L_3 = ___width0;
		int32_t L_4 = ___height1;
		ImageU8_t5D5B6A85A68488DA142C0E877C38D5427927F0D8* L_5;
		L_5 = ImageU8_Create_m03A3DB17EA3B952AD6092609219349BD604CC4B6(L_3, L_4, NULL);
		__this->____image_2 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____image_2), (void*)L_5);
		// _detector.ThreadCount = SystemConfig.PreferredThreadCount;
		Detector_tFE9DE2EA3519A1B91F55A35E8EE68EB1B27B8B1A* L_6 = __this->____detector_0;
		int32_t L_7;
		L_7 = SystemConfig_get_PreferredThreadCount_mEC11F3B3CF2CBB04D9FEA512BD4A937B16A5EEEF(NULL);
		NullCheck(L_6);
		Detector_set_ThreadCount_mBCB6FBC6A0FE8149C20D0FF75F34E123B8A3623E(L_6, L_7, NULL);
		// _detector.QuadDecimate = decimation;
		Detector_tFE9DE2EA3519A1B91F55A35E8EE68EB1B27B8B1A* L_8 = __this->____detector_0;
		int32_t L_9 = ___decimation2;
		NullCheck(L_8);
		Detector_set_QuadDecimate_m02BD41831DA8F48BB92384B06AC542DE626F5845(L_8, ((float)L_9), NULL);
		// _detector.AddFamily(_family);
		Detector_tFE9DE2EA3519A1B91F55A35E8EE68EB1B27B8B1A* L_10 = __this->____detector_0;
		Family_t7D94F3B6A5D5FB5FC1C3359ACFC3F9F018837F29* L_11 = __this->____family_1;
		NullCheck(L_10);
		Detector_AddFamily_mFDA57B5832A8ED9A436BB5810F232EC7D5C5FE5D(L_10, L_11, NULL);
		// }
		return;
	}
}
// System.Void AprilTag.TagDetector::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TagDetector_Dispose_m059D3F0C42FFFE8DCECDEB537CE88E7FC7B5978F (TagDetector_t3B7003AE75DF94DE10A317EBB8780D666369F871* __this, const RuntimeMethod* method) 
{
	Detector_tFE9DE2EA3519A1B91F55A35E8EE68EB1B27B8B1A* G_B2_0 = NULL;
	Detector_tFE9DE2EA3519A1B91F55A35E8EE68EB1B27B8B1A* G_B1_0 = NULL;
	Detector_tFE9DE2EA3519A1B91F55A35E8EE68EB1B27B8B1A* G_B5_0 = NULL;
	Detector_tFE9DE2EA3519A1B91F55A35E8EE68EB1B27B8B1A* G_B4_0 = NULL;
	Family_t7D94F3B6A5D5FB5FC1C3359ACFC3F9F018837F29* G_B8_0 = NULL;
	Family_t7D94F3B6A5D5FB5FC1C3359ACFC3F9F018837F29* G_B7_0 = NULL;
	ImageU8_t5D5B6A85A68488DA142C0E877C38D5427927F0D8* G_B11_0 = NULL;
	ImageU8_t5D5B6A85A68488DA142C0E877C38D5427927F0D8* G_B10_0 = NULL;
	{
		// _detector?.RemoveFamily(_family);
		Detector_tFE9DE2EA3519A1B91F55A35E8EE68EB1B27B8B1A* L_0 = __this->____detector_0;
		Detector_tFE9DE2EA3519A1B91F55A35E8EE68EB1B27B8B1A* L_1 = L_0;
		G_B1_0 = L_1;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_000c;
		}
	}
	{
		goto IL_0017;
	}

IL_000c:
	{
		Family_t7D94F3B6A5D5FB5FC1C3359ACFC3F9F018837F29* L_2 = __this->____family_1;
		NullCheck(G_B2_0);
		Detector_RemoveFamily_m70F37B7DFE3D3B938C23D2EA9B6CEB88AD69658C(G_B2_0, L_2, NULL);
	}

IL_0017:
	{
		// _detector?.Dispose();
		Detector_tFE9DE2EA3519A1B91F55A35E8EE68EB1B27B8B1A* L_3 = __this->____detector_0;
		Detector_tFE9DE2EA3519A1B91F55A35E8EE68EB1B27B8B1A* L_4 = L_3;
		G_B4_0 = L_4;
		if (L_4)
		{
			G_B5_0 = L_4;
			goto IL_0023;
		}
	}
	{
		goto IL_0028;
	}

IL_0023:
	{
		NullCheck(G_B5_0);
		SafeHandle_Dispose_m4FB5B8A7ED78B90757F1B570D4025F3BA26A39F3(G_B5_0, NULL);
	}

IL_0028:
	{
		// _family?.Dispose();
		Family_t7D94F3B6A5D5FB5FC1C3359ACFC3F9F018837F29* L_5 = __this->____family_1;
		Family_t7D94F3B6A5D5FB5FC1C3359ACFC3F9F018837F29* L_6 = L_5;
		G_B7_0 = L_6;
		if (L_6)
		{
			G_B8_0 = L_6;
			goto IL_0034;
		}
	}
	{
		goto IL_0039;
	}

IL_0034:
	{
		NullCheck(G_B8_0);
		SafeHandle_Dispose_m4FB5B8A7ED78B90757F1B570D4025F3BA26A39F3(G_B8_0, NULL);
	}

IL_0039:
	{
		// _image?.Dispose();
		ImageU8_t5D5B6A85A68488DA142C0E877C38D5427927F0D8* L_7 = __this->____image_2;
		ImageU8_t5D5B6A85A68488DA142C0E877C38D5427927F0D8* L_8 = L_7;
		G_B10_0 = L_8;
		if (L_8)
		{
			G_B11_0 = L_8;
			goto IL_0045;
		}
	}
	{
		goto IL_004a;
	}

IL_0045:
	{
		NullCheck(G_B11_0);
		SafeHandle_Dispose_m4FB5B8A7ED78B90757F1B570D4025F3BA26A39F3(G_B11_0, NULL);
	}

IL_004a:
	{
		// _detector = null;
		__this->____detector_0 = (Detector_tFE9DE2EA3519A1B91F55A35E8EE68EB1B27B8B1A*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____detector_0), (void*)(Detector_tFE9DE2EA3519A1B91F55A35E8EE68EB1B27B8B1A*)NULL);
		// _family = null;
		__this->____family_1 = (Family_t7D94F3B6A5D5FB5FC1C3359ACFC3F9F018837F29*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____family_1), (void*)(Family_t7D94F3B6A5D5FB5FC1C3359ACFC3F9F018837F29*)NULL);
		// _image = null;
		__this->____image_2 = (ImageU8_t5D5B6A85A68488DA142C0E877C38D5427927F0D8*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____image_2), (void*)(ImageU8_t5D5B6A85A68488DA142C0E877C38D5427927F0D8*)NULL);
		// }
		return;
	}
}
// System.Void AprilTag.TagDetector::ProcessImage(System.ReadOnlySpan`1<UnityEngine.Color32>,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TagDetector_ProcessImage_m81F06CC67F80071141B0598469F5A046000D81DB (TagDetector_t3B7003AE75DF94DE10A317EBB8780D666369F871* __this, ReadOnlySpan_1_t2E193A80641154947640E9A71614019D7A8F3DFC ___image0, float ___fov1, float ___tagSize2, const RuntimeMethod* method) 
{
	{
		// ImageConverter.Convert(image, _image);
		ReadOnlySpan_1_t2E193A80641154947640E9A71614019D7A8F3DFC L_0 = ___image0;
		ImageU8_t5D5B6A85A68488DA142C0E877C38D5427927F0D8* L_1 = __this->____image_2;
		ImageConverter_Convert_m8BEA27845A8EA50A1B1F35B7BB4FE12490CCE3CB(L_0, L_1, NULL);
		// RunDetectorAndEstimator(fov, tagSize);
		float L_2 = ___fov1;
		float L_3 = ___tagSize2;
		TagDetector_RunDetectorAndEstimator_m84DCA181F34365BEDE1E4E77AB29E7A2918431EF(__this, L_2, L_3, NULL);
		// }
		return;
	}
}
// System.Void AprilTag.TagDetector::RunDetectorAndEstimator(System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TagDetector_RunDetectorAndEstimator_m84DCA181F34365BEDE1E4E77AB29E7A2918431EF (TagDetector_t3B7003AE75DF94DE10A317EBB8780D666369F871* __this, float ___fov0, float ___tagSize1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IJobParallelForExtensions_Schedule_TisPoseEstimationJob_tC28BC9261B23D1F28DC5F99692EE0FE3A4B0C1C7_m39C9940EA9C959D693F633F276750A029EEB1CCC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeArrayExtensions_CopyTo_TisTagPose_t215F79C75676B0849191D37136AF4C1BF74CE70B_m7441055716F7969DE4F6F825DB6E8DCDEFA15E33_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeArray_1_Dispose_m2CCF5DC6491B13230A61EC00B4F0CA4685B47623_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeArray_1_Dispose_m993BF0ACBD5A8CBEF7379FDE1A3107AFEBEE2FCC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeArray_1__ctor_m1AE29D60520158099A4679187A983A74E56CA12A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeArray_1__ctor_mA6E360D28C08575FEECFAB24091DF9A9E6604F05_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeSlice_1__ctor_mE31AB7379C5CB2573EC9DAD158864ED87A397838_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeSlice_1_set_Item_m90D2D3D9E12864F61898EDDD71AA108C3C98AF8C_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	DetectionArray_t8F5F6D9F4D35AB7935ACF076F68C4C4FCDF915A1* V_0 = NULL;
	int32_t V_1 = 0;
	NativeArray_1_tC1235F75D3B6DB733FF8EE0AD736BD46550C482E V_2;
	memset((&V_2), 0, sizeof(V_2));
	NativeSlice_1_t1A41BF06BEA3647F689FE7A29E8238123AFD676F V_3;
	memset((&V_3), 0, sizeof(V_3));
	NativeArray_1_t2171E0DCF2C16898178BFEC8CA700B87BC4D5D2F V_4;
	memset((&V_4), 0, sizeof(V_4));
	int32_t V_5 = 0;
	JobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08 V_6;
	memset((&V_6), 0, sizeof(V_6));
	{
		// _profileData = null;
		__this->____profileData_4 = (List_1_t9C8E57F9F12FDB51DAAB696934615B4D8586F987*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____profileData_4), (void*)(List_1_t9C8E57F9F12FDB51DAAB696934615B4D8586F987*)NULL);
		// using var tags = _detector.Detect(_image);
		Detector_tFE9DE2EA3519A1B91F55A35E8EE68EB1B27B8B1A* L_0 = __this->____detector_0;
		ImageU8_t5D5B6A85A68488DA142C0E877C38D5427927F0D8* L_1 = __this->____image_2;
		NullCheck(L_0);
		DetectionArray_t8F5F6D9F4D35AB7935ACF076F68C4C4FCDF915A1* L_2;
		L_2 = Detector_Detect_mBD5F04BB95F41635B2FEAAEE5A1CB3297B656E62(L_0, L_1, NULL);
		V_0 = L_2;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_00c5:
			{// begin finally (depth: 1)
				{
					DetectionArray_t8F5F6D9F4D35AB7935ACF076F68C4C4FCDF915A1* L_3 = V_0;
					if (!L_3)
					{
						goto IL_00ce;
					}
				}
				{
					DetectionArray_t8F5F6D9F4D35AB7935ACF076F68C4C4FCDF915A1* L_4 = V_0;
					NullCheck(L_4);
					InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_4);
				}

IL_00ce:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				// var tagCount = tags.Length;
				DetectionArray_t8F5F6D9F4D35AB7935ACF076F68C4C4FCDF915A1* L_5 = V_0;
				NullCheck(L_5);
				int32_t L_6;
				L_6 = DetectionArray_get_Length_mA9853470655852797017DC0361ACB5DFE52B0805(L_5, NULL);
				V_1 = L_6;
				// using var jobInput = new NativeArray<PoseEstimationJob.Input>
				//   (tagCount, Allocator.TempJob);
				int32_t L_7 = V_1;
				NativeArray_1_tC1235F75D3B6DB733FF8EE0AD736BD46550C482E L_8;
				memset((&L_8), 0, sizeof(L_8));
				NativeArray_1__ctor_m1AE29D60520158099A4679187A983A74E56CA12A((&L_8), L_7, 3, 1, /*hidden argument*/NativeArray_1__ctor_m1AE29D60520158099A4679187A983A74E56CA12A_RuntimeMethod_var);
				V_2 = L_8;
			}
			{
				auto __finallyBlock = il2cpp::utils::Finally([&]
				{

FINALLY_00b7_1:
					{// begin finally (depth: 2)
						NativeArray_1_Dispose_m2CCF5DC6491B13230A61EC00B4F0CA4685B47623((&V_2), NativeArray_1_Dispose_m2CCF5DC6491B13230A61EC00B4F0CA4685B47623_RuntimeMethod_var);
						return;
					}// end finally (depth: 2)
				});
				try
				{// begin try (depth: 2)
					{
						// var slice = new NativeSlice<PoseEstimationJob.Input>(jobInput);
						NativeArray_1_tC1235F75D3B6DB733FF8EE0AD736BD46550C482E L_9 = V_2;
						NativeSlice_1_t1A41BF06BEA3647F689FE7A29E8238123AFD676F L_10;
						memset((&L_10), 0, sizeof(L_10));
						NativeSlice_1__ctor_mE31AB7379C5CB2573EC9DAD158864ED87A397838((&L_10), L_9, /*hidden argument*/NativeSlice_1__ctor_mE31AB7379C5CB2573EC9DAD158864ED87A397838_RuntimeMethod_var);
						V_3 = L_10;
						// for (var i = 0; i < tagCount; i++)
						V_5 = 0;
						goto IL_0051_2;
					}

IL_0035_2:
					{
						// slice[i] = new PoseEstimationJob.Input(ref tags[i]);
						int32_t L_11 = V_5;
						DetectionArray_t8F5F6D9F4D35AB7935ACF076F68C4C4FCDF915A1* L_12 = V_0;
						int32_t L_13 = V_5;
						NullCheck(L_12);
						Detection_t1625D0598F2D1DB7D1E7AA2C92E1948DAB23A72C* L_14;
						L_14 = DetectionArray_get_Item_mF57999F04993B96EB09D020545032EAC6CCB2595(L_12, L_13, NULL);
						Input_tBBD12BA8F1FDBC43290F58D2BDD6E5CC2D6C1F12 L_15;
						memset((&L_15), 0, sizeof(L_15));
						Input__ctor_m3D7817DF62F15567C8E5E64D3F85263CED9B4BB1((&L_15), L_14, /*hidden argument*/NULL);
						NativeSlice_1_set_Item_m90D2D3D9E12864F61898EDDD71AA108C3C98AF8C((&V_3), L_11, L_15, NativeSlice_1_set_Item_m90D2D3D9E12864F61898EDDD71AA108C3C98AF8C_RuntimeMethod_var);
						// for (var i = 0; i < tagCount; i++)
						int32_t L_16 = V_5;
						V_5 = ((int32_t)il2cpp_codegen_add(L_16, 1));
					}

IL_0051_2:
					{
						// for (var i = 0; i < tagCount; i++)
						int32_t L_17 = V_5;
						int32_t L_18 = V_1;
						if ((((int32_t)L_17) < ((int32_t)L_18)))
						{
							goto IL_0035_2;
						}
					}
					{
						// using var jobOutput
						//   = new NativeArray<TagPose>(tagCount, Allocator.TempJob);
						int32_t L_19 = V_1;
						NativeArray_1_t2171E0DCF2C16898178BFEC8CA700B87BC4D5D2F L_20;
						memset((&L_20), 0, sizeof(L_20));
						NativeArray_1__ctor_mA6E360D28C08575FEECFAB24091DF9A9E6604F05((&L_20), L_19, 3, 1, /*hidden argument*/NativeArray_1__ctor_mA6E360D28C08575FEECFAB24091DF9A9E6604F05_RuntimeMethod_var);
						V_4 = L_20;
					}
					{
						auto __finallyBlock = il2cpp::utils::Finally([&]
						{

FINALLY_00a9_2:
							{// begin finally (depth: 3)
								NativeArray_1_Dispose_m993BF0ACBD5A8CBEF7379FDE1A3107AFEBEE2FCC((&V_4), NativeArray_1_Dispose_m993BF0ACBD5A8CBEF7379FDE1A3107AFEBEE2FCC_RuntimeMethod_var);
								return;
							}// end finally (depth: 3)
						});
						try
						{// begin try (depth: 3)
							// var job = new PoseEstimationJob
							//   (jobInput, jobOutput, _image.Width, _image.Height, fov, tagSize);
							NativeArray_1_tC1235F75D3B6DB733FF8EE0AD736BD46550C482E L_21 = V_2;
							NativeArray_1_t2171E0DCF2C16898178BFEC8CA700B87BC4D5D2F L_22 = V_4;
							ImageU8_t5D5B6A85A68488DA142C0E877C38D5427927F0D8* L_23 = __this->____image_2;
							NullCheck(L_23);
							int32_t L_24;
							L_24 = ImageU8_get_Width_m1A2B5125DFA09F67EE85B346DA098A8A527FDEF0(L_23, NULL);
							ImageU8_t5D5B6A85A68488DA142C0E877C38D5427927F0D8* L_25 = __this->____image_2;
							NullCheck(L_25);
							int32_t L_26;
							L_26 = ImageU8_get_Height_mEE3A5DF4F711252F2B5E4A9FEE1D814AEEEC2439(L_25, NULL);
							float L_27 = ___fov0;
							float L_28 = ___tagSize1;
							PoseEstimationJob_tC28BC9261B23D1F28DC5F99692EE0FE3A4B0C1C7 L_29;
							memset((&L_29), 0, sizeof(L_29));
							PoseEstimationJob__ctor_mDDB9F1272D6AE4E428F23B0DC5402D67D83F8980((&L_29), L_21, L_22, L_24, L_26, L_27, L_28, /*hidden argument*/NULL);
							// job.Schedule(tagCount, 1, default(JobHandle)).Complete();
							int32_t L_30 = V_1;
							il2cpp_codegen_initobj((&V_6), sizeof(JobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08));
							JobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08 L_31 = V_6;
							JobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08 L_32;
							L_32 = IJobParallelForExtensions_Schedule_TisPoseEstimationJob_tC28BC9261B23D1F28DC5F99692EE0FE3A4B0C1C7_m39C9940EA9C959D693F633F276750A029EEB1CCC(L_29, L_30, 1, L_31, IJobParallelForExtensions_Schedule_TisPoseEstimationJob_tC28BC9261B23D1F28DC5F99692EE0FE3A4B0C1C7_m39C9940EA9C959D693F633F276750A029EEB1CCC_RuntimeMethod_var);
							V_6 = L_32;
							JobHandle_Complete_mDCED35A125AAB37EDDAB2E31C805B4904B614A4A((&V_6), NULL);
							// jobOutput.CopyTo(_detectedTags);
							NativeArray_1_t2171E0DCF2C16898178BFEC8CA700B87BC4D5D2F L_33 = V_4;
							List_1_t46C4469D4D138AB8F0458EE91D417C1CBD938545* L_34 = __this->____detectedTags_3;
							NativeArrayExtensions_CopyTo_TisTagPose_t215F79C75676B0849191D37136AF4C1BF74CE70B_m7441055716F7969DE4F6F825DB6E8DCDEFA15E33(L_33, L_34, NativeArrayExtensions_CopyTo_TisTagPose_t215F79C75676B0849191D37136AF4C1BF74CE70B_m7441055716F7969DE4F6F825DB6E8DCDEFA15E33_RuntimeMethod_var);
							// }
							goto IL_00cf;
						}// end try (depth: 3)
						catch(Il2CppExceptionWrapper& e)
						{
							__finallyBlock.StoreException(e.ex);
						}
					}
				}// end try (depth: 2)
				catch(Il2CppExceptionWrapper& e)
				{
					__finallyBlock.StoreException(e.ex);
				}
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_00cf:
	{
		// }
		return;
	}
}
// System.Collections.Generic.List`1<System.ValueTuple`2<System.String,System.Int64>> AprilTag.TagDetector::GenerateProfileData()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_t9C8E57F9F12FDB51DAAB696934615B4D8586F987* TagDetector_GenerateProfileData_mAF21566DAC58A23E531ABD9AE2897CFFF4359AFB (TagDetector_t3B7003AE75DF94DE10A317EBB8780D666369F871* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_mA7CDDF140F219597B0D676AA1124CE5BAFFFDCC9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m9585E3C747694F102010D222B5D1EFFD4C450F08_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t9C8E57F9F12FDB51DAAB696934615B4D8586F987_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Span_1_get_Length_m013E0DABFEA7C0FD3AE59BCF0B17907709CBC70D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ValueTuple_2__ctor_m7C172CEFE485CB2C42B9F713A6FE7BA7625A6BCD_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	List_1_t9C8E57F9F12FDB51DAAB696934615B4D8586F987* V_0 = NULL;
	Span_1_tF932EE1F0D4B7A62DA3C00158F42DFEEE51A1E49 V_1;
	memset((&V_1), 0, sizeof(V_1));
	int64_t V_2 = 0;
	int32_t V_3 = 0;
	TimeProfileEntry_t6DA6F7F2A383FC741B1C2F4C623E1CFF2E070EC5 V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
		// var list = new List<(string, long)>();
		List_1_t9C8E57F9F12FDB51DAAB696934615B4D8586F987* L_0 = (List_1_t9C8E57F9F12FDB51DAAB696934615B4D8586F987*)il2cpp_codegen_object_new(List_1_t9C8E57F9F12FDB51DAAB696934615B4D8586F987_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		List_1__ctor_m9585E3C747694F102010D222B5D1EFFD4C450F08(L_0, List_1__ctor_m9585E3C747694F102010D222B5D1EFFD4C450F08_RuntimeMethod_var);
		V_0 = L_0;
		// var stamps = _detector.TimeProfile.Stamps;
		Detector_tFE9DE2EA3519A1B91F55A35E8EE68EB1B27B8B1A* L_1 = __this->____detector_0;
		NullCheck(L_1);
		TimeProfile_tABC93C5F8A866D5F3561E53F913C48885AE9C626* L_2;
		L_2 = Detector_get_TimeProfile_m20BB92F18E1575D3A7519FF789FC569F425851BF(L_1, NULL);
		Span_1_tF932EE1F0D4B7A62DA3C00158F42DFEEE51A1E49 L_3;
		L_3 = TimeProfile_get_Stamps_m5E7E920472AE7067D874AFBAF36DB5FF9BEB3510(L_2, NULL);
		V_1 = L_3;
		// var time = _detector.TimeProfile.UTime;
		Detector_tFE9DE2EA3519A1B91F55A35E8EE68EB1B27B8B1A* L_4 = __this->____detector_0;
		NullCheck(L_4);
		TimeProfile_tABC93C5F8A866D5F3561E53F913C48885AE9C626* L_5;
		L_5 = Detector_get_TimeProfile_m20BB92F18E1575D3A7519FF789FC569F425851BF(L_4, NULL);
		int64_t L_6;
		L_6 = TimeProfile_get_UTime_m7F71F3D5CD12A38A9868C4FF1838DA591A0E6998_inline(L_5, NULL);
		V_2 = L_6;
		// for (var i = 0; i < stamps.Length; i++)
		V_3 = 0;
		goto IL_0062;
	}

IL_002c:
	{
		// var stamp = stamps[i];
		int32_t L_7 = V_3;
		TimeProfileEntry_t6DA6F7F2A383FC741B1C2F4C623E1CFF2E070EC5* L_8;
		L_8 = il2cpp_span_get_item((TimeProfileEntry_t6DA6F7F2A383FC741B1C2F4C623E1CFF2E070EC5*)((Il2CppByReference*)&(((&V_1))->____pointer_0))->value, (L_7), ((&V_1))->____length_1);
		TimeProfileEntry_t6DA6F7F2A383FC741B1C2F4C623E1CFF2E070EC5 L_9 = (*(TimeProfileEntry_t6DA6F7F2A383FC741B1C2F4C623E1CFF2E070EC5*)L_8);
		V_4 = L_9;
		// list.Add((stamp.Name, stamp.UTime - time));
		List_1_t9C8E57F9F12FDB51DAAB696934615B4D8586F987* L_10 = V_0;
		String_t* L_11;
		L_11 = TimeProfileEntry_get_Name_m7523C90D14530E20006AEAC3CA9BD9DE79BC7FD4((&V_4), NULL);
		int64_t L_12;
		L_12 = TimeProfileEntry_get_UTime_mCD71B4AA19A81B7BB9DDE5E10BB5369508F62B58_inline((&V_4), NULL);
		int64_t L_13 = V_2;
		ValueTuple_2_t8418963FF4ACBEA95635FB52C32DE470951472C5 L_14;
		memset((&L_14), 0, sizeof(L_14));
		ValueTuple_2__ctor_m7C172CEFE485CB2C42B9F713A6FE7BA7625A6BCD((&L_14), L_11, ((int64_t)il2cpp_codegen_subtract(L_12, L_13)), /*hidden argument*/ValueTuple_2__ctor_m7C172CEFE485CB2C42B9F713A6FE7BA7625A6BCD_RuntimeMethod_var);
		NullCheck(L_10);
		List_1_Add_mA7CDDF140F219597B0D676AA1124CE5BAFFFDCC9_inline(L_10, L_14, List_1_Add_mA7CDDF140F219597B0D676AA1124CE5BAFFFDCC9_RuntimeMethod_var);
		// time = stamp.UTime;
		int64_t L_15;
		L_15 = TimeProfileEntry_get_UTime_mCD71B4AA19A81B7BB9DDE5E10BB5369508F62B58_inline((&V_4), NULL);
		V_2 = L_15;
		// for (var i = 0; i < stamps.Length; i++)
		int32_t L_16 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_16, 1));
	}

IL_0062:
	{
		// for (var i = 0; i < stamps.Length; i++)
		int32_t L_17 = V_3;
		int32_t L_18;
		L_18 = Span_1_get_Length_m013E0DABFEA7C0FD3AE59BCF0B17907709CBC70D_inline((&V_1), Span_1_get_Length_m013E0DABFEA7C0FD3AE59BCF0B17907709CBC70D_RuntimeMethod_var);
		if ((((int32_t)L_17) < ((int32_t)L_18)))
		{
			goto IL_002c;
		}
	}
	{
		// return list;
		List_1_t9C8E57F9F12FDB51DAAB696934615B4D8586F987* L_19 = V_0;
		return L_19;
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
// System.Int32 AprilTag.TagPose::get_ID()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t TagPose_get_ID_m48A90766AFF57644BAA48506DB797989D2E7AAA3 (TagPose_t215F79C75676B0849191D37136AF4C1BF74CE70B* __this, const RuntimeMethod* method) 
{
	{
		// public int ID { get; }
		int32_t L_0 = __this->___U3CIDU3Ek__BackingField_0;
		return L_0;
	}
}
IL2CPP_EXTERN_C  int32_t TagPose_get_ID_m48A90766AFF57644BAA48506DB797989D2E7AAA3_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	TagPose_t215F79C75676B0849191D37136AF4C1BF74CE70B* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<TagPose_t215F79C75676B0849191D37136AF4C1BF74CE70B*>(__this + _offset);
	int32_t _returnValue;
	_returnValue = TagPose_get_ID_m48A90766AFF57644BAA48506DB797989D2E7AAA3_inline(_thisAdjusted, method);
	return _returnValue;
}
// UnityEngine.Vector3 AprilTag.TagPose::get_Position()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 TagPose_get_Position_mB6EE4290F68E0B957E4F554058806A2CD34AC032 (TagPose_t215F79C75676B0849191D37136AF4C1BF74CE70B* __this, const RuntimeMethod* method) 
{
	{
		// public Vector3 Position { get; }
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = __this->___U3CPositionU3Ek__BackingField_1;
		return L_0;
	}
}
IL2CPP_EXTERN_C  Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 TagPose_get_Position_mB6EE4290F68E0B957E4F554058806A2CD34AC032_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	TagPose_t215F79C75676B0849191D37136AF4C1BF74CE70B* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<TagPose_t215F79C75676B0849191D37136AF4C1BF74CE70B*>(__this + _offset);
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 _returnValue;
	_returnValue = TagPose_get_Position_mB6EE4290F68E0B957E4F554058806A2CD34AC032_inline(_thisAdjusted, method);
	return _returnValue;
}
// UnityEngine.Quaternion AprilTag.TagPose::get_Rotation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 TagPose_get_Rotation_mDDF2850E778FA1E59C00B127DF050A2AED92EBA7 (TagPose_t215F79C75676B0849191D37136AF4C1BF74CE70B* __this, const RuntimeMethod* method) 
{
	{
		// public Quaternion Rotation { get; }
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_0 = __this->___U3CRotationU3Ek__BackingField_2;
		return L_0;
	}
}
IL2CPP_EXTERN_C  Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 TagPose_get_Rotation_mDDF2850E778FA1E59C00B127DF050A2AED92EBA7_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	TagPose_t215F79C75676B0849191D37136AF4C1BF74CE70B* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<TagPose_t215F79C75676B0849191D37136AF4C1BF74CE70B*>(__this + _offset);
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 _returnValue;
	_returnValue = TagPose_get_Rotation_mDDF2850E778FA1E59C00B127DF050A2AED92EBA7_inline(_thisAdjusted, method);
	return _returnValue;
}
// System.Void AprilTag.TagPose::.ctor(System.Int32,UnityEngine.Vector3,UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TagPose__ctor_mA05BB89D63F91DBC2819453421F790E6F6BE71E9 (TagPose_t215F79C75676B0849191D37136AF4C1BF74CE70B* __this, int32_t ___id0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___position1, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___rotation2, const RuntimeMethod* method) 
{
	{
		// ID = id;
		int32_t L_0 = ___id0;
		__this->___U3CIDU3Ek__BackingField_0 = L_0;
		// Position = position;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = ___position1;
		__this->___U3CPositionU3Ek__BackingField_1 = L_1;
		// Rotation = rotation;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_2 = ___rotation2;
		__this->___U3CRotationU3Ek__BackingField_2 = L_2;
		// }
		return;
	}
}
IL2CPP_EXTERN_C  void TagPose__ctor_mA05BB89D63F91DBC2819453421F790E6F6BE71E9_AdjustorThunk (RuntimeObject* __this, int32_t ___id0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___position1, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___rotation2, const RuntimeMethod* method)
{
	TagPose_t215F79C75676B0849191D37136AF4C1BF74CE70B* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<TagPose_t215F79C75676B0849191D37136AF4C1BF74CE70B*>(__this + _offset);
	TagPose__ctor_mA05BB89D63F91DBC2819453421F790E6F6BE71E9(_thisAdjusted, ___id0, ___position1, ___rotation2, method);
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
// System.Int32 AprilTag.Interop.Detection::get_ID()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Detection_get_ID_m34E1C04B3CEEE367076F00407A8D04C789F0E7DC (Detection_t1625D0598F2D1DB7D1E7AA2C92E1948DAB23A72C* __this, const RuntimeMethod* method) 
{
	{
		// public int ID => id;
		int32_t L_0 = __this->___id_1;
		return L_0;
	}
}
IL2CPP_EXTERN_C  int32_t Detection_get_ID_m34E1C04B3CEEE367076F00407A8D04C789F0E7DC_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	Detection_t1625D0598F2D1DB7D1E7AA2C92E1948DAB23A72C* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<Detection_t1625D0598F2D1DB7D1E7AA2C92E1948DAB23A72C*>(__this + _offset);
	int32_t _returnValue;
	_returnValue = Detection_get_ID_m34E1C04B3CEEE367076F00407A8D04C789F0E7DC_inline(_thisAdjusted, method);
	return _returnValue;
}
// System.Int32 AprilTag.Interop.Detection::get_Hamming()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Detection_get_Hamming_m9533F758A7D9A02536B4F2B2982DF0F33CF999A0 (Detection_t1625D0598F2D1DB7D1E7AA2C92E1948DAB23A72C* __this, const RuntimeMethod* method) 
{
	{
		// public int Hamming => hamming;
		int32_t L_0 = __this->___hamming_2;
		return L_0;
	}
}
IL2CPP_EXTERN_C  int32_t Detection_get_Hamming_m9533F758A7D9A02536B4F2B2982DF0F33CF999A0_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	Detection_t1625D0598F2D1DB7D1E7AA2C92E1948DAB23A72C* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<Detection_t1625D0598F2D1DB7D1E7AA2C92E1948DAB23A72C*>(__this + _offset);
	int32_t _returnValue;
	_returnValue = Detection_get_Hamming_m9533F758A7D9A02536B4F2B2982DF0F33CF999A0_inline(_thisAdjusted, method);
	return _returnValue;
}
// System.Single AprilTag.Interop.Detection::get_DecisionMargin()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Detection_get_DecisionMargin_mA09DB6EE3D3E729DB31EDECE33C9A66B78B01BD0 (Detection_t1625D0598F2D1DB7D1E7AA2C92E1948DAB23A72C* __this, const RuntimeMethod* method) 
{
	{
		// public float DecisionMargin => decision_margin;
		float L_0 = __this->___decision_margin_3;
		return L_0;
	}
}
IL2CPP_EXTERN_C  float Detection_get_DecisionMargin_mA09DB6EE3D3E729DB31EDECE33C9A66B78B01BD0_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	Detection_t1625D0598F2D1DB7D1E7AA2C92E1948DAB23A72C* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<Detection_t1625D0598F2D1DB7D1E7AA2C92E1948DAB23A72C*>(__this + _offset);
	float _returnValue;
	_returnValue = Detection_get_DecisionMargin_mA09DB6EE3D3E729DB31EDECE33C9A66B78B01BD0_inline(_thisAdjusted, method);
	return _returnValue;
}
// System.ValueTuple`2<System.Double,System.Double> AprilTag.Interop.Detection::get_Center()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ValueTuple_2_t6535F6090E6D3C9A7A645F4BFD8ED400CBA8B14C Detection_get_Center_m47E0AE2998BA72DAB1D4A11CF78CD678BDEEE729 (Detection_t1625D0598F2D1DB7D1E7AA2C92E1948DAB23A72C* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ValueTuple_2__ctor_m07EDA6EDF9BDDD9DB44BAFD23DC7AB04E57428E1_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public (double x, double y) Center => (c0, c1);
		double L_0 = __this->___c0_5;
		double L_1 = __this->___c1_6;
		ValueTuple_2_t6535F6090E6D3C9A7A645F4BFD8ED400CBA8B14C L_2;
		memset((&L_2), 0, sizeof(L_2));
		ValueTuple_2__ctor_m07EDA6EDF9BDDD9DB44BAFD23DC7AB04E57428E1((&L_2), L_0, L_1, /*hidden argument*/ValueTuple_2__ctor_m07EDA6EDF9BDDD9DB44BAFD23DC7AB04E57428E1_RuntimeMethod_var);
		return L_2;
	}
}
IL2CPP_EXTERN_C  ValueTuple_2_t6535F6090E6D3C9A7A645F4BFD8ED400CBA8B14C Detection_get_Center_m47E0AE2998BA72DAB1D4A11CF78CD678BDEEE729_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	Detection_t1625D0598F2D1DB7D1E7AA2C92E1948DAB23A72C* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<Detection_t1625D0598F2D1DB7D1E7AA2C92E1948DAB23A72C*>(__this + _offset);
	ValueTuple_2_t6535F6090E6D3C9A7A645F4BFD8ED400CBA8B14C _returnValue;
	_returnValue = Detection_get_Center_m47E0AE2998BA72DAB1D4A11CF78CD678BDEEE729(_thisAdjusted, method);
	return _returnValue;
}
// System.ValueTuple`2<System.Double,System.Double> AprilTag.Interop.Detection::get_Corner1()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ValueTuple_2_t6535F6090E6D3C9A7A645F4BFD8ED400CBA8B14C Detection_get_Corner1_mFE06287109347B779FF28258BC86F058742E2AD4 (Detection_t1625D0598F2D1DB7D1E7AA2C92E1948DAB23A72C* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ValueTuple_2__ctor_m07EDA6EDF9BDDD9DB44BAFD23DC7AB04E57428E1_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public (double x, double y) Corner1 => (p00, p01);
		double L_0 = __this->___p00_7;
		double L_1 = __this->___p01_8;
		ValueTuple_2_t6535F6090E6D3C9A7A645F4BFD8ED400CBA8B14C L_2;
		memset((&L_2), 0, sizeof(L_2));
		ValueTuple_2__ctor_m07EDA6EDF9BDDD9DB44BAFD23DC7AB04E57428E1((&L_2), L_0, L_1, /*hidden argument*/ValueTuple_2__ctor_m07EDA6EDF9BDDD9DB44BAFD23DC7AB04E57428E1_RuntimeMethod_var);
		return L_2;
	}
}
IL2CPP_EXTERN_C  ValueTuple_2_t6535F6090E6D3C9A7A645F4BFD8ED400CBA8B14C Detection_get_Corner1_mFE06287109347B779FF28258BC86F058742E2AD4_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	Detection_t1625D0598F2D1DB7D1E7AA2C92E1948DAB23A72C* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<Detection_t1625D0598F2D1DB7D1E7AA2C92E1948DAB23A72C*>(__this + _offset);
	ValueTuple_2_t6535F6090E6D3C9A7A645F4BFD8ED400CBA8B14C _returnValue;
	_returnValue = Detection_get_Corner1_mFE06287109347B779FF28258BC86F058742E2AD4(_thisAdjusted, method);
	return _returnValue;
}
// System.ValueTuple`2<System.Double,System.Double> AprilTag.Interop.Detection::get_Corner2()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ValueTuple_2_t6535F6090E6D3C9A7A645F4BFD8ED400CBA8B14C Detection_get_Corner2_m246DAE2BA3DF3684E36C8078CFE8C66D69830109 (Detection_t1625D0598F2D1DB7D1E7AA2C92E1948DAB23A72C* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ValueTuple_2__ctor_m07EDA6EDF9BDDD9DB44BAFD23DC7AB04E57428E1_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public (double x, double y) Corner2 => (p10, p11);
		double L_0 = __this->___p10_9;
		double L_1 = __this->___p11_10;
		ValueTuple_2_t6535F6090E6D3C9A7A645F4BFD8ED400CBA8B14C L_2;
		memset((&L_2), 0, sizeof(L_2));
		ValueTuple_2__ctor_m07EDA6EDF9BDDD9DB44BAFD23DC7AB04E57428E1((&L_2), L_0, L_1, /*hidden argument*/ValueTuple_2__ctor_m07EDA6EDF9BDDD9DB44BAFD23DC7AB04E57428E1_RuntimeMethod_var);
		return L_2;
	}
}
IL2CPP_EXTERN_C  ValueTuple_2_t6535F6090E6D3C9A7A645F4BFD8ED400CBA8B14C Detection_get_Corner2_m246DAE2BA3DF3684E36C8078CFE8C66D69830109_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	Detection_t1625D0598F2D1DB7D1E7AA2C92E1948DAB23A72C* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<Detection_t1625D0598F2D1DB7D1E7AA2C92E1948DAB23A72C*>(__this + _offset);
	ValueTuple_2_t6535F6090E6D3C9A7A645F4BFD8ED400CBA8B14C _returnValue;
	_returnValue = Detection_get_Corner2_m246DAE2BA3DF3684E36C8078CFE8C66D69830109(_thisAdjusted, method);
	return _returnValue;
}
// System.ValueTuple`2<System.Double,System.Double> AprilTag.Interop.Detection::get_Corner3()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ValueTuple_2_t6535F6090E6D3C9A7A645F4BFD8ED400CBA8B14C Detection_get_Corner3_m584C7BFDF6CFA33793C939D8EE042BBACE013E5B (Detection_t1625D0598F2D1DB7D1E7AA2C92E1948DAB23A72C* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ValueTuple_2__ctor_m07EDA6EDF9BDDD9DB44BAFD23DC7AB04E57428E1_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public (double x, double y) Corner3 => (p20, p21);
		double L_0 = __this->___p20_11;
		double L_1 = __this->___p21_12;
		ValueTuple_2_t6535F6090E6D3C9A7A645F4BFD8ED400CBA8B14C L_2;
		memset((&L_2), 0, sizeof(L_2));
		ValueTuple_2__ctor_m07EDA6EDF9BDDD9DB44BAFD23DC7AB04E57428E1((&L_2), L_0, L_1, /*hidden argument*/ValueTuple_2__ctor_m07EDA6EDF9BDDD9DB44BAFD23DC7AB04E57428E1_RuntimeMethod_var);
		return L_2;
	}
}
IL2CPP_EXTERN_C  ValueTuple_2_t6535F6090E6D3C9A7A645F4BFD8ED400CBA8B14C Detection_get_Corner3_m584C7BFDF6CFA33793C939D8EE042BBACE013E5B_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	Detection_t1625D0598F2D1DB7D1E7AA2C92E1948DAB23A72C* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<Detection_t1625D0598F2D1DB7D1E7AA2C92E1948DAB23A72C*>(__this + _offset);
	ValueTuple_2_t6535F6090E6D3C9A7A645F4BFD8ED400CBA8B14C _returnValue;
	_returnValue = Detection_get_Corner3_m584C7BFDF6CFA33793C939D8EE042BBACE013E5B(_thisAdjusted, method);
	return _returnValue;
}
// System.ValueTuple`2<System.Double,System.Double> AprilTag.Interop.Detection::get_Corner4()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ValueTuple_2_t6535F6090E6D3C9A7A645F4BFD8ED400CBA8B14C Detection_get_Corner4_m9B7646233BD2029D37CA168B7987D39ECCE53D1D (Detection_t1625D0598F2D1DB7D1E7AA2C92E1948DAB23A72C* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ValueTuple_2__ctor_m07EDA6EDF9BDDD9DB44BAFD23DC7AB04E57428E1_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public (double x, double y) Corner4 => (p30, p31);
		double L_0 = __this->___p30_13;
		double L_1 = __this->___p31_14;
		ValueTuple_2_t6535F6090E6D3C9A7A645F4BFD8ED400CBA8B14C L_2;
		memset((&L_2), 0, sizeof(L_2));
		ValueTuple_2__ctor_m07EDA6EDF9BDDD9DB44BAFD23DC7AB04E57428E1((&L_2), L_0, L_1, /*hidden argument*/ValueTuple_2__ctor_m07EDA6EDF9BDDD9DB44BAFD23DC7AB04E57428E1_RuntimeMethod_var);
		return L_2;
	}
}
IL2CPP_EXTERN_C  ValueTuple_2_t6535F6090E6D3C9A7A645F4BFD8ED400CBA8B14C Detection_get_Corner4_m9B7646233BD2029D37CA168B7987D39ECCE53D1D_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	Detection_t1625D0598F2D1DB7D1E7AA2C92E1948DAB23A72C* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<Detection_t1625D0598F2D1DB7D1E7AA2C92E1948DAB23A72C*>(__this + _offset);
	ValueTuple_2_t6535F6090E6D3C9A7A645F4BFD8ED400CBA8B14C _returnValue;
	_returnValue = Detection_get_Corner4_m9B7646233BD2029D37CA168B7987D39ECCE53D1D(_thisAdjusted, method);
	return _returnValue;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void AprilTag.Interop.DetectionArray::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DetectionArray__ctor_m69EC74F583EBBB6DE157894F19F5A208ABD974A9 (DetectionArray_t8F5F6D9F4D35AB7935ACF076F68C4C4FCDF915A1* __this, const RuntimeMethod* method) 
{
	{
		// DetectionArray() : base(true) {}
		SafeHandleZeroOrMinusOneIsInvalid__ctor_m9BA85F78EC25654EE170CA999EC379D9A4B59B89(__this, (bool)1, NULL);
		// DetectionArray() : base(true) {}
		return;
	}
}
// System.Boolean AprilTag.Interop.DetectionArray::ReleaseHandle()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool DetectionArray_ReleaseHandle_m7E384999D2C5A74FE68BC8DB1192FE267FE56AB2 (DetectionArray_t8F5F6D9F4D35AB7935ACF076F68C4C4FCDF915A1* __this, const RuntimeMethod* method) 
{
	{
		// _Destroy(handle);
		intptr_t L_0 = ((SafeHandle_tC1A4DA80DA89B867CC011B707A07275230321BF7*)__this)->___handle_0;
		DetectionArray__Destroy_m53B384455648646595AA527AA9A293FFF6EEE2FA(L_0, NULL);
		// return true;
		return (bool)1;
	}
}
// AprilTag.Interop.ZArray`1<System.IntPtr>& AprilTag.Interop.DetectionArray::get_AsPointerArray()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ZArray_1_t6ACA73CBEC75346B0F8A43A809C592617D514A66* DetectionArray_get_AsPointerArray_m61A2E490C33C419339EC14F313CE82B03BD41352 (DetectionArray_t8F5F6D9F4D35AB7935ACF076F68C4C4FCDF915A1* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Util_AsRef_TisZArray_1_t6ACA73CBEC75346B0F8A43A809C592617D514A66_mABADA88D2580218A6CA64516CA66BBFE7C45CE0F_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// => ref Util.AsRef<ZArray<IntPtr>>((void*)handle);
		intptr_t L_0 = ((SafeHandle_tC1A4DA80DA89B867CC011B707A07275230321BF7*)__this)->___handle_0;
		void* L_1;
		L_1 = IntPtr_op_Explicit_m693F2F9E685EE117D4AC080342B8959DAF684294(L_0, NULL);
		ZArray_1_t6ACA73CBEC75346B0F8A43A809C592617D514A66* L_2;
		L_2 = Util_AsRef_TisZArray_1_t6ACA73CBEC75346B0F8A43A809C592617D514A66_mABADA88D2580218A6CA64516CA66BBFE7C45CE0F(L_1, Util_AsRef_TisZArray_1_t6ACA73CBEC75346B0F8A43A809C592617D514A66_mABADA88D2580218A6CA64516CA66BBFE7C45CE0F_RuntimeMethod_var);
		return L_2;
	}
}
// System.Int32 AprilTag.Interop.DetectionArray::get_Length()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t DetectionArray_get_Length_mA9853470655852797017DC0361ACB5DFE52B0805 (DetectionArray_t8F5F6D9F4D35AB7935ACF076F68C4C4FCDF915A1* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Span_1_get_Length_m429BC42023241B4D851D65359CD7271BF938583F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ZArray_1_get_AsSpan_m64F68DED771D00DC4A9D8454CD5718B11ADD9129_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	Span_1_t1E317EB665016139E9E9B38B97D6EE8270DF7B68 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// => AsPointerArray.AsSpan.Length;
		ZArray_1_t6ACA73CBEC75346B0F8A43A809C592617D514A66* L_0;
		L_0 = DetectionArray_get_AsPointerArray_m61A2E490C33C419339EC14F313CE82B03BD41352(__this, NULL);
		Span_1_t1E317EB665016139E9E9B38B97D6EE8270DF7B68 L_1;
		L_1 = ZArray_1_get_AsSpan_m64F68DED771D00DC4A9D8454CD5718B11ADD9129(L_0, ZArray_1_get_AsSpan_m64F68DED771D00DC4A9D8454CD5718B11ADD9129_RuntimeMethod_var);
		V_0 = L_1;
		int32_t L_2;
		L_2 = Span_1_get_Length_m429BC42023241B4D851D65359CD7271BF938583F_inline((&V_0), Span_1_get_Length_m429BC42023241B4D851D65359CD7271BF938583F_RuntimeMethod_var);
		return L_2;
	}
}
// AprilTag.Interop.Detection& AprilTag.Interop.DetectionArray::get_Item(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Detection_t1625D0598F2D1DB7D1E7AA2C92E1948DAB23A72C* DetectionArray_get_Item_mF57999F04993B96EB09D020545032EAC6CCB2595 (DetectionArray_t8F5F6D9F4D35AB7935ACF076F68C4C4FCDF915A1* __this, int32_t ___i0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Util_AsRef_TisDetection_t1625D0598F2D1DB7D1E7AA2C92E1948DAB23A72C_mD62637A8A22433110DA0949D020833E709776D83_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ZArray_1_get_AsSpan_m64F68DED771D00DC4A9D8454CD5718B11ADD9129_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	Span_1_t1E317EB665016139E9E9B38B97D6EE8270DF7B68 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// => ref Util.AsRef<Detection>((void*)AsPointerArray.AsSpan[i]);
		ZArray_1_t6ACA73CBEC75346B0F8A43A809C592617D514A66* L_0;
		L_0 = DetectionArray_get_AsPointerArray_m61A2E490C33C419339EC14F313CE82B03BD41352(__this, NULL);
		Span_1_t1E317EB665016139E9E9B38B97D6EE8270DF7B68 L_1;
		L_1 = ZArray_1_get_AsSpan_m64F68DED771D00DC4A9D8454CD5718B11ADD9129(L_0, ZArray_1_get_AsSpan_m64F68DED771D00DC4A9D8454CD5718B11ADD9129_RuntimeMethod_var);
		V_0 = L_1;
		int32_t L_2 = ___i0;
		intptr_t* L_3;
		L_3 = il2cpp_span_get_item((intptr_t*)((Il2CppByReference*)&(((&V_0))->____pointer_0))->value, (L_2), ((&V_0))->____length_1);
		void* L_4;
		L_4 = IntPtr_op_Explicit_m693F2F9E685EE117D4AC080342B8959DAF684294(((*(L_3))), NULL);
		Detection_t1625D0598F2D1DB7D1E7AA2C92E1948DAB23A72C* L_5;
		L_5 = Util_AsRef_TisDetection_t1625D0598F2D1DB7D1E7AA2C92E1948DAB23A72C_mD62637A8A22433110DA0949D020833E709776D83(L_4, Util_AsRef_TisDetection_t1625D0598F2D1DB7D1E7AA2C92E1948DAB23A72C_mD62637A8A22433110DA0949D020833E709776D83_RuntimeMethod_var);
		return L_5;
	}
}
// System.Void AprilTag.Interop.DetectionArray::_Destroy(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DetectionArray__Destroy_m53B384455648646595AA527AA9A293FFF6EEE2FA (intptr_t ___detections0, const RuntimeMethod* method) 
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (intptr_t);

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(apriltag_detections_destroy)(___detections0);

}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void AprilTag.Interop.DetectionInfo::.ctor(AprilTag.Interop.Detection&,System.Double,System.Double,System.Double,System.Double,System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DetectionInfo__ctor_mB3833066D920169C8A2EDE967F288547DBF4AC48 (DetectionInfo_tB74A7A3EC1D7E0160DFA0D90CF7F7F4715A64162* __this, Detection_t1625D0598F2D1DB7D1E7AA2C92E1948DAB23A72C* ___detection0, double ___tagSize1, double ___fx2, double ___fy3, double ___cx4, double ___cy5, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Util_AsPointer_TisDetection_t1625D0598F2D1DB7D1E7AA2C92E1948DAB23A72C_mE86855F57893A4E96AE5199CF04B7C57EF3B1AB2_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// this.det = (IntPtr)Util.AsPointer(ref detection);
		Detection_t1625D0598F2D1DB7D1E7AA2C92E1948DAB23A72C* L_0 = ___detection0;
		void* L_1;
		L_1 = Util_AsPointer_TisDetection_t1625D0598F2D1DB7D1E7AA2C92E1948DAB23A72C_mE86855F57893A4E96AE5199CF04B7C57EF3B1AB2(L_0, Util_AsPointer_TisDetection_t1625D0598F2D1DB7D1E7AA2C92E1948DAB23A72C_mE86855F57893A4E96AE5199CF04B7C57EF3B1AB2_RuntimeMethod_var);
		intptr_t L_2;
		L_2 = IntPtr_op_Explicit_m04BEF6277775C13DD8A986812AAA3FCEC32DCCBE(L_1, NULL);
		__this->___det_0 = L_2;
		// this.tagsize = tagSize;
		double L_3 = ___tagSize1;
		__this->___tagsize_1 = L_3;
		// this.fx = fx;
		double L_4 = ___fx2;
		__this->___fx_2 = L_4;
		// this.fy = fy;
		double L_5 = ___fy3;
		__this->___fy_3 = L_5;
		// this.cx = cx;
		double L_6 = ___cx4;
		__this->___cx_4 = L_6;
		// this.cy = cy;
		double L_7 = ___cy5;
		__this->___cy_5 = L_7;
		// }
		return;
	}
}
IL2CPP_EXTERN_C  void DetectionInfo__ctor_mB3833066D920169C8A2EDE967F288547DBF4AC48_AdjustorThunk (RuntimeObject* __this, Detection_t1625D0598F2D1DB7D1E7AA2C92E1948DAB23A72C* ___detection0, double ___tagSize1, double ___fx2, double ___fy3, double ___cx4, double ___cy5, const RuntimeMethod* method)
{
	DetectionInfo_tB74A7A3EC1D7E0160DFA0D90CF7F7F4715A64162* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<DetectionInfo_tB74A7A3EC1D7E0160DFA0D90CF7F7F4715A64162*>(__this + _offset);
	DetectionInfo__ctor_mB3833066D920169C8A2EDE967F288547DBF4AC48(_thisAdjusted, ___detection0, ___tagSize1, ___fx2, ___fy3, ___cx4, ___cy5, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void AprilTag.Interop.Detector::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Detector__ctor_m2E4A54810013E90004E0B768409DA3C971B603ED (Detector_tFE9DE2EA3519A1B91F55A35E8EE68EB1B27B8B1A* __this, const RuntimeMethod* method) 
{
	{
		// Detector() : base(true) {}
		SafeHandleZeroOrMinusOneIsInvalid__ctor_m9BA85F78EC25654EE170CA999EC379D9A4B59B89(__this, (bool)1, NULL);
		// Detector() : base(true) {}
		return;
	}
}
// System.Boolean AprilTag.Interop.Detector::ReleaseHandle()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Detector_ReleaseHandle_m8734B8E5C8B27FC4F1F36E94D6C53CD9B203AE61 (Detector_tFE9DE2EA3519A1B91F55A35E8EE68EB1B27B8B1A* __this, const RuntimeMethod* method) 
{
	{
		// _Destroy(handle);
		intptr_t L_0 = ((SafeHandle_tC1A4DA80DA89B867CC011B707A07275230321BF7*)__this)->___handle_0;
		Detector__Destroy_m8F1ACC00CFB7D622464CD752494574E9B46BC023(L_0, NULL);
		// return true;
		return (bool)1;
	}
}
// AprilTag.Interop.Detector/InternalData& AprilTag.Interop.Detector::get_Data()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR InternalData_t54BD4B51ACE1D50D1BE9FA821A06541C3C10D477* Detector_get_Data_mA9621767612A7D74B87BA15AE53A3D0AC3949AF7 (Detector_tFE9DE2EA3519A1B91F55A35E8EE68EB1B27B8B1A* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Util_AsRef_TisInternalData_t54BD4B51ACE1D50D1BE9FA821A06541C3C10D477_m4E10219128AC125C3089E9D646DE7CCC72D03433_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// => ref Util.AsRef<InternalData>((void*)handle);
		intptr_t L_0 = ((SafeHandle_tC1A4DA80DA89B867CC011B707A07275230321BF7*)__this)->___handle_0;
		void* L_1;
		L_1 = IntPtr_op_Explicit_m693F2F9E685EE117D4AC080342B8959DAF684294(L_0, NULL);
		InternalData_t54BD4B51ACE1D50D1BE9FA821A06541C3C10D477* L_2;
		L_2 = Util_AsRef_TisInternalData_t54BD4B51ACE1D50D1BE9FA821A06541C3C10D477_m4E10219128AC125C3089E9D646DE7CCC72D03433(L_1, Util_AsRef_TisInternalData_t54BD4B51ACE1D50D1BE9FA821A06541C3C10D477_m4E10219128AC125C3089E9D646DE7CCC72D03433_RuntimeMethod_var);
		return L_2;
	}
}
// System.Int32 AprilTag.Interop.Detector::get_ThreadCount()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Detector_get_ThreadCount_m66B4EC872706F4EAC07D3CFBEBEE354952F3E72F (Detector_tFE9DE2EA3519A1B91F55A35E8EE68EB1B27B8B1A* __this, const RuntimeMethod* method) 
{
	{
		// { get => Data.nthreads; set => Data.nthreads = value; }
		InternalData_t54BD4B51ACE1D50D1BE9FA821A06541C3C10D477* L_0;
		L_0 = Detector_get_Data_mA9621767612A7D74B87BA15AE53A3D0AC3949AF7(__this, NULL);
		int32_t L_1 = L_0->___nthreads_0;
		return L_1;
	}
}
// System.Void AprilTag.Interop.Detector::set_ThreadCount(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Detector_set_ThreadCount_mBCB6FBC6A0FE8149C20D0FF75F34E123B8A3623E (Detector_tFE9DE2EA3519A1B91F55A35E8EE68EB1B27B8B1A* __this, int32_t ___value0, const RuntimeMethod* method) 
{
	{
		// { get => Data.nthreads; set => Data.nthreads = value; }
		InternalData_t54BD4B51ACE1D50D1BE9FA821A06541C3C10D477* L_0;
		L_0 = Detector_get_Data_mA9621767612A7D74B87BA15AE53A3D0AC3949AF7(__this, NULL);
		int32_t L_1 = ___value0;
		L_0->___nthreads_0 = L_1;
		return;
	}
}
// System.Single AprilTag.Interop.Detector::get_QuadDecimate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Detector_get_QuadDecimate_mD6438FDB1D870A93B58E1511C1C6B0D0D163FACE (Detector_tFE9DE2EA3519A1B91F55A35E8EE68EB1B27B8B1A* __this, const RuntimeMethod* method) 
{
	{
		// { get => Data.quad_decimate; set => Data.quad_decimate = value; }
		InternalData_t54BD4B51ACE1D50D1BE9FA821A06541C3C10D477* L_0;
		L_0 = Detector_get_Data_mA9621767612A7D74B87BA15AE53A3D0AC3949AF7(__this, NULL);
		float L_1 = L_0->___quad_decimate_1;
		return L_1;
	}
}
// System.Void AprilTag.Interop.Detector::set_QuadDecimate(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Detector_set_QuadDecimate_m02BD41831DA8F48BB92384B06AC542DE626F5845 (Detector_tFE9DE2EA3519A1B91F55A35E8EE68EB1B27B8B1A* __this, float ___value0, const RuntimeMethod* method) 
{
	{
		// { get => Data.quad_decimate; set => Data.quad_decimate = value; }
		InternalData_t54BD4B51ACE1D50D1BE9FA821A06541C3C10D477* L_0;
		L_0 = Detector_get_Data_mA9621767612A7D74B87BA15AE53A3D0AC3949AF7(__this, NULL);
		float L_1 = ___value0;
		L_0->___quad_decimate_1 = L_1;
		return;
	}
}
// System.Single AprilTag.Interop.Detector::get_QuadSigma()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Detector_get_QuadSigma_m9826CDA858058E543AC34A320020663BEDBA50B5 (Detector_tFE9DE2EA3519A1B91F55A35E8EE68EB1B27B8B1A* __this, const RuntimeMethod* method) 
{
	{
		// { get => Data.quad_sigma; set => Data.quad_sigma = value; }
		InternalData_t54BD4B51ACE1D50D1BE9FA821A06541C3C10D477* L_0;
		L_0 = Detector_get_Data_mA9621767612A7D74B87BA15AE53A3D0AC3949AF7(__this, NULL);
		float L_1 = L_0->___quad_sigma_2;
		return L_1;
	}
}
// System.Void AprilTag.Interop.Detector::set_QuadSigma(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Detector_set_QuadSigma_m9545B4D729DFF2C1B81583ADCAAA258066CD3B17 (Detector_tFE9DE2EA3519A1B91F55A35E8EE68EB1B27B8B1A* __this, float ___value0, const RuntimeMethod* method) 
{
	{
		// { get => Data.quad_sigma; set => Data.quad_sigma = value; }
		InternalData_t54BD4B51ACE1D50D1BE9FA821A06541C3C10D477* L_0;
		L_0 = Detector_get_Data_mA9621767612A7D74B87BA15AE53A3D0AC3949AF7(__this, NULL);
		float L_1 = ___value0;
		L_0->___quad_sigma_2 = L_1;
		return;
	}
}
// System.Int32 AprilTag.Interop.Detector::get_RefineEdges()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Detector_get_RefineEdges_mE21D0078B10A6C6B147D0819CE30B426A7E2338F (Detector_tFE9DE2EA3519A1B91F55A35E8EE68EB1B27B8B1A* __this, const RuntimeMethod* method) 
{
	{
		// { get => Data.refine_edges; set => Data.refine_edges = value; }
		InternalData_t54BD4B51ACE1D50D1BE9FA821A06541C3C10D477* L_0;
		L_0 = Detector_get_Data_mA9621767612A7D74B87BA15AE53A3D0AC3949AF7(__this, NULL);
		int32_t L_1 = L_0->___refine_edges_3;
		return L_1;
	}
}
// System.Void AprilTag.Interop.Detector::set_RefineEdges(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Detector_set_RefineEdges_mD94073342BAAC03F0FD19F6E5C4D4332B72A72F2 (Detector_tFE9DE2EA3519A1B91F55A35E8EE68EB1B27B8B1A* __this, int32_t ___value0, const RuntimeMethod* method) 
{
	{
		// { get => Data.refine_edges; set => Data.refine_edges = value; }
		InternalData_t54BD4B51ACE1D50D1BE9FA821A06541C3C10D477* L_0;
		L_0 = Detector_get_Data_mA9621767612A7D74B87BA15AE53A3D0AC3949AF7(__this, NULL);
		int32_t L_1 = ___value0;
		L_0->___refine_edges_3 = L_1;
		return;
	}
}
// System.Double AprilTag.Interop.Detector::get_DecodeSharpening()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double Detector_get_DecodeSharpening_mC5B799F27D5C3675BA48B366F7243681BB1B6F70 (Detector_tFE9DE2EA3519A1B91F55A35E8EE68EB1B27B8B1A* __this, const RuntimeMethod* method) 
{
	{
		// { get => Data.decode_sharpening; set => Data.decode_sharpening = value; }
		InternalData_t54BD4B51ACE1D50D1BE9FA821A06541C3C10D477* L_0;
		L_0 = Detector_get_Data_mA9621767612A7D74B87BA15AE53A3D0AC3949AF7(__this, NULL);
		double L_1 = L_0->___decode_sharpening_4;
		return L_1;
	}
}
// System.Void AprilTag.Interop.Detector::set_DecodeSharpening(System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Detector_set_DecodeSharpening_m1B3CA763389C2040BF65572A47397735D201029F (Detector_tFE9DE2EA3519A1B91F55A35E8EE68EB1B27B8B1A* __this, double ___value0, const RuntimeMethod* method) 
{
	{
		// { get => Data.decode_sharpening; set => Data.decode_sharpening = value; }
		InternalData_t54BD4B51ACE1D50D1BE9FA821A06541C3C10D477* L_0;
		L_0 = Detector_get_Data_mA9621767612A7D74B87BA15AE53A3D0AC3949AF7(__this, NULL);
		double L_1 = ___value0;
		L_0->___decode_sharpening_4 = L_1;
		return;
	}
}
// System.Boolean AprilTag.Interop.Detector::get_Debug()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Detector_get_Debug_mD34B72F939A93E49E557AC1C4E12440376A9D5BD (Detector_tFE9DE2EA3519A1B91F55A35E8EE68EB1B27B8B1A* __this, const RuntimeMethod* method) 
{
	{
		// { get => Data.debug != 0; set => Data.debug = value ? 1 : 0; }
		InternalData_t54BD4B51ACE1D50D1BE9FA821A06541C3C10D477* L_0;
		L_0 = Detector_get_Data_mA9621767612A7D74B87BA15AE53A3D0AC3949AF7(__this, NULL);
		int32_t L_1 = L_0->___debug_5;
		return (bool)((!(((uint32_t)L_1) <= ((uint32_t)0)))? 1 : 0);
	}
}
// System.Void AprilTag.Interop.Detector::set_Debug(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Detector_set_Debug_mA6BDA7597FEE1F14E42BEF8206F89885EAC10FAC (Detector_tFE9DE2EA3519A1B91F55A35E8EE68EB1B27B8B1A* __this, bool ___value0, const RuntimeMethod* method) 
{
	InternalData_t54BD4B51ACE1D50D1BE9FA821A06541C3C10D477* G_B2_0 = NULL;
	InternalData_t54BD4B51ACE1D50D1BE9FA821A06541C3C10D477* G_B1_0 = NULL;
	int32_t G_B3_0 = 0;
	InternalData_t54BD4B51ACE1D50D1BE9FA821A06541C3C10D477* G_B3_1 = NULL;
	{
		// { get => Data.debug != 0; set => Data.debug = value ? 1 : 0; }
		InternalData_t54BD4B51ACE1D50D1BE9FA821A06541C3C10D477* L_0;
		L_0 = Detector_get_Data_mA9621767612A7D74B87BA15AE53A3D0AC3949AF7(__this, NULL);
		bool L_1 = ___value0;
		G_B1_0 = L_0;
		if (L_1)
		{
			G_B2_0 = L_0;
			goto IL_000c;
		}
	}
	{
		G_B3_0 = 0;
		G_B3_1 = G_B1_0;
		goto IL_000d;
	}

IL_000c:
	{
		G_B3_0 = 1;
		G_B3_1 = G_B2_0;
	}

IL_000d:
	{
		G_B3_1->___debug_5 = G_B3_0;
		return;
	}
}
// AprilTag.Interop.TimeProfile& AprilTag.Interop.Detector::get_TimeProfile()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TimeProfile_tABC93C5F8A866D5F3561E53F913C48885AE9C626* Detector_get_TimeProfile_m20BB92F18E1575D3A7519FF789FC569F425851BF (Detector_tFE9DE2EA3519A1B91F55A35E8EE68EB1B27B8B1A* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Util_AsRef_TisTimeProfile_tABC93C5F8A866D5F3561E53F913C48885AE9C626_m4F68F07E8ABB11CAF0C468BBA66E8F34741E3B80_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// => ref Util.AsRef<TimeProfile>((void*)Data.tp);
		InternalData_t54BD4B51ACE1D50D1BE9FA821A06541C3C10D477* L_0;
		L_0 = Detector_get_Data_mA9621767612A7D74B87BA15AE53A3D0AC3949AF7(__this, NULL);
		intptr_t L_1 = L_0->___tp_13;
		void* L_2;
		L_2 = IntPtr_op_Explicit_m693F2F9E685EE117D4AC080342B8959DAF684294(L_1, NULL);
		TimeProfile_tABC93C5F8A866D5F3561E53F913C48885AE9C626* L_3;
		L_3 = Util_AsRef_TisTimeProfile_tABC93C5F8A866D5F3561E53F913C48885AE9C626_m4F68F07E8ABB11CAF0C468BBA66E8F34741E3B80(L_2, Util_AsRef_TisTimeProfile_tABC93C5F8A866D5F3561E53F913C48885AE9C626_m4F68F07E8ABB11CAF0C468BBA66E8F34741E3B80_RuntimeMethod_var);
		return L_3;
	}
}
// AprilTag.Interop.Detector AprilTag.Interop.Detector::Create()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Detector_tFE9DE2EA3519A1B91F55A35E8EE68EB1B27B8B1A* Detector_Create_mBDDFAA84DE2143560F3F1071EE26BB12033A83D9 (const RuntimeMethod* method) 
{
	{
		// => _Create();
		Detector_tFE9DE2EA3519A1B91F55A35E8EE68EB1B27B8B1A* L_0;
		L_0 = Detector__Create_mF2E4FD112F86A0FC77DF0088D4058A819EC342DA(NULL);
		return L_0;
	}
}
// System.Void AprilTag.Interop.Detector::AddFamily(AprilTag.Interop.Family)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Detector_AddFamily_mFDA57B5832A8ED9A436BB5810F232EC7D5C5FE5D (Detector_tFE9DE2EA3519A1B91F55A35E8EE68EB1B27B8B1A* __this, Family_t7D94F3B6A5D5FB5FC1C3359ACFC3F9F018837F29* ___family0, const RuntimeMethod* method) 
{
	{
		// => _AddFamilyBits(this, family, 2);
		Family_t7D94F3B6A5D5FB5FC1C3359ACFC3F9F018837F29* L_0 = ___family0;
		Detector__AddFamilyBits_mCECD5789F60B2000D3EC081C6773D2905D797938(__this, L_0, 2, NULL);
		return;
	}
}
// System.Void AprilTag.Interop.Detector::RemoveFamily(AprilTag.Interop.Family)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Detector_RemoveFamily_m70F37B7DFE3D3B938C23D2EA9B6CEB88AD69658C (Detector_tFE9DE2EA3519A1B91F55A35E8EE68EB1B27B8B1A* __this, Family_t7D94F3B6A5D5FB5FC1C3359ACFC3F9F018837F29* ___family0, const RuntimeMethod* method) 
{
	{
		// => _RemoveFamily(this, family);
		Family_t7D94F3B6A5D5FB5FC1C3359ACFC3F9F018837F29* L_0 = ___family0;
		Detector__RemoveFamily_mE4EFC9AD9D5B427742A1CFA6C3D1E80FB395350D(__this, L_0, NULL);
		return;
	}
}
// AprilTag.Interop.DetectionArray AprilTag.Interop.Detector::Detect(AprilTag.Interop.ImageU8)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DetectionArray_t8F5F6D9F4D35AB7935ACF076F68C4C4FCDF915A1* Detector_Detect_mBD5F04BB95F41635B2FEAAEE5A1CB3297B656E62 (Detector_tFE9DE2EA3519A1B91F55A35E8EE68EB1B27B8B1A* __this, ImageU8_t5D5B6A85A68488DA142C0E877C38D5427927F0D8* ___image0, const RuntimeMethod* method) 
{
	{
		// => _Detect(this, image);
		ImageU8_t5D5B6A85A68488DA142C0E877C38D5427927F0D8* L_0 = ___image0;
		DetectionArray_t8F5F6D9F4D35AB7935ACF076F68C4C4FCDF915A1* L_1;
		L_1 = Detector__Detect_mDFBB72FA6A105FEE0067500AB61C46FE64C1B93F(__this, L_0, NULL);
		return L_1;
	}
}
// AprilTag.Interop.Detector AprilTag.Interop.Detector::_Create()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Detector_tFE9DE2EA3519A1B91F55A35E8EE68EB1B27B8B1A* Detector__Create_mF2E4FD112F86A0FC77DF0088D4058A819EC342DA (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Detector_tFE9DE2EA3519A1B91F55A35E8EE68EB1B27B8B1A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	typedef void* (DEFAULT_CALL *PInvokeFunc) ();

	// Native function invocation
	void* returnValue = reinterpret_cast<PInvokeFunc>(apriltag_detector_create)();

	// Marshaling of return value back from native representation
	Detector_tFE9DE2EA3519A1B91F55A35E8EE68EB1B27B8B1A* _returnValue_unmarshaled = (Detector_tFE9DE2EA3519A1B91F55A35E8EE68EB1B27B8B1A*)il2cpp_codegen_object_new(Detector_tFE9DE2EA3519A1B91F55A35E8EE68EB1B27B8B1A_il2cpp_TypeInfo_var);
	Detector__ctor_m2E4A54810013E90004E0B768409DA3C971B603ED(_returnValue_unmarshaled, NULL);
	intptr_t _returnValue_unmarshaled_handle_temp;
	_returnValue_unmarshaled_handle_temp = (intptr_t)returnValue;
	(_returnValue_unmarshaled)->___handle_0 = _returnValue_unmarshaled_handle_temp;

	return _returnValue_unmarshaled;
}
// System.Void AprilTag.Interop.Detector::_Destroy(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Detector__Destroy_m8F1ACC00CFB7D622464CD752494574E9B46BC023 (intptr_t ___detector0, const RuntimeMethod* method) 
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (intptr_t);

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(apriltag_detector_destroy)(___detector0);

}
// System.Void AprilTag.Interop.Detector::_AddFamilyBits(AprilTag.Interop.Detector,AprilTag.Interop.Family,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Detector__AddFamilyBits_mCECD5789F60B2000D3EC081C6773D2905D797938 (Detector_tFE9DE2EA3519A1B91F55A35E8EE68EB1B27B8B1A* ___detector0, Family_t7D94F3B6A5D5FB5FC1C3359ACFC3F9F018837F29* ___family1, int32_t ___correctedBits2, const RuntimeMethod* method) 
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (void*, void*, int32_t);

	// Marshaling of parameter '___detector0' to native representation
	void* ____detector0_marshaled = NULL;
	if (___detector0 == NULL) IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_argument_null_exception("detector"), NULL);
	bool ___safeHandle_reference_incremented_for____detector0 = false;
	SafeHandle_DangerousAddRef_m9FA46208A92D8B33059B8E8712F49AE45BB5E922(___detector0, (&___safeHandle_reference_incremented_for____detector0), NULL);
	____detector0_marshaled = reinterpret_cast<void*>((___detector0)->___handle_0);

	// Marshaling of parameter '___family1' to native representation
	void* ____family1_marshaled = NULL;
	if (___family1 == NULL) IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_argument_null_exception("family"), NULL);
	bool ___safeHandle_reference_incremented_for____family1 = false;
	SafeHandle_DangerousAddRef_m9FA46208A92D8B33059B8E8712F49AE45BB5E922(___family1, (&___safeHandle_reference_incremented_for____family1), NULL);
	____family1_marshaled = reinterpret_cast<void*>((___family1)->___handle_0);

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(apriltag_detector_add_family_bits)(____detector0_marshaled, ____family1_marshaled, ___correctedBits2);

	// Marshaling cleanup of parameter '___detector0' native representation
	if (___safeHandle_reference_incremented_for____detector0)
	{
		SafeHandle_DangerousRelease_m30A8B4E5BEA935C8925BC2115CD0AD13B937953E(___detector0, NULL);
	}

	// Marshaling cleanup of parameter '___family1' native representation
	if (___safeHandle_reference_incremented_for____family1)
	{
		SafeHandle_DangerousRelease_m30A8B4E5BEA935C8925BC2115CD0AD13B937953E(___family1, NULL);
	}

}
// System.Void AprilTag.Interop.Detector::_RemoveFamily(AprilTag.Interop.Detector,AprilTag.Interop.Family)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Detector__RemoveFamily_mE4EFC9AD9D5B427742A1CFA6C3D1E80FB395350D (Detector_tFE9DE2EA3519A1B91F55A35E8EE68EB1B27B8B1A* ___detector0, Family_t7D94F3B6A5D5FB5FC1C3359ACFC3F9F018837F29* ___family1, const RuntimeMethod* method) 
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (void*, void*);

	// Marshaling of parameter '___detector0' to native representation
	void* ____detector0_marshaled = NULL;
	if (___detector0 == NULL) IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_argument_null_exception("detector"), NULL);
	bool ___safeHandle_reference_incremented_for____detector0 = false;
	SafeHandle_DangerousAddRef_m9FA46208A92D8B33059B8E8712F49AE45BB5E922(___detector0, (&___safeHandle_reference_incremented_for____detector0), NULL);
	____detector0_marshaled = reinterpret_cast<void*>((___detector0)->___handle_0);

	// Marshaling of parameter '___family1' to native representation
	void* ____family1_marshaled = NULL;
	if (___family1 == NULL) IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_argument_null_exception("family"), NULL);
	bool ___safeHandle_reference_incremented_for____family1 = false;
	SafeHandle_DangerousAddRef_m9FA46208A92D8B33059B8E8712F49AE45BB5E922(___family1, (&___safeHandle_reference_incremented_for____family1), NULL);
	____family1_marshaled = reinterpret_cast<void*>((___family1)->___handle_0);

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(apriltag_detector_remove_family)(____detector0_marshaled, ____family1_marshaled);

	// Marshaling cleanup of parameter '___detector0' native representation
	if (___safeHandle_reference_incremented_for____detector0)
	{
		SafeHandle_DangerousRelease_m30A8B4E5BEA935C8925BC2115CD0AD13B937953E(___detector0, NULL);
	}

	// Marshaling cleanup of parameter '___family1' native representation
	if (___safeHandle_reference_incremented_for____family1)
	{
		SafeHandle_DangerousRelease_m30A8B4E5BEA935C8925BC2115CD0AD13B937953E(___family1, NULL);
	}

}
// AprilTag.Interop.DetectionArray AprilTag.Interop.Detector::_Detect(AprilTag.Interop.Detector,AprilTag.Interop.ImageU8)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DetectionArray_t8F5F6D9F4D35AB7935ACF076F68C4C4FCDF915A1* Detector__Detect_mDFBB72FA6A105FEE0067500AB61C46FE64C1B93F (Detector_tFE9DE2EA3519A1B91F55A35E8EE68EB1B27B8B1A* ___detector0, ImageU8_t5D5B6A85A68488DA142C0E877C38D5427927F0D8* ___image1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DetectionArray_t8F5F6D9F4D35AB7935ACF076F68C4C4FCDF915A1_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	typedef void* (DEFAULT_CALL *PInvokeFunc) (void*, void*);

	// Marshaling of parameter '___detector0' to native representation
	void* ____detector0_marshaled = NULL;
	if (___detector0 == NULL) IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_argument_null_exception("detector"), NULL);
	bool ___safeHandle_reference_incremented_for____detector0 = false;
	SafeHandle_DangerousAddRef_m9FA46208A92D8B33059B8E8712F49AE45BB5E922(___detector0, (&___safeHandle_reference_incremented_for____detector0), NULL);
	____detector0_marshaled = reinterpret_cast<void*>((___detector0)->___handle_0);

	// Marshaling of parameter '___image1' to native representation
	void* ____image1_marshaled = NULL;
	if (___image1 == NULL) IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_argument_null_exception("image"), NULL);
	bool ___safeHandle_reference_incremented_for____image1 = false;
	SafeHandle_DangerousAddRef_m9FA46208A92D8B33059B8E8712F49AE45BB5E922(___image1, (&___safeHandle_reference_incremented_for____image1), NULL);
	____image1_marshaled = reinterpret_cast<void*>((___image1)->___handle_0);

	// Native function invocation
	void* returnValue = reinterpret_cast<PInvokeFunc>(apriltag_detector_detect)(____detector0_marshaled, ____image1_marshaled);

	// Marshaling of return value back from native representation
	DetectionArray_t8F5F6D9F4D35AB7935ACF076F68C4C4FCDF915A1* _returnValue_unmarshaled = (DetectionArray_t8F5F6D9F4D35AB7935ACF076F68C4C4FCDF915A1*)il2cpp_codegen_object_new(DetectionArray_t8F5F6D9F4D35AB7935ACF076F68C4C4FCDF915A1_il2cpp_TypeInfo_var);
	DetectionArray__ctor_m69EC74F583EBBB6DE157894F19F5A208ABD974A9(_returnValue_unmarshaled, NULL);
	intptr_t _returnValue_unmarshaled_handle_temp;
	_returnValue_unmarshaled_handle_temp = (intptr_t)returnValue;
	(_returnValue_unmarshaled)->___handle_0 = _returnValue_unmarshaled_handle_temp;

	// Marshaling cleanup of parameter '___detector0' native representation
	if (___safeHandle_reference_incremented_for____detector0)
	{
		SafeHandle_DangerousRelease_m30A8B4E5BEA935C8925BC2115CD0AD13B937953E(___detector0, NULL);
	}

	// Marshaling cleanup of parameter '___image1' native representation
	if (___safeHandle_reference_incremented_for____image1)
	{
		SafeHandle_DangerousRelease_m30A8B4E5BEA935C8925BC2115CD0AD13B937953E(___image1, NULL);
	}

	return _returnValue_unmarshaled;
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
// System.Void AprilTag.Interop.Family::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Family__ctor_mCCAB37892CACF4BD9348010F1A114F889422702F (Family_t7D94F3B6A5D5FB5FC1C3359ACFC3F9F018837F29* __this, const RuntimeMethod* method) 
{
	{
		// Family() : base(true) {}
		SafeHandleZeroOrMinusOneIsInvalid__ctor_m9BA85F78EC25654EE170CA999EC379D9A4B59B89(__this, (bool)1, NULL);
		// Family() : base(true) {}
		return;
	}
}
// System.Boolean AprilTag.Interop.Family::ReleaseHandle()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Family_ReleaseHandle_m8589C4BDBF6C3DC68F37B121E8BB317FB140BB20 (Family_t7D94F3B6A5D5FB5FC1C3359ACFC3F9F018837F29* __this, const RuntimeMethod* method) 
{
	{
		// _DestroyTagStandard41h12(handle);
		intptr_t L_0 = ((SafeHandle_tC1A4DA80DA89B867CC011B707A07275230321BF7*)__this)->___handle_0;
		Family__DestroyTagStandard41h12_m779BE0399BC92CA1FD76B7816C992037B071BAB8(L_0, NULL);
		// return true;
		return (bool)1;
	}
}
// AprilTag.Interop.Family AprilTag.Interop.Family::CreateTagStandard41h12()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Family_t7D94F3B6A5D5FB5FC1C3359ACFC3F9F018837F29* Family_CreateTagStandard41h12_m8997F03F743B7113B1B27722DB84B5D49EB20D1E (const RuntimeMethod* method) 
{
	{
		// => _CreateTagStandard41h12();
		Family_t7D94F3B6A5D5FB5FC1C3359ACFC3F9F018837F29* L_0;
		L_0 = Family__CreateTagStandard41h12_m6D10403988E967C402EEE072C29285AB800230BE(NULL);
		return L_0;
	}
}
// AprilTag.Interop.Family AprilTag.Interop.Family::_CreateTagStandard41h12()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Family_t7D94F3B6A5D5FB5FC1C3359ACFC3F9F018837F29* Family__CreateTagStandard41h12_m6D10403988E967C402EEE072C29285AB800230BE (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Family_t7D94F3B6A5D5FB5FC1C3359ACFC3F9F018837F29_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	typedef void* (DEFAULT_CALL *PInvokeFunc) ();

	// Native function invocation
	void* returnValue = reinterpret_cast<PInvokeFunc>(tagStandard41h12_create)();

	// Marshaling of return value back from native representation
	Family_t7D94F3B6A5D5FB5FC1C3359ACFC3F9F018837F29* _returnValue_unmarshaled = (Family_t7D94F3B6A5D5FB5FC1C3359ACFC3F9F018837F29*)il2cpp_codegen_object_new(Family_t7D94F3B6A5D5FB5FC1C3359ACFC3F9F018837F29_il2cpp_TypeInfo_var);
	Family__ctor_mCCAB37892CACF4BD9348010F1A114F889422702F(_returnValue_unmarshaled, NULL);
	intptr_t _returnValue_unmarshaled_handle_temp;
	_returnValue_unmarshaled_handle_temp = (intptr_t)returnValue;
	(_returnValue_unmarshaled)->___handle_0 = _returnValue_unmarshaled_handle_temp;

	return _returnValue_unmarshaled;
}
// System.Void AprilTag.Interop.Family::_DestroyTagStandard41h12(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Family__DestroyTagStandard41h12_m779BE0399BC92CA1FD76B7816C992037B071BAB8 (intptr_t ___ptr0, const RuntimeMethod* method) 
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (intptr_t);

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(tagStandard41h12_destroy)(___ptr0);

}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void AprilTag.Interop.ImageU8::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ImageU8__ctor_m67262A9C7EDEA24F0E5FDDC0DBC00D15CAC3CA46 (ImageU8_t5D5B6A85A68488DA142C0E877C38D5427927F0D8* __this, const RuntimeMethod* method) 
{
	{
		// ImageU8() : base(true) {}
		SafeHandleZeroOrMinusOneIsInvalid__ctor_m9BA85F78EC25654EE170CA999EC379D9A4B59B89(__this, (bool)1, NULL);
		// ImageU8() : base(true) {}
		return;
	}
}
// System.Boolean AprilTag.Interop.ImageU8::ReleaseHandle()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ImageU8_ReleaseHandle_mCDC4C02CEB6B47253A1999EC45C292260D3F32D7 (ImageU8_t5D5B6A85A68488DA142C0E877C38D5427927F0D8* __this, const RuntimeMethod* method) 
{
	{
		// _Destroy(handle);
		intptr_t L_0 = ((SafeHandle_tC1A4DA80DA89B867CC011B707A07275230321BF7*)__this)->___handle_0;
		ImageU8__Destroy_mA0FEC72A9B611B0E77E650F9EE04D4574BB90ADA(L_0, NULL);
		// return true;
		return (bool)1;
	}
}
// AprilTag.Interop.ImageU8/InternalData& AprilTag.Interop.ImageU8::get_Data()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR InternalData_tEA74FE54ECC9BD8CAAD20E3A6C6EC7A83CA5119E* ImageU8_get_Data_m5E422BEA3602FA80617EA53379BD68534ACAE5A3 (ImageU8_t5D5B6A85A68488DA142C0E877C38D5427927F0D8* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Util_AsRef_TisInternalData_tEA74FE54ECC9BD8CAAD20E3A6C6EC7A83CA5119E_m48462DBBAFBD01BFB99707D5BAB9450C3C976A69_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// => ref Util.AsRef<InternalData>((void*)handle);
		intptr_t L_0 = ((SafeHandle_tC1A4DA80DA89B867CC011B707A07275230321BF7*)__this)->___handle_0;
		void* L_1;
		L_1 = IntPtr_op_Explicit_m693F2F9E685EE117D4AC080342B8959DAF684294(L_0, NULL);
		InternalData_tEA74FE54ECC9BD8CAAD20E3A6C6EC7A83CA5119E* L_2;
		L_2 = Util_AsRef_TisInternalData_tEA74FE54ECC9BD8CAAD20E3A6C6EC7A83CA5119E_m48462DBBAFBD01BFB99707D5BAB9450C3C976A69(L_1, Util_AsRef_TisInternalData_tEA74FE54ECC9BD8CAAD20E3A6C6EC7A83CA5119E_m48462DBBAFBD01BFB99707D5BAB9450C3C976A69_RuntimeMethod_var);
		return L_2;
	}
}
// System.Int32 AprilTag.Interop.ImageU8::get_Width()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ImageU8_get_Width_m1A2B5125DFA09F67EE85B346DA098A8A527FDEF0 (ImageU8_t5D5B6A85A68488DA142C0E877C38D5427927F0D8* __this, const RuntimeMethod* method) 
{
	{
		// public int Width => Data.width;
		InternalData_tEA74FE54ECC9BD8CAAD20E3A6C6EC7A83CA5119E* L_0;
		L_0 = ImageU8_get_Data_m5E422BEA3602FA80617EA53379BD68534ACAE5A3(__this, NULL);
		int32_t L_1 = L_0->___width_0;
		return L_1;
	}
}
// System.Int32 AprilTag.Interop.ImageU8::get_Height()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ImageU8_get_Height_mEE3A5DF4F711252F2B5E4A9FEE1D814AEEEC2439 (ImageU8_t5D5B6A85A68488DA142C0E877C38D5427927F0D8* __this, const RuntimeMethod* method) 
{
	{
		// public int Height => Data.height;
		InternalData_tEA74FE54ECC9BD8CAAD20E3A6C6EC7A83CA5119E* L_0;
		L_0 = ImageU8_get_Data_m5E422BEA3602FA80617EA53379BD68534ACAE5A3(__this, NULL);
		int32_t L_1 = L_0->___height_1;
		return L_1;
	}
}
// System.Int32 AprilTag.Interop.ImageU8::get_Stride()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ImageU8_get_Stride_mAA8708780FE91817E80BEAD4DDD0094A24DD1936 (ImageU8_t5D5B6A85A68488DA142C0E877C38D5427927F0D8* __this, const RuntimeMethod* method) 
{
	{
		// public int Stride => Data.stride;
		InternalData_tEA74FE54ECC9BD8CAAD20E3A6C6EC7A83CA5119E* L_0;
		L_0 = ImageU8_get_Data_m5E422BEA3602FA80617EA53379BD68534ACAE5A3(__this, NULL);
		int32_t L_1 = L_0->___stride_2;
		return L_1;
	}
}
// System.Span`1<System.Byte> AprilTag.Interop.ImageU8::get_Buffer()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 ImageU8_get_Buffer_m041F302D5E700EF81A9727E99020ADA9F2EC391E (ImageU8_t5D5B6A85A68488DA142C0E877C38D5427927F0D8* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Span_1__ctor_mE18EBB601FBFA01BA29FE353364700952A9091FE_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// => new Span<byte>((void*)Data.buf, Stride * Height);
		InternalData_tEA74FE54ECC9BD8CAAD20E3A6C6EC7A83CA5119E* L_0;
		L_0 = ImageU8_get_Data_m5E422BEA3602FA80617EA53379BD68534ACAE5A3(__this, NULL);
		intptr_t L_1 = L_0->___buf_3;
		void* L_2;
		L_2 = IntPtr_op_Explicit_m693F2F9E685EE117D4AC080342B8959DAF684294(L_1, NULL);
		int32_t L_3;
		L_3 = ImageU8_get_Stride_mAA8708780FE91817E80BEAD4DDD0094A24DD1936(__this, NULL);
		int32_t L_4;
		L_4 = ImageU8_get_Height_mEE3A5DF4F711252F2B5E4A9FEE1D814AEEEC2439(__this, NULL);
		Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 L_5;
		memset((&L_5), 0, sizeof(L_5));
		Span_1__ctor_mE18EBB601FBFA01BA29FE353364700952A9091FE_inline((&L_5), L_2, ((int32_t)il2cpp_codegen_multiply(L_3, L_4)), /*hidden argument*/Span_1__ctor_mE18EBB601FBFA01BA29FE353364700952A9091FE_RuntimeMethod_var);
		return L_5;
	}
}
// AprilTag.Interop.ImageU8 AprilTag.Interop.ImageU8::Create(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ImageU8_t5D5B6A85A68488DA142C0E877C38D5427927F0D8* ImageU8_Create_m03A3DB17EA3B952AD6092609219349BD604CC4B6 (int32_t ___width0, int32_t ___height1, const RuntimeMethod* method) 
{
	{
		// => _Create((uint)width, (uint)height);
		int32_t L_0 = ___width0;
		int32_t L_1 = ___height1;
		ImageU8_t5D5B6A85A68488DA142C0E877C38D5427927F0D8* L_2;
		L_2 = ImageU8__Create_m361B9DF18B61B7E3A3C101FE94B611F3A3C5BC24(L_0, L_1, NULL);
		return L_2;
	}
}
// AprilTag.Interop.ImageU8 AprilTag.Interop.ImageU8::_CreateStride(System.UInt32,System.UInt32,System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ImageU8_t5D5B6A85A68488DA142C0E877C38D5427927F0D8* ImageU8__CreateStride_m621704F84F3CE3FE986FB18D907C444C4CA723A6 (uint32_t ___width0, uint32_t ___height1, uint32_t ___stride2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ImageU8_t5D5B6A85A68488DA142C0E877C38D5427927F0D8_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	typedef void* (DEFAULT_CALL *PInvokeFunc) (uint32_t, uint32_t, uint32_t);

	// Native function invocation
	void* returnValue = reinterpret_cast<PInvokeFunc>(image_u8_create_stride)(___width0, ___height1, ___stride2);

	// Marshaling of return value back from native representation
	ImageU8_t5D5B6A85A68488DA142C0E877C38D5427927F0D8* _returnValue_unmarshaled = (ImageU8_t5D5B6A85A68488DA142C0E877C38D5427927F0D8*)il2cpp_codegen_object_new(ImageU8_t5D5B6A85A68488DA142C0E877C38D5427927F0D8_il2cpp_TypeInfo_var);
	ImageU8__ctor_m67262A9C7EDEA24F0E5FDDC0DBC00D15CAC3CA46(_returnValue_unmarshaled, NULL);
	intptr_t _returnValue_unmarshaled_handle_temp;
	_returnValue_unmarshaled_handle_temp = (intptr_t)returnValue;
	(_returnValue_unmarshaled)->___handle_0 = _returnValue_unmarshaled_handle_temp;

	return _returnValue_unmarshaled;
}
// AprilTag.Interop.ImageU8 AprilTag.Interop.ImageU8::_Create(System.UInt32,System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ImageU8_t5D5B6A85A68488DA142C0E877C38D5427927F0D8* ImageU8__Create_m361B9DF18B61B7E3A3C101FE94B611F3A3C5BC24 (uint32_t ___width0, uint32_t ___height1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ImageU8_t5D5B6A85A68488DA142C0E877C38D5427927F0D8_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	typedef void* (DEFAULT_CALL *PInvokeFunc) (uint32_t, uint32_t);

	// Native function invocation
	void* returnValue = reinterpret_cast<PInvokeFunc>(image_u8_create)(___width0, ___height1);

	// Marshaling of return value back from native representation
	ImageU8_t5D5B6A85A68488DA142C0E877C38D5427927F0D8* _returnValue_unmarshaled = (ImageU8_t5D5B6A85A68488DA142C0E877C38D5427927F0D8*)il2cpp_codegen_object_new(ImageU8_t5D5B6A85A68488DA142C0E877C38D5427927F0D8_il2cpp_TypeInfo_var);
	ImageU8__ctor_m67262A9C7EDEA24F0E5FDDC0DBC00D15CAC3CA46(_returnValue_unmarshaled, NULL);
	intptr_t _returnValue_unmarshaled_handle_temp;
	_returnValue_unmarshaled_handle_temp = (intptr_t)returnValue;
	(_returnValue_unmarshaled)->___handle_0 = _returnValue_unmarshaled_handle_temp;

	return _returnValue_unmarshaled;
}
// System.Void AprilTag.Interop.ImageU8::_Destroy(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ImageU8__Destroy_mA0FEC72A9B611B0E77E650F9EE04D4574BB90ADA (intptr_t ___image0, const RuntimeMethod* method) 
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (intptr_t);

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(image_u8_destroy)(___image0);

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
// AprilTag.Interop.Matd3x3& AprilTag.Interop.Pose::get_R()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Matd3x3_t00E5B51BA77383D28CBEC1E5972F225862672883* Pose_get_R_m36B474543FBCC85C62525664F930D47C8EAD841B (Pose_t20909DD795F365496D5FF3EA8D7A14A812C04238* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Util_AsRef_TisMatd3x3_t00E5B51BA77383D28CBEC1E5972F225862672883_mF9678EAA50B09463FFC5198B4467CDAADC375491_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// unsafe public ref Matd3x3 R => ref Util.AsRef<Matd3x3>((void*)matd_r);
		intptr_t L_0 = __this->___matd_r_0;
		void* L_1;
		L_1 = IntPtr_op_Explicit_m693F2F9E685EE117D4AC080342B8959DAF684294(L_0, NULL);
		Matd3x3_t00E5B51BA77383D28CBEC1E5972F225862672883* L_2;
		L_2 = Util_AsRef_TisMatd3x3_t00E5B51BA77383D28CBEC1E5972F225862672883_mF9678EAA50B09463FFC5198B4467CDAADC375491(L_1, Util_AsRef_TisMatd3x3_t00E5B51BA77383D28CBEC1E5972F225862672883_mF9678EAA50B09463FFC5198B4467CDAADC375491_RuntimeMethod_var);
		return L_2;
	}
}
IL2CPP_EXTERN_C  Matd3x3_t00E5B51BA77383D28CBEC1E5972F225862672883* Pose_get_R_m36B474543FBCC85C62525664F930D47C8EAD841B_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	Pose_t20909DD795F365496D5FF3EA8D7A14A812C04238* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<Pose_t20909DD795F365496D5FF3EA8D7A14A812C04238*>(__this + _offset);
	Matd3x3_t00E5B51BA77383D28CBEC1E5972F225862672883* _returnValue;
	_returnValue = Pose_get_R_m36B474543FBCC85C62525664F930D47C8EAD841B(_thisAdjusted, method);
	return _returnValue;
}
// AprilTag.Interop.Matd3x1& AprilTag.Interop.Pose::get_t()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Matd3x1_t3F60BCA738901CC33975651BDC7166D84C9CF347* Pose_get_t_m20731AAD07A84596F793FD2557F4C5261EA80770 (Pose_t20909DD795F365496D5FF3EA8D7A14A812C04238* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Util_AsRef_TisMatd3x1_t3F60BCA738901CC33975651BDC7166D84C9CF347_m604186F4598F174F7FF3F921E64634D3843F14F4_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// unsafe public ref Matd3x1 t => ref Util.AsRef<Matd3x1>((void*)matd_t);
		intptr_t L_0 = __this->___matd_t_1;
		void* L_1;
		L_1 = IntPtr_op_Explicit_m693F2F9E685EE117D4AC080342B8959DAF684294(L_0, NULL);
		Matd3x1_t3F60BCA738901CC33975651BDC7166D84C9CF347* L_2;
		L_2 = Util_AsRef_TisMatd3x1_t3F60BCA738901CC33975651BDC7166D84C9CF347_m604186F4598F174F7FF3F921E64634D3843F14F4(L_1, Util_AsRef_TisMatd3x1_t3F60BCA738901CC33975651BDC7166D84C9CF347_m604186F4598F174F7FF3F921E64634D3843F14F4_RuntimeMethod_var);
		return L_2;
	}
}
IL2CPP_EXTERN_C  Matd3x1_t3F60BCA738901CC33975651BDC7166D84C9CF347* Pose_get_t_m20731AAD07A84596F793FD2557F4C5261EA80770_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	Pose_t20909DD795F365496D5FF3EA8D7A14A812C04238* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<Pose_t20909DD795F365496D5FF3EA8D7A14A812C04238*>(__this + _offset);
	Matd3x1_t3F60BCA738901CC33975651BDC7166D84C9CF347* _returnValue;
	_returnValue = Pose_get_t_m20731AAD07A84596F793FD2557F4C5261EA80770(_thisAdjusted, method);
	return _returnValue;
}
// System.Void AprilTag.Interop.Pose::.ctor(AprilTag.Interop.DetectionInfo&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Pose__ctor_m697F12A51872ED249002986CB6C86772521E7723 (Pose_t20909DD795F365496D5FF3EA8D7A14A812C04238* __this, DetectionInfo_tB74A7A3EC1D7E0160DFA0D90CF7F7F4715A64162* ___info0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	intptr_t V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// matd_r = matd_t = IntPtr.Zero;
		intptr_t L_0 = (0);
		V_0 = L_0;
		__this->___matd_t_1 = L_0;
		intptr_t L_1 = V_0;
		__this->___matd_r_0 = L_1;
		// _Estimate(ref info, ref this);
		DetectionInfo_tB74A7A3EC1D7E0160DFA0D90CF7F7F4715A64162* L_2 = ___info0;
		double L_3;
		L_3 = Pose__Estimate_m5437F623891D38DEEA2C60697FA1F740D424D668(L_2, __this, NULL);
		// }
		return;
	}
}
IL2CPP_EXTERN_C  void Pose__ctor_m697F12A51872ED249002986CB6C86772521E7723_AdjustorThunk (RuntimeObject* __this, DetectionInfo_tB74A7A3EC1D7E0160DFA0D90CF7F7F4715A64162* ___info0, const RuntimeMethod* method)
{
	Pose_t20909DD795F365496D5FF3EA8D7A14A812C04238* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<Pose_t20909DD795F365496D5FF3EA8D7A14A812C04238*>(__this + _offset);
	Pose__ctor_m697F12A51872ED249002986CB6C86772521E7723(_thisAdjusted, ___info0, method);
}
// System.Void AprilTag.Interop.Pose::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Pose_Dispose_mB85F3B23A0F8B8646E6D17914B3B7F84706795ED (Pose_t20909DD795F365496D5FF3EA8D7A14A812C04238* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	intptr_t V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// if (matd_r != IntPtr.Zero) _MatdDestroy(matd_r);
		intptr_t L_0 = __this->___matd_r_0;
		bool L_1;
		L_1 = IntPtr_op_Inequality_m2F715312CBFCE7E1A81D0689F68B97218E37E5D1(L_0, (0), NULL);
		if (!L_1)
		{
			goto IL_001d;
		}
	}
	{
		// if (matd_r != IntPtr.Zero) _MatdDestroy(matd_r);
		intptr_t L_2 = __this->___matd_r_0;
		Pose__MatdDestroy_mFC35EFD85254B5FACC2677D20D919C3098103BCC(L_2, NULL);
	}

IL_001d:
	{
		// if (matd_t != IntPtr.Zero) _MatdDestroy(matd_t);
		intptr_t L_3 = __this->___matd_t_1;
		bool L_4;
		L_4 = IntPtr_op_Inequality_m2F715312CBFCE7E1A81D0689F68B97218E37E5D1(L_3, (0), NULL);
		if (!L_4)
		{
			goto IL_003a;
		}
	}
	{
		// if (matd_t != IntPtr.Zero) _MatdDestroy(matd_t);
		intptr_t L_5 = __this->___matd_t_1;
		Pose__MatdDestroy_mFC35EFD85254B5FACC2677D20D919C3098103BCC(L_5, NULL);
	}

IL_003a:
	{
		// matd_r = matd_t = IntPtr.Zero;
		intptr_t L_6 = (0);
		V_0 = L_6;
		__this->___matd_t_1 = L_6;
		intptr_t L_7 = V_0;
		__this->___matd_r_0 = L_7;
		// }
		return;
	}
}
IL2CPP_EXTERN_C  void Pose_Dispose_mB85F3B23A0F8B8646E6D17914B3B7F84706795ED_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	Pose_t20909DD795F365496D5FF3EA8D7A14A812C04238* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<Pose_t20909DD795F365496D5FF3EA8D7A14A812C04238*>(__this + _offset);
	Pose_Dispose_mB85F3B23A0F8B8646E6D17914B3B7F84706795ED(_thisAdjusted, method);
}
// System.Void AprilTag.Interop.Pose::_MatdDestroy(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Pose__MatdDestroy_mFC35EFD85254B5FACC2677D20D919C3098103BCC (intptr_t ___matd0, const RuntimeMethod* method) 
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (intptr_t);

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(matd_destroy)(___matd0);

}
// System.Double AprilTag.Interop.Pose::_Estimate(AprilTag.Interop.DetectionInfo&,AprilTag.Interop.Pose&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double Pose__Estimate_m5437F623891D38DEEA2C60697FA1F740D424D668 (DetectionInfo_tB74A7A3EC1D7E0160DFA0D90CF7F7F4715A64162* ___info0, Pose_t20909DD795F365496D5FF3EA8D7A14A812C04238* ___pose1, const RuntimeMethod* method) 
{
	typedef double (DEFAULT_CALL *PInvokeFunc) (DetectionInfo_tB74A7A3EC1D7E0160DFA0D90CF7F7F4715A64162*, Pose_t20909DD795F365496D5FF3EA8D7A14A812C04238*);

	// Native function invocation
	double returnValue = reinterpret_cast<PInvokeFunc>(estimate_tag_pose)(___info0, ___pose1);

	return returnValue;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.String AprilTag.Interop.TimeProfileEntry::get_Name()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* TimeProfileEntry_get_Name_m7523C90D14530E20006AEAC3CA9BD9DE79BC7FD4 (TimeProfileEntry_t6DA6F7F2A383FC741B1C2F4C623E1CFF2E070EC5* __this, const RuntimeMethod* method) 
{
	{
		// public string Name => ConvertName();
		String_t* L_0;
		L_0 = TimeProfileEntry_ConvertName_m51BDE1059C630986FB8F01500A7D89BC05A9F841(__this, NULL);
		return L_0;
	}
}
IL2CPP_EXTERN_C  String_t* TimeProfileEntry_get_Name_m7523C90D14530E20006AEAC3CA9BD9DE79BC7FD4_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	TimeProfileEntry_t6DA6F7F2A383FC741B1C2F4C623E1CFF2E070EC5* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<TimeProfileEntry_t6DA6F7F2A383FC741B1C2F4C623E1CFF2E070EC5*>(__this + _offset);
	String_t* _returnValue;
	_returnValue = TimeProfileEntry_get_Name_m7523C90D14530E20006AEAC3CA9BD9DE79BC7FD4(_thisAdjusted, method);
	return _returnValue;
}
// System.Int64 AprilTag.Interop.TimeProfileEntry::get_UTime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t TimeProfileEntry_get_UTime_mCD71B4AA19A81B7BB9DDE5E10BB5369508F62B58 (TimeProfileEntry_t6DA6F7F2A383FC741B1C2F4C623E1CFF2E070EC5* __this, const RuntimeMethod* method) 
{
	{
		// public long UTime => utime;
		int64_t L_0 = __this->___utime_1;
		return L_0;
	}
}
IL2CPP_EXTERN_C  int64_t TimeProfileEntry_get_UTime_mCD71B4AA19A81B7BB9DDE5E10BB5369508F62B58_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	TimeProfileEntry_t6DA6F7F2A383FC741B1C2F4C623E1CFF2E070EC5* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<TimeProfileEntry_t6DA6F7F2A383FC741B1C2F4C623E1CFF2E070EC5*>(__this + _offset);
	int64_t _returnValue;
	_returnValue = TimeProfileEntry_get_UTime_mCD71B4AA19A81B7BB9DDE5E10BB5369508F62B58_inline(_thisAdjusted, method);
	return _returnValue;
}
// System.String AprilTag.Interop.TimeProfileEntry::ConvertName()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* TimeProfileEntry_ConvertName_m51BDE1059C630986FB8F01500A7D89BC05A9F841 (TimeProfileEntry_t6DA6F7F2A383FC741B1C2F4C623E1CFF2E070EC5* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Marshal_tD976A56A90263C3CE2B780D4B1CADADE2E70B4A7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	uint8_t* V_0 = NULL;
	{
		// {
		U3CnameU3Ee__FixedBuffer_tD80CC73232F2C346304BF6B2EABBC593107B0277* L_0 = (&__this->___name_0);
		uint8_t* L_1 = (&L_0->___FixedElementField_0);
		V_0 = L_1;
		// fixed (byte* p = name) return Marshal.PtrToStringAnsi((IntPtr)p);
		uint8_t* L_2 = V_0;
		// fixed (byte* p = name) return Marshal.PtrToStringAnsi((IntPtr)p);
		intptr_t L_3;
		L_3 = IntPtr_op_Explicit_m04BEF6277775C13DD8A986812AAA3FCEC32DCCBE((void*)((uintptr_t)L_2), NULL);
		il2cpp_codegen_runtime_class_init_inline(Marshal_tD976A56A90263C3CE2B780D4B1CADADE2E70B4A7_il2cpp_TypeInfo_var);
		String_t* L_4;
		L_4 = Marshal_PtrToStringAnsi_m86CDF46D9E4810BD7DB9BB52C1036E24A7DD46EE(L_3, NULL);
		return L_4;
	}
}
IL2CPP_EXTERN_C  String_t* TimeProfileEntry_ConvertName_m51BDE1059C630986FB8F01500A7D89BC05A9F841_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	TimeProfileEntry_t6DA6F7F2A383FC741B1C2F4C623E1CFF2E070EC5* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<TimeProfileEntry_t6DA6F7F2A383FC741B1C2F4C623E1CFF2E070EC5*>(__this + _offset);
	String_t* _returnValue;
	_returnValue = TimeProfileEntry_ConvertName_m51BDE1059C630986FB8F01500A7D89BC05A9F841(_thisAdjusted, method);
	return _returnValue;
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
// System.Int64 AprilTag.Interop.TimeProfile::get_UTime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t TimeProfile_get_UTime_m7F71F3D5CD12A38A9868C4FF1838DA591A0E6998 (TimeProfile_tABC93C5F8A866D5F3561E53F913C48885AE9C626* __this, const RuntimeMethod* method) 
{
	{
		// public long UTime => utime;
		int64_t L_0 = __this->___utime_0;
		return L_0;
	}
}
IL2CPP_EXTERN_C  int64_t TimeProfile_get_UTime_m7F71F3D5CD12A38A9868C4FF1838DA591A0E6998_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	TimeProfile_tABC93C5F8A866D5F3561E53F913C48885AE9C626* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<TimeProfile_tABC93C5F8A866D5F3561E53F913C48885AE9C626*>(__this + _offset);
	int64_t _returnValue;
	_returnValue = TimeProfile_get_UTime_m7F71F3D5CD12A38A9868C4FF1838DA591A0E6998_inline(_thisAdjusted, method);
	return _returnValue;
}
// System.Span`1<AprilTag.Interop.TimeProfileEntry> AprilTag.Interop.TimeProfile::get_Stamps()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Span_1_tF932EE1F0D4B7A62DA3C00158F42DFEEE51A1E49 TimeProfile_get_Stamps_m5E7E920472AE7067D874AFBAF36DB5FF9BEB3510 (TimeProfile_tABC93C5F8A866D5F3561E53F913C48885AE9C626* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ZArray_1_get_AsSpan_m9A33D353B79649B37CED0768BC228C2F7F382781_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// => ((ZArray<TimeProfileEntry>*)stamps)->AsSpan;
		intptr_t L_0 = __this->___stamps_1;
		void* L_1;
		L_1 = IntPtr_op_Explicit_m693F2F9E685EE117D4AC080342B8959DAF684294(L_0, NULL);
		Span_1_tF932EE1F0D4B7A62DA3C00158F42DFEEE51A1E49 L_2;
		L_2 = ZArray_1_get_AsSpan_m9A33D353B79649B37CED0768BC228C2F7F382781((ZArray_1_t329BDA8FEF7F1E9C3515198987CF8AA6AEB9938B*)L_1, ZArray_1_get_AsSpan_m9A33D353B79649B37CED0768BC228C2F7F382781_RuntimeMethod_var);
		return L_2;
	}
}
IL2CPP_EXTERN_C  Span_1_tF932EE1F0D4B7A62DA3C00158F42DFEEE51A1E49 TimeProfile_get_Stamps_m5E7E920472AE7067D874AFBAF36DB5FF9BEB3510_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	TimeProfile_tABC93C5F8A866D5F3561E53F913C48885AE9C626* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<TimeProfile_tABC93C5F8A866D5F3561E53F913C48885AE9C626*>(__this + _offset);
	Span_1_tF932EE1F0D4B7A62DA3C00158F42DFEEE51A1E49 _returnValue;
	_returnValue = TimeProfile_get_Stamps_m5E7E920472AE7067D874AFBAF36DB5FF9BEB3510(_thisAdjusted, method);
	return _returnValue;
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
// System.Void $BurstDirectCallInitializer::Initialize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U24BurstDirectCallInitializer_Initialize_mE987A514BB6DC0A433C89CD47121BBD7530D5E8C (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BurstConvert_00000004U24BurstDirectCall_tA74021187A94FD4D215D4AD7BCC6F6E2A29ACF54_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(BurstConvert_00000004U24BurstDirectCall_tA74021187A94FD4D215D4AD7BCC6F6E2A29ACF54_il2cpp_TypeInfo_var);
		BurstConvert_00000004U24BurstDirectCall_Initialize_m7A94382D03EB343AAC1D61D92E42E8D027F48934(NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ImageConverter_BurstConvertU24BurstManaged_mC971E9DA121BF1A8689D82CB8C1E194DB679B924_inline (Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B* ___src0, uint8_t* ___dst1, int32_t ___width2, int32_t ___height3, int32_t ___stride4, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	{
		// var offs_src = 0;
		V_0 = 0;
		// var offs_dst = stride * (height - 1);
		int32_t L_0 = ___stride4;
		int32_t L_1 = ___height3;
		V_1 = ((int32_t)il2cpp_codegen_multiply(L_0, ((int32_t)il2cpp_codegen_subtract(L_1, 1))));
		// for (var y = 0; y < height; y++)
		V_2 = 0;
		goto IL_003e;
	}

IL_000d:
	{
		// for (var x = 0; x < width; x++)
		V_3 = 0;
		goto IL_002d;
	}

IL_0011:
	{
		// dst[offs_dst + x] = src[offs_src + x].g;
		uint8_t* L_2 = ___dst1;
		int32_t L_3 = V_1;
		int32_t L_4 = V_3;
		Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B* L_5 = ___src0;
		int32_t L_6 = V_0;
		int32_t L_7 = V_3;
		uint32_t L_8 = sizeof(Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B);
		NullCheck(((Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B*)il2cpp_codegen_add((intptr_t)L_5, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_add(L_6, L_7))), (int32_t)L_8)))));
		uint8_t L_9 = ((Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B*)il2cpp_codegen_add((intptr_t)L_5, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)((int32_t)il2cpp_codegen_add(L_6, L_7))), (int32_t)L_8))))->___g_2;
		*((int8_t*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_2, ((int32_t)il2cpp_codegen_add(L_3, L_4))))) = (int8_t)L_9;
		// for (var x = 0; x < width; x++)
		int32_t L_10 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_10, 1));
	}

IL_002d:
	{
		// for (var x = 0; x < width; x++)
		int32_t L_11 = V_3;
		int32_t L_12 = ___width2;
		if ((((int32_t)L_11) < ((int32_t)L_12)))
		{
			goto IL_0011;
		}
	}
	{
		// offs_src += width;
		int32_t L_13 = V_0;
		int32_t L_14 = ___width2;
		V_0 = ((int32_t)il2cpp_codegen_add(L_13, L_14));
		// offs_dst -= stride;
		int32_t L_15 = V_1;
		int32_t L_16 = ___stride4;
		V_1 = ((int32_t)il2cpp_codegen_subtract(L_15, L_16));
		// for (var y = 0; y < height; y++)
		int32_t L_17 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_17, 1));
	}

IL_003e:
	{
		// for (var y = 0; y < height; y++)
		int32_t L_18 = V_2;
		int32_t L_19 = ___height3;
		if ((((int32_t)L_18) < ((int32_t)L_19)))
		{
			goto IL_000d;
		}
	}
	{
		// }
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float math_tan_m4B1EC7A066F0E70AAFAEB71626077D80D9BC502D_inline (float ___x0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static float tan(float x) { return (float)System.Math.Tan(x); }
		float L_0 = ___x0;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		double L_1;
		L_1 = tan(((double)L_0));
		return ((float)L_1);
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR double2_t0A9854C934D0BBE9DD41F2B318B64F830D7253FA math_double2_mC155EC1CD6E2A71A421578801832D7F930609DAE_inline (double ___x0, double ___y1, const RuntimeMethod* method) 
{
	{
		// public static double2 double2(double x, double y) { return new double2(x, y); }
		double L_0 = ___x0;
		double L_1 = ___y1;
		double2_t0A9854C934D0BBE9DD41F2B318B64F830D7253FA L_2;
		memset((&L_2), 0, sizeof(L_2));
		double2__ctor_m4026FE95F69FAEBD29D7092ADAA1CB845A8E859B_inline((&L_2), L_0, L_1, /*hidden argument*/NULL);
		return L_2;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR double2_t0A9854C934D0BBE9DD41F2B318B64F830D7253FA double2_op_Division_m1A13854486042CA4260F00AC6E391CA70DA6DBFB_inline (double2_t0A9854C934D0BBE9DD41F2B318B64F830D7253FA ___lhs0, double ___rhs1, const RuntimeMethod* method) 
{
	{
		// public static double2 operator / (double2 lhs, double rhs) { return new double2 (lhs.x / rhs, lhs.y / rhs); }
		double2_t0A9854C934D0BBE9DD41F2B318B64F830D7253FA L_0 = ___lhs0;
		double L_1 = L_0.___x_0;
		double L_2 = ___rhs1;
		double2_t0A9854C934D0BBE9DD41F2B318B64F830D7253FA L_3 = ___lhs0;
		double L_4 = L_3.___y_1;
		double L_5 = ___rhs1;
		double2_t0A9854C934D0BBE9DD41F2B318B64F830D7253FA L_6;
		memset((&L_6), 0, sizeof(L_6));
		double2__ctor_m4026FE95F69FAEBD29D7092ADAA1CB845A8E859B_inline((&L_6), ((double)(L_1/L_2)), ((double)(L_4/L_5)), /*hidden argument*/NULL);
		return L_6;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E math_float3_m3C0D1DBA85B384CB78960F466FD66195A58E5FFB_inline (float ___x0, float ___y1, float ___z2, const RuntimeMethod* method) 
{
	{
		// public static float3 float3(float x, float y, float z) { return new float3(x, y, z); }
		float L_0 = ___x0;
		float L_1 = ___y1;
		float L_2 = ___z2;
		float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E L_3;
		memset((&L_3), 0, sizeof(L_3));
		float3__ctor_mC61002CD0EC13D7C37D846D021A78C028FB80DB9_inline((&L_3), L_0, L_1, L_2, /*hidden argument*/NULL);
		return L_3;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E float3_op_Multiply_mF3DE0BD784C29A79E6B5BC0FD56E60B45F694AF3_inline (float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E ___lhs0, float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E ___rhs1, const RuntimeMethod* method) 
{
	{
		// public static float3 operator * (float3 lhs, float3 rhs) { return new float3 (lhs.x * rhs.x, lhs.y * rhs.y, lhs.z * rhs.z); }
		float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E L_0 = ___lhs0;
		float L_1 = L_0.___x_0;
		float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E L_2 = ___rhs1;
		float L_3 = L_2.___x_0;
		float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E L_4 = ___lhs0;
		float L_5 = L_4.___y_1;
		float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E L_6 = ___rhs1;
		float L_7 = L_6.___y_1;
		float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E L_8 = ___lhs0;
		float L_9 = L_8.___z_2;
		float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E L_10 = ___rhs1;
		float L_11 = L_10.___z_2;
		float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E L_12;
		memset((&L_12), 0, sizeof(L_12));
		float3__ctor_mC61002CD0EC13D7C37D846D021A78C028FB80DB9_inline((&L_12), ((float)il2cpp_codegen_multiply(L_1, L_3)), ((float)il2cpp_codegen_multiply(L_5, L_7)), ((float)il2cpp_codegen_multiply(L_9, L_11)), /*hidden argument*/NULL);
		return L_12;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR quaternion_tD6BCBECAF088B9EBAE2345EC8534C7A1A4C910D4 math_quaternion_m96D124186ABB065411ADFD29D21B527EBADA145D_inline (float3x3_tB318DB8C7E54B6CA9E14EB9AC7F5964C1189FC79 ___m0, const RuntimeMethod* method) 
{
	{
		// public static quaternion quaternion(float3x3 m) { return new quaternion(m); }
		float3x3_tB318DB8C7E54B6CA9E14EB9AC7F5964C1189FC79 L_0 = ___m0;
		quaternion_tD6BCBECAF088B9EBAE2345EC8534C7A1A4C910D4 L_1;
		memset((&L_1), 0, sizeof(L_1));
		quaternion__ctor_m354F09C0E50CA59DA43037E9993EAE9BF97E9120((&L_1), L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float4_t89D9A294E7A79BD81BFBDD18654508532958555E math_float4_m89FFCFE209ED3D76075D738C0CF47B24941757F7_inline (float ___x0, float ___y1, float ___z2, float ___w3, const RuntimeMethod* method) 
{
	{
		// public static float4 float4(float x, float y, float z, float w) { return new float4(x, y, z, w); }
		float L_0 = ___x0;
		float L_1 = ___y1;
		float L_2 = ___z2;
		float L_3 = ___w3;
		float4_t89D9A294E7A79BD81BFBDD18654508532958555E L_4;
		memset((&L_4), 0, sizeof(L_4));
		float4__ctor_mB2F7F2D8BCE8159BEF5A0D6400499E211858ED2D_inline((&L_4), L_0, L_1, L_2, L_3, /*hidden argument*/NULL);
		return L_4;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float4_t89D9A294E7A79BD81BFBDD18654508532958555E float4_op_Multiply_mFA6F3CE69E7BCB9270744513E7E54447C6DBB164_inline (float4_t89D9A294E7A79BD81BFBDD18654508532958555E ___lhs0, float4_t89D9A294E7A79BD81BFBDD18654508532958555E ___rhs1, const RuntimeMethod* method) 
{
	{
		// public static float4 operator * (float4 lhs, float4 rhs) { return new float4 (lhs.x * rhs.x, lhs.y * rhs.y, lhs.z * rhs.z, lhs.w * rhs.w); }
		float4_t89D9A294E7A79BD81BFBDD18654508532958555E L_0 = ___lhs0;
		float L_1 = L_0.___x_0;
		float4_t89D9A294E7A79BD81BFBDD18654508532958555E L_2 = ___rhs1;
		float L_3 = L_2.___x_0;
		float4_t89D9A294E7A79BD81BFBDD18654508532958555E L_4 = ___lhs0;
		float L_5 = L_4.___y_1;
		float4_t89D9A294E7A79BD81BFBDD18654508532958555E L_6 = ___rhs1;
		float L_7 = L_6.___y_1;
		float4_t89D9A294E7A79BD81BFBDD18654508532958555E L_8 = ___lhs0;
		float L_9 = L_8.___z_2;
		float4_t89D9A294E7A79BD81BFBDD18654508532958555E L_10 = ___rhs1;
		float L_11 = L_10.___z_2;
		float4_t89D9A294E7A79BD81BFBDD18654508532958555E L_12 = ___lhs0;
		float L_13 = L_12.___w_3;
		float4_t89D9A294E7A79BD81BFBDD18654508532958555E L_14 = ___rhs1;
		float L_15 = L_14.___w_3;
		float4_t89D9A294E7A79BD81BFBDD18654508532958555E L_16;
		memset((&L_16), 0, sizeof(L_16));
		float4__ctor_mB2F7F2D8BCE8159BEF5A0D6400499E211858ED2D_inline((&L_16), ((float)il2cpp_codegen_multiply(L_1, L_3)), ((float)il2cpp_codegen_multiply(L_5, L_7)), ((float)il2cpp_codegen_multiply(L_9, L_11)), ((float)il2cpp_codegen_multiply(L_13, L_15)), /*hidden argument*/NULL);
		return L_16;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR quaternion_tD6BCBECAF088B9EBAE2345EC8534C7A1A4C910D4 quaternion_op_Implicit_m5B65713922A062DB08C5DC4C7C1CA4A775F7F397_inline (float4_t89D9A294E7A79BD81BFBDD18654508532958555E ___v0, const RuntimeMethod* method) 
{
	{
		// public static implicit operator quaternion(float4 v) { return new quaternion(v); }
		float4_t89D9A294E7A79BD81BFBDD18654508532958555E L_0 = ___v0;
		quaternion_tD6BCBECAF088B9EBAE2345EC8534C7A1A4C910D4 L_1;
		memset((&L_1), 0, sizeof(L_1));
		quaternion__ctor_m2F6A34CCFD1150A326CB4CE108260A8BD8B1D75F_inline((&L_1), L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Detection_get_ID_m34E1C04B3CEEE367076F00407A8D04C789F0E7DC_inline (Detection_t1625D0598F2D1DB7D1E7AA2C92E1948DAB23A72C* __this, const RuntimeMethod* method) 
{
	{
		// public int ID => id;
		int32_t L_0 = __this->___id_1;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t math_max_m5DA4D66E3CC78BDFF8218BA039D6EBB1AC223826_inline (int32_t ___x0, int32_t ___y1, const RuntimeMethod* method) 
{
	{
		// public static int max(int x, int y) { return x > y ? x : y; }
		int32_t L_0 = ___x0;
		int32_t L_1 = ___y1;
		if ((((int32_t)L_0) > ((int32_t)L_1)))
		{
			goto IL_0006;
		}
	}
	{
		int32_t L_2 = ___y1;
		return L_2;
	}

IL_0006:
	{
		int32_t L_3 = ___x0;
		return L_3;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float3x3_tB318DB8C7E54B6CA9E14EB9AC7F5964C1189FC79 math_float3x3_m8AEC0695B8C3C8718229D5CCDB5EC087D6C27D7B_inline (float ___m000, float ___m011, float ___m022, float ___m103, float ___m114, float ___m125, float ___m206, float ___m217, float ___m228, const RuntimeMethod* method) 
{
	{
		// return new float3x3(m00, m01, m02,
		//                     m10, m11, m12,
		//                     m20, m21, m22);
		float L_0 = ___m000;
		float L_1 = ___m011;
		float L_2 = ___m022;
		float L_3 = ___m103;
		float L_4 = ___m114;
		float L_5 = ___m125;
		float L_6 = ___m206;
		float L_7 = ___m217;
		float L_8 = ___m228;
		float3x3_tB318DB8C7E54B6CA9E14EB9AC7F5964C1189FC79 L_9;
		memset((&L_9), 0, sizeof(L_9));
		float3x3__ctor_m3AB31C9B587ABDCF15C8BF0E3A5B0158996A75ED_inline((&L_9), L_0, L_1, L_2, L_3, L_4, L_5, L_6, L_7, L_8, /*hidden argument*/NULL);
		return L_9;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int64_t TimeProfile_get_UTime_m7F71F3D5CD12A38A9868C4FF1838DA591A0E6998_inline (TimeProfile_tABC93C5F8A866D5F3561E53F913C48885AE9C626* __this, const RuntimeMethod* method) 
{
	{
		// public long UTime => utime;
		int64_t L_0 = __this->___utime_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int64_t TimeProfileEntry_get_UTime_mCD71B4AA19A81B7BB9DDE5E10BB5369508F62B58_inline (TimeProfileEntry_t6DA6F7F2A383FC741B1C2F4C623E1CFF2E070EC5* __this, const RuntimeMethod* method) 
{
	{
		// public long UTime => utime;
		int64_t L_0 = __this->___utime_1;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t TagPose_get_ID_m48A90766AFF57644BAA48506DB797989D2E7AAA3_inline (TagPose_t215F79C75676B0849191D37136AF4C1BF74CE70B* __this, const RuntimeMethod* method) 
{
	{
		// public int ID { get; }
		int32_t L_0 = __this->___U3CIDU3Ek__BackingField_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 TagPose_get_Position_mB6EE4290F68E0B957E4F554058806A2CD34AC032_inline (TagPose_t215F79C75676B0849191D37136AF4C1BF74CE70B* __this, const RuntimeMethod* method) 
{
	{
		// public Vector3 Position { get; }
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = __this->___U3CPositionU3Ek__BackingField_1;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 TagPose_get_Rotation_mDDF2850E778FA1E59C00B127DF050A2AED92EBA7_inline (TagPose_t215F79C75676B0849191D37136AF4C1BF74CE70B* __this, const RuntimeMethod* method) 
{
	{
		// public Quaternion Rotation { get; }
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_0 = __this->___U3CRotationU3Ek__BackingField_2;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Detection_get_Hamming_m9533F758A7D9A02536B4F2B2982DF0F33CF999A0_inline (Detection_t1625D0598F2D1DB7D1E7AA2C92E1948DAB23A72C* __this, const RuntimeMethod* method) 
{
	{
		// public int Hamming => hamming;
		int32_t L_0 = __this->___hamming_2;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Detection_get_DecisionMargin_mA09DB6EE3D3E729DB31EDECE33C9A66B78B01BD0_inline (Detection_t1625D0598F2D1DB7D1E7AA2C92E1948DAB23A72C* __this, const RuntimeMethod* method) 
{
	{
		// public float DecisionMargin => decision_margin;
		float L_0 = __this->___decision_margin_3;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_m1A274F0537390E2F4129A7EF130AEC6EEAFB012B_gshared_inline (List_1_tAB9A066739F9303BCF5EAA66D624F09428AEC252* __this, ValueTuple_2_tAAF55A732C007E60A48A7C771AAAAEE0D53FC1E7 ___item0, const RuntimeMethod* method) 
{
	ValueTuple_2U5BU5D_t4A4D8CB896C18C7C5A09BBB57C0A4A560F26A581* V_0 = NULL;
	int32_t V_1 = 0;
	{
		int32_t L_0 = (int32_t)__this->____version_3;
		__this->____version_3 = ((int32_t)il2cpp_codegen_add(L_0, 1));
		ValueTuple_2U5BU5D_t4A4D8CB896C18C7C5A09BBB57C0A4A560F26A581* L_1 = (ValueTuple_2U5BU5D_t4A4D8CB896C18C7C5A09BBB57C0A4A560F26A581*)__this->____items_1;
		V_0 = L_1;
		int32_t L_2 = (int32_t)__this->____size_2;
		V_1 = L_2;
		int32_t L_3 = V_1;
		ValueTuple_2U5BU5D_t4A4D8CB896C18C7C5A09BBB57C0A4A560F26A581* L_4 = V_0;
		NullCheck(L_4);
		if ((!(((uint32_t)L_3) < ((uint32_t)((int32_t)(((RuntimeArray*)L_4)->max_length))))))
		{
			goto IL_0034;
		}
	}
	{
		int32_t L_5 = V_1;
		__this->____size_2 = ((int32_t)il2cpp_codegen_add(L_5, 1));
		ValueTuple_2U5BU5D_t4A4D8CB896C18C7C5A09BBB57C0A4A560F26A581* L_6 = V_0;
		int32_t L_7 = V_1;
		ValueTuple_2_tAAF55A732C007E60A48A7C771AAAAEE0D53FC1E7 L_8 = ___item0;
		NullCheck(L_6);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(L_7), (ValueTuple_2_tAAF55A732C007E60A48A7C771AAAAEE0D53FC1E7)L_8);
		return;
	}

IL_0034:
	{
		ValueTuple_2_tAAF55A732C007E60A48A7C771AAAAEE0D53FC1E7 L_9 = ___item0;
		((  void (*) (List_1_tAB9A066739F9303BCF5EAA66D624F09428AEC252*, ValueTuple_2_tAAF55A732C007E60A48A7C771AAAAEE0D53FC1E7, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 11)))(__this, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 11));
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Span_1_get_Length_m013E0DABFEA7C0FD3AE59BCF0B17907709CBC70D_gshared_inline (Span_1_tF932EE1F0D4B7A62DA3C00158F42DFEEE51A1E49* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = (int32_t)__this->____length_1;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Span_1_get_Length_m429BC42023241B4D851D65359CD7271BF938583F_gshared_inline (Span_1_t1E317EB665016139E9E9B38B97D6EE8270DF7B68* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = (int32_t)__this->____length_1;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Span_1__ctor_mE18EBB601FBFA01BA29FE353364700952A9091FE_gshared_inline (Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305* __this, void* ___pointer0, int32_t ___length1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		if (!false)
		{
			goto IL_0016;
		}
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(InitializedTypeInfo(method->klass)->rgctx_data, 4)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E(L_0, NULL);
		ThrowHelper_ThrowInvalidTypeWithPointersNotSupported_m6A58AD8706EDDB4CE9C309A6085249B6377C8CB5(L_1, NULL);
	}

IL_0016:
	{
		int32_t L_2 = ___length1;
		if ((((int32_t)L_2) >= ((int32_t)0)))
		{
			goto IL_001f;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_m272CE1B3040BA89B2C478E2CF629670574F30353(NULL);
	}

IL_001f:
	{
		void* L_3 = ___pointer0;
		uint8_t* L_4;
		L_4 = il2cpp_unsafe_as_ref<uint8_t>((uint8_t*)L_3);
		ByReference_1_t9C85BCCAAF8C525B6C06B07E922D8D217BE8D6FC L_5;
		memset((&L_5), 0, sizeof(L_5));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_5), L_4);
		__this->____pointer_0 = L_5;
		int32_t L_6 = ___length1;
		__this->____length_1 = L_6;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void double2__ctor_m4026FE95F69FAEBD29D7092ADAA1CB845A8E859B_inline (double2_t0A9854C934D0BBE9DD41F2B318B64F830D7253FA* __this, double ___x0, double ___y1, const RuntimeMethod* method) 
{
	{
		// this.x = x;
		double L_0 = ___x0;
		__this->___x_0 = L_0;
		// this.y = y;
		double L_1 = ___y1;
		__this->___y_1 = L_1;
		// }
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void float3__ctor_mC61002CD0EC13D7C37D846D021A78C028FB80DB9_inline (float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E* __this, float ___x0, float ___y1, float ___z2, const RuntimeMethod* method) 
{
	{
		// this.x = x;
		float L_0 = ___x0;
		__this->___x_0 = L_0;
		// this.y = y;
		float L_1 = ___y1;
		__this->___y_1 = L_1;
		// this.z = z;
		float L_2 = ___z2;
		__this->___z_2 = L_2;
		// }
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void float4__ctor_mB2F7F2D8BCE8159BEF5A0D6400499E211858ED2D_inline (float4_t89D9A294E7A79BD81BFBDD18654508532958555E* __this, float ___x0, float ___y1, float ___z2, float ___w3, const RuntimeMethod* method) 
{
	{
		// this.x = x;
		float L_0 = ___x0;
		__this->___x_0 = L_0;
		// this.y = y;
		float L_1 = ___y1;
		__this->___y_1 = L_1;
		// this.z = z;
		float L_2 = ___z2;
		__this->___z_2 = L_2;
		// this.w = w;
		float L_3 = ___w3;
		__this->___w_3 = L_3;
		// }
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void quaternion__ctor_m2F6A34CCFD1150A326CB4CE108260A8BD8B1D75F_inline (quaternion_tD6BCBECAF088B9EBAE2345EC8534C7A1A4C910D4* __this, float4_t89D9A294E7A79BD81BFBDD18654508532958555E ___value0, const RuntimeMethod* method) 
{
	{
		// public quaternion(float4 value) { this.value = value; }
		float4_t89D9A294E7A79BD81BFBDD18654508532958555E L_0 = ___value0;
		__this->___value_0 = L_0;
		// public quaternion(float4 value) { this.value = value; }
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void float3x3__ctor_m3AB31C9B587ABDCF15C8BF0E3A5B0158996A75ED_inline (float3x3_tB318DB8C7E54B6CA9E14EB9AC7F5964C1189FC79* __this, float ___m000, float ___m011, float ___m022, float ___m103, float ___m114, float ___m125, float ___m206, float ___m217, float ___m228, const RuntimeMethod* method) 
{
	{
		// this.c0 = new float3(m00, m10, m20);
		float L_0 = ___m000;
		float L_1 = ___m103;
		float L_2 = ___m206;
		float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E L_3;
		memset((&L_3), 0, sizeof(L_3));
		float3__ctor_mC61002CD0EC13D7C37D846D021A78C028FB80DB9_inline((&L_3), L_0, L_1, L_2, /*hidden argument*/NULL);
		__this->___c0_0 = L_3;
		// this.c1 = new float3(m01, m11, m21);
		float L_4 = ___m011;
		float L_5 = ___m114;
		float L_6 = ___m217;
		float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E L_7;
		memset((&L_7), 0, sizeof(L_7));
		float3__ctor_mC61002CD0EC13D7C37D846D021A78C028FB80DB9_inline((&L_7), L_4, L_5, L_6, /*hidden argument*/NULL);
		__this->___c1_1 = L_7;
		// this.c2 = new float3(m02, m12, m22);
		float L_8 = ___m022;
		float L_9 = ___m125;
		float L_10 = ___m228;
		float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E L_11;
		memset((&L_11), 0, sizeof(L_11));
		float3__ctor_mC61002CD0EC13D7C37D846D021A78C028FB80DB9_inline((&L_11), L_8, L_9, L_10, /*hidden argument*/NULL);
		__this->___c2_2 = L_11;
		// }
		return;
	}
}
