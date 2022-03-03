// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CombatSystem/Public/Components/CSActionComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCSActionComponent() {}
// Cross Module References
	COMBATSYSTEM_API UClass* Z_Construct_UClass_UCSActionComponent_NoRegister();
	COMBATSYSTEM_API UClass* Z_Construct_UClass_UCSActionComponent();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	UPackage* Z_Construct_UPackage__Script_CombatSystem();
// End Cross Module References
	void UCSActionComponent::StaticRegisterNativesUCSActionComponent()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UCSActionComponent);
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
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCSActionComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCSActionComponent>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UCSActionComponent_Statics::ClassParams = {
		&UCSActionComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UCSActionComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UCSActionComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UCSActionComponent()
	{
		if (!Z_Registration_Info_UClass_UCSActionComponent.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCSActionComponent.OuterSingleton, Z_Construct_UClass_UCSActionComponent_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UCSActionComponent.OuterSingleton;
	}
	template<> COMBATSYSTEM_API UClass* StaticClass<UCSActionComponent>()
	{
		return UCSActionComponent::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCSActionComponent);
	struct Z_CompiledInDeferFile_FID_CombatSystem_Source_CombatSystem_Public_Components_CSActionComponent_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_CombatSystem_Source_CombatSystem_Public_Components_CSActionComponent_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UCSActionComponent, UCSActionComponent::StaticClass, TEXT("UCSActionComponent"), &Z_Registration_Info_UClass_UCSActionComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCSActionComponent), 3492412687U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_CombatSystem_Source_CombatSystem_Public_Components_CSActionComponent_h_2466039993(TEXT("/Script/CombatSystem"),
		Z_CompiledInDeferFile_FID_CombatSystem_Source_CombatSystem_Public_Components_CSActionComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_CombatSystem_Source_CombatSystem_Public_Components_CSActionComponent_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
