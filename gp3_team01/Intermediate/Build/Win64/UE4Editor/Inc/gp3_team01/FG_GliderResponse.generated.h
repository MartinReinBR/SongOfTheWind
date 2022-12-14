// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UFG_GliderComponent;
#ifdef GP3_TEAM01_FG_GliderResponse_generated_h
#error "FG_GliderResponse.generated.h already included, missing '#pragma once' in FG_GliderResponse.h"
#endif
#define GP3_TEAM01_FG_GliderResponse_generated_h

#define gp3_team01_Source_gp3_team01_Public_Player_Gliding_FG_GliderResponse_h_16_SPARSE_DATA
#define gp3_team01_Source_gp3_team01_Public_Player_Gliding_FG_GliderResponse_h_16_RPC_WRAPPERS \
	virtual void OnGliderTouch_Implementation(UFG_GliderComponent* GliderComponentOfCaller, EFG_TouchingState State) {}; \
	virtual void OnGliderLand_Implementation(UFG_GliderComponent* GliderComponentOfCaller) {}; \
 \
	DECLARE_FUNCTION(execOnGliderTouch); \
	DECLARE_FUNCTION(execOnGliderLand);


#define gp3_team01_Source_gp3_team01_Public_Player_Gliding_FG_GliderResponse_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnGliderTouch); \
	DECLARE_FUNCTION(execOnGliderLand);


#define gp3_team01_Source_gp3_team01_Public_Player_Gliding_FG_GliderResponse_h_16_EVENT_PARMS \
	struct FG_GliderResponse_eventOnGliderLand_Parms \
	{ \
		UFG_GliderComponent* GliderComponentOfCaller; \
	}; \
	struct FG_GliderResponse_eventOnGliderTouch_Parms \
	{ \
		UFG_GliderComponent* GliderComponentOfCaller; \
		TEnumAsByte<EFG_TouchingState> State; \
	};


#define gp3_team01_Source_gp3_team01_Public_Player_Gliding_FG_GliderResponse_h_16_CALLBACK_WRAPPERS
#define gp3_team01_Source_gp3_team01_Public_Player_Gliding_FG_GliderResponse_h_16_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	GP3_TEAM01_API UFG_GliderResponse(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UFG_GliderResponse) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(GP3_TEAM01_API, UFG_GliderResponse); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UFG_GliderResponse); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	GP3_TEAM01_API UFG_GliderResponse(UFG_GliderResponse&&); \
	GP3_TEAM01_API UFG_GliderResponse(const UFG_GliderResponse&); \
public:


#define gp3_team01_Source_gp3_team01_Public_Player_Gliding_FG_GliderResponse_h_16_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	GP3_TEAM01_API UFG_GliderResponse(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	GP3_TEAM01_API UFG_GliderResponse(UFG_GliderResponse&&); \
	GP3_TEAM01_API UFG_GliderResponse(const UFG_GliderResponse&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(GP3_TEAM01_API, UFG_GliderResponse); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UFG_GliderResponse); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UFG_GliderResponse)


#define gp3_team01_Source_gp3_team01_Public_Player_Gliding_FG_GliderResponse_h_16_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUFG_GliderResponse(); \
	friend struct Z_Construct_UClass_UFG_GliderResponse_Statics; \
public: \
	DECLARE_CLASS(UFG_GliderResponse, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/gp3_team01"), GP3_TEAM01_API) \
	DECLARE_SERIALIZER(UFG_GliderResponse)


#define gp3_team01_Source_gp3_team01_Public_Player_Gliding_FG_GliderResponse_h_16_GENERATED_BODY_LEGACY \
		PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	gp3_team01_Source_gp3_team01_Public_Player_Gliding_FG_GliderResponse_h_16_GENERATED_UINTERFACE_BODY() \
	gp3_team01_Source_gp3_team01_Public_Player_Gliding_FG_GliderResponse_h_16_STANDARD_CONSTRUCTORS \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define gp3_team01_Source_gp3_team01_Public_Player_Gliding_FG_GliderResponse_h_16_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	gp3_team01_Source_gp3_team01_Public_Player_Gliding_FG_GliderResponse_h_16_GENERATED_UINTERFACE_BODY() \
	gp3_team01_Source_gp3_team01_Public_Player_Gliding_FG_GliderResponse_h_16_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define gp3_team01_Source_gp3_team01_Public_Player_Gliding_FG_GliderResponse_h_16_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~IFG_GliderResponse() {} \
public: \
	typedef UFG_GliderResponse UClassType; \
	typedef IFG_GliderResponse ThisClass; \
	static void Execute_OnGliderLand(UObject* O, UFG_GliderComponent* GliderComponentOfCaller); \
	static void Execute_OnGliderTouch(UObject* O, UFG_GliderComponent* GliderComponentOfCaller, EFG_TouchingState State); \
	virtual UObject* _getUObject() const { check(0 && "Missing required implementation."); return nullptr; }


#define gp3_team01_Source_gp3_team01_Public_Player_Gliding_FG_GliderResponse_h_16_INCLASS_IINTERFACE \
protected: \
	virtual ~IFG_GliderResponse() {} \
public: \
	typedef UFG_GliderResponse UClassType; \
	typedef IFG_GliderResponse ThisClass; \
	static void Execute_OnGliderLand(UObject* O, UFG_GliderComponent* GliderComponentOfCaller); \
	static void Execute_OnGliderTouch(UObject* O, UFG_GliderComponent* GliderComponentOfCaller, EFG_TouchingState State); \
	virtual UObject* _getUObject() const { check(0 && "Missing required implementation."); return nullptr; }


#define gp3_team01_Source_gp3_team01_Public_Player_Gliding_FG_GliderResponse_h_13_PROLOG \
	gp3_team01_Source_gp3_team01_Public_Player_Gliding_FG_GliderResponse_h_16_EVENT_PARMS


#define gp3_team01_Source_gp3_team01_Public_Player_Gliding_FG_GliderResponse_h_24_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	gp3_team01_Source_gp3_team01_Public_Player_Gliding_FG_GliderResponse_h_16_SPARSE_DATA \
	gp3_team01_Source_gp3_team01_Public_Player_Gliding_FG_GliderResponse_h_16_RPC_WRAPPERS \
	gp3_team01_Source_gp3_team01_Public_Player_Gliding_FG_GliderResponse_h_16_CALLBACK_WRAPPERS \
	gp3_team01_Source_gp3_team01_Public_Player_Gliding_FG_GliderResponse_h_16_INCLASS_IINTERFACE \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define gp3_team01_Source_gp3_team01_Public_Player_Gliding_FG_GliderResponse_h_24_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	gp3_team01_Source_gp3_team01_Public_Player_Gliding_FG_GliderResponse_h_16_SPARSE_DATA \
	gp3_team01_Source_gp3_team01_Public_Player_Gliding_FG_GliderResponse_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	gp3_team01_Source_gp3_team01_Public_Player_Gliding_FG_GliderResponse_h_16_CALLBACK_WRAPPERS \
	gp3_team01_Source_gp3_team01_Public_Player_Gliding_FG_GliderResponse_h_16_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> GP3_TEAM01_API UClass* StaticClass<class UFG_GliderResponse>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID gp3_team01_Source_gp3_team01_Public_Player_Gliding_FG_GliderResponse_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
