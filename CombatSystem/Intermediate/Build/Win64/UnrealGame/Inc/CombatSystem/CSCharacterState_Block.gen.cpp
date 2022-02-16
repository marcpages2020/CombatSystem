// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CombatSystem/Public/Actions/CSCharacterState_Block.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCSCharacterState_Block() {}
// Cross Module References
	COMBATSYSTEM_API UClass* Z_Construct_UClass_UCSCharacterState_Block_NoRegister();
	COMBATSYSTEM_API UClass* Z_Construct_UClass_UCSCharacterState_Block();
	COMBATSYSTEM_API UClass* Z_Construct_UClass_UCSCharacterState();
	UPackage* Z_Construct_UPackage__Script_CombatSystem();
	ENGINE_API UClass* Z_Construct_UClass_UAnimMontage_NoRegister();
// End Cross Module References
	void UCSCharacterState_Block::StaticRegisterNativesUCSCharacterState_Block()
	{
	}
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
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BlockMontage_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_BlockMontage;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MontageSpeed_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MontageSpeed;
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
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCSCharacterState_Block_Statics::NewProp_BlockMontage_MetaData[] = {
		{ "Category", "Block" },
		{ "ModuleRelativePath", "Public/Actions/CSCharacterState_Block.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCSCharacterState_Block_Statics::NewProp_BlockMontage = { "BlockMontage", nullptr, (EPropertyFlags)0x0020080000010001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCSCharacterState_Block, BlockMontage), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UCSCharacterState_Block_Statics::NewProp_BlockMontage_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCSCharacterState_Block_Statics::NewProp_BlockMontage_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCSCharacterState_Block_Statics::NewProp_MontageSpeed_MetaData[] = {
		{ "Category", "Block" },
		{ "ModuleRelativePath", "Public/Actions/CSCharacterState_Block.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UCSCharacterState_Block_Statics::NewProp_MontageSpeed = { "MontageSpeed", nullptr, (EPropertyFlags)0x0020080000010001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCSCharacterState_Block, MontageSpeed), METADATA_PARAMS(Z_Construct_UClass_UCSCharacterState_Block_Statics::NewProp_MontageSpeed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCSCharacterState_Block_Statics::NewProp_MontageSpeed_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UCSCharacterState_Block_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCSCharacterState_Block_Statics::NewProp_BlockMontage,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCSCharacterState_Block_Statics::NewProp_MontageSpeed,
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
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UECodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UCSCharacterState_Block_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UCSCharacterState_Block, 1249133824);
	template<> COMBATSYSTEM_API UClass* StaticClass<UCSCharacterState_Block>()
	{
		return UCSCharacterState_Block::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UCSCharacterState_Block(Z_Construct_UClass_UCSCharacterState_Block, &UCSCharacterState_Block::StaticClass, TEXT("/Script/CombatSystem"), TEXT("UCSCharacterState_Block"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCSCharacterState_Block);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
