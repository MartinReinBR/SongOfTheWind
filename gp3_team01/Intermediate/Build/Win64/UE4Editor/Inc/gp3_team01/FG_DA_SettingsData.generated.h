// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef GP3_TEAM01_FG_DA_SettingsData_generated_h
#error "FG_DA_SettingsData.generated.h already included, missing '#pragma once' in FG_DA_SettingsData.h"
#endif
#define GP3_TEAM01_FG_DA_SettingsData_generated_h

#define gp3_team01_Source_gp3_team01_Public_FG_DA_SettingsData_h_10_DELEGATE \
struct _Script_gp3_team01_eventBooleanGraphicSettingChanged_Parms \
{ \
	bool bIsEnabled; \
}; \
static inline void FBooleanGraphicSettingChanged_DelegateWrapper(const FMulticastScriptDelegate& BooleanGraphicSettingChanged, bool bIsEnabled) \
{ \
	_Script_gp3_team01_eventBooleanGraphicSettingChanged_Parms Parms; \
	Parms.bIsEnabled=bIsEnabled ? true : false; \
	BooleanGraphicSettingChanged.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define gp3_team01_Source_gp3_team01_Public_FG_DA_SettingsData_h_15_SPARSE_DATA
#define gp3_team01_Source_gp3_team01_Public_FG_DA_SettingsData_h_15_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execSetFixedFrameRate); \
	DECLARE_FUNCTION(execGetFixedFrameRate); \
	DECLARE_FUNCTION(execSetMotionBlurOn); \
	DECLARE_FUNCTION(execSetVSyncOn); \
	DECLARE_FUNCTION(execIsMotionBlurOn); \
	DECLARE_FUNCTION(execIsVSyncOn);


#define gp3_team01_Source_gp3_team01_Public_FG_DA_SettingsData_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execSetFixedFrameRate); \
	DECLARE_FUNCTION(execGetFixedFrameRate); \
	DECLARE_FUNCTION(execSetMotionBlurOn); \
	DECLARE_FUNCTION(execSetVSyncOn); \
	DECLARE_FUNCTION(execIsMotionBlurOn); \
	DECLARE_FUNCTION(execIsVSyncOn);


#define gp3_team01_Source_gp3_team01_Public_FG_DA_SettingsData_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUFG_DA_SettingsData(); \
	friend struct Z_Construct_UClass_UFG_DA_SettingsData_Statics; \
public: \
	DECLARE_CLASS(UFG_DA_SettingsData, UDataAsset, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/gp3_team01"), NO_API) \
	DECLARE_SERIALIZER(UFG_DA_SettingsData)


#define gp3_team01_Source_gp3_team01_Public_FG_DA_SettingsData_h_15_INCLASS \
private: \
	static void StaticRegisterNativesUFG_DA_SettingsData(); \
	friend struct Z_Construct_UClass_UFG_DA_SettingsData_Statics; \
public: \
	DECLARE_CLASS(UFG_DA_SettingsData, UDataAsset, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/gp3_team01"), NO_API) \
	DECLARE_SERIALIZER(UFG_DA_SettingsData)


#define gp3_team01_Source_gp3_team01_Public_FG_DA_SettingsData_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UFG_DA_SettingsData(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UFG_DA_SettingsData) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UFG_DA_SettingsData); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UFG_DA_SettingsData); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UFG_DA_SettingsData(UFG_DA_SettingsData&&); \
	NO_API UFG_DA_SettingsData(const UFG_DA_SettingsData&); \
public:


#define gp3_team01_Source_gp3_team01_Public_FG_DA_SettingsData_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UFG_DA_SettingsData(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UFG_DA_SettingsData(UFG_DA_SettingsData&&); \
	NO_API UFG_DA_SettingsData(const UFG_DA_SettingsData&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UFG_DA_SettingsData); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UFG_DA_SettingsData); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UFG_DA_SettingsData)


#define gp3_team01_Source_gp3_team01_Public_FG_DA_SettingsData_h_15_PRIVATE_PROPERTY_OFFSET
#define gp3_team01_Source_gp3_team01_Public_FG_DA_SettingsData_h_12_PROLOG
#define gp3_team01_Source_gp3_team01_Public_FG_DA_SettingsData_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	gp3_team01_Source_gp3_team01_Public_FG_DA_SettingsData_h_15_PRIVATE_PROPERTY_OFFSET \
	gp3_team01_Source_gp3_team01_Public_FG_DA_SettingsData_h_15_SPARSE_DATA \
	gp3_team01_Source_gp3_team01_Public_FG_DA_SettingsData_h_15_RPC_WRAPPERS \
	gp3_team01_Source_gp3_team01_Public_FG_DA_SettingsData_h_15_INCLASS \
	gp3_team01_Source_gp3_team01_Public_FG_DA_SettingsData_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define gp3_team01_Source_gp3_team01_Public_FG_DA_SettingsData_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	gp3_team01_Source_gp3_team01_Public_FG_DA_SettingsData_h_15_PRIVATE_PROPERTY_OFFSET \
	gp3_team01_Source_gp3_team01_Public_FG_DA_SettingsData_h_15_SPARSE_DATA \
	gp3_team01_Source_gp3_team01_Public_FG_DA_SettingsData_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	gp3_team01_Source_gp3_team01_Public_FG_DA_SettingsData_h_15_INCLASS_NO_PURE_DECLS \
	gp3_team01_Source_gp3_team01_Public_FG_DA_SettingsData_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> GP3_TEAM01_API UClass* StaticClass<class UFG_DA_SettingsData>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID gp3_team01_Source_gp3_team01_Public_FG_DA_SettingsData_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
