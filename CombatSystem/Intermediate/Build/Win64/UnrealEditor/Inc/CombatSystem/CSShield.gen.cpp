// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CombatSystem/Public/CSShield.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCSShield() {}
// Cross Module References
	COMBATSYSTEM_API UClass* Z_Construct_UClass_ACSShield_NoRegister();
	COMBATSYSTEM_API UClass* Z_Construct_UClass_ACSShield();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_CombatSystem();
	ENGINE_API UClass* Z_Construct_UClass_USkeletalMeshComponent_NoRegister();
// End Cross Module References
	void ACSShield::StaticRegisterNativesACSShield()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ACSShield);
	UClass* Z_Construct_UClass_ACSShield_NoRegister()
	{
		return ACSShield::StaticClass();
	}
	struct Z_Construct_UClass_ACSShield_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MeshComp_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_MeshComp;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ACSShield_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_CombatSystem,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACSShield_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "CSShield.h" },
		{ "ModuleRelativePath", "Public/CSShield.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACSShield_Statics::NewProp_MeshComp_MetaData[] = {
		{ "Category", "Components" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/CSShield.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACSShield_Statics::NewProp_MeshComp = { "MeshComp", nullptr, (EPropertyFlags)0x00200800000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACSShield, MeshComp), Z_Construct_UClass_USkeletalMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ACSShield_Statics::NewProp_MeshComp_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACSShield_Statics::NewProp_MeshComp_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ACSShield_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACSShield_Statics::NewProp_MeshComp,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ACSShield_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ACSShield>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ACSShield_Statics::ClassParams = {
		&ACSShield::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ACSShield_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ACSShield_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ACSShield_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ACSShield_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ACSShield()
	{
		if (!Z_Registration_Info_UClass_ACSShield.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ACSShield.OuterSingleton, Z_Construct_UClass_ACSShield_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ACSShield.OuterSingleton;
	}
	template<> COMBATSYSTEM_API UClass* StaticClass<ACSShield>()
	{
		return ACSShield::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ACSShield);
	struct Z_CompiledInDeferFile_FID_CombatSystem_Source_CombatSystem_Public_CSShield_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_CombatSystem_Source_CombatSystem_Public_CSShield_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ACSShield, ACSShield::StaticClass, TEXT("ACSShield"), &Z_Registration_Info_UClass_ACSShield, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ACSShield), 1575427547U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_CombatSystem_Source_CombatSystem_Public_CSShield_h_2021951928(TEXT("/Script/CombatSystem"),
		Z_CompiledInDeferFile_FID_CombatSystem_Source_CombatSystem_Public_CSShield_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_CombatSystem_Source_CombatSystem_Public_CSShield_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
