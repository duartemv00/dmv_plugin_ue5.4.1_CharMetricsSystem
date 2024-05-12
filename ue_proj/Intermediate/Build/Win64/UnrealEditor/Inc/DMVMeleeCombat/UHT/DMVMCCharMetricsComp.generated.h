// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Components/DMVMCCharMetricsComp.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FGameplayTag;
#ifdef DMVMELEECOMBAT_DMVMCCharMetricsComp_generated_h
#error "DMVMCCharMetricsComp.generated.h already included, missing '#pragma once' in DMVMCCharMetricsComp.h"
#endif
#define DMVMELEECOMBAT_DMVMCCharMetricsComp_generated_h

#define FID_DMVMeleeCombat_Source_DMVMeleeCombat_Public_Components_DMVMCCharMetricsComp_h_11_DELEGATE \
DMVMELEECOMBAT_API void FOnHealthChangeDelegate_DelegateWrapper(const FMulticastScriptDelegate& OnHealthChangeDelegate);


#define FID_DMVMeleeCombat_Source_DMVMeleeCombat_Public_Components_DMVMCCharMetricsComp_h_12_DELEGATE \
DMVMELEECOMBAT_API void FOnStaminaChangeDelegate_DelegateWrapper(const FMulticastScriptDelegate& OnStaminaChangeDelegate);


#define FID_DMVMeleeCombat_Source_DMVMeleeCombat_Public_Components_DMVMCCharMetricsComp_h_17_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FMetricsSetElement_Statics; \
	DMVMELEECOMBAT_API static class UScriptStruct* StaticStruct();


template<> DMVMELEECOMBAT_API UScriptStruct* StaticStruct<struct FMetricsSetElement>();

#define FID_DMVMeleeCombat_Source_DMVMeleeCombat_Public_Components_DMVMCCharMetricsComp_h_56_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execStopRegenTimer); \
	DECLARE_FUNCTION(execStartRegenTimer); \
	DECLARE_FUNCTION(execUnregenMetric); \
	DECLARE_FUNCTION(execRegenMetric); \
	DECLARE_FUNCTION(execCurrentValueExists); \
	DECLARE_FUNCTION(execModifyMetricCurrentValue); \
	DECLARE_FUNCTION(execGetMetricMaxValue); \
	DECLARE_FUNCTION(execGetMetricCurrentValue); \
	DECLARE_FUNCTION(execSetMetricCurrentValue);


#define FID_DMVMeleeCombat_Source_DMVMeleeCombat_Public_Components_DMVMCCharMetricsComp_h_56_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUDMVMCCharMetricsComp(); \
	friend struct Z_Construct_UClass_UDMVMCCharMetricsComp_Statics; \
public: \
	DECLARE_CLASS(UDMVMCCharMetricsComp, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/DMVMeleeCombat"), NO_API) \
	DECLARE_SERIALIZER(UDMVMCCharMetricsComp)


#define FID_DMVMeleeCombat_Source_DMVMeleeCombat_Public_Components_DMVMCCharMetricsComp_h_56_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UDMVMCCharMetricsComp(UDMVMCCharMetricsComp&&); \
	UDMVMCCharMetricsComp(const UDMVMCCharMetricsComp&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UDMVMCCharMetricsComp); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDMVMCCharMetricsComp); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UDMVMCCharMetricsComp) \
	NO_API virtual ~UDMVMCCharMetricsComp();


#define FID_DMVMeleeCombat_Source_DMVMeleeCombat_Public_Components_DMVMCCharMetricsComp_h_53_PROLOG
#define FID_DMVMeleeCombat_Source_DMVMeleeCombat_Public_Components_DMVMCCharMetricsComp_h_56_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_DMVMeleeCombat_Source_DMVMeleeCombat_Public_Components_DMVMCCharMetricsComp_h_56_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_DMVMeleeCombat_Source_DMVMeleeCombat_Public_Components_DMVMCCharMetricsComp_h_56_INCLASS_NO_PURE_DECLS \
	FID_DMVMeleeCombat_Source_DMVMeleeCombat_Public_Components_DMVMCCharMetricsComp_h_56_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DMVMELEECOMBAT_API UClass* StaticClass<class UDMVMCCharMetricsComp>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_DMVMeleeCombat_Source_DMVMeleeCombat_Public_Components_DMVMCCharMetricsComp_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
