// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "gp3_team01/Public/LevelElements/Collectible/FG_CollectorComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFG_CollectorComponent() {}
// Cross Module References
	GP3_TEAM01_API UClass* Z_Construct_UClass_UFG_CollectorComponent_NoRegister();
	GP3_TEAM01_API UClass* Z_Construct_UClass_UFG_CollectorComponent();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	UPackage* Z_Construct_UPackage__Script_gp3_team01();
	GP3_TEAM01_API UClass* Z_Construct_UClass_UFG_CollectibleComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UCapsuleComponent_NoRegister();
	GP3_TEAM01_API UClass* Z_Construct_UClass_AFG_PlayerCharacter_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UFG_CollectorComponent::execPop)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UFG_CollectibleComponent**)Z_Param__Result=P_THIS->Pop();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UFG_CollectorComponent::execNum)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->Num();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UFG_CollectorComponent::execRemove)
	{
		P_GET_OBJECT(UFG_CollectibleComponent,Z_Param_Actor);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Remove(Z_Param_Actor);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UFG_CollectorComponent::execAdd)
	{
		P_GET_OBJECT(UFG_CollectibleComponent,Z_Param_Actor);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Add(Z_Param_Actor);
		P_NATIVE_END;
	}
	void UFG_CollectorComponent::StaticRegisterNativesUFG_CollectorComponent()
	{
		UClass* Class = UFG_CollectorComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "Add", &UFG_CollectorComponent::execAdd },
			{ "Num", &UFG_CollectorComponent::execNum },
			{ "Pop", &UFG_CollectorComponent::execPop },
			{ "Remove", &UFG_CollectorComponent::execRemove },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UFG_CollectorComponent_Add_Statics
	{
		struct FG_CollectorComponent_eventAdd_Parms
		{
			UFG_CollectibleComponent* Actor;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Actor_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Actor;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFG_CollectorComponent_Add_Statics::NewProp_Actor_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UFG_CollectorComponent_Add_Statics::NewProp_Actor = { "Actor", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FG_CollectorComponent_eventAdd_Parms, Actor), Z_Construct_UClass_UFG_CollectibleComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UFG_CollectorComponent_Add_Statics::NewProp_Actor_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UFG_CollectorComponent_Add_Statics::NewProp_Actor_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFG_CollectorComponent_Add_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFG_CollectorComponent_Add_Statics::NewProp_Actor,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFG_CollectorComponent_Add_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/LevelElements/Collectible/FG_CollectorComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFG_CollectorComponent_Add_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFG_CollectorComponent, nullptr, "Add", nullptr, nullptr, sizeof(FG_CollectorComponent_eventAdd_Parms), Z_Construct_UFunction_UFG_CollectorComponent_Add_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFG_CollectorComponent_Add_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFG_CollectorComponent_Add_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFG_CollectorComponent_Add_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFG_CollectorComponent_Add()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFG_CollectorComponent_Add_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFG_CollectorComponent_Num_Statics
	{
		struct FG_CollectorComponent_eventNum_Parms
		{
			int32 ReturnValue;
		};
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UFG_CollectorComponent_Num_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FG_CollectorComponent_eventNum_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFG_CollectorComponent_Num_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFG_CollectorComponent_Num_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFG_CollectorComponent_Num_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/LevelElements/Collectible/FG_CollectorComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFG_CollectorComponent_Num_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFG_CollectorComponent, nullptr, "Num", nullptr, nullptr, sizeof(FG_CollectorComponent_eventNum_Parms), Z_Construct_UFunction_UFG_CollectorComponent_Num_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFG_CollectorComponent_Num_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFG_CollectorComponent_Num_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFG_CollectorComponent_Num_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFG_CollectorComponent_Num()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFG_CollectorComponent_Num_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFG_CollectorComponent_Pop_Statics
	{
		struct FG_CollectorComponent_eventPop_Parms
		{
			UFG_CollectibleComponent* ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFG_CollectorComponent_Pop_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UFG_CollectorComponent_Pop_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FG_CollectorComponent_eventPop_Parms, ReturnValue), Z_Construct_UClass_UFG_CollectibleComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UFG_CollectorComponent_Pop_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UFG_CollectorComponent_Pop_Statics::NewProp_ReturnValue_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFG_CollectorComponent_Pop_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFG_CollectorComponent_Pop_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFG_CollectorComponent_Pop_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/LevelElements/Collectible/FG_CollectorComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFG_CollectorComponent_Pop_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFG_CollectorComponent, nullptr, "Pop", nullptr, nullptr, sizeof(FG_CollectorComponent_eventPop_Parms), Z_Construct_UFunction_UFG_CollectorComponent_Pop_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFG_CollectorComponent_Pop_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFG_CollectorComponent_Pop_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFG_CollectorComponent_Pop_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFG_CollectorComponent_Pop()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFG_CollectorComponent_Pop_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFG_CollectorComponent_Remove_Statics
	{
		struct FG_CollectorComponent_eventRemove_Parms
		{
			UFG_CollectibleComponent* Actor;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Actor_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Actor;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFG_CollectorComponent_Remove_Statics::NewProp_Actor_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UFG_CollectorComponent_Remove_Statics::NewProp_Actor = { "Actor", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FG_CollectorComponent_eventRemove_Parms, Actor), Z_Construct_UClass_UFG_CollectibleComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UFG_CollectorComponent_Remove_Statics::NewProp_Actor_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UFG_CollectorComponent_Remove_Statics::NewProp_Actor_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFG_CollectorComponent_Remove_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFG_CollectorComponent_Remove_Statics::NewProp_Actor,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFG_CollectorComponent_Remove_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/LevelElements/Collectible/FG_CollectorComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFG_CollectorComponent_Remove_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFG_CollectorComponent, nullptr, "Remove", nullptr, nullptr, sizeof(FG_CollectorComponent_eventRemove_Parms), Z_Construct_UFunction_UFG_CollectorComponent_Remove_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFG_CollectorComponent_Remove_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFG_CollectorComponent_Remove_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFG_CollectorComponent_Remove_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFG_CollectorComponent_Remove()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFG_CollectorComponent_Remove_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UFG_CollectorComponent_NoRegister()
	{
		return UFG_CollectorComponent::StaticClass();
	}
	struct Z_Construct_UClass_UFG_CollectorComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Distance_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Distance;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Capsule_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Capsule;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PlayerCharacter_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PlayerCharacter;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CollectedActors_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CollectedActors_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_CollectedActors;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UFG_CollectorComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_gp3_team01,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UFG_CollectorComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UFG_CollectorComponent_Add, "Add" }, // 2429942842
		{ &Z_Construct_UFunction_UFG_CollectorComponent_Num, "Num" }, // 2903921203
		{ &Z_Construct_UFunction_UFG_CollectorComponent_Pop, "Pop" }, // 3166134414
		{ &Z_Construct_UFunction_UFG_CollectorComponent_Remove, "Remove" }, // 1160034699
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFG_CollectorComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "LevelElements/Collectible/FG_CollectorComponent.h" },
		{ "ModuleRelativePath", "Public/LevelElements/Collectible/FG_CollectorComponent.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFG_CollectorComponent_Statics::NewProp_Distance_MetaData[] = {
		{ "Category", "FG_CollectorComponent" },
		{ "ModuleRelativePath", "Public/LevelElements/Collectible/FG_CollectorComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UFG_CollectorComponent_Statics::NewProp_Distance = { "Distance", nullptr, (EPropertyFlags)0x0010000000010005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFG_CollectorComponent, Distance), METADATA_PARAMS(Z_Construct_UClass_UFG_CollectorComponent_Statics::NewProp_Distance_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFG_CollectorComponent_Statics::NewProp_Distance_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFG_CollectorComponent_Statics::NewProp_Capsule_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/LevelElements/Collectible/FG_CollectorComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UFG_CollectorComponent_Statics::NewProp_Capsule = { "Capsule", nullptr, (EPropertyFlags)0x0010000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFG_CollectorComponent, Capsule), Z_Construct_UClass_UCapsuleComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UFG_CollectorComponent_Statics::NewProp_Capsule_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFG_CollectorComponent_Statics::NewProp_Capsule_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFG_CollectorComponent_Statics::NewProp_PlayerCharacter_MetaData[] = {
		{ "ModuleRelativePath", "Public/LevelElements/Collectible/FG_CollectorComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UFG_CollectorComponent_Statics::NewProp_PlayerCharacter = { "PlayerCharacter", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFG_CollectorComponent, PlayerCharacter), Z_Construct_UClass_AFG_PlayerCharacter_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UFG_CollectorComponent_Statics::NewProp_PlayerCharacter_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFG_CollectorComponent_Statics::NewProp_PlayerCharacter_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UFG_CollectorComponent_Statics::NewProp_CollectedActors_Inner = { "CollectedActors", nullptr, (EPropertyFlags)0x0000000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UFG_CollectibleComponent_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFG_CollectorComponent_Statics::NewProp_CollectedActors_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/LevelElements/Collectible/FG_CollectorComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UFG_CollectorComponent_Statics::NewProp_CollectedActors = { "CollectedActors", nullptr, (EPropertyFlags)0x0010008000000008, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFG_CollectorComponent, CollectedActors), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UFG_CollectorComponent_Statics::NewProp_CollectedActors_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFG_CollectorComponent_Statics::NewProp_CollectedActors_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UFG_CollectorComponent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFG_CollectorComponent_Statics::NewProp_Distance,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFG_CollectorComponent_Statics::NewProp_Capsule,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFG_CollectorComponent_Statics::NewProp_PlayerCharacter,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFG_CollectorComponent_Statics::NewProp_CollectedActors_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFG_CollectorComponent_Statics::NewProp_CollectedActors,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UFG_CollectorComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UFG_CollectorComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UFG_CollectorComponent_Statics::ClassParams = {
		&UFG_CollectorComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UFG_CollectorComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UFG_CollectorComponent_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UFG_CollectorComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UFG_CollectorComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UFG_CollectorComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UFG_CollectorComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UFG_CollectorComponent, 1060822770);
	template<> GP3_TEAM01_API UClass* StaticClass<UFG_CollectorComponent>()
	{
		return UFG_CollectorComponent::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UFG_CollectorComponent(Z_Construct_UClass_UFG_CollectorComponent, &UFG_CollectorComponent::StaticClass, TEXT("/Script/gp3_team01"), TEXT("UFG_CollectorComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UFG_CollectorComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
