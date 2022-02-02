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

#define CombatSystem_Source_CombatSystem_Public_Components_CSCameraManagerComponent_h_16_SPARSE_DATA
#define CombatSystem_Source_CombatSystem_Public_Components_CSCameraManagerComponent_h_16_RPC_WRAPPERS
#define CombatSystem_Source_CombatSystem_Public_Components_CSCameraManagerComponent_h_16_RPC_WRAPPERS_NO_PURE_DECLS
#define CombatSystem_Source_CombatSystem_Public_Components_CSCameraManagerComponent_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUCSCameraManagerComponent(); \
	friend struct Z_Construct_UClass_UCSCameraManagerComponent_Statics; \
public: \
	DECLARE_CLASS(UCSCameraManagerComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/CombatSystem"), NO_API) \
	DECLARE_SERIALIZER(UCSCameraManagerComponent)


#define CombatSystem_Source_CombatSystem_Public_Components_CSCameraManagerComponent_h_16_INCLASS \
private: \
	static void StaticRegisterNativesUCSCameraManagerComponent(); \
	friend struct Z_Construct_UClass_UCSCameraManagerComponent_Statics; \
public: \
	DECLARE_CLASS(UCSCameraManagerComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/CombatSystem"), NO_API) \
	DECLARE_SERIALIZER(UCSCameraManagerComponent)


#define CombatSystem_Source_CombatSystem_Public_Components_CSCameraManagerComponent_h_16_STANDARD_CONSTRUCTORS \
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


#define CombatSystem_Source_CombatSystem_Public_Components_CSCameraManagerComponent_h_16_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UCSCameraManagerComponent(UCSCameraManagerComponent&&); \
	NO_API UCSCameraManagerComponent(const UCSCameraManagerComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCSCameraManagerComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCSCameraManagerComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UCSCameraManagerComponent)


#define CombatSystem_Source_CombatSystem_Public_Components_CSCameraManagerComponent_h_16_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__ArmLengthInterpSpeed() { return STRUCT_OFFSET(UCSCameraManagerComponent, ArmLengthInterpSpeed); } \
	FORCEINLINE static uint32 __PPO__MultipleEnemiesArmLength() { return STRUCT_OFFSET(UCSCameraManagerComponent, MultipleEnemiesArmLength); } \
	FORCEINLINE static uint32 __PPO__MultipleEnemiesSocketOffset() { return STRUCT_OFFSET(UCSCameraManagerComponent, MultipleEnemiesSocketOffset); } \
	FORCEINLINE static uint32 __PPO__DefaultFOV() { return STRUCT_OFFSET(UCSCameraManagerComponent, DefaultFOV); } \
	FORCEINLINE static uint32 __PPO__LockedFOV() { return STRUCT_OFFSET(UCSCameraManagerComponent, LockedFOV); }


#define CombatSystem_Source_CombatSystem_Public_Components_CSCameraManagerComponent_h_13_PROLOG
#define CombatSystem_Source_CombatSystem_Public_Components_CSCameraManagerComponent_h_16_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	CombatSystem_Source_CombatSystem_Public_Components_CSCameraManagerComponent_h_16_PRIVATE_PROPERTY_OFFSET \
	CombatSystem_Source_CombatSystem_Public_Components_CSCameraManagerComponent_h_16_SPARSE_DATA \
	CombatSystem_Source_CombatSystem_Public_Components_CSCameraManagerComponent_h_16_RPC_WRAPPERS \
	CombatSystem_Source_CombatSystem_Public_Components_CSCameraManagerComponent_h_16_INCLASS \
	CombatSystem_Source_CombatSystem_Public_Components_CSCameraManagerComponent_h_16_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define CombatSystem_Source_CombatSystem_Public_Components_CSCameraManagerComponent_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	CombatSystem_Source_CombatSystem_Public_Components_CSCameraManagerComponent_h_16_PRIVATE_PROPERTY_OFFSET \
	CombatSystem_Source_CombatSystem_Public_Components_CSCameraManagerComponent_h_16_SPARSE_DATA \
	CombatSystem_Source_CombatSystem_Public_Components_CSCameraManagerComponent_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	CombatSystem_Source_CombatSystem_Public_Components_CSCameraManagerComponent_h_16_INCLASS_NO_PURE_DECLS \
	CombatSystem_Source_CombatSystem_Public_Components_CSCameraManagerComponent_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> COMBATSYSTEM_API UClass* StaticClass<class UCSCameraManagerComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID CombatSystem_Source_CombatSystem_Public_Components_CSCameraManagerComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
