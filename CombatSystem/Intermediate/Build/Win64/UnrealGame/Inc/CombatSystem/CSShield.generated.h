// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef COMBATSYSTEM_CSShield_generated_h
#error "CSShield.generated.h already included, missing '#pragma once' in CSShield.h"
#endif
#define COMBATSYSTEM_CSShield_generated_h

#define CombatSystem_Source_CombatSystem_Public_CSShield_h_15_SPARSE_DATA
#define CombatSystem_Source_CombatSystem_Public_CSShield_h_15_RPC_WRAPPERS
#define CombatSystem_Source_CombatSystem_Public_CSShield_h_15_RPC_WRAPPERS_NO_PURE_DECLS
#define CombatSystem_Source_CombatSystem_Public_CSShield_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesACSShield(); \
	friend struct Z_Construct_UClass_ACSShield_Statics; \
public: \
	DECLARE_CLASS(ACSShield, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/CombatSystem"), NO_API) \
	DECLARE_SERIALIZER(ACSShield)


#define CombatSystem_Source_CombatSystem_Public_CSShield_h_15_INCLASS \
private: \
	static void StaticRegisterNativesACSShield(); \
	friend struct Z_Construct_UClass_ACSShield_Statics; \
public: \
	DECLARE_CLASS(ACSShield, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/CombatSystem"), NO_API) \
	DECLARE_SERIALIZER(ACSShield)


#define CombatSystem_Source_CombatSystem_Public_CSShield_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ACSShield(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ACSShield) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ACSShield); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ACSShield); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ACSShield(ACSShield&&); \
	NO_API ACSShield(const ACSShield&); \
public:


#define CombatSystem_Source_CombatSystem_Public_CSShield_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ACSShield(ACSShield&&); \
	NO_API ACSShield(const ACSShield&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ACSShield); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ACSShield); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ACSShield)


#define CombatSystem_Source_CombatSystem_Public_CSShield_h_15_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__MeshComp() { return STRUCT_OFFSET(ACSShield, MeshComp); }


#define CombatSystem_Source_CombatSystem_Public_CSShield_h_12_PROLOG
#define CombatSystem_Source_CombatSystem_Public_CSShield_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	CombatSystem_Source_CombatSystem_Public_CSShield_h_15_PRIVATE_PROPERTY_OFFSET \
	CombatSystem_Source_CombatSystem_Public_CSShield_h_15_SPARSE_DATA \
	CombatSystem_Source_CombatSystem_Public_CSShield_h_15_RPC_WRAPPERS \
	CombatSystem_Source_CombatSystem_Public_CSShield_h_15_INCLASS \
	CombatSystem_Source_CombatSystem_Public_CSShield_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define CombatSystem_Source_CombatSystem_Public_CSShield_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	CombatSystem_Source_CombatSystem_Public_CSShield_h_15_PRIVATE_PROPERTY_OFFSET \
	CombatSystem_Source_CombatSystem_Public_CSShield_h_15_SPARSE_DATA \
	CombatSystem_Source_CombatSystem_Public_CSShield_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	CombatSystem_Source_CombatSystem_Public_CSShield_h_15_INCLASS_NO_PURE_DECLS \
	CombatSystem_Source_CombatSystem_Public_CSShield_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> COMBATSYSTEM_API UClass* StaticClass<class ACSShield>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID CombatSystem_Source_CombatSystem_Public_CSShield_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
