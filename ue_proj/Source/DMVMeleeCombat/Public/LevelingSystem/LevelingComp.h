// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "LevelingComp.generated.h"

DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnLevelUp, int32, NewLevel);

UCLASS(ClassGroup=(Custom), meta=(BlueprintSpawnableComponent))
class DMVMELEECOMBAT_API ULevelingComp : public UActorComponent
{
	GENERATED_BODY()

	UPROPERTY()
	int32 CurrentLevel = 1;
	UPROPERTY()
	int32 CurrentExperience = 0;
	UPROPERTY()
	int32 ExperienceToNextLevel;

	UFUNCTION()
	void LevelUp();
	UFUNCTION()
	void CalculateExperienceToNextLevel();

public:
	ULevelingComp();

	UFUNCTION(BlueprintCallable)
	void AddExperience(int32 ExperienceToAdd);

	UPROPERTY(BlueprintAssignable)
	FOnLevelUp OnLevelUp;

	// Getters
	UFUNCTION(BlueprintCallable)
	int32 GetCurrentLevel() const { return CurrentLevel; }
	UFUNCTION(BlueprintCallable)
	int32 GetCurrentExperience() const { return CurrentExperience; }
	UFUNCTION(BlueprintCallable)
	int32 GetExperienceToNextLevel() const { return ExperienceToNextLevel; }

protected:
	// Called when the game starts
	virtual void BeginPlay() override;
};
