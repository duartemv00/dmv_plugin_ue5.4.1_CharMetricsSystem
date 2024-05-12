// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DMVMeleeCombat/Public/Characters/DMVMCPlayer.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDMVMCPlayer() {}

// Begin Cross Module References
DMVMELEECOMBAT_API UClass* Z_Construct_UClass_ADMVMCCharacter();
DMVMELEECOMBAT_API UClass* Z_Construct_UClass_ADMVMCPlayer();
DMVMELEECOMBAT_API UClass* Z_Construct_UClass_ADMVMCPlayer_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UCameraComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_USpringArmComponent_NoRegister();
ENHANCEDINPUT_API UClass* Z_Construct_UClass_UInputAction_NoRegister();
ENHANCEDINPUT_API UClass* Z_Construct_UClass_UInputMappingContext_NoRegister();
UPackage* Z_Construct_UPackage__Script_DMVMeleeCombat();
// End Cross Module References

// Begin Class ADMVMCPlayer Function SetCamBoomTargetArmLength
struct Z_Construct_UFunction_ADMVMCPlayer_SetCamBoomTargetArmLength_Statics
{
	struct DMVMCPlayer_eventSetCamBoomTargetArmLength_Parms
	{
		float NewLength;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "DMV|Camera" },
		{ "ModuleRelativePath", "Public/Characters/DMVMCPlayer.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_NewLength;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ADMVMCPlayer_SetCamBoomTargetArmLength_Statics::NewProp_NewLength = { "NewLength", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DMVMCPlayer_eventSetCamBoomTargetArmLength_Parms, NewLength), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ADMVMCPlayer_SetCamBoomTargetArmLength_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADMVMCPlayer_SetCamBoomTargetArmLength_Statics::NewProp_NewLength,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ADMVMCPlayer_SetCamBoomTargetArmLength_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ADMVMCPlayer_SetCamBoomTargetArmLength_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ADMVMCPlayer, nullptr, "SetCamBoomTargetArmLength", nullptr, nullptr, Z_Construct_UFunction_ADMVMCPlayer_SetCamBoomTargetArmLength_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ADMVMCPlayer_SetCamBoomTargetArmLength_Statics::PropPointers), sizeof(Z_Construct_UFunction_ADMVMCPlayer_SetCamBoomTargetArmLength_Statics::DMVMCPlayer_eventSetCamBoomTargetArmLength_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x44020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ADMVMCPlayer_SetCamBoomTargetArmLength_Statics::Function_MetaDataParams), Z_Construct_UFunction_ADMVMCPlayer_SetCamBoomTargetArmLength_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ADMVMCPlayer_SetCamBoomTargetArmLength_Statics::DMVMCPlayer_eventSetCamBoomTargetArmLength_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ADMVMCPlayer_SetCamBoomTargetArmLength()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ADMVMCPlayer_SetCamBoomTargetArmLength_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ADMVMCPlayer::execSetCamBoomTargetArmLength)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_NewLength);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetCamBoomTargetArmLength(Z_Param_NewLength);
	P_NATIVE_END;
}
// End Class ADMVMCPlayer Function SetCamBoomTargetArmLength

// Begin Class ADMVMCPlayer
void ADMVMCPlayer::StaticRegisterNativesADMVMCPlayer()
{
	UClass* Class = ADMVMCPlayer::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "SetCamBoomTargetArmLength", &ADMVMCPlayer::execSetCamBoomTargetArmLength },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ADMVMCPlayer);
UClass* Z_Construct_UClass_ADMVMCPlayer_NoRegister()
{
	return ADMVMCPlayer::StaticClass();
}
struct Z_Construct_UClass_ADMVMCPlayer_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "Characters/DMVMCPlayer.h" },
		{ "ModuleRelativePath", "Public/Characters/DMVMCPlayer.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CameraBoom_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Camera" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Camera boom positioning the camera behind the character */" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Characters/DMVMCPlayer.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Camera boom positioning the camera behind the character" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FollowCamera_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Camera" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Follow camera */" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Characters/DMVMCPlayer.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Follow camera" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DefaultMappingContext_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Input" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** MappingContext */" },
#endif
		{ "ModuleRelativePath", "Public/Characters/DMVMCPlayer.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "MappingContext" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_JumpAction_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Input" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Jump Input Action */" },
#endif
		{ "ModuleRelativePath", "Public/Characters/DMVMCPlayer.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Jump Input Action" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MoveAction_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Input" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Move Input Action */" },
#endif
		{ "ModuleRelativePath", "Public/Characters/DMVMCPlayer.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Move Input Action" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LookAction_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Input" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Look Input Action */" },
#endif
		{ "ModuleRelativePath", "Public/Characters/DMVMCPlayer.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Look Input Action" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CameraBoom;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_FollowCamera;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_DefaultMappingContext;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_JumpAction;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MoveAction;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_LookAction;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_ADMVMCPlayer_SetCamBoomTargetArmLength, "SetCamBoomTargetArmLength" }, // 2566940997
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ADMVMCPlayer>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ADMVMCPlayer_Statics::NewProp_CameraBoom = { "CameraBoom", nullptr, (EPropertyFlags)0x00400000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ADMVMCPlayer, CameraBoom), Z_Construct_UClass_USpringArmComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CameraBoom_MetaData), NewProp_CameraBoom_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ADMVMCPlayer_Statics::NewProp_FollowCamera = { "FollowCamera", nullptr, (EPropertyFlags)0x00400000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ADMVMCPlayer, FollowCamera), Z_Construct_UClass_UCameraComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FollowCamera_MetaData), NewProp_FollowCamera_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ADMVMCPlayer_Statics::NewProp_DefaultMappingContext = { "DefaultMappingContext", nullptr, (EPropertyFlags)0x0040000000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ADMVMCPlayer, DefaultMappingContext), Z_Construct_UClass_UInputMappingContext_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DefaultMappingContext_MetaData), NewProp_DefaultMappingContext_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ADMVMCPlayer_Statics::NewProp_JumpAction = { "JumpAction", nullptr, (EPropertyFlags)0x0040000000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ADMVMCPlayer, JumpAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_JumpAction_MetaData), NewProp_JumpAction_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ADMVMCPlayer_Statics::NewProp_MoveAction = { "MoveAction", nullptr, (EPropertyFlags)0x0040000000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ADMVMCPlayer, MoveAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MoveAction_MetaData), NewProp_MoveAction_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ADMVMCPlayer_Statics::NewProp_LookAction = { "LookAction", nullptr, (EPropertyFlags)0x0040000000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ADMVMCPlayer, LookAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LookAction_MetaData), NewProp_LookAction_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ADMVMCPlayer_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADMVMCPlayer_Statics::NewProp_CameraBoom,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADMVMCPlayer_Statics::NewProp_FollowCamera,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADMVMCPlayer_Statics::NewProp_DefaultMappingContext,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADMVMCPlayer_Statics::NewProp_JumpAction,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADMVMCPlayer_Statics::NewProp_MoveAction,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADMVMCPlayer_Statics::NewProp_LookAction,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ADMVMCPlayer_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ADMVMCPlayer_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_ADMVMCCharacter,
	(UObject* (*)())Z_Construct_UPackage__Script_DMVMeleeCombat,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ADMVMCPlayer_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ADMVMCPlayer_Statics::ClassParams = {
	&ADMVMCPlayer::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_ADMVMCPlayer_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_ADMVMCPlayer_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ADMVMCPlayer_Statics::Class_MetaDataParams), Z_Construct_UClass_ADMVMCPlayer_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ADMVMCPlayer()
{
	if (!Z_Registration_Info_UClass_ADMVMCPlayer.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ADMVMCPlayer.OuterSingleton, Z_Construct_UClass_ADMVMCPlayer_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ADMVMCPlayer.OuterSingleton;
}
template<> DMVMELEECOMBAT_API UClass* StaticClass<ADMVMCPlayer>()
{
	return ADMVMCPlayer::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ADMVMCPlayer);
ADMVMCPlayer::~ADMVMCPlayer() {}
// End Class ADMVMCPlayer

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_Duarte_Documents_Unreal_Projects_Plugins_DMVMetricsSystem_ue_proj_Source_DMVMeleeCombat_Public_Characters_DMVMCPlayer_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ADMVMCPlayer, ADMVMCPlayer::StaticClass, TEXT("ADMVMCPlayer"), &Z_Registration_Info_UClass_ADMVMCPlayer, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ADMVMCPlayer), 1328000954U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Duarte_Documents_Unreal_Projects_Plugins_DMVMetricsSystem_ue_proj_Source_DMVMeleeCombat_Public_Characters_DMVMCPlayer_h_3386311900(TEXT("/Script/DMVMeleeCombat"),
	Z_CompiledInDeferFile_FID_Users_Duarte_Documents_Unreal_Projects_Plugins_DMVMetricsSystem_ue_proj_Source_DMVMeleeCombat_Public_Characters_DMVMCPlayer_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Duarte_Documents_Unreal_Projects_Plugins_DMVMetricsSystem_ue_proj_Source_DMVMeleeCombat_Public_Characters_DMVMCPlayer_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
