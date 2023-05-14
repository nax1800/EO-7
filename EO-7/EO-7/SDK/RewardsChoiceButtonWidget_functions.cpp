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


// Function RewardsChoiceButtonWidget.RewardsChoiceButtonWidget_C.SetHighlight
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               EnableHighlight                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FLinearColor                K2Node_MakeStruct_LinearColor                                    (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                K2Node_MakeStruct_LinearColor2                                   (IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void URewardsChoiceButtonWidget_C::SetHighlight(bool EnableHighlight, const struct FLinearColor& K2Node_MakeStruct_LinearColor, const struct FLinearColor& K2Node_MakeStruct_LinearColor2)
{
	static auto Func = Class->GetFunction("RewardsChoiceButtonWidget_C", "SetHighlight");

	Params::URewardsChoiceButtonWidget_C_SetHighlight_Params Parms;

	Parms.EnableHighlight = EnableHighlight;
	Parms.K2Node_MakeStruct_LinearColor = K2Node_MakeStruct_LinearColor;
	Parms.K2Node_MakeStruct_LinearColor2 = K2Node_MakeStruct_LinearColor2;

	UObject::ProcessEvent(Func, &Parms);

}


// Function RewardsChoiceButtonWidget.RewardsChoiceButtonWidget_C.SelectRewards
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void URewardsChoiceButtonWidget_C::SelectRewards()
{
	static auto Func = Class->GetFunction("RewardsChoiceButtonWidget_C", "SelectRewards");

	Params::URewardsChoiceButtonWidget_C_SelectRewards_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function RewardsChoiceButtonWidget.RewardsChoiceButtonWidget_C.OnPreviewMouseButtonDown
// (BlueprintCosmetic, Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry                   MyGeometry                                                       (Parm, IsPlainOldData, NoDestructor)
// struct FPointerEvent               MouseEvent                                                       (ConstParm, Parm, OutParm, ReferenceParm)
// struct FEventReply                 ReturnValue                                                      (Parm, OutParm, ReturnParm)
// struct FEventReply                 CallFunc_Unhandled_ReturnValue                                   ()
// bool                               CallFunc_Greater_IntInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FEventReply                 CallFunc_Handled_ReturnValue                                     ()

struct FEventReply URewardsChoiceButtonWidget_C::OnPreviewMouseButtonDown(const struct FGeometry& MyGeometry, struct FPointerEvent& MouseEvent, const struct FEventReply& CallFunc_Unhandled_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, const struct FEventReply& CallFunc_Handled_ReturnValue)
{
	static auto Func = Class->GetFunction("RewardsChoiceButtonWidget_C", "OnPreviewMouseButtonDown");

	Params::URewardsChoiceButtonWidget_C_OnPreviewMouseButtonDown_Params Parms;

	Parms.MyGeometry = MyGeometry;
	Parms.MouseEvent = MouseEvent;
	Parms.CallFunc_Unhandled_ReturnValue = CallFunc_Unhandled_ReturnValue;
	Parms.CallFunc_Greater_IntInt_ReturnValue = CallFunc_Greater_IntInt_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_Handled_ReturnValue = CallFunc_Handled_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function RewardsChoiceButtonWidget.RewardsChoiceButtonWidget_C.PopulateRewards
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class URewardsWidget_C*            Owner                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              RewardIndex                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FFortItemInstanceQuantityPair>Rewards                                                          (Parm, OutParm, ZeroConstructor, ReferenceParm)
// TArray<struct FFortItemInstanceQuantityPair>EmptyArray                                                       (Edit, ZeroConstructor)

void URewardsChoiceButtonWidget_C::PopulateRewards(class URewardsWidget_C* Owner, int32 RewardIndex, TArray<struct FFortItemInstanceQuantityPair>& Rewards, const TArray<struct FFortItemInstanceQuantityPair>& EmptyArray)
{
	static auto Func = Class->GetFunction("RewardsChoiceButtonWidget_C", "PopulateRewards");

	Params::URewardsChoiceButtonWidget_C_PopulateRewards_Params Parms;

	Parms.Owner = Owner;
	Parms.RewardIndex = RewardIndex;
	Parms.Rewards = Rewards;
	Parms.EmptyArray = EmptyArray;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
