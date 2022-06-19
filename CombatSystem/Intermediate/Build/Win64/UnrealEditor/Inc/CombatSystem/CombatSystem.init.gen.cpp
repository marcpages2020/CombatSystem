// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCombatSystem_init() {}
	COMBATSYSTEM_API UFunction* Z_Construct_UDelegateFunction_CombatSystem_OnHealthChangedSignature__DelegateSignature();
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_CombatSystem;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_CombatSystem()
	{
		if (!Z_Registration_Info_UPackage__Script_CombatSystem.OuterSingleton)
		{
			static UObject* (*const SingletonFuncArray[])() = {
				(UObject* (*)())Z_Construct_UDelegateFunction_CombatSystem_OnHealthChangedSignature__DelegateSignature,
			};
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/CombatSystem",
				SingletonFuncArray,
				UE_ARRAY_COUNT(SingletonFuncArray),
				PKG_CompiledIn | 0x00000000,
				0xA72830DC,
				0x6DAE90C1,
				METADATA_PARAMS(nullptr, 0)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_CombatSystem.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_CombatSystem.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_CombatSystem(Z_Construct_UPackage__Script_CombatSystem, TEXT("/Script/CombatSystem"), Z_Registration_Info_UPackage__Script_CombatSystem, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0xA72830DC, 0x6DAE90C1));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
