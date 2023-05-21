#pragma once
#include "Framework.h"

namespace Loot
{
	std::vector<SDK::UFortWeaponItemDefinition*> LootPool;

	void SetLootPool() //scuffed as fuck ngl : gives the same weapon
	{
		int GObjectsNum = SDK::UObject::GObjects->Num();
		for (int i = 0; i < GObjectsNum; i++)
		{
			auto Object = SDK::UObject::GObjects->GetByIndex(i);
			auto ObjectName = Object->GetFullName();

			if (Object && ObjectName.contains("FortWeaponRangedItemDefinition WID_"))
			{
				auto Item = static_cast<SDK::UFortWeaponItemDefinition*>(Object);
				auto bItemHasDurability = Item->bItemHasDurability;
				auto bNeverPersisted = Item->bNeverPersisted;
				auto bCalculateRarityFromQualityAndTier = Item->bCalculateRarityFromQualityAndTier;
				auto DisplayTier = Item->GetDisplayTier();

				if (bItemHasDurability != 1 && bNeverPersisted == 1 && bCalculateRarityFromQualityAndTier != 1 && (uint8)DisplayTier == 0)
				{
					LogInfo("Added '" + Item->GetFullName() + "' to Loot Pool.");
					LootPool.push_back(Item);
				}
			}
		}
	}

	SDK::UFortWeaponItemDefinition* GetRandomItem()
	{
	a:
		auto Item = LootPool[rand() % LootPool.size() + 1];
		auto Rarity = std::to_string((int)Item->GetRarity());
		LogInfo("Random Item is: " + Item->GetName() + " Rarity: " + Rarity);
		return Item;
	}
}