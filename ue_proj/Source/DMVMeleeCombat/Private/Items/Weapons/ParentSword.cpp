// Fill out your copyright notice in the Description page of Project Settings.


#include "Items/Weapons/ParentSword.h"


// Sets default values
AParentSword::AParentSword()
{
	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
}

// Called when the game starts or when spawned
void AParentSword::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AParentSword::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

