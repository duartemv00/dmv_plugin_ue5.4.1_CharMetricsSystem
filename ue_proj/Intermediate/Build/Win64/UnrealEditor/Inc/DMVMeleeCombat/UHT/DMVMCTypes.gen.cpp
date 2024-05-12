// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DMVMeleeCombat/Public/DMVMCTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDMVMCTypes() {}

// Begin Cross Module References
DMVMELEECOMBAT_API UEnum* Z_Construct_UEnum_DMVMeleeCombat_ECharMetricsEnum();
UPackage* Z_Construct_UPackage__Script_DMVMeleeCombat();
// End Cross Module References

// Begin Enum ECharMetricsEnum
static FEnumRegistrationInfo Z_Registration_Info_UEnum_ECharMetricsEnum;
static UEnum* ECharMetricsEnum_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_ECharMetricsEnum.OuterSingleton)
	{
		Z_Registration_Info_UEnum_ECharMetricsEnum.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_DMVMeleeCombat_ECharMetricsEnum, (UObject*)Z_Construct_UPackage__Script_DMVMeleeCombat(), TEXT("ECharMetricsEnum"));
	}
	return Z_Registration_Info_UEnum_ECharMetricsEnum.OuterSingleton;
}
template<> DMVMELEECOMBAT_API UEnum* StaticEnum<ECharMetricsEnum>()
{
	return ECharMetricsEnum_StaticEnum();
}
struct Z_Construct_UEnum_DMVMeleeCombat_ECharMetricsEnum_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "ACTION_CALLER.Name", "ECharMetricsEnum::ACTION_CALLER" },
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/DMVMCTypes.h" },
		{ "REGEN_STAT.Name", "ECharMetricsEnum::REGEN_STAT" },
		{ "STAT.Name", "ECharMetricsEnum::STAT" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "ECharMetricsEnum::STAT", (int64)ECharMetricsEnum::STAT },
		{ "ECharMetricsEnum::REGEN_STAT", (int64)ECharMetricsEnum::REGEN_STAT },
		{ "ECharMetricsEnum::ACTION_CALLER", (int64)ECharMetricsEnum::ACTION_CALLER },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_DMVMeleeCombat_ECharMetricsEnum_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_DMVMeleeCombat,
	nullptr,
	"ECharMetricsEnum",
	"ECharMetricsEnum",
	Z_Construct_UEnum_DMVMeleeCombat_ECharMetricsEnum_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_DMVMeleeCombat_ECharMetricsEnum_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_DMVMeleeCombat_ECharMetricsEnum_Statics::Enum_MetaDataParams), Z_Construct_UEnum_DMVMeleeCombat_ECharMetricsEnum_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_DMVMeleeCombat_ECharMetricsEnum()
{
	if (!Z_Registration_Info_UEnum_ECharMetricsEnum.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ECharMetricsEnum.InnerSingleton, Z_Construct_UEnum_DMVMeleeCombat_ECharMetricsEnum_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_ECharMetricsEnum.InnerSingleton;
}
// End Enum ECharMetricsEnum

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_Duarte_Documents_Unreal_Projects_Plugins_DMVMetricsSystem_ue_proj_Source_DMVMeleeCombat_Public_DMVMCTypes_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ ECharMetricsEnum_StaticEnum, TEXT("ECharMetricsEnum"), &Z_Registration_Info_UEnum_ECharMetricsEnum, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1042023461U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Duarte_Documents_Unreal_Projects_Plugins_DMVMetricsSystem_ue_proj_Source_DMVMeleeCombat_Public_DMVMCTypes_h_4110253305(TEXT("/Script/DMVMeleeCombat"),
	nullptr, 0,
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Users_Duarte_Documents_Unreal_Projects_Plugins_DMVMetricsSystem_ue_proj_Source_DMVMeleeCombat_Public_DMVMCTypes_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Duarte_Documents_Unreal_Projects_Plugins_DMVMetricsSystem_ue_proj_Source_DMVMeleeCombat_Public_DMVMCTypes_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
