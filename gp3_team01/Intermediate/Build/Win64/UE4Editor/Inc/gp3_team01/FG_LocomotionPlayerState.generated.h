// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FHitResult;
class AFG_PlayerCharacter;
#ifdef GP3_TEAM01_FG_LocomotionPlayerState_generated_h
#error "FG_LocomotionPlayerState.generated.h already included, missing '#pragma once' in FG_LocomotionPlayerState.h"
#endif
#define GP3_TEAM01_FG_LocomotionPlayerState_generated_h

#define gp3_team01_Source_gp3_team01_Public_Player_States_Core_FG_LocomotionPlayerState_h_15_SPARSE_DATA
#define gp3_team01_Source_gp3_team01_Public_Player_States_Core_FG_LocomotionPlayerState_h_15_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execShouldStartJump); \
	DECLARE_FUNCTION(execIsCoyoteGrounded); \
	DECLARE_FUNCTION(execIsGrounded); \
	DECLARE_FUNCTION(execIsGroundedWithResult);


#define gp3_team01_Source_gp3_team01_Public_Player_States_Core_FG_LocomotionPlayerState_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execShouldStartJump); \
	DECLARE_FUNCTION(execIsCoyoteGrounded); \
	DECLARE_FUNCTION(execIsGrounded); \
	DECLARE_FUNCTION(execIsGroundedWithResult);


#define gp3_team01_Source_gp3_team01_Public_Player_States_Core_FG_LocomotionPlayerState_h_15_EVENT_PARMS \
	struct FG_LocomotionPlayerState_eventOnPlayerLand_Parms \
	{ \
		AFG_PlayerCharacter* PlayerCharacter; \
	};


#define gp3_team01_Source_gp3_team01_Public_Player_States_Core_FG_LocomotionPlayerState_h_15_CALLBACK_WRAPPERS
#define gp3_team01_Source_gp3_team01_Public_Player_States_Core_FG_LocomotionPlayerState_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUFG_LocomotionPlayerState(); \
	friend struct Z_Construct_UClass_UFG_LocomotionPlayerState_Statics; \
public: \
	DECLARE_CLASS(UFG_LocomotionPlayerState, UFG_PlayerState, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/gp3_team01"), NO_API) \
	DECLARE_SERIALIZER(UFG_LocomotionPlayerState)


#define gp3_team01_Source_gp3_team01_Public_Player_States_Core_FG_LocomotionPlayerState_h_15_INCLASS \
private: \
	static void StaticRegisterNativesUFG_LocomotionPlayerState(); \
	friend struct Z_Construct_UClass_UFG_LocomotionPlayerState_Statics; \
public: \
	DECLARE_CLASS(UFG_LocomotionPlayerState, UFG_PlayerState, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/gp3_team01"), NO_API) \
	DECLARE_SERIALIZER(UFG_LocomotionPlayerState)


#define gp3_team01_Source_gp3_team01_Public_Player_States_Core_FG_LocomotionPlayerState_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UFG_LocomotionPlayerState(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UFG_LocomotionPlayerState) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UFG_LocomotionPlayerState); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UFG_LocomotionPlayerState); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UFG_LocomotionPlayerState(UFG_LocomotionPlayerState&&); \
	NO_API UFG_LocomotionPlayerState(const UFG_LocomotionPlayerState&); \
public:


#define gp3_team01_Source_gp3_team01_Public_Player_States_Core_FG_LocomotionPlayerState_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UFG_LocomotionPlayerState(UFG_LocomotionPlayerState&&); \
	NO_API UFG_LocomotionPlayerState(const UFG_LocomotionPlayerState&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UFG_LocomotionPlayerState); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UFG_LocomotionPlayerState); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UFG_LocomotionPlayerState)


#define gp3_team01_Source_gp3_team01_Public_Player_States_Core_FG_LocomotionPlayerState_h_15_PRIVATE_PROPERTY_OFFSET
#define gp3_team01_Source_gp3_team01_Public_Player_States_Core_FG_LocomotionPlayerState_h_12_PROLOG \
	gp3_team01_Source_gp3_team01_Public_Player_States_Core_FG_LocomotionPlayerState_h_15_EVENT_PARMS


#define gp3_team01_Source_gp3_team01_Public_Player_States_Core_FG_LocomotionPlayerState_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	gp3_team01_Source_gp3_team01_Public_Player_States_Core_FG_LocomotionPlayerState_h_15_PRIVATE_PROPERTY_OFFSET \
	gp3_team01_Source_gp3_team01_Public_Player_States_Core_FG_LocomotionPlayerState_h_15_SPARSE_DATA \
	gp3_team01_Source_gp3_team01_Public_Player_States_Core_FG_LocomotionPlayerState_h_15_RPC_WRAPPERS \
	gp3_team01_Source_gp3_team01_Public_Player_States_Core_FG_LocomotionPlayerState_h_15_CALLBACK_WRAPPERS \
	gp3_team01_Source_gp3_team01_Public_Player_States_Core_FG_LocomotionPlayerState_h_15_INCLASS \
	gp3_team01_Source_gp3_team01_Public_Player_States_Core_FG_LocomotionPlayerState_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define gp3_team01_Source_gp3_team01_Public_Player_States_Core_FG_LocomotionPlayerState_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	gp3_team01_Source_gp3_team01_Public_Player_States_Core_FG_LocomotionPlayerState_h_15_PRIVATE_PROPERTY_OFFSET \
	gp3_team01_Source_gp3_team01_Public_Player_States_Core_FG_LocomotionPlayerState_h_15_SPARSE_DATA \
	gp3_team01_Source_gp3_team01_Public_Player_States_Core_FG_LocomotionPlayerState_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	gp3_team01_Source_gp3_team01_Public_Player_States_Core_FG_LocomotionPlayerState_h_15_CALLBACK_WRAPPERS \
	gp3_team01_Source_gp3_team01_Public_Player_States_Core_FG_LocomotionPlayerState_h_15_INCLASS_NO_PURE_DECLS \
	gp3_team01_Source_gp3_team01_Public_Player_States_Core_FG_LocomotionPlayerState_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> GP3_TEAM01_API UClass* StaticClass<class UFG_LocomotionPlayerState>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID gp3_team01_Source_gp3_team01_Public_Player_States_Core_FG_LocomotionPlayerState_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
