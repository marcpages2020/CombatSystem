// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CombatSystem/Public/Actions/CSCharacterState.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCSCharacterState() {}
// Cross Module References
	COMBATSYSTEM_API UEnum* Z_Construct_UEnum_CombatSystem_CharacterStateType();
	UPackage* Z_Construct_UPackage__Script_CombatSystem();
	COMBATSYSTEM_API UClass* Z_Construct_UClass_UCSCharacterState_NoRegister();
	COMBATSYSTEM_API UClass* Z_Construct_UClass_UCSCharacterState();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_CharacterStateType;
	static UEnum* CharacterStateType_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_CharacterStateType.OuterSingleton)
		{
			Z_Registration_Info_UEnum_CharacterStateType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_CombatSystem_CharacterStateType, Z_Construct_UPackage__Script_CombatSystem(), TEXT("CharacterStateType"));
		}
		return Z_Registration_Info_UEnum_CharacterStateType.OuterSingleton;
	}
	template<> COMBATSYSTEM_API UEnum* StaticEnum<CharacterStateType>()
	{
		return CharacterStateType_StaticEnum();
	}
	struct Z_Construct_UEnum_CombatSystem_CharacterStateType_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_CombatSystem_CharacterStateType_Statics::Enumerators[] = {
		{ "CharacterStateType::NONE", (int64)CharacterStateType::NONE },
		{ "CharacterStateType::DEFAULT", (int64)CharacterStateType::DEFAULT },
		{ "CharacterStateType::ATTACK", (int64)CharacterStateType::ATTACK },
		{ "CharacterStateType::DODGE", (int64)CharacterStateType::DODGE },
		{ "CharacterStateType::BLOCK", (int64)CharacterStateType::BLOCK },
		{ "CharacterStateType::PARRY", (int64)CharacterStateType::PARRY },
		{ "CharacterStateType::COUNTER", (int64)CharacterStateType::COUNTER },
		{ "CharacterStateType::KICK", (int64)CharacterStateType::KICK },
		{ "CharacterStateType::AIM", (int64)CharacterStateType::AIM },
		{ "CharacterStateType::HIT", (int64)CharacterStateType::HIT },
		{ "CharacterStateType::DEAD", (int64)CharacterStateType::DEAD },
		{ "CharacterStateType::MAX_STATES", (int64)CharacterStateType::MAX_STATES },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_CombatSystem_CharacterStateType_Statics::Enum_MetaDataParams[] = {
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
		{ "HIT.Comment", "//SHOOT    UMETA(DisplayName = \"Shoot\"),\n" },
		{ "HIT.DisplayName", "Hit" },
		{ "HIT.Name", "CharacterStateType::HIT" },
		{ "HIT.ToolTip", "SHOOT    UMETA(DisplayName = \"Shoot\")," },
		{ "KICK.DisplayName", "Kick" },
		{ "KICK.Name", "CharacterStateType::KICK" },
		{ "MAX_STATES.Name", "CharacterStateType::MAX_STATES" },
		{ "ModuleRelativePath", "Public/Actions/CSCharacterState.h" },
		{ "NONE.Name", "CharacterStateType::NONE" },
		{ "PARRY.DisplayName", "Parry" },
		{ "PARRY.Name", "CharacterStateType::PARRY" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_CombatSystem_CharacterStateType_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_CombatSystem,
		nullptr,
		"CharacterStateType",
		"CharacterStateType",
		Z_Construct_UEnum_CombatSystem_CharacterStateType_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_CombatSystem_CharacterStateType_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_CombatSystem_CharacterStateType_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_CombatSystem_CharacterStateType_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_CombatSystem_CharacterStateType()
	{
		if (!Z_Registration_Info_UEnum_CharacterStateType.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_CharacterStateType.InnerSingleton, Z_Construct_UEnum_CombatSystem_CharacterStateType_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_CharacterStateType.InnerSingleton;
	}
	void UCSCharacterState::StaticRegisterNativesUCSCharacterState()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UCSCharacterState);
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
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UCSCharacterState_Statics::NewProp_StateType = { "StateType", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCSCharacterState, StateType), Z_Construct_UEnum_CombatSystem_CharacterStateType, METADATA_PARAMS(Z_Construct_UClass_UCSCharacterState_Statics::NewProp_StateType_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCSCharacterState_Statics::NewProp_StateType_MetaData)) }; // 3402011759
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
		if (!Z_Registration_Info_UClass_UCSCharacterState.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCSCharacterState.OuterSingleton, Z_Construct_UClass_UCSCharacterState_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UCSCharacterState.OuterSingleton;
	}
	template<> COMBATSYSTEM_API UClass* StaticClass<UCSCharacterState>()
	{
		return UCSCharacterState::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCSCharacterState);
	struct Z_CompiledInDeferFile_FID_CombatSystem_Source_CombatSystem_Public_Actions_CSCharacterState_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_CombatSystem_Source_CombatSystem_Public_Actions_CSCharacterState_h_Statics::EnumInfo[] = {
		{ CharacterStateType_StaticEnum, TEXT("CharacterStateType"), &Z_Registration_Info_UEnum_CharacterStateType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3402011759U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_CombatSystem_Source_CombatSystem_Public_Actions_CSCharacterState_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UCSCharacterState, UCSCharacterState::StaticClass, TEXT("UCSCharacterState"), &Z_Registration_Info_UClass_UCSCharacterState, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCSCharacterState), 2006862289U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_CombatSystem_Source_CombatSystem_Public_Actions_CSCharacterState_h_1710674696(TEXT("/Script/CombatSystem"),
		Z_CompiledInDeferFile_FID_CombatSystem_Source_CombatSystem_Public_Actions_CSCharacterState_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_CombatSystem_Source_CombatSystem_Public_Actions_CSCharacterState_h_Statics::ClassInfo),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_CombatSystem_Source_CombatSystem_Public_Actions_CSCharacterState_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_CombatSystem_Source_CombatSystem_Public_Actions_CSCharacterState_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
