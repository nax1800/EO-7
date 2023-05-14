#pragma once

// Dumped with Dumper-7!

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// Function ActiveModifiersPanelContent.ActiveModifiersPanelContent_C.Init
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class UFortGameplayModifierItemDefinition*>InModifiers                                                      (Parm, OutParm, ZeroConstructor, ReferenceParm)

void UActiveModifiersPanelContent_C::Init(TArray<class UFortGameplayModifierItemDefinition*>& InModifiers)
{
	static auto Func = Class->GetFunction("ActiveModifiersPanelContent_C", "Init");

	Params::UActiveModifiersPanelContent_C_Init_Params Parms;

	Parms.InModifiers = InModifiers;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ActiveModifiersPanelContent.ActiveModifiersPanelContent_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UActiveModifiersPanelContent_C::Construct()
{
	static auto Func = Class->GetFunction("ActiveModifiersPanelContent_C", "Construct");

	Params::UActiveModifiersPanelContent_C_Construct_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function ActiveModifiersPanelContent.ActiveModifiersPanelContent_C.ExecuteUbergraph_ActiveModifiersPanelContent
// ()
// Parameters:
// int32                              EntryPoint                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UActiveModifiersPanelContent_C::ExecuteUbergraph_ActiveModifiersPanelContent(int32 EntryPoint)
{
	static auto Func = Class->GetFunction("ActiveModifiersPanelContent_C", "ExecuteUbergraph_ActiveModifiersPanelContent");

	Params::UActiveModifiersPanelContent_C_ExecuteUbergraph_ActiveModifiersPanelContent_Params Parms;

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
