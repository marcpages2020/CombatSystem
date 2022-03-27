// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef COMBATSYSTEM_CSCharacterState_Hit_generated_h
#error "CSCharacterState_Hit.generated.h already included, missing '#pragma once' in CSCharacterState_Hit.h"
#endif
#define COMBATSYSTEM_CSCharacterState_Hit_generated_h

#define FID_CombatSystem_Source_CombatSystem_Public_Actions_CSCharacterState_Hit_h_24_SPARSE_DATA
#define FID_CombatSystem_Source_CombatSystem_Public_Actions_CSCharacterState_Hit_h_24_RPC_WRAPPERS
#define FID_CombatSystem_Source_CombatSystem_Public_Actions_CSCharacterState_Hit_h_24_RPC_WRAPPERS_NO_PURE_DECLS
#define FID_CombatSystem_Source_CombatSystem_Public_Actions_CSCharacterState_Hit_h_24_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUCSCharacterState_Hit(); \
	friend struct Z_Construct_UClass_UCSCharacterState_Hit_Statics; \
public: \
	DECLARE_CLASS(UCSCharacterState_Hit, UCSCharacterState, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/CombatSystem"), NO_API) \
	DECLARE_SERIALIZER(UCSCharacterState_Hit)


#define FID_CombatSystem_Source_CombatSystem_Public_Actions_CSCharacterState_Hit_h_24_INCLASS \
private: \
	static void StaticRegisterNativesUCSCharacterState_Hit(); \
	friend struct Z_Construct_UClass_UCSCharacterState_Hit_Statics; \
public: \
	DECLARE_CLASS(UCSCharacterState_Hit, UCSCharacterState, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/CombatSystem"), NO_API) \
	DECLARE_SERIALIZER(UCSCharacterState_Hit)


#define FID_CombatSystem_Source_CombatSystem_Public_Actions_CSCharacterState_Hit_h_24_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UCSCharacterState_Hit(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UCSCharacterState_Hit) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCSCharacterState_Hit); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCSCharacterState_Hit); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UCSCharacterState_Hit(UCSCharacterState_Hit&&); \
	NO_API UCSCharacterState_Hit(const UCSCharacterState_Hit&); \
public:


#define FID_CombatSystem_Source_CombatSystem_Public_Actions_CSCharacterState_Hit_h_24_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UCSCharacterState_Hit(UCSCharacterState_Hit&&); \
	NO_API UCSCharacterState_Hit(const UCSCharacterState_Hit&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCSCharacterState_Hit); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCSCharacterState_Hit); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UCSCharacterState_Hit)


#define FID_CombatSystem_Source_CombatSystem_Public_Actions_CSCharacterState_Hit_h_21_PROLOG
#define FID_CombatSystem_Source_CombatSystem_Public_Actions_CSCharacterState_Hit_h_24_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_CombatSystem_Source_CombatSystem_Public_Actions_CSCharacterState_Hit_h_24_SPARSE_DATA \
	FID_CombatSystem_Source_CombatSystem_Public_Actions_CSCharacterState_Hit_h_24_RPC_WRAPPERS \
	FID_CombatSystem_Source_CombatSystem_Public_Actions_CSCharacterState_Hit_h_24_INCLASS \
	FID_CombatSystem_Source_CombatSystem_Public_Actions_CSCharacterState_Hit_h_24_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_CombatSystem_Source_CombatSystem_Public_Actions_CSCharacterState_Hit_h_24_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_CombatSystem_Source_CombatSystem_Public_Actions_CSCharacterState_Hit_h_24_SPARSE_DATA \
	FID_CombatSystem_Source_CombatSystem_Public_Actions_CSCharacterState_Hit_h_24_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_CombatSystem_Source_CombatSystem_Public_Actions_CSCharacterState_Hit_h_24_INCLASS_NO_PURE_DECLS \
	FID_CombatSystem_Source_CombatSystem_Public_Actions_CSCharacterState_Hit_h_24_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> COMBATSYSTEM_API UClass* StaticClass<class UCSCharacterState_Hit>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_CombatSystem_Source_CombatSystem_Public_Actions_CSCharacterState_Hit_h


#define FOREACH_ENUM_CHARACTERSUBSTATETYPE_HIT(op) \
	op(CharacterSubstateType_Hit::DEFAULT_HIT) \
	op(CharacterSubstateType_Hit::BLOCK_HIT) \
	op(CharacterSubstateType_Hit::PARRIED_HIT) \
	op(CharacterSubstateType_Hit::KICKED_HIT) 

enum class CharacterSubstateType_Hit : uint8;
template<> COMBATSYSTEM_API UEnum* StaticEnum<CharacterSubstateType_Hit>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
