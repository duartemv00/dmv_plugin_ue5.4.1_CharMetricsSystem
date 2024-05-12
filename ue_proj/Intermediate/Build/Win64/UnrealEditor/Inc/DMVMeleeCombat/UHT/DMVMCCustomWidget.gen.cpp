// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DMVMeleeCombat/Public/UI/DMVMCCustomWidget.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDMVMCCustomWidget() {}

// Begin Cross Module References
DMVMELEECOMBAT_API UClass* Z_Construct_UClass_UDMVMCCustomWidget();
DMVMELEECOMBAT_API UClass* Z_Construct_UClass_UDMVMCCustomWidget_NoRegister();
UMG_API UClass* Z_Construct_UClass_UTextBlock_NoRegister();
UMG_API UClass* Z_Construct_UClass_UUserWidget();
UPackage* Z_Construct_UPackage__Script_DMVMeleeCombat();
// End Cross Module References

// Begin Class UDMVMCCustomWidget
void UDMVMCCustomWidget::StaticRegisterNativesUDMVMCCustomWidget()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UDMVMCCustomWidget);
UClass* Z_Construct_UClass_UDMVMCCustomWidget_NoRegister()
{
	return UDMVMCCustomWidget::StaticClass();
}
struct Z_Construct_UClass_UDMVMCCustomWidget_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "UI/DMVMCCustomWidget.h" },
		{ "ModuleRelativePath", "Public/UI/DMVMCCustomWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CharacterName_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "DMVMCCustomWidget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UI/DMVMCCustomWidget.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CharacterName;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDMVMCCustomWidget>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UDMVMCCustomWidget_Statics::NewProp_CharacterName = { "CharacterName", nullptr, (EPropertyFlags)0x002008000008001c, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDMVMCCustomWidget, CharacterName), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CharacterName_MetaData), NewProp_CharacterName_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UDMVMCCustomWidget_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDMVMCCustomWidget_Statics::NewProp_CharacterName,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UDMVMCCustomWidget_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UDMVMCCustomWidget_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UUserWidget,
	(UObject* (*)())Z_Construct_UPackage__Script_DMVMeleeCombat,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UDMVMCCustomWidget_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UDMVMCCustomWidget_Statics::ClassParams = {
	&UDMVMCCustomWidget::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UDMVMCCustomWidget_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UDMVMCCustomWidget_Statics::PropPointers),
	0,
	0x00B010A1u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UDMVMCCustomWidget_Statics::Class_MetaDataParams), Z_Construct_UClass_UDMVMCCustomWidget_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UDMVMCCustomWidget()
{
	if (!Z_Registration_Info_UClass_UDMVMCCustomWidget.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDMVMCCustomWidget.OuterSingleton, Z_Construct_UClass_UDMVMCCustomWidget_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UDMVMCCustomWidget.OuterSingleton;
}
template<> DMVMELEECOMBAT_API UClass* StaticClass<UDMVMCCustomWidget>()
{
	return UDMVMCCustomWidget::StaticClass();
}
UDMVMCCustomWidget::UDMVMCCustomWidget(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UDMVMCCustomWidget);
UDMVMCCustomWidget::~UDMVMCCustomWidget() {}
// End Class UDMVMCCustomWidget

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_Duarte_Documents_Unreal_Projects_Plugins_DMVMetricsSystem_ue_proj_Source_DMVMeleeCombat_Public_UI_DMVMCCustomWidget_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UDMVMCCustomWidget, UDMVMCCustomWidget::StaticClass, TEXT("UDMVMCCustomWidget"), &Z_Registration_Info_UClass_UDMVMCCustomWidget, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDMVMCCustomWidget), 1193622655U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Duarte_Documents_Unreal_Projects_Plugins_DMVMetricsSystem_ue_proj_Source_DMVMeleeCombat_Public_UI_DMVMCCustomWidget_h_4247140852(TEXT("/Script/DMVMeleeCombat"),
	Z_CompiledInDeferFile_FID_Users_Duarte_Documents_Unreal_Projects_Plugins_DMVMetricsSystem_ue_proj_Source_DMVMeleeCombat_Public_UI_DMVMCCustomWidget_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Duarte_Documents_Unreal_Projects_Plugins_DMVMetricsSystem_ue_proj_Source_DMVMeleeCombat_Public_UI_DMVMCCustomWidget_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
