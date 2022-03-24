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
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	ENGINE_API UClass* Z_Construct_UClass_UCameraShakeBase_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UForceFeedbackEffect_NoRegister();
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
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RecoiledAimShake_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_RecoiledAimShake;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AimForceFeedback_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_AimForceFeedback;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ShootShake_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_ShootShake;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ShootForceFeedback_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ShootForceFeedback;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
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
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCSCharacterState_Aim_Statics::NewProp_RecoiledAimShake_MetaData[] = {
		{ "Category", "Aim" },
		{ "Comment", "//Aim\n" },
		{ "ModuleRelativePath", "Public/Actions/CSCharacterState_Aim.h" },
		{ "ToolTip", "Aim" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UCSCharacterState_Aim_Statics::NewProp_RecoiledAimShake = { "RecoiledAimShake", nullptr, (EPropertyFlags)0x0024080000000001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCSCharacterState_Aim, RecoiledAimShake), Z_Construct_UClass_UCameraShakeBase_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_UCSCharacterState_Aim_Statics::NewProp_RecoiledAimShake_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCSCharacterState_Aim_Statics::NewProp_RecoiledAimShake_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCSCharacterState_Aim_Statics::NewProp_AimForceFeedback_MetaData[] = {
		{ "Category", "Aim" },
		{ "ModuleRelativePath", "Public/Actions/CSCharacterState_Aim.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCSCharacterState_Aim_Statics::NewProp_AimForceFeedback = { "AimForceFeedback", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCSCharacterState_Aim, AimForceFeedback), Z_Construct_UClass_UForceFeedbackEffect_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UCSCharacterState_Aim_Statics::NewProp_AimForceFeedback_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCSCharacterState_Aim_Statics::NewProp_AimForceFeedback_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCSCharacterState_Aim_Statics::NewProp_ShootShake_MetaData[] = {
		{ "Category", "Shoot" },
		{ "Comment", "//Shoot\n" },
		{ "ModuleRelativePath", "Public/Actions/CSCharacterState_Aim.h" },
		{ "ToolTip", "Shoot" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UCSCharacterState_Aim_Statics::NewProp_ShootShake = { "ShootShake", nullptr, (EPropertyFlags)0x0024080000000001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCSCharacterState_Aim, ShootShake), Z_Construct_UClass_UCameraShakeBase_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_UCSCharacterState_Aim_Statics::NewProp_ShootShake_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCSCharacterState_Aim_Statics::NewProp_ShootShake_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCSCharacterState_Aim_Statics::NewProp_ShootForceFeedback_MetaData[] = {
		{ "Category", "Shoot" },
		{ "ModuleRelativePath", "Public/Actions/CSCharacterState_Aim.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCSCharacterState_Aim_Statics::NewProp_ShootForceFeedback = { "ShootForceFeedback", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCSCharacterState_Aim, ShootForceFeedback), Z_Construct_UClass_UForceFeedbackEffect_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UCSCharacterState_Aim_Statics::NewProp_ShootForceFeedback_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCSCharacterState_Aim_Statics::NewProp_ShootForceFeedback_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UCSCharacterState_Aim_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCSCharacterState_Aim_Statics::NewProp_RecoiledAimShake,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCSCharacterState_Aim_Statics::NewProp_AimForceFeedback,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCSCharacterState_Aim_Statics::NewProp_ShootShake,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCSCharacterState_Aim_Statics::NewProp_ShootForceFeedback,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCSCharacterState_Aim_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCSCharacterState_Aim>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UCSCharacterState_Aim_Statics::ClassParams = {
		&UCSCharacterState_Aim::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UCSCharacterState_Aim_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UCSCharacterState_Aim_Statics::PropPointers),
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
		{ Z_Construct_UClass_UCSCharacterState_Aim, UCSCharacterState_Aim::StaticClass, TEXT("UCSCharacterState_Aim"), &Z_Registration_Info_UClass_UCSCharacterState_Aim, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCSCharacterState_Aim), 2554068943U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_CombatSystem_Source_CombatSystem_Public_Actions_CSCharacterState_Aim_h_3232757958(TEXT("/Script/CombatSystem"),
		Z_CompiledInDeferFile_FID_CombatSystem_Source_CombatSystem_Public_Actions_CSCharacterState_Aim_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_CombatSystem_Source_CombatSystem_Public_Actions_CSCharacterState_Aim_h_Statics::ClassInfo),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_CombatSystem_Source_CombatSystem_Public_Actions_CSCharacterState_Aim_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_CombatSystem_Source_CombatSystem_Public_Actions_CSCharacterState_Aim_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
