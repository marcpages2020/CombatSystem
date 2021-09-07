// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef COMBATSYSTEM_CSCharacter_generated_h
#error "CSCharacter.generated.h already included, missing '#pragma once' in CSCharacter.h"
#endif
#define COMBATSYSTEM_CSCharacter_generated_h

#define CombatSystem_Source_CombatSystem_Public_CSCharacter_h_12_SPARSE_DATA
#define CombatSystem_Source_CombatSystem_Public_CSCharacter_h_12_RPC_WRAPPERS
#define CombatSystem_Source_CombatSystem_Public_CSCharacter_h_12_RPC_WRAPPERS_NO_PURE_DECLS
#define CombatSystem_Source_CombatSystem_Public_CSCharacter_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesACSCharacter(); \
	friend struct Z_Construct_UClass_ACSCharacter_Statics; \
public: \
	DECLARE_CLASS(ACSCharacter, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/CombatSystem"), NO_API) \
	DECLARE_SERIALIZER(ACSCharacter)


#define CombatSystem_Source_CombatSystem_Public_CSCharacter_h_12_INCLASS \
private: \
	static void StaticRegisterNativesACSCharacter(); \
	friend struct Z_Construct_UClass_ACSCharacter_Statics; \
public: \
	DECLARE_CLASS(ACSCharacter, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/CombatSystem"), NO_API) \
	DECLARE_SERIALIZER(ACSCharacter)


#define CombatSystem_Source_CombatSystem_Public_CSCharacter_h_12_STANDARD_CONSTRUCTORS \
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


#define CombatSystem_Source_CombatSystem_Public_CSCharacter_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ACSCharacter(ACSCharacter&&); \
	NO_API ACSCharacter(const ACSCharacter&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ACSCharacter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ACSCharacter); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ACSCharacter)


#define CombatSystem_Source_CombatSystem_Public_CSCharacter_h_12_PRIVATE_PROPERTY_OFFSET
#define CombatSystem_Source_CombatSystem_Public_CSCharacter_h_9_PROLOG
#define CombatSystem_Source_CombatSystem_Public_CSCharacter_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	CombatSystem_Source_CombatSystem_Public_CSCharacter_h_12_PRIVATE_PROPERTY_OFFSET \
	CombatSystem_Source_CombatSystem_Public_CSCharacter_h_12_SPARSE_DATA \
	CombatSystem_Source_CombatSystem_Public_CSCharacter_h_12_RPC_WRAPPERS \
	CombatSystem_Source_CombatSystem_Public_CSCharacter_h_12_INCLASS \
	CombatSystem_Source_CombatSystem_Public_CSCharacter_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define CombatSystem_Source_CombatSystem_Public_CSCharacter_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	CombatSystem_Source_CombatSystem_Public_CSCharacter_h_12_PRIVATE_PROPERTY_OFFSET \
	CombatSystem_Source_CombatSystem_Public_CSCharacter_h_12_SPARSE_DATA \
	CombatSystem_Source_CombatSystem_Public_CSCharacter_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	CombatSystem_Source_CombatSystem_Public_CSCharacter_h_12_INCLASS_NO_PURE_DECLS \
	CombatSystem_Source_CombatSystem_Public_CSCharacter_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> COMBATSYSTEM_API UClass* StaticClass<class ACSCharacter>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID CombatSystem_Source_CombatSystem_Public_CSCharacter_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
