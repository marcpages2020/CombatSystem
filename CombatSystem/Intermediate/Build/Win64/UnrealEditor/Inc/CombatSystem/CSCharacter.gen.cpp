// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CombatSystem/Public/CSCharacter.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCSCharacter() {}
// Cross Module References
	COMBATSYSTEM_API UClass* Z_Construct_UClass_ACSCharacter_NoRegister();
	COMBATSYSTEM_API UClass* Z_Construct_UClass_ACSCharacter();
	ENGINE_API UClass* Z_Construct_UClass_ACharacter();
	UPackage* Z_Construct_UPackage__Script_CombatSystem();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
	COMBATSYSTEM_API UEnum* Z_Construct_UEnum_CombatSystem_CharacterStateType();
	COMBATSYSTEM_API UClass* Z_Construct_UClass_UCSCharacterState_NoRegister();
	COMBATSYSTEM_API UClass* Z_Construct_UClass_ACSWeapon_NoRegister();
	COMBATSYSTEM_API UClass* Z_Construct_UClass_UCSHealthComponent_NoRegister();
	COMBATSYSTEM_API UClass* Z_Construct_UClass_UCSStaminaComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UDamageType_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AController_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	COMBATSYSTEM_API UClass* Z_Construct_UClass_UCSCameraManagerComponent_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	COMBATSYSTEM_API UClass* Z_Construct_UClass_ACSShield_NoRegister();
	COMBATSYSTEM_API UClass* Z_Construct_UClass_ACSRangedWeapon_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USpringArmComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UCameraComponent_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(ACSCharacter::execGetAimRotation)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FRotator*)Z_Param__Result=P_THIS->GetAimRotation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ACSCharacter::execSetParriable)
	{
		P_GET_UBOOL(Z_Param_Parriable);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetParriable(Z_Param_Parriable);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ACSCharacter::execGetStateCurrentSubstate)
	{
		P_GET_ENUM(CharacterStateType,Z_Param_StateType);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(uint8*)Z_Param__Result=P_THIS->GetStateCurrentSubstate(CharacterStateType(Z_Param_StateType));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ACSCharacter::execGetCurrentSubstate)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(uint8*)Z_Param__Result=P_THIS->GetCurrentSubstate();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ACSCharacter::execRequestState)
	{
		P_GET_ENUM(CharacterStateType,Z_Param_Type);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->RequestState(CharacterStateType(Z_Param_Type));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ACSCharacter::execGetLockedTarget)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(ACSCharacter**)Z_Param__Result=P_THIS->GetLockedTarget();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ACSCharacter::execGetCharacterState)
	{
		P_GET_ENUM(CharacterStateType,Z_Param_StateType);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UCSCharacterState**)Z_Param__Result=P_THIS->GetCharacterState(CharacterStateType(Z_Param_StateType));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ACSCharacter::execIsStateRequested)
	{
		P_GET_ENUM(CharacterStateType,Z_Param_Type);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsStateRequested(CharacterStateType(Z_Param_Type));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ACSCharacter::execGetCurrentWeapon)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(ACSWeapon**)Z_Param__Result=P_THIS->GetCurrentWeapon();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ACSCharacter::execGetStaminaComponent)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UCSStaminaComponent**)Z_Param__Result=P_THIS->GetStaminaComponent();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ACSCharacter::execGetHealthComponent)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UCSHealthComponent**)Z_Param__Result=P_THIS->GetHealthComponent();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ACSCharacter::execOnAnimationNotify)
	{
		P_GET_ENUM(CharacterStateType,Z_Param_StateType);
		P_GET_PROPERTY(FStrProperty,Z_Param_AnimationNotifyName);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnAnimationNotify(CharacterStateType(Z_Param_StateType),Z_Param_AnimationNotifyName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ACSCharacter::execOnAnimationEnded)
	{
		P_GET_ENUM(CharacterStateType,Z_Param_FinishedAnimationState);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnAnimationEnded(CharacterStateType(Z_Param_FinishedAnimationState));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ACSCharacter::execOnHealthChanged)
	{
		P_GET_OBJECT(UCSHealthComponent,Z_Param_HealthComponent);
		P_GET_PROPERTY(FFloatProperty,Z_Param_CurrentHealth);
		P_GET_PROPERTY(FFloatProperty,Z_Param_HealthDelta);
		P_GET_OBJECT(UDamageType,Z_Param_DamageType);
		P_GET_OBJECT(AController,Z_Param_InstigatedBy);
		P_GET_OBJECT(AActor,Z_Param_DamageCauser);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnHealthChanged(Z_Param_HealthComponent,Z_Param_CurrentHealth,Z_Param_HealthDelta,Z_Param_DamageType,Z_Param_InstigatedBy,Z_Param_DamageCauser);
		P_NATIVE_END;
	}
	static FName NAME_ACSCharacter_OnHit = FName(TEXT("OnHit"));
	void ACSCharacter::OnHit()
	{
		ProcessEvent(FindFunctionChecked(NAME_ACSCharacter_OnHit),NULL);
	}
	static FName NAME_ACSCharacter_OnSetAsTarget = FName(TEXT("OnSetAsTarget"));
	void ACSCharacter::OnSetAsTarget(bool IsTarget)
	{
		CSCharacter_eventOnSetAsTarget_Parms Parms;
		Parms.IsTarget=IsTarget ? true : false;
		ProcessEvent(FindFunctionChecked(NAME_ACSCharacter_OnSetAsTarget),&Parms);
	}
	static FName NAME_ACSCharacter_SetCrosshairActive = FName(TEXT("SetCrosshairActive"));
	void ACSCharacter::SetCrosshairActive(bool Active)
	{
		CSCharacter_eventSetCrosshairActive_Parms Parms;
		Parms.Active=Active ? true : false;
		ProcessEvent(FindFunctionChecked(NAME_ACSCharacter_SetCrosshairActive),&Parms);
	}
	static FName NAME_ACSCharacter_UpdateHealth = FName(TEXT("UpdateHealth"));
	void ACSCharacter::UpdateHealth(float UpdatedHealth)
	{
		CSCharacter_eventUpdateHealth_Parms Parms;
		Parms.UpdatedHealth=UpdatedHealth;
		ProcessEvent(FindFunctionChecked(NAME_ACSCharacter_UpdateHealth),&Parms);
	}
	static FName NAME_ACSCharacter_UpdateStamina = FName(TEXT("UpdateStamina"));
	void ACSCharacter::UpdateStamina(float UpdatedStamina)
	{
		CSCharacter_eventUpdateStamina_Parms Parms;
		Parms.UpdatedStamina=UpdatedStamina;
		ProcessEvent(FindFunctionChecked(NAME_ACSCharacter_UpdateStamina),&Parms);
	}
	void ACSCharacter::StaticRegisterNativesACSCharacter()
	{
		UClass* Class = ACSCharacter::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetAimRotation", &ACSCharacter::execGetAimRotation },
			{ "GetCharacterState", &ACSCharacter::execGetCharacterState },
			{ "GetCurrentSubstate", &ACSCharacter::execGetCurrentSubstate },
			{ "GetCurrentWeapon", &ACSCharacter::execGetCurrentWeapon },
			{ "GetHealthComponent", &ACSCharacter::execGetHealthComponent },
			{ "GetLockedTarget", &ACSCharacter::execGetLockedTarget },
			{ "GetStaminaComponent", &ACSCharacter::execGetStaminaComponent },
			{ "GetStateCurrentSubstate", &ACSCharacter::execGetStateCurrentSubstate },
			{ "IsStateRequested", &ACSCharacter::execIsStateRequested },
			{ "OnAnimationEnded", &ACSCharacter::execOnAnimationEnded },
			{ "OnAnimationNotify", &ACSCharacter::execOnAnimationNotify },
			{ "OnHealthChanged", &ACSCharacter::execOnHealthChanged },
			{ "RequestState", &ACSCharacter::execRequestState },
			{ "SetParriable", &ACSCharacter::execSetParriable },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ACSCharacter_GetAimRotation_Statics
	{
		struct CSCharacter_eventGetAimRotation_Parms
		{
			FRotator ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ACSCharacter_GetAimRotation_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CSCharacter_eventGetAimRotation_Parms, ReturnValue), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ACSCharacter_GetAimRotation_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACSCharacter_GetAimRotation_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACSCharacter_GetAimRotation_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CSCharacter.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ACSCharacter_GetAimRotation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ACSCharacter, nullptr, "GetAimRotation", nullptr, nullptr, sizeof(Z_Construct_UFunction_ACSCharacter_GetAimRotation_Statics::CSCharacter_eventGetAimRotation_Parms), Z_Construct_UFunction_ACSCharacter_GetAimRotation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ACSCharacter_GetAimRotation_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ACSCharacter_GetAimRotation_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ACSCharacter_GetAimRotation_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ACSCharacter_GetAimRotation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ACSCharacter_GetAimRotation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ACSCharacter_GetCharacterState_Statics
	{
		struct CSCharacter_eventGetCharacterState_Parms
		{
			CharacterStateType StateType;
			UCSCharacterState* ReturnValue;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_StateType_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_StateType;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_ACSCharacter_GetCharacterState_Statics::NewProp_StateType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_ACSCharacter_GetCharacterState_Statics::NewProp_StateType = { "StateType", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CSCharacter_eventGetCharacterState_Parms, StateType), Z_Construct_UEnum_CombatSystem_CharacterStateType, METADATA_PARAMS(nullptr, 0) }; // 1295661810
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ACSCharacter_GetCharacterState_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CSCharacter_eventGetCharacterState_Parms, ReturnValue), Z_Construct_UClass_UCSCharacterState_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ACSCharacter_GetCharacterState_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACSCharacter_GetCharacterState_Statics::NewProp_StateType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACSCharacter_GetCharacterState_Statics::NewProp_StateType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACSCharacter_GetCharacterState_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACSCharacter_GetCharacterState_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CSCharacter.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ACSCharacter_GetCharacterState_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ACSCharacter, nullptr, "GetCharacterState", nullptr, nullptr, sizeof(Z_Construct_UFunction_ACSCharacter_GetCharacterState_Statics::CSCharacter_eventGetCharacterState_Parms), Z_Construct_UFunction_ACSCharacter_GetCharacterState_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ACSCharacter_GetCharacterState_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ACSCharacter_GetCharacterState_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ACSCharacter_GetCharacterState_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ACSCharacter_GetCharacterState()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ACSCharacter_GetCharacterState_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ACSCharacter_GetCurrentSubstate_Statics
	{
		struct CSCharacter_eventGetCurrentSubstate_Parms
		{
			uint8 ReturnValue;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_ACSCharacter_GetCurrentSubstate_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CSCharacter_eventGetCurrentSubstate_Parms, ReturnValue), nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ACSCharacter_GetCurrentSubstate_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACSCharacter_GetCurrentSubstate_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACSCharacter_GetCurrentSubstate_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CSCharacter.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ACSCharacter_GetCurrentSubstate_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ACSCharacter, nullptr, "GetCurrentSubstate", nullptr, nullptr, sizeof(Z_Construct_UFunction_ACSCharacter_GetCurrentSubstate_Statics::CSCharacter_eventGetCurrentSubstate_Parms), Z_Construct_UFunction_ACSCharacter_GetCurrentSubstate_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ACSCharacter_GetCurrentSubstate_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ACSCharacter_GetCurrentSubstate_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ACSCharacter_GetCurrentSubstate_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ACSCharacter_GetCurrentSubstate()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ACSCharacter_GetCurrentSubstate_Statics::FuncParams);
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
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ACSCharacter_GetCurrentWeapon_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ACSCharacter, nullptr, "GetCurrentWeapon", nullptr, nullptr, sizeof(Z_Construct_UFunction_ACSCharacter_GetCurrentWeapon_Statics::CSCharacter_eventGetCurrentWeapon_Parms), Z_Construct_UFunction_ACSCharacter_GetCurrentWeapon_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ACSCharacter_GetCurrentWeapon_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ACSCharacter_GetCurrentWeapon_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ACSCharacter_GetCurrentWeapon_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ACSCharacter_GetCurrentWeapon()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ACSCharacter_GetCurrentWeapon_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ACSCharacter_GetHealthComponent_Statics
	{
		struct CSCharacter_eventGetHealthComponent_Parms
		{
			UCSHealthComponent* ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACSCharacter_GetHealthComponent_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ACSCharacter_GetHealthComponent_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CSCharacter_eventGetHealthComponent_Parms, ReturnValue), Z_Construct_UClass_UCSHealthComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_ACSCharacter_GetHealthComponent_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ACSCharacter_GetHealthComponent_Statics::NewProp_ReturnValue_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ACSCharacter_GetHealthComponent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACSCharacter_GetHealthComponent_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACSCharacter_GetHealthComponent_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CSCharacter.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ACSCharacter_GetHealthComponent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ACSCharacter, nullptr, "GetHealthComponent", nullptr, nullptr, sizeof(Z_Construct_UFunction_ACSCharacter_GetHealthComponent_Statics::CSCharacter_eventGetHealthComponent_Parms), Z_Construct_UFunction_ACSCharacter_GetHealthComponent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ACSCharacter_GetHealthComponent_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ACSCharacter_GetHealthComponent_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ACSCharacter_GetHealthComponent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ACSCharacter_GetHealthComponent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ACSCharacter_GetHealthComponent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ACSCharacter_GetLockedTarget_Statics
	{
		struct CSCharacter_eventGetLockedTarget_Parms
		{
			ACSCharacter* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ACSCharacter_GetLockedTarget_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CSCharacter_eventGetLockedTarget_Parms, ReturnValue), Z_Construct_UClass_ACSCharacter_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ACSCharacter_GetLockedTarget_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACSCharacter_GetLockedTarget_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACSCharacter_GetLockedTarget_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CSCharacter.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ACSCharacter_GetLockedTarget_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ACSCharacter, nullptr, "GetLockedTarget", nullptr, nullptr, sizeof(Z_Construct_UFunction_ACSCharacter_GetLockedTarget_Statics::CSCharacter_eventGetLockedTarget_Parms), Z_Construct_UFunction_ACSCharacter_GetLockedTarget_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ACSCharacter_GetLockedTarget_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ACSCharacter_GetLockedTarget_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ACSCharacter_GetLockedTarget_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ACSCharacter_GetLockedTarget()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ACSCharacter_GetLockedTarget_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ACSCharacter_GetStaminaComponent_Statics
	{
		struct CSCharacter_eventGetStaminaComponent_Parms
		{
			UCSStaminaComponent* ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACSCharacter_GetStaminaComponent_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ACSCharacter_GetStaminaComponent_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CSCharacter_eventGetStaminaComponent_Parms, ReturnValue), Z_Construct_UClass_UCSStaminaComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_ACSCharacter_GetStaminaComponent_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ACSCharacter_GetStaminaComponent_Statics::NewProp_ReturnValue_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ACSCharacter_GetStaminaComponent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACSCharacter_GetStaminaComponent_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACSCharacter_GetStaminaComponent_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CSCharacter.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ACSCharacter_GetStaminaComponent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ACSCharacter, nullptr, "GetStaminaComponent", nullptr, nullptr, sizeof(Z_Construct_UFunction_ACSCharacter_GetStaminaComponent_Statics::CSCharacter_eventGetStaminaComponent_Parms), Z_Construct_UFunction_ACSCharacter_GetStaminaComponent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ACSCharacter_GetStaminaComponent_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ACSCharacter_GetStaminaComponent_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ACSCharacter_GetStaminaComponent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ACSCharacter_GetStaminaComponent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ACSCharacter_GetStaminaComponent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ACSCharacter_GetStateCurrentSubstate_Statics
	{
		struct CSCharacter_eventGetStateCurrentSubstate_Parms
		{
			CharacterStateType StateType;
			uint8 ReturnValue;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_StateType_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_StateType;
		static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_ACSCharacter_GetStateCurrentSubstate_Statics::NewProp_StateType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_ACSCharacter_GetStateCurrentSubstate_Statics::NewProp_StateType = { "StateType", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CSCharacter_eventGetStateCurrentSubstate_Parms, StateType), Z_Construct_UEnum_CombatSystem_CharacterStateType, METADATA_PARAMS(nullptr, 0) }; // 1295661810
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_ACSCharacter_GetStateCurrentSubstate_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CSCharacter_eventGetStateCurrentSubstate_Parms, ReturnValue), nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ACSCharacter_GetStateCurrentSubstate_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACSCharacter_GetStateCurrentSubstate_Statics::NewProp_StateType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACSCharacter_GetStateCurrentSubstate_Statics::NewProp_StateType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACSCharacter_GetStateCurrentSubstate_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACSCharacter_GetStateCurrentSubstate_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CSCharacter.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ACSCharacter_GetStateCurrentSubstate_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ACSCharacter, nullptr, "GetStateCurrentSubstate", nullptr, nullptr, sizeof(Z_Construct_UFunction_ACSCharacter_GetStateCurrentSubstate_Statics::CSCharacter_eventGetStateCurrentSubstate_Parms), Z_Construct_UFunction_ACSCharacter_GetStateCurrentSubstate_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ACSCharacter_GetStateCurrentSubstate_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ACSCharacter_GetStateCurrentSubstate_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ACSCharacter_GetStateCurrentSubstate_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ACSCharacter_GetStateCurrentSubstate()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ACSCharacter_GetStateCurrentSubstate_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ACSCharacter_IsStateRequested_Statics
	{
		struct CSCharacter_eventIsStateRequested_Parms
		{
			CharacterStateType Type;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_Type_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_Type;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_ACSCharacter_IsStateRequested_Statics::NewProp_Type_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_ACSCharacter_IsStateRequested_Statics::NewProp_Type = { "Type", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CSCharacter_eventIsStateRequested_Parms, Type), Z_Construct_UEnum_CombatSystem_CharacterStateType, METADATA_PARAMS(nullptr, 0) }; // 1295661810
	void Z_Construct_UFunction_ACSCharacter_IsStateRequested_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((CSCharacter_eventIsStateRequested_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ACSCharacter_IsStateRequested_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(CSCharacter_eventIsStateRequested_Parms), &Z_Construct_UFunction_ACSCharacter_IsStateRequested_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ACSCharacter_IsStateRequested_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACSCharacter_IsStateRequested_Statics::NewProp_Type_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACSCharacter_IsStateRequested_Statics::NewProp_Type,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACSCharacter_IsStateRequested_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACSCharacter_IsStateRequested_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CSCharacter.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ACSCharacter_IsStateRequested_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ACSCharacter, nullptr, "IsStateRequested", nullptr, nullptr, sizeof(Z_Construct_UFunction_ACSCharacter_IsStateRequested_Statics::CSCharacter_eventIsStateRequested_Parms), Z_Construct_UFunction_ACSCharacter_IsStateRequested_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ACSCharacter_IsStateRequested_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ACSCharacter_IsStateRequested_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ACSCharacter_IsStateRequested_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ACSCharacter_IsStateRequested()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ACSCharacter_IsStateRequested_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ACSCharacter_OnAnimationEnded_Statics
	{
		struct CSCharacter_eventOnAnimationEnded_Parms
		{
			CharacterStateType FinishedAnimationState;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_FinishedAnimationState_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_FinishedAnimationState;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_ACSCharacter_OnAnimationEnded_Statics::NewProp_FinishedAnimationState_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_ACSCharacter_OnAnimationEnded_Statics::NewProp_FinishedAnimationState = { "FinishedAnimationState", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CSCharacter_eventOnAnimationEnded_Parms, FinishedAnimationState), Z_Construct_UEnum_CombatSystem_CharacterStateType, METADATA_PARAMS(nullptr, 0) }; // 1295661810
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ACSCharacter_OnAnimationEnded_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACSCharacter_OnAnimationEnded_Statics::NewProp_FinishedAnimationState_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACSCharacter_OnAnimationEnded_Statics::NewProp_FinishedAnimationState,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACSCharacter_OnAnimationEnded_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CSCharacter.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ACSCharacter_OnAnimationEnded_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ACSCharacter, nullptr, "OnAnimationEnded", nullptr, nullptr, sizeof(Z_Construct_UFunction_ACSCharacter_OnAnimationEnded_Statics::CSCharacter_eventOnAnimationEnded_Parms), Z_Construct_UFunction_ACSCharacter_OnAnimationEnded_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ACSCharacter_OnAnimationEnded_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ACSCharacter_OnAnimationEnded_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ACSCharacter_OnAnimationEnded_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ACSCharacter_OnAnimationEnded()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ACSCharacter_OnAnimationEnded_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ACSCharacter_OnAnimationNotify_Statics
	{
		struct CSCharacter_eventOnAnimationNotify_Parms
		{
			CharacterStateType StateType;
			FString AnimationNotifyName;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_StateType_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_StateType;
		static const UECodeGen_Private::FStrPropertyParams NewProp_AnimationNotifyName;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_ACSCharacter_OnAnimationNotify_Statics::NewProp_StateType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_ACSCharacter_OnAnimationNotify_Statics::NewProp_StateType = { "StateType", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CSCharacter_eventOnAnimationNotify_Parms, StateType), Z_Construct_UEnum_CombatSystem_CharacterStateType, METADATA_PARAMS(nullptr, 0) }; // 1295661810
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_ACSCharacter_OnAnimationNotify_Statics::NewProp_AnimationNotifyName = { "AnimationNotifyName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CSCharacter_eventOnAnimationNotify_Parms, AnimationNotifyName), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ACSCharacter_OnAnimationNotify_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACSCharacter_OnAnimationNotify_Statics::NewProp_StateType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACSCharacter_OnAnimationNotify_Statics::NewProp_StateType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACSCharacter_OnAnimationNotify_Statics::NewProp_AnimationNotifyName,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACSCharacter_OnAnimationNotify_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CSCharacter.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ACSCharacter_OnAnimationNotify_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ACSCharacter, nullptr, "OnAnimationNotify", nullptr, nullptr, sizeof(Z_Construct_UFunction_ACSCharacter_OnAnimationNotify_Statics::CSCharacter_eventOnAnimationNotify_Parms), Z_Construct_UFunction_ACSCharacter_OnAnimationNotify_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ACSCharacter_OnAnimationNotify_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ACSCharacter_OnAnimationNotify_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ACSCharacter_OnAnimationNotify_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ACSCharacter_OnAnimationNotify()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ACSCharacter_OnAnimationNotify_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ACSCharacter_OnHealthChanged_Statics
	{
		struct CSCharacter_eventOnHealthChanged_Parms
		{
			UCSHealthComponent* HealthComponent;
			float CurrentHealth;
			float HealthDelta;
			const UDamageType* DamageType;
			AController* InstigatedBy;
			AActor* DamageCauser;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HealthComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_HealthComponent;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_CurrentHealth;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_HealthDelta;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DamageType_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_DamageType;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InstigatedBy;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_DamageCauser;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACSCharacter_OnHealthChanged_Statics::NewProp_HealthComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ACSCharacter_OnHealthChanged_Statics::NewProp_HealthComponent = { "HealthComponent", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CSCharacter_eventOnHealthChanged_Parms, HealthComponent), Z_Construct_UClass_UCSHealthComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_ACSCharacter_OnHealthChanged_Statics::NewProp_HealthComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ACSCharacter_OnHealthChanged_Statics::NewProp_HealthComponent_MetaData)) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ACSCharacter_OnHealthChanged_Statics::NewProp_CurrentHealth = { "CurrentHealth", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CSCharacter_eventOnHealthChanged_Parms, CurrentHealth), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ACSCharacter_OnHealthChanged_Statics::NewProp_HealthDelta = { "HealthDelta", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CSCharacter_eventOnHealthChanged_Parms, HealthDelta), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACSCharacter_OnHealthChanged_Statics::NewProp_DamageType_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ACSCharacter_OnHealthChanged_Statics::NewProp_DamageType = { "DamageType", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CSCharacter_eventOnHealthChanged_Parms, DamageType), Z_Construct_UClass_UDamageType_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_ACSCharacter_OnHealthChanged_Statics::NewProp_DamageType_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ACSCharacter_OnHealthChanged_Statics::NewProp_DamageType_MetaData)) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ACSCharacter_OnHealthChanged_Statics::NewProp_InstigatedBy = { "InstigatedBy", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CSCharacter_eventOnHealthChanged_Parms, InstigatedBy), Z_Construct_UClass_AController_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ACSCharacter_OnHealthChanged_Statics::NewProp_DamageCauser = { "DamageCauser", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CSCharacter_eventOnHealthChanged_Parms, DamageCauser), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ACSCharacter_OnHealthChanged_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACSCharacter_OnHealthChanged_Statics::NewProp_HealthComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACSCharacter_OnHealthChanged_Statics::NewProp_CurrentHealth,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACSCharacter_OnHealthChanged_Statics::NewProp_HealthDelta,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACSCharacter_OnHealthChanged_Statics::NewProp_DamageType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACSCharacter_OnHealthChanged_Statics::NewProp_InstigatedBy,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACSCharacter_OnHealthChanged_Statics::NewProp_DamageCauser,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACSCharacter_OnHealthChanged_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CSCharacter.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ACSCharacter_OnHealthChanged_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ACSCharacter, nullptr, "OnHealthChanged", nullptr, nullptr, sizeof(Z_Construct_UFunction_ACSCharacter_OnHealthChanged_Statics::CSCharacter_eventOnHealthChanged_Parms), Z_Construct_UFunction_ACSCharacter_OnHealthChanged_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ACSCharacter_OnHealthChanged_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ACSCharacter_OnHealthChanged_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ACSCharacter_OnHealthChanged_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ACSCharacter_OnHealthChanged()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ACSCharacter_OnHealthChanged_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ACSCharacter_OnHit_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACSCharacter_OnHit_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CSCharacter.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ACSCharacter_OnHit_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ACSCharacter, nullptr, "OnHit", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ACSCharacter_OnHit_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ACSCharacter_OnHit_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ACSCharacter_OnHit()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ACSCharacter_OnHit_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ACSCharacter_OnSetAsTarget_Statics
	{
		static void NewProp_IsTarget_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_IsTarget;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_ACSCharacter_OnSetAsTarget_Statics::NewProp_IsTarget_SetBit(void* Obj)
	{
		((CSCharacter_eventOnSetAsTarget_Parms*)Obj)->IsTarget = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ACSCharacter_OnSetAsTarget_Statics::NewProp_IsTarget = { "IsTarget", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(CSCharacter_eventOnSetAsTarget_Parms), &Z_Construct_UFunction_ACSCharacter_OnSetAsTarget_Statics::NewProp_IsTarget_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ACSCharacter_OnSetAsTarget_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACSCharacter_OnSetAsTarget_Statics::NewProp_IsTarget,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACSCharacter_OnSetAsTarget_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CSCharacter.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ACSCharacter_OnSetAsTarget_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ACSCharacter, nullptr, "OnSetAsTarget", nullptr, nullptr, sizeof(CSCharacter_eventOnSetAsTarget_Parms), Z_Construct_UFunction_ACSCharacter_OnSetAsTarget_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ACSCharacter_OnSetAsTarget_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ACSCharacter_OnSetAsTarget_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ACSCharacter_OnSetAsTarget_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ACSCharacter_OnSetAsTarget()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ACSCharacter_OnSetAsTarget_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ACSCharacter_RequestState_Statics
	{
		struct CSCharacter_eventRequestState_Parms
		{
			CharacterStateType Type;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_Type_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_Type;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_ACSCharacter_RequestState_Statics::NewProp_Type_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_ACSCharacter_RequestState_Statics::NewProp_Type = { "Type", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CSCharacter_eventRequestState_Parms, Type), Z_Construct_UEnum_CombatSystem_CharacterStateType, METADATA_PARAMS(nullptr, 0) }; // 1295661810
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ACSCharacter_RequestState_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACSCharacter_RequestState_Statics::NewProp_Type_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACSCharacter_RequestState_Statics::NewProp_Type,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACSCharacter_RequestState_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CSCharacter.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ACSCharacter_RequestState_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ACSCharacter, nullptr, "RequestState", nullptr, nullptr, sizeof(Z_Construct_UFunction_ACSCharacter_RequestState_Statics::CSCharacter_eventRequestState_Parms), Z_Construct_UFunction_ACSCharacter_RequestState_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ACSCharacter_RequestState_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ACSCharacter_RequestState_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ACSCharacter_RequestState_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ACSCharacter_RequestState()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ACSCharacter_RequestState_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ACSCharacter_SetCrosshairActive_Statics
	{
		static void NewProp_Active_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_Active;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_ACSCharacter_SetCrosshairActive_Statics::NewProp_Active_SetBit(void* Obj)
	{
		((CSCharacter_eventSetCrosshairActive_Parms*)Obj)->Active = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ACSCharacter_SetCrosshairActive_Statics::NewProp_Active = { "Active", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(CSCharacter_eventSetCrosshairActive_Parms), &Z_Construct_UFunction_ACSCharacter_SetCrosshairActive_Statics::NewProp_Active_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ACSCharacter_SetCrosshairActive_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACSCharacter_SetCrosshairActive_Statics::NewProp_Active,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACSCharacter_SetCrosshairActive_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CSCharacter.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ACSCharacter_SetCrosshairActive_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ACSCharacter, nullptr, "SetCrosshairActive", nullptr, nullptr, sizeof(CSCharacter_eventSetCrosshairActive_Parms), Z_Construct_UFunction_ACSCharacter_SetCrosshairActive_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ACSCharacter_SetCrosshairActive_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ACSCharacter_SetCrosshairActive_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ACSCharacter_SetCrosshairActive_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ACSCharacter_SetCrosshairActive()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ACSCharacter_SetCrosshairActive_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ACSCharacter_SetParriable_Statics
	{
		struct CSCharacter_eventSetParriable_Parms
		{
			bool Parriable;
		};
		static void NewProp_Parriable_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_Parriable;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_ACSCharacter_SetParriable_Statics::NewProp_Parriable_SetBit(void* Obj)
	{
		((CSCharacter_eventSetParriable_Parms*)Obj)->Parriable = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ACSCharacter_SetParriable_Statics::NewProp_Parriable = { "Parriable", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(CSCharacter_eventSetParriable_Parms), &Z_Construct_UFunction_ACSCharacter_SetParriable_Statics::NewProp_Parriable_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ACSCharacter_SetParriable_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACSCharacter_SetParriable_Statics::NewProp_Parriable,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACSCharacter_SetParriable_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CSCharacter.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ACSCharacter_SetParriable_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ACSCharacter, nullptr, "SetParriable", nullptr, nullptr, sizeof(Z_Construct_UFunction_ACSCharacter_SetParriable_Statics::CSCharacter_eventSetParriable_Parms), Z_Construct_UFunction_ACSCharacter_SetParriable_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ACSCharacter_SetParriable_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ACSCharacter_SetParriable_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ACSCharacter_SetParriable_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ACSCharacter_SetParriable()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ACSCharacter_SetParriable_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ACSCharacter_UpdateHealth_Statics
	{
		static const UECodeGen_Private::FFloatPropertyParams NewProp_UpdatedHealth;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ACSCharacter_UpdateHealth_Statics::NewProp_UpdatedHealth = { "UpdatedHealth", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CSCharacter_eventUpdateHealth_Parms, UpdatedHealth), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ACSCharacter_UpdateHealth_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACSCharacter_UpdateHealth_Statics::NewProp_UpdatedHealth,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACSCharacter_UpdateHealth_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CSCharacter.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ACSCharacter_UpdateHealth_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ACSCharacter, nullptr, "UpdateHealth", nullptr, nullptr, sizeof(CSCharacter_eventUpdateHealth_Parms), Z_Construct_UFunction_ACSCharacter_UpdateHealth_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ACSCharacter_UpdateHealth_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ACSCharacter_UpdateHealth_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ACSCharacter_UpdateHealth_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ACSCharacter_UpdateHealth()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ACSCharacter_UpdateHealth_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ACSCharacter_UpdateStamina_Statics
	{
		static const UECodeGen_Private::FFloatPropertyParams NewProp_UpdatedStamina;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ACSCharacter_UpdateStamina_Statics::NewProp_UpdatedStamina = { "UpdatedStamina", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CSCharacter_eventUpdateStamina_Parms, UpdatedStamina), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ACSCharacter_UpdateStamina_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACSCharacter_UpdateStamina_Statics::NewProp_UpdatedStamina,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACSCharacter_UpdateStamina_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CSCharacter.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ACSCharacter_UpdateStamina_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ACSCharacter, nullptr, "UpdateStamina", nullptr, nullptr, sizeof(CSCharacter_eventUpdateStamina_Parms), Z_Construct_UFunction_ACSCharacter_UpdateStamina_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ACSCharacter_UpdateStamina_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ACSCharacter_UpdateStamina_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ACSCharacter_UpdateStamina_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ACSCharacter_UpdateStamina()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ACSCharacter_UpdateStamina_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ACSCharacter);
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
		static const UECodeGen_Private::FMetaDataPairParam NewProp_JogSpeed_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_JogSpeed;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RunSpeed_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_RunSpeed;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CameraManagerComp_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_CameraManagerComp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HealthComp_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_HealthComp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StaminaComp_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_StaminaComp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TargetLocked_MetaData[];
#endif
		static void NewProp_TargetLocked_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_TargetLocked;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TimeBetweenEnemyChange_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_TimeBetweenEnemyChange;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EnemyDetectionDistance_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_EnemyDetectionDistance;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RequestTime_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_RequestTime;
		static const UECodeGen_Private::FClassPropertyParams NewProp_DefaultStates_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DefaultStates_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_DefaultStates;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_States_ValueProp;
		static const UECodeGen_Private::FBytePropertyParams NewProp_States_Key_KeyProp_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_States_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_States_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_States;
		static const UECodeGen_Private::FBytePropertyParams NewProp_CurrentState_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CurrentState_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_CurrentState;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StarterWeaponClass_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_StarterWeaponClass;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WeaponAttachSocketName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_WeaponAttachSocketName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StarterShieldClass_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_StarterShieldClass;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ShieldAttachSocketName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_ShieldAttachSocketName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StarterRangedWeaponClass_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_StarterRangedWeaponClass;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RangedWeaponAttachSocketName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_RangedWeaponAttachSocketName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_IsRunning_MetaData[];
#endif
		static void NewProp_IsRunning_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_IsRunning;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SpringArmComp_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_SpringArmComp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CameraComp_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_CameraComp;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ACSCharacter_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ACharacter,
		(UObject* (*)())Z_Construct_UPackage__Script_CombatSystem,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ACSCharacter_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ACSCharacter_GetAimRotation, "GetAimRotation" }, // 3374204471
		{ &Z_Construct_UFunction_ACSCharacter_GetCharacterState, "GetCharacterState" }, // 1841037614
		{ &Z_Construct_UFunction_ACSCharacter_GetCurrentSubstate, "GetCurrentSubstate" }, // 877138259
		{ &Z_Construct_UFunction_ACSCharacter_GetCurrentWeapon, "GetCurrentWeapon" }, // 1670276192
		{ &Z_Construct_UFunction_ACSCharacter_GetHealthComponent, "GetHealthComponent" }, // 1653460996
		{ &Z_Construct_UFunction_ACSCharacter_GetLockedTarget, "GetLockedTarget" }, // 1863806249
		{ &Z_Construct_UFunction_ACSCharacter_GetStaminaComponent, "GetStaminaComponent" }, // 2643613043
		{ &Z_Construct_UFunction_ACSCharacter_GetStateCurrentSubstate, "GetStateCurrentSubstate" }, // 3440556187
		{ &Z_Construct_UFunction_ACSCharacter_IsStateRequested, "IsStateRequested" }, // 3764388170
		{ &Z_Construct_UFunction_ACSCharacter_OnAnimationEnded, "OnAnimationEnded" }, // 1876023775
		{ &Z_Construct_UFunction_ACSCharacter_OnAnimationNotify, "OnAnimationNotify" }, // 1114258589
		{ &Z_Construct_UFunction_ACSCharacter_OnHealthChanged, "OnHealthChanged" }, // 3303373740
		{ &Z_Construct_UFunction_ACSCharacter_OnHit, "OnHit" }, // 1702612639
		{ &Z_Construct_UFunction_ACSCharacter_OnSetAsTarget, "OnSetAsTarget" }, // 889253823
		{ &Z_Construct_UFunction_ACSCharacter_RequestState, "RequestState" }, // 2290652670
		{ &Z_Construct_UFunction_ACSCharacter_SetCrosshairActive, "SetCrosshairActive" }, // 4012356958
		{ &Z_Construct_UFunction_ACSCharacter_SetParriable, "SetParriable" }, // 693777199
		{ &Z_Construct_UFunction_ACSCharacter_UpdateHealth, "UpdateHealth" }, // 2325348522
		{ &Z_Construct_UFunction_ACSCharacter_UpdateStamina, "UpdateStamina" }, // 3964520126
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACSCharacter_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "CSCharacter.h" },
		{ "ModuleRelativePath", "Public/CSCharacter.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACSCharacter_Statics::NewProp_JogSpeed_MetaData[] = {
		{ "Category", "Player" },
		{ "ModuleRelativePath", "Public/CSCharacter.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ACSCharacter_Statics::NewProp_JogSpeed = { "JogSpeed", nullptr, (EPropertyFlags)0x0020080000010015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACSCharacter, JogSpeed), METADATA_PARAMS(Z_Construct_UClass_ACSCharacter_Statics::NewProp_JogSpeed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACSCharacter_Statics::NewProp_JogSpeed_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACSCharacter_Statics::NewProp_RunSpeed_MetaData[] = {
		{ "Category", "Player" },
		{ "ModuleRelativePath", "Public/CSCharacter.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ACSCharacter_Statics::NewProp_RunSpeed = { "RunSpeed", nullptr, (EPropertyFlags)0x0020080000010015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACSCharacter, RunSpeed), METADATA_PARAMS(Z_Construct_UClass_ACSCharacter_Statics::NewProp_RunSpeed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACSCharacter_Statics::NewProp_RunSpeed_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACSCharacter_Statics::NewProp_CameraManagerComp_MetaData[] = {
		{ "Category", "Components" },
		{ "Comment", "//Components\n" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/CSCharacter.h" },
		{ "ToolTip", "Components" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACSCharacter_Statics::NewProp_CameraManagerComp = { "CameraManagerComp", nullptr, (EPropertyFlags)0x002008000009001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACSCharacter, CameraManagerComp), Z_Construct_UClass_UCSCameraManagerComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ACSCharacter_Statics::NewProp_CameraManagerComp_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACSCharacter_Statics::NewProp_CameraManagerComp_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACSCharacter_Statics::NewProp_HealthComp_MetaData[] = {
		{ "Category", "Components" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/CSCharacter.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACSCharacter_Statics::NewProp_HealthComp = { "HealthComp", nullptr, (EPropertyFlags)0x002008000009001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACSCharacter, HealthComp), Z_Construct_UClass_UCSHealthComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ACSCharacter_Statics::NewProp_HealthComp_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACSCharacter_Statics::NewProp_HealthComp_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACSCharacter_Statics::NewProp_StaminaComp_MetaData[] = {
		{ "Category", "Components" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/CSCharacter.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACSCharacter_Statics::NewProp_StaminaComp = { "StaminaComp", nullptr, (EPropertyFlags)0x002008000009001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACSCharacter, StaminaComp), Z_Construct_UClass_UCSStaminaComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ACSCharacter_Statics::NewProp_StaminaComp_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACSCharacter_Statics::NewProp_StaminaComp_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACSCharacter_Statics::NewProp_TargetLocked_MetaData[] = {
		{ "Category", "CSCharacter" },
		{ "Comment", "//Target Locking =======================================================================================\n" },
		{ "ModuleRelativePath", "Public/CSCharacter.h" },
		{ "ToolTip", "Target Locking =======================================================================================" },
	};
#endif
	void Z_Construct_UClass_ACSCharacter_Statics::NewProp_TargetLocked_SetBit(void* Obj)
	{
		((ACSCharacter*)Obj)->TargetLocked = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ACSCharacter_Statics::NewProp_TargetLocked = { "TargetLocked", nullptr, (EPropertyFlags)0x0020080000020015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ACSCharacter), &Z_Construct_UClass_ACSCharacter_Statics::NewProp_TargetLocked_SetBit, METADATA_PARAMS(Z_Construct_UClass_ACSCharacter_Statics::NewProp_TargetLocked_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACSCharacter_Statics::NewProp_TargetLocked_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACSCharacter_Statics::NewProp_TimeBetweenEnemyChange_MetaData[] = {
		{ "Category", "Player" },
		{ "ModuleRelativePath", "Public/CSCharacter.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ACSCharacter_Statics::NewProp_TimeBetweenEnemyChange = { "TimeBetweenEnemyChange", nullptr, (EPropertyFlags)0x0020080000010001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACSCharacter, TimeBetweenEnemyChange), METADATA_PARAMS(Z_Construct_UClass_ACSCharacter_Statics::NewProp_TimeBetweenEnemyChange_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACSCharacter_Statics::NewProp_TimeBetweenEnemyChange_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACSCharacter_Statics::NewProp_EnemyDetectionDistance_MetaData[] = {
		{ "Category", "Player" },
		{ "ModuleRelativePath", "Public/CSCharacter.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ACSCharacter_Statics::NewProp_EnemyDetectionDistance = { "EnemyDetectionDistance", nullptr, (EPropertyFlags)0x0020080000010001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACSCharacter, EnemyDetectionDistance), METADATA_PARAMS(Z_Construct_UClass_ACSCharacter_Statics::NewProp_EnemyDetectionDistance_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACSCharacter_Statics::NewProp_EnemyDetectionDistance_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACSCharacter_Statics::NewProp_RequestTime_MetaData[] = {
		{ "Category", "CSCharacter" },
		{ "Comment", "//States ==============================================================================================\n" },
		{ "ModuleRelativePath", "Public/CSCharacter.h" },
		{ "ToolTip", "States ==============================================================================================" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ACSCharacter_Statics::NewProp_RequestTime = { "RequestTime", nullptr, (EPropertyFlags)0x0020080000010001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACSCharacter, RequestTime), METADATA_PARAMS(Z_Construct_UClass_ACSCharacter_Statics::NewProp_RequestTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACSCharacter_Statics::NewProp_RequestTime_MetaData)) };
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_ACSCharacter_Statics::NewProp_DefaultStates_Inner = { "DefaultStates", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UCSCharacterState_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACSCharacter_Statics::NewProp_DefaultStates_MetaData[] = {
		{ "Category", "CSCharacter" },
		{ "ModuleRelativePath", "Public/CSCharacter.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ACSCharacter_Statics::NewProp_DefaultStates = { "DefaultStates", nullptr, (EPropertyFlags)0x0024080000010001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACSCharacter, DefaultStates), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_ACSCharacter_Statics::NewProp_DefaultStates_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACSCharacter_Statics::NewProp_DefaultStates_MetaData)) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACSCharacter_Statics::NewProp_States_ValueProp = { "States", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, Z_Construct_UClass_UCSCharacterState_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_ACSCharacter_Statics::NewProp_States_Key_KeyProp_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_ACSCharacter_Statics::NewProp_States_Key_KeyProp = { "States_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UEnum_CombatSystem_CharacterStateType, METADATA_PARAMS(nullptr, 0) }; // 1295661810
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACSCharacter_Statics::NewProp_States_MetaData[] = {
		{ "Category", "CSCharacter" },
		{ "ModuleRelativePath", "Public/CSCharacter.h" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_ACSCharacter_Statics::NewProp_States = { "States", nullptr, (EPropertyFlags)0x0020080000000014, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACSCharacter, States), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_ACSCharacter_Statics::NewProp_States_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACSCharacter_Statics::NewProp_States_MetaData)) }; // 1295661810
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_ACSCharacter_Statics::NewProp_CurrentState_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACSCharacter_Statics::NewProp_CurrentState_MetaData[] = {
		{ "Category", "CSCharacter" },
		{ "ModuleRelativePath", "Public/CSCharacter.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_ACSCharacter_Statics::NewProp_CurrentState = { "CurrentState", nullptr, (EPropertyFlags)0x0020080000000014, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACSCharacter, CurrentState), Z_Construct_UEnum_CombatSystem_CharacterStateType, METADATA_PARAMS(Z_Construct_UClass_ACSCharacter_Statics::NewProp_CurrentState_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACSCharacter_Statics::NewProp_CurrentState_MetaData)) }; // 1295661810
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
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_ACSCharacter_Statics::NewProp_WeaponAttachSocketName = { "WeaponAttachSocketName", nullptr, (EPropertyFlags)0x0020080000010001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACSCharacter, WeaponAttachSocketName), METADATA_PARAMS(Z_Construct_UClass_ACSCharacter_Statics::NewProp_WeaponAttachSocketName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACSCharacter_Statics::NewProp_WeaponAttachSocketName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACSCharacter_Statics::NewProp_StarterShieldClass_MetaData[] = {
		{ "Category", "Player" },
		{ "ModuleRelativePath", "Public/CSCharacter.h" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_ACSCharacter_Statics::NewProp_StarterShieldClass = { "StarterShieldClass", nullptr, (EPropertyFlags)0x0024080000010001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACSCharacter, StarterShieldClass), Z_Construct_UClass_ACSShield_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_ACSCharacter_Statics::NewProp_StarterShieldClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACSCharacter_Statics::NewProp_StarterShieldClass_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACSCharacter_Statics::NewProp_ShieldAttachSocketName_MetaData[] = {
		{ "Category", "Player" },
		{ "ModuleRelativePath", "Public/CSCharacter.h" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_ACSCharacter_Statics::NewProp_ShieldAttachSocketName = { "ShieldAttachSocketName", nullptr, (EPropertyFlags)0x0020080000010001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACSCharacter, ShieldAttachSocketName), METADATA_PARAMS(Z_Construct_UClass_ACSCharacter_Statics::NewProp_ShieldAttachSocketName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACSCharacter_Statics::NewProp_ShieldAttachSocketName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACSCharacter_Statics::NewProp_StarterRangedWeaponClass_MetaData[] = {
		{ "Category", "Player" },
		{ "ModuleRelativePath", "Public/CSCharacter.h" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_ACSCharacter_Statics::NewProp_StarterRangedWeaponClass = { "StarterRangedWeaponClass", nullptr, (EPropertyFlags)0x0024080000010001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACSCharacter, StarterRangedWeaponClass), Z_Construct_UClass_ACSRangedWeapon_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_ACSCharacter_Statics::NewProp_StarterRangedWeaponClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACSCharacter_Statics::NewProp_StarterRangedWeaponClass_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACSCharacter_Statics::NewProp_RangedWeaponAttachSocketName_MetaData[] = {
		{ "Category", "Player" },
		{ "ModuleRelativePath", "Public/CSCharacter.h" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_ACSCharacter_Statics::NewProp_RangedWeaponAttachSocketName = { "RangedWeaponAttachSocketName", nullptr, (EPropertyFlags)0x0020080000010001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACSCharacter, RangedWeaponAttachSocketName), METADATA_PARAMS(Z_Construct_UClass_ACSCharacter_Statics::NewProp_RangedWeaponAttachSocketName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACSCharacter_Statics::NewProp_RangedWeaponAttachSocketName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACSCharacter_Statics::NewProp_IsRunning_MetaData[] = {
		{ "Category", "CSCharacter" },
		{ "Comment", "//Variables =============================================================================================\n" },
		{ "ModuleRelativePath", "Public/CSCharacter.h" },
		{ "ToolTip", "Variables =============================================================================================" },
	};
#endif
	void Z_Construct_UClass_ACSCharacter_Statics::NewProp_IsRunning_SetBit(void* Obj)
	{
		((ACSCharacter*)Obj)->IsRunning = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ACSCharacter_Statics::NewProp_IsRunning = { "IsRunning", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ACSCharacter), &Z_Construct_UClass_ACSCharacter_Statics::NewProp_IsRunning_SetBit, METADATA_PARAMS(Z_Construct_UClass_ACSCharacter_Statics::NewProp_IsRunning_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACSCharacter_Statics::NewProp_IsRunning_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACSCharacter_Statics::NewProp_SpringArmComp_MetaData[] = {
		{ "Category", "Components" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/CSCharacter.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACSCharacter_Statics::NewProp_SpringArmComp = { "SpringArmComp", nullptr, (EPropertyFlags)0x00100000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACSCharacter, SpringArmComp), Z_Construct_UClass_USpringArmComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ACSCharacter_Statics::NewProp_SpringArmComp_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACSCharacter_Statics::NewProp_SpringArmComp_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACSCharacter_Statics::NewProp_CameraComp_MetaData[] = {
		{ "Category", "Components" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/CSCharacter.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACSCharacter_Statics::NewProp_CameraComp = { "CameraComp", nullptr, (EPropertyFlags)0x00100000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACSCharacter, CameraComp), Z_Construct_UClass_UCameraComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ACSCharacter_Statics::NewProp_CameraComp_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACSCharacter_Statics::NewProp_CameraComp_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ACSCharacter_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACSCharacter_Statics::NewProp_JogSpeed,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACSCharacter_Statics::NewProp_RunSpeed,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACSCharacter_Statics::NewProp_CameraManagerComp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACSCharacter_Statics::NewProp_HealthComp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACSCharacter_Statics::NewProp_StaminaComp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACSCharacter_Statics::NewProp_TargetLocked,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACSCharacter_Statics::NewProp_TimeBetweenEnemyChange,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACSCharacter_Statics::NewProp_EnemyDetectionDistance,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACSCharacter_Statics::NewProp_RequestTime,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACSCharacter_Statics::NewProp_DefaultStates_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACSCharacter_Statics::NewProp_DefaultStates,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACSCharacter_Statics::NewProp_States_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACSCharacter_Statics::NewProp_States_Key_KeyProp_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACSCharacter_Statics::NewProp_States_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACSCharacter_Statics::NewProp_States,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACSCharacter_Statics::NewProp_CurrentState_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACSCharacter_Statics::NewProp_CurrentState,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACSCharacter_Statics::NewProp_StarterWeaponClass,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACSCharacter_Statics::NewProp_WeaponAttachSocketName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACSCharacter_Statics::NewProp_StarterShieldClass,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACSCharacter_Statics::NewProp_ShieldAttachSocketName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACSCharacter_Statics::NewProp_StarterRangedWeaponClass,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACSCharacter_Statics::NewProp_RangedWeaponAttachSocketName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACSCharacter_Statics::NewProp_IsRunning,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACSCharacter_Statics::NewProp_SpringArmComp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACSCharacter_Statics::NewProp_CameraComp,
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
		if (!Z_Registration_Info_UClass_ACSCharacter.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ACSCharacter.OuterSingleton, Z_Construct_UClass_ACSCharacter_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ACSCharacter.OuterSingleton;
	}
	template<> COMBATSYSTEM_API UClass* StaticClass<ACSCharacter>()
	{
		return ACSCharacter::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ACSCharacter);
	struct Z_CompiledInDeferFile_FID_CombatSystem_Source_CombatSystem_Public_CSCharacter_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_CombatSystem_Source_CombatSystem_Public_CSCharacter_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ACSCharacter, ACSCharacter::StaticClass, TEXT("ACSCharacter"), &Z_Registration_Info_UClass_ACSCharacter, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ACSCharacter), 3908033655U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_CombatSystem_Source_CombatSystem_Public_CSCharacter_h_1134376253(TEXT("/Script/CombatSystem"),
		Z_CompiledInDeferFile_FID_CombatSystem_Source_CombatSystem_Public_CSCharacter_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_CombatSystem_Source_CombatSystem_Public_CSCharacter_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
