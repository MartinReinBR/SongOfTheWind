// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "gp3_team01/Public/Player/Movement/FG_LocomotionComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFG_LocomotionComponent() {}
// Cross Module References
	GP3_TEAM01_API UClass* Z_Construct_UClass_UFG_LocomotionComponent_NoRegister();
	GP3_TEAM01_API UClass* Z_Construct_UClass_UFG_LocomotionComponent();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	UPackage* Z_Construct_UPackage__Script_gp3_team01();
	GP3_TEAM01_API UClass* Z_Construct_UClass_UFG_DA_MoveStats_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UPrimitiveComponent_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
	GP3_TEAM01_API UClass* Z_Construct_UClass_UFG_DA_HoverStats_NoRegister();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FHitResult();
	GP3_TEAM01_API UClass* Z_Construct_UClass_UFG_DA_JumpStats_NoRegister();
	GP3_TEAM01_API UClass* Z_Construct_UClass_UFG_DA_InputStats_NoRegister();
	GP3_TEAM01_API UClass* Z_Construct_UClass_UFG_DA_LedgevaultStats_NoRegister();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_ECollisionChannel();
// End Cross Module References
	DEFINE_FUNCTION(UFG_LocomotionComponent::execGetWallClimbNormal)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FVector*)Z_Param__Result=P_THIS->GetWallClimbNormal();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UFG_LocomotionComponent::execGetInputRelativeToCamera)
	{
		P_GET_STRUCT(FVector,Z_Param_InputVector);
		P_GET_OBJECT(USceneComponent,Z_Param_CameraTransform);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FVector*)Z_Param__Result=P_THIS->GetInputRelativeToCamera(Z_Param_InputVector,Z_Param_CameraTransform);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UFG_LocomotionComponent::execHasJustJumped)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->HasJustJumped();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UFG_LocomotionComponent::execDisableFloat)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_Duration);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->DisableFloat(Z_Param_Duration);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UFG_LocomotionComponent::execJumpRAW)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_JumpForce);
		P_GET_PROPERTY(FFloatProperty,Z_Param_RayDistance);
		P_GET_PROPERTY(FFloatProperty,Z_Param_DisableFloatingTime);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->JumpRAW(Z_Param_JumpForce,Z_Param_RayDistance,Z_Param_DisableFloatingTime);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UFG_LocomotionComponent::execJump)
	{
		P_GET_OBJECT(UFG_DA_JumpStats,Z_Param_JumpStats);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Jump(Z_Param_JumpStats);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UFG_LocomotionComponent::execRotatePlayerRAW)
	{
		P_GET_STRUCT(FVector,Z_Param_Direction);
		P_GET_PROPERTY(FFloatProperty,Z_Param_RotationSpeed);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->RotatePlayerRAW(Z_Param_Direction,Z_Param_RotationSpeed);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UFG_LocomotionComponent::execCheckTouching)
	{
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_Component);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->CheckTouching(Z_Param_Component);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UFG_LocomotionComponent::execDisableWallClimb)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_Duration);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->DisableWallClimb(Z_Param_Duration);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UFG_LocomotionComponent::execDisableLedgeGrab)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_Duration);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->DisableLedgeGrab(Z_Param_Duration);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UFG_LocomotionComponent::execHandleClimbOnWallRAW)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_WallHugForce);
		P_GET_PROPERTY(FFloatProperty,Z_Param_WallClimbForce);
		P_GET_PROPERTY(FFloatProperty,Z_Param_WallClimbMaxSpeed);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->HandleClimbOnWallRAW(Z_Param_WallHugForce,Z_Param_WallClimbForce,Z_Param_WallClimbMaxSpeed);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UFG_LocomotionComponent::execHangOnLedgeRAW)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->HangOnLedgeRAW();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UFG_LocomotionComponent::execSaveLedgeGrabbablePosition)
	{
		P_GET_STRUCT(FVector,Z_Param_CheckDirection);
		P_GET_OBJECT(UFG_DA_LedgevaultStats,Z_Param_LedgeStats);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SaveLedgeGrabbablePosition(Z_Param_CheckDirection,Z_Param_LedgeStats);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UFG_LocomotionComponent::execIsWallClimbableRAW)
	{
		P_GET_STRUCT(FVector,Z_Param_CheckDirection);
		P_GET_PROPERTY(FFloatProperty,Z_Param_RayLength);
		P_GET_PROPERTY(FFloatProperty,Z_Param_WallLeanTreshold);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsWallClimbableRAW(Z_Param_CheckDirection,Z_Param_RayLength,Z_Param_WallLeanTreshold);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UFG_LocomotionComponent::execIsLedgeVaultableRAW)
	{
		P_GET_STRUCT(FVector,Z_Param_CheckDirection);
		P_GET_PROPERTY(FFloatProperty,Z_Param_RayLength);
		P_GET_PROPERTY(FFloatProperty,Z_Param_RayLengthUp);
		P_GET_PROPERTY(FFloatProperty,Z_Param_RayLengthDown);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsLedgeVaultableRAW(Z_Param_CheckDirection,Z_Param_RayLength,Z_Param_RayLengthUp,Z_Param_RayLengthDown);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UFG_LocomotionComponent::execHoverRAW)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_HoverDistance);
		P_GET_PROPERTY(FFloatProperty,Z_Param_HoverRay);
		P_GET_PROPERTY(FFloatProperty,Z_Param_HoverStrength);
		P_GET_PROPERTY(FFloatProperty,Z_Param_HoverDamping);
		P_GET_TARRAY_REF(FHitResult,Z_Param_Out_Hits);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->HoverRAW(Z_Param_HoverDistance,Z_Param_HoverRay,Z_Param_HoverStrength,Z_Param_HoverDamping,Z_Param_Out_Hits);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UFG_LocomotionComponent::execHover)
	{
		P_GET_OBJECT(UFG_DA_HoverStats,Z_Param_HoverStats);
		P_GET_TARRAY_REF(FHitResult,Z_Param_Out_hit);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->Hover(Z_Param_HoverStats,Z_Param_Out_hit);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UFG_LocomotionComponent::execMoveWithFriction)
	{
		P_GET_OBJECT(UFG_DA_InputStats,Z_Param_InputStats);
		P_GET_OBJECT(UFG_DA_MoveStats,Z_Param_MoveStats);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->MoveWithFriction(Z_Param_InputStats,Z_Param_MoveStats);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UFG_LocomotionComponent::execApplyFrictionRAW)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_Friction);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ApplyFrictionRAW(Z_Param_Friction);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UFG_LocomotionComponent::execApplyFriction)
	{
		P_GET_OBJECT(UFG_DA_MoveStats,Z_Param_MoveStats);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ApplyFriction(Z_Param_MoveStats);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UFG_LocomotionComponent::execMoveRAW)
	{
		P_GET_STRUCT(FVector,Z_Param_InputVector);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Acceleration);
		P_GET_PROPERTY(FFloatProperty,Z_Param_MaxSpeed);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->MoveRAW(Z_Param_InputVector,Z_Param_Acceleration,Z_Param_MaxSpeed);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UFG_LocomotionComponent::execMove)
	{
		P_GET_OBJECT(UFG_DA_InputStats,Z_Param_InputStats);
		P_GET_OBJECT(UFG_DA_MoveStats,Z_Param_MoveStats);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Move(Z_Param_InputStats,Z_Param_MoveStats);
		P_NATIVE_END;
	}
	void UFG_LocomotionComponent::StaticRegisterNativesUFG_LocomotionComponent()
	{
		UClass* Class = UFG_LocomotionComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ApplyFriction", &UFG_LocomotionComponent::execApplyFriction },
			{ "ApplyFrictionRAW", &UFG_LocomotionComponent::execApplyFrictionRAW },
			{ "CheckTouching", &UFG_LocomotionComponent::execCheckTouching },
			{ "DisableFloat", &UFG_LocomotionComponent::execDisableFloat },
			{ "DisableLedgeGrab", &UFG_LocomotionComponent::execDisableLedgeGrab },
			{ "DisableWallClimb", &UFG_LocomotionComponent::execDisableWallClimb },
			{ "GetInputRelativeToCamera", &UFG_LocomotionComponent::execGetInputRelativeToCamera },
			{ "GetWallClimbNormal", &UFG_LocomotionComponent::execGetWallClimbNormal },
			{ "HandleClimbOnWallRAW", &UFG_LocomotionComponent::execHandleClimbOnWallRAW },
			{ "HangOnLedgeRAW", &UFG_LocomotionComponent::execHangOnLedgeRAW },
			{ "HasJustJumped", &UFG_LocomotionComponent::execHasJustJumped },
			{ "Hover", &UFG_LocomotionComponent::execHover },
			{ "HoverRAW", &UFG_LocomotionComponent::execHoverRAW },
			{ "IsLedgeVaultableRAW", &UFG_LocomotionComponent::execIsLedgeVaultableRAW },
			{ "IsWallClimbableRAW", &UFG_LocomotionComponent::execIsWallClimbableRAW },
			{ "Jump", &UFG_LocomotionComponent::execJump },
			{ "JumpRAW", &UFG_LocomotionComponent::execJumpRAW },
			{ "Move", &UFG_LocomotionComponent::execMove },
			{ "MoveRAW", &UFG_LocomotionComponent::execMoveRAW },
			{ "MoveWithFriction", &UFG_LocomotionComponent::execMoveWithFriction },
			{ "RotatePlayerRAW", &UFG_LocomotionComponent::execRotatePlayerRAW },
			{ "SaveLedgeGrabbablePosition", &UFG_LocomotionComponent::execSaveLedgeGrabbablePosition },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UFG_LocomotionComponent_ApplyFriction_Statics
	{
		struct FG_LocomotionComponent_eventApplyFriction_Parms
		{
			UFG_DA_MoveStats* MoveStats;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_MoveStats;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UFG_LocomotionComponent_ApplyFriction_Statics::NewProp_MoveStats = { "MoveStats", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FG_LocomotionComponent_eventApplyFriction_Parms, MoveStats), Z_Construct_UClass_UFG_DA_MoveStats_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFG_LocomotionComponent_ApplyFriction_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFG_LocomotionComponent_ApplyFriction_Statics::NewProp_MoveStats,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFG_LocomotionComponent_ApplyFriction_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/// <summary>\n/// Reduces velocity with friction\n/// </summary>\n" },
		{ "ModuleRelativePath", "Public/Player/Movement/FG_LocomotionComponent.h" },
		{ "ToolTip", "<summary>\nReduces velocity with friction\n</summary>" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFG_LocomotionComponent_ApplyFriction_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFG_LocomotionComponent, nullptr, "ApplyFriction", nullptr, nullptr, sizeof(FG_LocomotionComponent_eventApplyFriction_Parms), Z_Construct_UFunction_UFG_LocomotionComponent_ApplyFriction_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFG_LocomotionComponent_ApplyFriction_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFG_LocomotionComponent_ApplyFriction_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFG_LocomotionComponent_ApplyFriction_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFG_LocomotionComponent_ApplyFriction()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFG_LocomotionComponent_ApplyFriction_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFG_LocomotionComponent_ApplyFrictionRAW_Statics
	{
		struct FG_LocomotionComponent_eventApplyFrictionRAW_Parms
		{
			float Friction;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Friction;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UFG_LocomotionComponent_ApplyFrictionRAW_Statics::NewProp_Friction = { "Friction", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FG_LocomotionComponent_eventApplyFrictionRAW_Parms, Friction), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFG_LocomotionComponent_ApplyFrictionRAW_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFG_LocomotionComponent_ApplyFrictionRAW_Statics::NewProp_Friction,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFG_LocomotionComponent_ApplyFrictionRAW_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Player/Movement/FG_LocomotionComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFG_LocomotionComponent_ApplyFrictionRAW_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFG_LocomotionComponent, nullptr, "ApplyFrictionRAW", nullptr, nullptr, sizeof(FG_LocomotionComponent_eventApplyFrictionRAW_Parms), Z_Construct_UFunction_UFG_LocomotionComponent_ApplyFrictionRAW_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFG_LocomotionComponent_ApplyFrictionRAW_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFG_LocomotionComponent_ApplyFrictionRAW_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFG_LocomotionComponent_ApplyFrictionRAW_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFG_LocomotionComponent_ApplyFrictionRAW()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFG_LocomotionComponent_ApplyFrictionRAW_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFG_LocomotionComponent_CheckTouching_Statics
	{
		struct FG_LocomotionComponent_eventCheckTouching_Parms
		{
			UPrimitiveComponent* Component;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Component_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Component;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFG_LocomotionComponent_CheckTouching_Statics::NewProp_Component_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UFG_LocomotionComponent_CheckTouching_Statics::NewProp_Component = { "Component", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FG_LocomotionComponent_eventCheckTouching_Parms, Component), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UFG_LocomotionComponent_CheckTouching_Statics::NewProp_Component_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UFG_LocomotionComponent_CheckTouching_Statics::NewProp_Component_MetaData)) };
	void Z_Construct_UFunction_UFG_LocomotionComponent_CheckTouching_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((FG_LocomotionComponent_eventCheckTouching_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UFG_LocomotionComponent_CheckTouching_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FG_LocomotionComponent_eventCheckTouching_Parms), &Z_Construct_UFunction_UFG_LocomotionComponent_CheckTouching_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFG_LocomotionComponent_CheckTouching_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFG_LocomotionComponent_CheckTouching_Statics::NewProp_Component,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFG_LocomotionComponent_CheckTouching_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFG_LocomotionComponent_CheckTouching_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/// <summary>\n/// Makes an overlap check around given component.\n/// Returns a bool if anything collided with primitive component.\n/// </summary>\n" },
		{ "ModuleRelativePath", "Public/Player/Movement/FG_LocomotionComponent.h" },
		{ "ToolTip", "<summary>\nMakes an overlap check around given component.\nReturns a bool if anything collided with primitive component.\n</summary>" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFG_LocomotionComponent_CheckTouching_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFG_LocomotionComponent, nullptr, "CheckTouching", nullptr, nullptr, sizeof(FG_LocomotionComponent_eventCheckTouching_Parms), Z_Construct_UFunction_UFG_LocomotionComponent_CheckTouching_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFG_LocomotionComponent_CheckTouching_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFG_LocomotionComponent_CheckTouching_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFG_LocomotionComponent_CheckTouching_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFG_LocomotionComponent_CheckTouching()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFG_LocomotionComponent_CheckTouching_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFG_LocomotionComponent_DisableFloat_Statics
	{
		struct FG_LocomotionComponent_eventDisableFloat_Parms
		{
			float Duration;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Duration;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UFG_LocomotionComponent_DisableFloat_Statics::NewProp_Duration = { "Duration", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FG_LocomotionComponent_eventDisableFloat_Parms, Duration), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFG_LocomotionComponent_DisableFloat_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFG_LocomotionComponent_DisableFloat_Statics::NewProp_Duration,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFG_LocomotionComponent_DisableFloat_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/// <summary>\n/// Disables floating for a period of time. \n/// Use this if you want to say, jump from the ground because otherwise the Hover damping will subtract from the jump force and make jumping really inconsistent.\n/// </summary>\n" },
		{ "CPP_Default_Duration", "0.250000" },
		{ "ModuleRelativePath", "Public/Player/Movement/FG_LocomotionComponent.h" },
		{ "ToolTip", "<summary>\nDisables floating for a period of time.\nUse this if you want to say, jump from the ground because otherwise the Hover damping will subtract from the jump force and make jumping really inconsistent.\n</summary>" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFG_LocomotionComponent_DisableFloat_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFG_LocomotionComponent, nullptr, "DisableFloat", nullptr, nullptr, sizeof(FG_LocomotionComponent_eventDisableFloat_Parms), Z_Construct_UFunction_UFG_LocomotionComponent_DisableFloat_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFG_LocomotionComponent_DisableFloat_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFG_LocomotionComponent_DisableFloat_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFG_LocomotionComponent_DisableFloat_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFG_LocomotionComponent_DisableFloat()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFG_LocomotionComponent_DisableFloat_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFG_LocomotionComponent_DisableLedgeGrab_Statics
	{
		struct FG_LocomotionComponent_eventDisableLedgeGrab_Parms
		{
			float Duration;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Duration;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UFG_LocomotionComponent_DisableLedgeGrab_Statics::NewProp_Duration = { "Duration", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FG_LocomotionComponent_eventDisableLedgeGrab_Parms, Duration), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFG_LocomotionComponent_DisableLedgeGrab_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFG_LocomotionComponent_DisableLedgeGrab_Statics::NewProp_Duration,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFG_LocomotionComponent_DisableLedgeGrab_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/// <summary>\n/// Disables the ability to grab ledges. Is called when you leave the Ledgevault state so you dont regrab the ledge instantly after\n/// </summary>\n" },
		{ "CPP_Default_Duration", "0.500000" },
		{ "ModuleRelativePath", "Public/Player/Movement/FG_LocomotionComponent.h" },
		{ "ToolTip", "<summary>\nDisables the ability to grab ledges. Is called when you leave the Ledgevault state so you dont regrab the ledge instantly after\n</summary>" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFG_LocomotionComponent_DisableLedgeGrab_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFG_LocomotionComponent, nullptr, "DisableLedgeGrab", nullptr, nullptr, sizeof(FG_LocomotionComponent_eventDisableLedgeGrab_Parms), Z_Construct_UFunction_UFG_LocomotionComponent_DisableLedgeGrab_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFG_LocomotionComponent_DisableLedgeGrab_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFG_LocomotionComponent_DisableLedgeGrab_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFG_LocomotionComponent_DisableLedgeGrab_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFG_LocomotionComponent_DisableLedgeGrab()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFG_LocomotionComponent_DisableLedgeGrab_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFG_LocomotionComponent_DisableWallClimb_Statics
	{
		struct FG_LocomotionComponent_eventDisableWallClimb_Parms
		{
			float Duration;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Duration;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UFG_LocomotionComponent_DisableWallClimb_Statics::NewProp_Duration = { "Duration", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FG_LocomotionComponent_eventDisableWallClimb_Parms, Duration), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFG_LocomotionComponent_DisableWallClimb_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFG_LocomotionComponent_DisableWallClimb_Statics::NewProp_Duration,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFG_LocomotionComponent_DisableWallClimb_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/// <summary>\n/// Disables the ability to latch onto walls for a duration.\n/// </summary>\n" },
		{ "CPP_Default_Duration", "0.500000" },
		{ "ModuleRelativePath", "Public/Player/Movement/FG_LocomotionComponent.h" },
		{ "ToolTip", "<summary>\nDisables the ability to latch onto walls for a duration.\n</summary>" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFG_LocomotionComponent_DisableWallClimb_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFG_LocomotionComponent, nullptr, "DisableWallClimb", nullptr, nullptr, sizeof(FG_LocomotionComponent_eventDisableWallClimb_Parms), Z_Construct_UFunction_UFG_LocomotionComponent_DisableWallClimb_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFG_LocomotionComponent_DisableWallClimb_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFG_LocomotionComponent_DisableWallClimb_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFG_LocomotionComponent_DisableWallClimb_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFG_LocomotionComponent_DisableWallClimb()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFG_LocomotionComponent_DisableWallClimb_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFG_LocomotionComponent_GetInputRelativeToCamera_Statics
	{
		struct FG_LocomotionComponent_eventGetInputRelativeToCamera_Parms
		{
			FVector InputVector;
			const USceneComponent* CameraTransform;
			FVector ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InputVector_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_InputVector;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CameraTransform_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CameraTransform;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFG_LocomotionComponent_GetInputRelativeToCamera_Statics::NewProp_InputVector_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFG_LocomotionComponent_GetInputRelativeToCamera_Statics::NewProp_InputVector = { "InputVector", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FG_LocomotionComponent_eventGetInputRelativeToCamera_Parms, InputVector), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UFunction_UFG_LocomotionComponent_GetInputRelativeToCamera_Statics::NewProp_InputVector_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UFG_LocomotionComponent_GetInputRelativeToCamera_Statics::NewProp_InputVector_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFG_LocomotionComponent_GetInputRelativeToCamera_Statics::NewProp_CameraTransform_MetaData[] = {
		{ "EditInline", "true" },
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UFG_LocomotionComponent_GetInputRelativeToCamera_Statics::NewProp_CameraTransform = { "CameraTransform", nullptr, (EPropertyFlags)0x0010000000080082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FG_LocomotionComponent_eventGetInputRelativeToCamera_Parms, CameraTransform), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UFG_LocomotionComponent_GetInputRelativeToCamera_Statics::NewProp_CameraTransform_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UFG_LocomotionComponent_GetInputRelativeToCamera_Statics::NewProp_CameraTransform_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFG_LocomotionComponent_GetInputRelativeToCamera_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FG_LocomotionComponent_eventGetInputRelativeToCamera_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFG_LocomotionComponent_GetInputRelativeToCamera_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFG_LocomotionComponent_GetInputRelativeToCamera_Statics::NewProp_InputVector,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFG_LocomotionComponent_GetInputRelativeToCamera_Statics::NewProp_CameraTransform,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFG_LocomotionComponent_GetInputRelativeToCamera_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFG_LocomotionComponent_GetInputRelativeToCamera_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/// <summary>\n/// Adjusts input to be relative to camera. This function shouldnt be in this class probabl\n/// NOW OBSELETE, USE THE ONE FROM INPUTSTATS INSTEAD\n/// </summary>\n" },
		{ "ModuleRelativePath", "Public/Player/Movement/FG_LocomotionComponent.h" },
		{ "ToolTip", "<summary>\nAdjusts input to be relative to camera. This function shouldnt be in this class probabl\nNOW OBSELETE, USE THE ONE FROM INPUTSTATS INSTEAD\n</summary>" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFG_LocomotionComponent_GetInputRelativeToCamera_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFG_LocomotionComponent, nullptr, "GetInputRelativeToCamera", nullptr, nullptr, sizeof(FG_LocomotionComponent_eventGetInputRelativeToCamera_Parms), Z_Construct_UFunction_UFG_LocomotionComponent_GetInputRelativeToCamera_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFG_LocomotionComponent_GetInputRelativeToCamera_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFG_LocomotionComponent_GetInputRelativeToCamera_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFG_LocomotionComponent_GetInputRelativeToCamera_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFG_LocomotionComponent_GetInputRelativeToCamera()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFG_LocomotionComponent_GetInputRelativeToCamera_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFG_LocomotionComponent_GetWallClimbNormal_Statics
	{
		struct FG_LocomotionComponent_eventGetWallClimbNormal_Parms
		{
			FVector ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFG_LocomotionComponent_GetWallClimbNormal_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FG_LocomotionComponent_eventGetWallClimbNormal_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFG_LocomotionComponent_GetWallClimbNormal_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFG_LocomotionComponent_GetWallClimbNormal_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFG_LocomotionComponent_GetWallClimbNormal_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/// <summary>\n/// Get the normal of the wall you last climbed on/is climbing on\n/// </summary>\n" },
		{ "ModuleRelativePath", "Public/Player/Movement/FG_LocomotionComponent.h" },
		{ "ToolTip", "<summary>\nGet the normal of the wall you last climbed on/is climbing on\n</summary>" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFG_LocomotionComponent_GetWallClimbNormal_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFG_LocomotionComponent, nullptr, "GetWallClimbNormal", nullptr, nullptr, sizeof(FG_LocomotionComponent_eventGetWallClimbNormal_Parms), Z_Construct_UFunction_UFG_LocomotionComponent_GetWallClimbNormal_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFG_LocomotionComponent_GetWallClimbNormal_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFG_LocomotionComponent_GetWallClimbNormal_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFG_LocomotionComponent_GetWallClimbNormal_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFG_LocomotionComponent_GetWallClimbNormal()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFG_LocomotionComponent_GetWallClimbNormal_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFG_LocomotionComponent_HandleClimbOnWallRAW_Statics
	{
		struct FG_LocomotionComponent_eventHandleClimbOnWallRAW_Parms
		{
			float WallHugForce;
			float WallClimbForce;
			float WallClimbMaxSpeed;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_WallHugForce;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_WallClimbForce;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_WallClimbMaxSpeed;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UFG_LocomotionComponent_HandleClimbOnWallRAW_Statics::NewProp_WallHugForce = { "WallHugForce", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FG_LocomotionComponent_eventHandleClimbOnWallRAW_Parms, WallHugForce), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UFG_LocomotionComponent_HandleClimbOnWallRAW_Statics::NewProp_WallClimbForce = { "WallClimbForce", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FG_LocomotionComponent_eventHandleClimbOnWallRAW_Parms, WallClimbForce), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UFG_LocomotionComponent_HandleClimbOnWallRAW_Statics::NewProp_WallClimbMaxSpeed = { "WallClimbMaxSpeed", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FG_LocomotionComponent_eventHandleClimbOnWallRAW_Parms, WallClimbMaxSpeed), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFG_LocomotionComponent_HandleClimbOnWallRAW_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFG_LocomotionComponent_HandleClimbOnWallRAW_Statics::NewProp_WallHugForce,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFG_LocomotionComponent_HandleClimbOnWallRAW_Statics::NewProp_WallClimbForce,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFG_LocomotionComponent_HandleClimbOnWallRAW_Statics::NewProp_WallClimbMaxSpeed,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFG_LocomotionComponent_HandleClimbOnWallRAW_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/// <summary>\n/// Handles Climbing up walls with the normal given from HangOnLedge\n/// </summary>\n" },
		{ "ModuleRelativePath", "Public/Player/Movement/FG_LocomotionComponent.h" },
		{ "ToolTip", "<summary>\nHandles Climbing up walls with the normal given from HangOnLedge\n</summary>" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFG_LocomotionComponent_HandleClimbOnWallRAW_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFG_LocomotionComponent, nullptr, "HandleClimbOnWallRAW", nullptr, nullptr, sizeof(FG_LocomotionComponent_eventHandleClimbOnWallRAW_Parms), Z_Construct_UFunction_UFG_LocomotionComponent_HandleClimbOnWallRAW_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFG_LocomotionComponent_HandleClimbOnWallRAW_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFG_LocomotionComponent_HandleClimbOnWallRAW_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFG_LocomotionComponent_HandleClimbOnWallRAW_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFG_LocomotionComponent_HandleClimbOnWallRAW()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFG_LocomotionComponent_HandleClimbOnWallRAW_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFG_LocomotionComponent_HangOnLedgeRAW_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFG_LocomotionComponent_HangOnLedgeRAW_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/// <summary>\n/// Hangs onto the ledge at the position which the IsLedgeVaultableRaw saved (Basically teleports and resets velocity onto the ledge\n/// </summary>\n" },
		{ "ModuleRelativePath", "Public/Player/Movement/FG_LocomotionComponent.h" },
		{ "ToolTip", "<summary>\nHangs onto the ledge at the position which the IsLedgeVaultableRaw saved (Basically teleports and resets velocity onto the ledge\n</summary>" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFG_LocomotionComponent_HangOnLedgeRAW_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFG_LocomotionComponent, nullptr, "HangOnLedgeRAW", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFG_LocomotionComponent_HangOnLedgeRAW_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFG_LocomotionComponent_HangOnLedgeRAW_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFG_LocomotionComponent_HangOnLedgeRAW()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFG_LocomotionComponent_HangOnLedgeRAW_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFG_LocomotionComponent_HasJustJumped_Statics
	{
		struct FG_LocomotionComponent_eventHasJustJumped_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UFG_LocomotionComponent_HasJustJumped_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((FG_LocomotionComponent_eventHasJustJumped_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UFG_LocomotionComponent_HasJustJumped_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FG_LocomotionComponent_eventHasJustJumped_Parms), &Z_Construct_UFunction_UFG_LocomotionComponent_HasJustJumped_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFG_LocomotionComponent_HasJustJumped_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFG_LocomotionComponent_HasJustJumped_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFG_LocomotionComponent_HasJustJumped_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Player/Movement/FG_LocomotionComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFG_LocomotionComponent_HasJustJumped_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFG_LocomotionComponent, nullptr, "HasJustJumped", nullptr, nullptr, sizeof(FG_LocomotionComponent_eventHasJustJumped_Parms), Z_Construct_UFunction_UFG_LocomotionComponent_HasJustJumped_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFG_LocomotionComponent_HasJustJumped_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFG_LocomotionComponent_HasJustJumped_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFG_LocomotionComponent_HasJustJumped_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFG_LocomotionComponent_HasJustJumped()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFG_LocomotionComponent_HasJustJumped_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFG_LocomotionComponent_Hover_Statics
	{
		struct FG_LocomotionComponent_eventHover_Parms
		{
			UFG_DA_HoverStats* HoverStats;
			TArray<FHitResult> hit;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_HoverStats;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_hit_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_hit;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UFG_LocomotionComponent_Hover_Statics::NewProp_HoverStats = { "HoverStats", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FG_LocomotionComponent_eventHover_Parms, HoverStats), Z_Construct_UClass_UFG_DA_HoverStats_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFG_LocomotionComponent_Hover_Statics::NewProp_hit_Inner = { "hit", nullptr, (EPropertyFlags)0x0000008000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UFG_LocomotionComponent_Hover_Statics::NewProp_hit = { "hit", nullptr, (EPropertyFlags)0x0010008000000180, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FG_LocomotionComponent_eventHover_Parms, hit), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UFG_LocomotionComponent_Hover_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((FG_LocomotionComponent_eventHover_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UFG_LocomotionComponent_Hover_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FG_LocomotionComponent_eventHover_Parms), &Z_Construct_UFunction_UFG_LocomotionComponent_Hover_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFG_LocomotionComponent_Hover_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFG_LocomotionComponent_Hover_Statics::NewProp_HoverStats,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFG_LocomotionComponent_Hover_Statics::NewProp_hit_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFG_LocomotionComponent_Hover_Statics::NewProp_hit,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFG_LocomotionComponent_Hover_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFG_LocomotionComponent_Hover_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/// <summary>\n/// Shoots a ray down and adds force to shape in order to hover Hoverdistance above the ground.\n/// Returns a bool if ray hit ground or not and sets bGrounded if it hits or not.\n/// </summary>\n" },
		{ "ModuleRelativePath", "Public/Player/Movement/FG_LocomotionComponent.h" },
		{ "ToolTip", "<summary>\nShoots a ray down and adds force to shape in order to hover Hoverdistance above the ground.\nReturns a bool if ray hit ground or not and sets bGrounded if it hits or not.\n</summary>" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFG_LocomotionComponent_Hover_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFG_LocomotionComponent, nullptr, "Hover", nullptr, nullptr, sizeof(FG_LocomotionComponent_eventHover_Parms), Z_Construct_UFunction_UFG_LocomotionComponent_Hover_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFG_LocomotionComponent_Hover_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFG_LocomotionComponent_Hover_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFG_LocomotionComponent_Hover_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFG_LocomotionComponent_Hover()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFG_LocomotionComponent_Hover_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFG_LocomotionComponent_HoverRAW_Statics
	{
		struct FG_LocomotionComponent_eventHoverRAW_Parms
		{
			float HoverDistance;
			float HoverRay;
			float HoverStrength;
			float HoverDamping;
			TArray<FHitResult> Hits;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_HoverDistance;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_HoverRay;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_HoverStrength;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_HoverDamping;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Hits_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Hits;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UFG_LocomotionComponent_HoverRAW_Statics::NewProp_HoverDistance = { "HoverDistance", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FG_LocomotionComponent_eventHoverRAW_Parms, HoverDistance), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UFG_LocomotionComponent_HoverRAW_Statics::NewProp_HoverRay = { "HoverRay", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FG_LocomotionComponent_eventHoverRAW_Parms, HoverRay), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UFG_LocomotionComponent_HoverRAW_Statics::NewProp_HoverStrength = { "HoverStrength", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FG_LocomotionComponent_eventHoverRAW_Parms, HoverStrength), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UFG_LocomotionComponent_HoverRAW_Statics::NewProp_HoverDamping = { "HoverDamping", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FG_LocomotionComponent_eventHoverRAW_Parms, HoverDamping), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFG_LocomotionComponent_HoverRAW_Statics::NewProp_Hits_Inner = { "Hits", nullptr, (EPropertyFlags)0x0000008000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UFG_LocomotionComponent_HoverRAW_Statics::NewProp_Hits = { "Hits", nullptr, (EPropertyFlags)0x0010008000000180, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FG_LocomotionComponent_eventHoverRAW_Parms, Hits), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UFG_LocomotionComponent_HoverRAW_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((FG_LocomotionComponent_eventHoverRAW_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UFG_LocomotionComponent_HoverRAW_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FG_LocomotionComponent_eventHoverRAW_Parms), &Z_Construct_UFunction_UFG_LocomotionComponent_HoverRAW_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFG_LocomotionComponent_HoverRAW_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFG_LocomotionComponent_HoverRAW_Statics::NewProp_HoverDistance,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFG_LocomotionComponent_HoverRAW_Statics::NewProp_HoverRay,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFG_LocomotionComponent_HoverRAW_Statics::NewProp_HoverStrength,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFG_LocomotionComponent_HoverRAW_Statics::NewProp_HoverDamping,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFG_LocomotionComponent_HoverRAW_Statics::NewProp_Hits_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFG_LocomotionComponent_HoverRAW_Statics::NewProp_Hits,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFG_LocomotionComponent_HoverRAW_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFG_LocomotionComponent_HoverRAW_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Player/Movement/FG_LocomotionComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFG_LocomotionComponent_HoverRAW_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFG_LocomotionComponent, nullptr, "HoverRAW", nullptr, nullptr, sizeof(FG_LocomotionComponent_eventHoverRAW_Parms), Z_Construct_UFunction_UFG_LocomotionComponent_HoverRAW_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFG_LocomotionComponent_HoverRAW_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFG_LocomotionComponent_HoverRAW_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFG_LocomotionComponent_HoverRAW_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFG_LocomotionComponent_HoverRAW()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFG_LocomotionComponent_HoverRAW_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFG_LocomotionComponent_IsLedgeVaultableRAW_Statics
	{
		struct FG_LocomotionComponent_eventIsLedgeVaultableRAW_Parms
		{
			FVector CheckDirection;
			float RayLength;
			float RayLengthUp;
			float RayLengthDown;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_CheckDirection;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_RayLength;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_RayLengthUp;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_RayLengthDown;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFG_LocomotionComponent_IsLedgeVaultableRAW_Statics::NewProp_CheckDirection = { "CheckDirection", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FG_LocomotionComponent_eventIsLedgeVaultableRAW_Parms, CheckDirection), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UFG_LocomotionComponent_IsLedgeVaultableRAW_Statics::NewProp_RayLength = { "RayLength", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FG_LocomotionComponent_eventIsLedgeVaultableRAW_Parms, RayLength), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UFG_LocomotionComponent_IsLedgeVaultableRAW_Statics::NewProp_RayLengthUp = { "RayLengthUp", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FG_LocomotionComponent_eventIsLedgeVaultableRAW_Parms, RayLengthUp), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UFG_LocomotionComponent_IsLedgeVaultableRAW_Statics::NewProp_RayLengthDown = { "RayLengthDown", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FG_LocomotionComponent_eventIsLedgeVaultableRAW_Parms, RayLengthDown), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UFG_LocomotionComponent_IsLedgeVaultableRAW_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((FG_LocomotionComponent_eventIsLedgeVaultableRAW_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UFG_LocomotionComponent_IsLedgeVaultableRAW_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FG_LocomotionComponent_eventIsLedgeVaultableRAW_Parms), &Z_Construct_UFunction_UFG_LocomotionComponent_IsLedgeVaultableRAW_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFG_LocomotionComponent_IsLedgeVaultableRAW_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFG_LocomotionComponent_IsLedgeVaultableRAW_Statics::NewProp_CheckDirection,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFG_LocomotionComponent_IsLedgeVaultableRAW_Statics::NewProp_RayLength,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFG_LocomotionComponent_IsLedgeVaultableRAW_Statics::NewProp_RayLengthUp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFG_LocomotionComponent_IsLedgeVaultableRAW_Statics::NewProp_RayLengthDown,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFG_LocomotionComponent_IsLedgeVaultableRAW_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFG_LocomotionComponent_IsLedgeVaultableRAW_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/// <summary>\n/// Checks if ledge in the check direction is valid. The ledgecheck is in the shape of a hook. Also saves the position for ledgehang and normal\n/// </summary>\n" },
		{ "ModuleRelativePath", "Public/Player/Movement/FG_LocomotionComponent.h" },
		{ "ToolTip", "<summary>\nChecks if ledge in the check direction is valid. The ledgecheck is in the shape of a hook. Also saves the position for ledgehang and normal\n</summary>" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFG_LocomotionComponent_IsLedgeVaultableRAW_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFG_LocomotionComponent, nullptr, "IsLedgeVaultableRAW", nullptr, nullptr, sizeof(FG_LocomotionComponent_eventIsLedgeVaultableRAW_Parms), Z_Construct_UFunction_UFG_LocomotionComponent_IsLedgeVaultableRAW_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFG_LocomotionComponent_IsLedgeVaultableRAW_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFG_LocomotionComponent_IsLedgeVaultableRAW_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFG_LocomotionComponent_IsLedgeVaultableRAW_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFG_LocomotionComponent_IsLedgeVaultableRAW()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFG_LocomotionComponent_IsLedgeVaultableRAW_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFG_LocomotionComponent_IsWallClimbableRAW_Statics
	{
		struct FG_LocomotionComponent_eventIsWallClimbableRAW_Parms
		{
			FVector CheckDirection;
			float RayLength;
			float WallLeanTreshold;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_CheckDirection;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_RayLength;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_WallLeanTreshold;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFG_LocomotionComponent_IsWallClimbableRAW_Statics::NewProp_CheckDirection = { "CheckDirection", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FG_LocomotionComponent_eventIsWallClimbableRAW_Parms, CheckDirection), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UFG_LocomotionComponent_IsWallClimbableRAW_Statics::NewProp_RayLength = { "RayLength", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FG_LocomotionComponent_eventIsWallClimbableRAW_Parms, RayLength), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UFG_LocomotionComponent_IsWallClimbableRAW_Statics::NewProp_WallLeanTreshold = { "WallLeanTreshold", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FG_LocomotionComponent_eventIsWallClimbableRAW_Parms, WallLeanTreshold), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UFG_LocomotionComponent_IsWallClimbableRAW_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((FG_LocomotionComponent_eventIsWallClimbableRAW_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UFG_LocomotionComponent_IsWallClimbableRAW_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FG_LocomotionComponent_eventIsWallClimbableRAW_Parms), &Z_Construct_UFunction_UFG_LocomotionComponent_IsWallClimbableRAW_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFG_LocomotionComponent_IsWallClimbableRAW_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFG_LocomotionComponent_IsWallClimbableRAW_Statics::NewProp_CheckDirection,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFG_LocomotionComponent_IsWallClimbableRAW_Statics::NewProp_RayLength,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFG_LocomotionComponent_IsWallClimbableRAW_Statics::NewProp_WallLeanTreshold,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFG_LocomotionComponent_IsWallClimbableRAW_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFG_LocomotionComponent_IsWallClimbableRAW_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/// <summary>\n/// Checks if wall in given direction is valid to climb on. WallLeanTreshold is a value between 1-0 how sharp the wall incline is allowed to be\n/// </summary>\n" },
		{ "ModuleRelativePath", "Public/Player/Movement/FG_LocomotionComponent.h" },
		{ "ToolTip", "<summary>\nChecks if wall in given direction is valid to climb on. WallLeanTreshold is a value between 1-0 how sharp the wall incline is allowed to be\n</summary>" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFG_LocomotionComponent_IsWallClimbableRAW_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFG_LocomotionComponent, nullptr, "IsWallClimbableRAW", nullptr, nullptr, sizeof(FG_LocomotionComponent_eventIsWallClimbableRAW_Parms), Z_Construct_UFunction_UFG_LocomotionComponent_IsWallClimbableRAW_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFG_LocomotionComponent_IsWallClimbableRAW_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFG_LocomotionComponent_IsWallClimbableRAW_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFG_LocomotionComponent_IsWallClimbableRAW_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFG_LocomotionComponent_IsWallClimbableRAW()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFG_LocomotionComponent_IsWallClimbableRAW_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFG_LocomotionComponent_Jump_Statics
	{
		struct FG_LocomotionComponent_eventJump_Parms
		{
			UFG_DA_JumpStats* JumpStats;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_JumpStats;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UFG_LocomotionComponent_Jump_Statics::NewProp_JumpStats = { "JumpStats", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FG_LocomotionComponent_eventJump_Parms, JumpStats), Z_Construct_UClass_UFG_DA_JumpStats_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFG_LocomotionComponent_Jump_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFG_LocomotionComponent_Jump_Statics::NewProp_JumpStats,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFG_LocomotionComponent_Jump_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/// <summary>\n/// Jumps. Also very momentarily disables floating\n/// </summary>\n" },
		{ "ModuleRelativePath", "Public/Player/Movement/FG_LocomotionComponent.h" },
		{ "ToolTip", "<summary>\nJumps. Also very momentarily disables floating\n</summary>" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFG_LocomotionComponent_Jump_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFG_LocomotionComponent, nullptr, "Jump", nullptr, nullptr, sizeof(FG_LocomotionComponent_eventJump_Parms), Z_Construct_UFunction_UFG_LocomotionComponent_Jump_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFG_LocomotionComponent_Jump_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFG_LocomotionComponent_Jump_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFG_LocomotionComponent_Jump_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFG_LocomotionComponent_Jump()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFG_LocomotionComponent_Jump_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFG_LocomotionComponent_JumpRAW_Statics
	{
		struct FG_LocomotionComponent_eventJumpRAW_Parms
		{
			float JumpForce;
			float RayDistance;
			float DisableFloatingTime;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_JumpForce;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_RayDistance;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DisableFloatingTime;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UFG_LocomotionComponent_JumpRAW_Statics::NewProp_JumpForce = { "JumpForce", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FG_LocomotionComponent_eventJumpRAW_Parms, JumpForce), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UFG_LocomotionComponent_JumpRAW_Statics::NewProp_RayDistance = { "RayDistance", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FG_LocomotionComponent_eventJumpRAW_Parms, RayDistance), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UFG_LocomotionComponent_JumpRAW_Statics::NewProp_DisableFloatingTime = { "DisableFloatingTime", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FG_LocomotionComponent_eventJumpRAW_Parms, DisableFloatingTime), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFG_LocomotionComponent_JumpRAW_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFG_LocomotionComponent_JumpRAW_Statics::NewProp_JumpForce,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFG_LocomotionComponent_JumpRAW_Statics::NewProp_RayDistance,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFG_LocomotionComponent_JumpRAW_Statics::NewProp_DisableFloatingTime,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFG_LocomotionComponent_JumpRAW_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Player/Movement/FG_LocomotionComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFG_LocomotionComponent_JumpRAW_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFG_LocomotionComponent, nullptr, "JumpRAW", nullptr, nullptr, sizeof(FG_LocomotionComponent_eventJumpRAW_Parms), Z_Construct_UFunction_UFG_LocomotionComponent_JumpRAW_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFG_LocomotionComponent_JumpRAW_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFG_LocomotionComponent_JumpRAW_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFG_LocomotionComponent_JumpRAW_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFG_LocomotionComponent_JumpRAW()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFG_LocomotionComponent_JumpRAW_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFG_LocomotionComponent_Move_Statics
	{
		struct FG_LocomotionComponent_eventMove_Parms
		{
			UFG_DA_InputStats* InputStats;
			UFG_DA_MoveStats* MoveStats;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_InputStats;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_MoveStats;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UFG_LocomotionComponent_Move_Statics::NewProp_InputStats = { "InputStats", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FG_LocomotionComponent_eventMove_Parms, InputStats), Z_Construct_UClass_UFG_DA_InputStats_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UFG_LocomotionComponent_Move_Statics::NewProp_MoveStats = { "MoveStats", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FG_LocomotionComponent_eventMove_Parms, MoveStats), Z_Construct_UClass_UFG_DA_MoveStats_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFG_LocomotionComponent_Move_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFG_LocomotionComponent_Move_Statics::NewProp_InputStats,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFG_LocomotionComponent_Move_Statics::NewProp_MoveStats,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFG_LocomotionComponent_Move_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/// <summary>\n/// Adds force to the player with given input vector with said acceleration and disallows adding more than MaxSpeed with said speed\n/// </summary>\n" },
		{ "ModuleRelativePath", "Public/Player/Movement/FG_LocomotionComponent.h" },
		{ "ToolTip", "<summary>\nAdds force to the player with given input vector with said acceleration and disallows adding more than MaxSpeed with said speed\n</summary>" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFG_LocomotionComponent_Move_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFG_LocomotionComponent, nullptr, "Move", nullptr, nullptr, sizeof(FG_LocomotionComponent_eventMove_Parms), Z_Construct_UFunction_UFG_LocomotionComponent_Move_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFG_LocomotionComponent_Move_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFG_LocomotionComponent_Move_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFG_LocomotionComponent_Move_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFG_LocomotionComponent_Move()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFG_LocomotionComponent_Move_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFG_LocomotionComponent_MoveRAW_Statics
	{
		struct FG_LocomotionComponent_eventMoveRAW_Parms
		{
			FVector InputVector;
			float Acceleration;
			float MaxSpeed;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_InputVector;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Acceleration;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MaxSpeed;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFG_LocomotionComponent_MoveRAW_Statics::NewProp_InputVector = { "InputVector", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FG_LocomotionComponent_eventMoveRAW_Parms, InputVector), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UFG_LocomotionComponent_MoveRAW_Statics::NewProp_Acceleration = { "Acceleration", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FG_LocomotionComponent_eventMoveRAW_Parms, Acceleration), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UFG_LocomotionComponent_MoveRAW_Statics::NewProp_MaxSpeed = { "MaxSpeed", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FG_LocomotionComponent_eventMoveRAW_Parms, MaxSpeed), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFG_LocomotionComponent_MoveRAW_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFG_LocomotionComponent_MoveRAW_Statics::NewProp_InputVector,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFG_LocomotionComponent_MoveRAW_Statics::NewProp_Acceleration,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFG_LocomotionComponent_MoveRAW_Statics::NewProp_MaxSpeed,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFG_LocomotionComponent_MoveRAW_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Player/Movement/FG_LocomotionComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFG_LocomotionComponent_MoveRAW_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFG_LocomotionComponent, nullptr, "MoveRAW", nullptr, nullptr, sizeof(FG_LocomotionComponent_eventMoveRAW_Parms), Z_Construct_UFunction_UFG_LocomotionComponent_MoveRAW_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFG_LocomotionComponent_MoveRAW_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFG_LocomotionComponent_MoveRAW_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFG_LocomotionComponent_MoveRAW_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFG_LocomotionComponent_MoveRAW()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFG_LocomotionComponent_MoveRAW_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFG_LocomotionComponent_MoveWithFriction_Statics
	{
		struct FG_LocomotionComponent_eventMoveWithFriction_Parms
		{
			UFG_DA_InputStats* InputStats;
			UFG_DA_MoveStats* MoveStats;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_InputStats;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_MoveStats;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UFG_LocomotionComponent_MoveWithFriction_Statics::NewProp_InputStats = { "InputStats", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FG_LocomotionComponent_eventMoveWithFriction_Parms, InputStats), Z_Construct_UClass_UFG_DA_InputStats_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UFG_LocomotionComponent_MoveWithFriction_Statics::NewProp_MoveStats = { "MoveStats", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FG_LocomotionComponent_eventMoveWithFriction_Parms, MoveStats), Z_Construct_UClass_UFG_DA_MoveStats_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFG_LocomotionComponent_MoveWithFriction_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFG_LocomotionComponent_MoveWithFriction_Statics::NewProp_InputStats,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFG_LocomotionComponent_MoveWithFriction_Statics::NewProp_MoveStats,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFG_LocomotionComponent_MoveWithFriction_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/// <summary>\n/// Moves and applies friction\n/// </summary>\n" },
		{ "ModuleRelativePath", "Public/Player/Movement/FG_LocomotionComponent.h" },
		{ "ToolTip", "<summary>\nMoves and applies friction\n</summary>" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFG_LocomotionComponent_MoveWithFriction_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFG_LocomotionComponent, nullptr, "MoveWithFriction", nullptr, nullptr, sizeof(FG_LocomotionComponent_eventMoveWithFriction_Parms), Z_Construct_UFunction_UFG_LocomotionComponent_MoveWithFriction_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFG_LocomotionComponent_MoveWithFriction_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFG_LocomotionComponent_MoveWithFriction_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFG_LocomotionComponent_MoveWithFriction_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFG_LocomotionComponent_MoveWithFriction()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFG_LocomotionComponent_MoveWithFriction_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFG_LocomotionComponent_RotatePlayerRAW_Statics
	{
		struct FG_LocomotionComponent_eventRotatePlayerRAW_Parms
		{
			FVector Direction;
			float RotationSpeed;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Direction;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_RotationSpeed;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFG_LocomotionComponent_RotatePlayerRAW_Statics::NewProp_Direction = { "Direction", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FG_LocomotionComponent_eventRotatePlayerRAW_Parms, Direction), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UFG_LocomotionComponent_RotatePlayerRAW_Statics::NewProp_RotationSpeed = { "RotationSpeed", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FG_LocomotionComponent_eventRotatePlayerRAW_Parms, RotationSpeed), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFG_LocomotionComponent_RotatePlayerRAW_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFG_LocomotionComponent_RotatePlayerRAW_Statics::NewProp_Direction,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFG_LocomotionComponent_RotatePlayerRAW_Statics::NewProp_RotationSpeed,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFG_LocomotionComponent_RotatePlayerRAW_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Player/Movement/FG_LocomotionComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFG_LocomotionComponent_RotatePlayerRAW_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFG_LocomotionComponent, nullptr, "RotatePlayerRAW", nullptr, nullptr, sizeof(FG_LocomotionComponent_eventRotatePlayerRAW_Parms), Z_Construct_UFunction_UFG_LocomotionComponent_RotatePlayerRAW_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFG_LocomotionComponent_RotatePlayerRAW_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFG_LocomotionComponent_RotatePlayerRAW_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFG_LocomotionComponent_RotatePlayerRAW_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFG_LocomotionComponent_RotatePlayerRAW()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFG_LocomotionComponent_RotatePlayerRAW_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFG_LocomotionComponent_SaveLedgeGrabbablePosition_Statics
	{
		struct FG_LocomotionComponent_eventSaveLedgeGrabbablePosition_Parms
		{
			FVector CheckDirection;
			UFG_DA_LedgevaultStats* LedgeStats;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_CheckDirection;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_LedgeStats;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFG_LocomotionComponent_SaveLedgeGrabbablePosition_Statics::NewProp_CheckDirection = { "CheckDirection", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FG_LocomotionComponent_eventSaveLedgeGrabbablePosition_Parms, CheckDirection), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UFG_LocomotionComponent_SaveLedgeGrabbablePosition_Statics::NewProp_LedgeStats = { "LedgeStats", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FG_LocomotionComponent_eventSaveLedgeGrabbablePosition_Parms, LedgeStats), Z_Construct_UClass_UFG_DA_LedgevaultStats_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFG_LocomotionComponent_SaveLedgeGrabbablePosition_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFG_LocomotionComponent_SaveLedgeGrabbablePosition_Statics::NewProp_CheckDirection,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFG_LocomotionComponent_SaveLedgeGrabbablePosition_Statics::NewProp_LedgeStats,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFG_LocomotionComponent_SaveLedgeGrabbablePosition_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/// <summary>\n/// Saves the ledge normal and position which is used when Hanging on the ledge.\n/// </summary>\n" },
		{ "ModuleRelativePath", "Public/Player/Movement/FG_LocomotionComponent.h" },
		{ "ToolTip", "<summary>\nSaves the ledge normal and position which is used when Hanging on the ledge.\n</summary>" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFG_LocomotionComponent_SaveLedgeGrabbablePosition_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFG_LocomotionComponent, nullptr, "SaveLedgeGrabbablePosition", nullptr, nullptr, sizeof(FG_LocomotionComponent_eventSaveLedgeGrabbablePosition_Parms), Z_Construct_UFunction_UFG_LocomotionComponent_SaveLedgeGrabbablePosition_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFG_LocomotionComponent_SaveLedgeGrabbablePosition_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFG_LocomotionComponent_SaveLedgeGrabbablePosition_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFG_LocomotionComponent_SaveLedgeGrabbablePosition_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFG_LocomotionComponent_SaveLedgeGrabbablePosition()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFG_LocomotionComponent_SaveLedgeGrabbablePosition_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UFG_LocomotionComponent_NoRegister()
	{
		return UFG_LocomotionComponent::StaticClass();
	}
	struct Z_Construct_UClass_UFG_LocomotionComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PlatformCollisionChannelEnum_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_PlatformCollisionChannelEnum;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_VisualShape_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_VisualShape;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WallClimbLength_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_WallClimbLength;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GroundInclineTreshold_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_GroundInclineTreshold;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LedgeInclineTreshold_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_LedgeInclineTreshold;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bGrounded_MetaData[];
#endif
		static void NewProp_bGrounded_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bGrounded;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Shape_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Shape;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UFG_LocomotionComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_gp3_team01,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UFG_LocomotionComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UFG_LocomotionComponent_ApplyFriction, "ApplyFriction" }, // 3099492107
		{ &Z_Construct_UFunction_UFG_LocomotionComponent_ApplyFrictionRAW, "ApplyFrictionRAW" }, // 664976611
		{ &Z_Construct_UFunction_UFG_LocomotionComponent_CheckTouching, "CheckTouching" }, // 971409022
		{ &Z_Construct_UFunction_UFG_LocomotionComponent_DisableFloat, "DisableFloat" }, // 2711011320
		{ &Z_Construct_UFunction_UFG_LocomotionComponent_DisableLedgeGrab, "DisableLedgeGrab" }, // 2655778228
		{ &Z_Construct_UFunction_UFG_LocomotionComponent_DisableWallClimb, "DisableWallClimb" }, // 2170579150
		{ &Z_Construct_UFunction_UFG_LocomotionComponent_GetInputRelativeToCamera, "GetInputRelativeToCamera" }, // 957005237
		{ &Z_Construct_UFunction_UFG_LocomotionComponent_GetWallClimbNormal, "GetWallClimbNormal" }, // 2918719073
		{ &Z_Construct_UFunction_UFG_LocomotionComponent_HandleClimbOnWallRAW, "HandleClimbOnWallRAW" }, // 1784377179
		{ &Z_Construct_UFunction_UFG_LocomotionComponent_HangOnLedgeRAW, "HangOnLedgeRAW" }, // 1363080109
		{ &Z_Construct_UFunction_UFG_LocomotionComponent_HasJustJumped, "HasJustJumped" }, // 1995063324
		{ &Z_Construct_UFunction_UFG_LocomotionComponent_Hover, "Hover" }, // 3899834642
		{ &Z_Construct_UFunction_UFG_LocomotionComponent_HoverRAW, "HoverRAW" }, // 2187975127
		{ &Z_Construct_UFunction_UFG_LocomotionComponent_IsLedgeVaultableRAW, "IsLedgeVaultableRAW" }, // 1565391343
		{ &Z_Construct_UFunction_UFG_LocomotionComponent_IsWallClimbableRAW, "IsWallClimbableRAW" }, // 3503575942
		{ &Z_Construct_UFunction_UFG_LocomotionComponent_Jump, "Jump" }, // 2224318136
		{ &Z_Construct_UFunction_UFG_LocomotionComponent_JumpRAW, "JumpRAW" }, // 3005313062
		{ &Z_Construct_UFunction_UFG_LocomotionComponent_Move, "Move" }, // 108209096
		{ &Z_Construct_UFunction_UFG_LocomotionComponent_MoveRAW, "MoveRAW" }, // 1840745469
		{ &Z_Construct_UFunction_UFG_LocomotionComponent_MoveWithFriction, "MoveWithFriction" }, // 4230610892
		{ &Z_Construct_UFunction_UFG_LocomotionComponent_RotatePlayerRAW, "RotatePlayerRAW" }, // 844371959
		{ &Z_Construct_UFunction_UFG_LocomotionComponent_SaveLedgeGrabbablePosition, "SaveLedgeGrabbablePosition" }, // 171463949
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFG_LocomotionComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "Player/Movement/FG_LocomotionComponent.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Player/Movement/FG_LocomotionComponent.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFG_LocomotionComponent_Statics::NewProp_PlatformCollisionChannelEnum_MetaData[] = {
		{ "Category", "FG_LocomotionComponent" },
		{ "Comment", "//Set this to MovingPlatforms\n" },
		{ "ModuleRelativePath", "Public/Player/Movement/FG_LocomotionComponent.h" },
		{ "ToolTip", "Set this to MovingPlatforms" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UFG_LocomotionComponent_Statics::NewProp_PlatformCollisionChannelEnum = { "PlatformCollisionChannelEnum", nullptr, (EPropertyFlags)0x0010000000010001, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFG_LocomotionComponent, PlatformCollisionChannelEnum), Z_Construct_UEnum_Engine_ECollisionChannel, METADATA_PARAMS(Z_Construct_UClass_UFG_LocomotionComponent_Statics::NewProp_PlatformCollisionChannelEnum_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFG_LocomotionComponent_Statics::NewProp_PlatformCollisionChannelEnum_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFG_LocomotionComponent_Statics::NewProp_VisualShape_MetaData[] = {
		{ "Category", "FG_LocomotionComponent" },
		{ "Comment", "//This is what the player mesh will be parented to\n" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Player/Movement/FG_LocomotionComponent.h" },
		{ "ToolTip", "This is what the player mesh will be parented to" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UFG_LocomotionComponent_Statics::NewProp_VisualShape = { "VisualShape", nullptr, (EPropertyFlags)0x001000000009000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFG_LocomotionComponent, VisualShape), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UFG_LocomotionComponent_Statics::NewProp_VisualShape_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFG_LocomotionComponent_Statics::NewProp_VisualShape_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFG_LocomotionComponent_Statics::NewProp_WallClimbLength_MetaData[] = {
		{ "Category", "FG_LocomotionComponent" },
		{ "Comment", "//How long can you climb. This should really be in the data asset buuut I'm lazy\n" },
		{ "ModuleRelativePath", "Public/Player/Movement/FG_LocomotionComponent.h" },
		{ "ToolTip", "How long can you climb. This should really be in the data asset buuut I'm lazy" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UFG_LocomotionComponent_Statics::NewProp_WallClimbLength = { "WallClimbLength", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFG_LocomotionComponent, WallClimbLength), METADATA_PARAMS(Z_Construct_UClass_UFG_LocomotionComponent_Statics::NewProp_WallClimbLength_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFG_LocomotionComponent_Statics::NewProp_WallClimbLength_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFG_LocomotionComponent_Statics::NewProp_GroundInclineTreshold_MetaData[] = {
		{ "Category", "FG_LocomotionComponent" },
		{ "ModuleRelativePath", "Public/Player/Movement/FG_LocomotionComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UFG_LocomotionComponent_Statics::NewProp_GroundInclineTreshold = { "GroundInclineTreshold", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFG_LocomotionComponent, GroundInclineTreshold), METADATA_PARAMS(Z_Construct_UClass_UFG_LocomotionComponent_Statics::NewProp_GroundInclineTreshold_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFG_LocomotionComponent_Statics::NewProp_GroundInclineTreshold_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFG_LocomotionComponent_Statics::NewProp_LedgeInclineTreshold_MetaData[] = {
		{ "Category", "FG_LocomotionComponent" },
		{ "ModuleRelativePath", "Public/Player/Movement/FG_LocomotionComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UFG_LocomotionComponent_Statics::NewProp_LedgeInclineTreshold = { "LedgeInclineTreshold", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFG_LocomotionComponent, LedgeInclineTreshold), METADATA_PARAMS(Z_Construct_UClass_UFG_LocomotionComponent_Statics::NewProp_LedgeInclineTreshold_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFG_LocomotionComponent_Statics::NewProp_LedgeInclineTreshold_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFG_LocomotionComponent_Statics::NewProp_bGrounded_MetaData[] = {
		{ "Category", "FG_LocomotionComponent" },
		{ "ModuleRelativePath", "Public/Player/Movement/FG_LocomotionComponent.h" },
	};
#endif
	void Z_Construct_UClass_UFG_LocomotionComponent_Statics::NewProp_bGrounded_SetBit(void* Obj)
	{
		((UFG_LocomotionComponent*)Obj)->bGrounded = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UFG_LocomotionComponent_Statics::NewProp_bGrounded = { "bGrounded", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UFG_LocomotionComponent), &Z_Construct_UClass_UFG_LocomotionComponent_Statics::NewProp_bGrounded_SetBit, METADATA_PARAMS(Z_Construct_UClass_UFG_LocomotionComponent_Statics::NewProp_bGrounded_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFG_LocomotionComponent_Statics::NewProp_bGrounded_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFG_LocomotionComponent_Statics::NewProp_Shape_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Player/Movement/FG_LocomotionComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UFG_LocomotionComponent_Statics::NewProp_Shape = { "Shape", nullptr, (EPropertyFlags)0x0040000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFG_LocomotionComponent, Shape), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UFG_LocomotionComponent_Statics::NewProp_Shape_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFG_LocomotionComponent_Statics::NewProp_Shape_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UFG_LocomotionComponent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFG_LocomotionComponent_Statics::NewProp_PlatformCollisionChannelEnum,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFG_LocomotionComponent_Statics::NewProp_VisualShape,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFG_LocomotionComponent_Statics::NewProp_WallClimbLength,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFG_LocomotionComponent_Statics::NewProp_GroundInclineTreshold,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFG_LocomotionComponent_Statics::NewProp_LedgeInclineTreshold,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFG_LocomotionComponent_Statics::NewProp_bGrounded,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFG_LocomotionComponent_Statics::NewProp_Shape,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UFG_LocomotionComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UFG_LocomotionComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UFG_LocomotionComponent_Statics::ClassParams = {
		&UFG_LocomotionComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UFG_LocomotionComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UFG_LocomotionComponent_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UFG_LocomotionComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UFG_LocomotionComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UFG_LocomotionComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UFG_LocomotionComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UFG_LocomotionComponent, 755064561);
	template<> GP3_TEAM01_API UClass* StaticClass<UFG_LocomotionComponent>()
	{
		return UFG_LocomotionComponent::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UFG_LocomotionComponent(Z_Construct_UClass_UFG_LocomotionComponent, &UFG_LocomotionComponent::StaticClass, TEXT("/Script/gp3_team01"), TEXT("UFG_LocomotionComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UFG_LocomotionComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
