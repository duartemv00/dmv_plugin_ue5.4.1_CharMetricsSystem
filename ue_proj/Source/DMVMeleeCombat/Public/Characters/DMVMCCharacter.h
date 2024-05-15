// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "MetricsManagement/Components/DMVMCCharMetricsComp.h"
#include "GameFramework/Character.h"
#include "Logging/LogMacros.h"
#include "DMVMCCharacter.generated.h"

DECLARE_LOG_CATEGORY_EXTERN(LogTemplateCharacter, Log, All);

UCLASS(config=Game)
class ADMVMCCharacter : public ACharacter
{
	GENERATED_BODY()

public:
	ADMVMCCharacter();
	
	// ***** CHAR METRICS COMPONENT *****
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "DMV | Metrics")
	UDMVMCCharMetricsComp* CharMetricsComp;

	// ***** ACTIONS *****
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "DMV | Actions")
	bool bActionLock = false;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "DMV | Actions")
	int ComboPosition = 0;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "DMV")
	float Timer = 0;

protected:
	virtual void Tick(float DeltaTime) override;
	virtual void BeginPlay() override;
	
};

