#pragma once
#include "Framework.h"

namespace Globals
{
	SDK::UWorld** GWorld;
	SDK::AFortPlayerPawnAthena* Pawn;
	SDK::AFortPlayerControllerAthena* Controller;
	SDK::UGameplayStatics* GameplayStatics;
	SDK::AFortQuickBars* Quickbars;
	SDK::AFortInventory* Inventory;

	void Initialize()
	{
		GWorld = reinterpret_cast<SDK::UWorld**>(Utils::GetOffset(Offsets::GWorld));
		GameplayStatics = ((SDK::UGameplayStatics*)SDK::UGameplayStatics::StaticClass()->DefaultObject);
		Controller = reinterpret_cast<SDK::AFortPlayerControllerAthena*>((*GWorld)->OwningGameInstance->LocalPlayers[0]->PlayerController);

		Logging::Log("Globals Initialized.");
	}
}