// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CombatSystem/Public/CSCharacter.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCSCharacter() {}
// Cross Module References
	COMBATSYSTEM_API UClass* Z_Construct_UClass_ACSCharacter_NoRegister();
	COMBATSYSTEM_API UClass* Z_Construct_UClass_ACSCharacter();
	ENGINE_API UClass* Z_Construct_UClass_ACharacter();
	UPackage* Z_Construct_UPackage__Script_CombatSystem();
	ENGINE_API UClass* Z_Construct_UClass_USpringArmComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UCameraComponent_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	COMBATSYSTEM_API UClass* Z_Construct_UClass_ACSWeapon_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(ACSCharacter::execStopAttacking)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->StopAttacking();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ACSCharacter::execStartAttacking)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->StartAttacking();
		P_NATIVE_END;
	}
	void ACSCharacter::StaticRegisterNativesACSCharacter()
	{
		UClass* Class = ACSCharacter::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "StartAttacking", &ACSCharacter::execStartAttacking },
			{ "StopAttacking", &ACSCharacter::execStopAttacking },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ACSCharacter_StartAttacking_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACSCharacter_StartAttacking_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CSCharacter.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ACSCharacter_StartAttacking_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ACSCharacter, nullptr, "StartAttacking", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ACSCharacter_StartAttacking_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ACSCharacter_StartAttacking_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ACSCharacter_StartAttacking()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ACSCharacter_StartAttacking_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ACSCharacter_StopAttacking_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACSCharacter_StopAttacking_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CSCharacter.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ACSCharacter_StopAttacking_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ACSCharacter, nullptr, "StopAttacking", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ACSCharacter_StopAttacking_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ACSCharacter_StopAttacking_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ACSCharacter_StopAttacking()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ACSCharacter_StopAttacking_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ACSCharacter_NoRegister()
	{
		return ACSCharacter::StaticClass();
	}
	struct Z_Construct_UClass_ACSCharacter_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SpringArmComp_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_SpringArmComp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CameraComp_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_CameraComp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TargetLocked_MetaData[];
#endif
		static void NewProp_TargetLocked_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_TargetLocked;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WantsToAttack_MetaData[];
#endif
		static void NewProp_WantsToAttack_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_WantsToAttack;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AttackRequestTime_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_AttackRequestTime;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StarterWeaponClass_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_StarterWeaponClass;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WeaponAttachSocketName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_WeaponAttachSocketName;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ACSCharacter_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ACharacter,
		(UObject* (*)())Z_Construct_UPackage__Script_CombatSystem,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ACSCharacter_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ACSCharacter_StartAttacking, "StartAttacking" }, // 4110175664
		{ &Z_Construct_UFunction_ACSCharacter_StopAttacking, "StopAttacking" }, // 3778229867
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACSCharacter_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "CSCharacter.h" },
		{ "ModuleRelativePath", "Public/CSCharacter.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACSCharacter_Statics::NewProp_SpringArmComp_MetaData[] = {
		{ "Category", "Components" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/CSCharacter.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACSCharacter_Statics::NewProp_SpringArmComp = { "SpringArmComp", nullptr, (EPropertyFlags)0x00200800000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACSCharacter, SpringArmComp), Z_Construct_UClass_USpringArmComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ACSCharacter_Statics::NewProp_SpringArmComp_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACSCharacter_Statics::NewProp_SpringArmComp_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACSCharacter_Statics::NewProp_CameraComp_MetaData[] = {
		{ "Category", "Components" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/CSCharacter.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACSCharacter_Statics::NewProp_CameraComp = { "CameraComp", nullptr, (EPropertyFlags)0x00200800000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACSCharacter, CameraComp), Z_Construct_UClass_UCameraComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ACSCharacter_Statics::NewProp_CameraComp_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACSCharacter_Statics::NewProp_CameraComp_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACSCharacter_Statics::NewProp_TargetLocked_MetaData[] = {
		{ "Category", "CSCharacter" },
		{ "ModuleRelativePath", "Public/CSCharacter.h" },
	};
#endif
	void Z_Construct_UClass_ACSCharacter_Statics::NewProp_TargetLocked_SetBit(void* Obj)
	{
		((ACSCharacter*)Obj)->TargetLocked = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ACSCharacter_Statics::NewProp_TargetLocked = { "TargetLocked", nullptr, (EPropertyFlags)0x0020080000020015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ACSCharacter), &Z_Construct_UClass_ACSCharacter_Statics::NewProp_TargetLocked_SetBit, METADATA_PARAMS(Z_Construct_UClass_ACSCharacter_Statics::NewProp_TargetLocked_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACSCharacter_Statics::NewProp_TargetLocked_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACSCharacter_Statics::NewProp_WantsToAttack_MetaData[] = {
		{ "Category", "CSCharacter" },
		{ "ModuleRelativePath", "Public/CSCharacter.h" },
	};
#endif
	void Z_Construct_UClass_ACSCharacter_Statics::NewProp_WantsToAttack_SetBit(void* Obj)
	{
		((ACSCharacter*)Obj)->WantsToAttack = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ACSCharacter_Statics::NewProp_WantsToAttack = { "WantsToAttack", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ACSCharacter), &Z_Construct_UClass_ACSCharacter_Statics::NewProp_WantsToAttack_SetBit, METADATA_PARAMS(Z_Construct_UClass_ACSCharacter_Statics::NewProp_WantsToAttack_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACSCharacter_Statics::NewProp_WantsToAttack_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACSCharacter_Statics::NewProp_AttackRequestTime_MetaData[] = {
		{ "Category", "Player" },
		{ "ModuleRelativePath", "Public/CSCharacter.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ACSCharacter_Statics::NewProp_AttackRequestTime = { "AttackRequestTime", nullptr, (EPropertyFlags)0x0020080000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACSCharacter, AttackRequestTime), METADATA_PARAMS(Z_Construct_UClass_ACSCharacter_Statics::NewProp_AttackRequestTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACSCharacter_Statics::NewProp_AttackRequestTime_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACSCharacter_Statics::NewProp_StarterWeaponClass_MetaData[] = {
		{ "Category", "Player" },
		{ "ModuleRelativePath", "Public/CSCharacter.h" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_ACSCharacter_Statics::NewProp_StarterWeaponClass = { "StarterWeaponClass", nullptr, (EPropertyFlags)0x0024080000010001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACSCharacter, StarterWeaponClass), Z_Construct_UClass_ACSWeapon_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_ACSCharacter_Statics::NewProp_StarterWeaponClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACSCharacter_Statics::NewProp_StarterWeaponClass_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACSCharacter_Statics::NewProp_WeaponAttachSocketName_MetaData[] = {
		{ "Category", "Player" },
		{ "ModuleRelativePath", "Public/CSCharacter.h" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_ACSCharacter_Statics::NewProp_WeaponAttachSocketName = { "WeaponAttachSocketName", nullptr, (EPropertyFlags)0x0020080000030001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACSCharacter, WeaponAttachSocketName), METADATA_PARAMS(Z_Construct_UClass_ACSCharacter_Statics::NewProp_WeaponAttachSocketName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACSCharacter_Statics::NewProp_WeaponAttachSocketName_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ACSCharacter_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACSCharacter_Statics::NewProp_SpringArmComp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACSCharacter_Statics::NewProp_CameraComp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACSCharacter_Statics::NewProp_TargetLocked,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACSCharacter_Statics::NewProp_WantsToAttack,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACSCharacter_Statics::NewProp_AttackRequestTime,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACSCharacter_Statics::NewProp_StarterWeaponClass,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACSCharacter_Statics::NewProp_WeaponAttachSocketName,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ACSCharacter_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ACSCharacter>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ACSCharacter_Statics::ClassParams = {
		&ACSCharacter::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ACSCharacter_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ACSCharacter_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ACSCharacter_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ACSCharacter_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ACSCharacter()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UECodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ACSCharacter_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ACSCharacter, 3702056224);
	template<> COMBATSYSTEM_API UClass* StaticClass<ACSCharacter>()
	{
		return ACSCharacter::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ACSCharacter(Z_Construct_UClass_ACSCharacter, &ACSCharacter::StaticClass, TEXT("/Script/CombatSystem"), TEXT("ACSCharacter"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ACSCharacter);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
