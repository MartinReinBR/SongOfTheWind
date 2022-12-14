// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "gp3_team01/Public/LevelElements/Collectible/FG_CollectibleComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFG_CollectibleComponent() {}
// Cross Module References
	GP3_TEAM01_API UClass* Z_Construct_UClass_UFG_CollectibleComponent_NoRegister();
	GP3_TEAM01_API UClass* Z_Construct_UClass_UFG_CollectibleComponent();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	UPackage* Z_Construct_UPackage__Script_gp3_team01();
	GP3_TEAM01_API UClass* Z_Construct_UClass_AFG_PlayerCharacter_NoRegister();
	GP3_TEAM01_API UClass* Z_Construct_UClass_UDA_FG_IntegerData_NoRegister();
	GP3_TEAM01_API UClass* Z_Construct_UClass_UDA_FG_NoteSheet_NoRegister();
	GP3_TEAM01_API UClass* Z_Construct_UClass_UFG_DA_Instrument_NoRegister();
	GP3_TEAM01_API UClass* Z_Construct_UClass_UFG_LocomotionResponse_NoRegister();
	GP3_TEAM01_API UClass* Z_Construct_UClass_UFG_GliderResponse_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UFG_CollectibleComponent::execShowSelf)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ShowSelf();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UFG_CollectibleComponent::execSetIsTickable)
	{
		P_GET_UBOOL(Z_Param_IsTickable);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetIsTickable(Z_Param_IsTickable);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UFG_CollectibleComponent::execHideSelf)
	{
		P_GET_UBOOL(Z_Param_StillVisislbe);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->HideSelf(Z_Param_StillVisislbe);
		P_NATIVE_END;
	}
	static FName NAME_UFG_CollectibleComponent_OnCollect = FName(TEXT("OnCollect"));
	void UFG_CollectibleComponent::OnCollect(AFG_PlayerCharacter* PlayerCharacter)
	{
		FG_CollectibleComponent_eventOnCollect_Parms Parms;
		Parms.PlayerCharacter=PlayerCharacter;
		ProcessEvent(FindFunctionChecked(NAME_UFG_CollectibleComponent_OnCollect),&Parms);
	}
	void UFG_CollectibleComponent::StaticRegisterNativesUFG_CollectibleComponent()
	{
		UClass* Class = UFG_CollectibleComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "HideSelf", &UFG_CollectibleComponent::execHideSelf },
			{ "SetIsTickable", &UFG_CollectibleComponent::execSetIsTickable },
			{ "ShowSelf", &UFG_CollectibleComponent::execShowSelf },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UFG_CollectibleComponent_HideSelf_Statics
	{
		struct FG_CollectibleComponent_eventHideSelf_Parms
		{
			bool StillVisislbe;
		};
		static void NewProp_StillVisislbe_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_StillVisislbe;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UFG_CollectibleComponent_HideSelf_Statics::NewProp_StillVisislbe_SetBit(void* Obj)
	{
		((FG_CollectibleComponent_eventHideSelf_Parms*)Obj)->StillVisislbe = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UFG_CollectibleComponent_HideSelf_Statics::NewProp_StillVisislbe = { "StillVisislbe", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FG_CollectibleComponent_eventHideSelf_Parms), &Z_Construct_UFunction_UFG_CollectibleComponent_HideSelf_Statics::NewProp_StillVisislbe_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFG_CollectibleComponent_HideSelf_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFG_CollectibleComponent_HideSelf_Statics::NewProp_StillVisislbe,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFG_CollectibleComponent_HideSelf_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/LevelElements/Collectible/FG_CollectibleComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFG_CollectibleComponent_HideSelf_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFG_CollectibleComponent, nullptr, "HideSelf", nullptr, nullptr, sizeof(FG_CollectibleComponent_eventHideSelf_Parms), Z_Construct_UFunction_UFG_CollectibleComponent_HideSelf_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFG_CollectibleComponent_HideSelf_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x44020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFG_CollectibleComponent_HideSelf_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFG_CollectibleComponent_HideSelf_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFG_CollectibleComponent_HideSelf()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFG_CollectibleComponent_HideSelf_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFG_CollectibleComponent_OnCollect_Statics
	{
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PlayerCharacter;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UFG_CollectibleComponent_OnCollect_Statics::NewProp_PlayerCharacter = { "PlayerCharacter", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FG_CollectibleComponent_eventOnCollect_Parms, PlayerCharacter), Z_Construct_UClass_AFG_PlayerCharacter_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFG_CollectibleComponent_OnCollect_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFG_CollectibleComponent_OnCollect_Statics::NewProp_PlayerCharacter,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFG_CollectibleComponent_OnCollect_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/LevelElements/Collectible/FG_CollectibleComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFG_CollectibleComponent_OnCollect_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFG_CollectibleComponent, nullptr, "OnCollect", nullptr, nullptr, sizeof(FG_CollectibleComponent_eventOnCollect_Parms), Z_Construct_UFunction_UFG_CollectibleComponent_OnCollect_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFG_CollectibleComponent_OnCollect_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFG_CollectibleComponent_OnCollect_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFG_CollectibleComponent_OnCollect_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFG_CollectibleComponent_OnCollect()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFG_CollectibleComponent_OnCollect_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFG_CollectibleComponent_SetIsTickable_Statics
	{
		struct FG_CollectibleComponent_eventSetIsTickable_Parms
		{
			bool IsTickable;
		};
		static void NewProp_IsTickable_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_IsTickable;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UFG_CollectibleComponent_SetIsTickable_Statics::NewProp_IsTickable_SetBit(void* Obj)
	{
		((FG_CollectibleComponent_eventSetIsTickable_Parms*)Obj)->IsTickable = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UFG_CollectibleComponent_SetIsTickable_Statics::NewProp_IsTickable = { "IsTickable", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FG_CollectibleComponent_eventSetIsTickable_Parms), &Z_Construct_UFunction_UFG_CollectibleComponent_SetIsTickable_Statics::NewProp_IsTickable_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFG_CollectibleComponent_SetIsTickable_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFG_CollectibleComponent_SetIsTickable_Statics::NewProp_IsTickable,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFG_CollectibleComponent_SetIsTickable_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/LevelElements/Collectible/FG_CollectibleComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFG_CollectibleComponent_SetIsTickable_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFG_CollectibleComponent, nullptr, "SetIsTickable", nullptr, nullptr, sizeof(FG_CollectibleComponent_eventSetIsTickable_Parms), Z_Construct_UFunction_UFG_CollectibleComponent_SetIsTickable_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFG_CollectibleComponent_SetIsTickable_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x44020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFG_CollectibleComponent_SetIsTickable_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFG_CollectibleComponent_SetIsTickable_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFG_CollectibleComponent_SetIsTickable()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFG_CollectibleComponent_SetIsTickable_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFG_CollectibleComponent_ShowSelf_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFG_CollectibleComponent_ShowSelf_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/LevelElements/Collectible/FG_CollectibleComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFG_CollectibleComponent_ShowSelf_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFG_CollectibleComponent, nullptr, "ShowSelf", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x44020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFG_CollectibleComponent_ShowSelf_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFG_CollectibleComponent_ShowSelf_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFG_CollectibleComponent_ShowSelf()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFG_CollectibleComponent_ShowSelf_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UFG_CollectibleComponent_NoRegister()
	{
		return UFG_CollectibleComponent::StaticClass();
	}
	struct Z_Construct_UClass_UFG_CollectibleComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Score_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Score;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NoteSheet_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_NoteSheet;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Bells_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Bells;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsFloatingInAir_MetaData[];
#endif
		static void NewProp_bIsFloatingInAir_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsFloatingInAir;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FloatingDistanceFromGround_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_FloatingDistanceFromGround;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UFG_CollectibleComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_gp3_team01,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UFG_CollectibleComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UFG_CollectibleComponent_HideSelf, "HideSelf" }, // 3615882464
		{ &Z_Construct_UFunction_UFG_CollectibleComponent_OnCollect, "OnCollect" }, // 450020207
		{ &Z_Construct_UFunction_UFG_CollectibleComponent_SetIsTickable, "SetIsTickable" }, // 2311044151
		{ &Z_Construct_UFunction_UFG_CollectibleComponent_ShowSelf, "ShowSelf" }, // 1446546504
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFG_CollectibleComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "LevelElements/Collectible/FG_CollectibleComponent.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/LevelElements/Collectible/FG_CollectibleComponent.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFG_CollectibleComponent_Statics::NewProp_Score_MetaData[] = {
		{ "Category", "FG_CollectibleComponent" },
		{ "ModuleRelativePath", "Public/LevelElements/Collectible/FG_CollectibleComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UFG_CollectibleComponent_Statics::NewProp_Score = { "Score", nullptr, (EPropertyFlags)0x0010000000010005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFG_CollectibleComponent, Score), Z_Construct_UClass_UDA_FG_IntegerData_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UFG_CollectibleComponent_Statics::NewProp_Score_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFG_CollectibleComponent_Statics::NewProp_Score_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFG_CollectibleComponent_Statics::NewProp_NoteSheet_MetaData[] = {
		{ "Category", "FG_CollectibleComponent" },
		{ "ModuleRelativePath", "Public/LevelElements/Collectible/FG_CollectibleComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UFG_CollectibleComponent_Statics::NewProp_NoteSheet = { "NoteSheet", nullptr, (EPropertyFlags)0x0010000000010005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFG_CollectibleComponent, NoteSheet), Z_Construct_UClass_UDA_FG_NoteSheet_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UFG_CollectibleComponent_Statics::NewProp_NoteSheet_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFG_CollectibleComponent_Statics::NewProp_NoteSheet_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFG_CollectibleComponent_Statics::NewProp_Bells_MetaData[] = {
		{ "Category", "FG_CollectibleComponent" },
		{ "ModuleRelativePath", "Public/LevelElements/Collectible/FG_CollectibleComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UFG_CollectibleComponent_Statics::NewProp_Bells = { "Bells", nullptr, (EPropertyFlags)0x0010000000010005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFG_CollectibleComponent, Bells), Z_Construct_UClass_UFG_DA_Instrument_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UFG_CollectibleComponent_Statics::NewProp_Bells_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFG_CollectibleComponent_Statics::NewProp_Bells_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFG_CollectibleComponent_Statics::NewProp_bIsFloatingInAir_MetaData[] = {
		{ "Category", "FG_CollectibleComponent" },
		{ "ModuleRelativePath", "Public/LevelElements/Collectible/FG_CollectibleComponent.h" },
	};
#endif
	void Z_Construct_UClass_UFG_CollectibleComponent_Statics::NewProp_bIsFloatingInAir_SetBit(void* Obj)
	{
		((UFG_CollectibleComponent*)Obj)->bIsFloatingInAir = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UFG_CollectibleComponent_Statics::NewProp_bIsFloatingInAir = { "bIsFloatingInAir", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UFG_CollectibleComponent), &Z_Construct_UClass_UFG_CollectibleComponent_Statics::NewProp_bIsFloatingInAir_SetBit, METADATA_PARAMS(Z_Construct_UClass_UFG_CollectibleComponent_Statics::NewProp_bIsFloatingInAir_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFG_CollectibleComponent_Statics::NewProp_bIsFloatingInAir_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFG_CollectibleComponent_Statics::NewProp_FloatingDistanceFromGround_MetaData[] = {
		{ "Category", "FG_CollectibleComponent" },
		{ "ModuleRelativePath", "Public/LevelElements/Collectible/FG_CollectibleComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UFG_CollectibleComponent_Statics::NewProp_FloatingDistanceFromGround = { "FloatingDistanceFromGround", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFG_CollectibleComponent, FloatingDistanceFromGround), METADATA_PARAMS(Z_Construct_UClass_UFG_CollectibleComponent_Statics::NewProp_FloatingDistanceFromGround_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFG_CollectibleComponent_Statics::NewProp_FloatingDistanceFromGround_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UFG_CollectibleComponent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFG_CollectibleComponent_Statics::NewProp_Score,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFG_CollectibleComponent_Statics::NewProp_NoteSheet,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFG_CollectibleComponent_Statics::NewProp_Bells,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFG_CollectibleComponent_Statics::NewProp_bIsFloatingInAir,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFG_CollectibleComponent_Statics::NewProp_FloatingDistanceFromGround,
	};
		const UE4CodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_UFG_CollectibleComponent_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UFG_LocomotionResponse_NoRegister, (int32)VTABLE_OFFSET(UFG_CollectibleComponent, IFG_LocomotionResponse), false },
			{ Z_Construct_UClass_UFG_GliderResponse_NoRegister, (int32)VTABLE_OFFSET(UFG_CollectibleComponent, IFG_GliderResponse), false },
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UFG_CollectibleComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UFG_CollectibleComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UFG_CollectibleComponent_Statics::ClassParams = {
		&UFG_CollectibleComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UFG_CollectibleComponent_Statics::PropPointers,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UFG_CollectibleComponent_Statics::PropPointers),
		UE_ARRAY_COUNT(InterfaceParams),
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UFG_CollectibleComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UFG_CollectibleComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UFG_CollectibleComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UFG_CollectibleComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UFG_CollectibleComponent, 500749846);
	template<> GP3_TEAM01_API UClass* StaticClass<UFG_CollectibleComponent>()
	{
		return UFG_CollectibleComponent::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UFG_CollectibleComponent(Z_Construct_UClass_UFG_CollectibleComponent, &UFG_CollectibleComponent::StaticClass, TEXT("/Script/gp3_team01"), TEXT("UFG_CollectibleComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UFG_CollectibleComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
