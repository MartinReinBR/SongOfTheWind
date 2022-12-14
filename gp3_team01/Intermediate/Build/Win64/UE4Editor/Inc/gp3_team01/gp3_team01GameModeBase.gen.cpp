// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "gp3_team01/gp3_team01GameModeBase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodegp3_team01GameModeBase() {}
// Cross Module References
	GP3_TEAM01_API UClass* Z_Construct_UClass_Agp3_team01GameModeBase_NoRegister();
	GP3_TEAM01_API UClass* Z_Construct_UClass_Agp3_team01GameModeBase();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_gp3_team01();
// End Cross Module References
	void Agp3_team01GameModeBase::StaticRegisterNativesAgp3_team01GameModeBase()
	{
	}
	UClass* Z_Construct_UClass_Agp3_team01GameModeBase_NoRegister()
	{
		return Agp3_team01GameModeBase::StaticClass();
	}
	struct Z_Construct_UClass_Agp3_team01GameModeBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_Agp3_team01GameModeBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_gp3_team01,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_Agp3_team01GameModeBase_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "gp3_team01GameModeBase.h" },
		{ "ModuleRelativePath", "gp3_team01GameModeBase.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_Agp3_team01GameModeBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<Agp3_team01GameModeBase>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_Agp3_team01GameModeBase_Statics::ClassParams = {
		&Agp3_team01GameModeBase::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x009002ACu,
		METADATA_PARAMS(Z_Construct_UClass_Agp3_team01GameModeBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_Agp3_team01GameModeBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_Agp3_team01GameModeBase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_Agp3_team01GameModeBase_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(Agp3_team01GameModeBase, 508219373);
	template<> GP3_TEAM01_API UClass* StaticClass<Agp3_team01GameModeBase>()
	{
		return Agp3_team01GameModeBase::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_Agp3_team01GameModeBase(Z_Construct_UClass_Agp3_team01GameModeBase, &Agp3_team01GameModeBase::StaticClass, TEXT("/Script/gp3_team01"), TEXT("Agp3_team01GameModeBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(Agp3_team01GameModeBase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
