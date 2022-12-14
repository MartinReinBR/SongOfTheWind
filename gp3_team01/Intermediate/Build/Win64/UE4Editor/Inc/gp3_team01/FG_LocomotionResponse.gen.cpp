// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "gp3_team01/Public/Player/Movement/FG_LocomotionResponse.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFG_LocomotionResponse() {}
// Cross Module References
	GP3_TEAM01_API UClass* Z_Construct_UClass_UFG_LocomotionResponse_NoRegister();
	GP3_TEAM01_API UClass* Z_Construct_UClass_UFG_LocomotionResponse();
	COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
	UPackage* Z_Construct_UPackage__Script_gp3_team01();
	GP3_TEAM01_API UClass* Z_Construct_UClass_UFG_LocomotionComponent_NoRegister();
	GP3_TEAM01_API UEnum* Z_Construct_UEnum_gp3_team01_EFG_TouchingState();
// End Cross Module References
	DEFINE_FUNCTION(IFG_LocomotionResponse::execOnLocomotionTouch)
	{
		P_GET_OBJECT(UFG_LocomotionComponent,Z_Param_LocomotionComponentOfCaller);
		P_GET_PROPERTY(FByteProperty,Z_Param_State);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnLocomotionTouch_Implementation(Z_Param_LocomotionComponentOfCaller,EFG_TouchingState(Z_Param_State));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(IFG_LocomotionResponse::execOnLocomotionLeft)
	{
		P_GET_OBJECT(UFG_LocomotionComponent,Z_Param_LocomotionComponentOfCaller);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnLocomotionLeft_Implementation(Z_Param_LocomotionComponentOfCaller);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(IFG_LocomotionResponse::execOnLocomotionStand)
	{
		P_GET_OBJECT(UFG_LocomotionComponent,Z_Param_LocomotionComponentOfCaller);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnLocomotionStand_Implementation(Z_Param_LocomotionComponentOfCaller);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(IFG_LocomotionResponse::execOnLocomotionMove)
	{
		P_GET_OBJECT(UFG_LocomotionComponent,Z_Param_LocomotionComponentOfCaller);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnLocomotionMove_Implementation(Z_Param_LocomotionComponentOfCaller);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(IFG_LocomotionResponse::execOnLocomotionLand)
	{
		P_GET_OBJECT(UFG_LocomotionComponent,Z_Param_LocomotionComponentOfCaller);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnLocomotionLand_Implementation(Z_Param_LocomotionComponentOfCaller);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(IFG_LocomotionResponse::execOnLocomotionJump)
	{
		P_GET_OBJECT(UFG_LocomotionComponent,Z_Param_LocomotionComponentOfCaller);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnLocomotionJump_Implementation(Z_Param_LocomotionComponentOfCaller);
		P_NATIVE_END;
	}
	void IFG_LocomotionResponse::OnLocomotionJump(UFG_LocomotionComponent* LocomotionComponentOfCaller)
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_OnLocomotionJump instead.");
	}
	void IFG_LocomotionResponse::OnLocomotionLand(UFG_LocomotionComponent* LocomotionComponentOfCaller)
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_OnLocomotionLand instead.");
	}
	void IFG_LocomotionResponse::OnLocomotionLeft(UFG_LocomotionComponent* LocomotionComponentOfCaller)
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_OnLocomotionLeft instead.");
	}
	void IFG_LocomotionResponse::OnLocomotionMove(UFG_LocomotionComponent* LocomotionComponentOfCaller)
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_OnLocomotionMove instead.");
	}
	void IFG_LocomotionResponse::OnLocomotionStand(UFG_LocomotionComponent* LocomotionComponentOfCaller)
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_OnLocomotionStand instead.");
	}
	void IFG_LocomotionResponse::OnLocomotionTouch(UFG_LocomotionComponent* LocomotionComponentOfCaller, EFG_TouchingState State)
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_OnLocomotionTouch instead.");
	}
	void UFG_LocomotionResponse::StaticRegisterNativesUFG_LocomotionResponse()
	{
		UClass* Class = UFG_LocomotionResponse::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnLocomotionJump", &IFG_LocomotionResponse::execOnLocomotionJump },
			{ "OnLocomotionLand", &IFG_LocomotionResponse::execOnLocomotionLand },
			{ "OnLocomotionLeft", &IFG_LocomotionResponse::execOnLocomotionLeft },
			{ "OnLocomotionMove", &IFG_LocomotionResponse::execOnLocomotionMove },
			{ "OnLocomotionStand", &IFG_LocomotionResponse::execOnLocomotionStand },
			{ "OnLocomotionTouch", &IFG_LocomotionResponse::execOnLocomotionTouch },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UFG_LocomotionResponse_OnLocomotionJump_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LocomotionComponentOfCaller_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_LocomotionComponentOfCaller;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFG_LocomotionResponse_OnLocomotionJump_Statics::NewProp_LocomotionComponentOfCaller_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UFG_LocomotionResponse_OnLocomotionJump_Statics::NewProp_LocomotionComponentOfCaller = { "LocomotionComponentOfCaller", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FG_LocomotionResponse_eventOnLocomotionJump_Parms, LocomotionComponentOfCaller), Z_Construct_UClass_UFG_LocomotionComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UFG_LocomotionResponse_OnLocomotionJump_Statics::NewProp_LocomotionComponentOfCaller_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UFG_LocomotionResponse_OnLocomotionJump_Statics::NewProp_LocomotionComponentOfCaller_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFG_LocomotionResponse_OnLocomotionJump_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFG_LocomotionResponse_OnLocomotionJump_Statics::NewProp_LocomotionComponentOfCaller,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFG_LocomotionResponse_OnLocomotionJump_Statics::Function_MetaDataParams[] = {
		{ "Comment", "// BP interface\n// Hovering interfac\n" },
		{ "ModuleRelativePath", "Public/Player/Movement/FG_LocomotionResponse.h" },
		{ "ToolTip", "BP interface\nHovering interfac" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFG_LocomotionResponse_OnLocomotionJump_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFG_LocomotionResponse, nullptr, "OnLocomotionJump", nullptr, nullptr, sizeof(FG_LocomotionResponse_eventOnLocomotionJump_Parms), Z_Construct_UFunction_UFG_LocomotionResponse_OnLocomotionJump_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFG_LocomotionResponse_OnLocomotionJump_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFG_LocomotionResponse_OnLocomotionJump_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFG_LocomotionResponse_OnLocomotionJump_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFG_LocomotionResponse_OnLocomotionJump()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFG_LocomotionResponse_OnLocomotionJump_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFG_LocomotionResponse_OnLocomotionLand_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LocomotionComponentOfCaller_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_LocomotionComponentOfCaller;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFG_LocomotionResponse_OnLocomotionLand_Statics::NewProp_LocomotionComponentOfCaller_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UFG_LocomotionResponse_OnLocomotionLand_Statics::NewProp_LocomotionComponentOfCaller = { "LocomotionComponentOfCaller", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FG_LocomotionResponse_eventOnLocomotionLand_Parms, LocomotionComponentOfCaller), Z_Construct_UClass_UFG_LocomotionComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UFG_LocomotionResponse_OnLocomotionLand_Statics::NewProp_LocomotionComponentOfCaller_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UFG_LocomotionResponse_OnLocomotionLand_Statics::NewProp_LocomotionComponentOfCaller_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFG_LocomotionResponse_OnLocomotionLand_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFG_LocomotionResponse_OnLocomotionLand_Statics::NewProp_LocomotionComponentOfCaller,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFG_LocomotionResponse_OnLocomotionLand_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Player/Movement/FG_LocomotionResponse.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFG_LocomotionResponse_OnLocomotionLand_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFG_LocomotionResponse, nullptr, "OnLocomotionLand", nullptr, nullptr, sizeof(FG_LocomotionResponse_eventOnLocomotionLand_Parms), Z_Construct_UFunction_UFG_LocomotionResponse_OnLocomotionLand_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFG_LocomotionResponse_OnLocomotionLand_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFG_LocomotionResponse_OnLocomotionLand_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFG_LocomotionResponse_OnLocomotionLand_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFG_LocomotionResponse_OnLocomotionLand()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFG_LocomotionResponse_OnLocomotionLand_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFG_LocomotionResponse_OnLocomotionLeft_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LocomotionComponentOfCaller_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_LocomotionComponentOfCaller;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFG_LocomotionResponse_OnLocomotionLeft_Statics::NewProp_LocomotionComponentOfCaller_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UFG_LocomotionResponse_OnLocomotionLeft_Statics::NewProp_LocomotionComponentOfCaller = { "LocomotionComponentOfCaller", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FG_LocomotionResponse_eventOnLocomotionLeft_Parms, LocomotionComponentOfCaller), Z_Construct_UClass_UFG_LocomotionComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UFG_LocomotionResponse_OnLocomotionLeft_Statics::NewProp_LocomotionComponentOfCaller_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UFG_LocomotionResponse_OnLocomotionLeft_Statics::NewProp_LocomotionComponentOfCaller_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFG_LocomotionResponse_OnLocomotionLeft_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFG_LocomotionResponse_OnLocomotionLeft_Statics::NewProp_LocomotionComponentOfCaller,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFG_LocomotionResponse_OnLocomotionLeft_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Player/Movement/FG_LocomotionResponse.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFG_LocomotionResponse_OnLocomotionLeft_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFG_LocomotionResponse, nullptr, "OnLocomotionLeft", nullptr, nullptr, sizeof(FG_LocomotionResponse_eventOnLocomotionLeft_Parms), Z_Construct_UFunction_UFG_LocomotionResponse_OnLocomotionLeft_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFG_LocomotionResponse_OnLocomotionLeft_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFG_LocomotionResponse_OnLocomotionLeft_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFG_LocomotionResponse_OnLocomotionLeft_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFG_LocomotionResponse_OnLocomotionLeft()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFG_LocomotionResponse_OnLocomotionLeft_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFG_LocomotionResponse_OnLocomotionMove_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LocomotionComponentOfCaller_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_LocomotionComponentOfCaller;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFG_LocomotionResponse_OnLocomotionMove_Statics::NewProp_LocomotionComponentOfCaller_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UFG_LocomotionResponse_OnLocomotionMove_Statics::NewProp_LocomotionComponentOfCaller = { "LocomotionComponentOfCaller", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FG_LocomotionResponse_eventOnLocomotionMove_Parms, LocomotionComponentOfCaller), Z_Construct_UClass_UFG_LocomotionComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UFG_LocomotionResponse_OnLocomotionMove_Statics::NewProp_LocomotionComponentOfCaller_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UFG_LocomotionResponse_OnLocomotionMove_Statics::NewProp_LocomotionComponentOfCaller_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFG_LocomotionResponse_OnLocomotionMove_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFG_LocomotionResponse_OnLocomotionMove_Statics::NewProp_LocomotionComponentOfCaller,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFG_LocomotionResponse_OnLocomotionMove_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Player/Movement/FG_LocomotionResponse.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFG_LocomotionResponse_OnLocomotionMove_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFG_LocomotionResponse, nullptr, "OnLocomotionMove", nullptr, nullptr, sizeof(FG_LocomotionResponse_eventOnLocomotionMove_Parms), Z_Construct_UFunction_UFG_LocomotionResponse_OnLocomotionMove_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFG_LocomotionResponse_OnLocomotionMove_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFG_LocomotionResponse_OnLocomotionMove_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFG_LocomotionResponse_OnLocomotionMove_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFG_LocomotionResponse_OnLocomotionMove()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFG_LocomotionResponse_OnLocomotionMove_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFG_LocomotionResponse_OnLocomotionStand_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LocomotionComponentOfCaller_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_LocomotionComponentOfCaller;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFG_LocomotionResponse_OnLocomotionStand_Statics::NewProp_LocomotionComponentOfCaller_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UFG_LocomotionResponse_OnLocomotionStand_Statics::NewProp_LocomotionComponentOfCaller = { "LocomotionComponentOfCaller", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FG_LocomotionResponse_eventOnLocomotionStand_Parms, LocomotionComponentOfCaller), Z_Construct_UClass_UFG_LocomotionComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UFG_LocomotionResponse_OnLocomotionStand_Statics::NewProp_LocomotionComponentOfCaller_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UFG_LocomotionResponse_OnLocomotionStand_Statics::NewProp_LocomotionComponentOfCaller_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFG_LocomotionResponse_OnLocomotionStand_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFG_LocomotionResponse_OnLocomotionStand_Statics::NewProp_LocomotionComponentOfCaller,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFG_LocomotionResponse_OnLocomotionStand_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Player/Movement/FG_LocomotionResponse.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFG_LocomotionResponse_OnLocomotionStand_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFG_LocomotionResponse, nullptr, "OnLocomotionStand", nullptr, nullptr, sizeof(FG_LocomotionResponse_eventOnLocomotionStand_Parms), Z_Construct_UFunction_UFG_LocomotionResponse_OnLocomotionStand_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFG_LocomotionResponse_OnLocomotionStand_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFG_LocomotionResponse_OnLocomotionStand_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFG_LocomotionResponse_OnLocomotionStand_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFG_LocomotionResponse_OnLocomotionStand()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFG_LocomotionResponse_OnLocomotionStand_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFG_LocomotionResponse_OnLocomotionTouch_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LocomotionComponentOfCaller_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_LocomotionComponentOfCaller;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_State;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFG_LocomotionResponse_OnLocomotionTouch_Statics::NewProp_LocomotionComponentOfCaller_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UFG_LocomotionResponse_OnLocomotionTouch_Statics::NewProp_LocomotionComponentOfCaller = { "LocomotionComponentOfCaller", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FG_LocomotionResponse_eventOnLocomotionTouch_Parms, LocomotionComponentOfCaller), Z_Construct_UClass_UFG_LocomotionComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UFG_LocomotionResponse_OnLocomotionTouch_Statics::NewProp_LocomotionComponentOfCaller_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UFG_LocomotionResponse_OnLocomotionTouch_Statics::NewProp_LocomotionComponentOfCaller_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UFG_LocomotionResponse_OnLocomotionTouch_Statics::NewProp_State = { "State", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FG_LocomotionResponse_eventOnLocomotionTouch_Parms, State), Z_Construct_UEnum_gp3_team01_EFG_TouchingState, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFG_LocomotionResponse_OnLocomotionTouch_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFG_LocomotionResponse_OnLocomotionTouch_Statics::NewProp_LocomotionComponentOfCaller,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFG_LocomotionResponse_OnLocomotionTouch_Statics::NewProp_State,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFG_LocomotionResponse_OnLocomotionTouch_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Player/Movement/FG_LocomotionResponse.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFG_LocomotionResponse_OnLocomotionTouch_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFG_LocomotionResponse, nullptr, "OnLocomotionTouch", nullptr, nullptr, sizeof(FG_LocomotionResponse_eventOnLocomotionTouch_Parms), Z_Construct_UFunction_UFG_LocomotionResponse_OnLocomotionTouch_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFG_LocomotionResponse_OnLocomotionTouch_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFG_LocomotionResponse_OnLocomotionTouch_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFG_LocomotionResponse_OnLocomotionTouch_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFG_LocomotionResponse_OnLocomotionTouch()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFG_LocomotionResponse_OnLocomotionTouch_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UFG_LocomotionResponse_NoRegister()
	{
		return UFG_LocomotionResponse::StaticClass();
	}
	struct Z_Construct_UClass_UFG_LocomotionResponse_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UFG_LocomotionResponse_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterface,
		(UObject* (*)())Z_Construct_UPackage__Script_gp3_team01,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UFG_LocomotionResponse_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UFG_LocomotionResponse_OnLocomotionJump, "OnLocomotionJump" }, // 2600535129
		{ &Z_Construct_UFunction_UFG_LocomotionResponse_OnLocomotionLand, "OnLocomotionLand" }, // 758920689
		{ &Z_Construct_UFunction_UFG_LocomotionResponse_OnLocomotionLeft, "OnLocomotionLeft" }, // 2835041452
		{ &Z_Construct_UFunction_UFG_LocomotionResponse_OnLocomotionMove, "OnLocomotionMove" }, // 1835309004
		{ &Z_Construct_UFunction_UFG_LocomotionResponse_OnLocomotionStand, "OnLocomotionStand" }, // 2860172733
		{ &Z_Construct_UFunction_UFG_LocomotionResponse_OnLocomotionTouch, "OnLocomotionTouch" }, // 363476270
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFG_LocomotionResponse_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Player/Movement/FG_LocomotionResponse.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UFG_LocomotionResponse_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IFG_LocomotionResponse>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UFG_LocomotionResponse_Statics::ClassParams = {
		&UFG_LocomotionResponse::StaticClass,
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
		0x000840A1u,
		METADATA_PARAMS(Z_Construct_UClass_UFG_LocomotionResponse_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UFG_LocomotionResponse_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UFG_LocomotionResponse()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UFG_LocomotionResponse_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UFG_LocomotionResponse, 3479511772);
	template<> GP3_TEAM01_API UClass* StaticClass<UFG_LocomotionResponse>()
	{
		return UFG_LocomotionResponse::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UFG_LocomotionResponse(Z_Construct_UClass_UFG_LocomotionResponse, &UFG_LocomotionResponse::StaticClass, TEXT("/Script/gp3_team01"), TEXT("UFG_LocomotionResponse"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UFG_LocomotionResponse);
	static FName NAME_UFG_LocomotionResponse_OnLocomotionJump = FName(TEXT("OnLocomotionJump"));
	void IFG_LocomotionResponse::Execute_OnLocomotionJump(UObject* O, UFG_LocomotionComponent* LocomotionComponentOfCaller)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UFG_LocomotionResponse::StaticClass()));
		FG_LocomotionResponse_eventOnLocomotionJump_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_UFG_LocomotionResponse_OnLocomotionJump);
		if (Func)
		{
			Parms.LocomotionComponentOfCaller=LocomotionComponentOfCaller;
			O->ProcessEvent(Func, &Parms);
		}
		else if (auto I = (IFG_LocomotionResponse*)(O->GetNativeInterfaceAddress(UFG_LocomotionResponse::StaticClass())))
		{
			I->OnLocomotionJump_Implementation(LocomotionComponentOfCaller);
		}
	}
	static FName NAME_UFG_LocomotionResponse_OnLocomotionLand = FName(TEXT("OnLocomotionLand"));
	void IFG_LocomotionResponse::Execute_OnLocomotionLand(UObject* O, UFG_LocomotionComponent* LocomotionComponentOfCaller)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UFG_LocomotionResponse::StaticClass()));
		FG_LocomotionResponse_eventOnLocomotionLand_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_UFG_LocomotionResponse_OnLocomotionLand);
		if (Func)
		{
			Parms.LocomotionComponentOfCaller=LocomotionComponentOfCaller;
			O->ProcessEvent(Func, &Parms);
		}
		else if (auto I = (IFG_LocomotionResponse*)(O->GetNativeInterfaceAddress(UFG_LocomotionResponse::StaticClass())))
		{
			I->OnLocomotionLand_Implementation(LocomotionComponentOfCaller);
		}
	}
	static FName NAME_UFG_LocomotionResponse_OnLocomotionLeft = FName(TEXT("OnLocomotionLeft"));
	void IFG_LocomotionResponse::Execute_OnLocomotionLeft(UObject* O, UFG_LocomotionComponent* LocomotionComponentOfCaller)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UFG_LocomotionResponse::StaticClass()));
		FG_LocomotionResponse_eventOnLocomotionLeft_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_UFG_LocomotionResponse_OnLocomotionLeft);
		if (Func)
		{
			Parms.LocomotionComponentOfCaller=LocomotionComponentOfCaller;
			O->ProcessEvent(Func, &Parms);
		}
		else if (auto I = (IFG_LocomotionResponse*)(O->GetNativeInterfaceAddress(UFG_LocomotionResponse::StaticClass())))
		{
			I->OnLocomotionLeft_Implementation(LocomotionComponentOfCaller);
		}
	}
	static FName NAME_UFG_LocomotionResponse_OnLocomotionMove = FName(TEXT("OnLocomotionMove"));
	void IFG_LocomotionResponse::Execute_OnLocomotionMove(UObject* O, UFG_LocomotionComponent* LocomotionComponentOfCaller)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UFG_LocomotionResponse::StaticClass()));
		FG_LocomotionResponse_eventOnLocomotionMove_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_UFG_LocomotionResponse_OnLocomotionMove);
		if (Func)
		{
			Parms.LocomotionComponentOfCaller=LocomotionComponentOfCaller;
			O->ProcessEvent(Func, &Parms);
		}
		else if (auto I = (IFG_LocomotionResponse*)(O->GetNativeInterfaceAddress(UFG_LocomotionResponse::StaticClass())))
		{
			I->OnLocomotionMove_Implementation(LocomotionComponentOfCaller);
		}
	}
	static FName NAME_UFG_LocomotionResponse_OnLocomotionStand = FName(TEXT("OnLocomotionStand"));
	void IFG_LocomotionResponse::Execute_OnLocomotionStand(UObject* O, UFG_LocomotionComponent* LocomotionComponentOfCaller)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UFG_LocomotionResponse::StaticClass()));
		FG_LocomotionResponse_eventOnLocomotionStand_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_UFG_LocomotionResponse_OnLocomotionStand);
		if (Func)
		{
			Parms.LocomotionComponentOfCaller=LocomotionComponentOfCaller;
			O->ProcessEvent(Func, &Parms);
		}
		else if (auto I = (IFG_LocomotionResponse*)(O->GetNativeInterfaceAddress(UFG_LocomotionResponse::StaticClass())))
		{
			I->OnLocomotionStand_Implementation(LocomotionComponentOfCaller);
		}
	}
	static FName NAME_UFG_LocomotionResponse_OnLocomotionTouch = FName(TEXT("OnLocomotionTouch"));
	void IFG_LocomotionResponse::Execute_OnLocomotionTouch(UObject* O, UFG_LocomotionComponent* LocomotionComponentOfCaller, EFG_TouchingState State)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UFG_LocomotionResponse::StaticClass()));
		FG_LocomotionResponse_eventOnLocomotionTouch_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_UFG_LocomotionResponse_OnLocomotionTouch);
		if (Func)
		{
			Parms.LocomotionComponentOfCaller=LocomotionComponentOfCaller;
			Parms.State=State;
			O->ProcessEvent(Func, &Parms);
		}
		else if (auto I = (IFG_LocomotionResponse*)(O->GetNativeInterfaceAddress(UFG_LocomotionResponse::StaticClass())))
		{
			I->OnLocomotionTouch_Implementation(LocomotionComponentOfCaller,State);
		}
	}
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
