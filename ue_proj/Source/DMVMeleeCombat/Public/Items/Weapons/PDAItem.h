// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "ParentWeapon.h"
#include "Engine/DataAsset.h"
#include "Particles/ParticleSystem.h"
#include "PDAItem.generated.h"

UENUM()
enum EWeaponType
{
	Sword,
	Dage,
	Axe,
	Hammer,
	Staff,
	Bow,
	Shield,
	Spear,
	Whip,
	Knuckles,
	Claws,
	Chakram,
	Scythe,
	Flail,
	Blade,
	Blunt,
};

UCLASS()
class DMVMELEECOMBAT_API UPDAItem : public UPrimaryDataAsset
{
	GENERATED_BODY()
public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	USkeletalMesh* WeaponMesh;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FName Socket;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	UParticleSystem* WeaponTrail;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TEnumAsByte<EWeaponType> WeaponType;
};
