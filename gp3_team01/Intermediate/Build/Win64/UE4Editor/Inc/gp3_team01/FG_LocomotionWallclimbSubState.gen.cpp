// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "gp3_team01/Public/Player/States/Locomotion/FG_LocomotionWallclimbSubState.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFG_LocomotionWallclimbSubState() {}
// Cross Module References
	GP3_TEAM01_API UClass* Z_Construct_UClass_UFG_LocomotionWallclimbSubState_NoRegister();
	GP3_TEAM01_API UClass* Z_Construct_UClass_UFG_LocomotionWallclimbSubState();
	GP3_TEAM01_API UClass* Z_Construct_UClass_UFG_LocomotionSubState();
	UPackage* Z_Construct_UPackage__Script_gp3_team01();
	GP3_TEAM01_API UClass* Z_Construct_UClass_AFG_PlayerCharacter_NoRegister();
// End Cross Module References
	static FName NAME_UFG_LocomotionWallclimbSubState_OnEndWallClimbing = FName(TEXT("OnEndWallClimbing"));
	void UFG_LocomotionWallclimbSubState::OnEndWallClimbing(AFG_PlayerCharacter* PlayerCharacter)
	{
		FG_LocomotionWallclimbSubState_eventOnEndWallClimbing_Parms Parms;
		Parms.PlayerCharacter=PlayerCharacter;
		ProcessEvent(FindFunctionChecked(NAME_UFG_LocomotionWallclimbSubState_OnEndWallClimbing),&Parms);
	}
	static FName NAME_UFG_LocomotionWallclimbSubState_OnStarWallClimbing = FName(TEXT("OnStarWallClimbing"));
	void UFG_LocomotionWallclimbSubState::OnStarWallClimbing(AFG_PlayerCharacter* PlayerCharacter)
	{
		FG_LocomotionWallclimbSubState_eventOnStarWallClimbing_Parms Parms;
		Parms.PlayerCharacter=PlayerCharacter;
		ProcessEvent(FindFunctionChecked(NAME_UFG_LocomotionWallclimbSubState_OnStarWallClimbing),&Parms);
	}
	static FName NAME_UFG_LocomotionWallclimbSubState_OnWallClimbing = FName(TEXT("OnWallClimbing"));
	void UFG_LocomotionWallclimbSubState::OnWallClimbing(AFG_PlayerCharacter* PlayerCharacter)
	{
		FG_LocomotionWallclimbSubState_eventOnWallClimbing_Parms Parms;
		Parms.PlayerCharacter=PlayerCharacter;
		ProcessEvent(FindFunctionChecked(NAME_UFG_LocomotionWallclimbSubState_OnWallClimbing),&Parms);
	}
	void UFG_LocomotionWallclimbSubState::StaticRegisterNativesUFG_LocomotionWallclimbSubState()
	{
	}
	struct Z_Construct_UFunction_UFG_LocomotionWallclimbSubState_OnEndWallClimbing_Statics
	{
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PlayerCharacter;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UFG_LocomotionWallclimbSubState_OnEndWallClimbing_Statics::NewProp_PlayerCharacter = { "PlayerCharacter", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FG_LocomotionWallclimbSubState_eventOnEndWallClimbing_Parms, PlayerCharacter), Z_Construct_UClass_AFG_PlayerCharacter_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFG_LocomotionWallclimbSubState_OnEndWallClimbing_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFG_LocomotionWallclimbSubState_OnEndWallClimbing_Statics::NewProp_PlayerCharacter,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFG_LocomotionWallclimbSubState_OnEndWallClimbing_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Player/States/Locomotion/FG_LocomotionWallclimbSubState.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFG_LocomotionWallclimbSubState_OnEndWallClimbing_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFG_LocomotionWallclimbSubState, nullptr, "OnEndWallClimbing", nullptr, nullptr, sizeof(FG_LocomotionWallclimbSubState_eventOnEndWallClimbing_Parms), Z_Construct_UFunction_UFG_LocomotionWallclimbSubState_OnEndWallClimbing_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFG_LocomotionWallclimbSubState_OnEndWallClimbing_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFG_LocomotionWallclimbSubState_OnEndWallClimbing_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFG_LocomotionWallclimbSubState_OnEndWallClimbing_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFG_LocomotionWallclimbSubState_OnEndWallClimbing()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFG_LocomotionWallclimbSubState_OnEndWallClimbing_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFG_LocomotionWallclimbSubState_OnStarWallClimbing_Statics
	{
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PlayerCharacter;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UFG_LocomotionWallclimbSubState_OnStarWallClimbing_Statics::NewProp_PlayerCharacter = { "PlayerCharacter", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FG_LocomotionWallclimbSubState_eventOnStarWallClimbing_Parms, PlayerCharacter), Z_Construct_UClass_AFG_PlayerCharacter_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFG_LocomotionWallclimbSubState_OnStarWallClimbing_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFG_LocomotionWallclimbSubState_OnStarWallClimbing_Statics::NewProp_PlayerCharacter,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFG_LocomotionWallclimbSubState_OnStarWallClimbing_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Player/States/Locomotion/FG_LocomotionWallclimbSubState.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFG_LocomotionWallclimbSubState_OnStarWallClimbing_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFG_LocomotionWallclimbSubState, nullptr, "OnStarWallClimbing", nullptr, nullptr, sizeof(FG_LocomotionWallclimbSubState_eventOnStarWallClimbing_Parms), Z_Construct_UFunction_UFG_LocomotionWallclimbSubState_OnStarWallClimbing_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFG_LocomotionWallclimbSubState_OnStarWallClimbing_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFG_LocomotionWallclimbSubState_OnStarWallClimbing_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFG_LocomotionWallclimbSubState_OnStarWallClimbing_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFG_LocomotionWallclimbSubState_OnStarWallClimbing()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFG_LocomotionWallclimbSubState_OnStarWallClimbing_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFG_LocomotionWallclimbSubState_OnWallClimbing_Statics
	{
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PlayerCharacter;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UFG_LocomotionWallclimbSubState_OnWallClimbing_Statics::NewProp_PlayerCharacter = { "PlayerCharacter", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FG_LocomotionWallclimbSubState_eventOnWallClimbing_Parms, PlayerCharacter), Z_Construct_UClass_AFG_PlayerCharacter_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFG_LocomotionWallclimbSubState_OnWallClimbing_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFG_LocomotionWallclimbSubState_OnWallClimbing_Statics::NewProp_PlayerCharacter,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFG_LocomotionWallclimbSubState_OnWallClimbing_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Player/States/Locomotion/FG_LocomotionWallclimbSubState.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFG_LocomotionWallclimbSubState_OnWallClimbing_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFG_LocomotionWallclimbSubState, nullptr, "OnWallClimbing", nullptr, nullptr, sizeof(FG_LocomotionWallclimbSubState_eventOnWallClimbing_Parms), Z_Construct_UFunction_UFG_LocomotionWallclimbSubState_OnWallClimbing_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFG_LocomotionWallclimbSubState_OnWallClimbing_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFG_LocomotionWallclimbSubState_OnWallClimbing_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFG_LocomotionWallclimbSubState_OnWallClimbing_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFG_LocomotionWallclimbSubState_OnWallClimbing()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFG_LocomotionWallclimbSubState_OnWallClimbing_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UFG_LocomotionWallclimbSubState_NoRegister()
	{
		return UFG_LocomotionWallclimbSubState::StaticClass();
	}
	struct Z_Construct_UClass_UFG_LocomotionWallclimbSubState_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UFG_LocomotionWallclimbSubState_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UFG_LocomotionSubState,
		(UObject* (*)())Z_Construct_UPackage__Script_gp3_team01,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UFG_LocomotionWallclimbSubState_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UFG_LocomotionWallclimbSubState_OnEndWallClimbing, "OnEndWallClimbing" }, // 1951601459
		{ &Z_Construct_UFunction_UFG_LocomotionWallclimbSubState_OnStarWallClimbing, "OnStarWallClimbing" }, // 2843856066
		{ &Z_Construct_UFunction_UFG_LocomotionWallclimbSubState_OnWallClimbing, "OnWallClimbing" }, // 918214027
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFG_LocomotionWallclimbSubState_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "Player/States/Locomotion/FG_LocomotionWallclimbSubState.h" },
		{ "ModuleRelativePath", "Public/Player/States/Locomotion/FG_LocomotionWallclimbSubState.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UFG_LocomotionWallclimbSubState_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UFG_LocomotionWallclimbSubState>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UFG_LocomotionWallclimbSubState_Statics::ClassParams = {
		&UFG_LocomotionWallclimbSubState::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UFG_LocomotionWallclimbSubState_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UFG_LocomotionWallclimbSubState_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UFG_LocomotionWallclimbSubState()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UFG_LocomotionWallclimbSubState_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UFG_LocomotionWallclimbSubState, 3959717327);
	template<> GP3_TEAM01_API UClass* StaticClass<UFG_LocomotionWallclimbSubState>()
	{
		return UFG_LocomotionWallclimbSubState::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UFG_LocomotionWallclimbSubState(Z_Construct_UClass_UFG_LocomotionWallclimbSubState, &UFG_LocomotionWallclimbSubState::StaticClass, TEXT("/Script/gp3_team01"), TEXT("UFG_LocomotionWallclimbSubState"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UFG_LocomotionWallclimbSubState);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
