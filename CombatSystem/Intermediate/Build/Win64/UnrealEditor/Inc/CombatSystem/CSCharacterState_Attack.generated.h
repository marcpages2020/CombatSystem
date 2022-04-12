// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef COMBATSYSTEM_CSCharacterState_Attack_generated_h
#error "CSCharacterState_Attack.generated.h already included, missing '#pragma once' in CSCharacterState_Attack.h"
#endif
#define COMBATSYSTEM_CSCharacterState_Attack_generated_h

#define FID_CombatSystem_Source_CombatSystem_Public_Actions_CSCharacterState_Attack_h_26_SPARSE_DATA
#define FID_CombatSystem_Source_CombatSystem_Public_Actions_CSCharacterState_Attack_h_26_RPC_WRAPPERS
#define FID_CombatSystem_Source_CombatSystem_Public_Actions_CSCharacterState_Attack_h_26_RPC_WRAPPERS_NO_PURE_DECLS
#define FID_CombatSystem_Source_CombatSystem_Public_Actions_CSCharacterState_Attack_h_26_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUCSCharacterState_Attack(); \
	friend struct Z_Construct_UClass_UCSCharacterState_Attack_Statics; \
public: \
	DECLARE_CLASS(UCSCharacterState_Attack, UCSCharacterState, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/CombatSystem"), NO_API) \
	DECLARE_SERIALIZER(UCSCharacterState_Attack)


#define FID_CombatSystem_Source_CombatSystem_Public_Actions_CSCharacterState_Attack_h_26_INCLASS \
private: \
	static void StaticRegisterNativesUCSCharacterState_Attack(); \
	friend struct Z_Construct_UClass_UCSCharacterState_Attack_Statics; \
public: \
	DECLARE_CLASS(UCSCharacterState_Attack, UCSCharacterState, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/CombatSystem"), NO_API) \
	DECLARE_SERIALIZER(UCSCharacterState_Attack)


#define FID_CombatSystem_Source_CombatSystem_Public_Actions_CSCharacterState_Attack_h_26_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UCSCharacterState_Attack(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UCSCharacterState_Attack) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCSCharacterState_Attack); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCSCharacterState_Attack); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UCSCharacterState_Attack(UCSCharacterState_Attack&&); \
	NO_API UCSCharacterState_Attack(const UCSCharacterState_Attack&); \
public:


#define FID_CombatSystem_Source_CombatSystem_Public_Actions_CSCharacterState_Attack_h_26_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UCSCharacterState_Attack(UCSCharacterState_Attack&&); \
	NO_API UCSCharacterState_Attack(const UCSCharacterState_Attack&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCSCharacterState_Attack); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCSCharacterState_Attack); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UCSCharacterState_Attack)


#define FID_CombatSystem_Source_CombatSystem_Public_Actions_CSCharacterState_Attack_h_23_PROLOG
#define FID_CombatSystem_Source_CombatSystem_Public_Actions_CSCharacterState_Attack_h_26_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_CombatSystem_Source_CombatSystem_Public_Actions_CSCharacterState_Attack_h_26_SPARSE_DATA \
	FID_CombatSystem_Source_CombatSystem_Public_Actions_CSCharacterState_Attack_h_26_RPC_WRAPPERS \
	FID_CombatSystem_Source_CombatSystem_Public_Actions_CSCharacterState_Attack_h_26_INCLASS \
	FID_CombatSystem_Source_CombatSystem_Public_Actions_CSCharacterState_Attack_h_26_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_CombatSystem_Source_CombatSystem_Public_Actions_CSCharacterState_Attack_h_26_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_CombatSystem_Source_CombatSystem_Public_Actions_CSCharacterState_Attack_h_26_SPARSE_DATA \
	FID_CombatSystem_Source_CombatSystem_Public_Actions_CSCharacterState_Attack_h_26_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_CombatSystem_Source_CombatSystem_Public_Actions_CSCharacterState_Attack_h_26_INCLASS_NO_PURE_DECLS \
	FID_CombatSystem_Source_CombatSystem_Public_Actions_CSCharacterState_Attack_h_26_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> COMBATSYSTEM_API UClass* StaticClass<class UCSCharacterState_Attack>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_CombatSystem_Source_CombatSystem_Public_Actions_CSCharacterState_Attack_h


#define FOREACH_ENUM_CHARACTERSUBSTATETYPE_ATTACK(op) \
	op(CharacterSubstateType_Attack::NONE_ATTACK) \
	op(CharacterSubstateType_Attack::DEFAULT_ATTACK) \
	op(CharacterSubstateType_Attack::SECONDARY_ATTACK) \
	op(CharacterSubstateType_Attack::SPIRAL_ATTACK) \
	op(CharacterSubstateType_Attack::STRONG_ATTACK) 

enum class CharacterSubstateType_Attack : uint8;
template<> COMBATSYSTEM_API UEnum* StaticEnum<CharacterSubstateType_Attack>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
