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

	void* ProcessEventHook(SDK::UObject* Object, SDK::UFunction* Function, void* Parameters)
	{
		std::string FunctionName = Function->GetFullName();

		if (FunctionName == Functions::PlayButton)
		{
			(*Globals::GWorld)->OwningGameInstance->LocalPlayers[0]->PlayerController->SwitchLevel(L"Athena_Terrain");
		}

		if (FunctionName == Functions::StartMatch)
		{
			Globals::Controller = reinterpret_cast<SDK::AFortPlayerControllerAthena*>((*Globals::GWorld)->OwningGameInstance->LocalPlayers[0]->PlayerController);
			auto PlayerState = static_cast<SDK::AFortPlayerStateAthena*>(Globals::Controller->PlayerState);
			PlayerState->TeamIndex = SDK::EFortTeam::HumanPvP_Team1;
			PlayerState->OnRep_TeamIndex();

			Player::Spawn();

			Inventory::Setup();

			reinterpret_cast<SDK::AFortPlayerController*>((*Globals::GWorld)->OwningGameInstance->LocalPlayers[0]->PlayerController)->ServerReadyToStartMatch();
			reinterpret_cast<SDK::AFortGameMode*>((*Globals::GWorld)->AuthorityGameMode)->StartMatch();
			bMatchStarted = true;
		}

		if (FunctionName == Functions::LoadingScreenDropped && bMatchStarted)
		{
			Globals::Controller->bHasClientFinishedLoading = true;
			Globals::Controller->bHasServerFinishedLoading = true;
			Globals::Controller->OnRep_bHasServerFinishedLoading();
			Globals::Controller->ServerSetClientHasFinishedLoading(true);
		}

		if (FunctionName == Functions::AircraftJump || FunctionName == Functions::AircraftExitedZone)
		{
			auto Aircraft = Helpers::FindActor(SDK::AFortAthenaAircraft::StaticClass());
			if (Globals::Controller->IsInAircraft())
			{
				Player::Spawn(Aircraft->K2_GetActorLocation());
			}
		}

		if (FunctionName == Functions::ExecuteInventoryItem)
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

		if (FunctionName == Functions::ReceiveTick && bMatchStarted)
		{
			if (GetAsyncKeyState(VK_SPACE) && 0x8000 && Globals::Pawn->CanJump() && !Globals::Pawn->IsJumpProvidingForce() && Globals::Pawn) //TEMP : Need Abilities
				Globals::Pawn->Jump();

			Globals::Pawn->CurrentMovementStyle = SDK::EFortMovementStyle::Sprinting;
		}

		if (FunctionName == Functions::ReturnToMainMenu && bMatchStarted)
		{
			bMatchStarted = false;
			Globals::Controller->SwitchLevel(L"Frontend");
		}

		return ProcessEvent(Object, Function, Parameters);
	}

	void StartPEHook()
	{
		DetourTransactionBegin();
		DetourUpdateThread(GetCurrentThread());
		DetourAttach(&(PVOID&)ProcessEvent, ProcessEventHook);
		DetourTransactionCommit();
		Logging::Log("Started ProcessEvent Hook.");
	}
}