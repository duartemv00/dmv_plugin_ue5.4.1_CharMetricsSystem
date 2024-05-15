// Fill out your copyright notice in the Description page of Project Settings.


#include "MetricsManagement/DMVMCFuncLib.h"
#include "TimerManager.h"

UDMVMCCharMetricsComp* UDMVMCFuncLib::GetCharMetricsComp(AActor* InActor, bool bTryGetFromParentActor)
{
	if (!InActor)
	{
		return nullptr;
	}

	UActorComponent* AComp = InActor->GetComponentByClass(UDMVMCCharMetricsComp::StaticClass());
	if (!AComp)
	{
		if (bTryGetFromParentActor)
		{
			AActor* PActor = InActor;
			while (PActor && !AComp)
			{
				PActor = PActor->GetParentActor();
				if (PActor)
				{
					AComp = PActor->GetComponentByClass(UDMVMCCharMetricsComp::StaticClass());	
				}
			}

			PActor = InActor;
			while (PActor && !AComp)
			{
				PActor = PActor->GetAttachParentActor();
				if (PActor)
				{
					AComp = PActor->GetComponentByClass(UDMVMCCharMetricsComp::StaticClass());
				}
			}
		}
	}
	if (UDMVMCCharMetricsComp* PSComp = Cast<UDMVMCCharMetricsComp>(AComp))
	{
		return PSComp;
	}
	return nullptr;
}

float UDMVMCFuncLib::GetMetricsFValue(AActor* InActor, FGameplayTag MetricName, bool& bIsGet, float& Result,
	float& Duration)
{
	if (UDMVMCCharMetricsComp* PSC = GetCharMetricsComp(InActor)) // If the actor has the component
	{
		bIsGet = PSC->CurrentValueExists(MetricName, Result);
		Result = PSC->GetMetricCurrentValue(MetricName);
		return Result;
	}
	bIsGet = false;
	return 0;
}

float UDMVMCFuncLib::GetMetricsMaxFValue(AActor* InActor, FGameplayTag MetricName)
{
	if(UDMVMCCharMetricsComp* PSC = GetCharMetricsComp(InActor))
	{
		const float Aux = PSC->GetMetricMaxValue(MetricName);
		return Aux;
	}
	return 0;
}

bool UDMVMCFuncLib::SetMetricsFValue(AActor* InActor, FGameplayTag MetricName, float newValue)
{
	if (UDMVMCCharMetricsComp* PSC = GetCharMetricsComp(InActor))
	{
		PSC->SetMetricCurrentValue(MetricName, newValue);
		return true;
	}
	return false;
}










