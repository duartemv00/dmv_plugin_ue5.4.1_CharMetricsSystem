// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "ParentWeapon.h"
#include "ParentSword.generated.h"

UCLASS()
class DMVMELEECOMBAT_API AParentSword : public AParentWeapon
{
	GENERATED_BODY()

public:
	// Sets default values for this actor's properties
	AParentSword();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:
	// Called every frame
	virtual void Tick(float DeltaTime) override;
};
