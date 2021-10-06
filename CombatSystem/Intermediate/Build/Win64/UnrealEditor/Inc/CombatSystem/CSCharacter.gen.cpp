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
	COMBATSYSTEM_API UClass* Z_Construct_UClass_ACSWeapon_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USpringArmComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UCameraComponent_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
// End Cross Module References
	DEFINE_FUNCTION(ACSCharacter::execGetCurrentWeapon)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(ACSWeapon**)Z_Param__Result=P_THIS->GetCurrentWeapon();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ACSCharacter::execStartDodge)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->StartDodge();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ACSCharacter::execDeleteDodgeRequest)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->DeleteDodgeRequest();
		P_NATIVE_END;
	}
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
			{ "DeleteDodgeRequest", &ACSCharacter::execDeleteDodgeRequest },
			{ "GetCurrentWeapon", &ACSCharacter::execGetCurrentWeapon },
			{ "StartAttacking", &ACSCharacter::execStartAttacking },
			{ "StartDodge", &ACSCharacter::execStartDodge },
			{ "StopAttacking", &ACSCharacter::execStopAttacking },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ACSCharacter_DeleteDodgeRequest_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACSCharacter_DeleteDodgeRequest_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CSCharacter.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ACSCharacter_DeleteDodgeRequest_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ACSCharacter, nullptr, "DeleteDodgeRequest", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ACSCharacter_DeleteDodgeRequest_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ACSCharacter_DeleteDodgeRequest_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ACSCharacter_DeleteDodgeRequest()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ACSCharacter_DeleteDodgeRequest_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ACSCharacter_GetCurrentWeapon_Statics
	{
		struct CSCharacter_eventGetCurrentWeapon_Parms
		{
			ACSWeapon* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ACSCharacter_GetCurrentWeapon_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CSCharacter_eventGetCurrentWeapon_Parms, ReturnValue), Z_Construct_UClass_ACSWeapon_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ACSCharacter_GetCurrentWeapon_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACSCharacter_GetCurrentWeapon_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACSCharacter_GetCurrentWeapon_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CSCharacter.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ACSCharacter_GetCurrentWeapon_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ACSCharacter, nullptr, "GetCurrentWeapon", nullptr, nullptr, sizeof(CSCharacter_eventGetCurrentWeapon_Parms), Z_Construct_UFunction_ACSCharacter_GetCurrentWeapon_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ACSCharacter_GetCurrentWeapon_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ACSCharacter_GetCurrentWeapon_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ACSCharacter_GetCurrentWeapon_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ACSCharacter_GetCurrentWeapon()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ACSCharacter_GetCurrentWeapon_Statics::FuncParams);
		}
		return ReturnFunction;
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
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ACSCharacter_StartAttacking_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ACSCharacter, nullptr, "StartAttacking", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ACSCharacter_StartAttacking_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ACSCharacter_StartAttacking_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ACSCharacter_StartAttacking()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ACSCharacter_StartAttacking_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ACSCharacter_StartDodge_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACSCharacter_StartDodge_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CSCharacter.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ACSCharacter_StartDodge_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ACSCharacter, nullptr, "StartDodge", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ACSCharacter_StartDodge_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ACSCharacter_StartDodge_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ACSCharacter_StartDodge()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ACSCharacter_StartDodge_Statics::FuncParams);
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
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ACSCharacter_StopAttacking_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ACSCharacter, nullptr, "StopAttacking", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ACSCharacter_StopAttacking_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ACSCharacter_StopAttacking_Statics::Function_MetaDataParams)) };
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
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ActionsRequestTime_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ActionsRequestTime;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WantsToDodge_MetaData[];
#endif
		static void NewProp_WantsToDodge_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_WantsToDodge;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DodgeSpeed_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_DodgeSpeed;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_IsDodging_MetaData[];
#endif
		static void NewProp_IsDodging_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_IsDodging;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DodgeTime_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_DodgeTime;
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
		{ &Z_Construct_UFunction_ACSCharacter_DeleteDodgeRequest, "DeleteDodgeRequest" }, // 2534698850
		{ &Z_Construct_UFunction_ACSCharacter_GetCurrentWeapon, "GetCurrentWeapon" }, // 1145097717
		{ &Z_Construct_UFunction_ACSCharacter_StartAttacking, "StartAttacking" }, // 1852243085
		{ &Z_Construct_UFunction_ACSCharacter_StartDodge, "StartDodge" }, // 556831042
		{ &Z_Construct_UFunction_ACSCharacter_StopAttacking, "StopAttacking" }, // 3763771486
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
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACSCharacter_Statics::NewProp_ActionsRequestTime_MetaData[] = {
		{ "Category", "Player" },
		{ "ModuleRelativePath", "Public/CSCharacter.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ACSCharacter_Statics::NewProp_ActionsRequestTime = { "ActionsRequestTime", nullptr, (EPropertyFlags)0x0020080000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACSCharacter, ActionsRequestTime), METADATA_PARAMS(Z_Construct_UClass_ACSCharacter_Statics::NewProp_ActionsRequestTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACSCharacter_Statics::NewProp_ActionsRequestTime_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACSCharacter_Statics::NewProp_WantsToDodge_MetaData[] = {
		{ "Category", "CSCharacter" },
		{ "ModuleRelativePath", "Public/CSCharacter.h" },
	};
#endif
	void Z_Construct_UClass_ACSCharacter_Statics::NewProp_WantsToDodge_SetBit(void* Obj)
	{
		((ACSCharacter*)Obj)->WantsToDodge = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ACSCharacter_Statics::NewProp_WantsToDodge = { "WantsToDodge", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ACSCharacter), &Z_Construct_UClass_ACSCharacter_Statics::NewProp_WantsToDodge_SetBit, METADATA_PARAMS(Z_Construct_UClass_ACSCharacter_Statics::NewProp_WantsToDodge_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACSCharacter_Statics::NewProp_WantsToDodge_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACSCharacter_Statics::NewProp_DodgeSpeed_MetaData[] = {
		{ "Category", "CSCharacter" },
		{ "ModuleRelativePath", "Public/CSCharacter.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ACSCharacter_Statics::NewProp_DodgeSpeed = { "DodgeSpeed", nullptr, (EPropertyFlags)0x0020080000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACSCharacter, DodgeSpeed), METADATA_PARAMS(Z_Construct_UClass_ACSCharacter_Statics::NewProp_DodgeSpeed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACSCharacter_Statics::NewProp_DodgeSpeed_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACSCharacter_Statics::NewProp_IsDodging_MetaData[] = {
		{ "Category", "CSCharacter" },
		{ "ModuleRelativePath", "Public/CSCharacter.h" },
	};
#endif
	void Z_Construct_UClass_ACSCharacter_Statics::NewProp_IsDodging_SetBit(void* Obj)
	{
		((ACSCharacter*)Obj)->IsDodging = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ACSCharacter_Statics::NewProp_IsDodging = { "IsDodging", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ACSCharacter), &Z_Construct_UClass_ACSCharacter_Statics::NewProp_IsDodging_SetBit, METADATA_PARAMS(Z_Construct_UClass_ACSCharacter_Statics::NewProp_IsDodging_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACSCharacter_Statics::NewProp_IsDodging_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACSCharacter_Statics::NewProp_DodgeTime_MetaData[] = {
		{ "Category", "CSCharacter" },
		{ "ModuleRelativePath", "Public/CSCharacter.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ACSCharacter_Statics::NewProp_DodgeTime = { "DodgeTime", nullptr, (EPropertyFlags)0x0020080000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACSCharacter, DodgeTime), METADATA_PARAMS(Z_Construct_UClass_ACSCharacter_Statics::NewProp_DodgeTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACSCharacter_Statics::NewProp_DodgeTime_MetaData)) };
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
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACSCharacter_Statics::NewProp_ActionsRequestTime,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACSCharacter_Statics::NewProp_WantsToDodge,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACSCharacter_Statics::NewProp_DodgeSpeed,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACSCharacter_Statics::NewProp_IsDodging,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACSCharacter_Statics::NewProp_DodgeTime,
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
	IMPLEMENT_CLASS(ACSCharacter, 2404822606);
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
