// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "DMVMCTypes.h"
#include "Components/DMVMCCharMetricsComp.h"
#include "DMVMCFuncLib.generated.h"

/**
 * 
 */
UCLASS()
class DMVMELEECOMBAT_API UDMVMCFuncLib : public UObject
{
	GENERATED_BODY()
public:
	UFUNCTION(BlueprintCallable, Category = "DMV Metrics")
	static UDMVMCCharMetricsComp* GetCharMetricsComp(AActor* InActor, bool bTryGetFromParentActor = false);
	
	UFUNCTION(BlueprintCallable, Category = "PI", meta=(DefaultToSelf="InActor",BlueprintThreadSafe))
	static float GetMetricsFValue(AActor* InActor, FGameplayTag MetricName, bool& bIsGet, float& Result, float& Duration);

	UFUNCTION(BlueprintCallable, Category = "PI", meta=(DefaultToSelf="InActor",BlueprintThreadSafe))
	static float GetMetricsMaxFValue(AActor* InActor, FGameplayTag MetricName);

	UFUNCTION(BlueprintCallable, Category = "PI", meta=(DefaultToSelf="InActor",BlueprintThreadSafe))
	static bool SetMetricsFValue(AActor* InActor, FGameplayTag MetricName, float newValue);
};