#pragma once
#include "Framework.h"

namespace Abilities
{
	SDK::FGameplayAbilitySpec* FindAbilitySpecFromHandle(SDK::UAbilitySystemComponent* AbilitySystem, SDK::FGameplayAbilitySpecHandle Handle)
	{
		for (int i = 0; i < AbilitySystem->ActivatableAbilities.Items.Num(); i++)
		{
			auto Spec = AbilitySystem->ActivatableAbilities.Items[i];

			if (Spec.Handle.Handle == Handle.Handle)
			{
				return &Spec;
			}
		}

		return nullptr;
	}

	void GrantAbility(SDK::UClass* GameplayAbilityClass)
	{
		auto AbilitySystemComponent = Globals::Pawn->AbilitySystemComponent;

		static auto DefaultGameplayEffect = SDK::UObject::FindObject<SDK::UGameplayEffect>("GE_Constructor_ContainmentUnit_Applied_C GE_Constructor_ContainmentUnit_Applied.Default__GE_Constructor_ContainmentUnit_Applied_C");

		LogInfo("DefaultGameplayEffect: " + DefaultGameplayEffect->GetFullName());

		if (!DefaultGameplayEffect)
			return;

		SDK::TArray<SDK::FGameplayAbilitySpecDef> GrantedAbilities = DefaultGameplayEffect->GrantedAbilities;

		GrantedAbilities[0].Ability = GameplayAbilityClass;

		DefaultGameplayEffect->DurationPolicy = SDK::EGameplayEffectDurationType::Infinite;

		static auto GameplayEffectClass = SDK::UObject::FindClass("BlueprintGeneratedClass GE_Constructor_ContainmentUnit_Applied.GE_Constructor_ContainmentUnit_Applied_C");
		if (!GameplayEffectClass)
			return;

		auto handle = SDK::FGameplayEffectContextHandle();

		LogInfo("AbilitySystemComp: " + AbilitySystemComponent->GetName() + " Ability: " + GameplayAbilityClass->GetName());

		AbilitySystemComponent->BP_ApplyGameplayEffectToTarget(GameplayEffectClass, AbilitySystemComponent, 1, handle);
	}

	void GrantAbilities()
	{
		LogInfo("Granting Abilities.");
		static auto AbilitySet = Helpers::StaticFindObject<SDK::UFortAbilitySet>("/Game/Abilities/Player/Generic/Traits/DefaultPlayer/GAS_DefaultPlayer.GAS_DefaultPlayer");

		LogInfo("AbilitySet: " + AbilitySet->GetName());

		for (int i = 0; i < AbilitySet->GameplayAbilities.Num(); i++)
		{
			auto Ability = AbilitySet->GameplayAbilities[i];

			GrantAbility(Ability);
		}

		/*static auto ShootingAbility = Helpers::StaticFindObject<SDK::UClass>("/Game/Abilities/Weapons/Ranged/GA_Ranged_GenericDamage.GA_Ranged_GenericDamage_C");
		if (ShootingAbility)
		{
			GrantAbility(ShootingAbility);
		}*/
	}
}