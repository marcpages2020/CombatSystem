// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CombatSystem/Public/Actions/CSAction_Attack.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCSAction_Attack() {}
// Cross Module References
	COMBATSYSTEM_API UClass* Z_Construct_UClass_UCSAction_Attack_NoRegister();
	COMBATSYSTEM_API UClass* Z_Construct_UClass_UCSAction_Attack();
	COMBATSYSTEM_API UClass* Z_Construct_UClass_UCSAction();
	UPackage* Z_Construct_UPackage__Script_CombatSystem();
// End Cross Module References
	void UCSAction_Attack::StaticRegisterNativesUCSAction_Attack()
	{
	}
	UClass* Z_Construct_UClass_UCSAction_Attack_NoRegister()
	{
		return UCSAction_Attack::StaticClass();
	}
	struct Z_Construct_UClass_UCSAction_Attack_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_damage_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_damage;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCSAction_Attack_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UCSAction,
		(UObject* (*)())Z_Construct_UPackage__Script_CombatSystem,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCSAction_Attack_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "Actions/CSAction_Attack.h" },
		{ "ModuleRelativePath", "Public/Actions/CSAction_Attack.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCSAction_Attack_Statics::NewProp_damage_MetaData[] = {
		{ "Category", "Attack" },
		{ "ModuleRelativePath", "Public/Actions/CSAction_Attack.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UCSAction_Attack_Statics::NewProp_damage = { "damage", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCSAction_Attack, damage), METADATA_PARAMS(Z_Construct_UClass_UCSAction_Attack_Statics::NewProp_damage_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCSAction_Attack_Statics::NewProp_damage_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UCSAction_Attack_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCSAction_Attack_Statics::NewProp_damage,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCSAction_Attack_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCSAction_Attack>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UCSAction_Attack_Statics::ClassParams = {
		&UCSAction_Attack::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UCSAction_Attack_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UCSAction_Attack_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UCSAction_Attack_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UCSAction_Attack_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UCSAction_Attack()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UECodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UCSAction_Attack_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UCSAction_Attack, 3611159016);
	template<> COMBATSYSTEM_API UClass* StaticClass<UCSAction_Attack>()
	{
		return UCSAction_Attack::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UCSAction_Attack(Z_Construct_UClass_UCSAction_Attack, &UCSAction_Attack::StaticClass, TEXT("/Script/CombatSystem"), TEXT("UCSAction_Attack"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCSAction_Attack);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
