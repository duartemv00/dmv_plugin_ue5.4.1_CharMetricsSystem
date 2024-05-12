// Copyright Epic Games, Inc. All Rights Reserved.

#include "DMVMeleeCombat/Public/Characters/DMVMCCharacter.h"
#include "Engine/LocalPlayer.h"
#include "Components/CapsuleComponent.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "GameFramework/Controller.h"

DEFINE_LOG_CATEGORY(LogTemplateCharacter);

ADMVMCCharacter::ADMVMCCharacter()
{
	PrimaryActorTick.bCanEverTick = true;
	
	// Set size for collision capsule
	GetCapsuleComponent()->InitCapsuleSize(42.f, 96.0f);

	// Movement parameters
	GetCharacterMovement()->JumpZVelocity = 700.f;
	GetCharacterMovement()->AirControl = 0.35f;
	GetCharacterMovement()->MaxWalkSpeed = 500.f;
	GetCharacterMovement()->MinAnalogWalkSpeed = 20.f;
	GetCharacterMovement()->BrakingDecelerationWalking = 2000.f;
	GetCharacterMovement()->BrakingDecelerationFalling = 1500.0f;

	// ***** COMPONENTS *****
	CharMetricsComp = CreateDefaultSubobject<UDMVMCCharMetricsComp>(TEXT("CharMetricsComp"));
}

void ADMVMCCharacter::Tick(float DeltaTime)
{
	Timer += DeltaTime;
}

void ADMVMCCharacter::BeginPlay()
{
	Super::BeginPlay();
}
