// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UPrimitiveComponent;
class AFG_PlayerCharacter;
#ifdef GP3_TEAM01_FG_Winddraft_generated_h
#error "FG_Winddraft.generated.h already included, missing '#pragma once' in FG_Winddraft.h"
#endif
#define GP3_TEAM01_FG_Winddraft_generated_h

#define gp3_team01_Source_gp3_team01_Public_LevelElements_Winddraft_FG_Winddraft_h_16_SPARSE_DATA
#define gp3_team01_Source_gp3_team01_Public_LevelElements_Winddraft_FG_Winddraft_h_16_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execApplyWindForce);


#define gp3_team01_Source_gp3_team01_Public_LevelElements_Winddraft_FG_Winddraft_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execApplyWindForce);


#define gp3_team01_Source_gp3_team01_Public_LevelElements_Winddraft_FG_Winddraft_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAFG_Winddraft(); \
	friend struct Z_Construct_UClass_AFG_Winddraft_Statics; \
public: \
	DECLARE_CLASS(AFG_Winddraft, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/gp3_team01"), NO_API) \
	DECLARE_SERIALIZER(AFG_Winddraft) \
	virtual UObject* _getUObject() const override { return const_cast<AFG_Winddraft*>(this); }


#define gp3_team01_Source_gp3_team01_Public_LevelElements_Winddraft_FG_Winddraft_h_16_INCLASS \
private: \
	static void StaticRegisterNativesAFG_Winddraft(); \
	friend struct Z_Construct_UClass_AFG_Winddraft_Statics; \
public: \
	DECLARE_CLASS(AFG_Winddraft, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/gp3_team01"), NO_API) \
	DECLARE_SERIALIZER(AFG_Winddraft) \
	virtual UObject* _getUObject() const override { return const_cast<AFG_Winddraft*>(this); }


#define gp3_team01_Source_gp3_team01_Public_LevelElements_Winddraft_FG_Winddraft_h_16_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AFG_Winddraft(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AFG_Winddraft) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AFG_Winddraft); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AFG_Winddraft); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AFG_Winddraft(AFG_Winddraft&&); \
	NO_API AFG_Winddraft(const AFG_Winddraft&); \
public:


#define gp3_team01_Source_gp3_team01_Public_LevelElements_Winddraft_FG_Winddraft_h_16_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AFG_Winddraft(AFG_Winddraft&&); \
	NO_API AFG_Winddraft(const AFG_Winddraft&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AFG_Winddraft); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AFG_Winddraft); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AFG_Winddraft)


#define gp3_team01_Source_gp3_team01_Public_LevelElements_Winddraft_FG_Winddraft_h_16_PRIVATE_PROPERTY_OFFSET
#define gp3_team01_Source_gp3_team01_Public_LevelElements_Winddraft_FG_Winddraft_h_13_PROLOG
#define gp3_team01_Source_gp3_team01_Public_LevelElements_Winddraft_FG_Winddraft_h_16_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	gp3_team01_Source_gp3_team01_Public_LevelElements_Winddraft_FG_Winddraft_h_16_PRIVATE_PROPERTY_OFFSET \
	gp3_team01_Source_gp3_team01_Public_LevelElements_Winddraft_FG_Winddraft_h_16_SPARSE_DATA \
	gp3_team01_Source_gp3_team01_Public_LevelElements_Winddraft_FG_Winddraft_h_16_RPC_WRAPPERS \
	gp3_team01_Source_gp3_team01_Public_LevelElements_Winddraft_FG_Winddraft_h_16_INCLASS \
	gp3_team01_Source_gp3_team01_Public_LevelElements_Winddraft_FG_Winddraft_h_16_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define gp3_team01_Source_gp3_team01_Public_LevelElements_Winddraft_FG_Winddraft_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	gp3_team01_Source_gp3_team01_Public_LevelElements_Winddraft_FG_Winddraft_h_16_PRIVATE_PROPERTY_OFFSET \
	gp3_team01_Source_gp3_team01_Public_LevelElements_Winddraft_FG_Winddraft_h_16_SPARSE_DATA \
	gp3_team01_Source_gp3_team01_Public_LevelElements_Winddraft_FG_Winddraft_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	gp3_team01_Source_gp3_team01_Public_LevelElements_Winddraft_FG_Winddraft_h_16_INCLASS_NO_PURE_DECLS \
	gp3_team01_Source_gp3_team01_Public_LevelElements_Winddraft_FG_Winddraft_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> GP3_TEAM01_API UClass* StaticClass<class AFG_Winddraft>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID gp3_team01_Source_gp3_team01_Public_LevelElements_Winddraft_FG_Winddraft_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
