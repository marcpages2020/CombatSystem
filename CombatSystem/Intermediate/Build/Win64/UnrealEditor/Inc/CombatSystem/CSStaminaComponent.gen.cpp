// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CombatSystem/Public/Components/CSStaminaComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCSStaminaComponent() {}
// Cross Module References
	COMBATSYSTEM_API UClass* Z_Construct_UClass_UCSStaminaComponent_NoRegister();
	COMBATSYSTEM_API UClass* Z_Construct_UClass_UCSStaminaComponent();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	UPackage* Z_Construct_UPackage__Script_CombatSystem();
// End Cross Module References
	void UCSStaminaComponent::StaticRegisterNativesUCSStaminaComponent()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UCSStaminaComponent);
	UClass* Z_Construct_UClass_UCSStaminaComponent_NoRegister()
	{
		return UCSStaminaComponent::StaticClass();
	}
	struct Z_Construct_UClass_UCSStaminaComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaxStamina_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxStamina;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StaminaRecuperationPerSecond_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_StaminaRecuperationPerSecond;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCSStaminaComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_CombatSystem,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCSStaminaComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "Components/CSStaminaComponent.h" },
		{ "ModuleRelativePath", "Public/Components/CSStaminaComponent.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCSStaminaComponent_Statics::NewProp_MaxStamina_MetaData[] = {
		{ "Category", "Stamina" },
		{ "ModuleRelativePath", "Public/Components/CSStaminaComponent.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UCSStaminaComponent_Statics::NewProp_MaxStamina = { "MaxStamina", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCSStaminaComponent, MaxStamina), METADATA_PARAMS(Z_Construct_UClass_UCSStaminaComponent_Statics::NewProp_MaxStamina_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCSStaminaComponent_Statics::NewProp_MaxStamina_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCSStaminaComponent_Statics::NewProp_StaminaRecuperationPerSecond_MetaData[] = {
		{ "Category", "Stamina" },
		{ "ModuleRelativePath", "Public/Components/CSStaminaComponent.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UCSStaminaComponent_Statics::NewProp_StaminaRecuperationPerSecond = { "StaminaRecuperationPerSecond", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCSStaminaComponent, StaminaRecuperationPerSecond), METADATA_PARAMS(Z_Construct_UClass_UCSStaminaComponent_Statics::NewProp_StaminaRecuperationPerSecond_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCSStaminaComponent_Statics::NewProp_StaminaRecuperationPerSecond_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UCSStaminaComponent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCSStaminaComponent_Statics::NewProp_MaxStamina,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCSStaminaComponent_Statics::NewProp_StaminaRecuperationPerSecond,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCSStaminaComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCSStaminaComponent>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UCSStaminaComponent_Statics::ClassParams = {
		&UCSStaminaComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UCSStaminaComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UCSStaminaComponent_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UCSStaminaComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UCSStaminaComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UCSStaminaComponent()
	{
		if (!Z_Registration_Info_UClass_UCSStaminaComponent.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCSStaminaComponent.OuterSingleton, Z_Construct_UClass_UCSStaminaComponent_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UCSStaminaComponent.OuterSingleton;
	}
	template<> COMBATSYSTEM_API UClass* StaticClass<UCSStaminaComponent>()
	{
		return UCSStaminaComponent::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCSStaminaComponent);
	struct Z_CompiledInDeferFile_FID_CombatSystem_Source_CombatSystem_Public_Components_CSStaminaComponent_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_CombatSystem_Source_CombatSystem_Public_Components_CSStaminaComponent_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UCSStaminaComponent, UCSStaminaComponent::StaticClass, TEXT("UCSStaminaComponent"), &Z_Registration_Info_UClass_UCSStaminaComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCSStaminaComponent), 2337052083U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_CombatSystem_Source_CombatSystem_Public_Components_CSStaminaComponent_h_2000904414(TEXT("/Script/CombatSystem"),
		Z_CompiledInDeferFile_FID_CombatSystem_Source_CombatSystem_Public_Components_CSStaminaComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_CombatSystem_Source_CombatSystem_Public_Components_CSStaminaComponent_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
