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

// 0x18 (0x250 - 0x238)
// WidgetBlueprintGeneratedClass ActiveModifiersPanelContent.ActiveModifiersPanelContent_C
class UActiveModifiersPanelContent_C : public UCommonUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x238(0x8)(Transient, DuplicateTransient)
	class UImage*                                Image_0;                                           // 0x240(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UMissionDetailsModifierList_C*         MissionDetailsModifierList;                        // 0x248(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("ActiveModifiersPanelContent_C");
		return Clss;
	}

	void Init(TArray<class UFortGameplayModifierItemDefinition*>& InModifiers);
	void Construct();
	void ExecuteUbergraph_ActiveModifiersPanelContent(int32 EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif