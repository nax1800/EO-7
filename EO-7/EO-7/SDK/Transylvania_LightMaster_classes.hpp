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

// 0xC (0x10E0 - 0x10D4)
// BlueprintGeneratedClass Transylvania_LightMaster.Transylvania_LightMaster_C
class ATransylvania_LightMaster_C : public AParent_BuildingPropActor_C
{
public:
	uint8                                        Pad_2B4C[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UPointLightComponent*                  PointLight;                                        // 0x10D8(0x8)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("Transylvania_LightMaster_C");
		return Clss;
	}

	void UserConstructionScript(int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable2, int32 CallFunc_Add_IntInt_ReturnValue2, int32 Temp_int_Array_Index_Variable2, TArray<class USpotLightComponent*>& CallFunc_GetComponentsByClass_ReturnValue, class UPointLightComponent* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, int32 CallFunc_Array_AddUnique_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, TArray<class UPointLightComponent*>& CallFunc_GetComponentsByClass_ReturnValue2, class UPointLightComponent* CallFunc_Array_Get_Item2, int32 CallFunc_Array_Length_ReturnValue2, int32 CallFunc_Array_AddUnique_ReturnValue2, bool CallFunc_Less_IntInt_ReturnValue2);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
