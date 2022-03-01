// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CombatSystem/Public/Actions/CSCharacterState_Aim.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCSCharacterState_Aim() {}
// Cross Module References
	COMBATSYSTEM_API UEnum* Z_Construct_UEnum_CombatSystem_CharacterSubstateType_Aim();
	UPackage* Z_Construct_UPackage__Script_CombatSystem();
	COMBATSYSTEM_API UClass* Z_Construct_UClass_UCSCharacterState_Aim_NoRegister();
	COMBATSYSTEM_API UClass* Z_Construct_UClass_UCSCharacterState_Aim();
	COMBATSYSTEM_API UClass* Z_Construct_UClass_UCSCharacterState();
// End Cross Module References
	static UEnum* CharacterSubstateType_Aim_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_CombatSystem_CharacterSubstateType_Aim, Z_Construct_UPackage__Script_CombatSystem(), TEXT("CharacterSubstateType_Aim"));
		}
		return Singleton;
	}
	template<> COMBATSYSTEM_API UEnum* StaticEnum<CharacterSubstateType_Aim>()
	{
		return CharacterSubstateType_Aim_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_CharacterSubstateType_Aim(CharacterSubstateType_Aim_StaticEnum, TEXT("/Script/CombatSystem"), TEXT("CharacterSubstateType_Aim"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_CombatSystem_CharacterSubstateType_Aim_Hash() { return 606148924U; }
	UEnum* Z_Construct_UEnum_CombatSystem_CharacterSubstateType_Aim()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_CombatSystem();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("CharacterSubstateType_Aim"), 0, Get_Z_Construct_UEnum_CombatSystem_CharacterSubstateType_Aim_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UECodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "CharacterSubstateType_Aim::IDLE_AIM", (int64)CharacterSubstateType_Aim::IDLE_AIM },
				{ "CharacterSubstateType_Aim::RECOIL_AIM", (int64)CharacterSubstateType_Aim::RECOIL_AIM },
				{ "CharacterSubstateType_Aim::SHOOT_AIM", (int64)CharacterSubstateType_Aim::SHOOT_AIM },
			};
#if WITH_METADATA
			const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "IDLE_AIM.DisplayName", "Idle Aim" },
				{ "IDLE_AIM.Name", "CharacterSubstateType_Aim::IDLE_AIM" },
				{ "ModuleRelativePath", "Public/Actions/CSCharacterState_Aim.h" },
				{ "RECOIL_AIM.DisplayName", "Recoil Aim" },
				{ "RECOIL_AIM.Name", "CharacterSubstateType_Aim::RECOIL_AIM" },
				{ "SHOOT_AIM.DisplayName", "Shoot Aim" },
				{ "SHOOT_AIM.Name", "CharacterSubstateType_Aim::SHOOT_AIM" },
			};
#endif
			static const UECodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_CombatSystem,
				nullptr,
				"CharacterSubstateType_Aim",
				"CharacterSubstateType_Aim",
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
	void UCSCharacterState_Aim::StaticRegisterNativesUCSCharacterState_Aim()
	{
	}
	UClass* Z_Construct_UClass_UCSCharacterState_Aim_NoRegister()
	{
		return UCSCharacterState_Aim::StaticClass();
	}
	struct Z_Construct_UClass_UCSCharacterState_Aim_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCSCharacterState_Aim_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UCSCharacterState,
		(UObject* (*)())Z_Construct_UPackage__Script_CombatSystem,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCSCharacterState_Aim_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "Actions/CSCharacterState_Aim.h" },
		{ "ModuleRelativePath", "Public/Actions/CSCharacterState_Aim.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCSCharacterState_Aim_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCSCharacterState_Aim>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UCSCharacterState_Aim_Statics::ClassParams = {
		&UCSCharacterState_Aim::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UCSCharacterState_Aim_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UCSCharacterState_Aim_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UCSCharacterState_Aim()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UECodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UCSCharacterState_Aim_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UCSCharacterState_Aim, 3638552893);
	template<> COMBATSYSTEM_API UClass* StaticClass<UCSCharacterState_Aim>()
	{
		return UCSCharacterState_Aim::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UCSCharacterState_Aim(Z_Construct_UClass_UCSCharacterState_Aim, &UCSCharacterState_Aim::StaticClass, TEXT("/Script/CombatSystem"), TEXT("UCSCharacterState_Aim"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCSCharacterState_Aim);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
