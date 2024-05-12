// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DMVMeleeCombat/Public/DMVMCFuncLib.h"
#include "Runtime/GameplayTags/Classes/GameplayTagContainer.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDMVMCFuncLib() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
DMVMELEECOMBAT_API UClass* Z_Construct_UClass_UDMVMCCharMetricsComp_NoRegister();
DMVMELEECOMBAT_API UClass* Z_Construct_UClass_UDMVMCFuncLib();
DMVMELEECOMBAT_API UClass* Z_Construct_UClass_UDMVMCFuncLib_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTag();
UPackage* Z_Construct_UPackage__Script_DMVMeleeCombat();
// End Cross Module References

// Begin Class UDMVMCFuncLib Function GetCharMetricsComp
struct Z_Construct_UFunction_UDMVMCFuncLib_GetCharMetricsComp_Statics
{
	struct DMVMCFuncLib_eventGetCharMetricsComp_Parms
	{
		AActor* InActor;
		bool bTryGetFromParentActor;
		UDMVMCCharMetricsComp* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "DMV Metrics" },
		{ "CPP_Default_bTryGetFromParentActor", "false" },
		{ "ModuleRelativePath", "Public/DMVMCFuncLib.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InActor;
	static void NewProp_bTryGetFromParentActor_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bTryGetFromParentActor;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDMVMCFuncLib_GetCharMetricsComp_Statics::NewProp_InActor = { "InActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DMVMCFuncLib_eventGetCharMetricsComp_Parms, InActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UDMVMCFuncLib_GetCharMetricsComp_Statics::NewProp_bTryGetFromParentActor_SetBit(void* Obj)
{
	((DMVMCFuncLib_eventGetCharMetricsComp_Parms*)Obj)->bTryGetFromParentActor = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UDMVMCFuncLib_GetCharMetricsComp_Statics::NewProp_bTryGetFromParentActor = { "bTryGetFromParentActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(DMVMCFuncLib_eventGetCharMetricsComp_Parms), &Z_Construct_UFunction_UDMVMCFuncLib_GetCharMetricsComp_Statics::NewProp_bTryGetFromParentActor_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDMVMCFuncLib_GetCharMetricsComp_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DMVMCFuncLib_eventGetCharMetricsComp_Parms, ReturnValue), Z_Construct_UClass_UDMVMCCharMetricsComp_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDMVMCFuncLib_GetCharMetricsComp_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDMVMCFuncLib_GetCharMetricsComp_Statics::NewProp_InActor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDMVMCFuncLib_GetCharMetricsComp_Statics::NewProp_bTryGetFromParentActor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDMVMCFuncLib_GetCharMetricsComp_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UDMVMCFuncLib_GetCharMetricsComp_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDMVMCFuncLib_GetCharMetricsComp_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDMVMCFuncLib, nullptr, "GetCharMetricsComp", nullptr, nullptr, Z_Construct_UFunction_UDMVMCFuncLib_GetCharMetricsComp_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDMVMCFuncLib_GetCharMetricsComp_Statics::PropPointers), sizeof(Z_Construct_UFunction_UDMVMCFuncLib_GetCharMetricsComp_Statics::DMVMCFuncLib_eventGetCharMetricsComp_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDMVMCFuncLib_GetCharMetricsComp_Statics::Function_MetaDataParams), Z_Construct_UFunction_UDMVMCFuncLib_GetCharMetricsComp_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UDMVMCFuncLib_GetCharMetricsComp_Statics::DMVMCFuncLib_eventGetCharMetricsComp_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UDMVMCFuncLib_GetCharMetricsComp()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDMVMCFuncLib_GetCharMetricsComp_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UDMVMCFuncLib::execGetCharMetricsComp)
{
	P_GET_OBJECT(AActor,Z_Param_InActor);
	P_GET_UBOOL(Z_Param_bTryGetFromParentActor);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UDMVMCCharMetricsComp**)Z_Param__Result=UDMVMCFuncLib::GetCharMetricsComp(Z_Param_InActor,Z_Param_bTryGetFromParentActor);
	P_NATIVE_END;
}
// End Class UDMVMCFuncLib Function GetCharMetricsComp

// Begin Class UDMVMCFuncLib Function GetMetricsFValue
struct Z_Construct_UFunction_UDMVMCFuncLib_GetMetricsFValue_Statics
{
	struct DMVMCFuncLib_eventGetMetricsFValue_Parms
	{
		AActor* InActor;
		FGameplayTag MetricName;
		bool bIsGet;
		float Result;
		float Duration;
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintThreadSafe", "" },
		{ "Category", "PI" },
		{ "DefaultToSelf", "InActor" },
		{ "ModuleRelativePath", "Public/DMVMCFuncLib.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InActor;
	static const UECodeGen_Private::FStructPropertyParams NewProp_MetricName;
	static void NewProp_bIsGet_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsGet;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Result;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Duration;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDMVMCFuncLib_GetMetricsFValue_Statics::NewProp_InActor = { "InActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DMVMCFuncLib_eventGetMetricsFValue_Parms, InActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UDMVMCFuncLib_GetMetricsFValue_Statics::NewProp_MetricName = { "MetricName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DMVMCFuncLib_eventGetMetricsFValue_Parms, MetricName), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(0, nullptr) }; // 1298103297
void Z_Construct_UFunction_UDMVMCFuncLib_GetMetricsFValue_Statics::NewProp_bIsGet_SetBit(void* Obj)
{
	((DMVMCFuncLib_eventGetMetricsFValue_Parms*)Obj)->bIsGet = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UDMVMCFuncLib_GetMetricsFValue_Statics::NewProp_bIsGet = { "bIsGet", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(DMVMCFuncLib_eventGetMetricsFValue_Parms), &Z_Construct_UFunction_UDMVMCFuncLib_GetMetricsFValue_Statics::NewProp_bIsGet_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UDMVMCFuncLib_GetMetricsFValue_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DMVMCFuncLib_eventGetMetricsFValue_Parms, Result), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UDMVMCFuncLib_GetMetricsFValue_Statics::NewProp_Duration = { "Duration", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DMVMCFuncLib_eventGetMetricsFValue_Parms, Duration), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UDMVMCFuncLib_GetMetricsFValue_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DMVMCFuncLib_eventGetMetricsFValue_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDMVMCFuncLib_GetMetricsFValue_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDMVMCFuncLib_GetMetricsFValue_Statics::NewProp_InActor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDMVMCFuncLib_GetMetricsFValue_Statics::NewProp_MetricName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDMVMCFuncLib_GetMetricsFValue_Statics::NewProp_bIsGet,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDMVMCFuncLib_GetMetricsFValue_Statics::NewProp_Result,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDMVMCFuncLib_GetMetricsFValue_Statics::NewProp_Duration,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDMVMCFuncLib_GetMetricsFValue_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UDMVMCFuncLib_GetMetricsFValue_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDMVMCFuncLib_GetMetricsFValue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDMVMCFuncLib, nullptr, "GetMetricsFValue", nullptr, nullptr, Z_Construct_UFunction_UDMVMCFuncLib_GetMetricsFValue_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDMVMCFuncLib_GetMetricsFValue_Statics::PropPointers), sizeof(Z_Construct_UFunction_UDMVMCFuncLib_GetMetricsFValue_Statics::DMVMCFuncLib_eventGetMetricsFValue_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDMVMCFuncLib_GetMetricsFValue_Statics::Function_MetaDataParams), Z_Construct_UFunction_UDMVMCFuncLib_GetMetricsFValue_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UDMVMCFuncLib_GetMetricsFValue_Statics::DMVMCFuncLib_eventGetMetricsFValue_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UDMVMCFuncLib_GetMetricsFValue()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDMVMCFuncLib_GetMetricsFValue_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UDMVMCFuncLib::execGetMetricsFValue)
{
	P_GET_OBJECT(AActor,Z_Param_InActor);
	P_GET_STRUCT(FGameplayTag,Z_Param_MetricName);
	P_GET_UBOOL_REF(Z_Param_Out_bIsGet);
	P_GET_PROPERTY_REF(FFloatProperty,Z_Param_Out_Result);
	P_GET_PROPERTY_REF(FFloatProperty,Z_Param_Out_Duration);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=UDMVMCFuncLib::GetMetricsFValue(Z_Param_InActor,Z_Param_MetricName,Z_Param_Out_bIsGet,Z_Param_Out_Result,Z_Param_Out_Duration);
	P_NATIVE_END;
}
// End Class UDMVMCFuncLib Function GetMetricsFValue

// Begin Class UDMVMCFuncLib Function GetMetricsMaxFValue
struct Z_Construct_UFunction_UDMVMCFuncLib_GetMetricsMaxFValue_Statics
{
	struct DMVMCFuncLib_eventGetMetricsMaxFValue_Parms
	{
		AActor* InActor;
		FGameplayTag MetricName;
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintThreadSafe", "" },
		{ "Category", "PI" },
		{ "DefaultToSelf", "InActor" },
		{ "ModuleRelativePath", "Public/DMVMCFuncLib.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InActor;
	static const UECodeGen_Private::FStructPropertyParams NewProp_MetricName;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDMVMCFuncLib_GetMetricsMaxFValue_Statics::NewProp_InActor = { "InActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DMVMCFuncLib_eventGetMetricsMaxFValue_Parms, InActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UDMVMCFuncLib_GetMetricsMaxFValue_Statics::NewProp_MetricName = { "MetricName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DMVMCFuncLib_eventGetMetricsMaxFValue_Parms, MetricName), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(0, nullptr) }; // 1298103297
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UDMVMCFuncLib_GetMetricsMaxFValue_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DMVMCFuncLib_eventGetMetricsMaxFValue_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDMVMCFuncLib_GetMetricsMaxFValue_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDMVMCFuncLib_GetMetricsMaxFValue_Statics::NewProp_InActor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDMVMCFuncLib_GetMetricsMaxFValue_Statics::NewProp_MetricName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDMVMCFuncLib_GetMetricsMaxFValue_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UDMVMCFuncLib_GetMetricsMaxFValue_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDMVMCFuncLib_GetMetricsMaxFValue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDMVMCFuncLib, nullptr, "GetMetricsMaxFValue", nullptr, nullptr, Z_Construct_UFunction_UDMVMCFuncLib_GetMetricsMaxFValue_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDMVMCFuncLib_GetMetricsMaxFValue_Statics::PropPointers), sizeof(Z_Construct_UFunction_UDMVMCFuncLib_GetMetricsMaxFValue_Statics::DMVMCFuncLib_eventGetMetricsMaxFValue_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDMVMCFuncLib_GetMetricsMaxFValue_Statics::Function_MetaDataParams), Z_Construct_UFunction_UDMVMCFuncLib_GetMetricsMaxFValue_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UDMVMCFuncLib_GetMetricsMaxFValue_Statics::DMVMCFuncLib_eventGetMetricsMaxFValue_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UDMVMCFuncLib_GetMetricsMaxFValue()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDMVMCFuncLib_GetMetricsMaxFValue_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UDMVMCFuncLib::execGetMetricsMaxFValue)
{
	P_GET_OBJECT(AActor,Z_Param_InActor);
	P_GET_STRUCT(FGameplayTag,Z_Param_MetricName);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=UDMVMCFuncLib::GetMetricsMaxFValue(Z_Param_InActor,Z_Param_MetricName);
	P_NATIVE_END;
}
// End Class UDMVMCFuncLib Function GetMetricsMaxFValue

// Begin Class UDMVMCFuncLib Function SetMetricsFValue
struct Z_Construct_UFunction_UDMVMCFuncLib_SetMetricsFValue_Statics
{
	struct DMVMCFuncLib_eventSetMetricsFValue_Parms
	{
		AActor* InActor;
		FGameplayTag MetricName;
		float newValue;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintThreadSafe", "" },
		{ "Category", "PI" },
		{ "DefaultToSelf", "InActor" },
		{ "ModuleRelativePath", "Public/DMVMCFuncLib.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InActor;
	static const UECodeGen_Private::FStructPropertyParams NewProp_MetricName;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_newValue;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDMVMCFuncLib_SetMetricsFValue_Statics::NewProp_InActor = { "InActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DMVMCFuncLib_eventSetMetricsFValue_Parms, InActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UDMVMCFuncLib_SetMetricsFValue_Statics::NewProp_MetricName = { "MetricName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DMVMCFuncLib_eventSetMetricsFValue_Parms, MetricName), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(0, nullptr) }; // 1298103297
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UDMVMCFuncLib_SetMetricsFValue_Statics::NewProp_newValue = { "newValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DMVMCFuncLib_eventSetMetricsFValue_Parms, newValue), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UDMVMCFuncLib_SetMetricsFValue_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((DMVMCFuncLib_eventSetMetricsFValue_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UDMVMCFuncLib_SetMetricsFValue_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(DMVMCFuncLib_eventSetMetricsFValue_Parms), &Z_Construct_UFunction_UDMVMCFuncLib_SetMetricsFValue_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDMVMCFuncLib_SetMetricsFValue_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDMVMCFuncLib_SetMetricsFValue_Statics::NewProp_InActor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDMVMCFuncLib_SetMetricsFValue_Statics::NewProp_MetricName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDMVMCFuncLib_SetMetricsFValue_Statics::NewProp_newValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDMVMCFuncLib_SetMetricsFValue_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UDMVMCFuncLib_SetMetricsFValue_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDMVMCFuncLib_SetMetricsFValue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDMVMCFuncLib, nullptr, "SetMetricsFValue", nullptr, nullptr, Z_Construct_UFunction_UDMVMCFuncLib_SetMetricsFValue_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDMVMCFuncLib_SetMetricsFValue_Statics::PropPointers), sizeof(Z_Construct_UFunction_UDMVMCFuncLib_SetMetricsFValue_Statics::DMVMCFuncLib_eventSetMetricsFValue_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDMVMCFuncLib_SetMetricsFValue_Statics::Function_MetaDataParams), Z_Construct_UFunction_UDMVMCFuncLib_SetMetricsFValue_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UDMVMCFuncLib_SetMetricsFValue_Statics::DMVMCFuncLib_eventSetMetricsFValue_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UDMVMCFuncLib_SetMetricsFValue()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDMVMCFuncLib_SetMetricsFValue_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UDMVMCFuncLib::execSetMetricsFValue)
{
	P_GET_OBJECT(AActor,Z_Param_InActor);
	P_GET_STRUCT(FGameplayTag,Z_Param_MetricName);
	P_GET_PROPERTY(FFloatProperty,Z_Param_newValue);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UDMVMCFuncLib::SetMetricsFValue(Z_Param_InActor,Z_Param_MetricName,Z_Param_newValue);
	P_NATIVE_END;
}
// End Class UDMVMCFuncLib Function SetMetricsFValue

// Begin Class UDMVMCFuncLib
void UDMVMCFuncLib::StaticRegisterNativesUDMVMCFuncLib()
{
	UClass* Class = UDMVMCFuncLib::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetCharMetricsComp", &UDMVMCFuncLib::execGetCharMetricsComp },
		{ "GetMetricsFValue", &UDMVMCFuncLib::execGetMetricsFValue },
		{ "GetMetricsMaxFValue", &UDMVMCFuncLib::execGetMetricsMaxFValue },
		{ "SetMetricsFValue", &UDMVMCFuncLib::execSetMetricsFValue },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UDMVMCFuncLib);
UClass* Z_Construct_UClass_UDMVMCFuncLib_NoRegister()
{
	return UDMVMCFuncLib::StaticClass();
}
struct Z_Construct_UClass_UDMVMCFuncLib_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "DMVMCFuncLib.h" },
		{ "ModuleRelativePath", "Public/DMVMCFuncLib.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UDMVMCFuncLib_GetCharMetricsComp, "GetCharMetricsComp" }, // 2114363087
		{ &Z_Construct_UFunction_UDMVMCFuncLib_GetMetricsFValue, "GetMetricsFValue" }, // 2505509978
		{ &Z_Construct_UFunction_UDMVMCFuncLib_GetMetricsMaxFValue, "GetMetricsMaxFValue" }, // 2027620982
		{ &Z_Construct_UFunction_UDMVMCFuncLib_SetMetricsFValue, "SetMetricsFValue" }, // 1358823765
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDMVMCFuncLib>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UDMVMCFuncLib_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_DMVMeleeCombat,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UDMVMCFuncLib_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UDMVMCFuncLib_Statics::ClassParams = {
	&UDMVMCFuncLib::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	0,
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UDMVMCFuncLib_Statics::Class_MetaDataParams), Z_Construct_UClass_UDMVMCFuncLib_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UDMVMCFuncLib()
{
	if (!Z_Registration_Info_UClass_UDMVMCFuncLib.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDMVMCFuncLib.OuterSingleton, Z_Construct_UClass_UDMVMCFuncLib_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UDMVMCFuncLib.OuterSingleton;
}
template<> DMVMELEECOMBAT_API UClass* StaticClass<UDMVMCFuncLib>()
{
	return UDMVMCFuncLib::StaticClass();
}
UDMVMCFuncLib::UDMVMCFuncLib(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UDMVMCFuncLib);
UDMVMCFuncLib::~UDMVMCFuncLib() {}
// End Class UDMVMCFuncLib

// Begin Registration
struct Z_CompiledInDeferFile_FID_DMVMeleeCombat_Source_DMVMeleeCombat_Public_DMVMCFuncLib_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UDMVMCFuncLib, UDMVMCFuncLib::StaticClass, TEXT("UDMVMCFuncLib"), &Z_Registration_Info_UClass_UDMVMCFuncLib, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDMVMCFuncLib), 2554864394U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_DMVMeleeCombat_Source_DMVMeleeCombat_Public_DMVMCFuncLib_h_337214631(TEXT("/Script/DMVMeleeCombat"),
	Z_CompiledInDeferFile_FID_DMVMeleeCombat_Source_DMVMeleeCombat_Public_DMVMCFuncLib_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_DMVMeleeCombat_Source_DMVMeleeCombat_Public_DMVMCFuncLib_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
