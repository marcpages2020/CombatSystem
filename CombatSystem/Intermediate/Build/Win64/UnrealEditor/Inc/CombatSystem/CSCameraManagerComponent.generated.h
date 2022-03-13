// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef COMBATSYSTEM_CSCameraManagerComponent_generated_h
#error "CSCameraManagerComponent.generated.h already included, missing '#pragma once' in CSCameraManagerComponent.h"
#endif
#define COMBATSYSTEM_CSCameraManagerComponent_generated_h

#define FID_CombatSystem_Source_CombatSystem_Public_Components_CSCameraManagerComponent_h_22_SPARSE_DATA
#define FID_CombatSystem_Source_CombatSystem_Public_Components_CSCameraManagerComponent_h_22_RPC_WRAPPERS
#define FID_CombatSystem_Source_CombatSystem_Public_Components_CSCameraManagerComponent_h_22_RPC_WRAPPERS_NO_PURE_DECLS
#define FID_CombatSystem_Source_CombatSystem_Public_Components_CSCameraManagerComponent_h_22_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUCSCameraManagerComponent(); \
	friend struct Z_Construct_UClass_UCSCameraManagerComponent_Statics; \
public: \
	DECLARE_CLASS(UCSCameraManagerComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/CombatSystem"), NO_API) \
	DECLARE_SERIALIZER(UCSCameraManagerComponent)


#define FID_CombatSystem_Source_CombatSystem_Public_Components_CSCameraManagerComponent_h_22_INCLASS \
private: \
	static void StaticRegisterNativesUCSCameraManagerComponent(); \
	friend struct Z_Construct_UClass_UCSCameraManagerComponent_Statics; \
public: \
	DECLARE_CLASS(UCSCameraManagerComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/CombatSystem"), NO_API) \
	DECLARE_SERIALIZER(UCSCameraManagerComponent)


#define FID_CombatSystem_Source_CombatSystem_Public_Components_CSCameraManagerComponent_h_22_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UCSCameraManagerComponent(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UCSCameraManagerComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCSCameraManagerComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCSCameraManagerComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UCSCameraManagerComponent(UCSCameraManagerComponent&&); \
	NO_API UCSCameraManagerComponent(const UCSCameraManagerComponent&); \
public:


#define FID_CombatSystem_Source_CombatSystem_Public_Components_CSCameraManagerComponent_h_22_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UCSCameraManagerComponent(UCSCameraManagerComponent&&); \
	NO_API UCSCameraManagerComponent(const UCSCameraManagerComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCSCameraManagerComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCSCameraManagerComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UCSCameraManagerComponent)


#define FID_CombatSystem_Source_CombatSystem_Public_Components_CSCameraManagerComponent_h_19_PROLOG
#define FID_CombatSystem_Source_CombatSystem_Public_Components_CSCameraManagerComponent_h_22_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_CombatSystem_Source_CombatSystem_Public_Components_CSCameraManagerComponent_h_22_SPARSE_DATA \
	FID_CombatSystem_Source_CombatSystem_Public_Components_CSCameraManagerComponent_h_22_RPC_WRAPPERS \
	FID_CombatSystem_Source_CombatSystem_Public_Components_CSCameraManagerComponent_h_22_INCLASS \
	FID_CombatSystem_Source_CombatSystem_Public_Components_CSCameraManagerComponent_h_22_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_CombatSystem_Source_CombatSystem_Public_Components_CSCameraManagerComponent_h_22_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_CombatSystem_Source_CombatSystem_Public_Components_CSCameraManagerComponent_h_22_SPARSE_DATA \
	FID_CombatSystem_Source_CombatSystem_Public_Components_CSCameraManagerComponent_h_22_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_CombatSystem_Source_CombatSystem_Public_Components_CSCameraManagerComponent_h_22_INCLASS_NO_PURE_DECLS \
	FID_CombatSystem_Source_CombatSystem_Public_Components_CSCameraManagerComponent_h_22_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> COMBATSYSTEM_API UClass* StaticClass<class UCSCameraManagerComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_CombatSystem_Source_CombatSystem_Public_Components_CSCameraManagerComponent_h


#define FOREACH_ENUM_CSCAMERASHAKETYPE(op) \
	op(CSCameraShakeType::CAMERA_SHAKE_HIT) 

enum class CSCameraShakeType : uint8;
template<> COMBATSYSTEM_API UEnum* StaticEnum<CSCameraShakeType>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
