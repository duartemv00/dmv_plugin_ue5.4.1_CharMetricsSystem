// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "DMVMCTypes.h"
#include "StateTreeConditionBase.h"
#include "GameFramework/Actor.h"
#include "GameFramework/Controller.h"
#include "GameFramework/DamageType.h"
#include "Engine/EngineTypes.h"
#include "Engine/HitResult.h"

#include "DMVMCObjectBase.generated.h"

// ***** STATE TREE CONDITIONS *****
// Data used for the IsAttributeStateInstanceData condition of the State Tree
USTRUCT()
struct DMVMELEECOMBAT_API FStateTreeCondition_IsMetricsValueInstanceData
{
	GENERATED_BODY()

	UPROPERTY(EditAnywhere, Category = Input)
	TObjectPtr<AActor> Actor = nullptr;
	UPROPERTY(EditAnywhere, Category = Parameter)
	FGameplayTag MetricName;
	UPROPERTY(EditAnywhere, Category = Parameter,meta=(InlineEditConditionToggle))
	bool bIsMinValue = false;
	UPROPERTY(EditAnywhere, Category = Parameter, meta=(EditCondition="bIsMinValue"))
	float MinValue = 0.0f;
	UPROPERTY(EditAnywhere, Category = Parameter,meta=(InlineEditConditionToggle))
	bool bIsMaxValue = false;
	UPROPERTY(EditAnywhere, Category = Parameter, meta=(EditCondition="bIsMaxValue"))
	float MaxValue = 0.0f;
};

//STATE TREE CONDITION that checks if the value of a metric is within a certain range
USTRUCT(DisplayName = "PI_IsMetricsValue")
struct DMVMELEECOMBAT_API FStateTreeCondition_IsMetricsValue : public FStateTreeConditionCommonBase
{
	GENERATED_BODY()

	using FInstanceDataType = FStateTreeCondition_IsMetricsValueInstanceData;
 
	virtual const UStruct* GetInstanceDataType() const override { return FInstanceDataType::StaticStruct(); }
	virtual bool TestCondition(FStateTreeExecutionContext& context) const override;
};
