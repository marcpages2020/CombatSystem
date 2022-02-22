// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CombatSystem/Public/Components/CSCameraManagerComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCSCameraManagerComponent() {}
// Cross Module References
	COMBATSYSTEM_API UClass* Z_Construct_UClass_UCSCameraManagerComponent_NoRegister();
	COMBATSYSTEM_API UClass* Z_Construct_UClass_UCSCameraManagerComponent();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	UPackage* Z_Construct_UPackage__Script_CombatSystem();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
// End Cross Module References
	void UCSCameraManagerComponent::StaticRegisterNativesUCSCameraManagerComponent()
	{
	}
	UClass* Z_Construct_UClass_UCSCameraManagerComponent_NoRegister()
	{
		return UCSCameraManagerComponent::StaticClass();
	}
	struct Z_Construct_UClass_UCSCameraManagerComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LockingInterpolationSpeed_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_LockingInterpolationSpeed;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CloseCameraHeightAddition_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_CloseCameraHeightAddition;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ArmLengthInterpSpeed_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ArmLengthInterpSpeed;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MultipleEnemiesArmLength_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MultipleEnemiesArmLength;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MultipleEnemiesSocketOffset_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_MultipleEnemiesSocketOffset;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DefaultFOV_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_DefaultFOV;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LockedFOV_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_LockedFOV;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCSCameraManagerComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_CombatSystem,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCSCameraManagerComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "CombatSystem" },
		{ "IncludePath", "Components/CSCameraManagerComponent.h" },
		{ "ModuleRelativePath", "Public/Components/CSCameraManagerComponent.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCSCameraManagerComponent_Statics::NewProp_LockingInterpolationSpeed_MetaData[] = {
		{ "Category", "Camera" },
		{ "ModuleRelativePath", "Public/Components/CSCameraManagerComponent.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UCSCameraManagerComponent_Statics::NewProp_LockingInterpolationSpeed = { "LockingInterpolationSpeed", nullptr, (EPropertyFlags)0x0020080000010001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCSCameraManagerComponent, LockingInterpolationSpeed), METADATA_PARAMS(Z_Construct_UClass_UCSCameraManagerComponent_Statics::NewProp_LockingInterpolationSpeed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCSCameraManagerComponent_Statics::NewProp_LockingInterpolationSpeed_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCSCameraManagerComponent_Statics::NewProp_CloseCameraHeightAddition_MetaData[] = {
		{ "Category", "Camera" },
		{ "ModuleRelativePath", "Public/Components/CSCameraManagerComponent.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UCSCameraManagerComponent_Statics::NewProp_CloseCameraHeightAddition = { "CloseCameraHeightAddition", nullptr, (EPropertyFlags)0x0020080000010001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCSCameraManagerComponent, CloseCameraHeightAddition), METADATA_PARAMS(Z_Construct_UClass_UCSCameraManagerComponent_Statics::NewProp_CloseCameraHeightAddition_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCSCameraManagerComponent_Statics::NewProp_CloseCameraHeightAddition_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCSCameraManagerComponent_Statics::NewProp_ArmLengthInterpSpeed_MetaData[] = {
		{ "Category", "Camera" },
		{ "Comment", "//Spring Arm ===========================================================================================\n" },
		{ "ModuleRelativePath", "Public/Components/CSCameraManagerComponent.h" },
		{ "ToolTip", "Spring Arm ===========================================================================================" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UCSCameraManagerComponent_Statics::NewProp_ArmLengthInterpSpeed = { "ArmLengthInterpSpeed", nullptr, (EPropertyFlags)0x0020080000010001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCSCameraManagerComponent, ArmLengthInterpSpeed), METADATA_PARAMS(Z_Construct_UClass_UCSCameraManagerComponent_Statics::NewProp_ArmLengthInterpSpeed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCSCameraManagerComponent_Statics::NewProp_ArmLengthInterpSpeed_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCSCameraManagerComponent_Statics::NewProp_MultipleEnemiesArmLength_MetaData[] = {
		{ "Category", "Camera" },
		{ "ModuleRelativePath", "Public/Components/CSCameraManagerComponent.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UCSCameraManagerComponent_Statics::NewProp_MultipleEnemiesArmLength = { "MultipleEnemiesArmLength", nullptr, (EPropertyFlags)0x0020080000010001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCSCameraManagerComponent, MultipleEnemiesArmLength), METADATA_PARAMS(Z_Construct_UClass_UCSCameraManagerComponent_Statics::NewProp_MultipleEnemiesArmLength_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCSCameraManagerComponent_Statics::NewProp_MultipleEnemiesArmLength_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCSCameraManagerComponent_Statics::NewProp_MultipleEnemiesSocketOffset_MetaData[] = {
		{ "Category", "Camera" },
		{ "ModuleRelativePath", "Public/Components/CSCameraManagerComponent.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UCSCameraManagerComponent_Statics::NewProp_MultipleEnemiesSocketOffset = { "MultipleEnemiesSocketOffset", nullptr, (EPropertyFlags)0x0020080000010001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCSCameraManagerComponent, MultipleEnemiesSocketOffset), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_UCSCameraManagerComponent_Statics::NewProp_MultipleEnemiesSocketOffset_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCSCameraManagerComponent_Statics::NewProp_MultipleEnemiesSocketOffset_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCSCameraManagerComponent_Statics::NewProp_DefaultFOV_MetaData[] = {
		{ "Category", "Camera" },
		{ "Comment", "//Camera ===============================================================================================\n" },
		{ "ModuleRelativePath", "Public/Components/CSCameraManagerComponent.h" },
		{ "ToolTip", "Camera ===============================================================================================" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UCSCameraManagerComponent_Statics::NewProp_DefaultFOV = { "DefaultFOV", nullptr, (EPropertyFlags)0x0020080000010001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCSCameraManagerComponent, DefaultFOV), METADATA_PARAMS(Z_Construct_UClass_UCSCameraManagerComponent_Statics::NewProp_DefaultFOV_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCSCameraManagerComponent_Statics::NewProp_DefaultFOV_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCSCameraManagerComponent_Statics::NewProp_LockedFOV_MetaData[] = {
		{ "Category", "Camera" },
		{ "ModuleRelativePath", "Public/Components/CSCameraManagerComponent.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UCSCameraManagerComponent_Statics::NewProp_LockedFOV = { "LockedFOV", nullptr, (EPropertyFlags)0x0020080000010001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCSCameraManagerComponent, LockedFOV), METADATA_PARAMS(Z_Construct_UClass_UCSCameraManagerComponent_Statics::NewProp_LockedFOV_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCSCameraManagerComponent_Statics::NewProp_LockedFOV_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UCSCameraManagerComponent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCSCameraManagerComponent_Statics::NewProp_LockingInterpolationSpeed,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCSCameraManagerComponent_Statics::NewProp_CloseCameraHeightAddition,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCSCameraManagerComponent_Statics::NewProp_ArmLengthInterpSpeed,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCSCameraManagerComponent_Statics::NewProp_MultipleEnemiesArmLength,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCSCameraManagerComponent_Statics::NewProp_MultipleEnemiesSocketOffset,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCSCameraManagerComponent_Statics::NewProp_DefaultFOV,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCSCameraManagerComponent_Statics::NewProp_LockedFOV,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCSCameraManagerComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCSCameraManagerComponent>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UCSCameraManagerComponent_Statics::ClassParams = {
		&UCSCameraManagerComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UCSCameraManagerComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UCSCameraManagerComponent_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UCSCameraManagerComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UCSCameraManagerComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UCSCameraManagerComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UECodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UCSCameraManagerComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UCSCameraManagerComponent, 1634997280);
	template<> COMBATSYSTEM_API UClass* StaticClass<UCSCameraManagerComponent>()
	{
		return UCSCameraManagerComponent::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UCSCameraManagerComponent(Z_Construct_UClass_UCSCameraManagerComponent, &UCSCameraManagerComponent::StaticClass, TEXT("/Script/CombatSystem"), TEXT("UCSCameraManagerComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCSCameraManagerComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
