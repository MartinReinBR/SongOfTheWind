// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "gp3_team01/Public/Player/States/Locomotion/FG_LocomotionJumpingSubState.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFG_LocomotionJumpingSubState() {}
// Cross Module References
	GP3_TEAM01_API UClass* Z_Construct_UClass_UFG_LocomotionJumpingSubState_NoRegister();
	GP3_TEAM01_API UClass* Z_Construct_UClass_UFG_LocomotionJumpingSubState();
	GP3_TEAM01_API UClass* Z_Construct_UClass_UFG_LocomotionSubState();
	UPackage* Z_Construct_UPackage__Script_gp3_team01();
	GP3_TEAM01_API UClass* Z_Construct_UClass_AFG_PlayerCharacter_NoRegister();
// End Cross Module References
	static FName NAME_UFG_LocomotionJumpingSubState_OnContinousJumping = FName(TEXT("OnContinousJumping"));
	void UFG_LocomotionJumpingSubState::OnContinousJumping(AFG_PlayerCharacter* PlayerCharacter)
	{
		FG_LocomotionJumpingSubState_eventOnContinousJumping_Parms Parms;
		Parms.PlayerCharacter=PlayerCharacter;
		ProcessEvent(FindFunctionChecked(NAME_UFG_LocomotionJumpingSubState_OnContinousJumping),&Parms);
	}
	static FName NAME_UFG_LocomotionJumpingSubState_OnEndJumping = FName(TEXT("OnEndJumping"));
	void UFG_LocomotionJumpingSubState::OnEndJumping(AFG_PlayerCharacter* PlayerCharacter)
	{
		FG_LocomotionJumpingSubState_eventOnEndJumping_Parms Parms;
		Parms.PlayerCharacter=PlayerCharacter;
		ProcessEvent(FindFunctionChecked(NAME_UFG_LocomotionJumpingSubState_OnEndJumping),&Parms);
	}
	static FName NAME_UFG_LocomotionJumpingSubState_OnStartJumping = FName(TEXT("OnStartJumping"));
	void UFG_LocomotionJumpingSubState::OnStartJumping(AFG_PlayerCharacter* PlayerCharacter)
	{
		FG_LocomotionJumpingSubState_eventOnStartJumping_Parms Parms;
		Parms.PlayerCharacter=PlayerCharacter;
		ProcessEvent(FindFunctionChecked(NAME_UFG_LocomotionJumpingSubState_OnStartJumping),&Parms);
	}
	void UFG_LocomotionJumpingSubState::StaticRegisterNativesUFG_LocomotionJumpingSubState()
	{
	}
	struct Z_Construct_UFunction_UFG_LocomotionJumpingSubState_OnContinousJumping_Statics
	{
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PlayerCharacter;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UFG_LocomotionJumpingSubState_OnContinousJumping_Statics::NewProp_PlayerCharacter = { "PlayerCharacter", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FG_LocomotionJumpingSubState_eventOnContinousJumping_Parms, PlayerCharacter), Z_Construct_UClass_AFG_PlayerCharacter_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFG_LocomotionJumpingSubState_OnContinousJumping_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFG_LocomotionJumpingSubState_OnContinousJumping_Statics::NewProp_PlayerCharacter,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFG_LocomotionJumpingSubState_OnContinousJumping_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Player/States/Locomotion/FG_LocomotionJumpingSubState.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFG_LocomotionJumpingSubState_OnContinousJumping_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFG_LocomotionJumpingSubState, nullptr, "OnContinousJumping", nullptr, nullptr, sizeof(FG_LocomotionJumpingSubState_eventOnContinousJumping_Parms), Z_Construct_UFunction_UFG_LocomotionJumpingSubState_OnContinousJumping_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFG_LocomotionJumpingSubState_OnContinousJumping_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFG_LocomotionJumpingSubState_OnContinousJumping_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFG_LocomotionJumpingSubState_OnContinousJumping_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFG_LocomotionJumpingSubState_OnContinousJumping()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFG_LocomotionJumpingSubState_OnContinousJumping_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFG_LocomotionJumpingSubState_OnEndJumping_Statics
	{
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PlayerCharacter;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UFG_LocomotionJumpingSubState_OnEndJumping_Statics::NewProp_PlayerCharacter = { "PlayerCharacter", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FG_LocomotionJumpingSubState_eventOnEndJumping_Parms, PlayerCharacter), Z_Construct_UClass_AFG_PlayerCharacter_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFG_LocomotionJumpingSubState_OnEndJumping_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFG_LocomotionJumpingSubState_OnEndJumping_Statics::NewProp_PlayerCharacter,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFG_LocomotionJumpingSubState_OnEndJumping_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Player/States/Locomotion/FG_LocomotionJumpingSubState.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFG_LocomotionJumpingSubState_OnEndJumping_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFG_LocomotionJumpingSubState, nullptr, "OnEndJumping", nullptr, nullptr, sizeof(FG_LocomotionJumpingSubState_eventOnEndJumping_Parms), Z_Construct_UFunction_UFG_LocomotionJumpingSubState_OnEndJumping_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFG_LocomotionJumpingSubState_OnEndJumping_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFG_LocomotionJumpingSubState_OnEndJumping_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFG_LocomotionJumpingSubState_OnEndJumping_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFG_LocomotionJumpingSubState_OnEndJumping()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFG_LocomotionJumpingSubState_OnEndJumping_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFG_LocomotionJumpingSubState_OnStartJumping_Statics
	{
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PlayerCharacter;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UFG_LocomotionJumpingSubState_OnStartJumping_Statics::NewProp_PlayerCharacter = { "PlayerCharacter", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FG_LocomotionJumpingSubState_eventOnStartJumping_Parms, PlayerCharacter), Z_Construct_UClass_AFG_PlayerCharacter_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFG_LocomotionJumpingSubState_OnStartJumping_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFG_LocomotionJumpingSubState_OnStartJumping_Statics::NewProp_PlayerCharacter,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFG_LocomotionJumpingSubState_OnStartJumping_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Player/States/Locomotion/FG_LocomotionJumpingSubState.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFG_LocomotionJumpingSubState_OnStartJumping_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFG_LocomotionJumpingSubState, nullptr, "OnStartJumping", nullptr, nullptr, sizeof(FG_LocomotionJumpingSubState_eventOnStartJumping_Parms), Z_Construct_UFunction_UFG_LocomotionJumpingSubState_OnStartJumping_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFG_LocomotionJumpingSubState_OnStartJumping_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFG_LocomotionJumpingSubState_OnStartJumping_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFG_LocomotionJumpingSubState_OnStartJumping_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFG_LocomotionJumpingSubState_OnStartJumping()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFG_LocomotionJumpingSubState_OnStartJumping_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UFG_LocomotionJumpingSubState_NoRegister()
	{
		return UFG_LocomotionJumpingSubState::StaticClass();
	}
	struct Z_Construct_UClass_UFG_LocomotionJumpingSubState_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UFG_LocomotionJumpingSubState_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UFG_LocomotionSubState,
		(UObject* (*)())Z_Construct_UPackage__Script_gp3_team01,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UFG_LocomotionJumpingSubState_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UFG_LocomotionJumpingSubState_OnContinousJumping, "OnContinousJumping" }, // 1763000779
		{ &Z_Construct_UFunction_UFG_LocomotionJumpingSubState_OnEndJumping, "OnEndJumping" }, // 1065104452
		{ &Z_Construct_UFunction_UFG_LocomotionJumpingSubState_OnStartJumping, "OnStartJumping" }, // 1971946780
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFG_LocomotionJumpingSubState_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "Player/States/Locomotion/FG_LocomotionJumpingSubState.h" },
		{ "ModuleRelativePath", "Public/Player/States/Locomotion/FG_LocomotionJumpingSubState.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UFG_LocomotionJumpingSubState_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UFG_LocomotionJumpingSubState>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UFG_LocomotionJumpingSubState_Statics::ClassParams = {
		&UFG_LocomotionJumpingSubState::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UFG_LocomotionJumpingSubState_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UFG_LocomotionJumpingSubState_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UFG_LocomotionJumpingSubState()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UFG_LocomotionJumpingSubState_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UFG_LocomotionJumpingSubState, 103062275);
	template<> GP3_TEAM01_API UClass* StaticClass<UFG_LocomotionJumpingSubState>()
	{
		return UFG_LocomotionJumpingSubState::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UFG_LocomotionJumpingSubState(Z_Construct_UClass_UFG_LocomotionJumpingSubState, &UFG_LocomotionJumpingSubState::StaticClass, TEXT("/Script/gp3_team01"), TEXT("UFG_LocomotionJumpingSubState"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UFG_LocomotionJumpingSubState);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
