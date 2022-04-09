// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CombatSystem/Public/Equipment/CSRangedWeapon.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCSRangedWeapon() {}
// Cross Module References
	COMBATSYSTEM_API UClass* Z_Construct_UClass_ACSRangedWeapon_NoRegister();
	COMBATSYSTEM_API UClass* Z_Construct_UClass_ACSRangedWeapon();
	COMBATSYSTEM_API UClass* Z_Construct_UClass_ACSWeapon();
	UPackage* Z_Construct_UPackage__Script_CombatSystem();
	ENGINE_API UClass* Z_Construct_UClass_USkeletalMeshComponent_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	COMBATSYSTEM_API UClass* Z_Construct_UClass_ACSProjectile_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USoundBase_NoRegister();
// End Cross Module References
	void ACSRangedWeapon::StaticRegisterNativesACSRangedWeapon()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ACSRangedWeapon);
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
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WeaponRange_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_WeaponRange;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaxShootImpulse_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxShootImpulse;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaxChargeTime_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxChargeTime;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DefaultProjectileClass_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_DefaultProjectileClass;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RecoilSound_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_RecoilSound;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ShootSound_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ShootSound;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ACSRangedWeapon_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ACSWeapon,
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
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACSRangedWeapon_Statics::NewProp_WeaponRange_MetaData[] = {
		{ "Category", "Ranged Weapon" },
		{ "ModuleRelativePath", "Public/Equipment/CSRangedWeapon.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ACSRangedWeapon_Statics::NewProp_WeaponRange = { "WeaponRange", nullptr, (EPropertyFlags)0x0020080000010001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACSRangedWeapon, WeaponRange), METADATA_PARAMS(Z_Construct_UClass_ACSRangedWeapon_Statics::NewProp_WeaponRange_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACSRangedWeapon_Statics::NewProp_WeaponRange_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACSRangedWeapon_Statics::NewProp_MaxShootImpulse_MetaData[] = {
		{ "Category", "Ranged Weapon" },
		{ "ModuleRelativePath", "Public/Equipment/CSRangedWeapon.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ACSRangedWeapon_Statics::NewProp_MaxShootImpulse = { "MaxShootImpulse", nullptr, (EPropertyFlags)0x0020080000010001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACSRangedWeapon, MaxShootImpulse), METADATA_PARAMS(Z_Construct_UClass_ACSRangedWeapon_Statics::NewProp_MaxShootImpulse_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACSRangedWeapon_Statics::NewProp_MaxShootImpulse_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACSRangedWeapon_Statics::NewProp_MaxChargeTime_MetaData[] = {
		{ "Category", "Ranged Weapon" },
		{ "ModuleRelativePath", "Public/Equipment/CSRangedWeapon.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ACSRangedWeapon_Statics::NewProp_MaxChargeTime = { "MaxChargeTime", nullptr, (EPropertyFlags)0x0020080000010001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACSRangedWeapon, MaxChargeTime), METADATA_PARAMS(Z_Construct_UClass_ACSRangedWeapon_Statics::NewProp_MaxChargeTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACSRangedWeapon_Statics::NewProp_MaxChargeTime_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACSRangedWeapon_Statics::NewProp_DefaultProjectileClass_MetaData[] = {
		{ "Category", "Projectiles" },
		{ "ModuleRelativePath", "Public/Equipment/CSRangedWeapon.h" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_ACSRangedWeapon_Statics::NewProp_DefaultProjectileClass = { "DefaultProjectileClass", nullptr, (EPropertyFlags)0x0024080000010001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACSRangedWeapon, DefaultProjectileClass), Z_Construct_UClass_ACSProjectile_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_ACSRangedWeapon_Statics::NewProp_DefaultProjectileClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACSRangedWeapon_Statics::NewProp_DefaultProjectileClass_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACSRangedWeapon_Statics::NewProp_RecoilSound_MetaData[] = {
		{ "Category", "Ranged Weapon|Sounds" },
		{ "ModuleRelativePath", "Public/Equipment/CSRangedWeapon.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACSRangedWeapon_Statics::NewProp_RecoilSound = { "RecoilSound", nullptr, (EPropertyFlags)0x0020080000010015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACSRangedWeapon, RecoilSound), Z_Construct_UClass_USoundBase_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ACSRangedWeapon_Statics::NewProp_RecoilSound_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACSRangedWeapon_Statics::NewProp_RecoilSound_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACSRangedWeapon_Statics::NewProp_ShootSound_MetaData[] = {
		{ "Category", "Ranged Weapon|Sounds" },
		{ "ModuleRelativePath", "Public/Equipment/CSRangedWeapon.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACSRangedWeapon_Statics::NewProp_ShootSound = { "ShootSound", nullptr, (EPropertyFlags)0x0020080000010015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACSRangedWeapon, ShootSound), Z_Construct_UClass_USoundBase_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ACSRangedWeapon_Statics::NewProp_ShootSound_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACSRangedWeapon_Statics::NewProp_ShootSound_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ACSRangedWeapon_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACSRangedWeapon_Statics::NewProp_MeshComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACSRangedWeapon_Statics::NewProp_WeaponRange,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACSRangedWeapon_Statics::NewProp_MaxShootImpulse,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACSRangedWeapon_Statics::NewProp_MaxChargeTime,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACSRangedWeapon_Statics::NewProp_DefaultProjectileClass,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACSRangedWeapon_Statics::NewProp_RecoilSound,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACSRangedWeapon_Statics::NewProp_ShootSound,
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
		if (!Z_Registration_Info_UClass_ACSRangedWeapon.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ACSRangedWeapon.OuterSingleton, Z_Construct_UClass_ACSRangedWeapon_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ACSRangedWeapon.OuterSingleton;
	}
	template<> COMBATSYSTEM_API UClass* StaticClass<ACSRangedWeapon>()
	{
		return ACSRangedWeapon::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ACSRangedWeapon);
	struct Z_CompiledInDeferFile_FID_CombatSystem_Source_CombatSystem_Public_Equipment_CSRangedWeapon_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_CombatSystem_Source_CombatSystem_Public_Equipment_CSRangedWeapon_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ACSRangedWeapon, ACSRangedWeapon::StaticClass, TEXT("ACSRangedWeapon"), &Z_Registration_Info_UClass_ACSRangedWeapon, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ACSRangedWeapon), 3222824140U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_CombatSystem_Source_CombatSystem_Public_Equipment_CSRangedWeapon_h_210559813(TEXT("/Script/CombatSystem"),
		Z_CompiledInDeferFile_FID_CombatSystem_Source_CombatSystem_Public_Equipment_CSRangedWeapon_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_CombatSystem_Source_CombatSystem_Public_Equipment_CSRangedWeapon_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
