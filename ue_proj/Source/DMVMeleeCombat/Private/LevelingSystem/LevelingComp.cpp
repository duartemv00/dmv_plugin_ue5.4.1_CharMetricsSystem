// Fill out your copyright notice in the Description page of Project Settings.

#include "LevelingSystem/LevelingComp.h"


void ULevelingComp::LevelUp()
{
	CurrentLevel++;
	CurrentExperience = 0;
	CalculateExperienceToNextLevel();
	OnLevelUp.Broadcast(CurrentLevel);
}

void ULevelingComp::CalculateExperienceToNextLevel()
{
	ExperienceToNextLevel = CurrentLevel * 100;
}

void ULevelingComp::AddExperience(int32 ExperienceToAdd)
{
	CurrentExperience += ExperienceToAdd;
	if(CurrentExperience >= ExperienceToNextLevel)
	{
		LevelUp();
	}
}

ULevelingComp::ULevelingComp()
{
	PrimaryComponentTick.bCanEverTick = false;
}


// Called when the game starts
void ULevelingComp::BeginPlay()
{
	Super::BeginPlay();
	
	CalculateExperienceToNextLevel();
}

