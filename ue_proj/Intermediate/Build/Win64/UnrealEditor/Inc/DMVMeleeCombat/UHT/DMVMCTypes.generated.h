// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "DMVMCTypes.h"
#include "Templates/IsUEnumClass.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ReflectedTypeAccessors.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef DMVMELEECOMBAT_DMVMCTypes_generated_h
#error "DMVMCTypes.generated.h already included, missing '#pragma once' in DMVMCTypes.h"
#endif
#define DMVMELEECOMBAT_DMVMCTypes_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_Duarte_Documents_Unreal_Projects_Plugins_DMVMetricsSystem_ue_proj_Source_DMVMeleeCombat_Public_DMVMCTypes_h


#define FOREACH_ENUM_ECHARMETRICSENUM(op) \
	op(ECharMetricsEnum::STAT) \
	op(ECharMetricsEnum::REGEN_STAT) \
	op(ECharMetricsEnum::ACTION_CALLER) 

enum class ECharMetricsEnum : uint8;
template<> struct TIsUEnumClass<ECharMetricsEnum> { enum { Value = true }; };
template<> DMVMELEECOMBAT_API UEnum* StaticEnum<ECharMetricsEnum>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
