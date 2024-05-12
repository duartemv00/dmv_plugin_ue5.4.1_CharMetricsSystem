// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Characters/DMVMCPlayer.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef DMVMELEECOMBAT_DMVMCPlayer_generated_h
#error "DMVMCPlayer.generated.h already included, missing '#pragma once' in DMVMCPlayer.h"
#endif
#define DMVMELEECOMBAT_DMVMCPlayer_generated_h

#define FID_DMVMeleeCombat_Source_DMVMeleeCombat_Public_Characters_DMVMCPlayer_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execSetCamBoomTargetArmLength);


#define FID_DMVMeleeCombat_Source_DMVMeleeCombat_Public_Characters_DMVMCPlayer_h_18_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesADMVMCPlayer(); \
	friend struct Z_Construct_UClass_ADMVMCPlayer_Statics; \
public: \
	DECLARE_CLASS(ADMVMCPlayer, ADMVMCCharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/DMVMeleeCombat"), NO_API) \
	DECLARE_SERIALIZER(ADMVMCPlayer)


#define FID_DMVMeleeCombat_Source_DMVMeleeCombat_Public_Characters_DMVMCPlayer_h_18_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ADMVMCPlayer(ADMVMCPlayer&&); \
	ADMVMCPlayer(const ADMVMCPlayer&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ADMVMCPlayer); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ADMVMCPlayer); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ADMVMCPlayer) \
	NO_API virtual ~ADMVMCPlayer();


#define FID_DMVMeleeCombat_Source_DMVMeleeCombat_Public_Characters_DMVMCPlayer_h_15_PROLOG
#define FID_DMVMeleeCombat_Source_DMVMeleeCombat_Public_Characters_DMVMCPlayer_h_18_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_DMVMeleeCombat_Source_DMVMeleeCombat_Public_Characters_DMVMCPlayer_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_DMVMeleeCombat_Source_DMVMeleeCombat_Public_Characters_DMVMCPlayer_h_18_INCLASS_NO_PURE_DECLS \
	FID_DMVMeleeCombat_Source_DMVMeleeCombat_Public_Characters_DMVMCPlayer_h_18_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DMVMELEECOMBAT_API UClass* StaticClass<class ADMVMCPlayer>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_DMVMeleeCombat_Source_DMVMeleeCombat_Public_Characters_DMVMCPlayer_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
