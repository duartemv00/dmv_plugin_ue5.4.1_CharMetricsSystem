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
	if(newItem->IsA(AParentWeapon::StaticClass()))
	{
		// If the item is a weapon, we add it to the list of weapons
		AddWeapon(newItem);
	}
	else if(newItem->IsA(AConsumableParent::StaticClass()))
	{
		// If the item is a consumable, we add it to the list of consumables
		AddConsumable(newItem);
	}
	else
	{
		UE_LOG(LogTemp, Warning, TEXT("Item is not a weapon or a consumable. Cant add it."));
	}
}

void UEquipmentManager::AddWeapon(AParentItem* newWeapon)
{
	FWeapon ToAddWeapon;
	ToAddWeapon.Weapon = Cast<UPDAWeapon>(newWeapon);
	ToAddWeapon.IsEquipped = false;
	Items.Weapons.Add(ToAddWeapon);
}

void UEquipmentManager::AddConsumable(AParentItem* newConsumable)
{
	FConsumable ToAddConsumable;
	ToAddConsumable.Consumable = Cast<AConsumableParent>(newConsumable);
	Items.Consumables.Add(ToAddConsumable);
}

void UEquipmentManager::RemoveItem(AParentItem* oldItem)
{
	if(oldItem->IsA(AParentWeapon::StaticClass()))
	{
		RemoveWeapon(oldItem);
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

void UEquipmentManager::RemoveWeapon(AParentItem* oldWeapon)
{
	// Not sure if this will delete the item I want to delete or just any item that matches the type
	//Items.Weapons.Remove(FWeapon{Cast<AParentWeapon>(oldWeapon), false});
}

void UEquipmentManager::RemoveConsumable(AParentItem* oldConsumable)
{
	// Not sure if this will delete the item I want to delete or just any item that matches the type
	//Items.Consumables.Remove(FConsumable{Cast<AConsumableParent>(oldConsumable)});
}

void UEquipmentManager::EquipWeapon(AParentWeapon* selectedWeapon)
{
	// Implementar
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

