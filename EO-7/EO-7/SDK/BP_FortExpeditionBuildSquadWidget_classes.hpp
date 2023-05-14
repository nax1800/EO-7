#pragma once

// Dumped with Dumper-7!

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x2B8 (0x6F8 - 0x440)
// WidgetBlueprintGeneratedClass BP_FortExpeditionBuildSquadWidget.BP_FortExpeditionBuildSquadWidget_C
class UBP_FortExpeditionBuildSquadWidget_C : public UFortExpeditionBuildSquadWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x440(0x8)(Transient, DuplicateTransient)
	class UBasicRatingWidget_C*                  BasicRatingWidget;                                 // 0x448(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                          BonusSet;                                          // 0x450(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBP_FortExpeditionExpiresWidget_C*     BP_FortExpeditionExpiresWidget;                    // 0x458(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonBorder*                         CommonBorder_5;                                    // 0x460(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonBorder*                         CommonBorder_18;                                   // 0x468(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonWidgetSwitcher*                 CommonWidgetSwitcher_0;                            // 0x470(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                          CostSlots;                                         // 0x478(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                      ExpeditionDescription;                             // 0x480(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                      ExpeditionDuration;                                // 0x488(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                      ExpeditionName;                                    // 0x490(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonActionWidget*                   InfoAction;                                        // 0x498(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                PreviewBuffArrow_Chance;                           // 0x4A0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                PreviewBuffArrow_Rating;                           // 0x4A8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonBorder*                         RarityBorder;                                      // 0x4B0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                          RequirementsSlots;                                 // 0x4B8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                          RewardsSet;                                        // 0x4C0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USafeZone*                             SafeZone_0;                                        // 0x4C8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBasicRatingWidget_C*                  SquadRating;                                       // 0x4D0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonNumericTextBlock*               SuccessChance;                                     // 0x4D8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                          VBoxBonuses;                                       // 0x4E0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                VehicleImage;                                      // 0x4E8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                      VehicleName;                                       // 0x4F0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UViewInfoButton_NoText_C*              ViewInfoButton_NoText;                             // 0x4F8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	struct FDataTableRowHandle                   BackInputAction;                                   // 0x500(0x10)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	struct FDataTableRowHandle                   ChangeVehicleActon;                                // 0x510(0x10)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	struct FDataTableRowHandle                   SlotItemAction;                                    // 0x520(0x10)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	struct FDataTableRowHandle                   CloseAction;                                       // 0x530(0x10)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	struct FDataTableRowHandle                   StartExpeditionAction;                             // 0x540(0x10)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	struct FDataTableRowHandle                   OpenPickerAction;                                  // 0x550(0x10)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	struct FHomebaseSquad                        Current_Squad_Info;                                // 0x560(0x88)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FSlateBrush                           NoVehicleBrush;                                    // 0x5E8(0x90)(Edit, BlueprintVisible, DisableEditOnInstance)
	class UClass*                                Expedition_Pick_Vehicle_Class;                     // 0x678(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  CancelInputActionName;                             // 0x680(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        SelectedSlot;                                      // 0x688(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_18A1[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UInfoWindow_C*                         RewardInfoWindow;                                  // 0x690(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FFortDialogExternalLatentActionHandle WaitingForDialogHandle;                            // 0x698(0x4)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	struct FLinearColor                          BuffColor;                                         // 0x69C(0x10)(Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                          DebuffColor;                                       // 0x6AC(0x10)(Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_18A2[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FDataTableRowHandle                   PurchaseSlotAction;                                // 0x6C0(0x10)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	struct FDataTableRowHandle                   InspectAction;                                     // 0x6D0(0x10)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	class UFortItem*                             InspectItem;                                       // 0x6E0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UBP_ExpeditionSquadSlotsView_C*        CachedExpeditionSquadSlotsView;                    // 0x6E8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USquadSlotItemPicker_C*                CachedExpeditionSquadSlotPicker;                   // 0x6F0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("BP_FortExpeditionBuildSquadWidget_C");
		return Clss;
	}

	struct FTimespan Get_Utc_Now_Offset(class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, class AFortPlayerController* K2Node_DynamicCast_AsFort_Player_Controller, bool K2Node_DynamicCast_bSuccess, const struct FTimespan& CallFunc_GetPlayerControllerUtcNowMcpOffset_ReturnValue);
	class UWidget* GetSuccessChanceTooltipWidget(class FText Temp_text_Variable, class UCommonUIContext* CallFunc_GetContext_ReturnValue, bool CallFunc_IsUsingGamepad_ReturnValue, class FText CallFunc_MakeLiteralText_ReturnValue, bool Temp_bool_Variable, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, bool CallFunc_Less_FloatFloat_ReturnValue, class FText K2Node_Select_Default, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, class FText CallFunc_Format_ReturnValue, class UUserWidget* CallFunc_Create_Basic_Tooltip_Output);
	class UWidget* GetSquadRatingTooltipWidget(class UCommonUIContext* CallFunc_GetContext_ReturnValue, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, bool CallFunc_IsUsingGamepad_ReturnValue, class FText CallFunc_Format_ReturnValue, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, class FText CallFunc_MakeLiteralText_ReturnValue, class UUserWidget* CallFunc_Create_Basic_Tooltip_Output);
	void Get_Bonus_Display_Name_and_Brush(struct FGameplayTag& Tag, bool Condition, enum class EFortRarity Rarity, struct FSlateBrush* OutBrush_Brush_M, class FText* OutDisplayName, struct FLinearColor* OutRarityColor, const struct FLinearColor& RarityColor, const struct FSlateBrush& TagBrush, class FText DisplayName, const struct FFortRarityItemData& CallFunc_BPGetRarityData_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData2, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, class UFortTooltipUIContext* CallFunc_GetContext_ReturnValue, class FText CallFunc_Format_ReturnValue, class FText CallFunc_GetDisplayNameAndMultiBrushForTag_OutDisplayName, const struct FFortMultiSizeBrush& CallFunc_GetDisplayNameAndMultiBrushForTag_OutBrush, bool CallFunc_GetDisplayNameAndMultiBrushForTag_ReturnValue);
	class UFortItem* Get_Item_In_Selected_Squad_Slot(class ULocalPlayer* CallFunc_GetOwningLocalPlayer_ReturnValue, int32 CallFunc_Get_Selected_Slot__SAFE__ReturnValue, class UWidget* CallFunc_GetChildAt_ReturnValue, class UExpeditionSquadSlotButton_C* K2Node_DynamicCast_AsExpedition_Squad_Slot_Button, bool K2Node_DynamicCast_bSuccess, class UFortItem* CallFunc_GetItemInSquadSlotBP_ReturnValue);
	void HACK_SetCursorToSquadPicker(bool CallFunc_NotEqual_NameName_ReturnValue, class UFortUINavigationManager* CallFunc_GetUINavigationManager_ReturnValue);
	void Determine_Inspect_Item_for_Squad_Slot(bool Temp_bool_Variable, bool CallFunc_IsValid_ReturnValue, enum class EInputActionState Temp_byte_Variable, enum class EInputActionState Temp_byte_Variable2, class UFortItem* CallFunc_Get_Item_In_Selected_Squad_Slot_ReturnValue, enum class EInputActionState K2Node_Select_Default);
	void Handle_Inspect(bool* PassThrough, class UFortUINavigationManager* CallFunc_GetUINavigationManager_ReturnValue, bool CallFunc_IsValid_ReturnValue);
	int32 Get_Selected_Slot__SAFE_(int32 CallFunc_Max_ReturnValue);
	enum class EInputActionState Get_Purchase_Slot_State(bool Temp_bool_Variable, enum class EInputActionState Temp_byte_Variable, enum class EInputActionState Temp_byte_Variable2, class UCommonUIContext* CallFunc_GetContext_ReturnValue, bool CallFunc_IsUsingGamepad_ReturnValue, bool CallFunc_IsSquadSlotLocked_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, int32 CallFunc_GetActiveWidgetIndex_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue2, bool CallFunc_BooleanOR_ReturnValue, bool CallFunc_BooleanOR_ReturnValue2, bool CallFunc_BooleanOR_ReturnValue3, enum class EInputActionState K2Node_Select_Default);
	void Handle_Purchase_Slot(bool* PassThrough, class UHomeBaseContext* CallFunc_GetContext_ReturnValue, bool CallFunc_IsSquadSlotLocked_ReturnValue, class FName CallFunc_GetUnlockingHomebaseNodeIdForSquadSlot_ReturnValue, class UFortUINavigationManager* CallFunc_GetUINavigationManager_ReturnValue);
	float Determine_Buff_Arrow_Angle_for_Preview_State(enum class EFortBuffState Index, enum class EFortBuffState Temp_byte_Variable, float Temp_float_Variable, float Temp_float_Variable2, float Temp_float_Variable3, float K2Node_Select_Default);
	struct FLinearColor Determine_Buff_Arrow_Color_for_Preview_State(enum class EFortBuffState Index, enum class EFortBuffState Temp_byte_Variable, const struct FLinearColor& Temp_struct_Variable, const struct FLinearColor& K2Node_Select_Default);
	void Update_Chance_Buff_Arrow_for_Preview(enum class EFortBuffState Index, float CallFunc_Determine_Buff_Arrow_Angle_for_Preview_State_ReturnValue, const struct FLinearColor& CallFunc_Determine_Buff_Arrow_Color_for_Preview_State_ReturnValue, enum class ESlateVisibility CallFunc_Determine_Buff_Arrow_Visiblity_From_Preview_State_ReturnValue);
	void Update_Rating_Buff_Arrow_for_Preview(enum class EFortBuffState Index, float CallFunc_Determine_Buff_Arrow_Angle_for_Preview_State_ReturnValue, const struct FLinearColor& CallFunc_Determine_Buff_Arrow_Color_for_Preview_State_ReturnValue, enum class ESlateVisibility CallFunc_Determine_Buff_Arrow_Visiblity_From_Preview_State_ReturnValue);
	enum class ESlateVisibility Determine_Buff_Arrow_Visiblity_From_Preview_State(enum class EFortBuffState Index, enum class EFortBuffState Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable2, enum class ESlateVisibility Temp_byte_Variable3, enum class ESlateVisibility Temp_byte_Variable4, enum class ESlateVisibility K2Node_Select_Default);
	class UClass* Determine_Text_Style_from_Preview_State(enum class EFortBuffState Index, enum class EFortBuffState Temp_byte_Variable, class UClass* Temp_class_Variable, class UClass* Temp_class_Variable2, class UClass* Temp_class_Variable3, class UClass* K2Node_Select_Default);
	void Update_Power_and_Rating_for_Preview(class UFortItem* Item, TArray<class UFortItem*>* SlottedItems1, class UFortItem* NullItem, const TArray<class UFortItem*>& SlottedItems, float PreviewRating, float PreviewChance, float CurrentRating, float CurrentChance, class UFortItem* CurrentItem, enum class EFortBuffState CallFunc_Determine_Preview_State_State, class UClass* CallFunc_Determine_Text_Style_from_Preview_State_ReturnValue, int32 CallFunc_FFloor_ReturnValue, int32 CallFunc_FFloor_ReturnValue2, float CallFunc_Conv_IntToFloat_ReturnValue, float CallFunc_Conv_IntToFloat_ReturnValue2, enum class EFortBuffState CallFunc_Determine_Preview_State_State2, class UClass* CallFunc_Determine_Text_Style_from_Preview_State_ReturnValue2, int32 CallFunc_FTrunc_ReturnValue, float CallFunc_CalculateExpeditionPercentageChanceForSuccess_ReturnValue, int32 CallFunc_Array_Find_ReturnValue, bool CallFunc_NotEqual_IntInt_ReturnValue, class UFortHomebaseUIContext* CallFunc_GetContext_ReturnValue, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, class AFortPlayerController* K2Node_DynamicCast_AsFort_Player_Controller, bool K2Node_DynamicCast_bSuccess, float CallFunc_CalculateTotalPower_ReturnValue, TArray<class UFortItem*>& CallFunc_GetItemsInSquad_ReturnValue, float CallFunc_Get_Current_Rating_CurrentNumericValue);
	void Determine_Preview_State(float Preview, float Current, enum class EFortBuffState* State, bool CallFunc_Less_FloatFloat_ReturnValue, bool CallFunc_Greater_FloatFloat_ReturnValue);
	void Update_For_Preview(class UFortItem* Item, TArray<class UFortItem*>& CallFunc_Update_Power_and_Rating_for_Preview_SlottedItems1);
	void Handle_Back_with_Squad_Clear(bool* PassThrough, bool CallFunc_Handle_Back_PassThrough);
	enum class EInputActionState Get_Slot_Item_State(bool Temp_bool_Variable, enum class EInputActionState Temp_byte_Variable, enum class EInputActionState Temp_byte_Variable2, bool Temp_bool_Variable2, enum class EInputActionState Temp_byte_Variable3, class UCommonUIContext* CallFunc_GetContext_ReturnValue, bool CallFunc_IsUsingGamepad_ReturnValue, class UFortItem* CallFunc_GetSelectedItem_ReturnValue, bool CallFunc_CanItemBeComitted_ReturnValue, int32 CallFunc_GetActiveWidgetIndex_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue, enum class EInputActionState K2Node_Select_Default, bool CallFunc_BooleanOR_ReturnValue, enum class EInputActionState K2Node_Select2_Default);
	enum class EInputActionState Get_Open_Picker_State(bool Temp_bool_Variable, enum class EInputActionState Temp_byte_Variable, enum class EInputActionState Temp_byte_Variable2, class UCommonUIContext* CallFunc_GetContext_ReturnValue, bool CallFunc_IsUsingGamepad_ReturnValue, bool CallFunc_IsSquadSlotLocked_ReturnValue, int32 CallFunc_GetActiveWidgetIndex_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue2, bool CallFunc_BooleanOR_ReturnValue, bool CallFunc_BooleanOR_ReturnValue2, bool CallFunc_BooleanOR_ReturnValue3, enum class EInputActionState K2Node_Select_Default);
	void Update_Vehicle_Selected(class FName CurrentSquadId, int32 CallFunc_Get_Selected_Slot__SAFE__ReturnValue, int32 CallFunc_Get_Selected_Slot__SAFE__ReturnValue2, class UWidget* CallFunc_GetChildAt_ReturnValue, bool CallFunc_NotEqual_NameName_ReturnValue, bool CallFunc_Handle_Close_Picker_Action_PassThrough, class UFortUINavigationManager* CallFunc_GetUINavigationManager_ReturnValue);
	void Handle_Open_Picker(bool* PassThrough);
	void Handle_Start_Expedition(bool* PassThrough);
	void Handle_Squad_Picker_Closed(bool Temp_bool_Variable, enum class EInputActionState Temp_byte_Variable, enum class EInputActionState Temp_byte_Variable2, enum class EInputActionState CallFunc_Get_Purchase_Slot_State_ReturnValue, bool CallFunc_IsExpeditionValidToStart_ReturnValue, enum class EInputActionState K2Node_Select_Default, enum class EInputActionState CallFunc_Get_Open_Picker_State_ReturnValue);
	void Handle_Squad_Slot_Selected(enum class EInputActionState CallFunc_Get_Slot_Item_State_ReturnValue, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue);
	void Handle_Selected_Item_Committed(class UFortHomebaseUIContext* CallFunc_GetContext_ReturnValue, TArray<class UFortItem*>& CallFunc_GetItemsInSquad_ReturnValue);
	void Handle_Close_Picker_Action(bool* PassThrough, class UFortHomebaseUIContext* CallFunc_GetContext_ReturnValue, TArray<class UFortItem*>& CallFunc_GetItemsInSquad_ReturnValue);
	void Handle_Slot_Item_Action(bool* PassThrough, bool CallFunc_TryCommitSelectedItem_ReturnValue);
	void Update_Start_Expedition_Widget_State(bool Temp_bool_Variable, enum class EInputActionState Temp_byte_Variable, enum class EInputActionState Temp_byte_Variable2, bool CallFunc_IsExpeditionValidToStart_ReturnValue, enum class EInputActionState K2Node_Select_Default);
	void Handle_Expedition_Expired(const struct FTimespan& CallFunc_Get_Utc_Now_Offset_ReturnValue, bool CallFunc_Handle_Back_with_Squad_Clear_PassThrough, bool CallFunc_HasExpeditionExpired_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_BooleanOR_ReturnValue);
	void Try_to_Auto_Select_First_Vehicle(int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, bool Temp_bool_True_if_break_was_hit_Variable, bool CallFunc_Not_PreBool_ReturnValue, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, class AFortPlayerController* K2Node_DynamicCast_AsFort_Player_Controller, bool K2Node_DynamicCast_bSuccess, class UFortExpeditionItemDefinition* CallFunc_Get_Expedition_Item_Definition_ItemDef, const struct FGameplayTagContainer& CallFunc_GetRequiredTags_ReturnValue, TArray<class FName>& CallFunc_GetExpeditionSquadsThatMatchRequirements_OutExpeditionSquadIds, bool CallFunc_GetExpeditionSquadsThatMatchRequirements_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, int32 CallFunc_Array_Length_ReturnValue2, bool CallFunc_Greater_IntInt_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_BooleanAND_ReturnValue2, class FName CallFunc_Array_Get_Item, bool CallFunc_IsSquadOnExpedition_ReturnValue);
	class UObject* Get_Selected_Item(class UObject* SelectedItem, class UFortItem* CallFunc_Get_Item_In_Selected_Squad_Slot_ReturnValue, bool CallFunc_IsValid_ReturnValue, class UObject* CallFunc_GetItemAt_ReturnValue);
	void Get_Picker_List_View(class UFortItemTileView** PickerTileView);
	void HACK_SetCursorToSquadSlotSlotted(int32 CallFunc_Get_Selected_Slot__SAFE__ReturnValue, int32 CallFunc_Get_Selected_Slot__SAFE__ReturnValue2, class UWidget* CallFunc_GetChildAt_ReturnValue, class UExpeditionSquadSlotButton_C* K2Node_DynamicCast_AsExpedition_Squad_Slot_Button, bool K2Node_DynamicCast_bSuccess, bool CallFunc_NotEqual_NameName_ReturnValue, class UFortUINavigationManager* CallFunc_GetUINavigationManager_ReturnValue);
	void Set_Bonus_Criteria(class UFortExpeditionItem* Item, TArray<class UFortItem*>& SlottedItems, const struct FGameplayTag& LoopCriteriaTag, int32 FoundIndex, const TArray<struct FGameplayTag>& MatchedCriteriaTags, int32 Temp_int_Array_Index_Variable, TArray<struct FGameplayTag>& CallFunc_GetMatchedCriteriaTags_OutMatchedCriteria, TArray<struct FFortCriteriaRequirementData>& CallFunc_GetBonusCriteriaBP_OutBonusCriteria, const struct FFortCriteriaRequirementData& CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, int32 CallFunc_Array_Length_ReturnValue2, bool CallFunc_Greater_IntInt_ReturnValue, int32 Temp_int_Loop_Counter_Variable, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, class UIconAndNameWidget_C* CallFunc_Create_ReturnValue, bool Temp_bool_Variable, bool CallFunc_GreaterEqual_IntInt_ReturnValue, bool CallFunc_GreaterEqual_IntInt_ReturnValue2, int32 CallFunc_Array_Find_ReturnValue, const struct FSlateChildSize& K2Node_MakeStruct_SlateChildSize, const struct FMargin& K2Node_MakeStruct_Margin, enum class ESlateVisibility Temp_byte_Variable, const struct FSlateBrush& CallFunc_Get_Bonus_Display_Name_and_Brush_OutBrush_Brush_M, class FText CallFunc_Get_Bonus_Display_Name_and_Brush_OutDisplayName, const struct FLinearColor& CallFunc_Get_Bonus_Display_Name_and_Brush_OutRarityColor, class UVerticalBoxSlot* CallFunc_AddChildToVerticalBox_ReturnValue, enum class ESlateVisibility Temp_byte_Variable2, enum class ESlateVisibility K2Node_Select_Default);
	void Update_Expedition_Power(class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, class AFortPlayerController* K2Node_DynamicCast_AsFort_Player_Controller, bool K2Node_DynamicCast_bSuccess, class UFortHomebaseUIContext* CallFunc_GetContext_ReturnValue, bool CallFunc_NotEqual_NameName_ReturnValue, TArray<class UFortItem*>& CallFunc_GetItemsInSquad_ReturnValue, float CallFunc_CalculateTotalPower_ReturnValue, int32 CallFunc_FTrunc_ReturnValue, float CallFunc_CalculateExpeditionPercentageChanceForSuccess_ReturnValue);
	void Update_Squad_Slot_Pickers(int32 SelectedSquadIndex, bool CallFunc_IsSquadSlotLocked_ReturnValue, int32 CallFunc_GetActiveWidgetIndex_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue, bool CallFunc_BooleanAND_ReturnValue);
	void Set_Expedition_Costs(class UFortExpeditionItemDefinition* ItemDef, int32 Temp_int_Array_Index_Variable, TArray<struct FItemAndCount>& CallFunc_GetExpeditionCosts_OutExpeditionCosts, const struct FItemAndCount& CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, int32 Temp_int_Loop_Counter_Variable, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, const struct FMargin& K2Node_MakeStruct_Margin, class UItemCountOverCost_C* CallFunc_Create_ReturnValue, class UVerticalBoxSlot* CallFunc_AddChildToVerticalBox_ReturnValue);
	void Set_Requirements(class UFortExpeditionItemDefinition* ItemDef, class UFortTooltipUIContext* CallFunc_GetContext_ReturnValue, const struct FGameplayTagContainer& CallFunc_GetRequiredTags_ReturnValue, TArray<struct FGameplayTag>& CallFunc_BreakGameplayTagContainer_GameplayTags, int32 Temp_int_Array_Index_Variable, int32 CallFunc_Array_Length_ReturnValue, const struct FGameplayTag& CallFunc_Array_Get_Item, const struct FFortTagUIData& CallFunc_GetUIDataForTag_OutData, bool CallFunc_GetUIDataForTag_ReturnValue, int32 Temp_int_Loop_Counter_Variable, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, class UIconAndNameWidget_C* CallFunc_Create_ReturnValue, class UVerticalBoxSlot* CallFunc_AddChildToVerticalBox_ReturnValue, const struct FMargin& K2Node_MakeStruct_Margin);
	void Set_Remaining_Expiration_Time(class UFortExpeditionItem* Item);
	void Clear_Vehicle_Widgets();
	void Set_Vehicle_Name(struct FHomebaseSquad& HomebaseSquad);
	void Refresh_Squad_Widgets(bool NewLocalVar_0, class UHomeBaseContext* CallFunc_GetContext_ReturnValue, const struct FHomebaseSquad& CallFunc_TryGetHomebaseSquadData_OutHomebaseSquad, bool CallFunc_TryGetHomebaseSquadData_ReturnValue, class UFortHomebaseUIContext* CallFunc_GetContext_ReturnValue2, const struct FFortMultiSizeBrush& CallFunc_GetSquadIcon_ReturnValue);
	void Handle_Change_Vehicle(bool* PassThrough, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class UFortUIManagerWidget_NUI* CallFunc_GetUIManagerWidget_ReturnValue, bool CallFunc_IsValidClass_ReturnValue, class UUserWidget* CallFunc_GetCachedWidget_ReturnValue, class UBP_FortExpeditionPickVehicleWidget_C* K2Node_DynamicCast_AsBP_Fort_Expedition_Pick_Vehicle_Widget, bool K2Node_DynamicCast_bSuccess);
	void Set_Rewards(class UFortExpeditionItemDefinition* ItemDef, TArray<class UFortCardPackItemDefinition*>& CallFunc_GetAllRewards_OutRewards, int32 Temp_int_Array_Index_Variable, int32 CallFunc_Array_Length_ReturnValue, class UFortCardPackItemDefinition* CallFunc_Array_Get_Item, bool CallFunc_IsValid_ReturnValue, class UFortItem* CallFunc_CreateTemporaryItemInstanceBP_ReturnValue, int32 Temp_int_Loop_Counter_Variable, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, class URewardsListEntry_C* CallFunc_Create_ReturnValue, class UPanelSlot* CallFunc_AddChild_ReturnValue);
	void Set_Rarity(class UFortItem* Item, enum class EFortRarity CallFunc_GetRarity_ReturnValue, class UMaterialInstanceDynamic* CallFunc_GetDynamicMaterial_ReturnValue, const struct FFortRarityItemData& CallFunc_BPGetRarityData_ReturnValue);
	void Set_Duration(class UFortExpeditionItemDefinition* ItemDef, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, const struct FTimespan& CallFunc_FromMinutes_ReturnValue, class FText CallFunc_GetTimespanAsText_ReturnValue, class FText CallFunc_Format_ReturnValue);
	void Get_Expedition_Item_Definition(class UFortExpeditionItem* Item, class UFortExpeditionItemDefinition** ItemDef, class UFortItemDefinition* CallFunc_GetItemDefinitionBP_ReturnValue, class UFortExpeditionItemDefinition* K2Node_DynamicCast_AsFort_Expedition_Item_Definition, bool K2Node_DynamicCast_bSuccess);
	void Refresh_Item_Data(class UFortHomebaseUIContext* CallFunc_GetContext_ReturnValue, TArray<class UFortItem*>& CallFunc_GetItemsInSquad_ReturnValue, class UFortExpeditionItemDefinition* CallFunc_Get_Expedition_Item_Definition_ItemDef);
	void Set_Rating(class UFortExpeditionItem* Item, float CallFunc_GetTargetPowerLevel_ReturnValue, int32 CallFunc_FTrunc_ReturnValue);
	void Set_Description(class UFortItem* Item, class FText CallFunc_GetDescription_ReturnValue);
	void Set_Name(class UFortItem* Item, class FText CallFunc_GetDisplayName_ReturnValue);
	void Setup_Input_Action_Handlers(UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate2, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate3, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate4, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate5, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate6, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate7, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate8);
	void Handle_Back(bool* PassThrough, class UFortUIManagerWidget_NUI* CallFunc_GetUIManagerWidget_ReturnValue);
	void DialogResult_B738291040F33B805332A7B633B3ACBD(enum class EFortDialogResult Result, class FName ResultName, bool bWaitingForLatentActionCompletion, const struct FFortDialogExternalLatentActionHandle& WaitingDialogHandle);
	void Construct();
	void SetData(class UFortExpeditionItem* InItem);
	void HandleVechicleSelected(class FName SquadId);
	void BndEvt__SquadSlotItemPicker_K2Node_ComponentBoundEvent_9_OnSelectionCommitted__DelegateSignature();
	void Destruct();
	void OnActivated();
	void HACK_Select_Item_in_Picker();
	void OnRefreshBuildSquadWidget();
	void BndEvt__ViewInfoButton_NoText_K2Node_ComponentBoundEvent_35_CommonButtonClicked__DelegateSignature(class UCommonButton* Button);
	void BndEvt__SquadSlotItemPicker_K2Node_ComponentBoundEvent_20_OnItemSelectionEvent__DelegateSignature(class UFortItem* SelectedItem);
	void OnStartExpedition();
	void BndEvt__ExpeditionSquadSlotsView_K2Node_ComponentBoundEvent_45_OnSquadSlotOpened__DelegateSignature();
	void BndEvt__ExpeditionSquadSlotsView_K2Node_ComponentBoundEvent_77_OnSquadSlotSelected__DelegateSignature(int32 SquadSlotIndex);
	void OnGamepadStateChanged(bool bUsingGamepad);
	void OnStartExpeditionCompleted();
	void BndEvt__CommonWidgetSwitcher_0_K2Node_ComponentBoundEvent_20_OnActiveWidgetChanged__DelegateSignature(class UWidget* ActiveWidget, int32 ActiveWidgetIndex);
	void OnRequestClosePicker();
	void ExecuteUbergraph_BP_FortExpeditionBuildSquadWidget(int32 EntryPoint, bool CallFunc_Handle_Close_Picker_Action_PassThrough, enum class EFortDialogResult Temp_byte_Variable, bool Temp_bool_Variable, bool K2Node_SwitchEnum_CmpSuccess, enum class EInputActionState Temp_byte_Variable2, enum class EInputActionState Temp_byte_Variable3, class UFortFrontEndContext* CallFunc_GetContext_ReturnValue, bool CallFunc_IsValid_ReturnValue, enum class EInputActionState K2Node_Select_Default, class UFortExpeditionItem* K2Node_Event_InItem, class FName K2Node_CustomEvent_SquadId, bool CallFunc_StartExpedition_ReturnValue, const struct FConfirmationDialogAction& K2Node_MakeStruct_ConfirmationDialogAction, TArray<struct FConfirmationDialogAction>& K2Node_MakeArray_Array, class UFortAsyncAction_ShowAdvancedLatentConfirmation_NUI* CallFunc_ShowAdvancedLatentActionConfirmation_ReturnValue, bool CallFunc_IsValid_ReturnValue2, bool CallFunc_IsExpeditionValidToStart_ReturnValue, class UFortItemTileView* CallFunc_Get_Picker_List_View_PickerTileView, class UFortItemTileView* CallFunc_Get_Picker_List_View_PickerTileView2, class UObject* CallFunc_Get_Selected_Item_ReturnValue, class FName Temp_name_Variable, bool CallFunc_SetSelectedItem_ReturnValue, bool Temp_bool_Variable2, const struct FFortDialogExternalLatentActionHandle& Temp_struct_Variable, class UCommonButton* K2Node_ComponentBoundEvent_Button, class APlayerController* CallFunc_GetPlayerController_ReturnValue, class UFortUIManagerWidget_NUI* CallFunc_GetUIManagerWidget_ReturnValue, class UInfoWindow_C* CallFunc_Create_ReturnValue, enum class EFortDialogResult K2Node_CustomEvent_Result, class FName K2Node_CustomEvent_ResultName, bool K2Node_CustomEvent_bWaitingForLatentActionCompletion, const struct FFortDialogExternalLatentActionHandle& K2Node_CustomEvent_WaitingDialogHandle, class FText CallFunc_GetText_ReturnValue, class UFortExpeditionItemDefinition* CallFunc_Get_Expedition_Item_Definition_ItemDef, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, TArray<class UFortCardPackItemDefinition*>& CallFunc_GetAllRewards_OutRewards, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array2, class UFortItem* K2Node_ComponentBoundEvent_SelectedItem, class FText CallFunc_Format_ReturnValue, int32 K2Node_ComponentBoundEvent_SquadSlotIndex, bool CallFunc_NotEqual_IntInt_ReturnValue, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, enum class EInputActionState CallFunc_Get_Slot_Item_State_ReturnValue, bool K2Node_CustomEvent_bUsingGamepad, enum class EInputActionState CallFunc_Get_Slot_Item_State_ReturnValue2, enum class EInputActionState CallFunc_Get_Open_Picker_State_ReturnValue, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate2, bool CallFunc_Handle_Back_PassThrough, enum class EInputActionState CallFunc_Get_Open_Picker_State_ReturnValue2, enum class EInputActionState CallFunc_Get_Purchase_Slot_State_ReturnValue, enum class EInputActionState CallFunc_Get_Purchase_Slot_State_ReturnValue2, enum class EInputActionState CallFunc_Get_Purchase_Slot_State_ReturnValue3, class UCommonUIContext* CallFunc_GetContext_ReturnValue2, int32 CallFunc_GetActiveWidgetIndex_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue, class UFortItem* CallFunc_GetSelectedItem_ReturnValue, class UWidget* K2Node_ComponentBoundEvent_ActiveWidget, int32 K2Node_ComponentBoundEvent_ActiveWidgetIndex, bool CallFunc_EqualEqual_IntInt_ReturnValue2, bool CallFunc_NotEqual_IntInt_ReturnValue2, class UBP_ExpeditionSquadSlotsView_C* K2Node_DynamicCast_AsBP_Expedition_Squad_Slots_View, bool K2Node_DynamicCast_bSuccess, class USquadSlotItemPicker_C* K2Node_DynamicCast_AsSquad_Slot_Item_Picker, bool K2Node_DynamicCast_bSuccess2);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
