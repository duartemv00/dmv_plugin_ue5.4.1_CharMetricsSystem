// Fill out your copyright notice in the Description page of Project Settings.


#include "Items/Weapons/WeaponComponent.h"

void UWeaponComponent::BeginPlay()
{
	Super::BeginPlay();
	SetSkeletalMeshAsset(WeaponInfo->WeaponMesh);
}
