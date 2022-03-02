// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef COMBATSYSTEM_CSProjectile_generated_h
#error "CSProjectile.generated.h already included, missing '#pragma once' in CSProjectile.h"
#endif
#define COMBATSYSTEM_CSProjectile_generated_h

#define CombatSystem_Source_CombatSystem_Public_CSProjectile_h_15_SPARSE_DATA
#define CombatSystem_Source_CombatSystem_Public_CSProjectile_h_15_RPC_WRAPPERS
#define CombatSystem_Source_CombatSystem_Public_CSProjectile_h_15_RPC_WRAPPERS_NO_PURE_DECLS
#define CombatSystem_Source_CombatSystem_Public_CSProjectile_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesACSProjectile(); \
	friend struct Z_Construct_UClass_ACSProjectile_Statics; \
public: \
	DECLARE_CLASS(ACSProjectile, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/CombatSystem"), NO_API) \
	DECLARE_SERIALIZER(ACSProjectile)


#define CombatSystem_Source_CombatSystem_Public_CSProjectile_h_15_INCLASS \
private: \
	static void StaticRegisterNativesACSProjectile(); \
	friend struct Z_Construct_UClass_ACSProjectile_Statics; \
public: \
	DECLARE_CLASS(ACSProjectile, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/CombatSystem"), NO_API) \
	DECLARE_SERIALIZER(ACSProjectile)


#define CombatSystem_Source_CombatSystem_Public_CSProjectile_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ACSProjectile(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ACSProjectile) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ACSProjectile); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ACSProjectile); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ACSProjectile(ACSProjectile&&); \
	NO_API ACSProjectile(const ACSProjectile&); \
public:


#define CombatSystem_Source_CombatSystem_Public_CSProjectile_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ACSProjectile(ACSProjectile&&); \
	NO_API ACSProjectile(const ACSProjectile&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ACSProjectile); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ACSProjectile); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ACSProjectile)


#define CombatSystem_Source_CombatSystem_Public_CSProjectile_h_15_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__CollisionComponent() { return STRUCT_OFFSET(ACSProjectile, CollisionComponent); } \
	FORCEINLINE static uint32 __PPO__MeshComponent() { return STRUCT_OFFSET(ACSProjectile, MeshComponent); }


#define CombatSystem_Source_CombatSystem_Public_CSProjectile_h_12_PROLOG
#define CombatSystem_Source_CombatSystem_Public_CSProjectile_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	CombatSystem_Source_CombatSystem_Public_CSProjectile_h_15_PRIVATE_PROPERTY_OFFSET \
	CombatSystem_Source_CombatSystem_Public_CSProjectile_h_15_SPARSE_DATA \
	CombatSystem_Source_CombatSystem_Public_CSProjectile_h_15_RPC_WRAPPERS \
	CombatSystem_Source_CombatSystem_Public_CSProjectile_h_15_INCLASS \
	CombatSystem_Source_CombatSystem_Public_CSProjectile_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define CombatSystem_Source_CombatSystem_Public_CSProjectile_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	CombatSystem_Source_CombatSystem_Public_CSProjectile_h_15_PRIVATE_PROPERTY_OFFSET \
	CombatSystem_Source_CombatSystem_Public_CSProjectile_h_15_SPARSE_DATA \
	CombatSystem_Source_CombatSystem_Public_CSProjectile_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	CombatSystem_Source_CombatSystem_Public_CSProjectile_h_15_INCLASS_NO_PURE_DECLS \
	CombatSystem_Source_CombatSystem_Public_CSProjectile_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> COMBATSYSTEM_API UClass* StaticClass<class ACSProjectile>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID CombatSystem_Source_CombatSystem_Public_CSProjectile_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
