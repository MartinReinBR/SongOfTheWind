// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "gp3_team01/Public/Player/Gliding/FG_GliderComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFG_GliderComponent() {}
// Cross Module References
	GP3_TEAM01_API UClass* Z_Construct_UClass_UFG_GliderComponent_NoRegister();
	GP3_TEAM01_API UClass* Z_Construct_UClass_UFG_GliderComponent();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	UPackage* Z_Construct_UPackage__Script_gp3_team01();
	ENGINE_API UClass* Z_Construct_UClass_UPrimitiveComponent_NoRegister();
	GP3_TEAM01_API UClass* Z_Construct_UClass_UFG_LocomotionComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UCapsuleComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USpringArmComponent_NoRegister();
	GP3_TEAM01_API UClass* Z_Construct_UClass_AFG_PlayerCharacter_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UCurveFloat_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
	GP3_TEAM01_API UClass* Z_Construct_UClass_UFG_DA_InputStats_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UFG_GliderComponent::execCheckTouching)
	{
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_Component);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->CheckTouching(Z_Param_Component);
		P_NATIVE_END;
	}
	void UFG_GliderComponent::StaticRegisterNativesUFG_GliderComponent()
	{
		UClass* Class = UFG_GliderComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "CheckTouching", &UFG_GliderComponent::execCheckTouching },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UFG_GliderComponent_CheckTouching_Statics
	{
		struct FG_GliderComponent_eventCheckTouching_Parms
		{
			UPrimitiveComponent* Component;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Component_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Component;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFG_GliderComponent_CheckTouching_Statics::NewProp_Component_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UFG_GliderComponent_CheckTouching_Statics::NewProp_Component = { "Component", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FG_GliderComponent_eventCheckTouching_Parms, Component), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UFG_GliderComponent_CheckTouching_Statics::NewProp_Component_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UFG_GliderComponent_CheckTouching_Statics::NewProp_Component_MetaData)) };
	void Z_Construct_UFunction_UFG_GliderComponent_CheckTouching_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((FG_GliderComponent_eventCheckTouching_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UFG_GliderComponent_CheckTouching_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FG_GliderComponent_eventCheckTouching_Parms), &Z_Construct_UFunction_UFG_GliderComponent_CheckTouching_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFG_GliderComponent_CheckTouching_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFG_GliderComponent_CheckTouching_Statics::NewProp_Component,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFG_GliderComponent_CheckTouching_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFG_GliderComponent_CheckTouching_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Player/Gliding/FG_GliderComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFG_GliderComponent_CheckTouching_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFG_GliderComponent, nullptr, "CheckTouching", nullptr, nullptr, sizeof(FG_GliderComponent_eventCheckTouching_Parms), Z_Construct_UFunction_UFG_GliderComponent_CheckTouching_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFG_GliderComponent_CheckTouching_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFG_GliderComponent_CheckTouching_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFG_GliderComponent_CheckTouching_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFG_GliderComponent_CheckTouching()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFG_GliderComponent_CheckTouching_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UFG_GliderComponent_NoRegister()
	{
		return UFG_GliderComponent::StaticClass();
	}
	struct Z_Construct_UClass_UFG_GliderComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LocomotionComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_LocomotionComponent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PlayerBody_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PlayerBody;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CapsuleComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CapsuleComponent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SpringArmComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SpringArmComponent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PlayerCharacter_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PlayerCharacter;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GlidingTurnCurve_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_GlidingTurnCurve;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StaticMeshComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_StaticMeshComponent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GravitationalForce_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_GravitationalForce;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GlidingForce_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_GlidingForce;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MinimumGlideMomentum_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MinimumGlideMomentum;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TurningEfficiency_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_TurningEfficiency;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TurningSpeed_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_TurningSpeed;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GliderRollSpeed_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_GliderRollSpeed;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TurnHorizontal_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_TurnHorizontal;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TurnVertical_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_TurnVertical;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InputStats_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_InputStats;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsGliding_MetaData[];
#endif
		static void NewProp_bIsGliding_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsGliding;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UFG_GliderComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_gp3_team01,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UFG_GliderComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UFG_GliderComponent_CheckTouching, "CheckTouching" }, // 52267604
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFG_GliderComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "Player/Gliding/FG_GliderComponent.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Player/Gliding/FG_GliderComponent.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFG_GliderComponent_Statics::NewProp_LocomotionComponent_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Player/Gliding/FG_GliderComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UFG_GliderComponent_Statics::NewProp_LocomotionComponent = { "LocomotionComponent", nullptr, (EPropertyFlags)0x0010000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFG_GliderComponent, LocomotionComponent), Z_Construct_UClass_UFG_LocomotionComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UFG_GliderComponent_Statics::NewProp_LocomotionComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFG_GliderComponent_Statics::NewProp_LocomotionComponent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFG_GliderComponent_Statics::NewProp_PlayerBody_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Player/Gliding/FG_GliderComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UFG_GliderComponent_Statics::NewProp_PlayerBody = { "PlayerBody", nullptr, (EPropertyFlags)0x0010000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFG_GliderComponent, PlayerBody), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UFG_GliderComponent_Statics::NewProp_PlayerBody_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFG_GliderComponent_Statics::NewProp_PlayerBody_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFG_GliderComponent_Statics::NewProp_CapsuleComponent_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Player/Gliding/FG_GliderComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UFG_GliderComponent_Statics::NewProp_CapsuleComponent = { "CapsuleComponent", nullptr, (EPropertyFlags)0x0010000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFG_GliderComponent, CapsuleComponent), Z_Construct_UClass_UCapsuleComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UFG_GliderComponent_Statics::NewProp_CapsuleComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFG_GliderComponent_Statics::NewProp_CapsuleComponent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFG_GliderComponent_Statics::NewProp_SpringArmComponent_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Player/Gliding/FG_GliderComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UFG_GliderComponent_Statics::NewProp_SpringArmComponent = { "SpringArmComponent", nullptr, (EPropertyFlags)0x0010000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFG_GliderComponent, SpringArmComponent), Z_Construct_UClass_USpringArmComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UFG_GliderComponent_Statics::NewProp_SpringArmComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFG_GliderComponent_Statics::NewProp_SpringArmComponent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFG_GliderComponent_Statics::NewProp_PlayerCharacter_MetaData[] = {
		{ "ModuleRelativePath", "Public/Player/Gliding/FG_GliderComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UFG_GliderComponent_Statics::NewProp_PlayerCharacter = { "PlayerCharacter", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFG_GliderComponent, PlayerCharacter), Z_Construct_UClass_AFG_PlayerCharacter_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UFG_GliderComponent_Statics::NewProp_PlayerCharacter_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFG_GliderComponent_Statics::NewProp_PlayerCharacter_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFG_GliderComponent_Statics::NewProp_GlidingTurnCurve_MetaData[] = {
		{ "Category", "FG_GliderComponent" },
		{ "ModuleRelativePath", "Public/Player/Gliding/FG_GliderComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UFG_GliderComponent_Statics::NewProp_GlidingTurnCurve = { "GlidingTurnCurve", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFG_GliderComponent, GlidingTurnCurve), Z_Construct_UClass_UCurveFloat_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UFG_GliderComponent_Statics::NewProp_GlidingTurnCurve_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFG_GliderComponent_Statics::NewProp_GlidingTurnCurve_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFG_GliderComponent_Statics::NewProp_StaticMeshComponent_MetaData[] = {
		{ "Category", "FG_GliderComponent" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Player/Gliding/FG_GliderComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UFG_GliderComponent_Statics::NewProp_StaticMeshComponent = { "StaticMeshComponent", nullptr, (EPropertyFlags)0x0010000000090009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFG_GliderComponent, StaticMeshComponent), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UFG_GliderComponent_Statics::NewProp_StaticMeshComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFG_GliderComponent_Statics::NewProp_StaticMeshComponent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFG_GliderComponent_Statics::NewProp_GravitationalForce_MetaData[] = {
		{ "Category", "FG_GliderComponent" },
		{ "ModuleRelativePath", "Public/Player/Gliding/FG_GliderComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UFG_GliderComponent_Statics::NewProp_GravitationalForce = { "GravitationalForce", nullptr, (EPropertyFlags)0x0010000000010005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFG_GliderComponent, GravitationalForce), METADATA_PARAMS(Z_Construct_UClass_UFG_GliderComponent_Statics::NewProp_GravitationalForce_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFG_GliderComponent_Statics::NewProp_GravitationalForce_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFG_GliderComponent_Statics::NewProp_GlidingForce_MetaData[] = {
		{ "Category", "FG_GliderComponent" },
		{ "ModuleRelativePath", "Public/Player/Gliding/FG_GliderComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UFG_GliderComponent_Statics::NewProp_GlidingForce = { "GlidingForce", nullptr, (EPropertyFlags)0x0010000000010005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFG_GliderComponent, GlidingForce), METADATA_PARAMS(Z_Construct_UClass_UFG_GliderComponent_Statics::NewProp_GlidingForce_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFG_GliderComponent_Statics::NewProp_GlidingForce_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFG_GliderComponent_Statics::NewProp_MinimumGlideMomentum_MetaData[] = {
		{ "Category", "FG_GliderComponent" },
		{ "ModuleRelativePath", "Public/Player/Gliding/FG_GliderComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UFG_GliderComponent_Statics::NewProp_MinimumGlideMomentum = { "MinimumGlideMomentum", nullptr, (EPropertyFlags)0x0010000000010015, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFG_GliderComponent, MinimumGlideMomentum), METADATA_PARAMS(Z_Construct_UClass_UFG_GliderComponent_Statics::NewProp_MinimumGlideMomentum_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFG_GliderComponent_Statics::NewProp_MinimumGlideMomentum_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFG_GliderComponent_Statics::NewProp_TurningEfficiency_MetaData[] = {
		{ "Category", "FG_GliderComponent" },
		{ "ModuleRelativePath", "Public/Player/Gliding/FG_GliderComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UFG_GliderComponent_Statics::NewProp_TurningEfficiency = { "TurningEfficiency", nullptr, (EPropertyFlags)0x0010000000010015, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFG_GliderComponent, TurningEfficiency), METADATA_PARAMS(Z_Construct_UClass_UFG_GliderComponent_Statics::NewProp_TurningEfficiency_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFG_GliderComponent_Statics::NewProp_TurningEfficiency_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFG_GliderComponent_Statics::NewProp_TurningSpeed_MetaData[] = {
		{ "Category", "FG_GliderComponent" },
		{ "ModuleRelativePath", "Public/Player/Gliding/FG_GliderComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UFG_GliderComponent_Statics::NewProp_TurningSpeed = { "TurningSpeed", nullptr, (EPropertyFlags)0x0010000000010005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFG_GliderComponent, TurningSpeed), METADATA_PARAMS(Z_Construct_UClass_UFG_GliderComponent_Statics::NewProp_TurningSpeed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFG_GliderComponent_Statics::NewProp_TurningSpeed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFG_GliderComponent_Statics::NewProp_GliderRollSpeed_MetaData[] = {
		{ "Category", "FG_GliderComponent" },
		{ "ModuleRelativePath", "Public/Player/Gliding/FG_GliderComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UFG_GliderComponent_Statics::NewProp_GliderRollSpeed = { "GliderRollSpeed", nullptr, (EPropertyFlags)0x0010000000010005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFG_GliderComponent, GliderRollSpeed), METADATA_PARAMS(Z_Construct_UClass_UFG_GliderComponent_Statics::NewProp_GliderRollSpeed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFG_GliderComponent_Statics::NewProp_GliderRollSpeed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFG_GliderComponent_Statics::NewProp_TurnHorizontal_MetaData[] = {
		{ "Category", "FG_GliderComponent" },
		{ "ModuleRelativePath", "Public/Player/Gliding/FG_GliderComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UFG_GliderComponent_Statics::NewProp_TurnHorizontal = { "TurnHorizontal", nullptr, (EPropertyFlags)0x0010000000010005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFG_GliderComponent, TurnHorizontal), METADATA_PARAMS(Z_Construct_UClass_UFG_GliderComponent_Statics::NewProp_TurnHorizontal_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFG_GliderComponent_Statics::NewProp_TurnHorizontal_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFG_GliderComponent_Statics::NewProp_TurnVertical_MetaData[] = {
		{ "Category", "FG_GliderComponent" },
		{ "ModuleRelativePath", "Public/Player/Gliding/FG_GliderComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UFG_GliderComponent_Statics::NewProp_TurnVertical = { "TurnVertical", nullptr, (EPropertyFlags)0x0010000000010005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFG_GliderComponent, TurnVertical), METADATA_PARAMS(Z_Construct_UClass_UFG_GliderComponent_Statics::NewProp_TurnVertical_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFG_GliderComponent_Statics::NewProp_TurnVertical_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFG_GliderComponent_Statics::NewProp_InputStats_MetaData[] = {
		{ "Category", "FG_GliderComponent" },
		{ "ModuleRelativePath", "Public/Player/Gliding/FG_GliderComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UFG_GliderComponent_Statics::NewProp_InputStats = { "InputStats", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFG_GliderComponent, InputStats), Z_Construct_UClass_UFG_DA_InputStats_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UFG_GliderComponent_Statics::NewProp_InputStats_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFG_GliderComponent_Statics::NewProp_InputStats_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFG_GliderComponent_Statics::NewProp_bIsGliding_MetaData[] = {
		{ "Category", "FG_GliderComponent" },
		{ "ModuleRelativePath", "Public/Player/Gliding/FG_GliderComponent.h" },
	};
#endif
	void Z_Construct_UClass_UFG_GliderComponent_Statics::NewProp_bIsGliding_SetBit(void* Obj)
	{
		((UFG_GliderComponent*)Obj)->bIsGliding = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UFG_GliderComponent_Statics::NewProp_bIsGliding = { "bIsGliding", nullptr, (EPropertyFlags)0x0010000000020015, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UFG_GliderComponent), &Z_Construct_UClass_UFG_GliderComponent_Statics::NewProp_bIsGliding_SetBit, METADATA_PARAMS(Z_Construct_UClass_UFG_GliderComponent_Statics::NewProp_bIsGliding_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFG_GliderComponent_Statics::NewProp_bIsGliding_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UFG_GliderComponent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFG_GliderComponent_Statics::NewProp_LocomotionComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFG_GliderComponent_Statics::NewProp_PlayerBody,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFG_GliderComponent_Statics::NewProp_CapsuleComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFG_GliderComponent_Statics::NewProp_SpringArmComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFG_GliderComponent_Statics::NewProp_PlayerCharacter,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFG_GliderComponent_Statics::NewProp_GlidingTurnCurve,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFG_GliderComponent_Statics::NewProp_StaticMeshComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFG_GliderComponent_Statics::NewProp_GravitationalForce,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFG_GliderComponent_Statics::NewProp_GlidingForce,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFG_GliderComponent_Statics::NewProp_MinimumGlideMomentum,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFG_GliderComponent_Statics::NewProp_TurningEfficiency,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFG_GliderComponent_Statics::NewProp_TurningSpeed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFG_GliderComponent_Statics::NewProp_GliderRollSpeed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFG_GliderComponent_Statics::NewProp_TurnHorizontal,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFG_GliderComponent_Statics::NewProp_TurnVertical,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFG_GliderComponent_Statics::NewProp_InputStats,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFG_GliderComponent_Statics::NewProp_bIsGliding,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UFG_GliderComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UFG_GliderComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UFG_GliderComponent_Statics::ClassParams = {
		&UFG_GliderComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UFG_GliderComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UFG_GliderComponent_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UFG_GliderComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UFG_GliderComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UFG_GliderComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UFG_GliderComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UFG_GliderComponent, 700999752);
	template<> GP3_TEAM01_API UClass* StaticClass<UFG_GliderComponent>()
	{
		return UFG_GliderComponent::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UFG_GliderComponent(Z_Construct_UClass_UFG_GliderComponent, &UFG_GliderComponent::StaticClass, TEXT("/Script/gp3_team01"), TEXT("UFG_GliderComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UFG_GliderComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
