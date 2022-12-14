// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FVector;
class USceneComponent;
class UFG_DA_JumpStats;
class UPrimitiveComponent;
class UFG_DA_LedgevaultStats;
struct FHitResult;
class UFG_DA_HoverStats;
class UFG_DA_InputStats;
class UFG_DA_MoveStats;
#ifdef GP3_TEAM01_FG_LocomotionComponent_generated_h
#error "FG_LocomotionComponent.generated.h already included, missing '#pragma once' in FG_LocomotionComponent.h"
#endif
#define GP3_TEAM01_FG_LocomotionComponent_generated_h

#define gp3_team01_Source_gp3_team01_Public_Player_Movement_FG_LocomotionComponent_h_12_SPARSE_DATA
#define gp3_team01_Source_gp3_team01_Public_Player_Movement_FG_LocomotionComponent_h_12_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetWallClimbNormal); \
	DECLARE_FUNCTION(execGetInputRelativeToCamera); \
	DECLARE_FUNCTION(execHasJustJumped); \
	DECLARE_FUNCTION(execDisableFloat); \
	DECLARE_FUNCTION(execJumpRAW); \
	DECLARE_FUNCTION(execJump); \
	DECLARE_FUNCTION(execRotatePlayerRAW); \
	DECLARE_FUNCTION(execCheckTouching); \
	DECLARE_FUNCTION(execDisableWallClimb); \
	DECLARE_FUNCTION(execDisableLedgeGrab); \
	DECLARE_FUNCTION(execHandleClimbOnWallRAW); \
	DECLARE_FUNCTION(execHangOnLedgeRAW); \
	DECLARE_FUNCTION(execSaveLedgeGrabbablePosition); \
	DECLARE_FUNCTION(execIsWallClimbableRAW); \
	DECLARE_FUNCTION(execIsLedgeVaultableRAW); \
	DECLARE_FUNCTION(execHoverRAW); \
	DECLARE_FUNCTION(execHover); \
	DECLARE_FUNCTION(execMoveWithFriction); \
	DECLARE_FUNCTION(execApplyFrictionRAW); \
	DECLARE_FUNCTION(execApplyFriction); \
	DECLARE_FUNCTION(execMoveRAW); \
	DECLARE_FUNCTION(execMove);


#define gp3_team01_Source_gp3_team01_Public_Player_Movement_FG_LocomotionComponent_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetWallClimbNormal); \
	DECLARE_FUNCTION(execGetInputRelativeToCamera); \
	DECLARE_FUNCTION(execHasJustJumped); \
	DECLARE_FUNCTION(execDisableFloat); \
	DECLARE_FUNCTION(execJumpRAW); \
	DECLARE_FUNCTION(execJump); \
	DECLARE_FUNCTION(execRotatePlayerRAW); \
	DECLARE_FUNCTION(execCheckTouching); \
	DECLARE_FUNCTION(execDisableWallClimb); \
	DECLARE_FUNCTION(execDisableLedgeGrab); \
	DECLARE_FUNCTION(execHandleClimbOnWallRAW); \
	DECLARE_FUNCTION(execHangOnLedgeRAW); \
	DECLARE_FUNCTION(execSaveLedgeGrabbablePosition); \
	DECLARE_FUNCTION(execIsWallClimbableRAW); \
	DECLARE_FUNCTION(execIsLedgeVaultableRAW); \
	DECLARE_FUNCTION(execHoverRAW); \
	DECLARE_FUNCTION(execHover); \
	DECLARE_FUNCTION(execMoveWithFriction); \
	DECLARE_FUNCTION(execApplyFrictionRAW); \
	DECLARE_FUNCTION(execApplyFriction); \
	DECLARE_FUNCTION(execMoveRAW); \
	DECLARE_FUNCTION(execMove);


#define gp3_team01_Source_gp3_team01_Public_Player_Movement_FG_LocomotionComponent_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUFG_LocomotionComponent(); \
	friend struct Z_Construct_UClass_UFG_LocomotionComponent_Statics; \
public: \
	DECLARE_CLASS(UFG_LocomotionComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/gp3_team01"), NO_API) \
	DECLARE_SERIALIZER(UFG_LocomotionComponent)


#define gp3_team01_Source_gp3_team01_Public_Player_Movement_FG_LocomotionComponent_h_12_INCLASS \
private: \
	static void StaticRegisterNativesUFG_LocomotionComponent(); \
	friend struct Z_Construct_UClass_UFG_LocomotionComponent_Statics; \
public: \
	DECLARE_CLASS(UFG_LocomotionComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/gp3_team01"), NO_API) \
	DECLARE_SERIALIZER(UFG_LocomotionComponent)


#define gp3_team01_Source_gp3_team01_Public_Player_Movement_FG_LocomotionComponent_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UFG_LocomotionComponent(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UFG_LocomotionComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UFG_LocomotionComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UFG_LocomotionComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UFG_LocomotionComponent(UFG_LocomotionComponent&&); \
	NO_API UFG_LocomotionComponent(const UFG_LocomotionComponent&); \
public:


#define gp3_team01_Source_gp3_team01_Public_Player_Movement_FG_LocomotionComponent_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UFG_LocomotionComponent(UFG_LocomotionComponent&&); \
	NO_API UFG_LocomotionComponent(const UFG_LocomotionComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UFG_LocomotionComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UFG_LocomotionComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UFG_LocomotionComponent)


#define gp3_team01_Source_gp3_team01_Public_Player_Movement_FG_LocomotionComponent_h_12_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__Shape() { return STRUCT_OFFSET(UFG_LocomotionComponent, Shape); }


#define gp3_team01_Source_gp3_team01_Public_Player_Movement_FG_LocomotionComponent_h_9_PROLOG
#define gp3_team01_Source_gp3_team01_Public_Player_Movement_FG_LocomotionComponent_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	gp3_team01_Source_gp3_team01_Public_Player_Movement_FG_LocomotionComponent_h_12_PRIVATE_PROPERTY_OFFSET \
	gp3_team01_Source_gp3_team01_Public_Player_Movement_FG_LocomotionComponent_h_12_SPARSE_DATA \
	gp3_team01_Source_gp3_team01_Public_Player_Movement_FG_LocomotionComponent_h_12_RPC_WRAPPERS \
	gp3_team01_Source_gp3_team01_Public_Player_Movement_FG_LocomotionComponent_h_12_INCLASS \
	gp3_team01_Source_gp3_team01_Public_Player_Movement_FG_LocomotionComponent_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define gp3_team01_Source_gp3_team01_Public_Player_Movement_FG_LocomotionComponent_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	gp3_team01_Source_gp3_team01_Public_Player_Movement_FG_LocomotionComponent_h_12_PRIVATE_PROPERTY_OFFSET \
	gp3_team01_Source_gp3_team01_Public_Player_Movement_FG_LocomotionComponent_h_12_SPARSE_DATA \
	gp3_team01_Source_gp3_team01_Public_Player_Movement_FG_LocomotionComponent_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	gp3_team01_Source_gp3_team01_Public_Player_Movement_FG_LocomotionComponent_h_12_INCLASS_NO_PURE_DECLS \
	gp3_team01_Source_gp3_team01_Public_Player_Movement_FG_LocomotionComponent_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> GP3_TEAM01_API UClass* StaticClass<class UFG_LocomotionComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID gp3_team01_Source_gp3_team01_Public_Player_Movement_FG_LocomotionComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
