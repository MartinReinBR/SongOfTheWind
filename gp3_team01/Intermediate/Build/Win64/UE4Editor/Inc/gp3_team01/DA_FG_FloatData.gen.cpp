// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "gp3_team01/Public/DA_FG_FloatData.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDA_FG_FloatData() {}
// Cross Module References
	GP3_TEAM01_API UClass* Z_Construct_UClass_UDA_FG_FloatData_NoRegister();
	GP3_TEAM01_API UClass* Z_Construct_UClass_UDA_FG_FloatData();
	ENGINE_API UClass* Z_Construct_UClass_UDataAsset();
	UPackage* Z_Construct_UPackage__Script_gp3_team01();
// End Cross Module References
	void UDA_FG_FloatData::StaticRegisterNativesUDA_FG_FloatData()
	{
	}
	UClass* Z_Construct_UClass_UDA_FG_FloatData_NoRegister()
	{
		return UDA_FG_FloatData::StaticClass();
	}
	struct Z_Construct_UClass_UDA_FG_FloatData_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Data_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Data;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDA_FG_FloatData_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UDataAsset,
		(UObject* (*)())Z_Construct_UPackage__Script_gp3_team01,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDA_FG_FloatData_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "DA_FG_FloatData.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/DA_FG_FloatData.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDA_FG_FloatData_Statics::NewProp_Data_MetaData[] = {
		{ "Category", "DA_FG_FloatData" },
		{ "ModuleRelativePath", "Public/DA_FG_FloatData.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UDA_FG_FloatData_Statics::NewProp_Data = { "Data", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDA_FG_FloatData, Data), METADATA_PARAMS(Z_Construct_UClass_UDA_FG_FloatData_Statics::NewProp_Data_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDA_FG_FloatData_Statics::NewProp_Data_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UDA_FG_FloatData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDA_FG_FloatData_Statics::NewProp_Data,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDA_FG_FloatData_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDA_FG_FloatData>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UDA_FG_FloatData_Statics::ClassParams = {
		&UDA_FG_FloatData::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UDA_FG_FloatData_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UDA_FG_FloatData_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UDA_FG_FloatData_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UDA_FG_FloatData_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UDA_FG_FloatData()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UDA_FG_FloatData_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UDA_FG_FloatData, 1340612631);
	template<> GP3_TEAM01_API UClass* StaticClass<UDA_FG_FloatData>()
	{
		return UDA_FG_FloatData::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UDA_FG_FloatData(Z_Construct_UClass_UDA_FG_FloatData, &UDA_FG_FloatData::StaticClass, TEXT("/Script/gp3_team01"), TEXT("UDA_FG_FloatData"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDA_FG_FloatData);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
