// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "gp3_team01/Public/FG_SettingsWidget.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFG_SettingsWidget() {}
// Cross Module References
	GP3_TEAM01_API UClass* Z_Construct_UClass_UFG_SettingsWidget_NoRegister();
	GP3_TEAM01_API UClass* Z_Construct_UClass_UFG_SettingsWidget();
	UMG_API UClass* Z_Construct_UClass_UUserWidget();
	UPackage* Z_Construct_UPackage__Script_gp3_team01();
// End Cross Module References
	void UFG_SettingsWidget::StaticRegisterNativesUFG_SettingsWidget()
	{
	}
	UClass* Z_Construct_UClass_UFG_SettingsWidget_NoRegister()
	{
		return UFG_SettingsWidget::StaticClass();
	}
	struct Z_Construct_UClass_UFG_SettingsWidget_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UFG_SettingsWidget_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UUserWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_gp3_team01,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFG_SettingsWidget_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "FG_SettingsWidget.h" },
		{ "ModuleRelativePath", "Public/FG_SettingsWidget.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UFG_SettingsWidget_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UFG_SettingsWidget>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UFG_SettingsWidget_Statics::ClassParams = {
		&UFG_SettingsWidget::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x00B010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UFG_SettingsWidget_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UFG_SettingsWidget_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UFG_SettingsWidget()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UFG_SettingsWidget_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UFG_SettingsWidget, 1747777166);
	template<> GP3_TEAM01_API UClass* StaticClass<UFG_SettingsWidget>()
	{
		return UFG_SettingsWidget::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UFG_SettingsWidget(Z_Construct_UClass_UFG_SettingsWidget, &UFG_SettingsWidget::StaticClass, TEXT("/Script/gp3_team01"), TEXT("UFG_SettingsWidget"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UFG_SettingsWidget);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
