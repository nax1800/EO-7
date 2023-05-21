#pragma once

#include "Framework.h"

namespace Functions
{
	std::string BP_PlayButton = "Function AthenaMatchmakingWidget.AthenaMatchmakingWidget_C.BndEvt__BP_PlayButton_K2Node_ComponentBoundEvent_1_CommonButtonClicked__DelegateSignature";
	std::string ReadyToStartMatch = "Function Engine.GameMode.ReadyToStartMatch";
	std::string ServerLoadingScreenDropped = "Function FortniteGame.FortPlayerController.ServerLoadingScreenDropped";
	std::string ServerAttemptAircraftJump = "Function FortniteGame.FortPlayerControllerAthena.ServerAttemptAircraftJump";
	std::string OnAircraftExitedDropZone = "Function FortniteGame.FortGameModeAthena.OnAircraftExitedDropZone";
	std::string ClientExecuteInventoryItem = "Function FortniteGame.FortPlayerController.ClientExecuteInventoryItem";
	std::string ServerSpawnInventoryDrop = "Function FortniteGame.FortPlayerController.ServerSpawnInventoryDrop";
	std::string OnDrop = "Function AthenaInventoryDropSlot.AthenaInventoryDropSlot_C.OnDrop";
	std::string ServerAttemptInteract = "Function FortniteGame.FortPlayerController.ServerAttemptInteract";
	std::string HandlePickup = "";
	std::string ClientOnPawnDied = "Function FortniteGame.FortPlayerControllerZone.ClientOnPawnDied";
	std::string ReceiveTick = "Function Engine.Actor.ReceiveTick";
	std::string ServerReturnToMainMenu = "Function FortniteGame.FortPlayerController.ServerReturnToMainMenu";
}

namespace Gameplay
{

	bool bMatchStarted = false;
	bool bPressedPlay = false;


	void* CollectGarbageInternalHook(uint32_t KeepFlags, bool bPerformFullPurge)
	{
		return NULL;
	}

	void* ProcessEventHook(SDK::UObject* Object, SDK::UFunction* Function, void* Parameters)
	{
		std::string FunctionFullName = Function->GetFullName();
		std::string FunctionName = Function->GetName();

		std::string ObjectFullName = Object->GetFullName();

		if (FunctionFullName == Functions::BP_PlayButton && !bPressedPlay)
		{
			Globals::GetController()->ClientTravel(L"Athena_Terrain", SDK::ETravelType::TRAVEL_Absolute, false, {});
			bPressedPlay = true;
		}

		if (FunctionFullName == Functions::ReadyToStartMatch && bPressedPlay && !bMatchStarted)
		{
			SDK::InitGObjects();
			Player::Spawn();
			Loot::SetLootPool();
			Inventory::Setup();

			auto GameState = reinterpret_cast<SDK::AFortGameStateAthena*>((*Globals::GWorld)->GameState);

			reinterpret_cast<SDK::AFortPlayerController*>((*Globals::GWorld)->OwningGameInstance->LocalPlayers[0]->PlayerController)->ServerReadyToStartMatch();
			reinterpret_cast<SDK::AFortGameMode*>((*Globals::GWorld)->AuthorityGameMode)->StartMatch();
			bMatchStarted = true;
		}

		if (FunctionFullName == Functions::ServerLoadingScreenDropped && bMatchStarted)
		{
			Globals::GetController()->bHasClientFinishedLoading = true;
			Globals::GetController()->bHasServerFinishedLoading = true;
			Globals::GetController()->OnRep_bHasServerFinishedLoading();
			Globals::GetController()->ServerSetClientHasFinishedLoading(true);

			static_cast<SDK::UFortCheatManager*>(Globals::GetController()->CheatManager)->ToggleInfiniteAmmo();

			Helpers::StaticLoadObject<SDK::UBlueprintGeneratedClass>(L"/Game/Abilities/Player/Constructor/Perks/ContainmentUnit/GE_Constructor_ContainmentUnit_Applied.GE_Constructor_ContainmentUnit_Applied_C");
			Abilities::GrantAbilities();
		}

		if (FunctionFullName == Functions::ServerAttemptAircraftJump || FunctionName == Functions::OnAircraftExitedDropZone)
		{
			auto Aircraft = Helpers::FindActor(SDK::AFortAthenaAircraft::StaticClass());
			if (Globals::GetController()->IsInAircraft())
			{
				Player::Spawn(Aircraft->K2_GetActorLocation());
			}
		}

		if (FunctionFullName == Functions::ServerSpawnInventoryDrop)
		{
			auto Params = (SDK::Params::AFortPlayerController_ServerSpawnInventoryDrop_Params*)Parameters;
			auto Inventory = Globals::Inventory->Inventory;

			auto ItemInstances = Inventory.ItemInstances;
			for (int i = 0; i < ItemInstances.Num(); i++)
			{
				auto ItemInstance = ItemInstances[i];
				auto ItemGuid = ItemInstance->GetItemGuid();

				if (Helpers::AreGuidsEqual(ItemGuid, Params->ItemGuid))
				{
					auto ItemEntry = ItemInstance->ItemEntry;
					auto ItemDefinitionBP = ItemInstance->GetItemDefinitionBP();

					ItemInstances.Remove(i);

					for (int j = 0; j < Inventory.ReplicatedEntries.Num(); j++)
					{
						auto Entry = Inventory.ReplicatedEntries[j];

						if (Helpers::AreGuidsEqual(Entry.ItemGuid, Params->ItemGuid))
						{
							Inventory.ReplicatedEntries.Remove(j);
						}
					}

					auto NewFortPickup = Helpers::SpawnActor<SDK::AFortPickupAthena>(SDK::AFortPickupAthena::StaticClass(), Globals::Pawn->K2_GetActorLocation(), {});

					NewFortPickup->PrimaryPickupItemEntry.Count = 1;
					NewFortPickup->PrimaryPickupItemEntry.ItemDefinition = ItemDefinitionBP;
					NewFortPickup->OnRep_PrimaryPickupItemEntry();

					NewFortPickup->TossPickup(Globals::Pawn->K2_GetActorLocation(), nullptr, 1, true);

					Inventory::Update();
				}
			}
		}

		if (FunctionFullName == Functions::ClientExecuteInventoryItem)
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

		if (FunctionFullName == Functions::ServerReturnToMainMenu && bMatchStarted)
		{
			bMatchStarted = false;
			bPressedPlay = false;
			Globals::GetController()->ClientTravel(L"Frontend", SDK::ETravelType::TRAVEL_Absolute, false, {});
		}

		if (FunctionFullName == Functions::ClientOnPawnDied)
		{
			Globals::Pawn->K2_DestroyActor();
		}

		if (FunctionFullName.contains("ServerAttemptInteract") || FunctionFullName.contains("ServerHandlePickup") || FunctionFullName.contains("ClientOnPawnDied"))
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

		LogInfo("ProcessEvent Hook has started.");
	}
}
