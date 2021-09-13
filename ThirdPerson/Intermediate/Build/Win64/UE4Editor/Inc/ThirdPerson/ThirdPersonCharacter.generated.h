// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef THIRDPERSON_ThirdPersonCharacter_generated_h
#error "ThirdPersonCharacter.generated.h already included, missing '#pragma once' in ThirdPersonCharacter.h"
#endif
#define THIRDPERSON_ThirdPersonCharacter_generated_h

#define ThirdPerson_Source_ThirdPerson_ThirdPersonCharacter_h_12_SPARSE_DATA
#define ThirdPerson_Source_ThirdPerson_ThirdPersonCharacter_h_12_RPC_WRAPPERS
#define ThirdPerson_Source_ThirdPerson_ThirdPersonCharacter_h_12_RPC_WRAPPERS_NO_PURE_DECLS
#define ThirdPerson_Source_ThirdPerson_ThirdPersonCharacter_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAThirdPersonCharacter(); \
	friend struct Z_Construct_UClass_AThirdPersonCharacter_Statics; \
public: \
	DECLARE_CLASS(AThirdPersonCharacter, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ThirdPerson"), NO_API) \
	DECLARE_SERIALIZER(AThirdPersonCharacter)


#define ThirdPerson_Source_ThirdPerson_ThirdPersonCharacter_h_12_INCLASS \
private: \
	static void StaticRegisterNativesAThirdPersonCharacter(); \
	friend struct Z_Construct_UClass_AThirdPersonCharacter_Statics; \
public: \
	DECLARE_CLASS(AThirdPersonCharacter, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ThirdPerson"), NO_API) \
	DECLARE_SERIALIZER(AThirdPersonCharacter)


#define ThirdPerson_Source_ThirdPerson_ThirdPersonCharacter_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AThirdPersonCharacter(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AThirdPersonCharacter) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AThirdPersonCharacter); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AThirdPersonCharacter); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AThirdPersonCharacter(AThirdPersonCharacter&&); \
	NO_API AThirdPersonCharacter(const AThirdPersonCharacter&); \
public:


#define ThirdPerson_Source_ThirdPerson_ThirdPersonCharacter_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AThirdPersonCharacter(AThirdPersonCharacter&&); \
	NO_API AThirdPersonCharacter(const AThirdPersonCharacter&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AThirdPersonCharacter); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AThirdPersonCharacter); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AThirdPersonCharacter)


#define ThirdPerson_Source_ThirdPerson_ThirdPersonCharacter_h_12_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__CameraBoom() { return STRUCT_OFFSET(AThirdPersonCharacter, CameraBoom); } \
	FORCEINLINE static uint32 __PPO__FollowCamera() { return STRUCT_OFFSET(AThirdPersonCharacter, FollowCamera); }


#define ThirdPerson_Source_ThirdPerson_ThirdPersonCharacter_h_9_PROLOG
#define ThirdPerson_Source_ThirdPerson_ThirdPersonCharacter_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	ThirdPerson_Source_ThirdPerson_ThirdPersonCharacter_h_12_PRIVATE_PROPERTY_OFFSET \
	ThirdPerson_Source_ThirdPerson_ThirdPersonCharacter_h_12_SPARSE_DATA \
	ThirdPerson_Source_ThirdPerson_ThirdPersonCharacter_h_12_RPC_WRAPPERS \
	ThirdPerson_Source_ThirdPerson_ThirdPersonCharacter_h_12_INCLASS \
	ThirdPerson_Source_ThirdPerson_ThirdPersonCharacter_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define ThirdPerson_Source_ThirdPerson_ThirdPersonCharacter_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	ThirdPerson_Source_ThirdPerson_ThirdPersonCharacter_h_12_PRIVATE_PROPERTY_OFFSET \
	ThirdPerson_Source_ThirdPerson_ThirdPersonCharacter_h_12_SPARSE_DATA \
	ThirdPerson_Source_ThirdPerson_ThirdPersonCharacter_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	ThirdPerson_Source_ThirdPerson_ThirdPersonCharacter_h_12_INCLASS_NO_PURE_DECLS \
	ThirdPerson_Source_ThirdPerson_ThirdPersonCharacter_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> THIRDPERSON_API UClass* StaticClass<class AThirdPersonCharacter>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID ThirdPerson_Source_ThirdPerson_ThirdPersonCharacter_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
