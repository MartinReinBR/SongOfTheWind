// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UFG_LocomotionComponent;
#ifdef GP3_TEAM01_FG_LocomotionResponse_generated_h
#error "FG_LocomotionResponse.generated.h already included, missing '#pragma once' in FG_LocomotionResponse.h"
#endif
#define GP3_TEAM01_FG_LocomotionResponse_generated_h

#define gp3_team01_Source_gp3_team01_Public_Player_Movement_FG_LocomotionResponse_h_16_SPARSE_DATA
#define gp3_team01_Source_gp3_team01_Public_Player_Movement_FG_LocomotionResponse_h_16_RPC_WRAPPERS \
	virtual void OnLocomotionTouch_Implementation(UFG_LocomotionComponent* LocomotionComponentOfCaller, EFG_TouchingState State) {}; \
	virtual void OnLocomotionLeft_Implementation(UFG_LocomotionComponent* LocomotionComponentOfCaller) {}; \
	virtual void OnLocomotionStand_Implementation(UFG_LocomotionComponent* LocomotionComponentOfCaller) {}; \
	virtual void OnLocomotionMove_Implementation(UFG_LocomotionComponent* LocomotionComponentOfCaller) {}; \
	virtual void OnLocomotionLand_Implementation(UFG_LocomotionComponent* LocomotionComponentOfCaller) {}; \
	virtual void OnLocomotionJump_Implementation(UFG_LocomotionComponent* LocomotionComponentOfCaller) {}; \
 \
	DECLARE_FUNCTION(execOnLocomotionTouch); \
	DECLARE_FUNCTION(execOnLocomotionLeft); \
	DECLARE_FUNCTION(execOnLocomotionStand); \
	DECLARE_FUNCTION(execOnLocomotionMove); \
	DECLARE_FUNCTION(execOnLocomotionLand); \
	DECLARE_FUNCTION(execOnLocomotionJump);


#define gp3_team01_Source_gp3_team01_Public_Player_Movement_FG_LocomotionResponse_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnLocomotionTouch); \
	DECLARE_FUNCTION(execOnLocomotionLeft); \
	DECLARE_FUNCTION(execOnLocomotionStand); \
	DECLARE_FUNCTION(execOnLocomotionMove); \
	DECLARE_FUNCTION(execOnLocomotionLand); \
	DECLARE_FUNCTION(execOnLocomotionJump);


#define gp3_team01_Source_gp3_team01_Public_Player_Movement_FG_LocomotionResponse_h_16_EVENT_PARMS \
	struct FG_LocomotionResponse_eventOnLocomotionJump_Parms \
	{ \
		UFG_LocomotionComponent* LocomotionComponentOfCaller; \
	}; \
	struct FG_LocomotionResponse_eventOnLocomotionLand_Parms \
	{ \
		UFG_LocomotionComponent* LocomotionComponentOfCaller; \
	}; \
	struct FG_LocomotionResponse_eventOnLocomotionLeft_Parms \
	{ \
		UFG_LocomotionComponent* LocomotionComponentOfCaller; \
	}; \
	struct FG_LocomotionResponse_eventOnLocomotionMove_Parms \
	{ \
		UFG_LocomotionComponent* LocomotionComponentOfCaller; \
	}; \
	struct FG_LocomotionResponse_eventOnLocomotionStand_Parms \
	{ \
		UFG_LocomotionComponent* LocomotionComponentOfCaller; \
	}; \
	struct FG_LocomotionResponse_eventOnLocomotionTouch_Parms \
	{ \
		UFG_LocomotionComponent* LocomotionComponentOfCaller; \
		TEnumAsByte<EFG_TouchingState> State; \
	};


#define gp3_team01_Source_gp3_team01_Public_Player_Movement_FG_LocomotionResponse_h_16_CALLBACK_WRAPPERS
#define gp3_team01_Source_gp3_team01_Public_Player_Movement_FG_LocomotionResponse_h_16_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	GP3_TEAM01_API UFG_LocomotionResponse(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UFG_LocomotionResponse) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(GP3_TEAM01_API, UFG_LocomotionResponse); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UFG_LocomotionResponse); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	GP3_TEAM01_API UFG_LocomotionResponse(UFG_LocomotionResponse&&); \
	GP3_TEAM01_API UFG_LocomotionResponse(const UFG_LocomotionResponse&); \
public:


#define gp3_team01_Source_gp3_team01_Public_Player_Movement_FG_LocomotionResponse_h_16_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	GP3_TEAM01_API UFG_LocomotionResponse(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	GP3_TEAM01_API UFG_LocomotionResponse(UFG_LocomotionResponse&&); \
	GP3_TEAM01_API UFG_LocomotionResponse(const UFG_LocomotionResponse&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(GP3_TEAM01_API, UFG_LocomotionResponse); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UFG_LocomotionResponse); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UFG_LocomotionResponse)


#define gp3_team01_Source_gp3_team01_Public_Player_Movement_FG_LocomotionResponse_h_16_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUFG_LocomotionResponse(); \
	friend struct Z_Construct_UClass_UFG_LocomotionResponse_Statics; \
public: \
	DECLARE_CLASS(UFG_LocomotionResponse, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/gp3_team01"), GP3_TEAM01_API) \
	DECLARE_SERIALIZER(UFG_LocomotionResponse)


#define gp3_team01_Source_gp3_team01_Public_Player_Movement_FG_LocomotionResponse_h_16_GENERATED_BODY_LEGACY \
		PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	gp3_team01_Source_gp3_team01_Public_Player_Movement_FG_LocomotionResponse_h_16_GENERATED_UINTERFACE_BODY() \
	gp3_team01_Source_gp3_team01_Public_Player_Movement_FG_LocomotionResponse_h_16_STANDARD_CONSTRUCTORS \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define gp3_team01_Source_gp3_team01_Public_Player_Movement_FG_LocomotionResponse_h_16_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	gp3_team01_Source_gp3_team01_Public_Player_Movement_FG_LocomotionResponse_h_16_GENERATED_UINTERFACE_BODY() \
	gp3_team01_Source_gp3_team01_Public_Player_Movement_FG_LocomotionResponse_h_16_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define gp3_team01_Source_gp3_team01_Public_Player_Movement_FG_LocomotionResponse_h_16_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~IFG_LocomotionResponse() {} \
public: \
	typedef UFG_LocomotionResponse UClassType; \
	typedef IFG_LocomotionResponse ThisClass; \
	static void Execute_OnLocomotionJump(UObject* O, UFG_LocomotionComponent* LocomotionComponentOfCaller); \
	static void Execute_OnLocomotionLand(UObject* O, UFG_LocomotionComponent* LocomotionComponentOfCaller); \
	static void Execute_OnLocomotionLeft(UObject* O, UFG_LocomotionComponent* LocomotionComponentOfCaller); \
	static void Execute_OnLocomotionMove(UObject* O, UFG_LocomotionComponent* LocomotionComponentOfCaller); \
	static void Execute_OnLocomotionStand(UObject* O, UFG_LocomotionComponent* LocomotionComponentOfCaller); \
	static void Execute_OnLocomotionTouch(UObject* O, UFG_LocomotionComponent* LocomotionComponentOfCaller, EFG_TouchingState State); \
	virtual UObject* _getUObject() const { check(0 && "Missing required implementation."); return nullptr; }


#define gp3_team01_Source_gp3_team01_Public_Player_Movement_FG_LocomotionResponse_h_16_INCLASS_IINTERFACE \
protected: \
	virtual ~IFG_LocomotionResponse() {} \
public: \
	typedef UFG_LocomotionResponse UClassType; \
	typedef IFG_LocomotionResponse ThisClass; \
	static void Execute_OnLocomotionJump(UObject* O, UFG_LocomotionComponent* LocomotionComponentOfCaller); \
	static void Execute_OnLocomotionLand(UObject* O, UFG_LocomotionComponent* LocomotionComponentOfCaller); \
	static void Execute_OnLocomotionLeft(UObject* O, UFG_LocomotionComponent* LocomotionComponentOfCaller); \
	static void Execute_OnLocomotionMove(UObject* O, UFG_LocomotionComponent* LocomotionComponentOfCaller); \
	static void Execute_OnLocomotionStand(UObject* O, UFG_LocomotionComponent* LocomotionComponentOfCaller); \
	static void Execute_OnLocomotionTouch(UObject* O, UFG_LocomotionComponent* LocomotionComponentOfCaller, EFG_TouchingState State); \
	virtual UObject* _getUObject() const { check(0 && "Missing required implementation."); return nullptr; }


#define gp3_team01_Source_gp3_team01_Public_Player_Movement_FG_LocomotionResponse_h_13_PROLOG \
	gp3_team01_Source_gp3_team01_Public_Player_Movement_FG_LocomotionResponse_h_16_EVENT_PARMS


#define gp3_team01_Source_gp3_team01_Public_Player_Movement_FG_LocomotionResponse_h_26_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	gp3_team01_Source_gp3_team01_Public_Player_Movement_FG_LocomotionResponse_h_16_SPARSE_DATA \
	gp3_team01_Source_gp3_team01_Public_Player_Movement_FG_LocomotionResponse_h_16_RPC_WRAPPERS \
	gp3_team01_Source_gp3_team01_Public_Player_Movement_FG_LocomotionResponse_h_16_CALLBACK_WRAPPERS \
	gp3_team01_Source_gp3_team01_Public_Player_Movement_FG_LocomotionResponse_h_16_INCLASS_IINTERFACE \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define gp3_team01_Source_gp3_team01_Public_Player_Movement_FG_LocomotionResponse_h_26_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	gp3_team01_Source_gp3_team01_Public_Player_Movement_FG_LocomotionResponse_h_16_SPARSE_DATA \
	gp3_team01_Source_gp3_team01_Public_Player_Movement_FG_LocomotionResponse_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	gp3_team01_Source_gp3_team01_Public_Player_Movement_FG_LocomotionResponse_h_16_CALLBACK_WRAPPERS \
	gp3_team01_Source_gp3_team01_Public_Player_Movement_FG_LocomotionResponse_h_16_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> GP3_TEAM01_API UClass* StaticClass<class UFG_LocomotionResponse>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID gp3_team01_Source_gp3_team01_Public_Player_Movement_FG_LocomotionResponse_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
