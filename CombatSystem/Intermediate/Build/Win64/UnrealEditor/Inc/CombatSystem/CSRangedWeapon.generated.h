// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef COMBATSYSTEM_CSRangedWeapon_generated_h
#error "CSRangedWeapon.generated.h already included, missing '#pragma once' in CSRangedWeapon.h"
#endif
#define COMBATSYSTEM_CSRangedWeapon_generated_h

#define CombatSystem_Source_CombatSystem_Public_Equipment_CSRangedWeapon_h_16_SPARSE_DATA
#define CombatSystem_Source_CombatSystem_Public_Equipment_CSRangedWeapon_h_16_RPC_WRAPPERS
#define CombatSystem_Source_CombatSystem_Public_Equipment_CSRangedWeapon_h_16_RPC_WRAPPERS_NO_PURE_DECLS
#define CombatSystem_Source_CombatSystem_Public_Equipment_CSRangedWeapon_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesACSRangedWeapon(); \
	friend struct Z_Construct_UClass_ACSRangedWeapon_Statics; \
public: \
	DECLARE_CLASS(ACSRangedWeapon, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/CombatSystem"), NO_API) \
	DECLARE_SERIALIZER(ACSRangedWeapon)


#define CombatSystem_Source_CombatSystem_Public_Equipment_CSRangedWeapon_h_16_INCLASS \
private: \
	static void StaticRegisterNativesACSRangedWeapon(); \
	friend struct Z_Construct_UClass_ACSRangedWeapon_Statics; \
public: \
	DECLARE_CLASS(ACSRangedWeapon, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/CombatSystem"), NO_API) \
	DECLARE_SERIALIZER(ACSRangedWeapon)


#define CombatSystem_Source_CombatSystem_Public_Equipment_CSRangedWeapon_h_16_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ACSRangedWeapon(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ACSRangedWeapon) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ACSRangedWeapon); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ACSRangedWeapon); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ACSRangedWeapon(ACSRangedWeapon&&); \
	NO_API ACSRangedWeapon(const ACSRangedWeapon&); \
public:


#define CombatSystem_Source_CombatSystem_Public_Equipment_CSRangedWeapon_h_16_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ACSRangedWeapon(ACSRangedWeapon&&); \
	NO_API ACSRangedWeapon(const ACSRangedWeapon&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ACSRangedWeapon); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ACSRangedWeapon); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ACSRangedWeapon)


#define CombatSystem_Source_CombatSystem_Public_Equipment_CSRangedWeapon_h_16_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__MeshComponent() { return STRUCT_OFFSET(ACSRangedWeapon, MeshComponent); } \
	FORCEINLINE static uint32 __PPO__WeaponRange() { return STRUCT_OFFSET(ACSRangedWeapon, WeaponRange); } \
	FORCEINLINE static uint32 __PPO__MaxShootImpulse() { return STRUCT_OFFSET(ACSRangedWeapon, MaxShootImpulse); } \
	FORCEINLINE static uint32 __PPO__DefaultProjectileClass() { return STRUCT_OFFSET(ACSRangedWeapon, DefaultProjectileClass); }


#define CombatSystem_Source_CombatSystem_Public_Equipment_CSRangedWeapon_h_13_PROLOG
#define CombatSystem_Source_CombatSystem_Public_Equipment_CSRangedWeapon_h_16_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	CombatSystem_Source_CombatSystem_Public_Equipment_CSRangedWeapon_h_16_PRIVATE_PROPERTY_OFFSET \
	CombatSystem_Source_CombatSystem_Public_Equipment_CSRangedWeapon_h_16_SPARSE_DATA \
	CombatSystem_Source_CombatSystem_Public_Equipment_CSRangedWeapon_h_16_RPC_WRAPPERS \
	CombatSystem_Source_CombatSystem_Public_Equipment_CSRangedWeapon_h_16_INCLASS \
	CombatSystem_Source_CombatSystem_Public_Equipment_CSRangedWeapon_h_16_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define CombatSystem_Source_CombatSystem_Public_Equipment_CSRangedWeapon_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	CombatSystem_Source_CombatSystem_Public_Equipment_CSRangedWeapon_h_16_PRIVATE_PROPERTY_OFFSET \
	CombatSystem_Source_CombatSystem_Public_Equipment_CSRangedWeapon_h_16_SPARSE_DATA \
	CombatSystem_Source_CombatSystem_Public_Equipment_CSRangedWeapon_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	CombatSystem_Source_CombatSystem_Public_Equipment_CSRangedWeapon_h_16_INCLASS_NO_PURE_DECLS \
	CombatSystem_Source_CombatSystem_Public_Equipment_CSRangedWeapon_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> COMBATSYSTEM_API UClass* StaticClass<class ACSRangedWeapon>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID CombatSystem_Source_CombatSystem_Public_Equipment_CSRangedWeapon_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
