// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UCSHealthComponent;
class UDamageType;
class AController;
class AActor;
#ifdef COMBATSYSTEM_CSHealthComponent_generated_h
#error "CSHealthComponent.generated.h already included, missing '#pragma once' in CSHealthComponent.h"
#endif
#define COMBATSYSTEM_CSHealthComponent_generated_h

#define FID_CombatSystem_Source_CombatSystem_Public_Components_CSHealthComponent_h_11_DELEGATE \
struct _Script_CombatSystem_eventOnHealthChangedSignature_Parms \
{ \
	UCSHealthComponent* HealthComp; \
	float CurrentHealth; \
	float HealthDelta; \
	const UDamageType* DamageType; \
	AController* InstigatedBy; \
	AActor* DamageCauser; \
}; \
static inline void FOnHealthChangedSignature_DelegateWrapper(const FMulticastScriptDelegate& OnHealthChangedSignature, UCSHealthComponent* HealthComp, float CurrentHealth, float HealthDelta, const UDamageType* DamageType, AController* InstigatedBy, AActor* DamageCauser) \
{ \
	_Script_CombatSystem_eventOnHealthChangedSignature_Parms Parms; \
	Parms.HealthComp=HealthComp; \
	Parms.CurrentHealth=CurrentHealth; \
	Parms.HealthDelta=HealthDelta; \
	Parms.DamageType=DamageType; \
	Parms.InstigatedBy=InstigatedBy; \
	Parms.DamageCauser=DamageCauser; \
	OnHealthChangedSignature.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define FID_CombatSystem_Source_CombatSystem_Public_Components_CSHealthComponent_h_16_SPARSE_DATA
#define FID_CombatSystem_Source_CombatSystem_Public_Components_CSHealthComponent_h_16_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execHandleTakeAnyDamage);


#define FID_CombatSystem_Source_CombatSystem_Public_Components_CSHealthComponent_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execHandleTakeAnyDamage);


#define FID_CombatSystem_Source_CombatSystem_Public_Components_CSHealthComponent_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUCSHealthComponent(); \
	friend struct Z_Construct_UClass_UCSHealthComponent_Statics; \
public: \
	DECLARE_CLASS(UCSHealthComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/CombatSystem"), NO_API) \
	DECLARE_SERIALIZER(UCSHealthComponent)


#define FID_CombatSystem_Source_CombatSystem_Public_Components_CSHealthComponent_h_16_INCLASS \
private: \
	static void StaticRegisterNativesUCSHealthComponent(); \
	friend struct Z_Construct_UClass_UCSHealthComponent_Statics; \
public: \
	DECLARE_CLASS(UCSHealthComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/CombatSystem"), NO_API) \
	DECLARE_SERIALIZER(UCSHealthComponent)


#define FID_CombatSystem_Source_CombatSystem_Public_Components_CSHealthComponent_h_16_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UCSHealthComponent(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UCSHealthComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCSHealthComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCSHealthComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UCSHealthComponent(UCSHealthComponent&&); \
	NO_API UCSHealthComponent(const UCSHealthComponent&); \
public:


#define FID_CombatSystem_Source_CombatSystem_Public_Components_CSHealthComponent_h_16_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UCSHealthComponent(UCSHealthComponent&&); \
	NO_API UCSHealthComponent(const UCSHealthComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCSHealthComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCSHealthComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UCSHealthComponent)


#define FID_CombatSystem_Source_CombatSystem_Public_Components_CSHealthComponent_h_13_PROLOG
#define FID_CombatSystem_Source_CombatSystem_Public_Components_CSHealthComponent_h_16_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_CombatSystem_Source_CombatSystem_Public_Components_CSHealthComponent_h_16_SPARSE_DATA \
	FID_CombatSystem_Source_CombatSystem_Public_Components_CSHealthComponent_h_16_RPC_WRAPPERS \
	FID_CombatSystem_Source_CombatSystem_Public_Components_CSHealthComponent_h_16_INCLASS \
	FID_CombatSystem_Source_CombatSystem_Public_Components_CSHealthComponent_h_16_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_CombatSystem_Source_CombatSystem_Public_Components_CSHealthComponent_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_CombatSystem_Source_CombatSystem_Public_Components_CSHealthComponent_h_16_SPARSE_DATA \
	FID_CombatSystem_Source_CombatSystem_Public_Components_CSHealthComponent_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_CombatSystem_Source_CombatSystem_Public_Components_CSHealthComponent_h_16_INCLASS_NO_PURE_DECLS \
	FID_CombatSystem_Source_CombatSystem_Public_Components_CSHealthComponent_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> COMBATSYSTEM_API UClass* StaticClass<class UCSHealthComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_CombatSystem_Source_CombatSystem_Public_Components_CSHealthComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
