// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Animation/AnimNotifies/AnimNotify.h"
#include "ANDrawWeapon.generated.h"

/**
 * 
 */
UCLASS()
class DMVMELEECOMBAT_API UANDrawWeapon : public UAnimNotify
{
	GENERATED_BODY()

	virtual void Notify(USkeletalMeshComponent* MeshComp, UAnimSequenceBase* Animation) override;

public:
	UPROPERTY(EditAnywhere)
	FName HandSocket;
	UPROPERTY(EditAnywhere)
	FName BodySocket;
	
};
