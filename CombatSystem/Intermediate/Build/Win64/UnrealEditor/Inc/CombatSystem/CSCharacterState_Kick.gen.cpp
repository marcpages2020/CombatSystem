// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CombatSystem/Public/Actions/CSCharacterState_Kick.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCSCharacterState_Kick() {}
// Cross Module References
	COMBATSYSTEM_API UClass* Z_Construct_UClass_UCSCharacterState_Kick_NoRegister();
	COMBATSYSTEM_API UClass* Z_Construct_UClass_UCSCharacterState_Kick();
	COMBATSYSTEM_API UClass* Z_Construct_UClass_UCSCharacterState();
	UPackage* Z_Construct_UPackage__Script_CombatSystem();
// End Cross Module References
	void UCSCharacterState_Kick::StaticRegisterNativesUCSCharacterState_Kick()
	{
	}
	UClass* Z_Construct_UClass_UCSCharacterState_Kick_NoRegister()
	{
		return UCSCharacterState_Kick::StaticClass();
	}
	struct Z_Construct_UClass_UCSCharacterState_Kick_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FootSocketName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_FootSocketName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_KickedEnemiesDetectionSphereRadius_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_KickedEnemiesDetectionSphereRadius;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_KickForce_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_KickForce;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCSCharacterState_Kick_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UCSCharacterState,
		(UObject* (*)())Z_Construct_UPackage__Script_CombatSystem,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCSCharacterState_Kick_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Actions/CSCharacterState_Kick.h" },
		{ "ModuleRelativePath", "Public/Actions/CSCharacterState_Kick.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCSCharacterState_Kick_Statics::NewProp_FootSocketName_MetaData[] = {
		{ "Category", "Kick" },
		{ "ModuleRelativePath", "Public/Actions/CSCharacterState_Kick.h" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UCSCharacterState_Kick_Statics::NewProp_FootSocketName = { "FootSocketName", nullptr, (EPropertyFlags)0x0020080000010001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCSCharacterState_Kick, FootSocketName), METADATA_PARAMS(Z_Construct_UClass_UCSCharacterState_Kick_Statics::NewProp_FootSocketName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCSCharacterState_Kick_Statics::NewProp_FootSocketName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCSCharacterState_Kick_Statics::NewProp_KickedEnemiesDetectionSphereRadius_MetaData[] = {
		{ "Category", "Kick" },
		{ "ModuleRelativePath", "Public/Actions/CSCharacterState_Kick.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UCSCharacterState_Kick_Statics::NewProp_KickedEnemiesDetectionSphereRadius = { "KickedEnemiesDetectionSphereRadius", nullptr, (EPropertyFlags)0x0020080000010001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCSCharacterState_Kick, KickedEnemiesDetectionSphereRadius), METADATA_PARAMS(Z_Construct_UClass_UCSCharacterState_Kick_Statics::NewProp_KickedEnemiesDetectionSphereRadius_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCSCharacterState_Kick_Statics::NewProp_KickedEnemiesDetectionSphereRadius_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCSCharacterState_Kick_Statics::NewProp_KickForce_MetaData[] = {
		{ "Category", "Kick" },
		{ "ModuleRelativePath", "Public/Actions/CSCharacterState_Kick.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UCSCharacterState_Kick_Statics::NewProp_KickForce = { "KickForce", nullptr, (EPropertyFlags)0x0020080000010001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCSCharacterState_Kick, KickForce), METADATA_PARAMS(Z_Construct_UClass_UCSCharacterState_Kick_Statics::NewProp_KickForce_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCSCharacterState_Kick_Statics::NewProp_KickForce_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UCSCharacterState_Kick_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCSCharacterState_Kick_Statics::NewProp_FootSocketName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCSCharacterState_Kick_Statics::NewProp_KickedEnemiesDetectionSphereRadius,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCSCharacterState_Kick_Statics::NewProp_KickForce,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCSCharacterState_Kick_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCSCharacterState_Kick>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UCSCharacterState_Kick_Statics::ClassParams = {
		&UCSCharacterState_Kick::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UCSCharacterState_Kick_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UCSCharacterState_Kick_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UCSCharacterState_Kick_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UCSCharacterState_Kick_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UCSCharacterState_Kick()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UECodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UCSCharacterState_Kick_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UCSCharacterState_Kick, 494452342);
	template<> COMBATSYSTEM_API UClass* StaticClass<UCSCharacterState_Kick>()
	{
		return UCSCharacterState_Kick::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UCSCharacterState_Kick(Z_Construct_UClass_UCSCharacterState_Kick, &UCSCharacterState_Kick::StaticClass, TEXT("/Script/CombatSystem"), TEXT("UCSCharacterState_Kick"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCSCharacterState_Kick);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif