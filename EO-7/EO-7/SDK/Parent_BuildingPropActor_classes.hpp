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

// 0x104 (0x10D4 - 0xFD0)
// BlueprintGeneratedClass Parent_BuildingPropActor.Parent_BuildingPropActor_C
class AParent_BuildingPropActor_C : public ABuildingProp
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0xFD0(0x8)(Transient, DuplicateTransient)
	bool                                         DebugWind;                                         // 0xFD8(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3DFE[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class UMaterialInterface*>            IntenseWindMaterialsForPreview;                    // 0xFE0(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<class UMaterialInterface*>            OriginalMaterials;                                 // 0xFF0(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	class UStaticMeshComponent*                  Wind_Intensity_Debug_Mesh;                         // 0x1000(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterialInstanceDynamic*              Debug_TempMaterial;                                // 0x1008(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        Debug_Wind_Intensity;                              // 0x1010(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        DebugWindYaw;                                      // 0x1014(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FDayPhaseFloats                       Light_Intensity_Over_Time_of_Day_;                 // 0x1018(0x10)(Edit, BlueprintVisible, ExposeOnSpawn, HasGetValueTypeHash)
	struct FDayPhaseFloats                       Emissive_Intensity_Over_Time_of_Day;               // 0x1028(0x10)(Edit, BlueprintVisible, HasGetValueTypeHash)
	int32                                        CodeControlled_NumberOfMaterials;                  // 0x1038(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3DFF[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FLinearColor>                  CodeControlled_EmissiveColor;                      // 0x1040(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<class ULightComponent*>               TimeOfDayControlledLightsArray;                    // 0x1050(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<float>                                CodeControlled_LightConeOpacity;                   // 0x1060(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	bool                                         Animate_Emissive_and_Lights_Over_Time;             // 0x1070(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)
	uint8                                        Pad_3E00[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        Day_Phase_Transition_Length;                       // 0x1074(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Disable_TOD_Lights_and_Material_Emissive_Values;   // 0x1078(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         Disable_Static_Mesh_Shadow_Casting_When_Lights_Are_Active; // 0x1079(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3E01[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UStaticMesh*                           AlternateShadowStaticMesh;                         // 0x1080(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Use_An_Alternate_Shadow_Mesh_When_The_Light_is_Off_; // 0x1088(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3E02[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FVector>                       TimeOfDayControlledLightsPositionArray;            // 0x1090(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	float                                        Volumetric_Light_Scattering_Intensity;             // 0x10A0(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Cast_Volumetric_Shadows;                           // 0x10A4(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         Animate_Lights_With_A_Curve___Disables_time_of_day_light_controls; // 0x10A5(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3E03[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UCurveFloat*                           LightAnimationCurve;                               // 0x10A8(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CodeControlled_Animation_Curve_Animation_Length;   // 0x10B0(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3E04[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<float>                                CodeControlled_Initial_Light_Intensity___used_in_conjunction_with_curve_based_value_animations; // 0x10B8(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	bool                                         Animate_Mesh_MID_Emissive_Value_with_a_Curve___Disables_time_of_day_light_controls; // 0x10C8(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3E05[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        Random_Time_Scale_Percent;                         // 0x10CC(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CodeControlled_CurrentTimeLength;                  // 0x10D0(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("Parent_BuildingPropActor_C");
		return Clss;
	}

	void Call_Animation_Curve_Again();
	void Add_to_TOD_Light_Array(class ULightComponent*& NewItem, class AFortTimeOfDayManager* CallFunc_GetTimeOfDayManagerFromContext_ReturnValue, enum class EFortDayPhase CallFunc_GetCurrentDayPhase_ReturnValue, bool CallFunc_IsValid_ReturnValue, enum class EFortDayPhase Temp_byte_Variable, int32 CallFunc_Array_AddUnique_ReturnValue, float K2Node_Select_Default);
	void Set__MID_Values_For_Lights(enum class EFortDayPhase CallFunc_GetCurrentDayPhase_ReturnValue, enum class EFortDayPhase CallFunc_GetPreviousDayPhase_ReturnValue, class AFortTimeOfDayManager* CallFunc_GetTimeOfDayManagerFromContext_ReturnValue, enum class EFortDayPhase Temp_byte_Variable, bool CallFunc_IsValid_ReturnValue, float Temp_float_Variable, int32 Temp_int_Variable, enum class EFortDayPhase Temp_byte_Variable2, class UMaterialInstanceDynamic* CallFunc_GetAnimatingMID_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, float Temp_float_Variable2, class AFortTimeOfDayManager* CallFunc_GetTimeOfDayManagerFromContext_ReturnValue2, enum class EFortDayPhase CallFunc_GetPreviousDayPhase_ReturnValue2, bool CallFunc_IsValid_ReturnValue2, enum class EFortDayPhase CallFunc_GetCurrentDayPhase_ReturnValue2, enum class EFortDayPhase Temp_byte_Variable3, float CallFunc_Array_Get_Item, float CallFunc_Multiply_FloatFloat_ReturnValue, enum class EFortDayPhase Temp_byte_Variable4, float CallFunc_Array_Get_Item2, float CallFunc_Multiply_FloatFloat_ReturnValue2, class UStaticMeshComponent* CallFunc_GetBuildingMeshComponent_ReturnValue, int32 CallFunc_GetNumMaterials_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue, const struct FLinearColor& CallFunc_Array_Get_Item3, bool CallFunc_LessEqual_IntInt_ReturnValue, const struct FLinearColor& CallFunc_Multiply_LinearColorFloat_ReturnValue, const struct FLinearColor& CallFunc_Multiply_LinearColorFloat_ReturnValue2, float K2Node_Select_Default, float K2Node_Select2_Default, float K2Node_Select3_Default, float K2Node_Select4_Default, float CallFunc_Lerp_ReturnValue, float CallFunc_Lerp_ReturnValue2);
	void Set_Light_parameters(float Previous_to_Current_Day_Phase_Alpha, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, enum class EFortDayPhase Temp_byte_Variable, enum class EFortDayPhase CallFunc_GetCurrentDayPhase_ReturnValue, enum class EFortDayPhase CallFunc_GetPreviousDayPhase_ReturnValue, class AFortTimeOfDayManager* CallFunc_GetTimeOfDayManagerFromContext_ReturnValue, bool CallFunc_IsValid_ReturnValue, class ULightComponent* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, float K2Node_Select_Default, enum class EFortDayPhase Temp_byte_Variable2, float K2Node_Select2_Default, float CallFunc_Lerp_ReturnValue);
	void UserConstructionScript(int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, bool CallFunc_IsDedicatedServer_ReturnValue, int32 Temp_int_Array_Index_Variable2, class UStaticMeshComponent* CallFunc_GetBuildingMeshComponent_ReturnValue, class UCurveLinearColor* CallFunc_GetWindSpeedCurveForPreview_ReturnValue, class UCurveLinearColor* CallFunc_GetWindPannerSpeedCurveForPreview_ReturnValue, bool CallFunc_IsValid_ReturnValue, const struct FLinearColor& CallFunc_GetLinearColorValue_ReturnValue, float CallFunc_BreakColor_R, float CallFunc_BreakColor_G, float CallFunc_BreakColor_B, float CallFunc_BreakColor_A, const struct FVector& CallFunc_MakeVector_ReturnValue, const struct FVector& CallFunc_RotateAngleAxis_ReturnValue, float CallFunc_BreakVector_X, float CallFunc_BreakVector_Y, float CallFunc_BreakVector_Z, const struct FLinearColor& CallFunc_GetLinearColorValue_ReturnValue2, const struct FLinearColor& CallFunc_MakeColor_ReturnValue, float CallFunc_BreakColor_R2, float CallFunc_BreakColor_G2, float CallFunc_BreakColor_B2, float CallFunc_BreakColor_A2, class UMaterialInterface* CallFunc_Array_Get_Item, TArray<class UMaterialInterface*>& CallFunc_GetIntenseWindMaterialsForPreview_Materials, bool CallFunc_GetIntenseWindMaterialsForPreview_ReturnValue, class UMaterialInstance* K2Node_DynamicCast_AsMaterial_Instance, bool K2Node_DynamicCast_bSuccess, int32 Temp_int_Loop_Counter_Variable2, int32 CallFunc_Add_IntInt_ReturnValue2, class UStaticMeshComponent* CallFunc_GetBuildingMeshComponent_ReturnValue2, TArray<class UMaterialInterface*>& CallFunc_GetMaterials_ReturnValue, bool CallFunc_SetStaticMesh_ReturnValue, class UCurveLinearColor* CallFunc_GetWindSpeedCurveForPreview_ReturnValue2, bool CallFunc_IsValid_ReturnValue2, const class FString& CallFunc_GetDisplayName_ReturnValue, class UCurveLinearColor* CallFunc_GetWindPannerSpeedCurveForPreview_ReturnValue2, bool CallFunc_IsValid_ReturnValue3, bool CallFunc_IsValid_ReturnValue4, const struct FTransform& Temp_struct_Variable, int32 CallFunc_Array_Length_ReturnValue, class UStaticMeshComponent* CallFunc_AddComponent_ReturnValue, int32 CallFunc_Array_Length_ReturnValue2, bool CallFunc_EqualEqual_IntInt_ReturnValue, const class FString& CallFunc_GetDisplayName_ReturnValue2, class UStaticMeshComponent* CallFunc_GetBuildingMeshComponent_ReturnValue3, int32 CallFunc_GetNumMaterials_ReturnValue, bool CallFunc_IsValid_ReturnValue5, bool CallFunc_BooleanOR_ReturnValue, float CallFunc_GetTimeRange_MinTime, float CallFunc_GetTimeRange_MaxTime, bool CallFunc_Not_PreBool_ReturnValue, class ULightComponent* CallFunc_Array_Get_Item2, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_IsValid_ReturnValue6, int32 CallFunc_Array_Length_ReturnValue3, int32 CallFunc_Array_Length_ReturnValue4, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue2, bool CallFunc_Not_PreBool_ReturnValue3, bool CallFunc_BooleanAND_ReturnValue2, bool CallFunc_Not_PreBool_ReturnValue4, class UMaterialInterface* CallFunc_Array_Get_Item3, class UMaterialInstance* K2Node_DynamicCast_AsMaterial_Instance2, bool K2Node_DynamicCast_bSuccess2, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue, int32 CallFunc_Array_Length_ReturnValue5, bool CallFunc_Less_IntInt_ReturnValue2);
	void OnDayPhaseChanged(enum class EFortDayPhase CurrentDayPhase, enum class EFortDayPhase PreviousDayPhase, bool bAtCreation);
	void ReceiveBeginPlay();
	void OnBounceAnimationUpdate(const struct FFortBounceData& Data);
	void Loop_Animation_Curve();
	void ExecuteUbergraph_Parent_BuildingPropActor(int32 EntryPoint, int32 Temp_int_Array_Index_Variable, enum class EFortDayPhase Temp_byte_Variable, enum class EFortDayPhase CallFunc_GetCurrentDayPhase_ReturnValue, int32 Temp_int_Array_Index_Variable2, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable3, enum class EFortDayPhase Temp_byte_Variable2, int32 Temp_int_Variable, class UMaterialInstanceDynamic* CallFunc_GetAnimatingMID_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue2, bool CallFunc_IsDedicatedServer_ReturnValue, enum class EFortDayPhase Temp_byte_Variable3, class UStaticMeshComponent* CallFunc_GetBuildingMeshComponent_ReturnValue, int32 CallFunc_GetNumMaterials_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue, int32 Temp_int_Loop_Counter_Variable2, enum class EFortDayPhase Temp_byte_Variable4, int32 CallFunc_Add_IntInt_ReturnValue3, class UStaticMeshComponent* CallFunc_GetBuildingMeshComponent_ReturnValue2, enum class EFortDayPhase CallFunc_GetCurrentDayPhase_ReturnValue2, int32 CallFunc_GetNumMaterials_ReturnValue2, enum class EFortDayPhase CallFunc_GetPreviousDayPhase_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue2, enum class EFortDayPhase CallFunc_GetPreviousDayPhase_ReturnValue2, int32 Temp_int_Variable2, class UMaterialInstanceDynamic* CallFunc_GetAnimatingMID_ReturnValue2, int32 CallFunc_Add_IntInt_ReturnValue4, class AFortTimeOfDayManager* CallFunc_GetTimeOfDayManagerFromContext_ReturnValue, bool CallFunc_IsValid_ReturnValue, enum class EFortDayPhase Temp_byte_Variable5, class AFortTimeOfDayManager* CallFunc_GetTimeOfDayManagerFromContext_ReturnValue2, int32 Temp_int_Array_Index_Variable4, bool CallFunc_IsValid_ReturnValue2, enum class EFortDayPhase Temp_byte_Variable6, class UStaticMeshComponent* CallFunc_GetBuildingMeshComponent_ReturnValue3, int32 CallFunc_GetNumMaterials_ReturnValue3, int32 Temp_int_Loop_Counter_Variable3, int32 CallFunc_Subtract_IntInt_ReturnValue3, int32 CallFunc_Add_IntInt_ReturnValue5, float Temp_float_Variable, float Temp_float_Variable2, class UStaticMeshComponent* CallFunc_GetBuildingMeshComponent_ReturnValue4, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, int32 CallFunc_GetNumMaterials_ReturnValue4, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue4, class AFortTimeOfDayManager* CallFunc_GetTimeOfDayManagerFromContext_ReturnValue3, float Temp_float_Variable3, bool CallFunc_IsValid_ReturnValue3, int32 Temp_int_Loop_Counter_Variable4, int32 CallFunc_Add_IntInt_ReturnValue6, int32 Temp_int_Array_Index_Variable5, class AFortTimeOfDayManager* CallFunc_GetTimeOfDayManagerFromContext_ReturnValue4, bool CallFunc_IsValid_ReturnValue4, int32 Temp_int_Loop_Counter_Variable5, int32 Temp_int_Variable3, class UMaterialInstanceDynamic* CallFunc_GetAnimatingMID_ReturnValue3, bool CallFunc_LessEqual_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue7, int32 CallFunc_Add_IntInt_ReturnValue8, enum class EFortDayPhase Temp_byte_Variable7, enum class EFortDayPhase CallFunc_GetPreviousDayPhase_ReturnValue3, enum class EFortDayPhase CallFunc_GetCurrentDayPhase_ReturnValue3, enum class EFortDayPhase CallFunc_GetCurrentDayPhase_ReturnValue4, enum class EFortDayPhase CallFunc_GetPreviousDayPhase_ReturnValue4, int32 Temp_int_Loop_Counter_Variable6, int32 CallFunc_Add_IntInt_ReturnValue9, enum class EFortDayPhase CallFunc_GetPreviousDayPhase_ReturnValue5, class AFortTimeOfDayManager* CallFunc_GetTimeOfDayManagerFromContext_ReturnValue5, float Temp_float_Variable4, bool CallFunc_IsValid_ReturnValue5, float Temp_float_Variable5, float CallFunc_GetScalarParameterValue_ReturnValue, class UStaticMeshComponent* CallFunc_GetBuildingMeshComponent_ReturnValue5, int32 Temp_int_Variable4, int32 CallFunc_GetNumMaterials_ReturnValue5, class UMaterialInstanceDynamic* CallFunc_GetAnimatingMID_ReturnValue4, int32 CallFunc_Subtract_IntInt_ReturnValue5, bool CallFunc_LessEqual_IntInt_ReturnValue2, bool CallFunc_LessEqual_IntInt_ReturnValue3, int32 CallFunc_Add_IntInt_ReturnValue10, enum class EFortDayPhase Temp_byte_Variable8, int32 Temp_int_Array_Index_Variable6, int32 Temp_int_Loop_Counter_Variable7, int32 CallFunc_Add_IntInt_ReturnValue11, int32 Temp_int_Array_Index_Variable7, enum class EFortDayPhase Temp_byte_Variable9, float Temp_float_Variable6, enum class EFortDayPhase Temp_byte_Variable10, int32 Temp_int_Array_Index_Variable8, int32 Temp_int_Loop_Counter_Variable8, enum class EFortDayPhase CallFunc_GetCurrentDayPhase_ReturnValue5, int32 CallFunc_Add_IntInt_ReturnValue12, class AFortTimeOfDayManager* CallFunc_GetTimeOfDayManagerFromContext_ReturnValue6, enum class EFortDayPhase Temp_byte_Variable11, bool CallFunc_IsValid_ReturnValue6, float CallFunc_RandomFloatInRange_ReturnValue, enum class EFortDayPhase CallFunc_GetCurrentDayPhase_ReturnValue6, int32 Temp_int_Variable5, float CallFunc_RandomFloatInRange_ReturnValue2, class UMaterialInstanceDynamic* CallFunc_GetAnimatingMID_ReturnValue5, float CallFunc_K2_GetScalarParameterValue_ReturnValue, const struct FLinearColor& CallFunc_K2_GetVectorParameterValue_ReturnValue, bool CallFunc_LessEqual_IntInt_ReturnValue4, int32 CallFunc_Add_IntInt_ReturnValue13, int32 Temp_int_Variable6, float Temp_float_Variable7, class UMaterialInstanceDynamic* CallFunc_GetAnimatingMID_ReturnValue6, bool CallFunc_LessEqual_IntInt_ReturnValue5, int32 CallFunc_Add_IntInt_ReturnValue14, class AFortTimeOfDayManager* CallFunc_GetTimeOfDayManagerFromContext_ReturnValue7, enum class EFortDayPhase CallFunc_GetPreviousDayPhase_ReturnValue6, bool CallFunc_IsValid_ReturnValue7, enum class EFortDayPhase CallFunc_GetCurrentDayPhase_ReturnValue7, enum class EFortDayPhase K2Node_Event_CurrentDayPhase, enum class EFortDayPhase K2Node_Event_PreviousDayPhase, bool K2Node_Event_bAtCreation, enum class EFortDayPhase Temp_byte_Variable12, class ULightComponent* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, class ULightComponent* CallFunc_Array_Get_Item2, int32 CallFunc_Array_Length_ReturnValue2, bool CallFunc_Less_IntInt_ReturnValue2, float K2Node_Select_Default, class ULightComponent* CallFunc_Array_Get_Item3, int32 CallFunc_Array_Length_ReturnValue3, float K2Node_Select2_Default, bool CallFunc_Less_IntInt_ReturnValue3, float CallFunc_Array_Get_Item4, float CallFunc_Multiply_FloatFloat_ReturnValue, float K2Node_Select3_Default, float K2Node_Select4_Default, float K2Node_Select5_Default, float K2Node_Select6_Default, float CallFunc_Lerp_ReturnValue, float CallFunc_Lerp_ReturnValue2, float CallFunc_Multiply_FloatFloat_ReturnValue2, const struct FLinearColor& CallFunc_Array_Get_Item5, const struct FLinearColor& CallFunc_Array_Get_Item6, const struct FLinearColor& CallFunc_Multiply_LinearColorFloat_ReturnValue, const struct FLinearColor& CallFunc_Multiply_LinearColorFloat_ReturnValue2, const struct FLinearColor& CallFunc_Multiply_LinearColorFloat_ReturnValue3, int32 CallFunc_Array_Add_ReturnValue, int32 CallFunc_Array_Length_ReturnValue4, bool CallFunc_EqualEqual_IntInt_ReturnValue, float CallFunc_Array_Get_Item7, float CallFunc_Multiply_FloatFloat_ReturnValue3, float CallFunc_Multiply_FloatFloat_ReturnValue4, float CallFunc_Array_Get_Item8, int32 CallFunc_Array_Add_ReturnValue2, float CallFunc_Multiply_FloatFloat_ReturnValue5, class ULightComponent* CallFunc_Array_Get_Item9, int32 CallFunc_Array_Length_ReturnValue5, bool CallFunc_Less_IntInt_ReturnValue4, float K2Node_Select7_Default, float K2Node_Select8_Default, float K2Node_Select9_Default, float K2Node_Select10_Default, float K2Node_Select11_Default, float CallFunc_Lerp_ReturnValue3, float CallFunc_Lerp_ReturnValue4, float K2Node_Select12_Default, const struct FFortBounceData& K2Node_Event_Data, const struct FLinearColor& CallFunc_Array_Get_Item10, const struct FLinearColor& CallFunc_Multiply_LinearColorFloat_ReturnValue4, bool CallFunc_EqualEqual_ByteByte_ReturnValue, float CallFunc_BreakColor_R, float CallFunc_BreakColor_G, float CallFunc_BreakColor_B, float CallFunc_BreakColor_A, float CallFunc_BreakColor_R2, float CallFunc_BreakColor_G2, float CallFunc_BreakColor_B2, float CallFunc_BreakColor_A2, const struct FVector& CallFunc_MakeVector_ReturnValue, const struct FVector& CallFunc_MakeVector_ReturnValue2, const struct FLinearColor& CallFunc_Multiply_LinearColorFloat_ReturnValue5, enum class EFortDayPhase Temp_byte_Variable13, float K2Node_Select13_Default, class ULightComponent* CallFunc_Array_Get_Item11, float CallFunc_Lerp_ReturnValue5, const struct FVector& CallFunc_Array_Get_Item12, int32 CallFunc_Array_Length_ReturnValue6, const struct FVector& CallFunc_Subtract_VectorVector_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue5, float CallFunc_VSize_ReturnValue, float CallFunc_Divide_FloatFloat_ReturnValue, float CallFunc_FClamp_ReturnValue, class ULightComponent* CallFunc_Array_Get_Item13, float CallFunc_Subtract_FloatFloat_ReturnValue, float CallFunc_SelectFloat_ReturnValue, const struct FVector& CallFunc_K2_GetComponentLocation_ReturnValue, const struct FVector& CallFunc_Multiply_VectorFloat_ReturnValue, bool CallFunc_IsValid_ReturnValue8, const struct FVector& CallFunc_Multiply_VectorFloat_ReturnValue2, const struct FVector& CallFunc_Multiply_VectorFloat_ReturnValue3, int32 CallFunc_Array_Length_ReturnValue7, const struct FVector& CallFunc_Add_VectorVector_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue6, const struct FHitResult& CallFunc_K2_SetWorldLocation_SweepHitResult, class ULightComponent* CallFunc_Array_Get_Item14, int32 CallFunc_Array_Length_ReturnValue8, bool CallFunc_IsValid_ReturnValue9, bool CallFunc_Less_IntInt_ReturnValue7, int32 CallFunc_Array_Length_ReturnValue9, int32 CallFunc_Array_Add_ReturnValue3, bool CallFunc_Greater_IntInt_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue2, bool CallFunc_Not_PreBool_ReturnValue3, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue4, bool CallFunc_BooleanAND_ReturnValue2, int32 CallFunc_Array_Add_ReturnValue4, bool CallFunc_IsValid_ReturnValue10, class ULightComponent* CallFunc_Array_Get_Item15, float CallFunc_Array_Get_Item16, int32 CallFunc_Array_Length_ReturnValue10, bool CallFunc_Less_IntInt_ReturnValue8, int32 CallFunc_Subtract_IntInt_ReturnValue6, bool CallFunc_LessEqual_IntInt_ReturnValue6, bool CallFunc_BooleanOR_ReturnValue, bool CallFunc_BooleanAND_ReturnValue3, bool CallFunc_BooleanOR_ReturnValue2, float CallFunc_Multiply_FloatFloat_ReturnValue6, float CallFunc_Add_FloatFloat_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue7);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
