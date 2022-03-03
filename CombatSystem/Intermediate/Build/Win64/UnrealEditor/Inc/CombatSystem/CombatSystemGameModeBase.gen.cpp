// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CombatSystem/CombatSystemGameModeBase.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCombatSystemGameModeBase() {}
// Cross Module References
	COMBATSYSTEM_API UClass* Z_Construct_UClass_ACombatSystemGameModeBase_NoRegister();
	COMBATSYSTEM_API UClass* Z_Construct_UClass_ACombatSystemGameModeBase();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_CombatSystem();
// End Cross Module References
	void ACombatSystemGameModeBase::StaticRegisterNativesACombatSystemGameModeBase()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ACombatSystemGameModeBase);
	UClass* Z_Construct_UClass_ACombatSystemGameModeBase_NoRegister()
	{
		return ACombatSystemGameModeBase::StaticClass();
	}
	struct Z_Construct_UClass_ACombatSystemGameModeBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ACombatSystemGameModeBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_CombatSystem,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACombatSystemGameModeBase_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "CombatSystemGameModeBase.h" },
		{ "ModuleRelativePath", "CombatSystemGameModeBase.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ACombatSystemGameModeBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ACombatSystemGameModeBase>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ACombatSystemGameModeBase_Statics::ClassParams = {
		&ACombatSystemGameModeBase::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x009002ACu,
		METADATA_PARAMS(Z_Construct_UClass_ACombatSystemGameModeBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ACombatSystemGameModeBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ACombatSystemGameModeBase()
	{
		if (!Z_Registration_Info_UClass_ACombatSystemGameModeBase.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ACombatSystemGameModeBase.OuterSingleton, Z_Construct_UClass_ACombatSystemGameModeBase_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ACombatSystemGameModeBase.OuterSingleton;
	}
	template<> COMBATSYSTEM_API UClass* StaticClass<ACombatSystemGameModeBase>()
	{
		return ACombatSystemGameModeBase::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ACombatSystemGameModeBase);
	struct Z_CompiledInDeferFile_FID_CombatSystem_Source_CombatSystem_CombatSystemGameModeBase_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_CombatSystem_Source_CombatSystem_CombatSystemGameModeBase_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ACombatSystemGameModeBase, ACombatSystemGameModeBase::StaticClass, TEXT("ACombatSystemGameModeBase"), &Z_Registration_Info_UClass_ACombatSystemGameModeBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ACombatSystemGameModeBase), 3301980488U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_CombatSystem_Source_CombatSystem_CombatSystemGameModeBase_h_2503198009(TEXT("/Script/CombatSystem"),
		Z_CompiledInDeferFile_FID_CombatSystem_Source_CombatSystem_CombatSystemGameModeBase_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_CombatSystem_Source_CombatSystem_CombatSystemGameModeBase_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
