// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Items/ParentItem.h"
#include "ParentWeapon.generated.h"

UCLASS()
class DMVMELEECOMBAT_API AParentWeapon : public AParentItem
{
	GENERATED_BODY()

public:
	// Sets default values for this actor's properties
	AParentWeapon();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:
	// Called every frame
	virtual void Tick(float DeltaTime) override;
};
