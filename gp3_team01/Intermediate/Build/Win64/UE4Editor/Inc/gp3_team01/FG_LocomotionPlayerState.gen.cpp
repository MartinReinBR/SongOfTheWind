// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "gp3_team01/Public/Player/States/Core/FG_LocomotionPlayerState.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFG_LocomotionPlayerState() {}
// Cross Module References
	GP3_TEAM01_API UClass* Z_Construct_UClass_UFG_LocomotionPlayerState_NoRegister();
	GP3_TEAM01_API UClass* Z_Construct_UClass_UFG_LocomotionPlayerState();
	GP3_TEAM01_API UClass* Z_Construct_UClass_UFG_PlayerState();
	UPackage* Z_Construct_UPackage__Script_gp3_team01();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FHitResult();
	GP3_TEAM01_API UClass* Z_Construct_UClass_AFG_PlayerCharacter_NoRegister();
	GP3_TEAM01_API UClass* Z_Construct_UClass_UFG_SFSM_NoRegister();
	GP3_TEAM01_API UClass* Z_Construct_UClass_UFG_LocomotionIdleSubState_NoRegister();
	GP3_TEAM01_API UClass* Z_Construct_UClass_UFG_LocomotionMovingSubState_NoRegister();
	GP3_TEAM01_API UClass* Z_Construct_UClass_UFG_LocomotionJumpingSubState_NoRegister();
	GP3_TEAM01_API UClass* Z_Construct_UClass_UFG_LocomotionAirborneSubState_NoRegister();
	GP3_TEAM01_API UClass* Z_Construct_UClass_UFG_LocomotionAirJumpSubState_NoRegister();
	GP3_TEAM01_API UClass* Z_Construct_UClass_UFG_LocomotionLedgevaultSubState_NoRegister();
	GP3_TEAM01_API UClass* Z_Construct_UClass_UFG_LocomotionWallclimbSubState_NoRegister();
	GP3_TEAM01_API UClass* Z_Construct_UClass_UFG_DA_Instrument_NoRegister();
	GP3_TEAM01_API UClass* Z_Construct_UClass_UInstrumentChord_NoRegister();
	GP3_TEAM01_API UClass* Z_Construct_UClass_UFG_InstrumentComponent_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UFG_LocomotionPlayerState::execShouldStartJump)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->ShouldStartJump();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UFG_LocomotionPlayerState::execIsCoyoteGrounded)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsCoyoteGrounded();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UFG_LocomotionPlayerState::execIsGrounded)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsGrounded();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UFG_LocomotionPlayerState::execIsGroundedWithResult)
	{
		P_GET_TARRAY_REF(FHitResult,Z_Param_Out_OutHit);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsGroundedWithResult(Z_Param_Out_OutHit);
		P_NATIVE_END;
	}
	static FName NAME_UFG_LocomotionPlayerState_OnPlayerLand = FName(TEXT("OnPlayerLand"));
	void UFG_LocomotionPlayerState::OnPlayerLand(AFG_PlayerCharacter* PlayerCharacter)
	{
		FG_LocomotionPlayerState_eventOnPlayerLand_Parms Parms;
		Parms.PlayerCharacter=PlayerCharacter;
		ProcessEvent(FindFunctionChecked(NAME_UFG_LocomotionPlayerState_OnPlayerLand),&Parms);
	}
	void UFG_LocomotionPlayerState::StaticRegisterNativesUFG_LocomotionPlayerState()
	{
		UClass* Class = UFG_LocomotionPlayerState::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "IsCoyoteGrounded", &UFG_LocomotionPlayerState::execIsCoyoteGrounded },
			{ "IsGrounded", &UFG_LocomotionPlayerState::execIsGrounded },
			{ "IsGroundedWithResult", &UFG_LocomotionPlayerState::execIsGroundedWithResult },
			{ "ShouldStartJump", &UFG_LocomotionPlayerState::execShouldStartJump },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UFG_LocomotionPlayerState_IsCoyoteGrounded_Statics
	{
		struct FG_LocomotionPlayerState_eventIsCoyoteGrounded_Parms
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
	void Z_Construct_UFunction_UFG_LocomotionPlayerState_IsCoyoteGrounded_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((FG_LocomotionPlayerState_eventIsCoyoteGrounded_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UFG_LocomotionPlayerState_IsCoyoteGrounded_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FG_LocomotionPlayerState_eventIsCoyoteGrounded_Parms), &Z_Construct_UFunction_UFG_LocomotionPlayerState_IsCoyoteGrounded_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFG_LocomotionPlayerState_IsCoyoteGrounded_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFG_LocomotionPlayerState_IsCoyoteGrounded_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFG_LocomotionPlayerState_IsCoyoteGrounded_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Player/States/Core/FG_LocomotionPlayerState.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFG_LocomotionPlayerState_IsCoyoteGrounded_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFG_LocomotionPlayerState, nullptr, "IsCoyoteGrounded", nullptr, nullptr, sizeof(FG_LocomotionPlayerState_eventIsCoyoteGrounded_Parms), Z_Construct_UFunction_UFG_LocomotionPlayerState_IsCoyoteGrounded_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFG_LocomotionPlayerState_IsCoyoteGrounded_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFG_LocomotionPlayerState_IsCoyoteGrounded_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFG_LocomotionPlayerState_IsCoyoteGrounded_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFG_LocomotionPlayerState_IsCoyoteGrounded()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFG_LocomotionPlayerState_IsCoyoteGrounded_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFG_LocomotionPlayerState_IsGrounded_Statics
	{
		struct FG_LocomotionPlayerState_eventIsGrounded_Parms
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
	void Z_Construct_UFunction_UFG_LocomotionPlayerState_IsGrounded_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((FG_LocomotionPlayerState_eventIsGrounded_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UFG_LocomotionPlayerState_IsGrounded_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FG_LocomotionPlayerState_eventIsGrounded_Parms), &Z_Construct_UFunction_UFG_LocomotionPlayerState_IsGrounded_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFG_LocomotionPlayerState_IsGrounded_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFG_LocomotionPlayerState_IsGrounded_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFG_LocomotionPlayerState_IsGrounded_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Player/States/Core/FG_LocomotionPlayerState.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFG_LocomotionPlayerState_IsGrounded_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFG_LocomotionPlayerState, nullptr, "IsGrounded", nullptr, nullptr, sizeof(FG_LocomotionPlayerState_eventIsGrounded_Parms), Z_Construct_UFunction_UFG_LocomotionPlayerState_IsGrounded_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFG_LocomotionPlayerState_IsGrounded_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFG_LocomotionPlayerState_IsGrounded_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFG_LocomotionPlayerState_IsGrounded_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFG_LocomotionPlayerState_IsGrounded()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFG_LocomotionPlayerState_IsGrounded_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFG_LocomotionPlayerState_IsGroundedWithResult_Statics
	{
		struct FG_LocomotionPlayerState_eventIsGroundedWithResult_Parms
		{
			TArray<FHitResult> OutHit;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_OutHit_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_OutHit;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFG_LocomotionPlayerState_IsGroundedWithResult_Statics::NewProp_OutHit_Inner = { "OutHit", nullptr, (EPropertyFlags)0x0000008000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UFG_LocomotionPlayerState_IsGroundedWithResult_Statics::NewProp_OutHit = { "OutHit", nullptr, (EPropertyFlags)0x0010008000000180, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FG_LocomotionPlayerState_eventIsGroundedWithResult_Parms, OutHit), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UFG_LocomotionPlayerState_IsGroundedWithResult_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((FG_LocomotionPlayerState_eventIsGroundedWithResult_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UFG_LocomotionPlayerState_IsGroundedWithResult_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FG_LocomotionPlayerState_eventIsGroundedWithResult_Parms), &Z_Construct_UFunction_UFG_LocomotionPlayerState_IsGroundedWithResult_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFG_LocomotionPlayerState_IsGroundedWithResult_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFG_LocomotionPlayerState_IsGroundedWithResult_Statics::NewProp_OutHit_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFG_LocomotionPlayerState_IsGroundedWithResult_Statics::NewProp_OutHit,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFG_LocomotionPlayerState_IsGroundedWithResult_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFG_LocomotionPlayerState_IsGroundedWithResult_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Player/States/Core/FG_LocomotionPlayerState.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFG_LocomotionPlayerState_IsGroundedWithResult_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFG_LocomotionPlayerState, nullptr, "IsGroundedWithResult", nullptr, nullptr, sizeof(FG_LocomotionPlayerState_eventIsGroundedWithResult_Parms), Z_Construct_UFunction_UFG_LocomotionPlayerState_IsGroundedWithResult_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFG_LocomotionPlayerState_IsGroundedWithResult_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFG_LocomotionPlayerState_IsGroundedWithResult_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFG_LocomotionPlayerState_IsGroundedWithResult_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFG_LocomotionPlayerState_IsGroundedWithResult()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFG_LocomotionPlayerState_IsGroundedWithResult_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFG_LocomotionPlayerState_OnPlayerLand_Statics
	{
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PlayerCharacter;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UFG_LocomotionPlayerState_OnPlayerLand_Statics::NewProp_PlayerCharacter = { "PlayerCharacter", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FG_LocomotionPlayerState_eventOnPlayerLand_Parms, PlayerCharacter), Z_Construct_UClass_AFG_PlayerCharacter_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFG_LocomotionPlayerState_OnPlayerLand_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFG_LocomotionPlayerState_OnPlayerLand_Statics::NewProp_PlayerCharacter,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFG_LocomotionPlayerState_OnPlayerLand_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Player/States/Core/FG_LocomotionPlayerState.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFG_LocomotionPlayerState_OnPlayerLand_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFG_LocomotionPlayerState, nullptr, "OnPlayerLand", nullptr, nullptr, sizeof(FG_LocomotionPlayerState_eventOnPlayerLand_Parms), Z_Construct_UFunction_UFG_LocomotionPlayerState_OnPlayerLand_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFG_LocomotionPlayerState_OnPlayerLand_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFG_LocomotionPlayerState_OnPlayerLand_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFG_LocomotionPlayerState_OnPlayerLand_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFG_LocomotionPlayerState_OnPlayerLand()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFG_LocomotionPlayerState_OnPlayerLand_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFG_LocomotionPlayerState_ShouldStartJump_Statics
	{
		struct FG_LocomotionPlayerState_eventShouldStartJump_Parms
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
	void Z_Construct_UFunction_UFG_LocomotionPlayerState_ShouldStartJump_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((FG_LocomotionPlayerState_eventShouldStartJump_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UFG_LocomotionPlayerState_ShouldStartJump_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FG_LocomotionPlayerState_eventShouldStartJump_Parms), &Z_Construct_UFunction_UFG_LocomotionPlayerState_ShouldStartJump_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFG_LocomotionPlayerState_ShouldStartJump_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFG_LocomotionPlayerState_ShouldStartJump_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFG_LocomotionPlayerState_ShouldStartJump_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Player/States/Core/FG_LocomotionPlayerState.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFG_LocomotionPlayerState_ShouldStartJump_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFG_LocomotionPlayerState, nullptr, "ShouldStartJump", nullptr, nullptr, sizeof(FG_LocomotionPlayerState_eventShouldStartJump_Parms), Z_Construct_UFunction_UFG_LocomotionPlayerState_ShouldStartJump_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFG_LocomotionPlayerState_ShouldStartJump_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFG_LocomotionPlayerState_ShouldStartJump_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFG_LocomotionPlayerState_ShouldStartJump_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFG_LocomotionPlayerState_ShouldStartJump()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFG_LocomotionPlayerState_ShouldStartJump_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UFG_LocomotionPlayerState_NoRegister()
	{
		return UFG_LocomotionPlayerState::StaticClass();
	}
	struct Z_Construct_UClass_UFG_LocomotionPlayerState_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SubStateMachine_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SubStateMachine;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LocomotionIdleSubState_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_LocomotionIdleSubState;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LocomotionMovingSubState_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_LocomotionMovingSubState;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LocomotionJumpingSubState_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_LocomotionJumpingSubState;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LocomotionAirborneSubState_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_LocomotionAirborneSubState;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LocomotionAirJumpSubState_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_LocomotionAirJumpSubState;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LocomotionLedgevaultSubState_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_LocomotionLedgevaultSubState;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LocomotionWallclimbSubState_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_LocomotionWallclimbSubState;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Instrument_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Instrument;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Bells_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Bells;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CurrentChord_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CurrentChord;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InstrumentHandler_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_InstrumentHandler;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UFG_LocomotionPlayerState_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UFG_PlayerState,
		(UObject* (*)())Z_Construct_UPackage__Script_gp3_team01,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UFG_LocomotionPlayerState_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UFG_LocomotionPlayerState_IsCoyoteGrounded, "IsCoyoteGrounded" }, // 801472767
		{ &Z_Construct_UFunction_UFG_LocomotionPlayerState_IsGrounded, "IsGrounded" }, // 2071288163
		{ &Z_Construct_UFunction_UFG_LocomotionPlayerState_IsGroundedWithResult, "IsGroundedWithResult" }, // 692884359
		{ &Z_Construct_UFunction_UFG_LocomotionPlayerState_OnPlayerLand, "OnPlayerLand" }, // 1066085081
		{ &Z_Construct_UFunction_UFG_LocomotionPlayerState_ShouldStartJump, "ShouldStartJump" }, // 955986907
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFG_LocomotionPlayerState_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "Player/States/Core/FG_LocomotionPlayerState.h" },
		{ "ModuleRelativePath", "Public/Player/States/Core/FG_LocomotionPlayerState.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFG_LocomotionPlayerState_Statics::NewProp_SubStateMachine_MetaData[] = {
		{ "Category", "FG_LocomotionPlayerState" },
		{ "ModuleRelativePath", "Public/Player/States/Core/FG_LocomotionPlayerState.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UFG_LocomotionPlayerState_Statics::NewProp_SubStateMachine = { "SubStateMachine", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFG_LocomotionPlayerState, SubStateMachine), Z_Construct_UClass_UFG_SFSM_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UFG_LocomotionPlayerState_Statics::NewProp_SubStateMachine_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFG_LocomotionPlayerState_Statics::NewProp_SubStateMachine_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFG_LocomotionPlayerState_Statics::NewProp_LocomotionIdleSubState_MetaData[] = {
		{ "Category", "FG_LocomotionPlayerState" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Player/States/Core/FG_LocomotionPlayerState.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UFG_LocomotionPlayerState_Statics::NewProp_LocomotionIdleSubState = { "LocomotionIdleSubState", nullptr, (EPropertyFlags)0x00100000000a001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFG_LocomotionPlayerState, LocomotionIdleSubState), Z_Construct_UClass_UFG_LocomotionIdleSubState_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UFG_LocomotionPlayerState_Statics::NewProp_LocomotionIdleSubState_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFG_LocomotionPlayerState_Statics::NewProp_LocomotionIdleSubState_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFG_LocomotionPlayerState_Statics::NewProp_LocomotionMovingSubState_MetaData[] = {
		{ "Category", "FG_LocomotionPlayerState" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Player/States/Core/FG_LocomotionPlayerState.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UFG_LocomotionPlayerState_Statics::NewProp_LocomotionMovingSubState = { "LocomotionMovingSubState", nullptr, (EPropertyFlags)0x00100000000a001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFG_LocomotionPlayerState, LocomotionMovingSubState), Z_Construct_UClass_UFG_LocomotionMovingSubState_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UFG_LocomotionPlayerState_Statics::NewProp_LocomotionMovingSubState_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFG_LocomotionPlayerState_Statics::NewProp_LocomotionMovingSubState_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFG_LocomotionPlayerState_Statics::NewProp_LocomotionJumpingSubState_MetaData[] = {
		{ "Category", "FG_LocomotionPlayerState" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Player/States/Core/FG_LocomotionPlayerState.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UFG_LocomotionPlayerState_Statics::NewProp_LocomotionJumpingSubState = { "LocomotionJumpingSubState", nullptr, (EPropertyFlags)0x00100000000a001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFG_LocomotionPlayerState, LocomotionJumpingSubState), Z_Construct_UClass_UFG_LocomotionJumpingSubState_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UFG_LocomotionPlayerState_Statics::NewProp_LocomotionJumpingSubState_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFG_LocomotionPlayerState_Statics::NewProp_LocomotionJumpingSubState_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFG_LocomotionPlayerState_Statics::NewProp_LocomotionAirborneSubState_MetaData[] = {
		{ "Category", "FG_LocomotionPlayerState" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Player/States/Core/FG_LocomotionPlayerState.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UFG_LocomotionPlayerState_Statics::NewProp_LocomotionAirborneSubState = { "LocomotionAirborneSubState", nullptr, (EPropertyFlags)0x00100000000a001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFG_LocomotionPlayerState, LocomotionAirborneSubState), Z_Construct_UClass_UFG_LocomotionAirborneSubState_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UFG_LocomotionPlayerState_Statics::NewProp_LocomotionAirborneSubState_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFG_LocomotionPlayerState_Statics::NewProp_LocomotionAirborneSubState_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFG_LocomotionPlayerState_Statics::NewProp_LocomotionAirJumpSubState_MetaData[] = {
		{ "Category", "FG_LocomotionPlayerState" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Player/States/Core/FG_LocomotionPlayerState.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UFG_LocomotionPlayerState_Statics::NewProp_LocomotionAirJumpSubState = { "LocomotionAirJumpSubState", nullptr, (EPropertyFlags)0x00100000000a001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFG_LocomotionPlayerState, LocomotionAirJumpSubState), Z_Construct_UClass_UFG_LocomotionAirJumpSubState_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UFG_LocomotionPlayerState_Statics::NewProp_LocomotionAirJumpSubState_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFG_LocomotionPlayerState_Statics::NewProp_LocomotionAirJumpSubState_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFG_LocomotionPlayerState_Statics::NewProp_LocomotionLedgevaultSubState_MetaData[] = {
		{ "Category", "FG_LocomotionPlayerState" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Player/States/Core/FG_LocomotionPlayerState.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UFG_LocomotionPlayerState_Statics::NewProp_LocomotionLedgevaultSubState = { "LocomotionLedgevaultSubState", nullptr, (EPropertyFlags)0x00100000000a001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFG_LocomotionPlayerState, LocomotionLedgevaultSubState), Z_Construct_UClass_UFG_LocomotionLedgevaultSubState_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UFG_LocomotionPlayerState_Statics::NewProp_LocomotionLedgevaultSubState_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFG_LocomotionPlayerState_Statics::NewProp_LocomotionLedgevaultSubState_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFG_LocomotionPlayerState_Statics::NewProp_LocomotionWallclimbSubState_MetaData[] = {
		{ "Category", "FG_LocomotionPlayerState" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Player/States/Core/FG_LocomotionPlayerState.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UFG_LocomotionPlayerState_Statics::NewProp_LocomotionWallclimbSubState = { "LocomotionWallclimbSubState", nullptr, (EPropertyFlags)0x00100000000a001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFG_LocomotionPlayerState, LocomotionWallclimbSubState), Z_Construct_UClass_UFG_LocomotionWallclimbSubState_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UFG_LocomotionPlayerState_Statics::NewProp_LocomotionWallclimbSubState_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFG_LocomotionPlayerState_Statics::NewProp_LocomotionWallclimbSubState_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFG_LocomotionPlayerState_Statics::NewProp_Instrument_MetaData[] = {
		{ "Category", "FG_LocomotionPlayerState" },
		{ "ModuleRelativePath", "Public/Player/States/Core/FG_LocomotionPlayerState.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UFG_LocomotionPlayerState_Statics::NewProp_Instrument = { "Instrument", nullptr, (EPropertyFlags)0x0010000000010005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFG_LocomotionPlayerState, Instrument), Z_Construct_UClass_UFG_DA_Instrument_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UFG_LocomotionPlayerState_Statics::NewProp_Instrument_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFG_LocomotionPlayerState_Statics::NewProp_Instrument_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFG_LocomotionPlayerState_Statics::NewProp_Bells_MetaData[] = {
		{ "Category", "FG_LocomotionPlayerState" },
		{ "ModuleRelativePath", "Public/Player/States/Core/FG_LocomotionPlayerState.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UFG_LocomotionPlayerState_Statics::NewProp_Bells = { "Bells", nullptr, (EPropertyFlags)0x0010000000010005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFG_LocomotionPlayerState, Bells), Z_Construct_UClass_UFG_DA_Instrument_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UFG_LocomotionPlayerState_Statics::NewProp_Bells_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFG_LocomotionPlayerState_Statics::NewProp_Bells_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFG_LocomotionPlayerState_Statics::NewProp_CurrentChord_MetaData[] = {
		{ "ModuleRelativePath", "Public/Player/States/Core/FG_LocomotionPlayerState.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UFG_LocomotionPlayerState_Statics::NewProp_CurrentChord = { "CurrentChord", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFG_LocomotionPlayerState, CurrentChord), Z_Construct_UClass_UInstrumentChord_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UFG_LocomotionPlayerState_Statics::NewProp_CurrentChord_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFG_LocomotionPlayerState_Statics::NewProp_CurrentChord_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFG_LocomotionPlayerState_Statics::NewProp_InstrumentHandler_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Player/States/Core/FG_LocomotionPlayerState.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UFG_LocomotionPlayerState_Statics::NewProp_InstrumentHandler = { "InstrumentHandler", nullptr, (EPropertyFlags)0x0010000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFG_LocomotionPlayerState, InstrumentHandler), Z_Construct_UClass_UFG_InstrumentComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UFG_LocomotionPlayerState_Statics::NewProp_InstrumentHandler_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFG_LocomotionPlayerState_Statics::NewProp_InstrumentHandler_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UFG_LocomotionPlayerState_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFG_LocomotionPlayerState_Statics::NewProp_SubStateMachine,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFG_LocomotionPlayerState_Statics::NewProp_LocomotionIdleSubState,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFG_LocomotionPlayerState_Statics::NewProp_LocomotionMovingSubState,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFG_LocomotionPlayerState_Statics::NewProp_LocomotionJumpingSubState,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFG_LocomotionPlayerState_Statics::NewProp_LocomotionAirborneSubState,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFG_LocomotionPlayerState_Statics::NewProp_LocomotionAirJumpSubState,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFG_LocomotionPlayerState_Statics::NewProp_LocomotionLedgevaultSubState,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFG_LocomotionPlayerState_Statics::NewProp_LocomotionWallclimbSubState,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFG_LocomotionPlayerState_Statics::NewProp_Instrument,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFG_LocomotionPlayerState_Statics::NewProp_Bells,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFG_LocomotionPlayerState_Statics::NewProp_CurrentChord,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFG_LocomotionPlayerState_Statics::NewProp_InstrumentHandler,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UFG_LocomotionPlayerState_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UFG_LocomotionPlayerState>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UFG_LocomotionPlayerState_Statics::ClassParams = {
		&UFG_LocomotionPlayerState::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UFG_LocomotionPlayerState_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UFG_LocomotionPlayerState_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UFG_LocomotionPlayerState_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UFG_LocomotionPlayerState_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UFG_LocomotionPlayerState()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UFG_LocomotionPlayerState_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UFG_LocomotionPlayerState, 546638557);
	template<> GP3_TEAM01_API UClass* StaticClass<UFG_LocomotionPlayerState>()
	{
		return UFG_LocomotionPlayerState::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UFG_LocomotionPlayerState(Z_Construct_UClass_UFG_LocomotionPlayerState, &UFG_LocomotionPlayerState::StaticClass, TEXT("/Script/gp3_team01"), TEXT("UFG_LocomotionPlayerState"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UFG_LocomotionPlayerState);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
