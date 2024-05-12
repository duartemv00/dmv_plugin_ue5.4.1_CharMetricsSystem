// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Characters/DMVMCCharacter.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef DMVMELEECOMBAT_DMVMCCharacter_generated_h
#error "DMVMCCharacter.generated.h already included, missing '#pragma once' in DMVMCCharacter.h"
#endif
#define DMVMELEECOMBAT_DMVMCCharacter_generated_h

#define FID_DMVMeleeCombat_Source_DMVMeleeCombat_Public_Characters_DMVMCCharacter_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesADMVMCCharacter(); \
	friend struct Z_Construct_UClass_ADMVMCCharacter_Statics; \
public: \
	DECLARE_CLASS(ADMVMCCharacter, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/DMVMeleeCombat"), NO_API) \
	DECLARE_SERIALIZER(ADMVMCCharacter)


#define FID_DMVMeleeCombat_Source_DMVMeleeCombat_Public_Characters_DMVMCCharacter_h_16_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ADMVMCCharacter(ADMVMCCharacter&&); \
	ADMVMCCharacter(const ADMVMCCharacter&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ADMVMCCharacter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ADMVMCCharacter); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ADMVMCCharacter) \
	NO_API virtual ~ADMVMCCharacter();


#define FID_DMVMeleeCombat_Source_DMVMeleeCombat_Public_Characters_DMVMCCharacter_h_13_PROLOG
#define FID_DMVMeleeCombat_Source_DMVMeleeCombat_Public_Characters_DMVMCCharacter_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_DMVMeleeCombat_Source_DMVMeleeCombat_Public_Characters_DMVMCCharacter_h_16_INCLASS_NO_PURE_DECLS \
	FID_DMVMeleeCombat_Source_DMVMeleeCombat_Public_Characters_DMVMCCharacter_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DMVMELEECOMBAT_API UClass* StaticClass<class ADMVMCCharacter>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_DMVMeleeCombat_Source_DMVMeleeCombat_Public_Characters_DMVMCCharacter_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
