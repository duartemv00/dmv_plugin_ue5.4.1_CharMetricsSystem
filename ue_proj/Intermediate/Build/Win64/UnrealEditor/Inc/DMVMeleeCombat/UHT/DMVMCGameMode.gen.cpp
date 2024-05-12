// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DMVMeleeCombat/Public/DMVMCGameMode.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDMVMCGameMode() {}

// Begin Cross Module References
DMVMELEECOMBAT_API UClass* Z_Construct_UClass_ADMVMCGameMode();
DMVMELEECOMBAT_API UClass* Z_Construct_UClass_ADMVMCGameMode_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
UPackage* Z_Construct_UPackage__Script_DMVMeleeCombat();
// End Cross Module References

// Begin Class ADMVMCGameMode
void ADMVMCGameMode::StaticRegisterNativesADMVMCGameMode()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ADMVMCGameMode);
UClass* Z_Construct_UClass_ADMVMCGameMode_NoRegister()
{
	return ADMVMCGameMode::StaticClass();
}
struct Z_Construct_UClass_ADMVMCGameMode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "DMVMCGameMode.h" },
		{ "ModuleRelativePath", "Public/DMVMCGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ADMVMCGameMode>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_ADMVMCGameMode_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AGameModeBase,
	(UObject* (*)())Z_Construct_UPackage__Script_DMVMeleeCombat,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ADMVMCGameMode_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ADMVMCGameMode_Statics::ClassParams = {
	&ADMVMCGameMode::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x008802ACu,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ADMVMCGameMode_Statics::Class_MetaDataParams), Z_Construct_UClass_ADMVMCGameMode_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ADMVMCGameMode()
{
	if (!Z_Registration_Info_UClass_ADMVMCGameMode.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ADMVMCGameMode.OuterSingleton, Z_Construct_UClass_ADMVMCGameMode_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ADMVMCGameMode.OuterSingleton;
}
template<> DMVMELEECOMBAT_API UClass* StaticClass<ADMVMCGameMode>()
{
	return ADMVMCGameMode::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ADMVMCGameMode);
ADMVMCGameMode::~ADMVMCGameMode() {}
// End Class ADMVMCGameMode

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_Duarte_Documents_Unreal_Projects_Plugins_DMVMetricsSystem_ue_proj_Source_DMVMeleeCombat_Public_DMVMCGameMode_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ADMVMCGameMode, ADMVMCGameMode::StaticClass, TEXT("ADMVMCGameMode"), &Z_Registration_Info_UClass_ADMVMCGameMode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ADMVMCGameMode), 3169523536U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Duarte_Documents_Unreal_Projects_Plugins_DMVMetricsSystem_ue_proj_Source_DMVMeleeCombat_Public_DMVMCGameMode_h_61081504(TEXT("/Script/DMVMeleeCombat"),
	Z_CompiledInDeferFile_FID_Users_Duarte_Documents_Unreal_Projects_Plugins_DMVMetricsSystem_ue_proj_Source_DMVMeleeCombat_Public_DMVMCGameMode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Duarte_Documents_Unreal_Projects_Plugins_DMVMetricsSystem_ue_proj_Source_DMVMeleeCombat_Public_DMVMCGameMode_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
