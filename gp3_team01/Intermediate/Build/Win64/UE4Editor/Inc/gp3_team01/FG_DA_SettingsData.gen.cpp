// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "gp3_team01/Public/FG_DA_SettingsData.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFG_DA_SettingsData() {}
// Cross Module References
	GP3_TEAM01_API UFunction* Z_Construct_UDelegateFunction_gp3_team01_BooleanGraphicSettingChanged__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_gp3_team01();
	GP3_TEAM01_API UClass* Z_Construct_UClass_UFG_DA_SettingsData_NoRegister();
	GP3_TEAM01_API UClass* Z_Construct_UClass_UFG_DA_SettingsData();
	ENGINE_API UClass* Z_Construct_UClass_UDataAsset();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_gp3_team01_BooleanGraphicSettingChanged__DelegateSignature_Statics
	{
		struct _Script_gp3_team01_eventBooleanGraphicSettingChanged_Parms
		{
			bool bIsEnabled;
		};
		static void NewProp_bIsEnabled_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsEnabled;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UDelegateFunction_gp3_team01_BooleanGraphicSettingChanged__DelegateSignature_Statics::NewProp_bIsEnabled_SetBit(void* Obj)
	{
		((_Script_gp3_team01_eventBooleanGraphicSettingChanged_Parms*)Obj)->bIsEnabled = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UDelegateFunction_gp3_team01_BooleanGraphicSettingChanged__DelegateSignature_Statics::NewProp_bIsEnabled = { "bIsEnabled", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(_Script_gp3_team01_eventBooleanGraphicSettingChanged_Parms), &Z_Construct_UDelegateFunction_gp3_team01_BooleanGraphicSettingChanged__DelegateSignature_Statics::NewProp_bIsEnabled_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_gp3_team01_BooleanGraphicSettingChanged__DelegateSignature_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_gp3_team01_BooleanGraphicSettingChanged__DelegateSignature_Statics::NewProp_bIsEnabled,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_gp3_team01_BooleanGraphicSettingChanged__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/FG_DA_SettingsData.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_gp3_team01_BooleanGraphicSettingChanged__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_gp3_team01, nullptr, "BooleanGraphicSettingChanged__DelegateSignature", nullptr, nullptr, sizeof(_Script_gp3_team01_eventBooleanGraphicSettingChanged_Parms), Z_Construct_UDelegateFunction_gp3_team01_BooleanGraphicSettingChanged__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_gp3_team01_BooleanGraphicSettingChanged__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130004, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_gp3_team01_BooleanGraphicSettingChanged__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_gp3_team01_BooleanGraphicSettingChanged__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_gp3_team01_BooleanGraphicSettingChanged__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_gp3_team01_BooleanGraphicSettingChanged__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	DEFINE_FUNCTION(UFG_DA_SettingsData::execSetFixedFrameRate)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_FrameRate);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetFixedFrameRate(Z_Param_FrameRate);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UFG_DA_SettingsData::execGetFixedFrameRate)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetFixedFrameRate();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UFG_DA_SettingsData::execSetMotionBlurOn)
	{
		P_GET_UBOOL(Z_Param_Value);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetMotionBlurOn(Z_Param_Value);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UFG_DA_SettingsData::execSetVSyncOn)
	{
		P_GET_UBOOL(Z_Param_Value);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetVSyncOn(Z_Param_Value);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UFG_DA_SettingsData::execIsMotionBlurOn)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsMotionBlurOn();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UFG_DA_SettingsData::execIsVSyncOn)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsVSyncOn();
		P_NATIVE_END;
	}
	void UFG_DA_SettingsData::StaticRegisterNativesUFG_DA_SettingsData()
	{
		UClass* Class = UFG_DA_SettingsData::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetFixedFrameRate", &UFG_DA_SettingsData::execGetFixedFrameRate },
			{ "IsMotionBlurOn", &UFG_DA_SettingsData::execIsMotionBlurOn },
			{ "IsVSyncOn", &UFG_DA_SettingsData::execIsVSyncOn },
			{ "SetFixedFrameRate", &UFG_DA_SettingsData::execSetFixedFrameRate },
			{ "SetMotionBlurOn", &UFG_DA_SettingsData::execSetMotionBlurOn },
			{ "SetVSyncOn", &UFG_DA_SettingsData::execSetVSyncOn },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UFG_DA_SettingsData_GetFixedFrameRate_Statics
	{
		struct FG_DA_SettingsData_eventGetFixedFrameRate_Parms
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
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UFG_DA_SettingsData_GetFixedFrameRate_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FG_DA_SettingsData_eventGetFixedFrameRate_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFG_DA_SettingsData_GetFixedFrameRate_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFG_DA_SettingsData_GetFixedFrameRate_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFG_DA_SettingsData_GetFixedFrameRate_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/FG_DA_SettingsData.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFG_DA_SettingsData_GetFixedFrameRate_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFG_DA_SettingsData, nullptr, "GetFixedFrameRate", nullptr, nullptr, sizeof(FG_DA_SettingsData_eventGetFixedFrameRate_Parms), Z_Construct_UFunction_UFG_DA_SettingsData_GetFixedFrameRate_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFG_DA_SettingsData_GetFixedFrameRate_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFG_DA_SettingsData_GetFixedFrameRate_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFG_DA_SettingsData_GetFixedFrameRate_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFG_DA_SettingsData_GetFixedFrameRate()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFG_DA_SettingsData_GetFixedFrameRate_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFG_DA_SettingsData_IsMotionBlurOn_Statics
	{
		struct FG_DA_SettingsData_eventIsMotionBlurOn_Parms
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
	void Z_Construct_UFunction_UFG_DA_SettingsData_IsMotionBlurOn_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((FG_DA_SettingsData_eventIsMotionBlurOn_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UFG_DA_SettingsData_IsMotionBlurOn_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FG_DA_SettingsData_eventIsMotionBlurOn_Parms), &Z_Construct_UFunction_UFG_DA_SettingsData_IsMotionBlurOn_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFG_DA_SettingsData_IsMotionBlurOn_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFG_DA_SettingsData_IsMotionBlurOn_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFG_DA_SettingsData_IsMotionBlurOn_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/FG_DA_SettingsData.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFG_DA_SettingsData_IsMotionBlurOn_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFG_DA_SettingsData, nullptr, "IsMotionBlurOn", nullptr, nullptr, sizeof(FG_DA_SettingsData_eventIsMotionBlurOn_Parms), Z_Construct_UFunction_UFG_DA_SettingsData_IsMotionBlurOn_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFG_DA_SettingsData_IsMotionBlurOn_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFG_DA_SettingsData_IsMotionBlurOn_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFG_DA_SettingsData_IsMotionBlurOn_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFG_DA_SettingsData_IsMotionBlurOn()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFG_DA_SettingsData_IsMotionBlurOn_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFG_DA_SettingsData_IsVSyncOn_Statics
	{
		struct FG_DA_SettingsData_eventIsVSyncOn_Parms
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
	void Z_Construct_UFunction_UFG_DA_SettingsData_IsVSyncOn_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((FG_DA_SettingsData_eventIsVSyncOn_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UFG_DA_SettingsData_IsVSyncOn_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FG_DA_SettingsData_eventIsVSyncOn_Parms), &Z_Construct_UFunction_UFG_DA_SettingsData_IsVSyncOn_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFG_DA_SettingsData_IsVSyncOn_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFG_DA_SettingsData_IsVSyncOn_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFG_DA_SettingsData_IsVSyncOn_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/FG_DA_SettingsData.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFG_DA_SettingsData_IsVSyncOn_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFG_DA_SettingsData, nullptr, "IsVSyncOn", nullptr, nullptr, sizeof(FG_DA_SettingsData_eventIsVSyncOn_Parms), Z_Construct_UFunction_UFG_DA_SettingsData_IsVSyncOn_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFG_DA_SettingsData_IsVSyncOn_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFG_DA_SettingsData_IsVSyncOn_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFG_DA_SettingsData_IsVSyncOn_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFG_DA_SettingsData_IsVSyncOn()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFG_DA_SettingsData_IsVSyncOn_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFG_DA_SettingsData_SetFixedFrameRate_Statics
	{
		struct FG_DA_SettingsData_eventSetFixedFrameRate_Parms
		{
			int32 FrameRate;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_FrameRate;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UFG_DA_SettingsData_SetFixedFrameRate_Statics::NewProp_FrameRate = { "FrameRate", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FG_DA_SettingsData_eventSetFixedFrameRate_Parms, FrameRate), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFG_DA_SettingsData_SetFixedFrameRate_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFG_DA_SettingsData_SetFixedFrameRate_Statics::NewProp_FrameRate,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFG_DA_SettingsData_SetFixedFrameRate_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/FG_DA_SettingsData.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFG_DA_SettingsData_SetFixedFrameRate_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFG_DA_SettingsData, nullptr, "SetFixedFrameRate", nullptr, nullptr, sizeof(FG_DA_SettingsData_eventSetFixedFrameRate_Parms), Z_Construct_UFunction_UFG_DA_SettingsData_SetFixedFrameRate_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFG_DA_SettingsData_SetFixedFrameRate_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x44020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFG_DA_SettingsData_SetFixedFrameRate_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFG_DA_SettingsData_SetFixedFrameRate_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFG_DA_SettingsData_SetFixedFrameRate()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFG_DA_SettingsData_SetFixedFrameRate_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFG_DA_SettingsData_SetMotionBlurOn_Statics
	{
		struct FG_DA_SettingsData_eventSetMotionBlurOn_Parms
		{
			bool Value;
		};
		static void NewProp_Value_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_Value;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UFG_DA_SettingsData_SetMotionBlurOn_Statics::NewProp_Value_SetBit(void* Obj)
	{
		((FG_DA_SettingsData_eventSetMotionBlurOn_Parms*)Obj)->Value = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UFG_DA_SettingsData_SetMotionBlurOn_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FG_DA_SettingsData_eventSetMotionBlurOn_Parms), &Z_Construct_UFunction_UFG_DA_SettingsData_SetMotionBlurOn_Statics::NewProp_Value_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFG_DA_SettingsData_SetMotionBlurOn_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFG_DA_SettingsData_SetMotionBlurOn_Statics::NewProp_Value,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFG_DA_SettingsData_SetMotionBlurOn_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/FG_DA_SettingsData.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFG_DA_SettingsData_SetMotionBlurOn_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFG_DA_SettingsData, nullptr, "SetMotionBlurOn", nullptr, nullptr, sizeof(FG_DA_SettingsData_eventSetMotionBlurOn_Parms), Z_Construct_UFunction_UFG_DA_SettingsData_SetMotionBlurOn_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFG_DA_SettingsData_SetMotionBlurOn_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFG_DA_SettingsData_SetMotionBlurOn_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFG_DA_SettingsData_SetMotionBlurOn_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFG_DA_SettingsData_SetMotionBlurOn()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFG_DA_SettingsData_SetMotionBlurOn_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFG_DA_SettingsData_SetVSyncOn_Statics
	{
		struct FG_DA_SettingsData_eventSetVSyncOn_Parms
		{
			bool Value;
		};
		static void NewProp_Value_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_Value;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UFG_DA_SettingsData_SetVSyncOn_Statics::NewProp_Value_SetBit(void* Obj)
	{
		((FG_DA_SettingsData_eventSetVSyncOn_Parms*)Obj)->Value = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UFG_DA_SettingsData_SetVSyncOn_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FG_DA_SettingsData_eventSetVSyncOn_Parms), &Z_Construct_UFunction_UFG_DA_SettingsData_SetVSyncOn_Statics::NewProp_Value_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFG_DA_SettingsData_SetVSyncOn_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFG_DA_SettingsData_SetVSyncOn_Statics::NewProp_Value,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFG_DA_SettingsData_SetVSyncOn_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/FG_DA_SettingsData.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFG_DA_SettingsData_SetVSyncOn_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFG_DA_SettingsData, nullptr, "SetVSyncOn", nullptr, nullptr, sizeof(FG_DA_SettingsData_eventSetVSyncOn_Parms), Z_Construct_UFunction_UFG_DA_SettingsData_SetVSyncOn_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFG_DA_SettingsData_SetVSyncOn_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFG_DA_SettingsData_SetVSyncOn_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFG_DA_SettingsData_SetVSyncOn_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFG_DA_SettingsData_SetVSyncOn()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFG_DA_SettingsData_SetVSyncOn_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UFG_DA_SettingsData_NoRegister()
	{
		return UFG_DA_SettingsData::StaticClass();
	}
	struct Z_Construct_UClass_UFG_DA_SettingsData_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MasterVolume_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MasterVolume;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MusicVolume_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MusicVolume;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SFXVolume_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_SFXVolume;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InstrumentVolume_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_InstrumentVolume;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HarpVolume_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_HarpVolume;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_KaguraBellsVolume_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_KaguraBellsVolume;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FluteVolume_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_FluteVolume;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HandpanVolume_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_HandpanVolume;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ChimesVolume_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ChimesVolume;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnVsyncChange_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnVsyncChange;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnMotionBlurChange_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnMotionBlurChange;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UFG_DA_SettingsData_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UDataAsset,
		(UObject* (*)())Z_Construct_UPackage__Script_gp3_team01,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UFG_DA_SettingsData_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UFG_DA_SettingsData_GetFixedFrameRate, "GetFixedFrameRate" }, // 1294471141
		{ &Z_Construct_UFunction_UFG_DA_SettingsData_IsMotionBlurOn, "IsMotionBlurOn" }, // 1434274320
		{ &Z_Construct_UFunction_UFG_DA_SettingsData_IsVSyncOn, "IsVSyncOn" }, // 1710205666
		{ &Z_Construct_UFunction_UFG_DA_SettingsData_SetFixedFrameRate, "SetFixedFrameRate" }, // 328706067
		{ &Z_Construct_UFunction_UFG_DA_SettingsData_SetMotionBlurOn, "SetMotionBlurOn" }, // 264724685
		{ &Z_Construct_UFunction_UFG_DA_SettingsData_SetVSyncOn, "SetVSyncOn" }, // 2346008856
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFG_DA_SettingsData_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "FG_DA_SettingsData.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/FG_DA_SettingsData.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFG_DA_SettingsData_Statics::NewProp_MasterVolume_MetaData[] = {
		{ "Category", "Audio" },
		{ "ModuleRelativePath", "Public/FG_DA_SettingsData.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UFG_DA_SettingsData_Statics::NewProp_MasterVolume = { "MasterVolume", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFG_DA_SettingsData, MasterVolume), METADATA_PARAMS(Z_Construct_UClass_UFG_DA_SettingsData_Statics::NewProp_MasterVolume_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFG_DA_SettingsData_Statics::NewProp_MasterVolume_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFG_DA_SettingsData_Statics::NewProp_MusicVolume_MetaData[] = {
		{ "Category", "Audio" },
		{ "ModuleRelativePath", "Public/FG_DA_SettingsData.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UFG_DA_SettingsData_Statics::NewProp_MusicVolume = { "MusicVolume", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFG_DA_SettingsData, MusicVolume), METADATA_PARAMS(Z_Construct_UClass_UFG_DA_SettingsData_Statics::NewProp_MusicVolume_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFG_DA_SettingsData_Statics::NewProp_MusicVolume_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFG_DA_SettingsData_Statics::NewProp_SFXVolume_MetaData[] = {
		{ "Category", "Audio" },
		{ "ModuleRelativePath", "Public/FG_DA_SettingsData.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UFG_DA_SettingsData_Statics::NewProp_SFXVolume = { "SFXVolume", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFG_DA_SettingsData, SFXVolume), METADATA_PARAMS(Z_Construct_UClass_UFG_DA_SettingsData_Statics::NewProp_SFXVolume_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFG_DA_SettingsData_Statics::NewProp_SFXVolume_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFG_DA_SettingsData_Statics::NewProp_InstrumentVolume_MetaData[] = {
		{ "Category", "Audio" },
		{ "ModuleRelativePath", "Public/FG_DA_SettingsData.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UFG_DA_SettingsData_Statics::NewProp_InstrumentVolume = { "InstrumentVolume", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFG_DA_SettingsData, InstrumentVolume), METADATA_PARAMS(Z_Construct_UClass_UFG_DA_SettingsData_Statics::NewProp_InstrumentVolume_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFG_DA_SettingsData_Statics::NewProp_InstrumentVolume_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFG_DA_SettingsData_Statics::NewProp_HarpVolume_MetaData[] = {
		{ "Category", "Audio" },
		{ "ModuleRelativePath", "Public/FG_DA_SettingsData.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UFG_DA_SettingsData_Statics::NewProp_HarpVolume = { "HarpVolume", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFG_DA_SettingsData, HarpVolume), METADATA_PARAMS(Z_Construct_UClass_UFG_DA_SettingsData_Statics::NewProp_HarpVolume_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFG_DA_SettingsData_Statics::NewProp_HarpVolume_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFG_DA_SettingsData_Statics::NewProp_KaguraBellsVolume_MetaData[] = {
		{ "Category", "Audio" },
		{ "ModuleRelativePath", "Public/FG_DA_SettingsData.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UFG_DA_SettingsData_Statics::NewProp_KaguraBellsVolume = { "KaguraBellsVolume", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFG_DA_SettingsData, KaguraBellsVolume), METADATA_PARAMS(Z_Construct_UClass_UFG_DA_SettingsData_Statics::NewProp_KaguraBellsVolume_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFG_DA_SettingsData_Statics::NewProp_KaguraBellsVolume_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFG_DA_SettingsData_Statics::NewProp_FluteVolume_MetaData[] = {
		{ "Category", "Audio" },
		{ "ModuleRelativePath", "Public/FG_DA_SettingsData.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UFG_DA_SettingsData_Statics::NewProp_FluteVolume = { "FluteVolume", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFG_DA_SettingsData, FluteVolume), METADATA_PARAMS(Z_Construct_UClass_UFG_DA_SettingsData_Statics::NewProp_FluteVolume_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFG_DA_SettingsData_Statics::NewProp_FluteVolume_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFG_DA_SettingsData_Statics::NewProp_HandpanVolume_MetaData[] = {
		{ "Category", "Audio" },
		{ "ModuleRelativePath", "Public/FG_DA_SettingsData.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UFG_DA_SettingsData_Statics::NewProp_HandpanVolume = { "HandpanVolume", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFG_DA_SettingsData, HandpanVolume), METADATA_PARAMS(Z_Construct_UClass_UFG_DA_SettingsData_Statics::NewProp_HandpanVolume_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFG_DA_SettingsData_Statics::NewProp_HandpanVolume_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFG_DA_SettingsData_Statics::NewProp_ChimesVolume_MetaData[] = {
		{ "Category", "Audio" },
		{ "ModuleRelativePath", "Public/FG_DA_SettingsData.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UFG_DA_SettingsData_Statics::NewProp_ChimesVolume = { "ChimesVolume", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFG_DA_SettingsData, ChimesVolume), METADATA_PARAMS(Z_Construct_UClass_UFG_DA_SettingsData_Statics::NewProp_ChimesVolume_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFG_DA_SettingsData_Statics::NewProp_ChimesVolume_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFG_DA_SettingsData_Statics::NewProp_OnVsyncChange_MetaData[] = {
		{ "ModuleRelativePath", "Public/FG_DA_SettingsData.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UFG_DA_SettingsData_Statics::NewProp_OnVsyncChange = { "OnVsyncChange", nullptr, (EPropertyFlags)0x0010000010080000, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFG_DA_SettingsData, OnVsyncChange), Z_Construct_UDelegateFunction_gp3_team01_BooleanGraphicSettingChanged__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UFG_DA_SettingsData_Statics::NewProp_OnVsyncChange_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFG_DA_SettingsData_Statics::NewProp_OnVsyncChange_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFG_DA_SettingsData_Statics::NewProp_OnMotionBlurChange_MetaData[] = {
		{ "ModuleRelativePath", "Public/FG_DA_SettingsData.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UFG_DA_SettingsData_Statics::NewProp_OnMotionBlurChange = { "OnMotionBlurChange", nullptr, (EPropertyFlags)0x0010000010080000, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFG_DA_SettingsData, OnMotionBlurChange), Z_Construct_UDelegateFunction_gp3_team01_BooleanGraphicSettingChanged__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UFG_DA_SettingsData_Statics::NewProp_OnMotionBlurChange_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFG_DA_SettingsData_Statics::NewProp_OnMotionBlurChange_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UFG_DA_SettingsData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFG_DA_SettingsData_Statics::NewProp_MasterVolume,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFG_DA_SettingsData_Statics::NewProp_MusicVolume,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFG_DA_SettingsData_Statics::NewProp_SFXVolume,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFG_DA_SettingsData_Statics::NewProp_InstrumentVolume,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFG_DA_SettingsData_Statics::NewProp_HarpVolume,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFG_DA_SettingsData_Statics::NewProp_KaguraBellsVolume,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFG_DA_SettingsData_Statics::NewProp_FluteVolume,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFG_DA_SettingsData_Statics::NewProp_HandpanVolume,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFG_DA_SettingsData_Statics::NewProp_ChimesVolume,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFG_DA_SettingsData_Statics::NewProp_OnVsyncChange,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFG_DA_SettingsData_Statics::NewProp_OnMotionBlurChange,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UFG_DA_SettingsData_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UFG_DA_SettingsData>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UFG_DA_SettingsData_Statics::ClassParams = {
		&UFG_DA_SettingsData::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UFG_DA_SettingsData_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UFG_DA_SettingsData_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UFG_DA_SettingsData_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UFG_DA_SettingsData_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UFG_DA_SettingsData()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UFG_DA_SettingsData_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UFG_DA_SettingsData, 319375395);
	template<> GP3_TEAM01_API UClass* StaticClass<UFG_DA_SettingsData>()
	{
		return UFG_DA_SettingsData::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UFG_DA_SettingsData(Z_Construct_UClass_UFG_DA_SettingsData, &UFG_DA_SettingsData::StaticClass, TEXT("/Script/gp3_team01"), TEXT("UFG_DA_SettingsData"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UFG_DA_SettingsData);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
