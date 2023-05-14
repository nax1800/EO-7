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

// 0x10 (0x10 - 0x0)
// Function ActiveModifiersPanelContent.ActiveModifiersPanelContent_C.Init
struct UActiveModifiersPanelContent_C_Init_Params
{
public:
	TArray<class UFortGameplayModifierItemDefinition*> InModifiers;                                       // 0x0(0x10)(Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// 0x0 (0x0 - 0x0)
// Function ActiveModifiersPanelContent.ActiveModifiersPanelContent_C.Construct
struct UActiveModifiersPanelContent_C_Construct_Params
{
public:
};

// 0x4 (0x4 - 0x0)
// Function ActiveModifiersPanelContent.ActiveModifiersPanelContent_C.ExecuteUbergraph_ActiveModifiersPanelContent
struct UActiveModifiersPanelContent_C_ExecuteUbergraph_ActiveModifiersPanelContent_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
