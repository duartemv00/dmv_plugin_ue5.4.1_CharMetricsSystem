#pragma once
#include <cvt/wstring>

class DMVMetricsCalculationBrain
{
public:
	static float SetMetricValue(float value, float maxValue, float minValue);
	static float ModifyMetricValue(float value, float modifier, float maxValue, float minValue);
};
