// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/SkeletalMeshComponent.h"
#include "Items/Weapons/PDAWeapon.h"
#include "WeaponComponent.generated.h"

UCLASS()
class DMVMELEECOMBAT_API UWeaponComponent : public USkeletalMeshComponent
{
	GENERATED_BODY()
	
	UPROPERTY(EditAnywhere, Category="DMVItems")
	UPDAWeapon* WeaponInfo;

	void BeginPlay() override;
	
};
