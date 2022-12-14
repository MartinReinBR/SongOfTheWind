// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "gp3_team01/Public/Player/ABP_Glider.h"
#include "Engine/Classes/Components/SkeletalMeshComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeABP_Glider() {}
// Cross Module References
	GP3_TEAM01_API UClass* Z_Construct_UClass_UABP_Glider_NoRegister();
	GP3_TEAM01_API UClass* Z_Construct_UClass_UABP_Glider();
	ENGINE_API UClass* Z_Construct_UClass_UAnimInstance();
	UPackage* Z_Construct_UPackage__Script_gp3_team01();
// End Cross Module References
	void UABP_Glider::StaticRegisterNativesUABP_Glider()
	{
	}
	UClass* Z_Construct_UClass_UABP_Glider_NoRegister()
	{
		return UABP_Glider::StaticClass();
	}
	struct Z_Construct_UClass_UABP_Glider_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsActive_MetaData[];
#endif
		static void NewProp_bIsActive_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsActive;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_VelocityDist_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_VelocityDist;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UABP_Glider_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAnimInstance,
		(UObject* (*)())Z_Construct_UPackage__Script_gp3_team01,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UABP_Glider_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "AnimInstance" },
		{ "IncludePath", "Player/ABP_Glider.h" },
		{ "ModuleRelativePath", "Public/Player/ABP_Glider.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UABP_Glider_Statics::NewProp_bIsActive_MetaData[] = {
		{ "Category", "ABP_Glider" },
		{ "ModuleRelativePath", "Public/Player/ABP_Glider.h" },
	};
#endif
	void Z_Construct_UClass_UABP_Glider_Statics::NewProp_bIsActive_SetBit(void* Obj)
	{
		((UABP_Glider*)Obj)->bIsActive = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UABP_Glider_Statics::NewProp_bIsActive = { "bIsActive", nullptr, (EPropertyFlags)0x0010000000000004, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UABP_Glider), &Z_Construct_UClass_UABP_Glider_Statics::NewProp_bIsActive_SetBit, METADATA_PARAMS(Z_Construct_UClass_UABP_Glider_Statics::NewProp_bIsActive_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UABP_Glider_Statics::NewProp_bIsActive_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UABP_Glider_Statics::NewProp_VelocityDist_MetaData[] = {
		{ "Category", "ABP_Glider" },
		{ "ModuleRelativePath", "Public/Player/ABP_Glider.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UABP_Glider_Statics::NewProp_VelocityDist = { "VelocityDist", nullptr, (EPropertyFlags)0x0010000000000004, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UABP_Glider, VelocityDist), METADATA_PARAMS(Z_Construct_UClass_UABP_Glider_Statics::NewProp_VelocityDist_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UABP_Glider_Statics::NewProp_VelocityDist_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UABP_Glider_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UABP_Glider_Statics::NewProp_bIsActive,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UABP_Glider_Statics::NewProp_VelocityDist,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UABP_Glider_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UABP_Glider>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UABP_Glider_Statics::ClassParams = {
		&UABP_Glider::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UABP_Glider_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UABP_Glider_Statics::PropPointers),
		0,
		0x009000A8u,
		METADATA_PARAMS(Z_Construct_UClass_UABP_Glider_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UABP_Glider_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UABP_Glider()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UABP_Glider_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UABP_Glider, 3372994280);
	template<> GP3_TEAM01_API UClass* StaticClass<UABP_Glider>()
	{
		return UABP_Glider::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UABP_Glider(Z_Construct_UClass_UABP_Glider, &UABP_Glider::StaticClass, TEXT("/Script/gp3_team01"), TEXT("UABP_Glider"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UABP_Glider);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
