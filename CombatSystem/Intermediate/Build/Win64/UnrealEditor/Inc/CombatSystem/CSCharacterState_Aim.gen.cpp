// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CombatSystem/Public/Actions/CSCharacterState_Aim.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCSCharacterState_Aim() {}
// Cross Module References
	COMBATSYSTEM_API UEnum* Z_Construct_UEnum_CombatSystem_CharacterSubstateType_Aim();
	UPackage* Z_Construct_UPackage__Script_CombatSystem();
	COMBATSYSTEM_API UClass* Z_Construct_UClass_UCSCharacterState_Aim_NoRegister();
	COMBATSYSTEM_API UClass* Z_Construct_UClass_UCSCharacterState_Aim();
	COMBATSYSTEM_API UClass* Z_Construct_UClass_UCSCharacterState();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_CharacterSubstateType_Aim;
	static UEnum* CharacterSubstateType_Aim_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_CharacterSubstateType_Aim.OuterSingleton)
		{
			Z_Registration_Info_UEnum_CharacterSubstateType_Aim.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_CombatSystem_CharacterSubstateType_Aim, Z_Construct_UPackage__Script_CombatSystem(), TEXT("CharacterSubstateType_Aim"));
		}
		return Z_Registration_Info_UEnum_CharacterSubstateType_Aim.OuterSingleton;
	}
	template<> COMBATSYSTEM_API UEnum* StaticEnum<CharacterSubstateType_Aim>()
	{
		return CharacterSubstateType_Aim_StaticEnum();
	}
	struct Z_Construct_UEnum_CombatSystem_CharacterSubstateType_Aim_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_CombatSystem_CharacterSubstateType_Aim_Statics::Enumerators[] = {
		{ "CharacterSubstateType_Aim::IDLE_AIM", (int64)CharacterSubstateType_Aim::IDLE_AIM },
		{ "CharacterSubstateType_Aim::RECOIL_AIM", (int64)CharacterSubstateType_Aim::RECOIL_AIM },
		{ "CharacterSubstateType_Aim::SHOOT_AIM", (int64)CharacterSubstateType_Aim::SHOOT_AIM },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_CombatSystem_CharacterSubstateType_Aim_Statics::Enum_MetaDataParams[] = {
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
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_CombatSystem_CharacterSubstateType_Aim_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_CombatSystem,
		nullptr,
		"CharacterSubstateType_Aim",
		"CharacterSubstateType_Aim",
		Z_Construct_UEnum_CombatSystem_CharacterSubstateType_Aim_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_CombatSystem_CharacterSubstateType_Aim_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_CombatSystem_CharacterSubstateType_Aim_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_CombatSystem_CharacterSubstateType_Aim_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_CombatSystem_CharacterSubstateType_Aim()
	{
		if (!Z_Registration_Info_UEnum_CharacterSubstateType_Aim.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_CharacterSubstateType_Aim.InnerSingleton, Z_Construct_UEnum_CombatSystem_CharacterSubstateType_Aim_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_CharacterSubstateType_Aim.InnerSingleton;
	}
	void UCSCharacterState_Aim::StaticRegisterNativesUCSCharacterState_Aim()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UCSCharacterState_Aim);
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
		if (!Z_Registration_Info_UClass_UCSCharacterState_Aim.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCSCharacterState_Aim.OuterSingleton, Z_Construct_UClass_UCSCharacterState_Aim_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UCSCharacterState_Aim.OuterSingleton;
	}
	template<> COMBATSYSTEM_API UClass* StaticClass<UCSCharacterState_Aim>()
	{
		return UCSCharacterState_Aim::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCSCharacterState_Aim);
	struct Z_CompiledInDeferFile_FID_CombatSystem_Source_CombatSystem_Public_Actions_CSCharacterState_Aim_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_CombatSystem_Source_CombatSystem_Public_Actions_CSCharacterState_Aim_h_Statics::EnumInfo[] = {
		{ CharacterSubstateType_Aim_StaticEnum, TEXT("CharacterSubstateType_Aim"), &Z_Registration_Info_UEnum_CharacterSubstateType_Aim, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 4288492545U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_CombatSystem_Source_CombatSystem_Public_Actions_CSCharacterState_Aim_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UCSCharacterState_Aim, UCSCharacterState_Aim::StaticClass, TEXT("UCSCharacterState_Aim"), &Z_Registration_Info_UClass_UCSCharacterState_Aim, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCSCharacterState_Aim), 849756147U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_CombatSystem_Source_CombatSystem_Public_Actions_CSCharacterState_Aim_h_2107645253(TEXT("/Script/CombatSystem"),
		Z_CompiledInDeferFile_FID_CombatSystem_Source_CombatSystem_Public_Actions_CSCharacterState_Aim_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_CombatSystem_Source_CombatSystem_Public_Actions_CSCharacterState_Aim_h_Statics::ClassInfo),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_CombatSystem_Source_CombatSystem_Public_Actions_CSCharacterState_Aim_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_CombatSystem_Source_CombatSystem_Public_Actions_CSCharacterState_Aim_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
