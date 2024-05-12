// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDMVMeleeCombat_init() {}
	DMVMELEECOMBAT_API UFunction* Z_Construct_UDelegateFunction_DMVMeleeCombat_OnHealthChangeDelegate__DelegateSignature();
	DMVMELEECOMBAT_API UFunction* Z_Construct_UDelegateFunction_DMVMeleeCombat_OnStaminaChangeDelegate__DelegateSignature();
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_DMVMeleeCombat;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_DMVMeleeCombat()
	{
		if (!Z_Registration_Info_UPackage__Script_DMVMeleeCombat.OuterSingleton)
		{
			static UObject* (*const SingletonFuncArray[])() = {
				(UObject* (*)())Z_Construct_UDelegateFunction_DMVMeleeCombat_OnHealthChangeDelegate__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_DMVMeleeCombat_OnStaminaChangeDelegate__DelegateSignature,
			};
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/DMVMeleeCombat",
				SingletonFuncArray,
				UE_ARRAY_COUNT(SingletonFuncArray),
				PKG_CompiledIn | 0x00000000,
				0x3C2F81EE,
				0xF8C245A9,
				METADATA_PARAMS(0, nullptr)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_DMVMeleeCombat.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_DMVMeleeCombat.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_DMVMeleeCombat(Z_Construct_UPackage__Script_DMVMeleeCombat, TEXT("/Script/DMVMeleeCombat"), Z_Registration_Info_UPackage__Script_DMVMeleeCombat, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0x3C2F81EE, 0xF8C245A9));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
