// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AFG_PlayerCharacter;
#ifdef GP3_TEAM01_FG_PlayerState_generated_h
#error "FG_PlayerState.generated.h already included, missing '#pragma once' in FG_PlayerState.h"
#endif
#define GP3_TEAM01_FG_PlayerState_generated_h

#define gp3_team01_Source_gp3_team01_Public_Player_States_FG_PlayerState_h_14_SPARSE_DATA
#define gp3_team01_Source_gp3_team01_Public_Player_States_FG_PlayerState_h_14_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetTimeSincePush); \
	DECLARE_FUNCTION(execGetTimeSinceEnter); \
	DECLARE_FUNCTION(execGetFGPlayer);


#define gp3_team01_Source_gp3_team01_Public_Player_States_FG_PlayerState_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetTimeSincePush); \
	DECLARE_FUNCTION(execGetTimeSinceEnter); \
	DECLARE_FUNCTION(execGetFGPlayer);


#define gp3_team01_Source_gp3_team01_Public_Player_States_FG_PlayerState_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUFG_PlayerState(); \
	friend struct Z_Construct_UClass_UFG_PlayerState_Statics; \
public: \
	DECLARE_CLASS(UFG_PlayerState, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/gp3_team01"), NO_API) \
	DECLARE_SERIALIZER(UFG_PlayerState) \
	virtual UObject* _getUObject() const override { return const_cast<UFG_PlayerState*>(this); }


#define gp3_team01_Source_gp3_team01_Public_Player_States_FG_PlayerState_h_14_INCLASS \
private: \
	static void StaticRegisterNativesUFG_PlayerState(); \
	friend struct Z_Construct_UClass_UFG_PlayerState_Statics; \
public: \
	DECLARE_CLASS(UFG_PlayerState, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/gp3_team01"), NO_API) \
	DECLARE_SERIALIZER(UFG_PlayerState) \
	virtual UObject* _getUObject() const override { return const_cast<UFG_PlayerState*>(this); }


#define gp3_team01_Source_gp3_team01_Public_Player_States_FG_PlayerState_h_14_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UFG_PlayerState(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UFG_PlayerState) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UFG_PlayerState); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UFG_PlayerState); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UFG_PlayerState(UFG_PlayerState&&); \
	NO_API UFG_PlayerState(const UFG_PlayerState&); \
public:


#define gp3_team01_Source_gp3_team01_Public_Player_States_FG_PlayerState_h_14_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UFG_PlayerState(UFG_PlayerState&&); \
	NO_API UFG_PlayerState(const UFG_PlayerState&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UFG_PlayerState); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UFG_PlayerState); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UFG_PlayerState)


#define gp3_team01_Source_gp3_team01_Public_Player_States_FG_PlayerState_h_14_PRIVATE_PROPERTY_OFFSET
#define gp3_team01_Source_gp3_team01_Public_Player_States_FG_PlayerState_h_11_PROLOG
#define gp3_team01_Source_gp3_team01_Public_Player_States_FG_PlayerState_h_14_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	gp3_team01_Source_gp3_team01_Public_Player_States_FG_PlayerState_h_14_PRIVATE_PROPERTY_OFFSET \
	gp3_team01_Source_gp3_team01_Public_Player_States_FG_PlayerState_h_14_SPARSE_DATA \
	gp3_team01_Source_gp3_team01_Public_Player_States_FG_PlayerState_h_14_RPC_WRAPPERS \
	gp3_team01_Source_gp3_team01_Public_Player_States_FG_PlayerState_h_14_INCLASS \
	gp3_team01_Source_gp3_team01_Public_Player_States_FG_PlayerState_h_14_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define gp3_team01_Source_gp3_team01_Public_Player_States_FG_PlayerState_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	gp3_team01_Source_gp3_team01_Public_Player_States_FG_PlayerState_h_14_PRIVATE_PROPERTY_OFFSET \
	gp3_team01_Source_gp3_team01_Public_Player_States_FG_PlayerState_h_14_SPARSE_DATA \
	gp3_team01_Source_gp3_team01_Public_Player_States_FG_PlayerState_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	gp3_team01_Source_gp3_team01_Public_Player_States_FG_PlayerState_h_14_INCLASS_NO_PURE_DECLS \
	gp3_team01_Source_gp3_team01_Public_Player_States_FG_PlayerState_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> GP3_TEAM01_API UClass* StaticClass<class UFG_PlayerState>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID gp3_team01_Source_gp3_team01_Public_Player_States_FG_PlayerState_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
