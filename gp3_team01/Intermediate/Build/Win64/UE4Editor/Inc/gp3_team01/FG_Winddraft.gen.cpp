// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "gp3_team01/Public/LevelElements/Winddraft/FG_Winddraft.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFG_Winddraft() {}
// Cross Module References
	GP3_TEAM01_API UClass* Z_Construct_UClass_AFG_Winddraft_NoRegister();
	GP3_TEAM01_API UClass* Z_Construct_UClass_AFG_Winddraft();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_gp3_team01();
	ENGINE_API UClass* Z_Construct_UClass_UPrimitiveComponent_NoRegister();
	GP3_TEAM01_API UClass* Z_Construct_UClass_AFG_PlayerCharacter_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UBoxComponent_NoRegister();
	GP3_TEAM01_API UClass* Z_Construct_UClass_UFG_LocomotionResponse_NoRegister();
	GP3_TEAM01_API UClass* Z_Construct_UClass_UFG_GliderResponse_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(AFG_Winddraft::execApplyWindForce)
	{
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherActor);
		P_GET_OBJECT(AFG_PlayerCharacter,Z_Param_Player);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ApplyWindForce(Z_Param_OtherActor,Z_Param_Player);
		P_NATIVE_END;
	}
	void AFG_Winddraft::StaticRegisterNativesAFG_Winddraft()
	{
		UClass* Class = AFG_Winddraft::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ApplyWindForce", &AFG_Winddraft::execApplyWindForce },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AFG_Winddraft_ApplyWindForce_Statics
	{
		struct FG_Winddraft_eventApplyWindForce_Parms
		{
			UPrimitiveComponent* OtherActor;
			AFG_PlayerCharacter* Player;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OtherActor_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OtherActor;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Player;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFG_Winddraft_ApplyWindForce_Statics::NewProp_OtherActor_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AFG_Winddraft_ApplyWindForce_Statics::NewProp_OtherActor = { "OtherActor", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FG_Winddraft_eventApplyWindForce_Parms, OtherActor), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_AFG_Winddraft_ApplyWindForce_Statics::NewProp_OtherActor_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AFG_Winddraft_ApplyWindForce_Statics::NewProp_OtherActor_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AFG_Winddraft_ApplyWindForce_Statics::NewProp_Player = { "Player", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FG_Winddraft_eventApplyWindForce_Parms, Player), Z_Construct_UClass_AFG_PlayerCharacter_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFG_Winddraft_ApplyWindForce_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFG_Winddraft_ApplyWindForce_Statics::NewProp_OtherActor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFG_Winddraft_ApplyWindForce_Statics::NewProp_Player,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFG_Winddraft_ApplyWindForce_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/LevelElements/Winddraft/FG_Winddraft.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFG_Winddraft_ApplyWindForce_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFG_Winddraft, nullptr, "ApplyWindForce", nullptr, nullptr, sizeof(FG_Winddraft_eventApplyWindForce_Parms), Z_Construct_UFunction_AFG_Winddraft_ApplyWindForce_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AFG_Winddraft_ApplyWindForce_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFG_Winddraft_ApplyWindForce_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AFG_Winddraft_ApplyWindForce_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFG_Winddraft_ApplyWindForce()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFG_Winddraft_ApplyWindForce_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AFG_Winddraft_NoRegister()
	{
		return AFG_Winddraft::StaticClass();
	}
	struct Z_Construct_UClass_AFG_Winddraft_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Root_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Root;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BoxTrigger_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_BoxTrigger;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ThePlayer_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ThePlayer;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WindSpeedGliding_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_WindSpeedGliding;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WindSpeedNotGliding_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_WindSpeedNotGliding;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IsApplyingForceOnPlayer_MetaData[];
#endif
		static void NewProp_IsApplyingForceOnPlayer_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_IsApplyingForceOnPlayer;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AFG_Winddraft_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_gp3_team01,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AFG_Winddraft_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AFG_Winddraft_ApplyWindForce, "ApplyWindForce" }, // 1874819655
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFG_Winddraft_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "LevelElements/Winddraft/FG_Winddraft.h" },
		{ "ModuleRelativePath", "Public/LevelElements/Winddraft/FG_Winddraft.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFG_Winddraft_Statics::NewProp_Root_MetaData[] = {
		{ "Category", "FG_Winddraft" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/LevelElements/Winddraft/FG_Winddraft.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFG_Winddraft_Statics::NewProp_Root = { "Root", nullptr, (EPropertyFlags)0x00100000000a0009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFG_Winddraft, Root), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AFG_Winddraft_Statics::NewProp_Root_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFG_Winddraft_Statics::NewProp_Root_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFG_Winddraft_Statics::NewProp_BoxTrigger_MetaData[] = {
		{ "Category", "FG_Winddraft" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/LevelElements/Winddraft/FG_Winddraft.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFG_Winddraft_Statics::NewProp_BoxTrigger = { "BoxTrigger", nullptr, (EPropertyFlags)0x00100000000a0009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFG_Winddraft, BoxTrigger), Z_Construct_UClass_UBoxComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AFG_Winddraft_Statics::NewProp_BoxTrigger_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFG_Winddraft_Statics::NewProp_BoxTrigger_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFG_Winddraft_Statics::NewProp_ThePlayer_MetaData[] = {
		{ "ModuleRelativePath", "Public/LevelElements/Winddraft/FG_Winddraft.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFG_Winddraft_Statics::NewProp_ThePlayer = { "ThePlayer", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFG_Winddraft, ThePlayer), Z_Construct_UClass_AFG_PlayerCharacter_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AFG_Winddraft_Statics::NewProp_ThePlayer_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFG_Winddraft_Statics::NewProp_ThePlayer_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFG_Winddraft_Statics::NewProp_WindSpeedGliding_MetaData[] = {
		{ "Category", "Winddraft" },
		{ "ModuleRelativePath", "Public/LevelElements/Winddraft/FG_Winddraft.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AFG_Winddraft_Statics::NewProp_WindSpeedGliding = { "WindSpeedGliding", nullptr, (EPropertyFlags)0x0010000000000805, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFG_Winddraft, WindSpeedGliding), METADATA_PARAMS(Z_Construct_UClass_AFG_Winddraft_Statics::NewProp_WindSpeedGliding_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFG_Winddraft_Statics::NewProp_WindSpeedGliding_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFG_Winddraft_Statics::NewProp_WindSpeedNotGliding_MetaData[] = {
		{ "Category", "Winddraft" },
		{ "ModuleRelativePath", "Public/LevelElements/Winddraft/FG_Winddraft.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AFG_Winddraft_Statics::NewProp_WindSpeedNotGliding = { "WindSpeedNotGliding", nullptr, (EPropertyFlags)0x0010000000000805, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFG_Winddraft, WindSpeedNotGliding), METADATA_PARAMS(Z_Construct_UClass_AFG_Winddraft_Statics::NewProp_WindSpeedNotGliding_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFG_Winddraft_Statics::NewProp_WindSpeedNotGliding_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFG_Winddraft_Statics::NewProp_IsApplyingForceOnPlayer_MetaData[] = {
		{ "ModuleRelativePath", "Public/LevelElements/Winddraft/FG_Winddraft.h" },
	};
#endif
	void Z_Construct_UClass_AFG_Winddraft_Statics::NewProp_IsApplyingForceOnPlayer_SetBit(void* Obj)
	{
		((AFG_Winddraft*)Obj)->IsApplyingForceOnPlayer = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AFG_Winddraft_Statics::NewProp_IsApplyingForceOnPlayer = { "IsApplyingForceOnPlayer", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AFG_Winddraft), &Z_Construct_UClass_AFG_Winddraft_Statics::NewProp_IsApplyingForceOnPlayer_SetBit, METADATA_PARAMS(Z_Construct_UClass_AFG_Winddraft_Statics::NewProp_IsApplyingForceOnPlayer_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFG_Winddraft_Statics::NewProp_IsApplyingForceOnPlayer_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AFG_Winddraft_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFG_Winddraft_Statics::NewProp_Root,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFG_Winddraft_Statics::NewProp_BoxTrigger,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFG_Winddraft_Statics::NewProp_ThePlayer,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFG_Winddraft_Statics::NewProp_WindSpeedGliding,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFG_Winddraft_Statics::NewProp_WindSpeedNotGliding,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFG_Winddraft_Statics::NewProp_IsApplyingForceOnPlayer,
	};
		const UE4CodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_AFG_Winddraft_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UFG_LocomotionResponse_NoRegister, (int32)VTABLE_OFFSET(AFG_Winddraft, IFG_LocomotionResponse), false },
			{ Z_Construct_UClass_UFG_GliderResponse_NoRegister, (int32)VTABLE_OFFSET(AFG_Winddraft, IFG_GliderResponse), false },
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AFG_Winddraft_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AFG_Winddraft>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AFG_Winddraft_Statics::ClassParams = {
		&AFG_Winddraft::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AFG_Winddraft_Statics::PropPointers,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AFG_Winddraft_Statics::PropPointers),
		UE_ARRAY_COUNT(InterfaceParams),
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AFG_Winddraft_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AFG_Winddraft_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AFG_Winddraft()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AFG_Winddraft_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AFG_Winddraft, 811080246);
	template<> GP3_TEAM01_API UClass* StaticClass<AFG_Winddraft>()
	{
		return AFG_Winddraft::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AFG_Winddraft(Z_Construct_UClass_AFG_Winddraft, &AFG_Winddraft::StaticClass, TEXT("/Script/gp3_team01"), TEXT("AFG_Winddraft"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AFG_Winddraft);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
