// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FVector;
#ifdef GP3_TEAM01_FG_DA_InputStats_generated_h
#error "FG_DA_InputStats.generated.h already included, missing '#pragma once' in FG_DA_InputStats.h"
#endif
#define GP3_TEAM01_FG_DA_InputStats_generated_h

#define gp3_team01_Source_gp3_team01_Public_Player_FG_DA_InputStats_h_15_SPARSE_DATA
#define gp3_team01_Source_gp3_team01_Public_Player_FG_DA_InputStats_h_15_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execUpdateBuffers); \
	DECLARE_FUNCTION(execInvalidateBuffers); \
	DECLARE_FUNCTION(execGetWasGlidingJustReleased); \
	DECLARE_FUNCTION(execGetWasJumpingJustReleased); \
	DECLARE_FUNCTION(execGetWasGlidingJustPressed); \
	DECLARE_FUNCTION(execGetWasJumpingJustPressed); \
	DECLARE_FUNCTION(execGetIsGlidingPressed); \
	DECLARE_FUNCTION(execGetIsJumpingPressed); \
	DECLARE_FUNCTION(execGetCameraNormalisedInputVector); \
	DECLARE_FUNCTION(execGetCameraForwardVector); \
	DECLARE_FUNCTION(execGetRawInputVector); \
	DECLARE_FUNCTION(execSetIsGliding); \
	DECLARE_FUNCTION(execSetIsJumping); \
	DECLARE_FUNCTION(execSetCameraNormalisedInputVector); \
	DECLARE_FUNCTION(execSetCameraForwardVector); \
	DECLARE_FUNCTION(execSetRawInputVector);


#define gp3_team01_Source_gp3_team01_Public_Player_FG_DA_InputStats_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execUpdateBuffers); \
	DECLARE_FUNCTION(execInvalidateBuffers); \
	DECLARE_FUNCTION(execGetWasGlidingJustReleased); \
	DECLARE_FUNCTION(execGetWasJumpingJustReleased); \
	DECLARE_FUNCTION(execGetWasGlidingJustPressed); \
	DECLARE_FUNCTION(execGetWasJumpingJustPressed); \
	DECLARE_FUNCTION(execGetIsGlidingPressed); \
	DECLARE_FUNCTION(execGetIsJumpingPressed); \
	DECLARE_FUNCTION(execGetCameraNormalisedInputVector); \
	DECLARE_FUNCTION(execGetCameraForwardVector); \
	DECLARE_FUNCTION(execGetRawInputVector); \
	DECLARE_FUNCTION(execSetIsGliding); \
	DECLARE_FUNCTION(execSetIsJumping); \
	DECLARE_FUNCTION(execSetCameraNormalisedInputVector); \
	DECLARE_FUNCTION(execSetCameraForwardVector); \
	DECLARE_FUNCTION(execSetRawInputVector);


#define gp3_team01_Source_gp3_team01_Public_Player_FG_DA_InputStats_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUFG_DA_InputStats(); \
	friend struct Z_Construct_UClass_UFG_DA_InputStats_Statics; \
public: \
	DECLARE_CLASS(UFG_DA_InputStats, UDataAsset, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/gp3_team01"), NO_API) \
	DECLARE_SERIALIZER(UFG_DA_InputStats)


#define gp3_team01_Source_gp3_team01_Public_Player_FG_DA_InputStats_h_15_INCLASS \
private: \
	static void StaticRegisterNativesUFG_DA_InputStats(); \
	friend struct Z_Construct_UClass_UFG_DA_InputStats_Statics; \
public: \
	DECLARE_CLASS(UFG_DA_InputStats, UDataAsset, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/gp3_team01"), NO_API) \
	DECLARE_SERIALIZER(UFG_DA_InputStats)


#define gp3_team01_Source_gp3_team01_Public_Player_FG_DA_InputStats_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UFG_DA_InputStats(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UFG_DA_InputStats) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UFG_DA_InputStats); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UFG_DA_InputStats); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UFG_DA_InputStats(UFG_DA_InputStats&&); \
	NO_API UFG_DA_InputStats(const UFG_DA_InputStats&); \
public:


#define gp3_team01_Source_gp3_team01_Public_Player_FG_DA_InputStats_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UFG_DA_InputStats(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UFG_DA_InputStats(UFG_DA_InputStats&&); \
	NO_API UFG_DA_InputStats(const UFG_DA_InputStats&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UFG_DA_InputStats); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UFG_DA_InputStats); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UFG_DA_InputStats)


#define gp3_team01_Source_gp3_team01_Public_Player_FG_DA_InputStats_h_15_PRIVATE_PROPERTY_OFFSET
#define gp3_team01_Source_gp3_team01_Public_Player_FG_DA_InputStats_h_12_PROLOG
#define gp3_team01_Source_gp3_team01_Public_Player_FG_DA_InputStats_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	gp3_team01_Source_gp3_team01_Public_Player_FG_DA_InputStats_h_15_PRIVATE_PROPERTY_OFFSET \
	gp3_team01_Source_gp3_team01_Public_Player_FG_DA_InputStats_h_15_SPARSE_DATA \
	gp3_team01_Source_gp3_team01_Public_Player_FG_DA_InputStats_h_15_RPC_WRAPPERS \
	gp3_team01_Source_gp3_team01_Public_Player_FG_DA_InputStats_h_15_INCLASS \
	gp3_team01_Source_gp3_team01_Public_Player_FG_DA_InputStats_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define gp3_team01_Source_gp3_team01_Public_Player_FG_DA_InputStats_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	gp3_team01_Source_gp3_team01_Public_Player_FG_DA_InputStats_h_15_PRIVATE_PROPERTY_OFFSET \
	gp3_team01_Source_gp3_team01_Public_Player_FG_DA_InputStats_h_15_SPARSE_DATA \
	gp3_team01_Source_gp3_team01_Public_Player_FG_DA_InputStats_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	gp3_team01_Source_gp3_team01_Public_Player_FG_DA_InputStats_h_15_INCLASS_NO_PURE_DECLS \
	gp3_team01_Source_gp3_team01_Public_Player_FG_DA_InputStats_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> GP3_TEAM01_API UClass* StaticClass<class UFG_DA_InputStats>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID gp3_team01_Source_gp3_team01_Public_Player_FG_DA_InputStats_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
