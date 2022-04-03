// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CombatSystem/Public/CSProjectile.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCSProjectile() {}
// Cross Module References
	COMBATSYSTEM_API UClass* Z_Construct_UClass_ACSProjectile_NoRegister();
	COMBATSYSTEM_API UClass* Z_Construct_UClass_ACSProjectile();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_CombatSystem();
	ENGINE_API UClass* Z_Construct_UClass_UPrimitiveComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FHitResult();
	ENGINE_API UClass* Z_Construct_UClass_USphereComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	ENGINE_API UClass* Z_Construct_UClass_UDamageType_NoRegister();
	NIAGARA_API UClass* Z_Construct_UClass_UNiagaraSystem_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USoundBase_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(ACSProjectile::execOnOverlap)
	{
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OverlappedComponent);
		P_GET_OBJECT(AActor,Z_Param_OtherActor);
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp);
		P_GET_PROPERTY(FIntProperty,Z_Param_OtherBodyIndex);
		P_GET_UBOOL(Z_Param_bFromSweep);
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_SweepResult);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnOverlap(Z_Param_OverlappedComponent,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_OtherBodyIndex,Z_Param_bFromSweep,Z_Param_Out_SweepResult);
		P_NATIVE_END;
	}
	void ACSProjectile::StaticRegisterNativesACSProjectile()
	{
		UClass* Class = ACSProjectile::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnOverlap", &ACSProjectile::execOnOverlap },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ACSProjectile_OnOverlap_Statics
	{
		struct CSProjectile_eventOnOverlap_Parms
		{
			UPrimitiveComponent* OverlappedComponent;
			AActor* OtherActor;
			UPrimitiveComponent* OtherComp;
			int32 OtherBodyIndex;
			bool bFromSweep;
			FHitResult SweepResult;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OverlappedComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_OverlappedComponent;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_OtherActor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OtherComp_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_OtherComp;
		static const UECodeGen_Private::FIntPropertyParams NewProp_OtherBodyIndex;
		static void NewProp_bFromSweep_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bFromSweep;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SweepResult_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_SweepResult;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACSProjectile_OnOverlap_Statics::NewProp_OverlappedComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ACSProjectile_OnOverlap_Statics::NewProp_OverlappedComponent = { "OverlappedComponent", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CSProjectile_eventOnOverlap_Parms, OverlappedComponent), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_ACSProjectile_OnOverlap_Statics::NewProp_OverlappedComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ACSProjectile_OnOverlap_Statics::NewProp_OverlappedComponent_MetaData)) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ACSProjectile_OnOverlap_Statics::NewProp_OtherActor = { "OtherActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CSProjectile_eventOnOverlap_Parms, OtherActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACSProjectile_OnOverlap_Statics::NewProp_OtherComp_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ACSProjectile_OnOverlap_Statics::NewProp_OtherComp = { "OtherComp", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CSProjectile_eventOnOverlap_Parms, OtherComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_ACSProjectile_OnOverlap_Statics::NewProp_OtherComp_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ACSProjectile_OnOverlap_Statics::NewProp_OtherComp_MetaData)) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ACSProjectile_OnOverlap_Statics::NewProp_OtherBodyIndex = { "OtherBodyIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CSProjectile_eventOnOverlap_Parms, OtherBodyIndex), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_ACSProjectile_OnOverlap_Statics::NewProp_bFromSweep_SetBit(void* Obj)
	{
		((CSProjectile_eventOnOverlap_Parms*)Obj)->bFromSweep = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ACSProjectile_OnOverlap_Statics::NewProp_bFromSweep = { "bFromSweep", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(CSProjectile_eventOnOverlap_Parms), &Z_Construct_UFunction_ACSProjectile_OnOverlap_Statics::NewProp_bFromSweep_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACSProjectile_OnOverlap_Statics::NewProp_SweepResult_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ACSProjectile_OnOverlap_Statics::NewProp_SweepResult = { "SweepResult", nullptr, (EPropertyFlags)0x0010008008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CSProjectile_eventOnOverlap_Parms, SweepResult), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(Z_Construct_UFunction_ACSProjectile_OnOverlap_Statics::NewProp_SweepResult_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ACSProjectile_OnOverlap_Statics::NewProp_SweepResult_MetaData)) }; // 1416937132
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ACSProjectile_OnOverlap_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACSProjectile_OnOverlap_Statics::NewProp_OverlappedComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACSProjectile_OnOverlap_Statics::NewProp_OtherActor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACSProjectile_OnOverlap_Statics::NewProp_OtherComp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACSProjectile_OnOverlap_Statics::NewProp_OtherBodyIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACSProjectile_OnOverlap_Statics::NewProp_bFromSweep,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACSProjectile_OnOverlap_Statics::NewProp_SweepResult,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACSProjectile_OnOverlap_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CSProjectile.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ACSProjectile_OnOverlap_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ACSProjectile, nullptr, "OnOverlap", nullptr, nullptr, sizeof(Z_Construct_UFunction_ACSProjectile_OnOverlap_Statics::CSProjectile_eventOnOverlap_Parms), Z_Construct_UFunction_ACSProjectile_OnOverlap_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ACSProjectile_OnOverlap_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00480401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ACSProjectile_OnOverlap_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ACSProjectile_OnOverlap_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ACSProjectile_OnOverlap()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ACSProjectile_OnOverlap_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ACSProjectile);
	UClass* Z_Construct_UClass_ACSProjectile_NoRegister()
	{
		return ACSProjectile::StaticClass();
	}
	struct Z_Construct_UClass_ACSProjectile_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CollisionComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_CollisionComponent;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MeshComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_MeshComponent;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BaseDamage_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_BaseDamage;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DamageType_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_DamageType;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TrailEffect_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_TrailEffect;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DefaultImpactEffect_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_DefaultImpactEffect;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FleshImpactEffect_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_FleshImpactEffect;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DefaultImpactSound_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_DefaultImpactSound;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ACSProjectile_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_CombatSystem,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ACSProjectile_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ACSProjectile_OnOverlap, "OnOverlap" }, // 1504590697
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACSProjectile_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "CSProjectile.h" },
		{ "ModuleRelativePath", "Public/CSProjectile.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACSProjectile_Statics::NewProp_CollisionComponent_MetaData[] = {
		{ "Category", "Components" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/CSProjectile.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACSProjectile_Statics::NewProp_CollisionComponent = { "CollisionComponent", nullptr, (EPropertyFlags)0x00200800000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACSProjectile, CollisionComponent), Z_Construct_UClass_USphereComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ACSProjectile_Statics::NewProp_CollisionComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACSProjectile_Statics::NewProp_CollisionComponent_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACSProjectile_Statics::NewProp_MeshComponent_MetaData[] = {
		{ "Category", "Components" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/CSProjectile.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACSProjectile_Statics::NewProp_MeshComponent = { "MeshComponent", nullptr, (EPropertyFlags)0x00200800000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACSProjectile, MeshComponent), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ACSProjectile_Statics::NewProp_MeshComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACSProjectile_Statics::NewProp_MeshComponent_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACSProjectile_Statics::NewProp_BaseDamage_MetaData[] = {
		{ "Category", "Projectile" },
		{ "ModuleRelativePath", "Public/CSProjectile.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ACSProjectile_Statics::NewProp_BaseDamage = { "BaseDamage", nullptr, (EPropertyFlags)0x0020080000010015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACSProjectile, BaseDamage), METADATA_PARAMS(Z_Construct_UClass_ACSProjectile_Statics::NewProp_BaseDamage_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACSProjectile_Statics::NewProp_BaseDamage_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACSProjectile_Statics::NewProp_DamageType_MetaData[] = {
		{ "Category", "Projectile" },
		{ "ModuleRelativePath", "Public/CSProjectile.h" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_ACSProjectile_Statics::NewProp_DamageType = { "DamageType", nullptr, (EPropertyFlags)0x0024080000010015, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACSProjectile, DamageType), Z_Construct_UClass_UDamageType_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_ACSProjectile_Statics::NewProp_DamageType_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACSProjectile_Statics::NewProp_DamageType_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACSProjectile_Statics::NewProp_TrailEffect_MetaData[] = {
		{ "Category", "Projectile" },
		{ "ModuleRelativePath", "Public/CSProjectile.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACSProjectile_Statics::NewProp_TrailEffect = { "TrailEffect", nullptr, (EPropertyFlags)0x0020080000010015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACSProjectile, TrailEffect), Z_Construct_UClass_UNiagaraSystem_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ACSProjectile_Statics::NewProp_TrailEffect_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACSProjectile_Statics::NewProp_TrailEffect_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACSProjectile_Statics::NewProp_DefaultImpactEffect_MetaData[] = {
		{ "Category", "Projectile" },
		{ "ModuleRelativePath", "Public/CSProjectile.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACSProjectile_Statics::NewProp_DefaultImpactEffect = { "DefaultImpactEffect", nullptr, (EPropertyFlags)0x0020080000010015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACSProjectile, DefaultImpactEffect), Z_Construct_UClass_UNiagaraSystem_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ACSProjectile_Statics::NewProp_DefaultImpactEffect_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACSProjectile_Statics::NewProp_DefaultImpactEffect_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACSProjectile_Statics::NewProp_FleshImpactEffect_MetaData[] = {
		{ "Category", "Projectile" },
		{ "ModuleRelativePath", "Public/CSProjectile.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACSProjectile_Statics::NewProp_FleshImpactEffect = { "FleshImpactEffect", nullptr, (EPropertyFlags)0x0020080000010015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACSProjectile, FleshImpactEffect), Z_Construct_UClass_UNiagaraSystem_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ACSProjectile_Statics::NewProp_FleshImpactEffect_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACSProjectile_Statics::NewProp_FleshImpactEffect_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACSProjectile_Statics::NewProp_DefaultImpactSound_MetaData[] = {
		{ "Category", "Projectile|Sounds" },
		{ "ModuleRelativePath", "Public/CSProjectile.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACSProjectile_Statics::NewProp_DefaultImpactSound = { "DefaultImpactSound", nullptr, (EPropertyFlags)0x0020080000010015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACSProjectile, DefaultImpactSound), Z_Construct_UClass_USoundBase_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ACSProjectile_Statics::NewProp_DefaultImpactSound_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACSProjectile_Statics::NewProp_DefaultImpactSound_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ACSProjectile_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACSProjectile_Statics::NewProp_CollisionComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACSProjectile_Statics::NewProp_MeshComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACSProjectile_Statics::NewProp_BaseDamage,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACSProjectile_Statics::NewProp_DamageType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACSProjectile_Statics::NewProp_TrailEffect,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACSProjectile_Statics::NewProp_DefaultImpactEffect,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACSProjectile_Statics::NewProp_FleshImpactEffect,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACSProjectile_Statics::NewProp_DefaultImpactSound,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ACSProjectile_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ACSProjectile>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ACSProjectile_Statics::ClassParams = {
		&ACSProjectile::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ACSProjectile_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ACSProjectile_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ACSProjectile_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ACSProjectile_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ACSProjectile()
	{
		if (!Z_Registration_Info_UClass_ACSProjectile.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ACSProjectile.OuterSingleton, Z_Construct_UClass_ACSProjectile_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ACSProjectile.OuterSingleton;
	}
	template<> COMBATSYSTEM_API UClass* StaticClass<ACSProjectile>()
	{
		return ACSProjectile::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ACSProjectile);
	struct Z_CompiledInDeferFile_FID_CombatSystem_Source_CombatSystem_Public_CSProjectile_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_CombatSystem_Source_CombatSystem_Public_CSProjectile_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ACSProjectile, ACSProjectile::StaticClass, TEXT("ACSProjectile"), &Z_Registration_Info_UClass_ACSProjectile, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ACSProjectile), 2651900410U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_CombatSystem_Source_CombatSystem_Public_CSProjectile_h_3581571942(TEXT("/Script/CombatSystem"),
		Z_CompiledInDeferFile_FID_CombatSystem_Source_CombatSystem_Public_CSProjectile_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_CombatSystem_Source_CombatSystem_Public_CSProjectile_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
