// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "Particles/ParticleSystem.h"
#include "PDAWeapon.generated.h"

UENUM()
enum EWeaponType
{
	Sword,
	Dage,
	Axe
};

UCLASS()
class DMVMELEECOMBAT_API UPDAWeapon : public UPrimaryDataAsset
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
