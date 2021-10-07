// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class ACSWeapon;
#ifdef COMBATSYSTEM_CSCharacter_generated_h
#error "CSCharacter.generated.h already included, missing '#pragma once' in CSCharacter.h"
#endif
#define COMBATSYSTEM_CSCharacter_generated_h

#define CombatSystem_Source_CombatSystem_Public_CSCharacter_h_17_SPARSE_DATA
#define CombatSystem_Source_CombatSystem_Public_CSCharacter_h_17_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetCurrentWeapon); \
	DECLARE_FUNCTION(execStartDodge); \
	DECLARE_FUNCTION(execDeleteDodgeRequest); \
	DECLARE_FUNCTION(execStopAttacking); \
	DECLARE_FUNCTION(execStartAttacking);


#define CombatSystem_Source_CombatSystem_Public_CSCharacter_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetCurrentWeapon); \
	DECLARE_FUNCTION(execStartDodge); \
	DECLARE_FUNCTION(execDeleteDodgeRequest); \
	DECLARE_FUNCTION(execStopAttacking); \
	DECLARE_FUNCTION(execStartAttacking);


#define CombatSystem_Source_CombatSystem_Public_CSCharacter_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesACSCharacter(); \
	friend struct Z_Construct_UClass_ACSCharacter_Statics; \
public: \
	DECLARE_CLASS(ACSCharacter, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/CombatSystem"), NO_API) \
	DECLARE_SERIALIZER(ACSCharacter)


#define CombatSystem_Source_CombatSystem_Public_CSCharacter_h_17_INCLASS \
private: \
	static void StaticRegisterNativesACSCharacter(); \
	friend struct Z_Construct_UClass_ACSCharacter_Statics; \
public: \
	DECLARE_CLASS(ACSCharacter, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/CombatSystem"), NO_API) \
	DECLARE_SERIALIZER(ACSCharacter)


#define CombatSystem_Source_CombatSystem_Public_CSCharacter_h_17_STANDARD_CONSTRUCTORS \
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


#define CombatSystem_Source_CombatSystem_Public_CSCharacter_h_17_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ACSCharacter(ACSCharacter&&); \
	NO_API ACSCharacter(const ACSCharacter&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ACSCharacter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ACSCharacter); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ACSCharacter)


#define CombatSystem_Source_CombatSystem_Public_CSCharacter_h_17_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__JogSpeed() { return STRUCT_OFFSET(ACSCharacter, JogSpeed); } \
	FORCEINLINE static uint32 __PPO__RunSpeed() { return STRUCT_OFFSET(ACSCharacter, RunSpeed); } \
	FORCEINLINE static uint32 __PPO__SpringArmComp() { return STRUCT_OFFSET(ACSCharacter, SpringArmComp); } \
	FORCEINLINE static uint32 __PPO__DefaultFOV() { return STRUCT_OFFSET(ACSCharacter, DefaultFOV); } \
	FORCEINLINE static uint32 __PPO__LockedFOV() { return STRUCT_OFFSET(ACSCharacter, LockedFOV); } \
	FORCEINLINE static uint32 __PPO__CameraComp() { return STRUCT_OFFSET(ACSCharacter, CameraComp); } \
	FORCEINLINE static uint32 __PPO__TargetLocked() { return STRUCT_OFFSET(ACSCharacter, TargetLocked); } \
	FORCEINLINE static uint32 __PPO__WantsToAttack() { return STRUCT_OFFSET(ACSCharacter, WantsToAttack); } \
	FORCEINLINE static uint32 __PPO__ActionsRequestTime() { return STRUCT_OFFSET(ACSCharacter, ActionsRequestTime); } \
	FORCEINLINE static uint32 __PPO__WantsToDodge() { return STRUCT_OFFSET(ACSCharacter, WantsToDodge); } \
	FORCEINLINE static uint32 __PPO__DodgeSpeed() { return STRUCT_OFFSET(ACSCharacter, DodgeSpeed); } \
	FORCEINLINE static uint32 __PPO__IsDodging() { return STRUCT_OFFSET(ACSCharacter, IsDodging); } \
	FORCEINLINE static uint32 __PPO__DodgeTime() { return STRUCT_OFFSET(ACSCharacter, DodgeTime); } \
	FORCEINLINE static uint32 __PPO__StarterWeaponClass() { return STRUCT_OFFSET(ACSCharacter, StarterWeaponClass); } \
	FORCEINLINE static uint32 __PPO__WeaponAttachSocketName() { return STRUCT_OFFSET(ACSCharacter, WeaponAttachSocketName); }


#define CombatSystem_Source_CombatSystem_Public_CSCharacter_h_14_PROLOG
#define CombatSystem_Source_CombatSystem_Public_CSCharacter_h_17_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	CombatSystem_Source_CombatSystem_Public_CSCharacter_h_17_PRIVATE_PROPERTY_OFFSET \
	CombatSystem_Source_CombatSystem_Public_CSCharacter_h_17_SPARSE_DATA \
	CombatSystem_Source_CombatSystem_Public_CSCharacter_h_17_RPC_WRAPPERS \
	CombatSystem_Source_CombatSystem_Public_CSCharacter_h_17_INCLASS \
	CombatSystem_Source_CombatSystem_Public_CSCharacter_h_17_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define CombatSystem_Source_CombatSystem_Public_CSCharacter_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	CombatSystem_Source_CombatSystem_Public_CSCharacter_h_17_PRIVATE_PROPERTY_OFFSET \
	CombatSystem_Source_CombatSystem_Public_CSCharacter_h_17_SPARSE_DATA \
	CombatSystem_Source_CombatSystem_Public_CSCharacter_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	CombatSystem_Source_CombatSystem_Public_CSCharacter_h_17_INCLASS_NO_PURE_DECLS \
	CombatSystem_Source_CombatSystem_Public_CSCharacter_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> COMBATSYSTEM_API UClass* StaticClass<class ACSCharacter>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID CombatSystem_Source_CombatSystem_Public_CSCharacter_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
