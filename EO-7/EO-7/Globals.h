#pragma once
#include "Framework.h"

namespace Globals
{
	SDK::UWorld** GWorld;
	SDK::AFortPlayerPawnAthena* Pawn;
	SDK::UGameplayStatics* GameplayStatics;
	SDK::AFortQuickBars* Quickbars;
	SDK::AFortInventory* Inventory;

	SDK::AFortPlayerControllerAthena* GetController()
	{
		return reinterpret_cast<SDK::AFortPlayerControllerAthena*>((*Globals::GWorld)->OwningGameInstance->LocalPlayers[0]->PlayerController);
	}

	void Initialize()
	{
		GWorld = reinterpret_cast<SDK::UWorld**>(Utils::GetOffset(Offsets::GWorld));
		GameplayStatics = ((SDK::UGameplayStatics*)SDK::UGameplayStatics::StaticClass()->DefaultObject);

		LogInfo("Globals Initialized.");
	}
}