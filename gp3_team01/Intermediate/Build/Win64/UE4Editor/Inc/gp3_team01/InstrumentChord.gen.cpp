// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "gp3_team01/Public/Audio/InstrumentChord.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeInstrumentChord() {}
// Cross Module References
	GP3_TEAM01_API UClass* Z_Construct_UClass_UInstrumentChord_NoRegister();
	GP3_TEAM01_API UClass* Z_Construct_UClass_UInstrumentChord();
	ENGINE_API UClass* Z_Construct_UClass_UDataAsset();
	UPackage* Z_Construct_UPackage__Script_gp3_team01();
	ENGINE_API UClass* Z_Construct_UClass_USoundWave_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UInstrumentChord::execPrev)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_Index);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UInstrumentChord**)Z_Param__Result=P_THIS->Prev(Z_Param_Index);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UInstrumentChord::execNext)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_Index);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UInstrumentChord**)Z_Param__Result=P_THIS->Next(Z_Param_Index);
		P_NATIVE_END;
	}
	void UInstrumentChord::StaticRegisterNativesUInstrumentChord()
	{
		UClass* Class = UInstrumentChord::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "Next", &UInstrumentChord::execNext },
			{ "Prev", &UInstrumentChord::execPrev },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UInstrumentChord_Next_Statics
	{
		struct InstrumentChord_eventNext_Parms
		{
			int32 Index;
			UInstrumentChord* ReturnValue;
		};
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_Index;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UInstrumentChord_Next_Statics::NewProp_Index = { "Index", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(InstrumentChord_eventNext_Parms, Index), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UInstrumentChord_Next_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(InstrumentChord_eventNext_Parms, ReturnValue), Z_Construct_UClass_UInstrumentChord_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInstrumentChord_Next_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInstrumentChord_Next_Statics::NewProp_Index,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInstrumentChord_Next_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInstrumentChord_Next_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Audio/InstrumentChord.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UInstrumentChord_Next_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInstrumentChord, nullptr, "Next", nullptr, nullptr, sizeof(InstrumentChord_eventNext_Parms), Z_Construct_UFunction_UInstrumentChord_Next_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInstrumentChord_Next_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UInstrumentChord_Next_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UInstrumentChord_Next_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UInstrumentChord_Next()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UInstrumentChord_Next_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInstrumentChord_Prev_Statics
	{
		struct InstrumentChord_eventPrev_Parms
		{
			int32 Index;
			UInstrumentChord* ReturnValue;
		};
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_Index;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UInstrumentChord_Prev_Statics::NewProp_Index = { "Index", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(InstrumentChord_eventPrev_Parms, Index), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UInstrumentChord_Prev_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(InstrumentChord_eventPrev_Parms, ReturnValue), Z_Construct_UClass_UInstrumentChord_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInstrumentChord_Prev_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInstrumentChord_Prev_Statics::NewProp_Index,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInstrumentChord_Prev_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInstrumentChord_Prev_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Audio/InstrumentChord.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UInstrumentChord_Prev_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInstrumentChord, nullptr, "Prev", nullptr, nullptr, sizeof(InstrumentChord_eventPrev_Parms), Z_Construct_UFunction_UInstrumentChord_Prev_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInstrumentChord_Prev_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UInstrumentChord_Prev_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UInstrumentChord_Prev_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UInstrumentChord_Prev()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UInstrumentChord_Prev_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UInstrumentChord_NoRegister()
	{
		return UInstrumentChord::StaticClass();
	}
	struct Z_Construct_UClass_UInstrumentChord_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Notes_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Notes_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Notes;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_NextChords_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NextChords_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_NextChords;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PrevChords_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PrevChords_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_PrevChords;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsShufflingOnPlay_MetaData[];
#endif
		static void NewProp_bIsShufflingOnPlay_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsShufflingOnPlay;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsPauseBetweenNotesSameForEachInstance_MetaData[];
#endif
		static void NewProp_bIsPauseBetweenNotesSameForEachInstance_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsPauseBetweenNotesSameForEachInstance;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NoteOffsetMin_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_NoteOffsetMin;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NoteOffsetMax_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_NoteOffsetMax;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UInstrumentChord_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UDataAsset,
		(UObject* (*)())Z_Construct_UPackage__Script_gp3_team01,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UInstrumentChord_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UInstrumentChord_Next, "Next" }, // 894116600
		{ &Z_Construct_UFunction_UInstrumentChord_Prev, "Prev" }, // 2228371435
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInstrumentChord_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "Audio/InstrumentChord.h" },
		{ "ModuleRelativePath", "Public/Audio/InstrumentChord.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UInstrumentChord_Statics::NewProp_Notes_Inner = { "Notes", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_USoundWave_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInstrumentChord_Statics::NewProp_Notes_MetaData[] = {
		{ "Category", "InstrumentChord" },
		{ "ModuleRelativePath", "Public/Audio/InstrumentChord.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UInstrumentChord_Statics::NewProp_Notes = { "Notes", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UInstrumentChord, Notes), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UInstrumentChord_Statics::NewProp_Notes_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UInstrumentChord_Statics::NewProp_Notes_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UInstrumentChord_Statics::NewProp_NextChords_Inner = { "NextChords", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UInstrumentChord_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInstrumentChord_Statics::NewProp_NextChords_MetaData[] = {
		{ "Category", "InstrumentChord" },
		{ "ModuleRelativePath", "Public/Audio/InstrumentChord.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UInstrumentChord_Statics::NewProp_NextChords = { "NextChords", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UInstrumentChord, NextChords), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UInstrumentChord_Statics::NewProp_NextChords_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UInstrumentChord_Statics::NewProp_NextChords_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UInstrumentChord_Statics::NewProp_PrevChords_Inner = { "PrevChords", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UInstrumentChord_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInstrumentChord_Statics::NewProp_PrevChords_MetaData[] = {
		{ "Category", "InstrumentChord" },
		{ "ModuleRelativePath", "Public/Audio/InstrumentChord.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UInstrumentChord_Statics::NewProp_PrevChords = { "PrevChords", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UInstrumentChord, PrevChords), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UInstrumentChord_Statics::NewProp_PrevChords_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UInstrumentChord_Statics::NewProp_PrevChords_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInstrumentChord_Statics::NewProp_bIsShufflingOnPlay_MetaData[] = {
		{ "Category", "InstrumentChord" },
		{ "ModuleRelativePath", "Public/Audio/InstrumentChord.h" },
	};
#endif
	void Z_Construct_UClass_UInstrumentChord_Statics::NewProp_bIsShufflingOnPlay_SetBit(void* Obj)
	{
		((UInstrumentChord*)Obj)->bIsShufflingOnPlay = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UInstrumentChord_Statics::NewProp_bIsShufflingOnPlay = { "bIsShufflingOnPlay", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UInstrumentChord), &Z_Construct_UClass_UInstrumentChord_Statics::NewProp_bIsShufflingOnPlay_SetBit, METADATA_PARAMS(Z_Construct_UClass_UInstrumentChord_Statics::NewProp_bIsShufflingOnPlay_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UInstrumentChord_Statics::NewProp_bIsShufflingOnPlay_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInstrumentChord_Statics::NewProp_bIsPauseBetweenNotesSameForEachInstance_MetaData[] = {
		{ "Category", "InstrumentChord" },
		{ "ModuleRelativePath", "Public/Audio/InstrumentChord.h" },
	};
#endif
	void Z_Construct_UClass_UInstrumentChord_Statics::NewProp_bIsPauseBetweenNotesSameForEachInstance_SetBit(void* Obj)
	{
		((UInstrumentChord*)Obj)->bIsPauseBetweenNotesSameForEachInstance = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UInstrumentChord_Statics::NewProp_bIsPauseBetweenNotesSameForEachInstance = { "bIsPauseBetweenNotesSameForEachInstance", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UInstrumentChord), &Z_Construct_UClass_UInstrumentChord_Statics::NewProp_bIsPauseBetweenNotesSameForEachInstance_SetBit, METADATA_PARAMS(Z_Construct_UClass_UInstrumentChord_Statics::NewProp_bIsPauseBetweenNotesSameForEachInstance_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UInstrumentChord_Statics::NewProp_bIsPauseBetweenNotesSameForEachInstance_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInstrumentChord_Statics::NewProp_NoteOffsetMin_MetaData[] = {
		{ "Category", "InstrumentChord" },
		{ "ModuleRelativePath", "Public/Audio/InstrumentChord.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UInstrumentChord_Statics::NewProp_NoteOffsetMin = { "NoteOffsetMin", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UInstrumentChord, NoteOffsetMin), METADATA_PARAMS(Z_Construct_UClass_UInstrumentChord_Statics::NewProp_NoteOffsetMin_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UInstrumentChord_Statics::NewProp_NoteOffsetMin_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInstrumentChord_Statics::NewProp_NoteOffsetMax_MetaData[] = {
		{ "Category", "InstrumentChord" },
		{ "ModuleRelativePath", "Public/Audio/InstrumentChord.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UInstrumentChord_Statics::NewProp_NoteOffsetMax = { "NoteOffsetMax", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UInstrumentChord, NoteOffsetMax), METADATA_PARAMS(Z_Construct_UClass_UInstrumentChord_Statics::NewProp_NoteOffsetMax_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UInstrumentChord_Statics::NewProp_NoteOffsetMax_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UInstrumentChord_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInstrumentChord_Statics::NewProp_Notes_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInstrumentChord_Statics::NewProp_Notes,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInstrumentChord_Statics::NewProp_NextChords_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInstrumentChord_Statics::NewProp_NextChords,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInstrumentChord_Statics::NewProp_PrevChords_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInstrumentChord_Statics::NewProp_PrevChords,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInstrumentChord_Statics::NewProp_bIsShufflingOnPlay,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInstrumentChord_Statics::NewProp_bIsPauseBetweenNotesSameForEachInstance,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInstrumentChord_Statics::NewProp_NoteOffsetMin,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInstrumentChord_Statics::NewProp_NoteOffsetMax,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UInstrumentChord_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UInstrumentChord>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UInstrumentChord_Statics::ClassParams = {
		&UInstrumentChord::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UInstrumentChord_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UInstrumentChord_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UInstrumentChord_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UInstrumentChord_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UInstrumentChord()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UInstrumentChord_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UInstrumentChord, 1514199983);
	template<> GP3_TEAM01_API UClass* StaticClass<UInstrumentChord>()
	{
		return UInstrumentChord::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UInstrumentChord(Z_Construct_UClass_UInstrumentChord, &UInstrumentChord::StaticClass, TEXT("/Script/gp3_team01"), TEXT("UInstrumentChord"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UInstrumentChord);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
