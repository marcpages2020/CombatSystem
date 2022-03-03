// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef COMBATSYSTEM_CSCharacterState_Aim_generated_h
#error "CSCharacterState_Aim.generated.h already included, missing '#pragma once' in CSCharacterState_Aim.h"
#endif
#define COMBATSYSTEM_CSCharacterState_Aim_generated_h

#define FID_CombatSystem_Source_CombatSystem_Public_Actions_CSCharacterState_Aim_h_23_SPARSE_DATA
#define FID_CombatSystem_Source_CombatSystem_Public_Actions_CSCharacterState_Aim_h_23_RPC_WRAPPERS
#define FID_CombatSystem_Source_CombatSystem_Public_Actions_CSCharacterState_Aim_h_23_RPC_WRAPPERS_NO_PURE_DECLS
#define FID_CombatSystem_Source_CombatSystem_Public_Actions_CSCharacterState_Aim_h_23_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUCSCharacterState_Aim(); \
	friend struct Z_Construct_UClass_UCSCharacterState_Aim_Statics; \
public: \
	DECLARE_CLASS(UCSCharacterState_Aim, UCSCharacterState, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/CombatSystem"), NO_API) \
	DECLARE_SERIALIZER(UCSCharacterState_Aim)


#define FID_CombatSystem_Source_CombatSystem_Public_Actions_CSCharacterState_Aim_h_23_INCLASS \
private: \
	static void StaticRegisterNativesUCSCharacterState_Aim(); \
	friend struct Z_Construct_UClass_UCSCharacterState_Aim_Statics; \
public: \
	DECLARE_CLASS(UCSCharacterState_Aim, UCSCharacterState, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/CombatSystem"), NO_API) \
	DECLARE_SERIALIZER(UCSCharacterState_Aim)


#define FID_CombatSystem_Source_CombatSystem_Public_Actions_CSCharacterState_Aim_h_23_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UCSCharacterState_Aim(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UCSCharacterState_Aim) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCSCharacterState_Aim); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCSCharacterState_Aim); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UCSCharacterState_Aim(UCSCharacterState_Aim&&); \
	NO_API UCSCharacterState_Aim(const UCSCharacterState_Aim&); \
public:


#define FID_CombatSystem_Source_CombatSystem_Public_Actions_CSCharacterState_Aim_h_23_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UCSCharacterState_Aim(UCSCharacterState_Aim&&); \
	NO_API UCSCharacterState_Aim(const UCSCharacterState_Aim&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCSCharacterState_Aim); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCSCharacterState_Aim); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UCSCharacterState_Aim)


#define FID_CombatSystem_Source_CombatSystem_Public_Actions_CSCharacterState_Aim_h_20_PROLOG
#define FID_CombatSystem_Source_CombatSystem_Public_Actions_CSCharacterState_Aim_h_23_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_CombatSystem_Source_CombatSystem_Public_Actions_CSCharacterState_Aim_h_23_SPARSE_DATA \
	FID_CombatSystem_Source_CombatSystem_Public_Actions_CSCharacterState_Aim_h_23_RPC_WRAPPERS \
	FID_CombatSystem_Source_CombatSystem_Public_Actions_CSCharacterState_Aim_h_23_INCLASS \
	FID_CombatSystem_Source_CombatSystem_Public_Actions_CSCharacterState_Aim_h_23_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_CombatSystem_Source_CombatSystem_Public_Actions_CSCharacterState_Aim_h_23_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_CombatSystem_Source_CombatSystem_Public_Actions_CSCharacterState_Aim_h_23_SPARSE_DATA \
	FID_CombatSystem_Source_CombatSystem_Public_Actions_CSCharacterState_Aim_h_23_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_CombatSystem_Source_CombatSystem_Public_Actions_CSCharacterState_Aim_h_23_INCLASS_NO_PURE_DECLS \
	FID_CombatSystem_Source_CombatSystem_Public_Actions_CSCharacterState_Aim_h_23_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> COMBATSYSTEM_API UClass* StaticClass<class UCSCharacterState_Aim>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_CombatSystem_Source_CombatSystem_Public_Actions_CSCharacterState_Aim_h


#define FOREACH_ENUM_CHARACTERSUBSTATETYPE_AIM(op) \
	op(CharacterSubstateType_Aim::IDLE_AIM) \
	op(CharacterSubstateType_Aim::RECOIL_AIM) \
	op(CharacterSubstateType_Aim::SHOOT_AIM) 

enum class CharacterSubstateType_Aim : uint8;
template<> COMBATSYSTEM_API UEnum* StaticEnum<CharacterSubstateType_Aim>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
