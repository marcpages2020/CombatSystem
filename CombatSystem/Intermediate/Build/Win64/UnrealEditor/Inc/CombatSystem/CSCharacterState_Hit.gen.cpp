// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CombatSystem/Public/Actions/CSCharacterState_Hit.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCSCharacterState_Hit() {}
// Cross Module References
	COMBATSYSTEM_API UEnum* Z_Construct_UEnum_CombatSystem_CharacterSubstateType_Hit();
	UPackage* Z_Construct_UPackage__Script_CombatSystem();
	COMBATSYSTEM_API UClass* Z_Construct_UClass_UCSCharacterState_Hit_NoRegister();
	COMBATSYSTEM_API UClass* Z_Construct_UClass_UCSCharacterState_Hit();
	COMBATSYSTEM_API UClass* Z_Construct_UClass_UCSCharacterState();
	ENGINE_API UClass* Z_Construct_UClass_UAnimMontage_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	ENGINE_API UClass* Z_Construct_UClass_UCameraShakeBase_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UForceFeedbackEffect_NoRegister();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_CharacterSubstateType_Hit;
	static UEnum* CharacterSubstateType_Hit_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_CharacterSubstateType_Hit.OuterSingleton)
		{
			Z_Registration_Info_UEnum_CharacterSubstateType_Hit.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_CombatSystem_CharacterSubstateType_Hit, Z_Construct_UPackage__Script_CombatSystem(), TEXT("CharacterSubstateType_Hit"));
		}
		return Z_Registration_Info_UEnum_CharacterSubstateType_Hit.OuterSingleton;
	}
	template<> COMBATSYSTEM_API UEnum* StaticEnum<CharacterSubstateType_Hit>()
	{
		return CharacterSubstateType_Hit_StaticEnum();
	}
	struct Z_Construct_UEnum_CombatSystem_CharacterSubstateType_Hit_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_CombatSystem_CharacterSubstateType_Hit_Statics::Enumerators[] = {
		{ "CharacterSubstateType_Hit::DEFAULT_HIT", (int64)CharacterSubstateType_Hit::DEFAULT_HIT },
		{ "CharacterSubstateType_Hit::BLOCK_HIT", (int64)CharacterSubstateType_Hit::BLOCK_HIT },
		{ "CharacterSubstateType_Hit::PARRIED_HIT", (int64)CharacterSubstateType_Hit::PARRIED_HIT },
		{ "CharacterSubstateType_Hit::KICKED_HIT", (int64)CharacterSubstateType_Hit::KICKED_HIT },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_CombatSystem_CharacterSubstateType_Hit_Statics::Enum_MetaDataParams[] = {
		{ "BLOCK_HIT.Name", "CharacterSubstateType_Hit::BLOCK_HIT" },
		{ "BlueprintType", "true" },
		{ "DEFAULT_HIT.Name", "CharacterSubstateType_Hit::DEFAULT_HIT" },
		{ "KICKED_HIT.Name", "CharacterSubstateType_Hit::KICKED_HIT" },
		{ "ModuleRelativePath", "Public/Actions/CSCharacterState_Hit.h" },
		{ "PARRIED_HIT.Name", "CharacterSubstateType_Hit::PARRIED_HIT" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_CombatSystem_CharacterSubstateType_Hit_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_CombatSystem,
		nullptr,
		"CharacterSubstateType_Hit",
		"CharacterSubstateType_Hit",
		Z_Construct_UEnum_CombatSystem_CharacterSubstateType_Hit_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_CombatSystem_CharacterSubstateType_Hit_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_CombatSystem_CharacterSubstateType_Hit_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_CombatSystem_CharacterSubstateType_Hit_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_CombatSystem_CharacterSubstateType_Hit()
	{
		if (!Z_Registration_Info_UEnum_CharacterSubstateType_Hit.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_CharacterSubstateType_Hit.InnerSingleton, Z_Construct_UEnum_CombatSystem_CharacterSubstateType_Hit_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_CharacterSubstateType_Hit.InnerSingleton;
	}
	void UCSCharacterState_Hit::StaticRegisterNativesUCSCharacterState_Hit()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UCSCharacterState_Hit);
	UClass* Z_Construct_UClass_UCSCharacterState_Hit_NoRegister()
	{
		return UCSCharacterState_Hit::StaticClass();
	}
	struct Z_Construct_UClass_UCSCharacterState_Hit_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RecoilForce_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_RecoilForce;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DefaultHitMontage_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_DefaultHitMontage;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DefaultHitPlaySpeed_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_DefaultHitPlaySpeed;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DefaultHitRandomDeviation_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_DefaultHitRandomDeviation;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BlockHitMontage_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_BlockHitMontage;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BlockHitPlaySpeed_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_BlockHitPlaySpeed;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BlockHitRandomDeviation_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_BlockHitRandomDeviation;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ParriedHitMontage_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ParriedHitMontage;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ParriedHitPlaySpeed_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ParriedHitPlaySpeed;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ParriedHitRandomDeviation_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ParriedHitRandomDeviation;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ParriedHitDamageMultiplier_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ParriedHitDamageMultiplier;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_KickedHitMontage_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_KickedHitMontage;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_KickedHitPlaySpeed_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_KickedHitPlaySpeed;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_KickedHitRandomDeviation_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_KickedHitRandomDeviation;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HitShake_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_HitShake;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HitForceFeedback_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_HitForceFeedback;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCSCharacterState_Hit_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UCSCharacterState,
		(UObject* (*)())Z_Construct_UPackage__Script_CombatSystem,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCSCharacterState_Hit_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Actions/CSCharacterState_Hit.h" },
		{ "ModuleRelativePath", "Public/Actions/CSCharacterState_Hit.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCSCharacterState_Hit_Statics::NewProp_RecoilForce_MetaData[] = {
		{ "Category", "Hit" },
		{ "Comment", "//General Hit ===========================================================\n" },
		{ "ModuleRelativePath", "Public/Actions/CSCharacterState_Hit.h" },
		{ "ToolTip", "General Hit ===========================================================" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UCSCharacterState_Hit_Statics::NewProp_RecoilForce = { "RecoilForce", nullptr, (EPropertyFlags)0x0020080000010001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCSCharacterState_Hit, RecoilForce), METADATA_PARAMS(Z_Construct_UClass_UCSCharacterState_Hit_Statics::NewProp_RecoilForce_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCSCharacterState_Hit_Statics::NewProp_RecoilForce_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCSCharacterState_Hit_Statics::NewProp_DefaultHitMontage_MetaData[] = {
		{ "Category", "DefaultHit" },
		{ "Comment", "//Default Hit ===========================================================\n" },
		{ "ModuleRelativePath", "Public/Actions/CSCharacterState_Hit.h" },
		{ "ToolTip", "Default Hit ===========================================================" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCSCharacterState_Hit_Statics::NewProp_DefaultHitMontage = { "DefaultHitMontage", nullptr, (EPropertyFlags)0x0020080000010001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCSCharacterState_Hit, DefaultHitMontage), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UCSCharacterState_Hit_Statics::NewProp_DefaultHitMontage_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCSCharacterState_Hit_Statics::NewProp_DefaultHitMontage_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCSCharacterState_Hit_Statics::NewProp_DefaultHitPlaySpeed_MetaData[] = {
		{ "Category", "DefaultHit" },
		{ "ModuleRelativePath", "Public/Actions/CSCharacterState_Hit.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UCSCharacterState_Hit_Statics::NewProp_DefaultHitPlaySpeed = { "DefaultHitPlaySpeed", nullptr, (EPropertyFlags)0x0020080000010001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCSCharacterState_Hit, DefaultHitPlaySpeed), METADATA_PARAMS(Z_Construct_UClass_UCSCharacterState_Hit_Statics::NewProp_DefaultHitPlaySpeed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCSCharacterState_Hit_Statics::NewProp_DefaultHitPlaySpeed_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCSCharacterState_Hit_Statics::NewProp_DefaultHitRandomDeviation_MetaData[] = {
		{ "Category", "DefaultHit" },
		{ "ModuleRelativePath", "Public/Actions/CSCharacterState_Hit.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UCSCharacterState_Hit_Statics::NewProp_DefaultHitRandomDeviation = { "DefaultHitRandomDeviation", nullptr, (EPropertyFlags)0x0020080000010001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCSCharacterState_Hit, DefaultHitRandomDeviation), METADATA_PARAMS(Z_Construct_UClass_UCSCharacterState_Hit_Statics::NewProp_DefaultHitRandomDeviation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCSCharacterState_Hit_Statics::NewProp_DefaultHitRandomDeviation_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCSCharacterState_Hit_Statics::NewProp_BlockHitMontage_MetaData[] = {
		{ "Category", "BlockHit" },
		{ "Comment", "//Block Hit =============================================================\n" },
		{ "ModuleRelativePath", "Public/Actions/CSCharacterState_Hit.h" },
		{ "ToolTip", "Block Hit =============================================================" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCSCharacterState_Hit_Statics::NewProp_BlockHitMontage = { "BlockHitMontage", nullptr, (EPropertyFlags)0x0020080000010001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCSCharacterState_Hit, BlockHitMontage), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UCSCharacterState_Hit_Statics::NewProp_BlockHitMontage_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCSCharacterState_Hit_Statics::NewProp_BlockHitMontage_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCSCharacterState_Hit_Statics::NewProp_BlockHitPlaySpeed_MetaData[] = {
		{ "Category", "BlockHit" },
		{ "ModuleRelativePath", "Public/Actions/CSCharacterState_Hit.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UCSCharacterState_Hit_Statics::NewProp_BlockHitPlaySpeed = { "BlockHitPlaySpeed", nullptr, (EPropertyFlags)0x0020080000010001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCSCharacterState_Hit, BlockHitPlaySpeed), METADATA_PARAMS(Z_Construct_UClass_UCSCharacterState_Hit_Statics::NewProp_BlockHitPlaySpeed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCSCharacterState_Hit_Statics::NewProp_BlockHitPlaySpeed_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCSCharacterState_Hit_Statics::NewProp_BlockHitRandomDeviation_MetaData[] = {
		{ "Category", "BlockHit" },
		{ "ModuleRelativePath", "Public/Actions/CSCharacterState_Hit.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UCSCharacterState_Hit_Statics::NewProp_BlockHitRandomDeviation = { "BlockHitRandomDeviation", nullptr, (EPropertyFlags)0x0020080000010001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCSCharacterState_Hit, BlockHitRandomDeviation), METADATA_PARAMS(Z_Construct_UClass_UCSCharacterState_Hit_Statics::NewProp_BlockHitRandomDeviation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCSCharacterState_Hit_Statics::NewProp_BlockHitRandomDeviation_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCSCharacterState_Hit_Statics::NewProp_ParriedHitMontage_MetaData[] = {
		{ "Category", "ParriedHit" },
		{ "Comment", "//Parry hit =============================================================\n" },
		{ "ModuleRelativePath", "Public/Actions/CSCharacterState_Hit.h" },
		{ "ToolTip", "Parry hit =============================================================" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCSCharacterState_Hit_Statics::NewProp_ParriedHitMontage = { "ParriedHitMontage", nullptr, (EPropertyFlags)0x0020080000010001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCSCharacterState_Hit, ParriedHitMontage), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UCSCharacterState_Hit_Statics::NewProp_ParriedHitMontage_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCSCharacterState_Hit_Statics::NewProp_ParriedHitMontage_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCSCharacterState_Hit_Statics::NewProp_ParriedHitPlaySpeed_MetaData[] = {
		{ "Category", "ParriedHit" },
		{ "ModuleRelativePath", "Public/Actions/CSCharacterState_Hit.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UCSCharacterState_Hit_Statics::NewProp_ParriedHitPlaySpeed = { "ParriedHitPlaySpeed", nullptr, (EPropertyFlags)0x0020080000010001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCSCharacterState_Hit, ParriedHitPlaySpeed), METADATA_PARAMS(Z_Construct_UClass_UCSCharacterState_Hit_Statics::NewProp_ParriedHitPlaySpeed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCSCharacterState_Hit_Statics::NewProp_ParriedHitPlaySpeed_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCSCharacterState_Hit_Statics::NewProp_ParriedHitRandomDeviation_MetaData[] = {
		{ "Category", "ParriedHit" },
		{ "ModuleRelativePath", "Public/Actions/CSCharacterState_Hit.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UCSCharacterState_Hit_Statics::NewProp_ParriedHitRandomDeviation = { "ParriedHitRandomDeviation", nullptr, (EPropertyFlags)0x0020080000010001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCSCharacterState_Hit, ParriedHitRandomDeviation), METADATA_PARAMS(Z_Construct_UClass_UCSCharacterState_Hit_Statics::NewProp_ParriedHitRandomDeviation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCSCharacterState_Hit_Statics::NewProp_ParriedHitRandomDeviation_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCSCharacterState_Hit_Statics::NewProp_ParriedHitDamageMultiplier_MetaData[] = {
		{ "Category", "ParriedHit" },
		{ "ModuleRelativePath", "Public/Actions/CSCharacterState_Hit.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UCSCharacterState_Hit_Statics::NewProp_ParriedHitDamageMultiplier = { "ParriedHitDamageMultiplier", nullptr, (EPropertyFlags)0x0020080000010001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCSCharacterState_Hit, ParriedHitDamageMultiplier), METADATA_PARAMS(Z_Construct_UClass_UCSCharacterState_Hit_Statics::NewProp_ParriedHitDamageMultiplier_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCSCharacterState_Hit_Statics::NewProp_ParriedHitDamageMultiplier_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCSCharacterState_Hit_Statics::NewProp_KickedHitMontage_MetaData[] = {
		{ "Category", "KickedHit" },
		{ "Comment", "//Parry hit =============================================================\n" },
		{ "ModuleRelativePath", "Public/Actions/CSCharacterState_Hit.h" },
		{ "ToolTip", "Parry hit =============================================================" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCSCharacterState_Hit_Statics::NewProp_KickedHitMontage = { "KickedHitMontage", nullptr, (EPropertyFlags)0x0020080000010001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCSCharacterState_Hit, KickedHitMontage), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UCSCharacterState_Hit_Statics::NewProp_KickedHitMontage_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCSCharacterState_Hit_Statics::NewProp_KickedHitMontage_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCSCharacterState_Hit_Statics::NewProp_KickedHitPlaySpeed_MetaData[] = {
		{ "Category", "KickedHit" },
		{ "ModuleRelativePath", "Public/Actions/CSCharacterState_Hit.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UCSCharacterState_Hit_Statics::NewProp_KickedHitPlaySpeed = { "KickedHitPlaySpeed", nullptr, (EPropertyFlags)0x0020080000010001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCSCharacterState_Hit, KickedHitPlaySpeed), METADATA_PARAMS(Z_Construct_UClass_UCSCharacterState_Hit_Statics::NewProp_KickedHitPlaySpeed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCSCharacterState_Hit_Statics::NewProp_KickedHitPlaySpeed_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCSCharacterState_Hit_Statics::NewProp_KickedHitRandomDeviation_MetaData[] = {
		{ "Category", "KickedHit" },
		{ "ModuleRelativePath", "Public/Actions/CSCharacterState_Hit.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UCSCharacterState_Hit_Statics::NewProp_KickedHitRandomDeviation = { "KickedHitRandomDeviation", nullptr, (EPropertyFlags)0x0020080000010001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCSCharacterState_Hit, KickedHitRandomDeviation), METADATA_PARAMS(Z_Construct_UClass_UCSCharacterState_Hit_Statics::NewProp_KickedHitRandomDeviation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCSCharacterState_Hit_Statics::NewProp_KickedHitRandomDeviation_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCSCharacterState_Hit_Statics::NewProp_HitShake_MetaData[] = {
		{ "Category", "Hit" },
		{ "ModuleRelativePath", "Public/Actions/CSCharacterState_Hit.h" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UCSCharacterState_Hit_Statics::NewProp_HitShake = { "HitShake", nullptr, (EPropertyFlags)0x0024080000010001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCSCharacterState_Hit, HitShake), Z_Construct_UClass_UCameraShakeBase_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_UCSCharacterState_Hit_Statics::NewProp_HitShake_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCSCharacterState_Hit_Statics::NewProp_HitShake_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCSCharacterState_Hit_Statics::NewProp_HitForceFeedback_MetaData[] = {
		{ "Category", "Hit" },
		{ "ModuleRelativePath", "Public/Actions/CSCharacterState_Hit.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCSCharacterState_Hit_Statics::NewProp_HitForceFeedback = { "HitForceFeedback", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCSCharacterState_Hit, HitForceFeedback), Z_Construct_UClass_UForceFeedbackEffect_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UCSCharacterState_Hit_Statics::NewProp_HitForceFeedback_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCSCharacterState_Hit_Statics::NewProp_HitForceFeedback_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UCSCharacterState_Hit_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCSCharacterState_Hit_Statics::NewProp_RecoilForce,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCSCharacterState_Hit_Statics::NewProp_DefaultHitMontage,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCSCharacterState_Hit_Statics::NewProp_DefaultHitPlaySpeed,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCSCharacterState_Hit_Statics::NewProp_DefaultHitRandomDeviation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCSCharacterState_Hit_Statics::NewProp_BlockHitMontage,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCSCharacterState_Hit_Statics::NewProp_BlockHitPlaySpeed,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCSCharacterState_Hit_Statics::NewProp_BlockHitRandomDeviation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCSCharacterState_Hit_Statics::NewProp_ParriedHitMontage,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCSCharacterState_Hit_Statics::NewProp_ParriedHitPlaySpeed,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCSCharacterState_Hit_Statics::NewProp_ParriedHitRandomDeviation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCSCharacterState_Hit_Statics::NewProp_ParriedHitDamageMultiplier,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCSCharacterState_Hit_Statics::NewProp_KickedHitMontage,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCSCharacterState_Hit_Statics::NewProp_KickedHitPlaySpeed,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCSCharacterState_Hit_Statics::NewProp_KickedHitRandomDeviation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCSCharacterState_Hit_Statics::NewProp_HitShake,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCSCharacterState_Hit_Statics::NewProp_HitForceFeedback,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCSCharacterState_Hit_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCSCharacterState_Hit>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UCSCharacterState_Hit_Statics::ClassParams = {
		&UCSCharacterState_Hit::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UCSCharacterState_Hit_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UCSCharacterState_Hit_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UCSCharacterState_Hit_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UCSCharacterState_Hit_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UCSCharacterState_Hit()
	{
		if (!Z_Registration_Info_UClass_UCSCharacterState_Hit.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCSCharacterState_Hit.OuterSingleton, Z_Construct_UClass_UCSCharacterState_Hit_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UCSCharacterState_Hit.OuterSingleton;
	}
	template<> COMBATSYSTEM_API UClass* StaticClass<UCSCharacterState_Hit>()
	{
		return UCSCharacterState_Hit::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCSCharacterState_Hit);
	struct Z_CompiledInDeferFile_FID_CombatSystem_Source_CombatSystem_Public_Actions_CSCharacterState_Hit_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_CombatSystem_Source_CombatSystem_Public_Actions_CSCharacterState_Hit_h_Statics::EnumInfo[] = {
		{ CharacterSubstateType_Hit_StaticEnum, TEXT("CharacterSubstateType_Hit"), &Z_Registration_Info_UEnum_CharacterSubstateType_Hit, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1331367824U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_CombatSystem_Source_CombatSystem_Public_Actions_CSCharacterState_Hit_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UCSCharacterState_Hit, UCSCharacterState_Hit::StaticClass, TEXT("UCSCharacterState_Hit"), &Z_Registration_Info_UClass_UCSCharacterState_Hit, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCSCharacterState_Hit), 3155145699U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_CombatSystem_Source_CombatSystem_Public_Actions_CSCharacterState_Hit_h_2726590160(TEXT("/Script/CombatSystem"),
		Z_CompiledInDeferFile_FID_CombatSystem_Source_CombatSystem_Public_Actions_CSCharacterState_Hit_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_CombatSystem_Source_CombatSystem_Public_Actions_CSCharacterState_Hit_h_Statics::ClassInfo),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_CombatSystem_Source_CombatSystem_Public_Actions_CSCharacterState_Hit_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_CombatSystem_Source_CombatSystem_Public_Actions_CSCharacterState_Hit_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
