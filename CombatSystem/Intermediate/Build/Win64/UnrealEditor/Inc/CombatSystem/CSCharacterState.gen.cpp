// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CombatSystem/Public/Actions/CSCharacterState.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCSCharacterState() {}
// Cross Module References
	COMBATSYSTEM_API UEnum* Z_Construct_UEnum_CombatSystem_CharacterStateType();
	UPackage* Z_Construct_UPackage__Script_CombatSystem();
	COMBATSYSTEM_API UClass* Z_Construct_UClass_UCSCharacterState_NoRegister();
	COMBATSYSTEM_API UClass* Z_Construct_UClass_UCSCharacterState();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
// End Cross Module References
	static UEnum* CharacterStateType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_CombatSystem_CharacterStateType, Z_Construct_UPackage__Script_CombatSystem(), TEXT("CharacterStateType"));
		}
		return Singleton;
	}
	template<> COMBATSYSTEM_API UEnum* StaticEnum<CharacterStateType>()
	{
		return CharacterStateType_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_CharacterStateType(CharacterStateType_StaticEnum, TEXT("/Script/CombatSystem"), TEXT("CharacterStateType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_CombatSystem_CharacterStateType_Hash() { return 861557481U; }
	UEnum* Z_Construct_UEnum_CombatSystem_CharacterStateType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_CombatSystem();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("CharacterStateType"), 0, Get_Z_Construct_UEnum_CombatSystem_CharacterStateType_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UECodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "CharacterStateType::NONE", (int64)CharacterStateType::NONE },
				{ "CharacterStateType::DEFAULT", (int64)CharacterStateType::DEFAULT },
				{ "CharacterStateType::ATTACK", (int64)CharacterStateType::ATTACK },
				{ "CharacterStateType::DODGE", (int64)CharacterStateType::DODGE },
				{ "CharacterStateType::BLOCK", (int64)CharacterStateType::BLOCK },
				{ "CharacterStateType::PARRY", (int64)CharacterStateType::PARRY },
				{ "CharacterStateType::COUNTER", (int64)CharacterStateType::COUNTER },
				{ "CharacterStateType::KICK", (int64)CharacterStateType::KICK },
				{ "CharacterStateType::AIM", (int64)CharacterStateType::AIM },
				{ "CharacterStateType::SHOOT", (int64)CharacterStateType::SHOOT },
				{ "CharacterStateType::HIT", (int64)CharacterStateType::HIT },
				{ "CharacterStateType::DEAD", (int64)CharacterStateType::DEAD },
				{ "CharacterStateType::MAX_STATES", (int64)CharacterStateType::MAX_STATES },
			};
#if WITH_METADATA
			const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "AIM.DisplayName", "Aim" },
				{ "AIM.Name", "CharacterStateType::AIM" },
				{ "ATTACK.DisplayName", "Attack" },
				{ "ATTACK.Name", "CharacterStateType::ATTACK" },
				{ "BLOCK.DisplayName", "Block" },
				{ "BLOCK.Name", "CharacterStateType::BLOCK" },
				{ "BlueprintType", "true" },
				{ "COUNTER.DisplayName", "Counter" },
				{ "COUNTER.Name", "CharacterStateType::COUNTER" },
				{ "DEAD.DisplayName", "Dead" },
				{ "DEAD.Name", "CharacterStateType::DEAD" },
				{ "DEFAULT.DisplayName", "Default" },
				{ "DEFAULT.Name", "CharacterStateType::DEFAULT" },
				{ "DODGE.DisplayName", "Dodge" },
				{ "DODGE.Name", "CharacterStateType::DODGE" },
				{ "HIT.DisplayName", "Hit" },
				{ "HIT.Name", "CharacterStateType::HIT" },
				{ "KICK.DisplayName", "Kick" },
				{ "KICK.Name", "CharacterStateType::KICK" },
				{ "MAX_STATES.Name", "CharacterStateType::MAX_STATES" },
				{ "ModuleRelativePath", "Public/Actions/CSCharacterState.h" },
				{ "NONE.Name", "CharacterStateType::NONE" },
				{ "PARRY.DisplayName", "Parry" },
				{ "PARRY.Name", "CharacterStateType::PARRY" },
				{ "SHOOT.DisplayName", "Shoot" },
				{ "SHOOT.Name", "CharacterStateType::SHOOT" },
			};
#endif
			static const UECodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_CombatSystem,
				nullptr,
				"CharacterStateType",
				"CharacterStateType",
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
	void UCSCharacterState::StaticRegisterNativesUCSCharacterState()
	{
	}
	UClass* Z_Construct_UClass_UCSCharacterState_NoRegister()
	{
		return UCSCharacterState::StaticClass();
	}
	struct Z_Construct_UClass_UCSCharacterState_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_StateType_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StateType_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_StateType;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SubstateType_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_SubstateType;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCSCharacterState_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_CombatSystem,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCSCharacterState_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "Actions/CSCharacterState.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Actions/CSCharacterState.h" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UCSCharacterState_Statics::NewProp_StateType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCSCharacterState_Statics::NewProp_StateType_MetaData[] = {
		{ "Category", "Action" },
		{ "ModuleRelativePath", "Public/Actions/CSCharacterState.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UCSCharacterState_Statics::NewProp_StateType = { "StateType", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCSCharacterState, StateType), Z_Construct_UEnum_CombatSystem_CharacterStateType, METADATA_PARAMS(Z_Construct_UClass_UCSCharacterState_Statics::NewProp_StateType_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCSCharacterState_Statics::NewProp_StateType_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCSCharacterState_Statics::NewProp_SubstateType_MetaData[] = {
		{ "Category", "Action" },
		{ "ModuleRelativePath", "Public/Actions/CSCharacterState.h" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UCSCharacterState_Statics::NewProp_SubstateType = { "SubstateType", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCSCharacterState, SubstateType), nullptr, METADATA_PARAMS(Z_Construct_UClass_UCSCharacterState_Statics::NewProp_SubstateType_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCSCharacterState_Statics::NewProp_SubstateType_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UCSCharacterState_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCSCharacterState_Statics::NewProp_StateType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCSCharacterState_Statics::NewProp_StateType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCSCharacterState_Statics::NewProp_SubstateType,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCSCharacterState_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCSCharacterState>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UCSCharacterState_Statics::ClassParams = {
		&UCSCharacterState::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UCSCharacterState_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UCSCharacterState_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UCSCharacterState_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UCSCharacterState_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UCSCharacterState()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UECodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UCSCharacterState_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UCSCharacterState, 2012551330);
	template<> COMBATSYSTEM_API UClass* StaticClass<UCSCharacterState>()
	{
		return UCSCharacterState::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UCSCharacterState(Z_Construct_UClass_UCSCharacterState, &UCSCharacterState::StaticClass, TEXT("/Script/CombatSystem"), TEXT("UCSCharacterState"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCSCharacterState);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
