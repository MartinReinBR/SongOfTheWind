// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "gp3_team01/Public/Audio/FG_DA_Instrument.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFG_DA_Instrument() {}
// Cross Module References
	GP3_TEAM01_API UClass* Z_Construct_UClass_UFG_DA_Instrument_NoRegister();
	GP3_TEAM01_API UClass* Z_Construct_UClass_UFG_DA_Instrument();
	ENGINE_API UClass* Z_Construct_UClass_UDataAsset();
	UPackage* Z_Construct_UPackage__Script_gp3_team01();
	GP3_TEAM01_API UClass* Z_Construct_UClass_UInstrumentChord_NoRegister();
// End Cross Module References
	void UFG_DA_Instrument::StaticRegisterNativesUFG_DA_Instrument()
	{
	}
	UClass* Z_Construct_UClass_UFG_DA_Instrument_NoRegister()
	{
		return UFG_DA_Instrument::StaticClass();
	}
	struct Z_Construct_UClass_UFG_DA_Instrument_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Chords_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Chords_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Chords;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UFG_DA_Instrument_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UDataAsset,
		(UObject* (*)())Z_Construct_UPackage__Script_gp3_team01,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFG_DA_Instrument_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "Audio/FG_DA_Instrument.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Audio/FG_DA_Instrument.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UFG_DA_Instrument_Statics::NewProp_Chords_Inner = { "Chords", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UInstrumentChord_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFG_DA_Instrument_Statics::NewProp_Chords_MetaData[] = {
		{ "Category", "FG_DA_Instrument" },
		{ "ModuleRelativePath", "Public/Audio/FG_DA_Instrument.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UFG_DA_Instrument_Statics::NewProp_Chords = { "Chords", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFG_DA_Instrument, Chords), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UFG_DA_Instrument_Statics::NewProp_Chords_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFG_DA_Instrument_Statics::NewProp_Chords_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UFG_DA_Instrument_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFG_DA_Instrument_Statics::NewProp_Chords_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFG_DA_Instrument_Statics::NewProp_Chords,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UFG_DA_Instrument_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UFG_DA_Instrument>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UFG_DA_Instrument_Statics::ClassParams = {
		&UFG_DA_Instrument::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UFG_DA_Instrument_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UFG_DA_Instrument_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UFG_DA_Instrument_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UFG_DA_Instrument_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UFG_DA_Instrument()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UFG_DA_Instrument_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UFG_DA_Instrument, 3580610910);
	template<> GP3_TEAM01_API UClass* StaticClass<UFG_DA_Instrument>()
	{
		return UFG_DA_Instrument::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UFG_DA_Instrument(Z_Construct_UClass_UFG_DA_Instrument, &UFG_DA_Instrument::StaticClass, TEXT("/Script/gp3_team01"), TEXT("UFG_DA_Instrument"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UFG_DA_Instrument);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
