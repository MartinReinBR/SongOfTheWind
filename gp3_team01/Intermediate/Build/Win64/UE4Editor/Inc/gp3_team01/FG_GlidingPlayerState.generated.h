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
struct FVector;
struct FHitResult;
#ifdef GP3_TEAM01_FG_GlidingPlayerState_generated_h
#error "FG_GlidingPlayerState.generated.h already included, missing '#pragma once' in FG_GlidingPlayerState.h"
#endif
#define GP3_TEAM01_FG_GlidingPlayerState_generated_h

#define gp3_team01_Source_gp3_team01_Public_Player_States_Core_FG_GlidingPlayerState_h_16_SPARSE_DATA
#define gp3_team01_Source_gp3_team01_Public_Player_States_Core_FG_GlidingPlayerState_h_16_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnCollision);


#define gp3_team01_Source_gp3_team01_Public_Player_States_Core_FG_GlidingPlayerState_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnCollision);


#define gp3_team01_Source_gp3_team01_Public_Player_States_Core_FG_GlidingPlayerState_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUFG_GlidingPlayerState(); \
	friend struct Z_Construct_UClass_UFG_GlidingPlayerState_Statics; \
public: \
	DECLARE_CLASS(UFG_GlidingPlayerState, UFG_PlayerState, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/gp3_team01"), NO_API) \
	DECLARE_SERIALIZER(UFG_GlidingPlayerState)


#define gp3_team01_Source_gp3_team01_Public_Player_States_Core_FG_GlidingPlayerState_h_16_INCLASS \
private: \
	static void StaticRegisterNativesUFG_GlidingPlayerState(); \
	friend struct Z_Construct_UClass_UFG_GlidingPlayerState_Statics; \
public: \
	DECLARE_CLASS(UFG_GlidingPlayerState, UFG_PlayerState, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/gp3_team01"), NO_API) \
	DECLARE_SERIALIZER(UFG_GlidingPlayerState)


#define gp3_team01_Source_gp3_team01_Public_Player_States_Core_FG_GlidingPlayerState_h_16_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UFG_GlidingPlayerState(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UFG_GlidingPlayerState) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UFG_GlidingPlayerState); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UFG_GlidingPlayerState); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UFG_GlidingPlayerState(UFG_GlidingPlayerState&&); \
	NO_API UFG_GlidingPlayerState(const UFG_GlidingPlayerState&); \
public:


#define gp3_team01_Source_gp3_team01_Public_Player_States_Core_FG_GlidingPlayerState_h_16_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UFG_GlidingPlayerState(UFG_GlidingPlayerState&&); \
	NO_API UFG_GlidingPlayerState(const UFG_GlidingPlayerState&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UFG_GlidingPlayerState); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UFG_GlidingPlayerState); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UFG_GlidingPlayerState)


#define gp3_team01_Source_gp3_team01_Public_Player_States_Core_FG_GlidingPlayerState_h_16_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__Locomotion() { return STRUCT_OFFSET(UFG_GlidingPlayerState, Locomotion); } \
	FORCEINLINE static uint32 __PPO__Primitive() { return STRUCT_OFFSET(UFG_GlidingPlayerState, Primitive); }


#define gp3_team01_Source_gp3_team01_Public_Player_States_Core_FG_GlidingPlayerState_h_13_PROLOG
#define gp3_team01_Source_gp3_team01_Public_Player_States_Core_FG_GlidingPlayerState_h_16_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	gp3_team01_Source_gp3_team01_Public_Player_States_Core_FG_GlidingPlayerState_h_16_PRIVATE_PROPERTY_OFFSET \
	gp3_team01_Source_gp3_team01_Public_Player_States_Core_FG_GlidingPlayerState_h_16_SPARSE_DATA \
	gp3_team01_Source_gp3_team01_Public_Player_States_Core_FG_GlidingPlayerState_h_16_RPC_WRAPPERS \
	gp3_team01_Source_gp3_team01_Public_Player_States_Core_FG_GlidingPlayerState_h_16_INCLASS \
	gp3_team01_Source_gp3_team01_Public_Player_States_Core_FG_GlidingPlayerState_h_16_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define gp3_team01_Source_gp3_team01_Public_Player_States_Core_FG_GlidingPlayerState_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	gp3_team01_Source_gp3_team01_Public_Player_States_Core_FG_GlidingPlayerState_h_16_PRIVATE_PROPERTY_OFFSET \
	gp3_team01_Source_gp3_team01_Public_Player_States_Core_FG_GlidingPlayerState_h_16_SPARSE_DATA \
	gp3_team01_Source_gp3_team01_Public_Player_States_Core_FG_GlidingPlayerState_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	gp3_team01_Source_gp3_team01_Public_Player_States_Core_FG_GlidingPlayerState_h_16_INCLASS_NO_PURE_DECLS \
	gp3_team01_Source_gp3_team01_Public_Player_States_Core_FG_GlidingPlayerState_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> GP3_TEAM01_API UClass* StaticClass<class UFG_GlidingPlayerState>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID gp3_team01_Source_gp3_team01_Public_Player_States_Core_FG_GlidingPlayerState_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
