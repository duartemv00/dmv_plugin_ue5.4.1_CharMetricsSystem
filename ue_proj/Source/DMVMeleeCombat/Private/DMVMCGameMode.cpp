// Copyright Epic Games, Inc. All Rights Reserved.

#include "DMVMeleeCombat/Public/DMVMCGameMode.h"
#include "DMVMeleeCombat/Public/Characters/DMVMCCharacter.h"
#include "UObject/ConstructorHelpers.h"

ADMVMCGameMode::ADMVMCGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
