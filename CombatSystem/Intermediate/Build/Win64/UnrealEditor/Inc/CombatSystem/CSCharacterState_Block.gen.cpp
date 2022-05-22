// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CombatSystem/Public/Actions/CSCharacterState_Block.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCSCharacterState_Block() {}
// Cross Module References
	COMBATSYSTEM_API UClass* Z_Construct_UClass_UCSCharacterState_Block_NoRegister();
	COMBATSYSTEM_API UClass* Z_Construct_UClass_UCSCharacterState_Block();
	COMBATSYSTEM_API UClass* Z_Construct_UClass_UCSCharacterState();
	UPackage* Z_Construct_UPackage__Script_CombatSystem();
	ENGINE_API UClass* Z_Construct_UClass_UAnimMontage_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
// End Cross Module References
	void UCSCharacterState_Block::StaticRegisterNativesUCSCharacterState_Block()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UCSCharacterState_Block);
	UClass* Z_Construct_UClass_UCSCharacterState_Block_NoRegister()
	{
		return UCSCharacterState_Block::StaticClass();
	}
	struct Z_Construct_UClass_UCSCharacterState_Block_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BlockImpactMontage_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_BlockImpactMontage;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MontageSpeed_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MontageSpeed;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaxWalkSpeed_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxWalkSpeed;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ImpactMovementForce_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ImpactMovementForce;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StaminaCostPerDamagePoint_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_StaminaCostPerDamagePoint;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BlockedAttackDamageReduction_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_BlockedAttackDamageReduction;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BlockAnimationCorrection_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_BlockAnimationCorrection;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCSCharacterState_Block_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UCSCharacterState,
		(UObject* (*)())Z_Construct_UPackage__Script_CombatSystem,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCSCharacterState_Block_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Actions/CSCharacterState_Block.h" },
		{ "ModuleRelativePath", "Public/Actions/CSCharacterState_Block.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCSCharacterState_Block_Statics::NewProp_BlockImpactMontage_MetaData[] = {
		{ "Category", "Block" },
		{ "ModuleRelativePath", "Public/Actions/CSCharacterState_Block.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCSCharacterState_Block_Statics::NewProp_BlockImpactMontage = { "BlockImpactMontage", nullptr, (EPropertyFlags)0x0020080000010001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCSCharacterState_Block, BlockImpactMontage), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UCSCharacterState_Block_Statics::NewProp_BlockImpactMontage_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCSCharacterState_Block_Statics::NewProp_BlockImpactMontage_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCSCharacterState_Block_Statics::NewProp_MontageSpeed_MetaData[] = {
		{ "Category", "Block" },
		{ "ModuleRelativePath", "Public/Actions/CSCharacterState_Block.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UCSCharacterState_Block_Statics::NewProp_MontageSpeed = { "MontageSpeed", nullptr, (EPropertyFlags)0x0020080000010001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCSCharacterState_Block, MontageSpeed), METADATA_PARAMS(Z_Construct_UClass_UCSCharacterState_Block_Statics::NewProp_MontageSpeed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCSCharacterState_Block_Statics::NewProp_MontageSpeed_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCSCharacterState_Block_Statics::NewProp_MaxWalkSpeed_MetaData[] = {
		{ "Category", "Block" },
		{ "ModuleRelativePath", "Public/Actions/CSCharacterState_Block.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UCSCharacterState_Block_Statics::NewProp_MaxWalkSpeed = { "MaxWalkSpeed", nullptr, (EPropertyFlags)0x0020080000010001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCSCharacterState_Block, MaxWalkSpeed), METADATA_PARAMS(Z_Construct_UClass_UCSCharacterState_Block_Statics::NewProp_MaxWalkSpeed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCSCharacterState_Block_Statics::NewProp_MaxWalkSpeed_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCSCharacterState_Block_Statics::NewProp_ImpactMovementForce_MetaData[] = {
		{ "Category", "Block" },
		{ "ModuleRelativePath", "Public/Actions/CSCharacterState_Block.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UCSCharacterState_Block_Statics::NewProp_ImpactMovementForce = { "ImpactMovementForce", nullptr, (EPropertyFlags)0x0020080000010001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCSCharacterState_Block, ImpactMovementForce), METADATA_PARAMS(Z_Construct_UClass_UCSCharacterState_Block_Statics::NewProp_ImpactMovementForce_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCSCharacterState_Block_Statics::NewProp_ImpactMovementForce_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCSCharacterState_Block_Statics::NewProp_StaminaCostPerDamagePoint_MetaData[] = {
		{ "Category", "Block" },
		{ "ModuleRelativePath", "Public/Actions/CSCharacterState_Block.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UCSCharacterState_Block_Statics::NewProp_StaminaCostPerDamagePoint = { "StaminaCostPerDamagePoint", nullptr, (EPropertyFlags)0x0020080000010001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCSCharacterState_Block, StaminaCostPerDamagePoint), METADATA_PARAMS(Z_Construct_UClass_UCSCharacterState_Block_Statics::NewProp_StaminaCostPerDamagePoint_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCSCharacterState_Block_Statics::NewProp_StaminaCostPerDamagePoint_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCSCharacterState_Block_Statics::NewProp_BlockedAttackDamageReduction_MetaData[] = {
		{ "Category", "Block" },
		{ "ModuleRelativePath", "Public/Actions/CSCharacterState_Block.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UCSCharacterState_Block_Statics::NewProp_BlockedAttackDamageReduction = { "BlockedAttackDamageReduction", nullptr, (EPropertyFlags)0x0020080000010001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCSCharacterState_Block, BlockedAttackDamageReduction), METADATA_PARAMS(Z_Construct_UClass_UCSCharacterState_Block_Statics::NewProp_BlockedAttackDamageReduction_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCSCharacterState_Block_Statics::NewProp_BlockedAttackDamageReduction_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCSCharacterState_Block_Statics::NewProp_BlockAnimationCorrection_MetaData[] = {
		{ "Category", "Block" },
		{ "ModuleRelativePath", "Public/Actions/CSCharacterState_Block.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UCSCharacterState_Block_Statics::NewProp_BlockAnimationCorrection = { "BlockAnimationCorrection", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCSCharacterState_Block, BlockAnimationCorrection), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(Z_Construct_UClass_UCSCharacterState_Block_Statics::NewProp_BlockAnimationCorrection_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCSCharacterState_Block_Statics::NewProp_BlockAnimationCorrection_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UCSCharacterState_Block_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCSCharacterState_Block_Statics::NewProp_BlockImpactMontage,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCSCharacterState_Block_Statics::NewProp_MontageSpeed,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCSCharacterState_Block_Statics::NewProp_MaxWalkSpeed,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCSCharacterState_Block_Statics::NewProp_ImpactMovementForce,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCSCharacterState_Block_Statics::NewProp_StaminaCostPerDamagePoint,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCSCharacterState_Block_Statics::NewProp_BlockedAttackDamageReduction,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCSCharacterState_Block_Statics::NewProp_BlockAnimationCorrection,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCSCharacterState_Block_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCSCharacterState_Block>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UCSCharacterState_Block_Statics::ClassParams = {
		&UCSCharacterState_Block::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UCSCharacterState_Block_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UCSCharacterState_Block_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UCSCharacterState_Block_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UCSCharacterState_Block_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UCSCharacterState_Block()
	{
		if (!Z_Registration_Info_UClass_UCSCharacterState_Block.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCSCharacterState_Block.OuterSingleton, Z_Construct_UClass_UCSCharacterState_Block_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UCSCharacterState_Block.OuterSingleton;
	}
	template<> COMBATSYSTEM_API UClass* StaticClass<UCSCharacterState_Block>()
	{
		return UCSCharacterState_Block::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCSCharacterState_Block);
	struct Z_CompiledInDeferFile_FID_CombatSystem_Source_CombatSystem_Public_Actions_CSCharacterState_Block_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_CombatSystem_Source_CombatSystem_Public_Actions_CSCharacterState_Block_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UCSCharacterState_Block, UCSCharacterState_Block::StaticClass, TEXT("UCSCharacterState_Block"), &Z_Registration_Info_UClass_UCSCharacterState_Block, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCSCharacterState_Block), 2544514628U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_CombatSystem_Source_CombatSystem_Public_Actions_CSCharacterState_Block_h_1850937465(TEXT("/Script/CombatSystem"),
		Z_CompiledInDeferFile_FID_CombatSystem_Source_CombatSystem_Public_Actions_CSCharacterState_Block_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_CombatSystem_Source_CombatSystem_Public_Actions_CSCharacterState_Block_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
