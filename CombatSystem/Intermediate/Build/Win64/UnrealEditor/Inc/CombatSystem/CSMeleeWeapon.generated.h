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
#ifdef COMBATSYSTEM_CSMeleeWeapon_generated_h
#error "CSMeleeWeapon.generated.h already included, missing '#pragma once' in CSMeleeWeapon.h"
#endif
#define COMBATSYSTEM_CSMeleeWeapon_generated_h

#define FID_CombatSystem_Source_CombatSystem_Public_Equipment_CSMeleeWeapon_h_21_SPARSE_DATA
#define FID_CombatSystem_Source_CombatSystem_Public_Equipment_CSMeleeWeapon_h_21_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnBeginOverlap); \
	DECLARE_FUNCTION(execSetDamageEnabled);


#define FID_CombatSystem_Source_CombatSystem_Public_Equipment_CSMeleeWeapon_h_21_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnBeginOverlap); \
	DECLARE_FUNCTION(execSetDamageEnabled);


#define FID_CombatSystem_Source_CombatSystem_Public_Equipment_CSMeleeWeapon_h_21_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesACSMeleeWeapon(); \
	friend struct Z_Construct_UClass_ACSMeleeWeapon_Statics; \
public: \
	DECLARE_CLASS(ACSMeleeWeapon, ACSWeapon, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/CombatSystem"), NO_API) \
	DECLARE_SERIALIZER(ACSMeleeWeapon)


#define FID_CombatSystem_Source_CombatSystem_Public_Equipment_CSMeleeWeapon_h_21_INCLASS \
private: \
	static void StaticRegisterNativesACSMeleeWeapon(); \
	friend struct Z_Construct_UClass_ACSMeleeWeapon_Statics; \
public: \
	DECLARE_CLASS(ACSMeleeWeapon, ACSWeapon, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/CombatSystem"), NO_API) \
	DECLARE_SERIALIZER(ACSMeleeWeapon)


#define FID_CombatSystem_Source_CombatSystem_Public_Equipment_CSMeleeWeapon_h_21_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ACSMeleeWeapon(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ACSMeleeWeapon) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ACSMeleeWeapon); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ACSMeleeWeapon); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ACSMeleeWeapon(ACSMeleeWeapon&&); \
	NO_API ACSMeleeWeapon(const ACSMeleeWeapon&); \
public:


#define FID_CombatSystem_Source_CombatSystem_Public_Equipment_CSMeleeWeapon_h_21_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ACSMeleeWeapon(ACSMeleeWeapon&&); \
	NO_API ACSMeleeWeapon(const ACSMeleeWeapon&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ACSMeleeWeapon); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ACSMeleeWeapon); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ACSMeleeWeapon)


#define FID_CombatSystem_Source_CombatSystem_Public_Equipment_CSMeleeWeapon_h_18_PROLOG
#define FID_CombatSystem_Source_CombatSystem_Public_Equipment_CSMeleeWeapon_h_21_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_CombatSystem_Source_CombatSystem_Public_Equipment_CSMeleeWeapon_h_21_SPARSE_DATA \
	FID_CombatSystem_Source_CombatSystem_Public_Equipment_CSMeleeWeapon_h_21_RPC_WRAPPERS \
	FID_CombatSystem_Source_CombatSystem_Public_Equipment_CSMeleeWeapon_h_21_INCLASS \
	FID_CombatSystem_Source_CombatSystem_Public_Equipment_CSMeleeWeapon_h_21_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_CombatSystem_Source_CombatSystem_Public_Equipment_CSMeleeWeapon_h_21_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_CombatSystem_Source_CombatSystem_Public_Equipment_CSMeleeWeapon_h_21_SPARSE_DATA \
	FID_CombatSystem_Source_CombatSystem_Public_Equipment_CSMeleeWeapon_h_21_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_CombatSystem_Source_CombatSystem_Public_Equipment_CSMeleeWeapon_h_21_INCLASS_NO_PURE_DECLS \
	FID_CombatSystem_Source_CombatSystem_Public_Equipment_CSMeleeWeapon_h_21_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> COMBATSYSTEM_API UClass* StaticClass<class ACSMeleeWeapon>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_CombatSystem_Source_CombatSystem_Public_Equipment_CSMeleeWeapon_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
