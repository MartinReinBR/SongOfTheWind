// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "gp3_team01/Public/Player/States/FG_PlayerState.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFG_PlayerState() {}
// Cross Module References
	GP3_TEAM01_API UClass* Z_Construct_UClass_UFG_PlayerState_NoRegister();
	GP3_TEAM01_API UClass* Z_Construct_UClass_UFG_PlayerState();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	UPackage* Z_Construct_UPackage__Script_gp3_team01();
	GP3_TEAM01_API UClass* Z_Construct_UClass_AFG_PlayerCharacter_NoRegister();
	GP3_TEAM01_API UClass* Z_Construct_UClass_UFG_State_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UFG_PlayerState::execGetTimeSincePush)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetTimeSincePush();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UFG_PlayerState::execGetTimeSinceEnter)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetTimeSinceEnter();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UFG_PlayerState::execGetFGPlayer)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(AFG_PlayerCharacter**)Z_Param__Result=P_THIS->GetFGPlayer();
		P_NATIVE_END;
	}
	void UFG_PlayerState::StaticRegisterNativesUFG_PlayerState()
	{
		UClass* Class = UFG_PlayerState::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetFGPlayer", &UFG_PlayerState::execGetFGPlayer },
			{ "GetTimeSinceEnter", &UFG_PlayerState::execGetTimeSinceEnter },
			{ "GetTimeSincePush", &UFG_PlayerState::execGetTimeSincePush },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UFG_PlayerState_GetFGPlayer_Statics
	{
		struct FG_PlayerState_eventGetFGPlayer_Parms
		{
			AFG_PlayerCharacter* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UFG_PlayerState_GetFGPlayer_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FG_PlayerState_eventGetFGPlayer_Parms, ReturnValue), Z_Construct_UClass_AFG_PlayerCharacter_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFG_PlayerState_GetFGPlayer_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFG_PlayerState_GetFGPlayer_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFG_PlayerState_GetFGPlayer_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Player/States/FG_PlayerState.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFG_PlayerState_GetFGPlayer_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFG_PlayerState, nullptr, "GetFGPlayer", nullptr, nullptr, sizeof(FG_PlayerState_eventGetFGPlayer_Parms), Z_Construct_UFunction_UFG_PlayerState_GetFGPlayer_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFG_PlayerState_GetFGPlayer_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFG_PlayerState_GetFGPlayer_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFG_PlayerState_GetFGPlayer_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFG_PlayerState_GetFGPlayer()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFG_PlayerState_GetFGPlayer_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFG_PlayerState_GetTimeSinceEnter_Statics
	{
		struct FG_PlayerState_eventGetTimeSinceEnter_Parms
		{
			float ReturnValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UFG_PlayerState_GetTimeSinceEnter_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FG_PlayerState_eventGetTimeSinceEnter_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFG_PlayerState_GetTimeSinceEnter_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFG_PlayerState_GetTimeSinceEnter_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFG_PlayerState_GetTimeSinceEnter_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Player/States/FG_PlayerState.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFG_PlayerState_GetTimeSinceEnter_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFG_PlayerState, nullptr, "GetTimeSinceEnter", nullptr, nullptr, sizeof(FG_PlayerState_eventGetTimeSinceEnter_Parms), Z_Construct_UFunction_UFG_PlayerState_GetTimeSinceEnter_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFG_PlayerState_GetTimeSinceEnter_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFG_PlayerState_GetTimeSinceEnter_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFG_PlayerState_GetTimeSinceEnter_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFG_PlayerState_GetTimeSinceEnter()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFG_PlayerState_GetTimeSinceEnter_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFG_PlayerState_GetTimeSincePush_Statics
	{
		struct FG_PlayerState_eventGetTimeSincePush_Parms
		{
			float ReturnValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UFG_PlayerState_GetTimeSincePush_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FG_PlayerState_eventGetTimeSincePush_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFG_PlayerState_GetTimeSincePush_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFG_PlayerState_GetTimeSincePush_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFG_PlayerState_GetTimeSincePush_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Player/States/FG_PlayerState.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFG_PlayerState_GetTimeSincePush_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFG_PlayerState, nullptr, "GetTimeSincePush", nullptr, nullptr, sizeof(FG_PlayerState_eventGetTimeSincePush_Parms), Z_Construct_UFunction_UFG_PlayerState_GetTimeSincePush_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFG_PlayerState_GetTimeSincePush_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFG_PlayerState_GetTimeSincePush_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFG_PlayerState_GetTimeSincePush_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFG_PlayerState_GetTimeSincePush()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFG_PlayerState_GetTimeSincePush_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UFG_PlayerState_NoRegister()
	{
		return UFG_PlayerState::StaticClass();
	}
	struct Z_Construct_UClass_UFG_PlayerState_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FGPlayerCharacter_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_FGPlayerCharacter;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UFG_PlayerState_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_gp3_team01,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UFG_PlayerState_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UFG_PlayerState_GetFGPlayer, "GetFGPlayer" }, // 2452306151
		{ &Z_Construct_UFunction_UFG_PlayerState_GetTimeSinceEnter, "GetTimeSinceEnter" }, // 2643554764
		{ &Z_Construct_UFunction_UFG_PlayerState_GetTimeSincePush, "GetTimeSincePush" }, // 2193707767
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFG_PlayerState_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "Player/States/FG_PlayerState.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Player/States/FG_PlayerState.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFG_PlayerState_Statics::NewProp_FGPlayerCharacter_MetaData[] = {
		{ "ModuleRelativePath", "Public/Player/States/FG_PlayerState.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UFG_PlayerState_Statics::NewProp_FGPlayerCharacter = { "FGPlayerCharacter", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFG_PlayerState, FGPlayerCharacter), Z_Construct_UClass_AFG_PlayerCharacter_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UFG_PlayerState_Statics::NewProp_FGPlayerCharacter_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFG_PlayerState_Statics::NewProp_FGPlayerCharacter_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UFG_PlayerState_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFG_PlayerState_Statics::NewProp_FGPlayerCharacter,
	};
		const UE4CodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_UFG_PlayerState_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UFG_State_NoRegister, (int32)VTABLE_OFFSET(UFG_PlayerState, IFG_State), false },
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UFG_PlayerState_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UFG_PlayerState>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UFG_PlayerState_Statics::ClassParams = {
		&UFG_PlayerState::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UFG_PlayerState_Statics::PropPointers,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UFG_PlayerState_Statics::PropPointers),
		UE_ARRAY_COUNT(InterfaceParams),
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UFG_PlayerState_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UFG_PlayerState_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UFG_PlayerState()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UFG_PlayerState_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UFG_PlayerState, 3730848789);
	template<> GP3_TEAM01_API UClass* StaticClass<UFG_PlayerState>()
	{
		return UFG_PlayerState::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UFG_PlayerState(Z_Construct_UClass_UFG_PlayerState, &UFG_PlayerState::StaticClass, TEXT("/Script/gp3_team01"), TEXT("UFG_PlayerState"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UFG_PlayerState);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
