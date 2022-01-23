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
#ifdef COMBATSYSTEM_CSWeapon_generated_h
#error "CSWeapon.generated.h already included, missing '#pragma once' in CSWeapon.h"
#endif
#define COMBATSYSTEM_CSWeapon_generated_h

#define CombatSystem_Source_CombatSystem_Public_CSWeapon_h_17_SPARSE_DATA
#define CombatSystem_Source_CombatSystem_Public_CSWeapon_h_17_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execDisableDamage); \
	DECLARE_FUNCTION(execEnableDamage); \
	DECLARE_FUNCTION(execOnOverlap);


#define CombatSystem_Source_CombatSystem_Public_CSWeapon_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execDisableDamage); \
	DECLARE_FUNCTION(execEnableDamage); \
	DECLARE_FUNCTION(execOnOverlap);


#define CombatSystem_Source_CombatSystem_Public_CSWeapon_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesACSWeapon(); \
	friend struct Z_Construct_UClass_ACSWeapon_Statics; \
public: \
	DECLARE_CLASS(ACSWeapon, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/CombatSystem"), NO_API) \
	DECLARE_SERIALIZER(ACSWeapon)


#define CombatSystem_Source_CombatSystem_Public_CSWeapon_h_17_INCLASS \
private: \
	static void StaticRegisterNativesACSWeapon(); \
	friend struct Z_Construct_UClass_ACSWeapon_Statics; \
public: \
	DECLARE_CLASS(ACSWeapon, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/CombatSystem"), NO_API) \
	DECLARE_SERIALIZER(ACSWeapon)


#define CombatSystem_Source_CombatSystem_Public_CSWeapon_h_17_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ACSWeapon(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ACSWeapon) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ACSWeapon); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ACSWeapon); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ACSWeapon(ACSWeapon&&); \
	NO_API ACSWeapon(const ACSWeapon&); \
public:


#define CombatSystem_Source_CombatSystem_Public_CSWeapon_h_17_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ACSWeapon(ACSWeapon&&); \
	NO_API ACSWeapon(const ACSWeapon&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ACSWeapon); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ACSWeapon); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ACSWeapon)


#define CombatSystem_Source_CombatSystem_Public_CSWeapon_h_17_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__MeshComp() { return STRUCT_OFFSET(ACSWeapon, MeshComp); } \
	FORCEINLINE static uint32 __PPO__CollisionComp() { return STRUCT_OFFSET(ACSWeapon, CollisionComp); } \
	FORCEINLINE static uint32 __PPO__FleshImpactEffect() { return STRUCT_OFFSET(ACSWeapon, FleshImpactEffect); }


#define CombatSystem_Source_CombatSystem_Public_CSWeapon_h_14_PROLOG
#define CombatSystem_Source_CombatSystem_Public_CSWeapon_h_17_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	CombatSystem_Source_CombatSystem_Public_CSWeapon_h_17_PRIVATE_PROPERTY_OFFSET \
	CombatSystem_Source_CombatSystem_Public_CSWeapon_h_17_SPARSE_DATA \
	CombatSystem_Source_CombatSystem_Public_CSWeapon_h_17_RPC_WRAPPERS \
	CombatSystem_Source_CombatSystem_Public_CSWeapon_h_17_INCLASS \
	CombatSystem_Source_CombatSystem_Public_CSWeapon_h_17_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define CombatSystem_Source_CombatSystem_Public_CSWeapon_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	CombatSystem_Source_CombatSystem_Public_CSWeapon_h_17_PRIVATE_PROPERTY_OFFSET \
	CombatSystem_Source_CombatSystem_Public_CSWeapon_h_17_SPARSE_DATA \
	CombatSystem_Source_CombatSystem_Public_CSWeapon_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	CombatSystem_Source_CombatSystem_Public_CSWeapon_h_17_INCLASS_NO_PURE_DECLS \
	CombatSystem_Source_CombatSystem_Public_CSWeapon_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> COMBATSYSTEM_API UClass* StaticClass<class ACSWeapon>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID CombatSystem_Source_CombatSystem_Public_CSWeapon_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
