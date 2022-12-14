// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "gp3_team01/Public/Player/FG_DA_InputStats.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFG_DA_InputStats() {}
// Cross Module References
	GP3_TEAM01_API UClass* Z_Construct_UClass_UFG_DA_InputStats_NoRegister();
	GP3_TEAM01_API UClass* Z_Construct_UClass_UFG_DA_InputStats();
	ENGINE_API UClass* Z_Construct_UClass_UDataAsset();
	UPackage* Z_Construct_UPackage__Script_gp3_team01();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
// End Cross Module References
	DEFINE_FUNCTION(UFG_DA_InputStats::execUpdateBuffers)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->UpdateBuffers();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UFG_DA_InputStats::execInvalidateBuffers)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->InvalidateBuffers();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UFG_DA_InputStats::execGetWasGlidingJustReleased)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetWasGlidingJustReleased();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UFG_DA_InputStats::execGetWasJumpingJustReleased)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetWasJumpingJustReleased();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UFG_DA_InputStats::execGetWasGlidingJustPressed)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetWasGlidingJustPressed();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UFG_DA_InputStats::execGetWasJumpingJustPressed)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetWasJumpingJustPressed();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UFG_DA_InputStats::execGetIsGlidingPressed)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetIsGlidingPressed();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UFG_DA_InputStats::execGetIsJumpingPressed)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetIsJumpingPressed();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UFG_DA_InputStats::execGetCameraNormalisedInputVector)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FVector*)Z_Param__Result=P_THIS->GetCameraNormalisedInputVector();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UFG_DA_InputStats::execGetCameraForwardVector)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FVector*)Z_Param__Result=P_THIS->GetCameraForwardVector();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UFG_DA_InputStats::execGetRawInputVector)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FVector*)Z_Param__Result=P_THIS->GetRawInputVector();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UFG_DA_InputStats::execSetIsGliding)
	{
		P_GET_UBOOL(Z_Param_value);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetIsGliding(Z_Param_value);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UFG_DA_InputStats::execSetIsJumping)
	{
		P_GET_UBOOL(Z_Param_value);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetIsJumping(Z_Param_value);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UFG_DA_InputStats::execSetCameraNormalisedInputVector)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_x);
		P_GET_PROPERTY(FFloatProperty,Z_Param_y);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetCameraNormalisedInputVector(Z_Param_x,Z_Param_y);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UFG_DA_InputStats::execSetCameraForwardVector)
	{
		P_GET_STRUCT(FVector,Z_Param_FwdVector);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetCameraForwardVector(Z_Param_FwdVector);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UFG_DA_InputStats::execSetRawInputVector)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_x);
		P_GET_PROPERTY(FFloatProperty,Z_Param_y);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetRawInputVector(Z_Param_x,Z_Param_y);
		P_NATIVE_END;
	}
	void UFG_DA_InputStats::StaticRegisterNativesUFG_DA_InputStats()
	{
		UClass* Class = UFG_DA_InputStats::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetCameraForwardVector", &UFG_DA_InputStats::execGetCameraForwardVector },
			{ "GetCameraNormalisedInputVector", &UFG_DA_InputStats::execGetCameraNormalisedInputVector },
			{ "GetIsGlidingPressed", &UFG_DA_InputStats::execGetIsGlidingPressed },
			{ "GetIsJumpingPressed", &UFG_DA_InputStats::execGetIsJumpingPressed },
			{ "GetRawInputVector", &UFG_DA_InputStats::execGetRawInputVector },
			{ "GetWasGlidingJustPressed", &UFG_DA_InputStats::execGetWasGlidingJustPressed },
			{ "GetWasGlidingJustReleased", &UFG_DA_InputStats::execGetWasGlidingJustReleased },
			{ "GetWasJumpingJustPressed", &UFG_DA_InputStats::execGetWasJumpingJustPressed },
			{ "GetWasJumpingJustReleased", &UFG_DA_InputStats::execGetWasJumpingJustReleased },
			{ "InvalidateBuffers", &UFG_DA_InputStats::execInvalidateBuffers },
			{ "SetCameraForwardVector", &UFG_DA_InputStats::execSetCameraForwardVector },
			{ "SetCameraNormalisedInputVector", &UFG_DA_InputStats::execSetCameraNormalisedInputVector },
			{ "SetIsGliding", &UFG_DA_InputStats::execSetIsGliding },
			{ "SetIsJumping", &UFG_DA_InputStats::execSetIsJumping },
			{ "SetRawInputVector", &UFG_DA_InputStats::execSetRawInputVector },
			{ "UpdateBuffers", &UFG_DA_InputStats::execUpdateBuffers },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UFG_DA_InputStats_GetCameraForwardVector_Statics
	{
		struct FG_DA_InputStats_eventGetCameraForwardVector_Parms
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
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFG_DA_InputStats_GetCameraForwardVector_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FG_DA_InputStats_eventGetCameraForwardVector_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFG_DA_InputStats_GetCameraForwardVector_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFG_DA_InputStats_GetCameraForwardVector_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFG_DA_InputStats_GetCameraForwardVector_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Player/FG_DA_InputStats.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFG_DA_InputStats_GetCameraForwardVector_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFG_DA_InputStats, nullptr, "GetCameraForwardVector", nullptr, nullptr, sizeof(FG_DA_InputStats_eventGetCameraForwardVector_Parms), Z_Construct_UFunction_UFG_DA_InputStats_GetCameraForwardVector_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFG_DA_InputStats_GetCameraForwardVector_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFG_DA_InputStats_GetCameraForwardVector_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFG_DA_InputStats_GetCameraForwardVector_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFG_DA_InputStats_GetCameraForwardVector()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFG_DA_InputStats_GetCameraForwardVector_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFG_DA_InputStats_GetCameraNormalisedInputVector_Statics
	{
		struct FG_DA_InputStats_eventGetCameraNormalisedInputVector_Parms
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
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFG_DA_InputStats_GetCameraNormalisedInputVector_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FG_DA_InputStats_eventGetCameraNormalisedInputVector_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFG_DA_InputStats_GetCameraNormalisedInputVector_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFG_DA_InputStats_GetCameraNormalisedInputVector_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFG_DA_InputStats_GetCameraNormalisedInputVector_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Player/FG_DA_InputStats.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFG_DA_InputStats_GetCameraNormalisedInputVector_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFG_DA_InputStats, nullptr, "GetCameraNormalisedInputVector", nullptr, nullptr, sizeof(FG_DA_InputStats_eventGetCameraNormalisedInputVector_Parms), Z_Construct_UFunction_UFG_DA_InputStats_GetCameraNormalisedInputVector_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFG_DA_InputStats_GetCameraNormalisedInputVector_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFG_DA_InputStats_GetCameraNormalisedInputVector_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFG_DA_InputStats_GetCameraNormalisedInputVector_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFG_DA_InputStats_GetCameraNormalisedInputVector()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFG_DA_InputStats_GetCameraNormalisedInputVector_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFG_DA_InputStats_GetIsGlidingPressed_Statics
	{
		struct FG_DA_InputStats_eventGetIsGlidingPressed_Parms
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
	void Z_Construct_UFunction_UFG_DA_InputStats_GetIsGlidingPressed_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((FG_DA_InputStats_eventGetIsGlidingPressed_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UFG_DA_InputStats_GetIsGlidingPressed_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FG_DA_InputStats_eventGetIsGlidingPressed_Parms), &Z_Construct_UFunction_UFG_DA_InputStats_GetIsGlidingPressed_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFG_DA_InputStats_GetIsGlidingPressed_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFG_DA_InputStats_GetIsGlidingPressed_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFG_DA_InputStats_GetIsGlidingPressed_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Player/FG_DA_InputStats.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFG_DA_InputStats_GetIsGlidingPressed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFG_DA_InputStats, nullptr, "GetIsGlidingPressed", nullptr, nullptr, sizeof(FG_DA_InputStats_eventGetIsGlidingPressed_Parms), Z_Construct_UFunction_UFG_DA_InputStats_GetIsGlidingPressed_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFG_DA_InputStats_GetIsGlidingPressed_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFG_DA_InputStats_GetIsGlidingPressed_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFG_DA_InputStats_GetIsGlidingPressed_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFG_DA_InputStats_GetIsGlidingPressed()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFG_DA_InputStats_GetIsGlidingPressed_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFG_DA_InputStats_GetIsJumpingPressed_Statics
	{
		struct FG_DA_InputStats_eventGetIsJumpingPressed_Parms
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
	void Z_Construct_UFunction_UFG_DA_InputStats_GetIsJumpingPressed_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((FG_DA_InputStats_eventGetIsJumpingPressed_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UFG_DA_InputStats_GetIsJumpingPressed_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FG_DA_InputStats_eventGetIsJumpingPressed_Parms), &Z_Construct_UFunction_UFG_DA_InputStats_GetIsJumpingPressed_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFG_DA_InputStats_GetIsJumpingPressed_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFG_DA_InputStats_GetIsJumpingPressed_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFG_DA_InputStats_GetIsJumpingPressed_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Player/FG_DA_InputStats.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFG_DA_InputStats_GetIsJumpingPressed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFG_DA_InputStats, nullptr, "GetIsJumpingPressed", nullptr, nullptr, sizeof(FG_DA_InputStats_eventGetIsJumpingPressed_Parms), Z_Construct_UFunction_UFG_DA_InputStats_GetIsJumpingPressed_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFG_DA_InputStats_GetIsJumpingPressed_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFG_DA_InputStats_GetIsJumpingPressed_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFG_DA_InputStats_GetIsJumpingPressed_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFG_DA_InputStats_GetIsJumpingPressed()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFG_DA_InputStats_GetIsJumpingPressed_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFG_DA_InputStats_GetRawInputVector_Statics
	{
		struct FG_DA_InputStats_eventGetRawInputVector_Parms
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
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFG_DA_InputStats_GetRawInputVector_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FG_DA_InputStats_eventGetRawInputVector_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFG_DA_InputStats_GetRawInputVector_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFG_DA_InputStats_GetRawInputVector_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFG_DA_InputStats_GetRawInputVector_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Player/FG_DA_InputStats.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFG_DA_InputStats_GetRawInputVector_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFG_DA_InputStats, nullptr, "GetRawInputVector", nullptr, nullptr, sizeof(FG_DA_InputStats_eventGetRawInputVector_Parms), Z_Construct_UFunction_UFG_DA_InputStats_GetRawInputVector_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFG_DA_InputStats_GetRawInputVector_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFG_DA_InputStats_GetRawInputVector_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFG_DA_InputStats_GetRawInputVector_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFG_DA_InputStats_GetRawInputVector()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFG_DA_InputStats_GetRawInputVector_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFG_DA_InputStats_GetWasGlidingJustPressed_Statics
	{
		struct FG_DA_InputStats_eventGetWasGlidingJustPressed_Parms
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
	void Z_Construct_UFunction_UFG_DA_InputStats_GetWasGlidingJustPressed_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((FG_DA_InputStats_eventGetWasGlidingJustPressed_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UFG_DA_InputStats_GetWasGlidingJustPressed_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FG_DA_InputStats_eventGetWasGlidingJustPressed_Parms), &Z_Construct_UFunction_UFG_DA_InputStats_GetWasGlidingJustPressed_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFG_DA_InputStats_GetWasGlidingJustPressed_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFG_DA_InputStats_GetWasGlidingJustPressed_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFG_DA_InputStats_GetWasGlidingJustPressed_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Player/FG_DA_InputStats.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFG_DA_InputStats_GetWasGlidingJustPressed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFG_DA_InputStats, nullptr, "GetWasGlidingJustPressed", nullptr, nullptr, sizeof(FG_DA_InputStats_eventGetWasGlidingJustPressed_Parms), Z_Construct_UFunction_UFG_DA_InputStats_GetWasGlidingJustPressed_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFG_DA_InputStats_GetWasGlidingJustPressed_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFG_DA_InputStats_GetWasGlidingJustPressed_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFG_DA_InputStats_GetWasGlidingJustPressed_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFG_DA_InputStats_GetWasGlidingJustPressed()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFG_DA_InputStats_GetWasGlidingJustPressed_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFG_DA_InputStats_GetWasGlidingJustReleased_Statics
	{
		struct FG_DA_InputStats_eventGetWasGlidingJustReleased_Parms
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
	void Z_Construct_UFunction_UFG_DA_InputStats_GetWasGlidingJustReleased_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((FG_DA_InputStats_eventGetWasGlidingJustReleased_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UFG_DA_InputStats_GetWasGlidingJustReleased_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FG_DA_InputStats_eventGetWasGlidingJustReleased_Parms), &Z_Construct_UFunction_UFG_DA_InputStats_GetWasGlidingJustReleased_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFG_DA_InputStats_GetWasGlidingJustReleased_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFG_DA_InputStats_GetWasGlidingJustReleased_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFG_DA_InputStats_GetWasGlidingJustReleased_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Player/FG_DA_InputStats.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFG_DA_InputStats_GetWasGlidingJustReleased_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFG_DA_InputStats, nullptr, "GetWasGlidingJustReleased", nullptr, nullptr, sizeof(FG_DA_InputStats_eventGetWasGlidingJustReleased_Parms), Z_Construct_UFunction_UFG_DA_InputStats_GetWasGlidingJustReleased_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFG_DA_InputStats_GetWasGlidingJustReleased_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFG_DA_InputStats_GetWasGlidingJustReleased_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFG_DA_InputStats_GetWasGlidingJustReleased_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFG_DA_InputStats_GetWasGlidingJustReleased()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFG_DA_InputStats_GetWasGlidingJustReleased_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFG_DA_InputStats_GetWasJumpingJustPressed_Statics
	{
		struct FG_DA_InputStats_eventGetWasJumpingJustPressed_Parms
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
	void Z_Construct_UFunction_UFG_DA_InputStats_GetWasJumpingJustPressed_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((FG_DA_InputStats_eventGetWasJumpingJustPressed_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UFG_DA_InputStats_GetWasJumpingJustPressed_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FG_DA_InputStats_eventGetWasJumpingJustPressed_Parms), &Z_Construct_UFunction_UFG_DA_InputStats_GetWasJumpingJustPressed_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFG_DA_InputStats_GetWasJumpingJustPressed_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFG_DA_InputStats_GetWasJumpingJustPressed_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFG_DA_InputStats_GetWasJumpingJustPressed_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Player/FG_DA_InputStats.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFG_DA_InputStats_GetWasJumpingJustPressed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFG_DA_InputStats, nullptr, "GetWasJumpingJustPressed", nullptr, nullptr, sizeof(FG_DA_InputStats_eventGetWasJumpingJustPressed_Parms), Z_Construct_UFunction_UFG_DA_InputStats_GetWasJumpingJustPressed_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFG_DA_InputStats_GetWasJumpingJustPressed_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFG_DA_InputStats_GetWasJumpingJustPressed_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFG_DA_InputStats_GetWasJumpingJustPressed_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFG_DA_InputStats_GetWasJumpingJustPressed()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFG_DA_InputStats_GetWasJumpingJustPressed_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFG_DA_InputStats_GetWasJumpingJustReleased_Statics
	{
		struct FG_DA_InputStats_eventGetWasJumpingJustReleased_Parms
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
	void Z_Construct_UFunction_UFG_DA_InputStats_GetWasJumpingJustReleased_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((FG_DA_InputStats_eventGetWasJumpingJustReleased_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UFG_DA_InputStats_GetWasJumpingJustReleased_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FG_DA_InputStats_eventGetWasJumpingJustReleased_Parms), &Z_Construct_UFunction_UFG_DA_InputStats_GetWasJumpingJustReleased_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFG_DA_InputStats_GetWasJumpingJustReleased_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFG_DA_InputStats_GetWasJumpingJustReleased_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFG_DA_InputStats_GetWasJumpingJustReleased_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Player/FG_DA_InputStats.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFG_DA_InputStats_GetWasJumpingJustReleased_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFG_DA_InputStats, nullptr, "GetWasJumpingJustReleased", nullptr, nullptr, sizeof(FG_DA_InputStats_eventGetWasJumpingJustReleased_Parms), Z_Construct_UFunction_UFG_DA_InputStats_GetWasJumpingJustReleased_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFG_DA_InputStats_GetWasJumpingJustReleased_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFG_DA_InputStats_GetWasJumpingJustReleased_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFG_DA_InputStats_GetWasJumpingJustReleased_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFG_DA_InputStats_GetWasJumpingJustReleased()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFG_DA_InputStats_GetWasJumpingJustReleased_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFG_DA_InputStats_InvalidateBuffers_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFG_DA_InputStats_InvalidateBuffers_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Player/FG_DA_InputStats.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFG_DA_InputStats_InvalidateBuffers_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFG_DA_InputStats, nullptr, "InvalidateBuffers", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFG_DA_InputStats_InvalidateBuffers_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFG_DA_InputStats_InvalidateBuffers_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFG_DA_InputStats_InvalidateBuffers()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFG_DA_InputStats_InvalidateBuffers_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFG_DA_InputStats_SetCameraForwardVector_Statics
	{
		struct FG_DA_InputStats_eventSetCameraForwardVector_Parms
		{
			FVector FwdVector;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_FwdVector;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFG_DA_InputStats_SetCameraForwardVector_Statics::NewProp_FwdVector = { "FwdVector", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FG_DA_InputStats_eventSetCameraForwardVector_Parms, FwdVector), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFG_DA_InputStats_SetCameraForwardVector_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFG_DA_InputStats_SetCameraForwardVector_Statics::NewProp_FwdVector,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFG_DA_InputStats_SetCameraForwardVector_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Player/FG_DA_InputStats.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFG_DA_InputStats_SetCameraForwardVector_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFG_DA_InputStats, nullptr, "SetCameraForwardVector", nullptr, nullptr, sizeof(FG_DA_InputStats_eventSetCameraForwardVector_Parms), Z_Construct_UFunction_UFG_DA_InputStats_SetCameraForwardVector_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFG_DA_InputStats_SetCameraForwardVector_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFG_DA_InputStats_SetCameraForwardVector_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFG_DA_InputStats_SetCameraForwardVector_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFG_DA_InputStats_SetCameraForwardVector()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFG_DA_InputStats_SetCameraForwardVector_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFG_DA_InputStats_SetCameraNormalisedInputVector_Statics
	{
		struct FG_DA_InputStats_eventSetCameraNormalisedInputVector_Parms
		{
			float x;
			float y;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_x;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_y;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UFG_DA_InputStats_SetCameraNormalisedInputVector_Statics::NewProp_x = { "x", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FG_DA_InputStats_eventSetCameraNormalisedInputVector_Parms, x), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UFG_DA_InputStats_SetCameraNormalisedInputVector_Statics::NewProp_y = { "y", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FG_DA_InputStats_eventSetCameraNormalisedInputVector_Parms, y), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFG_DA_InputStats_SetCameraNormalisedInputVector_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFG_DA_InputStats_SetCameraNormalisedInputVector_Statics::NewProp_x,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFG_DA_InputStats_SetCameraNormalisedInputVector_Statics::NewProp_y,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFG_DA_InputStats_SetCameraNormalisedInputVector_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Player/FG_DA_InputStats.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFG_DA_InputStats_SetCameraNormalisedInputVector_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFG_DA_InputStats, nullptr, "SetCameraNormalisedInputVector", nullptr, nullptr, sizeof(FG_DA_InputStats_eventSetCameraNormalisedInputVector_Parms), Z_Construct_UFunction_UFG_DA_InputStats_SetCameraNormalisedInputVector_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFG_DA_InputStats_SetCameraNormalisedInputVector_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFG_DA_InputStats_SetCameraNormalisedInputVector_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFG_DA_InputStats_SetCameraNormalisedInputVector_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFG_DA_InputStats_SetCameraNormalisedInputVector()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFG_DA_InputStats_SetCameraNormalisedInputVector_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFG_DA_InputStats_SetIsGliding_Statics
	{
		struct FG_DA_InputStats_eventSetIsGliding_Parms
		{
			bool value;
		};
		static void NewProp_value_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_value;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UFG_DA_InputStats_SetIsGliding_Statics::NewProp_value_SetBit(void* Obj)
	{
		((FG_DA_InputStats_eventSetIsGliding_Parms*)Obj)->value = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UFG_DA_InputStats_SetIsGliding_Statics::NewProp_value = { "value", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FG_DA_InputStats_eventSetIsGliding_Parms), &Z_Construct_UFunction_UFG_DA_InputStats_SetIsGliding_Statics::NewProp_value_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFG_DA_InputStats_SetIsGliding_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFG_DA_InputStats_SetIsGliding_Statics::NewProp_value,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFG_DA_InputStats_SetIsGliding_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Player/FG_DA_InputStats.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFG_DA_InputStats_SetIsGliding_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFG_DA_InputStats, nullptr, "SetIsGliding", nullptr, nullptr, sizeof(FG_DA_InputStats_eventSetIsGliding_Parms), Z_Construct_UFunction_UFG_DA_InputStats_SetIsGliding_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFG_DA_InputStats_SetIsGliding_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFG_DA_InputStats_SetIsGliding_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFG_DA_InputStats_SetIsGliding_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFG_DA_InputStats_SetIsGliding()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFG_DA_InputStats_SetIsGliding_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFG_DA_InputStats_SetIsJumping_Statics
	{
		struct FG_DA_InputStats_eventSetIsJumping_Parms
		{
			bool value;
		};
		static void NewProp_value_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_value;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UFG_DA_InputStats_SetIsJumping_Statics::NewProp_value_SetBit(void* Obj)
	{
		((FG_DA_InputStats_eventSetIsJumping_Parms*)Obj)->value = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UFG_DA_InputStats_SetIsJumping_Statics::NewProp_value = { "value", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FG_DA_InputStats_eventSetIsJumping_Parms), &Z_Construct_UFunction_UFG_DA_InputStats_SetIsJumping_Statics::NewProp_value_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFG_DA_InputStats_SetIsJumping_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFG_DA_InputStats_SetIsJumping_Statics::NewProp_value,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFG_DA_InputStats_SetIsJumping_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Player/FG_DA_InputStats.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFG_DA_InputStats_SetIsJumping_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFG_DA_InputStats, nullptr, "SetIsJumping", nullptr, nullptr, sizeof(FG_DA_InputStats_eventSetIsJumping_Parms), Z_Construct_UFunction_UFG_DA_InputStats_SetIsJumping_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFG_DA_InputStats_SetIsJumping_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFG_DA_InputStats_SetIsJumping_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFG_DA_InputStats_SetIsJumping_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFG_DA_InputStats_SetIsJumping()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFG_DA_InputStats_SetIsJumping_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFG_DA_InputStats_SetRawInputVector_Statics
	{
		struct FG_DA_InputStats_eventSetRawInputVector_Parms
		{
			float x;
			float y;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_x;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_y;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UFG_DA_InputStats_SetRawInputVector_Statics::NewProp_x = { "x", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FG_DA_InputStats_eventSetRawInputVector_Parms, x), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UFG_DA_InputStats_SetRawInputVector_Statics::NewProp_y = { "y", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FG_DA_InputStats_eventSetRawInputVector_Parms, y), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFG_DA_InputStats_SetRawInputVector_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFG_DA_InputStats_SetRawInputVector_Statics::NewProp_x,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFG_DA_InputStats_SetRawInputVector_Statics::NewProp_y,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFG_DA_InputStats_SetRawInputVector_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Player/FG_DA_InputStats.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFG_DA_InputStats_SetRawInputVector_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFG_DA_InputStats, nullptr, "SetRawInputVector", nullptr, nullptr, sizeof(FG_DA_InputStats_eventSetRawInputVector_Parms), Z_Construct_UFunction_UFG_DA_InputStats_SetRawInputVector_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFG_DA_InputStats_SetRawInputVector_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFG_DA_InputStats_SetRawInputVector_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFG_DA_InputStats_SetRawInputVector_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFG_DA_InputStats_SetRawInputVector()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFG_DA_InputStats_SetRawInputVector_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFG_DA_InputStats_UpdateBuffers_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFG_DA_InputStats_UpdateBuffers_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Player/FG_DA_InputStats.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFG_DA_InputStats_UpdateBuffers_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFG_DA_InputStats, nullptr, "UpdateBuffers", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFG_DA_InputStats_UpdateBuffers_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFG_DA_InputStats_UpdateBuffers_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFG_DA_InputStats_UpdateBuffers()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFG_DA_InputStats_UpdateBuffers_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UFG_DA_InputStats_NoRegister()
	{
		return UFG_DA_InputStats::StaticClass();
	}
	struct Z_Construct_UClass_UFG_DA_InputStats_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UFG_DA_InputStats_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UDataAsset,
		(UObject* (*)())Z_Construct_UPackage__Script_gp3_team01,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UFG_DA_InputStats_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UFG_DA_InputStats_GetCameraForwardVector, "GetCameraForwardVector" }, // 3055034086
		{ &Z_Construct_UFunction_UFG_DA_InputStats_GetCameraNormalisedInputVector, "GetCameraNormalisedInputVector" }, // 946290010
		{ &Z_Construct_UFunction_UFG_DA_InputStats_GetIsGlidingPressed, "GetIsGlidingPressed" }, // 3291185510
		{ &Z_Construct_UFunction_UFG_DA_InputStats_GetIsJumpingPressed, "GetIsJumpingPressed" }, // 4248733694
		{ &Z_Construct_UFunction_UFG_DA_InputStats_GetRawInputVector, "GetRawInputVector" }, // 3430825485
		{ &Z_Construct_UFunction_UFG_DA_InputStats_GetWasGlidingJustPressed, "GetWasGlidingJustPressed" }, // 2804098573
		{ &Z_Construct_UFunction_UFG_DA_InputStats_GetWasGlidingJustReleased, "GetWasGlidingJustReleased" }, // 160785619
		{ &Z_Construct_UFunction_UFG_DA_InputStats_GetWasJumpingJustPressed, "GetWasJumpingJustPressed" }, // 2850243271
		{ &Z_Construct_UFunction_UFG_DA_InputStats_GetWasJumpingJustReleased, "GetWasJumpingJustReleased" }, // 2985776757
		{ &Z_Construct_UFunction_UFG_DA_InputStats_InvalidateBuffers, "InvalidateBuffers" }, // 2302556769
		{ &Z_Construct_UFunction_UFG_DA_InputStats_SetCameraForwardVector, "SetCameraForwardVector" }, // 2602458026
		{ &Z_Construct_UFunction_UFG_DA_InputStats_SetCameraNormalisedInputVector, "SetCameraNormalisedInputVector" }, // 1499537737
		{ &Z_Construct_UFunction_UFG_DA_InputStats_SetIsGliding, "SetIsGliding" }, // 3960360673
		{ &Z_Construct_UFunction_UFG_DA_InputStats_SetIsJumping, "SetIsJumping" }, // 2827753651
		{ &Z_Construct_UFunction_UFG_DA_InputStats_SetRawInputVector, "SetRawInputVector" }, // 638312428
		{ &Z_Construct_UFunction_UFG_DA_InputStats_UpdateBuffers, "UpdateBuffers" }, // 514000240
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFG_DA_InputStats_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "Player/FG_DA_InputStats.h" },
		{ "ModuleRelativePath", "Public/Player/FG_DA_InputStats.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UFG_DA_InputStats_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UFG_DA_InputStats>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UFG_DA_InputStats_Statics::ClassParams = {
		&UFG_DA_InputStats::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UFG_DA_InputStats_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UFG_DA_InputStats_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UFG_DA_InputStats()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UFG_DA_InputStats_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UFG_DA_InputStats, 3164869945);
	template<> GP3_TEAM01_API UClass* StaticClass<UFG_DA_InputStats>()
	{
		return UFG_DA_InputStats::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UFG_DA_InputStats(Z_Construct_UClass_UFG_DA_InputStats, &UFG_DA_InputStats::StaticClass, TEXT("/Script/gp3_team01"), TEXT("UFG_DA_InputStats"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UFG_DA_InputStats);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
