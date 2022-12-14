// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "gp3_team01/Public/LevelElements/Yak/ABP_Yak.h"
#include "Engine/Classes/Components/SkeletalMeshComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeABP_Yak() {}
// Cross Module References
	GP3_TEAM01_API UClass* Z_Construct_UClass_UABP_Yak_NoRegister();
	GP3_TEAM01_API UClass* Z_Construct_UClass_UABP_Yak();
	ENGINE_API UClass* Z_Construct_UClass_UAnimInstance();
	UPackage* Z_Construct_UPackage__Script_gp3_team01();
	ENGINE_API UClass* Z_Construct_UClass_UAnimMontage_NoRegister();
// End Cross Module References
	void UABP_Yak::StaticRegisterNativesUABP_Yak()
	{
	}
	UClass* Z_Construct_UClass_UABP_Yak_NoRegister()
	{
		return UABP_Yak::StaticClass();
	}
	struct Z_Construct_UClass_UABP_Yak_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_VelocityDist_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_VelocityDist;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BounceMontage_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_BounceMontage;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UABP_Yak_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAnimInstance,
		(UObject* (*)())Z_Construct_UPackage__Script_gp3_team01,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UABP_Yak_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "AnimInstance" },
		{ "IncludePath", "LevelElements/Yak/ABP_Yak.h" },
		{ "ModuleRelativePath", "Public/LevelElements/Yak/ABP_Yak.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UABP_Yak_Statics::NewProp_VelocityDist_MetaData[] = {
		{ "Category", "ABP_Yak" },
		{ "ModuleRelativePath", "Public/LevelElements/Yak/ABP_Yak.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UABP_Yak_Statics::NewProp_VelocityDist = { "VelocityDist", nullptr, (EPropertyFlags)0x0010000000000004, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UABP_Yak, VelocityDist), METADATA_PARAMS(Z_Construct_UClass_UABP_Yak_Statics::NewProp_VelocityDist_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UABP_Yak_Statics::NewProp_VelocityDist_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UABP_Yak_Statics::NewProp_BounceMontage_MetaData[] = {
		{ "Category", "ABP_Yak" },
		{ "ModuleRelativePath", "Public/LevelElements/Yak/ABP_Yak.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UABP_Yak_Statics::NewProp_BounceMontage = { "BounceMontage", nullptr, (EPropertyFlags)0x0010000000000004, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UABP_Yak, BounceMontage), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UABP_Yak_Statics::NewProp_BounceMontage_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UABP_Yak_Statics::NewProp_BounceMontage_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UABP_Yak_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UABP_Yak_Statics::NewProp_VelocityDist,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UABP_Yak_Statics::NewProp_BounceMontage,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UABP_Yak_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UABP_Yak>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UABP_Yak_Statics::ClassParams = {
		&UABP_Yak::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UABP_Yak_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UABP_Yak_Statics::PropPointers),
		0,
		0x009000A8u,
		METADATA_PARAMS(Z_Construct_UClass_UABP_Yak_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UABP_Yak_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UABP_Yak()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UABP_Yak_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UABP_Yak, 1471934774);
	template<> GP3_TEAM01_API UClass* StaticClass<UABP_Yak>()
	{
		return UABP_Yak::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UABP_Yak(Z_Construct_UClass_UABP_Yak, &UABP_Yak::StaticClass, TEXT("/Script/gp3_team01"), TEXT("UABP_Yak"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UABP_Yak);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
