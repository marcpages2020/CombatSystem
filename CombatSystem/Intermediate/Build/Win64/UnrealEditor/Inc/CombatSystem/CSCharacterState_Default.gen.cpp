// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CombatSystem/Public/Actions/CSCharacterState_Default.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCSCharacterState_Default() {}
// Cross Module References
	COMBATSYSTEM_API UClass* Z_Construct_UClass_UCSCharacterState_Default_NoRegister();
	COMBATSYSTEM_API UClass* Z_Construct_UClass_UCSCharacterState_Default();
	COMBATSYSTEM_API UClass* Z_Construct_UClass_UCSCharacterState();
	UPackage* Z_Construct_UPackage__Script_CombatSystem();
// End Cross Module References
	void UCSCharacterState_Default::StaticRegisterNativesUCSCharacterState_Default()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UCSCharacterState_Default);
	UClass* Z_Construct_UClass_UCSCharacterState_Default_NoRegister()
	{
		return UCSCharacterState_Default::StaticClass();
	}
	struct Z_Construct_UClass_UCSCharacterState_Default_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaxInputTimeToDodge_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxInputTimeToDodge;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCSCharacterState_Default_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UCSCharacterState,
		(UObject* (*)())Z_Construct_UPackage__Script_CombatSystem,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCSCharacterState_Default_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "Actions/CSCharacterState_Default.h" },
		{ "ModuleRelativePath", "Public/Actions/CSCharacterState_Default.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCSCharacterState_Default_Statics::NewProp_MaxInputTimeToDodge_MetaData[] = {
		{ "Category", "State" },
		{ "ModuleRelativePath", "Public/Actions/CSCharacterState_Default.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UCSCharacterState_Default_Statics::NewProp_MaxInputTimeToDodge = { "MaxInputTimeToDodge", nullptr, (EPropertyFlags)0x0020080000010001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCSCharacterState_Default, MaxInputTimeToDodge), METADATA_PARAMS(Z_Construct_UClass_UCSCharacterState_Default_Statics::NewProp_MaxInputTimeToDodge_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCSCharacterState_Default_Statics::NewProp_MaxInputTimeToDodge_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UCSCharacterState_Default_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCSCharacterState_Default_Statics::NewProp_MaxInputTimeToDodge,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCSCharacterState_Default_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCSCharacterState_Default>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UCSCharacterState_Default_Statics::ClassParams = {
		&UCSCharacterState_Default::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UCSCharacterState_Default_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UCSCharacterState_Default_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UCSCharacterState_Default_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UCSCharacterState_Default_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UCSCharacterState_Default()
	{
		if (!Z_Registration_Info_UClass_UCSCharacterState_Default.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCSCharacterState_Default.OuterSingleton, Z_Construct_UClass_UCSCharacterState_Default_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UCSCharacterState_Default.OuterSingleton;
	}
	template<> COMBATSYSTEM_API UClass* StaticClass<UCSCharacterState_Default>()
	{
		return UCSCharacterState_Default::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCSCharacterState_Default);
	struct Z_CompiledInDeferFile_FID_CombatSystem_Source_CombatSystem_Public_Actions_CSCharacterState_Default_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_CombatSystem_Source_CombatSystem_Public_Actions_CSCharacterState_Default_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UCSCharacterState_Default, UCSCharacterState_Default::StaticClass, TEXT("UCSCharacterState_Default"), &Z_Registration_Info_UClass_UCSCharacterState_Default, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCSCharacterState_Default), 295752164U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_CombatSystem_Source_CombatSystem_Public_Actions_CSCharacterState_Default_h_593975322(TEXT("/Script/CombatSystem"),
		Z_CompiledInDeferFile_FID_CombatSystem_Source_CombatSystem_Public_Actions_CSCharacterState_Default_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_CombatSystem_Source_CombatSystem_Public_Actions_CSCharacterState_Default_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
