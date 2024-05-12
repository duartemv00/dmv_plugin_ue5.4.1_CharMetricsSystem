// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DMVMeleeCombat/Public/Characters/DMVMCEnemy.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDMVMCEnemy() {}

// Begin Cross Module References
DMVMELEECOMBAT_API UClass* Z_Construct_UClass_ADMVMCCharacter();
DMVMELEECOMBAT_API UClass* Z_Construct_UClass_ADMVMCEnemy();
DMVMELEECOMBAT_API UClass* Z_Construct_UClass_ADMVMCEnemy_NoRegister();
UPackage* Z_Construct_UPackage__Script_DMVMeleeCombat();
// End Cross Module References

// Begin Class ADMVMCEnemy
void ADMVMCEnemy::StaticRegisterNativesADMVMCEnemy()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ADMVMCEnemy);
UClass* Z_Construct_UClass_ADMVMCEnemy_NoRegister()
{
	return ADMVMCEnemy::StaticClass();
}
struct Z_Construct_UClass_ADMVMCEnemy_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "Characters/DMVMCEnemy.h" },
		{ "ModuleRelativePath", "Public/Characters/DMVMCEnemy.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ADMVMCEnemy>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_ADMVMCEnemy_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_ADMVMCCharacter,
	(UObject* (*)())Z_Construct_UPackage__Script_DMVMeleeCombat,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ADMVMCEnemy_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ADMVMCEnemy_Statics::ClassParams = {
	&ADMVMCEnemy::StaticClass,
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
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ADMVMCEnemy_Statics::Class_MetaDataParams), Z_Construct_UClass_ADMVMCEnemy_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ADMVMCEnemy()
{
	if (!Z_Registration_Info_UClass_ADMVMCEnemy.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ADMVMCEnemy.OuterSingleton, Z_Construct_UClass_ADMVMCEnemy_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ADMVMCEnemy.OuterSingleton;
}
template<> DMVMELEECOMBAT_API UClass* StaticClass<ADMVMCEnemy>()
{
	return ADMVMCEnemy::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ADMVMCEnemy);
ADMVMCEnemy::~ADMVMCEnemy() {}
// End Class ADMVMCEnemy

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_Duarte_Documents_Unreal_Projects_Plugins_DMVMetricsSystem_ue_proj_Source_DMVMeleeCombat_Public_Characters_DMVMCEnemy_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ADMVMCEnemy, ADMVMCEnemy::StaticClass, TEXT("ADMVMCEnemy"), &Z_Registration_Info_UClass_ADMVMCEnemy, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ADMVMCEnemy), 1198497975U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Duarte_Documents_Unreal_Projects_Plugins_DMVMetricsSystem_ue_proj_Source_DMVMeleeCombat_Public_Characters_DMVMCEnemy_h_1590312613(TEXT("/Script/DMVMeleeCombat"),
	Z_CompiledInDeferFile_FID_Users_Duarte_Documents_Unreal_Projects_Plugins_DMVMetricsSystem_ue_proj_Source_DMVMeleeCombat_Public_Characters_DMVMCEnemy_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Duarte_Documents_Unreal_Projects_Plugins_DMVMetricsSystem_ue_proj_Source_DMVMeleeCombat_Public_Characters_DMVMCEnemy_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
