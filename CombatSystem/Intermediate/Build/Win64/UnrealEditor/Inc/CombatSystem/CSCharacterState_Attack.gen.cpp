// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CombatSystem/Public/Actions/CSCharacterState_Attack.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCSCharacterState_Attack() {}
// Cross Module References
	COMBATSYSTEM_API UEnum* Z_Construct_UEnum_CombatSystem_CharacterSubstateType_Attack();
	UPackage* Z_Construct_UPackage__Script_CombatSystem();
	COMBATSYSTEM_API UClass* Z_Construct_UClass_UCSCharacterState_Attack_NoRegister();
	COMBATSYSTEM_API UClass* Z_Construct_UClass_UCSCharacterState_Attack();
	COMBATSYSTEM_API UClass* Z_Construct_UClass_UCSCharacterState();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	ENGINE_API UClass* Z_Construct_UClass_UCameraShakeBase_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UForceFeedbackEffect_NoRegister();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_CharacterSubstateType_Attack;
	static UEnum* CharacterSubstateType_Attack_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_CharacterSubstateType_Attack.OuterSingleton)
		{
			Z_Registration_Info_UEnum_CharacterSubstateType_Attack.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_CombatSystem_CharacterSubstateType_Attack, Z_Construct_UPackage__Script_CombatSystem(), TEXT("CharacterSubstateType_Attack"));
		}
		return Z_Registration_Info_UEnum_CharacterSubstateType_Attack.OuterSingleton;
	}
	template<> COMBATSYSTEM_API UEnum* StaticEnum<CharacterSubstateType_Attack>()
	{
		return CharacterSubstateType_Attack_StaticEnum();
	}
	struct Z_Construct_UEnum_CombatSystem_CharacterSubstateType_Attack_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_CombatSystem_CharacterSubstateType_Attack_Statics::Enumerators[] = {
		{ "CharacterSubstateType_Attack::DEFAULT_ATTACK", (int64)CharacterSubstateType_Attack::DEFAULT_ATTACK },
		{ "CharacterSubstateType_Attack::SPIRAL_ATTACK", (int64)CharacterSubstateType_Attack::SPIRAL_ATTACK },
		{ "CharacterSubstateType_Attack::ROLLING_ATTACK", (int64)CharacterSubstateType_Attack::ROLLING_ATTACK },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_CombatSystem_CharacterSubstateType_Attack_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "DEFAULT_ATTACK.Name", "CharacterSubstateType_Attack::DEFAULT_ATTACK" },
		{ "ModuleRelativePath", "Public/Actions/CSCharacterState_Attack.h" },
		{ "ROLLING_ATTACK.Name", "CharacterSubstateType_Attack::ROLLING_ATTACK" },
		{ "SPIRAL_ATTACK.Name", "CharacterSubstateType_Attack::SPIRAL_ATTACK" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_CombatSystem_CharacterSubstateType_Attack_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_CombatSystem,
		nullptr,
		"CharacterSubstateType_Attack",
		"CharacterSubstateType_Attack",
		Z_Construct_UEnum_CombatSystem_CharacterSubstateType_Attack_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_CombatSystem_CharacterSubstateType_Attack_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_CombatSystem_CharacterSubstateType_Attack_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_CombatSystem_CharacterSubstateType_Attack_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_CombatSystem_CharacterSubstateType_Attack()
	{
		if (!Z_Registration_Info_UEnum_CharacterSubstateType_Attack.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_CharacterSubstateType_Attack.InnerSingleton, Z_Construct_UEnum_CombatSystem_CharacterSubstateType_Attack_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_CharacterSubstateType_Attack.InnerSingleton;
	}
	void UCSCharacterState_Attack::StaticRegisterNativesUCSCharacterState_Attack()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UCSCharacterState_Attack);
	UClass* Z_Construct_UClass_UCSCharacterState_Attack_NoRegister()
	{
		return UCSCharacterState_Attack::StaticClass();
	}
	struct Z_Construct_UClass_UCSCharacterState_Attack_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SpiralAttackMovementSpeed_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_SpiralAttackMovementSpeed;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RollingAttackMovementSpeed_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_RollingAttackMovementSpeed;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StrikeShake_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_StrikeShake;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WeaponStrikeForceFeedback_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_WeaponStrikeForceFeedback;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCSCharacterState_Attack_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UCSCharacterState,
		(UObject* (*)())Z_Construct_UPackage__Script_CombatSystem,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCSCharacterState_Attack_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Actions/CSCharacterState_Attack.h" },
		{ "ModuleRelativePath", "Public/Actions/CSCharacterState_Attack.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCSCharacterState_Attack_Statics::NewProp_SpiralAttackMovementSpeed_MetaData[] = {
		{ "Category", "Attack" },
		{ "ModuleRelativePath", "Public/Actions/CSCharacterState_Attack.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UCSCharacterState_Attack_Statics::NewProp_SpiralAttackMovementSpeed = { "SpiralAttackMovementSpeed", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCSCharacterState_Attack, SpiralAttackMovementSpeed), METADATA_PARAMS(Z_Construct_UClass_UCSCharacterState_Attack_Statics::NewProp_SpiralAttackMovementSpeed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCSCharacterState_Attack_Statics::NewProp_SpiralAttackMovementSpeed_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCSCharacterState_Attack_Statics::NewProp_RollingAttackMovementSpeed_MetaData[] = {
		{ "Category", "Attack" },
		{ "ModuleRelativePath", "Public/Actions/CSCharacterState_Attack.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UCSCharacterState_Attack_Statics::NewProp_RollingAttackMovementSpeed = { "RollingAttackMovementSpeed", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCSCharacterState_Attack, RollingAttackMovementSpeed), METADATA_PARAMS(Z_Construct_UClass_UCSCharacterState_Attack_Statics::NewProp_RollingAttackMovementSpeed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCSCharacterState_Attack_Statics::NewProp_RollingAttackMovementSpeed_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCSCharacterState_Attack_Statics::NewProp_StrikeShake_MetaData[] = {
		{ "Category", "Attack" },
		{ "ModuleRelativePath", "Public/Actions/CSCharacterState_Attack.h" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UCSCharacterState_Attack_Statics::NewProp_StrikeShake = { "StrikeShake", nullptr, (EPropertyFlags)0x0024080000000001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCSCharacterState_Attack, StrikeShake), Z_Construct_UClass_UCameraShakeBase_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_UCSCharacterState_Attack_Statics::NewProp_StrikeShake_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCSCharacterState_Attack_Statics::NewProp_StrikeShake_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCSCharacterState_Attack_Statics::NewProp_WeaponStrikeForceFeedback_MetaData[] = {
		{ "Category", "Attack" },
		{ "ModuleRelativePath", "Public/Actions/CSCharacterState_Attack.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCSCharacterState_Attack_Statics::NewProp_WeaponStrikeForceFeedback = { "WeaponStrikeForceFeedback", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCSCharacterState_Attack, WeaponStrikeForceFeedback), Z_Construct_UClass_UForceFeedbackEffect_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UCSCharacterState_Attack_Statics::NewProp_WeaponStrikeForceFeedback_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCSCharacterState_Attack_Statics::NewProp_WeaponStrikeForceFeedback_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UCSCharacterState_Attack_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCSCharacterState_Attack_Statics::NewProp_SpiralAttackMovementSpeed,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCSCharacterState_Attack_Statics::NewProp_RollingAttackMovementSpeed,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCSCharacterState_Attack_Statics::NewProp_StrikeShake,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCSCharacterState_Attack_Statics::NewProp_WeaponStrikeForceFeedback,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCSCharacterState_Attack_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCSCharacterState_Attack>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UCSCharacterState_Attack_Statics::ClassParams = {
		&UCSCharacterState_Attack::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UCSCharacterState_Attack_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UCSCharacterState_Attack_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UCSCharacterState_Attack_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UCSCharacterState_Attack_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UCSCharacterState_Attack()
	{
		if (!Z_Registration_Info_UClass_UCSCharacterState_Attack.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCSCharacterState_Attack.OuterSingleton, Z_Construct_UClass_UCSCharacterState_Attack_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UCSCharacterState_Attack.OuterSingleton;
	}
	template<> COMBATSYSTEM_API UClass* StaticClass<UCSCharacterState_Attack>()
	{
		return UCSCharacterState_Attack::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCSCharacterState_Attack);
	struct Z_CompiledInDeferFile_FID_CombatSystem_Source_CombatSystem_Public_Actions_CSCharacterState_Attack_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_CombatSystem_Source_CombatSystem_Public_Actions_CSCharacterState_Attack_h_Statics::EnumInfo[] = {
		{ CharacterSubstateType_Attack_StaticEnum, TEXT("CharacterSubstateType_Attack"), &Z_Registration_Info_UEnum_CharacterSubstateType_Attack, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3446772532U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_CombatSystem_Source_CombatSystem_Public_Actions_CSCharacterState_Attack_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UCSCharacterState_Attack, UCSCharacterState_Attack::StaticClass, TEXT("UCSCharacterState_Attack"), &Z_Registration_Info_UClass_UCSCharacterState_Attack, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCSCharacterState_Attack), 2064775921U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_CombatSystem_Source_CombatSystem_Public_Actions_CSCharacterState_Attack_h_2099908091(TEXT("/Script/CombatSystem"),
		Z_CompiledInDeferFile_FID_CombatSystem_Source_CombatSystem_Public_Actions_CSCharacterState_Attack_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_CombatSystem_Source_CombatSystem_Public_Actions_CSCharacterState_Attack_h_Statics::ClassInfo),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_CombatSystem_Source_CombatSystem_Public_Actions_CSCharacterState_Attack_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_CombatSystem_Source_CombatSystem_Public_Actions_CSCharacterState_Attack_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
