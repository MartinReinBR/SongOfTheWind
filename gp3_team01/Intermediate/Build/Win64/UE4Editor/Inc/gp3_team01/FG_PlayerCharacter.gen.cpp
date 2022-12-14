// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "gp3_team01/Public/Player/FG_PlayerCharacter.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFG_PlayerCharacter() {}
// Cross Module References
	GP3_TEAM01_API UClass* Z_Construct_UClass_AFG_PlayerCharacter_NoRegister();
	GP3_TEAM01_API UClass* Z_Construct_UClass_AFG_PlayerCharacter();
	ENGINE_API UClass* Z_Construct_UClass_APawn();
	UPackage* Z_Construct_UPackage__Script_gp3_team01();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
	GP3_TEAM01_API UClass* Z_Construct_UClass_UFG_InputWriteComponent_NoRegister();
	GP3_TEAM01_API UClass* Z_Construct_UClass_UFG_LocomotionComponent_NoRegister();
	GP3_TEAM01_API UClass* Z_Construct_UClass_UFG_GliderComponent_NoRegister();
	GP3_TEAM01_API UClass* Z_Construct_UClass_UFG_CollectorComponent_NoRegister();
	GP3_TEAM01_API UClass* Z_Construct_UClass_UFG_SFSM_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UCapsuleComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USkeletalMeshComponent_NoRegister();
	GP3_TEAM01_API UClass* Z_Construct_UClass_UFG_DA_PlayerStats_NoRegister();
	GP3_TEAM01_API UClass* Z_Construct_UClass_UFG_LocomotionPlayerState_NoRegister();
	GP3_TEAM01_API UClass* Z_Construct_UClass_UFG_GlidingPlayerState_NoRegister();
	GP3_TEAM01_API UClass* Z_Construct_UClass_UFG_InstrumentComponent_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	GP3_TEAM01_API UClass* Z_Construct_UClass_AFG_Camera_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UAnimMontage_NoRegister();
	GP3_TEAM01_API UClass* Z_Construct_UClass_UABP_Player_NoRegister();
	GP3_TEAM01_API UClass* Z_Construct_UClass_UABP_Glider_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(AFG_PlayerCharacter::execAllowAnotherDoubleJump)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->AllowAnotherDoubleJump();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AFG_PlayerCharacter::execPushAirborneState)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->PushAirborneState();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AFG_PlayerCharacter::execSetActive)
	{
		P_GET_UBOOL(Z_Param_IsActive);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetActive(Z_Param_IsActive);
		P_NATIVE_END;
	}
	void AFG_PlayerCharacter::StaticRegisterNativesAFG_PlayerCharacter()
	{
		UClass* Class = AFG_PlayerCharacter::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AllowAnotherDoubleJump", &AFG_PlayerCharacter::execAllowAnotherDoubleJump },
			{ "PushAirborneState", &AFG_PlayerCharacter::execPushAirborneState },
			{ "SetActive", &AFG_PlayerCharacter::execSetActive },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AFG_PlayerCharacter_AllowAnotherDoubleJump_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFG_PlayerCharacter_AllowAnotherDoubleJump_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Player/FG_PlayerCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFG_PlayerCharacter_AllowAnotherDoubleJump_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFG_PlayerCharacter, nullptr, "AllowAnotherDoubleJump", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFG_PlayerCharacter_AllowAnotherDoubleJump_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AFG_PlayerCharacter_AllowAnotherDoubleJump_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFG_PlayerCharacter_AllowAnotherDoubleJump()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFG_PlayerCharacter_AllowAnotherDoubleJump_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFG_PlayerCharacter_PushAirborneState_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFG_PlayerCharacter_PushAirborneState_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Player/FG_PlayerCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFG_PlayerCharacter_PushAirborneState_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFG_PlayerCharacter, nullptr, "PushAirborneState", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFG_PlayerCharacter_PushAirborneState_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AFG_PlayerCharacter_PushAirborneState_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFG_PlayerCharacter_PushAirborneState()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFG_PlayerCharacter_PushAirborneState_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFG_PlayerCharacter_SetActive_Statics
	{
		struct FG_PlayerCharacter_eventSetActive_Parms
		{
			bool IsActive;
		};
		static void NewProp_IsActive_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_IsActive;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_AFG_PlayerCharacter_SetActive_Statics::NewProp_IsActive_SetBit(void* Obj)
	{
		((FG_PlayerCharacter_eventSetActive_Parms*)Obj)->IsActive = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AFG_PlayerCharacter_SetActive_Statics::NewProp_IsActive = { "IsActive", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FG_PlayerCharacter_eventSetActive_Parms), &Z_Construct_UFunction_AFG_PlayerCharacter_SetActive_Statics::NewProp_IsActive_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFG_PlayerCharacter_SetActive_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFG_PlayerCharacter_SetActive_Statics::NewProp_IsActive,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFG_PlayerCharacter_SetActive_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Player/FG_PlayerCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFG_PlayerCharacter_SetActive_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFG_PlayerCharacter, nullptr, "SetActive", nullptr, nullptr, sizeof(FG_PlayerCharacter_eventSetActive_Parms), Z_Construct_UFunction_AFG_PlayerCharacter_SetActive_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AFG_PlayerCharacter_SetActive_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFG_PlayerCharacter_SetActive_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AFG_PlayerCharacter_SetActive_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFG_PlayerCharacter_SetActive()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFG_PlayerCharacter_SetActive_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AFG_PlayerCharacter_NoRegister()
	{
		return AFG_PlayerCharacter::StaticClass();
	}
	struct Z_Construct_UClass_AFG_PlayerCharacter_Statics
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
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InputWriter_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_InputWriter;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LocomotionComp_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_LocomotionComp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Glider_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Glider;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Collector_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Collector;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StateMachine_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_StateMachine;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Collider_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Collider;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MeshPivot_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_MeshPivot;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PlayerMesh_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PlayerMesh;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GliderMesh_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_GliderMesh;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Stats_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Stats;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LocomotionCoreState_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_LocomotionCoreState;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GlidingCoreState_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_GlidingCoreState;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InstrumentUser_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_InstrumentUser;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CameraClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_CameraClass;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_JumpMontage_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_JumpMontage;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LandMontage_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_LandMontage;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LedgejumpMontage_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_LedgejumpMontage;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GliderEquipMontage_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_GliderEquipMontage;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GliderUnequippMontage_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_GliderUnequippMontage;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MyCamera_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_MyCamera;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AnimBP_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_AnimBP;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GliderAnimBP_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_GliderAnimBP;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AFG_PlayerCharacter_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APawn,
		(UObject* (*)())Z_Construct_UPackage__Script_gp3_team01,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AFG_PlayerCharacter_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AFG_PlayerCharacter_AllowAnotherDoubleJump, "AllowAnotherDoubleJump" }, // 3008776133
		{ &Z_Construct_UFunction_AFG_PlayerCharacter_PushAirborneState, "PushAirborneState" }, // 2626525066
		{ &Z_Construct_UFunction_AFG_PlayerCharacter_SetActive, "SetActive" }, // 1492732094
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFG_PlayerCharacter_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "Player/FG_PlayerCharacter.h" },
		{ "ModuleRelativePath", "Public/Player/FG_PlayerCharacter.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFG_PlayerCharacter_Statics::NewProp_Root_MetaData[] = {
		{ "Category", "FG_PlayerCharacter" },
		{ "Comment", "//Components\n" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Player/FG_PlayerCharacter.h" },
		{ "ToolTip", "Components" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFG_PlayerCharacter_Statics::NewProp_Root = { "Root", nullptr, (EPropertyFlags)0x0010000000090009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFG_PlayerCharacter, Root), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AFG_PlayerCharacter_Statics::NewProp_Root_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFG_PlayerCharacter_Statics::NewProp_Root_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFG_PlayerCharacter_Statics::NewProp_InputWriter_MetaData[] = {
		{ "Category", "FG_PlayerCharacter" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Player/FG_PlayerCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFG_PlayerCharacter_Statics::NewProp_InputWriter = { "InputWriter", nullptr, (EPropertyFlags)0x001000000009001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFG_PlayerCharacter, InputWriter), Z_Construct_UClass_UFG_InputWriteComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AFG_PlayerCharacter_Statics::NewProp_InputWriter_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFG_PlayerCharacter_Statics::NewProp_InputWriter_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFG_PlayerCharacter_Statics::NewProp_LocomotionComp_MetaData[] = {
		{ "Category", "FG_PlayerCharacter" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Player/FG_PlayerCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFG_PlayerCharacter_Statics::NewProp_LocomotionComp = { "LocomotionComp", nullptr, (EPropertyFlags)0x001000000009001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFG_PlayerCharacter, LocomotionComp), Z_Construct_UClass_UFG_LocomotionComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AFG_PlayerCharacter_Statics::NewProp_LocomotionComp_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFG_PlayerCharacter_Statics::NewProp_LocomotionComp_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFG_PlayerCharacter_Statics::NewProp_Glider_MetaData[] = {
		{ "Category", "FG_PlayerCharacter" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Player/FG_PlayerCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFG_PlayerCharacter_Statics::NewProp_Glider = { "Glider", nullptr, (EPropertyFlags)0x001000000009001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFG_PlayerCharacter, Glider), Z_Construct_UClass_UFG_GliderComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AFG_PlayerCharacter_Statics::NewProp_Glider_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFG_PlayerCharacter_Statics::NewProp_Glider_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFG_PlayerCharacter_Statics::NewProp_Collector_MetaData[] = {
		{ "Category", "FG_PlayerCharacter" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Player/FG_PlayerCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFG_PlayerCharacter_Statics::NewProp_Collector = { "Collector", nullptr, (EPropertyFlags)0x001000000009001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFG_PlayerCharacter, Collector), Z_Construct_UClass_UFG_CollectorComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AFG_PlayerCharacter_Statics::NewProp_Collector_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFG_PlayerCharacter_Statics::NewProp_Collector_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFG_PlayerCharacter_Statics::NewProp_StateMachine_MetaData[] = {
		{ "Category", "FG_PlayerCharacter" },
		{ "ModuleRelativePath", "Public/Player/FG_PlayerCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFG_PlayerCharacter_Statics::NewProp_StateMachine = { "StateMachine", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFG_PlayerCharacter, StateMachine), Z_Construct_UClass_UFG_SFSM_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AFG_PlayerCharacter_Statics::NewProp_StateMachine_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFG_PlayerCharacter_Statics::NewProp_StateMachine_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFG_PlayerCharacter_Statics::NewProp_Collider_MetaData[] = {
		{ "Category", "FG_PlayerCharacter" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Player/FG_PlayerCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFG_PlayerCharacter_Statics::NewProp_Collider = { "Collider", nullptr, (EPropertyFlags)0x001000000009001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFG_PlayerCharacter, Collider), Z_Construct_UClass_UCapsuleComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AFG_PlayerCharacter_Statics::NewProp_Collider_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFG_PlayerCharacter_Statics::NewProp_Collider_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFG_PlayerCharacter_Statics::NewProp_MeshPivot_MetaData[] = {
		{ "Category", "FG_PlayerCharacter" },
		{ "Comment", "//Attach the visual mesh onto this!\n" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Player/FG_PlayerCharacter.h" },
		{ "ToolTip", "Attach the visual mesh onto this!" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFG_PlayerCharacter_Statics::NewProp_MeshPivot = { "MeshPivot", nullptr, (EPropertyFlags)0x001000000009001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFG_PlayerCharacter, MeshPivot), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AFG_PlayerCharacter_Statics::NewProp_MeshPivot_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFG_PlayerCharacter_Statics::NewProp_MeshPivot_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFG_PlayerCharacter_Statics::NewProp_PlayerMesh_MetaData[] = {
		{ "Category", "Animations" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Player/FG_PlayerCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFG_PlayerCharacter_Statics::NewProp_PlayerMesh = { "PlayerMesh", nullptr, (EPropertyFlags)0x00100000000a0009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFG_PlayerCharacter, PlayerMesh), Z_Construct_UClass_USkeletalMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AFG_PlayerCharacter_Statics::NewProp_PlayerMesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFG_PlayerCharacter_Statics::NewProp_PlayerMesh_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFG_PlayerCharacter_Statics::NewProp_GliderMesh_MetaData[] = {
		{ "Category", "Animations" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Player/FG_PlayerCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFG_PlayerCharacter_Statics::NewProp_GliderMesh = { "GliderMesh", nullptr, (EPropertyFlags)0x00100000000a0009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFG_PlayerCharacter, GliderMesh), Z_Construct_UClass_USkeletalMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AFG_PlayerCharacter_Statics::NewProp_GliderMesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFG_PlayerCharacter_Statics::NewProp_GliderMesh_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFG_PlayerCharacter_Statics::NewProp_Stats_MetaData[] = {
		{ "Category", "FG_PlayerCharacter" },
		{ "Comment", "//Public Variables\n" },
		{ "ModuleRelativePath", "Public/Player/FG_PlayerCharacter.h" },
		{ "ToolTip", "Public Variables" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFG_PlayerCharacter_Statics::NewProp_Stats = { "Stats", nullptr, (EPropertyFlags)0x0010000000010015, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFG_PlayerCharacter, Stats), Z_Construct_UClass_UFG_DA_PlayerStats_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AFG_PlayerCharacter_Statics::NewProp_Stats_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFG_PlayerCharacter_Statics::NewProp_Stats_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFG_PlayerCharacter_Statics::NewProp_LocomotionCoreState_MetaData[] = {
		{ "Category", "FG_PlayerCharacter" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Player/FG_PlayerCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFG_PlayerCharacter_Statics::NewProp_LocomotionCoreState = { "LocomotionCoreState", nullptr, (EPropertyFlags)0x001000000009001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFG_PlayerCharacter, LocomotionCoreState), Z_Construct_UClass_UFG_LocomotionPlayerState_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AFG_PlayerCharacter_Statics::NewProp_LocomotionCoreState_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFG_PlayerCharacter_Statics::NewProp_LocomotionCoreState_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFG_PlayerCharacter_Statics::NewProp_GlidingCoreState_MetaData[] = {
		{ "Category", "FG_PlayerCharacter" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Player/FG_PlayerCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFG_PlayerCharacter_Statics::NewProp_GlidingCoreState = { "GlidingCoreState", nullptr, (EPropertyFlags)0x001000000009001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFG_PlayerCharacter, GlidingCoreState), Z_Construct_UClass_UFG_GlidingPlayerState_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AFG_PlayerCharacter_Statics::NewProp_GlidingCoreState_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFG_PlayerCharacter_Statics::NewProp_GlidingCoreState_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFG_PlayerCharacter_Statics::NewProp_InstrumentUser_MetaData[] = {
		{ "Category", "FG_PlayerCharacter" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Player/FG_PlayerCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFG_PlayerCharacter_Statics::NewProp_InstrumentUser = { "InstrumentUser", nullptr, (EPropertyFlags)0x001000000009001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFG_PlayerCharacter, InstrumentUser), Z_Construct_UClass_UFG_InstrumentComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AFG_PlayerCharacter_Statics::NewProp_InstrumentUser_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFG_PlayerCharacter_Statics::NewProp_InstrumentUser_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFG_PlayerCharacter_Statics::NewProp_CameraClass_MetaData[] = {
		{ "Category", "FG_PlayerCharacter" },
		{ "ModuleRelativePath", "Public/Player/FG_PlayerCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_AFG_PlayerCharacter_Statics::NewProp_CameraClass = { "CameraClass", nullptr, (EPropertyFlags)0x0014000000010001, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFG_PlayerCharacter, CameraClass), Z_Construct_UClass_AFG_Camera_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_AFG_PlayerCharacter_Statics::NewProp_CameraClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFG_PlayerCharacter_Statics::NewProp_CameraClass_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFG_PlayerCharacter_Statics::NewProp_JumpMontage_MetaData[] = {
		{ "Category", "Animations" },
		{ "ModuleRelativePath", "Public/Player/FG_PlayerCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFG_PlayerCharacter_Statics::NewProp_JumpMontage = { "JumpMontage", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFG_PlayerCharacter, JumpMontage), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AFG_PlayerCharacter_Statics::NewProp_JumpMontage_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFG_PlayerCharacter_Statics::NewProp_JumpMontage_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFG_PlayerCharacter_Statics::NewProp_LandMontage_MetaData[] = {
		{ "Category", "Animations" },
		{ "ModuleRelativePath", "Public/Player/FG_PlayerCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFG_PlayerCharacter_Statics::NewProp_LandMontage = { "LandMontage", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFG_PlayerCharacter, LandMontage), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AFG_PlayerCharacter_Statics::NewProp_LandMontage_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFG_PlayerCharacter_Statics::NewProp_LandMontage_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFG_PlayerCharacter_Statics::NewProp_LedgejumpMontage_MetaData[] = {
		{ "Category", "Animations" },
		{ "ModuleRelativePath", "Public/Player/FG_PlayerCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFG_PlayerCharacter_Statics::NewProp_LedgejumpMontage = { "LedgejumpMontage", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFG_PlayerCharacter, LedgejumpMontage), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AFG_PlayerCharacter_Statics::NewProp_LedgejumpMontage_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFG_PlayerCharacter_Statics::NewProp_LedgejumpMontage_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFG_PlayerCharacter_Statics::NewProp_GliderEquipMontage_MetaData[] = {
		{ "Category", "Animations" },
		{ "ModuleRelativePath", "Public/Player/FG_PlayerCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFG_PlayerCharacter_Statics::NewProp_GliderEquipMontage = { "GliderEquipMontage", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFG_PlayerCharacter, GliderEquipMontage), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AFG_PlayerCharacter_Statics::NewProp_GliderEquipMontage_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFG_PlayerCharacter_Statics::NewProp_GliderEquipMontage_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFG_PlayerCharacter_Statics::NewProp_GliderUnequippMontage_MetaData[] = {
		{ "Category", "Animations" },
		{ "ModuleRelativePath", "Public/Player/FG_PlayerCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFG_PlayerCharacter_Statics::NewProp_GliderUnequippMontage = { "GliderUnequippMontage", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFG_PlayerCharacter, GliderUnequippMontage), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AFG_PlayerCharacter_Statics::NewProp_GliderUnequippMontage_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFG_PlayerCharacter_Statics::NewProp_GliderUnequippMontage_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFG_PlayerCharacter_Statics::NewProp_MyCamera_MetaData[] = {
		{ "Category", "FG_PlayerCharacter" },
		{ "ModuleRelativePath", "Public/Player/FG_PlayerCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFG_PlayerCharacter_Statics::NewProp_MyCamera = { "MyCamera", nullptr, (EPropertyFlags)0x0010000000010005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFG_PlayerCharacter, MyCamera), Z_Construct_UClass_AFG_Camera_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AFG_PlayerCharacter_Statics::NewProp_MyCamera_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFG_PlayerCharacter_Statics::NewProp_MyCamera_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFG_PlayerCharacter_Statics::NewProp_AnimBP_MetaData[] = {
		{ "Comment", "//Private Variables\n" },
		{ "ModuleRelativePath", "Public/Player/FG_PlayerCharacter.h" },
		{ "ToolTip", "Private Variables" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFG_PlayerCharacter_Statics::NewProp_AnimBP = { "AnimBP", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFG_PlayerCharacter, AnimBP), Z_Construct_UClass_UABP_Player_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AFG_PlayerCharacter_Statics::NewProp_AnimBP_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFG_PlayerCharacter_Statics::NewProp_AnimBP_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFG_PlayerCharacter_Statics::NewProp_GliderAnimBP_MetaData[] = {
		{ "Comment", "//Cast the playermeshes AnimClass into an UABP_Player in BeginPlay and work the magic from there boyo\n" },
		{ "ModuleRelativePath", "Public/Player/FG_PlayerCharacter.h" },
		{ "ToolTip", "Cast the playermeshes AnimClass into an UABP_Player in BeginPlay and work the magic from there boyo" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFG_PlayerCharacter_Statics::NewProp_GliderAnimBP = { "GliderAnimBP", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFG_PlayerCharacter, GliderAnimBP), Z_Construct_UClass_UABP_Glider_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AFG_PlayerCharacter_Statics::NewProp_GliderAnimBP_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFG_PlayerCharacter_Statics::NewProp_GliderAnimBP_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AFG_PlayerCharacter_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFG_PlayerCharacter_Statics::NewProp_Root,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFG_PlayerCharacter_Statics::NewProp_InputWriter,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFG_PlayerCharacter_Statics::NewProp_LocomotionComp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFG_PlayerCharacter_Statics::NewProp_Glider,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFG_PlayerCharacter_Statics::NewProp_Collector,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFG_PlayerCharacter_Statics::NewProp_StateMachine,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFG_PlayerCharacter_Statics::NewProp_Collider,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFG_PlayerCharacter_Statics::NewProp_MeshPivot,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFG_PlayerCharacter_Statics::NewProp_PlayerMesh,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFG_PlayerCharacter_Statics::NewProp_GliderMesh,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFG_PlayerCharacter_Statics::NewProp_Stats,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFG_PlayerCharacter_Statics::NewProp_LocomotionCoreState,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFG_PlayerCharacter_Statics::NewProp_GlidingCoreState,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFG_PlayerCharacter_Statics::NewProp_InstrumentUser,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFG_PlayerCharacter_Statics::NewProp_CameraClass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFG_PlayerCharacter_Statics::NewProp_JumpMontage,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFG_PlayerCharacter_Statics::NewProp_LandMontage,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFG_PlayerCharacter_Statics::NewProp_LedgejumpMontage,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFG_PlayerCharacter_Statics::NewProp_GliderEquipMontage,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFG_PlayerCharacter_Statics::NewProp_GliderUnequippMontage,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFG_PlayerCharacter_Statics::NewProp_MyCamera,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFG_PlayerCharacter_Statics::NewProp_AnimBP,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFG_PlayerCharacter_Statics::NewProp_GliderAnimBP,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AFG_PlayerCharacter_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AFG_PlayerCharacter>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AFG_PlayerCharacter_Statics::ClassParams = {
		&AFG_PlayerCharacter::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AFG_PlayerCharacter_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AFG_PlayerCharacter_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AFG_PlayerCharacter_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AFG_PlayerCharacter_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AFG_PlayerCharacter()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AFG_PlayerCharacter_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AFG_PlayerCharacter, 973138700);
	template<> GP3_TEAM01_API UClass* StaticClass<AFG_PlayerCharacter>()
	{
		return AFG_PlayerCharacter::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AFG_PlayerCharacter(Z_Construct_UClass_AFG_PlayerCharacter, &AFG_PlayerCharacter::StaticClass, TEXT("/Script/gp3_team01"), TEXT("AFG_PlayerCharacter"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AFG_PlayerCharacter);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
