// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
enum class CharacterStateType : uint8;
class ACSCharacter;
class ACSWeapon;
class UCSHealthComponent;
class UDamageType;
class AController;
class AActor;
#ifdef COMBATSYSTEM_CSCharacter_generated_h
#error "CSCharacter.generated.h already included, missing '#pragma once' in CSCharacter.h"
#endif
#define COMBATSYSTEM_CSCharacter_generated_h

#define FID_CombatSystem_Source_CombatSystem_Public_CSCharacter_h_35_SPARSE_DATA
#define FID_CombatSystem_Source_CombatSystem_Public_CSCharacter_h_35_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execSetParriable); \
	DECLARE_FUNCTION(execGetStateCurrentSubstate); \
	DECLARE_FUNCTION(execGetCurrentSubstate); \
	DECLARE_FUNCTION(execRequestState); \
	DECLARE_FUNCTION(execGetLockedTarget); \
	DECLARE_FUNCTION(execIsStateRequested); \
	DECLARE_FUNCTION(execGetCurrentWeapon); \
	DECLARE_FUNCTION(execGetHealthComponent); \
	DECLARE_FUNCTION(execOnAnimationNotify); \
	DECLARE_FUNCTION(execOnAnimationEnded); \
	DECLARE_FUNCTION(execOnHealthChanged);


#define FID_CombatSystem_Source_CombatSystem_Public_CSCharacter_h_35_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execSetParriable); \
	DECLARE_FUNCTION(execGetStateCurrentSubstate); \
	DECLARE_FUNCTION(execGetCurrentSubstate); \
	DECLARE_FUNCTION(execRequestState); \
	DECLARE_FUNCTION(execGetLockedTarget); \
	DECLARE_FUNCTION(execIsStateRequested); \
	DECLARE_FUNCTION(execGetCurrentWeapon); \
	DECLARE_FUNCTION(execGetHealthComponent); \
	DECLARE_FUNCTION(execOnAnimationNotify); \
	DECLARE_FUNCTION(execOnAnimationEnded); \
	DECLARE_FUNCTION(execOnHealthChanged);


#define FID_CombatSystem_Source_CombatSystem_Public_CSCharacter_h_35_EVENT_PARMS \
	struct CSCharacter_eventOnSetAsTarget_Parms \
	{ \
		bool IsTarget; \
	}; \
	struct CSCharacter_eventSetCrosshairActive_Parms \
	{ \
		bool Active; \
	}; \
	struct CSCharacter_eventUpdateHealth_Parms \
	{ \
		float UpdatedHealth; \
	};


#define FID_CombatSystem_Source_CombatSystem_Public_CSCharacter_h_35_CALLBACK_WRAPPERS
#define FID_CombatSystem_Source_CombatSystem_Public_CSCharacter_h_35_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesACSCharacter(); \
	friend struct Z_Construct_UClass_ACSCharacter_Statics; \
public: \
	DECLARE_CLASS(ACSCharacter, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/CombatSystem"), NO_API) \
	DECLARE_SERIALIZER(ACSCharacter)


#define FID_CombatSystem_Source_CombatSystem_Public_CSCharacter_h_35_INCLASS \
private: \
	static void StaticRegisterNativesACSCharacter(); \
	friend struct Z_Construct_UClass_ACSCharacter_Statics; \
public: \
	DECLARE_CLASS(ACSCharacter, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/CombatSystem"), NO_API) \
	DECLARE_SERIALIZER(ACSCharacter)


#define FID_CombatSystem_Source_CombatSystem_Public_CSCharacter_h_35_STANDARD_CONSTRUCTORS \
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


#define FID_CombatSystem_Source_CombatSystem_Public_CSCharacter_h_35_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ACSCharacter(ACSCharacter&&); \
	NO_API ACSCharacter(const ACSCharacter&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ACSCharacter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ACSCharacter); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ACSCharacter)


#define FID_CombatSystem_Source_CombatSystem_Public_CSCharacter_h_32_PROLOG \
	FID_CombatSystem_Source_CombatSystem_Public_CSCharacter_h_35_EVENT_PARMS


#define FID_CombatSystem_Source_CombatSystem_Public_CSCharacter_h_35_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_CombatSystem_Source_CombatSystem_Public_CSCharacter_h_35_SPARSE_DATA \
	FID_CombatSystem_Source_CombatSystem_Public_CSCharacter_h_35_RPC_WRAPPERS \
	FID_CombatSystem_Source_CombatSystem_Public_CSCharacter_h_35_CALLBACK_WRAPPERS \
	FID_CombatSystem_Source_CombatSystem_Public_CSCharacter_h_35_INCLASS \
	FID_CombatSystem_Source_CombatSystem_Public_CSCharacter_h_35_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_CombatSystem_Source_CombatSystem_Public_CSCharacter_h_35_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_CombatSystem_Source_CombatSystem_Public_CSCharacter_h_35_SPARSE_DATA \
	FID_CombatSystem_Source_CombatSystem_Public_CSCharacter_h_35_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_CombatSystem_Source_CombatSystem_Public_CSCharacter_h_35_CALLBACK_WRAPPERS \
	FID_CombatSystem_Source_CombatSystem_Public_CSCharacter_h_35_INCLASS_NO_PURE_DECLS \
	FID_CombatSystem_Source_CombatSystem_Public_CSCharacter_h_35_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> COMBATSYSTEM_API UClass* StaticClass<class ACSCharacter>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_CombatSystem_Source_CombatSystem_Public_CSCharacter_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
