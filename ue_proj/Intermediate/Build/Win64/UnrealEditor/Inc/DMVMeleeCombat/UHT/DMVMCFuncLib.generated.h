// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "DMVMCFuncLib.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class UDMVMCCharMetricsComp;
struct FGameplayTag;
#ifdef DMVMELEECOMBAT_DMVMCFuncLib_generated_h
#error "DMVMCFuncLib.generated.h already included, missing '#pragma once' in DMVMCFuncLib.h"
#endif
#define DMVMELEECOMBAT_DMVMCFuncLib_generated_h

#define FID_Users_Duarte_Documents_Unreal_Projects_Plugins_DMVMetricsSystem_ue_proj_Source_DMVMeleeCombat_Public_DMVMCFuncLib_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execSetMetricsFValue); \
	DECLARE_FUNCTION(execGetMetricsMaxFValue); \
	DECLARE_FUNCTION(execGetMetricsFValue); \
	DECLARE_FUNCTION(execGetCharMetricsComp);


#define FID_Users_Duarte_Documents_Unreal_Projects_Plugins_DMVMetricsSystem_ue_proj_Source_DMVMeleeCombat_Public_DMVMCFuncLib_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUDMVMCFuncLib(); \
	friend struct Z_Construct_UClass_UDMVMCFuncLib_Statics; \
public: \
	DECLARE_CLASS(UDMVMCFuncLib, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/DMVMeleeCombat"), NO_API) \
	DECLARE_SERIALIZER(UDMVMCFuncLib)


#define FID_Users_Duarte_Documents_Unreal_Projects_Plugins_DMVMetricsSystem_ue_proj_Source_DMVMeleeCombat_Public_DMVMCFuncLib_h_17_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UDMVMCFuncLib(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UDMVMCFuncLib(UDMVMCFuncLib&&); \
	UDMVMCFuncLib(const UDMVMCFuncLib&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UDMVMCFuncLib); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDMVMCFuncLib); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UDMVMCFuncLib) \
	NO_API virtual ~UDMVMCFuncLib();


#define FID_Users_Duarte_Documents_Unreal_Projects_Plugins_DMVMetricsSystem_ue_proj_Source_DMVMeleeCombat_Public_DMVMCFuncLib_h_14_PROLOG
#define FID_Users_Duarte_Documents_Unreal_Projects_Plugins_DMVMetricsSystem_ue_proj_Source_DMVMeleeCombat_Public_DMVMCFuncLib_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_Duarte_Documents_Unreal_Projects_Plugins_DMVMetricsSystem_ue_proj_Source_DMVMeleeCombat_Public_DMVMCFuncLib_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Users_Duarte_Documents_Unreal_Projects_Plugins_DMVMetricsSystem_ue_proj_Source_DMVMeleeCombat_Public_DMVMCFuncLib_h_17_INCLASS_NO_PURE_DECLS \
	FID_Users_Duarte_Documents_Unreal_Projects_Plugins_DMVMetricsSystem_ue_proj_Source_DMVMeleeCombat_Public_DMVMCFuncLib_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DMVMELEECOMBAT_API UClass* StaticClass<class UDMVMCFuncLib>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_Duarte_Documents_Unreal_Projects_Plugins_DMVMetricsSystem_ue_proj_Source_DMVMeleeCombat_Public_DMVMCFuncLib_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
