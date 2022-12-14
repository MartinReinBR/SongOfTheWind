// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "gp3_team01/Public/FG_GameInstance.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFG_GameInstance() {}
// Cross Module References
	GP3_TEAM01_API UClass* Z_Construct_UClass_UFG_GameInstance_NoRegister();
	GP3_TEAM01_API UClass* Z_Construct_UClass_UFG_GameInstance();
	ENGINE_API UClass* Z_Construct_UClass_UGameInstance();
	UPackage* Z_Construct_UPackage__Script_gp3_team01();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
	ENGINE_API UClass* Z_Construct_UClass_UCameraComponent_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UFG_GameInstance::execGet)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContext);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UFG_GameInstance**)Z_Param__Result=UFG_GameInstance::Get(Z_Param_WorldContext);
		P_NATIVE_END;
	}
	static FName NAME_UFG_GameInstance_GetCameraOrientation = FName(TEXT("GetCameraOrientation"));
	FRotator UFG_GameInstance::GetCameraOrientation()
	{
		FG_GameInstance_eventGetCameraOrientation_Parms Parms;
		ProcessEvent(FindFunctionChecked(NAME_UFG_GameInstance_GetCameraOrientation),&Parms);
		return Parms.ReturnValue;
	}
	static FName NAME_UFG_GameInstance_GetMainCamera = FName(TEXT("GetMainCamera"));
	UCameraComponent* UFG_GameInstance::GetMainCamera()
	{
		FG_GameInstance_eventGetMainCamera_Parms Parms;
		ProcessEvent(FindFunctionChecked(NAME_UFG_GameInstance_GetMainCamera),&Parms);
		return Parms.ReturnValue;
	}
	void UFG_GameInstance::StaticRegisterNativesUFG_GameInstance()
	{
		UClass* Class = UFG_GameInstance::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "Get", &UFG_GameInstance::execGet },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UFG_GameInstance_Get_Statics
	{
		struct FG_GameInstance_eventGet_Parms
		{
			UObject* WorldContext;
			UFG_GameInstance* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContext;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UFG_GameInstance_Get_Statics::NewProp_WorldContext = { "WorldContext", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FG_GameInstance_eventGet_Parms, WorldContext), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UFG_GameInstance_Get_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FG_GameInstance_eventGet_Parms, ReturnValue), Z_Construct_UClass_UFG_GameInstance_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFG_GameInstance_Get_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFG_GameInstance_Get_Statics::NewProp_WorldContext,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFG_GameInstance_Get_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFG_GameInstance_Get_Statics::Function_MetaDataParams[] = {
		{ "DisplayName", "GetGameInstance" },
		{ "ModuleRelativePath", "Public/FG_GameInstance.h" },
		{ "WorldContext", "WorldContext" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFG_GameInstance_Get_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFG_GameInstance, nullptr, "Get", nullptr, nullptr, sizeof(FG_GameInstance_eventGet_Parms), Z_Construct_UFunction_UFG_GameInstance_Get_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFG_GameInstance_Get_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFG_GameInstance_Get_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFG_GameInstance_Get_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFG_GameInstance_Get()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFG_GameInstance_Get_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFG_GameInstance_GetCameraOrientation_Statics
	{
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFG_GameInstance_GetCameraOrientation_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FG_GameInstance_eventGetCameraOrientation_Parms, ReturnValue), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFG_GameInstance_GetCameraOrientation_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFG_GameInstance_GetCameraOrientation_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFG_GameInstance_GetCameraOrientation_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/FG_GameInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFG_GameInstance_GetCameraOrientation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFG_GameInstance, nullptr, "GetCameraOrientation", nullptr, nullptr, sizeof(FG_GameInstance_eventGetCameraOrientation_Parms), Z_Construct_UFunction_UFG_GameInstance_GetCameraOrientation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFG_GameInstance_GetCameraOrientation_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C820800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFG_GameInstance_GetCameraOrientation_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFG_GameInstance_GetCameraOrientation_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFG_GameInstance_GetCameraOrientation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFG_GameInstance_GetCameraOrientation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFG_GameInstance_GetMainCamera_Statics
	{
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFG_GameInstance_GetMainCamera_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UFG_GameInstance_GetMainCamera_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FG_GameInstance_eventGetMainCamera_Parms, ReturnValue), Z_Construct_UClass_UCameraComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UFG_GameInstance_GetMainCamera_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UFG_GameInstance_GetMainCamera_Statics::NewProp_ReturnValue_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFG_GameInstance_GetMainCamera_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFG_GameInstance_GetMainCamera_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFG_GameInstance_GetMainCamera_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/FG_GameInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFG_GameInstance_GetMainCamera_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFG_GameInstance, nullptr, "GetMainCamera", nullptr, nullptr, sizeof(FG_GameInstance_eventGetMainCamera_Parms), Z_Construct_UFunction_UFG_GameInstance_GetMainCamera_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFG_GameInstance_GetMainCamera_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFG_GameInstance_GetMainCamera_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFG_GameInstance_GetMainCamera_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFG_GameInstance_GetMainCamera()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFG_GameInstance_GetMainCamera_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UFG_GameInstance_NoRegister()
	{
		return UFG_GameInstance::StaticClass();
	}
	struct Z_Construct_UClass_UFG_GameInstance_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UFG_GameInstance_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UGameInstance,
		(UObject* (*)())Z_Construct_UPackage__Script_gp3_team01,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UFG_GameInstance_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UFG_GameInstance_Get, "Get" }, // 3769447118
		{ &Z_Construct_UFunction_UFG_GameInstance_GetCameraOrientation, "GetCameraOrientation" }, // 931611734
		{ &Z_Construct_UFunction_UFG_GameInstance_GetMainCamera, "GetMainCamera" }, // 852209656
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFG_GameInstance_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "FG_GameInstance.h" },
		{ "ModuleRelativePath", "Public/FG_GameInstance.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UFG_GameInstance_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UFG_GameInstance>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UFG_GameInstance_Statics::ClassParams = {
		&UFG_GameInstance::StaticClass,
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
		0x009000A8u,
		METADATA_PARAMS(Z_Construct_UClass_UFG_GameInstance_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UFG_GameInstance_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UFG_GameInstance()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UFG_GameInstance_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UFG_GameInstance, 579064830);
	template<> GP3_TEAM01_API UClass* StaticClass<UFG_GameInstance>()
	{
		return UFG_GameInstance::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UFG_GameInstance(Z_Construct_UClass_UFG_GameInstance, &UFG_GameInstance::StaticClass, TEXT("/Script/gp3_team01"), TEXT("UFG_GameInstance"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UFG_GameInstance);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
