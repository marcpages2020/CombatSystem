// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CombatSystem/Public/Actions/CSCharacterState_Dodge.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCSCharacterState_Dodge() {}
// Cross Module References
	COMBATSYSTEM_API UClass* Z_Construct_UClass_UCSCharacterState_Dodge_NoRegister();
	COMBATSYSTEM_API UClass* Z_Construct_UClass_UCSCharacterState_Dodge();
	COMBATSYSTEM_API UClass* Z_Construct_UClass_UCSCharacterState();
	UPackage* Z_Construct_UPackage__Script_CombatSystem();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	ENGINE_API UClass* Z_Construct_UClass_UCameraShakeBase_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UForceFeedbackEffect_NoRegister();
// End Cross Module References
	void UCSCharacterState_Dodge::StaticRegisterNativesUCSCharacterState_Dodge()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UCSCharacterState_Dodge);
	UClass* Z_Construct_UClass_UCSCharacterState_Dodge_NoRegister()
	{
		return UCSCharacterState_Dodge::StaticClass();
	}
	struct Z_Construct_UClass_UCSCharacterState_Dodge_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RollSpeed_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_RollSpeed;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DodgeShake_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_DodgeShake;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DodgeForceFeedback_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_DodgeForceFeedback;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCSCharacterState_Dodge_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UCSCharacterState,
		(UObject* (*)())Z_Construct_UPackage__Script_CombatSystem,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCSCharacterState_Dodge_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n *\n */" },
		{ "IncludePath", "Actions/CSCharacterState_Dodge.h" },
		{ "ModuleRelativePath", "Public/Actions/CSCharacterState_Dodge.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCSCharacterState_Dodge_Statics::NewProp_RollSpeed_MetaData[] = {
		{ "Category", "Roll" },
		{ "Comment", "//UPROPERTY(EditDefaultsOnly, Category = \"Default Dodge\")\n//float RollAdditiveSpeed;\n" },
		{ "ModuleRelativePath", "Public/Actions/CSCharacterState_Dodge.h" },
		{ "ToolTip", "UPROPERTY(EditDefaultsOnly, Category = \"Default Dodge\")\nfloat RollAdditiveSpeed;" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UCSCharacterState_Dodge_Statics::NewProp_RollSpeed = { "RollSpeed", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCSCharacterState_Dodge, RollSpeed), METADATA_PARAMS(Z_Construct_UClass_UCSCharacterState_Dodge_Statics::NewProp_RollSpeed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCSCharacterState_Dodge_Statics::NewProp_RollSpeed_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCSCharacterState_Dodge_Statics::NewProp_DodgeShake_MetaData[] = {
		{ "Category", "Dodge" },
		{ "ModuleRelativePath", "Public/Actions/CSCharacterState_Dodge.h" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UCSCharacterState_Dodge_Statics::NewProp_DodgeShake = { "DodgeShake", nullptr, (EPropertyFlags)0x0024080000010001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCSCharacterState_Dodge, DodgeShake), Z_Construct_UClass_UCameraShakeBase_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_UCSCharacterState_Dodge_Statics::NewProp_DodgeShake_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCSCharacterState_Dodge_Statics::NewProp_DodgeShake_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCSCharacterState_Dodge_Statics::NewProp_DodgeForceFeedback_MetaData[] = {
		{ "Category", "Dodge" },
		{ "ModuleRelativePath", "Public/Actions/CSCharacterState_Dodge.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCSCharacterState_Dodge_Statics::NewProp_DodgeForceFeedback = { "DodgeForceFeedback", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCSCharacterState_Dodge, DodgeForceFeedback), Z_Construct_UClass_UForceFeedbackEffect_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UCSCharacterState_Dodge_Statics::NewProp_DodgeForceFeedback_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCSCharacterState_Dodge_Statics::NewProp_DodgeForceFeedback_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UCSCharacterState_Dodge_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCSCharacterState_Dodge_Statics::NewProp_RollSpeed,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCSCharacterState_Dodge_Statics::NewProp_DodgeShake,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCSCharacterState_Dodge_Statics::NewProp_DodgeForceFeedback,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCSCharacterState_Dodge_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCSCharacterState_Dodge>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UCSCharacterState_Dodge_Statics::ClassParams = {
		&UCSCharacterState_Dodge::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UCSCharacterState_Dodge_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UCSCharacterState_Dodge_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UCSCharacterState_Dodge_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UCSCharacterState_Dodge_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UCSCharacterState_Dodge()
	{
		if (!Z_Registration_Info_UClass_UCSCharacterState_Dodge.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCSCharacterState_Dodge.OuterSingleton, Z_Construct_UClass_UCSCharacterState_Dodge_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UCSCharacterState_Dodge.OuterSingleton;
	}
	template<> COMBATSYSTEM_API UClass* StaticClass<UCSCharacterState_Dodge>()
	{
		return UCSCharacterState_Dodge::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCSCharacterState_Dodge);
	struct Z_CompiledInDeferFile_FID_CombatSystem_Source_CombatSystem_Public_Actions_CSCharacterState_Dodge_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_CombatSystem_Source_CombatSystem_Public_Actions_CSCharacterState_Dodge_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UCSCharacterState_Dodge, UCSCharacterState_Dodge::StaticClass, TEXT("UCSCharacterState_Dodge"), &Z_Registration_Info_UClass_UCSCharacterState_Dodge, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCSCharacterState_Dodge), 2300292351U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_CombatSystem_Source_CombatSystem_Public_Actions_CSCharacterState_Dodge_h_841047531(TEXT("/Script/CombatSystem"),
		Z_CompiledInDeferFile_FID_CombatSystem_Source_CombatSystem_Public_Actions_CSCharacterState_Dodge_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_CombatSystem_Source_CombatSystem_Public_Actions_CSCharacterState_Dodge_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
