// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef COMBATSYSTEM_CSAction_generated_h
#error "CSAction.generated.h already included, missing '#pragma once' in CSAction.h"
#endif
#define COMBATSYSTEM_CSAction_generated_h

#define CombatSystem_Source_CombatSystem_Public_Actions_CSAction_h_27_SPARSE_DATA
#define CombatSystem_Source_CombatSystem_Public_Actions_CSAction_h_27_RPC_WRAPPERS
#define CombatSystem_Source_CombatSystem_Public_Actions_CSAction_h_27_RPC_WRAPPERS_NO_PURE_DECLS
#define CombatSystem_Source_CombatSystem_Public_Actions_CSAction_h_27_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUCSAction(); \
	friend struct Z_Construct_UClass_UCSAction_Statics; \
public: \
	DECLARE_CLASS(UCSAction, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/CombatSystem"), NO_API) \
	DECLARE_SERIALIZER(UCSAction)


#define CombatSystem_Source_CombatSystem_Public_Actions_CSAction_h_27_INCLASS \
private: \
	static void StaticRegisterNativesUCSAction(); \
	friend struct Z_Construct_UClass_UCSAction_Statics; \
public: \
	DECLARE_CLASS(UCSAction, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/CombatSystem"), NO_API) \
	DECLARE_SERIALIZER(UCSAction)


#define CombatSystem_Source_CombatSystem_Public_Actions_CSAction_h_27_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UCSAction(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UCSAction) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCSAction); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCSAction); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UCSAction(UCSAction&&); \
	NO_API UCSAction(const UCSAction&); \
public:


#define CombatSystem_Source_CombatSystem_Public_Actions_CSAction_h_27_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UCSAction(UCSAction&&); \
	NO_API UCSAction(const UCSAction&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCSAction); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCSAction); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UCSAction)


#define CombatSystem_Source_CombatSystem_Public_Actions_CSAction_h_27_PRIVATE_PROPERTY_OFFSET
#define CombatSystem_Source_CombatSystem_Public_Actions_CSAction_h_24_PROLOG
#define CombatSystem_Source_CombatSystem_Public_Actions_CSAction_h_27_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	CombatSystem_Source_CombatSystem_Public_Actions_CSAction_h_27_PRIVATE_PROPERTY_OFFSET \
	CombatSystem_Source_CombatSystem_Public_Actions_CSAction_h_27_SPARSE_DATA \
	CombatSystem_Source_CombatSystem_Public_Actions_CSAction_h_27_RPC_WRAPPERS \
	CombatSystem_Source_CombatSystem_Public_Actions_CSAction_h_27_INCLASS \
	CombatSystem_Source_CombatSystem_Public_Actions_CSAction_h_27_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define CombatSystem_Source_CombatSystem_Public_Actions_CSAction_h_27_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	CombatSystem_Source_CombatSystem_Public_Actions_CSAction_h_27_PRIVATE_PROPERTY_OFFSET \
	CombatSystem_Source_CombatSystem_Public_Actions_CSAction_h_27_SPARSE_DATA \
	CombatSystem_Source_CombatSystem_Public_Actions_CSAction_h_27_RPC_WRAPPERS_NO_PURE_DECLS \
	CombatSystem_Source_CombatSystem_Public_Actions_CSAction_h_27_INCLASS_NO_PURE_DECLS \
	CombatSystem_Source_CombatSystem_Public_Actions_CSAction_h_27_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> COMBATSYSTEM_API UClass* StaticClass<class UCSAction>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID CombatSystem_Source_CombatSystem_Public_Actions_CSAction_h


#define FOREACH_ENUM_ACTIONTYPE(op) \
	op(ActionType::ATTACK) \
	op(ActionType::DODGE) \
	op(ActionType::MAX_ACTIONS) 

enum class ActionType : uint8;
template<> COMBATSYSTEM_API UEnum* StaticEnum<ActionType>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
