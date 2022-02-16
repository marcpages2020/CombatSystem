// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CombatSystem/Public/Actions/CSCharacterState_Hit.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCSCharacterState_Hit() {}
// Cross Module References
	COMBATSYSTEM_API UClass* Z_Construct_UClass_UCSCharacterState_Hit_NoRegister();
	COMBATSYSTEM_API UClass* Z_Construct_UClass_UCSCharacterState_Hit();
	COMBATSYSTEM_API UClass* Z_Construct_UClass_UCSCharacterState();
	UPackage* Z_Construct_UPackage__Script_CombatSystem();
	ENGINE_API UClass* Z_Construct_UClass_UAnimMontage_NoRegister();
// End Cross Module References
	void UCSCharacterState_Hit::StaticRegisterNativesUCSCharacterState_Hit()
	{
	}
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
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCSCharacterState_Hit_Statics::NewProp_DefaultHitMontage_MetaData[] = {
		{ "Category", "DefaultHit" },
		{ "ModuleRelativePath", "Public/Actions/CSCharacterState_Hit.h" },
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
		{ "ModuleRelativePath", "Public/Actions/CSCharacterState_Hit.h" },
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
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UCSCharacterState_Hit_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCSCharacterState_Hit_Statics::NewProp_DefaultHitMontage,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCSCharacterState_Hit_Statics::NewProp_DefaultHitPlaySpeed,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCSCharacterState_Hit_Statics::NewProp_DefaultHitRandomDeviation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCSCharacterState_Hit_Statics::NewProp_BlockHitMontage,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCSCharacterState_Hit_Statics::NewProp_BlockHitPlaySpeed,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCSCharacterState_Hit_Statics::NewProp_BlockHitRandomDeviation,
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
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UECodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UCSCharacterState_Hit_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UCSCharacterState_Hit, 1809466651);
	template<> COMBATSYSTEM_API UClass* StaticClass<UCSCharacterState_Hit>()
	{
		return UCSCharacterState_Hit::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UCSCharacterState_Hit(Z_Construct_UClass_UCSCharacterState_Hit, &UCSCharacterState_Hit::StaticClass, TEXT("/Script/CombatSystem"), TEXT("UCSCharacterState_Hit"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCSCharacterState_Hit);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
