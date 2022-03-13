// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CombatSystem/Public/Components/CSCameraManagerComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCSCameraManagerComponent() {}
// Cross Module References
	COMBATSYSTEM_API UEnum* Z_Construct_UEnum_CombatSystem_CSCameraShakeType();
	UPackage* Z_Construct_UPackage__Script_CombatSystem();
	COMBATSYSTEM_API UClass* Z_Construct_UClass_UCSCameraManagerComponent_NoRegister();
	COMBATSYSTEM_API UClass* Z_Construct_UClass_UCSCameraManagerComponent();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	ENGINE_API UClass* Z_Construct_UClass_UCameraShakeBase_NoRegister();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_CSCameraShakeType;
	static UEnum* CSCameraShakeType_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_CSCameraShakeType.OuterSingleton)
		{
			Z_Registration_Info_UEnum_CSCameraShakeType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_CombatSystem_CSCameraShakeType, Z_Construct_UPackage__Script_CombatSystem(), TEXT("CSCameraShakeType"));
		}
		return Z_Registration_Info_UEnum_CSCameraShakeType.OuterSingleton;
	}
	template<> COMBATSYSTEM_API UEnum* StaticEnum<CSCameraShakeType>()
	{
		return CSCameraShakeType_StaticEnum();
	}
	struct Z_Construct_UEnum_CombatSystem_CSCameraShakeType_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_CombatSystem_CSCameraShakeType_Statics::Enumerators[] = {
		{ "CSCameraShakeType::CAMERA_SHAKE_HIT", (int64)CSCameraShakeType::CAMERA_SHAKE_HIT },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_CombatSystem_CSCameraShakeType_Statics::Enum_MetaDataParams[] = {
		{ "CAMERA_SHAKE_HIT.Name", "CSCameraShakeType::CAMERA_SHAKE_HIT" },
		{ "ModuleRelativePath", "Public/Components/CSCameraManagerComponent.h" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_CombatSystem_CSCameraShakeType_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_CombatSystem,
		nullptr,
		"CSCameraShakeType",
		"CSCameraShakeType",
		Z_Construct_UEnum_CombatSystem_CSCameraShakeType_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_CombatSystem_CSCameraShakeType_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_CombatSystem_CSCameraShakeType_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_CombatSystem_CSCameraShakeType_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_CombatSystem_CSCameraShakeType()
	{
		if (!Z_Registration_Info_UEnum_CSCameraShakeType.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_CSCameraShakeType.InnerSingleton, Z_Construct_UEnum_CombatSystem_CSCameraShakeType_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_CSCameraShakeType.InnerSingleton;
	}
	void UCSCameraManagerComponent::StaticRegisterNativesUCSCameraManagerComponent()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UCSCameraManagerComponent);
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
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CloseCameraAddition_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_CloseCameraAddition;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TurnSpeed_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_TurnSpeed;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LookUpSpeed_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_LookUpSpeed;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ArmLengthInterpSpeed_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ArmLengthInterpSpeed;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MultipleEnemiesArmLength_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MultipleEnemiesArmLength;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SingleEnemySocketOffset_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_SingleEnemySocketOffset;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MultipleEnemiesSocketOffset_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_MultipleEnemiesSocketOffset;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AimSocketOffset_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_AimSocketOffset;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DefaultFOV_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_DefaultFOV;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LockedFOV_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_LockedFOV;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AimFOV_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_AimFOV;
		static const UECodeGen_Private::FClassPropertyParams NewProp_CameraShakes_ValueProp;
		static const UECodeGen_Private::FBytePropertyParams NewProp_CameraShakes_Key_KeyProp_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_CameraShakes_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CameraShakes_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_CameraShakes;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AimTurnSpeed_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_AimTurnSpeed;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AimLookUpSpeed_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_AimLookUpSpeed;
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
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCSCameraManagerComponent_Statics::NewProp_CloseCameraAddition_MetaData[] = {
		{ "Category", "Camera" },
		{ "ModuleRelativePath", "Public/Components/CSCameraManagerComponent.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UCSCameraManagerComponent_Statics::NewProp_CloseCameraAddition = { "CloseCameraAddition", nullptr, (EPropertyFlags)0x0020080000010001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCSCameraManagerComponent, CloseCameraAddition), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_UCSCameraManagerComponent_Statics::NewProp_CloseCameraAddition_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCSCameraManagerComponent_Statics::NewProp_CloseCameraAddition_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCSCameraManagerComponent_Statics::NewProp_TurnSpeed_MetaData[] = {
		{ "Category", "Camera" },
		{ "Comment", "/*Values between 0.0 and 1.0 to limit speed*/" },
		{ "ModuleRelativePath", "Public/Components/CSCameraManagerComponent.h" },
		{ "ToolTip", "Values between 0.0 and 1.0 to limit speed" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UCSCameraManagerComponent_Statics::NewProp_TurnSpeed = { "TurnSpeed", nullptr, (EPropertyFlags)0x0020080000010015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCSCameraManagerComponent, TurnSpeed), METADATA_PARAMS(Z_Construct_UClass_UCSCameraManagerComponent_Statics::NewProp_TurnSpeed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCSCameraManagerComponent_Statics::NewProp_TurnSpeed_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCSCameraManagerComponent_Statics::NewProp_LookUpSpeed_MetaData[] = {
		{ "Category", "Camera" },
		{ "Comment", "/*Values between 0.0 and 1.0 to limit speed*/" },
		{ "ModuleRelativePath", "Public/Components/CSCameraManagerComponent.h" },
		{ "ToolTip", "Values between 0.0 and 1.0 to limit speed" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UCSCameraManagerComponent_Statics::NewProp_LookUpSpeed = { "LookUpSpeed", nullptr, (EPropertyFlags)0x0020080000010015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCSCameraManagerComponent, LookUpSpeed), METADATA_PARAMS(Z_Construct_UClass_UCSCameraManagerComponent_Statics::NewProp_LookUpSpeed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCSCameraManagerComponent_Statics::NewProp_LookUpSpeed_MetaData)) };
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
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCSCameraManagerComponent_Statics::NewProp_SingleEnemySocketOffset_MetaData[] = {
		{ "Category", "Camera" },
		{ "ModuleRelativePath", "Public/Components/CSCameraManagerComponent.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UCSCameraManagerComponent_Statics::NewProp_SingleEnemySocketOffset = { "SingleEnemySocketOffset", nullptr, (EPropertyFlags)0x0020080000010001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCSCameraManagerComponent, SingleEnemySocketOffset), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_UCSCameraManagerComponent_Statics::NewProp_SingleEnemySocketOffset_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCSCameraManagerComponent_Statics::NewProp_SingleEnemySocketOffset_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCSCameraManagerComponent_Statics::NewProp_MultipleEnemiesSocketOffset_MetaData[] = {
		{ "Category", "Camera" },
		{ "ModuleRelativePath", "Public/Components/CSCameraManagerComponent.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UCSCameraManagerComponent_Statics::NewProp_MultipleEnemiesSocketOffset = { "MultipleEnemiesSocketOffset", nullptr, (EPropertyFlags)0x0020080000010001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCSCameraManagerComponent, MultipleEnemiesSocketOffset), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_UCSCameraManagerComponent_Statics::NewProp_MultipleEnemiesSocketOffset_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCSCameraManagerComponent_Statics::NewProp_MultipleEnemiesSocketOffset_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCSCameraManagerComponent_Statics::NewProp_AimSocketOffset_MetaData[] = {
		{ "Category", "Camera" },
		{ "ModuleRelativePath", "Public/Components/CSCameraManagerComponent.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UCSCameraManagerComponent_Statics::NewProp_AimSocketOffset = { "AimSocketOffset", nullptr, (EPropertyFlags)0x0020080000010001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCSCameraManagerComponent, AimSocketOffset), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_UCSCameraManagerComponent_Statics::NewProp_AimSocketOffset_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCSCameraManagerComponent_Statics::NewProp_AimSocketOffset_MetaData)) };
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
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCSCameraManagerComponent_Statics::NewProp_AimFOV_MetaData[] = {
		{ "Category", "Camera" },
		{ "ModuleRelativePath", "Public/Components/CSCameraManagerComponent.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UCSCameraManagerComponent_Statics::NewProp_AimFOV = { "AimFOV", nullptr, (EPropertyFlags)0x0020080000010001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCSCameraManagerComponent, AimFOV), METADATA_PARAMS(Z_Construct_UClass_UCSCameraManagerComponent_Statics::NewProp_AimFOV_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCSCameraManagerComponent_Statics::NewProp_AimFOV_MetaData)) };
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UCSCameraManagerComponent_Statics::NewProp_CameraShakes_ValueProp = { "CameraShakes", nullptr, (EPropertyFlags)0x0004000000000001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, Z_Construct_UClass_UCameraShakeBase_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UCSCameraManagerComponent_Statics::NewProp_CameraShakes_Key_KeyProp_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UCSCameraManagerComponent_Statics::NewProp_CameraShakes_Key_KeyProp = { "CameraShakes_Key", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UEnum_CombatSystem_CSCameraShakeType, METADATA_PARAMS(nullptr, 0) }; // 2515985735
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCSCameraManagerComponent_Statics::NewProp_CameraShakes_MetaData[] = {
		{ "Category", "Camera" },
		{ "Comment", "//Camera Shake\n" },
		{ "ModuleRelativePath", "Public/Components/CSCameraManagerComponent.h" },
		{ "ToolTip", "Camera Shake" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UCSCameraManagerComponent_Statics::NewProp_CameraShakes = { "CameraShakes", nullptr, (EPropertyFlags)0x0024080000010001, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCSCameraManagerComponent, CameraShakes), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UCSCameraManagerComponent_Statics::NewProp_CameraShakes_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCSCameraManagerComponent_Statics::NewProp_CameraShakes_MetaData)) }; // 2515985735
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCSCameraManagerComponent_Statics::NewProp_AimTurnSpeed_MetaData[] = {
		{ "Category", "Camera" },
		{ "ModuleRelativePath", "Public/Components/CSCameraManagerComponent.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UCSCameraManagerComponent_Statics::NewProp_AimTurnSpeed = { "AimTurnSpeed", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCSCameraManagerComponent, AimTurnSpeed), METADATA_PARAMS(Z_Construct_UClass_UCSCameraManagerComponent_Statics::NewProp_AimTurnSpeed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCSCameraManagerComponent_Statics::NewProp_AimTurnSpeed_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCSCameraManagerComponent_Statics::NewProp_AimLookUpSpeed_MetaData[] = {
		{ "Category", "Camera" },
		{ "ModuleRelativePath", "Public/Components/CSCameraManagerComponent.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UCSCameraManagerComponent_Statics::NewProp_AimLookUpSpeed = { "AimLookUpSpeed", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCSCameraManagerComponent, AimLookUpSpeed), METADATA_PARAMS(Z_Construct_UClass_UCSCameraManagerComponent_Statics::NewProp_AimLookUpSpeed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCSCameraManagerComponent_Statics::NewProp_AimLookUpSpeed_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UCSCameraManagerComponent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCSCameraManagerComponent_Statics::NewProp_LockingInterpolationSpeed,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCSCameraManagerComponent_Statics::NewProp_CloseCameraAddition,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCSCameraManagerComponent_Statics::NewProp_TurnSpeed,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCSCameraManagerComponent_Statics::NewProp_LookUpSpeed,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCSCameraManagerComponent_Statics::NewProp_ArmLengthInterpSpeed,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCSCameraManagerComponent_Statics::NewProp_MultipleEnemiesArmLength,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCSCameraManagerComponent_Statics::NewProp_SingleEnemySocketOffset,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCSCameraManagerComponent_Statics::NewProp_MultipleEnemiesSocketOffset,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCSCameraManagerComponent_Statics::NewProp_AimSocketOffset,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCSCameraManagerComponent_Statics::NewProp_DefaultFOV,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCSCameraManagerComponent_Statics::NewProp_LockedFOV,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCSCameraManagerComponent_Statics::NewProp_AimFOV,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCSCameraManagerComponent_Statics::NewProp_CameraShakes_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCSCameraManagerComponent_Statics::NewProp_CameraShakes_Key_KeyProp_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCSCameraManagerComponent_Statics::NewProp_CameraShakes_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCSCameraManagerComponent_Statics::NewProp_CameraShakes,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCSCameraManagerComponent_Statics::NewProp_AimTurnSpeed,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCSCameraManagerComponent_Statics::NewProp_AimLookUpSpeed,
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
		if (!Z_Registration_Info_UClass_UCSCameraManagerComponent.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCSCameraManagerComponent.OuterSingleton, Z_Construct_UClass_UCSCameraManagerComponent_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UCSCameraManagerComponent.OuterSingleton;
	}
	template<> COMBATSYSTEM_API UClass* StaticClass<UCSCameraManagerComponent>()
	{
		return UCSCameraManagerComponent::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCSCameraManagerComponent);
	struct Z_CompiledInDeferFile_FID_CombatSystem_Source_CombatSystem_Public_Components_CSCameraManagerComponent_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_CombatSystem_Source_CombatSystem_Public_Components_CSCameraManagerComponent_h_Statics::EnumInfo[] = {
		{ CSCameraShakeType_StaticEnum, TEXT("CSCameraShakeType"), &Z_Registration_Info_UEnum_CSCameraShakeType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2515985735U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_CombatSystem_Source_CombatSystem_Public_Components_CSCameraManagerComponent_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UCSCameraManagerComponent, UCSCameraManagerComponent::StaticClass, TEXT("UCSCameraManagerComponent"), &Z_Registration_Info_UClass_UCSCameraManagerComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCSCameraManagerComponent), 2407241062U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_CombatSystem_Source_CombatSystem_Public_Components_CSCameraManagerComponent_h_4096831442(TEXT("/Script/CombatSystem"),
		Z_CompiledInDeferFile_FID_CombatSystem_Source_CombatSystem_Public_Components_CSCameraManagerComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_CombatSystem_Source_CombatSystem_Public_Components_CSCameraManagerComponent_h_Statics::ClassInfo),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_CombatSystem_Source_CombatSystem_Public_Components_CSCameraManagerComponent_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_CombatSystem_Source_CombatSystem_Public_Components_CSCameraManagerComponent_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
