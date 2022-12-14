// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "gp3_team01/Public/Cameras/FG_Camera.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFG_Camera() {}
// Cross Module References
	GP3_TEAM01_API UClass* Z_Construct_UClass_AFG_Camera_NoRegister();
	GP3_TEAM01_API UClass* Z_Construct_UClass_AFG_Camera();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_gp3_team01();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UCameraComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USpringArmComponent_NoRegister();
	GP3_TEAM01_API UClass* Z_Construct_UClass_UFG_DA_CameraStats_NoRegister();
	GP3_TEAM01_API UClass* Z_Construct_UClass_UFG_DA_SettingsData_NoRegister();
	GP3_TEAM01_API UClass* Z_Construct_UClass_UFG_DA_InputStats_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(AFG_Camera::execRotateCamera)
	{
		P_GET_STRUCT(FVector,Z_Param_Direction);
		P_GET_PROPERTY(FFloatProperty,Z_Param_RotationDelta);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->RotateCamera(Z_Param_Direction,Z_Param_RotationDelta);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AFG_Camera::execSetManuallyControllable)
	{
		P_GET_UBOOL(Z_Param_bSetManualControl);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetManuallyControllable(Z_Param_bSetManualControl);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AFG_Camera::execSetTruckOffset)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_Offset);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetTruckOffset(Z_Param_Offset);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AFG_Camera::execSetFollowActor)
	{
		P_GET_OBJECT(AActor,Z_Param_Actor);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetFollowActor(Z_Param_Actor);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AFG_Camera::execHandleVSync)
	{
		P_GET_UBOOL(Z_Param_IsEnabled);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->HandleVSync(Z_Param_IsEnabled);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AFG_Camera::execHandleMotionBlur)
	{
		P_GET_UBOOL(Z_Param_IsEnabled);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->HandleMotionBlur(Z_Param_IsEnabled);
		P_NATIVE_END;
	}
	void AFG_Camera::StaticRegisterNativesAFG_Camera()
	{
		UClass* Class = AFG_Camera::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "HandleMotionBlur", &AFG_Camera::execHandleMotionBlur },
			{ "HandleVSync", &AFG_Camera::execHandleVSync },
			{ "RotateCamera", &AFG_Camera::execRotateCamera },
			{ "SetFollowActor", &AFG_Camera::execSetFollowActor },
			{ "SetManuallyControllable", &AFG_Camera::execSetManuallyControllable },
			{ "SetTruckOffset", &AFG_Camera::execSetTruckOffset },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AFG_Camera_HandleMotionBlur_Statics
	{
		struct FG_Camera_eventHandleMotionBlur_Parms
		{
			bool IsEnabled;
		};
		static void NewProp_IsEnabled_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_IsEnabled;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_AFG_Camera_HandleMotionBlur_Statics::NewProp_IsEnabled_SetBit(void* Obj)
	{
		((FG_Camera_eventHandleMotionBlur_Parms*)Obj)->IsEnabled = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AFG_Camera_HandleMotionBlur_Statics::NewProp_IsEnabled = { "IsEnabled", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FG_Camera_eventHandleMotionBlur_Parms), &Z_Construct_UFunction_AFG_Camera_HandleMotionBlur_Statics::NewProp_IsEnabled_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFG_Camera_HandleMotionBlur_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFG_Camera_HandleMotionBlur_Statics::NewProp_IsEnabled,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFG_Camera_HandleMotionBlur_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Cameras/FG_Camera.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFG_Camera_HandleMotionBlur_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFG_Camera, nullptr, "HandleMotionBlur", nullptr, nullptr, sizeof(FG_Camera_eventHandleMotionBlur_Parms), Z_Construct_UFunction_AFG_Camera_HandleMotionBlur_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AFG_Camera_HandleMotionBlur_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFG_Camera_HandleMotionBlur_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AFG_Camera_HandleMotionBlur_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFG_Camera_HandleMotionBlur()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFG_Camera_HandleMotionBlur_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFG_Camera_HandleVSync_Statics
	{
		struct FG_Camera_eventHandleVSync_Parms
		{
			bool IsEnabled;
		};
		static void NewProp_IsEnabled_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_IsEnabled;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_AFG_Camera_HandleVSync_Statics::NewProp_IsEnabled_SetBit(void* Obj)
	{
		((FG_Camera_eventHandleVSync_Parms*)Obj)->IsEnabled = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AFG_Camera_HandleVSync_Statics::NewProp_IsEnabled = { "IsEnabled", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FG_Camera_eventHandleVSync_Parms), &Z_Construct_UFunction_AFG_Camera_HandleVSync_Statics::NewProp_IsEnabled_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFG_Camera_HandleVSync_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFG_Camera_HandleVSync_Statics::NewProp_IsEnabled,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFG_Camera_HandleVSync_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Cameras/FG_Camera.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFG_Camera_HandleVSync_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFG_Camera, nullptr, "HandleVSync", nullptr, nullptr, sizeof(FG_Camera_eventHandleVSync_Parms), Z_Construct_UFunction_AFG_Camera_HandleVSync_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AFG_Camera_HandleVSync_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFG_Camera_HandleVSync_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AFG_Camera_HandleVSync_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFG_Camera_HandleVSync()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFG_Camera_HandleVSync_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFG_Camera_RotateCamera_Statics
	{
		struct FG_Camera_eventRotateCamera_Parms
		{
			FVector Direction;
			float RotationDelta;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Direction;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_RotationDelta;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AFG_Camera_RotateCamera_Statics::NewProp_Direction = { "Direction", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FG_Camera_eventRotateCamera_Parms, Direction), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AFG_Camera_RotateCamera_Statics::NewProp_RotationDelta = { "RotationDelta", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FG_Camera_eventRotateCamera_Parms, RotationDelta), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFG_Camera_RotateCamera_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFG_Camera_RotateCamera_Statics::NewProp_Direction,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFG_Camera_RotateCamera_Statics::NewProp_RotationDelta,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFG_Camera_RotateCamera_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/// <summary>\n/// Rotates camera towards a given vector with given RotationDelta.\n/// Note that X rotation is the camera itself and the Y rotation is the springarm.\n/// Stupid thing doesnt work yet though   \n/// </summary>\n" },
		{ "ModuleRelativePath", "Public/Cameras/FG_Camera.h" },
		{ "ToolTip", "<summary>\nRotates camera towards a given vector with given RotationDelta.\nNote that X rotation is the camera itself and the Y rotation is the springarm.\nStupid thing doesnt work yet though\n</summary>" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFG_Camera_RotateCamera_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFG_Camera, nullptr, "RotateCamera", nullptr, nullptr, sizeof(FG_Camera_eventRotateCamera_Parms), Z_Construct_UFunction_AFG_Camera_RotateCamera_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AFG_Camera_RotateCamera_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFG_Camera_RotateCamera_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AFG_Camera_RotateCamera_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFG_Camera_RotateCamera()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFG_Camera_RotateCamera_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFG_Camera_SetFollowActor_Statics
	{
		struct FG_Camera_eventSetFollowActor_Parms
		{
			AActor* Actor;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Actor;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AFG_Camera_SetFollowActor_Statics::NewProp_Actor = { "Actor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FG_Camera_eventSetFollowActor_Parms, Actor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFG_Camera_SetFollowActor_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFG_Camera_SetFollowActor_Statics::NewProp_Actor,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFG_Camera_SetFollowActor_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Cameras/FG_Camera.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFG_Camera_SetFollowActor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFG_Camera, nullptr, "SetFollowActor", nullptr, nullptr, sizeof(FG_Camera_eventSetFollowActor_Parms), Z_Construct_UFunction_AFG_Camera_SetFollowActor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AFG_Camera_SetFollowActor_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFG_Camera_SetFollowActor_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AFG_Camera_SetFollowActor_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFG_Camera_SetFollowActor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFG_Camera_SetFollowActor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFG_Camera_SetManuallyControllable_Statics
	{
		struct FG_Camera_eventSetManuallyControllable_Parms
		{
			bool bSetManualControl;
		};
		static void NewProp_bSetManualControl_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bSetManualControl;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_AFG_Camera_SetManuallyControllable_Statics::NewProp_bSetManualControl_SetBit(void* Obj)
	{
		((FG_Camera_eventSetManuallyControllable_Parms*)Obj)->bSetManualControl = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AFG_Camera_SetManuallyControllable_Statics::NewProp_bSetManualControl = { "bSetManualControl", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FG_Camera_eventSetManuallyControllable_Parms), &Z_Construct_UFunction_AFG_Camera_SetManuallyControllable_Statics::NewProp_bSetManualControl_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFG_Camera_SetManuallyControllable_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFG_Camera_SetManuallyControllable_Statics::NewProp_bSetManualControl,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFG_Camera_SetManuallyControllable_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/// <summary>\n/// Enables or disables manual mouse control of the camera\n/// </summary>\n" },
		{ "ModuleRelativePath", "Public/Cameras/FG_Camera.h" },
		{ "ToolTip", "<summary>\nEnables or disables manual mouse control of the camera\n</summary>" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFG_Camera_SetManuallyControllable_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFG_Camera, nullptr, "SetManuallyControllable", nullptr, nullptr, sizeof(FG_Camera_eventSetManuallyControllable_Parms), Z_Construct_UFunction_AFG_Camera_SetManuallyControllable_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AFG_Camera_SetManuallyControllable_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFG_Camera_SetManuallyControllable_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AFG_Camera_SetManuallyControllable_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFG_Camera_SetManuallyControllable()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFG_Camera_SetManuallyControllable_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFG_Camera_SetTruckOffset_Statics
	{
		struct FG_Camera_eventSetTruckOffset_Parms
		{
			float Offset;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Offset;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AFG_Camera_SetTruckOffset_Statics::NewProp_Offset = { "Offset", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FG_Camera_eventSetTruckOffset_Parms, Offset), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFG_Camera_SetTruckOffset_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFG_Camera_SetTruckOffset_Statics::NewProp_Offset,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFG_Camera_SetTruckOffset_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Cameras/FG_Camera.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFG_Camera_SetTruckOffset_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFG_Camera, nullptr, "SetTruckOffset", nullptr, nullptr, sizeof(FG_Camera_eventSetTruckOffset_Parms), Z_Construct_UFunction_AFG_Camera_SetTruckOffset_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AFG_Camera_SetTruckOffset_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFG_Camera_SetTruckOffset_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AFG_Camera_SetTruckOffset_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFG_Camera_SetTruckOffset()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFG_Camera_SetTruckOffset_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AFG_Camera_NoRegister()
	{
		return AFG_Camera::StaticClass();
	}
	struct Z_Construct_UClass_AFG_Camera_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Root_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Root;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Camera_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Camera;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SpringArm_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SpringArm;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FollowActor_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_FollowActor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CameraStats_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CameraStats;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SettingsData_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SettingsData;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InputStats_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_InputStats;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AFG_Camera_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_gp3_team01,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AFG_Camera_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AFG_Camera_HandleMotionBlur, "HandleMotionBlur" }, // 936233539
		{ &Z_Construct_UFunction_AFG_Camera_HandleVSync, "HandleVSync" }, // 3182472714
		{ &Z_Construct_UFunction_AFG_Camera_RotateCamera, "RotateCamera" }, // 404533059
		{ &Z_Construct_UFunction_AFG_Camera_SetFollowActor, "SetFollowActor" }, // 2058368777
		{ &Z_Construct_UFunction_AFG_Camera_SetManuallyControllable, "SetManuallyControllable" }, // 3388420737
		{ &Z_Construct_UFunction_AFG_Camera_SetTruckOffset, "SetTruckOffset" }, // 1312487615
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFG_Camera_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "Cameras/FG_Camera.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Cameras/FG_Camera.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFG_Camera_Statics::NewProp_Root_MetaData[] = {
		{ "Category", "FG_Camera" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Cameras/FG_Camera.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFG_Camera_Statics::NewProp_Root = { "Root", nullptr, (EPropertyFlags)0x00100000000a0009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFG_Camera, Root), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AFG_Camera_Statics::NewProp_Root_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFG_Camera_Statics::NewProp_Root_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFG_Camera_Statics::NewProp_Camera_MetaData[] = {
		{ "Category", "FG_Camera" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Cameras/FG_Camera.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFG_Camera_Statics::NewProp_Camera = { "Camera", nullptr, (EPropertyFlags)0x001000000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFG_Camera, Camera), Z_Construct_UClass_UCameraComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AFG_Camera_Statics::NewProp_Camera_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFG_Camera_Statics::NewProp_Camera_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFG_Camera_Statics::NewProp_SpringArm_MetaData[] = {
		{ "Category", "FG_Camera" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Cameras/FG_Camera.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFG_Camera_Statics::NewProp_SpringArm = { "SpringArm", nullptr, (EPropertyFlags)0x00100000000a0009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFG_Camera, SpringArm), Z_Construct_UClass_USpringArmComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AFG_Camera_Statics::NewProp_SpringArm_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFG_Camera_Statics::NewProp_SpringArm_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFG_Camera_Statics::NewProp_FollowActor_MetaData[] = {
		{ "Category", "FG_Camera" },
		{ "ModuleRelativePath", "Public/Cameras/FG_Camera.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFG_Camera_Statics::NewProp_FollowActor = { "FollowActor", nullptr, (EPropertyFlags)0x0010000000000801, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFG_Camera, FollowActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AFG_Camera_Statics::NewProp_FollowActor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFG_Camera_Statics::NewProp_FollowActor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFG_Camera_Statics::NewProp_CameraStats_MetaData[] = {
		{ "Category", "FG_Camera" },
		{ "ModuleRelativePath", "Public/Cameras/FG_Camera.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFG_Camera_Statics::NewProp_CameraStats = { "CameraStats", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFG_Camera, CameraStats), Z_Construct_UClass_UFG_DA_CameraStats_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AFG_Camera_Statics::NewProp_CameraStats_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFG_Camera_Statics::NewProp_CameraStats_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFG_Camera_Statics::NewProp_SettingsData_MetaData[] = {
		{ "Category", "FG_Camera" },
		{ "ModuleRelativePath", "Public/Cameras/FG_Camera.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFG_Camera_Statics::NewProp_SettingsData = { "SettingsData", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFG_Camera, SettingsData), Z_Construct_UClass_UFG_DA_SettingsData_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AFG_Camera_Statics::NewProp_SettingsData_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFG_Camera_Statics::NewProp_SettingsData_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFG_Camera_Statics::NewProp_InputStats_MetaData[] = {
		{ "Category", "FG_Camera" },
		{ "ModuleRelativePath", "Public/Cameras/FG_Camera.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFG_Camera_Statics::NewProp_InputStats = { "InputStats", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFG_Camera, InputStats), Z_Construct_UClass_UFG_DA_InputStats_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AFG_Camera_Statics::NewProp_InputStats_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFG_Camera_Statics::NewProp_InputStats_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AFG_Camera_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFG_Camera_Statics::NewProp_Root,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFG_Camera_Statics::NewProp_Camera,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFG_Camera_Statics::NewProp_SpringArm,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFG_Camera_Statics::NewProp_FollowActor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFG_Camera_Statics::NewProp_CameraStats,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFG_Camera_Statics::NewProp_SettingsData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFG_Camera_Statics::NewProp_InputStats,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AFG_Camera_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AFG_Camera>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AFG_Camera_Statics::ClassParams = {
		&AFG_Camera::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AFG_Camera_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AFG_Camera_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AFG_Camera_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AFG_Camera_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AFG_Camera()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AFG_Camera_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AFG_Camera, 3342656945);
	template<> GP3_TEAM01_API UClass* StaticClass<AFG_Camera>()
	{
		return AFG_Camera::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AFG_Camera(Z_Construct_UClass_AFG_Camera, &AFG_Camera::StaticClass, TEXT("/Script/gp3_team01"), TEXT("AFG_Camera"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AFG_Camera);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
