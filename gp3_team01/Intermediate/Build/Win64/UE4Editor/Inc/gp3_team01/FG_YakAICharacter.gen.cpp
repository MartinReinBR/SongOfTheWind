// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "gp3_team01/Public/LevelElements/Yak/FG_YakAICharacter.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFG_YakAICharacter() {}
// Cross Module References
	GP3_TEAM01_API UClass* Z_Construct_UClass_AFG_YakAICharacter_NoRegister();
	GP3_TEAM01_API UClass* Z_Construct_UClass_AFG_YakAICharacter();
	ENGINE_API UClass* Z_Construct_UClass_ACharacter();
	UPackage* Z_Construct_UPackage__Script_gp3_team01();
	GP3_TEAM01_API UClass* Z_Construct_UClass_UFG_LocomotionComponent_NoRegister();
	GP3_TEAM01_API UClass* Z_Construct_UClass_UFG_InstrumentComponent_NoRegister();
	GP3_TEAM01_API UClass* Z_Construct_UClass_UDA_FG_NoteSheet_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UBoxComponent_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(AFG_YakAICharacter::execBounce)
	{
		P_GET_OBJECT(UFG_LocomotionComponent,Z_Param_Locomotion);
		P_GET_PROPERTY(FFloatProperty,Z_Param_RayDistance);
		P_GET_PROPERTY(FFloatProperty,Z_Param_DisableFloatTimer);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Bounce(Z_Param_Locomotion,Z_Param_RayDistance,Z_Param_DisableFloatTimer);
		P_NATIVE_END;
	}
	void AFG_YakAICharacter::StaticRegisterNativesAFG_YakAICharacter()
	{
		UClass* Class = AFG_YakAICharacter::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "Bounce", &AFG_YakAICharacter::execBounce },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AFG_YakAICharacter_Bounce_Statics
	{
		struct FG_YakAICharacter_eventBounce_Parms
		{
			UFG_LocomotionComponent* Locomotion;
			float RayDistance;
			float DisableFloatTimer;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Locomotion_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Locomotion;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_RayDistance;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DisableFloatTimer;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFG_YakAICharacter_Bounce_Statics::NewProp_Locomotion_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AFG_YakAICharacter_Bounce_Statics::NewProp_Locomotion = { "Locomotion", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FG_YakAICharacter_eventBounce_Parms, Locomotion), Z_Construct_UClass_UFG_LocomotionComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_AFG_YakAICharacter_Bounce_Statics::NewProp_Locomotion_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AFG_YakAICharacter_Bounce_Statics::NewProp_Locomotion_MetaData)) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AFG_YakAICharacter_Bounce_Statics::NewProp_RayDistance = { "RayDistance", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FG_YakAICharacter_eventBounce_Parms, RayDistance), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AFG_YakAICharacter_Bounce_Statics::NewProp_DisableFloatTimer = { "DisableFloatTimer", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FG_YakAICharacter_eventBounce_Parms, DisableFloatTimer), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFG_YakAICharacter_Bounce_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFG_YakAICharacter_Bounce_Statics::NewProp_Locomotion,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFG_YakAICharacter_Bounce_Statics::NewProp_RayDistance,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFG_YakAICharacter_Bounce_Statics::NewProp_DisableFloatTimer,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFG_YakAICharacter_Bounce_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/LevelElements/Yak/FG_YakAICharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFG_YakAICharacter_Bounce_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFG_YakAICharacter, nullptr, "Bounce", nullptr, nullptr, sizeof(FG_YakAICharacter_eventBounce_Parms), Z_Construct_UFunction_AFG_YakAICharacter_Bounce_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AFG_YakAICharacter_Bounce_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFG_YakAICharacter_Bounce_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AFG_YakAICharacter_Bounce_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFG_YakAICharacter_Bounce()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFG_YakAICharacter_Bounce_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AFG_YakAICharacter_NoRegister()
	{
		return AFG_YakAICharacter::StaticClass();
	}
	struct Z_Construct_UClass_AFG_YakAICharacter_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InstrumentHandler_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_InstrumentHandler;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NoteSheet_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_NoteSheet;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BoxTrigger_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_BoxTrigger;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BounceForce_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_BounceForce;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AFG_YakAICharacter_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ACharacter,
		(UObject* (*)())Z_Construct_UPackage__Script_gp3_team01,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AFG_YakAICharacter_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AFG_YakAICharacter_Bounce, "Bounce" }, // 183509641
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFG_YakAICharacter_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "LevelElements/Yak/FG_YakAICharacter.h" },
		{ "ModuleRelativePath", "Public/LevelElements/Yak/FG_YakAICharacter.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFG_YakAICharacter_Statics::NewProp_InstrumentHandler_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/LevelElements/Yak/FG_YakAICharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFG_YakAICharacter_Statics::NewProp_InstrumentHandler = { "InstrumentHandler", nullptr, (EPropertyFlags)0x0010000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFG_YakAICharacter, InstrumentHandler), Z_Construct_UClass_UFG_InstrumentComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AFG_YakAICharacter_Statics::NewProp_InstrumentHandler_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFG_YakAICharacter_Statics::NewProp_InstrumentHandler_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFG_YakAICharacter_Statics::NewProp_NoteSheet_MetaData[] = {
		{ "Category", "FG_YakAICharacter" },
		{ "ModuleRelativePath", "Public/LevelElements/Yak/FG_YakAICharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFG_YakAICharacter_Statics::NewProp_NoteSheet = { "NoteSheet", nullptr, (EPropertyFlags)0x0010000000010005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFG_YakAICharacter, NoteSheet), Z_Construct_UClass_UDA_FG_NoteSheet_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AFG_YakAICharacter_Statics::NewProp_NoteSheet_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFG_YakAICharacter_Statics::NewProp_NoteSheet_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFG_YakAICharacter_Statics::NewProp_BoxTrigger_MetaData[] = {
		{ "Category", "FG_YakAICharacter" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/LevelElements/Yak/FG_YakAICharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFG_YakAICharacter_Statics::NewProp_BoxTrigger = { "BoxTrigger", nullptr, (EPropertyFlags)0x00100000000a0009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFG_YakAICharacter, BoxTrigger), Z_Construct_UClass_UBoxComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AFG_YakAICharacter_Statics::NewProp_BoxTrigger_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFG_YakAICharacter_Statics::NewProp_BoxTrigger_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFG_YakAICharacter_Statics::NewProp_BounceForce_MetaData[] = {
		{ "Category", "BouncePad" },
		{ "ModuleRelativePath", "Public/LevelElements/Yak/FG_YakAICharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AFG_YakAICharacter_Statics::NewProp_BounceForce = { "BounceForce", nullptr, (EPropertyFlags)0x0010000000000805, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFG_YakAICharacter, BounceForce), METADATA_PARAMS(Z_Construct_UClass_AFG_YakAICharacter_Statics::NewProp_BounceForce_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFG_YakAICharacter_Statics::NewProp_BounceForce_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AFG_YakAICharacter_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFG_YakAICharacter_Statics::NewProp_InstrumentHandler,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFG_YakAICharacter_Statics::NewProp_NoteSheet,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFG_YakAICharacter_Statics::NewProp_BoxTrigger,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFG_YakAICharacter_Statics::NewProp_BounceForce,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AFG_YakAICharacter_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AFG_YakAICharacter>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AFG_YakAICharacter_Statics::ClassParams = {
		&AFG_YakAICharacter::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AFG_YakAICharacter_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AFG_YakAICharacter_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AFG_YakAICharacter_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AFG_YakAICharacter_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AFG_YakAICharacter()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AFG_YakAICharacter_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AFG_YakAICharacter, 799725705);
	template<> GP3_TEAM01_API UClass* StaticClass<AFG_YakAICharacter>()
	{
		return AFG_YakAICharacter::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AFG_YakAICharacter(Z_Construct_UClass_AFG_YakAICharacter, &AFG_YakAICharacter::StaticClass, TEXT("/Script/gp3_team01"), TEXT("AFG_YakAICharacter"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AFG_YakAICharacter);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
