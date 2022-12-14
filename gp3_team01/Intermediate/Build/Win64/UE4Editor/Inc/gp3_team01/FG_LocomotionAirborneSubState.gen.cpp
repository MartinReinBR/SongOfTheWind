// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "gp3_team01/Public/Player/States/Locomotion/FG_LocomotionAirborneSubState.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFG_LocomotionAirborneSubState() {}
// Cross Module References
	GP3_TEAM01_API UClass* Z_Construct_UClass_UFG_LocomotionAirborneSubState_NoRegister();
	GP3_TEAM01_API UClass* Z_Construct_UClass_UFG_LocomotionAirborneSubState();
	GP3_TEAM01_API UClass* Z_Construct_UClass_UFG_LocomotionSubState();
	UPackage* Z_Construct_UPackage__Script_gp3_team01();
	GP3_TEAM01_API UClass* Z_Construct_UClass_AFG_PlayerCharacter_NoRegister();
// End Cross Module References
	static FName NAME_UFG_LocomotionAirborneSubState_OnAirMoving = FName(TEXT("OnAirMoving"));
	void UFG_LocomotionAirborneSubState::OnAirMoving(AFG_PlayerCharacter* PlayerCharacter)
	{
		FG_LocomotionAirborneSubState_eventOnAirMoving_Parms Parms;
		Parms.PlayerCharacter=PlayerCharacter;
		ProcessEvent(FindFunctionChecked(NAME_UFG_LocomotionAirborneSubState_OnAirMoving),&Parms);
	}
	static FName NAME_UFG_LocomotionAirborneSubState_OnEndAirMoving = FName(TEXT("OnEndAirMoving"));
	void UFG_LocomotionAirborneSubState::OnEndAirMoving(AFG_PlayerCharacter* PlayerCharacter)
	{
		FG_LocomotionAirborneSubState_eventOnEndAirMoving_Parms Parms;
		Parms.PlayerCharacter=PlayerCharacter;
		ProcessEvent(FindFunctionChecked(NAME_UFG_LocomotionAirborneSubState_OnEndAirMoving),&Parms);
	}
	static FName NAME_UFG_LocomotionAirborneSubState_OnStartAirMoving = FName(TEXT("OnStartAirMoving"));
	void UFG_LocomotionAirborneSubState::OnStartAirMoving(AFG_PlayerCharacter* PlayerCharacter)
	{
		FG_LocomotionAirborneSubState_eventOnStartAirMoving_Parms Parms;
		Parms.PlayerCharacter=PlayerCharacter;
		ProcessEvent(FindFunctionChecked(NAME_UFG_LocomotionAirborneSubState_OnStartAirMoving),&Parms);
	}
	void UFG_LocomotionAirborneSubState::StaticRegisterNativesUFG_LocomotionAirborneSubState()
	{
	}
	struct Z_Construct_UFunction_UFG_LocomotionAirborneSubState_OnAirMoving_Statics
	{
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PlayerCharacter;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UFG_LocomotionAirborneSubState_OnAirMoving_Statics::NewProp_PlayerCharacter = { "PlayerCharacter", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FG_LocomotionAirborneSubState_eventOnAirMoving_Parms, PlayerCharacter), Z_Construct_UClass_AFG_PlayerCharacter_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFG_LocomotionAirborneSubState_OnAirMoving_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFG_LocomotionAirborneSubState_OnAirMoving_Statics::NewProp_PlayerCharacter,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFG_LocomotionAirborneSubState_OnAirMoving_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Player/States/Locomotion/FG_LocomotionAirborneSubState.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFG_LocomotionAirborneSubState_OnAirMoving_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFG_LocomotionAirborneSubState, nullptr, "OnAirMoving", nullptr, nullptr, sizeof(FG_LocomotionAirborneSubState_eventOnAirMoving_Parms), Z_Construct_UFunction_UFG_LocomotionAirborneSubState_OnAirMoving_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFG_LocomotionAirborneSubState_OnAirMoving_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFG_LocomotionAirborneSubState_OnAirMoving_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFG_LocomotionAirborneSubState_OnAirMoving_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFG_LocomotionAirborneSubState_OnAirMoving()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFG_LocomotionAirborneSubState_OnAirMoving_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFG_LocomotionAirborneSubState_OnEndAirMoving_Statics
	{
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PlayerCharacter;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UFG_LocomotionAirborneSubState_OnEndAirMoving_Statics::NewProp_PlayerCharacter = { "PlayerCharacter", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FG_LocomotionAirborneSubState_eventOnEndAirMoving_Parms, PlayerCharacter), Z_Construct_UClass_AFG_PlayerCharacter_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFG_LocomotionAirborneSubState_OnEndAirMoving_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFG_LocomotionAirborneSubState_OnEndAirMoving_Statics::NewProp_PlayerCharacter,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFG_LocomotionAirborneSubState_OnEndAirMoving_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Player/States/Locomotion/FG_LocomotionAirborneSubState.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFG_LocomotionAirborneSubState_OnEndAirMoving_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFG_LocomotionAirborneSubState, nullptr, "OnEndAirMoving", nullptr, nullptr, sizeof(FG_LocomotionAirborneSubState_eventOnEndAirMoving_Parms), Z_Construct_UFunction_UFG_LocomotionAirborneSubState_OnEndAirMoving_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFG_LocomotionAirborneSubState_OnEndAirMoving_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFG_LocomotionAirborneSubState_OnEndAirMoving_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFG_LocomotionAirborneSubState_OnEndAirMoving_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFG_LocomotionAirborneSubState_OnEndAirMoving()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFG_LocomotionAirborneSubState_OnEndAirMoving_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFG_LocomotionAirborneSubState_OnStartAirMoving_Statics
	{
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PlayerCharacter;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UFG_LocomotionAirborneSubState_OnStartAirMoving_Statics::NewProp_PlayerCharacter = { "PlayerCharacter", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FG_LocomotionAirborneSubState_eventOnStartAirMoving_Parms, PlayerCharacter), Z_Construct_UClass_AFG_PlayerCharacter_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFG_LocomotionAirborneSubState_OnStartAirMoving_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFG_LocomotionAirborneSubState_OnStartAirMoving_Statics::NewProp_PlayerCharacter,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFG_LocomotionAirborneSubState_OnStartAirMoving_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Player/States/Locomotion/FG_LocomotionAirborneSubState.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFG_LocomotionAirborneSubState_OnStartAirMoving_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFG_LocomotionAirborneSubState, nullptr, "OnStartAirMoving", nullptr, nullptr, sizeof(FG_LocomotionAirborneSubState_eventOnStartAirMoving_Parms), Z_Construct_UFunction_UFG_LocomotionAirborneSubState_OnStartAirMoving_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFG_LocomotionAirborneSubState_OnStartAirMoving_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFG_LocomotionAirborneSubState_OnStartAirMoving_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFG_LocomotionAirborneSubState_OnStartAirMoving_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFG_LocomotionAirborneSubState_OnStartAirMoving()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFG_LocomotionAirborneSubState_OnStartAirMoving_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UFG_LocomotionAirborneSubState_NoRegister()
	{
		return UFG_LocomotionAirborneSubState::StaticClass();
	}
	struct Z_Construct_UClass_UFG_LocomotionAirborneSubState_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UFG_LocomotionAirborneSubState_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UFG_LocomotionSubState,
		(UObject* (*)())Z_Construct_UPackage__Script_gp3_team01,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UFG_LocomotionAirborneSubState_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UFG_LocomotionAirborneSubState_OnAirMoving, "OnAirMoving" }, // 297941587
		{ &Z_Construct_UFunction_UFG_LocomotionAirborneSubState_OnEndAirMoving, "OnEndAirMoving" }, // 443868344
		{ &Z_Construct_UFunction_UFG_LocomotionAirborneSubState_OnStartAirMoving, "OnStartAirMoving" }, // 61722209
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFG_LocomotionAirborneSubState_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "Player/States/Locomotion/FG_LocomotionAirborneSubState.h" },
		{ "ModuleRelativePath", "Public/Player/States/Locomotion/FG_LocomotionAirborneSubState.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UFG_LocomotionAirborneSubState_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UFG_LocomotionAirborneSubState>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UFG_LocomotionAirborneSubState_Statics::ClassParams = {
		&UFG_LocomotionAirborneSubState::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UFG_LocomotionAirborneSubState_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UFG_LocomotionAirborneSubState_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UFG_LocomotionAirborneSubState()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UFG_LocomotionAirborneSubState_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UFG_LocomotionAirborneSubState, 2653168919);
	template<> GP3_TEAM01_API UClass* StaticClass<UFG_LocomotionAirborneSubState>()
	{
		return UFG_LocomotionAirborneSubState::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UFG_LocomotionAirborneSubState(Z_Construct_UClass_UFG_LocomotionAirborneSubState, &UFG_LocomotionAirborneSubState::StaticClass, TEXT("/Script/gp3_team01"), TEXT("UFG_LocomotionAirborneSubState"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UFG_LocomotionAirborneSubState);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
