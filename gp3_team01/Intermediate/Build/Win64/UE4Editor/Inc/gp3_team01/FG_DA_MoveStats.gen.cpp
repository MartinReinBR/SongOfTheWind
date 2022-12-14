// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "gp3_team01/Public/Player/FG_DA_MoveStats.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFG_DA_MoveStats() {}
// Cross Module References
	GP3_TEAM01_API UClass* Z_Construct_UClass_UFG_DA_MoveStats_NoRegister();
	GP3_TEAM01_API UClass* Z_Construct_UClass_UFG_DA_MoveStats();
	ENGINE_API UClass* Z_Construct_UClass_UDataAsset();
	UPackage* Z_Construct_UPackage__Script_gp3_team01();
	ENGINE_API UClass* Z_Construct_UClass_UCurveFloat_NoRegister();
// End Cross Module References
	void UFG_DA_MoveStats::StaticRegisterNativesUFG_DA_MoveStats()
	{
	}
	UClass* Z_Construct_UClass_UFG_DA_MoveStats_NoRegister()
	{
		return UFG_DA_MoveStats::StaticClass();
	}
	struct Z_Construct_UClass_UFG_DA_MoveStats_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxAcceleration_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MaxAcceleration;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AccelerationCurve_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_AccelerationCurve;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxRotation_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MaxRotation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RotationCurve_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_RotationCurve;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Friction_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Friction;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxSpeed_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MaxSpeed;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UFG_DA_MoveStats_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UDataAsset,
		(UObject* (*)())Z_Construct_UPackage__Script_gp3_team01,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFG_DA_MoveStats_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "Player/FG_DA_MoveStats.h" },
		{ "ModuleRelativePath", "Public/Player/FG_DA_MoveStats.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFG_DA_MoveStats_Statics::NewProp_MaxAcceleration_MetaData[] = {
		{ "Category", "Acceleration" },
		{ "ModuleRelativePath", "Public/Player/FG_DA_MoveStats.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UFG_DA_MoveStats_Statics::NewProp_MaxAcceleration = { "MaxAcceleration", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFG_DA_MoveStats, MaxAcceleration), METADATA_PARAMS(Z_Construct_UClass_UFG_DA_MoveStats_Statics::NewProp_MaxAcceleration_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFG_DA_MoveStats_Statics::NewProp_MaxAcceleration_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFG_DA_MoveStats_Statics::NewProp_AccelerationCurve_MetaData[] = {
		{ "Category", "Acceleration" },
		{ "ModuleRelativePath", "Public/Player/FG_DA_MoveStats.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UFG_DA_MoveStats_Statics::NewProp_AccelerationCurve = { "AccelerationCurve", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFG_DA_MoveStats, AccelerationCurve), Z_Construct_UClass_UCurveFloat_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UFG_DA_MoveStats_Statics::NewProp_AccelerationCurve_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFG_DA_MoveStats_Statics::NewProp_AccelerationCurve_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFG_DA_MoveStats_Statics::NewProp_MaxRotation_MetaData[] = {
		{ "Category", "Rotation" },
		{ "ModuleRelativePath", "Public/Player/FG_DA_MoveStats.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UFG_DA_MoveStats_Statics::NewProp_MaxRotation = { "MaxRotation", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFG_DA_MoveStats, MaxRotation), METADATA_PARAMS(Z_Construct_UClass_UFG_DA_MoveStats_Statics::NewProp_MaxRotation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFG_DA_MoveStats_Statics::NewProp_MaxRotation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFG_DA_MoveStats_Statics::NewProp_RotationCurve_MetaData[] = {
		{ "Category", "Rotation" },
		{ "ModuleRelativePath", "Public/Player/FG_DA_MoveStats.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UFG_DA_MoveStats_Statics::NewProp_RotationCurve = { "RotationCurve", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFG_DA_MoveStats, RotationCurve), Z_Construct_UClass_UCurveFloat_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UFG_DA_MoveStats_Statics::NewProp_RotationCurve_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFG_DA_MoveStats_Statics::NewProp_RotationCurve_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFG_DA_MoveStats_Statics::NewProp_Friction_MetaData[] = {
		{ "Category", "FG_DA_MoveStats" },
		{ "ModuleRelativePath", "Public/Player/FG_DA_MoveStats.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UFG_DA_MoveStats_Statics::NewProp_Friction = { "Friction", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFG_DA_MoveStats, Friction), METADATA_PARAMS(Z_Construct_UClass_UFG_DA_MoveStats_Statics::NewProp_Friction_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFG_DA_MoveStats_Statics::NewProp_Friction_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFG_DA_MoveStats_Statics::NewProp_MaxSpeed_MetaData[] = {
		{ "Category", "FG_DA_MoveStats" },
		{ "ModuleRelativePath", "Public/Player/FG_DA_MoveStats.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UFG_DA_MoveStats_Statics::NewProp_MaxSpeed = { "MaxSpeed", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFG_DA_MoveStats, MaxSpeed), METADATA_PARAMS(Z_Construct_UClass_UFG_DA_MoveStats_Statics::NewProp_MaxSpeed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFG_DA_MoveStats_Statics::NewProp_MaxSpeed_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UFG_DA_MoveStats_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFG_DA_MoveStats_Statics::NewProp_MaxAcceleration,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFG_DA_MoveStats_Statics::NewProp_AccelerationCurve,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFG_DA_MoveStats_Statics::NewProp_MaxRotation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFG_DA_MoveStats_Statics::NewProp_RotationCurve,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFG_DA_MoveStats_Statics::NewProp_Friction,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFG_DA_MoveStats_Statics::NewProp_MaxSpeed,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UFG_DA_MoveStats_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UFG_DA_MoveStats>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UFG_DA_MoveStats_Statics::ClassParams = {
		&UFG_DA_MoveStats::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UFG_DA_MoveStats_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UFG_DA_MoveStats_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UFG_DA_MoveStats_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UFG_DA_MoveStats_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UFG_DA_MoveStats()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UFG_DA_MoveStats_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UFG_DA_MoveStats, 3006618606);
	template<> GP3_TEAM01_API UClass* StaticClass<UFG_DA_MoveStats>()
	{
		return UFG_DA_MoveStats::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UFG_DA_MoveStats(Z_Construct_UClass_UFG_DA_MoveStats, &UFG_DA_MoveStats::StaticClass, TEXT("/Script/gp3_team01"), TEXT("UFG_DA_MoveStats"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UFG_DA_MoveStats);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
