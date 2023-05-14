#pragma once

#include "Framework.h"

namespace Functions
{
	std::string PlayButton = "Function AthenaMatchmakingWidget.AthenaMatchmakingWidget_C.BndEvt__BP_PlayButton_K2Node_ComponentBoundEvent_1_CommonButtonClicked__DelegateSignature";
	std::string StartMatch = "Function Engine.GameMode.ReadyToStartMatch";
	std::string LoadingScreenDropped = "Function FortniteGame.FortPlayerController.ServerLoadingScreenDropped";
	std::string AircraftJump = "Function FortniteGame.FortPlayerControllerAthena.ServerAttemptAircraftJump";
	std::string AircraftExitedZone = "";
	std::string ExecuteInventoryItem = "";
	std::string AttemptInteract = "";
	std::string HandlePickup = "";
	std::string TryActivateAbility = "";
	std::string AbilityRPCBatch = "";
	std::string PawnDied = "";
}

namespace Classes
{
	SDK::UClass* PlayerPawn_Athena_C;
}

namespace Gameplay
{
	//TEMP
	template<typename T>
	T* SpawnActor(SDK::UClass* ActorClass, SDK::FVector Location, SDK::FRotator Rotation) {
		SDK::FQuat Quat;
		SDK::FTransform Transform;
		Quat.W = 0;
		Quat.X = Rotation.Pitch;
		Quat.Y = Rotation.Roll;
		Quat.Z = Rotation.Yaw;

		Transform.Rotation = Quat;
		Transform.Scale3D = SDK::FVector{ 1,1,1 };
		Transform.Translation = Location;

		auto GameplayStatics = ((SDK::UGameplayStatics*)SDK::UGameplayStatics::StaticClass()->DefaultObject);

		auto Actor = GameplayStatics->BeginSpawningActorFromClass((*Globals::GWorld), ActorClass, Transform, false, nullptr);
		GameplayStatics->FinishSpawningActor(Actor, Transform);
		return static_cast<T*>(Actor);
	}

	SDK::AActor* FindActor(SDK::UClass* ActorClass, int index = 0)
	{
		SDK::TArray<SDK::AActor*> Actors;
		Globals::GameplayStatics->GetAllActorsOfClass((*Globals::GWorld), ActorClass, &Actors);
		return Actors[index];
	}
	//TEMP

	void* ProcessEventHook(SDK::UObject* Object, SDK::UFunction* Function, void* Parameters)
	{
		std::string FunctionName = Function->GetFullName();

		if (FunctionName == Functions::PlayButton)
		{
			Globals::Controller->SwitchLevel(L"Athena_Terrain");
		}

		if (FunctionName == Functions::StartMatch)
		{
			Globals::Controller = reinterpret_cast<SDK::AFortPlayerControllerAthena*>((*Globals::GWorld)->OwningGameInstance->LocalPlayers[0]->PlayerController);
			Classes::PlayerPawn_Athena_C = SDK::UObject::FindClass("BlueprintGeneratedClass PlayerPawn_Athena.PlayerPawn_Athena_C");

			Globals::Pawn = SpawnActor<SDK::AFortPlayerPawnAthena>(Classes::PlayerPawn_Athena_C, { -127500, -110500, +4000 }, {});
			Globals::Controller->Possess(Globals::Pawn);

			Logging::Log(Globals::Pawn->GetFullName());

			reinterpret_cast<SDK::AFortPlayerController*>((*Globals::GWorld)->OwningGameInstance->LocalPlayers[0]->PlayerController)->ServerReadyToStartMatch();
			reinterpret_cast<SDK::AFortGameMode*>((*Globals::GWorld)->AuthorityGameMode)->StartMatch();
		}

		if (FunctionName == Functions::LoadingScreenDropped)
		{

		}

		if (FunctionName == Functions::AircraftJump || FunctionName == Functions::AircraftExitedZone)
		{
			auto Aircraft = FindActor(SDK::AFortAthenaAircraft::StaticClass());
			if (Globals::Controller->IsInAircraft())
			{
				Globals::Pawn = SpawnActor<SDK::AFortPlayerPawnAthena>(Classes::PlayerPawn_Athena_C, Aircraft->K2_GetActorLocation(), {});
				Globals::Controller->Possess(Globals::Pawn);
			}
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
