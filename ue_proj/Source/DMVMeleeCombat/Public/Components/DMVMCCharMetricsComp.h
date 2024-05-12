// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "DMVMCTypes.h"
#include "GameplayTagContainer.h"
#include "Components/ActorComponent.h"
#include "DMVMetricsCalculationBrain.h"

#include "DMVMCCharMetricsComp.generated.h"

DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnHealthChangeDelegate);
DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnStaminaChangeDelegate);

USTRUCT(BlueprintType)
struct FMetricsSetElement
{
	GENERATED_BODY()

	FMetricsSetElement() { defaultValue = 0; currentValue = 0; minValue = 0; maxValue = 0;
		regenTimeRate = 0; regenQuantity = 0; }
	FMetricsSetElement(float _defaultValue, float _minValue, float _maxValue,
		float _regenTimeRate, float _regenQuantity)
	{
		defaultValue = _defaultValue;
		currentValue = _defaultValue;
		minValue = _minValue;
		maxValue = _maxValue;
		regenTimeRate = _regenTimeRate;
		regenQuantity = _regenQuantity;
	}
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	FGameplayTag metricName;
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	ECharMetricsEnum metricType = ECharMetricsEnum::STAT;
	UPROPERTY(EditAnywhere)
	float defaultValue;
	UPROPERTY()
	float currentValue;
	// Extreme values for the metric
	UPROPERTY(EditAnywhere)
	float minValue;
	UPROPERTY(EditAnywhere)
	float maxValue;
	//Regeneration metrics 
	UPROPERTY(EditAnywhere, meta = (EditCondition = "metricType == ECharMetricsEnum::REGEN_STAT", EditConditionHides))
	float regenTimeRate;
	UPROPERTY(EditAnywhere, meta = (EditCondition = "metricType == ECharMetricsEnum::REGEN_STAT", EditConditionHides))
	float regenQuantity;

	~FMetricsSetElement() { };
};

UCLASS ( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class DMVMELEECOMBAT_API UDMVMCCharMetricsComp : public UActorComponent
{
	GENERATED_BODY()
public:
	UDMVMCCharMetricsComp(const FObjectInitializer& ObjectInitializer);
	UPROPERTY()
	FOnHealthChangeDelegate OnHealthChange;
	UPROPERTY()
	FOnStaminaChangeDelegate OnStaminaChange;
protected:
	virtual void BeginPlay() override;

public:
	//Set of metrics used by this character
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "PI")
	TArray <FMetricsSetElement> metricsSet;

	UPROPERTY()
	FTimerHandle RegenTimerHandle;

	UFUNCTION(BlueprintCallable, Category = "PI")
	void SetMetricCurrentValue(FGameplayTag metricName, float newCurrentValue);

	UFUNCTION(BlueprintPure, Category = "PI")
	float GetMetricCurrentValue(FGameplayTag metricName);

	UFUNCTION(BlueprintPure, Category = "PI")
	float GetMetricMaxValue(FGameplayTag metricName);

	UFUNCTION(BlueprintCallable, Category = "PI")
	void ModifyMetricCurrentValue(FGameplayTag metricName, float value);
	
	UFUNCTION(BlueprintCallable, Category = "PI")
	bool CurrentValueExists(const FGameplayTag metricName, float& Result);
	
	// REGEN METRICS FUNCTIONS
	UFUNCTION(BlueprintCallable, Category = "PI")
	void RegenMetric(const FGameplayTag metricName, float regenDelta, float regenQuantity);
	// Reduce the regenDelta from the metric's current value
	UFUNCTION(BlueprintCallable, Category = "PI")
	void UnregenMetric(const FGameplayTag metricName, float regenDelta, float regenQuantity);
	// Start a timer that will regen/unregen the metric at a certain rate
	UFUNCTION(BlueprintCallable, Category = "PI")
	void StartRegenTimer(const FGameplayTag metricName, float regenRate, float regenQuantity, bool isUnregen = false);
	// Stops the regen timer
	UFUNCTION(BlueprintCallable, Category = "PI")
	void StopRegenTimer(const FGameplayTag metricName);
};
