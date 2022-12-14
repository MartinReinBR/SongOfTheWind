// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef GP3_TEAM01_FG_State_generated_h
#error "FG_State.generated.h already included, missing '#pragma once' in FG_State.h"
#endif
#define GP3_TEAM01_FG_State_generated_h

#define gp3_team01_Source_gp3_team01_Public_Player_FG_State_h_13_SPARSE_DATA
#define gp3_team01_Source_gp3_team01_Public_Player_FG_State_h_13_RPC_WRAPPERS \
	virtual void OnStateExit_Implementation() {}; \
	virtual void OnStatePop_Implementation() {}; \
	virtual bool OnStateTick_Implementation(float DeltaTime) { return false; }; \
	virtual void OnStatePush_Implementation() {}; \
	virtual void OnStateEnter_Implementation() {}; \
 \
	DECLARE_FUNCTION(execOnStateExit); \
	DECLARE_FUNCTION(execOnStatePop); \
	DECLARE_FUNCTION(execOnStateTick); \
	DECLARE_FUNCTION(execOnStatePush); \
	DECLARE_FUNCTION(execOnStateEnter);


#define gp3_team01_Source_gp3_team01_Public_Player_FG_State_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnStateExit); \
	DECLARE_FUNCTION(execOnStatePop); \
	DECLARE_FUNCTION(execOnStateTick); \
	DECLARE_FUNCTION(execOnStatePush); \
	DECLARE_FUNCTION(execOnStateEnter);


#define gp3_team01_Source_gp3_team01_Public_Player_FG_State_h_13_EVENT_PARMS \
	struct FG_State_eventOnStateTick_Parms \
	{ \
		float DeltaTime; \
		bool ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		FG_State_eventOnStateTick_Parms() \
			: ReturnValue(false) \
		{ \
		} \
	};


#define gp3_team01_Source_gp3_team01_Public_Player_FG_State_h_13_CALLBACK_WRAPPERS
#define gp3_team01_Source_gp3_team01_Public_Player_FG_State_h_13_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	GP3_TEAM01_API UFG_State(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UFG_State) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(GP3_TEAM01_API, UFG_State); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UFG_State); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	GP3_TEAM01_API UFG_State(UFG_State&&); \
	GP3_TEAM01_API UFG_State(const UFG_State&); \
public:


#define gp3_team01_Source_gp3_team01_Public_Player_FG_State_h_13_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	GP3_TEAM01_API UFG_State(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	GP3_TEAM01_API UFG_State(UFG_State&&); \
	GP3_TEAM01_API UFG_State(const UFG_State&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(GP3_TEAM01_API, UFG_State); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UFG_State); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UFG_State)


#define gp3_team01_Source_gp3_team01_Public_Player_FG_State_h_13_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUFG_State(); \
	friend struct Z_Construct_UClass_UFG_State_Statics; \
public: \
	DECLARE_CLASS(UFG_State, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/gp3_team01"), GP3_TEAM01_API) \
	DECLARE_SERIALIZER(UFG_State)


#define gp3_team01_Source_gp3_team01_Public_Player_FG_State_h_13_GENERATED_BODY_LEGACY \
		PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	gp3_team01_Source_gp3_team01_Public_Player_FG_State_h_13_GENERATED_UINTERFACE_BODY() \
	gp3_team01_Source_gp3_team01_Public_Player_FG_State_h_13_STANDARD_CONSTRUCTORS \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define gp3_team01_Source_gp3_team01_Public_Player_FG_State_h_13_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	gp3_team01_Source_gp3_team01_Public_Player_FG_State_h_13_GENERATED_UINTERFACE_BODY() \
	gp3_team01_Source_gp3_team01_Public_Player_FG_State_h_13_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define gp3_team01_Source_gp3_team01_Public_Player_FG_State_h_13_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~IFG_State() {} \
public: \
	typedef UFG_State UClassType; \
	typedef IFG_State ThisClass; \
	static void Execute_OnStateEnter(UObject* O); \
	static void Execute_OnStateExit(UObject* O); \
	static void Execute_OnStatePop(UObject* O); \
	static void Execute_OnStatePush(UObject* O); \
	static bool Execute_OnStateTick(UObject* O, float DeltaTime); \
	virtual UObject* _getUObject() const { check(0 && "Missing required implementation."); return nullptr; }


#define gp3_team01_Source_gp3_team01_Public_Player_FG_State_h_13_INCLASS_IINTERFACE \
protected: \
	virtual ~IFG_State() {} \
public: \
	typedef UFG_State UClassType; \
	typedef IFG_State ThisClass; \
	static void Execute_OnStateEnter(UObject* O); \
	static void Execute_OnStateExit(UObject* O); \
	static void Execute_OnStatePop(UObject* O); \
	static void Execute_OnStatePush(UObject* O); \
	static bool Execute_OnStateTick(UObject* O, float DeltaTime); \
	virtual UObject* _getUObject() const { check(0 && "Missing required implementation."); return nullptr; }


#define gp3_team01_Source_gp3_team01_Public_Player_FG_State_h_10_PROLOG \
	gp3_team01_Source_gp3_team01_Public_Player_FG_State_h_13_EVENT_PARMS


#define gp3_team01_Source_gp3_team01_Public_Player_FG_State_h_21_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	gp3_team01_Source_gp3_team01_Public_Player_FG_State_h_13_SPARSE_DATA \
	gp3_team01_Source_gp3_team01_Public_Player_FG_State_h_13_RPC_WRAPPERS \
	gp3_team01_Source_gp3_team01_Public_Player_FG_State_h_13_CALLBACK_WRAPPERS \
	gp3_team01_Source_gp3_team01_Public_Player_FG_State_h_13_INCLASS_IINTERFACE \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define gp3_team01_Source_gp3_team01_Public_Player_FG_State_h_21_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	gp3_team01_Source_gp3_team01_Public_Player_FG_State_h_13_SPARSE_DATA \
	gp3_team01_Source_gp3_team01_Public_Player_FG_State_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	gp3_team01_Source_gp3_team01_Public_Player_FG_State_h_13_CALLBACK_WRAPPERS \
	gp3_team01_Source_gp3_team01_Public_Player_FG_State_h_13_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> GP3_TEAM01_API UClass* StaticClass<class UFG_State>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID gp3_team01_Source_gp3_team01_Public_Player_FG_State_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
