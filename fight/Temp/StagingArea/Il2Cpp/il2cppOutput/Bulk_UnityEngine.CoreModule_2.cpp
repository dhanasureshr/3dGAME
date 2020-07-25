#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <cstring>
#include <string.h>
#include <stdio.h>
#include <cmath>
#include <limits>
#include <assert.h>
#include <stdint.h>

#include "il2cpp-class-internals.h"
#include "codegen/il2cpp-codegen.h"
#include "il2cpp-object-internals.h"

template <typename R, typename T1, typename T2>
struct VirtFuncInvoker2
{
	typedef R (*Func)(void*, T1, T2, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};
template <typename R>
struct VirtFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename R, typename T1>
struct VirtFuncInvoker1
{
	typedef R (*Func)(void*, T1, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, invokeData.method);
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

// System.AsyncCallback
struct AsyncCallback_t3F3DA3BEDAEE81DD1D24125DF8EB30E85EE14DA4;
// System.Boolean[]
struct BooleanU5BU5D_t192C7579715690E25BD5EFED47F3E0FC9DCB2040;
// System.Byte[]
struct ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821;
// System.Char[]
struct CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2;
// System.Collections.IDictionary
struct IDictionary_t1BD5C1546718A374EA8122FBD6C6EE45331E8CE7;
// System.Collections.Stack
struct Stack_t37723B68CC4FFD95F0F3D06A5D42D7DEE7569643;
// System.Delegate
struct Delegate_t;
// System.DelegateData
struct DelegateData_t1BF9F691B56DAE5F8C28C5E084FDE94F15F27BBE;
// System.Delegate[]
struct DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t855F09649EA34DEE7C1B6F088E0538E3CCC3F196;
// System.Double[]
struct DoubleU5BU5D_tF9383437DDA9EAC9F60627E9E6E2045CF7CB182D;
// System.Exception
struct Exception_t;
// System.IAsyncResult
struct IAsyncResult_t8E194308510B375B42432981AE5E7488C458D598;
// System.IndexOutOfRangeException
struct IndexOutOfRangeException_tEC7665FC66525AB6A6916A7EB505E5591683F0CF;
// System.Int16[]
struct Int16U5BU5D_tDA0F0B2730337F72E44DB024BE9818FA8EDE8D28;
// System.Int32[]
struct Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83;
// System.Int64[]
struct Int64U5BU5D_tE04A3DEF6AF1C852A43B98A24EFB715806B37F5F;
// System.IntPtr[]
struct IntPtrU5BU5D_t4DC01DCB9A6DF6C9792A6513595D7A11E637DCDD;
// System.Object[]
struct ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A;
// System.Reflection.Binder
struct Binder_t4D5CB06963501D32847C057B57157D6DC49CA759;
// System.Reflection.MemberFilter
struct MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_t4A754D86B0F784B18CBC36C073BA564BED109770;
// System.Single[]
struct SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5;
// System.String
struct String_t;
// System.Text.StringBuilder
struct StringBuilder_t;
// System.Type
struct Type_t;
// System.Type[]
struct TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F;
// System.Void
struct Void_t22962CB4C05B1D89B55A6E1139F0E87A90987017;
// UnityEngine.AndroidJavaClass
struct AndroidJavaClass_tFC9C1064BF4849691FEDC988743C0C271C62FDC8;
// UnityEngine.AndroidJavaObject
struct AndroidJavaObject_t5B3829FB6E1DBC020F5BA17846F1351EAA982F8E;
// UnityEngine.AndroidJavaProxy
struct AndroidJavaProxy_tBF3E21C3639CF1A14BDC9173530DC13D45540795;
// UnityEngine.AndroidJavaRunnable
struct AndroidJavaRunnable_tBE7371D29A525C4F51DC1CBEBA5E193644F6AFE1;
// UnityEngine.AndroidJavaRunnableProxy
struct AndroidJavaRunnableProxy_t44BC33675D0AC3139F424C7184045BFDC1238572;
// UnityEngine.CustomYieldInstruction
struct CustomYieldInstruction_t819BB0973AFF22766749FF087B8AEFEAF3C2CB7D;
// UnityEngine.GlobalJavaObjectRef
struct GlobalJavaObjectRef_tC135ABE5FD0F787E7A2FAED9978EB2512579E22F;
// UnityEngine.WaitForEndOfFrame
struct WaitForEndOfFrame_t75980FB3F246D6AD36A85CA2BFDF8474E5EEBCCA;
// UnityEngine.WaitForSeconds
struct WaitForSeconds_t3E9E78D3BB53F03F96C7F28BA9B9086CD1A5F4E8;
// UnityEngine.WaitForSecondsRealtime
struct WaitForSecondsRealtime_t0CF361107C4A9E25E0D4CF2F37732CE785235739;
// UnityEngine.YieldInstruction
struct YieldInstruction_t836035AC7BD07A3C7909F7AD2A5B42DE99D91C44;
// UnityEngine._AndroidJNIHelper
struct _AndroidJNIHelper_t59BA163482B4C65C90D89695B7A241C902EBA386;
// UnityEngine.jvalue[]
struct jvalueU5BU5D_t15D5A2D5F08971A18428246F1999D516A4E9D975;
// UnityEngineInternal.GenericStack
struct GenericStack_tC59D21E8DBC50F3C608479C942200AC44CA2D5BC;

extern RuntimeClass* AndroidJavaClassU5BU5D_tE3ED186B518D6D52F80504EB644E86979B84CB18_il2cpp_TypeInfo_var;
extern RuntimeClass* AndroidJavaClass_tFC9C1064BF4849691FEDC988743C0C271C62FDC8_il2cpp_TypeInfo_var;
extern RuntimeClass* AndroidJavaObjectU5BU5D_tAA78CD496655EFF43DB71506C66672DBE563003C_il2cpp_TypeInfo_var;
extern RuntimeClass* AndroidJavaObject_t5B3829FB6E1DBC020F5BA17846F1351EAA982F8E_il2cpp_TypeInfo_var;
extern RuntimeClass* AndroidJavaProxy_tBF3E21C3639CF1A14BDC9173530DC13D45540795_il2cpp_TypeInfo_var;
extern RuntimeClass* AndroidJavaRunnableProxy_t44BC33675D0AC3139F424C7184045BFDC1238572_il2cpp_TypeInfo_var;
extern RuntimeClass* AndroidJavaRunnable_tBE7371D29A525C4F51DC1CBEBA5E193644F6AFE1_il2cpp_TypeInfo_var;
extern RuntimeClass* AndroidReflection_t1E856C4DB3786B7F94F0488E69A752B752E4657D_il2cpp_TypeInfo_var;
extern RuntimeClass* BooleanU5BU5D_t192C7579715690E25BD5EFED47F3E0FC9DCB2040_il2cpp_TypeInfo_var;
extern RuntimeClass* Boolean_tB53F6830F670160873277339AA58F15CAED4399C_il2cpp_TypeInfo_var;
extern RuntimeClass* ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821_il2cpp_TypeInfo_var;
extern RuntimeClass* Byte_tF87C579059BD4633E6840EBBBEEF899C6E33EF07_il2cpp_TypeInfo_var;
extern RuntimeClass* CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2_il2cpp_TypeInfo_var;
extern RuntimeClass* Char_tBF22D9FC341BE970735250BB6FF1A4A92BBA58B9_il2cpp_TypeInfo_var;
extern RuntimeClass* DoubleU5BU5D_tF9383437DDA9EAC9F60627E9E6E2045CF7CB182D_il2cpp_TypeInfo_var;
extern RuntimeClass* Double_t358B8F23BDC52A5DD700E727E204F9F7CDE12409_il2cpp_TypeInfo_var;
extern RuntimeClass* Exception_t_il2cpp_TypeInfo_var;
extern RuntimeClass* IDisposable_t7218B22548186B208D65EA5B7870503810A2D15A_il2cpp_TypeInfo_var;
extern RuntimeClass* IndexOutOfRangeException_tEC7665FC66525AB6A6916A7EB505E5591683F0CF_il2cpp_TypeInfo_var;
extern RuntimeClass* Int16U5BU5D_tDA0F0B2730337F72E44DB024BE9818FA8EDE8D28_il2cpp_TypeInfo_var;
extern RuntimeClass* Int16_t823A20635DAF5A3D93A1E01CFBF3CBA27CF00B4D_il2cpp_TypeInfo_var;
extern RuntimeClass* Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83_il2cpp_TypeInfo_var;
extern RuntimeClass* Int32_t585191389E07734F19F3156FF88FB3EF4800D102_il2cpp_TypeInfo_var;
extern RuntimeClass* Int64U5BU5D_tE04A3DEF6AF1C852A43B98A24EFB715806B37F5F_il2cpp_TypeInfo_var;
extern RuntimeClass* Int64_t7A386C2FF7B0280A0F516992401DDFCF0FF7B436_il2cpp_TypeInfo_var;
extern RuntimeClass* IntPtrU5BU5D_t4DC01DCB9A6DF6C9792A6513595D7A11E637DCDD_il2cpp_TypeInfo_var;
extern RuntimeClass* IntPtr_t_il2cpp_TypeInfo_var;
extern RuntimeClass* MathfInternal_t3E913BDEA2E88DF117AEBE6A099B5922A78A1693_il2cpp_TypeInfo_var;
extern RuntimeClass* ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A_il2cpp_TypeInfo_var;
extern RuntimeClass* RuntimeArray_il2cpp_TypeInfo_var;
extern RuntimeClass* SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5_il2cpp_TypeInfo_var;
extern RuntimeClass* Single_tDDDA9169C4E4E308AC6D7A824F9B28DC82204AE1_il2cpp_TypeInfo_var;
extern RuntimeClass* StringBuilder_t_il2cpp_TypeInfo_var;
extern RuntimeClass* StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E_il2cpp_TypeInfo_var;
extern RuntimeClass* String_t_il2cpp_TypeInfo_var;
extern RuntimeClass* Type_t_il2cpp_TypeInfo_var;
extern RuntimeClass* Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E_il2cpp_TypeInfo_var;
extern RuntimeClass* jvalueU5BU5D_t15D5A2D5F08971A18428246F1999D516A4E9D975_il2cpp_TypeInfo_var;
extern String_t* _stringLiteral02AA629C8B16CD17A44F3A0EFEC2FEED43937642;
extern String_t* _stringLiteral169775A78ADEE2D403BC1F88A1C1760F11C0304D;
extern String_t* _stringLiteral1C138278299F1B35865A79651A05DF52C0D74BB9;
extern String_t* _stringLiteral1D85A749A5C6FB273395A49AF6A07D9CF0C26A6D;
extern String_t* _stringLiteral1EB9481D15B52FEE57E5AC17CA684460A95993E5;
extern String_t* _stringLiteral2A42CDB77001E84D751FD683B088BBF833EEE0B3;
extern String_t* _stringLiteral2D14AB97CC3DC294C51C0D6814F4EA45F4B4E312;
extern String_t* _stringLiteral319523E1002BB1B6AB63E268BEEA610E6C9D8EEC;
extern String_t* _stringLiteral32096C2E0EFF33D844EE6D675407ACE18289357D;
extern String_t* _stringLiteral327C3BC0993A6F3EF91265DAF24D8D1A4076818E;
extern String_t* _stringLiteral328CD2BEF0C16A2D306B28CD73848671CCC42AC2;
extern String_t* _stringLiteral3E2B500817A96FA5BAECB12EAFF42205003D74E6;
extern String_t* _stringLiteral46F8AB7C0CFF9DF7CD124852E26022A6BF89E315;
extern String_t* _stringLiteral48647474B89FA8F56ED6BDA0F8148A17B51B97BD;
extern String_t* _stringLiteral4F05CBFCA4DFE76B99B142F609CDCF00D44FA247;
extern String_t* _stringLiteral50C9E8D5FC98727B4BBC93CF5D64A68DB647F04F;
extern String_t* _stringLiteral51750D533BBD6F70990AA487A711B4492A08F4BC;
extern String_t* _stringLiteral58668E7669FD564D99DB5D581FCDB6A5618440B5;
extern String_t* _stringLiteral59CA046CC86D6DAAA8DF1A535C94F9AD1834F7FD;
extern String_t* _stringLiteral5ABBEC2FB4C72453E6720E8AA22C1978B547A438;
extern String_t* _stringLiteral5BD9EA45F0B419AD93E447295BC0AA4D644CF1B4;
extern String_t* _stringLiteral6226D4F452A659360FAAC6A6266D73ABC5BFC1FC;
extern String_t* _stringLiteral685E80366130387CB75C055248326976D16FDF8D;
extern String_t* _stringLiteral71FAFC4E2FC1E47E234762A96B80512B6B5534C2;
extern String_t* _stringLiteral783923E57BA5E8F1044632C31FD806EE24814BB5;
extern String_t* _stringLiteral84B35CD832E694499CB991F7B38517E07CFC129A;
extern String_t* _stringLiteral8777D1BEFDBAE64EDD9D49FE596B0CC904692081;
extern String_t* _stringLiteral890F52A3297E6020D62E0582519A9EA5B7A9ECF1;
extern String_t* _stringLiteral8CF1783FA99F62CA581F6FE8F3CD66B0F9AB9FC3;
extern String_t* _stringLiteral909F99A779ADB66A76FC53AB56C7DD1CAF35D0FD;
extern String_t* _stringLiteral917103D252076DA908A549A26BE33C64ABBD0EAC;
extern String_t* _stringLiteral94A9D9512BA3D2F295C65A0B3119715C79E6CB75;
extern String_t* _stringLiteral9E753E685FCDC6208CD59CF2FF3FDCCEB33023DD;
extern String_t* _stringLiteral9EAF6B54917BA48016AC5209BC15F62D5445708E;
extern String_t* _stringLiteralA0BCA4B2E667DD10532EED8280DA58E7BE1A8B88;
extern String_t* _stringLiteralA0F4EA7D91495DF92BBAC2E2149DFB850FE81396;
extern String_t* _stringLiteralA7EDC6086A91C13EEC0568F09CD6263D5A4CFFEC;
extern String_t* _stringLiteralAA3B42B3BA69D14FA1DA94B7DD8016010E8F6E0C;
extern String_t* _stringLiteralAE4F281DF5A5D0FF3CAD6371F76D5C29B6D953EC;
extern String_t* _stringLiteralB29BEC3A893F5759BD9E96C91C9F612E3591BE59;
extern String_t* _stringLiteralB402D9DB865836815F1609AD99C0C12FA3DD8026;
extern String_t* _stringLiteralB505B482020D33F0BA0DA1BE632CEF3BC4E82948;
extern String_t* _stringLiteralBB589D0621E5472F470FA3425A234C74B1E202E8;
extern String_t* _stringLiteralBD119F910FA08AD4078969E4A551A13A7EA4D4BC;
extern String_t* _stringLiteralBD3027FA569EA15CA76D84DB21C67E2D514C1A5A;
extern String_t* _stringLiteralBD7E4A941C870AD23894466BB52628A9B488A1A2;
extern String_t* _stringLiteralBDB36BB22DEB169275B3094BA9005A29EEDDD195;
extern String_t* _stringLiteralC3BEC6BCBC9B9F04E60FCB1D9C9C1A37F3E12E93;
extern String_t* _stringLiteralC9291E1B62F25E545BD2AC4DF55EB10099666DCD;
extern String_t* _stringLiteralCA73AB65568CD125C2D27A22BBD9E863C10B675D;
extern String_t* _stringLiteralD15A929AAC58DB1B939AAB2AEDA4342595D77F13;
extern String_t* _stringLiteralD160E0986ACA4714714A16F29EC605AF90BE704D;
extern String_t* _stringLiteralD53437218F50447640E8F502D360C117BA0C456F;
extern String_t* _stringLiteralD98507F786B7E8AA37C8E9EE1D0452E55E21A08D;
extern String_t* _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
extern String_t* _stringLiteralDE5E596326DC7F422D1D5BFA854AA400BA53AE86;
extern String_t* _stringLiteralE33E0E502D09092EA117BE8C27FB58B1DD3AA609;
extern String_t* _stringLiteralE46270F492F404A1D912A23E4DE44F3C7840F993;
extern String_t* _stringLiteralE69F20E9F683920D3FB4329ABD951E878B1F9372;
extern String_t* _stringLiteralE6A7F51D4599E77D3EE682C1208434F332D9BF8D;
extern String_t* _stringLiteralEDB1046E80D3EA42FA26944C690CF3EB80C9CC62;
extern String_t* _stringLiteralF57B2D312D9EFE8FE993C8EB1F3E19D41AD04030;
extern String_t* _stringLiteralF75D848FCD77B877799E37401451606B0778E2C5;
extern String_t* _stringLiteralFA98C1FD2CA6FC89B5ED010FD16AA461F50AFB3E;
extern String_t* _stringLiteralFB0418121C28FD390FBFDEEBF12570C86FC00B32;
extern const RuntimeMethod* AndroidJavaObject_CallStatic_TisAndroidJavaObject_t5B3829FB6E1DBC020F5BA17846F1351EAA982F8E_m4A35A2BD8253FB4872812D7B24A951A6AB1D0C6F_RuntimeMethod_var;
extern const RuntimeMethod* AndroidJavaObject_CallStatic_TisInt32_t585191389E07734F19F3156FF88FB3EF4800D102_m58609371993F08421AA2C6A3071C8876FACEC412_RuntimeMethod_var;
extern const RuntimeMethod* AndroidJavaObject_Call_TisAndroidJavaObject_t5B3829FB6E1DBC020F5BA17846F1351EAA982F8E_m050B0EBEF6F796C3B3C8D55D9620055A6F07B77A_RuntimeMethod_var;
extern const RuntimeMethod* AndroidJavaObject_Call_TisBoolean_tB53F6830F670160873277339AA58F15CAED4399C_m55C7AF41C602F92EE6E9482814E57F6A5ADCECF4_RuntimeMethod_var;
extern const RuntimeMethod* AndroidJavaObject_Call_TisByte_tF87C579059BD4633E6840EBBBEEF899C6E33EF07_m4146C48C7DFDAF10FBC023D3E6529CB590F7EEF8_RuntimeMethod_var;
extern const RuntimeMethod* AndroidJavaObject_Call_TisChar_tBF22D9FC341BE970735250BB6FF1A4A92BBA58B9_m1417D998764ED64D194E0A171677773221DAE64F_RuntimeMethod_var;
extern const RuntimeMethod* AndroidJavaObject_Call_TisDouble_t358B8F23BDC52A5DD700E727E204F9F7CDE12409_mA09E9F86B0C09659E6ECB18EC567F98A38FDF738_RuntimeMethod_var;
extern const RuntimeMethod* AndroidJavaObject_Call_TisInt16_t823A20635DAF5A3D93A1E01CFBF3CBA27CF00B4D_mF25CDDD74A99379570D993243DA32D2D0CAF95FF_RuntimeMethod_var;
extern const RuntimeMethod* AndroidJavaObject_Call_TisInt32_t585191389E07734F19F3156FF88FB3EF4800D102_m96DA2E4324B0211375BAA992FD4731428F08B530_RuntimeMethod_var;
extern const RuntimeMethod* AndroidJavaObject_Call_TisInt64_t7A386C2FF7B0280A0F516992401DDFCF0FF7B436_mE485E930878F2C30F8659EC20300D3546E0AC484_RuntimeMethod_var;
extern const RuntimeMethod* AndroidJavaObject_Call_TisSingle_tDDDA9169C4E4E308AC6D7A824F9B28DC82204AE1_mDEE4DBCC617B60BB4CE4743431B838FECC359757_RuntimeMethod_var;
extern const RuntimeMethod* AndroidJavaObject_Call_TisString_t_m9AB7F83596130620DAA3338C360A4F140A5BD0EA_RuntimeMethod_var;
extern const RuntimeMethod* Vector4_get_Item_m39878FDA732B20347BB37CD1485560E9267EDC98_RuntimeMethod_var;
extern const RuntimeMethod* Vector4_set_Item_m56FB3A149299FEF1C0CF638CFAF71C7F0685EE45_RuntimeMethod_var;
extern const RuntimeMethod* _AndroidJNIHelper_Box_m2B00C16E8893C4D4DFA8836FB8BB044ACD973182_RuntimeMethod_var;
extern const RuntimeMethod* _AndroidJNIHelper_ConvertToJNIArray_mF7018A40E8546D4CAC0FDAD9710899F785149F4B_RuntimeMethod_var;
extern const RuntimeMethod* _AndroidJNIHelper_CreateJNIArgArray_m0548B6E7A263DCC2E0088A67847E2D6BF0A0A3A7_RuntimeMethod_var;
extern const RuntimeMethod* _AndroidJNIHelper_GetConstructorID_m491C2022BD1820550A43FF0B5EB54782503D5159_RuntimeMethod_var;
extern const RuntimeMethod* _AndroidJNIHelper_GetFieldID_m5D7930D0929F1ACF9321E2F784D7D802638A8D47_RuntimeMethod_var;
extern const RuntimeMethod* _AndroidJNIHelper_GetMethodID_m12B12EB5027675EE985A9FE9634079BDA79709AB_RuntimeMethod_var;
extern const RuntimeMethod* _AndroidJNIHelper_GetSignature_m43015E538F32185A250FC4D1732EEFC4740E3B0E_RuntimeMethod_var;
extern const RuntimeMethod* _AndroidJNIHelper_UnboxArray_mC196889BC2288A01DCF80DA2E27F832FA7C7CE2E_RuntimeMethod_var;
extern const RuntimeType* AndroidJavaClass_tFC9C1064BF4849691FEDC988743C0C271C62FDC8_0_0_0_var;
extern const RuntimeType* AndroidJavaObject_t5B3829FB6E1DBC020F5BA17846F1351EAA982F8E_0_0_0_var;
extern const RuntimeType* AndroidJavaRunnable_tBE7371D29A525C4F51DC1CBEBA5E193644F6AFE1_0_0_0_var;
extern const RuntimeType* Boolean_tB53F6830F670160873277339AA58F15CAED4399C_0_0_0_var;
extern const RuntimeType* Byte_tF87C579059BD4633E6840EBBBEEF899C6E33EF07_0_0_0_var;
extern const RuntimeType* Char_tBF22D9FC341BE970735250BB6FF1A4A92BBA58B9_0_0_0_var;
extern const RuntimeType* Double_t358B8F23BDC52A5DD700E727E204F9F7CDE12409_0_0_0_var;
extern const RuntimeType* Int16_t823A20635DAF5A3D93A1E01CFBF3CBA27CF00B4D_0_0_0_var;
extern const RuntimeType* Int32_t585191389E07734F19F3156FF88FB3EF4800D102_0_0_0_var;
extern const RuntimeType* Int64_t7A386C2FF7B0280A0F516992401DDFCF0FF7B436_0_0_0_var;
extern const RuntimeType* RuntimeArray_0_0_0_var;
extern const RuntimeType* Single_tDDDA9169C4E4E308AC6D7A824F9B28DC82204AE1_0_0_0_var;
extern const RuntimeType* String_t_0_0_0_var;
extern const uint32_t MathfInternal__cctor_m885D4921B8E928763E7ABB4466659665780F860F_MetadataUsageId;
extern const uint32_t Vector4_Equals_m552ECA9ECD220D6526D8ECC9902016B6FC6D49B5_MetadataUsageId;
extern const uint32_t Vector4_SqrMagnitude_mC2577C7119B10D3211BEF8BD3D8C0736274D1C10_MetadataUsageId;
extern const uint32_t Vector4_ToString_m769402E3F7CBD6C92464D916527CC87BBBA53EF9_MetadataUsageId;
extern const uint32_t Vector4__cctor_m478FA6A83B8E23F8323F150FF90B1FB934B1C251_MetadataUsageId;
extern const uint32_t Vector4_get_Item_m39878FDA732B20347BB37CD1485560E9267EDC98_MetadataUsageId;
extern const uint32_t Vector4_get_sqrMagnitude_m6B2707CBD31D237605D066A5925E6419D28B5397_MetadataUsageId;
extern const uint32_t Vector4_get_zero_m42821248DDFA4F9A3E0B2E84CBCB737BE9DCE3E9_MetadataUsageId;
extern const uint32_t Vector4_op_Equality_m9AE0D09EC7E02201F94AE469ADE9F416D0E20441_MetadataUsageId;
extern const uint32_t Vector4_op_Inequality_m7038D1E27BCA2E4C0EA8E034C30E586635FBF228_MetadataUsageId;
extern const uint32_t Vector4_set_Item_m56FB3A149299FEF1C0CF638CFAF71C7F0685EE45_MetadataUsageId;
extern const uint32_t _AndroidJNIHelper_Box_m2B00C16E8893C4D4DFA8836FB8BB044ACD973182_MetadataUsageId;
extern const uint32_t _AndroidJNIHelper_ConvertToJNIArray_mF7018A40E8546D4CAC0FDAD9710899F785149F4B_MetadataUsageId;
extern const uint32_t _AndroidJNIHelper_CreateJNIArgArray_m0548B6E7A263DCC2E0088A67847E2D6BF0A0A3A7_MetadataUsageId;
extern const uint32_t _AndroidJNIHelper_CreateJavaProxy_mBBE87C397A88E1CC0ABC3DBE8B936F969D8593D4_MetadataUsageId;
extern const uint32_t _AndroidJNIHelper_CreateJavaRunnable_mF2857B8ED8956684A008DF60ADA5153EE1507178_MetadataUsageId;
extern const uint32_t _AndroidJNIHelper_DeleteJNIArgArray_mDD73C1CDE759BBD8E7FD2F5C30FAEC7B00F6023F_MetadataUsageId;
extern const uint32_t _AndroidJNIHelper_GetConstructorID_m491C2022BD1820550A43FF0B5EB54782503D5159_MetadataUsageId;
extern const uint32_t _AndroidJNIHelper_GetFieldID_m5D7930D0929F1ACF9321E2F784D7D802638A8D47_MetadataUsageId;
extern const uint32_t _AndroidJNIHelper_GetMethodIDFallback_mB0C0E5A27ECD7FA819E4FBB8220E1CE19309125F_MetadataUsageId;
extern const uint32_t _AndroidJNIHelper_GetMethodID_m12B12EB5027675EE985A9FE9634079BDA79709AB_MetadataUsageId;
extern const uint32_t _AndroidJNIHelper_GetSignature_m074EF61F920B7E1BCB9582E78CA6A49FD1EE1162_MetadataUsageId;
extern const uint32_t _AndroidJNIHelper_GetSignature_m43015E538F32185A250FC4D1732EEFC4740E3B0E_MetadataUsageId;
extern const uint32_t _AndroidJNIHelper_InvokeJavaProxyMethod_mF92923091814A5E820890D2CCE76C7A589F03192_MetadataUsageId;
extern const uint32_t _AndroidJNIHelper_UnboxArray_mC196889BC2288A01DCF80DA2E27F832FA7C7CE2E_MetadataUsageId;
extern const uint32_t _AndroidJNIHelper_Unbox_m8F6AFBE1E5344BD93DCE89A8C392CF2B7676DC26_MetadataUsageId;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct BooleanU5BU5D_t192C7579715690E25BD5EFED47F3E0FC9DCB2040;
struct ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821;
struct CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2;
struct DoubleU5BU5D_tF9383437DDA9EAC9F60627E9E6E2045CF7CB182D;
struct Int16U5BU5D_tDA0F0B2730337F72E44DB024BE9818FA8EDE8D28;
struct Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83;
struct Int64U5BU5D_tE04A3DEF6AF1C852A43B98A24EFB715806B37F5F;
struct IntPtrU5BU5D_t4DC01DCB9A6DF6C9792A6513595D7A11E637DCDD;
struct ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A;
struct SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5;
struct StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E;
struct AndroidJavaClassU5BU5D_tE3ED186B518D6D52F80504EB644E86979B84CB18;
struct AndroidJavaObjectU5BU5D_tAA78CD496655EFF43DB71506C66672DBE563003C;
struct jvalueU5BU5D_t15D5A2D5F08971A18428246F1999D516A4E9D975;


#ifndef RUNTIMEOBJECT_H
#define RUNTIMEOBJECT_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Object

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RUNTIMEOBJECT_H
struct Il2CppArrayBounds;
#ifndef RUNTIMEARRAY_H
#define RUNTIMEARRAY_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Array

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RUNTIMEARRAY_H
#ifndef STACK_T37723B68CC4FFD95F0F3D06A5D42D7DEE7569643_H
#define STACK_T37723B68CC4FFD95F0F3D06A5D42D7DEE7569643_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Stack
struct  Stack_t37723B68CC4FFD95F0F3D06A5D42D7DEE7569643  : public RuntimeObject
{
public:
	// System.Object[] System.Collections.Stack::_array
	ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* ____array_0;
	// System.Int32 System.Collections.Stack::_size
	int32_t ____size_1;
	// System.Int32 System.Collections.Stack::_version
	int32_t ____version_2;
	// System.Object System.Collections.Stack::_syncRoot
	RuntimeObject * ____syncRoot_3;

public:
	inline static int32_t get_offset_of__array_0() { return static_cast<int32_t>(offsetof(Stack_t37723B68CC4FFD95F0F3D06A5D42D7DEE7569643, ____array_0)); }
	inline ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* get__array_0() const { return ____array_0; }
	inline ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A** get_address_of__array_0() { return &____array_0; }
	inline void set__array_0(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* value)
	{
		____array_0 = value;
		Il2CppCodeGenWriteBarrier((&____array_0), value);
	}

	inline static int32_t get_offset_of__size_1() { return static_cast<int32_t>(offsetof(Stack_t37723B68CC4FFD95F0F3D06A5D42D7DEE7569643, ____size_1)); }
	inline int32_t get__size_1() const { return ____size_1; }
	inline int32_t* get_address_of__size_1() { return &____size_1; }
	inline void set__size_1(int32_t value)
	{
		____size_1 = value;
	}

	inline static int32_t get_offset_of__version_2() { return static_cast<int32_t>(offsetof(Stack_t37723B68CC4FFD95F0F3D06A5D42D7DEE7569643, ____version_2)); }
	inline int32_t get__version_2() const { return ____version_2; }
	inline int32_t* get_address_of__version_2() { return &____version_2; }
	inline void set__version_2(int32_t value)
	{
		____version_2 = value;
	}

	inline static int32_t get_offset_of__syncRoot_3() { return static_cast<int32_t>(offsetof(Stack_t37723B68CC4FFD95F0F3D06A5D42D7DEE7569643, ____syncRoot_3)); }
	inline RuntimeObject * get__syncRoot_3() const { return ____syncRoot_3; }
	inline RuntimeObject ** get_address_of__syncRoot_3() { return &____syncRoot_3; }
	inline void set__syncRoot_3(RuntimeObject * value)
	{
		____syncRoot_3 = value;
		Il2CppCodeGenWriteBarrier((&____syncRoot_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // STACK_T37723B68CC4FFD95F0F3D06A5D42D7DEE7569643_H
#ifndef EXCEPTION_T_H
#define EXCEPTION_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Exception
struct  Exception_t  : public RuntimeObject
{
public:
	// System.String System.Exception::_className
	String_t* ____className_1;
	// System.String System.Exception::_message
	String_t* ____message_2;
	// System.Collections.IDictionary System.Exception::_data
	RuntimeObject* ____data_3;
	// System.Exception System.Exception::_innerException
	Exception_t * ____innerException_4;
	// System.String System.Exception::_helpURL
	String_t* ____helpURL_5;
	// System.Object System.Exception::_stackTrace
	RuntimeObject * ____stackTrace_6;
	// System.String System.Exception::_stackTraceString
	String_t* ____stackTraceString_7;
	// System.String System.Exception::_remoteStackTraceString
	String_t* ____remoteStackTraceString_8;
	// System.Int32 System.Exception::_remoteStackIndex
	int32_t ____remoteStackIndex_9;
	// System.Object System.Exception::_dynamicMethods
	RuntimeObject * ____dynamicMethods_10;
	// System.Int32 System.Exception::_HResult
	int32_t ____HResult_11;
	// System.String System.Exception::_source
	String_t* ____source_12;
	// System.Runtime.Serialization.SafeSerializationManager System.Exception::_safeSerializationManager
	SafeSerializationManager_t4A754D86B0F784B18CBC36C073BA564BED109770 * ____safeSerializationManager_13;
	// System.Diagnostics.StackTrace[] System.Exception::captured_traces
	StackTraceU5BU5D_t855F09649EA34DEE7C1B6F088E0538E3CCC3F196* ___captured_traces_14;
	// System.IntPtr[] System.Exception::native_trace_ips
	IntPtrU5BU5D_t4DC01DCB9A6DF6C9792A6513595D7A11E637DCDD* ___native_trace_ips_15;

public:
	inline static int32_t get_offset_of__className_1() { return static_cast<int32_t>(offsetof(Exception_t, ____className_1)); }
	inline String_t* get__className_1() const { return ____className_1; }
	inline String_t** get_address_of__className_1() { return &____className_1; }
	inline void set__className_1(String_t* value)
	{
		____className_1 = value;
		Il2CppCodeGenWriteBarrier((&____className_1), value);
	}

	inline static int32_t get_offset_of__message_2() { return static_cast<int32_t>(offsetof(Exception_t, ____message_2)); }
	inline String_t* get__message_2() const { return ____message_2; }
	inline String_t** get_address_of__message_2() { return &____message_2; }
	inline void set__message_2(String_t* value)
	{
		____message_2 = value;
		Il2CppCodeGenWriteBarrier((&____message_2), value);
	}

	inline static int32_t get_offset_of__data_3() { return static_cast<int32_t>(offsetof(Exception_t, ____data_3)); }
	inline RuntimeObject* get__data_3() const { return ____data_3; }
	inline RuntimeObject** get_address_of__data_3() { return &____data_3; }
	inline void set__data_3(RuntimeObject* value)
	{
		____data_3 = value;
		Il2CppCodeGenWriteBarrier((&____data_3), value);
	}

	inline static int32_t get_offset_of__innerException_4() { return static_cast<int32_t>(offsetof(Exception_t, ____innerException_4)); }
	inline Exception_t * get__innerException_4() const { return ____innerException_4; }
	inline Exception_t ** get_address_of__innerException_4() { return &____innerException_4; }
	inline void set__innerException_4(Exception_t * value)
	{
		____innerException_4 = value;
		Il2CppCodeGenWriteBarrier((&____innerException_4), value);
	}

	inline static int32_t get_offset_of__helpURL_5() { return static_cast<int32_t>(offsetof(Exception_t, ____helpURL_5)); }
	inline String_t* get__helpURL_5() const { return ____helpURL_5; }
	inline String_t** get_address_of__helpURL_5() { return &____helpURL_5; }
	inline void set__helpURL_5(String_t* value)
	{
		____helpURL_5 = value;
		Il2CppCodeGenWriteBarrier((&____helpURL_5), value);
	}

	inline static int32_t get_offset_of__stackTrace_6() { return static_cast<int32_t>(offsetof(Exception_t, ____stackTrace_6)); }
	inline RuntimeObject * get__stackTrace_6() const { return ____stackTrace_6; }
	inline RuntimeObject ** get_address_of__stackTrace_6() { return &____stackTrace_6; }
	inline void set__stackTrace_6(RuntimeObject * value)
	{
		____stackTrace_6 = value;
		Il2CppCodeGenWriteBarrier((&____stackTrace_6), value);
	}

	inline static int32_t get_offset_of__stackTraceString_7() { return static_cast<int32_t>(offsetof(Exception_t, ____stackTraceString_7)); }
	inline String_t* get__stackTraceString_7() const { return ____stackTraceString_7; }
	inline String_t** get_address_of__stackTraceString_7() { return &____stackTraceString_7; }
	inline void set__stackTraceString_7(String_t* value)
	{
		____stackTraceString_7 = value;
		Il2CppCodeGenWriteBarrier((&____stackTraceString_7), value);
	}

	inline static int32_t get_offset_of__remoteStackTraceString_8() { return static_cast<int32_t>(offsetof(Exception_t, ____remoteStackTraceString_8)); }
	inline String_t* get__remoteStackTraceString_8() const { return ____remoteStackTraceString_8; }
	inline String_t** get_address_of__remoteStackTraceString_8() { return &____remoteStackTraceString_8; }
	inline void set__remoteStackTraceString_8(String_t* value)
	{
		____remoteStackTraceString_8 = value;
		Il2CppCodeGenWriteBarrier((&____remoteStackTraceString_8), value);
	}

	inline static int32_t get_offset_of__remoteStackIndex_9() { return static_cast<int32_t>(offsetof(Exception_t, ____remoteStackIndex_9)); }
	inline int32_t get__remoteStackIndex_9() const { return ____remoteStackIndex_9; }
	inline int32_t* get_address_of__remoteStackIndex_9() { return &____remoteStackIndex_9; }
	inline void set__remoteStackIndex_9(int32_t value)
	{
		____remoteStackIndex_9 = value;
	}

	inline static int32_t get_offset_of__dynamicMethods_10() { return static_cast<int32_t>(offsetof(Exception_t, ____dynamicMethods_10)); }
	inline RuntimeObject * get__dynamicMethods_10() const { return ____dynamicMethods_10; }
	inline RuntimeObject ** get_address_of__dynamicMethods_10() { return &____dynamicMethods_10; }
	inline void set__dynamicMethods_10(RuntimeObject * value)
	{
		____dynamicMethods_10 = value;
		Il2CppCodeGenWriteBarrier((&____dynamicMethods_10), value);
	}

	inline static int32_t get_offset_of__HResult_11() { return static_cast<int32_t>(offsetof(Exception_t, ____HResult_11)); }
	inline int32_t get__HResult_11() const { return ____HResult_11; }
	inline int32_t* get_address_of__HResult_11() { return &____HResult_11; }
	inline void set__HResult_11(int32_t value)
	{
		____HResult_11 = value;
	}

	inline static int32_t get_offset_of__source_12() { return static_cast<int32_t>(offsetof(Exception_t, ____source_12)); }
	inline String_t* get__source_12() const { return ____source_12; }
	inline String_t** get_address_of__source_12() { return &____source_12; }
	inline void set__source_12(String_t* value)
	{
		____source_12 = value;
		Il2CppCodeGenWriteBarrier((&____source_12), value);
	}

	inline static int32_t get_offset_of__safeSerializationManager_13() { return static_cast<int32_t>(offsetof(Exception_t, ____safeSerializationManager_13)); }
	inline SafeSerializationManager_t4A754D86B0F784B18CBC36C073BA564BED109770 * get__safeSerializationManager_13() const { return ____safeSerializationManager_13; }
	inline SafeSerializationManager_t4A754D86B0F784B18CBC36C073BA564BED109770 ** get_address_of__safeSerializationManager_13() { return &____safeSerializationManager_13; }
	inline void set__safeSerializationManager_13(SafeSerializationManager_t4A754D86B0F784B18CBC36C073BA564BED109770 * value)
	{
		____safeSerializationManager_13 = value;
		Il2CppCodeGenWriteBarrier((&____safeSerializationManager_13), value);
	}

	inline static int32_t get_offset_of_captured_traces_14() { return static_cast<int32_t>(offsetof(Exception_t, ___captured_traces_14)); }
	inline StackTraceU5BU5D_t855F09649EA34DEE7C1B6F088E0538E3CCC3F196* get_captured_traces_14() const { return ___captured_traces_14; }
	inline StackTraceU5BU5D_t855F09649EA34DEE7C1B6F088E0538E3CCC3F196** get_address_of_captured_traces_14() { return &___captured_traces_14; }
	inline void set_captured_traces_14(StackTraceU5BU5D_t855F09649EA34DEE7C1B6F088E0538E3CCC3F196* value)
	{
		___captured_traces_14 = value;
		Il2CppCodeGenWriteBarrier((&___captured_traces_14), value);
	}

	inline static int32_t get_offset_of_native_trace_ips_15() { return static_cast<int32_t>(offsetof(Exception_t, ___native_trace_ips_15)); }
	inline IntPtrU5BU5D_t4DC01DCB9A6DF6C9792A6513595D7A11E637DCDD* get_native_trace_ips_15() const { return ___native_trace_ips_15; }
	inline IntPtrU5BU5D_t4DC01DCB9A6DF6C9792A6513595D7A11E637DCDD** get_address_of_native_trace_ips_15() { return &___native_trace_ips_15; }
	inline void set_native_trace_ips_15(IntPtrU5BU5D_t4DC01DCB9A6DF6C9792A6513595D7A11E637DCDD* value)
	{
		___native_trace_ips_15 = value;
		Il2CppCodeGenWriteBarrier((&___native_trace_ips_15), value);
	}
};

struct Exception_t_StaticFields
{
public:
	// System.Object System.Exception::s_EDILock
	RuntimeObject * ___s_EDILock_0;

public:
	inline static int32_t get_offset_of_s_EDILock_0() { return static_cast<int32_t>(offsetof(Exception_t_StaticFields, ___s_EDILock_0)); }
	inline RuntimeObject * get_s_EDILock_0() const { return ___s_EDILock_0; }
	inline RuntimeObject ** get_address_of_s_EDILock_0() { return &___s_EDILock_0; }
	inline void set_s_EDILock_0(RuntimeObject * value)
	{
		___s_EDILock_0 = value;
		Il2CppCodeGenWriteBarrier((&___s_EDILock_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
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
	SafeSerializationManager_t4A754D86B0F784B18CBC36C073BA564BED109770 * ____safeSerializationManager_13;
	StackTraceU5BU5D_t855F09649EA34DEE7C1B6F088E0538E3CCC3F196* ___captured_traces_14;
	intptr_t* ___native_trace_ips_15;
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
	SafeSerializationManager_t4A754D86B0F784B18CBC36C073BA564BED109770 * ____safeSerializationManager_13;
	StackTraceU5BU5D_t855F09649EA34DEE7C1B6F088E0538E3CCC3F196* ___captured_traces_14;
	intptr_t* ___native_trace_ips_15;
};
#endif // EXCEPTION_T_H
#ifndef MEMBERINFO_T_H
#define MEMBERINFO_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.MemberInfo
struct  MemberInfo_t  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MEMBERINFO_T_H
#ifndef STRING_T_H
#define STRING_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.String
struct  String_t  : public RuntimeObject
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
		Il2CppCodeGenWriteBarrier((&___Empty_5), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // STRING_T_H
#ifndef STRINGBUILDER_T_H
#define STRINGBUILDER_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Text.StringBuilder
struct  StringBuilder_t  : public RuntimeObject
{
public:
	// System.Char[] System.Text.StringBuilder::m_ChunkChars
	CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* ___m_ChunkChars_0;
	// System.Text.StringBuilder System.Text.StringBuilder::m_ChunkPrevious
	StringBuilder_t * ___m_ChunkPrevious_1;
	// System.Int32 System.Text.StringBuilder::m_ChunkLength
	int32_t ___m_ChunkLength_2;
	// System.Int32 System.Text.StringBuilder::m_ChunkOffset
	int32_t ___m_ChunkOffset_3;
	// System.Int32 System.Text.StringBuilder::m_MaxCapacity
	int32_t ___m_MaxCapacity_4;

public:
	inline static int32_t get_offset_of_m_ChunkChars_0() { return static_cast<int32_t>(offsetof(StringBuilder_t, ___m_ChunkChars_0)); }
	inline CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* get_m_ChunkChars_0() const { return ___m_ChunkChars_0; }
	inline CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2** get_address_of_m_ChunkChars_0() { return &___m_ChunkChars_0; }
	inline void set_m_ChunkChars_0(CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* value)
	{
		___m_ChunkChars_0 = value;
		Il2CppCodeGenWriteBarrier((&___m_ChunkChars_0), value);
	}

	inline static int32_t get_offset_of_m_ChunkPrevious_1() { return static_cast<int32_t>(offsetof(StringBuilder_t, ___m_ChunkPrevious_1)); }
	inline StringBuilder_t * get_m_ChunkPrevious_1() const { return ___m_ChunkPrevious_1; }
	inline StringBuilder_t ** get_address_of_m_ChunkPrevious_1() { return &___m_ChunkPrevious_1; }
	inline void set_m_ChunkPrevious_1(StringBuilder_t * value)
	{
		___m_ChunkPrevious_1 = value;
		Il2CppCodeGenWriteBarrier((&___m_ChunkPrevious_1), value);
	}

	inline static int32_t get_offset_of_m_ChunkLength_2() { return static_cast<int32_t>(offsetof(StringBuilder_t, ___m_ChunkLength_2)); }
	inline int32_t get_m_ChunkLength_2() const { return ___m_ChunkLength_2; }
	inline int32_t* get_address_of_m_ChunkLength_2() { return &___m_ChunkLength_2; }
	inline void set_m_ChunkLength_2(int32_t value)
	{
		___m_ChunkLength_2 = value;
	}

	inline static int32_t get_offset_of_m_ChunkOffset_3() { return static_cast<int32_t>(offsetof(StringBuilder_t, ___m_ChunkOffset_3)); }
	inline int32_t get_m_ChunkOffset_3() const { return ___m_ChunkOffset_3; }
	inline int32_t* get_address_of_m_ChunkOffset_3() { return &___m_ChunkOffset_3; }
	inline void set_m_ChunkOffset_3(int32_t value)
	{
		___m_ChunkOffset_3 = value;
	}

	inline static int32_t get_offset_of_m_MaxCapacity_4() { return static_cast<int32_t>(offsetof(StringBuilder_t, ___m_MaxCapacity_4)); }
	inline int32_t get_m_MaxCapacity_4() const { return ___m_MaxCapacity_4; }
	inline int32_t* get_address_of_m_MaxCapacity_4() { return &___m_MaxCapacity_4; }
	inline void set_m_MaxCapacity_4(int32_t value)
	{
		___m_MaxCapacity_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // STRINGBUILDER_T_H
#ifndef VALUETYPE_T4D0C27076F7C36E76190FB3328E232BCB1CD1FFF_H
#define VALUETYPE_T4D0C27076F7C36E76190FB3328E232BCB1CD1FFF_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ValueType
struct  ValueType_t4D0C27076F7C36E76190FB3328E232BCB1CD1FFF  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_t4D0C27076F7C36E76190FB3328E232BCB1CD1FFF_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_t4D0C27076F7C36E76190FB3328E232BCB1CD1FFF_marshaled_com
{
};
#endif // VALUETYPE_T4D0C27076F7C36E76190FB3328E232BCB1CD1FFF_H
#ifndef ANDROIDJAVAOBJECT_T5B3829FB6E1DBC020F5BA17846F1351EAA982F8E_H
#define ANDROIDJAVAOBJECT_T5B3829FB6E1DBC020F5BA17846F1351EAA982F8E_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.AndroidJavaObject
struct  AndroidJavaObject_t5B3829FB6E1DBC020F5BA17846F1351EAA982F8E  : public RuntimeObject
{
public:
	// UnityEngine.GlobalJavaObjectRef UnityEngine.AndroidJavaObject::m_jobject
	GlobalJavaObjectRef_tC135ABE5FD0F787E7A2FAED9978EB2512579E22F * ___m_jobject_1;
	// UnityEngine.GlobalJavaObjectRef UnityEngine.AndroidJavaObject::m_jclass
	GlobalJavaObjectRef_tC135ABE5FD0F787E7A2FAED9978EB2512579E22F * ___m_jclass_2;

public:
	inline static int32_t get_offset_of_m_jobject_1() { return static_cast<int32_t>(offsetof(AndroidJavaObject_t5B3829FB6E1DBC020F5BA17846F1351EAA982F8E, ___m_jobject_1)); }
	inline GlobalJavaObjectRef_tC135ABE5FD0F787E7A2FAED9978EB2512579E22F * get_m_jobject_1() const { return ___m_jobject_1; }
	inline GlobalJavaObjectRef_tC135ABE5FD0F787E7A2FAED9978EB2512579E22F ** get_address_of_m_jobject_1() { return &___m_jobject_1; }
	inline void set_m_jobject_1(GlobalJavaObjectRef_tC135ABE5FD0F787E7A2FAED9978EB2512579E22F * value)
	{
		___m_jobject_1 = value;
		Il2CppCodeGenWriteBarrier((&___m_jobject_1), value);
	}

	inline static int32_t get_offset_of_m_jclass_2() { return static_cast<int32_t>(offsetof(AndroidJavaObject_t5B3829FB6E1DBC020F5BA17846F1351EAA982F8E, ___m_jclass_2)); }
	inline GlobalJavaObjectRef_tC135ABE5FD0F787E7A2FAED9978EB2512579E22F * get_m_jclass_2() const { return ___m_jclass_2; }
	inline GlobalJavaObjectRef_tC135ABE5FD0F787E7A2FAED9978EB2512579E22F ** get_address_of_m_jclass_2() { return &___m_jclass_2; }
	inline void set_m_jclass_2(GlobalJavaObjectRef_tC135ABE5FD0F787E7A2FAED9978EB2512579E22F * value)
	{
		___m_jclass_2 = value;
		Il2CppCodeGenWriteBarrier((&___m_jclass_2), value);
	}
};

struct AndroidJavaObject_t5B3829FB6E1DBC020F5BA17846F1351EAA982F8E_StaticFields
{
public:
	// System.Boolean UnityEngine.AndroidJavaObject::enableDebugPrints
	bool ___enableDebugPrints_0;
	// UnityEngine.AndroidJavaClass UnityEngine.AndroidJavaObject::s_JavaLangClass
	AndroidJavaClass_tFC9C1064BF4849691FEDC988743C0C271C62FDC8 * ___s_JavaLangClass_3;

public:
	inline static int32_t get_offset_of_enableDebugPrints_0() { return static_cast<int32_t>(offsetof(AndroidJavaObject_t5B3829FB6E1DBC020F5BA17846F1351EAA982F8E_StaticFields, ___enableDebugPrints_0)); }
	inline bool get_enableDebugPrints_0() const { return ___enableDebugPrints_0; }
	inline bool* get_address_of_enableDebugPrints_0() { return &___enableDebugPrints_0; }
	inline void set_enableDebugPrints_0(bool value)
	{
		___enableDebugPrints_0 = value;
	}

	inline static int32_t get_offset_of_s_JavaLangClass_3() { return static_cast<int32_t>(offsetof(AndroidJavaObject_t5B3829FB6E1DBC020F5BA17846F1351EAA982F8E_StaticFields, ___s_JavaLangClass_3)); }
	inline AndroidJavaClass_tFC9C1064BF4849691FEDC988743C0C271C62FDC8 * get_s_JavaLangClass_3() const { return ___s_JavaLangClass_3; }
	inline AndroidJavaClass_tFC9C1064BF4849691FEDC988743C0C271C62FDC8 ** get_address_of_s_JavaLangClass_3() { return &___s_JavaLangClass_3; }
	inline void set_s_JavaLangClass_3(AndroidJavaClass_tFC9C1064BF4849691FEDC988743C0C271C62FDC8 * value)
	{
		___s_JavaLangClass_3 = value;
		Il2CppCodeGenWriteBarrier((&___s_JavaLangClass_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ANDROIDJAVAOBJECT_T5B3829FB6E1DBC020F5BA17846F1351EAA982F8E_H
#ifndef CUSTOMYIELDINSTRUCTION_T819BB0973AFF22766749FF087B8AEFEAF3C2CB7D_H
#define CUSTOMYIELDINSTRUCTION_T819BB0973AFF22766749FF087B8AEFEAF3C2CB7D_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.CustomYieldInstruction
struct  CustomYieldInstruction_t819BB0973AFF22766749FF087B8AEFEAF3C2CB7D  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CUSTOMYIELDINSTRUCTION_T819BB0973AFF22766749FF087B8AEFEAF3C2CB7D_H
#ifndef YIELDINSTRUCTION_T836035AC7BD07A3C7909F7AD2A5B42DE99D91C44_H
#define YIELDINSTRUCTION_T836035AC7BD07A3C7909F7AD2A5B42DE99D91C44_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.YieldInstruction
struct  YieldInstruction_t836035AC7BD07A3C7909F7AD2A5B42DE99D91C44  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.YieldInstruction
struct YieldInstruction_t836035AC7BD07A3C7909F7AD2A5B42DE99D91C44_marshaled_pinvoke
{
};
// Native definition for COM marshalling of UnityEngine.YieldInstruction
struct YieldInstruction_t836035AC7BD07A3C7909F7AD2A5B42DE99D91C44_marshaled_com
{
};
#endif // YIELDINSTRUCTION_T836035AC7BD07A3C7909F7AD2A5B42DE99D91C44_H
#ifndef _ANDROIDJNIHELPER_T59BA163482B4C65C90D89695B7A241C902EBA386_H
#define _ANDROIDJNIHELPER_T59BA163482B4C65C90D89695B7A241C902EBA386_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine._AndroidJNIHelper
struct  _AndroidJNIHelper_t59BA163482B4C65C90D89695B7A241C902EBA386  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // _ANDROIDJNIHELPER_T59BA163482B4C65C90D89695B7A241C902EBA386_H
#ifndef NETFXCOREEXTENSIONS_T7D32855D478E08AB317D48832133C0584F744747_H
#define NETFXCOREEXTENSIONS_T7D32855D478E08AB317D48832133C0584F744747_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngineInternal.NetFxCoreExtensions
struct  NetFxCoreExtensions_t7D32855D478E08AB317D48832133C0584F744747  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // NETFXCOREEXTENSIONS_T7D32855D478E08AB317D48832133C0584F744747_H
#ifndef SCRIPTINGUTILS_T6E4EF749FD91F502695384B7D76CFD09DDA67F44_H
#define SCRIPTINGUTILS_T6E4EF749FD91F502695384B7D76CFD09DDA67F44_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngineInternal.ScriptingUtils
struct  ScriptingUtils_t6E4EF749FD91F502695384B7D76CFD09DDA67F44  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SCRIPTINGUTILS_T6E4EF749FD91F502695384B7D76CFD09DDA67F44_H
#ifndef BOOLEAN_TB53F6830F670160873277339AA58F15CAED4399C_H
#define BOOLEAN_TB53F6830F670160873277339AA58F15CAED4399C_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Boolean
struct  Boolean_tB53F6830F670160873277339AA58F15CAED4399C 
{
public:
	// System.Boolean System.Boolean::m_value
	bool ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Boolean_tB53F6830F670160873277339AA58F15CAED4399C, ___m_value_0)); }
	inline bool get_m_value_0() const { return ___m_value_0; }
	inline bool* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(bool value)
	{
		___m_value_0 = value;
	}
};

struct Boolean_tB53F6830F670160873277339AA58F15CAED4399C_StaticFields
{
public:
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_5;
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_6;

public:
	inline static int32_t get_offset_of_TrueString_5() { return static_cast<int32_t>(offsetof(Boolean_tB53F6830F670160873277339AA58F15CAED4399C_StaticFields, ___TrueString_5)); }
	inline String_t* get_TrueString_5() const { return ___TrueString_5; }
	inline String_t** get_address_of_TrueString_5() { return &___TrueString_5; }
	inline void set_TrueString_5(String_t* value)
	{
		___TrueString_5 = value;
		Il2CppCodeGenWriteBarrier((&___TrueString_5), value);
	}

	inline static int32_t get_offset_of_FalseString_6() { return static_cast<int32_t>(offsetof(Boolean_tB53F6830F670160873277339AA58F15CAED4399C_StaticFields, ___FalseString_6)); }
	inline String_t* get_FalseString_6() const { return ___FalseString_6; }
	inline String_t** get_address_of_FalseString_6() { return &___FalseString_6; }
	inline void set_FalseString_6(String_t* value)
	{
		___FalseString_6 = value;
		Il2CppCodeGenWriteBarrier((&___FalseString_6), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BOOLEAN_TB53F6830F670160873277339AA58F15CAED4399C_H
#ifndef BYTE_TF87C579059BD4633E6840EBBBEEF899C6E33EF07_H
#define BYTE_TF87C579059BD4633E6840EBBBEEF899C6E33EF07_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Byte
struct  Byte_tF87C579059BD4633E6840EBBBEEF899C6E33EF07 
{
public:
	// System.Byte System.Byte::m_value
	uint8_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Byte_tF87C579059BD4633E6840EBBBEEF899C6E33EF07, ___m_value_0)); }
	inline uint8_t get_m_value_0() const { return ___m_value_0; }
	inline uint8_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(uint8_t value)
	{
		___m_value_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BYTE_TF87C579059BD4633E6840EBBBEEF899C6E33EF07_H
#ifndef CHAR_TBF22D9FC341BE970735250BB6FF1A4A92BBA58B9_H
#define CHAR_TBF22D9FC341BE970735250BB6FF1A4A92BBA58B9_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Char
struct  Char_tBF22D9FC341BE970735250BB6FF1A4A92BBA58B9 
{
public:
	// System.Char System.Char::m_value
	Il2CppChar ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Char_tBF22D9FC341BE970735250BB6FF1A4A92BBA58B9, ___m_value_0)); }
	inline Il2CppChar get_m_value_0() const { return ___m_value_0; }
	inline Il2CppChar* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(Il2CppChar value)
	{
		___m_value_0 = value;
	}
};

struct Char_tBF22D9FC341BE970735250BB6FF1A4A92BBA58B9_StaticFields
{
public:
	// System.Byte[] System.Char::categoryForLatin1
	ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* ___categoryForLatin1_3;

public:
	inline static int32_t get_offset_of_categoryForLatin1_3() { return static_cast<int32_t>(offsetof(Char_tBF22D9FC341BE970735250BB6FF1A4A92BBA58B9_StaticFields, ___categoryForLatin1_3)); }
	inline ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* get_categoryForLatin1_3() const { return ___categoryForLatin1_3; }
	inline ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821** get_address_of_categoryForLatin1_3() { return &___categoryForLatin1_3; }
	inline void set_categoryForLatin1_3(ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* value)
	{
		___categoryForLatin1_3 = value;
		Il2CppCodeGenWriteBarrier((&___categoryForLatin1_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CHAR_TBF22D9FC341BE970735250BB6FF1A4A92BBA58B9_H
#ifndef DOUBLE_T358B8F23BDC52A5DD700E727E204F9F7CDE12409_H
#define DOUBLE_T358B8F23BDC52A5DD700E727E204F9F7CDE12409_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Double
struct  Double_t358B8F23BDC52A5DD700E727E204F9F7CDE12409 
{
public:
	// System.Double System.Double::m_value
	double ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Double_t358B8F23BDC52A5DD700E727E204F9F7CDE12409, ___m_value_0)); }
	inline double get_m_value_0() const { return ___m_value_0; }
	inline double* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(double value)
	{
		___m_value_0 = value;
	}
};

struct Double_t358B8F23BDC52A5DD700E727E204F9F7CDE12409_StaticFields
{
public:
	// System.Double System.Double::NegativeZero
	double ___NegativeZero_7;

public:
	inline static int32_t get_offset_of_NegativeZero_7() { return static_cast<int32_t>(offsetof(Double_t358B8F23BDC52A5DD700E727E204F9F7CDE12409_StaticFields, ___NegativeZero_7)); }
	inline double get_NegativeZero_7() const { return ___NegativeZero_7; }
	inline double* get_address_of_NegativeZero_7() { return &___NegativeZero_7; }
	inline void set_NegativeZero_7(double value)
	{
		___NegativeZero_7 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DOUBLE_T358B8F23BDC52A5DD700E727E204F9F7CDE12409_H
#ifndef ENUM_T2AF27C02B8653AE29442467390005ABC74D8F521_H
#define ENUM_T2AF27C02B8653AE29442467390005ABC74D8F521_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Enum
struct  Enum_t2AF27C02B8653AE29442467390005ABC74D8F521  : public ValueType_t4D0C27076F7C36E76190FB3328E232BCB1CD1FFF
{
public:

public:
};

struct Enum_t2AF27C02B8653AE29442467390005ABC74D8F521_StaticFields
{
public:
	// System.Char[] System.Enum::enumSeperatorCharArray
	CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* ___enumSeperatorCharArray_0;

public:
	inline static int32_t get_offset_of_enumSeperatorCharArray_0() { return static_cast<int32_t>(offsetof(Enum_t2AF27C02B8653AE29442467390005ABC74D8F521_StaticFields, ___enumSeperatorCharArray_0)); }
	inline CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* get_enumSeperatorCharArray_0() const { return ___enumSeperatorCharArray_0; }
	inline CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2** get_address_of_enumSeperatorCharArray_0() { return &___enumSeperatorCharArray_0; }
	inline void set_enumSeperatorCharArray_0(CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* value)
	{
		___enumSeperatorCharArray_0 = value;
		Il2CppCodeGenWriteBarrier((&___enumSeperatorCharArray_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.Enum
struct Enum_t2AF27C02B8653AE29442467390005ABC74D8F521_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.Enum
struct Enum_t2AF27C02B8653AE29442467390005ABC74D8F521_marshaled_com
{
};
#endif // ENUM_T2AF27C02B8653AE29442467390005ABC74D8F521_H
#ifndef INT16_T823A20635DAF5A3D93A1E01CFBF3CBA27CF00B4D_H
#define INT16_T823A20635DAF5A3D93A1E01CFBF3CBA27CF00B4D_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Int16
struct  Int16_t823A20635DAF5A3D93A1E01CFBF3CBA27CF00B4D 
{
public:
	// System.Int16 System.Int16::m_value
	int16_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Int16_t823A20635DAF5A3D93A1E01CFBF3CBA27CF00B4D, ___m_value_0)); }
	inline int16_t get_m_value_0() const { return ___m_value_0; }
	inline int16_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(int16_t value)
	{
		___m_value_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INT16_T823A20635DAF5A3D93A1E01CFBF3CBA27CF00B4D_H
#ifndef INT32_T585191389E07734F19F3156FF88FB3EF4800D102_H
#define INT32_T585191389E07734F19F3156FF88FB3EF4800D102_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Int32
struct  Int32_t585191389E07734F19F3156FF88FB3EF4800D102 
{
public:
	// System.Int32 System.Int32::m_value
	int32_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Int32_t585191389E07734F19F3156FF88FB3EF4800D102, ___m_value_0)); }
	inline int32_t get_m_value_0() const { return ___m_value_0; }
	inline int32_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(int32_t value)
	{
		___m_value_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INT32_T585191389E07734F19F3156FF88FB3EF4800D102_H
#ifndef INT64_T7A386C2FF7B0280A0F516992401DDFCF0FF7B436_H
#define INT64_T7A386C2FF7B0280A0F516992401DDFCF0FF7B436_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Int64
struct  Int64_t7A386C2FF7B0280A0F516992401DDFCF0FF7B436 
{
public:
	// System.Int64 System.Int64::m_value
	int64_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Int64_t7A386C2FF7B0280A0F516992401DDFCF0FF7B436, ___m_value_0)); }
	inline int64_t get_m_value_0() const { return ___m_value_0; }
	inline int64_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(int64_t value)
	{
		___m_value_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INT64_T7A386C2FF7B0280A0F516992401DDFCF0FF7B436_H
#ifndef INTPTR_T_H
#define INTPTR_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.IntPtr
struct  IntPtr_t 
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

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INTPTR_T_H
#ifndef METHODBASE_T_H
#define METHODBASE_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.MethodBase
struct  MethodBase_t  : public MemberInfo_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // METHODBASE_T_H
#ifndef SINGLE_TDDDA9169C4E4E308AC6D7A824F9B28DC82204AE1_H
#define SINGLE_TDDDA9169C4E4E308AC6D7A824F9B28DC82204AE1_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Single
struct  Single_tDDDA9169C4E4E308AC6D7A824F9B28DC82204AE1 
{
public:
	// System.Single System.Single::m_value
	float ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Single_tDDDA9169C4E4E308AC6D7A824F9B28DC82204AE1, ___m_value_0)); }
	inline float get_m_value_0() const { return ___m_value_0; }
	inline float* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(float value)
	{
		___m_value_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SINGLE_TDDDA9169C4E4E308AC6D7A824F9B28DC82204AE1_H
#ifndef SYSTEMEXCEPTION_T5380468142AA850BE4A341D7AF3EAB9C78746782_H
#define SYSTEMEXCEPTION_T5380468142AA850BE4A341D7AF3EAB9C78746782_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.SystemException
struct  SystemException_t5380468142AA850BE4A341D7AF3EAB9C78746782  : public Exception_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SYSTEMEXCEPTION_T5380468142AA850BE4A341D7AF3EAB9C78746782_H
#ifndef VOID_T22962CB4C05B1D89B55A6E1139F0E87A90987017_H
#define VOID_T22962CB4C05B1D89B55A6E1139F0E87A90987017_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Void
struct  Void_t22962CB4C05B1D89B55A6E1139F0E87A90987017 
{
public:
	union
	{
		struct
		{
		};
		uint8_t Void_t22962CB4C05B1D89B55A6E1139F0E87A90987017__padding[1];
	};

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VOID_T22962CB4C05B1D89B55A6E1139F0E87A90987017_H
#ifndef ANDROIDJAVACLASS_TFC9C1064BF4849691FEDC988743C0C271C62FDC8_H
#define ANDROIDJAVACLASS_TFC9C1064BF4849691FEDC988743C0C271C62FDC8_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.AndroidJavaClass
struct  AndroidJavaClass_tFC9C1064BF4849691FEDC988743C0C271C62FDC8  : public AndroidJavaObject_t5B3829FB6E1DBC020F5BA17846F1351EAA982F8E
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ANDROIDJAVACLASS_TFC9C1064BF4849691FEDC988743C0C271C62FDC8_H
#ifndef VECTOR3_TDCF05E21F632FE2BA260C06E0D10CA81513E6720_H
#define VECTOR3_TDCF05E21F632FE2BA260C06E0D10CA81513E6720_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Vector3
struct  Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 
{
public:
	// System.Single UnityEngine.Vector3::x
	float ___x_2;
	// System.Single UnityEngine.Vector3::y
	float ___y_3;
	// System.Single UnityEngine.Vector3::z
	float ___z_4;

public:
	inline static int32_t get_offset_of_x_2() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720, ___x_2)); }
	inline float get_x_2() const { return ___x_2; }
	inline float* get_address_of_x_2() { return &___x_2; }
	inline void set_x_2(float value)
	{
		___x_2 = value;
	}

	inline static int32_t get_offset_of_y_3() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720, ___y_3)); }
	inline float get_y_3() const { return ___y_3; }
	inline float* get_address_of_y_3() { return &___y_3; }
	inline void set_y_3(float value)
	{
		___y_3 = value;
	}

	inline static int32_t get_offset_of_z_4() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720, ___z_4)); }
	inline float get_z_4() const { return ___z_4; }
	inline float* get_address_of_z_4() { return &___z_4; }
	inline void set_z_4(float value)
	{
		___z_4 = value;
	}
};

struct Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields
{
public:
	// UnityEngine.Vector3 UnityEngine.Vector3::zeroVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___zeroVector_5;
	// UnityEngine.Vector3 UnityEngine.Vector3::oneVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___oneVector_6;
	// UnityEngine.Vector3 UnityEngine.Vector3::upVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___upVector_7;
	// UnityEngine.Vector3 UnityEngine.Vector3::downVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___downVector_8;
	// UnityEngine.Vector3 UnityEngine.Vector3::leftVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___leftVector_9;
	// UnityEngine.Vector3 UnityEngine.Vector3::rightVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___rightVector_10;
	// UnityEngine.Vector3 UnityEngine.Vector3::forwardVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___forwardVector_11;
	// UnityEngine.Vector3 UnityEngine.Vector3::backVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___backVector_12;
	// UnityEngine.Vector3 UnityEngine.Vector3::positiveInfinityVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___positiveInfinityVector_13;
	// UnityEngine.Vector3 UnityEngine.Vector3::negativeInfinityVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___negativeInfinityVector_14;

public:
	inline static int32_t get_offset_of_zeroVector_5() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___zeroVector_5)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_zeroVector_5() const { return ___zeroVector_5; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_zeroVector_5() { return &___zeroVector_5; }
	inline void set_zeroVector_5(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___zeroVector_5 = value;
	}

	inline static int32_t get_offset_of_oneVector_6() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___oneVector_6)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_oneVector_6() const { return ___oneVector_6; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_oneVector_6() { return &___oneVector_6; }
	inline void set_oneVector_6(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___oneVector_6 = value;
	}

	inline static int32_t get_offset_of_upVector_7() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___upVector_7)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_upVector_7() const { return ___upVector_7; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_upVector_7() { return &___upVector_7; }
	inline void set_upVector_7(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___upVector_7 = value;
	}

	inline static int32_t get_offset_of_downVector_8() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___downVector_8)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_downVector_8() const { return ___downVector_8; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_downVector_8() { return &___downVector_8; }
	inline void set_downVector_8(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___downVector_8 = value;
	}

	inline static int32_t get_offset_of_leftVector_9() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___leftVector_9)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_leftVector_9() const { return ___leftVector_9; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_leftVector_9() { return &___leftVector_9; }
	inline void set_leftVector_9(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___leftVector_9 = value;
	}

	inline static int32_t get_offset_of_rightVector_10() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___rightVector_10)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_rightVector_10() const { return ___rightVector_10; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_rightVector_10() { return &___rightVector_10; }
	inline void set_rightVector_10(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___rightVector_10 = value;
	}

	inline static int32_t get_offset_of_forwardVector_11() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___forwardVector_11)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_forwardVector_11() const { return ___forwardVector_11; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_forwardVector_11() { return &___forwardVector_11; }
	inline void set_forwardVector_11(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___forwardVector_11 = value;
	}

	inline static int32_t get_offset_of_backVector_12() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___backVector_12)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_backVector_12() const { return ___backVector_12; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_backVector_12() { return &___backVector_12; }
	inline void set_backVector_12(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___backVector_12 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_13() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___positiveInfinityVector_13)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_positiveInfinityVector_13() const { return ___positiveInfinityVector_13; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_positiveInfinityVector_13() { return &___positiveInfinityVector_13; }
	inline void set_positiveInfinityVector_13(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___positiveInfinityVector_13 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_14() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___negativeInfinityVector_14)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_negativeInfinityVector_14() const { return ___negativeInfinityVector_14; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_negativeInfinityVector_14() { return &___negativeInfinityVector_14; }
	inline void set_negativeInfinityVector_14(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___negativeInfinityVector_14 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VECTOR3_TDCF05E21F632FE2BA260C06E0D10CA81513E6720_H
#ifndef VECTOR4_TD148D6428C3F8FF6CD998F82090113C2B490B76E_H
#define VECTOR4_TD148D6428C3F8FF6CD998F82090113C2B490B76E_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Vector4
struct  Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E 
{
public:
	// System.Single UnityEngine.Vector4::x
	float ___x_1;
	// System.Single UnityEngine.Vector4::y
	float ___y_2;
	// System.Single UnityEngine.Vector4::z
	float ___z_3;
	// System.Single UnityEngine.Vector4::w
	float ___w_4;

public:
	inline static int32_t get_offset_of_x_1() { return static_cast<int32_t>(offsetof(Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E, ___x_1)); }
	inline float get_x_1() const { return ___x_1; }
	inline float* get_address_of_x_1() { return &___x_1; }
	inline void set_x_1(float value)
	{
		___x_1 = value;
	}

	inline static int32_t get_offset_of_y_2() { return static_cast<int32_t>(offsetof(Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E, ___y_2)); }
	inline float get_y_2() const { return ___y_2; }
	inline float* get_address_of_y_2() { return &___y_2; }
	inline void set_y_2(float value)
	{
		___y_2 = value;
	}

	inline static int32_t get_offset_of_z_3() { return static_cast<int32_t>(offsetof(Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E, ___z_3)); }
	inline float get_z_3() const { return ___z_3; }
	inline float* get_address_of_z_3() { return &___z_3; }
	inline void set_z_3(float value)
	{
		___z_3 = value;
	}

	inline static int32_t get_offset_of_w_4() { return static_cast<int32_t>(offsetof(Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E, ___w_4)); }
	inline float get_w_4() const { return ___w_4; }
	inline float* get_address_of_w_4() { return &___w_4; }
	inline void set_w_4(float value)
	{
		___w_4 = value;
	}
};

struct Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E_StaticFields
{
public:
	// UnityEngine.Vector4 UnityEngine.Vector4::zeroVector
	Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  ___zeroVector_5;
	// UnityEngine.Vector4 UnityEngine.Vector4::oneVector
	Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  ___oneVector_6;
	// UnityEngine.Vector4 UnityEngine.Vector4::positiveInfinityVector
	Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  ___positiveInfinityVector_7;
	// UnityEngine.Vector4 UnityEngine.Vector4::negativeInfinityVector
	Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  ___negativeInfinityVector_8;

public:
	inline static int32_t get_offset_of_zeroVector_5() { return static_cast<int32_t>(offsetof(Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E_StaticFields, ___zeroVector_5)); }
	inline Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  get_zeroVector_5() const { return ___zeroVector_5; }
	inline Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E * get_address_of_zeroVector_5() { return &___zeroVector_5; }
	inline void set_zeroVector_5(Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  value)
	{
		___zeroVector_5 = value;
	}

	inline static int32_t get_offset_of_oneVector_6() { return static_cast<int32_t>(offsetof(Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E_StaticFields, ___oneVector_6)); }
	inline Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  get_oneVector_6() const { return ___oneVector_6; }
	inline Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E * get_address_of_oneVector_6() { return &___oneVector_6; }
	inline void set_oneVector_6(Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  value)
	{
		___oneVector_6 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_7() { return static_cast<int32_t>(offsetof(Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E_StaticFields, ___positiveInfinityVector_7)); }
	inline Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  get_positiveInfinityVector_7() const { return ___positiveInfinityVector_7; }
	inline Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E * get_address_of_positiveInfinityVector_7() { return &___positiveInfinityVector_7; }
	inline void set_positiveInfinityVector_7(Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  value)
	{
		___positiveInfinityVector_7 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_8() { return static_cast<int32_t>(offsetof(Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E_StaticFields, ___negativeInfinityVector_8)); }
	inline Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  get_negativeInfinityVector_8() const { return ___negativeInfinityVector_8; }
	inline Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E * get_address_of_negativeInfinityVector_8() { return &___negativeInfinityVector_8; }
	inline void set_negativeInfinityVector_8(Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  value)
	{
		___negativeInfinityVector_8 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VECTOR4_TD148D6428C3F8FF6CD998F82090113C2B490B76E_H
#ifndef WAITFORENDOFFRAME_T75980FB3F246D6AD36A85CA2BFDF8474E5EEBCCA_H
#define WAITFORENDOFFRAME_T75980FB3F246D6AD36A85CA2BFDF8474E5EEBCCA_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.WaitForEndOfFrame
struct  WaitForEndOfFrame_t75980FB3F246D6AD36A85CA2BFDF8474E5EEBCCA  : public YieldInstruction_t836035AC7BD07A3C7909F7AD2A5B42DE99D91C44
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // WAITFORENDOFFRAME_T75980FB3F246D6AD36A85CA2BFDF8474E5EEBCCA_H
#ifndef WAITFORFIXEDUPDATE_T8801328F075019AF6B6150B20EC343935A29FF97_H
#define WAITFORFIXEDUPDATE_T8801328F075019AF6B6150B20EC343935A29FF97_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.WaitForFixedUpdate
struct  WaitForFixedUpdate_t8801328F075019AF6B6150B20EC343935A29FF97  : public YieldInstruction_t836035AC7BD07A3C7909F7AD2A5B42DE99D91C44
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // WAITFORFIXEDUPDATE_T8801328F075019AF6B6150B20EC343935A29FF97_H
#ifndef WAITFORSECONDS_T3E9E78D3BB53F03F96C7F28BA9B9086CD1A5F4E8_H
#define WAITFORSECONDS_T3E9E78D3BB53F03F96C7F28BA9B9086CD1A5F4E8_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.WaitForSeconds
struct  WaitForSeconds_t3E9E78D3BB53F03F96C7F28BA9B9086CD1A5F4E8  : public YieldInstruction_t836035AC7BD07A3C7909F7AD2A5B42DE99D91C44
{
public:
	// System.Single UnityEngine.WaitForSeconds::m_Seconds
	float ___m_Seconds_0;

public:
	inline static int32_t get_offset_of_m_Seconds_0() { return static_cast<int32_t>(offsetof(WaitForSeconds_t3E9E78D3BB53F03F96C7F28BA9B9086CD1A5F4E8, ___m_Seconds_0)); }
	inline float get_m_Seconds_0() const { return ___m_Seconds_0; }
	inline float* get_address_of_m_Seconds_0() { return &___m_Seconds_0; }
	inline void set_m_Seconds_0(float value)
	{
		___m_Seconds_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.WaitForSeconds
struct WaitForSeconds_t3E9E78D3BB53F03F96C7F28BA9B9086CD1A5F4E8_marshaled_pinvoke : public YieldInstruction_t836035AC7BD07A3C7909F7AD2A5B42DE99D91C44_marshaled_pinvoke
{
	float ___m_Seconds_0;
};
// Native definition for COM marshalling of UnityEngine.WaitForSeconds
struct WaitForSeconds_t3E9E78D3BB53F03F96C7F28BA9B9086CD1A5F4E8_marshaled_com : public YieldInstruction_t836035AC7BD07A3C7909F7AD2A5B42DE99D91C44_marshaled_com
{
	float ___m_Seconds_0;
};
#endif // WAITFORSECONDS_T3E9E78D3BB53F03F96C7F28BA9B9086CD1A5F4E8_H
#ifndef WAITFORSECONDSREALTIME_T0CF361107C4A9E25E0D4CF2F37732CE785235739_H
#define WAITFORSECONDSREALTIME_T0CF361107C4A9E25E0D4CF2F37732CE785235739_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.WaitForSecondsRealtime
struct  WaitForSecondsRealtime_t0CF361107C4A9E25E0D4CF2F37732CE785235739  : public CustomYieldInstruction_t819BB0973AFF22766749FF087B8AEFEAF3C2CB7D
{
public:
	// System.Single UnityEngine.WaitForSecondsRealtime::<waitTime>k__BackingField
	float ___U3CwaitTimeU3Ek__BackingField_0;
	// System.Single UnityEngine.WaitForSecondsRealtime::m_WaitUntilTime
	float ___m_WaitUntilTime_1;

public:
	inline static int32_t get_offset_of_U3CwaitTimeU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(WaitForSecondsRealtime_t0CF361107C4A9E25E0D4CF2F37732CE785235739, ___U3CwaitTimeU3Ek__BackingField_0)); }
	inline float get_U3CwaitTimeU3Ek__BackingField_0() const { return ___U3CwaitTimeU3Ek__BackingField_0; }
	inline float* get_address_of_U3CwaitTimeU3Ek__BackingField_0() { return &___U3CwaitTimeU3Ek__BackingField_0; }
	inline void set_U3CwaitTimeU3Ek__BackingField_0(float value)
	{
		___U3CwaitTimeU3Ek__BackingField_0 = value;
	}

	inline static int32_t get_offset_of_m_WaitUntilTime_1() { return static_cast<int32_t>(offsetof(WaitForSecondsRealtime_t0CF361107C4A9E25E0D4CF2F37732CE785235739, ___m_WaitUntilTime_1)); }
	inline float get_m_WaitUntilTime_1() const { return ___m_WaitUntilTime_1; }
	inline float* get_address_of_m_WaitUntilTime_1() { return &___m_WaitUntilTime_1; }
	inline void set_m_WaitUntilTime_1(float value)
	{
		___m_WaitUntilTime_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // WAITFORSECONDSREALTIME_T0CF361107C4A9E25E0D4CF2F37732CE785235739_H
#ifndef GENERICSTACK_TC59D21E8DBC50F3C608479C942200AC44CA2D5BC_H
#define GENERICSTACK_TC59D21E8DBC50F3C608479C942200AC44CA2D5BC_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngineInternal.GenericStack
struct  GenericStack_tC59D21E8DBC50F3C608479C942200AC44CA2D5BC  : public Stack_t37723B68CC4FFD95F0F3D06A5D42D7DEE7569643
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // GENERICSTACK_TC59D21E8DBC50F3C608479C942200AC44CA2D5BC_H
#ifndef DELEGATE_T_H
#define DELEGATE_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Delegate
struct  Delegate_t  : public RuntimeObject
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
	DelegateData_t1BF9F691B56DAE5F8C28C5E084FDE94F15F27BBE * ___data_9;
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
		Il2CppCodeGenWriteBarrier((&___m_target_2), value);
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
		Il2CppCodeGenWriteBarrier((&___method_info_7), value);
	}

	inline static int32_t get_offset_of_original_method_info_8() { return static_cast<int32_t>(offsetof(Delegate_t, ___original_method_info_8)); }
	inline MethodInfo_t * get_original_method_info_8() const { return ___original_method_info_8; }
	inline MethodInfo_t ** get_address_of_original_method_info_8() { return &___original_method_info_8; }
	inline void set_original_method_info_8(MethodInfo_t * value)
	{
		___original_method_info_8 = value;
		Il2CppCodeGenWriteBarrier((&___original_method_info_8), value);
	}

	inline static int32_t get_offset_of_data_9() { return static_cast<int32_t>(offsetof(Delegate_t, ___data_9)); }
	inline DelegateData_t1BF9F691B56DAE5F8C28C5E084FDE94F15F27BBE * get_data_9() const { return ___data_9; }
	inline DelegateData_t1BF9F691B56DAE5F8C28C5E084FDE94F15F27BBE ** get_address_of_data_9() { return &___data_9; }
	inline void set_data_9(DelegateData_t1BF9F691B56DAE5F8C28C5E084FDE94F15F27BBE * value)
	{
		___data_9 = value;
		Il2CppCodeGenWriteBarrier((&___data_9), value);
	}

	inline static int32_t get_offset_of_method_is_virtual_10() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_is_virtual_10)); }
	inline bool get_method_is_virtual_10() const { return ___method_is_virtual_10; }
	inline bool* get_address_of_method_is_virtual_10() { return &___method_is_virtual_10; }
	inline void set_method_is_virtual_10(bool value)
	{
		___method_is_virtual_10 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
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
	DelegateData_t1BF9F691B56DAE5F8C28C5E084FDE94F15F27BBE * ___data_9;
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
	DelegateData_t1BF9F691B56DAE5F8C28C5E084FDE94F15F27BBE * ___data_9;
	int32_t ___method_is_virtual_10;
};
#endif // DELEGATE_T_H
#ifndef INDEXOUTOFRANGEEXCEPTION_TEC7665FC66525AB6A6916A7EB505E5591683F0CF_H
#define INDEXOUTOFRANGEEXCEPTION_TEC7665FC66525AB6A6916A7EB505E5591683F0CF_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.IndexOutOfRangeException
struct  IndexOutOfRangeException_tEC7665FC66525AB6A6916A7EB505E5591683F0CF  : public SystemException_t5380468142AA850BE4A341D7AF3EAB9C78746782
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INDEXOUTOFRANGEEXCEPTION_TEC7665FC66525AB6A6916A7EB505E5591683F0CF_H
#ifndef BINDINGFLAGS_TE35C91D046E63A1B92BB9AB909FCF9DA84379ED0_H
#define BINDINGFLAGS_TE35C91D046E63A1B92BB9AB909FCF9DA84379ED0_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.BindingFlags
struct  BindingFlags_tE35C91D046E63A1B92BB9AB909FCF9DA84379ED0 
{
public:
	// System.Int32 System.Reflection.BindingFlags::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(BindingFlags_tE35C91D046E63A1B92BB9AB909FCF9DA84379ED0, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BINDINGFLAGS_TE35C91D046E63A1B92BB9AB909FCF9DA84379ED0_H
#ifndef METHODINFO_T_H
#define METHODINFO_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.MethodInfo
struct  MethodInfo_t  : public MethodBase_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // METHODINFO_T_H
#ifndef RUNTIMETYPEHANDLE_T7B542280A22F0EC4EAC2061C29178845847A8B2D_H
#define RUNTIMETYPEHANDLE_T7B542280A22F0EC4EAC2061C29178845847A8B2D_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.RuntimeTypeHandle
struct  RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D 
{
public:
	// System.IntPtr System.RuntimeTypeHandle::value
	intptr_t ___value_0;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D, ___value_0)); }
	inline intptr_t get_value_0() const { return ___value_0; }
	inline intptr_t* get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(intptr_t value)
	{
		___value_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RUNTIMETYPEHANDLE_T7B542280A22F0EC4EAC2061C29178845847A8B2D_H
#ifndef ANDROIDJAVAPROXY_TBF3E21C3639CF1A14BDC9173530DC13D45540795_H
#define ANDROIDJAVAPROXY_TBF3E21C3639CF1A14BDC9173530DC13D45540795_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.AndroidJavaProxy
struct  AndroidJavaProxy_tBF3E21C3639CF1A14BDC9173530DC13D45540795  : public RuntimeObject
{
public:
	// UnityEngine.AndroidJavaClass UnityEngine.AndroidJavaProxy::javaInterface
	AndroidJavaClass_tFC9C1064BF4849691FEDC988743C0C271C62FDC8 * ___javaInterface_0;
	// UnityEngine.AndroidJavaObject UnityEngine.AndroidJavaProxy::proxyObject
	AndroidJavaObject_t5B3829FB6E1DBC020F5BA17846F1351EAA982F8E * ___proxyObject_1;

public:
	inline static int32_t get_offset_of_javaInterface_0() { return static_cast<int32_t>(offsetof(AndroidJavaProxy_tBF3E21C3639CF1A14BDC9173530DC13D45540795, ___javaInterface_0)); }
	inline AndroidJavaClass_tFC9C1064BF4849691FEDC988743C0C271C62FDC8 * get_javaInterface_0() const { return ___javaInterface_0; }
	inline AndroidJavaClass_tFC9C1064BF4849691FEDC988743C0C271C62FDC8 ** get_address_of_javaInterface_0() { return &___javaInterface_0; }
	inline void set_javaInterface_0(AndroidJavaClass_tFC9C1064BF4849691FEDC988743C0C271C62FDC8 * value)
	{
		___javaInterface_0 = value;
		Il2CppCodeGenWriteBarrier((&___javaInterface_0), value);
	}

	inline static int32_t get_offset_of_proxyObject_1() { return static_cast<int32_t>(offsetof(AndroidJavaProxy_tBF3E21C3639CF1A14BDC9173530DC13D45540795, ___proxyObject_1)); }
	inline AndroidJavaObject_t5B3829FB6E1DBC020F5BA17846F1351EAA982F8E * get_proxyObject_1() const { return ___proxyObject_1; }
	inline AndroidJavaObject_t5B3829FB6E1DBC020F5BA17846F1351EAA982F8E ** get_address_of_proxyObject_1() { return &___proxyObject_1; }
	inline void set_proxyObject_1(AndroidJavaObject_t5B3829FB6E1DBC020F5BA17846F1351EAA982F8E * value)
	{
		___proxyObject_1 = value;
		Il2CppCodeGenWriteBarrier((&___proxyObject_1), value);
	}
};

struct AndroidJavaProxy_tBF3E21C3639CF1A14BDC9173530DC13D45540795_StaticFields
{
public:
	// UnityEngine.GlobalJavaObjectRef UnityEngine.AndroidJavaProxy::s_JavaLangSystemClass
	GlobalJavaObjectRef_tC135ABE5FD0F787E7A2FAED9978EB2512579E22F * ___s_JavaLangSystemClass_2;
	// System.IntPtr UnityEngine.AndroidJavaProxy::s_HashCodeMethodID
	intptr_t ___s_HashCodeMethodID_3;

public:
	inline static int32_t get_offset_of_s_JavaLangSystemClass_2() { return static_cast<int32_t>(offsetof(AndroidJavaProxy_tBF3E21C3639CF1A14BDC9173530DC13D45540795_StaticFields, ___s_JavaLangSystemClass_2)); }
	inline GlobalJavaObjectRef_tC135ABE5FD0F787E7A2FAED9978EB2512579E22F * get_s_JavaLangSystemClass_2() const { return ___s_JavaLangSystemClass_2; }
	inline GlobalJavaObjectRef_tC135ABE5FD0F787E7A2FAED9978EB2512579E22F ** get_address_of_s_JavaLangSystemClass_2() { return &___s_JavaLangSystemClass_2; }
	inline void set_s_JavaLangSystemClass_2(GlobalJavaObjectRef_tC135ABE5FD0F787E7A2FAED9978EB2512579E22F * value)
	{
		___s_JavaLangSystemClass_2 = value;
		Il2CppCodeGenWriteBarrier((&___s_JavaLangSystemClass_2), value);
	}

	inline static int32_t get_offset_of_s_HashCodeMethodID_3() { return static_cast<int32_t>(offsetof(AndroidJavaProxy_tBF3E21C3639CF1A14BDC9173530DC13D45540795_StaticFields, ___s_HashCodeMethodID_3)); }
	inline intptr_t get_s_HashCodeMethodID_3() const { return ___s_HashCodeMethodID_3; }
	inline intptr_t* get_address_of_s_HashCodeMethodID_3() { return &___s_HashCodeMethodID_3; }
	inline void set_s_HashCodeMethodID_3(intptr_t value)
	{
		___s_HashCodeMethodID_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ANDROIDJAVAPROXY_TBF3E21C3639CF1A14BDC9173530DC13D45540795_H
#ifndef JVALUE_T24EA0689FB5BAE2B3560EE6A1814A16693F6BFF1_H
#define JVALUE_T24EA0689FB5BAE2B3560EE6A1814A16693F6BFF1_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.jvalue
struct  jvalue_t24EA0689FB5BAE2B3560EE6A1814A16693F6BFF1 
{
public:
	union
	{
		#pragma pack(push, tp, 1)
		struct
		{
			// System.Boolean UnityEngine.jvalue::z
			bool ___z_0;
		};
		#pragma pack(pop, tp)
		struct
		{
			bool ___z_0_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			// System.Byte UnityEngine.jvalue::b
			uint8_t ___b_1;
		};
		#pragma pack(pop, tp)
		struct
		{
			uint8_t ___b_1_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			// System.Char UnityEngine.jvalue::c
			Il2CppChar ___c_2;
		};
		#pragma pack(pop, tp)
		struct
		{
			Il2CppChar ___c_2_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			// System.Int16 UnityEngine.jvalue::s
			int16_t ___s_3;
		};
		#pragma pack(pop, tp)
		struct
		{
			int16_t ___s_3_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			// System.Int32 UnityEngine.jvalue::i
			int32_t ___i_4;
		};
		#pragma pack(pop, tp)
		struct
		{
			int32_t ___i_4_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			// System.Int64 UnityEngine.jvalue::j
			int64_t ___j_5;
		};
		#pragma pack(pop, tp)
		struct
		{
			int64_t ___j_5_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			// System.Single UnityEngine.jvalue::f
			float ___f_6;
		};
		#pragma pack(pop, tp)
		struct
		{
			float ___f_6_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			// System.Double UnityEngine.jvalue::d
			double ___d_7;
		};
		#pragma pack(pop, tp)
		struct
		{
			double ___d_7_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			// System.IntPtr UnityEngine.jvalue::l
			intptr_t ___l_8;
		};
		#pragma pack(pop, tp)
		struct
		{
			intptr_t ___l_8_forAlignmentOnly;
		};
	};

public:
	inline static int32_t get_offset_of_z_0() { return static_cast<int32_t>(offsetof(jvalue_t24EA0689FB5BAE2B3560EE6A1814A16693F6BFF1, ___z_0)); }
	inline bool get_z_0() const { return ___z_0; }
	inline bool* get_address_of_z_0() { return &___z_0; }
	inline void set_z_0(bool value)
	{
		___z_0 = value;
	}

	inline static int32_t get_offset_of_b_1() { return static_cast<int32_t>(offsetof(jvalue_t24EA0689FB5BAE2B3560EE6A1814A16693F6BFF1, ___b_1)); }
	inline uint8_t get_b_1() const { return ___b_1; }
	inline uint8_t* get_address_of_b_1() { return &___b_1; }
	inline void set_b_1(uint8_t value)
	{
		___b_1 = value;
	}

	inline static int32_t get_offset_of_c_2() { return static_cast<int32_t>(offsetof(jvalue_t24EA0689FB5BAE2B3560EE6A1814A16693F6BFF1, ___c_2)); }
	inline Il2CppChar get_c_2() const { return ___c_2; }
	inline Il2CppChar* get_address_of_c_2() { return &___c_2; }
	inline void set_c_2(Il2CppChar value)
	{
		___c_2 = value;
	}

	inline static int32_t get_offset_of_s_3() { return static_cast<int32_t>(offsetof(jvalue_t24EA0689FB5BAE2B3560EE6A1814A16693F6BFF1, ___s_3)); }
	inline int16_t get_s_3() const { return ___s_3; }
	inline int16_t* get_address_of_s_3() { return &___s_3; }
	inline void set_s_3(int16_t value)
	{
		___s_3 = value;
	}

	inline static int32_t get_offset_of_i_4() { return static_cast<int32_t>(offsetof(jvalue_t24EA0689FB5BAE2B3560EE6A1814A16693F6BFF1, ___i_4)); }
	inline int32_t get_i_4() const { return ___i_4; }
	inline int32_t* get_address_of_i_4() { return &___i_4; }
	inline void set_i_4(int32_t value)
	{
		___i_4 = value;
	}

	inline static int32_t get_offset_of_j_5() { return static_cast<int32_t>(offsetof(jvalue_t24EA0689FB5BAE2B3560EE6A1814A16693F6BFF1, ___j_5)); }
	inline int64_t get_j_5() const { return ___j_5; }
	inline int64_t* get_address_of_j_5() { return &___j_5; }
	inline void set_j_5(int64_t value)
	{
		___j_5 = value;
	}

	inline static int32_t get_offset_of_f_6() { return static_cast<int32_t>(offsetof(jvalue_t24EA0689FB5BAE2B3560EE6A1814A16693F6BFF1, ___f_6)); }
	inline float get_f_6() const { return ___f_6; }
	inline float* get_address_of_f_6() { return &___f_6; }
	inline void set_f_6(float value)
	{
		___f_6 = value;
	}

	inline static int32_t get_offset_of_d_7() { return static_cast<int32_t>(offsetof(jvalue_t24EA0689FB5BAE2B3560EE6A1814A16693F6BFF1, ___d_7)); }
	inline double get_d_7() const { return ___d_7; }
	inline double* get_address_of_d_7() { return &___d_7; }
	inline void set_d_7(double value)
	{
		___d_7 = value;
	}

	inline static int32_t get_offset_of_l_8() { return static_cast<int32_t>(offsetof(jvalue_t24EA0689FB5BAE2B3560EE6A1814A16693F6BFF1, ___l_8)); }
	inline intptr_t get_l_8() const { return ___l_8; }
	inline intptr_t* get_address_of_l_8() { return &___l_8; }
	inline void set_l_8(intptr_t value)
	{
		___l_8 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.jvalue
struct jvalue_t24EA0689FB5BAE2B3560EE6A1814A16693F6BFF1_marshaled_pinvoke
{
	union
	{
		#pragma pack(push, tp, 1)
		struct
		{
			int32_t ___z_0;
		};
		#pragma pack(pop, tp)
		struct
		{
			int32_t ___z_0_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			uint8_t ___b_1;
		};
		#pragma pack(pop, tp)
		struct
		{
			uint8_t ___b_1_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			uint8_t ___c_2;
		};
		#pragma pack(pop, tp)
		struct
		{
			uint8_t ___c_2_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			int16_t ___s_3;
		};
		#pragma pack(pop, tp)
		struct
		{
			int16_t ___s_3_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			int32_t ___i_4;
		};
		#pragma pack(pop, tp)
		struct
		{
			int32_t ___i_4_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			int64_t ___j_5;
		};
		#pragma pack(pop, tp)
		struct
		{
			int64_t ___j_5_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			float ___f_6;
		};
		#pragma pack(pop, tp)
		struct
		{
			float ___f_6_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			double ___d_7;
		};
		#pragma pack(pop, tp)
		struct
		{
			double ___d_7_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			intptr_t ___l_8;
		};
		#pragma pack(pop, tp)
		struct
		{
			intptr_t ___l_8_forAlignmentOnly;
		};
	};
};
// Native definition for COM marshalling of UnityEngine.jvalue
struct jvalue_t24EA0689FB5BAE2B3560EE6A1814A16693F6BFF1_marshaled_com
{
	union
	{
		#pragma pack(push, tp, 1)
		struct
		{
			int32_t ___z_0;
		};
		#pragma pack(pop, tp)
		struct
		{
			int32_t ___z_0_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			uint8_t ___b_1;
		};
		#pragma pack(pop, tp)
		struct
		{
			uint8_t ___b_1_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			uint8_t ___c_2;
		};
		#pragma pack(pop, tp)
		struct
		{
			uint8_t ___c_2_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			int16_t ___s_3;
		};
		#pragma pack(pop, tp)
		struct
		{
			int16_t ___s_3_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			int32_t ___i_4;
		};
		#pragma pack(pop, tp)
		struct
		{
			int32_t ___i_4_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			int64_t ___j_5;
		};
		#pragma pack(pop, tp)
		struct
		{
			int64_t ___j_5_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			float ___f_6;
		};
		#pragma pack(pop, tp)
		struct
		{
			float ___f_6_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			double ___d_7;
		};
		#pragma pack(pop, tp)
		struct
		{
			double ___d_7_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			intptr_t ___l_8;
		};
		#pragma pack(pop, tp)
		struct
		{
			intptr_t ___l_8_forAlignmentOnly;
		};
	};
};
#endif // JVALUE_T24EA0689FB5BAE2B3560EE6A1814A16693F6BFF1_H
#ifndef MATHFINTERNAL_T3E913BDEA2E88DF117AEBE6A099B5922A78A1693_H
#define MATHFINTERNAL_T3E913BDEA2E88DF117AEBE6A099B5922A78A1693_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngineInternal.MathfInternal
struct  MathfInternal_t3E913BDEA2E88DF117AEBE6A099B5922A78A1693 
{
public:
	union
	{
		struct
		{
		};
		uint8_t MathfInternal_t3E913BDEA2E88DF117AEBE6A099B5922A78A1693__padding[1];
	};

public:
};

struct MathfInternal_t3E913BDEA2E88DF117AEBE6A099B5922A78A1693_StaticFields
{
public:
	// System.Single modreq(System.Runtime.CompilerServices.IsVolatile) UnityEngineInternal.MathfInternal::FloatMinNormal
	float ___FloatMinNormal_0;
	// System.Single modreq(System.Runtime.CompilerServices.IsVolatile) UnityEngineInternal.MathfInternal::FloatMinDenormal
	float ___FloatMinDenormal_1;
	// System.Boolean UnityEngineInternal.MathfInternal::IsFlushToZeroEnabled
	bool ___IsFlushToZeroEnabled_2;

public:
	inline static int32_t get_offset_of_FloatMinNormal_0() { return static_cast<int32_t>(offsetof(MathfInternal_t3E913BDEA2E88DF117AEBE6A099B5922A78A1693_StaticFields, ___FloatMinNormal_0)); }
	inline float get_FloatMinNormal_0() const { return ___FloatMinNormal_0; }
	inline float* get_address_of_FloatMinNormal_0() { return &___FloatMinNormal_0; }
	inline void set_FloatMinNormal_0(float value)
	{
		___FloatMinNormal_0 = value;
	}

	inline static int32_t get_offset_of_FloatMinDenormal_1() { return static_cast<int32_t>(offsetof(MathfInternal_t3E913BDEA2E88DF117AEBE6A099B5922A78A1693_StaticFields, ___FloatMinDenormal_1)); }
	inline float get_FloatMinDenormal_1() const { return ___FloatMinDenormal_1; }
	inline float* get_address_of_FloatMinDenormal_1() { return &___FloatMinDenormal_1; }
	inline void set_FloatMinDenormal_1(float value)
	{
		___FloatMinDenormal_1 = value;
	}

	inline static int32_t get_offset_of_IsFlushToZeroEnabled_2() { return static_cast<int32_t>(offsetof(MathfInternal_t3E913BDEA2E88DF117AEBE6A099B5922A78A1693_StaticFields, ___IsFlushToZeroEnabled_2)); }
	inline bool get_IsFlushToZeroEnabled_2() const { return ___IsFlushToZeroEnabled_2; }
	inline bool* get_address_of_IsFlushToZeroEnabled_2() { return &___IsFlushToZeroEnabled_2; }
	inline void set_IsFlushToZeroEnabled_2(bool value)
	{
		___IsFlushToZeroEnabled_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MATHFINTERNAL_T3E913BDEA2E88DF117AEBE6A099B5922A78A1693_H
#ifndef MULTICASTDELEGATE_T_H
#define MULTICASTDELEGATE_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.MulticastDelegate
struct  MulticastDelegate_t  : public Delegate_t
{
public:
	// System.Delegate[] System.MulticastDelegate::delegates
	DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86* ___delegates_11;

public:
	inline static int32_t get_offset_of_delegates_11() { return static_cast<int32_t>(offsetof(MulticastDelegate_t, ___delegates_11)); }
	inline DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86* get_delegates_11() const { return ___delegates_11; }
	inline DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86** get_address_of_delegates_11() { return &___delegates_11; }
	inline void set_delegates_11(DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86* value)
	{
		___delegates_11 = value;
		Il2CppCodeGenWriteBarrier((&___delegates_11), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
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
#endif // MULTICASTDELEGATE_T_H
#ifndef TYPE_T_H
#define TYPE_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Type
struct  Type_t  : public MemberInfo_t
{
public:
	// System.RuntimeTypeHandle System.Type::_impl
	RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D  ____impl_9;

public:
	inline static int32_t get_offset_of__impl_9() { return static_cast<int32_t>(offsetof(Type_t, ____impl_9)); }
	inline RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D  get__impl_9() const { return ____impl_9; }
	inline RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D * get_address_of__impl_9() { return &____impl_9; }
	inline void set__impl_9(RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D  value)
	{
		____impl_9 = value;
	}
};

struct Type_t_StaticFields
{
public:
	// System.Reflection.MemberFilter System.Type::FilterAttribute
	MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381 * ___FilterAttribute_0;
	// System.Reflection.MemberFilter System.Type::FilterName
	MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381 * ___FilterName_1;
	// System.Reflection.MemberFilter System.Type::FilterNameIgnoreCase
	MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381 * ___FilterNameIgnoreCase_2;
	// System.Object System.Type::Missing
	RuntimeObject * ___Missing_3;
	// System.Char System.Type::Delimiter
	Il2CppChar ___Delimiter_4;
	// System.Type[] System.Type::EmptyTypes
	TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F* ___EmptyTypes_5;
	// System.Reflection.Binder System.Type::defaultBinder
	Binder_t4D5CB06963501D32847C057B57157D6DC49CA759 * ___defaultBinder_6;

public:
	inline static int32_t get_offset_of_FilterAttribute_0() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___FilterAttribute_0)); }
	inline MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381 * get_FilterAttribute_0() const { return ___FilterAttribute_0; }
	inline MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381 ** get_address_of_FilterAttribute_0() { return &___FilterAttribute_0; }
	inline void set_FilterAttribute_0(MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381 * value)
	{
		___FilterAttribute_0 = value;
		Il2CppCodeGenWriteBarrier((&___FilterAttribute_0), value);
	}

	inline static int32_t get_offset_of_FilterName_1() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___FilterName_1)); }
	inline MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381 * get_FilterName_1() const { return ___FilterName_1; }
	inline MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381 ** get_address_of_FilterName_1() { return &___FilterName_1; }
	inline void set_FilterName_1(MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381 * value)
	{
		___FilterName_1 = value;
		Il2CppCodeGenWriteBarrier((&___FilterName_1), value);
	}

	inline static int32_t get_offset_of_FilterNameIgnoreCase_2() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___FilterNameIgnoreCase_2)); }
	inline MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381 * get_FilterNameIgnoreCase_2() const { return ___FilterNameIgnoreCase_2; }
	inline MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381 ** get_address_of_FilterNameIgnoreCase_2() { return &___FilterNameIgnoreCase_2; }
	inline void set_FilterNameIgnoreCase_2(MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381 * value)
	{
		___FilterNameIgnoreCase_2 = value;
		Il2CppCodeGenWriteBarrier((&___FilterNameIgnoreCase_2), value);
	}

	inline static int32_t get_offset_of_Missing_3() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___Missing_3)); }
	inline RuntimeObject * get_Missing_3() const { return ___Missing_3; }
	inline RuntimeObject ** get_address_of_Missing_3() { return &___Missing_3; }
	inline void set_Missing_3(RuntimeObject * value)
	{
		___Missing_3 = value;
		Il2CppCodeGenWriteBarrier((&___Missing_3), value);
	}

	inline static int32_t get_offset_of_Delimiter_4() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___Delimiter_4)); }
	inline Il2CppChar get_Delimiter_4() const { return ___Delimiter_4; }
	inline Il2CppChar* get_address_of_Delimiter_4() { return &___Delimiter_4; }
	inline void set_Delimiter_4(Il2CppChar value)
	{
		___Delimiter_4 = value;
	}

	inline static int32_t get_offset_of_EmptyTypes_5() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___EmptyTypes_5)); }
	inline TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F* get_EmptyTypes_5() const { return ___EmptyTypes_5; }
	inline TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F** get_address_of_EmptyTypes_5() { return &___EmptyTypes_5; }
	inline void set_EmptyTypes_5(TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F* value)
	{
		___EmptyTypes_5 = value;
		Il2CppCodeGenWriteBarrier((&___EmptyTypes_5), value);
	}

	inline static int32_t get_offset_of_defaultBinder_6() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___defaultBinder_6)); }
	inline Binder_t4D5CB06963501D32847C057B57157D6DC49CA759 * get_defaultBinder_6() const { return ___defaultBinder_6; }
	inline Binder_t4D5CB06963501D32847C057B57157D6DC49CA759 ** get_address_of_defaultBinder_6() { return &___defaultBinder_6; }
	inline void set_defaultBinder_6(Binder_t4D5CB06963501D32847C057B57157D6DC49CA759 * value)
	{
		___defaultBinder_6 = value;
		Il2CppCodeGenWriteBarrier((&___defaultBinder_6), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TYPE_T_H
#ifndef ANDROIDJAVARUNNABLEPROXY_T44BC33675D0AC3139F424C7184045BFDC1238572_H
#define ANDROIDJAVARUNNABLEPROXY_T44BC33675D0AC3139F424C7184045BFDC1238572_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.AndroidJavaRunnableProxy
struct  AndroidJavaRunnableProxy_t44BC33675D0AC3139F424C7184045BFDC1238572  : public AndroidJavaProxy_tBF3E21C3639CF1A14BDC9173530DC13D45540795
{
public:
	// UnityEngine.AndroidJavaRunnable UnityEngine.AndroidJavaRunnableProxy::mRunnable
	AndroidJavaRunnable_tBE7371D29A525C4F51DC1CBEBA5E193644F6AFE1 * ___mRunnable_4;

public:
	inline static int32_t get_offset_of_mRunnable_4() { return static_cast<int32_t>(offsetof(AndroidJavaRunnableProxy_t44BC33675D0AC3139F424C7184045BFDC1238572, ___mRunnable_4)); }
	inline AndroidJavaRunnable_tBE7371D29A525C4F51DC1CBEBA5E193644F6AFE1 * get_mRunnable_4() const { return ___mRunnable_4; }
	inline AndroidJavaRunnable_tBE7371D29A525C4F51DC1CBEBA5E193644F6AFE1 ** get_address_of_mRunnable_4() { return &___mRunnable_4; }
	inline void set_mRunnable_4(AndroidJavaRunnable_tBE7371D29A525C4F51DC1CBEBA5E193644F6AFE1 * value)
	{
		___mRunnable_4 = value;
		Il2CppCodeGenWriteBarrier((&___mRunnable_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ANDROIDJAVARUNNABLEPROXY_T44BC33675D0AC3139F424C7184045BFDC1238572_H
#ifndef ANDROIDJAVARUNNABLE_TBE7371D29A525C4F51DC1CBEBA5E193644F6AFE1_H
#define ANDROIDJAVARUNNABLE_TBE7371D29A525C4F51DC1CBEBA5E193644F6AFE1_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.AndroidJavaRunnable
struct  AndroidJavaRunnable_tBE7371D29A525C4F51DC1CBEBA5E193644F6AFE1  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ANDROIDJAVARUNNABLE_TBE7371D29A525C4F51DC1CBEBA5E193644F6AFE1_H
// System.Object[]
struct ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A  : public RuntimeArray
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
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
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
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
};
// UnityEngine.AndroidJavaObject[]
struct AndroidJavaObjectU5BU5D_tAA78CD496655EFF43DB71506C66672DBE563003C  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) AndroidJavaObject_t5B3829FB6E1DBC020F5BA17846F1351EAA982F8E * m_Items[1];

public:
	inline AndroidJavaObject_t5B3829FB6E1DBC020F5BA17846F1351EAA982F8E * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline AndroidJavaObject_t5B3829FB6E1DBC020F5BA17846F1351EAA982F8E ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, AndroidJavaObject_t5B3829FB6E1DBC020F5BA17846F1351EAA982F8E * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
	inline AndroidJavaObject_t5B3829FB6E1DBC020F5BA17846F1351EAA982F8E * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline AndroidJavaObject_t5B3829FB6E1DBC020F5BA17846F1351EAA982F8E ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, AndroidJavaObject_t5B3829FB6E1DBC020F5BA17846F1351EAA982F8E * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
};
// UnityEngine.jvalue[]
struct jvalueU5BU5D_t15D5A2D5F08971A18428246F1999D516A4E9D975  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) jvalue_t24EA0689FB5BAE2B3560EE6A1814A16693F6BFF1  m_Items[1];

public:
	inline jvalue_t24EA0689FB5BAE2B3560EE6A1814A16693F6BFF1  GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline jvalue_t24EA0689FB5BAE2B3560EE6A1814A16693F6BFF1 * GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, jvalue_t24EA0689FB5BAE2B3560EE6A1814A16693F6BFF1  value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline jvalue_t24EA0689FB5BAE2B3560EE6A1814A16693F6BFF1  GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline jvalue_t24EA0689FB5BAE2B3560EE6A1814A16693F6BFF1 * GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, jvalue_t24EA0689FB5BAE2B3560EE6A1814A16693F6BFF1  value)
	{
		m_Items[index] = value;
	}
};
// System.Int32[]
struct Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) int32_t m_Items[1];

public:
	inline int32_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline int32_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, int32_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline int32_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline int32_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, int32_t value)
	{
		m_Items[index] = value;
	}
};
// System.Boolean[]
struct BooleanU5BU5D_t192C7579715690E25BD5EFED47F3E0FC9DCB2040  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) bool m_Items[1];

public:
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
// System.Byte[]
struct ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821  : public RuntimeArray
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
// System.Int16[]
struct Int16U5BU5D_tDA0F0B2730337F72E44DB024BE9818FA8EDE8D28  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) int16_t m_Items[1];

public:
	inline int16_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline int16_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, int16_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline int16_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline int16_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, int16_t value)
	{
		m_Items[index] = value;
	}
};
// System.Int64[]
struct Int64U5BU5D_tE04A3DEF6AF1C852A43B98A24EFB715806B37F5F  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) int64_t m_Items[1];

public:
	inline int64_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline int64_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, int64_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline int64_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline int64_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, int64_t value)
	{
		m_Items[index] = value;
	}
};
// System.Single[]
struct SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) float m_Items[1];

public:
	inline float GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline float* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, float value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline float GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline float* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, float value)
	{
		m_Items[index] = value;
	}
};
// System.Double[]
struct DoubleU5BU5D_tF9383437DDA9EAC9F60627E9E6E2045CF7CB182D  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) double m_Items[1];

public:
	inline double GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline double* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, double value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline double GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline double* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, double value)
	{
		m_Items[index] = value;
	}
};
// System.Char[]
struct CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2  : public RuntimeArray
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
struct StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E  : public RuntimeArray
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
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
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
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
};
// UnityEngine.AndroidJavaClass[]
struct AndroidJavaClassU5BU5D_tE3ED186B518D6D52F80504EB644E86979B84CB18  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) AndroidJavaClass_tFC9C1064BF4849691FEDC988743C0C271C62FDC8 * m_Items[1];

public:
	inline AndroidJavaClass_tFC9C1064BF4849691FEDC988743C0C271C62FDC8 * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline AndroidJavaClass_tFC9C1064BF4849691FEDC988743C0C271C62FDC8 ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, AndroidJavaClass_tFC9C1064BF4849691FEDC988743C0C271C62FDC8 * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
	inline AndroidJavaClass_tFC9C1064BF4849691FEDC988743C0C271C62FDC8 * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline AndroidJavaClass_tFC9C1064BF4849691FEDC988743C0C271C62FDC8 ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, AndroidJavaClass_tFC9C1064BF4849691FEDC988743C0C271C62FDC8 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
};
// System.IntPtr[]
struct IntPtrU5BU5D_t4DC01DCB9A6DF6C9792A6513595D7A11E637DCDD  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) intptr_t m_Items[1];

public:
	inline intptr_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline intptr_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, intptr_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline intptr_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline intptr_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, intptr_t value)
	{
		m_Items[index] = value;
	}
};


// ReturnType UnityEngine.AndroidJavaObject::Call<System.Object>(System.String,System.Object[])
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * AndroidJavaObject_Call_TisRuntimeObject_mF1AF9D7943F9ACE3F614B6C1599BD7633BBE53DE_gshared (AndroidJavaObject_t5B3829FB6E1DBC020F5BA17846F1351EAA982F8E * __this, String_t* ___methodName0, ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* ___args1, const RuntimeMethod* method);
// ReturnType UnityEngine.AndroidJavaObject::CallStatic<System.Int32>(System.String,System.Object[])
extern "C" IL2CPP_METHOD_ATTR int32_t AndroidJavaObject_CallStatic_TisInt32_t585191389E07734F19F3156FF88FB3EF4800D102_m58609371993F08421AA2C6A3071C8876FACEC412_gshared (AndroidJavaObject_t5B3829FB6E1DBC020F5BA17846F1351EAA982F8E * __this, String_t* ___methodName0, ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* ___args1, const RuntimeMethod* method);
// ReturnType UnityEngine.AndroidJavaObject::Call<System.Boolean>(System.String,System.Object[])
extern "C" IL2CPP_METHOD_ATTR bool AndroidJavaObject_Call_TisBoolean_tB53F6830F670160873277339AA58F15CAED4399C_m55C7AF41C602F92EE6E9482814E57F6A5ADCECF4_gshared (AndroidJavaObject_t5B3829FB6E1DBC020F5BA17846F1351EAA982F8E * __this, String_t* ___methodName0, ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* ___args1, const RuntimeMethod* method);
// ReturnType UnityEngine.AndroidJavaObject::CallStatic<System.Object>(System.String,System.Object[])
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * AndroidJavaObject_CallStatic_TisRuntimeObject_mE514C863E2C7A350BD4D9F5F20398DF94468766E_gshared (AndroidJavaObject_t5B3829FB6E1DBC020F5BA17846F1351EAA982F8E * __this, String_t* ___methodName0, ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* ___args1, const RuntimeMethod* method);
// ReturnType UnityEngine.AndroidJavaObject::Call<System.Int32>(System.String,System.Object[])
extern "C" IL2CPP_METHOD_ATTR int32_t AndroidJavaObject_Call_TisInt32_t585191389E07734F19F3156FF88FB3EF4800D102_m96DA2E4324B0211375BAA992FD4731428F08B530_gshared (AndroidJavaObject_t5B3829FB6E1DBC020F5BA17846F1351EAA982F8E * __this, String_t* ___methodName0, ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* ___args1, const RuntimeMethod* method);
// ReturnType UnityEngine.AndroidJavaObject::Call<System.Byte>(System.String,System.Object[])
extern "C" IL2CPP_METHOD_ATTR uint8_t AndroidJavaObject_Call_TisByte_tF87C579059BD4633E6840EBBBEEF899C6E33EF07_m4146C48C7DFDAF10FBC023D3E6529CB590F7EEF8_gshared (AndroidJavaObject_t5B3829FB6E1DBC020F5BA17846F1351EAA982F8E * __this, String_t* ___methodName0, ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* ___args1, const RuntimeMethod* method);
// ReturnType UnityEngine.AndroidJavaObject::Call<System.Int16>(System.String,System.Object[])
extern "C" IL2CPP_METHOD_ATTR int16_t AndroidJavaObject_Call_TisInt16_t823A20635DAF5A3D93A1E01CFBF3CBA27CF00B4D_mF25CDDD74A99379570D993243DA32D2D0CAF95FF_gshared (AndroidJavaObject_t5B3829FB6E1DBC020F5BA17846F1351EAA982F8E * __this, String_t* ___methodName0, ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* ___args1, const RuntimeMethod* method);
// ReturnType UnityEngine.AndroidJavaObject::Call<System.Int64>(System.String,System.Object[])
extern "C" IL2CPP_METHOD_ATTR int64_t AndroidJavaObject_Call_TisInt64_t7A386C2FF7B0280A0F516992401DDFCF0FF7B436_mE485E930878F2C30F8659EC20300D3546E0AC484_gshared (AndroidJavaObject_t5B3829FB6E1DBC020F5BA17846F1351EAA982F8E * __this, String_t* ___methodName0, ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* ___args1, const RuntimeMethod* method);
// ReturnType UnityEngine.AndroidJavaObject::Call<System.Single>(System.String,System.Object[])
extern "C" IL2CPP_METHOD_ATTR float AndroidJavaObject_Call_TisSingle_tDDDA9169C4E4E308AC6D7A824F9B28DC82204AE1_mDEE4DBCC617B60BB4CE4743431B838FECC359757_gshared (AndroidJavaObject_t5B3829FB6E1DBC020F5BA17846F1351EAA982F8E * __this, String_t* ___methodName0, ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* ___args1, const RuntimeMethod* method);
// ReturnType UnityEngine.AndroidJavaObject::Call<System.Double>(System.String,System.Object[])
extern "C" IL2CPP_METHOD_ATTR double AndroidJavaObject_Call_TisDouble_t358B8F23BDC52A5DD700E727E204F9F7CDE12409_mA09E9F86B0C09659E6ECB18EC567F98A38FDF738_gshared (AndroidJavaObject_t5B3829FB6E1DBC020F5BA17846F1351EAA982F8E * __this, String_t* ___methodName0, ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* ___args1, const RuntimeMethod* method);
// ReturnType UnityEngine.AndroidJavaObject::Call<System.Char>(System.String,System.Object[])
extern "C" IL2CPP_METHOD_ATTR Il2CppChar AndroidJavaObject_Call_TisChar_tBF22D9FC341BE970735250BB6FF1A4A92BBA58B9_m1417D998764ED64D194E0A171677773221DAE64F_gshared (AndroidJavaObject_t5B3829FB6E1DBC020F5BA17846F1351EAA982F8E * __this, String_t* ___methodName0, ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* ___args1, const RuntimeMethod* method);

// System.Void UnityEngine.Vector4::.ctor(System.Single,System.Single,System.Single,System.Single)
extern "C" IL2CPP_METHOD_ATTR void Vector4__ctor_m545458525879607A5392A10B175D0C19B2BC715D (Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E * __this, float ___x0, float ___y1, float ___z2, float ___w3, const RuntimeMethod* method);
// System.Void System.IndexOutOfRangeException::.ctor(System.String)
extern "C" IL2CPP_METHOD_ATTR void IndexOutOfRangeException__ctor_mCCE2EFF47A0ACB4B2636F63140F94FCEA71A9BCA (IndexOutOfRangeException_tEC7665FC66525AB6A6916A7EB505E5591683F0CF * __this, String_t* p0, const RuntimeMethod* method);
// System.Single UnityEngine.Vector4::get_Item(System.Int32)
extern "C" IL2CPP_METHOD_ATTR float Vector4_get_Item_m39878FDA732B20347BB37CD1485560E9267EDC98 (Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E * __this, int32_t ___index0, const RuntimeMethod* method);
// System.Void UnityEngine.Vector4::set_Item(System.Int32,System.Single)
extern "C" IL2CPP_METHOD_ATTR void Vector4_set_Item_m56FB3A149299FEF1C0CF638CFAF71C7F0685EE45 (Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E * __this, int32_t ___index0, float ___value1, const RuntimeMethod* method);
// System.Int32 System.Single::GetHashCode()
extern "C" IL2CPP_METHOD_ATTR int32_t Single_GetHashCode_m1BC0733E0C3851ED9D1B6C9C0B243BB88BE77AD0 (float* __this, const RuntimeMethod* method);
// System.Int32 UnityEngine.Vector4::GetHashCode()
extern "C" IL2CPP_METHOD_ATTR int32_t Vector4_GetHashCode_m7329FEA2E90CDBDBF4F09F51D92C87E08F5DC92E (Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.Vector4::Equals(UnityEngine.Vector4)
extern "C" IL2CPP_METHOD_ATTR bool Vector4_Equals_mB9894C2D4EE56C6E8FDF6CC40DCE0CE16BA4F7BF (Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E * __this, Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  ___other0, const RuntimeMethod* method);
// System.Boolean UnityEngine.Vector4::Equals(System.Object)
extern "C" IL2CPP_METHOD_ATTR bool Vector4_Equals_m552ECA9ECD220D6526D8ECC9902016B6FC6D49B5 (Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E * __this, RuntimeObject * ___other0, const RuntimeMethod* method);
// System.Boolean System.Single::Equals(System.Single)
extern "C" IL2CPP_METHOD_ATTR bool Single_Equals_mCDFA927E712FBA83D076864E16C77E39A6E66FE7 (float* __this, float p0, const RuntimeMethod* method);
// System.Single UnityEngine.Vector4::Dot(UnityEngine.Vector4,UnityEngine.Vector4)
extern "C" IL2CPP_METHOD_ATTR float Vector4_Dot_m9FAE8FE89CF99841AD8D2113DFCDB8764F9FBB18 (Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  ___a0, Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  ___b1, const RuntimeMethod* method);
// System.Single UnityEngine.Vector4::get_sqrMagnitude()
extern "C" IL2CPP_METHOD_ATTR float Vector4_get_sqrMagnitude_m6B2707CBD31D237605D066A5925E6419D28B5397 (Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E * __this, const RuntimeMethod* method);
// UnityEngine.Vector4 UnityEngine.Vector4::op_Subtraction(UnityEngine.Vector4,UnityEngine.Vector4)
extern "C" IL2CPP_METHOD_ATTR Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  Vector4_op_Subtraction_m2D5AED6DD0324E479548A9346AE29DAB489A8250 (Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  ___a0, Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  ___b1, const RuntimeMethod* method);
// System.Single UnityEngine.Vector4::SqrMagnitude(UnityEngine.Vector4)
extern "C" IL2CPP_METHOD_ATTR float Vector4_SqrMagnitude_mC2577C7119B10D3211BEF8BD3D8C0736274D1C10 (Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  ___a0, const RuntimeMethod* method);
// System.Boolean UnityEngine.Vector4::op_Equality(UnityEngine.Vector4,UnityEngine.Vector4)
extern "C" IL2CPP_METHOD_ATTR bool Vector4_op_Equality_m9AE0D09EC7E02201F94AE469ADE9F416D0E20441 (Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  ___lhs0, Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  ___rhs1, const RuntimeMethod* method);
// System.Void UnityEngine.Vector3::.ctor(System.Single,System.Single,System.Single)
extern "C" IL2CPP_METHOD_ATTR void Vector3__ctor_m08F61F548AA5836D8789843ACB4A81E4963D2EE1 (Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * __this, float ___x0, float ___y1, float ___z2, const RuntimeMethod* method);
// System.String UnityEngine.UnityString::Format(System.String,System.Object[])
extern "C" IL2CPP_METHOD_ATTR String_t* UnityString_Format_m415056ECF8DA7B3EC6A8456E299D0C2002177387 (String_t* p0, ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* p1, const RuntimeMethod* method);
// System.String UnityEngine.Vector4::ToString()
extern "C" IL2CPP_METHOD_ATTR String_t* Vector4_ToString_m769402E3F7CBD6C92464D916527CC87BBBA53EF9 (Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E * __this, const RuntimeMethod* method);
// System.Void UnityEngine.YieldInstruction::.ctor()
extern "C" IL2CPP_METHOD_ATTR void YieldInstruction__ctor_mA72AD367FB081E0C2493649C6E8F7CFC592AB620 (YieldInstruction_t836035AC7BD07A3C7909F7AD2A5B42DE99D91C44 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.CustomYieldInstruction::.ctor()
extern "C" IL2CPP_METHOD_ATTR void CustomYieldInstruction__ctor_m06E2B5BC73763FE2E734FAA600D567701EA21EC5 (CustomYieldInstruction_t819BB0973AFF22766749FF087B8AEFEAF3C2CB7D * __this, const RuntimeMethod* method);
// System.Void UnityEngine.WaitForSecondsRealtime::set_waitTime(System.Single)
extern "C" IL2CPP_METHOD_ATTR void WaitForSecondsRealtime_set_waitTime_m867F4482BEE354E33A6FD9191344D74B9CC8C790 (WaitForSecondsRealtime_t0CF361107C4A9E25E0D4CF2F37732CE785235739 * __this, float ___value0, const RuntimeMethod* method);
// System.Single UnityEngine.Time::get_realtimeSinceStartup()
extern "C" IL2CPP_METHOD_ATTR float Time_get_realtimeSinceStartup_mCA1086EC9DFCF135F77BC46D3B7127711EA3DE03 (const RuntimeMethod* method);
// System.Single UnityEngine.WaitForSecondsRealtime::get_waitTime()
extern "C" IL2CPP_METHOD_ATTR float WaitForSecondsRealtime_get_waitTime_m6D1B0EDEAFA3DBBBFE1A0CC2D372BAB8EA82E2FB (WaitForSecondsRealtime_t0CF361107C4A9E25E0D4CF2F37732CE785235739 * __this, const RuntimeMethod* method);
// System.Void System.Object::.ctor()
extern "C" IL2CPP_METHOD_ATTR void Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0 (RuntimeObject * __this, const RuntimeMethod* method);
// System.IntPtr UnityEngine.AndroidJavaObject::GetRawClass()
extern "C" IL2CPP_METHOD_ATTR intptr_t AndroidJavaObject_GetRawClass_mAE1E312709F872345EDD1B78D8A5F60C39D13E3C (AndroidJavaObject_t5B3829FB6E1DBC020F5BA17846F1351EAA982F8E * __this, const RuntimeMethod* method);
// System.IntPtr UnityEngine.AndroidReflection::NewProxyInstance(System.Int32,System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR intptr_t AndroidReflection_NewProxyInstance_mF767DF278F20D9C3BBBC019AB39FE412CA85635B (int32_t ___delegateHandle0, intptr_t ___interfaze1, const RuntimeMethod* method);
// System.Void UnityEngine.AndroidJavaRunnableProxy::.ctor(UnityEngine.AndroidJavaRunnable)
extern "C" IL2CPP_METHOD_ATTR void AndroidJavaRunnableProxy__ctor_mA4FCBD3D7C2AA6F45E3EAB0604FBE66C144ED1CE (AndroidJavaRunnableProxy_t44BC33675D0AC3139F424C7184045BFDC1238572 * __this, AndroidJavaRunnable_tBE7371D29A525C4F51DC1CBEBA5E193644F6AFE1 * ___runnable0, const RuntimeMethod* method);
// System.IntPtr UnityEngine.AndroidJNIHelper::CreateJavaProxy(UnityEngine.AndroidJavaProxy)
extern "C" IL2CPP_METHOD_ATTR intptr_t AndroidJNIHelper_CreateJavaProxy_m592F0FC620F05B34F33473BB71E24D9799FC3996 (AndroidJavaProxy_tBF3E21C3639CF1A14BDC9173530DC13D45540795 * ___proxy0, const RuntimeMethod* method);
// System.Boolean System.IntPtr::op_Inequality(System.IntPtr,System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR bool IntPtr_op_Inequality_mB4886A806009EA825EFCC60CD2A7F6EB8E273A61 (intptr_t p0, intptr_t p1, const RuntimeMethod* method);
// System.Int32 UnityEngine.AndroidJNISafe::GetArrayLength(System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR int32_t AndroidJNISafe_GetArrayLength_mBA0A274C5F2F9B10F6DB76D430B46F40838E3526 (intptr_t ___array0, const RuntimeMethod* method);
// System.IntPtr UnityEngine.AndroidJNISafe::GetObjectArrayElement(System.IntPtr,System.Int32)
extern "C" IL2CPP_METHOD_ATTR intptr_t AndroidJNISafe_GetObjectArrayElement_mCAF1B79CB1E704AECC2A6212871A2F60A0ECE9AD (intptr_t ___array0, int32_t ___index1, const RuntimeMethod* method);
// System.Void UnityEngine.AndroidJavaObject::.ctor(System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR void AndroidJavaObject__ctor_m21F177968E41241DE11225151F314CA4EBA5B559 (AndroidJavaObject_t5B3829FB6E1DBC020F5BA17846F1351EAA982F8E * __this, intptr_t ___jobject0, const RuntimeMethod* method);
// System.String UnityEngine.AndroidJNI::GetStringUTFChars(System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR String_t* AndroidJNI_GetStringUTFChars_mCDD08F67974AC198A818E877AC8A17E26712C8A3 (intptr_t ___str0, const RuntimeMethod* method);
// System.IntPtr UnityEngine.AndroidJavaObject::GetRawObject()
extern "C" IL2CPP_METHOD_ATTR intptr_t AndroidJavaObject_GetRawObject_mAEB3A269841B8D0BB5701C59AC7463DF7806CA2F (AndroidJavaObject_t5B3829FB6E1DBC020F5BA17846F1351EAA982F8E * __this, const RuntimeMethod* method);
// System.IntPtr UnityEngine.AndroidJNI::NewLocalRef(System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR intptr_t AndroidJNI_NewLocalRef_m4E1FD7957EB1CC1CF983C7A2B4F6E6BA59E0825C (intptr_t ___obj0, const RuntimeMethod* method);
// System.Int32 System.Array::GetLength(System.Int32)
extern "C" IL2CPP_METHOD_ATTR int32_t Array_GetLength_m318900B10C3A93A30ABDC67DE161C8F6ABA4D359 (RuntimeArray * __this, int32_t p0, const RuntimeMethod* method);
// System.Type System.Object::GetType()
extern "C" IL2CPP_METHOD_ATTR Type_t * Object_GetType_m2E0B62414ECCAA3094B703790CE88CBB2F83EA60 (RuntimeObject * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.AndroidReflection::IsPrimitive(System.Type)
extern "C" IL2CPP_METHOD_ATTR bool AndroidReflection_IsPrimitive_m3279141318F8962AFDEC3DFDFE976F8F58BE7B46 (Type_t * ___t0, const RuntimeMethod* method);
// System.IntPtr UnityEngine.AndroidJNISafe::NewStringUTF(System.String)
extern "C" IL2CPP_METHOD_ATTR intptr_t AndroidJNISafe_NewStringUTF_mD1ACA72386E10B6B5C3EC7F11E01A663F9EA6BA2 (String_t* ___bytes0, const RuntimeMethod* method);
// System.IntPtr UnityEngine._AndroidJNIHelper::ConvertToJNIArray(System.Array)
extern "C" IL2CPP_METHOD_ATTR intptr_t _AndroidJNIHelper_ConvertToJNIArray_mF7018A40E8546D4CAC0FDAD9710899F785149F4B (RuntimeArray * ___array0, const RuntimeMethod* method);
// UnityEngine.AndroidJavaObject UnityEngine.AndroidJavaProxy::GetProxy()
extern "C" IL2CPP_METHOD_ATTR AndroidJavaObject_t5B3829FB6E1DBC020F5BA17846F1351EAA982F8E * AndroidJavaProxy_GetProxy_m0515FEED73F637D67E65EDB81FF9FEAEC5AD3170 (AndroidJavaProxy_tBF3E21C3639CF1A14BDC9173530DC13D45540795 * __this, const RuntimeMethod* method);
// System.IntPtr UnityEngine.AndroidJNIHelper::CreateJavaRunnable(UnityEngine.AndroidJavaRunnable)
extern "C" IL2CPP_METHOD_ATTR intptr_t AndroidJNIHelper_CreateJavaRunnable_m79009DFEECC3B28C03B344FACE3D8F1F612DBBCE (AndroidJavaRunnable_tBE7371D29A525C4F51DC1CBEBA5E193644F6AFE1 * ___jrunnable0, const RuntimeMethod* method);
// System.String System.String::Concat(System.Object,System.Object,System.Object)
extern "C" IL2CPP_METHOD_ATTR String_t* String_Concat_m2E1F71C491D2429CC80A28745488FEA947BB7AAC (RuntimeObject * p0, RuntimeObject * p1, RuntimeObject * p2, const RuntimeMethod* method);
// System.Void System.Exception::.ctor(System.String)
extern "C" IL2CPP_METHOD_ATTR void Exception__ctor_m89BADFF36C3B170013878726E07729D51AA9FBE0 (Exception_t * __this, String_t* p0, const RuntimeMethod* method);
// System.Void UnityEngine.AndroidJavaClass::.ctor(System.String)
extern "C" IL2CPP_METHOD_ATTR void AndroidJavaClass__ctor_mFE0A07AF3670152225C146493AC0918138B81E34 (AndroidJavaClass_tFC9C1064BF4849691FEDC988743C0C271C62FDC8 * __this, String_t* ___className0, const RuntimeMethod* method);
// ReturnType UnityEngine.AndroidJavaObject::Call<UnityEngine.AndroidJavaObject>(System.String,System.Object[])
inline AndroidJavaObject_t5B3829FB6E1DBC020F5BA17846F1351EAA982F8E * AndroidJavaObject_Call_TisAndroidJavaObject_t5B3829FB6E1DBC020F5BA17846F1351EAA982F8E_m050B0EBEF6F796C3B3C8D55D9620055A6F07B77A (AndroidJavaObject_t5B3829FB6E1DBC020F5BA17846F1351EAA982F8E * __this, String_t* ___methodName0, ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* ___args1, const RuntimeMethod* method)
{
	return ((  AndroidJavaObject_t5B3829FB6E1DBC020F5BA17846F1351EAA982F8E * (*) (AndroidJavaObject_t5B3829FB6E1DBC020F5BA17846F1351EAA982F8E *, String_t*, ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*, const RuntimeMethod*))AndroidJavaObject_Call_TisRuntimeObject_mF1AF9D7943F9ACE3F614B6C1599BD7633BBE53DE_gshared)(__this, ___methodName0, ___args1, method);
}
// ReturnType UnityEngine.AndroidJavaObject::Call<System.String>(System.String,System.Object[])
inline String_t* AndroidJavaObject_Call_TisString_t_m9AB7F83596130620DAA3338C360A4F140A5BD0EA (AndroidJavaObject_t5B3829FB6E1DBC020F5BA17846F1351EAA982F8E * __this, String_t* ___methodName0, ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* ___args1, const RuntimeMethod* method)
{
	return ((  String_t* (*) (AndroidJavaObject_t5B3829FB6E1DBC020F5BA17846F1351EAA982F8E *, String_t*, ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*, const RuntimeMethod*))AndroidJavaObject_Call_TisRuntimeObject_mF1AF9D7943F9ACE3F614B6C1599BD7633BBE53DE_gshared)(__this, ___methodName0, ___args1, method);
}
// ReturnType UnityEngine.AndroidJavaObject::CallStatic<System.Int32>(System.String,System.Object[])
inline int32_t AndroidJavaObject_CallStatic_TisInt32_t585191389E07734F19F3156FF88FB3EF4800D102_m58609371993F08421AA2C6A3071C8876FACEC412 (AndroidJavaObject_t5B3829FB6E1DBC020F5BA17846F1351EAA982F8E * __this, String_t* ___methodName0, ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* ___args1, const RuntimeMethod* method)
{
	return ((  int32_t (*) (AndroidJavaObject_t5B3829FB6E1DBC020F5BA17846F1351EAA982F8E *, String_t*, ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*, const RuntimeMethod*))AndroidJavaObject_CallStatic_TisInt32_t585191389E07734F19F3156FF88FB3EF4800D102_m58609371993F08421AA2C6A3071C8876FACEC412_gshared)(__this, ___methodName0, ___args1, method);
}
// ReturnType UnityEngine.AndroidJavaObject::Call<System.Boolean>(System.String,System.Object[])
inline bool AndroidJavaObject_Call_TisBoolean_tB53F6830F670160873277339AA58F15CAED4399C_m55C7AF41C602F92EE6E9482814E57F6A5ADCECF4 (AndroidJavaObject_t5B3829FB6E1DBC020F5BA17846F1351EAA982F8E * __this, String_t* ___methodName0, ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* ___args1, const RuntimeMethod* method)
{
	return ((  bool (*) (AndroidJavaObject_t5B3829FB6E1DBC020F5BA17846F1351EAA982F8E *, String_t*, ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*, const RuntimeMethod*))AndroidJavaObject_Call_TisBoolean_tB53F6830F670160873277339AA58F15CAED4399C_m55C7AF41C602F92EE6E9482814E57F6A5ADCECF4_gshared)(__this, ___methodName0, ___args1, method);
}
// System.Boolean System.String::op_Equality(System.String,System.String)
extern "C" IL2CPP_METHOD_ATTR bool String_op_Equality_m139F0E4195AE2F856019E63B241F36F016997FCE (String_t* p0, String_t* p1, const RuntimeMethod* method);
// System.String System.String::Concat(System.String,System.String,System.String)
extern "C" IL2CPP_METHOD_ATTR String_t* String_Concat_mF4626905368D6558695A823466A1AF65EADB9923 (String_t* p0, String_t* p1, String_t* p2, const RuntimeMethod* method);
// ReturnType UnityEngine.AndroidJavaObject::CallStatic<UnityEngine.AndroidJavaObject>(System.String,System.Object[])
inline AndroidJavaObject_t5B3829FB6E1DBC020F5BA17846F1351EAA982F8E * AndroidJavaObject_CallStatic_TisAndroidJavaObject_t5B3829FB6E1DBC020F5BA17846F1351EAA982F8E_m4A35A2BD8253FB4872812D7B24A951A6AB1D0C6F (AndroidJavaObject_t5B3829FB6E1DBC020F5BA17846F1351EAA982F8E * __this, String_t* ___methodName0, ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* ___args1, const RuntimeMethod* method)
{
	return ((  AndroidJavaObject_t5B3829FB6E1DBC020F5BA17846F1351EAA982F8E * (*) (AndroidJavaObject_t5B3829FB6E1DBC020F5BA17846F1351EAA982F8E *, String_t*, ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*, const RuntimeMethod*))AndroidJavaObject_CallStatic_TisRuntimeObject_mE514C863E2C7A350BD4D9F5F20398DF94468766E_gshared)(__this, ___methodName0, ___args1, method);
}
// System.Object UnityEngine._AndroidJNIHelper::Unbox(UnityEngine.AndroidJavaObject)
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * _AndroidJNIHelper_Unbox_m8F6AFBE1E5344BD93DCE89A8C392CF2B7676DC26 (AndroidJavaObject_t5B3829FB6E1DBC020F5BA17846F1351EAA982F8E * ___obj0, const RuntimeMethod* method);
// System.Void System.Array::SetValue(System.Object,System.Int32)
extern "C" IL2CPP_METHOD_ATTR void Array_SetValue_m3C6811CE9C45D1E461404B5D2FBD4EC1A054FDCA (RuntimeArray * __this, RuntimeObject * p0, int32_t p1, const RuntimeMethod* method);
// ReturnType UnityEngine.AndroidJavaObject::Call<System.Int32>(System.String,System.Object[])
inline int32_t AndroidJavaObject_Call_TisInt32_t585191389E07734F19F3156FF88FB3EF4800D102_m96DA2E4324B0211375BAA992FD4731428F08B530 (AndroidJavaObject_t5B3829FB6E1DBC020F5BA17846F1351EAA982F8E * __this, String_t* ___methodName0, ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* ___args1, const RuntimeMethod* method)
{
	return ((  int32_t (*) (AndroidJavaObject_t5B3829FB6E1DBC020F5BA17846F1351EAA982F8E *, String_t*, ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*, const RuntimeMethod*))AndroidJavaObject_Call_TisInt32_t585191389E07734F19F3156FF88FB3EF4800D102_m96DA2E4324B0211375BAA992FD4731428F08B530_gshared)(__this, ___methodName0, ___args1, method);
}
// ReturnType UnityEngine.AndroidJavaObject::Call<System.Byte>(System.String,System.Object[])
inline uint8_t AndroidJavaObject_Call_TisByte_tF87C579059BD4633E6840EBBBEEF899C6E33EF07_m4146C48C7DFDAF10FBC023D3E6529CB590F7EEF8 (AndroidJavaObject_t5B3829FB6E1DBC020F5BA17846F1351EAA982F8E * __this, String_t* ___methodName0, ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* ___args1, const RuntimeMethod* method)
{
	return ((  uint8_t (*) (AndroidJavaObject_t5B3829FB6E1DBC020F5BA17846F1351EAA982F8E *, String_t*, ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*, const RuntimeMethod*))AndroidJavaObject_Call_TisByte_tF87C579059BD4633E6840EBBBEEF899C6E33EF07_m4146C48C7DFDAF10FBC023D3E6529CB590F7EEF8_gshared)(__this, ___methodName0, ___args1, method);
}
// ReturnType UnityEngine.AndroidJavaObject::Call<System.Int16>(System.String,System.Object[])
inline int16_t AndroidJavaObject_Call_TisInt16_t823A20635DAF5A3D93A1E01CFBF3CBA27CF00B4D_mF25CDDD74A99379570D993243DA32D2D0CAF95FF (AndroidJavaObject_t5B3829FB6E1DBC020F5BA17846F1351EAA982F8E * __this, String_t* ___methodName0, ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* ___args1, const RuntimeMethod* method)
{
	return ((  int16_t (*) (AndroidJavaObject_t5B3829FB6E1DBC020F5BA17846F1351EAA982F8E *, String_t*, ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*, const RuntimeMethod*))AndroidJavaObject_Call_TisInt16_t823A20635DAF5A3D93A1E01CFBF3CBA27CF00B4D_mF25CDDD74A99379570D993243DA32D2D0CAF95FF_gshared)(__this, ___methodName0, ___args1, method);
}
// ReturnType UnityEngine.AndroidJavaObject::Call<System.Int64>(System.String,System.Object[])
inline int64_t AndroidJavaObject_Call_TisInt64_t7A386C2FF7B0280A0F516992401DDFCF0FF7B436_mE485E930878F2C30F8659EC20300D3546E0AC484 (AndroidJavaObject_t5B3829FB6E1DBC020F5BA17846F1351EAA982F8E * __this, String_t* ___methodName0, ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* ___args1, const RuntimeMethod* method)
{
	return ((  int64_t (*) (AndroidJavaObject_t5B3829FB6E1DBC020F5BA17846F1351EAA982F8E *, String_t*, ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*, const RuntimeMethod*))AndroidJavaObject_Call_TisInt64_t7A386C2FF7B0280A0F516992401DDFCF0FF7B436_mE485E930878F2C30F8659EC20300D3546E0AC484_gshared)(__this, ___methodName0, ___args1, method);
}
// ReturnType UnityEngine.AndroidJavaObject::Call<System.Single>(System.String,System.Object[])
inline float AndroidJavaObject_Call_TisSingle_tDDDA9169C4E4E308AC6D7A824F9B28DC82204AE1_mDEE4DBCC617B60BB4CE4743431B838FECC359757 (AndroidJavaObject_t5B3829FB6E1DBC020F5BA17846F1351EAA982F8E * __this, String_t* ___methodName0, ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* ___args1, const RuntimeMethod* method)
{
	return ((  float (*) (AndroidJavaObject_t5B3829FB6E1DBC020F5BA17846F1351EAA982F8E *, String_t*, ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*, const RuntimeMethod*))AndroidJavaObject_Call_TisSingle_tDDDA9169C4E4E308AC6D7A824F9B28DC82204AE1_mDEE4DBCC617B60BB4CE4743431B838FECC359757_gshared)(__this, ___methodName0, ___args1, method);
}
// ReturnType UnityEngine.AndroidJavaObject::Call<System.Double>(System.String,System.Object[])
inline double AndroidJavaObject_Call_TisDouble_t358B8F23BDC52A5DD700E727E204F9F7CDE12409_mA09E9F86B0C09659E6ECB18EC567F98A38FDF738 (AndroidJavaObject_t5B3829FB6E1DBC020F5BA17846F1351EAA982F8E * __this, String_t* ___methodName0, ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* ___args1, const RuntimeMethod* method)
{
	return ((  double (*) (AndroidJavaObject_t5B3829FB6E1DBC020F5BA17846F1351EAA982F8E *, String_t*, ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*, const RuntimeMethod*))AndroidJavaObject_Call_TisDouble_t358B8F23BDC52A5DD700E727E204F9F7CDE12409_mA09E9F86B0C09659E6ECB18EC567F98A38FDF738_gshared)(__this, ___methodName0, ___args1, method);
}
// ReturnType UnityEngine.AndroidJavaObject::Call<System.Char>(System.String,System.Object[])
inline Il2CppChar AndroidJavaObject_Call_TisChar_tBF22D9FC341BE970735250BB6FF1A4A92BBA58B9_m1417D998764ED64D194E0A171677773221DAE64F (AndroidJavaObject_t5B3829FB6E1DBC020F5BA17846F1351EAA982F8E * __this, String_t* ___methodName0, ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* ___args1, const RuntimeMethod* method)
{
	return ((  Il2CppChar (*) (AndroidJavaObject_t5B3829FB6E1DBC020F5BA17846F1351EAA982F8E *, String_t*, ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*, const RuntimeMethod*))AndroidJavaObject_Call_TisChar_tBF22D9FC341BE970735250BB6FF1A4A92BBA58B9_m1417D998764ED64D194E0A171677773221DAE64F_gshared)(__this, ___methodName0, ___args1, method);
}
// System.Void UnityEngine.AndroidJavaClass::.ctor(System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR void AndroidJavaClass__ctor_m8718DF9B2AAE427C724E903720F1697906BB5896 (AndroidJavaClass_tFC9C1064BF4849691FEDC988743C0C271C62FDC8 * __this, intptr_t ___jclass0, const RuntimeMethod* method);
// System.Object UnityEngine._AndroidJNIHelper::UnboxArray(UnityEngine.AndroidJavaObject)
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * _AndroidJNIHelper_UnboxArray_mC196889BC2288A01DCF80DA2E27F832FA7C7CE2E (AndroidJavaObject_t5B3829FB6E1DBC020F5BA17846F1351EAA982F8E * ___obj0, const RuntimeMethod* method);
// System.Void UnityEngine.AndroidJavaObject::.ctor(System.String,System.Object[])
extern "C" IL2CPP_METHOD_ATTR void AndroidJavaObject__ctor_mBD417486B0BD80E4CE3677B3AC825B3EA9BC7E5C (AndroidJavaObject_t5B3829FB6E1DBC020F5BA17846F1351EAA982F8E * __this, String_t* ___className0, ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* ___args1, const RuntimeMethod* method);
// UnityEngine.AndroidJavaObject UnityEngine.AndroidJavaObject::AndroidJavaObjectDeleteLocalRef(System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR AndroidJavaObject_t5B3829FB6E1DBC020F5BA17846F1351EAA982F8E * AndroidJavaObject_AndroidJavaObjectDeleteLocalRef_m98A6BB7A74AF30A3D4ED582E426F31ACFA497E7B (intptr_t ___jobject0, const RuntimeMethod* method);
// System.Void UnityEngine.AndroidJNISafe::DeleteLocalRef(System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR void AndroidJNISafe_DeleteLocalRef_mD2022EBA880AA5732254B6A24F957FC4E8777920 (intptr_t ___localref0, const RuntimeMethod* method);
// System.Type System.Type::GetTypeFromHandle(System.RuntimeTypeHandle)
extern "C" IL2CPP_METHOD_ATTR Type_t * Type_GetTypeFromHandle_m9DC58ADF0512987012A8A016FB64B068F3B1AFF6 (RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D  p0, const RuntimeMethod* method);
// System.IntPtr UnityEngine.AndroidJNISafe::ToIntArray(System.Int32[])
extern "C" IL2CPP_METHOD_ATTR intptr_t AndroidJNISafe_ToIntArray_m799FBC8B925ABFA28F534BC074A3541F8568A658 (Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* ___array0, const RuntimeMethod* method);
// System.IntPtr UnityEngine.AndroidJNISafe::ToBooleanArray(System.Boolean[])
extern "C" IL2CPP_METHOD_ATTR intptr_t AndroidJNISafe_ToBooleanArray_m5DBB7AF3B39444A3EDBA84DFDC3239077AE5EAC3 (BooleanU5BU5D_t192C7579715690E25BD5EFED47F3E0FC9DCB2040* ___array0, const RuntimeMethod* method);
// System.IntPtr UnityEngine.AndroidJNISafe::ToByteArray(System.Byte[])
extern "C" IL2CPP_METHOD_ATTR intptr_t AndroidJNISafe_ToByteArray_m7DE54D843051D37479D4B822112739BF4ACE085D (ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* ___array0, const RuntimeMethod* method);
// System.IntPtr UnityEngine.AndroidJNISafe::ToShortArray(System.Int16[])
extern "C" IL2CPP_METHOD_ATTR intptr_t AndroidJNISafe_ToShortArray_m0452ECC8FFA622547E5F44F0DCA4856008073477 (Int16U5BU5D_tDA0F0B2730337F72E44DB024BE9818FA8EDE8D28* ___array0, const RuntimeMethod* method);
// System.IntPtr UnityEngine.AndroidJNISafe::ToLongArray(System.Int64[])
extern "C" IL2CPP_METHOD_ATTR intptr_t AndroidJNISafe_ToLongArray_m99A39904C7FC45AF25C98311565BF2ED4C122D38 (Int64U5BU5D_tE04A3DEF6AF1C852A43B98A24EFB715806B37F5F* ___array0, const RuntimeMethod* method);
// System.IntPtr UnityEngine.AndroidJNISafe::ToFloatArray(System.Single[])
extern "C" IL2CPP_METHOD_ATTR intptr_t AndroidJNISafe_ToFloatArray_m7BC8B6FDADCB4477F6F5F2D1535419639E9E3A2A (SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5* ___array0, const RuntimeMethod* method);
// System.IntPtr UnityEngine.AndroidJNISafe::ToDoubleArray(System.Double[])
extern "C" IL2CPP_METHOD_ATTR intptr_t AndroidJNISafe_ToDoubleArray_m87AE9976817D3569D116781CF88739CA6E1EBE4B (DoubleU5BU5D_tF9383437DDA9EAC9F60627E9E6E2045CF7CB182D* ___array0, const RuntimeMethod* method);
// System.IntPtr UnityEngine.AndroidJNISafe::ToCharArray(System.Char[])
extern "C" IL2CPP_METHOD_ATTR intptr_t AndroidJNISafe_ToCharArray_mBEB6BBCAE23A3D4309F5D023859116B0916FB848 (CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* ___array0, const RuntimeMethod* method);
// System.IntPtr UnityEngine.AndroidJNISafe::FindClass(System.String)
extern "C" IL2CPP_METHOD_ATTR intptr_t AndroidJNISafe_FindClass_m1C558F3BE873EAAC6D0C3C34B7E15EFEE3002C03 (String_t* ___name0, const RuntimeMethod* method);
// System.IntPtr UnityEngine.AndroidJNI::NewObjectArray(System.Int32,System.IntPtr,System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR intptr_t AndroidJNI_NewObjectArray_m4E5A17102A16F3755D8EDEC3DC4BD187DC663630 (int32_t ___size0, intptr_t ___clazz1, intptr_t ___obj2, const RuntimeMethod* method);
// System.Void UnityEngine.AndroidJNI::SetObjectArrayElement(System.IntPtr,System.Int32,System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR void AndroidJNI_SetObjectArrayElement_m8D9CE3DBC0329C24ED7C2B85C881D78C2BFF20E4 (intptr_t ___array0, int32_t ___index1, intptr_t ___obj2, const RuntimeMethod* method);
// System.Boolean System.IntPtr::op_Equality(System.IntPtr,System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR bool IntPtr_op_Equality_mEE8D9FD2DFE312BBAA8B4ED3BF7976B3142A5934 (intptr_t p0, intptr_t p1, const RuntimeMethod* method);
// System.IntPtr UnityEngine.AndroidJNISafe::ToObjectArray(System.IntPtr[],System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR intptr_t AndroidJNISafe_ToObjectArray_m669BAB0566C5E683249F28FBD3B6225C0CC0B056 (IntPtrU5BU5D_t4DC01DCB9A6DF6C9792A6513595D7A11E637DCDD* ___array0, intptr_t ___type1, const RuntimeMethod* method);
// System.String UnityEngine._AndroidJNIHelper::GetSignature(System.Object[])
extern "C" IL2CPP_METHOD_ATTR String_t* _AndroidJNIHelper_GetSignature_m074EF61F920B7E1BCB9582E78CA6A49FD1EE1162 (ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* ___args0, const RuntimeMethod* method);
// System.IntPtr UnityEngine.AndroidJNIHelper::GetConstructorID(System.IntPtr,System.String)
extern "C" IL2CPP_METHOD_ATTR intptr_t AndroidJNIHelper_GetConstructorID_mE4DCB0BDF860311D9CDAC58847B9DF9B0ABBECEF (intptr_t ___javaClass0, String_t* ___signature1, const RuntimeMethod* method);
// System.IntPtr UnityEngine.AndroidJNIHelper::GetMethodID(System.IntPtr,System.String,System.String,System.Boolean)
extern "C" IL2CPP_METHOD_ATTR intptr_t AndroidJNIHelper_GetMethodID_m9F3A8B259E3BB9636C6DFE77B5DCE52F07D972DF (intptr_t ___javaClass0, String_t* ___methodName1, String_t* ___signature2, bool ___isStatic3, const RuntimeMethod* method);
// System.IntPtr UnityEngine.AndroidReflection::GetConstructorMember(System.IntPtr,System.String)
extern "C" IL2CPP_METHOD_ATTR intptr_t AndroidReflection_GetConstructorMember_m2239F61741B804D046C6441C24BE034859516067 (intptr_t ___jclass0, String_t* ___signature1, const RuntimeMethod* method);
// System.IntPtr UnityEngine.AndroidJNISafe::FromReflectedMethod(System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR intptr_t AndroidJNISafe_FromReflectedMethod_m4019CDA7B8BA75D09258901FC082AD2477A3E7B8 (intptr_t ___refMethod0, const RuntimeMethod* method);
// System.IntPtr UnityEngine.AndroidJNISafe::GetMethodID(System.IntPtr,System.String,System.String)
extern "C" IL2CPP_METHOD_ATTR intptr_t AndroidJNISafe_GetMethodID_m6B9869E1214260D69C447059BFF94731B99F9FB9 (intptr_t ___obj0, String_t* ___name1, String_t* ___sig2, const RuntimeMethod* method);
// System.IntPtr UnityEngine.AndroidReflection::GetMethodMember(System.IntPtr,System.String,System.String,System.Boolean)
extern "C" IL2CPP_METHOD_ATTR intptr_t AndroidReflection_GetMethodMember_m430592F5B8E03F3CBA18022A63BA266A75E73485 (intptr_t ___jclass0, String_t* ___methodName1, String_t* ___signature2, bool ___isStatic3, const RuntimeMethod* method);
// System.IntPtr UnityEngine._AndroidJNIHelper::GetMethodIDFallback(System.IntPtr,System.String,System.String,System.Boolean)
extern "C" IL2CPP_METHOD_ATTR intptr_t _AndroidJNIHelper_GetMethodIDFallback_mB0C0E5A27ECD7FA819E4FBB8220E1CE19309125F (intptr_t ___jclass0, String_t* ___methodName1, String_t* ___signature2, bool ___isStatic3, const RuntimeMethod* method);
// System.IntPtr UnityEngine.AndroidJNISafe::GetStaticMethodID(System.IntPtr,System.String,System.String)
extern "C" IL2CPP_METHOD_ATTR intptr_t AndroidJNISafe_GetStaticMethodID_m0BEA282D30F63BDA5C18BDA6BCAAC45FABE6ADA2 (intptr_t ___clazz0, String_t* ___name1, String_t* ___sig2, const RuntimeMethod* method);
// System.IntPtr UnityEngine.AndroidReflection::GetFieldMember(System.IntPtr,System.String,System.String,System.Boolean)
extern "C" IL2CPP_METHOD_ATTR intptr_t AndroidReflection_GetFieldMember_m742E4DB48ADEAC96028F344ABC153DD325EE3CA4 (intptr_t ___jclass0, String_t* ___fieldName1, String_t* ___signature2, bool ___isStatic3, const RuntimeMethod* method);
// System.IntPtr UnityEngine.AndroidJNISafe::FromReflectedField(System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR intptr_t AndroidJNISafe_FromReflectedField_m165BF99D5D87221CE0EBBEF70CE8D6D3302286B2 (intptr_t ___refField0, const RuntimeMethod* method);
// System.IntPtr UnityEngine.AndroidJNISafe::GetStaticFieldID(System.IntPtr,System.String,System.String)
extern "C" IL2CPP_METHOD_ATTR intptr_t AndroidJNISafe_GetStaticFieldID_m91597A42136E25048DE3DD0A9E0514ACB2A38E5B (intptr_t ___clazz0, String_t* ___name1, String_t* ___sig2, const RuntimeMethod* method);
// System.IntPtr UnityEngine.AndroidJNISafe::GetFieldID(System.IntPtr,System.String,System.String)
extern "C" IL2CPP_METHOD_ATTR intptr_t AndroidJNISafe_GetFieldID_mAA1BB365E80C1A0871B93DF0379B145E78F239B1 (intptr_t ___clazz0, String_t* ___name1, String_t* ___sig2, const RuntimeMethod* method);
// System.Boolean UnityEngine.AndroidReflection::IsAssignableFrom(System.Type,System.Type)
extern "C" IL2CPP_METHOD_ATTR bool AndroidReflection_IsAssignableFrom_m2E1093337DCA3E0EA0B2AD80F554339F8FFC3221 (Type_t * ___t0, Type_t * ___from1, const RuntimeMethod* method);
// System.Void System.Text.StringBuilder::.ctor()
extern "C" IL2CPP_METHOD_ATTR void StringBuilder__ctor_mF928376F82E8C8FF3C11842C562DB8CF28B2735E (StringBuilder_t * __this, const RuntimeMethod* method);
// System.Text.StringBuilder System.Text.StringBuilder::Append(System.Char)
extern "C" IL2CPP_METHOD_ATTR StringBuilder_t * StringBuilder_Append_m05C12F58ADC2D807613A9301DF438CB3CD09B75A (StringBuilder_t * __this, Il2CppChar p0, const RuntimeMethod* method);
// System.String UnityEngine._AndroidJNIHelper::GetSignature(System.Object)
extern "C" IL2CPP_METHOD_ATTR String_t* _AndroidJNIHelper_GetSignature_m43015E538F32185A250FC4D1732EEFC4740E3B0E (RuntimeObject * ___obj0, const RuntimeMethod* method);
// System.Text.StringBuilder System.Text.StringBuilder::Append(System.String)
extern "C" IL2CPP_METHOD_ATTR StringBuilder_t * StringBuilder_Append_mDBB8CCBB7750C67BE2F2D92F47E6C0FA42793260 (StringBuilder_t * __this, String_t* p0, const RuntimeMethod* method);
// System.String System.String::Concat(System.Object[])
extern "C" IL2CPP_METHOD_ATTR String_t* String_Concat_mB7BA84F13912303B2E5E40FBF0109E1A328ACA07 (ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* p0, const RuntimeMethod* method);
// System.Void System.Collections.Stack::.ctor()
extern "C" IL2CPP_METHOD_ATTR void Stack__ctor_m98F99FFBF373762F139506711349267D5354FE08 (Stack_t37723B68CC4FFD95F0F3D06A5D42D7DEE7569643 * __this, const RuntimeMethod* method);
// System.Single System.Threading.Interlocked::CompareExchange(System.Single&,System.Single,System.Single)
extern "C" IL2CPP_METHOD_ATTR float Interlocked_CompareExchange_m2C6E1F976D009AB3858428E90B8F99F98F08155D (float* p0, float p1, float p2, const RuntimeMethod* method);
// System.Delegate System.Delegate::CreateDelegate(System.Type,System.Object,System.Reflection.MethodInfo)
extern "C" IL2CPP_METHOD_ATTR Delegate_t * Delegate_CreateDelegate_m3A012C4DD077BAD1698B11602174E167F7B9D346 (Type_t * p0, RuntimeObject * p1, MethodInfo_t * p2, const RuntimeMethod* method);
// System.Reflection.MethodInfo System.Delegate::get_Method()
extern "C" IL2CPP_METHOD_ATTR MethodInfo_t * Delegate_get_Method_m0AC85D2B0C4CA63C471BC37FFDC3A5EA1E8ED048 (Delegate_t * __this, const RuntimeMethod* method);
// System.Delegate System.Delegate::CreateDelegate(System.Type,System.Reflection.MethodInfo)
extern "C" IL2CPP_METHOD_ATTR Delegate_t * Delegate_CreateDelegate_mD7C5EDDB32C63A9BD9DE43AC879AFF4EBC6641D1 (Type_t * p0, MethodInfo_t * p1, const RuntimeMethod* method);
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityEngine.Vector4::.ctor(System.Single,System.Single,System.Single,System.Single)
extern "C" IL2CPP_METHOD_ATTR void Vector4__ctor_m545458525879607A5392A10B175D0C19B2BC715D (Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E * __this, float ___x0, float ___y1, float ___z2, float ___w3, const RuntimeMethod* method)
{
	{
		float L_0 = ___x0;
		__this->set_x_1(L_0);
		float L_1 = ___y1;
		__this->set_y_2(L_1);
		float L_2 = ___z2;
		__this->set_z_3(L_2);
		float L_3 = ___w3;
		__this->set_w_4(L_3);
		return;
	}
}
extern "C"  void Vector4__ctor_m545458525879607A5392A10B175D0C19B2BC715D_AdjustorThunk (RuntimeObject * __this, float ___x0, float ___y1, float ___z2, float ___w3, const RuntimeMethod* method)
{
	Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E * _thisAdjusted = reinterpret_cast<Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E *>(__this + 1);
	Vector4__ctor_m545458525879607A5392A10B175D0C19B2BC715D(_thisAdjusted, ___x0, ___y1, ___z2, ___w3, method);
}
// System.Single UnityEngine.Vector4::get_Item(System.Int32)
extern "C" IL2CPP_METHOD_ATTR float Vector4_get_Item_m39878FDA732B20347BB37CD1485560E9267EDC98 (Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E * __this, int32_t ___index0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Vector4_get_Item_m39878FDA732B20347BB37CD1485560E9267EDC98_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	{
		int32_t L_0 = ___index0;
		switch (L_0)
		{
			case 0:
			{
				goto IL_001c;
			}
			case 1:
			{
				goto IL_0028;
			}
			case 2:
			{
				goto IL_0034;
			}
			case 3:
			{
				goto IL_0040;
			}
		}
	}
	{
		goto IL_004c;
	}

IL_001c:
	{
		float L_1 = __this->get_x_1();
		V_0 = L_1;
		goto IL_0057;
	}

IL_0028:
	{
		float L_2 = __this->get_y_2();
		V_0 = L_2;
		goto IL_0057;
	}

IL_0034:
	{
		float L_3 = __this->get_z_3();
		V_0 = L_3;
		goto IL_0057;
	}

IL_0040:
	{
		float L_4 = __this->get_w_4();
		V_0 = L_4;
		goto IL_0057;
	}

IL_004c:
	{
		IndexOutOfRangeException_tEC7665FC66525AB6A6916A7EB505E5591683F0CF * L_5 = (IndexOutOfRangeException_tEC7665FC66525AB6A6916A7EB505E5591683F0CF *)il2cpp_codegen_object_new(IndexOutOfRangeException_tEC7665FC66525AB6A6916A7EB505E5591683F0CF_il2cpp_TypeInfo_var);
		IndexOutOfRangeException__ctor_mCCE2EFF47A0ACB4B2636F63140F94FCEA71A9BCA(L_5, _stringLiteral890F52A3297E6020D62E0582519A9EA5B7A9ECF1, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_5, NULL, Vector4_get_Item_m39878FDA732B20347BB37CD1485560E9267EDC98_RuntimeMethod_var);
	}

IL_0057:
	{
		float L_6 = V_0;
		return L_6;
	}
}
extern "C"  float Vector4_get_Item_m39878FDA732B20347BB37CD1485560E9267EDC98_AdjustorThunk (RuntimeObject * __this, int32_t ___index0, const RuntimeMethod* method)
{
	Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E * _thisAdjusted = reinterpret_cast<Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E *>(__this + 1);
	return Vector4_get_Item_m39878FDA732B20347BB37CD1485560E9267EDC98(_thisAdjusted, ___index0, method);
}
// System.Void UnityEngine.Vector4::set_Item(System.Int32,System.Single)
extern "C" IL2CPP_METHOD_ATTR void Vector4_set_Item_m56FB3A149299FEF1C0CF638CFAF71C7F0685EE45 (Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E * __this, int32_t ___index0, float ___value1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Vector4_set_Item_m56FB3A149299FEF1C0CF638CFAF71C7F0685EE45_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		int32_t L_0 = ___index0;
		switch (L_0)
		{
			case 0:
			{
				goto IL_001c;
			}
			case 1:
			{
				goto IL_0028;
			}
			case 2:
			{
				goto IL_0034;
			}
			case 3:
			{
				goto IL_0040;
			}
		}
	}
	{
		goto IL_004c;
	}

IL_001c:
	{
		float L_1 = ___value1;
		__this->set_x_1(L_1);
		goto IL_0057;
	}

IL_0028:
	{
		float L_2 = ___value1;
		__this->set_y_2(L_2);
		goto IL_0057;
	}

IL_0034:
	{
		float L_3 = ___value1;
		__this->set_z_3(L_3);
		goto IL_0057;
	}

IL_0040:
	{
		float L_4 = ___value1;
		__this->set_w_4(L_4);
		goto IL_0057;
	}

IL_004c:
	{
		IndexOutOfRangeException_tEC7665FC66525AB6A6916A7EB505E5591683F0CF * L_5 = (IndexOutOfRangeException_tEC7665FC66525AB6A6916A7EB505E5591683F0CF *)il2cpp_codegen_object_new(IndexOutOfRangeException_tEC7665FC66525AB6A6916A7EB505E5591683F0CF_il2cpp_TypeInfo_var);
		IndexOutOfRangeException__ctor_mCCE2EFF47A0ACB4B2636F63140F94FCEA71A9BCA(L_5, _stringLiteral890F52A3297E6020D62E0582519A9EA5B7A9ECF1, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_5, NULL, Vector4_set_Item_m56FB3A149299FEF1C0CF638CFAF71C7F0685EE45_RuntimeMethod_var);
	}

IL_0057:
	{
		return;
	}
}
extern "C"  void Vector4_set_Item_m56FB3A149299FEF1C0CF638CFAF71C7F0685EE45_AdjustorThunk (RuntimeObject * __this, int32_t ___index0, float ___value1, const RuntimeMethod* method)
{
	Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E * _thisAdjusted = reinterpret_cast<Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E *>(__this + 1);
	Vector4_set_Item_m56FB3A149299FEF1C0CF638CFAF71C7F0685EE45(_thisAdjusted, ___index0, ___value1, method);
}
// System.Int32 UnityEngine.Vector4::GetHashCode()
extern "C" IL2CPP_METHOD_ATTR int32_t Vector4_GetHashCode_m7329FEA2E90CDBDBF4F09F51D92C87E08F5DC92E (Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		float* L_0 = __this->get_address_of_x_1();
		int32_t L_1 = Single_GetHashCode_m1BC0733E0C3851ED9D1B6C9C0B243BB88BE77AD0((float*)L_0, /*hidden argument*/NULL);
		float* L_2 = __this->get_address_of_y_2();
		int32_t L_3 = Single_GetHashCode_m1BC0733E0C3851ED9D1B6C9C0B243BB88BE77AD0((float*)L_2, /*hidden argument*/NULL);
		float* L_4 = __this->get_address_of_z_3();
		int32_t L_5 = Single_GetHashCode_m1BC0733E0C3851ED9D1B6C9C0B243BB88BE77AD0((float*)L_4, /*hidden argument*/NULL);
		float* L_6 = __this->get_address_of_w_4();
		int32_t L_7 = Single_GetHashCode_m1BC0733E0C3851ED9D1B6C9C0B243BB88BE77AD0((float*)L_6, /*hidden argument*/NULL);
		V_0 = ((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_1^(int32_t)((int32_t)((int32_t)L_3<<(int32_t)2))))^(int32_t)((int32_t)((int32_t)L_5>>(int32_t)2))))^(int32_t)((int32_t)((int32_t)L_7>>(int32_t)1))));
		goto IL_0054;
	}

IL_0054:
	{
		int32_t L_8 = V_0;
		return L_8;
	}
}
extern "C"  int32_t Vector4_GetHashCode_m7329FEA2E90CDBDBF4F09F51D92C87E08F5DC92E_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E * _thisAdjusted = reinterpret_cast<Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E *>(__this + 1);
	return Vector4_GetHashCode_m7329FEA2E90CDBDBF4F09F51D92C87E08F5DC92E(_thisAdjusted, method);
}
// System.Boolean UnityEngine.Vector4::Equals(System.Object)
extern "C" IL2CPP_METHOD_ATTR bool Vector4_Equals_m552ECA9ECD220D6526D8ECC9902016B6FC6D49B5 (Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E * __this, RuntimeObject * ___other0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Vector4_Equals_m552ECA9ECD220D6526D8ECC9902016B6FC6D49B5_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		RuntimeObject * L_0 = ___other0;
		if (((RuntimeObject *)IsInstSealed((RuntimeObject*)L_0, Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E_il2cpp_TypeInfo_var)))
		{
			goto IL_0013;
		}
	}
	{
		V_0 = (bool)0;
		goto IL_0025;
	}

IL_0013:
	{
		RuntimeObject * L_1 = ___other0;
		bool L_2 = Vector4_Equals_mB9894C2D4EE56C6E8FDF6CC40DCE0CE16BA4F7BF((Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E *)__this, ((*(Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E *)((Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E *)UnBox(L_1, Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E_il2cpp_TypeInfo_var)))), /*hidden argument*/NULL);
		V_0 = L_2;
		goto IL_0025;
	}

IL_0025:
	{
		bool L_3 = V_0;
		return L_3;
	}
}
extern "C"  bool Vector4_Equals_m552ECA9ECD220D6526D8ECC9902016B6FC6D49B5_AdjustorThunk (RuntimeObject * __this, RuntimeObject * ___other0, const RuntimeMethod* method)
{
	Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E * _thisAdjusted = reinterpret_cast<Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E *>(__this + 1);
	return Vector4_Equals_m552ECA9ECD220D6526D8ECC9902016B6FC6D49B5(_thisAdjusted, ___other0, method);
}
// System.Boolean UnityEngine.Vector4::Equals(UnityEngine.Vector4)
extern "C" IL2CPP_METHOD_ATTR bool Vector4_Equals_mB9894C2D4EE56C6E8FDF6CC40DCE0CE16BA4F7BF (Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E * __this, Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  ___other0, const RuntimeMethod* method)
{
	bool V_0 = false;
	int32_t G_B5_0 = 0;
	{
		float* L_0 = __this->get_address_of_x_1();
		float L_1 = (&___other0)->get_x_1();
		bool L_2 = Single_Equals_mCDFA927E712FBA83D076864E16C77E39A6E66FE7((float*)L_0, L_1, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_005a;
		}
	}
	{
		float* L_3 = __this->get_address_of_y_2();
		float L_4 = (&___other0)->get_y_2();
		bool L_5 = Single_Equals_mCDFA927E712FBA83D076864E16C77E39A6E66FE7((float*)L_3, L_4, /*hidden argument*/NULL);
		if (!L_5)
		{
			goto IL_005a;
		}
	}
	{
		float* L_6 = __this->get_address_of_z_3();
		float L_7 = (&___other0)->get_z_3();
		bool L_8 = Single_Equals_mCDFA927E712FBA83D076864E16C77E39A6E66FE7((float*)L_6, L_7, /*hidden argument*/NULL);
		if (!L_8)
		{
			goto IL_005a;
		}
	}
	{
		float* L_9 = __this->get_address_of_w_4();
		float L_10 = (&___other0)->get_w_4();
		bool L_11 = Single_Equals_mCDFA927E712FBA83D076864E16C77E39A6E66FE7((float*)L_9, L_10, /*hidden argument*/NULL);
		G_B5_0 = ((int32_t)(L_11));
		goto IL_005b;
	}

IL_005a:
	{
		G_B5_0 = 0;
	}

IL_005b:
	{
		V_0 = (bool)G_B5_0;
		goto IL_0061;
	}

IL_0061:
	{
		bool L_12 = V_0;
		return L_12;
	}
}
extern "C"  bool Vector4_Equals_mB9894C2D4EE56C6E8FDF6CC40DCE0CE16BA4F7BF_AdjustorThunk (RuntimeObject * __this, Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  ___other0, const RuntimeMethod* method)
{
	Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E * _thisAdjusted = reinterpret_cast<Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E *>(__this + 1);
	return Vector4_Equals_mB9894C2D4EE56C6E8FDF6CC40DCE0CE16BA4F7BF(_thisAdjusted, ___other0, method);
}
// System.Single UnityEngine.Vector4::Dot(UnityEngine.Vector4,UnityEngine.Vector4)
extern "C" IL2CPP_METHOD_ATTR float Vector4_Dot_m9FAE8FE89CF99841AD8D2113DFCDB8764F9FBB18 (Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  ___a0, Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  ___b1, const RuntimeMethod* method)
{
	float V_0 = 0.0f;
	{
		float L_0 = (&___a0)->get_x_1();
		float L_1 = (&___b1)->get_x_1();
		float L_2 = (&___a0)->get_y_2();
		float L_3 = (&___b1)->get_y_2();
		float L_4 = (&___a0)->get_z_3();
		float L_5 = (&___b1)->get_z_3();
		float L_6 = (&___a0)->get_w_4();
		float L_7 = (&___b1)->get_w_4();
		V_0 = ((float)il2cpp_codegen_add((float)((float)il2cpp_codegen_add((float)((float)il2cpp_codegen_add((float)((float)il2cpp_codegen_multiply((float)L_0, (float)L_1)), (float)((float)il2cpp_codegen_multiply((float)L_2, (float)L_3)))), (float)((float)il2cpp_codegen_multiply((float)L_4, (float)L_5)))), (float)((float)il2cpp_codegen_multiply((float)L_6, (float)L_7))));
		goto IL_0046;
	}

IL_0046:
	{
		float L_8 = V_0;
		return L_8;
	}
}
// System.Single UnityEngine.Vector4::get_sqrMagnitude()
extern "C" IL2CPP_METHOD_ATTR float Vector4_get_sqrMagnitude_m6B2707CBD31D237605D066A5925E6419D28B5397 (Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Vector4_get_sqrMagnitude_m6B2707CBD31D237605D066A5925E6419D28B5397_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	{
		Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  L_0 = (*(Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E *)__this);
		Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  L_1 = (*(Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E *)__this);
		IL2CPP_RUNTIME_CLASS_INIT(Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E_il2cpp_TypeInfo_var);
		float L_2 = Vector4_Dot_m9FAE8FE89CF99841AD8D2113DFCDB8764F9FBB18(L_0, L_1, /*hidden argument*/NULL);
		V_0 = L_2;
		goto IL_0018;
	}

IL_0018:
	{
		float L_3 = V_0;
		return L_3;
	}
}
extern "C"  float Vector4_get_sqrMagnitude_m6B2707CBD31D237605D066A5925E6419D28B5397_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E * _thisAdjusted = reinterpret_cast<Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E *>(__this + 1);
	return Vector4_get_sqrMagnitude_m6B2707CBD31D237605D066A5925E6419D28B5397(_thisAdjusted, method);
}
// UnityEngine.Vector4 UnityEngine.Vector4::get_zero()
extern "C" IL2CPP_METHOD_ATTR Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  Vector4_get_zero_m42821248DDFA4F9A3E0B2E84CBCB737BE9DCE3E9 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Vector4_get_zero_m42821248DDFA4F9A3E0B2E84CBCB737BE9DCE3E9_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  V_0;
	memset(&V_0, 0, sizeof(V_0));
	{
		IL2CPP_RUNTIME_CLASS_INIT(Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E_il2cpp_TypeInfo_var);
		Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  L_0 = ((Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E_StaticFields*)il2cpp_codegen_static_fields_for(Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E_il2cpp_TypeInfo_var))->get_zeroVector_5();
		V_0 = L_0;
		goto IL_000c;
	}

IL_000c:
	{
		Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  L_1 = V_0;
		return L_1;
	}
}
// UnityEngine.Vector4 UnityEngine.Vector4::op_Subtraction(UnityEngine.Vector4,UnityEngine.Vector4)
extern "C" IL2CPP_METHOD_ATTR Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  Vector4_op_Subtraction_m2D5AED6DD0324E479548A9346AE29DAB489A8250 (Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  ___a0, Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  ___b1, const RuntimeMethod* method)
{
	Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  V_0;
	memset(&V_0, 0, sizeof(V_0));
	{
		float L_0 = (&___a0)->get_x_1();
		float L_1 = (&___b1)->get_x_1();
		float L_2 = (&___a0)->get_y_2();
		float L_3 = (&___b1)->get_y_2();
		float L_4 = (&___a0)->get_z_3();
		float L_5 = (&___b1)->get_z_3();
		float L_6 = (&___a0)->get_w_4();
		float L_7 = (&___b1)->get_w_4();
		Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  L_8;
		memset(&L_8, 0, sizeof(L_8));
		Vector4__ctor_m545458525879607A5392A10B175D0C19B2BC715D((&L_8), ((float)il2cpp_codegen_subtract((float)L_0, (float)L_1)), ((float)il2cpp_codegen_subtract((float)L_2, (float)L_3)), ((float)il2cpp_codegen_subtract((float)L_4, (float)L_5)), ((float)il2cpp_codegen_subtract((float)L_6, (float)L_7)), /*hidden argument*/NULL);
		V_0 = L_8;
		goto IL_0048;
	}

IL_0048:
	{
		Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  L_9 = V_0;
		return L_9;
	}
}
// UnityEngine.Vector4 UnityEngine.Vector4::op_Multiply(UnityEngine.Vector4,System.Single)
extern "C" IL2CPP_METHOD_ATTR Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  Vector4_op_Multiply_m16A8F11F144C03A8C817AC4FE542689E746043F4 (Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  ___a0, float ___d1, const RuntimeMethod* method)
{
	Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  V_0;
	memset(&V_0, 0, sizeof(V_0));
	{
		float L_0 = (&___a0)->get_x_1();
		float L_1 = ___d1;
		float L_2 = (&___a0)->get_y_2();
		float L_3 = ___d1;
		float L_4 = (&___a0)->get_z_3();
		float L_5 = ___d1;
		float L_6 = (&___a0)->get_w_4();
		float L_7 = ___d1;
		Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  L_8;
		memset(&L_8, 0, sizeof(L_8));
		Vector4__ctor_m545458525879607A5392A10B175D0C19B2BC715D((&L_8), ((float)il2cpp_codegen_multiply((float)L_0, (float)L_1)), ((float)il2cpp_codegen_multiply((float)L_2, (float)L_3)), ((float)il2cpp_codegen_multiply((float)L_4, (float)L_5)), ((float)il2cpp_codegen_multiply((float)L_6, (float)L_7)), /*hidden argument*/NULL);
		V_0 = L_8;
		goto IL_0030;
	}

IL_0030:
	{
		Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  L_9 = V_0;
		return L_9;
	}
}
// UnityEngine.Vector4 UnityEngine.Vector4::op_Division(UnityEngine.Vector4,System.Single)
extern "C" IL2CPP_METHOD_ATTR Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  Vector4_op_Division_m1D1BD7FFEF0CDBB7CE063CA139C22210A0B76689 (Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  ___a0, float ___d1, const RuntimeMethod* method)
{
	Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  V_0;
	memset(&V_0, 0, sizeof(V_0));
	{
		float L_0 = (&___a0)->get_x_1();
		float L_1 = ___d1;
		float L_2 = (&___a0)->get_y_2();
		float L_3 = ___d1;
		float L_4 = (&___a0)->get_z_3();
		float L_5 = ___d1;
		float L_6 = (&___a0)->get_w_4();
		float L_7 = ___d1;
		Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  L_8;
		memset(&L_8, 0, sizeof(L_8));
		Vector4__ctor_m545458525879607A5392A10B175D0C19B2BC715D((&L_8), ((float)((float)L_0/(float)L_1)), ((float)((float)L_2/(float)L_3)), ((float)((float)L_4/(float)L_5)), ((float)((float)L_6/(float)L_7)), /*hidden argument*/NULL);
		V_0 = L_8;
		goto IL_0030;
	}

IL_0030:
	{
		Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  L_9 = V_0;
		return L_9;
	}
}
// System.Boolean UnityEngine.Vector4::op_Equality(UnityEngine.Vector4,UnityEngine.Vector4)
extern "C" IL2CPP_METHOD_ATTR bool Vector4_op_Equality_m9AE0D09EC7E02201F94AE469ADE9F416D0E20441 (Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  ___lhs0, Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  ___rhs1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Vector4_op_Equality_m9AE0D09EC7E02201F94AE469ADE9F416D0E20441_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  L_0 = ___lhs0;
		Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  L_1 = ___rhs1;
		IL2CPP_RUNTIME_CLASS_INIT(Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E_il2cpp_TypeInfo_var);
		Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  L_2 = Vector4_op_Subtraction_m2D5AED6DD0324E479548A9346AE29DAB489A8250(L_0, L_1, /*hidden argument*/NULL);
		float L_3 = Vector4_SqrMagnitude_mC2577C7119B10D3211BEF8BD3D8C0736274D1C10(L_2, /*hidden argument*/NULL);
		V_0 = (bool)((((float)L_3) < ((float)(9.99999944E-11f)))? 1 : 0);
		goto IL_001a;
	}

IL_001a:
	{
		bool L_4 = V_0;
		return L_4;
	}
}
// System.Boolean UnityEngine.Vector4::op_Inequality(UnityEngine.Vector4,UnityEngine.Vector4)
extern "C" IL2CPP_METHOD_ATTR bool Vector4_op_Inequality_m7038D1E27BCA2E4C0EA8E034C30E586635FBF228 (Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  ___lhs0, Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  ___rhs1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Vector4_op_Inequality_m7038D1E27BCA2E4C0EA8E034C30E586635FBF228_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  L_0 = ___lhs0;
		Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  L_1 = ___rhs1;
		IL2CPP_RUNTIME_CLASS_INIT(Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E_il2cpp_TypeInfo_var);
		bool L_2 = Vector4_op_Equality_m9AE0D09EC7E02201F94AE469ADE9F416D0E20441(L_0, L_1, /*hidden argument*/NULL);
		V_0 = (bool)((((int32_t)L_2) == ((int32_t)0))? 1 : 0);
		goto IL_0011;
	}

IL_0011:
	{
		bool L_3 = V_0;
		return L_3;
	}
}
// UnityEngine.Vector3 UnityEngine.Vector4::op_Implicit(UnityEngine.Vector4)
extern "C" IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  Vector4_op_Implicit_mEAB05A77FF8B3EE79C31499F0CF0A0D621A6496C (Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  ___v0, const RuntimeMethod* method)
{
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  V_0;
	memset(&V_0, 0, sizeof(V_0));
	{
		float L_0 = (&___v0)->get_x_1();
		float L_1 = (&___v0)->get_y_2();
		float L_2 = (&___v0)->get_z_3();
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_3;
		memset(&L_3, 0, sizeof(L_3));
		Vector3__ctor_m08F61F548AA5836D8789843ACB4A81E4963D2EE1((&L_3), L_0, L_1, L_2, /*hidden argument*/NULL);
		V_0 = L_3;
		goto IL_0021;
	}

IL_0021:
	{
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_4 = V_0;
		return L_4;
	}
}
// System.String UnityEngine.Vector4::ToString()
extern "C" IL2CPP_METHOD_ATTR String_t* Vector4_ToString_m769402E3F7CBD6C92464D916527CC87BBBA53EF9 (Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Vector4_ToString_m769402E3F7CBD6C92464D916527CC87BBBA53EF9_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	{
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_0 = (ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)SZArrayNew(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A_il2cpp_TypeInfo_var, (uint32_t)4);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_1 = L_0;
		float L_2 = __this->get_x_1();
		float L_3 = L_2;
		RuntimeObject * L_4 = Box(Single_tDDDA9169C4E4E308AC6D7A824F9B28DC82204AE1_il2cpp_TypeInfo_var, &L_3);
		NullCheck(L_1);
		ArrayElementTypeCheck (L_1, L_4);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_4);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_5 = L_1;
		float L_6 = __this->get_y_2();
		float L_7 = L_6;
		RuntimeObject * L_8 = Box(Single_tDDDA9169C4E4E308AC6D7A824F9B28DC82204AE1_il2cpp_TypeInfo_var, &L_7);
		NullCheck(L_5);
		ArrayElementTypeCheck (L_5, L_8);
		(L_5)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject *)L_8);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_9 = L_5;
		float L_10 = __this->get_z_3();
		float L_11 = L_10;
		RuntimeObject * L_12 = Box(Single_tDDDA9169C4E4E308AC6D7A824F9B28DC82204AE1_il2cpp_TypeInfo_var, &L_11);
		NullCheck(L_9);
		ArrayElementTypeCheck (L_9, L_12);
		(L_9)->SetAt(static_cast<il2cpp_array_size_t>(2), (RuntimeObject *)L_12);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_13 = L_9;
		float L_14 = __this->get_w_4();
		float L_15 = L_14;
		RuntimeObject * L_16 = Box(Single_tDDDA9169C4E4E308AC6D7A824F9B28DC82204AE1_il2cpp_TypeInfo_var, &L_15);
		NullCheck(L_13);
		ArrayElementTypeCheck (L_13, L_16);
		(L_13)->SetAt(static_cast<il2cpp_array_size_t>(3), (RuntimeObject *)L_16);
		String_t* L_17 = UnityString_Format_m415056ECF8DA7B3EC6A8456E299D0C2002177387(_stringLiteralB29BEC3A893F5759BD9E96C91C9F612E3591BE59, L_13, /*hidden argument*/NULL);
		V_0 = L_17;
		goto IL_004f;
	}

IL_004f:
	{
		String_t* L_18 = V_0;
		return L_18;
	}
}
extern "C"  String_t* Vector4_ToString_m769402E3F7CBD6C92464D916527CC87BBBA53EF9_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E * _thisAdjusted = reinterpret_cast<Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E *>(__this + 1);
	return Vector4_ToString_m769402E3F7CBD6C92464D916527CC87BBBA53EF9(_thisAdjusted, method);
}
// System.Single UnityEngine.Vector4::SqrMagnitude(UnityEngine.Vector4)
extern "C" IL2CPP_METHOD_ATTR float Vector4_SqrMagnitude_mC2577C7119B10D3211BEF8BD3D8C0736274D1C10 (Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  ___a0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Vector4_SqrMagnitude_mC2577C7119B10D3211BEF8BD3D8C0736274D1C10_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	{
		Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  L_0 = ___a0;
		Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  L_1 = ___a0;
		IL2CPP_RUNTIME_CLASS_INIT(Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E_il2cpp_TypeInfo_var);
		float L_2 = Vector4_Dot_m9FAE8FE89CF99841AD8D2113DFCDB8764F9FBB18(L_0, L_1, /*hidden argument*/NULL);
		V_0 = L_2;
		goto IL_000e;
	}

IL_000e:
	{
		float L_3 = V_0;
		return L_3;
	}
}
// System.Void UnityEngine.Vector4::.cctor()
extern "C" IL2CPP_METHOD_ATTR void Vector4__cctor_m478FA6A83B8E23F8323F150FF90B1FB934B1C251 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Vector4__cctor_m478FA6A83B8E23F8323F150FF90B1FB934B1C251_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  L_0;
		memset(&L_0, 0, sizeof(L_0));
		Vector4__ctor_m545458525879607A5392A10B175D0C19B2BC715D((&L_0), (0.0f), (0.0f), (0.0f), (0.0f), /*hidden argument*/NULL);
		((Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E_StaticFields*)il2cpp_codegen_static_fields_for(Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E_il2cpp_TypeInfo_var))->set_zeroVector_5(L_0);
		Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  L_1;
		memset(&L_1, 0, sizeof(L_1));
		Vector4__ctor_m545458525879607A5392A10B175D0C19B2BC715D((&L_1), (1.0f), (1.0f), (1.0f), (1.0f), /*hidden argument*/NULL);
		((Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E_StaticFields*)il2cpp_codegen_static_fields_for(Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E_il2cpp_TypeInfo_var))->set_oneVector_6(L_1);
		Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  L_2;
		memset(&L_2, 0, sizeof(L_2));
		Vector4__ctor_m545458525879607A5392A10B175D0C19B2BC715D((&L_2), (std::numeric_limits<float>::infinity()), (std::numeric_limits<float>::infinity()), (std::numeric_limits<float>::infinity()), (std::numeric_limits<float>::infinity()), /*hidden argument*/NULL);
		((Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E_StaticFields*)il2cpp_codegen_static_fields_for(Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E_il2cpp_TypeInfo_var))->set_positiveInfinityVector_7(L_2);
		Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  L_3;
		memset(&L_3, 0, sizeof(L_3));
		Vector4__ctor_m545458525879607A5392A10B175D0C19B2BC715D((&L_3), (-std::numeric_limits<float>::infinity()), (-std::numeric_limits<float>::infinity()), (-std::numeric_limits<float>::infinity()), (-std::numeric_limits<float>::infinity()), /*hidden argument*/NULL);
		((Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E_StaticFields*)il2cpp_codegen_static_fields_for(Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E_il2cpp_TypeInfo_var))->set_negativeInfinityVector_8(L_3);
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
// System.Void UnityEngine.WaitForEndOfFrame::.ctor()
extern "C" IL2CPP_METHOD_ATTR void WaitForEndOfFrame__ctor_m6CDB79476A4A84CEC62947D36ADED96E907BA20B (WaitForEndOfFrame_t75980FB3F246D6AD36A85CA2BFDF8474E5EEBCCA * __this, const RuntimeMethod* method)
{
	{
		YieldInstruction__ctor_mA72AD367FB081E0C2493649C6E8F7CFC592AB620(__this, /*hidden argument*/NULL);
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
// Conversion methods for marshalling of: UnityEngine.WaitForSeconds
extern "C" void WaitForSeconds_t3E9E78D3BB53F03F96C7F28BA9B9086CD1A5F4E8_marshal_pinvoke(const WaitForSeconds_t3E9E78D3BB53F03F96C7F28BA9B9086CD1A5F4E8& unmarshaled, WaitForSeconds_t3E9E78D3BB53F03F96C7F28BA9B9086CD1A5F4E8_marshaled_pinvoke& marshaled)
{
	marshaled.___m_Seconds_0 = unmarshaled.get_m_Seconds_0();
}
extern "C" void WaitForSeconds_t3E9E78D3BB53F03F96C7F28BA9B9086CD1A5F4E8_marshal_pinvoke_back(const WaitForSeconds_t3E9E78D3BB53F03F96C7F28BA9B9086CD1A5F4E8_marshaled_pinvoke& marshaled, WaitForSeconds_t3E9E78D3BB53F03F96C7F28BA9B9086CD1A5F4E8& unmarshaled)
{
	float unmarshaled_m_Seconds_temp_0 = 0.0f;
	unmarshaled_m_Seconds_temp_0 = marshaled.___m_Seconds_0;
	unmarshaled.set_m_Seconds_0(unmarshaled_m_Seconds_temp_0);
}
// Conversion method for clean up from marshalling of: UnityEngine.WaitForSeconds
extern "C" void WaitForSeconds_t3E9E78D3BB53F03F96C7F28BA9B9086CD1A5F4E8_marshal_pinvoke_cleanup(WaitForSeconds_t3E9E78D3BB53F03F96C7F28BA9B9086CD1A5F4E8_marshaled_pinvoke& marshaled)
{
}
// Conversion methods for marshalling of: UnityEngine.WaitForSeconds
extern "C" void WaitForSeconds_t3E9E78D3BB53F03F96C7F28BA9B9086CD1A5F4E8_marshal_com(const WaitForSeconds_t3E9E78D3BB53F03F96C7F28BA9B9086CD1A5F4E8& unmarshaled, WaitForSeconds_t3E9E78D3BB53F03F96C7F28BA9B9086CD1A5F4E8_marshaled_com& marshaled)
{
	marshaled.___m_Seconds_0 = unmarshaled.get_m_Seconds_0();
}
extern "C" void WaitForSeconds_t3E9E78D3BB53F03F96C7F28BA9B9086CD1A5F4E8_marshal_com_back(const WaitForSeconds_t3E9E78D3BB53F03F96C7F28BA9B9086CD1A5F4E8_marshaled_com& marshaled, WaitForSeconds_t3E9E78D3BB53F03F96C7F28BA9B9086CD1A5F4E8& unmarshaled)
{
	float unmarshaled_m_Seconds_temp_0 = 0.0f;
	unmarshaled_m_Seconds_temp_0 = marshaled.___m_Seconds_0;
	unmarshaled.set_m_Seconds_0(unmarshaled_m_Seconds_temp_0);
}
// Conversion method for clean up from marshalling of: UnityEngine.WaitForSeconds
extern "C" void WaitForSeconds_t3E9E78D3BB53F03F96C7F28BA9B9086CD1A5F4E8_marshal_com_cleanup(WaitForSeconds_t3E9E78D3BB53F03F96C7F28BA9B9086CD1A5F4E8_marshaled_com& marshaled)
{
}
// System.Void UnityEngine.WaitForSeconds::.ctor(System.Single)
extern "C" IL2CPP_METHOD_ATTR void WaitForSeconds__ctor_m8E4BA3E27AEFFE5B74A815F26FF8AAB99743F559 (WaitForSeconds_t3E9E78D3BB53F03F96C7F28BA9B9086CD1A5F4E8 * __this, float ___seconds0, const RuntimeMethod* method)
{
	{
		YieldInstruction__ctor_mA72AD367FB081E0C2493649C6E8F7CFC592AB620(__this, /*hidden argument*/NULL);
		float L_0 = ___seconds0;
		__this->set_m_Seconds_0(L_0);
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
// System.Void UnityEngine.WaitForSecondsRealtime::.ctor(System.Single)
extern "C" IL2CPP_METHOD_ATTR void WaitForSecondsRealtime__ctor_m775503EC1F4963D8E5BBDD7989B40F6A000E0525 (WaitForSecondsRealtime_t0CF361107C4A9E25E0D4CF2F37732CE785235739 * __this, float ___time0, const RuntimeMethod* method)
{
	{
		__this->set_m_WaitUntilTime_1((-1.0f));
		CustomYieldInstruction__ctor_m06E2B5BC73763FE2E734FAA600D567701EA21EC5(__this, /*hidden argument*/NULL);
		float L_0 = ___time0;
		WaitForSecondsRealtime_set_waitTime_m867F4482BEE354E33A6FD9191344D74B9CC8C790(__this, L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Single UnityEngine.WaitForSecondsRealtime::get_waitTime()
extern "C" IL2CPP_METHOD_ATTR float WaitForSecondsRealtime_get_waitTime_m6D1B0EDEAFA3DBBBFE1A0CC2D372BAB8EA82E2FB (WaitForSecondsRealtime_t0CF361107C4A9E25E0D4CF2F37732CE785235739 * __this, const RuntimeMethod* method)
{
	float V_0 = 0.0f;
	{
		float L_0 = __this->get_U3CwaitTimeU3Ek__BackingField_0();
		V_0 = L_0;
		goto IL_000c;
	}

IL_000c:
	{
		float L_1 = V_0;
		return L_1;
	}
}
// System.Void UnityEngine.WaitForSecondsRealtime::set_waitTime(System.Single)
extern "C" IL2CPP_METHOD_ATTR void WaitForSecondsRealtime_set_waitTime_m867F4482BEE354E33A6FD9191344D74B9CC8C790 (WaitForSecondsRealtime_t0CF361107C4A9E25E0D4CF2F37732CE785235739 * __this, float ___value0, const RuntimeMethod* method)
{
	{
		float L_0 = ___value0;
		__this->set_U3CwaitTimeU3Ek__BackingField_0(L_0);
		return;
	}
}
// System.Boolean UnityEngine.WaitForSecondsRealtime::get_keepWaiting()
extern "C" IL2CPP_METHOD_ATTR bool WaitForSecondsRealtime_get_keepWaiting_mC257FFC53D5734250B919A8B6BE460A6D8A7CD99 (WaitForSecondsRealtime_t0CF361107C4A9E25E0D4CF2F37732CE785235739 * __this, const RuntimeMethod* method)
{
	bool V_0 = false;
	bool V_1 = false;
	{
		float L_0 = __this->get_m_WaitUntilTime_1();
		if ((!(((float)L_0) < ((float)(0.0f)))))
		{
			goto IL_0025;
		}
	}
	{
		float L_1 = Time_get_realtimeSinceStartup_mCA1086EC9DFCF135F77BC46D3B7127711EA3DE03(/*hidden argument*/NULL);
		float L_2 = WaitForSecondsRealtime_get_waitTime_m6D1B0EDEAFA3DBBBFE1A0CC2D372BAB8EA82E2FB(__this, /*hidden argument*/NULL);
		__this->set_m_WaitUntilTime_1(((float)il2cpp_codegen_add((float)L_1, (float)L_2)));
	}

IL_0025:
	{
		float L_3 = Time_get_realtimeSinceStartup_mCA1086EC9DFCF135F77BC46D3B7127711EA3DE03(/*hidden argument*/NULL);
		float L_4 = __this->get_m_WaitUntilTime_1();
		V_0 = (bool)((((float)L_3) < ((float)L_4))? 1 : 0);
		bool L_5 = V_0;
		if (L_5)
		{
			goto IL_0046;
		}
	}
	{
		__this->set_m_WaitUntilTime_1((-1.0f));
	}

IL_0046:
	{
		bool L_6 = V_0;
		V_1 = L_6;
		goto IL_004d;
	}

IL_004d:
	{
		bool L_7 = V_1;
		return L_7;
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
// Conversion methods for marshalling of: UnityEngine.YieldInstruction
extern "C" void YieldInstruction_t836035AC7BD07A3C7909F7AD2A5B42DE99D91C44_marshal_pinvoke(const YieldInstruction_t836035AC7BD07A3C7909F7AD2A5B42DE99D91C44& unmarshaled, YieldInstruction_t836035AC7BD07A3C7909F7AD2A5B42DE99D91C44_marshaled_pinvoke& marshaled)
{
}
extern "C" void YieldInstruction_t836035AC7BD07A3C7909F7AD2A5B42DE99D91C44_marshal_pinvoke_back(const YieldInstruction_t836035AC7BD07A3C7909F7AD2A5B42DE99D91C44_marshaled_pinvoke& marshaled, YieldInstruction_t836035AC7BD07A3C7909F7AD2A5B42DE99D91C44& unmarshaled)
{
}
// Conversion method for clean up from marshalling of: UnityEngine.YieldInstruction
extern "C" void YieldInstruction_t836035AC7BD07A3C7909F7AD2A5B42DE99D91C44_marshal_pinvoke_cleanup(YieldInstruction_t836035AC7BD07A3C7909F7AD2A5B42DE99D91C44_marshaled_pinvoke& marshaled)
{
}
// Conversion methods for marshalling of: UnityEngine.YieldInstruction
extern "C" void YieldInstruction_t836035AC7BD07A3C7909F7AD2A5B42DE99D91C44_marshal_com(const YieldInstruction_t836035AC7BD07A3C7909F7AD2A5B42DE99D91C44& unmarshaled, YieldInstruction_t836035AC7BD07A3C7909F7AD2A5B42DE99D91C44_marshaled_com& marshaled)
{
}
extern "C" void YieldInstruction_t836035AC7BD07A3C7909F7AD2A5B42DE99D91C44_marshal_com_back(const YieldInstruction_t836035AC7BD07A3C7909F7AD2A5B42DE99D91C44_marshaled_com& marshaled, YieldInstruction_t836035AC7BD07A3C7909F7AD2A5B42DE99D91C44& unmarshaled)
{
}
// Conversion method for clean up from marshalling of: UnityEngine.YieldInstruction
extern "C" void YieldInstruction_t836035AC7BD07A3C7909F7AD2A5B42DE99D91C44_marshal_com_cleanup(YieldInstruction_t836035AC7BD07A3C7909F7AD2A5B42DE99D91C44_marshaled_com& marshaled)
{
}
// System.Void UnityEngine.YieldInstruction::.ctor()
extern "C" IL2CPP_METHOD_ATTR void YieldInstruction__ctor_mA72AD367FB081E0C2493649C6E8F7CFC592AB620 (YieldInstruction_t836035AC7BD07A3C7909F7AD2A5B42DE99D91C44 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0(__this, /*hidden argument*/NULL);
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
// System.Void UnityEngine._AndroidJNIHelper::.ctor()
extern "C" IL2CPP_METHOD_ATTR void _AndroidJNIHelper__ctor_m19E49A53476A029BAD276DB7F83554BF4089A4F4 (_AndroidJNIHelper_t59BA163482B4C65C90D89695B7A241C902EBA386 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.IntPtr UnityEngine._AndroidJNIHelper::CreateJavaProxy(System.Int32,UnityEngine.AndroidJavaProxy)
extern "C" IL2CPP_METHOD_ATTR intptr_t _AndroidJNIHelper_CreateJavaProxy_mBBE87C397A88E1CC0ABC3DBE8B936F969D8593D4 (int32_t ___delegateHandle0, AndroidJavaProxy_tBF3E21C3639CF1A14BDC9173530DC13D45540795 * ___proxy1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (_AndroidJNIHelper_CreateJavaProxy_mBBE87C397A88E1CC0ABC3DBE8B936F969D8593D4_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	intptr_t V_0;
	memset(&V_0, 0, sizeof(V_0));
	{
		int32_t L_0 = ___delegateHandle0;
		AndroidJavaProxy_tBF3E21C3639CF1A14BDC9173530DC13D45540795 * L_1 = ___proxy1;
		NullCheck(L_1);
		AndroidJavaClass_tFC9C1064BF4849691FEDC988743C0C271C62FDC8 * L_2 = L_1->get_javaInterface_0();
		NullCheck(L_2);
		intptr_t L_3 = AndroidJavaObject_GetRawClass_mAE1E312709F872345EDD1B78D8A5F60C39D13E3C(L_2, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(AndroidReflection_t1E856C4DB3786B7F94F0488E69A752B752E4657D_il2cpp_TypeInfo_var);
		intptr_t L_4 = AndroidReflection_NewProxyInstance_mF767DF278F20D9C3BBBC019AB39FE412CA85635B(L_0, (intptr_t)L_3, /*hidden argument*/NULL);
		V_0 = (intptr_t)L_4;
		goto IL_0018;
	}

IL_0018:
	{
		intptr_t L_5 = V_0;
		return (intptr_t)L_5;
	}
}
// System.IntPtr UnityEngine._AndroidJNIHelper::CreateJavaRunnable(UnityEngine.AndroidJavaRunnable)
extern "C" IL2CPP_METHOD_ATTR intptr_t _AndroidJNIHelper_CreateJavaRunnable_mF2857B8ED8956684A008DF60ADA5153EE1507178 (AndroidJavaRunnable_tBE7371D29A525C4F51DC1CBEBA5E193644F6AFE1 * ___jrunnable0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (_AndroidJNIHelper_CreateJavaRunnable_mF2857B8ED8956684A008DF60ADA5153EE1507178_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	intptr_t V_0;
	memset(&V_0, 0, sizeof(V_0));
	{
		AndroidJavaRunnable_tBE7371D29A525C4F51DC1CBEBA5E193644F6AFE1 * L_0 = ___jrunnable0;
		AndroidJavaRunnableProxy_t44BC33675D0AC3139F424C7184045BFDC1238572 * L_1 = (AndroidJavaRunnableProxy_t44BC33675D0AC3139F424C7184045BFDC1238572 *)il2cpp_codegen_object_new(AndroidJavaRunnableProxy_t44BC33675D0AC3139F424C7184045BFDC1238572_il2cpp_TypeInfo_var);
		AndroidJavaRunnableProxy__ctor_mA4FCBD3D7C2AA6F45E3EAB0604FBE66C144ED1CE(L_1, L_0, /*hidden argument*/NULL);
		intptr_t L_2 = AndroidJNIHelper_CreateJavaProxy_m592F0FC620F05B34F33473BB71E24D9799FC3996(L_1, /*hidden argument*/NULL);
		V_0 = (intptr_t)L_2;
		goto IL_0012;
	}

IL_0012:
	{
		intptr_t L_3 = V_0;
		return (intptr_t)L_3;
	}
}
// System.IntPtr UnityEngine._AndroidJNIHelper::InvokeJavaProxyMethod(UnityEngine.AndroidJavaProxy,System.IntPtr,System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR intptr_t _AndroidJNIHelper_InvokeJavaProxyMethod_mF92923091814A5E820890D2CCE76C7A589F03192 (AndroidJavaProxy_tBF3E21C3639CF1A14BDC9173530DC13D45540795 * ___proxy0, intptr_t ___jmethodName1, intptr_t ___jargs2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (_AndroidJNIHelper_InvokeJavaProxyMethod_mF92923091814A5E820890D2CCE76C7A589F03192_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	AndroidJavaObjectU5BU5D_tAA78CD496655EFF43DB71506C66672DBE563003C* V_1 = NULL;
	int32_t V_2 = 0;
	intptr_t V_3;
	memset(&V_3, 0, sizeof(V_3));
	AndroidJavaObject_t5B3829FB6E1DBC020F5BA17846F1351EAA982F8E * V_4 = NULL;
	intptr_t V_5;
	memset(&V_5, 0, sizeof(V_5));
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 2);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);
	int32_t G_B5_0 = 0;
	AndroidJavaObjectU5BU5D_tAA78CD496655EFF43DB71506C66672DBE563003C* G_B5_1 = NULL;
	int32_t G_B4_0 = 0;
	AndroidJavaObjectU5BU5D_tAA78CD496655EFF43DB71506C66672DBE563003C* G_B4_1 = NULL;
	AndroidJavaObject_t5B3829FB6E1DBC020F5BA17846F1351EAA982F8E * G_B6_0 = NULL;
	int32_t G_B6_1 = 0;
	AndroidJavaObjectU5BU5D_tAA78CD496655EFF43DB71506C66672DBE563003C* G_B6_2 = NULL;
	{
		V_0 = 0;
		intptr_t L_0 = ___jargs2;
		bool L_1 = IntPtr_op_Inequality_mB4886A806009EA825EFCC60CD2A7F6EB8E273A61((intptr_t)L_0, (intptr_t)(0), /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_001c;
		}
	}
	{
		intptr_t L_2 = ___jargs2;
		int32_t L_3 = AndroidJNISafe_GetArrayLength_mBA0A274C5F2F9B10F6DB76D430B46F40838E3526((intptr_t)L_2, /*hidden argument*/NULL);
		V_0 = L_3;
	}

IL_001c:
	{
		int32_t L_4 = V_0;
		AndroidJavaObjectU5BU5D_tAA78CD496655EFF43DB71506C66672DBE563003C* L_5 = (AndroidJavaObjectU5BU5D_tAA78CD496655EFF43DB71506C66672DBE563003C*)SZArrayNew(AndroidJavaObjectU5BU5D_tAA78CD496655EFF43DB71506C66672DBE563003C_il2cpp_TypeInfo_var, (uint32_t)L_4);
		V_1 = L_5;
		V_2 = 0;
		goto IL_0057;
	}

IL_002a:
	{
		intptr_t L_6 = ___jargs2;
		int32_t L_7 = V_2;
		intptr_t L_8 = AndroidJNISafe_GetObjectArrayElement_mCAF1B79CB1E704AECC2A6212871A2F60A0ECE9AD((intptr_t)L_6, L_7, /*hidden argument*/NULL);
		V_3 = (intptr_t)L_8;
		AndroidJavaObjectU5BU5D_tAA78CD496655EFF43DB71506C66672DBE563003C* L_9 = V_1;
		int32_t L_10 = V_2;
		intptr_t L_11 = V_3;
		bool L_12 = IntPtr_op_Inequality_mB4886A806009EA825EFCC60CD2A7F6EB8E273A61((intptr_t)L_11, (intptr_t)(0), /*hidden argument*/NULL);
		G_B4_0 = L_10;
		G_B4_1 = L_9;
		if (!L_12)
		{
			G_B5_0 = L_10;
			G_B5_1 = L_9;
			goto IL_0050;
		}
	}
	{
		intptr_t L_13 = V_3;
		AndroidJavaObject_t5B3829FB6E1DBC020F5BA17846F1351EAA982F8E * L_14 = (AndroidJavaObject_t5B3829FB6E1DBC020F5BA17846F1351EAA982F8E *)il2cpp_codegen_object_new(AndroidJavaObject_t5B3829FB6E1DBC020F5BA17846F1351EAA982F8E_il2cpp_TypeInfo_var);
		AndroidJavaObject__ctor_m21F177968E41241DE11225151F314CA4EBA5B559(L_14, (intptr_t)L_13, /*hidden argument*/NULL);
		G_B6_0 = L_14;
		G_B6_1 = G_B4_0;
		G_B6_2 = G_B4_1;
		goto IL_0051;
	}

IL_0050:
	{
		G_B6_0 = ((AndroidJavaObject_t5B3829FB6E1DBC020F5BA17846F1351EAA982F8E *)(NULL));
		G_B6_1 = G_B5_0;
		G_B6_2 = G_B5_1;
	}

IL_0051:
	{
		NullCheck(G_B6_2);
		ArrayElementTypeCheck (G_B6_2, G_B6_0);
		(G_B6_2)->SetAt(static_cast<il2cpp_array_size_t>(G_B6_1), (AndroidJavaObject_t5B3829FB6E1DBC020F5BA17846F1351EAA982F8E *)G_B6_0);
		int32_t L_15 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_15, (int32_t)1));
	}

IL_0057:
	{
		int32_t L_16 = V_2;
		int32_t L_17 = V_0;
		if ((((int32_t)L_16) < ((int32_t)L_17)))
		{
			goto IL_002a;
		}
	}
	{
		AndroidJavaProxy_tBF3E21C3639CF1A14BDC9173530DC13D45540795 * L_18 = ___proxy0;
		intptr_t L_19 = ___jmethodName1;
		String_t* L_20 = AndroidJNI_GetStringUTFChars_mCDD08F67974AC198A818E877AC8A17E26712C8A3((intptr_t)L_19, /*hidden argument*/NULL);
		AndroidJavaObjectU5BU5D_tAA78CD496655EFF43DB71506C66672DBE563003C* L_21 = V_1;
		NullCheck(L_18);
		AndroidJavaObject_t5B3829FB6E1DBC020F5BA17846F1351EAA982F8E * L_22 = VirtFuncInvoker2< AndroidJavaObject_t5B3829FB6E1DBC020F5BA17846F1351EAA982F8E *, String_t*, AndroidJavaObjectU5BU5D_tAA78CD496655EFF43DB71506C66672DBE563003C* >::Invoke(5 /* UnityEngine.AndroidJavaObject UnityEngine.AndroidJavaProxy::Invoke(System.String,UnityEngine.AndroidJavaObject[]) */, L_18, L_20, L_21);
		V_4 = L_22;
	}

IL_006d:
	try
	{ // begin try (depth: 1)
		{
			AndroidJavaObject_t5B3829FB6E1DBC020F5BA17846F1351EAA982F8E * L_23 = V_4;
			if (L_23)
			{
				goto IL_0081;
			}
		}

IL_0075:
		{
			V_5 = (intptr_t)(0);
			IL2CPP_LEAVE(0xA3, FINALLY_0094);
		}

IL_0081:
		{
			AndroidJavaObject_t5B3829FB6E1DBC020F5BA17846F1351EAA982F8E * L_24 = V_4;
			NullCheck(L_24);
			intptr_t L_25 = AndroidJavaObject_GetRawObject_mAEB3A269841B8D0BB5701C59AC7463DF7806CA2F(L_24, /*hidden argument*/NULL);
			intptr_t L_26 = AndroidJNI_NewLocalRef_m4E1FD7957EB1CC1CF983C7A2B4F6E6BA59E0825C((intptr_t)L_25, /*hidden argument*/NULL);
			V_5 = (intptr_t)L_26;
			IL2CPP_LEAVE(0xA3, FINALLY_0094);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0094;
	}

FINALLY_0094:
	{ // begin finally (depth: 1)
		{
			AndroidJavaObject_t5B3829FB6E1DBC020F5BA17846F1351EAA982F8E * L_27 = V_4;
			if (!L_27)
			{
				goto IL_00a2;
			}
		}

IL_009b:
		{
			AndroidJavaObject_t5B3829FB6E1DBC020F5BA17846F1351EAA982F8E * L_28 = V_4;
			NullCheck(L_28);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t7218B22548186B208D65EA5B7870503810A2D15A_il2cpp_TypeInfo_var, L_28);
		}

IL_00a2:
		{
			IL2CPP_END_FINALLY(148)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(148)
	{
		IL2CPP_JUMP_TBL(0xA3, IL_00a3)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_00a3:
	{
		intptr_t L_29 = V_5;
		return (intptr_t)L_29;
	}
}
// UnityEngine.jvalue[] UnityEngine._AndroidJNIHelper::CreateJNIArgArray(System.Object[])
extern "C" IL2CPP_METHOD_ATTR jvalueU5BU5D_t15D5A2D5F08971A18428246F1999D516A4E9D975* _AndroidJNIHelper_CreateJNIArgArray_m0548B6E7A263DCC2E0088A67847E2D6BF0A0A3A7 (ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* ___args0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (_AndroidJNIHelper_CreateJNIArgArray_m0548B6E7A263DCC2E0088A67847E2D6BF0A0A3A7_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	jvalueU5BU5D_t15D5A2D5F08971A18428246F1999D516A4E9D975* V_0 = NULL;
	int32_t V_1 = 0;
	RuntimeObject * V_2 = NULL;
	ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* V_3 = NULL;
	int32_t V_4 = 0;
	jvalueU5BU5D_t15D5A2D5F08971A18428246F1999D516A4E9D975* V_5 = NULL;
	{
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_0 = ___args0;
		NullCheck((RuntimeArray *)(RuntimeArray *)L_0);
		int32_t L_1 = Array_GetLength_m318900B10C3A93A30ABDC67DE161C8F6ABA4D359((RuntimeArray *)(RuntimeArray *)L_0, 0, /*hidden argument*/NULL);
		jvalueU5BU5D_t15D5A2D5F08971A18428246F1999D516A4E9D975* L_2 = (jvalueU5BU5D_t15D5A2D5F08971A18428246F1999D516A4E9D975*)SZArrayNew(jvalueU5BU5D_t15D5A2D5F08971A18428246F1999D516A4E9D975_il2cpp_TypeInfo_var, (uint32_t)L_1);
		V_0 = L_2;
		V_1 = 0;
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_3 = ___args0;
		V_3 = L_3;
		V_4 = 0;
		goto IL_0281;
	}

IL_001b:
	{
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_4 = V_3;
		int32_t L_5 = V_4;
		NullCheck(L_4);
		int32_t L_6 = L_5;
		RuntimeObject * L_7 = (L_4)->GetAt(static_cast<il2cpp_array_size_t>(L_6));
		V_2 = L_7;
		RuntimeObject * L_8 = V_2;
		if (L_8)
		{
			goto IL_003d;
		}
	}
	{
		jvalueU5BU5D_t15D5A2D5F08971A18428246F1999D516A4E9D975* L_9 = V_0;
		int32_t L_10 = V_1;
		NullCheck(L_9);
		((L_9)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_10)))->set_l_8((intptr_t)(0));
		goto IL_0276;
	}

IL_003d:
	{
		RuntimeObject * L_11 = V_2;
		NullCheck(L_11);
		Type_t * L_12 = Object_GetType_m2E0B62414ECCAA3094B703790CE88CBB2F83EA60(L_11, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(AndroidReflection_t1E856C4DB3786B7F94F0488E69A752B752E4657D_il2cpp_TypeInfo_var);
		bool L_13 = AndroidReflection_IsPrimitive_m3279141318F8962AFDEC3DFDFE976F8F58BE7B46(L_12, /*hidden argument*/NULL);
		if (!L_13)
		{
			goto IL_015f;
		}
	}
	{
		RuntimeObject * L_14 = V_2;
		if (!((RuntimeObject *)IsInstSealed((RuntimeObject*)L_14, Int32_t585191389E07734F19F3156FF88FB3EF4800D102_il2cpp_TypeInfo_var)))
		{
			goto IL_0070;
		}
	}
	{
		jvalueU5BU5D_t15D5A2D5F08971A18428246F1999D516A4E9D975* L_15 = V_0;
		int32_t L_16 = V_1;
		NullCheck(L_15);
		RuntimeObject * L_17 = V_2;
		((L_15)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_16)))->set_i_4(((*(int32_t*)((int32_t*)UnBox(L_17, Int32_t585191389E07734F19F3156FF88FB3EF4800D102_il2cpp_TypeInfo_var)))));
		goto IL_0159;
	}

IL_0070:
	{
		RuntimeObject * L_18 = V_2;
		if (!((RuntimeObject *)IsInstSealed((RuntimeObject*)L_18, Boolean_tB53F6830F670160873277339AA58F15CAED4399C_il2cpp_TypeInfo_var)))
		{
			goto IL_0092;
		}
	}
	{
		jvalueU5BU5D_t15D5A2D5F08971A18428246F1999D516A4E9D975* L_19 = V_0;
		int32_t L_20 = V_1;
		NullCheck(L_19);
		RuntimeObject * L_21 = V_2;
		((L_19)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_20)))->set_z_0(((*(bool*)((bool*)UnBox(L_21, Boolean_tB53F6830F670160873277339AA58F15CAED4399C_il2cpp_TypeInfo_var)))));
		goto IL_0159;
	}

IL_0092:
	{
		RuntimeObject * L_22 = V_2;
		if (!((RuntimeObject *)IsInstSealed((RuntimeObject*)L_22, Byte_tF87C579059BD4633E6840EBBBEEF899C6E33EF07_il2cpp_TypeInfo_var)))
		{
			goto IL_00b4;
		}
	}
	{
		jvalueU5BU5D_t15D5A2D5F08971A18428246F1999D516A4E9D975* L_23 = V_0;
		int32_t L_24 = V_1;
		NullCheck(L_23);
		RuntimeObject * L_25 = V_2;
		((L_23)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_24)))->set_b_1(((*(uint8_t*)((uint8_t*)UnBox(L_25, Byte_tF87C579059BD4633E6840EBBBEEF899C6E33EF07_il2cpp_TypeInfo_var)))));
		goto IL_0159;
	}

IL_00b4:
	{
		RuntimeObject * L_26 = V_2;
		if (!((RuntimeObject *)IsInstSealed((RuntimeObject*)L_26, Int16_t823A20635DAF5A3D93A1E01CFBF3CBA27CF00B4D_il2cpp_TypeInfo_var)))
		{
			goto IL_00d6;
		}
	}
	{
		jvalueU5BU5D_t15D5A2D5F08971A18428246F1999D516A4E9D975* L_27 = V_0;
		int32_t L_28 = V_1;
		NullCheck(L_27);
		RuntimeObject * L_29 = V_2;
		((L_27)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_28)))->set_s_3(((*(int16_t*)((int16_t*)UnBox(L_29, Int16_t823A20635DAF5A3D93A1E01CFBF3CBA27CF00B4D_il2cpp_TypeInfo_var)))));
		goto IL_0159;
	}

IL_00d6:
	{
		RuntimeObject * L_30 = V_2;
		if (!((RuntimeObject *)IsInstSealed((RuntimeObject*)L_30, Int64_t7A386C2FF7B0280A0F516992401DDFCF0FF7B436_il2cpp_TypeInfo_var)))
		{
			goto IL_00f8;
		}
	}
	{
		jvalueU5BU5D_t15D5A2D5F08971A18428246F1999D516A4E9D975* L_31 = V_0;
		int32_t L_32 = V_1;
		NullCheck(L_31);
		RuntimeObject * L_33 = V_2;
		((L_31)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_32)))->set_j_5(((*(int64_t*)((int64_t*)UnBox(L_33, Int64_t7A386C2FF7B0280A0F516992401DDFCF0FF7B436_il2cpp_TypeInfo_var)))));
		goto IL_0159;
	}

IL_00f8:
	{
		RuntimeObject * L_34 = V_2;
		if (!((RuntimeObject *)IsInstSealed((RuntimeObject*)L_34, Single_tDDDA9169C4E4E308AC6D7A824F9B28DC82204AE1_il2cpp_TypeInfo_var)))
		{
			goto IL_011a;
		}
	}
	{
		jvalueU5BU5D_t15D5A2D5F08971A18428246F1999D516A4E9D975* L_35 = V_0;
		int32_t L_36 = V_1;
		NullCheck(L_35);
		RuntimeObject * L_37 = V_2;
		((L_35)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_36)))->set_f_6(((*(float*)((float*)UnBox(L_37, Single_tDDDA9169C4E4E308AC6D7A824F9B28DC82204AE1_il2cpp_TypeInfo_var)))));
		goto IL_0159;
	}

IL_011a:
	{
		RuntimeObject * L_38 = V_2;
		if (!((RuntimeObject *)IsInstSealed((RuntimeObject*)L_38, Double_t358B8F23BDC52A5DD700E727E204F9F7CDE12409_il2cpp_TypeInfo_var)))
		{
			goto IL_013c;
		}
	}
	{
		jvalueU5BU5D_t15D5A2D5F08971A18428246F1999D516A4E9D975* L_39 = V_0;
		int32_t L_40 = V_1;
		NullCheck(L_39);
		RuntimeObject * L_41 = V_2;
		((L_39)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_40)))->set_d_7(((*(double*)((double*)UnBox(L_41, Double_t358B8F23BDC52A5DD700E727E204F9F7CDE12409_il2cpp_TypeInfo_var)))));
		goto IL_0159;
	}

IL_013c:
	{
		RuntimeObject * L_42 = V_2;
		if (!((RuntimeObject *)IsInstSealed((RuntimeObject*)L_42, Char_tBF22D9FC341BE970735250BB6FF1A4A92BBA58B9_il2cpp_TypeInfo_var)))
		{
			goto IL_0159;
		}
	}
	{
		jvalueU5BU5D_t15D5A2D5F08971A18428246F1999D516A4E9D975* L_43 = V_0;
		int32_t L_44 = V_1;
		NullCheck(L_43);
		RuntimeObject * L_45 = V_2;
		((L_43)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_44)))->set_c_2(((*(Il2CppChar*)((Il2CppChar*)UnBox(L_45, Char_tBF22D9FC341BE970735250BB6FF1A4A92BBA58B9_il2cpp_TypeInfo_var)))));
	}

IL_0159:
	{
		goto IL_0276;
	}

IL_015f:
	{
		RuntimeObject * L_46 = V_2;
		if (!((String_t*)IsInstSealed((RuntimeObject*)L_46, String_t_il2cpp_TypeInfo_var)))
		{
			goto IL_0188;
		}
	}
	{
		jvalueU5BU5D_t15D5A2D5F08971A18428246F1999D516A4E9D975* L_47 = V_0;
		int32_t L_48 = V_1;
		NullCheck(L_47);
		RuntimeObject * L_49 = V_2;
		intptr_t L_50 = AndroidJNISafe_NewStringUTF_mD1ACA72386E10B6B5C3EC7F11E01A663F9EA6BA2(((String_t*)CastclassSealed((RuntimeObject*)L_49, String_t_il2cpp_TypeInfo_var)), /*hidden argument*/NULL);
		((L_47)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_48)))->set_l_8((intptr_t)L_50);
		goto IL_0276;
	}

IL_0188:
	{
		RuntimeObject * L_51 = V_2;
		if (!((AndroidJavaClass_tFC9C1064BF4849691FEDC988743C0C271C62FDC8 *)IsInstClass((RuntimeObject*)L_51, AndroidJavaClass_tFC9C1064BF4849691FEDC988743C0C271C62FDC8_il2cpp_TypeInfo_var)))
		{
			goto IL_01b1;
		}
	}
	{
		jvalueU5BU5D_t15D5A2D5F08971A18428246F1999D516A4E9D975* L_52 = V_0;
		int32_t L_53 = V_1;
		NullCheck(L_52);
		RuntimeObject * L_54 = V_2;
		NullCheck(((AndroidJavaClass_tFC9C1064BF4849691FEDC988743C0C271C62FDC8 *)CastclassClass((RuntimeObject*)L_54, AndroidJavaClass_tFC9C1064BF4849691FEDC988743C0C271C62FDC8_il2cpp_TypeInfo_var)));
		intptr_t L_55 = AndroidJavaObject_GetRawClass_mAE1E312709F872345EDD1B78D8A5F60C39D13E3C(((AndroidJavaClass_tFC9C1064BF4849691FEDC988743C0C271C62FDC8 *)CastclassClass((RuntimeObject*)L_54, AndroidJavaClass_tFC9C1064BF4849691FEDC988743C0C271C62FDC8_il2cpp_TypeInfo_var)), /*hidden argument*/NULL);
		((L_52)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_53)))->set_l_8((intptr_t)L_55);
		goto IL_0276;
	}

IL_01b1:
	{
		RuntimeObject * L_56 = V_2;
		if (!((AndroidJavaObject_t5B3829FB6E1DBC020F5BA17846F1351EAA982F8E *)IsInstClass((RuntimeObject*)L_56, AndroidJavaObject_t5B3829FB6E1DBC020F5BA17846F1351EAA982F8E_il2cpp_TypeInfo_var)))
		{
			goto IL_01da;
		}
	}
	{
		jvalueU5BU5D_t15D5A2D5F08971A18428246F1999D516A4E9D975* L_57 = V_0;
		int32_t L_58 = V_1;
		NullCheck(L_57);
		RuntimeObject * L_59 = V_2;
		NullCheck(((AndroidJavaObject_t5B3829FB6E1DBC020F5BA17846F1351EAA982F8E *)CastclassClass((RuntimeObject*)L_59, AndroidJavaObject_t5B3829FB6E1DBC020F5BA17846F1351EAA982F8E_il2cpp_TypeInfo_var)));
		intptr_t L_60 = AndroidJavaObject_GetRawObject_mAEB3A269841B8D0BB5701C59AC7463DF7806CA2F(((AndroidJavaObject_t5B3829FB6E1DBC020F5BA17846F1351EAA982F8E *)CastclassClass((RuntimeObject*)L_59, AndroidJavaObject_t5B3829FB6E1DBC020F5BA17846F1351EAA982F8E_il2cpp_TypeInfo_var)), /*hidden argument*/NULL);
		((L_57)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_58)))->set_l_8((intptr_t)L_60);
		goto IL_0276;
	}

IL_01da:
	{
		RuntimeObject * L_61 = V_2;
		if (!((RuntimeArray *)IsInstClass((RuntimeObject*)L_61, RuntimeArray_il2cpp_TypeInfo_var)))
		{
			goto IL_0203;
		}
	}
	{
		jvalueU5BU5D_t15D5A2D5F08971A18428246F1999D516A4E9D975* L_62 = V_0;
		int32_t L_63 = V_1;
		NullCheck(L_62);
		RuntimeObject * L_64 = V_2;
		intptr_t L_65 = _AndroidJNIHelper_ConvertToJNIArray_mF7018A40E8546D4CAC0FDAD9710899F785149F4B(((RuntimeArray *)CastclassClass((RuntimeObject*)L_64, RuntimeArray_il2cpp_TypeInfo_var)), /*hidden argument*/NULL);
		((L_62)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_63)))->set_l_8((intptr_t)L_65);
		goto IL_0276;
	}

IL_0203:
	{
		RuntimeObject * L_66 = V_2;
		if (!((AndroidJavaProxy_tBF3E21C3639CF1A14BDC9173530DC13D45540795 *)IsInstClass((RuntimeObject*)L_66, AndroidJavaProxy_tBF3E21C3639CF1A14BDC9173530DC13D45540795_il2cpp_TypeInfo_var)))
		{
			goto IL_0231;
		}
	}
	{
		jvalueU5BU5D_t15D5A2D5F08971A18428246F1999D516A4E9D975* L_67 = V_0;
		int32_t L_68 = V_1;
		NullCheck(L_67);
		RuntimeObject * L_69 = V_2;
		NullCheck(((AndroidJavaProxy_tBF3E21C3639CF1A14BDC9173530DC13D45540795 *)CastclassClass((RuntimeObject*)L_69, AndroidJavaProxy_tBF3E21C3639CF1A14BDC9173530DC13D45540795_il2cpp_TypeInfo_var)));
		AndroidJavaObject_t5B3829FB6E1DBC020F5BA17846F1351EAA982F8E * L_70 = AndroidJavaProxy_GetProxy_m0515FEED73F637D67E65EDB81FF9FEAEC5AD3170(((AndroidJavaProxy_tBF3E21C3639CF1A14BDC9173530DC13D45540795 *)CastclassClass((RuntimeObject*)L_69, AndroidJavaProxy_tBF3E21C3639CF1A14BDC9173530DC13D45540795_il2cpp_TypeInfo_var)), /*hidden argument*/NULL);
		NullCheck(L_70);
		intptr_t L_71 = AndroidJavaObject_GetRawObject_mAEB3A269841B8D0BB5701C59AC7463DF7806CA2F(L_70, /*hidden argument*/NULL);
		((L_67)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_68)))->set_l_8((intptr_t)L_71);
		goto IL_0276;
	}

IL_0231:
	{
		RuntimeObject * L_72 = V_2;
		if (!((AndroidJavaRunnable_tBE7371D29A525C4F51DC1CBEBA5E193644F6AFE1 *)IsInstSealed((RuntimeObject*)L_72, AndroidJavaRunnable_tBE7371D29A525C4F51DC1CBEBA5E193644F6AFE1_il2cpp_TypeInfo_var)))
		{
			goto IL_025a;
		}
	}
	{
		jvalueU5BU5D_t15D5A2D5F08971A18428246F1999D516A4E9D975* L_73 = V_0;
		int32_t L_74 = V_1;
		NullCheck(L_73);
		RuntimeObject * L_75 = V_2;
		intptr_t L_76 = AndroidJNIHelper_CreateJavaRunnable_m79009DFEECC3B28C03B344FACE3D8F1F612DBBCE(((AndroidJavaRunnable_tBE7371D29A525C4F51DC1CBEBA5E193644F6AFE1 *)CastclassSealed((RuntimeObject*)L_75, AndroidJavaRunnable_tBE7371D29A525C4F51DC1CBEBA5E193644F6AFE1_il2cpp_TypeInfo_var)), /*hidden argument*/NULL);
		((L_73)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_74)))->set_l_8((intptr_t)L_76);
		goto IL_0276;
	}

IL_025a:
	{
		RuntimeObject * L_77 = V_2;
		NullCheck(L_77);
		Type_t * L_78 = Object_GetType_m2E0B62414ECCAA3094B703790CE88CBB2F83EA60(L_77, /*hidden argument*/NULL);
		String_t* L_79 = String_Concat_m2E1F71C491D2429CC80A28745488FEA947BB7AAC(_stringLiteral94A9D9512BA3D2F295C65A0B3119715C79E6CB75, L_78, _stringLiteralBB589D0621E5472F470FA3425A234C74B1E202E8, /*hidden argument*/NULL);
		Exception_t * L_80 = (Exception_t *)il2cpp_codegen_object_new(Exception_t_il2cpp_TypeInfo_var);
		Exception__ctor_m89BADFF36C3B170013878726E07729D51AA9FBE0(L_80, L_79, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_80, NULL, _AndroidJNIHelper_CreateJNIArgArray_m0548B6E7A263DCC2E0088A67847E2D6BF0A0A3A7_RuntimeMethod_var);
	}

IL_0276:
	{
		int32_t L_81 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_81, (int32_t)1));
		int32_t L_82 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add((int32_t)L_82, (int32_t)1));
	}

IL_0281:
	{
		int32_t L_83 = V_4;
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_84 = V_3;
		NullCheck(L_84);
		if ((((int32_t)L_83) < ((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_84)->max_length)))))))
		{
			goto IL_001b;
		}
	}
	{
		jvalueU5BU5D_t15D5A2D5F08971A18428246F1999D516A4E9D975* L_85 = V_0;
		V_5 = L_85;
		goto IL_0293;
	}

IL_0293:
	{
		jvalueU5BU5D_t15D5A2D5F08971A18428246F1999D516A4E9D975* L_86 = V_5;
		return L_86;
	}
}
// System.Object UnityEngine._AndroidJNIHelper::UnboxArray(UnityEngine.AndroidJavaObject)
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * _AndroidJNIHelper_UnboxArray_mC196889BC2288A01DCF80DA2E27F832FA7C7CE2E (AndroidJavaObject_t5B3829FB6E1DBC020F5BA17846F1351EAA982F8E * ___obj0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (_AndroidJNIHelper_UnboxArray_mC196889BC2288A01DCF80DA2E27F832FA7C7CE2E_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject * V_0 = NULL;
	AndroidJavaClass_tFC9C1064BF4849691FEDC988743C0C271C62FDC8 * V_1 = NULL;
	AndroidJavaObject_t5B3829FB6E1DBC020F5BA17846F1351EAA982F8E * V_2 = NULL;
	AndroidJavaObject_t5B3829FB6E1DBC020F5BA17846F1351EAA982F8E * V_3 = NULL;
	String_t* V_4 = NULL;
	int32_t V_5 = 0;
	RuntimeArray * V_6 = NULL;
	int32_t V_7 = 0;
	{
		AndroidJavaObject_t5B3829FB6E1DBC020F5BA17846F1351EAA982F8E * L_0 = ___obj0;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		V_0 = NULL;
		goto IL_0226;
	}

IL_000e:
	{
		AndroidJavaClass_tFC9C1064BF4849691FEDC988743C0C271C62FDC8 * L_1 = (AndroidJavaClass_tFC9C1064BF4849691FEDC988743C0C271C62FDC8 *)il2cpp_codegen_object_new(AndroidJavaClass_tFC9C1064BF4849691FEDC988743C0C271C62FDC8_il2cpp_TypeInfo_var);
		AndroidJavaClass__ctor_mFE0A07AF3670152225C146493AC0918138B81E34(L_1, _stringLiteral6226D4F452A659360FAAC6A6266D73ABC5BFC1FC, /*hidden argument*/NULL);
		V_1 = L_1;
		AndroidJavaObject_t5B3829FB6E1DBC020F5BA17846F1351EAA982F8E * L_2 = ___obj0;
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_3 = (ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)SZArrayNew(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A_il2cpp_TypeInfo_var, (uint32_t)0);
		NullCheck(L_2);
		AndroidJavaObject_t5B3829FB6E1DBC020F5BA17846F1351EAA982F8E * L_4 = AndroidJavaObject_Call_TisAndroidJavaObject_t5B3829FB6E1DBC020F5BA17846F1351EAA982F8E_m050B0EBEF6F796C3B3C8D55D9620055A6F07B77A(L_2, _stringLiteral4F05CBFCA4DFE76B99B142F609CDCF00D44FA247, L_3, /*hidden argument*/AndroidJavaObject_Call_TisAndroidJavaObject_t5B3829FB6E1DBC020F5BA17846F1351EAA982F8E_m050B0EBEF6F796C3B3C8D55D9620055A6F07B77A_RuntimeMethod_var);
		V_2 = L_4;
		AndroidJavaObject_t5B3829FB6E1DBC020F5BA17846F1351EAA982F8E * L_5 = V_2;
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_6 = (ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)SZArrayNew(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A_il2cpp_TypeInfo_var, (uint32_t)0);
		NullCheck(L_5);
		AndroidJavaObject_t5B3829FB6E1DBC020F5BA17846F1351EAA982F8E * L_7 = AndroidJavaObject_Call_TisAndroidJavaObject_t5B3829FB6E1DBC020F5BA17846F1351EAA982F8E_m050B0EBEF6F796C3B3C8D55D9620055A6F07B77A(L_5, _stringLiteral5ABBEC2FB4C72453E6720E8AA22C1978B547A438, L_6, /*hidden argument*/AndroidJavaObject_Call_TisAndroidJavaObject_t5B3829FB6E1DBC020F5BA17846F1351EAA982F8E_m050B0EBEF6F796C3B3C8D55D9620055A6F07B77A_RuntimeMethod_var);
		V_3 = L_7;
		AndroidJavaObject_t5B3829FB6E1DBC020F5BA17846F1351EAA982F8E * L_8 = V_3;
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_9 = (ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)SZArrayNew(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A_il2cpp_TypeInfo_var, (uint32_t)0);
		NullCheck(L_8);
		String_t* L_10 = AndroidJavaObject_Call_TisString_t_m9AB7F83596130620DAA3338C360A4F140A5BD0EA(L_8, _stringLiteralFA98C1FD2CA6FC89B5ED010FD16AA461F50AFB3E, L_9, /*hidden argument*/AndroidJavaObject_Call_TisString_t_m9AB7F83596130620DAA3338C360A4F140A5BD0EA_RuntimeMethod_var);
		V_4 = L_10;
		AndroidJavaClass_tFC9C1064BF4849691FEDC988743C0C271C62FDC8 * L_11 = V_1;
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_12 = (ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)SZArrayNew(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A_il2cpp_TypeInfo_var, (uint32_t)1);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_13 = L_12;
		AndroidJavaObject_t5B3829FB6E1DBC020F5BA17846F1351EAA982F8E * L_14 = ___obj0;
		NullCheck(L_13);
		ArrayElementTypeCheck (L_13, L_14);
		(L_13)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_14);
		NullCheck(L_11);
		int32_t L_15 = AndroidJavaObject_CallStatic_TisInt32_t585191389E07734F19F3156FF88FB3EF4800D102_m58609371993F08421AA2C6A3071C8876FACEC412(L_11, _stringLiteralAA3B42B3BA69D14FA1DA94B7DD8016010E8F6E0C, L_13, /*hidden argument*/AndroidJavaObject_CallStatic_TisInt32_t585191389E07734F19F3156FF88FB3EF4800D102_m58609371993F08421AA2C6A3071C8876FACEC412_RuntimeMethod_var);
		V_5 = L_15;
		AndroidJavaObject_t5B3829FB6E1DBC020F5BA17846F1351EAA982F8E * L_16 = V_3;
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_17 = (ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)SZArrayNew(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A_il2cpp_TypeInfo_var, (uint32_t)0);
		NullCheck(L_16);
		bool L_18 = AndroidJavaObject_Call_TisBoolean_tB53F6830F670160873277339AA58F15CAED4399C_m55C7AF41C602F92EE6E9482814E57F6A5ADCECF4(L_16, _stringLiteralD53437218F50447640E8F502D360C117BA0C456F, L_17, /*hidden argument*/AndroidJavaObject_Call_TisBoolean_tB53F6830F670160873277339AA58F15CAED4399C_m55C7AF41C602F92EE6E9482814E57F6A5ADCECF4_RuntimeMethod_var);
		if (!L_18)
		{
			goto IL_0193;
		}
	}
	{
		String_t* L_19 = V_4;
		bool L_20 = String_op_Equality_m139F0E4195AE2F856019E63B241F36F016997FCE(_stringLiteral46F8AB7C0CFF9DF7CD124852E26022A6BF89E315, L_19, /*hidden argument*/NULL);
		if (!L_20)
		{
			goto IL_009d;
		}
	}
	{
		int32_t L_21 = V_5;
		Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* L_22 = (Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83*)SZArrayNew(Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83_il2cpp_TypeInfo_var, (uint32_t)L_21);
		V_6 = (RuntimeArray *)L_22;
		goto IL_018d;
	}

IL_009d:
	{
		String_t* L_23 = V_4;
		bool L_24 = String_op_Equality_m139F0E4195AE2F856019E63B241F36F016997FCE(_stringLiteral48647474B89FA8F56ED6BDA0F8148A17B51B97BD, L_23, /*hidden argument*/NULL);
		if (!L_24)
		{
			goto IL_00bc;
		}
	}
	{
		int32_t L_25 = V_5;
		BooleanU5BU5D_t192C7579715690E25BD5EFED47F3E0FC9DCB2040* L_26 = (BooleanU5BU5D_t192C7579715690E25BD5EFED47F3E0FC9DCB2040*)SZArrayNew(BooleanU5BU5D_t192C7579715690E25BD5EFED47F3E0FC9DCB2040_il2cpp_TypeInfo_var, (uint32_t)L_25);
		V_6 = (RuntimeArray *)L_26;
		goto IL_018d;
	}

IL_00bc:
	{
		String_t* L_27 = V_4;
		bool L_28 = String_op_Equality_m139F0E4195AE2F856019E63B241F36F016997FCE(_stringLiteral8CF1783FA99F62CA581F6FE8F3CD66B0F9AB9FC3, L_27, /*hidden argument*/NULL);
		if (!L_28)
		{
			goto IL_00db;
		}
	}
	{
		int32_t L_29 = V_5;
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_30 = (ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821*)SZArrayNew(ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821_il2cpp_TypeInfo_var, (uint32_t)L_29);
		V_6 = (RuntimeArray *)L_30;
		goto IL_018d;
	}

IL_00db:
	{
		String_t* L_31 = V_4;
		bool L_32 = String_op_Equality_m139F0E4195AE2F856019E63B241F36F016997FCE(_stringLiteralA0F4EA7D91495DF92BBAC2E2149DFB850FE81396, L_31, /*hidden argument*/NULL);
		if (!L_32)
		{
			goto IL_00fa;
		}
	}
	{
		int32_t L_33 = V_5;
		Int16U5BU5D_tDA0F0B2730337F72E44DB024BE9818FA8EDE8D28* L_34 = (Int16U5BU5D_tDA0F0B2730337F72E44DB024BE9818FA8EDE8D28*)SZArrayNew(Int16U5BU5D_tDA0F0B2730337F72E44DB024BE9818FA8EDE8D28_il2cpp_TypeInfo_var, (uint32_t)L_33);
		V_6 = (RuntimeArray *)L_34;
		goto IL_018d;
	}

IL_00fa:
	{
		String_t* L_35 = V_4;
		bool L_36 = String_op_Equality_m139F0E4195AE2F856019E63B241F36F016997FCE(_stringLiteralBD3027FA569EA15CA76D84DB21C67E2D514C1A5A, L_35, /*hidden argument*/NULL);
		if (!L_36)
		{
			goto IL_0119;
		}
	}
	{
		int32_t L_37 = V_5;
		Int64U5BU5D_tE04A3DEF6AF1C852A43B98A24EFB715806B37F5F* L_38 = (Int64U5BU5D_tE04A3DEF6AF1C852A43B98A24EFB715806B37F5F*)SZArrayNew(Int64U5BU5D_tE04A3DEF6AF1C852A43B98A24EFB715806B37F5F_il2cpp_TypeInfo_var, (uint32_t)L_37);
		V_6 = (RuntimeArray *)L_38;
		goto IL_018d;
	}

IL_0119:
	{
		String_t* L_39 = V_4;
		bool L_40 = String_op_Equality_m139F0E4195AE2F856019E63B241F36F016997FCE(_stringLiteral685E80366130387CB75C055248326976D16FDF8D, L_39, /*hidden argument*/NULL);
		if (!L_40)
		{
			goto IL_0138;
		}
	}
	{
		int32_t L_41 = V_5;
		SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5* L_42 = (SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5*)SZArrayNew(SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5_il2cpp_TypeInfo_var, (uint32_t)L_41);
		V_6 = (RuntimeArray *)L_42;
		goto IL_018d;
	}

IL_0138:
	{
		String_t* L_43 = V_4;
		bool L_44 = String_op_Equality_m139F0E4195AE2F856019E63B241F36F016997FCE(_stringLiteralBDB36BB22DEB169275B3094BA9005A29EEDDD195, L_43, /*hidden argument*/NULL);
		if (!L_44)
		{
			goto IL_0157;
		}
	}
	{
		int32_t L_45 = V_5;
		DoubleU5BU5D_tF9383437DDA9EAC9F60627E9E6E2045CF7CB182D* L_46 = (DoubleU5BU5D_tF9383437DDA9EAC9F60627E9E6E2045CF7CB182D*)SZArrayNew(DoubleU5BU5D_tF9383437DDA9EAC9F60627E9E6E2045CF7CB182D_il2cpp_TypeInfo_var, (uint32_t)L_45);
		V_6 = (RuntimeArray *)L_46;
		goto IL_018d;
	}

IL_0157:
	{
		String_t* L_47 = V_4;
		bool L_48 = String_op_Equality_m139F0E4195AE2F856019E63B241F36F016997FCE(_stringLiteral71FAFC4E2FC1E47E234762A96B80512B6B5534C2, L_47, /*hidden argument*/NULL);
		if (!L_48)
		{
			goto IL_0176;
		}
	}
	{
		int32_t L_49 = V_5;
		CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* L_50 = (CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2*)SZArrayNew(CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2_il2cpp_TypeInfo_var, (uint32_t)L_49);
		V_6 = (RuntimeArray *)L_50;
		goto IL_018d;
	}

IL_0176:
	{
		String_t* L_51 = V_4;
		String_t* L_52 = String_Concat_mF4626905368D6558695A823466A1AF65EADB9923(_stringLiteral94A9D9512BA3D2F295C65A0B3119715C79E6CB75, L_51, _stringLiteralBB589D0621E5472F470FA3425A234C74B1E202E8, /*hidden argument*/NULL);
		Exception_t * L_53 = (Exception_t *)il2cpp_codegen_object_new(Exception_t_il2cpp_TypeInfo_var);
		Exception__ctor_m89BADFF36C3B170013878726E07729D51AA9FBE0(L_53, L_52, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_53, NULL, _AndroidJNIHelper_UnboxArray_mC196889BC2288A01DCF80DA2E27F832FA7C7CE2E_RuntimeMethod_var);
	}

IL_018d:
	{
		goto IL_01da;
	}

IL_0193:
	{
		String_t* L_54 = V_4;
		bool L_55 = String_op_Equality_m139F0E4195AE2F856019E63B241F36F016997FCE(_stringLiteral169775A78ADEE2D403BC1F88A1C1760F11C0304D, L_54, /*hidden argument*/NULL);
		if (!L_55)
		{
			goto IL_01b2;
		}
	}
	{
		int32_t L_56 = V_5;
		StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* L_57 = (StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E*)SZArrayNew(StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E_il2cpp_TypeInfo_var, (uint32_t)L_56);
		V_6 = (RuntimeArray *)L_57;
		goto IL_01da;
	}

IL_01b2:
	{
		String_t* L_58 = V_4;
		bool L_59 = String_op_Equality_m139F0E4195AE2F856019E63B241F36F016997FCE(_stringLiteral328CD2BEF0C16A2D306B28CD73848671CCC42AC2, L_58, /*hidden argument*/NULL);
		if (!L_59)
		{
			goto IL_01d1;
		}
	}
	{
		int32_t L_60 = V_5;
		AndroidJavaClassU5BU5D_tE3ED186B518D6D52F80504EB644E86979B84CB18* L_61 = (AndroidJavaClassU5BU5D_tE3ED186B518D6D52F80504EB644E86979B84CB18*)SZArrayNew(AndroidJavaClassU5BU5D_tE3ED186B518D6D52F80504EB644E86979B84CB18_il2cpp_TypeInfo_var, (uint32_t)L_60);
		V_6 = (RuntimeArray *)L_61;
		goto IL_01da;
	}

IL_01d1:
	{
		int32_t L_62 = V_5;
		AndroidJavaObjectU5BU5D_tAA78CD496655EFF43DB71506C66672DBE563003C* L_63 = (AndroidJavaObjectU5BU5D_tAA78CD496655EFF43DB71506C66672DBE563003C*)SZArrayNew(AndroidJavaObjectU5BU5D_tAA78CD496655EFF43DB71506C66672DBE563003C_il2cpp_TypeInfo_var, (uint32_t)L_62);
		V_6 = (RuntimeArray *)L_63;
	}

IL_01da:
	{
		V_7 = 0;
		goto IL_0215;
	}

IL_01e2:
	{
		RuntimeArray * L_64 = V_6;
		AndroidJavaClass_tFC9C1064BF4849691FEDC988743C0C271C62FDC8 * L_65 = V_1;
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_66 = (ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)SZArrayNew(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A_il2cpp_TypeInfo_var, (uint32_t)2);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_67 = L_66;
		AndroidJavaObject_t5B3829FB6E1DBC020F5BA17846F1351EAA982F8E * L_68 = ___obj0;
		NullCheck(L_67);
		ArrayElementTypeCheck (L_67, L_68);
		(L_67)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_68);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_69 = L_67;
		int32_t L_70 = V_7;
		int32_t L_71 = L_70;
		RuntimeObject * L_72 = Box(Int32_t585191389E07734F19F3156FF88FB3EF4800D102_il2cpp_TypeInfo_var, &L_71);
		NullCheck(L_69);
		ArrayElementTypeCheck (L_69, L_72);
		(L_69)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject *)L_72);
		NullCheck(L_65);
		AndroidJavaObject_t5B3829FB6E1DBC020F5BA17846F1351EAA982F8E * L_73 = AndroidJavaObject_CallStatic_TisAndroidJavaObject_t5B3829FB6E1DBC020F5BA17846F1351EAA982F8E_m4A35A2BD8253FB4872812D7B24A951A6AB1D0C6F(L_65, _stringLiteral783923E57BA5E8F1044632C31FD806EE24814BB5, L_69, /*hidden argument*/AndroidJavaObject_CallStatic_TisAndroidJavaObject_t5B3829FB6E1DBC020F5BA17846F1351EAA982F8E_m4A35A2BD8253FB4872812D7B24A951A6AB1D0C6F_RuntimeMethod_var);
		RuntimeObject * L_74 = _AndroidJNIHelper_Unbox_m8F6AFBE1E5344BD93DCE89A8C392CF2B7676DC26(L_73, /*hidden argument*/NULL);
		int32_t L_75 = V_7;
		NullCheck(L_64);
		Array_SetValue_m3C6811CE9C45D1E461404B5D2FBD4EC1A054FDCA(L_64, L_74, L_75, /*hidden argument*/NULL);
		int32_t L_76 = V_7;
		V_7 = ((int32_t)il2cpp_codegen_add((int32_t)L_76, (int32_t)1));
	}

IL_0215:
	{
		int32_t L_77 = V_7;
		int32_t L_78 = V_5;
		if ((((int32_t)L_77) < ((int32_t)L_78)))
		{
			goto IL_01e2;
		}
	}
	{
		RuntimeArray * L_79 = V_6;
		V_0 = L_79;
		goto IL_0226;
	}

IL_0226:
	{
		RuntimeObject * L_80 = V_0;
		return L_80;
	}
}
// System.Object UnityEngine._AndroidJNIHelper::Unbox(UnityEngine.AndroidJavaObject)
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * _AndroidJNIHelper_Unbox_m8F6AFBE1E5344BD93DCE89A8C392CF2B7676DC26 (AndroidJavaObject_t5B3829FB6E1DBC020F5BA17846F1351EAA982F8E * ___obj0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (_AndroidJNIHelper_Unbox_m8F6AFBE1E5344BD93DCE89A8C392CF2B7676DC26_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject * V_0 = NULL;
	AndroidJavaObject_t5B3829FB6E1DBC020F5BA17846F1351EAA982F8E * V_1 = NULL;
	String_t* V_2 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 12);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);
	{
		AndroidJavaObject_t5B3829FB6E1DBC020F5BA17846F1351EAA982F8E * L_0 = ___obj0;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		V_0 = NULL;
		goto IL_0211;
	}

IL_000e:
	{
		AndroidJavaObject_t5B3829FB6E1DBC020F5BA17846F1351EAA982F8E * L_1 = ___obj0;
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_2 = (ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)SZArrayNew(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A_il2cpp_TypeInfo_var, (uint32_t)0);
		NullCheck(L_1);
		AndroidJavaObject_t5B3829FB6E1DBC020F5BA17846F1351EAA982F8E * L_3 = AndroidJavaObject_Call_TisAndroidJavaObject_t5B3829FB6E1DBC020F5BA17846F1351EAA982F8E_m050B0EBEF6F796C3B3C8D55D9620055A6F07B77A(L_1, _stringLiteral4F05CBFCA4DFE76B99B142F609CDCF00D44FA247, L_2, /*hidden argument*/AndroidJavaObject_Call_TisAndroidJavaObject_t5B3829FB6E1DBC020F5BA17846F1351EAA982F8E_m050B0EBEF6F796C3B3C8D55D9620055A6F07B77A_RuntimeMethod_var);
		V_1 = L_3;
	}

IL_0020:
	try
	{ // begin try (depth: 1)
		{
			AndroidJavaObject_t5B3829FB6E1DBC020F5BA17846F1351EAA982F8E * L_4 = V_1;
			ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_5 = (ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)SZArrayNew(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A_il2cpp_TypeInfo_var, (uint32_t)0);
			NullCheck(L_4);
			String_t* L_6 = AndroidJavaObject_Call_TisString_t_m9AB7F83596130620DAA3338C360A4F140A5BD0EA(L_4, _stringLiteralFA98C1FD2CA6FC89B5ED010FD16AA461F50AFB3E, L_5, /*hidden argument*/AndroidJavaObject_Call_TisString_t_m9AB7F83596130620DAA3338C360A4F140A5BD0EA_RuntimeMethod_var);
			V_2 = L_6;
			String_t* L_7 = V_2;
			bool L_8 = String_op_Equality_m139F0E4195AE2F856019E63B241F36F016997FCE(_stringLiteral9EAF6B54917BA48016AC5209BC15F62D5445708E, L_7, /*hidden argument*/NULL);
			if (!L_8)
			{
				goto IL_005f;
			}
		}

IL_0043:
		{
			AndroidJavaObject_t5B3829FB6E1DBC020F5BA17846F1351EAA982F8E * L_9 = ___obj0;
			ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_10 = (ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)SZArrayNew(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A_il2cpp_TypeInfo_var, (uint32_t)0);
			NullCheck(L_9);
			int32_t L_11 = AndroidJavaObject_Call_TisInt32_t585191389E07734F19F3156FF88FB3EF4800D102_m96DA2E4324B0211375BAA992FD4731428F08B530(L_9, _stringLiteralA0BCA4B2E667DD10532EED8280DA58E7BE1A8B88, L_10, /*hidden argument*/AndroidJavaObject_Call_TisInt32_t585191389E07734F19F3156FF88FB3EF4800D102_m96DA2E4324B0211375BAA992FD4731428F08B530_RuntimeMethod_var);
			int32_t L_12 = L_11;
			RuntimeObject * L_13 = Box(Int32_t585191389E07734F19F3156FF88FB3EF4800D102_il2cpp_TypeInfo_var, &L_12);
			V_0 = L_13;
			IL2CPP_LEAVE(0x211, FINALLY_0204);
		}

IL_005f:
		{
			String_t* L_14 = V_2;
			bool L_15 = String_op_Equality_m139F0E4195AE2F856019E63B241F36F016997FCE(_stringLiteralBD119F910FA08AD4078969E4A551A13A7EA4D4BC, L_14, /*hidden argument*/NULL);
			if (!L_15)
			{
				goto IL_008b;
			}
		}

IL_006f:
		{
			AndroidJavaObject_t5B3829FB6E1DBC020F5BA17846F1351EAA982F8E * L_16 = ___obj0;
			ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_17 = (ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)SZArrayNew(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A_il2cpp_TypeInfo_var, (uint32_t)0);
			NullCheck(L_16);
			bool L_18 = AndroidJavaObject_Call_TisBoolean_tB53F6830F670160873277339AA58F15CAED4399C_m55C7AF41C602F92EE6E9482814E57F6A5ADCECF4(L_16, _stringLiteral1D85A749A5C6FB273395A49AF6A07D9CF0C26A6D, L_17, /*hidden argument*/AndroidJavaObject_Call_TisBoolean_tB53F6830F670160873277339AA58F15CAED4399C_m55C7AF41C602F92EE6E9482814E57F6A5ADCECF4_RuntimeMethod_var);
			bool L_19 = L_18;
			RuntimeObject * L_20 = Box(Boolean_tB53F6830F670160873277339AA58F15CAED4399C_il2cpp_TypeInfo_var, &L_19);
			V_0 = L_20;
			IL2CPP_LEAVE(0x211, FINALLY_0204);
		}

IL_008b:
		{
			String_t* L_21 = V_2;
			bool L_22 = String_op_Equality_m139F0E4195AE2F856019E63B241F36F016997FCE(_stringLiteralBD7E4A941C870AD23894466BB52628A9B488A1A2, L_21, /*hidden argument*/NULL);
			if (!L_22)
			{
				goto IL_00b7;
			}
		}

IL_009b:
		{
			AndroidJavaObject_t5B3829FB6E1DBC020F5BA17846F1351EAA982F8E * L_23 = ___obj0;
			ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_24 = (ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)SZArrayNew(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A_il2cpp_TypeInfo_var, (uint32_t)0);
			NullCheck(L_23);
			uint8_t L_25 = AndroidJavaObject_Call_TisByte_tF87C579059BD4633E6840EBBBEEF899C6E33EF07_m4146C48C7DFDAF10FBC023D3E6529CB590F7EEF8(L_23, _stringLiteral5BD9EA45F0B419AD93E447295BC0AA4D644CF1B4, L_24, /*hidden argument*/AndroidJavaObject_Call_TisByte_tF87C579059BD4633E6840EBBBEEF899C6E33EF07_m4146C48C7DFDAF10FBC023D3E6529CB590F7EEF8_RuntimeMethod_var);
			uint8_t L_26 = L_25;
			RuntimeObject * L_27 = Box(Byte_tF87C579059BD4633E6840EBBBEEF899C6E33EF07_il2cpp_TypeInfo_var, &L_26);
			V_0 = L_27;
			IL2CPP_LEAVE(0x211, FINALLY_0204);
		}

IL_00b7:
		{
			String_t* L_28 = V_2;
			bool L_29 = String_op_Equality_m139F0E4195AE2F856019E63B241F36F016997FCE(_stringLiteralEDB1046E80D3EA42FA26944C690CF3EB80C9CC62, L_28, /*hidden argument*/NULL);
			if (!L_29)
			{
				goto IL_00e3;
			}
		}

IL_00c7:
		{
			AndroidJavaObject_t5B3829FB6E1DBC020F5BA17846F1351EAA982F8E * L_30 = ___obj0;
			ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_31 = (ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)SZArrayNew(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A_il2cpp_TypeInfo_var, (uint32_t)0);
			NullCheck(L_30);
			int16_t L_32 = AndroidJavaObject_Call_TisInt16_t823A20635DAF5A3D93A1E01CFBF3CBA27CF00B4D_mF25CDDD74A99379570D993243DA32D2D0CAF95FF(L_30, _stringLiteral1EB9481D15B52FEE57E5AC17CA684460A95993E5, L_31, /*hidden argument*/AndroidJavaObject_Call_TisInt16_t823A20635DAF5A3D93A1E01CFBF3CBA27CF00B4D_mF25CDDD74A99379570D993243DA32D2D0CAF95FF_RuntimeMethod_var);
			int16_t L_33 = L_32;
			RuntimeObject * L_34 = Box(Int16_t823A20635DAF5A3D93A1E01CFBF3CBA27CF00B4D_il2cpp_TypeInfo_var, &L_33);
			V_0 = L_34;
			IL2CPP_LEAVE(0x211, FINALLY_0204);
		}

IL_00e3:
		{
			String_t* L_35 = V_2;
			bool L_36 = String_op_Equality_m139F0E4195AE2F856019E63B241F36F016997FCE(_stringLiteral59CA046CC86D6DAAA8DF1A535C94F9AD1834F7FD, L_35, /*hidden argument*/NULL);
			if (!L_36)
			{
				goto IL_010f;
			}
		}

IL_00f3:
		{
			AndroidJavaObject_t5B3829FB6E1DBC020F5BA17846F1351EAA982F8E * L_37 = ___obj0;
			ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_38 = (ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)SZArrayNew(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A_il2cpp_TypeInfo_var, (uint32_t)0);
			NullCheck(L_37);
			int64_t L_39 = AndroidJavaObject_Call_TisInt64_t7A386C2FF7B0280A0F516992401DDFCF0FF7B436_mE485E930878F2C30F8659EC20300D3546E0AC484(L_37, _stringLiteral2A42CDB77001E84D751FD683B088BBF833EEE0B3, L_38, /*hidden argument*/AndroidJavaObject_Call_TisInt64_t7A386C2FF7B0280A0F516992401DDFCF0FF7B436_mE485E930878F2C30F8659EC20300D3546E0AC484_RuntimeMethod_var);
			int64_t L_40 = L_39;
			RuntimeObject * L_41 = Box(Int64_t7A386C2FF7B0280A0F516992401DDFCF0FF7B436_il2cpp_TypeInfo_var, &L_40);
			V_0 = L_41;
			IL2CPP_LEAVE(0x211, FINALLY_0204);
		}

IL_010f:
		{
			String_t* L_42 = V_2;
			bool L_43 = String_op_Equality_m139F0E4195AE2F856019E63B241F36F016997FCE(_stringLiteralDE5E596326DC7F422D1D5BFA854AA400BA53AE86, L_42, /*hidden argument*/NULL);
			if (!L_43)
			{
				goto IL_013b;
			}
		}

IL_011f:
		{
			AndroidJavaObject_t5B3829FB6E1DBC020F5BA17846F1351EAA982F8E * L_44 = ___obj0;
			ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_45 = (ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)SZArrayNew(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A_il2cpp_TypeInfo_var, (uint32_t)0);
			NullCheck(L_44);
			float L_46 = AndroidJavaObject_Call_TisSingle_tDDDA9169C4E4E308AC6D7A824F9B28DC82204AE1_mDEE4DBCC617B60BB4CE4743431B838FECC359757(L_44, _stringLiteral51750D533BBD6F70990AA487A711B4492A08F4BC, L_45, /*hidden argument*/AndroidJavaObject_Call_TisSingle_tDDDA9169C4E4E308AC6D7A824F9B28DC82204AE1_mDEE4DBCC617B60BB4CE4743431B838FECC359757_RuntimeMethod_var);
			float L_47 = L_46;
			RuntimeObject * L_48 = Box(Single_tDDDA9169C4E4E308AC6D7A824F9B28DC82204AE1_il2cpp_TypeInfo_var, &L_47);
			V_0 = L_48;
			IL2CPP_LEAVE(0x211, FINALLY_0204);
		}

IL_013b:
		{
			String_t* L_49 = V_2;
			bool L_50 = String_op_Equality_m139F0E4195AE2F856019E63B241F36F016997FCE(_stringLiteralE6A7F51D4599E77D3EE682C1208434F332D9BF8D, L_49, /*hidden argument*/NULL);
			if (!L_50)
			{
				goto IL_0167;
			}
		}

IL_014b:
		{
			AndroidJavaObject_t5B3829FB6E1DBC020F5BA17846F1351EAA982F8E * L_51 = ___obj0;
			ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_52 = (ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)SZArrayNew(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A_il2cpp_TypeInfo_var, (uint32_t)0);
			NullCheck(L_51);
			double L_53 = AndroidJavaObject_Call_TisDouble_t358B8F23BDC52A5DD700E727E204F9F7CDE12409_mA09E9F86B0C09659E6ECB18EC567F98A38FDF738(L_51, _stringLiteral917103D252076DA908A549A26BE33C64ABBD0EAC, L_52, /*hidden argument*/AndroidJavaObject_Call_TisDouble_t358B8F23BDC52A5DD700E727E204F9F7CDE12409_mA09E9F86B0C09659E6ECB18EC567F98A38FDF738_RuntimeMethod_var);
			double L_54 = L_53;
			RuntimeObject * L_55 = Box(Double_t358B8F23BDC52A5DD700E727E204F9F7CDE12409_il2cpp_TypeInfo_var, &L_54);
			V_0 = L_55;
			IL2CPP_LEAVE(0x211, FINALLY_0204);
		}

IL_0167:
		{
			String_t* L_56 = V_2;
			bool L_57 = String_op_Equality_m139F0E4195AE2F856019E63B241F36F016997FCE(_stringLiteralD15A929AAC58DB1B939AAB2AEDA4342595D77F13, L_56, /*hidden argument*/NULL);
			if (!L_57)
			{
				goto IL_0193;
			}
		}

IL_0177:
		{
			AndroidJavaObject_t5B3829FB6E1DBC020F5BA17846F1351EAA982F8E * L_58 = ___obj0;
			ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_59 = (ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)SZArrayNew(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A_il2cpp_TypeInfo_var, (uint32_t)0);
			NullCheck(L_58);
			Il2CppChar L_60 = AndroidJavaObject_Call_TisChar_tBF22D9FC341BE970735250BB6FF1A4A92BBA58B9_m1417D998764ED64D194E0A171677773221DAE64F(L_58, _stringLiteral319523E1002BB1B6AB63E268BEEA610E6C9D8EEC, L_59, /*hidden argument*/AndroidJavaObject_Call_TisChar_tBF22D9FC341BE970735250BB6FF1A4A92BBA58B9_m1417D998764ED64D194E0A171677773221DAE64F_RuntimeMethod_var);
			Il2CppChar L_61 = L_60;
			RuntimeObject * L_62 = Box(Char_tBF22D9FC341BE970735250BB6FF1A4A92BBA58B9_il2cpp_TypeInfo_var, &L_61);
			V_0 = L_62;
			IL2CPP_LEAVE(0x211, FINALLY_0204);
		}

IL_0193:
		{
			String_t* L_63 = V_2;
			bool L_64 = String_op_Equality_m139F0E4195AE2F856019E63B241F36F016997FCE(_stringLiteral169775A78ADEE2D403BC1F88A1C1760F11C0304D, L_63, /*hidden argument*/NULL);
			if (!L_64)
			{
				goto IL_01ba;
			}
		}

IL_01a3:
		{
			AndroidJavaObject_t5B3829FB6E1DBC020F5BA17846F1351EAA982F8E * L_65 = ___obj0;
			ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_66 = (ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)SZArrayNew(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A_il2cpp_TypeInfo_var, (uint32_t)0);
			NullCheck(L_65);
			String_t* L_67 = AndroidJavaObject_Call_TisString_t_m9AB7F83596130620DAA3338C360A4F140A5BD0EA(L_65, _stringLiteralA7EDC6086A91C13EEC0568F09CD6263D5A4CFFEC, L_66, /*hidden argument*/AndroidJavaObject_Call_TisString_t_m9AB7F83596130620DAA3338C360A4F140A5BD0EA_RuntimeMethod_var);
			V_0 = L_67;
			IL2CPP_LEAVE(0x211, FINALLY_0204);
		}

IL_01ba:
		{
			String_t* L_68 = V_2;
			bool L_69 = String_op_Equality_m139F0E4195AE2F856019E63B241F36F016997FCE(_stringLiteral328CD2BEF0C16A2D306B28CD73848671CCC42AC2, L_68, /*hidden argument*/NULL);
			if (!L_69)
			{
				goto IL_01db;
			}
		}

IL_01ca:
		{
			AndroidJavaObject_t5B3829FB6E1DBC020F5BA17846F1351EAA982F8E * L_70 = ___obj0;
			NullCheck(L_70);
			intptr_t L_71 = AndroidJavaObject_GetRawObject_mAEB3A269841B8D0BB5701C59AC7463DF7806CA2F(L_70, /*hidden argument*/NULL);
			AndroidJavaClass_tFC9C1064BF4849691FEDC988743C0C271C62FDC8 * L_72 = (AndroidJavaClass_tFC9C1064BF4849691FEDC988743C0C271C62FDC8 *)il2cpp_codegen_object_new(AndroidJavaClass_tFC9C1064BF4849691FEDC988743C0C271C62FDC8_il2cpp_TypeInfo_var);
			AndroidJavaClass__ctor_m8718DF9B2AAE427C724E903720F1697906BB5896(L_72, (intptr_t)L_71, /*hidden argument*/NULL);
			V_0 = L_72;
			IL2CPP_LEAVE(0x211, FINALLY_0204);
		}

IL_01db:
		{
			AndroidJavaObject_t5B3829FB6E1DBC020F5BA17846F1351EAA982F8E * L_73 = V_1;
			ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_74 = (ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)SZArrayNew(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A_il2cpp_TypeInfo_var, (uint32_t)0);
			NullCheck(L_73);
			bool L_75 = AndroidJavaObject_Call_TisBoolean_tB53F6830F670160873277339AA58F15CAED4399C_m55C7AF41C602F92EE6E9482814E57F6A5ADCECF4(L_73, _stringLiteralE33E0E502D09092EA117BE8C27FB58B1DD3AA609, L_74, /*hidden argument*/AndroidJavaObject_Call_TisBoolean_tB53F6830F670160873277339AA58F15CAED4399C_m55C7AF41C602F92EE6E9482814E57F6A5ADCECF4_RuntimeMethod_var);
			if (!L_75)
			{
				goto IL_01fd;
			}
		}

IL_01f1:
		{
			AndroidJavaObject_t5B3829FB6E1DBC020F5BA17846F1351EAA982F8E * L_76 = ___obj0;
			RuntimeObject * L_77 = _AndroidJNIHelper_UnboxArray_mC196889BC2288A01DCF80DA2E27F832FA7C7CE2E(L_76, /*hidden argument*/NULL);
			V_0 = L_77;
			IL2CPP_LEAVE(0x211, FINALLY_0204);
		}

IL_01fd:
		{
			AndroidJavaObject_t5B3829FB6E1DBC020F5BA17846F1351EAA982F8E * L_78 = ___obj0;
			V_0 = L_78;
			IL2CPP_LEAVE(0x211, FINALLY_0204);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0204;
	}

FINALLY_0204:
	{ // begin finally (depth: 1)
		{
			AndroidJavaObject_t5B3829FB6E1DBC020F5BA17846F1351EAA982F8E * L_79 = V_1;
			if (!L_79)
			{
				goto IL_0210;
			}
		}

IL_020a:
		{
			AndroidJavaObject_t5B3829FB6E1DBC020F5BA17846F1351EAA982F8E * L_80 = V_1;
			NullCheck(L_80);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t7218B22548186B208D65EA5B7870503810A2D15A_il2cpp_TypeInfo_var, L_80);
		}

IL_0210:
		{
			IL2CPP_END_FINALLY(516)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(516)
	{
		IL2CPP_JUMP_TBL(0x211, IL_0211)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_0211:
	{
		RuntimeObject * L_81 = V_0;
		return L_81;
	}
}
// UnityEngine.AndroidJavaObject UnityEngine._AndroidJNIHelper::Box(System.Object)
extern "C" IL2CPP_METHOD_ATTR AndroidJavaObject_t5B3829FB6E1DBC020F5BA17846F1351EAA982F8E * _AndroidJNIHelper_Box_m2B00C16E8893C4D4DFA8836FB8BB044ACD973182 (RuntimeObject * ___obj0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (_AndroidJNIHelper_Box_m2B00C16E8893C4D4DFA8836FB8BB044ACD973182_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	AndroidJavaObject_t5B3829FB6E1DBC020F5BA17846F1351EAA982F8E * V_0 = NULL;
	{
		RuntimeObject * L_0 = ___obj0;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		V_0 = (AndroidJavaObject_t5B3829FB6E1DBC020F5BA17846F1351EAA982F8E *)NULL;
		goto IL_0294;
	}

IL_000e:
	{
		RuntimeObject * L_1 = ___obj0;
		NullCheck(L_1);
		Type_t * L_2 = Object_GetType_m2E0B62414ECCAA3094B703790CE88CBB2F83EA60(L_1, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(AndroidReflection_t1E856C4DB3786B7F94F0488E69A752B752E4657D_il2cpp_TypeInfo_var);
		bool L_3 = AndroidReflection_IsPrimitive_m3279141318F8962AFDEC3DFDFE976F8F58BE7B46(L_2, /*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_01b2;
		}
	}
	{
		RuntimeObject * L_4 = ___obj0;
		if (!((RuntimeObject *)IsInstSealed((RuntimeObject*)L_4, Int32_t585191389E07734F19F3156FF88FB3EF4800D102_il2cpp_TypeInfo_var)))
		{
			goto IL_004e;
		}
	}
	{
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_5 = (ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)SZArrayNew(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A_il2cpp_TypeInfo_var, (uint32_t)1);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_6 = L_5;
		RuntimeObject * L_7 = ___obj0;
		int32_t L_8 = ((*(int32_t*)((int32_t*)UnBox(L_7, Int32_t585191389E07734F19F3156FF88FB3EF4800D102_il2cpp_TypeInfo_var))));
		RuntimeObject * L_9 = Box(Int32_t585191389E07734F19F3156FF88FB3EF4800D102_il2cpp_TypeInfo_var, &L_8);
		NullCheck(L_6);
		ArrayElementTypeCheck (L_6, L_9);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_9);
		AndroidJavaObject_t5B3829FB6E1DBC020F5BA17846F1351EAA982F8E * L_10 = (AndroidJavaObject_t5B3829FB6E1DBC020F5BA17846F1351EAA982F8E *)il2cpp_codegen_object_new(AndroidJavaObject_t5B3829FB6E1DBC020F5BA17846F1351EAA982F8E_il2cpp_TypeInfo_var);
		AndroidJavaObject__ctor_mBD417486B0BD80E4CE3677B3AC825B3EA9BC7E5C(L_10, _stringLiteral9EAF6B54917BA48016AC5209BC15F62D5445708E, L_6, /*hidden argument*/NULL);
		V_0 = L_10;
		goto IL_0294;
	}

IL_004e:
	{
		RuntimeObject * L_11 = ___obj0;
		if (!((RuntimeObject *)IsInstSealed((RuntimeObject*)L_11, Boolean_tB53F6830F670160873277339AA58F15CAED4399C_il2cpp_TypeInfo_var)))
		{
			goto IL_007d;
		}
	}
	{
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_12 = (ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)SZArrayNew(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A_il2cpp_TypeInfo_var, (uint32_t)1);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_13 = L_12;
		RuntimeObject * L_14 = ___obj0;
		bool L_15 = ((*(bool*)((bool*)UnBox(L_14, Boolean_tB53F6830F670160873277339AA58F15CAED4399C_il2cpp_TypeInfo_var))));
		RuntimeObject * L_16 = Box(Boolean_tB53F6830F670160873277339AA58F15CAED4399C_il2cpp_TypeInfo_var, &L_15);
		NullCheck(L_13);
		ArrayElementTypeCheck (L_13, L_16);
		(L_13)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_16);
		AndroidJavaObject_t5B3829FB6E1DBC020F5BA17846F1351EAA982F8E * L_17 = (AndroidJavaObject_t5B3829FB6E1DBC020F5BA17846F1351EAA982F8E *)il2cpp_codegen_object_new(AndroidJavaObject_t5B3829FB6E1DBC020F5BA17846F1351EAA982F8E_il2cpp_TypeInfo_var);
		AndroidJavaObject__ctor_mBD417486B0BD80E4CE3677B3AC825B3EA9BC7E5C(L_17, _stringLiteralBD119F910FA08AD4078969E4A551A13A7EA4D4BC, L_13, /*hidden argument*/NULL);
		V_0 = L_17;
		goto IL_0294;
	}

IL_007d:
	{
		RuntimeObject * L_18 = ___obj0;
		if (!((RuntimeObject *)IsInstSealed((RuntimeObject*)L_18, Byte_tF87C579059BD4633E6840EBBBEEF899C6E33EF07_il2cpp_TypeInfo_var)))
		{
			goto IL_00ac;
		}
	}
	{
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_19 = (ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)SZArrayNew(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A_il2cpp_TypeInfo_var, (uint32_t)1);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_20 = L_19;
		RuntimeObject * L_21 = ___obj0;
		uint8_t L_22 = ((*(uint8_t*)((uint8_t*)UnBox(L_21, Byte_tF87C579059BD4633E6840EBBBEEF899C6E33EF07_il2cpp_TypeInfo_var))));
		RuntimeObject * L_23 = Box(Byte_tF87C579059BD4633E6840EBBBEEF899C6E33EF07_il2cpp_TypeInfo_var, &L_22);
		NullCheck(L_20);
		ArrayElementTypeCheck (L_20, L_23);
		(L_20)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_23);
		AndroidJavaObject_t5B3829FB6E1DBC020F5BA17846F1351EAA982F8E * L_24 = (AndroidJavaObject_t5B3829FB6E1DBC020F5BA17846F1351EAA982F8E *)il2cpp_codegen_object_new(AndroidJavaObject_t5B3829FB6E1DBC020F5BA17846F1351EAA982F8E_il2cpp_TypeInfo_var);
		AndroidJavaObject__ctor_mBD417486B0BD80E4CE3677B3AC825B3EA9BC7E5C(L_24, _stringLiteralBD7E4A941C870AD23894466BB52628A9B488A1A2, L_20, /*hidden argument*/NULL);
		V_0 = L_24;
		goto IL_0294;
	}

IL_00ac:
	{
		RuntimeObject * L_25 = ___obj0;
		if (!((RuntimeObject *)IsInstSealed((RuntimeObject*)L_25, Int16_t823A20635DAF5A3D93A1E01CFBF3CBA27CF00B4D_il2cpp_TypeInfo_var)))
		{
			goto IL_00db;
		}
	}
	{
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_26 = (ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)SZArrayNew(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A_il2cpp_TypeInfo_var, (uint32_t)1);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_27 = L_26;
		RuntimeObject * L_28 = ___obj0;
		int16_t L_29 = ((*(int16_t*)((int16_t*)UnBox(L_28, Int16_t823A20635DAF5A3D93A1E01CFBF3CBA27CF00B4D_il2cpp_TypeInfo_var))));
		RuntimeObject * L_30 = Box(Int16_t823A20635DAF5A3D93A1E01CFBF3CBA27CF00B4D_il2cpp_TypeInfo_var, &L_29);
		NullCheck(L_27);
		ArrayElementTypeCheck (L_27, L_30);
		(L_27)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_30);
		AndroidJavaObject_t5B3829FB6E1DBC020F5BA17846F1351EAA982F8E * L_31 = (AndroidJavaObject_t5B3829FB6E1DBC020F5BA17846F1351EAA982F8E *)il2cpp_codegen_object_new(AndroidJavaObject_t5B3829FB6E1DBC020F5BA17846F1351EAA982F8E_il2cpp_TypeInfo_var);
		AndroidJavaObject__ctor_mBD417486B0BD80E4CE3677B3AC825B3EA9BC7E5C(L_31, _stringLiteralEDB1046E80D3EA42FA26944C690CF3EB80C9CC62, L_27, /*hidden argument*/NULL);
		V_0 = L_31;
		goto IL_0294;
	}

IL_00db:
	{
		RuntimeObject * L_32 = ___obj0;
		if (!((RuntimeObject *)IsInstSealed((RuntimeObject*)L_32, Int64_t7A386C2FF7B0280A0F516992401DDFCF0FF7B436_il2cpp_TypeInfo_var)))
		{
			goto IL_010a;
		}
	}
	{
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_33 = (ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)SZArrayNew(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A_il2cpp_TypeInfo_var, (uint32_t)1);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_34 = L_33;
		RuntimeObject * L_35 = ___obj0;
		int64_t L_36 = ((*(int64_t*)((int64_t*)UnBox(L_35, Int64_t7A386C2FF7B0280A0F516992401DDFCF0FF7B436_il2cpp_TypeInfo_var))));
		RuntimeObject * L_37 = Box(Int64_t7A386C2FF7B0280A0F516992401DDFCF0FF7B436_il2cpp_TypeInfo_var, &L_36);
		NullCheck(L_34);
		ArrayElementTypeCheck (L_34, L_37);
		(L_34)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_37);
		AndroidJavaObject_t5B3829FB6E1DBC020F5BA17846F1351EAA982F8E * L_38 = (AndroidJavaObject_t5B3829FB6E1DBC020F5BA17846F1351EAA982F8E *)il2cpp_codegen_object_new(AndroidJavaObject_t5B3829FB6E1DBC020F5BA17846F1351EAA982F8E_il2cpp_TypeInfo_var);
		AndroidJavaObject__ctor_mBD417486B0BD80E4CE3677B3AC825B3EA9BC7E5C(L_38, _stringLiteral59CA046CC86D6DAAA8DF1A535C94F9AD1834F7FD, L_34, /*hidden argument*/NULL);
		V_0 = L_38;
		goto IL_0294;
	}

IL_010a:
	{
		RuntimeObject * L_39 = ___obj0;
		if (!((RuntimeObject *)IsInstSealed((RuntimeObject*)L_39, Single_tDDDA9169C4E4E308AC6D7A824F9B28DC82204AE1_il2cpp_TypeInfo_var)))
		{
			goto IL_0139;
		}
	}
	{
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_40 = (ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)SZArrayNew(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A_il2cpp_TypeInfo_var, (uint32_t)1);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_41 = L_40;
		RuntimeObject * L_42 = ___obj0;
		float L_43 = ((*(float*)((float*)UnBox(L_42, Single_tDDDA9169C4E4E308AC6D7A824F9B28DC82204AE1_il2cpp_TypeInfo_var))));
		RuntimeObject * L_44 = Box(Single_tDDDA9169C4E4E308AC6D7A824F9B28DC82204AE1_il2cpp_TypeInfo_var, &L_43);
		NullCheck(L_41);
		ArrayElementTypeCheck (L_41, L_44);
		(L_41)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_44);
		AndroidJavaObject_t5B3829FB6E1DBC020F5BA17846F1351EAA982F8E * L_45 = (AndroidJavaObject_t5B3829FB6E1DBC020F5BA17846F1351EAA982F8E *)il2cpp_codegen_object_new(AndroidJavaObject_t5B3829FB6E1DBC020F5BA17846F1351EAA982F8E_il2cpp_TypeInfo_var);
		AndroidJavaObject__ctor_mBD417486B0BD80E4CE3677B3AC825B3EA9BC7E5C(L_45, _stringLiteralDE5E596326DC7F422D1D5BFA854AA400BA53AE86, L_41, /*hidden argument*/NULL);
		V_0 = L_45;
		goto IL_0294;
	}

IL_0139:
	{
		RuntimeObject * L_46 = ___obj0;
		if (!((RuntimeObject *)IsInstSealed((RuntimeObject*)L_46, Double_t358B8F23BDC52A5DD700E727E204F9F7CDE12409_il2cpp_TypeInfo_var)))
		{
			goto IL_0168;
		}
	}
	{
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_47 = (ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)SZArrayNew(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A_il2cpp_TypeInfo_var, (uint32_t)1);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_48 = L_47;
		RuntimeObject * L_49 = ___obj0;
		double L_50 = ((*(double*)((double*)UnBox(L_49, Double_t358B8F23BDC52A5DD700E727E204F9F7CDE12409_il2cpp_TypeInfo_var))));
		RuntimeObject * L_51 = Box(Double_t358B8F23BDC52A5DD700E727E204F9F7CDE12409_il2cpp_TypeInfo_var, &L_50);
		NullCheck(L_48);
		ArrayElementTypeCheck (L_48, L_51);
		(L_48)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_51);
		AndroidJavaObject_t5B3829FB6E1DBC020F5BA17846F1351EAA982F8E * L_52 = (AndroidJavaObject_t5B3829FB6E1DBC020F5BA17846F1351EAA982F8E *)il2cpp_codegen_object_new(AndroidJavaObject_t5B3829FB6E1DBC020F5BA17846F1351EAA982F8E_il2cpp_TypeInfo_var);
		AndroidJavaObject__ctor_mBD417486B0BD80E4CE3677B3AC825B3EA9BC7E5C(L_52, _stringLiteralE6A7F51D4599E77D3EE682C1208434F332D9BF8D, L_48, /*hidden argument*/NULL);
		V_0 = L_52;
		goto IL_0294;
	}

IL_0168:
	{
		RuntimeObject * L_53 = ___obj0;
		if (!((RuntimeObject *)IsInstSealed((RuntimeObject*)L_53, Char_tBF22D9FC341BE970735250BB6FF1A4A92BBA58B9_il2cpp_TypeInfo_var)))
		{
			goto IL_0197;
		}
	}
	{
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_54 = (ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)SZArrayNew(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A_il2cpp_TypeInfo_var, (uint32_t)1);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_55 = L_54;
		RuntimeObject * L_56 = ___obj0;
		Il2CppChar L_57 = ((*(Il2CppChar*)((Il2CppChar*)UnBox(L_56, Char_tBF22D9FC341BE970735250BB6FF1A4A92BBA58B9_il2cpp_TypeInfo_var))));
		RuntimeObject * L_58 = Box(Char_tBF22D9FC341BE970735250BB6FF1A4A92BBA58B9_il2cpp_TypeInfo_var, &L_57);
		NullCheck(L_55);
		ArrayElementTypeCheck (L_55, L_58);
		(L_55)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_58);
		AndroidJavaObject_t5B3829FB6E1DBC020F5BA17846F1351EAA982F8E * L_59 = (AndroidJavaObject_t5B3829FB6E1DBC020F5BA17846F1351EAA982F8E *)il2cpp_codegen_object_new(AndroidJavaObject_t5B3829FB6E1DBC020F5BA17846F1351EAA982F8E_il2cpp_TypeInfo_var);
		AndroidJavaObject__ctor_mBD417486B0BD80E4CE3677B3AC825B3EA9BC7E5C(L_59, _stringLiteralD15A929AAC58DB1B939AAB2AEDA4342595D77F13, L_55, /*hidden argument*/NULL);
		V_0 = L_59;
		goto IL_0294;
	}

IL_0197:
	{
		RuntimeObject * L_60 = ___obj0;
		NullCheck(L_60);
		Type_t * L_61 = Object_GetType_m2E0B62414ECCAA3094B703790CE88CBB2F83EA60(L_60, /*hidden argument*/NULL);
		String_t* L_62 = String_Concat_m2E1F71C491D2429CC80A28745488FEA947BB7AAC(_stringLiteral94A9D9512BA3D2F295C65A0B3119715C79E6CB75, L_61, _stringLiteralBB589D0621E5472F470FA3425A234C74B1E202E8, /*hidden argument*/NULL);
		Exception_t * L_63 = (Exception_t *)il2cpp_codegen_object_new(Exception_t_il2cpp_TypeInfo_var);
		Exception__ctor_m89BADFF36C3B170013878726E07729D51AA9FBE0(L_63, L_62, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_63, NULL, _AndroidJNIHelper_Box_m2B00C16E8893C4D4DFA8836FB8BB044ACD973182_RuntimeMethod_var);
	}

IL_01b2:
	{
		RuntimeObject * L_64 = ___obj0;
		if (!((String_t*)IsInstSealed((RuntimeObject*)L_64, String_t_il2cpp_TypeInfo_var)))
		{
			goto IL_01dd;
		}
	}
	{
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_65 = (ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)SZArrayNew(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A_il2cpp_TypeInfo_var, (uint32_t)1);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_66 = L_65;
		RuntimeObject * L_67 = ___obj0;
		NullCheck(L_66);
		ArrayElementTypeCheck (L_66, ((String_t*)CastclassSealed((RuntimeObject*)L_67, String_t_il2cpp_TypeInfo_var)));
		(L_66)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)((String_t*)CastclassSealed((RuntimeObject*)L_67, String_t_il2cpp_TypeInfo_var)));
		AndroidJavaObject_t5B3829FB6E1DBC020F5BA17846F1351EAA982F8E * L_68 = (AndroidJavaObject_t5B3829FB6E1DBC020F5BA17846F1351EAA982F8E *)il2cpp_codegen_object_new(AndroidJavaObject_t5B3829FB6E1DBC020F5BA17846F1351EAA982F8E_il2cpp_TypeInfo_var);
		AndroidJavaObject__ctor_mBD417486B0BD80E4CE3677B3AC825B3EA9BC7E5C(L_68, _stringLiteral169775A78ADEE2D403BC1F88A1C1760F11C0304D, L_66, /*hidden argument*/NULL);
		V_0 = L_68;
		goto IL_0294;
	}

IL_01dd:
	{
		RuntimeObject * L_69 = ___obj0;
		if (!((AndroidJavaClass_tFC9C1064BF4849691FEDC988743C0C271C62FDC8 *)IsInstClass((RuntimeObject*)L_69, AndroidJavaClass_tFC9C1064BF4849691FEDC988743C0C271C62FDC8_il2cpp_TypeInfo_var)))
		{
			goto IL_01ff;
		}
	}
	{
		RuntimeObject * L_70 = ___obj0;
		NullCheck(((AndroidJavaClass_tFC9C1064BF4849691FEDC988743C0C271C62FDC8 *)CastclassClass((RuntimeObject*)L_70, AndroidJavaClass_tFC9C1064BF4849691FEDC988743C0C271C62FDC8_il2cpp_TypeInfo_var)));
		intptr_t L_71 = AndroidJavaObject_GetRawClass_mAE1E312709F872345EDD1B78D8A5F60C39D13E3C(((AndroidJavaClass_tFC9C1064BF4849691FEDC988743C0C271C62FDC8 *)CastclassClass((RuntimeObject*)L_70, AndroidJavaClass_tFC9C1064BF4849691FEDC988743C0C271C62FDC8_il2cpp_TypeInfo_var)), /*hidden argument*/NULL);
		AndroidJavaObject_t5B3829FB6E1DBC020F5BA17846F1351EAA982F8E * L_72 = (AndroidJavaObject_t5B3829FB6E1DBC020F5BA17846F1351EAA982F8E *)il2cpp_codegen_object_new(AndroidJavaObject_t5B3829FB6E1DBC020F5BA17846F1351EAA982F8E_il2cpp_TypeInfo_var);
		AndroidJavaObject__ctor_m21F177968E41241DE11225151F314CA4EBA5B559(L_72, (intptr_t)L_71, /*hidden argument*/NULL);
		V_0 = L_72;
		goto IL_0294;
	}

IL_01ff:
	{
		RuntimeObject * L_73 = ___obj0;
		if (!((AndroidJavaObject_t5B3829FB6E1DBC020F5BA17846F1351EAA982F8E *)IsInstClass((RuntimeObject*)L_73, AndroidJavaObject_t5B3829FB6E1DBC020F5BA17846F1351EAA982F8E_il2cpp_TypeInfo_var)))
		{
			goto IL_0217;
		}
	}
	{
		RuntimeObject * L_74 = ___obj0;
		V_0 = ((AndroidJavaObject_t5B3829FB6E1DBC020F5BA17846F1351EAA982F8E *)CastclassClass((RuntimeObject*)L_74, AndroidJavaObject_t5B3829FB6E1DBC020F5BA17846F1351EAA982F8E_il2cpp_TypeInfo_var));
		goto IL_0294;
	}

IL_0217:
	{
		RuntimeObject * L_75 = ___obj0;
		if (!((RuntimeArray *)IsInstClass((RuntimeObject*)L_75, RuntimeArray_il2cpp_TypeInfo_var)))
		{
			goto IL_0239;
		}
	}
	{
		RuntimeObject * L_76 = ___obj0;
		intptr_t L_77 = _AndroidJNIHelper_ConvertToJNIArray_mF7018A40E8546D4CAC0FDAD9710899F785149F4B(((RuntimeArray *)CastclassClass((RuntimeObject*)L_76, RuntimeArray_il2cpp_TypeInfo_var)), /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(AndroidJavaObject_t5B3829FB6E1DBC020F5BA17846F1351EAA982F8E_il2cpp_TypeInfo_var);
		AndroidJavaObject_t5B3829FB6E1DBC020F5BA17846F1351EAA982F8E * L_78 = AndroidJavaObject_AndroidJavaObjectDeleteLocalRef_m98A6BB7A74AF30A3D4ED582E426F31ACFA497E7B((intptr_t)L_77, /*hidden argument*/NULL);
		V_0 = L_78;
		goto IL_0294;
	}

IL_0239:
	{
		RuntimeObject * L_79 = ___obj0;
		if (!((AndroidJavaProxy_tBF3E21C3639CF1A14BDC9173530DC13D45540795 *)IsInstClass((RuntimeObject*)L_79, AndroidJavaProxy_tBF3E21C3639CF1A14BDC9173530DC13D45540795_il2cpp_TypeInfo_var)))
		{
			goto IL_0256;
		}
	}
	{
		RuntimeObject * L_80 = ___obj0;
		NullCheck(((AndroidJavaProxy_tBF3E21C3639CF1A14BDC9173530DC13D45540795 *)CastclassClass((RuntimeObject*)L_80, AndroidJavaProxy_tBF3E21C3639CF1A14BDC9173530DC13D45540795_il2cpp_TypeInfo_var)));
		AndroidJavaObject_t5B3829FB6E1DBC020F5BA17846F1351EAA982F8E * L_81 = AndroidJavaProxy_GetProxy_m0515FEED73F637D67E65EDB81FF9FEAEC5AD3170(((AndroidJavaProxy_tBF3E21C3639CF1A14BDC9173530DC13D45540795 *)CastclassClass((RuntimeObject*)L_80, AndroidJavaProxy_tBF3E21C3639CF1A14BDC9173530DC13D45540795_il2cpp_TypeInfo_var)), /*hidden argument*/NULL);
		V_0 = L_81;
		goto IL_0294;
	}

IL_0256:
	{
		RuntimeObject * L_82 = ___obj0;
		if (!((AndroidJavaRunnable_tBE7371D29A525C4F51DC1CBEBA5E193644F6AFE1 *)IsInstSealed((RuntimeObject*)L_82, AndroidJavaRunnable_tBE7371D29A525C4F51DC1CBEBA5E193644F6AFE1_il2cpp_TypeInfo_var)))
		{
			goto IL_0278;
		}
	}
	{
		RuntimeObject * L_83 = ___obj0;
		intptr_t L_84 = AndroidJNIHelper_CreateJavaRunnable_m79009DFEECC3B28C03B344FACE3D8F1F612DBBCE(((AndroidJavaRunnable_tBE7371D29A525C4F51DC1CBEBA5E193644F6AFE1 *)CastclassSealed((RuntimeObject*)L_83, AndroidJavaRunnable_tBE7371D29A525C4F51DC1CBEBA5E193644F6AFE1_il2cpp_TypeInfo_var)), /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(AndroidJavaObject_t5B3829FB6E1DBC020F5BA17846F1351EAA982F8E_il2cpp_TypeInfo_var);
		AndroidJavaObject_t5B3829FB6E1DBC020F5BA17846F1351EAA982F8E * L_85 = AndroidJavaObject_AndroidJavaObjectDeleteLocalRef_m98A6BB7A74AF30A3D4ED582E426F31ACFA497E7B((intptr_t)L_84, /*hidden argument*/NULL);
		V_0 = L_85;
		goto IL_0294;
	}

IL_0278:
	{
		RuntimeObject * L_86 = ___obj0;
		NullCheck(L_86);
		Type_t * L_87 = Object_GetType_m2E0B62414ECCAA3094B703790CE88CBB2F83EA60(L_86, /*hidden argument*/NULL);
		String_t* L_88 = String_Concat_m2E1F71C491D2429CC80A28745488FEA947BB7AAC(_stringLiteral94A9D9512BA3D2F295C65A0B3119715C79E6CB75, L_87, _stringLiteralBB589D0621E5472F470FA3425A234C74B1E202E8, /*hidden argument*/NULL);
		Exception_t * L_89 = (Exception_t *)il2cpp_codegen_object_new(Exception_t_il2cpp_TypeInfo_var);
		Exception__ctor_m89BADFF36C3B170013878726E07729D51AA9FBE0(L_89, L_88, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_89, NULL, _AndroidJNIHelper_Box_m2B00C16E8893C4D4DFA8836FB8BB044ACD973182_RuntimeMethod_var);
	}

IL_0294:
	{
		AndroidJavaObject_t5B3829FB6E1DBC020F5BA17846F1351EAA982F8E * L_90 = V_0;
		return L_90;
	}
}
// System.Void UnityEngine._AndroidJNIHelper::DeleteJNIArgArray(System.Object[],UnityEngine.jvalue[])
extern "C" IL2CPP_METHOD_ATTR void _AndroidJNIHelper_DeleteJNIArgArray_mDD73C1CDE759BBD8E7FD2F5C30FAEC7B00F6023F (ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* ___args0, jvalueU5BU5D_t15D5A2D5F08971A18428246F1999D516A4E9D975* ___jniArgs1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (_AndroidJNIHelper_DeleteJNIArgArray_mDD73C1CDE759BBD8E7FD2F5C30FAEC7B00F6023F_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	RuntimeObject * V_1 = NULL;
	ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* V_2 = NULL;
	int32_t V_3 = 0;
	{
		V_0 = 0;
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_0 = ___args0;
		V_2 = L_0;
		V_3 = 0;
		goto IL_004d;
	}

IL_000d:
	{
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_1 = V_2;
		int32_t L_2 = V_3;
		NullCheck(L_1);
		int32_t L_3 = L_2;
		RuntimeObject * L_4 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		V_1 = L_4;
		RuntimeObject * L_5 = V_1;
		if (((String_t*)IsInstSealed((RuntimeObject*)L_5, String_t_il2cpp_TypeInfo_var)))
		{
			goto IL_0033;
		}
	}
	{
		RuntimeObject * L_6 = V_1;
		if (((AndroidJavaRunnable_tBE7371D29A525C4F51DC1CBEBA5E193644F6AFE1 *)IsInstSealed((RuntimeObject*)L_6, AndroidJavaRunnable_tBE7371D29A525C4F51DC1CBEBA5E193644F6AFE1_il2cpp_TypeInfo_var)))
		{
			goto IL_0033;
		}
	}
	{
		RuntimeObject * L_7 = V_1;
		if (!((RuntimeArray *)IsInstClass((RuntimeObject*)L_7, RuntimeArray_il2cpp_TypeInfo_var)))
		{
			goto IL_0044;
		}
	}

IL_0033:
	{
		jvalueU5BU5D_t15D5A2D5F08971A18428246F1999D516A4E9D975* L_8 = ___jniArgs1;
		int32_t L_9 = V_0;
		NullCheck(L_8);
		intptr_t L_10 = ((L_8)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_9)))->get_l_8();
		AndroidJNISafe_DeleteLocalRef_mD2022EBA880AA5732254B6A24F957FC4E8777920((intptr_t)L_10, /*hidden argument*/NULL);
	}

IL_0044:
	{
		int32_t L_11 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_11, (int32_t)1));
		int32_t L_12 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add((int32_t)L_12, (int32_t)1));
	}

IL_004d:
	{
		int32_t L_13 = V_3;
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_14 = V_2;
		NullCheck(L_14);
		if ((((int32_t)L_13) < ((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_14)->max_length)))))))
		{
			goto IL_000d;
		}
	}
	{
		return;
	}
}
// System.IntPtr UnityEngine._AndroidJNIHelper::ConvertToJNIArray(System.Array)
extern "C" IL2CPP_METHOD_ATTR intptr_t _AndroidJNIHelper_ConvertToJNIArray_mF7018A40E8546D4CAC0FDAD9710899F785149F4B (RuntimeArray * ___array0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (_AndroidJNIHelper_ConvertToJNIArray_mF7018A40E8546D4CAC0FDAD9710899F785149F4B_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Type_t * V_0 = NULL;
	intptr_t V_1;
	memset(&V_1, 0, sizeof(V_1));
	StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* V_2 = NULL;
	int32_t V_3 = 0;
	intptr_t V_4;
	memset(&V_4, 0, sizeof(V_4));
	intptr_t V_5;
	memset(&V_5, 0, sizeof(V_5));
	int32_t V_6 = 0;
	intptr_t V_7;
	memset(&V_7, 0, sizeof(V_7));
	AndroidJavaObjectU5BU5D_tAA78CD496655EFF43DB71506C66672DBE563003C* V_8 = NULL;
	int32_t V_9 = 0;
	IntPtrU5BU5D_t4DC01DCB9A6DF6C9792A6513595D7A11E637DCDD* V_10 = NULL;
	intptr_t V_11;
	memset(&V_11, 0, sizeof(V_11));
	intptr_t V_12;
	memset(&V_12, 0, sizeof(V_12));
	int32_t V_13 = 0;
	intptr_t V_14;
	memset(&V_14, 0, sizeof(V_14));
	intptr_t V_15;
	memset(&V_15, 0, sizeof(V_15));
	{
		RuntimeArray * L_0 = ___array0;
		NullCheck(L_0);
		Type_t * L_1 = Object_GetType_m2E0B62414ECCAA3094B703790CE88CBB2F83EA60(L_0, /*hidden argument*/NULL);
		NullCheck(L_1);
		Type_t * L_2 = VirtFuncInvoker0< Type_t * >::Invoke(94 /* System.Type System.Type::GetElementType() */, L_1);
		V_0 = L_2;
		Type_t * L_3 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(AndroidReflection_t1E856C4DB3786B7F94F0488E69A752B752E4657D_il2cpp_TypeInfo_var);
		bool L_4 = AndroidReflection_IsPrimitive_m3279141318F8962AFDEC3DFDFE976F8F58BE7B46(L_3, /*hidden argument*/NULL);
		if (!L_4)
		{
			goto IL_0127;
		}
	}
	{
		Type_t * L_5 = V_0;
		RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D  L_6 = { reinterpret_cast<intptr_t> (Int32_t585191389E07734F19F3156FF88FB3EF4800D102_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_7 = Type_GetTypeFromHandle_m9DC58ADF0512987012A8A016FB64B068F3B1AFF6(L_6, /*hidden argument*/NULL);
		if ((!(((RuntimeObject*)(Type_t *)L_5) == ((RuntimeObject*)(Type_t *)L_7))))
		{
			goto IL_003a;
		}
	}
	{
		RuntimeArray * L_8 = ___array0;
		intptr_t L_9 = AndroidJNISafe_ToIntArray_m799FBC8B925ABFA28F534BC074A3541F8568A658(((Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83*)Castclass((RuntimeObject*)L_8, Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83_il2cpp_TypeInfo_var)), /*hidden argument*/NULL);
		V_1 = (intptr_t)L_9;
		goto IL_02ad;
	}

IL_003a:
	{
		Type_t * L_10 = V_0;
		RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D  L_11 = { reinterpret_cast<intptr_t> (Boolean_tB53F6830F670160873277339AA58F15CAED4399C_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_12 = Type_GetTypeFromHandle_m9DC58ADF0512987012A8A016FB64B068F3B1AFF6(L_11, /*hidden argument*/NULL);
		if ((!(((RuntimeObject*)(Type_t *)L_10) == ((RuntimeObject*)(Type_t *)L_12))))
		{
			goto IL_005b;
		}
	}
	{
		RuntimeArray * L_13 = ___array0;
		intptr_t L_14 = AndroidJNISafe_ToBooleanArray_m5DBB7AF3B39444A3EDBA84DFDC3239077AE5EAC3(((BooleanU5BU5D_t192C7579715690E25BD5EFED47F3E0FC9DCB2040*)Castclass((RuntimeObject*)L_13, BooleanU5BU5D_t192C7579715690E25BD5EFED47F3E0FC9DCB2040_il2cpp_TypeInfo_var)), /*hidden argument*/NULL);
		V_1 = (intptr_t)L_14;
		goto IL_02ad;
	}

IL_005b:
	{
		Type_t * L_15 = V_0;
		RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D  L_16 = { reinterpret_cast<intptr_t> (Byte_tF87C579059BD4633E6840EBBBEEF899C6E33EF07_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_17 = Type_GetTypeFromHandle_m9DC58ADF0512987012A8A016FB64B068F3B1AFF6(L_16, /*hidden argument*/NULL);
		if ((!(((RuntimeObject*)(Type_t *)L_15) == ((RuntimeObject*)(Type_t *)L_17))))
		{
			goto IL_007c;
		}
	}
	{
		RuntimeArray * L_18 = ___array0;
		intptr_t L_19 = AndroidJNISafe_ToByteArray_m7DE54D843051D37479D4B822112739BF4ACE085D(((ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821*)Castclass((RuntimeObject*)L_18, ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821_il2cpp_TypeInfo_var)), /*hidden argument*/NULL);
		V_1 = (intptr_t)L_19;
		goto IL_02ad;
	}

IL_007c:
	{
		Type_t * L_20 = V_0;
		RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D  L_21 = { reinterpret_cast<intptr_t> (Int16_t823A20635DAF5A3D93A1E01CFBF3CBA27CF00B4D_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_22 = Type_GetTypeFromHandle_m9DC58ADF0512987012A8A016FB64B068F3B1AFF6(L_21, /*hidden argument*/NULL);
		if ((!(((RuntimeObject*)(Type_t *)L_20) == ((RuntimeObject*)(Type_t *)L_22))))
		{
			goto IL_009d;
		}
	}
	{
		RuntimeArray * L_23 = ___array0;
		intptr_t L_24 = AndroidJNISafe_ToShortArray_m0452ECC8FFA622547E5F44F0DCA4856008073477(((Int16U5BU5D_tDA0F0B2730337F72E44DB024BE9818FA8EDE8D28*)Castclass((RuntimeObject*)L_23, Int16U5BU5D_tDA0F0B2730337F72E44DB024BE9818FA8EDE8D28_il2cpp_TypeInfo_var)), /*hidden argument*/NULL);
		V_1 = (intptr_t)L_24;
		goto IL_02ad;
	}

IL_009d:
	{
		Type_t * L_25 = V_0;
		RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D  L_26 = { reinterpret_cast<intptr_t> (Int64_t7A386C2FF7B0280A0F516992401DDFCF0FF7B436_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_27 = Type_GetTypeFromHandle_m9DC58ADF0512987012A8A016FB64B068F3B1AFF6(L_26, /*hidden argument*/NULL);
		if ((!(((RuntimeObject*)(Type_t *)L_25) == ((RuntimeObject*)(Type_t *)L_27))))
		{
			goto IL_00be;
		}
	}
	{
		RuntimeArray * L_28 = ___array0;
		intptr_t L_29 = AndroidJNISafe_ToLongArray_m99A39904C7FC45AF25C98311565BF2ED4C122D38(((Int64U5BU5D_tE04A3DEF6AF1C852A43B98A24EFB715806B37F5F*)Castclass((RuntimeObject*)L_28, Int64U5BU5D_tE04A3DEF6AF1C852A43B98A24EFB715806B37F5F_il2cpp_TypeInfo_var)), /*hidden argument*/NULL);
		V_1 = (intptr_t)L_29;
		goto IL_02ad;
	}

IL_00be:
	{
		Type_t * L_30 = V_0;
		RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D  L_31 = { reinterpret_cast<intptr_t> (Single_tDDDA9169C4E4E308AC6D7A824F9B28DC82204AE1_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_32 = Type_GetTypeFromHandle_m9DC58ADF0512987012A8A016FB64B068F3B1AFF6(L_31, /*hidden argument*/NULL);
		if ((!(((RuntimeObject*)(Type_t *)L_30) == ((RuntimeObject*)(Type_t *)L_32))))
		{
			goto IL_00df;
		}
	}
	{
		RuntimeArray * L_33 = ___array0;
		intptr_t L_34 = AndroidJNISafe_ToFloatArray_m7BC8B6FDADCB4477F6F5F2D1535419639E9E3A2A(((SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5*)Castclass((RuntimeObject*)L_33, SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5_il2cpp_TypeInfo_var)), /*hidden argument*/NULL);
		V_1 = (intptr_t)L_34;
		goto IL_02ad;
	}

IL_00df:
	{
		Type_t * L_35 = V_0;
		RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D  L_36 = { reinterpret_cast<intptr_t> (Double_t358B8F23BDC52A5DD700E727E204F9F7CDE12409_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_37 = Type_GetTypeFromHandle_m9DC58ADF0512987012A8A016FB64B068F3B1AFF6(L_36, /*hidden argument*/NULL);
		if ((!(((RuntimeObject*)(Type_t *)L_35) == ((RuntimeObject*)(Type_t *)L_37))))
		{
			goto IL_0100;
		}
	}
	{
		RuntimeArray * L_38 = ___array0;
		intptr_t L_39 = AndroidJNISafe_ToDoubleArray_m87AE9976817D3569D116781CF88739CA6E1EBE4B(((DoubleU5BU5D_tF9383437DDA9EAC9F60627E9E6E2045CF7CB182D*)Castclass((RuntimeObject*)L_38, DoubleU5BU5D_tF9383437DDA9EAC9F60627E9E6E2045CF7CB182D_il2cpp_TypeInfo_var)), /*hidden argument*/NULL);
		V_1 = (intptr_t)L_39;
		goto IL_02ad;
	}

IL_0100:
	{
		Type_t * L_40 = V_0;
		RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D  L_41 = { reinterpret_cast<intptr_t> (Char_tBF22D9FC341BE970735250BB6FF1A4A92BBA58B9_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_42 = Type_GetTypeFromHandle_m9DC58ADF0512987012A8A016FB64B068F3B1AFF6(L_41, /*hidden argument*/NULL);
		if ((!(((RuntimeObject*)(Type_t *)L_40) == ((RuntimeObject*)(Type_t *)L_42))))
		{
			goto IL_0121;
		}
	}
	{
		RuntimeArray * L_43 = ___array0;
		intptr_t L_44 = AndroidJNISafe_ToCharArray_mBEB6BBCAE23A3D4309F5D023859116B0916FB848(((CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2*)Castclass((RuntimeObject*)L_43, CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2_il2cpp_TypeInfo_var)), /*hidden argument*/NULL);
		V_1 = (intptr_t)L_44;
		goto IL_02ad;
	}

IL_0121:
	{
		goto IL_02a2;
	}

IL_0127:
	{
		Type_t * L_45 = V_0;
		RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D  L_46 = { reinterpret_cast<intptr_t> (String_t_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_47 = Type_GetTypeFromHandle_m9DC58ADF0512987012A8A016FB64B068F3B1AFF6(L_46, /*hidden argument*/NULL);
		if ((!(((RuntimeObject*)(Type_t *)L_45) == ((RuntimeObject*)(Type_t *)L_47))))
		{
			goto IL_01a6;
		}
	}
	{
		RuntimeArray * L_48 = ___array0;
		V_2 = ((StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E*)Castclass((RuntimeObject*)L_48, StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E_il2cpp_TypeInfo_var));
		RuntimeArray * L_49 = ___array0;
		NullCheck(L_49);
		int32_t L_50 = Array_GetLength_m318900B10C3A93A30ABDC67DE161C8F6ABA4D359(L_49, 0, /*hidden argument*/NULL);
		V_3 = L_50;
		intptr_t L_51 = AndroidJNISafe_FindClass_m1C558F3BE873EAAC6D0C3C34B7E15EFEE3002C03(_stringLiteralC9291E1B62F25E545BD2AC4DF55EB10099666DCD, /*hidden argument*/NULL);
		V_4 = (intptr_t)L_51;
		int32_t L_52 = V_3;
		intptr_t L_53 = V_4;
		intptr_t L_54 = AndroidJNI_NewObjectArray_m4E5A17102A16F3755D8EDEC3DC4BD187DC663630(L_52, (intptr_t)L_53, (intptr_t)(0), /*hidden argument*/NULL);
		V_5 = (intptr_t)L_54;
		V_6 = 0;
		goto IL_018f;
	}

IL_016a:
	{
		StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* L_55 = V_2;
		int32_t L_56 = V_6;
		NullCheck(L_55);
		int32_t L_57 = L_56;
		String_t* L_58 = (L_55)->GetAt(static_cast<il2cpp_array_size_t>(L_57));
		intptr_t L_59 = AndroidJNISafe_NewStringUTF_mD1ACA72386E10B6B5C3EC7F11E01A663F9EA6BA2(L_58, /*hidden argument*/NULL);
		V_7 = (intptr_t)L_59;
		intptr_t L_60 = V_5;
		int32_t L_61 = V_6;
		intptr_t L_62 = V_7;
		AndroidJNI_SetObjectArrayElement_m8D9CE3DBC0329C24ED7C2B85C881D78C2BFF20E4((intptr_t)L_60, L_61, (intptr_t)L_62, /*hidden argument*/NULL);
		intptr_t L_63 = V_7;
		AndroidJNISafe_DeleteLocalRef_mD2022EBA880AA5732254B6A24F957FC4E8777920((intptr_t)L_63, /*hidden argument*/NULL);
		int32_t L_64 = V_6;
		V_6 = ((int32_t)il2cpp_codegen_add((int32_t)L_64, (int32_t)1));
	}

IL_018f:
	{
		int32_t L_65 = V_6;
		int32_t L_66 = V_3;
		if ((((int32_t)L_65) < ((int32_t)L_66)))
		{
			goto IL_016a;
		}
	}
	{
		intptr_t L_67 = V_4;
		AndroidJNISafe_DeleteLocalRef_mD2022EBA880AA5732254B6A24F957FC4E8777920((intptr_t)L_67, /*hidden argument*/NULL);
		intptr_t L_68 = V_5;
		V_1 = (intptr_t)L_68;
		goto IL_02ad;
	}

IL_01a6:
	{
		Type_t * L_69 = V_0;
		RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D  L_70 = { reinterpret_cast<intptr_t> (AndroidJavaObject_t5B3829FB6E1DBC020F5BA17846F1351EAA982F8E_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_71 = Type_GetTypeFromHandle_m9DC58ADF0512987012A8A016FB64B068F3B1AFF6(L_70, /*hidden argument*/NULL);
		if ((!(((RuntimeObject*)(Type_t *)L_69) == ((RuntimeObject*)(Type_t *)L_71))))
		{
			goto IL_028b;
		}
	}
	{
		RuntimeArray * L_72 = ___array0;
		V_8 = ((AndroidJavaObjectU5BU5D_tAA78CD496655EFF43DB71506C66672DBE563003C*)Castclass((RuntimeObject*)L_72, AndroidJavaObjectU5BU5D_tAA78CD496655EFF43DB71506C66672DBE563003C_il2cpp_TypeInfo_var));
		RuntimeArray * L_73 = ___array0;
		NullCheck(L_73);
		int32_t L_74 = Array_GetLength_m318900B10C3A93A30ABDC67DE161C8F6ABA4D359(L_73, 0, /*hidden argument*/NULL);
		V_9 = L_74;
		int32_t L_75 = V_9;
		IntPtrU5BU5D_t4DC01DCB9A6DF6C9792A6513595D7A11E637DCDD* L_76 = (IntPtrU5BU5D_t4DC01DCB9A6DF6C9792A6513595D7A11E637DCDD*)SZArrayNew(IntPtrU5BU5D_t4DC01DCB9A6DF6C9792A6513595D7A11E637DCDD_il2cpp_TypeInfo_var, (uint32_t)L_75);
		V_10 = L_76;
		intptr_t L_77 = AndroidJNISafe_FindClass_m1C558F3BE873EAAC6D0C3C34B7E15EFEE3002C03(_stringLiteral1C138278299F1B35865A79651A05DF52C0D74BB9, /*hidden argument*/NULL);
		V_11 = (intptr_t)L_77;
		V_12 = (intptr_t)(0);
		V_13 = 0;
		goto IL_0268;
	}

IL_01ec:
	{
		AndroidJavaObjectU5BU5D_tAA78CD496655EFF43DB71506C66672DBE563003C* L_78 = V_8;
		int32_t L_79 = V_13;
		NullCheck(L_78);
		int32_t L_80 = L_79;
		AndroidJavaObject_t5B3829FB6E1DBC020F5BA17846F1351EAA982F8E * L_81 = (L_78)->GetAt(static_cast<il2cpp_array_size_t>(L_80));
		if (!L_81)
		{
			goto IL_0250;
		}
	}
	{
		IntPtrU5BU5D_t4DC01DCB9A6DF6C9792A6513595D7A11E637DCDD* L_82 = V_10;
		int32_t L_83 = V_13;
		NullCheck(L_82);
		AndroidJavaObjectU5BU5D_tAA78CD496655EFF43DB71506C66672DBE563003C* L_84 = V_8;
		int32_t L_85 = V_13;
		NullCheck(L_84);
		int32_t L_86 = L_85;
		AndroidJavaObject_t5B3829FB6E1DBC020F5BA17846F1351EAA982F8E * L_87 = (L_84)->GetAt(static_cast<il2cpp_array_size_t>(L_86));
		NullCheck(L_87);
		intptr_t L_88 = AndroidJavaObject_GetRawObject_mAEB3A269841B8D0BB5701C59AC7463DF7806CA2F(L_87, /*hidden argument*/NULL);
		*((intptr_t*)((L_82)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_83)))) = (intptr_t)L_88;
		AndroidJavaObjectU5BU5D_tAA78CD496655EFF43DB71506C66672DBE563003C* L_89 = V_8;
		int32_t L_90 = V_13;
		NullCheck(L_89);
		int32_t L_91 = L_90;
		AndroidJavaObject_t5B3829FB6E1DBC020F5BA17846F1351EAA982F8E * L_92 = (L_89)->GetAt(static_cast<il2cpp_array_size_t>(L_91));
		NullCheck(L_92);
		intptr_t L_93 = AndroidJavaObject_GetRawClass_mAE1E312709F872345EDD1B78D8A5F60C39D13E3C(L_92, /*hidden argument*/NULL);
		V_14 = (intptr_t)L_93;
		intptr_t L_94 = V_12;
		intptr_t L_95 = V_14;
		bool L_96 = IntPtr_op_Inequality_mB4886A806009EA825EFCC60CD2A7F6EB8E273A61((intptr_t)L_94, (intptr_t)L_95, /*hidden argument*/NULL);
		if (!L_96)
		{
			goto IL_024a;
		}
	}
	{
		intptr_t L_97 = V_12;
		bool L_98 = IntPtr_op_Equality_mEE8D9FD2DFE312BBAA8B4ED3BF7976B3142A5934((intptr_t)L_97, (intptr_t)(0), /*hidden argument*/NULL);
		if (!L_98)
		{
			goto IL_0243;
		}
	}
	{
		intptr_t L_99 = V_14;
		V_12 = (intptr_t)L_99;
		goto IL_0249;
	}

IL_0243:
	{
		intptr_t L_100 = V_11;
		V_12 = (intptr_t)L_100;
	}

IL_0249:
	{
	}

IL_024a:
	{
		goto IL_0261;
	}

IL_0250:
	{
		IntPtrU5BU5D_t4DC01DCB9A6DF6C9792A6513595D7A11E637DCDD* L_101 = V_10;
		int32_t L_102 = V_13;
		NullCheck(L_101);
		*((intptr_t*)((L_101)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_102)))) = (intptr_t)(0);
	}

IL_0261:
	{
		int32_t L_103 = V_13;
		V_13 = ((int32_t)il2cpp_codegen_add((int32_t)L_103, (int32_t)1));
	}

IL_0268:
	{
		int32_t L_104 = V_13;
		int32_t L_105 = V_9;
		if ((((int32_t)L_104) < ((int32_t)L_105)))
		{
			goto IL_01ec;
		}
	}
	{
		IntPtrU5BU5D_t4DC01DCB9A6DF6C9792A6513595D7A11E637DCDD* L_106 = V_10;
		intptr_t L_107 = V_12;
		intptr_t L_108 = AndroidJNISafe_ToObjectArray_m669BAB0566C5E683249F28FBD3B6225C0CC0B056(L_106, (intptr_t)L_107, /*hidden argument*/NULL);
		V_15 = (intptr_t)L_108;
		intptr_t L_109 = V_11;
		AndroidJNISafe_DeleteLocalRef_mD2022EBA880AA5732254B6A24F957FC4E8777920((intptr_t)L_109, /*hidden argument*/NULL);
		intptr_t L_110 = V_15;
		V_1 = (intptr_t)L_110;
		goto IL_02ad;
	}

IL_028b:
	{
		Type_t * L_111 = V_0;
		String_t* L_112 = String_Concat_m2E1F71C491D2429CC80A28745488FEA947BB7AAC(_stringLiteralB505B482020D33F0BA0DA1BE632CEF3BC4E82948, L_111, _stringLiteralBB589D0621E5472F470FA3425A234C74B1E202E8, /*hidden argument*/NULL);
		Exception_t * L_113 = (Exception_t *)il2cpp_codegen_object_new(Exception_t_il2cpp_TypeInfo_var);
		Exception__ctor_m89BADFF36C3B170013878726E07729D51AA9FBE0(L_113, L_112, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_113, NULL, _AndroidJNIHelper_ConvertToJNIArray_mF7018A40E8546D4CAC0FDAD9710899F785149F4B_RuntimeMethod_var);
	}

IL_02a2:
	{
		V_1 = (intptr_t)(0);
		goto IL_02ad;
	}

IL_02ad:
	{
		intptr_t L_114 = V_1;
		return (intptr_t)L_114;
	}
}
// System.IntPtr UnityEngine._AndroidJNIHelper::GetConstructorID(System.IntPtr,System.Object[])
extern "C" IL2CPP_METHOD_ATTR intptr_t _AndroidJNIHelper_GetConstructorID_m97A8BF1F8DBD79E0E179736F9B9DE9AFED53DFEE (intptr_t ___jclass0, ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* ___args1, const RuntimeMethod* method)
{
	intptr_t V_0;
	memset(&V_0, 0, sizeof(V_0));
	{
		intptr_t L_0 = ___jclass0;
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_1 = ___args1;
		String_t* L_2 = _AndroidJNIHelper_GetSignature_m074EF61F920B7E1BCB9582E78CA6A49FD1EE1162(L_1, /*hidden argument*/NULL);
		intptr_t L_3 = AndroidJNIHelper_GetConstructorID_mE4DCB0BDF860311D9CDAC58847B9DF9B0ABBECEF((intptr_t)L_0, L_2, /*hidden argument*/NULL);
		V_0 = (intptr_t)L_3;
		goto IL_0013;
	}

IL_0013:
	{
		intptr_t L_4 = V_0;
		return (intptr_t)L_4;
	}
}
// System.IntPtr UnityEngine._AndroidJNIHelper::GetMethodID(System.IntPtr,System.String,System.Object[],System.Boolean)
extern "C" IL2CPP_METHOD_ATTR intptr_t _AndroidJNIHelper_GetMethodID_mBE8BA93E2E0A8F056587FDBE07383F1BF2B3ED49 (intptr_t ___jclass0, String_t* ___methodName1, ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* ___args2, bool ___isStatic3, const RuntimeMethod* method)
{
	intptr_t V_0;
	memset(&V_0, 0, sizeof(V_0));
	{
		intptr_t L_0 = ___jclass0;
		String_t* L_1 = ___methodName1;
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_2 = ___args2;
		String_t* L_3 = _AndroidJNIHelper_GetSignature_m074EF61F920B7E1BCB9582E78CA6A49FD1EE1162(L_2, /*hidden argument*/NULL);
		bool L_4 = ___isStatic3;
		intptr_t L_5 = AndroidJNIHelper_GetMethodID_m9F3A8B259E3BB9636C6DFE77B5DCE52F07D972DF((intptr_t)L_0, L_1, L_3, L_4, /*hidden argument*/NULL);
		V_0 = (intptr_t)L_5;
		goto IL_0015;
	}

IL_0015:
	{
		intptr_t L_6 = V_0;
		return (intptr_t)L_6;
	}
}
// System.IntPtr UnityEngine._AndroidJNIHelper::GetConstructorID(System.IntPtr,System.String)
extern "C" IL2CPP_METHOD_ATTR intptr_t _AndroidJNIHelper_GetConstructorID_m491C2022BD1820550A43FF0B5EB54782503D5159 (intptr_t ___jclass0, String_t* ___signature1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (_AndroidJNIHelper_GetConstructorID_m491C2022BD1820550A43FF0B5EB54782503D5159_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	intptr_t V_0;
	memset(&V_0, 0, sizeof(V_0));
	intptr_t V_1;
	memset(&V_1, 0, sizeof(V_1));
	Exception_t * V_2 = NULL;
	intptr_t V_3;
	memset(&V_3, 0, sizeof(V_3));
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 2);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);
	{
		V_0 = (intptr_t)(0);
	}

IL_0007:
	try
	{ // begin try (depth: 1)
		try
		{ // begin try (depth: 2)
			intptr_t L_0 = ___jclass0;
			String_t* L_1 = ___signature1;
			IL2CPP_RUNTIME_CLASS_INIT(AndroidReflection_t1E856C4DB3786B7F94F0488E69A752B752E4657D_il2cpp_TypeInfo_var);
			intptr_t L_2 = AndroidReflection_GetConstructorMember_m2239F61741B804D046C6441C24BE034859516067((intptr_t)L_0, L_1, /*hidden argument*/NULL);
			V_0 = (intptr_t)L_2;
			intptr_t L_3 = V_0;
			intptr_t L_4 = AndroidJNISafe_FromReflectedMethod_m4019CDA7B8BA75D09258901FC082AD2477A3E7B8((intptr_t)L_3, /*hidden argument*/NULL);
			V_1 = (intptr_t)L_4;
			IL2CPP_LEAVE(0x4D, FINALLY_0044);
		} // end try (depth: 2)
		catch(Il2CppExceptionWrapper& e)
		{
			__exception_local = (Exception_t *)e.ex;
			if(il2cpp_codegen_class_is_assignable_from (Exception_t_il2cpp_TypeInfo_var, il2cpp_codegen_object_class(e.ex)))
				goto CATCH_001c;
			throw e;
		}

CATCH_001c:
		{ // begin catch(System.Exception)
			{
				V_2 = ((Exception_t *)__exception_local);
				intptr_t L_5 = ___jclass0;
				String_t* L_6 = ___signature1;
				intptr_t L_7 = AndroidJNISafe_GetMethodID_m6B9869E1214260D69C447059BFF94731B99F9FB9((intptr_t)L_5, _stringLiteral9E753E685FCDC6208CD59CF2FF3FDCCEB33023DD, L_6, /*hidden argument*/NULL);
				V_3 = (intptr_t)L_7;
				intptr_t L_8 = V_3;
				bool L_9 = IntPtr_op_Inequality_mB4886A806009EA825EFCC60CD2A7F6EB8E273A61((intptr_t)L_8, (intptr_t)(0), /*hidden argument*/NULL);
				if (!L_9)
				{
					goto IL_0042;
				}
			}

IL_003b:
			{
				intptr_t L_10 = V_3;
				V_1 = (intptr_t)L_10;
				IL2CPP_LEAVE(0x4D, FINALLY_0044);
			}

IL_0042:
			{
				Exception_t * L_11 = V_2;
				IL2CPP_RAISE_MANAGED_EXCEPTION(L_11, NULL, _AndroidJNIHelper_GetConstructorID_m491C2022BD1820550A43FF0B5EB54782503D5159_RuntimeMethod_var);
			}
		} // end catch (depth: 2)
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0044;
	}

FINALLY_0044:
	{ // begin finally (depth: 1)
		intptr_t L_12 = V_0;
		AndroidJNISafe_DeleteLocalRef_mD2022EBA880AA5732254B6A24F957FC4E8777920((intptr_t)L_12, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(68)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(68)
	{
		IL2CPP_JUMP_TBL(0x4D, IL_004d)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_004d:
	{
		intptr_t L_13 = V_1;
		return (intptr_t)L_13;
	}
}
// System.IntPtr UnityEngine._AndroidJNIHelper::GetMethodID(System.IntPtr,System.String,System.String,System.Boolean)
extern "C" IL2CPP_METHOD_ATTR intptr_t _AndroidJNIHelper_GetMethodID_m12B12EB5027675EE985A9FE9634079BDA79709AB (intptr_t ___jclass0, String_t* ___methodName1, String_t* ___signature2, bool ___isStatic3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (_AndroidJNIHelper_GetMethodID_m12B12EB5027675EE985A9FE9634079BDA79709AB_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	intptr_t V_0;
	memset(&V_0, 0, sizeof(V_0));
	intptr_t V_1;
	memset(&V_1, 0, sizeof(V_1));
	Exception_t * V_2 = NULL;
	intptr_t V_3;
	memset(&V_3, 0, sizeof(V_3));
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 2);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);
	{
		V_0 = (intptr_t)(0);
	}

IL_0007:
	try
	{ // begin try (depth: 1)
		try
		{ // begin try (depth: 2)
			intptr_t L_0 = ___jclass0;
			String_t* L_1 = ___methodName1;
			String_t* L_2 = ___signature2;
			bool L_3 = ___isStatic3;
			IL2CPP_RUNTIME_CLASS_INIT(AndroidReflection_t1E856C4DB3786B7F94F0488E69A752B752E4657D_il2cpp_TypeInfo_var);
			intptr_t L_4 = AndroidReflection_GetMethodMember_m430592F5B8E03F3CBA18022A63BA266A75E73485((intptr_t)L_0, L_1, L_2, L_3, /*hidden argument*/NULL);
			V_0 = (intptr_t)L_4;
			intptr_t L_5 = V_0;
			intptr_t L_6 = AndroidJNISafe_FromReflectedMethod_m4019CDA7B8BA75D09258901FC082AD2477A3E7B8((intptr_t)L_5, /*hidden argument*/NULL);
			V_1 = (intptr_t)L_6;
			IL2CPP_LEAVE(0x4C, FINALLY_0043);
		} // end try (depth: 2)
		catch(Il2CppExceptionWrapper& e)
		{
			__exception_local = (Exception_t *)e.ex;
			if(il2cpp_codegen_class_is_assignable_from (Exception_t_il2cpp_TypeInfo_var, il2cpp_codegen_object_class(e.ex)))
				goto CATCH_001e;
			throw e;
		}

CATCH_001e:
		{ // begin catch(System.Exception)
			{
				V_2 = ((Exception_t *)__exception_local);
				intptr_t L_7 = ___jclass0;
				String_t* L_8 = ___methodName1;
				String_t* L_9 = ___signature2;
				bool L_10 = ___isStatic3;
				intptr_t L_11 = _AndroidJNIHelper_GetMethodIDFallback_mB0C0E5A27ECD7FA819E4FBB8220E1CE19309125F((intptr_t)L_7, L_8, L_9, L_10, /*hidden argument*/NULL);
				V_3 = (intptr_t)L_11;
				intptr_t L_12 = V_3;
				bool L_13 = IntPtr_op_Inequality_mB4886A806009EA825EFCC60CD2A7F6EB8E273A61((intptr_t)L_12, (intptr_t)(0), /*hidden argument*/NULL);
				if (!L_13)
				{
					goto IL_0041;
				}
			}

IL_003a:
			{
				intptr_t L_14 = V_3;
				V_1 = (intptr_t)L_14;
				IL2CPP_LEAVE(0x4C, FINALLY_0043);
			}

IL_0041:
			{
				Exception_t * L_15 = V_2;
				IL2CPP_RAISE_MANAGED_EXCEPTION(L_15, NULL, _AndroidJNIHelper_GetMethodID_m12B12EB5027675EE985A9FE9634079BDA79709AB_RuntimeMethod_var);
			}
		} // end catch (depth: 2)
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0043;
	}

FINALLY_0043:
	{ // begin finally (depth: 1)
		intptr_t L_16 = V_0;
		AndroidJNISafe_DeleteLocalRef_mD2022EBA880AA5732254B6A24F957FC4E8777920((intptr_t)L_16, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(67)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(67)
	{
		IL2CPP_JUMP_TBL(0x4C, IL_004c)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_004c:
	{
		intptr_t L_17 = V_1;
		return (intptr_t)L_17;
	}
}
// System.IntPtr UnityEngine._AndroidJNIHelper::GetMethodIDFallback(System.IntPtr,System.String,System.String,System.Boolean)
extern "C" IL2CPP_METHOD_ATTR intptr_t _AndroidJNIHelper_GetMethodIDFallback_mB0C0E5A27ECD7FA819E4FBB8220E1CE19309125F (intptr_t ___jclass0, String_t* ___methodName1, String_t* ___signature2, bool ___isStatic3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (_AndroidJNIHelper_GetMethodIDFallback_mB0C0E5A27ECD7FA819E4FBB8220E1CE19309125F_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	intptr_t V_0;
	memset(&V_0, 0, sizeof(V_0));
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 2);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);
	intptr_t G_B4_0;
	memset(&G_B4_0, 0, sizeof(G_B4_0));
	{
	}

IL_0001:
	try
	{ // begin try (depth: 1)
		{
			bool L_0 = ___isStatic3;
			if (!L_0)
			{
				goto IL_0015;
			}
		}

IL_0008:
		{
			intptr_t L_1 = ___jclass0;
			String_t* L_2 = ___methodName1;
			String_t* L_3 = ___signature2;
			intptr_t L_4 = AndroidJNISafe_GetStaticMethodID_m0BEA282D30F63BDA5C18BDA6BCAAC45FABE6ADA2((intptr_t)L_1, L_2, L_3, /*hidden argument*/NULL);
			G_B4_0 = L_4;
			goto IL_001d;
		}

IL_0015:
		{
			intptr_t L_5 = ___jclass0;
			String_t* L_6 = ___methodName1;
			String_t* L_7 = ___signature2;
			intptr_t L_8 = AndroidJNISafe_GetMethodID_m6B9869E1214260D69C447059BFF94731B99F9FB9((intptr_t)L_5, L_6, L_7, /*hidden argument*/NULL);
			G_B4_0 = L_8;
		}

IL_001d:
		{
			V_0 = (intptr_t)G_B4_0;
			goto IL_0036;
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__exception_local = (Exception_t *)e.ex;
		if(il2cpp_codegen_class_is_assignable_from (Exception_t_il2cpp_TypeInfo_var, il2cpp_codegen_object_class(e.ex)))
			goto CATCH_0023;
		throw e;
	}

CATCH_0023:
	{ // begin catch(System.Exception)
		goto IL_002b;
	} // end catch (depth: 1)

IL_002b:
	{
		V_0 = (intptr_t)(0);
		goto IL_0036;
	}

IL_0036:
	{
		intptr_t L_9 = V_0;
		return (intptr_t)L_9;
	}
}
// System.IntPtr UnityEngine._AndroidJNIHelper::GetFieldID(System.IntPtr,System.String,System.String,System.Boolean)
extern "C" IL2CPP_METHOD_ATTR intptr_t _AndroidJNIHelper_GetFieldID_m5D7930D0929F1ACF9321E2F784D7D802638A8D47 (intptr_t ___jclass0, String_t* ___fieldName1, String_t* ___signature2, bool ___isStatic3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (_AndroidJNIHelper_GetFieldID_m5D7930D0929F1ACF9321E2F784D7D802638A8D47_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	intptr_t V_0;
	memset(&V_0, 0, sizeof(V_0));
	intptr_t V_1;
	memset(&V_1, 0, sizeof(V_1));
	Exception_t * V_2 = NULL;
	intptr_t V_3;
	memset(&V_3, 0, sizeof(V_3));
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 2);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);
	intptr_t G_B5_0;
	memset(&G_B5_0, 0, sizeof(G_B5_0));
	{
		V_0 = (intptr_t)(0);
	}

IL_0007:
	try
	{ // begin try (depth: 1)
		try
		{ // begin try (depth: 2)
			intptr_t L_0 = ___jclass0;
			String_t* L_1 = ___fieldName1;
			String_t* L_2 = ___signature2;
			bool L_3 = ___isStatic3;
			IL2CPP_RUNTIME_CLASS_INIT(AndroidReflection_t1E856C4DB3786B7F94F0488E69A752B752E4657D_il2cpp_TypeInfo_var);
			intptr_t L_4 = AndroidReflection_GetFieldMember_m742E4DB48ADEAC96028F344ABC153DD325EE3CA4((intptr_t)L_0, L_1, L_2, L_3, /*hidden argument*/NULL);
			V_0 = (intptr_t)L_4;
			intptr_t L_5 = V_0;
			intptr_t L_6 = AndroidJNISafe_FromReflectedField_m165BF99D5D87221CE0EBBEF70CE8D6D3302286B2((intptr_t)L_5, /*hidden argument*/NULL);
			V_1 = (intptr_t)L_6;
			IL2CPP_LEAVE(0x5E, FINALLY_0055);
		} // end try (depth: 2)
		catch(Il2CppExceptionWrapper& e)
		{
			__exception_local = (Exception_t *)e.ex;
			if(il2cpp_codegen_class_is_assignable_from (Exception_t_il2cpp_TypeInfo_var, il2cpp_codegen_object_class(e.ex)))
				goto CATCH_001e;
			throw e;
		}

CATCH_001e:
		{ // begin catch(System.Exception)
			{
				V_2 = ((Exception_t *)__exception_local);
				bool L_7 = ___isStatic3;
				if (!L_7)
				{
					goto IL_0033;
				}
			}

IL_0026:
			{
				intptr_t L_8 = ___jclass0;
				String_t* L_9 = ___fieldName1;
				String_t* L_10 = ___signature2;
				intptr_t L_11 = AndroidJNISafe_GetStaticFieldID_m91597A42136E25048DE3DD0A9E0514ACB2A38E5B((intptr_t)L_8, L_9, L_10, /*hidden argument*/NULL);
				G_B5_0 = L_11;
				goto IL_003b;
			}

IL_0033:
			{
				intptr_t L_12 = ___jclass0;
				String_t* L_13 = ___fieldName1;
				String_t* L_14 = ___signature2;
				intptr_t L_15 = AndroidJNISafe_GetFieldID_mAA1BB365E80C1A0871B93DF0379B145E78F239B1((intptr_t)L_12, L_13, L_14, /*hidden argument*/NULL);
				G_B5_0 = L_15;
			}

IL_003b:
			{
				V_3 = (intptr_t)G_B5_0;
				intptr_t L_16 = V_3;
				bool L_17 = IntPtr_op_Inequality_mB4886A806009EA825EFCC60CD2A7F6EB8E273A61((intptr_t)L_16, (intptr_t)(0), /*hidden argument*/NULL);
				if (!L_17)
				{
					goto IL_0053;
				}
			}

IL_004c:
			{
				intptr_t L_18 = V_3;
				V_1 = (intptr_t)L_18;
				IL2CPP_LEAVE(0x5E, FINALLY_0055);
			}

IL_0053:
			{
				Exception_t * L_19 = V_2;
				IL2CPP_RAISE_MANAGED_EXCEPTION(L_19, NULL, _AndroidJNIHelper_GetFieldID_m5D7930D0929F1ACF9321E2F784D7D802638A8D47_RuntimeMethod_var);
			}
		} // end catch (depth: 2)
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0055;
	}

FINALLY_0055:
	{ // begin finally (depth: 1)
		intptr_t L_20 = V_0;
		AndroidJNISafe_DeleteLocalRef_mD2022EBA880AA5732254B6A24F957FC4E8777920((intptr_t)L_20, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(85)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(85)
	{
		IL2CPP_JUMP_TBL(0x5E, IL_005e)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_005e:
	{
		intptr_t L_21 = V_1;
		return (intptr_t)L_21;
	}
}
// System.String UnityEngine._AndroidJNIHelper::GetSignature(System.Object)
extern "C" IL2CPP_METHOD_ATTR String_t* _AndroidJNIHelper_GetSignature_m43015E538F32185A250FC4D1732EEFC4740E3B0E (RuntimeObject * ___obj0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (_AndroidJNIHelper_GetSignature_m43015E538F32185A250FC4D1732EEFC4740E3B0E_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	Type_t * V_1 = NULL;
	AndroidJavaObject_t5B3829FB6E1DBC020F5BA17846F1351EAA982F8E * V_2 = NULL;
	AndroidJavaObject_t5B3829FB6E1DBC020F5BA17846F1351EAA982F8E * V_3 = NULL;
	AndroidJavaObject_t5B3829FB6E1DBC020F5BA17846F1351EAA982F8E * V_4 = NULL;
	StringBuilder_t * V_5 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 1);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);
	Type_t * G_B5_0 = NULL;
	int32_t G_B45_0 = 0;
	ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* G_B45_1 = NULL;
	ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* G_B45_2 = NULL;
	int32_t G_B44_0 = 0;
	ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* G_B44_1 = NULL;
	ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* G_B44_2 = NULL;
	String_t* G_B46_0 = NULL;
	int32_t G_B46_1 = 0;
	ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* G_B46_2 = NULL;
	ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* G_B46_3 = NULL;
	{
		RuntimeObject * L_0 = ___obj0;
		if (L_0)
		{
			goto IL_0012;
		}
	}
	{
		V_0 = _stringLiteralF75D848FCD77B877799E37401451606B0778E2C5;
		goto IL_031b;
	}

IL_0012:
	{
		RuntimeObject * L_1 = ___obj0;
		if (!((Type_t *)IsInstClass((RuntimeObject*)L_1, Type_t_il2cpp_TypeInfo_var)))
		{
			goto IL_0028;
		}
	}
	{
		RuntimeObject * L_2 = ___obj0;
		G_B5_0 = ((Type_t *)CastclassClass((RuntimeObject*)L_2, Type_t_il2cpp_TypeInfo_var));
		goto IL_002e;
	}

IL_0028:
	{
		RuntimeObject * L_3 = ___obj0;
		NullCheck(L_3);
		Type_t * L_4 = Object_GetType_m2E0B62414ECCAA3094B703790CE88CBB2F83EA60(L_3, /*hidden argument*/NULL);
		G_B5_0 = L_4;
	}

IL_002e:
	{
		V_1 = G_B5_0;
		Type_t * L_5 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(AndroidReflection_t1E856C4DB3786B7F94F0488E69A752B752E4657D_il2cpp_TypeInfo_var);
		bool L_6 = AndroidReflection_IsPrimitive_m3279141318F8962AFDEC3DFDFE976F8F58BE7B46(L_5, /*hidden argument*/NULL);
		if (!L_6)
		{
			goto IL_0141;
		}
	}
	{
		Type_t * L_7 = V_1;
		RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D  L_8 = { reinterpret_cast<intptr_t> (Int32_t585191389E07734F19F3156FF88FB3EF4800D102_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_9 = Type_GetTypeFromHandle_m9DC58ADF0512987012A8A016FB64B068F3B1AFF6(L_8, /*hidden argument*/NULL);
		NullCheck(L_7);
		bool L_10 = VirtFuncInvoker1< bool, Type_t * >::Invoke(108 /* System.Boolean System.Type::Equals(System.Type) */, L_7, L_9);
		if (!L_10)
		{
			goto IL_005b;
		}
	}
	{
		V_0 = _stringLiteralCA73AB65568CD125C2D27A22BBD9E863C10B675D;
		goto IL_031b;
	}

IL_005b:
	{
		Type_t * L_11 = V_1;
		RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D  L_12 = { reinterpret_cast<intptr_t> (Boolean_tB53F6830F670160873277339AA58F15CAED4399C_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_13 = Type_GetTypeFromHandle_m9DC58ADF0512987012A8A016FB64B068F3B1AFF6(L_12, /*hidden argument*/NULL);
		NullCheck(L_11);
		bool L_14 = VirtFuncInvoker1< bool, Type_t * >::Invoke(108 /* System.Boolean System.Type::Equals(System.Type) */, L_11, L_13);
		if (!L_14)
		{
			goto IL_007b;
		}
	}
	{
		V_0 = _stringLiteral909F99A779ADB66A76FC53AB56C7DD1CAF35D0FD;
		goto IL_031b;
	}

IL_007b:
	{
		Type_t * L_15 = V_1;
		RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D  L_16 = { reinterpret_cast<intptr_t> (Byte_tF87C579059BD4633E6840EBBBEEF899C6E33EF07_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_17 = Type_GetTypeFromHandle_m9DC58ADF0512987012A8A016FB64B068F3B1AFF6(L_16, /*hidden argument*/NULL);
		NullCheck(L_15);
		bool L_18 = VirtFuncInvoker1< bool, Type_t * >::Invoke(108 /* System.Boolean System.Type::Equals(System.Type) */, L_15, L_17);
		if (!L_18)
		{
			goto IL_009b;
		}
	}
	{
		V_0 = _stringLiteralAE4F281DF5A5D0FF3CAD6371F76D5C29B6D953EC;
		goto IL_031b;
	}

IL_009b:
	{
		Type_t * L_19 = V_1;
		RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D  L_20 = { reinterpret_cast<intptr_t> (Int16_t823A20635DAF5A3D93A1E01CFBF3CBA27CF00B4D_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_21 = Type_GetTypeFromHandle_m9DC58ADF0512987012A8A016FB64B068F3B1AFF6(L_20, /*hidden argument*/NULL);
		NullCheck(L_19);
		bool L_22 = VirtFuncInvoker1< bool, Type_t * >::Invoke(108 /* System.Boolean System.Type::Equals(System.Type) */, L_19, L_21);
		if (!L_22)
		{
			goto IL_00bb;
		}
	}
	{
		V_0 = _stringLiteral02AA629C8B16CD17A44F3A0EFEC2FEED43937642;
		goto IL_031b;
	}

IL_00bb:
	{
		Type_t * L_23 = V_1;
		RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D  L_24 = { reinterpret_cast<intptr_t> (Int64_t7A386C2FF7B0280A0F516992401DDFCF0FF7B436_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_25 = Type_GetTypeFromHandle_m9DC58ADF0512987012A8A016FB64B068F3B1AFF6(L_24, /*hidden argument*/NULL);
		NullCheck(L_23);
		bool L_26 = VirtFuncInvoker1< bool, Type_t * >::Invoke(108 /* System.Boolean System.Type::Equals(System.Type) */, L_23, L_25);
		if (!L_26)
		{
			goto IL_00db;
		}
	}
	{
		V_0 = _stringLiteral58668E7669FD564D99DB5D581FCDB6A5618440B5;
		goto IL_031b;
	}

IL_00db:
	{
		Type_t * L_27 = V_1;
		RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D  L_28 = { reinterpret_cast<intptr_t> (Single_tDDDA9169C4E4E308AC6D7A824F9B28DC82204AE1_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_29 = Type_GetTypeFromHandle_m9DC58ADF0512987012A8A016FB64B068F3B1AFF6(L_28, /*hidden argument*/NULL);
		NullCheck(L_27);
		bool L_30 = VirtFuncInvoker1< bool, Type_t * >::Invoke(108 /* System.Boolean System.Type::Equals(System.Type) */, L_27, L_29);
		if (!L_30)
		{
			goto IL_00fb;
		}
	}
	{
		V_0 = _stringLiteralE69F20E9F683920D3FB4329ABD951E878B1F9372;
		goto IL_031b;
	}

IL_00fb:
	{
		Type_t * L_31 = V_1;
		RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D  L_32 = { reinterpret_cast<intptr_t> (Double_t358B8F23BDC52A5DD700E727E204F9F7CDE12409_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_33 = Type_GetTypeFromHandle_m9DC58ADF0512987012A8A016FB64B068F3B1AFF6(L_32, /*hidden argument*/NULL);
		NullCheck(L_31);
		bool L_34 = VirtFuncInvoker1< bool, Type_t * >::Invoke(108 /* System.Boolean System.Type::Equals(System.Type) */, L_31, L_33);
		if (!L_34)
		{
			goto IL_011b;
		}
	}
	{
		V_0 = _stringLiteral50C9E8D5FC98727B4BBC93CF5D64A68DB647F04F;
		goto IL_031b;
	}

IL_011b:
	{
		Type_t * L_35 = V_1;
		RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D  L_36 = { reinterpret_cast<intptr_t> (Char_tBF22D9FC341BE970735250BB6FF1A4A92BBA58B9_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_37 = Type_GetTypeFromHandle_m9DC58ADF0512987012A8A016FB64B068F3B1AFF6(L_36, /*hidden argument*/NULL);
		NullCheck(L_35);
		bool L_38 = VirtFuncInvoker1< bool, Type_t * >::Invoke(108 /* System.Boolean System.Type::Equals(System.Type) */, L_35, L_37);
		if (!L_38)
		{
			goto IL_013b;
		}
	}
	{
		V_0 = _stringLiteral32096C2E0EFF33D844EE6D675407ACE18289357D;
		goto IL_031b;
	}

IL_013b:
	{
		goto IL_0310;
	}

IL_0141:
	{
		Type_t * L_39 = V_1;
		RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D  L_40 = { reinterpret_cast<intptr_t> (String_t_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_41 = Type_GetTypeFromHandle_m9DC58ADF0512987012A8A016FB64B068F3B1AFF6(L_40, /*hidden argument*/NULL);
		NullCheck(L_39);
		bool L_42 = VirtFuncInvoker1< bool, Type_t * >::Invoke(108 /* System.Boolean System.Type::Equals(System.Type) */, L_39, L_41);
		if (!L_42)
		{
			goto IL_0162;
		}
	}
	{
		V_0 = _stringLiteral84B35CD832E694499CB991F7B38517E07CFC129A;
		goto IL_031b;
	}

IL_0162:
	{
		RuntimeObject * L_43 = ___obj0;
		if (!((AndroidJavaProxy_tBF3E21C3639CF1A14BDC9173530DC13D45540795 *)IsInstClass((RuntimeObject*)L_43, AndroidJavaProxy_tBF3E21C3639CF1A14BDC9173530DC13D45540795_il2cpp_TypeInfo_var)))
		{
			goto IL_01aa;
		}
	}
	{
		RuntimeObject * L_44 = ___obj0;
		NullCheck(((AndroidJavaProxy_tBF3E21C3639CF1A14BDC9173530DC13D45540795 *)CastclassClass((RuntimeObject*)L_44, AndroidJavaProxy_tBF3E21C3639CF1A14BDC9173530DC13D45540795_il2cpp_TypeInfo_var)));
		AndroidJavaClass_tFC9C1064BF4849691FEDC988743C0C271C62FDC8 * L_45 = ((AndroidJavaProxy_tBF3E21C3639CF1A14BDC9173530DC13D45540795 *)CastclassClass((RuntimeObject*)L_44, AndroidJavaProxy_tBF3E21C3639CF1A14BDC9173530DC13D45540795_il2cpp_TypeInfo_var))->get_javaInterface_0();
		NullCheck(L_45);
		intptr_t L_46 = AndroidJavaObject_GetRawClass_mAE1E312709F872345EDD1B78D8A5F60C39D13E3C(L_45, /*hidden argument*/NULL);
		AndroidJavaObject_t5B3829FB6E1DBC020F5BA17846F1351EAA982F8E * L_47 = (AndroidJavaObject_t5B3829FB6E1DBC020F5BA17846F1351EAA982F8E *)il2cpp_codegen_object_new(AndroidJavaObject_t5B3829FB6E1DBC020F5BA17846F1351EAA982F8E_il2cpp_TypeInfo_var);
		AndroidJavaObject__ctor_m21F177968E41241DE11225151F314CA4EBA5B559(L_47, (intptr_t)L_46, /*hidden argument*/NULL);
		V_2 = L_47;
		AndroidJavaObject_t5B3829FB6E1DBC020F5BA17846F1351EAA982F8E * L_48 = V_2;
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_49 = (ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)SZArrayNew(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A_il2cpp_TypeInfo_var, (uint32_t)0);
		NullCheck(L_48);
		String_t* L_50 = AndroidJavaObject_Call_TisString_t_m9AB7F83596130620DAA3338C360A4F140A5BD0EA(L_48, _stringLiteralFA98C1FD2CA6FC89B5ED010FD16AA461F50AFB3E, L_49, /*hidden argument*/AndroidJavaObject_Call_TisString_t_m9AB7F83596130620DAA3338C360A4F140A5BD0EA_RuntimeMethod_var);
		String_t* L_51 = String_Concat_mF4626905368D6558695A823466A1AF65EADB9923(_stringLiteralD160E0986ACA4714714A16F29EC605AF90BE704D, L_50, _stringLiteral2D14AB97CC3DC294C51C0D6814F4EA45F4B4E312, /*hidden argument*/NULL);
		V_0 = L_51;
		goto IL_031b;
	}

IL_01aa:
	{
		Type_t * L_52 = V_1;
		RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D  L_53 = { reinterpret_cast<intptr_t> (AndroidJavaRunnable_tBE7371D29A525C4F51DC1CBEBA5E193644F6AFE1_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_54 = Type_GetTypeFromHandle_m9DC58ADF0512987012A8A016FB64B068F3B1AFF6(L_53, /*hidden argument*/NULL);
		NullCheck(L_52);
		bool L_55 = VirtFuncInvoker1< bool, Type_t * >::Invoke(108 /* System.Boolean System.Type::Equals(System.Type) */, L_52, L_54);
		if (!L_55)
		{
			goto IL_01cb;
		}
	}
	{
		V_0 = _stringLiteralE46270F492F404A1D912A23E4DE44F3C7840F993;
		goto IL_031b;
	}

IL_01cb:
	{
		Type_t * L_56 = V_1;
		RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D  L_57 = { reinterpret_cast<intptr_t> (AndroidJavaClass_tFC9C1064BF4849691FEDC988743C0C271C62FDC8_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_58 = Type_GetTypeFromHandle_m9DC58ADF0512987012A8A016FB64B068F3B1AFF6(L_57, /*hidden argument*/NULL);
		NullCheck(L_56);
		bool L_59 = VirtFuncInvoker1< bool, Type_t * >::Invoke(108 /* System.Boolean System.Type::Equals(System.Type) */, L_56, L_58);
		if (!L_59)
		{
			goto IL_01ec;
		}
	}
	{
		V_0 = _stringLiteralB402D9DB865836815F1609AD99C0C12FA3DD8026;
		goto IL_031b;
	}

IL_01ec:
	{
		Type_t * L_60 = V_1;
		RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D  L_61 = { reinterpret_cast<intptr_t> (AndroidJavaObject_t5B3829FB6E1DBC020F5BA17846F1351EAA982F8E_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_62 = Type_GetTypeFromHandle_m9DC58ADF0512987012A8A016FB64B068F3B1AFF6(L_61, /*hidden argument*/NULL);
		NullCheck(L_60);
		bool L_63 = VirtFuncInvoker1< bool, Type_t * >::Invoke(108 /* System.Boolean System.Type::Equals(System.Type) */, L_60, L_62);
		if (!L_63)
		{
			goto IL_0266;
		}
	}
	{
		RuntimeObject * L_64 = ___obj0;
		Type_t * L_65 = V_1;
		if ((!(((RuntimeObject*)(RuntimeObject *)L_64) == ((RuntimeObject*)(Type_t *)L_65))))
		{
			goto IL_0215;
		}
	}
	{
		V_0 = _stringLiteralF75D848FCD77B877799E37401451606B0778E2C5;
		goto IL_031b;
	}

IL_0215:
	{
		RuntimeObject * L_66 = ___obj0;
		V_3 = ((AndroidJavaObject_t5B3829FB6E1DBC020F5BA17846F1351EAA982F8E *)CastclassClass((RuntimeObject*)L_66, AndroidJavaObject_t5B3829FB6E1DBC020F5BA17846F1351EAA982F8E_il2cpp_TypeInfo_var));
		AndroidJavaObject_t5B3829FB6E1DBC020F5BA17846F1351EAA982F8E * L_67 = V_3;
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_68 = (ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)SZArrayNew(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A_il2cpp_TypeInfo_var, (uint32_t)0);
		NullCheck(L_67);
		AndroidJavaObject_t5B3829FB6E1DBC020F5BA17846F1351EAA982F8E * L_69 = AndroidJavaObject_Call_TisAndroidJavaObject_t5B3829FB6E1DBC020F5BA17846F1351EAA982F8E_m050B0EBEF6F796C3B3C8D55D9620055A6F07B77A(L_67, _stringLiteral4F05CBFCA4DFE76B99B142F609CDCF00D44FA247, L_68, /*hidden argument*/AndroidJavaObject_Call_TisAndroidJavaObject_t5B3829FB6E1DBC020F5BA17846F1351EAA982F8E_m050B0EBEF6F796C3B3C8D55D9620055A6F07B77A_RuntimeMethod_var);
		V_4 = L_69;
	}

IL_022f:
	try
	{ // begin try (depth: 1)
		AndroidJavaObject_t5B3829FB6E1DBC020F5BA17846F1351EAA982F8E * L_70 = V_4;
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_71 = (ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)SZArrayNew(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A_il2cpp_TypeInfo_var, (uint32_t)0);
		NullCheck(L_70);
		String_t* L_72 = AndroidJavaObject_Call_TisString_t_m9AB7F83596130620DAA3338C360A4F140A5BD0EA(L_70, _stringLiteralFA98C1FD2CA6FC89B5ED010FD16AA461F50AFB3E, L_71, /*hidden argument*/AndroidJavaObject_Call_TisString_t_m9AB7F83596130620DAA3338C360A4F140A5BD0EA_RuntimeMethod_var);
		String_t* L_73 = String_Concat_mF4626905368D6558695A823466A1AF65EADB9923(_stringLiteralD160E0986ACA4714714A16F29EC605AF90BE704D, L_72, _stringLiteral2D14AB97CC3DC294C51C0D6814F4EA45F4B4E312, /*hidden argument*/NULL);
		V_0 = L_73;
		IL2CPP_LEAVE(0x31B, FINALLY_0257);
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0257;
	}

FINALLY_0257:
	{ // begin finally (depth: 1)
		{
			AndroidJavaObject_t5B3829FB6E1DBC020F5BA17846F1351EAA982F8E * L_74 = V_4;
			if (!L_74)
			{
				goto IL_0265;
			}
		}

IL_025e:
		{
			AndroidJavaObject_t5B3829FB6E1DBC020F5BA17846F1351EAA982F8E * L_75 = V_4;
			NullCheck(L_75);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t7218B22548186B208D65EA5B7870503810A2D15A_il2cpp_TypeInfo_var, L_75);
		}

IL_0265:
		{
			IL2CPP_END_FINALLY(599)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(599)
	{
		IL2CPP_JUMP_TBL(0x31B, IL_031b)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_0266:
	{
		RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D  L_76 = { reinterpret_cast<intptr_t> (RuntimeArray_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_77 = Type_GetTypeFromHandle_m9DC58ADF0512987012A8A016FB64B068F3B1AFF6(L_76, /*hidden argument*/NULL);
		Type_t * L_78 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(AndroidReflection_t1E856C4DB3786B7F94F0488E69A752B752E4657D_il2cpp_TypeInfo_var);
		bool L_79 = AndroidReflection_IsAssignableFrom_m2E1093337DCA3E0EA0B2AD80F554339F8FFC3221(L_77, L_78, /*hidden argument*/NULL);
		if (!L_79)
		{
			goto IL_02c5;
		}
	}
	{
		Type_t * L_80 = V_1;
		NullCheck(L_80);
		int32_t L_81 = VirtFuncInvoker0< int32_t >::Invoke(27 /* System.Int32 System.Type::GetArrayRank() */, L_80);
		if ((((int32_t)L_81) == ((int32_t)1)))
		{
			goto IL_0294;
		}
	}
	{
		Exception_t * L_82 = (Exception_t *)il2cpp_codegen_object_new(Exception_t_il2cpp_TypeInfo_var);
		Exception__ctor_m89BADFF36C3B170013878726E07729D51AA9FBE0(L_82, _stringLiteralFB0418121C28FD390FBFDEEBF12570C86FC00B32, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_82, NULL, _AndroidJNIHelper_GetSignature_m43015E538F32185A250FC4D1732EEFC4740E3B0E_RuntimeMethod_var);
	}

IL_0294:
	{
		StringBuilder_t * L_83 = (StringBuilder_t *)il2cpp_codegen_object_new(StringBuilder_t_il2cpp_TypeInfo_var);
		StringBuilder__ctor_mF928376F82E8C8FF3C11842C562DB8CF28B2735E(L_83, /*hidden argument*/NULL);
		V_5 = L_83;
		StringBuilder_t * L_84 = V_5;
		NullCheck(L_84);
		StringBuilder_Append_m05C12F58ADC2D807613A9301DF438CB3CD09B75A(L_84, ((int32_t)91), /*hidden argument*/NULL);
		StringBuilder_t * L_85 = V_5;
		Type_t * L_86 = V_1;
		NullCheck(L_86);
		Type_t * L_87 = VirtFuncInvoker0< Type_t * >::Invoke(94 /* System.Type System.Type::GetElementType() */, L_86);
		String_t* L_88 = _AndroidJNIHelper_GetSignature_m43015E538F32185A250FC4D1732EEFC4740E3B0E(L_87, /*hidden argument*/NULL);
		NullCheck(L_85);
		StringBuilder_Append_mDBB8CCBB7750C67BE2F2D92F47E6C0FA42793260(L_85, L_88, /*hidden argument*/NULL);
		StringBuilder_t * L_89 = V_5;
		NullCheck(L_89);
		String_t* L_90 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_89);
		V_0 = L_90;
		goto IL_031b;
	}

IL_02c5:
	{
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_91 = (ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)SZArrayNew(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A_il2cpp_TypeInfo_var, (uint32_t)6);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_92 = L_91;
		NullCheck(L_92);
		ArrayElementTypeCheck (L_92, _stringLiteralD98507F786B7E8AA37C8E9EE1D0452E55E21A08D);
		(L_92)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)_stringLiteralD98507F786B7E8AA37C8E9EE1D0452E55E21A08D);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_93 = L_92;
		Type_t * L_94 = V_1;
		NullCheck(L_93);
		ArrayElementTypeCheck (L_93, L_94);
		(L_93)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject *)L_94);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_95 = L_93;
		NullCheck(L_95);
		ArrayElementTypeCheck (L_95, _stringLiteral8777D1BEFDBAE64EDD9D49FE596B0CC904692081);
		(L_95)->SetAt(static_cast<il2cpp_array_size_t>(2), (RuntimeObject *)_stringLiteral8777D1BEFDBAE64EDD9D49FE596B0CC904692081);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_96 = L_95;
		RuntimeObject * L_97 = ___obj0;
		NullCheck(L_96);
		ArrayElementTypeCheck (L_96, L_97);
		(L_96)->SetAt(static_cast<il2cpp_array_size_t>(3), (RuntimeObject *)L_97);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_98 = L_96;
		NullCheck(L_98);
		ArrayElementTypeCheck (L_98, _stringLiteral3E2B500817A96FA5BAECB12EAFF42205003D74E6);
		(L_98)->SetAt(static_cast<il2cpp_array_size_t>(4), (RuntimeObject *)_stringLiteral3E2B500817A96FA5BAECB12EAFF42205003D74E6);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_99 = L_98;
		Type_t * L_100 = V_1;
		RuntimeObject * L_101 = ___obj0;
		G_B44_0 = 5;
		G_B44_1 = L_99;
		G_B44_2 = L_99;
		if ((!(((RuntimeObject*)(Type_t *)L_100) == ((RuntimeObject*)(RuntimeObject *)L_101))))
		{
			G_B45_0 = 5;
			G_B45_1 = L_99;
			G_B45_2 = L_99;
			goto IL_02ff;
		}
	}
	{
		G_B46_0 = _stringLiteralF57B2D312D9EFE8FE993C8EB1F3E19D41AD04030;
		G_B46_1 = G_B44_0;
		G_B46_2 = G_B44_1;
		G_B46_3 = G_B44_2;
		goto IL_0304;
	}

IL_02ff:
	{
		G_B46_0 = _stringLiteralC3BEC6BCBC9B9F04E60FCB1D9C9C1A37F3E12E93;
		G_B46_1 = G_B45_0;
		G_B46_2 = G_B45_1;
		G_B46_3 = G_B45_2;
	}

IL_0304:
	{
		NullCheck(G_B46_2);
		ArrayElementTypeCheck (G_B46_2, G_B46_0);
		(G_B46_2)->SetAt(static_cast<il2cpp_array_size_t>(G_B46_1), (RuntimeObject *)G_B46_0);
		String_t* L_102 = String_Concat_mB7BA84F13912303B2E5E40FBF0109E1A328ACA07(G_B46_3, /*hidden argument*/NULL);
		Exception_t * L_103 = (Exception_t *)il2cpp_codegen_object_new(Exception_t_il2cpp_TypeInfo_var);
		Exception__ctor_m89BADFF36C3B170013878726E07729D51AA9FBE0(L_103, L_102, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_103, NULL, _AndroidJNIHelper_GetSignature_m43015E538F32185A250FC4D1732EEFC4740E3B0E_RuntimeMethod_var);
	}

IL_0310:
	{
		V_0 = _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
		goto IL_031b;
	}

IL_031b:
	{
		String_t* L_104 = V_0;
		return L_104;
	}
}
// System.String UnityEngine._AndroidJNIHelper::GetSignature(System.Object[])
extern "C" IL2CPP_METHOD_ATTR String_t* _AndroidJNIHelper_GetSignature_m074EF61F920B7E1BCB9582E78CA6A49FD1EE1162 (ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* ___args0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (_AndroidJNIHelper_GetSignature_m074EF61F920B7E1BCB9582E78CA6A49FD1EE1162_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	StringBuilder_t * V_0 = NULL;
	RuntimeObject * V_1 = NULL;
	ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* V_2 = NULL;
	int32_t V_3 = 0;
	String_t* V_4 = NULL;
	{
		StringBuilder_t * L_0 = (StringBuilder_t *)il2cpp_codegen_object_new(StringBuilder_t_il2cpp_TypeInfo_var);
		StringBuilder__ctor_mF928376F82E8C8FF3C11842C562DB8CF28B2735E(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		StringBuilder_t * L_1 = V_0;
		NullCheck(L_1);
		StringBuilder_Append_m05C12F58ADC2D807613A9301DF438CB3CD09B75A(L_1, ((int32_t)40), /*hidden argument*/NULL);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_2 = ___args0;
		V_2 = L_2;
		V_3 = 0;
		goto IL_0031;
	}

IL_001a:
	{
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_3 = V_2;
		int32_t L_4 = V_3;
		NullCheck(L_3);
		int32_t L_5 = L_4;
		RuntimeObject * L_6 = (L_3)->GetAt(static_cast<il2cpp_array_size_t>(L_5));
		V_1 = L_6;
		StringBuilder_t * L_7 = V_0;
		RuntimeObject * L_8 = V_1;
		String_t* L_9 = _AndroidJNIHelper_GetSignature_m43015E538F32185A250FC4D1732EEFC4740E3B0E(L_8, /*hidden argument*/NULL);
		NullCheck(L_7);
		StringBuilder_Append_mDBB8CCBB7750C67BE2F2D92F47E6C0FA42793260(L_7, L_9, /*hidden argument*/NULL);
		int32_t L_10 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add((int32_t)L_10, (int32_t)1));
	}

IL_0031:
	{
		int32_t L_11 = V_3;
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_12 = V_2;
		NullCheck(L_12);
		if ((((int32_t)L_11) < ((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_12)->max_length)))))))
		{
			goto IL_001a;
		}
	}
	{
		StringBuilder_t * L_13 = V_0;
		NullCheck(L_13);
		StringBuilder_Append_mDBB8CCBB7750C67BE2F2D92F47E6C0FA42793260(L_13, _stringLiteral327C3BC0993A6F3EF91265DAF24D8D1A4076818E, /*hidden argument*/NULL);
		StringBuilder_t * L_14 = V_0;
		NullCheck(L_14);
		String_t* L_15 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_14);
		V_4 = L_15;
		goto IL_0053;
	}

IL_0053:
	{
		String_t* L_16 = V_4;
		return L_16;
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
// Conversion methods for marshalling of: UnityEngine.jvalue
extern "C" void jvalue_t24EA0689FB5BAE2B3560EE6A1814A16693F6BFF1_marshal_pinvoke(const jvalue_t24EA0689FB5BAE2B3560EE6A1814A16693F6BFF1& unmarshaled, jvalue_t24EA0689FB5BAE2B3560EE6A1814A16693F6BFF1_marshaled_pinvoke& marshaled)
{
	marshaled.___z_0 = static_cast<int32_t>(unmarshaled.get_z_0());
	marshaled.___b_1 = unmarshaled.get_b_1();
	marshaled.___c_2 = static_cast<uint8_t>(unmarshaled.get_c_2());
	marshaled.___s_3 = unmarshaled.get_s_3();
	marshaled.___i_4 = unmarshaled.get_i_4();
	marshaled.___j_5 = unmarshaled.get_j_5();
	marshaled.___f_6 = unmarshaled.get_f_6();
	marshaled.___d_7 = unmarshaled.get_d_7();
	marshaled.___l_8 = unmarshaled.get_l_8();
}
extern "C" void jvalue_t24EA0689FB5BAE2B3560EE6A1814A16693F6BFF1_marshal_pinvoke_back(const jvalue_t24EA0689FB5BAE2B3560EE6A1814A16693F6BFF1_marshaled_pinvoke& marshaled, jvalue_t24EA0689FB5BAE2B3560EE6A1814A16693F6BFF1& unmarshaled)
{
	bool unmarshaled_z_temp_0 = false;
	unmarshaled_z_temp_0 = static_cast<bool>(marshaled.___z_0);
	unmarshaled.set_z_0(unmarshaled_z_temp_0);
	uint8_t unmarshaled_b_temp_1 = 0x0;
	unmarshaled_b_temp_1 = marshaled.___b_1;
	unmarshaled.set_b_1(unmarshaled_b_temp_1);
	Il2CppChar unmarshaled_c_temp_2 = 0x0;
	unmarshaled_c_temp_2 = static_cast<Il2CppChar>(marshaled.___c_2);
	unmarshaled.set_c_2(unmarshaled_c_temp_2);
	int16_t unmarshaled_s_temp_3 = 0;
	unmarshaled_s_temp_3 = marshaled.___s_3;
	unmarshaled.set_s_3(unmarshaled_s_temp_3);
	int32_t unmarshaled_i_temp_4 = 0;
	unmarshaled_i_temp_4 = marshaled.___i_4;
	unmarshaled.set_i_4(unmarshaled_i_temp_4);
	int64_t unmarshaled_j_temp_5 = 0;
	unmarshaled_j_temp_5 = marshaled.___j_5;
	unmarshaled.set_j_5(unmarshaled_j_temp_5);
	float unmarshaled_f_temp_6 = 0.0f;
	unmarshaled_f_temp_6 = marshaled.___f_6;
	unmarshaled.set_f_6(unmarshaled_f_temp_6);
	double unmarshaled_d_temp_7 = 0.0;
	unmarshaled_d_temp_7 = marshaled.___d_7;
	unmarshaled.set_d_7(unmarshaled_d_temp_7);
	intptr_t unmarshaled_l_temp_8;
	memset(&unmarshaled_l_temp_8, 0, sizeof(unmarshaled_l_temp_8));
	unmarshaled_l_temp_8 = marshaled.___l_8;
	unmarshaled.set_l_8(unmarshaled_l_temp_8);
}
// Conversion method for clean up from marshalling of: UnityEngine.jvalue
extern "C" void jvalue_t24EA0689FB5BAE2B3560EE6A1814A16693F6BFF1_marshal_pinvoke_cleanup(jvalue_t24EA0689FB5BAE2B3560EE6A1814A16693F6BFF1_marshaled_pinvoke& marshaled)
{
}
// Conversion methods for marshalling of: UnityEngine.jvalue
extern "C" void jvalue_t24EA0689FB5BAE2B3560EE6A1814A16693F6BFF1_marshal_com(const jvalue_t24EA0689FB5BAE2B3560EE6A1814A16693F6BFF1& unmarshaled, jvalue_t24EA0689FB5BAE2B3560EE6A1814A16693F6BFF1_marshaled_com& marshaled)
{
	marshaled.___z_0 = static_cast<int32_t>(unmarshaled.get_z_0());
	marshaled.___b_1 = unmarshaled.get_b_1();
	marshaled.___c_2 = static_cast<uint8_t>(unmarshaled.get_c_2());
	marshaled.___s_3 = unmarshaled.get_s_3();
	marshaled.___i_4 = unmarshaled.get_i_4();
	marshaled.___j_5 = unmarshaled.get_j_5();
	marshaled.___f_6 = unmarshaled.get_f_6();
	marshaled.___d_7 = unmarshaled.get_d_7();
	marshaled.___l_8 = unmarshaled.get_l_8();
}
extern "C" void jvalue_t24EA0689FB5BAE2B3560EE6A1814A16693F6BFF1_marshal_com_back(const jvalue_t24EA0689FB5BAE2B3560EE6A1814A16693F6BFF1_marshaled_com& marshaled, jvalue_t24EA0689FB5BAE2B3560EE6A1814A16693F6BFF1& unmarshaled)
{
	bool unmarshaled_z_temp_0 = false;
	unmarshaled_z_temp_0 = static_cast<bool>(marshaled.___z_0);
	unmarshaled.set_z_0(unmarshaled_z_temp_0);
	uint8_t unmarshaled_b_temp_1 = 0x0;
	unmarshaled_b_temp_1 = marshaled.___b_1;
	unmarshaled.set_b_1(unmarshaled_b_temp_1);
	Il2CppChar unmarshaled_c_temp_2 = 0x0;
	unmarshaled_c_temp_2 = static_cast<Il2CppChar>(marshaled.___c_2);
	unmarshaled.set_c_2(unmarshaled_c_temp_2);
	int16_t unmarshaled_s_temp_3 = 0;
	unmarshaled_s_temp_3 = marshaled.___s_3;
	unmarshaled.set_s_3(unmarshaled_s_temp_3);
	int32_t unmarshaled_i_temp_4 = 0;
	unmarshaled_i_temp_4 = marshaled.___i_4;
	unmarshaled.set_i_4(unmarshaled_i_temp_4);
	int64_t unmarshaled_j_temp_5 = 0;
	unmarshaled_j_temp_5 = marshaled.___j_5;
	unmarshaled.set_j_5(unmarshaled_j_temp_5);
	float unmarshaled_f_temp_6 = 0.0f;
	unmarshaled_f_temp_6 = marshaled.___f_6;
	unmarshaled.set_f_6(unmarshaled_f_temp_6);
	double unmarshaled_d_temp_7 = 0.0;
	unmarshaled_d_temp_7 = marshaled.___d_7;
	unmarshaled.set_d_7(unmarshaled_d_temp_7);
	intptr_t unmarshaled_l_temp_8;
	memset(&unmarshaled_l_temp_8, 0, sizeof(unmarshaled_l_temp_8));
	unmarshaled_l_temp_8 = marshaled.___l_8;
	unmarshaled.set_l_8(unmarshaled_l_temp_8);
}
// Conversion method for clean up from marshalling of: UnityEngine.jvalue
extern "C" void jvalue_t24EA0689FB5BAE2B3560EE6A1814A16693F6BFF1_marshal_com_cleanup(jvalue_t24EA0689FB5BAE2B3560EE6A1814A16693F6BFF1_marshaled_com& marshaled)
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
// System.Void UnityEngineInternal.GenericStack::.ctor()
extern "C" IL2CPP_METHOD_ATTR void GenericStack__ctor_m0659B84DB6B093AF1F01F566686C510DDEEAE848 (GenericStack_tC59D21E8DBC50F3C608479C942200AC44CA2D5BC * __this, const RuntimeMethod* method)
{
	{
		Stack__ctor_m98F99FFBF373762F139506711349267D5354FE08(__this, /*hidden argument*/NULL);
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
// System.Void UnityEngineInternal.MathfInternal::.cctor()
extern "C" IL2CPP_METHOD_ATTR void MathfInternal__cctor_m885D4921B8E928763E7ABB4466659665780F860F (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MathfInternal__cctor_m885D4921B8E928763E7ABB4466659665780F860F_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_memory_barrier();
		((MathfInternal_t3E913BDEA2E88DF117AEBE6A099B5922A78A1693_StaticFields*)il2cpp_codegen_static_fields_for(MathfInternal_t3E913BDEA2E88DF117AEBE6A099B5922A78A1693_il2cpp_TypeInfo_var))->set_FloatMinNormal_0((1.17549435E-38f));
		il2cpp_codegen_memory_barrier();
		((MathfInternal_t3E913BDEA2E88DF117AEBE6A099B5922A78A1693_StaticFields*)il2cpp_codegen_static_fields_for(MathfInternal_t3E913BDEA2E88DF117AEBE6A099B5922A78A1693_il2cpp_TypeInfo_var))->set_FloatMinDenormal_1((1.401298E-45f));
		float L_0 = ((MathfInternal_t3E913BDEA2E88DF117AEBE6A099B5922A78A1693_StaticFields*)il2cpp_codegen_static_fields_for(MathfInternal_t3E913BDEA2E88DF117AEBE6A099B5922A78A1693_il2cpp_TypeInfo_var))->get_FloatMinDenormal_1();
		il2cpp_codegen_memory_barrier();
		float L_1 = Interlocked_CompareExchange_m2C6E1F976D009AB3858428E90B8F99F98F08155D((float*)(((MathfInternal_t3E913BDEA2E88DF117AEBE6A099B5922A78A1693_StaticFields*)il2cpp_codegen_static_fields_for(MathfInternal_t3E913BDEA2E88DF117AEBE6A099B5922A78A1693_il2cpp_TypeInfo_var))->get_address_of_FloatMinDenormal_1()), L_0, (0.0f), /*hidden argument*/NULL);
		((MathfInternal_t3E913BDEA2E88DF117AEBE6A099B5922A78A1693_StaticFields*)il2cpp_codegen_static_fields_for(MathfInternal_t3E913BDEA2E88DF117AEBE6A099B5922A78A1693_il2cpp_TypeInfo_var))->set_IsFlushToZeroEnabled_2((bool)((((float)L_1) == ((float)(0.0f)))? 1 : 0));
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
// System.Delegate UnityEngineInternal.NetFxCoreExtensions::CreateDelegate(System.Reflection.MethodInfo,System.Type,System.Object)
extern "C" IL2CPP_METHOD_ATTR Delegate_t * NetFxCoreExtensions_CreateDelegate_m8FD387039F907982CB716046CB4501160B16D381 (MethodInfo_t * ___self0, Type_t * ___delegateType1, RuntimeObject * ___target2, const RuntimeMethod* method)
{
	Delegate_t * V_0 = NULL;
	{
		Type_t * L_0 = ___delegateType1;
		RuntimeObject * L_1 = ___target2;
		MethodInfo_t * L_2 = ___self0;
		Delegate_t * L_3 = Delegate_CreateDelegate_m3A012C4DD077BAD1698B11602174E167F7B9D346(L_0, L_1, L_2, /*hidden argument*/NULL);
		V_0 = L_3;
		goto IL_000f;
	}

IL_000f:
	{
		Delegate_t * L_4 = V_0;
		return L_4;
	}
}
// System.Reflection.MethodInfo UnityEngineInternal.NetFxCoreExtensions::GetMethodInfo(System.Delegate)
extern "C" IL2CPP_METHOD_ATTR MethodInfo_t * NetFxCoreExtensions_GetMethodInfo_m648EA8E13DAFFCBF92AA46F62AF5124386A905A0 (Delegate_t * ___self0, const RuntimeMethod* method)
{
	MethodInfo_t * V_0 = NULL;
	{
		Delegate_t * L_0 = ___self0;
		NullCheck(L_0);
		MethodInfo_t * L_1 = Delegate_get_Method_m0AC85D2B0C4CA63C471BC37FFDC3A5EA1E8ED048(L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		goto IL_000d;
	}

IL_000d:
	{
		MethodInfo_t * L_2 = V_0;
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
// System.Delegate UnityEngineInternal.ScriptingUtils::CreateDelegate(System.Type,System.Reflection.MethodInfo)
extern "C" IL2CPP_METHOD_ATTR Delegate_t * ScriptingUtils_CreateDelegate_m39ACEF00FC1B3EEDD481DB66250804E4DEBBCBEC (Type_t * ___type0, MethodInfo_t * ___methodInfo1, const RuntimeMethod* method)
{
	Delegate_t * V_0 = NULL;
	{
		Type_t * L_0 = ___type0;
		MethodInfo_t * L_1 = ___methodInfo1;
		Delegate_t * L_2 = Delegate_CreateDelegate_mD7C5EDDB32C63A9BD9DE43AC879AFF4EBC6641D1(L_0, L_1, /*hidden argument*/NULL);
		V_0 = L_2;
		goto IL_000e;
	}

IL_000e:
	{
		Delegate_t * L_3 = V_0;
		return L_3;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
