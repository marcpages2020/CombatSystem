// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CombatSystem/Public/Equipment/CSProjectileRangedWeapon.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCSProjectileRangedWeapon() {}
// Cross Module References
	COMBATSYSTEM_API UClass* Z_Construct_UClass_ACSProjectileRangedWeapon_NoRegister();
	COMBATSYSTEM_API UClass* Z_Construct_UClass_ACSProjectileRangedWeapon();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_CombatSystem();
	ENGINE_API UClass* Z_Construct_UClass_USkeletalMeshComponent_NoRegister();
// End Cross Module References
	void ACSProjectileRangedWeapon::StaticRegisterNativesACSProjectileRangedWeapon()
	{
	}
	UClass* Z_Construct_UClass_ACSProjectileRangedWeapon_NoRegister()
	{
		return ACSProjectileRangedWeapon::StaticClass();
	}
	struct Z_Construct_UClass_ACSProjectileRangedWeapon_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MeshComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_MeshComponent;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ACSProjectileRangedWeapon_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_CombatSystem,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACSProjectileRangedWeapon_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Equipment/CSProjectileRangedWeapon.h" },
		{ "ModuleRelativePath", "Public/Equipment/CSProjectileRangedWeapon.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACSProjectileRangedWeapon_Statics::NewProp_MeshComponent_MetaData[] = {
		{ "Category", "Components" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Equipment/CSProjectileRangedWeapon.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACSProjectileRangedWeapon_Statics::NewProp_MeshComponent = { "MeshComponent", nullptr, (EPropertyFlags)0x00200800000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACSProjectileRangedWeapon, MeshComponent), Z_Construct_UClass_USkeletalMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ACSProjectileRangedWeapon_Statics::NewProp_MeshComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACSProjectileRangedWeapon_Statics::NewProp_MeshComponent_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ACSProjectileRangedWeapon_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACSProjectileRangedWeapon_Statics::NewProp_MeshComponent,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ACSProjectileRangedWeapon_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ACSProjectileRangedWeapon>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ACSProjectileRangedWeapon_Statics::ClassParams = {
		&ACSProjectileRangedWeapon::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ACSProjectileRangedWeapon_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ACSProjectileRangedWeapon_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ACSProjectileRangedWeapon_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ACSProjectileRangedWeapon_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ACSProjectileRangedWeapon()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UECodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ACSProjectileRangedWeapon_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ACSProjectileRangedWeapon, 3351023815);
	template<> COMBATSYSTEM_API UClass* StaticClass<ACSProjectileRangedWeapon>()
	{
		return ACSProjectileRangedWeapon::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ACSProjectileRangedWeapon(Z_Construct_UClass_ACSProjectileRangedWeapon, &ACSProjectileRangedWeapon::StaticClass, TEXT("/Script/CombatSystem"), TEXT("ACSProjectileRangedWeapon"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ACSProjectileRangedWeapon);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
