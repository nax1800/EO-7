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

// 0x0 (0x28 - 0x28)
// BlueprintGeneratedClass MissionBlueprintFunctionLibrary.MissionBlueprintFunctionLibrary_C
class UMissionBlueprintFunctionLibrary_C : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("MissionBlueprintFunctionLibrary_C");
		return Clss;
	}

	void HideParticleComponentsAttachedToMesh(class UStaticMeshComponent* MeshComponent, class UObject* __WorldContext, bool* SuccessfullyDeactivatedParticle, bool FoundParticle, bool CallFunc_IsValid_ReturnValue, TArray<class USceneComponent*>& CallFunc_GetChildrenComponents_Children, int32 CallFunc_Array_Length_ReturnValue, int32 CallFunc_Array_Length_ReturnValue2, int32 Temp_int_Array_Index_Variable, bool CallFunc_GreaterEqual_IntInt_ReturnValue, class USceneComponent* CallFunc_Array_Get_Item, class UParticleSystemComponent* K2Node_DynamicCast_AsParticle_System_Component, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsValid_ReturnValue2, int32 Temp_int_Loop_Counter_Variable, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue);
	void HasPlayerCompletedQuestObjective(class AFortPlayerController* PlayerController, class UFortQuestItemDefinition* QuestReference, class FName QuestBackendObjectiveName, class UObject* __WorldContext, class AFortPlayerController** PlayerControllerOut, bool* CompletedQuestObjective, bool HasCompletedObjective, bool CallFunc_EqualEqual_NameName_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue2, class UFortQuestManager* CallFunc_GetQuestManager_ReturnValue, class UFortQuestItem* CallFunc_GetQuestWithDefinition_ReturnValue, bool CallFunc_HasCompletedObjectiveWithName_ReturnValue);
	void GetContributingControllersNearActor(float Distance, class AActor* Actor, class UObject* __WorldContext, TArray<class AFortPlayerController*>* PlayerControllersNearby, bool* SuccessfullyFoundPlayer, const TArray<class AFortPlayerController*>& ControllersNearbyArray, bool FoundPlayer, bool CallFunc_AnyPlayerNearActor_IsPlayerNearActor, TArray<class AFortPlayerPawn*>& CallFunc_AnyPlayerNearActor_PlayersNearActor, bool CallFunc_IsValid_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, class AFortPlayerPawn* CallFunc_Array_Get_Item, class AController* CallFunc_GetController_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, class AFortPlayerController* K2Node_DynamicCast_AsFort_Player_Controller, bool K2Node_DynamicCast_bSuccess, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Array_AddUnique_ReturnValue);
	void PointLocationsBetweenTwoVectors(const struct FVector& Vector_1, const struct FVector& Vector_2, int32 HowManyPoints, class UObject* __WorldContext, TArray<struct FVector>* VectorPoints, bool* SuccessfullyFoundPoints, bool WasSuccessful, const TArray<struct FVector>& ResultVectorArray, const struct FVector& DifferenceVector, bool CallFunc_GreaterEqual_IntInt_ReturnValue, const struct FVector& CallFunc_Subtract_VectorVector_ReturnValue, const struct FVector& CallFunc_Divide_VectorInt_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_GreaterEqual_IntInt_ReturnValue2, int32 Temp_int_Variable, int32 CallFunc_Add_IntInt_ReturnValue, const struct FVector& CallFunc_Multiply_VectorInt_ReturnValue, const struct FVector& CallFunc_Add_VectorVector_ReturnValue, int32 CallFunc_Array_AddUnique_ReturnValue, bool CallFunc_LessEqual_IntInt_ReturnValue);
	void GetCurrentDifficulty(class UObject* __WorldContext, float* Difficulty, bool* Success, class AGameStateBase* CallFunc_GetGameState_ReturnValue, class AFortGameStateZone* K2Node_DynamicCast_AsFort_Game_State_Zone, bool K2Node_DynamicCast_bSuccess, float CallFunc_GetGameDifficulty_ReturnValue);
	void ApplyDifficultyOffset(class FName RowName, float BaseDifficulty, class UObject* __WorldContext, bool* Success, enum class EEvaluateCurveTableResult CallFunc_EvaluateCurveTableRow_OutResult, float CallFunc_EvaluateCurveTableRow_OutXY, float CallFunc_GetCurrentDifficulty_Difficulty, bool CallFunc_GetCurrentDifficulty_Success, bool K2Node_SwitchEnum_CmpSuccess, float CallFunc_Subtract_FloatFloat_ReturnValue, float CallFunc_Add_FloatFloat_ReturnValue);
	void DistanceBetweenTwoVectors(const struct FVector& Vector1, const struct FVector& Vector2, class UObject* __WorldContext, float* Distance, const struct FVector& CallFunc_Subtract_VectorVector_ReturnValue, float CallFunc_VSize_ReturnValue);
	void HasPlayerCompletedQuest(class AFortPlayerController* PlayerController, class UFortQuestItemDefinition* QuestReference, class FName QuestBackendName, class UObject* __WorldContext, class AFortPlayerController** PlayerControllerOut, bool* CompletedQuest, bool HasCompletedQuest, bool CallFunc_EqualEqual_NameName_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue2, class UFortQuestManager* CallFunc_GetQuestManager_ReturnValue, class UFortQuestItem* CallFunc_GetQuestWithDefinition_ReturnValue, bool CallFunc_HasCompletedQuest_ReturnValue, bool CallFunc_HasCompletedObjectiveWithName_ReturnValue);
	void SeperatePlayersWhoNeedQuest(class UFortQuestItemDefinition* QuestItemReference, class FName QuestObjectiveBackendName, class UObject* __WorldContext, TArray<class AFortPlayerController*>* PlayersWhoNeedQuest, TArray<class AFortPlayerController*>* PlayersWhoDoNotNeedQuest, const TArray<class AFortPlayerController*>& NotRequireQuest, const TArray<class AFortPlayerController*>& RequireQuest, int32 Temp_int_Array_Index_Variable, TArray<class AFortPlayerController*>& CallFunc_GetAllFortPlayerControllers_ReturnValue, class AFortPlayerController* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_IsValid_ReturnValue, class UFortQuestManager* CallFunc_GetQuestManager_ReturnValue, class UFortQuestItem* CallFunc_GetQuestWithDefinition_ReturnValue, int32 Temp_int_Loop_Counter_Variable, bool CallFunc_HasCompletedObjectiveWithName_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, bool CallFunc_IsValid_ReturnValue2, int32 CallFunc_Array_AddUnique_ReturnValue, int32 CallFunc_Array_AddUnique_ReturnValue2, int32 CallFunc_Array_AddUnique_ReturnValue3);
	void BasicBuildingItemDrop(enum class EnumEventWorldItemDrop Item_Drop_Level, const struct FVector& LootDropLocation, class UObject* __WorldContext, int32 ItemsToSpawnPerRoll, const struct FVector& SpawnVector, float CallFunc_RandomFloatInRange_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, float CallFunc_RandomFloatInRange_ReturnValue2, float CallFunc_RandomFloatInRange_ReturnValue3, float CallFunc_RandomFloatInRange_ReturnValue4, float CallFunc_RandomFloatInRange_ReturnValue5, float CallFunc_RandomFloatInRange_ReturnValue6, int32 Temp_int_Variable, bool CallFunc_LessEqual_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, float CallFunc_BreakVector_X, float CallFunc_BreakVector_Y, float CallFunc_BreakVector_Z, float CallFunc_BreakVector_X2, float CallFunc_BreakVector_Y2, float CallFunc_BreakVector_Z2, float CallFunc_Add_FloatFloat_ReturnValue, float CallFunc_Add_FloatFloat_ReturnValue2, float CallFunc_Add_FloatFloat_ReturnValue3, float CallFunc_Add_FloatFloat_ReturnValue4, float CallFunc_Add_FloatFloat_ReturnValue5, const struct FVector& CallFunc_MakeVector_ReturnValue, float CallFunc_Add_FloatFloat_ReturnValue6, class AFortPickup* CallFunc_K2_SpawnPickupInWorld_ReturnValue, const struct FVector& CallFunc_MakeVector_ReturnValue2, class AFortPickup* CallFunc_K2_SpawnPickupInWorld_ReturnValue2, float CallFunc_BreakVector_X3, float CallFunc_BreakVector_Y3, float CallFunc_BreakVector_Z3, bool K2Node_MultiGate_FirstRun, int32 K2Node_MultiGate_Data, bool K2Node_MultiGate_ScratchBool, int32 K2Node_MultiGate_ScratchIndex, float CallFunc_Add_FloatFloat_ReturnValue7, float CallFunc_Add_FloatFloat_ReturnValue8, float CallFunc_Add_FloatFloat_ReturnValue9, const struct FVector& CallFunc_MakeVector_ReturnValue3, class AFortPickup* CallFunc_K2_SpawnPickupInWorld_ReturnValue3);
	void GrantSurvivorBadge(int32 LootLevelIn, enum class ESurvivorBadgeTypes BadgeType, class UObject* __WorldContext, const TArray<class UFortItemDefinition*>& GoldBadges, const TArray<class UFortItemDefinition*>& SilverBadges, const TArray<class UFortItemDefinition*>& BronzeBadges, TArray<class UFortItemDefinition*>& K2Node_MakeArray_Array, bool K2Node_SwitchEnum_CmpSuccess, TArray<class UFortItemDefinition*>& K2Node_MakeArray_Array2, TArray<class UFortItemDefinition*>& K2Node_MakeArray_Array3, class UFortItemDefinition* CallFunc_Array_Get_Item, class UFortItemDefinition* CallFunc_Array_Get_Item2, class UFortWorldItemDefinition* K2Node_DynamicCast_AsFort_World_Item_Definition, bool K2Node_DynamicCast_bSuccess, class UFortWorldItemDefinition* K2Node_DynamicCast_AsFort_World_Item_Definition2, bool K2Node_DynamicCast_bSuccess2, class UFortItemDefinition* CallFunc_Array_Get_Item3, class UFortWorldItemDefinition* K2Node_DynamicCast_AsFort_World_Item_Definition3, bool K2Node_DynamicCast_bSuccess3, const class FString& CallFunc_GetDisplayName_ReturnValue);
	void GetBuildingRecommendation(class FName RowName, class UObject* __WorldContext, int32* BuildingCount, bool* RowFound, float CallFunc_GetCurrentDifficulty_Difficulty, bool CallFunc_GetCurrentDifficulty_Success, enum class EEvaluateCurveTableResult CallFunc_EvaluateCurveTableRow_OutResult, float CallFunc_EvaluateCurveTableRow_OutXY, int32 CallFunc_Round_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess);
	void Random_360_VectorInRange(float MinDistance, float MaxDistance, class UObject* __WorldContext, struct FVector* Random_Vector_Result_, float CallFunc_RandomFloatInRange_ReturnValue, float CallFunc_RandomFloatInRange_ReturnValue2, const struct FVector& CallFunc_MakeVector_ReturnValue, const struct FVector& CallFunc_RotateAngleAxis_ReturnValue);
	void AnyPawnNearActor(float DistanceToCheck, class AActor* Actor, class UObject* __WorldContext, bool* IsPawnNearActor, TArray<class AFortPawn*>* PawnsNearActor, const TArray<class AFortPawn*>& Pawns, int32 Temp_int_Array_Index_Variable, TArray<class AFortPawn*>& CallFunc_GetAllActorsOfClass_OutActors, class AFortPawn* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, float CallFunc_GetDistanceTo_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_LessEqual_FloatFloat_ReturnValue, int32 Temp_int_Loop_Counter_Variable, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Array_Length_ReturnValue2, int32 CallFunc_Array_AddUnique_ReturnValue, bool CallFunc_GreaterEqual_IntInt_ReturnValue);
	void GiveQuestUpdateToPlayers(class UFortQuestItemDefinition* Quest_Reference, class FName Quest_Objective_Backend_Name, const struct FDataTableRowHandle& ObjectiveStatEvent, TArray<class AFortPlayerController*>& PlayerControllersForUpdate, class UObject* __WorldContext, int32 Temp_int_Array_Index_Variable, int32 CallFunc_Array_Length_ReturnValue, class AFortPlayerController* CallFunc_Array_Get_Item, bool CallFunc_IsValid_ReturnValue, class UFortQuestManager* CallFunc_GetQuestManager_ReturnValue, class UFortQuestItem* CallFunc_GetQuestWithDefinition_ReturnValue, bool CallFunc_IsValid_ReturnValue2, bool CallFunc_HasCompletedObjectiveWithName_ReturnValue, int32 Temp_int_Loop_Counter_Variable, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue);
	void DropChance(float DropPercentChance, class UObject* __WorldContext, bool* DropResult, float CallFunc_FClamp_ReturnValue, bool CallFunc_GreaterEqual_FloatFloat_ReturnValue, float CallFunc_RandomFloatInRange_ReturnValue, bool CallFunc_LessEqual_FloatFloat_ReturnValue);
	void AnyPlayerNearActor(float DistanceToCheck, class AActor* Actor, class UObject* __WorldContext, bool* IsPlayerNearActor, TArray<class AFortPlayerPawn*>* PlayersNearActor, const TArray<class AFortPlayerPawn*>& PlayerPawns, TArray<class AFortPlayerPawn*>& CallFunc_GetAllFortPlayerPawns_OutFortPlayerPawns, bool CallFunc_IsValid_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, class AFortPlayerPawn* CallFunc_Array_Get_Item, float CallFunc_GetDistanceTo_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_LessEqual_FloatFloat_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Array_Length_ReturnValue2, int32 CallFunc_Array_AddUnique_ReturnValue, bool CallFunc_GreaterEqual_IntInt_ReturnValue);
	void FlashObjectiveUI(class AFortObjectiveBase* Objective_Reference, class UObject* __WorldContext, const struct FGameplayTagContainer& CallFunc_MakeLiteralGameplayTagContainer_ReturnValue);
	void NPC_DroneStopRescue(class AActor* Actor, class AActor* Instigator, class UObject* __WorldContext, const struct FStruct_SurvivorScriptedAbilities& SurvivorAbilityStruct, const struct FGameplayEventData& K2Node_MakeStruct_GameplayEventData);
	void NPC_DroneStartRescue(class AActor* Actor, class AActor* Instigator, class UObject* __WorldContext, const struct FStruct_SurvivorScriptedAbilities& SurvivorAbilityStruct, const struct FGameplayEventData& K2Node_MakeStruct_GameplayEventData);
	void ListPlayersWhoNeedQuest(class UFortQuestItemDefinition* Quest_Reference, class FName Quest_Backend_Name, class UObject* __WorldContext, TArray<class AFortPlayerController*>* Player_Controllers_Who_Require_The_Quest, bool* DoesAnyoneRequireTheQuest, bool PlayerNeededTheQuest, const TArray<class AFortPlayerController*>& PlayersWhoRequireQuest, TArray<class AFortPlayerController*>& CallFunc_GetAllFortPlayerControllers_ReturnValue, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Array_Length_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Array_Length_ReturnValue2, int32 Temp_int_Array_Index_Variable, bool CallFunc_GreaterEqual_IntInt_ReturnValue, class AFortPlayerController* CallFunc_Array_Get_Item, class UFortQuestManager* CallFunc_GetQuestManager_ReturnValue, bool CallFunc_HasCompletedObjectiveWithName_ReturnValue, int32 CallFunc_Array_AddUnique_ReturnValue, int32 CallFunc_Array_Length_ReturnValue3, bool CallFunc_GreaterEqual_IntInt_ReturnValue2);
	void DoesAnyoneRequireQuest(class UFortQuestItemDefinition* QuestReference, class FName Quest_Backend_Name, class UObject* __WorldContext, bool* SomePlayerNeedsTheQuest, bool PlayerNeedsQuest, int32 Temp_int_Array_Index_Variable, TArray<class AFortPlayerController*>& CallFunc_GetAllFortPlayerControllers_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, class AFortPlayerController* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue2, class UFortQuestManager* CallFunc_GetQuestManager_ReturnValue, bool CallFunc_GreaterEqual_IntInt_ReturnValue, class UFortQuestItem* CallFunc_GetQuestWithDefinition_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_HasCompletedObjectiveWithName_ReturnValue, int32 Temp_int_Loop_Counter_Variable, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, bool Temp_bool_True_if_break_was_hit_Variable, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_BooleanAND_ReturnValue);
	void QuestObjectiveCountAchieved(class AFortPlayerController* PlayerControllerReference, class UFortQuestItemDefinition* Quest_Item_Reference, const struct FDataTableRowHandle& ObjectiveStatHandle, class UObject* __WorldContext, int32* Quest_Count_Achieved, int32* Quest_Count_Required, bool* SuccessfullyFoundCount, bool bSuccessfullyFoundStage, bool CallFunc_IsValid_ReturnValue, class UFortQuestManager* CallFunc_GetQuestManager_ReturnValue, class UFortQuestItem* CallFunc_GetQuestWithDefinition_ReturnValue, class UFortQuestObjectiveInfo* CallFunc_GetObjectiveInfo_ReturnValue, bool CallFunc_IsValid_ReturnValue2);
	void HighlightQuestActor(class AActor* ActorToHighlight, bool HighlightEnabled, class UObject* __WorldContext, class ABuildingActor* K2Node_DynamicCast_AsBuilding_Actor, bool K2Node_DynamicCast_bSuccess, float CallFunc_GetScalarParameterValue_ReturnValue, class ABuildingSMActor* K2Node_DynamicCast_AsBuilding_SMActor, bool K2Node_DynamicCast_bSuccess2, int32 CallFunc_FTrunc_ReturnValue, class UStaticMeshComponent* CallFunc_GetBuildingMeshComponent_ReturnValue, class UStaticMeshComponent* CallFunc_GetBuildingMeshComponent_ReturnValue2, float CallFunc_GetScalarParameterValue_ReturnValue2, int32 CallFunc_FTrunc_ReturnValue2);
	void DoesPlayerHaveQuest(class AFortPlayerController* PlayerController, class UFortQuestItemDefinition* Quest_Item_Reference, class FName Quest_Item_Objective_Backend_Name, class UObject* __WorldContext, bool* QuestValid, class AFortPlayerController** PlayerControllerRef, class UFortQuestManager* CallFunc_GetQuestManager_ReturnValue, bool CallFunc_IsValid_ReturnValue, class UFortQuestItem* CallFunc_GetQuestWithDefinition_ReturnValue, bool CallFunc_HasCompletedObjectiveWithName_ReturnValue, bool CallFunc_IsValid_ReturnValue2, bool CallFunc_IsValid_ReturnValue3);
	void GetObjectiveBadgeIconBrush(class AFortObjectiveBase* Objective, const struct FGameplayTag& RewardTag, class UObject* __WorldContext, struct FSlateBrush* IconBrush, class UFortBadgeItemDefinition* BadgeItem, bool Temp_bool_True_if_break_was_hit_Variable, TArray<class UFortWorldItemDefinition*>& CallFunc_GetRewardItemsByTag_OutRewardItems, int32 CallFunc_Array_Length_ReturnValue, int32 CallFunc_Array_Length_ReturnValue2, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable, class UFortWorldItemDefinition* CallFunc_Array_Get_Item, class UFortBadgeItemDefinition* K2Node_DynamicCast_AsFort_Badge_Item_Definition, bool K2Node_DynamicCast_bSuccess, int32 Temp_int_Loop_Counter_Variable, const struct FSlateBrush& CallFunc_GetSmallPreviewImageBrush_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue2, int32 CallFunc_Add_IntInt_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_IsValid_ReturnValue);
	void UnRegisterUI_UpdatesWithDamageEvents(class AActor* ActorToUnRegisterWith, class AFortMissionState* MissionState, class UObject* __WorldContext, class ABuildingActor* K2Node_DynamicCast_AsBuilding_Actor, bool K2Node_DynamicCast_bSuccess, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate2, class AFortPawn* K2Node_DynamicCast_AsFort_Pawn, bool K2Node_DynamicCast_bSuccess2);
	void RegisterUI_UpdatesWithDamageEvents(class AActor* ActorToRegisterWith, class AFortMissionState* MissionState, class UObject* __WorldContext, class ABuildingActor* K2Node_DynamicCast_AsBuilding_Actor, bool K2Node_DynamicCast_bSuccess, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate2, class AFortPawn* K2Node_DynamicCast_AsFort_Pawn, bool K2Node_DynamicCast_bSuccess2);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
