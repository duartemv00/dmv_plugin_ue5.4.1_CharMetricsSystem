
#include "MetricsManagement/DMVMCObjectBase.h"
#include "MetricsManagement/DMVMCFuncLib.h"
#include "Engine/Engine.h"
#include "StateTreeExecutionContext.h"
#include "TimerManager.h"
#include "Characters/DMVMCCharacter.h"

// Return true if the condition (value between max and min) is met
bool FStateTreeCondition_IsMetricsValue::TestCondition(FStateTreeExecutionContext& context) const
{
	const FInstanceDataType& instanceData = context.GetInstanceData(*this);
	
	bool bResult = true;
	bool bIsGet = false;
	float StateResult = 0.0f;
	float Duration = -1.0f;
	UDMVMCFuncLib::GetMetricsFValue(instanceData.Actor, instanceData.MetricName, bIsGet, StateResult, Duration);

	if(bIsGet) // If the value was found
	{
		if(instanceData.bIsMaxValue && StateResult > instanceData.MaxValue)
		{
			bResult = false;
			UE_LOG(LogTemp, Warning, TEXT("Over MAX value."));
			return bResult; //transition fails
		}
	} /*else
	{
		bResult = false;
		return bResult;
	}*/
	if (bResult)
	{
		const float ResetValue = UDMVMCFuncLib::GetMetricsMaxFValue(instanceData.Actor, instanceData.MetricName);
		UDMVMCFuncLib::SetMetricsFValue(instanceData.Actor, instanceData.MetricName, ResetValue);
	} // Force reset value
	return bResult;
}