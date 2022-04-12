// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CombatSystem/Public/Equipment/CSMeleeWeapon.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCSMeleeWeapon() {}
// Cross Module References
	COMBATSYSTEM_API UClass* Z_Construct_UClass_ACSMeleeWeapon_NoRegister();
	COMBATSYSTEM_API UClass* Z_Construct_UClass_ACSMeleeWeapon();
	COMBATSYSTEM_API UClass* Z_Construct_UClass_ACSWeapon();
	UPackage* Z_Construct_UPackage__Script_CombatSystem();
	ENGINE_API UClass* Z_Construct_UClass_UPrimitiveComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FHitResult();
	ENGINE_API UClass* Z_Construct_UClass_UBoxComponent_NoRegister();
	NIAGARA_API UClass* Z_Construct_UClass_UNiagaraSystem_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USoundBase_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(ACSMeleeWeapon::execOnOverlap)
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
	DEFINE_FUNCTION(ACSMeleeWeapon::execSetDamageEnabled)
	{
		P_GET_UBOOL(Z_Param_Enabled);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetDamageEnabled(Z_Param_Enabled);
		P_NATIVE_END;
	}
	void ACSMeleeWeapon::StaticRegisterNativesACSMeleeWeapon()
	{
		UClass* Class = ACSMeleeWeapon::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnOverlap", &ACSMeleeWeapon::execOnOverlap },
			{ "SetDamageEnabled", &ACSMeleeWeapon::execSetDamageEnabled },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ACSMeleeWeapon_OnOverlap_Statics
	{
		struct CSMeleeWeapon_eventOnOverlap_Parms
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
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACSMeleeWeapon_OnOverlap_Statics::NewProp_OverlappedComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ACSMeleeWeapon_OnOverlap_Statics::NewProp_OverlappedComponent = { "OverlappedComponent", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CSMeleeWeapon_eventOnOverlap_Parms, OverlappedComponent), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_ACSMeleeWeapon_OnOverlap_Statics::NewProp_OverlappedComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ACSMeleeWeapon_OnOverlap_Statics::NewProp_OverlappedComponent_MetaData)) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ACSMeleeWeapon_OnOverlap_Statics::NewProp_OtherActor = { "OtherActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CSMeleeWeapon_eventOnOverlap_Parms, OtherActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACSMeleeWeapon_OnOverlap_Statics::NewProp_OtherComp_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ACSMeleeWeapon_OnOverlap_Statics::NewProp_OtherComp = { "OtherComp", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CSMeleeWeapon_eventOnOverlap_Parms, OtherComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_ACSMeleeWeapon_OnOverlap_Statics::NewProp_OtherComp_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ACSMeleeWeapon_OnOverlap_Statics::NewProp_OtherComp_MetaData)) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ACSMeleeWeapon_OnOverlap_Statics::NewProp_OtherBodyIndex = { "OtherBodyIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CSMeleeWeapon_eventOnOverlap_Parms, OtherBodyIndex), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_ACSMeleeWeapon_OnOverlap_Statics::NewProp_bFromSweep_SetBit(void* Obj)
	{
		((CSMeleeWeapon_eventOnOverlap_Parms*)Obj)->bFromSweep = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ACSMeleeWeapon_OnOverlap_Statics::NewProp_bFromSweep = { "bFromSweep", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(CSMeleeWeapon_eventOnOverlap_Parms), &Z_Construct_UFunction_ACSMeleeWeapon_OnOverlap_Statics::NewProp_bFromSweep_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACSMeleeWeapon_OnOverlap_Statics::NewProp_SweepResult_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ACSMeleeWeapon_OnOverlap_Statics::NewProp_SweepResult = { "SweepResult", nullptr, (EPropertyFlags)0x0010008008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CSMeleeWeapon_eventOnOverlap_Parms, SweepResult), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(Z_Construct_UFunction_ACSMeleeWeapon_OnOverlap_Statics::NewProp_SweepResult_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ACSMeleeWeapon_OnOverlap_Statics::NewProp_SweepResult_MetaData)) }; // 1416937132
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ACSMeleeWeapon_OnOverlap_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACSMeleeWeapon_OnOverlap_Statics::NewProp_OverlappedComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACSMeleeWeapon_OnOverlap_Statics::NewProp_OtherActor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACSMeleeWeapon_OnOverlap_Statics::NewProp_OtherComp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACSMeleeWeapon_OnOverlap_Statics::NewProp_OtherBodyIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACSMeleeWeapon_OnOverlap_Statics::NewProp_bFromSweep,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACSMeleeWeapon_OnOverlap_Statics::NewProp_SweepResult,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACSMeleeWeapon_OnOverlap_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Equipment/CSMeleeWeapon.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ACSMeleeWeapon_OnOverlap_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ACSMeleeWeapon, nullptr, "OnOverlap", nullptr, nullptr, sizeof(Z_Construct_UFunction_ACSMeleeWeapon_OnOverlap_Statics::CSMeleeWeapon_eventOnOverlap_Parms), Z_Construct_UFunction_ACSMeleeWeapon_OnOverlap_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ACSMeleeWeapon_OnOverlap_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00480401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ACSMeleeWeapon_OnOverlap_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ACSMeleeWeapon_OnOverlap_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ACSMeleeWeapon_OnOverlap()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ACSMeleeWeapon_OnOverlap_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ACSMeleeWeapon_SetDamageEnabled_Statics
	{
		struct CSMeleeWeapon_eventSetDamageEnabled_Parms
		{
			bool Enabled;
		};
		static void NewProp_Enabled_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_Enabled;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_ACSMeleeWeapon_SetDamageEnabled_Statics::NewProp_Enabled_SetBit(void* Obj)
	{
		((CSMeleeWeapon_eventSetDamageEnabled_Parms*)Obj)->Enabled = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ACSMeleeWeapon_SetDamageEnabled_Statics::NewProp_Enabled = { "Enabled", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(CSMeleeWeapon_eventSetDamageEnabled_Parms), &Z_Construct_UFunction_ACSMeleeWeapon_SetDamageEnabled_Statics::NewProp_Enabled_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ACSMeleeWeapon_SetDamageEnabled_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACSMeleeWeapon_SetDamageEnabled_Statics::NewProp_Enabled,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACSMeleeWeapon_SetDamageEnabled_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Equipment/CSMeleeWeapon.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ACSMeleeWeapon_SetDamageEnabled_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ACSMeleeWeapon, nullptr, "SetDamageEnabled", nullptr, nullptr, sizeof(Z_Construct_UFunction_ACSMeleeWeapon_SetDamageEnabled_Statics::CSMeleeWeapon_eventSetDamageEnabled_Parms), Z_Construct_UFunction_ACSMeleeWeapon_SetDamageEnabled_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ACSMeleeWeapon_SetDamageEnabled_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ACSMeleeWeapon_SetDamageEnabled_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ACSMeleeWeapon_SetDamageEnabled_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ACSMeleeWeapon_SetDamageEnabled()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ACSMeleeWeapon_SetDamageEnabled_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ACSMeleeWeapon);
	UClass* Z_Construct_UClass_ACSMeleeWeapon_NoRegister()
	{
		return ACSMeleeWeapon::StaticClass();
	}
	struct Z_Construct_UClass_ACSMeleeWeapon_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CollisionComp_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_CollisionComp;
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
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FleshImpactSound_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_FleshImpactSound;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SecondaryFleshImpactSound_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_SecondaryFleshImpactSound;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DefaultSlashSound_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_DefaultSlashSound;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SecondarySlashSound_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_SecondarySlashSound;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ACSMeleeWeapon_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ACSWeapon,
		(UObject* (*)())Z_Construct_UPackage__Script_CombatSystem,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ACSMeleeWeapon_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ACSMeleeWeapon_OnOverlap, "OnOverlap" }, // 2747922273
		{ &Z_Construct_UFunction_ACSMeleeWeapon_SetDamageEnabled, "SetDamageEnabled" }, // 1321058297
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACSMeleeWeapon_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Equipment/CSMeleeWeapon.h" },
		{ "ModuleRelativePath", "Public/Equipment/CSMeleeWeapon.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACSMeleeWeapon_Statics::NewProp_CollisionComp_MetaData[] = {
		{ "Category", "Components" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Equipment/CSMeleeWeapon.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACSMeleeWeapon_Statics::NewProp_CollisionComp = { "CollisionComp", nullptr, (EPropertyFlags)0x00200800000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACSMeleeWeapon, CollisionComp), Z_Construct_UClass_UBoxComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ACSMeleeWeapon_Statics::NewProp_CollisionComp_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACSMeleeWeapon_Statics::NewProp_CollisionComp_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACSMeleeWeapon_Statics::NewProp_TrailEffect_MetaData[] = {
		{ "Category", "Weapon" },
		{ "ModuleRelativePath", "Public/Equipment/CSMeleeWeapon.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACSMeleeWeapon_Statics::NewProp_TrailEffect = { "TrailEffect", nullptr, (EPropertyFlags)0x0020080000010015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACSMeleeWeapon, TrailEffect), Z_Construct_UClass_UNiagaraSystem_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ACSMeleeWeapon_Statics::NewProp_TrailEffect_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACSMeleeWeapon_Statics::NewProp_TrailEffect_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACSMeleeWeapon_Statics::NewProp_DefaultImpactEffect_MetaData[] = {
		{ "Category", "Weapon" },
		{ "ModuleRelativePath", "Public/Equipment/CSMeleeWeapon.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACSMeleeWeapon_Statics::NewProp_DefaultImpactEffect = { "DefaultImpactEffect", nullptr, (EPropertyFlags)0x0020080000010015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACSMeleeWeapon, DefaultImpactEffect), Z_Construct_UClass_UNiagaraSystem_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ACSMeleeWeapon_Statics::NewProp_DefaultImpactEffect_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACSMeleeWeapon_Statics::NewProp_DefaultImpactEffect_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACSMeleeWeapon_Statics::NewProp_FleshImpactEffect_MetaData[] = {
		{ "Category", "Weapon" },
		{ "ModuleRelativePath", "Public/Equipment/CSMeleeWeapon.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACSMeleeWeapon_Statics::NewProp_FleshImpactEffect = { "FleshImpactEffect", nullptr, (EPropertyFlags)0x0020080000010015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACSMeleeWeapon, FleshImpactEffect), Z_Construct_UClass_UNiagaraSystem_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ACSMeleeWeapon_Statics::NewProp_FleshImpactEffect_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACSMeleeWeapon_Statics::NewProp_FleshImpactEffect_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACSMeleeWeapon_Statics::NewProp_FleshImpactSound_MetaData[] = {
		{ "Category", "Weapon|Sounds" },
		{ "ModuleRelativePath", "Public/Equipment/CSMeleeWeapon.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACSMeleeWeapon_Statics::NewProp_FleshImpactSound = { "FleshImpactSound", nullptr, (EPropertyFlags)0x0020080000010015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACSMeleeWeapon, FleshImpactSound), Z_Construct_UClass_USoundBase_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ACSMeleeWeapon_Statics::NewProp_FleshImpactSound_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACSMeleeWeapon_Statics::NewProp_FleshImpactSound_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACSMeleeWeapon_Statics::NewProp_SecondaryFleshImpactSound_MetaData[] = {
		{ "Category", "Weapon|Sounds" },
		{ "ModuleRelativePath", "Public/Equipment/CSMeleeWeapon.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACSMeleeWeapon_Statics::NewProp_SecondaryFleshImpactSound = { "SecondaryFleshImpactSound", nullptr, (EPropertyFlags)0x0020080000010015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACSMeleeWeapon, SecondaryFleshImpactSound), Z_Construct_UClass_USoundBase_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ACSMeleeWeapon_Statics::NewProp_SecondaryFleshImpactSound_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACSMeleeWeapon_Statics::NewProp_SecondaryFleshImpactSound_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACSMeleeWeapon_Statics::NewProp_DefaultSlashSound_MetaData[] = {
		{ "Category", "Weapon|Sounds" },
		{ "ModuleRelativePath", "Public/Equipment/CSMeleeWeapon.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACSMeleeWeapon_Statics::NewProp_DefaultSlashSound = { "DefaultSlashSound", nullptr, (EPropertyFlags)0x0020080000010015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACSMeleeWeapon, DefaultSlashSound), Z_Construct_UClass_USoundBase_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ACSMeleeWeapon_Statics::NewProp_DefaultSlashSound_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACSMeleeWeapon_Statics::NewProp_DefaultSlashSound_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACSMeleeWeapon_Statics::NewProp_SecondarySlashSound_MetaData[] = {
		{ "Category", "Weapon|Sounds" },
		{ "ModuleRelativePath", "Public/Equipment/CSMeleeWeapon.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACSMeleeWeapon_Statics::NewProp_SecondarySlashSound = { "SecondarySlashSound", nullptr, (EPropertyFlags)0x0020080000010015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACSMeleeWeapon, SecondarySlashSound), Z_Construct_UClass_USoundBase_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ACSMeleeWeapon_Statics::NewProp_SecondarySlashSound_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACSMeleeWeapon_Statics::NewProp_SecondarySlashSound_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ACSMeleeWeapon_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACSMeleeWeapon_Statics::NewProp_CollisionComp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACSMeleeWeapon_Statics::NewProp_TrailEffect,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACSMeleeWeapon_Statics::NewProp_DefaultImpactEffect,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACSMeleeWeapon_Statics::NewProp_FleshImpactEffect,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACSMeleeWeapon_Statics::NewProp_FleshImpactSound,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACSMeleeWeapon_Statics::NewProp_SecondaryFleshImpactSound,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACSMeleeWeapon_Statics::NewProp_DefaultSlashSound,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACSMeleeWeapon_Statics::NewProp_SecondarySlashSound,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ACSMeleeWeapon_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ACSMeleeWeapon>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ACSMeleeWeapon_Statics::ClassParams = {
		&ACSMeleeWeapon::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ACSMeleeWeapon_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ACSMeleeWeapon_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ACSMeleeWeapon_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ACSMeleeWeapon_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ACSMeleeWeapon()
	{
		if (!Z_Registration_Info_UClass_ACSMeleeWeapon.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ACSMeleeWeapon.OuterSingleton, Z_Construct_UClass_ACSMeleeWeapon_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ACSMeleeWeapon.OuterSingleton;
	}
	template<> COMBATSYSTEM_API UClass* StaticClass<ACSMeleeWeapon>()
	{
		return ACSMeleeWeapon::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ACSMeleeWeapon);
	struct Z_CompiledInDeferFile_FID_CombatSystem_Source_CombatSystem_Public_Equipment_CSMeleeWeapon_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_CombatSystem_Source_CombatSystem_Public_Equipment_CSMeleeWeapon_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ACSMeleeWeapon, ACSMeleeWeapon::StaticClass, TEXT("ACSMeleeWeapon"), &Z_Registration_Info_UClass_ACSMeleeWeapon, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ACSMeleeWeapon), 3748457137U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_CombatSystem_Source_CombatSystem_Public_Equipment_CSMeleeWeapon_h_1968637401(TEXT("/Script/CombatSystem"),
		Z_CompiledInDeferFile_FID_CombatSystem_Source_CombatSystem_Public_Equipment_CSMeleeWeapon_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_CombatSystem_Source_CombatSystem_Public_Equipment_CSMeleeWeapon_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
