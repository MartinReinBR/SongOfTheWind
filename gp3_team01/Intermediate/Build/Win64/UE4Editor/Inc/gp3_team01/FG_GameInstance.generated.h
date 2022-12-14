// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UObject;
class UFG_GameInstance;
struct FRotator;
class UCameraComponent;
#ifdef GP3_TEAM01_FG_GameInstance_generated_h
#error "FG_GameInstance.generated.h already included, missing '#pragma once' in FG_GameInstance.h"
#endif
#define GP3_TEAM01_FG_GameInstance_generated_h

#define gp3_team01_Source_gp3_team01_Public_FG_GameInstance_h_18_SPARSE_DATA
#define gp3_team01_Source_gp3_team01_Public_FG_GameInstance_h_18_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGet);


#define gp3_team01_Source_gp3_team01_Public_FG_GameInstance_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGet);


#define gp3_team01_Source_gp3_team01_Public_FG_GameInstance_h_18_EVENT_PARMS \
	struct FG_GameInstance_eventGetCameraOrientation_Parms \
	{ \
		FRotator ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		FG_GameInstance_eventGetCameraOrientation_Parms() \
			: ReturnValue(ForceInit) \
		{ \
		} \
	}; \
	struct FG_GameInstance_eventGetMainCamera_Parms \
	{ \
		UCameraComponent* ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		FG_GameInstance_eventGetMainCamera_Parms() \
			: ReturnValue(NULL) \
		{ \
		} \
	};


#define gp3_team01_Source_gp3_team01_Public_FG_GameInstance_h_18_CALLBACK_WRAPPERS
#define gp3_team01_Source_gp3_team01_Public_FG_GameInstance_h_18_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUFG_GameInstance(); \
	friend struct Z_Construct_UClass_UFG_GameInstance_Statics; \
public: \
	DECLARE_CLASS(UFG_GameInstance, UGameInstance, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/gp3_team01"), NO_API) \
	DECLARE_SERIALIZER(UFG_GameInstance)


#define gp3_team01_Source_gp3_team01_Public_FG_GameInstance_h_18_INCLASS \
private: \
	static void StaticRegisterNativesUFG_GameInstance(); \
	friend struct Z_Construct_UClass_UFG_GameInstance_Statics; \
public: \
	DECLARE_CLASS(UFG_GameInstance, UGameInstance, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/gp3_team01"), NO_API) \
	DECLARE_SERIALIZER(UFG_GameInstance)


#define gp3_team01_Source_gp3_team01_Public_FG_GameInstance_h_18_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UFG_GameInstance(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UFG_GameInstance) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UFG_GameInstance); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UFG_GameInstance); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UFG_GameInstance(UFG_GameInstance&&); \
	NO_API UFG_GameInstance(const UFG_GameInstance&); \
public:


#define gp3_team01_Source_gp3_team01_Public_FG_GameInstance_h_18_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UFG_GameInstance(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UFG_GameInstance(UFG_GameInstance&&); \
	NO_API UFG_GameInstance(const UFG_GameInstance&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UFG_GameInstance); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UFG_GameInstance); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UFG_GameInstance)


#define gp3_team01_Source_gp3_team01_Public_FG_GameInstance_h_18_PRIVATE_PROPERTY_OFFSET
#define gp3_team01_Source_gp3_team01_Public_FG_GameInstance_h_15_PROLOG \
	gp3_team01_Source_gp3_team01_Public_FG_GameInstance_h_18_EVENT_PARMS


#define gp3_team01_Source_gp3_team01_Public_FG_GameInstance_h_18_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	gp3_team01_Source_gp3_team01_Public_FG_GameInstance_h_18_PRIVATE_PROPERTY_OFFSET \
	gp3_team01_Source_gp3_team01_Public_FG_GameInstance_h_18_SPARSE_DATA \
	gp3_team01_Source_gp3_team01_Public_FG_GameInstance_h_18_RPC_WRAPPERS \
	gp3_team01_Source_gp3_team01_Public_FG_GameInstance_h_18_CALLBACK_WRAPPERS \
	gp3_team01_Source_gp3_team01_Public_FG_GameInstance_h_18_INCLASS \
	gp3_team01_Source_gp3_team01_Public_FG_GameInstance_h_18_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define gp3_team01_Source_gp3_team01_Public_FG_GameInstance_h_18_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	gp3_team01_Source_gp3_team01_Public_FG_GameInstance_h_18_PRIVATE_PROPERTY_OFFSET \
	gp3_team01_Source_gp3_team01_Public_FG_GameInstance_h_18_SPARSE_DATA \
	gp3_team01_Source_gp3_team01_Public_FG_GameInstance_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
	gp3_team01_Source_gp3_team01_Public_FG_GameInstance_h_18_CALLBACK_WRAPPERS \
	gp3_team01_Source_gp3_team01_Public_FG_GameInstance_h_18_INCLASS_NO_PURE_DECLS \
	gp3_team01_Source_gp3_team01_Public_FG_GameInstance_h_18_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> GP3_TEAM01_API UClass* StaticClass<class UFG_GameInstance>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID gp3_team01_Source_gp3_team01_Public_FG_GameInstance_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
