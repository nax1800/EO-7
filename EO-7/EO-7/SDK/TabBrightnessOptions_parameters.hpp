#pragma once

// Dumped with Dumper-7!

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

#include "../SDK.hpp"

namespace SDK
{
namespace Params
{
//---------------------------------------------------------------------------------------------------------------------
// PARAMETERS
//---------------------------------------------------------------------------------------------------------------------

// 0x90 (0x90 - 0x0)
// Function TabBrightnessOptions.TabBrightnessOptions_C.Set Default Call Out
struct UTabBrightnessOptions_C_Set_Default_Call_Out_Params
{
public:
	float                                        CallFunc_GetDefaultGammaSettings_ReturnValue;      // 0x0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_31A0[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  CallFunc_MakeLiteralText_ReturnValue;              // 0x8(0x18)()
	class FText                                  CallFunc_Conv_FloatToText_ReturnValue;             // 0x20(0x18)()
	class FString                                CallFunc_Conv_TextToString_ReturnValue;            // 0x38(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                CallFunc_Conv_TextToString_ReturnValue2;           // 0x48(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                CallFunc_Concat_StrStr_ReturnValue;                // 0x58(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                CallFunc_Concat_StrStr_ReturnValue2;               // 0x68(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                  CallFunc_Conv_StringToText_ReturnValue;            // 0x78(0x18)()
};

// 0x0 (0x0 - 0x0)
// Function TabBrightnessOptions.TabBrightnessOptions_C.Initialize Data
struct UTabBrightnessOptions_C_Initialize_Data_Params
{
public:
};

// 0x38 (0x38 - 0x0)
// Function TabBrightnessOptions.TabBrightnessOptions_C.Update Data
struct UTabBrightnessOptions_C_Update_Data_Params
{
public:
	float                                        CallFunc_GetGammaSettings_ReturnValue;             // 0x0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_31A1[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  CallFunc_GetEmptyText_ReturnValue;                 // 0x8(0x18)()
	class FText                                  CallFunc_MakeLiteralText_ReturnValue;              // 0x20(0x18)()
};

// 0x0 (0x0 - 0x0)
// Function TabBrightnessOptions.TabBrightnessOptions_C.Construct
struct UTabBrightnessOptions_C_Construct_Params
{
public:
};

// 0x4 (0x4 - 0x0)
// Function TabBrightnessOptions.TabBrightnessOptions_C.BndEvt__MouseSensitivity_K2Node_ComponentBoundEvent_0_SliderChanged__DelegateSignature
struct UTabBrightnessOptions_C_BndEvt__MouseSensitivity_K2Node_ComponentBoundEvent_0_SliderChanged__DelegateSignature_Params
{
public:
	float                                        Slider_Value;                                      // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x0 (0x0 - 0x0)
// Function TabBrightnessOptions.TabBrightnessOptions_C.UpdateOptionsTab
struct UTabBrightnessOptions_C_UpdateOptionsTab_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function TabBrightnessOptions.TabBrightnessOptions_C.CenterOnTab
struct UTabBrightnessOptions_C_CenterOnTab_Params
{
public:
};

// 0x8 (0x8 - 0x0)
// Function TabBrightnessOptions.TabBrightnessOptions_C.ExecuteUbergraph_TabBrightnessOptions
struct UTabBrightnessOptions_C_ExecuteUbergraph_TabBrightnessOptions_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        K2Node_ComponentBoundEvent_Slider_Value;           // 0x4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
