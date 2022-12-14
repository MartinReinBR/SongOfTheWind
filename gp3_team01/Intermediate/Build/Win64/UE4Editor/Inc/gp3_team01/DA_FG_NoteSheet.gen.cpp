// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "gp3_team01/Public/Audio/DA_FG_NoteSheet.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDA_FG_NoteSheet() {}
// Cross Module References
	GP3_TEAM01_API UClass* Z_Construct_UClass_UDA_FG_NoteSheet_NoRegister();
	GP3_TEAM01_API UClass* Z_Construct_UClass_UDA_FG_NoteSheet();
	ENGINE_API UClass* Z_Construct_UClass_UDataAsset();
	UPackage* Z_Construct_UPackage__Script_gp3_team01();
	GP3_TEAM01_API UClass* Z_Construct_UClass_UInstrumentChord_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UDA_FG_NoteSheet::execSetCurrent)
	{
		P_GET_OBJECT(UInstrumentChord,Z_Param_Next);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetCurrent(Z_Param_Next);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDA_FG_NoteSheet::execGetCurrent)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UInstrumentChord**)Z_Param__Result=P_THIS->GetCurrent();
		P_NATIVE_END;
	}
	void UDA_FG_NoteSheet::StaticRegisterNativesUDA_FG_NoteSheet()
	{
		UClass* Class = UDA_FG_NoteSheet::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetCurrent", &UDA_FG_NoteSheet::execGetCurrent },
			{ "SetCurrent", &UDA_FG_NoteSheet::execSetCurrent },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UDA_FG_NoteSheet_GetCurrent_Statics
	{
		struct DA_FG_NoteSheet_eventGetCurrent_Parms
		{
			UInstrumentChord* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDA_FG_NoteSheet_GetCurrent_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DA_FG_NoteSheet_eventGetCurrent_Parms, ReturnValue), Z_Construct_UClass_UInstrumentChord_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDA_FG_NoteSheet_GetCurrent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDA_FG_NoteSheet_GetCurrent_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDA_FG_NoteSheet_GetCurrent_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Audio/DA_FG_NoteSheet.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UDA_FG_NoteSheet_GetCurrent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDA_FG_NoteSheet, nullptr, "GetCurrent", nullptr, nullptr, sizeof(DA_FG_NoteSheet_eventGetCurrent_Parms), Z_Construct_UFunction_UDA_FG_NoteSheet_GetCurrent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDA_FG_NoteSheet_GetCurrent_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDA_FG_NoteSheet_GetCurrent_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDA_FG_NoteSheet_GetCurrent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDA_FG_NoteSheet_GetCurrent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UDA_FG_NoteSheet_GetCurrent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDA_FG_NoteSheet_SetCurrent_Statics
	{
		struct DA_FG_NoteSheet_eventSetCurrent_Parms
		{
			UInstrumentChord* Next;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Next;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDA_FG_NoteSheet_SetCurrent_Statics::NewProp_Next = { "Next", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DA_FG_NoteSheet_eventSetCurrent_Parms, Next), Z_Construct_UClass_UInstrumentChord_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDA_FG_NoteSheet_SetCurrent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDA_FG_NoteSheet_SetCurrent_Statics::NewProp_Next,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDA_FG_NoteSheet_SetCurrent_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Audio/DA_FG_NoteSheet.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UDA_FG_NoteSheet_SetCurrent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDA_FG_NoteSheet, nullptr, "SetCurrent", nullptr, nullptr, sizeof(DA_FG_NoteSheet_eventSetCurrent_Parms), Z_Construct_UFunction_UDA_FG_NoteSheet_SetCurrent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDA_FG_NoteSheet_SetCurrent_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDA_FG_NoteSheet_SetCurrent_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDA_FG_NoteSheet_SetCurrent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDA_FG_NoteSheet_SetCurrent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UDA_FG_NoteSheet_SetCurrent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UDA_FG_NoteSheet_NoRegister()
	{
		return UDA_FG_NoteSheet::StaticClass();
	}
	struct Z_Construct_UClass_UDA_FG_NoteSheet_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CurrentNote_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CurrentNote;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDA_FG_NoteSheet_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UDataAsset,
		(UObject* (*)())Z_Construct_UPackage__Script_gp3_team01,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UDA_FG_NoteSheet_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UDA_FG_NoteSheet_GetCurrent, "GetCurrent" }, // 2765517566
		{ &Z_Construct_UFunction_UDA_FG_NoteSheet_SetCurrent, "SetCurrent" }, // 3297651949
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDA_FG_NoteSheet_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "Audio/DA_FG_NoteSheet.h" },
		{ "ModuleRelativePath", "Public/Audio/DA_FG_NoteSheet.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDA_FG_NoteSheet_Statics::NewProp_CurrentNote_MetaData[] = {
		{ "Category", "DA_FG_NoteSheet" },
		{ "ModuleRelativePath", "Public/Audio/DA_FG_NoteSheet.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UDA_FG_NoteSheet_Statics::NewProp_CurrentNote = { "CurrentNote", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDA_FG_NoteSheet, CurrentNote), Z_Construct_UClass_UInstrumentChord_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UDA_FG_NoteSheet_Statics::NewProp_CurrentNote_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDA_FG_NoteSheet_Statics::NewProp_CurrentNote_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UDA_FG_NoteSheet_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDA_FG_NoteSheet_Statics::NewProp_CurrentNote,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDA_FG_NoteSheet_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDA_FG_NoteSheet>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UDA_FG_NoteSheet_Statics::ClassParams = {
		&UDA_FG_NoteSheet::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UDA_FG_NoteSheet_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UDA_FG_NoteSheet_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UDA_FG_NoteSheet_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UDA_FG_NoteSheet_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UDA_FG_NoteSheet()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UDA_FG_NoteSheet_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UDA_FG_NoteSheet, 1958564781);
	template<> GP3_TEAM01_API UClass* StaticClass<UDA_FG_NoteSheet>()
	{
		return UDA_FG_NoteSheet::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UDA_FG_NoteSheet(Z_Construct_UClass_UDA_FG_NoteSheet, &UDA_FG_NoteSheet::StaticClass, TEXT("/Script/gp3_team01"), TEXT("UDA_FG_NoteSheet"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDA_FG_NoteSheet);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
