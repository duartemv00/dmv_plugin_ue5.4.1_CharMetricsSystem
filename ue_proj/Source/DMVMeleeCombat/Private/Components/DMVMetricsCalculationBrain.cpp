#include "C:\Users\Duarte\Documents\Unreal Projects\Plugins\DMVMetricsSystem\ue_proj\Intermediate\Build\Win64\x64\DMVMeleeCombatEditor\Development\UnrealEd\SharedPCH.UnrealEd.Project.ValApi.Cpp20.h"
#include "DMVMeleeCombat/Public/Components/DMVMetricsCalculationBrain.h"

float DMVMetricsCalculationBrain::SetMetricValue(float value, float maxValue, float minValue)
{
	//Clamp the value
	if(value > maxValue) { return maxValue; }
	if(value < minValue) { return minValue; }
	return value;
}

float DMVMetricsCalculationBrain::ModifyMetricValue(float value, float modifier, float maxValue, float minValue)
{
	value += modifier;
	//Clamp the value
	if(value > maxValue) { return maxValue; }
	if(value < minValue) { return minValue; }
	return value;
}
