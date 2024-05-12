#pragma once

#include "Components/DMVMCCharMetricsComp.h"
#include "CoreMinimal.h"
#include "DMVMCTypes.h"
#include "DMVMCObjectBase.h"


UDMVMCCharMetricsComp::UDMVMCCharMetricsComp(const FObjectInitializer& ObjectInitializer)
{
}

void UDMVMCCharMetricsComp::BeginPlay()
{
	Super::BeginPlay();
}

void UDMVMCCharMetricsComp::SetMetricCurrentValue(FGameplayTag metricName, float newCurrentValue)
{
	if(metricsSet.Num() == 0)
	{
		UE_LOG(LogTemp, Warning, TEXT("No metrics set for this character"));
		return;
	}
	for(auto &metric : metricsSet)
	{
		if(metric.metricName == metricName)
		{
			metric.currentValue = DMVMetricsCalculationBrain::SetMetricValue(newCurrentValue, metric.maxValue, metric.minValue);
			return;
		}
	}
	UE_LOG(LogTemp, Warning, TEXT("No metric with that name"));
}

float UDMVMCCharMetricsComp::GetMetricCurrentValue(FGameplayTag metricName)
{
	if(metricsSet.Num() == 0)
	{
		UE_LOG(LogTemp, Warning, TEXT("No metrics set for this character"));
		return 0;
	}
	for(auto &metric : metricsSet)
	{
		if(metric.metricName == metricName)
		{
			return metric.currentValue;
		}
	}
	UE_LOG(LogTemp, Warning, TEXT("No metric with that name"));
	return 0;
}

float UDMVMCCharMetricsComp::GetMetricMaxValue(FGameplayTag metricName)
{
	if(metricsSet.Num() == 0)
	{
		UE_LOG(LogTemp, Warning, TEXT("No metrics set for this character"));
		return 0;
	}
	for(auto &metric : metricsSet)
	{
		if(metric.metricName == metricName)
		{
			return metric.maxValue;
		}
	}
	UE_LOG(LogTemp, Warning, TEXT("No metric with that name"));
	return 0;
}

void UDMVMCCharMetricsComp::ModifyMetricCurrentValue(FGameplayTag metricName, float value)
{
	if(metricsSet.Num() == 0)
	{
		UE_LOG(LogTemp, Warning, TEXT("No metrics set for this character"));
		return;
	}
	for(auto &metric : metricsSet)
	{
		if(metric.metricName == metricName)
		{
			//metric.currentValue = FMath::Clamp(metric.currentValue + value, metric.minValue, metric.maxValue);
			metric.currentValue = DMVMetricsCalculationBrain::ModifyMetricValue(metric.currentValue, value, metric.maxValue, metric.minValue);
			return;
		}
	}
	UE_LOG(LogTemp, Warning, TEXT("No metric with that name"));
}

bool UDMVMCCharMetricsComp::CurrentValueExists(const FGameplayTag metricName, float& Result)
{
	if(GetMetricCurrentValue(metricName))
	{
		return true;
	}
	return false;
}

void UDMVMCCharMetricsComp::RegenMetric(const FGameplayTag metricName, float regenDelta, float regenQuantity)
{
	for(auto &metric : metricsSet)
	{
		if(metric.metricName == metricName && metric.metricType == ECharMetricsEnum::REGENERATIVE)
		{
			metric.currentValue = FMath::Clamp(metric.currentValue + regenQuantity, metric.minValue, metric.maxValue);
			return;
		}
	}
	UE_LOG(LogTemp, Warning, TEXT("No metric with that name"));
}

void UDMVMCCharMetricsComp::UnregenMetric(const FGameplayTag metricName, float regenDelta, float regenQuantity)
{
	for(auto &metric : metricsSet)
	{
		if(metric.metricName == metricName && metric.metricType == ECharMetricsEnum::REGENERATIVE)
		{
			metric.currentValue = FMath::Clamp(metric.currentValue - regenQuantity, metric.minValue, metric.maxValue);
			// if(metric.metricName == ECharMetricsEnum::BLOOD_LUST)
			// {
			// 	if(OnStaminaChange.IsBound()) { OnStaminaChange.Broadcast(); }
			// }
			return;
		}
	}
}

void UDMVMCCharMetricsComp::StartRegenTimer(const FGameplayTag metricName, float regenRate, float regenQuantity,
	bool isUnregen)
{
	if(CurrentValueExists(metricName, regenRate))
	{
		if(isUnregen)
		{
			FTimerDelegate RegenTimerDelegate = FTimerDelegate::CreateUObject(this, &UDMVMCCharMetricsComp::UnregenMetric, metricName, regenRate, regenQuantity);
			GetWorld()->GetTimerManager().SetTimer(RegenTimerHandle,RegenTimerDelegate,regenRate,true,-1.0f);
			
		} else
		{
			FTimerDelegate RegenTimerDelegate = FTimerDelegate::CreateUObject(this, &UDMVMCCharMetricsComp::RegenMetric, metricName, regenRate, regenQuantity);
			GetWorld()->GetTimerManager().SetTimer(RegenTimerHandle,RegenTimerDelegate,regenRate,true,-1.0f);
		}
		
	}
	UE_LOG(LogTemp, Warning, TEXT("No metric with that name"));
}

void UDMVMCCharMetricsComp::StopRegenTimer(const FGameplayTag metricName)
{
	GetWorld()->GetTimerManager().PauseTimer(RegenTimerHandle);
}
