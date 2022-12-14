// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "gp3_team01/Public/Player/States/Locomotion/FG_LocomotionAirJumpSubState.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFG_LocomotionAirJumpSubState() {}
// Cross Module References
	GP3_TEAM01_API UClass* Z_Construct_UClass_UFG_LocomotionAirJumpSubState_NoRegister();
	GP3_TEAM01_API UClass* Z_Construct_UClass_UFG_LocomotionAirJumpSubState();
	GP3_TEAM01_API UClass* Z_Construct_UClass_UFG_LocomotionSubState();
	UPackage* Z_Construct_UPackage__Script_gp3_team01();
	GP3_TEAM01_API UClass* Z_Construct_UClass_AFG_PlayerCharacter_NoRegister();
// End Cross Module References
	static FName NAME_UFG_LocomotionAirJumpSubState_OnContinousAirJumping = FName(TEXT("OnContinousAirJumping"));
	void UFG_LocomotionAirJumpSubState::OnContinousAirJumping(AFG_PlayerCharacter* PlayerCharacter)
	{
		FG_LocomotionAirJumpSubState_eventOnContinousAirJumping_Parms Parms;
		Parms.PlayerCharacter=PlayerCharacter;
		ProcessEvent(FindFunctionChecked(NAME_UFG_LocomotionAirJumpSubState_OnContinousAirJumping),&Parms);
	}
	static FName NAME_UFG_LocomotionAirJumpSubState_OnEndAirJumping = FName(TEXT("OnEndAirJumping"));
	void UFG_LocomotionAirJumpSubState::OnEndAirJumping(AFG_PlayerCharacter* PlayerCharacter)
	{
		FG_LocomotionAirJumpSubState_eventOnEndAirJumping_Parms Parms;
		Parms.PlayerCharacter=PlayerCharacter;
		ProcessEvent(FindFunctionChecked(NAME_UFG_LocomotionAirJumpSubState_OnEndAirJumping),&Parms);
	}
	static FName NAME_UFG_LocomotionAirJumpSubState_OnStartAirJumping = FName(TEXT("OnStartAirJumping"));
	void UFG_LocomotionAirJumpSubState::OnStartAirJumping(AFG_PlayerCharacter* PlayerCharacter)
	{
		FG_LocomotionAirJumpSubState_eventOnStartAirJumping_Parms Parms;
		Parms.PlayerCharacter=PlayerCharacter;
		ProcessEvent(FindFunctionChecked(NAME_UFG_LocomotionAirJumpSubState_OnStartAirJumping),&Parms);
	}
	void UFG_LocomotionAirJumpSubState::StaticRegisterNativesUFG_LocomotionAirJumpSubState()
	{
	}
	struct Z_Construct_UFunction_UFG_LocomotionAirJumpSubState_OnContinousAirJumping_Statics
	{
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PlayerCharacter;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UFG_LocomotionAirJumpSubState_OnContinousAirJumping_Statics::NewProp_PlayerCharacter = { "PlayerCharacter", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FG_LocomotionAirJumpSubState_eventOnContinousAirJumping_Parms, PlayerCharacter), Z_Construct_UClass_AFG_PlayerCharacter_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFG_LocomotionAirJumpSubState_OnContinousAirJumping_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFG_LocomotionAirJumpSubState_OnContinousAirJumping_Statics::NewProp_PlayerCharacter,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFG_LocomotionAirJumpSubState_OnContinousAirJumping_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Player/States/Locomotion/FG_LocomotionAirJumpSubState.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFG_LocomotionAirJumpSubState_OnContinousAirJumping_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFG_LocomotionAirJumpSubState, nullptr, "OnContinousAirJumping", nullptr, nullptr, sizeof(FG_LocomotionAirJumpSubState_eventOnContinousAirJumping_Parms), Z_Construct_UFunction_UFG_LocomotionAirJumpSubState_OnContinousAirJumping_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFG_LocomotionAirJumpSubState_OnContinousAirJumping_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFG_LocomotionAirJumpSubState_OnContinousAirJumping_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFG_LocomotionAirJumpSubState_OnContinousAirJumping_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFG_LocomotionAirJumpSubState_OnContinousAirJumping()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFG_LocomotionAirJumpSubState_OnContinousAirJumping_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFG_LocomotionAirJumpSubState_OnEndAirJumping_Statics
	{
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PlayerCharacter;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UFG_LocomotionAirJumpSubState_OnEndAirJumping_Statics::NewProp_PlayerCharacter = { "PlayerCharacter", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FG_LocomotionAirJumpSubState_eventOnEndAirJumping_Parms, PlayerCharacter), Z_Construct_UClass_AFG_PlayerCharacter_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFG_LocomotionAirJumpSubState_OnEndAirJumping_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFG_LocomotionAirJumpSubState_OnEndAirJumping_Statics::NewProp_PlayerCharacter,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFG_LocomotionAirJumpSubState_OnEndAirJumping_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Player/States/Locomotion/FG_LocomotionAirJumpSubState.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFG_LocomotionAirJumpSubState_OnEndAirJumping_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFG_LocomotionAirJumpSubState, nullptr, "OnEndAirJumping", nullptr, nullptr, sizeof(FG_LocomotionAirJumpSubState_eventOnEndAirJumping_Parms), Z_Construct_UFunction_UFG_LocomotionAirJumpSubState_OnEndAirJumping_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFG_LocomotionAirJumpSubState_OnEndAirJumping_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFG_LocomotionAirJumpSubState_OnEndAirJumping_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFG_LocomotionAirJumpSubState_OnEndAirJumping_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFG_LocomotionAirJumpSubState_OnEndAirJumping()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFG_LocomotionAirJumpSubState_OnEndAirJumping_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFG_LocomotionAirJumpSubState_OnStartAirJumping_Statics
	{
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PlayerCharacter;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UFG_LocomotionAirJumpSubState_OnStartAirJumping_Statics::NewProp_PlayerCharacter = { "PlayerCharacter", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FG_LocomotionAirJumpSubState_eventOnStartAirJumping_Parms, PlayerCharacter), Z_Construct_UClass_AFG_PlayerCharacter_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFG_LocomotionAirJumpSubState_OnStartAirJumping_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFG_LocomotionAirJumpSubState_OnStartAirJumping_Statics::NewProp_PlayerCharacter,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFG_LocomotionAirJumpSubState_OnStartAirJumping_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Player/States/Locomotion/FG_LocomotionAirJumpSubState.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFG_LocomotionAirJumpSubState_OnStartAirJumping_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFG_LocomotionAirJumpSubState, nullptr, "OnStartAirJumping", nullptr, nullptr, sizeof(FG_LocomotionAirJumpSubState_eventOnStartAirJumping_Parms), Z_Construct_UFunction_UFG_LocomotionAirJumpSubState_OnStartAirJumping_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFG_LocomotionAirJumpSubState_OnStartAirJumping_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFG_LocomotionAirJumpSubState_OnStartAirJumping_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFG_LocomotionAirJumpSubState_OnStartAirJumping_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFG_LocomotionAirJumpSubState_OnStartAirJumping()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFG_LocomotionAirJumpSubState_OnStartAirJumping_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UFG_LocomotionAirJumpSubState_NoRegister()
	{
		return UFG_LocomotionAirJumpSubState::StaticClass();
	}
	struct Z_Construct_UClass_UFG_LocomotionAirJumpSubState_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UFG_LocomotionAirJumpSubState_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UFG_LocomotionSubState,
		(UObject* (*)())Z_Construct_UPackage__Script_gp3_team01,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UFG_LocomotionAirJumpSubState_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UFG_LocomotionAirJumpSubState_OnContinousAirJumping, "OnContinousAirJumping" }, // 3199155895
		{ &Z_Construct_UFunction_UFG_LocomotionAirJumpSubState_OnEndAirJumping, "OnEndAirJumping" }, // 2631536279
		{ &Z_Construct_UFunction_UFG_LocomotionAirJumpSubState_OnStartAirJumping, "OnStartAirJumping" }, // 553524623
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFG_LocomotionAirJumpSubState_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "Player/States/Locomotion/FG_LocomotionAirJumpSubState.h" },
		{ "ModuleRelativePath", "Public/Player/States/Locomotion/FG_LocomotionAirJumpSubState.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UFG_LocomotionAirJumpSubState_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UFG_LocomotionAirJumpSubState>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UFG_LocomotionAirJumpSubState_Statics::ClassParams = {
		&UFG_LocomotionAirJumpSubState::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UFG_LocomotionAirJumpSubState_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UFG_LocomotionAirJumpSubState_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UFG_LocomotionAirJumpSubState()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UFG_LocomotionAirJumpSubState_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UFG_LocomotionAirJumpSubState, 490916757);
	template<> GP3_TEAM01_API UClass* StaticClass<UFG_LocomotionAirJumpSubState>()
	{
		return UFG_LocomotionAirJumpSubState::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UFG_LocomotionAirJumpSubState(Z_Construct_UClass_UFG_LocomotionAirJumpSubState, &UFG_LocomotionAirJumpSubState::StaticClass, TEXT("/Script/gp3_team01"), TEXT("UFG_LocomotionAirJumpSubState"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UFG_LocomotionAirJumpSubState);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
