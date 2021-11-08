// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CombatSystem/Public/Actions/CSAction.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCSAction() {}
// Cross Module References
	COMBATSYSTEM_API UEnum* Z_Construct_UEnum_CombatSystem_ActionType();
	UPackage* Z_Construct_UPackage__Script_CombatSystem();
	COMBATSYSTEM_API UClass* Z_Construct_UClass_UCSAction_NoRegister();
	COMBATSYSTEM_API UClass* Z_Construct_UClass_UCSAction();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
// End Cross Module References
	static UEnum* ActionType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_CombatSystem_ActionType, Z_Construct_UPackage__Script_CombatSystem(), TEXT("ActionType"));
		}
		return Singleton;
	}
	template<> COMBATSYSTEM_API UEnum* StaticEnum<ActionType>()
	{
		return ActionType_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ActionType(ActionType_StaticEnum, TEXT("/Script/CombatSystem"), TEXT("ActionType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_CombatSystem_ActionType_Hash() { return 1550024108U; }
	UEnum* Z_Construct_UEnum_CombatSystem_ActionType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_CombatSystem();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ActionType"), 0, Get_Z_Construct_UEnum_CombatSystem_ActionType_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UECodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ActionType::ATTACK", (int64)ActionType::ATTACK },
				{ "ActionType::EVADE", (int64)ActionType::EVADE },
				{ "ActionType::MAX_ACTIONS", (int64)ActionType::MAX_ACTIONS },
			};
#if WITH_METADATA
			const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "ATTACK.DisplayName", "Attack" },
				{ "ATTACK.Name", "ActionType::ATTACK" },
				{ "EVADE.DisplayName", "Evade" },
				{ "EVADE.Name", "ActionType::EVADE" },
				{ "MAX_ACTIONS.Name", "ActionType::MAX_ACTIONS" },
				{ "ModuleRelativePath", "Public/Actions/CSAction.h" },
			};
#endif
			static const UECodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_CombatSystem,
				nullptr,
				"ActionType",
				"ActionType",
				Enumerators,
				UE_ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				EEnumFlags::None,
				UECodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::EnumClass,
				METADATA_PARAMS(Enum_MetaDataParams, UE_ARRAY_COUNT(Enum_MetaDataParams))
			};
			UECodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	void UCSAction::StaticRegisterNativesUCSAction()
	{
	}
	UClass* Z_Construct_UClass_UCSAction_NoRegister()
	{
		return UCSAction::StaticClass();
	}
	struct Z_Construct_UClass_UCSAction_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RequestTime_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_RequestTime;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCSAction_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_CombatSystem,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCSAction_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "Actions/CSAction.h" },
		{ "ModuleRelativePath", "Public/Actions/CSAction.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCSAction_Statics::NewProp_RequestTime_MetaData[] = {
		{ "Category", "Action" },
		{ "ModuleRelativePath", "Public/Actions/CSAction.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UCSAction_Statics::NewProp_RequestTime = { "RequestTime", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCSAction, RequestTime), METADATA_PARAMS(Z_Construct_UClass_UCSAction_Statics::NewProp_RequestTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCSAction_Statics::NewProp_RequestTime_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UCSAction_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCSAction_Statics::NewProp_RequestTime,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCSAction_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCSAction>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UCSAction_Statics::ClassParams = {
		&UCSAction::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UCSAction_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UCSAction_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UCSAction_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UCSAction_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UCSAction()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UECodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UCSAction_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UCSAction, 2378654168);
	template<> COMBATSYSTEM_API UClass* StaticClass<UCSAction>()
	{
		return UCSAction::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UCSAction(Z_Construct_UClass_UCSAction, &UCSAction::StaticClass, TEXT("/Script/CombatSystem"), TEXT("UCSAction"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCSAction);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
