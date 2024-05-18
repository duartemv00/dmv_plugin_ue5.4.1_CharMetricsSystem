// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "Items/ParentItem.h"
#include "Items/Weapons/ParentWeapon.h"
#include "Items/Consumable/ConsumableParent.h"
#include "Items/Weapons/PDAWeapon.h"
#include "EquipmentManager.generated.h"

USTRUCT()
struct FConsumable
{
	GENERATED_BODY()
	UPROPERTY(EditAnywhere)
	AConsumableParent* Consumable;
};

USTRUCT(BlueprintType)
struct FWeapon
{
	GENERATED_BODY()
	UPROPERTY(EditAnywhere)
	UPDAWeapon* Weapon;
	UPROPERTY()
	bool IsEquipped;
};

USTRUCT(BlueprintType)
struct FItem
{
	GENERATED_BODY()
	UPROPERTY(EditAnywhere, Category="DMVEquipmentSystem")
	TArray<FWeapon> Weapons;
	UPROPERTY(EditAnywhere, Category="DMVEquipmentSystem")
	TArray<FConsumable> Consumables;
};

UCLASS(ClassGroup=(Custom), meta=(BlueprintSpawnableComponent))
class DMVMELEECOMBAT_API UEquipmentManager : public UActorComponent
{
	GENERATED_BODY()
public:
	UEquipmentManager();
private:
	UPROPERTY(EditAnywhere, Category="DMVEquipmentSystem")
	FItem Items;
	UPROPERTY(EditAnywhere, Category="DMVEquipmentSystem")
	UPDAWeapon* InitialWeapons;
	UPROPERTY()
	AParentWeapon* EquippedWeapon;
	UPROPERTY()
	AParentWeapon* DrawnWeapon;
public:
	// Methods to ADD items
	UFUNCTION(BlueprintCallable, Category="DMVEquipmentSystem")
	void AddItem(AParentItem* newItem);
	UFUNCTION()
	void AddWeapon(AParentItem* newWeapon);
	UFUNCTION()
	void AddConsumable(AParentItem* newConsumable);
	
	// Methods to REMOVE items
	UFUNCTION(BlueprintCallable, Category="DMVEquipmentSystem")
	void RemoveItem(AParentItem* oldItem);
	UFUNCTION()
	void RemoveWeapon(AParentItem* oldWeapon);
	UFUNCTION()
	void RemoveConsumable(AParentItem* oldConsumable);

	
	UFUNCTION(BlueprintCallable, Category="DMVEquipmentSystem")
	void EquipWeapon(AParentWeapon* selectedWeapon);

	UFUNCTION(BlueprintCallable, Category="DMVEquipmentSystem")
	void UnEquipWeapon();

	UFUNCTION(BlueprintCallable, Category="DMVEquipmentSystem")
	void DrawWeapon();

	UFUNCTION(BlueprintCallable, Category="DMVEquipmentSystem")
	void GetCurrentItems();
};
