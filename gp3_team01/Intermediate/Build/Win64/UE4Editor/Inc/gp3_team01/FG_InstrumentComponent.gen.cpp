// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "gp3_team01/Public/Audio/FG_InstrumentComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFG_InstrumentComponent() {}
// Cross Module References
	GP3_TEAM01_API UClass* Z_Construct_UClass_UFG_InstrumentComponent_NoRegister();
	GP3_TEAM01_API UClass* Z_Construct_UClass_UFG_InstrumentComponent();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	UPackage* Z_Construct_UPackage__Script_gp3_team01();
	GP3_TEAM01_API UClass* Z_Construct_UClass_UInstrumentChord_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USoundWave_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UAudioComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UFG_InstrumentComponent::execPlaySoundWav)
	{
		P_GET_OBJECT(USoundWave,Z_Param_Sound);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Volume);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->PlaySoundWav(Z_Param_Sound,Z_Param_Volume);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UFG_InstrumentComponent::execPlayAndGetNext)
	{
		P_GET_OBJECT(UInstrumentChord,Z_Param_Chord);
		P_GET_PROPERTY(FIntProperty,Z_Param_Next);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UInstrumentChord**)Z_Param__Result=P_THIS->PlayAndGetNext(Z_Param_Chord,Z_Param_Next);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UFG_InstrumentComponent::execPlayAndGetPrev)
	{
		P_GET_OBJECT(UInstrumentChord,Z_Param_Chord);
		P_GET_PROPERTY(FIntProperty,Z_Param_Prev);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UInstrumentChord**)Z_Param__Result=P_THIS->PlayAndGetPrev(Z_Param_Chord,Z_Param_Prev);
		P_NATIVE_END;
	}
	void UFG_InstrumentComponent::StaticRegisterNativesUFG_InstrumentComponent()
	{
		UClass* Class = UFG_InstrumentComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "PlayAndGetNext", &UFG_InstrumentComponent::execPlayAndGetNext },
			{ "PlayAndGetPrev", &UFG_InstrumentComponent::execPlayAndGetPrev },
			{ "PlaySoundWav", &UFG_InstrumentComponent::execPlaySoundWav },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UFG_InstrumentComponent_PlayAndGetNext_Statics
	{
		struct FG_InstrumentComponent_eventPlayAndGetNext_Parms
		{
			UInstrumentChord* Chord;
			int32 Next;
			UInstrumentChord* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Chord;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Next;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UFG_InstrumentComponent_PlayAndGetNext_Statics::NewProp_Chord = { "Chord", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FG_InstrumentComponent_eventPlayAndGetNext_Parms, Chord), Z_Construct_UClass_UInstrumentChord_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UFG_InstrumentComponent_PlayAndGetNext_Statics::NewProp_Next = { "Next", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FG_InstrumentComponent_eventPlayAndGetNext_Parms, Next), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UFG_InstrumentComponent_PlayAndGetNext_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FG_InstrumentComponent_eventPlayAndGetNext_Parms, ReturnValue), Z_Construct_UClass_UInstrumentChord_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFG_InstrumentComponent_PlayAndGetNext_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFG_InstrumentComponent_PlayAndGetNext_Statics::NewProp_Chord,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFG_InstrumentComponent_PlayAndGetNext_Statics::NewProp_Next,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFG_InstrumentComponent_PlayAndGetNext_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFG_InstrumentComponent_PlayAndGetNext_Statics::Function_MetaDataParams[] = {
		{ "CPP_Default_Next", "0" },
		{ "ModuleRelativePath", "Public/Audio/FG_InstrumentComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFG_InstrumentComponent_PlayAndGetNext_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFG_InstrumentComponent, nullptr, "PlayAndGetNext", nullptr, nullptr, sizeof(FG_InstrumentComponent_eventPlayAndGetNext_Parms), Z_Construct_UFunction_UFG_InstrumentComponent_PlayAndGetNext_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFG_InstrumentComponent_PlayAndGetNext_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFG_InstrumentComponent_PlayAndGetNext_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFG_InstrumentComponent_PlayAndGetNext_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFG_InstrumentComponent_PlayAndGetNext()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFG_InstrumentComponent_PlayAndGetNext_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFG_InstrumentComponent_PlayAndGetPrev_Statics
	{
		struct FG_InstrumentComponent_eventPlayAndGetPrev_Parms
		{
			UInstrumentChord* Chord;
			int32 Prev;
			UInstrumentChord* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Chord;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Prev;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UFG_InstrumentComponent_PlayAndGetPrev_Statics::NewProp_Chord = { "Chord", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FG_InstrumentComponent_eventPlayAndGetPrev_Parms, Chord), Z_Construct_UClass_UInstrumentChord_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UFG_InstrumentComponent_PlayAndGetPrev_Statics::NewProp_Prev = { "Prev", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FG_InstrumentComponent_eventPlayAndGetPrev_Parms, Prev), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UFG_InstrumentComponent_PlayAndGetPrev_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FG_InstrumentComponent_eventPlayAndGetPrev_Parms, ReturnValue), Z_Construct_UClass_UInstrumentChord_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFG_InstrumentComponent_PlayAndGetPrev_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFG_InstrumentComponent_PlayAndGetPrev_Statics::NewProp_Chord,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFG_InstrumentComponent_PlayAndGetPrev_Statics::NewProp_Prev,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFG_InstrumentComponent_PlayAndGetPrev_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFG_InstrumentComponent_PlayAndGetPrev_Statics::Function_MetaDataParams[] = {
		{ "CPP_Default_Prev", "0" },
		{ "ModuleRelativePath", "Public/Audio/FG_InstrumentComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFG_InstrumentComponent_PlayAndGetPrev_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFG_InstrumentComponent, nullptr, "PlayAndGetPrev", nullptr, nullptr, sizeof(FG_InstrumentComponent_eventPlayAndGetPrev_Parms), Z_Construct_UFunction_UFG_InstrumentComponent_PlayAndGetPrev_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFG_InstrumentComponent_PlayAndGetPrev_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFG_InstrumentComponent_PlayAndGetPrev_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFG_InstrumentComponent_PlayAndGetPrev_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFG_InstrumentComponent_PlayAndGetPrev()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFG_InstrumentComponent_PlayAndGetPrev_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFG_InstrumentComponent_PlaySoundWav_Statics
	{
		struct FG_InstrumentComponent_eventPlaySoundWav_Parms
		{
			USoundWave* Sound;
			float Volume;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Sound;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Volume;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UFG_InstrumentComponent_PlaySoundWav_Statics::NewProp_Sound = { "Sound", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FG_InstrumentComponent_eventPlaySoundWav_Parms, Sound), Z_Construct_UClass_USoundWave_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UFG_InstrumentComponent_PlaySoundWav_Statics::NewProp_Volume = { "Volume", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FG_InstrumentComponent_eventPlaySoundWav_Parms, Volume), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFG_InstrumentComponent_PlaySoundWav_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFG_InstrumentComponent_PlaySoundWav_Statics::NewProp_Sound,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFG_InstrumentComponent_PlaySoundWav_Statics::NewProp_Volume,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFG_InstrumentComponent_PlaySoundWav_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Audio/FG_InstrumentComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFG_InstrumentComponent_PlaySoundWav_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFG_InstrumentComponent, nullptr, "PlaySoundWav", nullptr, nullptr, sizeof(FG_InstrumentComponent_eventPlaySoundWav_Parms), Z_Construct_UFunction_UFG_InstrumentComponent_PlaySoundWav_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFG_InstrumentComponent_PlaySoundWav_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFG_InstrumentComponent_PlaySoundWav_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFG_InstrumentComponent_PlaySoundWav_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFG_InstrumentComponent_PlaySoundWav()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFG_InstrumentComponent_PlaySoundWav_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UFG_InstrumentComponent_NoRegister()
	{
		return UFG_InstrumentComponent::StaticClass();
	}
	struct Z_Construct_UClass_UFG_InstrumentComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_AudioComponentPool_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AudioComponentPool_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_AudioComponentPool;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Root_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Root;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BeatsPerMinute_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_BeatsPerMinute;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BeatInterval_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_BeatInterval;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UFG_InstrumentComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_gp3_team01,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UFG_InstrumentComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UFG_InstrumentComponent_PlayAndGetNext, "PlayAndGetNext" }, // 1152467743
		{ &Z_Construct_UFunction_UFG_InstrumentComponent_PlayAndGetPrev, "PlayAndGetPrev" }, // 1793680287
		{ &Z_Construct_UFunction_UFG_InstrumentComponent_PlaySoundWav, "PlaySoundWav" }, // 1889798335
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFG_InstrumentComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "Audio/FG_InstrumentComponent.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Audio/FG_InstrumentComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UFG_InstrumentComponent_Statics::NewProp_AudioComponentPool_Inner = { "AudioComponentPool", nullptr, (EPropertyFlags)0x0000000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UAudioComponent_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFG_InstrumentComponent_Statics::NewProp_AudioComponentPool_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Audio/FG_InstrumentComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UFG_InstrumentComponent_Statics::NewProp_AudioComponentPool = { "AudioComponentPool", nullptr, (EPropertyFlags)0x0010008000000008, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFG_InstrumentComponent, AudioComponentPool), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UFG_InstrumentComponent_Statics::NewProp_AudioComponentPool_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFG_InstrumentComponent_Statics::NewProp_AudioComponentPool_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFG_InstrumentComponent_Statics::NewProp_Root_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Audio/FG_InstrumentComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UFG_InstrumentComponent_Statics::NewProp_Root = { "Root", nullptr, (EPropertyFlags)0x0010000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFG_InstrumentComponent, Root), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UFG_InstrumentComponent_Statics::NewProp_Root_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFG_InstrumentComponent_Statics::NewProp_Root_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFG_InstrumentComponent_Statics::NewProp_BeatsPerMinute_MetaData[] = {
		{ "Category", "FG_InstrumentComponent" },
		{ "ModuleRelativePath", "Public/Audio/FG_InstrumentComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UFG_InstrumentComponent_Statics::NewProp_BeatsPerMinute = { "BeatsPerMinute", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFG_InstrumentComponent, BeatsPerMinute), METADATA_PARAMS(Z_Construct_UClass_UFG_InstrumentComponent_Statics::NewProp_BeatsPerMinute_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFG_InstrumentComponent_Statics::NewProp_BeatsPerMinute_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFG_InstrumentComponent_Statics::NewProp_BeatInterval_MetaData[] = {
		{ "Category", "FG_InstrumentComponent" },
		{ "ModuleRelativePath", "Public/Audio/FG_InstrumentComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UFG_InstrumentComponent_Statics::NewProp_BeatInterval = { "BeatInterval", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFG_InstrumentComponent, BeatInterval), METADATA_PARAMS(Z_Construct_UClass_UFG_InstrumentComponent_Statics::NewProp_BeatInterval_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFG_InstrumentComponent_Statics::NewProp_BeatInterval_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UFG_InstrumentComponent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFG_InstrumentComponent_Statics::NewProp_AudioComponentPool_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFG_InstrumentComponent_Statics::NewProp_AudioComponentPool,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFG_InstrumentComponent_Statics::NewProp_Root,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFG_InstrumentComponent_Statics::NewProp_BeatsPerMinute,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFG_InstrumentComponent_Statics::NewProp_BeatInterval,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UFG_InstrumentComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UFG_InstrumentComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UFG_InstrumentComponent_Statics::ClassParams = {
		&UFG_InstrumentComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UFG_InstrumentComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UFG_InstrumentComponent_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UFG_InstrumentComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UFG_InstrumentComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UFG_InstrumentComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UFG_InstrumentComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UFG_InstrumentComponent, 1991775111);
	template<> GP3_TEAM01_API UClass* StaticClass<UFG_InstrumentComponent>()
	{
		return UFG_InstrumentComponent::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UFG_InstrumentComponent(Z_Construct_UClass_UFG_InstrumentComponent, &UFG_InstrumentComponent::StaticClass, TEXT("/Script/gp3_team01"), TEXT("UFG_InstrumentComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UFG_InstrumentComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
