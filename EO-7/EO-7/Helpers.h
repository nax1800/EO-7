#pragma once
#include "Framework.h"

namespace Helpers
{
	template <typename T>
	static T* StaticLoadObject(const TCHAR* InPath)
	{
		return (T*)StaticLoadObjectInternal(T::StaticClass(), nullptr, InPath, nullptr, 0, nullptr, false);
	}

	template <typename T>
	static T* StaticFindObject(std::string ObjectName, SDK::UClass* ObjectClass = SDK::UObject::StaticClass())
	{
		auto OrigInName = std::wstring(ObjectName.begin(), ObjectName.end()).c_str();

		auto StaticFindObject = (T * (*)(SDK::UClass*, SDK::UObject * Package, const wchar_t* OrigInName, bool ExactClass))((uintptr_t)GetModuleHandleA(0) + 0x142D2E0);
		return StaticFindObject(ObjectClass, nullptr, OrigInName, false);
	}

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

	bool AreGuidsEqual(SDK::FGuid GuidA, SDK::FGuid GuidB)
	{
		if (GuidA.A == GuidB.A && GuidA.B == GuidB.B && GuidA.C == GuidB.C && GuidA.D == GuidB.D)
			return true;

		return false;
	}
}