// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "Items/ParentItem.h"
#include "Items/Weapons/ParentWeapon.h"
#include "Items/Consumable/ConsumableParent.h"
#include "Items/Weapons/PDAItem.h"
#include "EquipmentManager.generated.h"

USTRUCT()
struct FConsumable
{
	GENERATED_BODY()
	UPROPERTY(EditAnywhere)
	UPDAItem* Consumable;
	UPROPERTY()
	int Quantity;
};

USTRUCT(BlueprintType)
struct FWeapon
{
	GENERATED_BODY()
	UPROPERTY(EditAnywhere)
	TSubclassOf<AParentWeapon> WeaponClass;
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
	UChildActorComponent* EquippedWeapon;
	UPROPERTY()
	AParentWeapon* DrawnWeapon;
public:
	// Methods to ADD items
	UFUNCTION(BlueprintCallable, Category="DMVEquipmentSystem")
	void AddItem(AParentItem* newItem);
	UFUNCTION(BlueprintCallable, Category="DMVEquipmentSystem")
	void AddWeapon(TSubclassOf<AParentWeapon> newWeapon);
	UFUNCTION(BlueprintCallable, Category="DMVEquipmentSystem")
	void AddConsumable(UPDAItem* newConsumable);
	
	// Methods to REMOVE items
	UFUNCTION(BlueprintCallable, Category="DMVEquipmentSystem")
	void RemoveItem(AParentItem* oldItem);
	UFUNCTION()
	void RemoveWeapon(const TSubclassOf<AParentWeapon>& oldWeapon);
	UFUNCTION()
	void RemoveConsumable(AParentItem* oldConsumable);

	UFUNCTION(BlueprintCallable, Category="DMVEquipmentSystem")
	AParentWeapon* GetWeapon(int i);
	
	UFUNCTION(BlueprintCallable, Category="DMVEquipmentSystem")
	void EquipWeapon(TSubclassOf<AParentWeapon> selectedWeapon);

	UFUNCTION(BlueprintCallable, Category="DMVEquipmentSystem")
	void UnEquipWeapon();

	UFUNCTION(BlueprintCallable, Category="DMVEquipmentSystem")
	void DrawWeapon();

	UFUNCTION(BlueprintCallable, Category="DMVEquipmentSystem")
	void GetCurrentItems();
};
