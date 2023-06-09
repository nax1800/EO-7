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

// 0x28 (0x420 - 0x3F8)
// BlueprintGeneratedClass Announce_HexsylvaniaCine.Announce_HexsylvaniaCine_C
class AAnnounce_HexsylvaniaCine_C : public AFortClientAnnouncement_Cinematic
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x3F8(0x8)(Transient, DuplicateTransient)
	class USceneComponent*                       DefaultSceneRoot;                                  // 0x400(0x8)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UMediaSource*                          HexylvaniaMediaSource;                             // 0x408(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         AllowSkipping;                                     // 0x410(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	enum class EFortUIState                      StartingState;                                     // 0x411(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2BE8[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UFortMediaSubtitlesPlayer*             HexylvaniaSubtitlesPlayer;                         // 0x418(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("Announce_HexsylvaniaCine_C");
		return Clss;
	}

	void UserConstructionScript();
	void OnStateEntered_9C83DA6340C5A54C51BA50B49786F065();
	void OnStateEntered_FE03E71B4E723372BF2F0F96EC45C24B();
	void OnClientAnnouncementStart();
	void OnClientAnnouncementStop();
	void OnPlayerSkippedCutscene();
	void HandleClientEvent_CinematicFinishedPlaying(class UObject* EventSource, class UObject* EventFocus, struct FFortClientEvent& ClientEvent);
	void HandleAllowSkip();
	void ExecuteUbergraph_Announce_HexsylvaniaCine(int32 EntryPoint, class UFortAsyncAction_SetUIState* CallFunc_SetUIState_ReturnValue, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, bool CallFunc_IsValid_ReturnValue, bool Temp_bool_Has_Been_Initd_Variable, bool Temp_bool_IsClosed_Variable, bool Temp_bool_Has_Been_Initd_Variable2, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate2, class UObject* K2Node_HandleClientEvent_EventSource, class UObject* K2Node_HandleClientEvent_EventFocus, const struct FFortClientEvent& K2Node_HandleClientEvent_ClientEvent, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate3, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue, bool Temp_bool_IsClosed_Variable2, class UFortUIManagerWidget_NUI* CallFunc_GetUIManagerWidget_ReturnValue, enum class EFortUIState CallFunc__BPGetCurrentUIState_ReturnValue, class UFortAsyncAction_SetUIState* CallFunc_SetUIState_ReturnValue2, bool CallFunc_IsValid_ReturnValue2);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
