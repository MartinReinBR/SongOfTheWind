// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "gp3_team01/Public/Player/States/Locomotion/FG_LocomotionLedgevaultSubState.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFG_LocomotionLedgevaultSubState() {}
// Cross Module References
	GP3_TEAM01_API UClass* Z_Construct_UClass_UFG_LocomotionLedgevaultSubState_NoRegister();
	GP3_TEAM01_API UClass* Z_Construct_UClass_UFG_LocomotionLedgevaultSubState();
	GP3_TEAM01_API UClass* Z_Construct_UClass_UFG_LocomotionSubState();
	UPackage* Z_Construct_UPackage__Script_gp3_team01();
	GP3_TEAM01_API UClass* Z_Construct_UClass_AFG_PlayerCharacter_NoRegister();
// End Cross Module References
	static FName NAME_UFG_LocomotionLedgevaultSubState_OnEndLedgeVaulting = FName(TEXT("OnEndLedgeVaulting"));
	void UFG_LocomotionLedgevaultSubState::OnEndLedgeVaulting(AFG_PlayerCharacter* PlayerCharacter)
	{
		FG_LocomotionLedgevaultSubState_eventOnEndLedgeVaulting_Parms Parms;
		Parms.PlayerCharacter=PlayerCharacter;
		ProcessEvent(FindFunctionChecked(NAME_UFG_LocomotionLedgevaultSubState_OnEndLedgeVaulting),&Parms);
	}
	static FName NAME_UFG_LocomotionLedgevaultSubState_OnStartLedgeVaulting = FName(TEXT("OnStartLedgeVaulting"));
	void UFG_LocomotionLedgevaultSubState::OnStartLedgeVaulting(AFG_PlayerCharacter* PlayerCharacter)
	{
		FG_LocomotionLedgevaultSubState_eventOnStartLedgeVaulting_Parms Parms;
		Parms.PlayerCharacter=PlayerCharacter;
		ProcessEvent(FindFunctionChecked(NAME_UFG_LocomotionLedgevaultSubState_OnStartLedgeVaulting),&Parms);
	}
	void UFG_LocomotionLedgevaultSubState::StaticRegisterNativesUFG_LocomotionLedgevaultSubState()
	{
	}
	struct Z_Construct_UFunction_UFG_LocomotionLedgevaultSubState_OnEndLedgeVaulting_Statics
	{
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PlayerCharacter;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UFG_LocomotionLedgevaultSubState_OnEndLedgeVaulting_Statics::NewProp_PlayerCharacter = { "PlayerCharacter", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FG_LocomotionLedgevaultSubState_eventOnEndLedgeVaulting_Parms, PlayerCharacter), Z_Construct_UClass_AFG_PlayerCharacter_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFG_LocomotionLedgevaultSubState_OnEndLedgeVaulting_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFG_LocomotionLedgevaultSubState_OnEndLedgeVaulting_Statics::NewProp_PlayerCharacter,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFG_LocomotionLedgevaultSubState_OnEndLedgeVaulting_Statics::Function_MetaDataParams[] = {
		{ "Comment", "// There shouldn't be a need for this one, since this is a fall-through state\n//UFUNCTION(BlueprintImplementableEvent)\n//void OnLedgeVaulting(class AFG_PlayerCharacter* PlayerCharacter);\n" },
		{ "ModuleRelativePath", "Public/Player/States/Locomotion/FG_LocomotionLedgevaultSubState.h" },
		{ "ToolTip", "There shouldn't be a need for this one, since this is a fall-through state\nUFUNCTION(BlueprintImplementableEvent)\nvoid OnLedgeVaulting(class AFG_PlayerCharacter* PlayerCharacter);" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFG_LocomotionLedgevaultSubState_OnEndLedgeVaulting_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFG_LocomotionLedgevaultSubState, nullptr, "OnEndLedgeVaulting", nullptr, nullptr, sizeof(FG_LocomotionLedgevaultSubState_eventOnEndLedgeVaulting_Parms), Z_Construct_UFunction_UFG_LocomotionLedgevaultSubState_OnEndLedgeVaulting_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFG_LocomotionLedgevaultSubState_OnEndLedgeVaulting_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFG_LocomotionLedgevaultSubState_OnEndLedgeVaulting_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFG_LocomotionLedgevaultSubState_OnEndLedgeVaulting_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFG_LocomotionLedgevaultSubState_OnEndLedgeVaulting()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFG_LocomotionLedgevaultSubState_OnEndLedgeVaulting_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFG_LocomotionLedgevaultSubState_OnStartLedgeVaulting_Statics
	{
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PlayerCharacter;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UFG_LocomotionLedgevaultSubState_OnStartLedgeVaulting_Statics::NewProp_PlayerCharacter = { "PlayerCharacter", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FG_LocomotionLedgevaultSubState_eventOnStartLedgeVaulting_Parms, PlayerCharacter), Z_Construct_UClass_AFG_PlayerCharacter_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFG_LocomotionLedgevaultSubState_OnStartLedgeVaulting_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFG_LocomotionLedgevaultSubState_OnStartLedgeVaulting_Statics::NewProp_PlayerCharacter,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFG_LocomotionLedgevaultSubState_OnStartLedgeVaulting_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Player/States/Locomotion/FG_LocomotionLedgevaultSubState.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFG_LocomotionLedgevaultSubState_OnStartLedgeVaulting_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFG_LocomotionLedgevaultSubState, nullptr, "OnStartLedgeVaulting", nullptr, nullptr, sizeof(FG_LocomotionLedgevaultSubState_eventOnStartLedgeVaulting_Parms), Z_Construct_UFunction_UFG_LocomotionLedgevaultSubState_OnStartLedgeVaulting_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFG_LocomotionLedgevaultSubState_OnStartLedgeVaulting_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFG_LocomotionLedgevaultSubState_OnStartLedgeVaulting_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFG_LocomotionLedgevaultSubState_OnStartLedgeVaulting_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFG_LocomotionLedgevaultSubState_OnStartLedgeVaulting()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFG_LocomotionLedgevaultSubState_OnStartLedgeVaulting_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UFG_LocomotionLedgevaultSubState_NoRegister()
	{
		return UFG_LocomotionLedgevaultSubState::StaticClass();
	}
	struct Z_Construct_UClass_UFG_LocomotionLedgevaultSubState_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UFG_LocomotionLedgevaultSubState_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UFG_LocomotionSubState,
		(UObject* (*)())Z_Construct_UPackage__Script_gp3_team01,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UFG_LocomotionLedgevaultSubState_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UFG_LocomotionLedgevaultSubState_OnEndLedgeVaulting, "OnEndLedgeVaulting" }, // 2110743869
		{ &Z_Construct_UFunction_UFG_LocomotionLedgevaultSubState_OnStartLedgeVaulting, "OnStartLedgeVaulting" }, // 2468900253
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFG_LocomotionLedgevaultSubState_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "Player/States/Locomotion/FG_LocomotionLedgevaultSubState.h" },
		{ "ModuleRelativePath", "Public/Player/States/Locomotion/FG_LocomotionLedgevaultSubState.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UFG_LocomotionLedgevaultSubState_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UFG_LocomotionLedgevaultSubState>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UFG_LocomotionLedgevaultSubState_Statics::ClassParams = {
		&UFG_LocomotionLedgevaultSubState::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UFG_LocomotionLedgevaultSubState_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UFG_LocomotionLedgevaultSubState_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UFG_LocomotionLedgevaultSubState()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UFG_LocomotionLedgevaultSubState_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UFG_LocomotionLedgevaultSubState, 1601940309);
	template<> GP3_TEAM01_API UClass* StaticClass<UFG_LocomotionLedgevaultSubState>()
	{
		return UFG_LocomotionLedgevaultSubState::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UFG_LocomotionLedgevaultSubState(Z_Construct_UClass_UFG_LocomotionLedgevaultSubState, &UFG_LocomotionLedgevaultSubState::StaticClass, TEXT("/Script/gp3_team01"), TEXT("UFG_LocomotionLedgevaultSubState"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UFG_LocomotionLedgevaultSubState);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
