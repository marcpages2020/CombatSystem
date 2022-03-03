// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CombatSystem/Public/Actions/CSCharacterState_Parry.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCSCharacterState_Parry() {}
// Cross Module References
	COMBATSYSTEM_API UClass* Z_Construct_UClass_UCSCharacterState_Parry_NoRegister();
	COMBATSYSTEM_API UClass* Z_Construct_UClass_UCSCharacterState_Parry();
	COMBATSYSTEM_API UClass* Z_Construct_UClass_UCSCharacterState();
	UPackage* Z_Construct_UPackage__Script_CombatSystem();
	ENGINE_API UClass* Z_Construct_UClass_UAnimMontage_NoRegister();
// End Cross Module References
	void UCSCharacterState_Parry::StaticRegisterNativesUCSCharacterState_Parry()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UCSCharacterState_Parry);
	UClass* Z_Construct_UClass_UCSCharacterState_Parry_NoRegister()
	{
		return UCSCharacterState_Parry::StaticClass();
	}
	struct Z_Construct_UClass_UCSCharacterState_Parry_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ParryRange_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ParryRange;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ParryMontage_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ParryMontage;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ParryTimeRange_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ParryTimeRange;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCSCharacterState_Parry_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UCSCharacterState,
		(UObject* (*)())Z_Construct_UPackage__Script_CombatSystem,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCSCharacterState_Parry_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Actions/CSCharacterState_Parry.h" },
		{ "ModuleRelativePath", "Public/Actions/CSCharacterState_Parry.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCSCharacterState_Parry_Statics::NewProp_ParryRange_MetaData[] = {
		{ "Category", "Parry" },
		{ "ModuleRelativePath", "Public/Actions/CSCharacterState_Parry.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UCSCharacterState_Parry_Statics::NewProp_ParryRange = { "ParryRange", nullptr, (EPropertyFlags)0x0020080000010001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCSCharacterState_Parry, ParryRange), METADATA_PARAMS(Z_Construct_UClass_UCSCharacterState_Parry_Statics::NewProp_ParryRange_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCSCharacterState_Parry_Statics::NewProp_ParryRange_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCSCharacterState_Parry_Statics::NewProp_ParryMontage_MetaData[] = {
		{ "Category", "Parry" },
		{ "ModuleRelativePath", "Public/Actions/CSCharacterState_Parry.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCSCharacterState_Parry_Statics::NewProp_ParryMontage = { "ParryMontage", nullptr, (EPropertyFlags)0x0020080000010001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCSCharacterState_Parry, ParryMontage), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UCSCharacterState_Parry_Statics::NewProp_ParryMontage_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCSCharacterState_Parry_Statics::NewProp_ParryMontage_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCSCharacterState_Parry_Statics::NewProp_ParryTimeRange_MetaData[] = {
		{ "Category", "Parry" },
		{ "ModuleRelativePath", "Public/Actions/CSCharacterState_Parry.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UCSCharacterState_Parry_Statics::NewProp_ParryTimeRange = { "ParryTimeRange", nullptr, (EPropertyFlags)0x0020080000010001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCSCharacterState_Parry, ParryTimeRange), METADATA_PARAMS(Z_Construct_UClass_UCSCharacterState_Parry_Statics::NewProp_ParryTimeRange_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCSCharacterState_Parry_Statics::NewProp_ParryTimeRange_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UCSCharacterState_Parry_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCSCharacterState_Parry_Statics::NewProp_ParryRange,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCSCharacterState_Parry_Statics::NewProp_ParryMontage,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCSCharacterState_Parry_Statics::NewProp_ParryTimeRange,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCSCharacterState_Parry_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCSCharacterState_Parry>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UCSCharacterState_Parry_Statics::ClassParams = {
		&UCSCharacterState_Parry::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UCSCharacterState_Parry_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UCSCharacterState_Parry_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UCSCharacterState_Parry_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UCSCharacterState_Parry_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UCSCharacterState_Parry()
	{
		if (!Z_Registration_Info_UClass_UCSCharacterState_Parry.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCSCharacterState_Parry.OuterSingleton, Z_Construct_UClass_UCSCharacterState_Parry_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UCSCharacterState_Parry.OuterSingleton;
	}
	template<> COMBATSYSTEM_API UClass* StaticClass<UCSCharacterState_Parry>()
	{
		return UCSCharacterState_Parry::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCSCharacterState_Parry);
	struct Z_CompiledInDeferFile_FID_CombatSystem_Source_CombatSystem_Public_Actions_CSCharacterState_Parry_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_CombatSystem_Source_CombatSystem_Public_Actions_CSCharacterState_Parry_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UCSCharacterState_Parry, UCSCharacterState_Parry::StaticClass, TEXT("UCSCharacterState_Parry"), &Z_Registration_Info_UClass_UCSCharacterState_Parry, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCSCharacterState_Parry), 3216337756U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_CombatSystem_Source_CombatSystem_Public_Actions_CSCharacterState_Parry_h_68373959(TEXT("/Script/CombatSystem"),
		Z_CompiledInDeferFile_FID_CombatSystem_Source_CombatSystem_Public_Actions_CSCharacterState_Parry_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_CombatSystem_Source_CombatSystem_Public_Actions_CSCharacterState_Parry_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
