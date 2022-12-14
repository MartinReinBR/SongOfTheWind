// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "gp3_team01/Public/Player/States/Core/FG_GlidingPlayerState.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFG_GlidingPlayerState() {}
// Cross Module References
	GP3_TEAM01_API UClass* Z_Construct_UClass_UFG_GlidingPlayerState_NoRegister();
	GP3_TEAM01_API UClass* Z_Construct_UClass_UFG_GlidingPlayerState();
	GP3_TEAM01_API UClass* Z_Construct_UClass_UFG_PlayerState();
	UPackage* Z_Construct_UPackage__Script_gp3_team01();
	ENGINE_API UClass* Z_Construct_UClass_UPrimitiveComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FHitResult();
	GP3_TEAM01_API UClass* Z_Construct_UClass_UFG_LocomotionComponent_NoRegister();
	GP3_TEAM01_API UClass* Z_Construct_UClass_UFG_SFSM_NoRegister();
	GP3_TEAM01_API UClass* Z_Construct_UClass_UFG_GlidingIdleSubState_NoRegister();
	GP3_TEAM01_API UClass* Z_Construct_UClass_UFG_GlidingSteeringSubState_NoRegister();
	GP3_TEAM01_API UClass* Z_Construct_UClass_UFG_GliderComponent_NoRegister();
	GP3_TEAM01_API UClass* Z_Construct_UClass_UFG_DA_Instrument_NoRegister();
	GP3_TEAM01_API UClass* Z_Construct_UClass_UInstrumentChord_NoRegister();
	GP3_TEAM01_API UClass* Z_Construct_UClass_UFG_InstrumentComponent_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UFG_GlidingPlayerState::execOnCollision)
	{
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_PrimitiveComponent);
		P_GET_OBJECT(AActor,Z_Param_Actor);
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_PrimitiveComponent1);
		P_GET_STRUCT(FVector,Z_Param_Vector);
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_HitResult);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnCollision(Z_Param_PrimitiveComponent,Z_Param_Actor,Z_Param_PrimitiveComponent1,Z_Param_Vector,Z_Param_Out_HitResult);
		P_NATIVE_END;
	}
	void UFG_GlidingPlayerState::StaticRegisterNativesUFG_GlidingPlayerState()
	{
		UClass* Class = UFG_GlidingPlayerState::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnCollision", &UFG_GlidingPlayerState::execOnCollision },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UFG_GlidingPlayerState_OnCollision_Statics
	{
		struct FG_GlidingPlayerState_eventOnCollision_Parms
		{
			UPrimitiveComponent* PrimitiveComponent;
			AActor* Actor;
			UPrimitiveComponent* PrimitiveComponent1;
			FVector Vector;
			FHitResult HitResult;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PrimitiveComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PrimitiveComponent;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Actor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PrimitiveComponent1_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PrimitiveComponent1;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Vector;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HitResult_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_HitResult;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFG_GlidingPlayerState_OnCollision_Statics::NewProp_PrimitiveComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UFG_GlidingPlayerState_OnCollision_Statics::NewProp_PrimitiveComponent = { "PrimitiveComponent", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FG_GlidingPlayerState_eventOnCollision_Parms, PrimitiveComponent), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UFG_GlidingPlayerState_OnCollision_Statics::NewProp_PrimitiveComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UFG_GlidingPlayerState_OnCollision_Statics::NewProp_PrimitiveComponent_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UFG_GlidingPlayerState_OnCollision_Statics::NewProp_Actor = { "Actor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FG_GlidingPlayerState_eventOnCollision_Parms, Actor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFG_GlidingPlayerState_OnCollision_Statics::NewProp_PrimitiveComponent1_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UFG_GlidingPlayerState_OnCollision_Statics::NewProp_PrimitiveComponent1 = { "PrimitiveComponent1", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FG_GlidingPlayerState_eventOnCollision_Parms, PrimitiveComponent1), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UFG_GlidingPlayerState_OnCollision_Statics::NewProp_PrimitiveComponent1_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UFG_GlidingPlayerState_OnCollision_Statics::NewProp_PrimitiveComponent1_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFG_GlidingPlayerState_OnCollision_Statics::NewProp_Vector = { "Vector", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FG_GlidingPlayerState_eventOnCollision_Parms, Vector), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFG_GlidingPlayerState_OnCollision_Statics::NewProp_HitResult_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFG_GlidingPlayerState_OnCollision_Statics::NewProp_HitResult = { "HitResult", nullptr, (EPropertyFlags)0x0010008008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FG_GlidingPlayerState_eventOnCollision_Parms, HitResult), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(Z_Construct_UFunction_UFG_GlidingPlayerState_OnCollision_Statics::NewProp_HitResult_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UFG_GlidingPlayerState_OnCollision_Statics::NewProp_HitResult_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFG_GlidingPlayerState_OnCollision_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFG_GlidingPlayerState_OnCollision_Statics::NewProp_PrimitiveComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFG_GlidingPlayerState_OnCollision_Statics::NewProp_Actor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFG_GlidingPlayerState_OnCollision_Statics::NewProp_PrimitiveComponent1,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFG_GlidingPlayerState_OnCollision_Statics::NewProp_Vector,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFG_GlidingPlayerState_OnCollision_Statics::NewProp_HitResult,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFG_GlidingPlayerState_OnCollision_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Player/States/Core/FG_GlidingPlayerState.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFG_GlidingPlayerState_OnCollision_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFG_GlidingPlayerState, nullptr, "OnCollision", nullptr, nullptr, sizeof(FG_GlidingPlayerState_eventOnCollision_Parms), Z_Construct_UFunction_UFG_GlidingPlayerState_OnCollision_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFG_GlidingPlayerState_OnCollision_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00C20401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFG_GlidingPlayerState_OnCollision_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFG_GlidingPlayerState_OnCollision_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFG_GlidingPlayerState_OnCollision()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFG_GlidingPlayerState_OnCollision_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UFG_GlidingPlayerState_NoRegister()
	{
		return UFG_GlidingPlayerState::StaticClass();
	}
	struct Z_Construct_UClass_UFG_GlidingPlayerState_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Locomotion_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Locomotion;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Primitive_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Primitive;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SubStateMachine_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SubStateMachine;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GlidingIdleSubState_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_GlidingIdleSubState;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GlidingSteeringSubState_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_GlidingSteeringSubState;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GliderComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_GliderComponent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Instrument_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Instrument;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Chimes_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Chimes;
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
	UObject* (*const Z_Construct_UClass_UFG_GlidingPlayerState_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UFG_PlayerState,
		(UObject* (*)())Z_Construct_UPackage__Script_gp3_team01,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UFG_GlidingPlayerState_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UFG_GlidingPlayerState_OnCollision, "OnCollision" }, // 4187691235
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFG_GlidingPlayerState_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "Player/States/Core/FG_GlidingPlayerState.h" },
		{ "ModuleRelativePath", "Public/Player/States/Core/FG_GlidingPlayerState.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFG_GlidingPlayerState_Statics::NewProp_Locomotion_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Player/States/Core/FG_GlidingPlayerState.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UFG_GlidingPlayerState_Statics::NewProp_Locomotion = { "Locomotion", nullptr, (EPropertyFlags)0x0020080000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFG_GlidingPlayerState, Locomotion), Z_Construct_UClass_UFG_LocomotionComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UFG_GlidingPlayerState_Statics::NewProp_Locomotion_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFG_GlidingPlayerState_Statics::NewProp_Locomotion_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFG_GlidingPlayerState_Statics::NewProp_Primitive_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Player/States/Core/FG_GlidingPlayerState.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UFG_GlidingPlayerState_Statics::NewProp_Primitive = { "Primitive", nullptr, (EPropertyFlags)0x0020080000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFG_GlidingPlayerState, Primitive), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UFG_GlidingPlayerState_Statics::NewProp_Primitive_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFG_GlidingPlayerState_Statics::NewProp_Primitive_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFG_GlidingPlayerState_Statics::NewProp_SubStateMachine_MetaData[] = {
		{ "Category", "FG_GlidingPlayerState" },
		{ "ModuleRelativePath", "Public/Player/States/Core/FG_GlidingPlayerState.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UFG_GlidingPlayerState_Statics::NewProp_SubStateMachine = { "SubStateMachine", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFG_GlidingPlayerState, SubStateMachine), Z_Construct_UClass_UFG_SFSM_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UFG_GlidingPlayerState_Statics::NewProp_SubStateMachine_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFG_GlidingPlayerState_Statics::NewProp_SubStateMachine_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFG_GlidingPlayerState_Statics::NewProp_GlidingIdleSubState_MetaData[] = {
		{ "Category", "FG_GlidingPlayerState" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Player/States/Core/FG_GlidingPlayerState.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UFG_GlidingPlayerState_Statics::NewProp_GlidingIdleSubState = { "GlidingIdleSubState", nullptr, (EPropertyFlags)0x00100000000a001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFG_GlidingPlayerState, GlidingIdleSubState), Z_Construct_UClass_UFG_GlidingIdleSubState_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UFG_GlidingPlayerState_Statics::NewProp_GlidingIdleSubState_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFG_GlidingPlayerState_Statics::NewProp_GlidingIdleSubState_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFG_GlidingPlayerState_Statics::NewProp_GlidingSteeringSubState_MetaData[] = {
		{ "Category", "FG_GlidingPlayerState" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Player/States/Core/FG_GlidingPlayerState.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UFG_GlidingPlayerState_Statics::NewProp_GlidingSteeringSubState = { "GlidingSteeringSubState", nullptr, (EPropertyFlags)0x00100000000a001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFG_GlidingPlayerState, GlidingSteeringSubState), Z_Construct_UClass_UFG_GlidingSteeringSubState_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UFG_GlidingPlayerState_Statics::NewProp_GlidingSteeringSubState_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFG_GlidingPlayerState_Statics::NewProp_GlidingSteeringSubState_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFG_GlidingPlayerState_Statics::NewProp_GliderComponent_MetaData[] = {
		{ "Category", "FG_GlidingPlayerState" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Player/States/Core/FG_GlidingPlayerState.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UFG_GlidingPlayerState_Statics::NewProp_GliderComponent = { "GliderComponent", nullptr, (EPropertyFlags)0x00100000000a001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFG_GlidingPlayerState, GliderComponent), Z_Construct_UClass_UFG_GliderComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UFG_GlidingPlayerState_Statics::NewProp_GliderComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFG_GlidingPlayerState_Statics::NewProp_GliderComponent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFG_GlidingPlayerState_Statics::NewProp_Instrument_MetaData[] = {
		{ "Category", "FG_GlidingPlayerState" },
		{ "ModuleRelativePath", "Public/Player/States/Core/FG_GlidingPlayerState.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UFG_GlidingPlayerState_Statics::NewProp_Instrument = { "Instrument", nullptr, (EPropertyFlags)0x0010000000010005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFG_GlidingPlayerState, Instrument), Z_Construct_UClass_UFG_DA_Instrument_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UFG_GlidingPlayerState_Statics::NewProp_Instrument_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFG_GlidingPlayerState_Statics::NewProp_Instrument_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFG_GlidingPlayerState_Statics::NewProp_Chimes_MetaData[] = {
		{ "Category", "FG_GlidingPlayerState" },
		{ "ModuleRelativePath", "Public/Player/States/Core/FG_GlidingPlayerState.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UFG_GlidingPlayerState_Statics::NewProp_Chimes = { "Chimes", nullptr, (EPropertyFlags)0x0010000000010005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFG_GlidingPlayerState, Chimes), Z_Construct_UClass_UFG_DA_Instrument_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UFG_GlidingPlayerState_Statics::NewProp_Chimes_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFG_GlidingPlayerState_Statics::NewProp_Chimes_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFG_GlidingPlayerState_Statics::NewProp_CurrentChord_MetaData[] = {
		{ "ModuleRelativePath", "Public/Player/States/Core/FG_GlidingPlayerState.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UFG_GlidingPlayerState_Statics::NewProp_CurrentChord = { "CurrentChord", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFG_GlidingPlayerState, CurrentChord), Z_Construct_UClass_UInstrumentChord_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UFG_GlidingPlayerState_Statics::NewProp_CurrentChord_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFG_GlidingPlayerState_Statics::NewProp_CurrentChord_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFG_GlidingPlayerState_Statics::NewProp_InstrumentHandler_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Player/States/Core/FG_GlidingPlayerState.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UFG_GlidingPlayerState_Statics::NewProp_InstrumentHandler = { "InstrumentHandler", nullptr, (EPropertyFlags)0x0010000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFG_GlidingPlayerState, InstrumentHandler), Z_Construct_UClass_UFG_InstrumentComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UFG_GlidingPlayerState_Statics::NewProp_InstrumentHandler_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFG_GlidingPlayerState_Statics::NewProp_InstrumentHandler_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UFG_GlidingPlayerState_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFG_GlidingPlayerState_Statics::NewProp_Locomotion,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFG_GlidingPlayerState_Statics::NewProp_Primitive,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFG_GlidingPlayerState_Statics::NewProp_SubStateMachine,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFG_GlidingPlayerState_Statics::NewProp_GlidingIdleSubState,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFG_GlidingPlayerState_Statics::NewProp_GlidingSteeringSubState,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFG_GlidingPlayerState_Statics::NewProp_GliderComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFG_GlidingPlayerState_Statics::NewProp_Instrument,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFG_GlidingPlayerState_Statics::NewProp_Chimes,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFG_GlidingPlayerState_Statics::NewProp_CurrentChord,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFG_GlidingPlayerState_Statics::NewProp_InstrumentHandler,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UFG_GlidingPlayerState_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UFG_GlidingPlayerState>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UFG_GlidingPlayerState_Statics::ClassParams = {
		&UFG_GlidingPlayerState::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UFG_GlidingPlayerState_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UFG_GlidingPlayerState_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UFG_GlidingPlayerState_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UFG_GlidingPlayerState_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UFG_GlidingPlayerState()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UFG_GlidingPlayerState_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UFG_GlidingPlayerState, 834201939);
	template<> GP3_TEAM01_API UClass* StaticClass<UFG_GlidingPlayerState>()
	{
		return UFG_GlidingPlayerState::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UFG_GlidingPlayerState(Z_Construct_UClass_UFG_GlidingPlayerState, &UFG_GlidingPlayerState::StaticClass, TEXT("/Script/gp3_team01"), TEXT("UFG_GlidingPlayerState"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UFG_GlidingPlayerState);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
