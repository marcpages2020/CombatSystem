// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CombatSystem/CombatSystemGameModeBase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
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
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering LOD WorldPartition DataLayers Utilities|Transformation" },
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
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UECodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ACombatSystemGameModeBase_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ACombatSystemGameModeBase, 308634488);
	template<> COMBATSYSTEM_API UClass* StaticClass<ACombatSystemGameModeBase>()
	{
		return ACombatSystemGameModeBase::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ACombatSystemGameModeBase(Z_Construct_UClass_ACombatSystemGameModeBase, &ACombatSystemGameModeBase::StaticClass, TEXT("/Script/CombatSystem"), TEXT("ACombatSystemGameModeBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ACombatSystemGameModeBase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
