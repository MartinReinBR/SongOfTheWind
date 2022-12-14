// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "gp3_team01/Public/Player/States/Gliding/FG_GlidingIdleSubState.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFG_GlidingIdleSubState() {}
// Cross Module References
	GP3_TEAM01_API UClass* Z_Construct_UClass_UFG_GlidingIdleSubState_NoRegister();
	GP3_TEAM01_API UClass* Z_Construct_UClass_UFG_GlidingIdleSubState();
	GP3_TEAM01_API UClass* Z_Construct_UClass_UFG_GlidingSubState();
	UPackage* Z_Construct_UPackage__Script_gp3_team01();
	GP3_TEAM01_API UClass* Z_Construct_UClass_UFG_GliderComponent_NoRegister();
// End Cross Module References
	void UFG_GlidingIdleSubState::StaticRegisterNativesUFG_GlidingIdleSubState()
	{
	}
	UClass* Z_Construct_UClass_UFG_GlidingIdleSubState_NoRegister()
	{
		return UFG_GlidingIdleSubState::StaticClass();
	}
	struct Z_Construct_UClass_UFG_GlidingIdleSubState_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GliderComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_GliderComponent;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UFG_GlidingIdleSubState_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UFG_GlidingSubState,
		(UObject* (*)())Z_Construct_UPackage__Script_gp3_team01,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFG_GlidingIdleSubState_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "Player/States/Gliding/FG_GlidingIdleSubState.h" },
		{ "ModuleRelativePath", "Public/Player/States/Gliding/FG_GlidingIdleSubState.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFG_GlidingIdleSubState_Statics::NewProp_GliderComponent_MetaData[] = {
		{ "Category", "FG_GlidingIdleSubState" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Player/States/Gliding/FG_GlidingIdleSubState.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UFG_GlidingIdleSubState_Statics::NewProp_GliderComponent = { "GliderComponent", nullptr, (EPropertyFlags)0x001000000008001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFG_GlidingIdleSubState, GliderComponent), Z_Construct_UClass_UFG_GliderComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UFG_GlidingIdleSubState_Statics::NewProp_GliderComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFG_GlidingIdleSubState_Statics::NewProp_GliderComponent_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UFG_GlidingIdleSubState_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFG_GlidingIdleSubState_Statics::NewProp_GliderComponent,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UFG_GlidingIdleSubState_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UFG_GlidingIdleSubState>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UFG_GlidingIdleSubState_Statics::ClassParams = {
		&UFG_GlidingIdleSubState::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UFG_GlidingIdleSubState_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UFG_GlidingIdleSubState_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UFG_GlidingIdleSubState_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UFG_GlidingIdleSubState_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UFG_GlidingIdleSubState()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UFG_GlidingIdleSubState_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UFG_GlidingIdleSubState, 2517008210);
	template<> GP3_TEAM01_API UClass* StaticClass<UFG_GlidingIdleSubState>()
	{
		return UFG_GlidingIdleSubState::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UFG_GlidingIdleSubState(Z_Construct_UClass_UFG_GlidingIdleSubState, &UFG_GlidingIdleSubState::StaticClass, TEXT("/Script/gp3_team01"), TEXT("UFG_GlidingIdleSubState"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UFG_GlidingIdleSubState);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
