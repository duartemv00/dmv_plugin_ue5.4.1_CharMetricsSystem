// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DMVMeleeCombat/Public/DMVMCObjectBase.h"
#include "Runtime/GameplayTags/Classes/GameplayTagContainer.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDMVMCObjectBase() {}

// Begin Cross Module References
DMVMELEECOMBAT_API UScriptStruct* Z_Construct_UScriptStruct_FStateTreeCondition_IsMetricsValue();
DMVMELEECOMBAT_API UScriptStruct* Z_Construct_UScriptStruct_FStateTreeCondition_IsMetricsValueInstanceData();
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTag();
STATETREEMODULE_API UScriptStruct* Z_Construct_UScriptStruct_FStateTreeConditionCommonBase();
UPackage* Z_Construct_UPackage__Script_DMVMeleeCombat();
// End Cross Module References

// Begin ScriptStruct FStateTreeCondition_IsMetricsValueInstanceData
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_StateTreeCondition_IsMetricsValueInstanceData;
class UScriptStruct* FStateTreeCondition_IsMetricsValueInstanceData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_StateTreeCondition_IsMetricsValueInstanceData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_StateTreeCondition_IsMetricsValueInstanceData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FStateTreeCondition_IsMetricsValueInstanceData, (UObject*)Z_Construct_UPackage__Script_DMVMeleeCombat(), TEXT("StateTreeCondition_IsMetricsValueInstanceData"));
	}
	return Z_Registration_Info_UScriptStruct_StateTreeCondition_IsMetricsValueInstanceData.OuterSingleton;
}
template<> DMVMELEECOMBAT_API UScriptStruct* StaticStruct<FStateTreeCondition_IsMetricsValueInstanceData>()
{
	return FStateTreeCondition_IsMetricsValueInstanceData::StaticStruct();
}
struct Z_Construct_UScriptStruct_FStateTreeCondition_IsMetricsValueInstanceData_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// ***** STATE TREE CONDITIONS *****\n// Data used for the IsAttributeStateInstanceData condition of the State Tree\n" },
#endif
		{ "ModuleRelativePath", "Public/DMVMCObjectBase.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "***** STATE TREE CONDITIONS *****\nData used for the IsAttributeStateInstanceData condition of the State Tree" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Actor_MetaData[] = {
		{ "Category", "Input" },
		{ "ModuleRelativePath", "Public/DMVMCObjectBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MetricName_MetaData[] = {
		{ "Category", "Parameter" },
		{ "ModuleRelativePath", "Public/DMVMCObjectBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIsMinValue_MetaData[] = {
		{ "Category", "Parameter" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Public/DMVMCObjectBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MinValue_MetaData[] = {
		{ "Category", "Parameter" },
		{ "EditCondition", "bIsMinValue" },
		{ "ModuleRelativePath", "Public/DMVMCObjectBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIsMaxValue_MetaData[] = {
		{ "Category", "Parameter" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Public/DMVMCObjectBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxValue_MetaData[] = {
		{ "Category", "Parameter" },
		{ "EditCondition", "bIsMaxValue" },
		{ "ModuleRelativePath", "Public/DMVMCObjectBase.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Actor;
	static const UECodeGen_Private::FStructPropertyParams NewProp_MetricName;
	static void NewProp_bIsMinValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsMinValue;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MinValue;
	static void NewProp_bIsMaxValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsMaxValue;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FStateTreeCondition_IsMetricsValueInstanceData>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FStateTreeCondition_IsMetricsValueInstanceData_Statics::NewProp_Actor = { "Actor", nullptr, (EPropertyFlags)0x0114000000000001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FStateTreeCondition_IsMetricsValueInstanceData, Actor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Actor_MetaData), NewProp_Actor_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FStateTreeCondition_IsMetricsValueInstanceData_Statics::NewProp_MetricName = { "MetricName", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FStateTreeCondition_IsMetricsValueInstanceData, MetricName), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MetricName_MetaData), NewProp_MetricName_MetaData) }; // 1298103297
void Z_Construct_UScriptStruct_FStateTreeCondition_IsMetricsValueInstanceData_Statics::NewProp_bIsMinValue_SetBit(void* Obj)
{
	((FStateTreeCondition_IsMetricsValueInstanceData*)Obj)->bIsMinValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FStateTreeCondition_IsMetricsValueInstanceData_Statics::NewProp_bIsMinValue = { "bIsMinValue", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FStateTreeCondition_IsMetricsValueInstanceData), &Z_Construct_UScriptStruct_FStateTreeCondition_IsMetricsValueInstanceData_Statics::NewProp_bIsMinValue_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIsMinValue_MetaData), NewProp_bIsMinValue_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FStateTreeCondition_IsMetricsValueInstanceData_Statics::NewProp_MinValue = { "MinValue", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FStateTreeCondition_IsMetricsValueInstanceData, MinValue), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MinValue_MetaData), NewProp_MinValue_MetaData) };
void Z_Construct_UScriptStruct_FStateTreeCondition_IsMetricsValueInstanceData_Statics::NewProp_bIsMaxValue_SetBit(void* Obj)
{
	((FStateTreeCondition_IsMetricsValueInstanceData*)Obj)->bIsMaxValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FStateTreeCondition_IsMetricsValueInstanceData_Statics::NewProp_bIsMaxValue = { "bIsMaxValue", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FStateTreeCondition_IsMetricsValueInstanceData), &Z_Construct_UScriptStruct_FStateTreeCondition_IsMetricsValueInstanceData_Statics::NewProp_bIsMaxValue_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIsMaxValue_MetaData), NewProp_bIsMaxValue_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FStateTreeCondition_IsMetricsValueInstanceData_Statics::NewProp_MaxValue = { "MaxValue", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FStateTreeCondition_IsMetricsValueInstanceData, MaxValue), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxValue_MetaData), NewProp_MaxValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FStateTreeCondition_IsMetricsValueInstanceData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStateTreeCondition_IsMetricsValueInstanceData_Statics::NewProp_Actor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStateTreeCondition_IsMetricsValueInstanceData_Statics::NewProp_MetricName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStateTreeCondition_IsMetricsValueInstanceData_Statics::NewProp_bIsMinValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStateTreeCondition_IsMetricsValueInstanceData_Statics::NewProp_MinValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStateTreeCondition_IsMetricsValueInstanceData_Statics::NewProp_bIsMaxValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStateTreeCondition_IsMetricsValueInstanceData_Statics::NewProp_MaxValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStateTreeCondition_IsMetricsValueInstanceData_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FStateTreeCondition_IsMetricsValueInstanceData_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_DMVMeleeCombat,
	nullptr,
	&NewStructOps,
	"StateTreeCondition_IsMetricsValueInstanceData",
	Z_Construct_UScriptStruct_FStateTreeCondition_IsMetricsValueInstanceData_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStateTreeCondition_IsMetricsValueInstanceData_Statics::PropPointers),
	sizeof(FStateTreeCondition_IsMetricsValueInstanceData),
	alignof(FStateTreeCondition_IsMetricsValueInstanceData),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStateTreeCondition_IsMetricsValueInstanceData_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FStateTreeCondition_IsMetricsValueInstanceData_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FStateTreeCondition_IsMetricsValueInstanceData()
{
	if (!Z_Registration_Info_UScriptStruct_StateTreeCondition_IsMetricsValueInstanceData.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_StateTreeCondition_IsMetricsValueInstanceData.InnerSingleton, Z_Construct_UScriptStruct_FStateTreeCondition_IsMetricsValueInstanceData_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_StateTreeCondition_IsMetricsValueInstanceData.InnerSingleton;
}
// End ScriptStruct FStateTreeCondition_IsMetricsValueInstanceData

// Begin ScriptStruct FStateTreeCondition_IsMetricsValue
static_assert(std::is_polymorphic<FStateTreeCondition_IsMetricsValue>() == std::is_polymorphic<FStateTreeConditionCommonBase>(), "USTRUCT FStateTreeCondition_IsMetricsValue cannot be polymorphic unless super FStateTreeConditionCommonBase is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_StateTreeCondition_IsMetricsValue;
class UScriptStruct* FStateTreeCondition_IsMetricsValue::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_StateTreeCondition_IsMetricsValue.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_StateTreeCondition_IsMetricsValue.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FStateTreeCondition_IsMetricsValue, (UObject*)Z_Construct_UPackage__Script_DMVMeleeCombat(), TEXT("StateTreeCondition_IsMetricsValue"));
	}
	return Z_Registration_Info_UScriptStruct_StateTreeCondition_IsMetricsValue.OuterSingleton;
}
template<> DMVMELEECOMBAT_API UScriptStruct* StaticStruct<FStateTreeCondition_IsMetricsValue>()
{
	return FStateTreeCondition_IsMetricsValue::StaticStruct();
}
struct Z_Construct_UScriptStruct_FStateTreeCondition_IsMetricsValue_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "//STATE TREE CONDITION that checks if the value of a metric is within a certain range\n" },
#endif
		{ "DisplayName", "PI_IsMetricsValue" },
		{ "ModuleRelativePath", "Public/DMVMCObjectBase.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "STATE TREE CONDITION that checks if the value of a metric is within a certain range" },
#endif
	};
#endif // WITH_METADATA
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FStateTreeCondition_IsMetricsValue>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FStateTreeCondition_IsMetricsValue_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_DMVMeleeCombat,
	Z_Construct_UScriptStruct_FStateTreeConditionCommonBase,
	&NewStructOps,
	"StateTreeCondition_IsMetricsValue",
	nullptr,
	0,
	sizeof(FStateTreeCondition_IsMetricsValue),
	alignof(FStateTreeCondition_IsMetricsValue),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStateTreeCondition_IsMetricsValue_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FStateTreeCondition_IsMetricsValue_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FStateTreeCondition_IsMetricsValue()
{
	if (!Z_Registration_Info_UScriptStruct_StateTreeCondition_IsMetricsValue.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_StateTreeCondition_IsMetricsValue.InnerSingleton, Z_Construct_UScriptStruct_FStateTreeCondition_IsMetricsValue_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_StateTreeCondition_IsMetricsValue.InnerSingleton;
}
// End ScriptStruct FStateTreeCondition_IsMetricsValue

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_Duarte_Documents_Unreal_Projects_Plugins_DMVMetricsSystem_ue_proj_Source_DMVMeleeCombat_Public_DMVMCObjectBase_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FStateTreeCondition_IsMetricsValueInstanceData::StaticStruct, Z_Construct_UScriptStruct_FStateTreeCondition_IsMetricsValueInstanceData_Statics::NewStructOps, TEXT("StateTreeCondition_IsMetricsValueInstanceData"), &Z_Registration_Info_UScriptStruct_StateTreeCondition_IsMetricsValueInstanceData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FStateTreeCondition_IsMetricsValueInstanceData), 1137855118U) },
		{ FStateTreeCondition_IsMetricsValue::StaticStruct, Z_Construct_UScriptStruct_FStateTreeCondition_IsMetricsValue_Statics::NewStructOps, TEXT("StateTreeCondition_IsMetricsValue"), &Z_Registration_Info_UScriptStruct_StateTreeCondition_IsMetricsValue, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FStateTreeCondition_IsMetricsValue), 1525405027U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Duarte_Documents_Unreal_Projects_Plugins_DMVMetricsSystem_ue_proj_Source_DMVMeleeCombat_Public_DMVMCObjectBase_h_3146445712(TEXT("/Script/DMVMeleeCombat"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Users_Duarte_Documents_Unreal_Projects_Plugins_DMVMetricsSystem_ue_proj_Source_DMVMeleeCombat_Public_DMVMCObjectBase_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Duarte_Documents_Unreal_Projects_Plugins_DMVMetricsSystem_ue_proj_Source_DMVMeleeCombat_Public_DMVMCObjectBase_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
