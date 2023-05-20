#pragma once

#include "Framework.h"

namespace Functions
{
	std::string PlayButton = "Function AthenaMatchmakingWidget.AthenaMatchmakingWidget_C.BndEvt__BP_PlayButton_K2Node_ComponentBoundEvent_1_CommonButtonClicked__DelegateSignature";
	std::string StartMatch = "Function Engine.GameMode.ReadyToStartMatch";
	std::string LoadingScreenDropped = "Function FortniteGame.FortPlayerController.ServerLoadingScreenDropped";
	std::string AircraftJump = "Function FortniteGame.FortPlayerControllerAthena.ServerAttemptAircraftJump";
	std::string AircraftExitedZone = "";
	std::string ExecuteInventoryItem = "Function FortniteGame.FortPlayerController.ClientExecuteInventoryItem";
	std::string AttemptInteract = "";
	std::string HandlePickup = "";
	std::string TryActivateAbility = "";
	std::string AbilityRPCBatch = "";
	std::string PawnDied = "";
	std::string ReceiveTick = "Function Engine.Actor.ReceiveTick";
	std::string ReturnToMainMenu = "Function FortniteGame.FortPlayerController.ServerReturnToMainMenu";
}

namespace Gameplay
{

	bool bMatchStarted = false;
	bool bPressedPlay = false;

	void* ProcessEventHook(SDK::UObject* Object, SDK::UFunction* Function, void* Parameters)
	{
		std::string FunctionFullName = Function->GetFullName();
		std::string FunctionName = Function->GetName();

		std::string ObjectFullName = Object->GetFullName();

		if (FunctionFullName == Functions::PlayButton && !bPressedPlay)
		{
			Globals::GetController()->SwitchLevel(L"Athena_Terrain");
			bPressedPlay = true;
		}

		if (FunctionFullName == Functions::StartMatch && bPressedPlay && !bMatchStarted)
		{
			SDK::InitGObjects();
			Player::Spawn();

			Inventory::Setup();

			reinterpret_cast<SDK::AFortPlayerController*>((*Globals::GWorld)->OwningGameInstance->LocalPlayers[0]->PlayerController)->ServerReadyToStartMatch();
			reinterpret_cast<SDK::AFortGameMode*>((*Globals::GWorld)->AuthorityGameMode)->StartMatch();

			bMatchStarted = true;
		}

		if (FunctionFullName == Functions::LoadingScreenDropped && bMatchStarted)
		{
			Globals::GetController()->bHasClientFinishedLoading = true;
			Globals::GetController()->bHasServerFinishedLoading = true;
			Globals::GetController()->OnRep_bHasServerFinishedLoading();
			Globals::GetController()->ServerSetClientHasFinishedLoading(true);

			static_cast<SDK::UFortCheatManager*>(Globals::GetController()->CheatManager)->ToggleInfiniteAmmo();
		}

		if (FunctionFullName == Functions::AircraftJump || FunctionName == Functions::AircraftExitedZone)
		{
			auto Aircraft = Helpers::FindActor(SDK::AFortAthenaAircraft::StaticClass());
			if (Globals::GetController()->IsInAircraft())
			{
				if (Globals::Pawn)
					Globals::Pawn->K2_DestroyActor();

				Player::Spawn(Aircraft->K2_GetActorLocation());
			}
		}

		if (FunctionFullName == Functions::ExecuteInventoryItem)
		{
			auto Params = (SDK::Params::AFortPlayerController_ServerExecuteInventoryItem_Params*)Parameters;
			auto ItemGuid = Params->ItemGuid;
			auto ItemInstances = Globals::Inventory->Inventory.ItemInstances;

			for (int i = 0; i < ItemInstances.Num(); i++)
			{
				auto ItemInstance = ItemInstances[i];
				auto ItemDefinition = (SDK::UFortWeaponItemDefinition*)ItemInstance->GetItemDefinitionBP();
				auto ItemGuidB = ItemInstance->GetItemGuid();

				if (Helpers::AreGuidsEqual(ItemGuid, ItemGuidB))
				{
					Globals::Pawn->EquipWeaponDefinition(ItemDefinition, ItemGuid);
				}
			}
		}

		if (FunctionFullName == Functions::ReceiveTick && bMatchStarted)
		{
			if (GetAsyncKeyState(VK_SPACE) && 0x8000 && Globals::Pawn->CanJump() && !Globals::Pawn->IsJumpProvidingForce() && !Globals::GetController()->IsInAircraft() && Globals::Pawn) //TEMP : Need Abilities
				Globals::Pawn->Jump();

			Globals::Pawn->CurrentMovementStyle = SDK::EFortMovementStyle::Sprinting;
		}

		if (FunctionFullName == Functions::ReturnToMainMenu && bMatchStarted)
		{
			bMatchStarted = false;
			bPressedPlay = false;
			Globals::GetController()->ClientTravel(L"Frontend", SDK::ETravelType::TRAVEL_Absolute, false, {});
		}

		if (FunctionFullName.contains("TryActivateAbility") || FunctionFullName.contains("AbilityRPCBatch"))
		{
			LogInfo(FunctionFullName);
		}

		return ProcessEvent(Object, Function, Parameters);
	}

	void StartPEHook()
	{
		DetourTransactionBegin();
		DetourUpdateThread(GetCurrentThread());
		DetourAttach(&(PVOID&)ProcessEvent, ProcessEventHook);
		DetourTransactionCommit();
		LogInfo("'ProcessEvent' Hook has started.");
	}
}
