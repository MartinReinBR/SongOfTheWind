// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "gp3_team01/Public/Player/FG_DA_JumpStats.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFG_DA_JumpStats() {}
// Cross Module References
	GP3_TEAM01_API UClass* Z_Construct_UClass_UFG_DA_JumpStats_NoRegister();
	GP3_TEAM01_API UClass* Z_Construct_UClass_UFG_DA_JumpStats();
	ENGINE_API UClass* Z_Construct_UClass_UDataAsset();
	UPackage* Z_Construct_UPackage__Script_gp3_team01();
	ENGINE_API UClass* Z_Construct_UClass_UCurveFloat_NoRegister();
// End Cross Module References
	void UFG_DA_JumpStats::StaticRegisterNativesUFG_DA_JumpStats()
	{
	}
	UClass* Z_Construct_UClass_UFG_DA_JumpStats_NoRegister()
	{
		return UFG_DA_JumpStats::StaticClass();
	}
	struct Z_Construct_UClass_UFG_DA_JumpStats_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_JumpForce_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_JumpForce;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_JumpReleaseCutoffAmount_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_JumpReleaseCutoffAmount;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ForceCurve_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ForceCurve;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RayDistance_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_RayDistance;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DisableFloatingTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DisableFloatingTime;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Gravity_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Gravity;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CoyoteTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_CoyoteTime;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_JumpBufferThreshold_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_JumpBufferThreshold;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UFG_DA_JumpStats_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UDataAsset,
		(UObject* (*)())Z_Construct_UPackage__Script_gp3_team01,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFG_DA_JumpStats_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "Player/FG_DA_JumpStats.h" },
		{ "ModuleRelativePath", "Public/Player/FG_DA_JumpStats.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFG_DA_JumpStats_Statics::NewProp_JumpForce_MetaData[] = {
		{ "Category", "Force" },
		{ "ModuleRelativePath", "Public/Player/FG_DA_JumpStats.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UFG_DA_JumpStats_Statics::NewProp_JumpForce = { "JumpForce", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFG_DA_JumpStats, JumpForce), METADATA_PARAMS(Z_Construct_UClass_UFG_DA_JumpStats_Statics::NewProp_JumpForce_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFG_DA_JumpStats_Statics::NewProp_JumpForce_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFG_DA_JumpStats_Statics::NewProp_JumpReleaseCutoffAmount_MetaData[] = {
		{ "Category", "Force" },
		{ "ModuleRelativePath", "Public/Player/FG_DA_JumpStats.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UFG_DA_JumpStats_Statics::NewProp_JumpReleaseCutoffAmount = { "JumpReleaseCutoffAmount", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFG_DA_JumpStats, JumpReleaseCutoffAmount), METADATA_PARAMS(Z_Construct_UClass_UFG_DA_JumpStats_Statics::NewProp_JumpReleaseCutoffAmount_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFG_DA_JumpStats_Statics::NewProp_JumpReleaseCutoffAmount_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFG_DA_JumpStats_Statics::NewProp_ForceCurve_MetaData[] = {
		{ "Category", "Force" },
		{ "ModuleRelativePath", "Public/Player/FG_DA_JumpStats.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UFG_DA_JumpStats_Statics::NewProp_ForceCurve = { "ForceCurve", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFG_DA_JumpStats, ForceCurve), Z_Construct_UClass_UCurveFloat_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UFG_DA_JumpStats_Statics::NewProp_ForceCurve_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFG_DA_JumpStats_Statics::NewProp_ForceCurve_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFG_DA_JumpStats_Statics::NewProp_RayDistance_MetaData[] = {
		{ "Category", "FG_DA_JumpStats" },
		{ "ModuleRelativePath", "Public/Player/FG_DA_JumpStats.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UFG_DA_JumpStats_Statics::NewProp_RayDistance = { "RayDistance", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFG_DA_JumpStats, RayDistance), METADATA_PARAMS(Z_Construct_UClass_UFG_DA_JumpStats_Statics::NewProp_RayDistance_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFG_DA_JumpStats_Statics::NewProp_RayDistance_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFG_DA_JumpStats_Statics::NewProp_DisableFloatingTime_MetaData[] = {
		{ "Category", "FG_DA_JumpStats" },
		{ "ModuleRelativePath", "Public/Player/FG_DA_JumpStats.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UFG_DA_JumpStats_Statics::NewProp_DisableFloatingTime = { "DisableFloatingTime", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFG_DA_JumpStats, DisableFloatingTime), METADATA_PARAMS(Z_Construct_UClass_UFG_DA_JumpStats_Statics::NewProp_DisableFloatingTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFG_DA_JumpStats_Statics::NewProp_DisableFloatingTime_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFG_DA_JumpStats_Statics::NewProp_Gravity_MetaData[] = {
		{ "Category", "FG_DA_JumpStats" },
		{ "ModuleRelativePath", "Public/Player/FG_DA_JumpStats.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UFG_DA_JumpStats_Statics::NewProp_Gravity = { "Gravity", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFG_DA_JumpStats, Gravity), METADATA_PARAMS(Z_Construct_UClass_UFG_DA_JumpStats_Statics::NewProp_Gravity_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFG_DA_JumpStats_Statics::NewProp_Gravity_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFG_DA_JumpStats_Statics::NewProp_CoyoteTime_MetaData[] = {
		{ "Category", "FG_DA_JumpStats" },
		{ "ModuleRelativePath", "Public/Player/FG_DA_JumpStats.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UFG_DA_JumpStats_Statics::NewProp_CoyoteTime = { "CoyoteTime", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFG_DA_JumpStats, CoyoteTime), METADATA_PARAMS(Z_Construct_UClass_UFG_DA_JumpStats_Statics::NewProp_CoyoteTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFG_DA_JumpStats_Statics::NewProp_CoyoteTime_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFG_DA_JumpStats_Statics::NewProp_JumpBufferThreshold_MetaData[] = {
		{ "Category", "FG_DA_JumpStats" },
		{ "ModuleRelativePath", "Public/Player/FG_DA_JumpStats.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UFG_DA_JumpStats_Statics::NewProp_JumpBufferThreshold = { "JumpBufferThreshold", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFG_DA_JumpStats, JumpBufferThreshold), METADATA_PARAMS(Z_Construct_UClass_UFG_DA_JumpStats_Statics::NewProp_JumpBufferThreshold_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFG_DA_JumpStats_Statics::NewProp_JumpBufferThreshold_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UFG_DA_JumpStats_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFG_DA_JumpStats_Statics::NewProp_JumpForce,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFG_DA_JumpStats_Statics::NewProp_JumpReleaseCutoffAmount,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFG_DA_JumpStats_Statics::NewProp_ForceCurve,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFG_DA_JumpStats_Statics::NewProp_RayDistance,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFG_DA_JumpStats_Statics::NewProp_DisableFloatingTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFG_DA_JumpStats_Statics::NewProp_Gravity,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFG_DA_JumpStats_Statics::NewProp_CoyoteTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFG_DA_JumpStats_Statics::NewProp_JumpBufferThreshold,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UFG_DA_JumpStats_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UFG_DA_JumpStats>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UFG_DA_JumpStats_Statics::ClassParams = {
		&UFG_DA_JumpStats::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UFG_DA_JumpStats_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UFG_DA_JumpStats_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UFG_DA_JumpStats_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UFG_DA_JumpStats_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UFG_DA_JumpStats()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UFG_DA_JumpStats_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UFG_DA_JumpStats, 258716633);
	template<> GP3_TEAM01_API UClass* StaticClass<UFG_DA_JumpStats>()
	{
		return UFG_DA_JumpStats::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UFG_DA_JumpStats(Z_Construct_UClass_UFG_DA_JumpStats, &UFG_DA_JumpStats::StaticClass, TEXT("/Script/gp3_team01"), TEXT("UFG_DA_JumpStats"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UFG_DA_JumpStats);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
