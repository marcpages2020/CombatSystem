// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UPrimitiveComponent;
class AActor;
struct FHitResult;
#ifdef COMBATSYSTEM_CSProjectile_generated_h
#error "CSProjectile.generated.h already included, missing '#pragma once' in CSProjectile.h"
#endif
#define COMBATSYSTEM_CSProjectile_generated_h

#define FID_CombatSystem_Source_CombatSystem_Public_CSProjectile_h_16_SPARSE_DATA
#define FID_CombatSystem_Source_CombatSystem_Public_CSProjectile_h_16_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnOverlap);


#define FID_CombatSystem_Source_CombatSystem_Public_CSProjectile_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnOverlap);


#define FID_CombatSystem_Source_CombatSystem_Public_CSProjectile_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesACSProjectile(); \
	friend struct Z_Construct_UClass_ACSProjectile_Statics; \
public: \
	DECLARE_CLASS(ACSProjectile, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/CombatSystem"), NO_API) \
	DECLARE_SERIALIZER(ACSProjectile)


#define FID_CombatSystem_Source_CombatSystem_Public_CSProjectile_h_16_INCLASS \
private: \
	static void StaticRegisterNativesACSProjectile(); \
	friend struct Z_Construct_UClass_ACSProjectile_Statics; \
public: \
	DECLARE_CLASS(ACSProjectile, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/CombatSystem"), NO_API) \
	DECLARE_SERIALIZER(ACSProjectile)


#define FID_CombatSystem_Source_CombatSystem_Public_CSProjectile_h_16_STANDARD_CONSTRUCTORS \
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


#define FID_CombatSystem_Source_CombatSystem_Public_CSProjectile_h_16_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ACSProjectile(ACSProjectile&&); \
	NO_API ACSProjectile(const ACSProjectile&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ACSProjectile); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ACSProjectile); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ACSProjectile)


#define FID_CombatSystem_Source_CombatSystem_Public_CSProjectile_h_13_PROLOG
#define FID_CombatSystem_Source_CombatSystem_Public_CSProjectile_h_16_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_CombatSystem_Source_CombatSystem_Public_CSProjectile_h_16_SPARSE_DATA \
	FID_CombatSystem_Source_CombatSystem_Public_CSProjectile_h_16_RPC_WRAPPERS \
	FID_CombatSystem_Source_CombatSystem_Public_CSProjectile_h_16_INCLASS \
	FID_CombatSystem_Source_CombatSystem_Public_CSProjectile_h_16_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_CombatSystem_Source_CombatSystem_Public_CSProjectile_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_CombatSystem_Source_CombatSystem_Public_CSProjectile_h_16_SPARSE_DATA \
	FID_CombatSystem_Source_CombatSystem_Public_CSProjectile_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_CombatSystem_Source_CombatSystem_Public_CSProjectile_h_16_INCLASS_NO_PURE_DECLS \
	FID_CombatSystem_Source_CombatSystem_Public_CSProjectile_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> COMBATSYSTEM_API UClass* StaticClass<class ACSProjectile>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_CombatSystem_Source_CombatSystem_Public_CSProjectile_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
