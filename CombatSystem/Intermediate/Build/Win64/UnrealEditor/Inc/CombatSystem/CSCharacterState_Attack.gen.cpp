// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CombatSystem/Public/Actions/CSCharacterState_Attack.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCSCharacterState_Attack() {}
// Cross Module References
	COMBATSYSTEM_API UEnum* Z_Construct_UEnum_CombatSystem_CharacterSubstateType_Attack();
	UPackage* Z_Construct_UPackage__Script_CombatSystem();
	COMBATSYSTEM_API UClass* Z_Construct_UClass_UCSCharacterState_Attack_NoRegister();
	COMBATSYSTEM_API UClass* Z_Construct_UClass_UCSCharacterState_Attack();
	COMBATSYSTEM_API UClass* Z_Construct_UClass_UCSCharacterState();
// End Cross Module References
	static UEnum* CharacterSubstateType_Attack_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_CombatSystem_CharacterSubstateType_Attack, Z_Construct_UPackage__Script_CombatSystem(), TEXT("CharacterSubstateType_Attack"));
		}
		return Singleton;
	}
	template<> COMBATSYSTEM_API UEnum* StaticEnum<CharacterSubstateType_Attack>()
	{
		return CharacterSubstateType_Attack_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_CharacterSubstateType_Attack(CharacterSubstateType_Attack_StaticEnum, TEXT("/Script/CombatSystem"), TEXT("CharacterSubstateType_Attack"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_CombatSystem_CharacterSubstateType_Attack_Hash() { return 2174859096U; }
	UEnum* Z_Construct_UEnum_CombatSystem_CharacterSubstateType_Attack()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_CombatSystem();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("CharacterSubstateType_Attack"), 0, Get_Z_Construct_UEnum_CombatSystem_CharacterSubstateType_Attack_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UECodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "CharacterSubstateType_Attack::DEFAULT_ATTACK", (int64)CharacterSubstateType_Attack::DEFAULT_ATTACK },
				{ "CharacterSubstateType_Attack::SPIRAL_ATTACK", (int64)CharacterSubstateType_Attack::SPIRAL_ATTACK },
				{ "CharacterSubstateType_Attack::ROLLING_ATTACK", (int64)CharacterSubstateType_Attack::ROLLING_ATTACK },
			};
#if WITH_METADATA
			const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "Comment", "/**\n * \n */" },
				{ "DEFAULT_ATTACK.Comment", "/**\n * \n */" },
				{ "DEFAULT_ATTACK.Name", "CharacterSubstateType_Attack::DEFAULT_ATTACK" },
				{ "ModuleRelativePath", "Public/Actions/CSCharacterState_Attack.h" },
				{ "ROLLING_ATTACK.Comment", "/**\n * \n */" },
				{ "ROLLING_ATTACK.Name", "CharacterSubstateType_Attack::ROLLING_ATTACK" },
				{ "SPIRAL_ATTACK.Comment", "/**\n * \n */" },
				{ "SPIRAL_ATTACK.Name", "CharacterSubstateType_Attack::SPIRAL_ATTACK" },
			};
#endif
			static const UECodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_CombatSystem,
				nullptr,
				"CharacterSubstateType_Attack",
				"CharacterSubstateType_Attack",
				Enumerators,
				UE_ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				EEnumFlags::None,
				UECodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::EnumClass,
				METADATA_PARAMS(Enum_MetaDataParams, UE_ARRAY_COUNT(Enum_MetaDataParams))
			};
			UECodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	void UCSCharacterState_Attack::StaticRegisterNativesUCSCharacterState_Attack()
	{
	}
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
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UCSCharacterState_Attack_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCSCharacterState_Attack_Statics::NewProp_SpiralAttackMovementSpeed,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCSCharacterState_Attack_Statics::NewProp_RollingAttackMovementSpeed,
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
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UECodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UCSCharacterState_Attack_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UCSCharacterState_Attack, 352459431);
	template<> COMBATSYSTEM_API UClass* StaticClass<UCSCharacterState_Attack>()
	{
		return UCSCharacterState_Attack::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UCSCharacterState_Attack(Z_Construct_UClass_UCSCharacterState_Attack, &UCSCharacterState_Attack::StaticClass, TEXT("/Script/CombatSystem"), TEXT("UCSCharacterState_Attack"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCSCharacterState_Attack);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
