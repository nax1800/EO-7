#pragma once
#include "Framework.h"

namespace Player
{
	void SetCharacterParts(SDK::UCustomCharacterPart* Body, SDK::UCustomCharacterPart* Head, SDK::UCustomCharacterPart* Hat = nullptr)
	{
		Globals::Pawn->ServerChoosePart(SDK::EFortCustomPartType::Body, Body);
		Globals::Pawn->ServerChoosePart(SDK::EFortCustomPartType::Head, Head);

		if (Hat)
			Globals::Pawn->ServerChoosePart(SDK::EFortCustomPartType::Hat, Hat);

		reinterpret_cast<SDK::AFortPlayerStateAthena*>(Globals::Controller->PlayerState)->OnRep_CharacterParts();
	}

	void Spawn(SDK::FVector Location = { -127500, -110500, +4000 })
	{
		auto PlayerPawn_Athena_C = SDK::UObject::FindClass("BlueprintGeneratedClass PlayerPawn_Athena.PlayerPawn_Athena_C");
		Globals::Pawn = Helpers::SpawnActor<SDK::AFortPlayerPawnAthena>(PlayerPawn_Athena_C, Location, {});

		auto Head = SDK::UObject::FindObject<SDK::UCustomCharacterPart>("CustomCharacterPart F_Med_Head1.F_Med_Head1");
		auto Body = SDK::UObject::FindObject<SDK::UCustomCharacterPart>("CustomCharacterPart F_Med_Soldier_01.F_Med_Soldier_01");

		SetCharacterParts(Body, Head);

		Globals::Controller->Possess(Globals::Pawn);
	}
}