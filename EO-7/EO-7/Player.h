#pragma once
#include "Framework.h"

namespace Player
{
	void Spawn(SDK::FVector Location = { -127500, -110500, +4000 })
	{
		auto PlayerPawn_Athena_C = SDK::UObject::FindClass("BlueprintGeneratedClass PlayerPawn_Athena.PlayerPawn_Athena_C");
		Globals::Pawn = Helpers::SpawnActor<SDK::AFortPlayerPawnAthena>(PlayerPawn_Athena_C, Location, {});
		Globals::GetController()->Possess(Globals::Pawn);

		auto PlayerState = static_cast<SDK::AFortPlayerStateAthena*>(Globals::GetController()->PlayerState);
		PlayerState->TeamIndex = SDK::EFortTeam::HumanPvP_Team1;
		PlayerState->OnRep_TeamIndex();

		auto Head = SDK::UObject::FindObject<SDK::UCustomCharacterPart>("CustomCharacterPart F_Med_Head1.F_Med_Head1");
		auto Body = SDK::UObject::FindObject<SDK::UCustomCharacterPart>("CustomCharacterPart F_Med_Soldier_01.F_Med_Soldier_01");

		Globals::Pawn->ServerChoosePart(SDK::EFortCustomPartType::Body, Body);
		Globals::Pawn->ServerChoosePart(SDK::EFortCustomPartType::Head, Head);
		PlayerState->OnRep_CharacterParts();
	}
}