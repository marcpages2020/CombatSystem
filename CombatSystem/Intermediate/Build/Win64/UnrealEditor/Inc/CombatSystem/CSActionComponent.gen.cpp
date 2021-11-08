// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CombatSystem/Public/Components/CSActionComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCSActionComponent() {}
// Cross Module References
	COMBATSYSTEM_API UClass* Z_Construct_UClass_UCSActionComponent_NoRegister();
	COMBATSYSTEM_API UClass* Z_Construct_UClass_UCSActionComponent();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	UPackage* Z_Construct_UPackage__Script_CombatSystem();
	COMBATSYSTEM_API UClass* Z_Construct_UClass_UCSAction_Attack_NoRegister();
// End Cross Module References
	void UCSActionComponent::StaticRegisterNativesUCSActionComponent()
	{
	}
	UClass* Z_Construct_UClass_UCSActionComponent_NoRegister()
	{
		return UCSActionComponent::StaticClass();
	}
	struct Z_Construct_UClass_UCSActionComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Attack_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Attack;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCSActionComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_CombatSystem,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCSActionComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "Components/CSActionComponent.h" },
		{ "ModuleRelativePath", "Public/Components/CSActionComponent.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCSActionComponent_Statics::NewProp_Attack_MetaData[] = {
		{ "Category", "Actions" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Components/CSActionComponent.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCSActionComponent_Statics::NewProp_Attack = { "Attack", nullptr, (EPropertyFlags)0x0022080000090009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCSActionComponent, Attack), Z_Construct_UClass_UCSAction_Attack_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UCSActionComponent_Statics::NewProp_Attack_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCSActionComponent_Statics::NewProp_Attack_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UCSActionComponent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCSActionComponent_Statics::NewProp_Attack,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCSActionComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCSActionComponent>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UCSActionComponent_Statics::ClassParams = {
		&UCSActionComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UCSActionComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UCSActionComponent_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UCSActionComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UCSActionComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UCSActionComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UECodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UCSActionComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UCSActionComponent, 1052765096);
	template<> COMBATSYSTEM_API UClass* StaticClass<UCSActionComponent>()
	{
		return UCSActionComponent::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UCSActionComponent(Z_Construct_UClass_UCSActionComponent, &UCSActionComponent::StaticClass, TEXT("/Script/CombatSystem"), TEXT("UCSActionComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCSActionComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
