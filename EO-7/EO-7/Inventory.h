#pragma once
#include "Framework.h"

namespace Inventory
{
	struct QuickBarsPointer
	{
		unsigned char pad[0x1A88];
		SDK::AFortQuickBars* QuickBars;
	};

	struct InventoryPointer
	{
		unsigned char pad[0x1D28];
		SDK::AFortInventory* WorldInventory;
	};

	void AddItem(SDK::UFortItemDefinition* ItemDefinition, SDK::EFortQuickBars Quickbar, int Slot)
	{
		auto Item = ItemDefinition->CreateTemporaryItemInstanceBP(1, 0);
		auto WorldItem = reinterpret_cast<SDK::UFortWorldItem*>(Item);
		WorldItem->ItemEntry.Count = 1;
		Globals::Inventory->Inventory.ReplicatedEntries.Add(WorldItem->ItemEntry);
		Globals::Inventory->Inventory.ItemInstances.Add(WorldItem);
		Globals::Quickbars->ServerAddItemInternal(WorldItem->GetItemGuid(), Quickbar, Slot);
	}

	void Update()
	{
		Globals::Inventory->HandleInventoryLocalUpdate();
		Globals::GetController()->HandleWorldInventoryLocalUpdate();
		Globals::GetController()->OnRep_QuickBar();
		Globals::Quickbars->OnRep_PrimaryQuickBar();
		Globals::Quickbars->OnRep_SecondaryQuickBar();
	}

	void Setup()
	{
		Globals::Quickbars = Helpers::SpawnActor<SDK::AFortQuickBars>(SDK::AFortQuickBars::StaticClass(), { 1,1,1 }, {});
		reinterpret_cast<QuickBarsPointer*>(Globals::GetController())->QuickBars = Globals::Quickbars;
		Globals::Quickbars->SetOwner(Globals::GetController());
		Globals::Quickbars->EnableSlot(SDK::EFortQuickBars::Primary, 0);
		Globals::Inventory = reinterpret_cast<InventoryPointer*>(Globals::GetController())->WorldInventory;

		auto Pickaxe = SDK::UObject::FindObject<SDK::UFortWeaponItemDefinition>("FortWeaponMeleeItemDefinition WID_Harvest_Pickaxe_Athena_C_T01.WID_Harvest_Pickaxe_Athena_C_T01");
		AddItem(Pickaxe, SDK::EFortQuickBars::Primary, 0);

		/*
		auto EditTool = SDK::UObject::FindObject<SDK::UFortItemDefinition>("EditTool");
		auto ItemData_Wall = SDK::UObject::FindObject<SDK::UFortItemDefinition>("BuildingItemData_Wall");
		auto ItemData_Floor = SDK::UObject::FindObject<SDK::UFortItemDefinition>("BuildingItemData_Floor");
		auto ItemData_Stair = SDK::UObject::FindObject<SDK::UFortItemDefinition>("BuildingItemData_Stair_W");
		auto ItemData_Roof = SDK::UObject::FindObject<SDK::UFortItemDefinition>("BuildingItemData_RoofS");
		*/

		AddItem(Loot::GetRandomItem(), SDK::EFortQuickBars::Primary, 1);
		AddItem(Loot::GetRandomItem(), SDK::EFortQuickBars::Primary, 2);
		AddItem(Loot::GetRandomItem(), SDK::EFortQuickBars::Primary, 3);
		AddItem(Loot::GetRandomItem(), SDK::EFortQuickBars::Primary, 4);
		AddItem(Loot::GetRandomItem(), SDK::EFortQuickBars::Primary, 5);

		Update();
	}
}