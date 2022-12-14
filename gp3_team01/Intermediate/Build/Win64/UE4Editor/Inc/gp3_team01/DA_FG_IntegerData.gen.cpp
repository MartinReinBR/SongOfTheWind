// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "gp3_team01/Public/LevelElements/Collectible/DA_FG_IntegerData.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDA_FG_IntegerData() {}
// Cross Module References
	GP3_TEAM01_API UClass* Z_Construct_UClass_UDA_FG_IntegerData_NoRegister();
	GP3_TEAM01_API UClass* Z_Construct_UClass_UDA_FG_IntegerData();
	ENGINE_API UClass* Z_Construct_UClass_UDataAsset();
	UPackage* Z_Construct_UPackage__Script_gp3_team01();
// End Cross Module References
	DEFINE_FUNCTION(UDA_FG_IntegerData::execDecrement)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_Value);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Decrement(Z_Param_Value);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDA_FG_IntegerData::execIncrement)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_Value);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Increment(Z_Param_Value);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDA_FG_IntegerData::execSet)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_Value);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Set(Z_Param_Value);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDA_FG_IntegerData::execGet)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->Get();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDA_FG_IntegerData::execReset)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Reset();
		P_NATIVE_END;
	}
	void UDA_FG_IntegerData::StaticRegisterNativesUDA_FG_IntegerData()
	{
		UClass* Class = UDA_FG_IntegerData::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "Decrement", &UDA_FG_IntegerData::execDecrement },
			{ "Get", &UDA_FG_IntegerData::execGet },
			{ "Increment", &UDA_FG_IntegerData::execIncrement },
			{ "Reset", &UDA_FG_IntegerData::execReset },
			{ "Set", &UDA_FG_IntegerData::execSet },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UDA_FG_IntegerData_Decrement_Statics
	{
		struct DA_FG_IntegerData_eventDecrement_Parms
		{
			int32 Value;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Value;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UDA_FG_IntegerData_Decrement_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DA_FG_IntegerData_eventDecrement_Parms, Value), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDA_FG_IntegerData_Decrement_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDA_FG_IntegerData_Decrement_Statics::NewProp_Value,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDA_FG_IntegerData_Decrement_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/LevelElements/Collectible/DA_FG_IntegerData.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UDA_FG_IntegerData_Decrement_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDA_FG_IntegerData, nullptr, "Decrement", nullptr, nullptr, sizeof(DA_FG_IntegerData_eventDecrement_Parms), Z_Construct_UFunction_UDA_FG_IntegerData_Decrement_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDA_FG_IntegerData_Decrement_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDA_FG_IntegerData_Decrement_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDA_FG_IntegerData_Decrement_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDA_FG_IntegerData_Decrement()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UDA_FG_IntegerData_Decrement_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDA_FG_IntegerData_Get_Statics
	{
		struct DA_FG_IntegerData_eventGet_Parms
		{
			int32 ReturnValue;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UDA_FG_IntegerData_Get_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DA_FG_IntegerData_eventGet_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDA_FG_IntegerData_Get_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDA_FG_IntegerData_Get_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDA_FG_IntegerData_Get_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/LevelElements/Collectible/DA_FG_IntegerData.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UDA_FG_IntegerData_Get_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDA_FG_IntegerData, nullptr, "Get", nullptr, nullptr, sizeof(DA_FG_IntegerData_eventGet_Parms), Z_Construct_UFunction_UDA_FG_IntegerData_Get_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDA_FG_IntegerData_Get_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDA_FG_IntegerData_Get_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDA_FG_IntegerData_Get_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDA_FG_IntegerData_Get()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UDA_FG_IntegerData_Get_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDA_FG_IntegerData_Increment_Statics
	{
		struct DA_FG_IntegerData_eventIncrement_Parms
		{
			int32 Value;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Value;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UDA_FG_IntegerData_Increment_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DA_FG_IntegerData_eventIncrement_Parms, Value), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDA_FG_IntegerData_Increment_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDA_FG_IntegerData_Increment_Statics::NewProp_Value,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDA_FG_IntegerData_Increment_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/LevelElements/Collectible/DA_FG_IntegerData.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UDA_FG_IntegerData_Increment_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDA_FG_IntegerData, nullptr, "Increment", nullptr, nullptr, sizeof(DA_FG_IntegerData_eventIncrement_Parms), Z_Construct_UFunction_UDA_FG_IntegerData_Increment_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDA_FG_IntegerData_Increment_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDA_FG_IntegerData_Increment_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDA_FG_IntegerData_Increment_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDA_FG_IntegerData_Increment()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UDA_FG_IntegerData_Increment_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDA_FG_IntegerData_Reset_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDA_FG_IntegerData_Reset_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/LevelElements/Collectible/DA_FG_IntegerData.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UDA_FG_IntegerData_Reset_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDA_FG_IntegerData, nullptr, "Reset", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDA_FG_IntegerData_Reset_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDA_FG_IntegerData_Reset_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDA_FG_IntegerData_Reset()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UDA_FG_IntegerData_Reset_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDA_FG_IntegerData_Set_Statics
	{
		struct DA_FG_IntegerData_eventSet_Parms
		{
			int32 Value;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Value;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UDA_FG_IntegerData_Set_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DA_FG_IntegerData_eventSet_Parms, Value), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDA_FG_IntegerData_Set_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDA_FG_IntegerData_Set_Statics::NewProp_Value,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDA_FG_IntegerData_Set_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/LevelElements/Collectible/DA_FG_IntegerData.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UDA_FG_IntegerData_Set_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDA_FG_IntegerData, nullptr, "Set", nullptr, nullptr, sizeof(DA_FG_IntegerData_eventSet_Parms), Z_Construct_UFunction_UDA_FG_IntegerData_Set_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDA_FG_IntegerData_Set_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDA_FG_IntegerData_Set_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDA_FG_IntegerData_Set_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDA_FG_IntegerData_Set()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UDA_FG_IntegerData_Set_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UDA_FG_IntegerData_NoRegister()
	{
		return UDA_FG_IntegerData::StaticClass();
	}
	struct Z_Construct_UClass_UDA_FG_IntegerData_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDA_FG_IntegerData_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UDataAsset,
		(UObject* (*)())Z_Construct_UPackage__Script_gp3_team01,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UDA_FG_IntegerData_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UDA_FG_IntegerData_Decrement, "Decrement" }, // 2560904714
		{ &Z_Construct_UFunction_UDA_FG_IntegerData_Get, "Get" }, // 2768633221
		{ &Z_Construct_UFunction_UDA_FG_IntegerData_Increment, "Increment" }, // 578075938
		{ &Z_Construct_UFunction_UDA_FG_IntegerData_Reset, "Reset" }, // 2700280503
		{ &Z_Construct_UFunction_UDA_FG_IntegerData_Set, "Set" }, // 271725330
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDA_FG_IntegerData_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "LevelElements/Collectible/DA_FG_IntegerData.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/LevelElements/Collectible/DA_FG_IntegerData.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDA_FG_IntegerData_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDA_FG_IntegerData>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UDA_FG_IntegerData_Statics::ClassParams = {
		&UDA_FG_IntegerData::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UDA_FG_IntegerData_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UDA_FG_IntegerData_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UDA_FG_IntegerData()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UDA_FG_IntegerData_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UDA_FG_IntegerData, 1667285538);
	template<> GP3_TEAM01_API UClass* StaticClass<UDA_FG_IntegerData>()
	{
		return UDA_FG_IntegerData::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UDA_FG_IntegerData(Z_Construct_UClass_UDA_FG_IntegerData, &UDA_FG_IntegerData::StaticClass, TEXT("/Script/gp3_team01"), TEXT("UDA_FG_IntegerData"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDA_FG_IntegerData);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
