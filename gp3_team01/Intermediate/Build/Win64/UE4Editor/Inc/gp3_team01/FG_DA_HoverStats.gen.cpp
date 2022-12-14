// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "gp3_team01/Public/Player/FG_DA_HoverStats.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFG_DA_HoverStats() {}
// Cross Module References
	GP3_TEAM01_API UClass* Z_Construct_UClass_UFG_DA_HoverStats_NoRegister();
	GP3_TEAM01_API UClass* Z_Construct_UClass_UFG_DA_HoverStats();
	ENGINE_API UClass* Z_Construct_UClass_UDataAsset();
	UPackage* Z_Construct_UPackage__Script_gp3_team01();
// End Cross Module References
	void UFG_DA_HoverStats::StaticRegisterNativesUFG_DA_HoverStats()
	{
	}
	UClass* Z_Construct_UClass_UFG_DA_HoverStats_NoRegister()
	{
		return UFG_DA_HoverStats::StaticClass();
	}
	struct Z_Construct_UClass_UFG_DA_HoverStats_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HoverDistance_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_HoverDistance;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HoverRayDistance_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_HoverRayDistance;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HoverStrength_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_HoverStrength;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HoverDamping_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_HoverDamping;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UFG_DA_HoverStats_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UDataAsset,
		(UObject* (*)())Z_Construct_UPackage__Script_gp3_team01,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFG_DA_HoverStats_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "Player/FG_DA_HoverStats.h" },
		{ "ModuleRelativePath", "Public/Player/FG_DA_HoverStats.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFG_DA_HoverStats_Statics::NewProp_HoverDistance_MetaData[] = {
		{ "Category", "FG_DA_HoverStats" },
		{ "ModuleRelativePath", "Public/Player/FG_DA_HoverStats.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UFG_DA_HoverStats_Statics::NewProp_HoverDistance = { "HoverDistance", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFG_DA_HoverStats, HoverDistance), METADATA_PARAMS(Z_Construct_UClass_UFG_DA_HoverStats_Statics::NewProp_HoverDistance_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFG_DA_HoverStats_Statics::NewProp_HoverDistance_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFG_DA_HoverStats_Statics::NewProp_HoverRayDistance_MetaData[] = {
		{ "Category", "FG_DA_HoverStats" },
		{ "ModuleRelativePath", "Public/Player/FG_DA_HoverStats.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UFG_DA_HoverStats_Statics::NewProp_HoverRayDistance = { "HoverRayDistance", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFG_DA_HoverStats, HoverRayDistance), METADATA_PARAMS(Z_Construct_UClass_UFG_DA_HoverStats_Statics::NewProp_HoverRayDistance_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFG_DA_HoverStats_Statics::NewProp_HoverRayDistance_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFG_DA_HoverStats_Statics::NewProp_HoverStrength_MetaData[] = {
		{ "Category", "FG_DA_HoverStats" },
		{ "ModuleRelativePath", "Public/Player/FG_DA_HoverStats.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UFG_DA_HoverStats_Statics::NewProp_HoverStrength = { "HoverStrength", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFG_DA_HoverStats, HoverStrength), METADATA_PARAMS(Z_Construct_UClass_UFG_DA_HoverStats_Statics::NewProp_HoverStrength_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFG_DA_HoverStats_Statics::NewProp_HoverStrength_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFG_DA_HoverStats_Statics::NewProp_HoverDamping_MetaData[] = {
		{ "Category", "FG_DA_HoverStats" },
		{ "ModuleRelativePath", "Public/Player/FG_DA_HoverStats.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UFG_DA_HoverStats_Statics::NewProp_HoverDamping = { "HoverDamping", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFG_DA_HoverStats, HoverDamping), METADATA_PARAMS(Z_Construct_UClass_UFG_DA_HoverStats_Statics::NewProp_HoverDamping_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFG_DA_HoverStats_Statics::NewProp_HoverDamping_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UFG_DA_HoverStats_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFG_DA_HoverStats_Statics::NewProp_HoverDistance,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFG_DA_HoverStats_Statics::NewProp_HoverRayDistance,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFG_DA_HoverStats_Statics::NewProp_HoverStrength,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFG_DA_HoverStats_Statics::NewProp_HoverDamping,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UFG_DA_HoverStats_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UFG_DA_HoverStats>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UFG_DA_HoverStats_Statics::ClassParams = {
		&UFG_DA_HoverStats::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UFG_DA_HoverStats_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UFG_DA_HoverStats_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UFG_DA_HoverStats_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UFG_DA_HoverStats_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UFG_DA_HoverStats()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UFG_DA_HoverStats_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UFG_DA_HoverStats, 2145131926);
	template<> GP3_TEAM01_API UClass* StaticClass<UFG_DA_HoverStats>()
	{
		return UFG_DA_HoverStats::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UFG_DA_HoverStats(Z_Construct_UClass_UFG_DA_HoverStats, &UFG_DA_HoverStats::StaticClass, TEXT("/Script/gp3_team01"), TEXT("UFG_DA_HoverStats"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UFG_DA_HoverStats);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
