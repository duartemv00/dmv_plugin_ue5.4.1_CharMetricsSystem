// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DMVMeleeCombat/Public/Components/DMVMCCharMetricsComp.h"
#include "Runtime/Engine/Classes/Engine/TimerHandle.h"
#include "Runtime/GameplayTags/Classes/GameplayTagContainer.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDMVMCCharMetricsComp() {}

// Begin Cross Module References
DMVMELEECOMBAT_API UClass* Z_Construct_UClass_UDMVMCCharMetricsComp();
DMVMELEECOMBAT_API UClass* Z_Construct_UClass_UDMVMCCharMetricsComp_NoRegister();
DMVMELEECOMBAT_API UEnum* Z_Construct_UEnum_DMVMeleeCombat_ECharMetricsEnum();
DMVMELEECOMBAT_API UFunction* Z_Construct_UDelegateFunction_DMVMeleeCombat_OnHealthChangeDelegate__DelegateSignature();
DMVMELEECOMBAT_API UFunction* Z_Construct_UDelegateFunction_DMVMeleeCombat_OnStaminaChangeDelegate__DelegateSignature();
DMVMELEECOMBAT_API UScriptStruct* Z_Construct_UScriptStruct_FMetricsSetElement();
ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FTimerHandle();
GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTag();
UPackage* Z_Construct_UPackage__Script_DMVMeleeCombat();
// End Cross Module References

// Begin Delegate FOnHealthChangeDelegate
struct Z_Construct_UDelegateFunction_DMVMeleeCombat_OnHealthChangeDelegate__DelegateSignature_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Components/DMVMCCharMetricsComp.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_DMVMeleeCombat_OnHealthChangeDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_DMVMeleeCombat, nullptr, "OnHealthChangeDelegate__DelegateSignature", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_DMVMeleeCombat_OnHealthChangeDelegate__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_DMVMeleeCombat_OnHealthChangeDelegate__DelegateSignature_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UDelegateFunction_DMVMeleeCombat_OnHealthChangeDelegate__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_DMVMeleeCombat_OnHealthChangeDelegate__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnHealthChangeDelegate_DelegateWrapper(const FMulticastScriptDelegate& OnHealthChangeDelegate)
{
	OnHealthChangeDelegate.ProcessMulticastDelegate<UObject>(NULL);
}
// End Delegate FOnHealthChangeDelegate

// Begin Delegate FOnStaminaChangeDelegate
struct Z_Construct_UDelegateFunction_DMVMeleeCombat_OnStaminaChangeDelegate__DelegateSignature_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Components/DMVMCCharMetricsComp.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_DMVMeleeCombat_OnStaminaChangeDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_DMVMeleeCombat, nullptr, "OnStaminaChangeDelegate__DelegateSignature", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_DMVMeleeCombat_OnStaminaChangeDelegate__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_DMVMeleeCombat_OnStaminaChangeDelegate__DelegateSignature_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UDelegateFunction_DMVMeleeCombat_OnStaminaChangeDelegate__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_DMVMeleeCombat_OnStaminaChangeDelegate__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnStaminaChangeDelegate_DelegateWrapper(const FMulticastScriptDelegate& OnStaminaChangeDelegate)
{
	OnStaminaChangeDelegate.ProcessMulticastDelegate<UObject>(NULL);
}
// End Delegate FOnStaminaChangeDelegate

// Begin ScriptStruct FMetricsSetElement
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_MetricsSetElement;
class UScriptStruct* FMetricsSetElement::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_MetricsSetElement.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_MetricsSetElement.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMetricsSetElement, (UObject*)Z_Construct_UPackage__Script_DMVMeleeCombat(), TEXT("MetricsSetElement"));
	}
	return Z_Registration_Info_UScriptStruct_MetricsSetElement.OuterSingleton;
}
template<> DMVMELEECOMBAT_API UScriptStruct* StaticStruct<FMetricsSetElement>()
{
	return FMetricsSetElement::StaticStruct();
}
struct Z_Construct_UScriptStruct_FMetricsSetElement_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Components/DMVMCCharMetricsComp.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_metricName_MetaData[] = {
		{ "Category", "MetricsSetElement" },
		{ "ModuleRelativePath", "Public/Components/DMVMCCharMetricsComp.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_metricType_MetaData[] = {
		{ "Category", "MetricsSetElement" },
		{ "ModuleRelativePath", "Public/Components/DMVMCCharMetricsComp.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_defaultValue_MetaData[] = {
		{ "Category", "MetricsSetElement" },
		{ "ModuleRelativePath", "Public/Components/DMVMCCharMetricsComp.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_currentValue_MetaData[] = {
		{ "ModuleRelativePath", "Public/Components/DMVMCCharMetricsComp.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_minValue_MetaData[] = {
		{ "Category", "MetricsSetElement" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Extreme values for the metric\n" },
#endif
		{ "ModuleRelativePath", "Public/Components/DMVMCCharMetricsComp.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Extreme values for the metric" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_maxValue_MetaData[] = {
		{ "Category", "MetricsSetElement" },
		{ "ModuleRelativePath", "Public/Components/DMVMCCharMetricsComp.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_regenTimeRate_MetaData[] = {
		{ "Category", "MetricsSetElement" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Regeneration metrics \n" },
#endif
		{ "EditCondition", "metricType == ECharMetricsEnum::REGEN_STAT" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/Components/DMVMCCharMetricsComp.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Regeneration metrics" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_regenQuantity_MetaData[] = {
		{ "Category", "MetricsSetElement" },
		{ "EditCondition", "metricType == ECharMetricsEnum::REGEN_STAT" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/Components/DMVMCCharMetricsComp.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_metricName;
	static const UECodeGen_Private::FBytePropertyParams NewProp_metricType_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_metricType;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_defaultValue;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_currentValue;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_minValue;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_maxValue;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_regenTimeRate;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_regenQuantity;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMetricsSetElement>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMetricsSetElement_Statics::NewProp_metricName = { "metricName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMetricsSetElement, metricName), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_metricName_MetaData), NewProp_metricName_MetaData) }; // 1298103297
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FMetricsSetElement_Statics::NewProp_metricType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FMetricsSetElement_Statics::NewProp_metricType = { "metricType", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMetricsSetElement, metricType), Z_Construct_UEnum_DMVMeleeCombat_ECharMetricsEnum, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_metricType_MetaData), NewProp_metricType_MetaData) }; // 1042023461
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FMetricsSetElement_Statics::NewProp_defaultValue = { "defaultValue", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMetricsSetElement, defaultValue), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_defaultValue_MetaData), NewProp_defaultValue_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FMetricsSetElement_Statics::NewProp_currentValue = { "currentValue", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMetricsSetElement, currentValue), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_currentValue_MetaData), NewProp_currentValue_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FMetricsSetElement_Statics::NewProp_minValue = { "minValue", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMetricsSetElement, minValue), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_minValue_MetaData), NewProp_minValue_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FMetricsSetElement_Statics::NewProp_maxValue = { "maxValue", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMetricsSetElement, maxValue), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_maxValue_MetaData), NewProp_maxValue_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FMetricsSetElement_Statics::NewProp_regenTimeRate = { "regenTimeRate", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMetricsSetElement, regenTimeRate), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_regenTimeRate_MetaData), NewProp_regenTimeRate_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FMetricsSetElement_Statics::NewProp_regenQuantity = { "regenQuantity", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMetricsSetElement, regenQuantity), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_regenQuantity_MetaData), NewProp_regenQuantity_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMetricsSetElement_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMetricsSetElement_Statics::NewProp_metricName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMetricsSetElement_Statics::NewProp_metricType_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMetricsSetElement_Statics::NewProp_metricType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMetricsSetElement_Statics::NewProp_defaultValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMetricsSetElement_Statics::NewProp_currentValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMetricsSetElement_Statics::NewProp_minValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMetricsSetElement_Statics::NewProp_maxValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMetricsSetElement_Statics::NewProp_regenTimeRate,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMetricsSetElement_Statics::NewProp_regenQuantity,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMetricsSetElement_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMetricsSetElement_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_DMVMeleeCombat,
	nullptr,
	&NewStructOps,
	"MetricsSetElement",
	Z_Construct_UScriptStruct_FMetricsSetElement_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMetricsSetElement_Statics::PropPointers),
	sizeof(FMetricsSetElement),
	alignof(FMetricsSetElement),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMetricsSetElement_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FMetricsSetElement_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FMetricsSetElement()
{
	if (!Z_Registration_Info_UScriptStruct_MetricsSetElement.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_MetricsSetElement.InnerSingleton, Z_Construct_UScriptStruct_FMetricsSetElement_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_MetricsSetElement.InnerSingleton;
}
// End ScriptStruct FMetricsSetElement

// Begin Class UDMVMCCharMetricsComp Function CurrentValueExists
struct Z_Construct_UFunction_UDMVMCCharMetricsComp_CurrentValueExists_Statics
{
	struct DMVMCCharMetricsComp_eventCurrentValueExists_Parms
	{
		FGameplayTag metricName;
		float Result;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "PI" },
		{ "ModuleRelativePath", "Public/Components/DMVMCCharMetricsComp.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_metricName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_metricName;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Result;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UDMVMCCharMetricsComp_CurrentValueExists_Statics::NewProp_metricName = { "metricName", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DMVMCCharMetricsComp_eventCurrentValueExists_Parms, metricName), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_metricName_MetaData), NewProp_metricName_MetaData) }; // 1298103297
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UDMVMCCharMetricsComp_CurrentValueExists_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DMVMCCharMetricsComp_eventCurrentValueExists_Parms, Result), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UDMVMCCharMetricsComp_CurrentValueExists_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((DMVMCCharMetricsComp_eventCurrentValueExists_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UDMVMCCharMetricsComp_CurrentValueExists_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(DMVMCCharMetricsComp_eventCurrentValueExists_Parms), &Z_Construct_UFunction_UDMVMCCharMetricsComp_CurrentValueExists_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDMVMCCharMetricsComp_CurrentValueExists_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDMVMCCharMetricsComp_CurrentValueExists_Statics::NewProp_metricName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDMVMCCharMetricsComp_CurrentValueExists_Statics::NewProp_Result,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDMVMCCharMetricsComp_CurrentValueExists_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UDMVMCCharMetricsComp_CurrentValueExists_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDMVMCCharMetricsComp_CurrentValueExists_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDMVMCCharMetricsComp, nullptr, "CurrentValueExists", nullptr, nullptr, Z_Construct_UFunction_UDMVMCCharMetricsComp_CurrentValueExists_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDMVMCCharMetricsComp_CurrentValueExists_Statics::PropPointers), sizeof(Z_Construct_UFunction_UDMVMCCharMetricsComp_CurrentValueExists_Statics::DMVMCCharMetricsComp_eventCurrentValueExists_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDMVMCCharMetricsComp_CurrentValueExists_Statics::Function_MetaDataParams), Z_Construct_UFunction_UDMVMCCharMetricsComp_CurrentValueExists_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UDMVMCCharMetricsComp_CurrentValueExists_Statics::DMVMCCharMetricsComp_eventCurrentValueExists_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UDMVMCCharMetricsComp_CurrentValueExists()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDMVMCCharMetricsComp_CurrentValueExists_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UDMVMCCharMetricsComp::execCurrentValueExists)
{
	P_GET_STRUCT(FGameplayTag,Z_Param_metricName);
	P_GET_PROPERTY_REF(FFloatProperty,Z_Param_Out_Result);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->CurrentValueExists(Z_Param_metricName,Z_Param_Out_Result);
	P_NATIVE_END;
}
// End Class UDMVMCCharMetricsComp Function CurrentValueExists

// Begin Class UDMVMCCharMetricsComp Function GetMetricCurrentValue
struct Z_Construct_UFunction_UDMVMCCharMetricsComp_GetMetricCurrentValue_Statics
{
	struct DMVMCCharMetricsComp_eventGetMetricCurrentValue_Parms
	{
		FGameplayTag metricName;
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "PI" },
		{ "ModuleRelativePath", "Public/Components/DMVMCCharMetricsComp.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_metricName;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UDMVMCCharMetricsComp_GetMetricCurrentValue_Statics::NewProp_metricName = { "metricName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DMVMCCharMetricsComp_eventGetMetricCurrentValue_Parms, metricName), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(0, nullptr) }; // 1298103297
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UDMVMCCharMetricsComp_GetMetricCurrentValue_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DMVMCCharMetricsComp_eventGetMetricCurrentValue_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDMVMCCharMetricsComp_GetMetricCurrentValue_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDMVMCCharMetricsComp_GetMetricCurrentValue_Statics::NewProp_metricName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDMVMCCharMetricsComp_GetMetricCurrentValue_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UDMVMCCharMetricsComp_GetMetricCurrentValue_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDMVMCCharMetricsComp_GetMetricCurrentValue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDMVMCCharMetricsComp, nullptr, "GetMetricCurrentValue", nullptr, nullptr, Z_Construct_UFunction_UDMVMCCharMetricsComp_GetMetricCurrentValue_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDMVMCCharMetricsComp_GetMetricCurrentValue_Statics::PropPointers), sizeof(Z_Construct_UFunction_UDMVMCCharMetricsComp_GetMetricCurrentValue_Statics::DMVMCCharMetricsComp_eventGetMetricCurrentValue_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDMVMCCharMetricsComp_GetMetricCurrentValue_Statics::Function_MetaDataParams), Z_Construct_UFunction_UDMVMCCharMetricsComp_GetMetricCurrentValue_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UDMVMCCharMetricsComp_GetMetricCurrentValue_Statics::DMVMCCharMetricsComp_eventGetMetricCurrentValue_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UDMVMCCharMetricsComp_GetMetricCurrentValue()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDMVMCCharMetricsComp_GetMetricCurrentValue_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UDMVMCCharMetricsComp::execGetMetricCurrentValue)
{
	P_GET_STRUCT(FGameplayTag,Z_Param_metricName);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=P_THIS->GetMetricCurrentValue(Z_Param_metricName);
	P_NATIVE_END;
}
// End Class UDMVMCCharMetricsComp Function GetMetricCurrentValue

// Begin Class UDMVMCCharMetricsComp Function GetMetricMaxValue
struct Z_Construct_UFunction_UDMVMCCharMetricsComp_GetMetricMaxValue_Statics
{
	struct DMVMCCharMetricsComp_eventGetMetricMaxValue_Parms
	{
		FGameplayTag metricName;
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "PI" },
		{ "ModuleRelativePath", "Public/Components/DMVMCCharMetricsComp.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_metricName;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UDMVMCCharMetricsComp_GetMetricMaxValue_Statics::NewProp_metricName = { "metricName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DMVMCCharMetricsComp_eventGetMetricMaxValue_Parms, metricName), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(0, nullptr) }; // 1298103297
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UDMVMCCharMetricsComp_GetMetricMaxValue_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DMVMCCharMetricsComp_eventGetMetricMaxValue_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDMVMCCharMetricsComp_GetMetricMaxValue_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDMVMCCharMetricsComp_GetMetricMaxValue_Statics::NewProp_metricName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDMVMCCharMetricsComp_GetMetricMaxValue_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UDMVMCCharMetricsComp_GetMetricMaxValue_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDMVMCCharMetricsComp_GetMetricMaxValue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDMVMCCharMetricsComp, nullptr, "GetMetricMaxValue", nullptr, nullptr, Z_Construct_UFunction_UDMVMCCharMetricsComp_GetMetricMaxValue_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDMVMCCharMetricsComp_GetMetricMaxValue_Statics::PropPointers), sizeof(Z_Construct_UFunction_UDMVMCCharMetricsComp_GetMetricMaxValue_Statics::DMVMCCharMetricsComp_eventGetMetricMaxValue_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDMVMCCharMetricsComp_GetMetricMaxValue_Statics::Function_MetaDataParams), Z_Construct_UFunction_UDMVMCCharMetricsComp_GetMetricMaxValue_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UDMVMCCharMetricsComp_GetMetricMaxValue_Statics::DMVMCCharMetricsComp_eventGetMetricMaxValue_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UDMVMCCharMetricsComp_GetMetricMaxValue()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDMVMCCharMetricsComp_GetMetricMaxValue_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UDMVMCCharMetricsComp::execGetMetricMaxValue)
{
	P_GET_STRUCT(FGameplayTag,Z_Param_metricName);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=P_THIS->GetMetricMaxValue(Z_Param_metricName);
	P_NATIVE_END;
}
// End Class UDMVMCCharMetricsComp Function GetMetricMaxValue

// Begin Class UDMVMCCharMetricsComp Function ModifyMetricCurrentValue
struct Z_Construct_UFunction_UDMVMCCharMetricsComp_ModifyMetricCurrentValue_Statics
{
	struct DMVMCCharMetricsComp_eventModifyMetricCurrentValue_Parms
	{
		FGameplayTag metricName;
		float value;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "PI" },
		{ "ModuleRelativePath", "Public/Components/DMVMCCharMetricsComp.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_metricName;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_value;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UDMVMCCharMetricsComp_ModifyMetricCurrentValue_Statics::NewProp_metricName = { "metricName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DMVMCCharMetricsComp_eventModifyMetricCurrentValue_Parms, metricName), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(0, nullptr) }; // 1298103297
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UDMVMCCharMetricsComp_ModifyMetricCurrentValue_Statics::NewProp_value = { "value", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DMVMCCharMetricsComp_eventModifyMetricCurrentValue_Parms, value), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDMVMCCharMetricsComp_ModifyMetricCurrentValue_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDMVMCCharMetricsComp_ModifyMetricCurrentValue_Statics::NewProp_metricName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDMVMCCharMetricsComp_ModifyMetricCurrentValue_Statics::NewProp_value,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UDMVMCCharMetricsComp_ModifyMetricCurrentValue_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDMVMCCharMetricsComp_ModifyMetricCurrentValue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDMVMCCharMetricsComp, nullptr, "ModifyMetricCurrentValue", nullptr, nullptr, Z_Construct_UFunction_UDMVMCCharMetricsComp_ModifyMetricCurrentValue_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDMVMCCharMetricsComp_ModifyMetricCurrentValue_Statics::PropPointers), sizeof(Z_Construct_UFunction_UDMVMCCharMetricsComp_ModifyMetricCurrentValue_Statics::DMVMCCharMetricsComp_eventModifyMetricCurrentValue_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDMVMCCharMetricsComp_ModifyMetricCurrentValue_Statics::Function_MetaDataParams), Z_Construct_UFunction_UDMVMCCharMetricsComp_ModifyMetricCurrentValue_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UDMVMCCharMetricsComp_ModifyMetricCurrentValue_Statics::DMVMCCharMetricsComp_eventModifyMetricCurrentValue_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UDMVMCCharMetricsComp_ModifyMetricCurrentValue()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDMVMCCharMetricsComp_ModifyMetricCurrentValue_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UDMVMCCharMetricsComp::execModifyMetricCurrentValue)
{
	P_GET_STRUCT(FGameplayTag,Z_Param_metricName);
	P_GET_PROPERTY(FFloatProperty,Z_Param_value);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ModifyMetricCurrentValue(Z_Param_metricName,Z_Param_value);
	P_NATIVE_END;
}
// End Class UDMVMCCharMetricsComp Function ModifyMetricCurrentValue

// Begin Class UDMVMCCharMetricsComp Function RegenMetric
struct Z_Construct_UFunction_UDMVMCCharMetricsComp_RegenMetric_Statics
{
	struct DMVMCCharMetricsComp_eventRegenMetric_Parms
	{
		FGameplayTag metricName;
		float regenDelta;
		float regenQuantity;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "PI" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// REGEN METRICS FUNCTIONS\n" },
#endif
		{ "ModuleRelativePath", "Public/Components/DMVMCCharMetricsComp.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "REGEN METRICS FUNCTIONS" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_metricName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_metricName;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_regenDelta;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_regenQuantity;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UDMVMCCharMetricsComp_RegenMetric_Statics::NewProp_metricName = { "metricName", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DMVMCCharMetricsComp_eventRegenMetric_Parms, metricName), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_metricName_MetaData), NewProp_metricName_MetaData) }; // 1298103297
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UDMVMCCharMetricsComp_RegenMetric_Statics::NewProp_regenDelta = { "regenDelta", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DMVMCCharMetricsComp_eventRegenMetric_Parms, regenDelta), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UDMVMCCharMetricsComp_RegenMetric_Statics::NewProp_regenQuantity = { "regenQuantity", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DMVMCCharMetricsComp_eventRegenMetric_Parms, regenQuantity), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDMVMCCharMetricsComp_RegenMetric_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDMVMCCharMetricsComp_RegenMetric_Statics::NewProp_metricName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDMVMCCharMetricsComp_RegenMetric_Statics::NewProp_regenDelta,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDMVMCCharMetricsComp_RegenMetric_Statics::NewProp_regenQuantity,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UDMVMCCharMetricsComp_RegenMetric_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDMVMCCharMetricsComp_RegenMetric_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDMVMCCharMetricsComp, nullptr, "RegenMetric", nullptr, nullptr, Z_Construct_UFunction_UDMVMCCharMetricsComp_RegenMetric_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDMVMCCharMetricsComp_RegenMetric_Statics::PropPointers), sizeof(Z_Construct_UFunction_UDMVMCCharMetricsComp_RegenMetric_Statics::DMVMCCharMetricsComp_eventRegenMetric_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDMVMCCharMetricsComp_RegenMetric_Statics::Function_MetaDataParams), Z_Construct_UFunction_UDMVMCCharMetricsComp_RegenMetric_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UDMVMCCharMetricsComp_RegenMetric_Statics::DMVMCCharMetricsComp_eventRegenMetric_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UDMVMCCharMetricsComp_RegenMetric()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDMVMCCharMetricsComp_RegenMetric_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UDMVMCCharMetricsComp::execRegenMetric)
{
	P_GET_STRUCT(FGameplayTag,Z_Param_metricName);
	P_GET_PROPERTY(FFloatProperty,Z_Param_regenDelta);
	P_GET_PROPERTY(FFloatProperty,Z_Param_regenQuantity);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->RegenMetric(Z_Param_metricName,Z_Param_regenDelta,Z_Param_regenQuantity);
	P_NATIVE_END;
}
// End Class UDMVMCCharMetricsComp Function RegenMetric

// Begin Class UDMVMCCharMetricsComp Function SetMetricCurrentValue
struct Z_Construct_UFunction_UDMVMCCharMetricsComp_SetMetricCurrentValue_Statics
{
	struct DMVMCCharMetricsComp_eventSetMetricCurrentValue_Parms
	{
		FGameplayTag metricName;
		float newCurrentValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "PI" },
		{ "ModuleRelativePath", "Public/Components/DMVMCCharMetricsComp.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_metricName;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_newCurrentValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UDMVMCCharMetricsComp_SetMetricCurrentValue_Statics::NewProp_metricName = { "metricName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DMVMCCharMetricsComp_eventSetMetricCurrentValue_Parms, metricName), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(0, nullptr) }; // 1298103297
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UDMVMCCharMetricsComp_SetMetricCurrentValue_Statics::NewProp_newCurrentValue = { "newCurrentValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DMVMCCharMetricsComp_eventSetMetricCurrentValue_Parms, newCurrentValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDMVMCCharMetricsComp_SetMetricCurrentValue_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDMVMCCharMetricsComp_SetMetricCurrentValue_Statics::NewProp_metricName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDMVMCCharMetricsComp_SetMetricCurrentValue_Statics::NewProp_newCurrentValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UDMVMCCharMetricsComp_SetMetricCurrentValue_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDMVMCCharMetricsComp_SetMetricCurrentValue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDMVMCCharMetricsComp, nullptr, "SetMetricCurrentValue", nullptr, nullptr, Z_Construct_UFunction_UDMVMCCharMetricsComp_SetMetricCurrentValue_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDMVMCCharMetricsComp_SetMetricCurrentValue_Statics::PropPointers), sizeof(Z_Construct_UFunction_UDMVMCCharMetricsComp_SetMetricCurrentValue_Statics::DMVMCCharMetricsComp_eventSetMetricCurrentValue_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDMVMCCharMetricsComp_SetMetricCurrentValue_Statics::Function_MetaDataParams), Z_Construct_UFunction_UDMVMCCharMetricsComp_SetMetricCurrentValue_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UDMVMCCharMetricsComp_SetMetricCurrentValue_Statics::DMVMCCharMetricsComp_eventSetMetricCurrentValue_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UDMVMCCharMetricsComp_SetMetricCurrentValue()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDMVMCCharMetricsComp_SetMetricCurrentValue_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UDMVMCCharMetricsComp::execSetMetricCurrentValue)
{
	P_GET_STRUCT(FGameplayTag,Z_Param_metricName);
	P_GET_PROPERTY(FFloatProperty,Z_Param_newCurrentValue);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetMetricCurrentValue(Z_Param_metricName,Z_Param_newCurrentValue);
	P_NATIVE_END;
}
// End Class UDMVMCCharMetricsComp Function SetMetricCurrentValue

// Begin Class UDMVMCCharMetricsComp Function StartRegenTimer
struct Z_Construct_UFunction_UDMVMCCharMetricsComp_StartRegenTimer_Statics
{
	struct DMVMCCharMetricsComp_eventStartRegenTimer_Parms
	{
		FGameplayTag metricName;
		float regenRate;
		float regenQuantity;
		bool isUnregen;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "PI" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Start a timer that will regen/unregen the metric at a certain rate\n" },
#endif
		{ "CPP_Default_isUnregen", "false" },
		{ "ModuleRelativePath", "Public/Components/DMVMCCharMetricsComp.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Start a timer that will regen/unregen the metric at a certain rate" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_metricName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_metricName;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_regenRate;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_regenQuantity;
	static void NewProp_isUnregen_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_isUnregen;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UDMVMCCharMetricsComp_StartRegenTimer_Statics::NewProp_metricName = { "metricName", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DMVMCCharMetricsComp_eventStartRegenTimer_Parms, metricName), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_metricName_MetaData), NewProp_metricName_MetaData) }; // 1298103297
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UDMVMCCharMetricsComp_StartRegenTimer_Statics::NewProp_regenRate = { "regenRate", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DMVMCCharMetricsComp_eventStartRegenTimer_Parms, regenRate), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UDMVMCCharMetricsComp_StartRegenTimer_Statics::NewProp_regenQuantity = { "regenQuantity", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DMVMCCharMetricsComp_eventStartRegenTimer_Parms, regenQuantity), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UDMVMCCharMetricsComp_StartRegenTimer_Statics::NewProp_isUnregen_SetBit(void* Obj)
{
	((DMVMCCharMetricsComp_eventStartRegenTimer_Parms*)Obj)->isUnregen = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UDMVMCCharMetricsComp_StartRegenTimer_Statics::NewProp_isUnregen = { "isUnregen", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(DMVMCCharMetricsComp_eventStartRegenTimer_Parms), &Z_Construct_UFunction_UDMVMCCharMetricsComp_StartRegenTimer_Statics::NewProp_isUnregen_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDMVMCCharMetricsComp_StartRegenTimer_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDMVMCCharMetricsComp_StartRegenTimer_Statics::NewProp_metricName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDMVMCCharMetricsComp_StartRegenTimer_Statics::NewProp_regenRate,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDMVMCCharMetricsComp_StartRegenTimer_Statics::NewProp_regenQuantity,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDMVMCCharMetricsComp_StartRegenTimer_Statics::NewProp_isUnregen,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UDMVMCCharMetricsComp_StartRegenTimer_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDMVMCCharMetricsComp_StartRegenTimer_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDMVMCCharMetricsComp, nullptr, "StartRegenTimer", nullptr, nullptr, Z_Construct_UFunction_UDMVMCCharMetricsComp_StartRegenTimer_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDMVMCCharMetricsComp_StartRegenTimer_Statics::PropPointers), sizeof(Z_Construct_UFunction_UDMVMCCharMetricsComp_StartRegenTimer_Statics::DMVMCCharMetricsComp_eventStartRegenTimer_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDMVMCCharMetricsComp_StartRegenTimer_Statics::Function_MetaDataParams), Z_Construct_UFunction_UDMVMCCharMetricsComp_StartRegenTimer_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UDMVMCCharMetricsComp_StartRegenTimer_Statics::DMVMCCharMetricsComp_eventStartRegenTimer_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UDMVMCCharMetricsComp_StartRegenTimer()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDMVMCCharMetricsComp_StartRegenTimer_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UDMVMCCharMetricsComp::execStartRegenTimer)
{
	P_GET_STRUCT(FGameplayTag,Z_Param_metricName);
	P_GET_PROPERTY(FFloatProperty,Z_Param_regenRate);
	P_GET_PROPERTY(FFloatProperty,Z_Param_regenQuantity);
	P_GET_UBOOL(Z_Param_isUnregen);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->StartRegenTimer(Z_Param_metricName,Z_Param_regenRate,Z_Param_regenQuantity,Z_Param_isUnregen);
	P_NATIVE_END;
}
// End Class UDMVMCCharMetricsComp Function StartRegenTimer

// Begin Class UDMVMCCharMetricsComp Function StopRegenTimer
struct Z_Construct_UFunction_UDMVMCCharMetricsComp_StopRegenTimer_Statics
{
	struct DMVMCCharMetricsComp_eventStopRegenTimer_Parms
	{
		FGameplayTag metricName;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "PI" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Stops the regen timer\n" },
#endif
		{ "ModuleRelativePath", "Public/Components/DMVMCCharMetricsComp.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Stops the regen timer" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_metricName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_metricName;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UDMVMCCharMetricsComp_StopRegenTimer_Statics::NewProp_metricName = { "metricName", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DMVMCCharMetricsComp_eventStopRegenTimer_Parms, metricName), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_metricName_MetaData), NewProp_metricName_MetaData) }; // 1298103297
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDMVMCCharMetricsComp_StopRegenTimer_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDMVMCCharMetricsComp_StopRegenTimer_Statics::NewProp_metricName,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UDMVMCCharMetricsComp_StopRegenTimer_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDMVMCCharMetricsComp_StopRegenTimer_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDMVMCCharMetricsComp, nullptr, "StopRegenTimer", nullptr, nullptr, Z_Construct_UFunction_UDMVMCCharMetricsComp_StopRegenTimer_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDMVMCCharMetricsComp_StopRegenTimer_Statics::PropPointers), sizeof(Z_Construct_UFunction_UDMVMCCharMetricsComp_StopRegenTimer_Statics::DMVMCCharMetricsComp_eventStopRegenTimer_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDMVMCCharMetricsComp_StopRegenTimer_Statics::Function_MetaDataParams), Z_Construct_UFunction_UDMVMCCharMetricsComp_StopRegenTimer_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UDMVMCCharMetricsComp_StopRegenTimer_Statics::DMVMCCharMetricsComp_eventStopRegenTimer_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UDMVMCCharMetricsComp_StopRegenTimer()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDMVMCCharMetricsComp_StopRegenTimer_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UDMVMCCharMetricsComp::execStopRegenTimer)
{
	P_GET_STRUCT(FGameplayTag,Z_Param_metricName);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->StopRegenTimer(Z_Param_metricName);
	P_NATIVE_END;
}
// End Class UDMVMCCharMetricsComp Function StopRegenTimer

// Begin Class UDMVMCCharMetricsComp Function UnregenMetric
struct Z_Construct_UFunction_UDMVMCCharMetricsComp_UnregenMetric_Statics
{
	struct DMVMCCharMetricsComp_eventUnregenMetric_Parms
	{
		FGameplayTag metricName;
		float regenDelta;
		float regenQuantity;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "PI" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Reduce the regenDelta from the metric's current value\n" },
#endif
		{ "ModuleRelativePath", "Public/Components/DMVMCCharMetricsComp.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Reduce the regenDelta from the metric's current value" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_metricName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_metricName;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_regenDelta;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_regenQuantity;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UDMVMCCharMetricsComp_UnregenMetric_Statics::NewProp_metricName = { "metricName", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DMVMCCharMetricsComp_eventUnregenMetric_Parms, metricName), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_metricName_MetaData), NewProp_metricName_MetaData) }; // 1298103297
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UDMVMCCharMetricsComp_UnregenMetric_Statics::NewProp_regenDelta = { "regenDelta", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DMVMCCharMetricsComp_eventUnregenMetric_Parms, regenDelta), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UDMVMCCharMetricsComp_UnregenMetric_Statics::NewProp_regenQuantity = { "regenQuantity", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DMVMCCharMetricsComp_eventUnregenMetric_Parms, regenQuantity), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDMVMCCharMetricsComp_UnregenMetric_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDMVMCCharMetricsComp_UnregenMetric_Statics::NewProp_metricName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDMVMCCharMetricsComp_UnregenMetric_Statics::NewProp_regenDelta,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDMVMCCharMetricsComp_UnregenMetric_Statics::NewProp_regenQuantity,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UDMVMCCharMetricsComp_UnregenMetric_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDMVMCCharMetricsComp_UnregenMetric_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDMVMCCharMetricsComp, nullptr, "UnregenMetric", nullptr, nullptr, Z_Construct_UFunction_UDMVMCCharMetricsComp_UnregenMetric_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDMVMCCharMetricsComp_UnregenMetric_Statics::PropPointers), sizeof(Z_Construct_UFunction_UDMVMCCharMetricsComp_UnregenMetric_Statics::DMVMCCharMetricsComp_eventUnregenMetric_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDMVMCCharMetricsComp_UnregenMetric_Statics::Function_MetaDataParams), Z_Construct_UFunction_UDMVMCCharMetricsComp_UnregenMetric_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UDMVMCCharMetricsComp_UnregenMetric_Statics::DMVMCCharMetricsComp_eventUnregenMetric_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UDMVMCCharMetricsComp_UnregenMetric()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDMVMCCharMetricsComp_UnregenMetric_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UDMVMCCharMetricsComp::execUnregenMetric)
{
	P_GET_STRUCT(FGameplayTag,Z_Param_metricName);
	P_GET_PROPERTY(FFloatProperty,Z_Param_regenDelta);
	P_GET_PROPERTY(FFloatProperty,Z_Param_regenQuantity);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->UnregenMetric(Z_Param_metricName,Z_Param_regenDelta,Z_Param_regenQuantity);
	P_NATIVE_END;
}
// End Class UDMVMCCharMetricsComp Function UnregenMetric

// Begin Class UDMVMCCharMetricsComp
void UDMVMCCharMetricsComp::StaticRegisterNativesUDMVMCCharMetricsComp()
{
	UClass* Class = UDMVMCCharMetricsComp::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "CurrentValueExists", &UDMVMCCharMetricsComp::execCurrentValueExists },
		{ "GetMetricCurrentValue", &UDMVMCCharMetricsComp::execGetMetricCurrentValue },
		{ "GetMetricMaxValue", &UDMVMCCharMetricsComp::execGetMetricMaxValue },
		{ "ModifyMetricCurrentValue", &UDMVMCCharMetricsComp::execModifyMetricCurrentValue },
		{ "RegenMetric", &UDMVMCCharMetricsComp::execRegenMetric },
		{ "SetMetricCurrentValue", &UDMVMCCharMetricsComp::execSetMetricCurrentValue },
		{ "StartRegenTimer", &UDMVMCCharMetricsComp::execStartRegenTimer },
		{ "StopRegenTimer", &UDMVMCCharMetricsComp::execStopRegenTimer },
		{ "UnregenMetric", &UDMVMCCharMetricsComp::execUnregenMetric },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UDMVMCCharMetricsComp);
UClass* Z_Construct_UClass_UDMVMCCharMetricsComp_NoRegister()
{
	return UDMVMCCharMetricsComp::StaticClass();
}
struct Z_Construct_UClass_UDMVMCCharMetricsComp_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "Components/DMVMCCharMetricsComp.h" },
		{ "ModuleRelativePath", "Public/Components/DMVMCCharMetricsComp.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnHealthChange_MetaData[] = {
		{ "ModuleRelativePath", "Public/Components/DMVMCCharMetricsComp.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnStaminaChange_MetaData[] = {
		{ "ModuleRelativePath", "Public/Components/DMVMCCharMetricsComp.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_metricsSet_MetaData[] = {
		{ "Category", "PI" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Set of metrics used by this character\n" },
#endif
		{ "ModuleRelativePath", "Public/Components/DMVMCCharMetricsComp.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Set of metrics used by this character" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RegenTimerHandle_MetaData[] = {
		{ "ModuleRelativePath", "Public/Components/DMVMCCharMetricsComp.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnHealthChange;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnStaminaChange;
	static const UECodeGen_Private::FStructPropertyParams NewProp_metricsSet_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_metricsSet;
	static const UECodeGen_Private::FStructPropertyParams NewProp_RegenTimerHandle;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UDMVMCCharMetricsComp_CurrentValueExists, "CurrentValueExists" }, // 176953802
		{ &Z_Construct_UFunction_UDMVMCCharMetricsComp_GetMetricCurrentValue, "GetMetricCurrentValue" }, // 3168141770
		{ &Z_Construct_UFunction_UDMVMCCharMetricsComp_GetMetricMaxValue, "GetMetricMaxValue" }, // 1902819095
		{ &Z_Construct_UFunction_UDMVMCCharMetricsComp_ModifyMetricCurrentValue, "ModifyMetricCurrentValue" }, // 511320493
		{ &Z_Construct_UFunction_UDMVMCCharMetricsComp_RegenMetric, "RegenMetric" }, // 4249295480
		{ &Z_Construct_UFunction_UDMVMCCharMetricsComp_SetMetricCurrentValue, "SetMetricCurrentValue" }, // 285624067
		{ &Z_Construct_UFunction_UDMVMCCharMetricsComp_StartRegenTimer, "StartRegenTimer" }, // 3875982808
		{ &Z_Construct_UFunction_UDMVMCCharMetricsComp_StopRegenTimer, "StopRegenTimer" }, // 3977227060
		{ &Z_Construct_UFunction_UDMVMCCharMetricsComp_UnregenMetric, "UnregenMetric" }, // 1926099681
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDMVMCCharMetricsComp>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UDMVMCCharMetricsComp_Statics::NewProp_OnHealthChange = { "OnHealthChange", nullptr, (EPropertyFlags)0x0010000000080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDMVMCCharMetricsComp, OnHealthChange), Z_Construct_UDelegateFunction_DMVMeleeCombat_OnHealthChangeDelegate__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnHealthChange_MetaData), NewProp_OnHealthChange_MetaData) }; // 1312684636
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UDMVMCCharMetricsComp_Statics::NewProp_OnStaminaChange = { "OnStaminaChange", nullptr, (EPropertyFlags)0x0010000000080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDMVMCCharMetricsComp, OnStaminaChange), Z_Construct_UDelegateFunction_DMVMeleeCombat_OnStaminaChangeDelegate__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnStaminaChange_MetaData), NewProp_OnStaminaChange_MetaData) }; // 3977037869
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UDMVMCCharMetricsComp_Statics::NewProp_metricsSet_Inner = { "metricsSet", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FMetricsSetElement, METADATA_PARAMS(0, nullptr) }; // 3669548373
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UDMVMCCharMetricsComp_Statics::NewProp_metricsSet = { "metricsSet", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDMVMCCharMetricsComp, metricsSet), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_metricsSet_MetaData), NewProp_metricsSet_MetaData) }; // 3669548373
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UDMVMCCharMetricsComp_Statics::NewProp_RegenTimerHandle = { "RegenTimerHandle", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDMVMCCharMetricsComp, RegenTimerHandle), Z_Construct_UScriptStruct_FTimerHandle, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RegenTimerHandle_MetaData), NewProp_RegenTimerHandle_MetaData) }; // 756291145
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UDMVMCCharMetricsComp_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDMVMCCharMetricsComp_Statics::NewProp_OnHealthChange,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDMVMCCharMetricsComp_Statics::NewProp_OnStaminaChange,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDMVMCCharMetricsComp_Statics::NewProp_metricsSet_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDMVMCCharMetricsComp_Statics::NewProp_metricsSet,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDMVMCCharMetricsComp_Statics::NewProp_RegenTimerHandle,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UDMVMCCharMetricsComp_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UDMVMCCharMetricsComp_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UActorComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_DMVMeleeCombat,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UDMVMCCharMetricsComp_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UDMVMCCharMetricsComp_Statics::ClassParams = {
	&UDMVMCCharMetricsComp::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UDMVMCCharMetricsComp_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UDMVMCCharMetricsComp_Statics::PropPointers),
	0,
	0x00B000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UDMVMCCharMetricsComp_Statics::Class_MetaDataParams), Z_Construct_UClass_UDMVMCCharMetricsComp_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UDMVMCCharMetricsComp()
{
	if (!Z_Registration_Info_UClass_UDMVMCCharMetricsComp.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDMVMCCharMetricsComp.OuterSingleton, Z_Construct_UClass_UDMVMCCharMetricsComp_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UDMVMCCharMetricsComp.OuterSingleton;
}
template<> DMVMELEECOMBAT_API UClass* StaticClass<UDMVMCCharMetricsComp>()
{
	return UDMVMCCharMetricsComp::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UDMVMCCharMetricsComp);
UDMVMCCharMetricsComp::~UDMVMCCharMetricsComp() {}
// End Class UDMVMCCharMetricsComp

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_Duarte_Documents_Unreal_Projects_Plugins_DMVMetricsSystem_ue_proj_Source_DMVMeleeCombat_Public_Components_DMVMCCharMetricsComp_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FMetricsSetElement::StaticStruct, Z_Construct_UScriptStruct_FMetricsSetElement_Statics::NewStructOps, TEXT("MetricsSetElement"), &Z_Registration_Info_UScriptStruct_MetricsSetElement, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMetricsSetElement), 3669548373U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UDMVMCCharMetricsComp, UDMVMCCharMetricsComp::StaticClass, TEXT("UDMVMCCharMetricsComp"), &Z_Registration_Info_UClass_UDMVMCCharMetricsComp, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDMVMCCharMetricsComp), 133006668U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Duarte_Documents_Unreal_Projects_Plugins_DMVMetricsSystem_ue_proj_Source_DMVMeleeCombat_Public_Components_DMVMCCharMetricsComp_h_2791352906(TEXT("/Script/DMVMeleeCombat"),
	Z_CompiledInDeferFile_FID_Users_Duarte_Documents_Unreal_Projects_Plugins_DMVMetricsSystem_ue_proj_Source_DMVMeleeCombat_Public_Components_DMVMCCharMetricsComp_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Duarte_Documents_Unreal_Projects_Plugins_DMVMetricsSystem_ue_proj_Source_DMVMeleeCombat_Public_Components_DMVMCCharMetricsComp_h_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_Users_Duarte_Documents_Unreal_Projects_Plugins_DMVMetricsSystem_ue_proj_Source_DMVMeleeCombat_Public_Components_DMVMCCharMetricsComp_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Duarte_Documents_Unreal_Projects_Plugins_DMVMetricsSystem_ue_proj_Source_DMVMeleeCombat_Public_Components_DMVMCCharMetricsComp_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
