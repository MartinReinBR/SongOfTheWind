// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef GP3_TEAM01_FG_PlayerCharacter_generated_h
#error "FG_PlayerCharacter.generated.h already included, missing '#pragma once' in FG_PlayerCharacter.h"
#endif
#define GP3_TEAM01_FG_PlayerCharacter_generated_h

#define gp3_team01_Source_gp3_team01_Public_Player_FG_PlayerCharacter_h_14_SPARSE_DATA
#define gp3_team01_Source_gp3_team01_Public_Player_FG_PlayerCharacter_h_14_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execAllowAnotherDoubleJump); \
	DECLARE_FUNCTION(execPushAirborneState); \
	DECLARE_FUNCTION(execSetActive);


#define gp3_team01_Source_gp3_team01_Public_Player_FG_PlayerCharacter_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execAllowAnotherDoubleJump); \
	DECLARE_FUNCTION(execPushAirborneState); \
	DECLARE_FUNCTION(execSetActive);


#define gp3_team01_Source_gp3_team01_Public_Player_FG_PlayerCharacter_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAFG_PlayerCharacter(); \
	friend struct Z_Construct_UClass_AFG_PlayerCharacter_Statics; \
public: \
	DECLARE_CLASS(AFG_PlayerCharacter, APawn, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/gp3_team01"), NO_API) \
	DECLARE_SERIALIZER(AFG_PlayerCharacter)


#define gp3_team01_Source_gp3_team01_Public_Player_FG_PlayerCharacter_h_14_INCLASS \
private: \
	static void StaticRegisterNativesAFG_PlayerCharacter(); \
	friend struct Z_Construct_UClass_AFG_PlayerCharacter_Statics; \
public: \
	DECLARE_CLASS(AFG_PlayerCharacter, APawn, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/gp3_team01"), NO_API) \
	DECLARE_SERIALIZER(AFG_PlayerCharacter)


#define gp3_team01_Source_gp3_team01_Public_Player_FG_PlayerCharacter_h_14_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AFG_PlayerCharacter(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AFG_PlayerCharacter) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AFG_PlayerCharacter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AFG_PlayerCharacter); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AFG_PlayerCharacter(AFG_PlayerCharacter&&); \
	NO_API AFG_PlayerCharacter(const AFG_PlayerCharacter&); \
public:


#define gp3_team01_Source_gp3_team01_Public_Player_FG_PlayerCharacter_h_14_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AFG_PlayerCharacter(AFG_PlayerCharacter&&); \
	NO_API AFG_PlayerCharacter(const AFG_PlayerCharacter&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AFG_PlayerCharacter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AFG_PlayerCharacter); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AFG_PlayerCharacter)


#define gp3_team01_Source_gp3_team01_Public_Player_FG_PlayerCharacter_h_14_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__AnimBP() { return STRUCT_OFFSET(AFG_PlayerCharacter, AnimBP); } \
	FORCEINLINE static uint32 __PPO__GliderAnimBP() { return STRUCT_OFFSET(AFG_PlayerCharacter, GliderAnimBP); }


#define gp3_team01_Source_gp3_team01_Public_Player_FG_PlayerCharacter_h_11_PROLOG
#define gp3_team01_Source_gp3_team01_Public_Player_FG_PlayerCharacter_h_14_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	gp3_team01_Source_gp3_team01_Public_Player_FG_PlayerCharacter_h_14_PRIVATE_PROPERTY_OFFSET \
	gp3_team01_Source_gp3_team01_Public_Player_FG_PlayerCharacter_h_14_SPARSE_DATA \
	gp3_team01_Source_gp3_team01_Public_Player_FG_PlayerCharacter_h_14_RPC_WRAPPERS \
	gp3_team01_Source_gp3_team01_Public_Player_FG_PlayerCharacter_h_14_INCLASS \
	gp3_team01_Source_gp3_team01_Public_Player_FG_PlayerCharacter_h_14_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define gp3_team01_Source_gp3_team01_Public_Player_FG_PlayerCharacter_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	gp3_team01_Source_gp3_team01_Public_Player_FG_PlayerCharacter_h_14_PRIVATE_PROPERTY_OFFSET \
	gp3_team01_Source_gp3_team01_Public_Player_FG_PlayerCharacter_h_14_SPARSE_DATA \
	gp3_team01_Source_gp3_team01_Public_Player_FG_PlayerCharacter_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	gp3_team01_Source_gp3_team01_Public_Player_FG_PlayerCharacter_h_14_INCLASS_NO_PURE_DECLS \
	gp3_team01_Source_gp3_team01_Public_Player_FG_PlayerCharacter_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> GP3_TEAM01_API UClass* StaticClass<class AFG_PlayerCharacter>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID gp3_team01_Source_gp3_team01_Public_Player_FG_PlayerCharacter_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
