// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "gp3_team01/Public/Player/States/Gliding/FG_GlidingSubState.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFG_GlidingSubState() {}
// Cross Module References
	GP3_TEAM01_API UClass* Z_Construct_UClass_UFG_GlidingSubState_NoRegister();
	GP3_TEAM01_API UClass* Z_Construct_UClass_UFG_GlidingSubState();
	GP3_TEAM01_API UClass* Z_Construct_UClass_UFG_PlayerState();
	UPackage* Z_Construct_UPackage__Script_gp3_team01();
	GP3_TEAM01_API UClass* Z_Construct_UClass_UFG_GlidingPlayerState_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UFG_GlidingSubState::execGetContext)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UFG_GlidingPlayerState**)Z_Param__Result=P_THIS->GetContext();
		P_NATIVE_END;
	}
	void UFG_GlidingSubState::StaticRegisterNativesUFG_GlidingSubState()
	{
		UClass* Class = UFG_GlidingSubState::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetContext", &UFG_GlidingSubState::execGetContext },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UFG_GlidingSubState_GetContext_Statics
	{
		struct FG_GlidingSubState_eventGetContext_Parms
		{
			UFG_GlidingPlayerState* ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFG_GlidingSubState_GetContext_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UFG_GlidingSubState_GetContext_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FG_GlidingSubState_eventGetContext_Parms, ReturnValue), Z_Construct_UClass_UFG_GlidingPlayerState_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UFG_GlidingSubState_GetContext_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UFG_GlidingSubState_GetContext_Statics::NewProp_ReturnValue_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFG_GlidingSubState_GetContext_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFG_GlidingSubState_GetContext_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFG_GlidingSubState_GetContext_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Player/States/Gliding/FG_GlidingSubState.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFG_GlidingSubState_GetContext_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFG_GlidingSubState, nullptr, "GetContext", nullptr, nullptr, sizeof(FG_GlidingSubState_eventGetContext_Parms), Z_Construct_UFunction_UFG_GlidingSubState_GetContext_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFG_GlidingSubState_GetContext_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFG_GlidingSubState_GetContext_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFG_GlidingSubState_GetContext_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFG_GlidingSubState_GetContext()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFG_GlidingSubState_GetContext_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UFG_GlidingSubState_NoRegister()
	{
		return UFG_GlidingSubState::StaticClass();
	}
	struct Z_Construct_UClass_UFG_GlidingSubState_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Context_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Context;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UFG_GlidingSubState_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UFG_PlayerState,
		(UObject* (*)())Z_Construct_UPackage__Script_gp3_team01,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UFG_GlidingSubState_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UFG_GlidingSubState_GetContext, "GetContext" }, // 2168478200
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFG_GlidingSubState_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "Player/States/Gliding/FG_GlidingSubState.h" },
		{ "ModuleRelativePath", "Public/Player/States/Gliding/FG_GlidingSubState.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFG_GlidingSubState_Statics::NewProp_Context_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Player/States/Gliding/FG_GlidingSubState.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UFG_GlidingSubState_Statics::NewProp_Context = { "Context", nullptr, (EPropertyFlags)0x0010000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFG_GlidingSubState, Context), Z_Construct_UClass_UFG_GlidingPlayerState_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UFG_GlidingSubState_Statics::NewProp_Context_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFG_GlidingSubState_Statics::NewProp_Context_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UFG_GlidingSubState_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFG_GlidingSubState_Statics::NewProp_Context,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UFG_GlidingSubState_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UFG_GlidingSubState>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UFG_GlidingSubState_Statics::ClassParams = {
		&UFG_GlidingSubState::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UFG_GlidingSubState_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UFG_GlidingSubState_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UFG_GlidingSubState_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UFG_GlidingSubState_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UFG_GlidingSubState()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UFG_GlidingSubState_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UFG_GlidingSubState, 1410766131);
	template<> GP3_TEAM01_API UClass* StaticClass<UFG_GlidingSubState>()
	{
		return UFG_GlidingSubState::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UFG_GlidingSubState(Z_Construct_UClass_UFG_GlidingSubState, &UFG_GlidingSubState::StaticClass, TEXT("/Script/gp3_team01"), TEXT("UFG_GlidingSubState"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UFG_GlidingSubState);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
