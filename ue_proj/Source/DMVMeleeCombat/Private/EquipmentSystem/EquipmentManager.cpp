// Fill out your copyright notice in the Description page of Project Settings.


#include "EquipmentSystem/EquipmentManager.h"

#include "Items/Weapons/ParentSword.h"

// Sets default values for this component's properties
UEquipmentManager::UEquipmentManager()
{
	PrimaryComponentTick.bCanEverTick = false;
	Items.Weapons = TArray<FWeapon>();
	Items.Consumables = TArray<FConsumable>();
}

// Add a new item to the list of items that the player has
void UEquipmentManager::AddItem(AParentItem* newItem)
{
	// For now, this isn't going to be used, but it's here for future implementations
}
// ***** Specific methods to add weapons *****
void UEquipmentManager::AddWeapon(TSubclassOf<AParentWeapon> newWeapon)
{
	// First we check out if the weapon is already in the inventory
	for (FWeapon weapon : Items.Weapons)
	{
		if(weapon.WeaponClass->GetClass() == newWeapon)
		{
			UE_LOG(LogTemp, Warning, TEXT("Weapon is already in the inventory."));
			return;
		}
	}
	// If item is not in the inventory, then we add it
	FWeapon ToAddWeapon;
	ToAddWeapon.WeaponClass = newWeapon;
	ToAddWeapon.IsEquipped = false;
	Items.Weapons.Add(ToAddWeapon);
}

void UEquipmentManager::AddConsumable(UPDAItem* newConsumable)
{
	FConsumable ToAddConsumable;
	ToAddConsumable.Consumable = newConsumable;
	Items.Consumables.Add(ToAddConsumable);
}

void UEquipmentManager::RemoveItem(AParentItem* oldItem)
{
	if(oldItem->IsA(AParentWeapon::StaticClass()))
	{
		//RemoveWeapon(oldItem);
	}
	else if(oldItem->IsA(AConsumableParent::StaticClass()))
	{
		RemoveConsumable(oldItem);
	}
	else
	{
		UE_LOG(LogTemp, Warning, TEXT("Item is not a weapon or a consumable. Cant remove it."));
	}
}

void UEquipmentManager::RemoveWeapon(const TSubclassOf<AParentWeapon>& oldWeapon)
{
	int aux = 0;
	for (FWeapon weapon : Items.Weapons)
	{
		if(weapon.WeaponClass->GetClass() == oldWeapon)
		{
			Items.Weapons.RemoveAt(aux);
			return;
		}
		aux += 1;
	}
	
}

void UEquipmentManager::RemoveConsumable(AParentItem* oldConsumable)
{
	// Not sure if this will delete the item I want to delete or just any item that matches the type
	//Items.Consumables.Remove(FConsumable{Cast<AConsumableParent>(oldConsumable)});
}

AParentWeapon* UEquipmentManager::GetWeapon(int i)
{
	return Items.Weapons[i].WeaponClass->GetDefaultObject<AParentWeapon>();
}

void UEquipmentManager::EquipWeapon(TSubclassOf<AParentWeapon> selectedWeapon)
{
	// Not sure if this is the best way to do this
}

// Sets the equipped weapon to null
void UEquipmentManager::UnEquipWeapon()
{
	EquippedWeapon = nullptr;
}

void UEquipmentManager::DrawWeapon()
{
	// Calls an animation to be reproduced, this animation has
	// an anim notify that binds the weapon to the hand socket
	// or the weapon socket (weapon is not active)
}

void UEquipmentManager::GetCurrentItems()
{
	for (FWeapon weapon : Items.Weapons)
	{
		// Print the name of the weapon
		//UE_LOG(LogTemp, Warning, TEXT("Weapon: %s"), weapon.Weapon->GetName());
	}
	for (FConsumable consumable : Items.Consumables)
	{
		// Print the name of the consumable
		//UE_LOG(LogTemp, Warning, TEXT("Consumable: %s"), consumable.Consumable->GetName());
	}
}

