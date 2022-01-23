// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
enum class ActionType : uint8;
#ifdef COMBATSYSTEM_CSActionComponent_generated_h
#error "CSActionComponent.generated.h already included, missing '#pragma once' in CSActionComponent.h"
#endif
#define COMBATSYSTEM_CSActionComponent_generated_h

#define CombatSystem_Source_CombatSystem_Public_Components_CSActionComponent_h_16_SPARSE_DATA
#define CombatSystem_Source_CombatSystem_Public_Components_CSActionComponent_h_16_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execIsActionRequested); \
	DECLARE_FUNCTION(execStopAction); \
	DECLARE_FUNCTION(execStartAction);


#define CombatSystem_Source_CombatSystem_Public_Components_CSActionComponent_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execIsActionRequested); \
	DECLARE_FUNCTION(execStopAction); \
	DECLARE_FUNCTION(execStartAction);


#define CombatSystem_Source_CombatSystem_Public_Components_CSActionComponent_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUCSActionComponent(); \
	friend struct Z_Construct_UClass_UCSActionComponent_Statics; \
public: \
	DECLARE_CLASS(UCSActionComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/CombatSystem"), NO_API) \
	DECLARE_SERIALIZER(UCSActionComponent)


#define CombatSystem_Source_CombatSystem_Public_Components_CSActionComponent_h_16_INCLASS \
private: \
	static void StaticRegisterNativesUCSActionComponent(); \
	friend struct Z_Construct_UClass_UCSActionComponent_Statics; \
public: \
	DECLARE_CLASS(UCSActionComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/CombatSystem"), NO_API) \
	DECLARE_SERIALIZER(UCSActionComponent)


#define CombatSystem_Source_CombatSystem_Public_Components_CSActionComponent_h_16_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UCSActionComponent(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UCSActionComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCSActionComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCSActionComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UCSActionComponent(UCSActionComponent&&); \
	NO_API UCSActionComponent(const UCSActionComponent&); \
public:


#define CombatSystem_Source_CombatSystem_Public_Components_CSActionComponent_h_16_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UCSActionComponent(UCSActionComponent&&); \
	NO_API UCSActionComponent(const UCSActionComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCSActionComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCSActionComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UCSActionComponent)


#define CombatSystem_Source_CombatSystem_Public_Components_CSActionComponent_h_16_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__RequestTime() { return STRUCT_OFFSET(UCSActionComponent, RequestTime); } \
	FORCEINLINE static uint32 __PPO__DefaultActions() { return STRUCT_OFFSET(UCSActionComponent, DefaultActions); }


#define CombatSystem_Source_CombatSystem_Public_Components_CSActionComponent_h_13_PROLOG
#define CombatSystem_Source_CombatSystem_Public_Components_CSActionComponent_h_16_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	CombatSystem_Source_CombatSystem_Public_Components_CSActionComponent_h_16_PRIVATE_PROPERTY_OFFSET \
	CombatSystem_Source_CombatSystem_Public_Components_CSActionComponent_h_16_SPARSE_DATA \
	CombatSystem_Source_CombatSystem_Public_Components_CSActionComponent_h_16_RPC_WRAPPERS \
	CombatSystem_Source_CombatSystem_Public_Components_CSActionComponent_h_16_INCLASS \
	CombatSystem_Source_CombatSystem_Public_Components_CSActionComponent_h_16_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define CombatSystem_Source_CombatSystem_Public_Components_CSActionComponent_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	CombatSystem_Source_CombatSystem_Public_Components_CSActionComponent_h_16_PRIVATE_PROPERTY_OFFSET \
	CombatSystem_Source_CombatSystem_Public_Components_CSActionComponent_h_16_SPARSE_DATA \
	CombatSystem_Source_CombatSystem_Public_Components_CSActionComponent_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	CombatSystem_Source_CombatSystem_Public_Components_CSActionComponent_h_16_INCLASS_NO_PURE_DECLS \
	CombatSystem_Source_CombatSystem_Public_Components_CSActionComponent_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> COMBATSYSTEM_API UClass* StaticClass<class UCSActionComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID CombatSystem_Source_CombatSystem_Public_Components_CSActionComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
