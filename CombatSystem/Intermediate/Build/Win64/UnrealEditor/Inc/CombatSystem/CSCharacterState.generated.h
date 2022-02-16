// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef COMBATSYSTEM_CSCharacterState_generated_h
#error "CSCharacterState.generated.h already included, missing '#pragma once' in CSCharacterState.h"
#endif
#define COMBATSYSTEM_CSCharacterState_generated_h

#define CombatSystem_Source_CombatSystem_Public_Actions_CSCharacterState_h_32_SPARSE_DATA
#define CombatSystem_Source_CombatSystem_Public_Actions_CSCharacterState_h_32_RPC_WRAPPERS
#define CombatSystem_Source_CombatSystem_Public_Actions_CSCharacterState_h_32_RPC_WRAPPERS_NO_PURE_DECLS
#define CombatSystem_Source_CombatSystem_Public_Actions_CSCharacterState_h_32_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUCSCharacterState(); \
	friend struct Z_Construct_UClass_UCSCharacterState_Statics; \
public: \
	DECLARE_CLASS(UCSCharacterState, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/CombatSystem"), NO_API) \
	DECLARE_SERIALIZER(UCSCharacterState)


#define CombatSystem_Source_CombatSystem_Public_Actions_CSCharacterState_h_32_INCLASS \
private: \
	static void StaticRegisterNativesUCSCharacterState(); \
	friend struct Z_Construct_UClass_UCSCharacterState_Statics; \
public: \
	DECLARE_CLASS(UCSCharacterState, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/CombatSystem"), NO_API) \
	DECLARE_SERIALIZER(UCSCharacterState)


#define CombatSystem_Source_CombatSystem_Public_Actions_CSCharacterState_h_32_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UCSCharacterState(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UCSCharacterState) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCSCharacterState); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCSCharacterState); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UCSCharacterState(UCSCharacterState&&); \
	NO_API UCSCharacterState(const UCSCharacterState&); \
public:


#define CombatSystem_Source_CombatSystem_Public_Actions_CSCharacterState_h_32_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UCSCharacterState(UCSCharacterState&&); \
	NO_API UCSCharacterState(const UCSCharacterState&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCSCharacterState); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCSCharacterState); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UCSCharacterState)


#define CombatSystem_Source_CombatSystem_Public_Actions_CSCharacterState_h_32_PRIVATE_PROPERTY_OFFSET
#define CombatSystem_Source_CombatSystem_Public_Actions_CSCharacterState_h_29_PROLOG
#define CombatSystem_Source_CombatSystem_Public_Actions_CSCharacterState_h_32_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	CombatSystem_Source_CombatSystem_Public_Actions_CSCharacterState_h_32_PRIVATE_PROPERTY_OFFSET \
	CombatSystem_Source_CombatSystem_Public_Actions_CSCharacterState_h_32_SPARSE_DATA \
	CombatSystem_Source_CombatSystem_Public_Actions_CSCharacterState_h_32_RPC_WRAPPERS \
	CombatSystem_Source_CombatSystem_Public_Actions_CSCharacterState_h_32_INCLASS \
	CombatSystem_Source_CombatSystem_Public_Actions_CSCharacterState_h_32_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define CombatSystem_Source_CombatSystem_Public_Actions_CSCharacterState_h_32_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	CombatSystem_Source_CombatSystem_Public_Actions_CSCharacterState_h_32_PRIVATE_PROPERTY_OFFSET \
	CombatSystem_Source_CombatSystem_Public_Actions_CSCharacterState_h_32_SPARSE_DATA \
	CombatSystem_Source_CombatSystem_Public_Actions_CSCharacterState_h_32_RPC_WRAPPERS_NO_PURE_DECLS \
	CombatSystem_Source_CombatSystem_Public_Actions_CSCharacterState_h_32_INCLASS_NO_PURE_DECLS \
	CombatSystem_Source_CombatSystem_Public_Actions_CSCharacterState_h_32_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> COMBATSYSTEM_API UClass* StaticClass<class UCSCharacterState>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID CombatSystem_Source_CombatSystem_Public_Actions_CSCharacterState_h


#define FOREACH_ENUM_CHARACTERSTATETYPE(op) \
	op(CharacterStateType::NONE) \
	op(CharacterStateType::DEFAULT) \
	op(CharacterStateType::ATTACK) \
	op(CharacterStateType::DODGE) \
	op(CharacterStateType::BLOCK) \
	op(CharacterStateType::PARRY) \
	op(CharacterStateType::HIT) \
	op(CharacterStateType::DEAD) \
	op(CharacterStateType::MAX_STATES) 

enum class CharacterStateType : uint8;
template<> COMBATSYSTEM_API UEnum* StaticEnum<CharacterStateType>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
