// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class ACSWeapon;
enum class ActionType : uint8;
#ifdef COMBATSYSTEM_CSCharacter_generated_h
#error "CSCharacter.generated.h already included, missing '#pragma once' in CSCharacter.h"
#endif
#define COMBATSYSTEM_CSCharacter_generated_h

#define CombatSystem_Source_CombatSystem_Public_CSCharacter_h_30_SPARSE_DATA
#define CombatSystem_Source_CombatSystem_Public_CSCharacter_h_30_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetCurrentWeapon); \
	DECLARE_FUNCTION(execStopAction); \
	DECLARE_FUNCTION(execStartAction); \
	DECLARE_FUNCTION(execRequestAction);


#define CombatSystem_Source_CombatSystem_Public_CSCharacter_h_30_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetCurrentWeapon); \
	DECLARE_FUNCTION(execStopAction); \
	DECLARE_FUNCTION(execStartAction); \
	DECLARE_FUNCTION(execRequestAction);


#define CombatSystem_Source_CombatSystem_Public_CSCharacter_h_30_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesACSCharacter(); \
	friend struct Z_Construct_UClass_ACSCharacter_Statics; \
public: \
	DECLARE_CLASS(ACSCharacter, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/CombatSystem"), NO_API) \
	DECLARE_SERIALIZER(ACSCharacter)


#define CombatSystem_Source_CombatSystem_Public_CSCharacter_h_30_INCLASS \
private: \
	static void StaticRegisterNativesACSCharacter(); \
	friend struct Z_Construct_UClass_ACSCharacter_Statics; \
public: \
	DECLARE_CLASS(ACSCharacter, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/CombatSystem"), NO_API) \
	DECLARE_SERIALIZER(ACSCharacter)


#define CombatSystem_Source_CombatSystem_Public_CSCharacter_h_30_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ACSCharacter(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ACSCharacter) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ACSCharacter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ACSCharacter); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ACSCharacter(ACSCharacter&&); \
	NO_API ACSCharacter(const ACSCharacter&); \
public:


#define CombatSystem_Source_CombatSystem_Public_CSCharacter_h_30_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ACSCharacter(ACSCharacter&&); \
	NO_API ACSCharacter(const ACSCharacter&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ACSCharacter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ACSCharacter); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ACSCharacter)


#define CombatSystem_Source_CombatSystem_Public_CSCharacter_h_30_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__JogSpeed() { return STRUCT_OFFSET(ACSCharacter, JogSpeed); } \
	FORCEINLINE static uint32 __PPO__RunSpeed() { return STRUCT_OFFSET(ACSCharacter, RunSpeed); } \
	FORCEINLINE static uint32 __PPO__ArmLengthInterpSpeed() { return STRUCT_OFFSET(ACSCharacter, ArmLengthInterpSpeed); } \
	FORCEINLINE static uint32 __PPO__MultipleEnemiesArmLength() { return STRUCT_OFFSET(ACSCharacter, MultipleEnemiesArmLength); } \
	FORCEINLINE static uint32 __PPO__MultipleEnemiesSocketOffset() { return STRUCT_OFFSET(ACSCharacter, MultipleEnemiesSocketOffset); } \
	FORCEINLINE static uint32 __PPO__CameraComp() { return STRUCT_OFFSET(ACSCharacter, CameraComp); } \
	FORCEINLINE static uint32 __PPO__DefaultFOV() { return STRUCT_OFFSET(ACSCharacter, DefaultFOV); } \
	FORCEINLINE static uint32 __PPO__LockedFOV() { return STRUCT_OFFSET(ACSCharacter, LockedFOV); } \
	FORCEINLINE static uint32 __PPO__TargetLocked() { return STRUCT_OFFSET(ACSCharacter, TargetLocked); } \
	FORCEINLINE static uint32 __PPO__TimeBetweenEnemyChange() { return STRUCT_OFFSET(ACSCharacter, TimeBetweenEnemyChange); } \
	FORCEINLINE static uint32 __PPO__EnemyDetectionDistance() { return STRUCT_OFFSET(ACSCharacter, EnemyDetectionDistance); } \
	FORCEINLINE static uint32 __PPO__ActionComp() { return STRUCT_OFFSET(ACSCharacter, ActionComp); } \
	FORCEINLINE static uint32 __PPO__ActionsRequestTime() { return STRUCT_OFFSET(ACSCharacter, ActionsRequestTime); } \
	FORCEINLINE static uint32 __PPO__StarterWeaponClass() { return STRUCT_OFFSET(ACSCharacter, StarterWeaponClass); } \
	FORCEINLINE static uint32 __PPO__WeaponAttachSocketName() { return STRUCT_OFFSET(ACSCharacter, WeaponAttachSocketName); }


#define CombatSystem_Source_CombatSystem_Public_CSCharacter_h_27_PROLOG
#define CombatSystem_Source_CombatSystem_Public_CSCharacter_h_30_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	CombatSystem_Source_CombatSystem_Public_CSCharacter_h_30_PRIVATE_PROPERTY_OFFSET \
	CombatSystem_Source_CombatSystem_Public_CSCharacter_h_30_SPARSE_DATA \
	CombatSystem_Source_CombatSystem_Public_CSCharacter_h_30_RPC_WRAPPERS \
	CombatSystem_Source_CombatSystem_Public_CSCharacter_h_30_INCLASS \
	CombatSystem_Source_CombatSystem_Public_CSCharacter_h_30_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define CombatSystem_Source_CombatSystem_Public_CSCharacter_h_30_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	CombatSystem_Source_CombatSystem_Public_CSCharacter_h_30_PRIVATE_PROPERTY_OFFSET \
	CombatSystem_Source_CombatSystem_Public_CSCharacter_h_30_SPARSE_DATA \
	CombatSystem_Source_CombatSystem_Public_CSCharacter_h_30_RPC_WRAPPERS_NO_PURE_DECLS \
	CombatSystem_Source_CombatSystem_Public_CSCharacter_h_30_INCLASS_NO_PURE_DECLS \
	CombatSystem_Source_CombatSystem_Public_CSCharacter_h_30_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> COMBATSYSTEM_API UClass* StaticClass<class ACSCharacter>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID CombatSystem_Source_CombatSystem_Public_CSCharacter_h


#define FOREACH_ENUM_CHARACTERSTATE(op) \
	op(CharacterState::DEFAULT) \
	op(CharacterState::RUNNING) \
	op(CharacterState::ATTACKING) \
	op(CharacterState::DODGING) 

enum class CharacterState : uint8;
template<> COMBATSYSTEM_API UEnum* StaticEnum<CharacterState>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
