// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class IFG_State;
#ifdef GP3_TEAM01_FG_SFSM_generated_h
#error "FG_SFSM.generated.h already included, missing '#pragma once' in FG_SFSM.h"
#endif
#define GP3_TEAM01_FG_SFSM_generated_h

#define gp3_team01_Source_gp3_team01_Public_Player_FG_SFSM_h_14_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FStateObjectPair_Statics; \
	GP3_TEAM01_API static class UScriptStruct* StaticStruct();


template<> GP3_TEAM01_API UScriptStruct* StaticStruct<struct FStateObjectPair>();

#define gp3_team01_Source_gp3_team01_Public_Player_FG_SFSM_h_23_SPARSE_DATA
#define gp3_team01_Source_gp3_team01_Public_Player_FG_SFSM_h_23_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execIsEmpty); \
	DECLARE_FUNCTION(execClear); \
	DECLARE_FUNCTION(execPopUntil); \
	DECLARE_FUNCTION(execTopIsEqual); \
	DECLARE_FUNCTION(execContains); \
	DECLARE_FUNCTION(execPop); \
	DECLARE_FUNCTION(execRemove); \
	DECLARE_FUNCTION(execPush); \
	DECLARE_FUNCTION(execOnStateMachineTick);


#define gp3_team01_Source_gp3_team01_Public_Player_FG_SFSM_h_23_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execIsEmpty); \
	DECLARE_FUNCTION(execClear); \
	DECLARE_FUNCTION(execPopUntil); \
	DECLARE_FUNCTION(execTopIsEqual); \
	DECLARE_FUNCTION(execContains); \
	DECLARE_FUNCTION(execPop); \
	DECLARE_FUNCTION(execRemove); \
	DECLARE_FUNCTION(execPush); \
	DECLARE_FUNCTION(execOnStateMachineTick);


#define gp3_team01_Source_gp3_team01_Public_Player_FG_SFSM_h_23_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUFG_SFSM(); \
	friend struct Z_Construct_UClass_UFG_SFSM_Statics; \
public: \
	DECLARE_CLASS(UFG_SFSM, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/gp3_team01"), NO_API) \
	DECLARE_SERIALIZER(UFG_SFSM)


#define gp3_team01_Source_gp3_team01_Public_Player_FG_SFSM_h_23_INCLASS \
private: \
	static void StaticRegisterNativesUFG_SFSM(); \
	friend struct Z_Construct_UClass_UFG_SFSM_Statics; \
public: \
	DECLARE_CLASS(UFG_SFSM, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/gp3_team01"), NO_API) \
	DECLARE_SERIALIZER(UFG_SFSM)


#define gp3_team01_Source_gp3_team01_Public_Player_FG_SFSM_h_23_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UFG_SFSM(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UFG_SFSM) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UFG_SFSM); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UFG_SFSM); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UFG_SFSM(UFG_SFSM&&); \
	NO_API UFG_SFSM(const UFG_SFSM&); \
public:


#define gp3_team01_Source_gp3_team01_Public_Player_FG_SFSM_h_23_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UFG_SFSM(UFG_SFSM&&); \
	NO_API UFG_SFSM(const UFG_SFSM&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UFG_SFSM); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UFG_SFSM); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UFG_SFSM)


#define gp3_team01_Source_gp3_team01_Public_Player_FG_SFSM_h_23_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__StateStack() { return STRUCT_OFFSET(UFG_SFSM, StateStack); }


#define gp3_team01_Source_gp3_team01_Public_Player_FG_SFSM_h_20_PROLOG
#define gp3_team01_Source_gp3_team01_Public_Player_FG_SFSM_h_23_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	gp3_team01_Source_gp3_team01_Public_Player_FG_SFSM_h_23_PRIVATE_PROPERTY_OFFSET \
	gp3_team01_Source_gp3_team01_Public_Player_FG_SFSM_h_23_SPARSE_DATA \
	gp3_team01_Source_gp3_team01_Public_Player_FG_SFSM_h_23_RPC_WRAPPERS \
	gp3_team01_Source_gp3_team01_Public_Player_FG_SFSM_h_23_INCLASS \
	gp3_team01_Source_gp3_team01_Public_Player_FG_SFSM_h_23_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define gp3_team01_Source_gp3_team01_Public_Player_FG_SFSM_h_23_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	gp3_team01_Source_gp3_team01_Public_Player_FG_SFSM_h_23_PRIVATE_PROPERTY_OFFSET \
	gp3_team01_Source_gp3_team01_Public_Player_FG_SFSM_h_23_SPARSE_DATA \
	gp3_team01_Source_gp3_team01_Public_Player_FG_SFSM_h_23_RPC_WRAPPERS_NO_PURE_DECLS \
	gp3_team01_Source_gp3_team01_Public_Player_FG_SFSM_h_23_INCLASS_NO_PURE_DECLS \
	gp3_team01_Source_gp3_team01_Public_Player_FG_SFSM_h_23_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> GP3_TEAM01_API UClass* StaticClass<class UFG_SFSM>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID gp3_team01_Source_gp3_team01_Public_Player_FG_SFSM_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
