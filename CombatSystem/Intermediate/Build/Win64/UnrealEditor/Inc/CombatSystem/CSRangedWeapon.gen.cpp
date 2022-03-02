// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CombatSystem/Public/Equipment/CSRangedWeapon.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCSRangedWeapon() {}
// Cross Module References
	COMBATSYSTEM_API UClass* Z_Construct_UClass_ACSRangedWeapon_NoRegister();
	COMBATSYSTEM_API UClass* Z_Construct_UClass_ACSRangedWeapon();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_CombatSystem();
	ENGINE_API UClass* Z_Construct_UClass_USkeletalMeshComponent_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	COMBATSYSTEM_API UClass* Z_Construct_UClass_ACSProjectile_NoRegister();
// End Cross Module References
	void ACSRangedWeapon::StaticRegisterNativesACSRangedWeapon()
	{
	}
	UClass* Z_Construct_UClass_ACSRangedWeapon_NoRegister()
	{
		return ACSRangedWeapon::StaticClass();
	}
	struct Z_Construct_UClass_ACSRangedWeapon_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MeshComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_MeshComponent;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaxShootImpulse_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxShootImpulse;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DefaultProjectileClass_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_DefaultProjectileClass;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ACSRangedWeapon_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_CombatSystem,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACSRangedWeapon_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Equipment/CSRangedWeapon.h" },
		{ "ModuleRelativePath", "Public/Equipment/CSRangedWeapon.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACSRangedWeapon_Statics::NewProp_MeshComponent_MetaData[] = {
		{ "Category", "Components" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Equipment/CSRangedWeapon.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACSRangedWeapon_Statics::NewProp_MeshComponent = { "MeshComponent", nullptr, (EPropertyFlags)0x00200800000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACSRangedWeapon, MeshComponent), Z_Construct_UClass_USkeletalMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ACSRangedWeapon_Statics::NewProp_MeshComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACSRangedWeapon_Statics::NewProp_MeshComponent_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACSRangedWeapon_Statics::NewProp_MaxShootImpulse_MetaData[] = {
		{ "Category", "Projectiles" },
		{ "ModuleRelativePath", "Public/Equipment/CSRangedWeapon.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ACSRangedWeapon_Statics::NewProp_MaxShootImpulse = { "MaxShootImpulse", nullptr, (EPropertyFlags)0x0020080000010001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACSRangedWeapon, MaxShootImpulse), METADATA_PARAMS(Z_Construct_UClass_ACSRangedWeapon_Statics::NewProp_MaxShootImpulse_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACSRangedWeapon_Statics::NewProp_MaxShootImpulse_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACSRangedWeapon_Statics::NewProp_DefaultProjectileClass_MetaData[] = {
		{ "Category", "Projectiles" },
		{ "ModuleRelativePath", "Public/Equipment/CSRangedWeapon.h" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_ACSRangedWeapon_Statics::NewProp_DefaultProjectileClass = { "DefaultProjectileClass", nullptr, (EPropertyFlags)0x0024080000010001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACSRangedWeapon, DefaultProjectileClass), Z_Construct_UClass_ACSProjectile_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_ACSRangedWeapon_Statics::NewProp_DefaultProjectileClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACSRangedWeapon_Statics::NewProp_DefaultProjectileClass_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ACSRangedWeapon_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACSRangedWeapon_Statics::NewProp_MeshComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACSRangedWeapon_Statics::NewProp_MaxShootImpulse,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACSRangedWeapon_Statics::NewProp_DefaultProjectileClass,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ACSRangedWeapon_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ACSRangedWeapon>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ACSRangedWeapon_Statics::ClassParams = {
		&ACSRangedWeapon::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ACSRangedWeapon_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ACSRangedWeapon_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ACSRangedWeapon_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ACSRangedWeapon_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ACSRangedWeapon()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UECodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ACSRangedWeapon_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ACSRangedWeapon, 3856607605);
	template<> COMBATSYSTEM_API UClass* StaticClass<ACSRangedWeapon>()
	{
		return ACSRangedWeapon::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ACSRangedWeapon(Z_Construct_UClass_ACSRangedWeapon, &ACSRangedWeapon::StaticClass, TEXT("/Script/CombatSystem"), TEXT("ACSRangedWeapon"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ACSRangedWeapon);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
