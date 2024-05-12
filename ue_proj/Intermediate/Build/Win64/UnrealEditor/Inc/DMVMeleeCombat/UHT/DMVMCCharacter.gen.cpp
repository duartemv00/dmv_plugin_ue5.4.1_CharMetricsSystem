// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DMVMeleeCombat/Public/Characters/DMVMCCharacter.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDMVMCCharacter() {}

// Begin Cross Module References
DMVMELEECOMBAT_API UClass* Z_Construct_UClass_ADMVMCCharacter();
DMVMELEECOMBAT_API UClass* Z_Construct_UClass_ADMVMCCharacter_NoRegister();
DMVMELEECOMBAT_API UClass* Z_Construct_UClass_UDMVMCCharMetricsComp_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_ACharacter();
UPackage* Z_Construct_UPackage__Script_DMVMeleeCombat();
// End Cross Module References

// Begin Class ADMVMCCharacter
void ADMVMCCharacter::StaticRegisterNativesADMVMCCharacter()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ADMVMCCharacter);
UClass* Z_Construct_UClass_ADMVMCCharacter_NoRegister()
{
	return ADMVMCCharacter::StaticClass();
}
struct Z_Construct_UClass_ADMVMCCharacter_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "Characters/DMVMCCharacter.h" },
		{ "ModuleRelativePath", "Public/Characters/DMVMCCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CharMetricsComp_MetaData[] = {
		{ "Category", "DMV | Metrics" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// ***** COMPONENTS *****\n" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Characters/DMVMCCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "***** COMPONENTS *****" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bActionLock_MetaData[] = {
		{ "Category", "DMV | Actions" },
		{ "ModuleRelativePath", "Public/Characters/DMVMCCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ComboPosition_MetaData[] = {
		{ "Category", "DMV | Actions" },
		{ "ModuleRelativePath", "Public/Characters/DMVMCCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Timer_MetaData[] = {
		{ "Category", "DMV" },
		{ "ModuleRelativePath", "Public/Characters/DMVMCCharacter.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CharMetricsComp;
	static void NewProp_bActionLock_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bActionLock;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ComboPosition;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Timer;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ADMVMCCharacter>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ADMVMCCharacter_Statics::NewProp_CharMetricsComp = { "CharMetricsComp", nullptr, (EPropertyFlags)0x001000000008000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ADMVMCCharacter, CharMetricsComp), Z_Construct_UClass_UDMVMCCharMetricsComp_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CharMetricsComp_MetaData), NewProp_CharMetricsComp_MetaData) };
void Z_Construct_UClass_ADMVMCCharacter_Statics::NewProp_bActionLock_SetBit(void* Obj)
{
	((ADMVMCCharacter*)Obj)->bActionLock = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ADMVMCCharacter_Statics::NewProp_bActionLock = { "bActionLock", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ADMVMCCharacter), &Z_Construct_UClass_ADMVMCCharacter_Statics::NewProp_bActionLock_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bActionLock_MetaData), NewProp_bActionLock_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_ADMVMCCharacter_Statics::NewProp_ComboPosition = { "ComboPosition", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ADMVMCCharacter, ComboPosition), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ComboPosition_MetaData), NewProp_ComboPosition_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ADMVMCCharacter_Statics::NewProp_Timer = { "Timer", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ADMVMCCharacter, Timer), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Timer_MetaData), NewProp_Timer_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ADMVMCCharacter_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADMVMCCharacter_Statics::NewProp_CharMetricsComp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADMVMCCharacter_Statics::NewProp_bActionLock,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADMVMCCharacter_Statics::NewProp_ComboPosition,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADMVMCCharacter_Statics::NewProp_Timer,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ADMVMCCharacter_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ADMVMCCharacter_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_ACharacter,
	(UObject* (*)())Z_Construct_UPackage__Script_DMVMeleeCombat,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ADMVMCCharacter_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ADMVMCCharacter_Statics::ClassParams = {
	&ADMVMCCharacter::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_ADMVMCCharacter_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_ADMVMCCharacter_Statics::PropPointers),
	0,
	0x008000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ADMVMCCharacter_Statics::Class_MetaDataParams), Z_Construct_UClass_ADMVMCCharacter_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ADMVMCCharacter()
{
	if (!Z_Registration_Info_UClass_ADMVMCCharacter.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ADMVMCCharacter.OuterSingleton, Z_Construct_UClass_ADMVMCCharacter_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ADMVMCCharacter.OuterSingleton;
}
template<> DMVMELEECOMBAT_API UClass* StaticClass<ADMVMCCharacter>()
{
	return ADMVMCCharacter::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ADMVMCCharacter);
ADMVMCCharacter::~ADMVMCCharacter() {}
// End Class ADMVMCCharacter

// Begin Registration
struct Z_CompiledInDeferFile_FID_DMVMeleeCombat_Source_DMVMeleeCombat_Public_Characters_DMVMCCharacter_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ADMVMCCharacter, ADMVMCCharacter::StaticClass, TEXT("ADMVMCCharacter"), &Z_Registration_Info_UClass_ADMVMCCharacter, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ADMVMCCharacter), 1798363844U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_DMVMeleeCombat_Source_DMVMeleeCombat_Public_Characters_DMVMCCharacter_h_1366015300(TEXT("/Script/DMVMeleeCombat"),
	Z_CompiledInDeferFile_FID_DMVMeleeCombat_Source_DMVMeleeCombat_Public_Characters_DMVMCCharacter_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_DMVMeleeCombat_Source_DMVMeleeCombat_Public_Characters_DMVMCCharacter_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
