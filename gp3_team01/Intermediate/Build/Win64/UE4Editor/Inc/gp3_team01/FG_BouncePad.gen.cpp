// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "gp3_team01/Public/LevelElements/BouncePad/FG_BouncePad.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFG_BouncePad() {}
// Cross Module References
	GP3_TEAM01_API UClass* Z_Construct_UClass_AFG_BouncePad_NoRegister();
	GP3_TEAM01_API UClass* Z_Construct_UClass_AFG_BouncePad();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_gp3_team01();
	GP3_TEAM01_API UClass* Z_Construct_UClass_UFG_LocomotionComponent_NoRegister();
	GP3_TEAM01_API UClass* Z_Construct_UClass_UFG_DA_Instrument_NoRegister();
	GP3_TEAM01_API UClass* Z_Construct_UClass_UInstrumentChord_NoRegister();
	GP3_TEAM01_API UClass* Z_Construct_UClass_UFG_InstrumentComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UBoxComponent_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(AFG_BouncePad::execBounce)
	{
		P_GET_OBJECT(UFG_LocomotionComponent,Z_Param_Locomotion);
		P_GET_PROPERTY(FFloatProperty,Z_Param_RayDistance);
		P_GET_PROPERTY(FFloatProperty,Z_Param_DisableFloatTimer);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Bounce(Z_Param_Locomotion,Z_Param_RayDistance,Z_Param_DisableFloatTimer);
		P_NATIVE_END;
	}
	void AFG_BouncePad::StaticRegisterNativesAFG_BouncePad()
	{
		UClass* Class = AFG_BouncePad::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "Bounce", &AFG_BouncePad::execBounce },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AFG_BouncePad_Bounce_Statics
	{
		struct FG_BouncePad_eventBounce_Parms
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFG_BouncePad_Bounce_Statics::NewProp_Locomotion_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AFG_BouncePad_Bounce_Statics::NewProp_Locomotion = { "Locomotion", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FG_BouncePad_eventBounce_Parms, Locomotion), Z_Construct_UClass_UFG_LocomotionComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_AFG_BouncePad_Bounce_Statics::NewProp_Locomotion_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AFG_BouncePad_Bounce_Statics::NewProp_Locomotion_MetaData)) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AFG_BouncePad_Bounce_Statics::NewProp_RayDistance = { "RayDistance", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FG_BouncePad_eventBounce_Parms, RayDistance), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AFG_BouncePad_Bounce_Statics::NewProp_DisableFloatTimer = { "DisableFloatTimer", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FG_BouncePad_eventBounce_Parms, DisableFloatTimer), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFG_BouncePad_Bounce_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFG_BouncePad_Bounce_Statics::NewProp_Locomotion,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFG_BouncePad_Bounce_Statics::NewProp_RayDistance,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFG_BouncePad_Bounce_Statics::NewProp_DisableFloatTimer,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFG_BouncePad_Bounce_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/LevelElements/BouncePad/FG_BouncePad.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFG_BouncePad_Bounce_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFG_BouncePad, nullptr, "Bounce", nullptr, nullptr, sizeof(FG_BouncePad_eventBounce_Parms), Z_Construct_UFunction_AFG_BouncePad_Bounce_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AFG_BouncePad_Bounce_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFG_BouncePad_Bounce_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AFG_BouncePad_Bounce_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFG_BouncePad_Bounce()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFG_BouncePad_Bounce_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AFG_BouncePad_NoRegister()
	{
		return AFG_BouncePad::StaticClass();
	}
	struct Z_Construct_UClass_AFG_BouncePad_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Instrument_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Instrument;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CurrentChord_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CurrentChord;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InstrumentHandler_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_InstrumentHandler;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Root_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Root;
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
	UObject* (*const Z_Construct_UClass_AFG_BouncePad_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_gp3_team01,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AFG_BouncePad_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AFG_BouncePad_Bounce, "Bounce" }, // 6638596
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFG_BouncePad_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "LevelElements/BouncePad/FG_BouncePad.h" },
		{ "ModuleRelativePath", "Public/LevelElements/BouncePad/FG_BouncePad.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFG_BouncePad_Statics::NewProp_Instrument_MetaData[] = {
		{ "Category", "FG_BouncePad" },
		{ "ModuleRelativePath", "Public/LevelElements/BouncePad/FG_BouncePad.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFG_BouncePad_Statics::NewProp_Instrument = { "Instrument", nullptr, (EPropertyFlags)0x0010000000010005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFG_BouncePad, Instrument), Z_Construct_UClass_UFG_DA_Instrument_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AFG_BouncePad_Statics::NewProp_Instrument_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFG_BouncePad_Statics::NewProp_Instrument_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFG_BouncePad_Statics::NewProp_CurrentChord_MetaData[] = {
		{ "ModuleRelativePath", "Public/LevelElements/BouncePad/FG_BouncePad.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFG_BouncePad_Statics::NewProp_CurrentChord = { "CurrentChord", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFG_BouncePad, CurrentChord), Z_Construct_UClass_UInstrumentChord_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AFG_BouncePad_Statics::NewProp_CurrentChord_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFG_BouncePad_Statics::NewProp_CurrentChord_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFG_BouncePad_Statics::NewProp_InstrumentHandler_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/LevelElements/BouncePad/FG_BouncePad.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFG_BouncePad_Statics::NewProp_InstrumentHandler = { "InstrumentHandler", nullptr, (EPropertyFlags)0x0010000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFG_BouncePad, InstrumentHandler), Z_Construct_UClass_UFG_InstrumentComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AFG_BouncePad_Statics::NewProp_InstrumentHandler_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFG_BouncePad_Statics::NewProp_InstrumentHandler_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFG_BouncePad_Statics::NewProp_Root_MetaData[] = {
		{ "Category", "FG_BouncePad" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/LevelElements/BouncePad/FG_BouncePad.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFG_BouncePad_Statics::NewProp_Root = { "Root", nullptr, (EPropertyFlags)0x00100000000a0009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFG_BouncePad, Root), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AFG_BouncePad_Statics::NewProp_Root_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFG_BouncePad_Statics::NewProp_Root_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFG_BouncePad_Statics::NewProp_BoxTrigger_MetaData[] = {
		{ "Category", "FG_BouncePad" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/LevelElements/BouncePad/FG_BouncePad.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFG_BouncePad_Statics::NewProp_BoxTrigger = { "BoxTrigger", nullptr, (EPropertyFlags)0x00100000000a0009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFG_BouncePad, BoxTrigger), Z_Construct_UClass_UBoxComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AFG_BouncePad_Statics::NewProp_BoxTrigger_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFG_BouncePad_Statics::NewProp_BoxTrigger_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFG_BouncePad_Statics::NewProp_BounceForce_MetaData[] = {
		{ "Category", "BouncePad" },
		{ "ModuleRelativePath", "Public/LevelElements/BouncePad/FG_BouncePad.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AFG_BouncePad_Statics::NewProp_BounceForce = { "BounceForce", nullptr, (EPropertyFlags)0x0010000000000805, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFG_BouncePad, BounceForce), METADATA_PARAMS(Z_Construct_UClass_AFG_BouncePad_Statics::NewProp_BounceForce_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFG_BouncePad_Statics::NewProp_BounceForce_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AFG_BouncePad_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFG_BouncePad_Statics::NewProp_Instrument,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFG_BouncePad_Statics::NewProp_CurrentChord,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFG_BouncePad_Statics::NewProp_InstrumentHandler,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFG_BouncePad_Statics::NewProp_Root,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFG_BouncePad_Statics::NewProp_BoxTrigger,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFG_BouncePad_Statics::NewProp_BounceForce,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AFG_BouncePad_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AFG_BouncePad>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AFG_BouncePad_Statics::ClassParams = {
		&AFG_BouncePad::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AFG_BouncePad_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AFG_BouncePad_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AFG_BouncePad_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AFG_BouncePad_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AFG_BouncePad()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AFG_BouncePad_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AFG_BouncePad, 2328827631);
	template<> GP3_TEAM01_API UClass* StaticClass<AFG_BouncePad>()
	{
		return AFG_BouncePad::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AFG_BouncePad(Z_Construct_UClass_AFG_BouncePad, &AFG_BouncePad::StaticClass, TEXT("/Script/gp3_team01"), TEXT("AFG_BouncePad"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AFG_BouncePad);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
