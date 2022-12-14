// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "gp3_team01/Public/Player/Gliding/FG_GliderResponse.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFG_GliderResponse() {}
// Cross Module References
	GP3_TEAM01_API UClass* Z_Construct_UClass_UFG_GliderResponse_NoRegister();
	GP3_TEAM01_API UClass* Z_Construct_UClass_UFG_GliderResponse();
	COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
	UPackage* Z_Construct_UPackage__Script_gp3_team01();
	GP3_TEAM01_API UClass* Z_Construct_UClass_UFG_GliderComponent_NoRegister();
	GP3_TEAM01_API UEnum* Z_Construct_UEnum_gp3_team01_EFG_TouchingState();
// End Cross Module References
	DEFINE_FUNCTION(IFG_GliderResponse::execOnGliderTouch)
	{
		P_GET_OBJECT(UFG_GliderComponent,Z_Param_GliderComponentOfCaller);
		P_GET_PROPERTY(FByteProperty,Z_Param_State);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnGliderTouch_Implementation(Z_Param_GliderComponentOfCaller,EFG_TouchingState(Z_Param_State));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(IFG_GliderResponse::execOnGliderLand)
	{
		P_GET_OBJECT(UFG_GliderComponent,Z_Param_GliderComponentOfCaller);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnGliderLand_Implementation(Z_Param_GliderComponentOfCaller);
		P_NATIVE_END;
	}
	void IFG_GliderResponse::OnGliderLand(UFG_GliderComponent* GliderComponentOfCaller)
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_OnGliderLand instead.");
	}
	void IFG_GliderResponse::OnGliderTouch(UFG_GliderComponent* GliderComponentOfCaller, EFG_TouchingState State)
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_OnGliderTouch instead.");
	}
	void UFG_GliderResponse::StaticRegisterNativesUFG_GliderResponse()
	{
		UClass* Class = UFG_GliderResponse::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnGliderLand", &IFG_GliderResponse::execOnGliderLand },
			{ "OnGliderTouch", &IFG_GliderResponse::execOnGliderTouch },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UFG_GliderResponse_OnGliderLand_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GliderComponentOfCaller_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_GliderComponentOfCaller;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFG_GliderResponse_OnGliderLand_Statics::NewProp_GliderComponentOfCaller_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UFG_GliderResponse_OnGliderLand_Statics::NewProp_GliderComponentOfCaller = { "GliderComponentOfCaller", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FG_GliderResponse_eventOnGliderLand_Parms, GliderComponentOfCaller), Z_Construct_UClass_UFG_GliderComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UFG_GliderResponse_OnGliderLand_Statics::NewProp_GliderComponentOfCaller_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UFG_GliderResponse_OnGliderLand_Statics::NewProp_GliderComponentOfCaller_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFG_GliderResponse_OnGliderLand_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFG_GliderResponse_OnGliderLand_Statics::NewProp_GliderComponentOfCaller,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFG_GliderResponse_OnGliderLand_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Player/Gliding/FG_GliderResponse.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFG_GliderResponse_OnGliderLand_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFG_GliderResponse, nullptr, "OnGliderLand", nullptr, nullptr, sizeof(FG_GliderResponse_eventOnGliderLand_Parms), Z_Construct_UFunction_UFG_GliderResponse_OnGliderLand_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFG_GliderResponse_OnGliderLand_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFG_GliderResponse_OnGliderLand_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFG_GliderResponse_OnGliderLand_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFG_GliderResponse_OnGliderLand()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFG_GliderResponse_OnGliderLand_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFG_GliderResponse_OnGliderTouch_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GliderComponentOfCaller_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_GliderComponentOfCaller;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_State;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFG_GliderResponse_OnGliderTouch_Statics::NewProp_GliderComponentOfCaller_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UFG_GliderResponse_OnGliderTouch_Statics::NewProp_GliderComponentOfCaller = { "GliderComponentOfCaller", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FG_GliderResponse_eventOnGliderTouch_Parms, GliderComponentOfCaller), Z_Construct_UClass_UFG_GliderComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UFG_GliderResponse_OnGliderTouch_Statics::NewProp_GliderComponentOfCaller_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UFG_GliderResponse_OnGliderTouch_Statics::NewProp_GliderComponentOfCaller_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UFG_GliderResponse_OnGliderTouch_Statics::NewProp_State = { "State", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FG_GliderResponse_eventOnGliderTouch_Parms, State), Z_Construct_UEnum_gp3_team01_EFG_TouchingState, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFG_GliderResponse_OnGliderTouch_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFG_GliderResponse_OnGliderTouch_Statics::NewProp_GliderComponentOfCaller,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFG_GliderResponse_OnGliderTouch_Statics::NewProp_State,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFG_GliderResponse_OnGliderTouch_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Player/Gliding/FG_GliderResponse.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFG_GliderResponse_OnGliderTouch_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFG_GliderResponse, nullptr, "OnGliderTouch", nullptr, nullptr, sizeof(FG_GliderResponse_eventOnGliderTouch_Parms), Z_Construct_UFunction_UFG_GliderResponse_OnGliderTouch_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFG_GliderResponse_OnGliderTouch_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFG_GliderResponse_OnGliderTouch_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFG_GliderResponse_OnGliderTouch_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFG_GliderResponse_OnGliderTouch()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFG_GliderResponse_OnGliderTouch_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UFG_GliderResponse_NoRegister()
	{
		return UFG_GliderResponse::StaticClass();
	}
	struct Z_Construct_UClass_UFG_GliderResponse_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UFG_GliderResponse_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterface,
		(UObject* (*)())Z_Construct_UPackage__Script_gp3_team01,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UFG_GliderResponse_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UFG_GliderResponse_OnGliderLand, "OnGliderLand" }, // 2383075191
		{ &Z_Construct_UFunction_UFG_GliderResponse_OnGliderTouch, "OnGliderTouch" }, // 2300453799
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFG_GliderResponse_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Player/Gliding/FG_GliderResponse.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UFG_GliderResponse_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IFG_GliderResponse>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UFG_GliderResponse_Statics::ClassParams = {
		&UFG_GliderResponse::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UFG_GliderResponse_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UFG_GliderResponse_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UFG_GliderResponse()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UFG_GliderResponse_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UFG_GliderResponse, 2998635953);
	template<> GP3_TEAM01_API UClass* StaticClass<UFG_GliderResponse>()
	{
		return UFG_GliderResponse::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UFG_GliderResponse(Z_Construct_UClass_UFG_GliderResponse, &UFG_GliderResponse::StaticClass, TEXT("/Script/gp3_team01"), TEXT("UFG_GliderResponse"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UFG_GliderResponse);
	static FName NAME_UFG_GliderResponse_OnGliderLand = FName(TEXT("OnGliderLand"));
	void IFG_GliderResponse::Execute_OnGliderLand(UObject* O, UFG_GliderComponent* GliderComponentOfCaller)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UFG_GliderResponse::StaticClass()));
		FG_GliderResponse_eventOnGliderLand_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_UFG_GliderResponse_OnGliderLand);
		if (Func)
		{
			Parms.GliderComponentOfCaller=GliderComponentOfCaller;
			O->ProcessEvent(Func, &Parms);
		}
		else if (auto I = (IFG_GliderResponse*)(O->GetNativeInterfaceAddress(UFG_GliderResponse::StaticClass())))
		{
			I->OnGliderLand_Implementation(GliderComponentOfCaller);
		}
	}
	static FName NAME_UFG_GliderResponse_OnGliderTouch = FName(TEXT("OnGliderTouch"));
	void IFG_GliderResponse::Execute_OnGliderTouch(UObject* O, UFG_GliderComponent* GliderComponentOfCaller, EFG_TouchingState State)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UFG_GliderResponse::StaticClass()));
		FG_GliderResponse_eventOnGliderTouch_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_UFG_GliderResponse_OnGliderTouch);
		if (Func)
		{
			Parms.GliderComponentOfCaller=GliderComponentOfCaller;
			Parms.State=State;
			O->ProcessEvent(Func, &Parms);
		}
		else if (auto I = (IFG_GliderResponse*)(O->GetNativeInterfaceAddress(UFG_GliderResponse::StaticClass())))
		{
			I->OnGliderTouch_Implementation(GliderComponentOfCaller,State);
		}
	}
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
