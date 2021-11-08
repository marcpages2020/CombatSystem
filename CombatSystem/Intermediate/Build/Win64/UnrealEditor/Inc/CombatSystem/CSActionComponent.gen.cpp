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
	COMBATSYSTEM_API UEnum* Z_Construct_UEnum_CombatSystem_ActionType();
	COMBATSYSTEM_API UClass* Z_Construct_UClass_UCSAction_Attack_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UCSActionComponent::execIsActionRequested)
	{
		P_GET_ENUM(ActionType,Z_Param_Type);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsActionRequested(ActionType(Z_Param_Type));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCSActionComponent::execStopAction)
	{
		P_GET_ENUM(ActionType,Z_Param_Type);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->StopAction(ActionType(Z_Param_Type));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCSActionComponent::execStartAction)
	{
		P_GET_ENUM(ActionType,Z_Param_Type);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->StartAction(ActionType(Z_Param_Type));
		P_NATIVE_END;
	}
	void UCSActionComponent::StaticRegisterNativesUCSActionComponent()
	{
		UClass* Class = UCSActionComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "IsActionRequested", &UCSActionComponent::execIsActionRequested },
			{ "StartAction", &UCSActionComponent::execStartAction },
			{ "StopAction", &UCSActionComponent::execStopAction },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UCSActionComponent_IsActionRequested_Statics
	{
		struct CSActionComponent_eventIsActionRequested_Parms
		{
			ActionType Type;
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
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UCSActionComponent_IsActionRequested_Statics::NewProp_Type_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UCSActionComponent_IsActionRequested_Statics::NewProp_Type = { "Type", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CSActionComponent_eventIsActionRequested_Parms, Type), Z_Construct_UEnum_CombatSystem_ActionType, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UCSActionComponent_IsActionRequested_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((CSActionComponent_eventIsActionRequested_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UCSActionComponent_IsActionRequested_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(CSActionComponent_eventIsActionRequested_Parms), &Z_Construct_UFunction_UCSActionComponent_IsActionRequested_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCSActionComponent_IsActionRequested_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCSActionComponent_IsActionRequested_Statics::NewProp_Type_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCSActionComponent_IsActionRequested_Statics::NewProp_Type,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCSActionComponent_IsActionRequested_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCSActionComponent_IsActionRequested_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Components/CSActionComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCSActionComponent_IsActionRequested_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCSActionComponent, nullptr, "IsActionRequested", nullptr, nullptr, sizeof(CSActionComponent_eventIsActionRequested_Parms), Z_Construct_UFunction_UCSActionComponent_IsActionRequested_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCSActionComponent_IsActionRequested_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCSActionComponent_IsActionRequested_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCSActionComponent_IsActionRequested_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCSActionComponent_IsActionRequested()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCSActionComponent_IsActionRequested_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCSActionComponent_StartAction_Statics
	{
		struct CSActionComponent_eventStartAction_Parms
		{
			ActionType Type;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_Type_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_Type;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UCSActionComponent_StartAction_Statics::NewProp_Type_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UCSActionComponent_StartAction_Statics::NewProp_Type = { "Type", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CSActionComponent_eventStartAction_Parms, Type), Z_Construct_UEnum_CombatSystem_ActionType, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCSActionComponent_StartAction_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCSActionComponent_StartAction_Statics::NewProp_Type_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCSActionComponent_StartAction_Statics::NewProp_Type,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCSActionComponent_StartAction_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Components/CSActionComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCSActionComponent_StartAction_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCSActionComponent, nullptr, "StartAction", nullptr, nullptr, sizeof(CSActionComponent_eventStartAction_Parms), Z_Construct_UFunction_UCSActionComponent_StartAction_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCSActionComponent_StartAction_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCSActionComponent_StartAction_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCSActionComponent_StartAction_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCSActionComponent_StartAction()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCSActionComponent_StartAction_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCSActionComponent_StopAction_Statics
	{
		struct CSActionComponent_eventStopAction_Parms
		{
			ActionType Type;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_Type_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_Type;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UCSActionComponent_StopAction_Statics::NewProp_Type_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UCSActionComponent_StopAction_Statics::NewProp_Type = { "Type", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CSActionComponent_eventStopAction_Parms, Type), Z_Construct_UEnum_CombatSystem_ActionType, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCSActionComponent_StopAction_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCSActionComponent_StopAction_Statics::NewProp_Type_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCSActionComponent_StopAction_Statics::NewProp_Type,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCSActionComponent_StopAction_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Components/CSActionComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCSActionComponent_StopAction_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCSActionComponent, nullptr, "StopAction", nullptr, nullptr, sizeof(CSActionComponent_eventStopAction_Parms), Z_Construct_UFunction_UCSActionComponent_StopAction_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCSActionComponent_StopAction_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCSActionComponent_StopAction_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCSActionComponent_StopAction_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCSActionComponent_StopAction()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCSActionComponent_StopAction_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UCSActionComponent_NoRegister()
	{
		return UCSActionComponent::StaticClass();
	}
	struct Z_Construct_UClass_UCSActionComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
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
	const FClassFunctionLinkInfo Z_Construct_UClass_UCSActionComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UCSActionComponent_IsActionRequested, "IsActionRequested" }, // 261344637
		{ &Z_Construct_UFunction_UCSActionComponent_StartAction, "StartAction" }, // 1994679083
		{ &Z_Construct_UFunction_UCSActionComponent_StopAction, "StopAction" }, // 574027899
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
		FuncInfo,
		Z_Construct_UClass_UCSActionComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
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
	IMPLEMENT_CLASS(UCSActionComponent, 2169756494);
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
