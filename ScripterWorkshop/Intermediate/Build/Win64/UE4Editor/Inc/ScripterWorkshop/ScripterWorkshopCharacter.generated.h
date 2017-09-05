// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectMacros.h"
#include "ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef SCRIPTERWORKSHOP_ScripterWorkshopCharacter_generated_h
#error "ScripterWorkshopCharacter.generated.h already included, missing '#pragma once' in ScripterWorkshopCharacter.h"
#endif
#define SCRIPTERWORKSHOP_ScripterWorkshopCharacter_generated_h

#define ScripterWorkshop_Source_ScripterWorkshop_ScripterWorkshopCharacter_h_14_RPC_WRAPPERS
#define ScripterWorkshop_Source_ScripterWorkshop_ScripterWorkshopCharacter_h_14_RPC_WRAPPERS_NO_PURE_DECLS
#define ScripterWorkshop_Source_ScripterWorkshop_ScripterWorkshopCharacter_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAScripterWorkshopCharacter(); \
	friend SCRIPTERWORKSHOP_API class UClass* Z_Construct_UClass_AScripterWorkshopCharacter(); \
public: \
	DECLARE_CLASS(AScripterWorkshopCharacter, ACharacter, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/ScripterWorkshop"), NO_API) \
	DECLARE_SERIALIZER(AScripterWorkshopCharacter) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define ScripterWorkshop_Source_ScripterWorkshop_ScripterWorkshopCharacter_h_14_INCLASS \
private: \
	static void StaticRegisterNativesAScripterWorkshopCharacter(); \
	friend SCRIPTERWORKSHOP_API class UClass* Z_Construct_UClass_AScripterWorkshopCharacter(); \
public: \
	DECLARE_CLASS(AScripterWorkshopCharacter, ACharacter, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/ScripterWorkshop"), NO_API) \
	DECLARE_SERIALIZER(AScripterWorkshopCharacter) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define ScripterWorkshop_Source_ScripterWorkshop_ScripterWorkshopCharacter_h_14_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AScripterWorkshopCharacter(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AScripterWorkshopCharacter) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AScripterWorkshopCharacter); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AScripterWorkshopCharacter); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AScripterWorkshopCharacter(AScripterWorkshopCharacter&&); \
	NO_API AScripterWorkshopCharacter(const AScripterWorkshopCharacter&); \
public:


#define ScripterWorkshop_Source_ScripterWorkshop_ScripterWorkshopCharacter_h_14_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AScripterWorkshopCharacter(AScripterWorkshopCharacter&&); \
	NO_API AScripterWorkshopCharacter(const AScripterWorkshopCharacter&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AScripterWorkshopCharacter); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AScripterWorkshopCharacter); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AScripterWorkshopCharacter)


#define ScripterWorkshop_Source_ScripterWorkshop_ScripterWorkshopCharacter_h_14_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__Mesh1P() { return STRUCT_OFFSET(AScripterWorkshopCharacter, Mesh1P); } \
	FORCEINLINE static uint32 __PPO__FP_Gun() { return STRUCT_OFFSET(AScripterWorkshopCharacter, FP_Gun); } \
	FORCEINLINE static uint32 __PPO__FP_MuzzleLocation() { return STRUCT_OFFSET(AScripterWorkshopCharacter, FP_MuzzleLocation); } \
	FORCEINLINE static uint32 __PPO__VR_Gun() { return STRUCT_OFFSET(AScripterWorkshopCharacter, VR_Gun); } \
	FORCEINLINE static uint32 __PPO__VR_MuzzleLocation() { return STRUCT_OFFSET(AScripterWorkshopCharacter, VR_MuzzleLocation); } \
	FORCEINLINE static uint32 __PPO__FirstPersonCameraComponent() { return STRUCT_OFFSET(AScripterWorkshopCharacter, FirstPersonCameraComponent); } \
	FORCEINLINE static uint32 __PPO__R_MotionController() { return STRUCT_OFFSET(AScripterWorkshopCharacter, R_MotionController); } \
	FORCEINLINE static uint32 __PPO__L_MotionController() { return STRUCT_OFFSET(AScripterWorkshopCharacter, L_MotionController); }


#define ScripterWorkshop_Source_ScripterWorkshop_ScripterWorkshopCharacter_h_11_PROLOG
#define ScripterWorkshop_Source_ScripterWorkshop_ScripterWorkshopCharacter_h_14_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	ScripterWorkshop_Source_ScripterWorkshop_ScripterWorkshopCharacter_h_14_PRIVATE_PROPERTY_OFFSET \
	ScripterWorkshop_Source_ScripterWorkshop_ScripterWorkshopCharacter_h_14_RPC_WRAPPERS \
	ScripterWorkshop_Source_ScripterWorkshop_ScripterWorkshopCharacter_h_14_INCLASS \
	ScripterWorkshop_Source_ScripterWorkshop_ScripterWorkshopCharacter_h_14_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define ScripterWorkshop_Source_ScripterWorkshop_ScripterWorkshopCharacter_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	ScripterWorkshop_Source_ScripterWorkshop_ScripterWorkshopCharacter_h_14_PRIVATE_PROPERTY_OFFSET \
	ScripterWorkshop_Source_ScripterWorkshop_ScripterWorkshopCharacter_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	ScripterWorkshop_Source_ScripterWorkshop_ScripterWorkshopCharacter_h_14_INCLASS_NO_PURE_DECLS \
	ScripterWorkshop_Source_ScripterWorkshop_ScripterWorkshopCharacter_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID ScripterWorkshop_Source_ScripterWorkshop_ScripterWorkshopCharacter_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
