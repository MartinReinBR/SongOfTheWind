// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "gp3_team01/Public/LevelElements/Collectible/FG_CollectibleUnlocker.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFG_CollectibleUnlocker() {}
// Cross Module References
	GP3_TEAM01_API UClass* Z_Construct_UClass_UFG_CollectibleUnlocker_NoRegister();
	GP3_TEAM01_API UClass* Z_Construct_UClass_UFG_CollectibleUnlocker();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	UPackage* Z_Construct_UPackage__Script_gp3_team01();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialInterface_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
	GP3_TEAM01_API UClass* Z_Construct_UClass_UFG_CollectorComponent_NoRegister();
	GP3_TEAM01_API UClass* Z_Construct_UClass_UFG_CollectibleComponent_NoRegister();
	GP3_TEAM01_API UClass* Z_Construct_UClass_UFG_LocomotionResponse_NoRegister();
// End Cross Module References
	void UFG_CollectibleUnlocker::StaticRegisterNativesUFG_CollectibleUnlocker()
	{
	}
	UClass* Z_Construct_UClass_UFG_CollectibleUnlocker_NoRegister()
	{
		return UFG_CollectibleUnlocker::StaticClass();
	}
	struct Z_Construct_UClass_UFG_CollectibleUnlocker_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UnlockedMaterial_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_UnlockedMaterial;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LockedMaterial_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_LockedMaterial;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FullCycleDuration_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_FullCycleDuration;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_MeshComponents_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MeshComponents_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_MeshComponents;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CurrentCollector_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CurrentCollector;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_UsedCollectibles_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UsedCollectibles_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_UsedCollectibles;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_UsedMeshComponents_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UsedMeshComponents_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_UsedMeshComponents;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TravellingCollectible_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_TravellingCollectible;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TravellingMeshComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_TravellingMeshComponent;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UFG_CollectibleUnlocker_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_gp3_team01,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFG_CollectibleUnlocker_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "LevelElements/Collectible/FG_CollectibleUnlocker.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/LevelElements/Collectible/FG_CollectibleUnlocker.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFG_CollectibleUnlocker_Statics::NewProp_UnlockedMaterial_MetaData[] = {
		{ "Category", "FG_CollectibleUnlocker" },
		{ "ModuleRelativePath", "Public/LevelElements/Collectible/FG_CollectibleUnlocker.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UFG_CollectibleUnlocker_Statics::NewProp_UnlockedMaterial = { "UnlockedMaterial", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFG_CollectibleUnlocker, UnlockedMaterial), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UFG_CollectibleUnlocker_Statics::NewProp_UnlockedMaterial_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFG_CollectibleUnlocker_Statics::NewProp_UnlockedMaterial_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFG_CollectibleUnlocker_Statics::NewProp_LockedMaterial_MetaData[] = {
		{ "Category", "FG_CollectibleUnlocker" },
		{ "ModuleRelativePath", "Public/LevelElements/Collectible/FG_CollectibleUnlocker.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UFG_CollectibleUnlocker_Statics::NewProp_LockedMaterial = { "LockedMaterial", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFG_CollectibleUnlocker, LockedMaterial), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UFG_CollectibleUnlocker_Statics::NewProp_LockedMaterial_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFG_CollectibleUnlocker_Statics::NewProp_LockedMaterial_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFG_CollectibleUnlocker_Statics::NewProp_FullCycleDuration_MetaData[] = {
		{ "Category", "FG_CollectibleUnlocker" },
		{ "ModuleRelativePath", "Public/LevelElements/Collectible/FG_CollectibleUnlocker.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UFG_CollectibleUnlocker_Statics::NewProp_FullCycleDuration = { "FullCycleDuration", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFG_CollectibleUnlocker, FullCycleDuration), METADATA_PARAMS(Z_Construct_UClass_UFG_CollectibleUnlocker_Statics::NewProp_FullCycleDuration_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFG_CollectibleUnlocker_Statics::NewProp_FullCycleDuration_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UFG_CollectibleUnlocker_Statics::NewProp_MeshComponents_Inner = { "MeshComponents", nullptr, (EPropertyFlags)0x0000000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFG_CollectibleUnlocker_Statics::NewProp_MeshComponents_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/LevelElements/Collectible/FG_CollectibleUnlocker.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UFG_CollectibleUnlocker_Statics::NewProp_MeshComponents = { "MeshComponents", nullptr, (EPropertyFlags)0x0010008000000008, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFG_CollectibleUnlocker, MeshComponents), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UFG_CollectibleUnlocker_Statics::NewProp_MeshComponents_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFG_CollectibleUnlocker_Statics::NewProp_MeshComponents_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFG_CollectibleUnlocker_Statics::NewProp_CurrentCollector_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/LevelElements/Collectible/FG_CollectibleUnlocker.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UFG_CollectibleUnlocker_Statics::NewProp_CurrentCollector = { "CurrentCollector", nullptr, (EPropertyFlags)0x0010000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFG_CollectibleUnlocker, CurrentCollector), Z_Construct_UClass_UFG_CollectorComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UFG_CollectibleUnlocker_Statics::NewProp_CurrentCollector_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFG_CollectibleUnlocker_Statics::NewProp_CurrentCollector_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UFG_CollectibleUnlocker_Statics::NewProp_UsedCollectibles_Inner = { "UsedCollectibles", nullptr, (EPropertyFlags)0x0000000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UFG_CollectibleComponent_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFG_CollectibleUnlocker_Statics::NewProp_UsedCollectibles_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/LevelElements/Collectible/FG_CollectibleUnlocker.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UFG_CollectibleUnlocker_Statics::NewProp_UsedCollectibles = { "UsedCollectibles", nullptr, (EPropertyFlags)0x0010008000000008, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFG_CollectibleUnlocker, UsedCollectibles), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UFG_CollectibleUnlocker_Statics::NewProp_UsedCollectibles_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFG_CollectibleUnlocker_Statics::NewProp_UsedCollectibles_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UFG_CollectibleUnlocker_Statics::NewProp_UsedMeshComponents_Inner = { "UsedMeshComponents", nullptr, (EPropertyFlags)0x0000000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFG_CollectibleUnlocker_Statics::NewProp_UsedMeshComponents_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/LevelElements/Collectible/FG_CollectibleUnlocker.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UFG_CollectibleUnlocker_Statics::NewProp_UsedMeshComponents = { "UsedMeshComponents", nullptr, (EPropertyFlags)0x0010008000000008, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFG_CollectibleUnlocker, UsedMeshComponents), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UFG_CollectibleUnlocker_Statics::NewProp_UsedMeshComponents_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFG_CollectibleUnlocker_Statics::NewProp_UsedMeshComponents_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFG_CollectibleUnlocker_Statics::NewProp_TravellingCollectible_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/LevelElements/Collectible/FG_CollectibleUnlocker.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UFG_CollectibleUnlocker_Statics::NewProp_TravellingCollectible = { "TravellingCollectible", nullptr, (EPropertyFlags)0x0010000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFG_CollectibleUnlocker, TravellingCollectible), Z_Construct_UClass_UFG_CollectibleComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UFG_CollectibleUnlocker_Statics::NewProp_TravellingCollectible_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFG_CollectibleUnlocker_Statics::NewProp_TravellingCollectible_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFG_CollectibleUnlocker_Statics::NewProp_TravellingMeshComponent_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/LevelElements/Collectible/FG_CollectibleUnlocker.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UFG_CollectibleUnlocker_Statics::NewProp_TravellingMeshComponent = { "TravellingMeshComponent", nullptr, (EPropertyFlags)0x0010000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFG_CollectibleUnlocker, TravellingMeshComponent), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UFG_CollectibleUnlocker_Statics::NewProp_TravellingMeshComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFG_CollectibleUnlocker_Statics::NewProp_TravellingMeshComponent_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UFG_CollectibleUnlocker_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFG_CollectibleUnlocker_Statics::NewProp_UnlockedMaterial,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFG_CollectibleUnlocker_Statics::NewProp_LockedMaterial,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFG_CollectibleUnlocker_Statics::NewProp_FullCycleDuration,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFG_CollectibleUnlocker_Statics::NewProp_MeshComponents_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFG_CollectibleUnlocker_Statics::NewProp_MeshComponents,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFG_CollectibleUnlocker_Statics::NewProp_CurrentCollector,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFG_CollectibleUnlocker_Statics::NewProp_UsedCollectibles_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFG_CollectibleUnlocker_Statics::NewProp_UsedCollectibles,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFG_CollectibleUnlocker_Statics::NewProp_UsedMeshComponents_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFG_CollectibleUnlocker_Statics::NewProp_UsedMeshComponents,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFG_CollectibleUnlocker_Statics::NewProp_TravellingCollectible,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFG_CollectibleUnlocker_Statics::NewProp_TravellingMeshComponent,
	};
		const UE4CodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_UFG_CollectibleUnlocker_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UFG_LocomotionResponse_NoRegister, (int32)VTABLE_OFFSET(UFG_CollectibleUnlocker, IFG_LocomotionResponse), false },
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UFG_CollectibleUnlocker_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UFG_CollectibleUnlocker>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UFG_CollectibleUnlocker_Statics::ClassParams = {
		&UFG_CollectibleUnlocker::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UFG_CollectibleUnlocker_Statics::PropPointers,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UFG_CollectibleUnlocker_Statics::PropPointers),
		UE_ARRAY_COUNT(InterfaceParams),
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UFG_CollectibleUnlocker_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UFG_CollectibleUnlocker_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UFG_CollectibleUnlocker()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UFG_CollectibleUnlocker_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UFG_CollectibleUnlocker, 1239321316);
	template<> GP3_TEAM01_API UClass* StaticClass<UFG_CollectibleUnlocker>()
	{
		return UFG_CollectibleUnlocker::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UFG_CollectibleUnlocker(Z_Construct_UClass_UFG_CollectibleUnlocker, &UFG_CollectibleUnlocker::StaticClass, TEXT("/Script/gp3_team01"), TEXT("UFG_CollectibleUnlocker"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UFG_CollectibleUnlocker);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
