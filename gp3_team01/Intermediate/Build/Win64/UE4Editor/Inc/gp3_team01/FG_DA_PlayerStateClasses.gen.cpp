// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "gp3_team01/Public/Player/FG_DA_PlayerStateClasses.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFG_DA_PlayerStateClasses() {}
// Cross Module References
	GP3_TEAM01_API UClass* Z_Construct_UClass_UFG_DA_PlayerStateClasses_NoRegister();
	GP3_TEAM01_API UClass* Z_Construct_UClass_UFG_DA_PlayerStateClasses();
	ENGINE_API UClass* Z_Construct_UClass_UDataAsset();
	UPackage* Z_Construct_UPackage__Script_gp3_team01();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	GP3_TEAM01_API UClass* Z_Construct_UClass_UFG_LocomotionPlayerState_NoRegister();
	GP3_TEAM01_API UClass* Z_Construct_UClass_UFG_GlidingPlayerState_NoRegister();
	GP3_TEAM01_API UClass* Z_Construct_UClass_UFG_LocomotionIdleSubState_NoRegister();
	GP3_TEAM01_API UClass* Z_Construct_UClass_UFG_LocomotionJumpingSubState_NoRegister();
	GP3_TEAM01_API UClass* Z_Construct_UClass_UFG_LocomotionAirborneSubState_NoRegister();
	GP3_TEAM01_API UClass* Z_Construct_UClass_UFG_LocomotionAirJumpSubState_NoRegister();
	GP3_TEAM01_API UClass* Z_Construct_UClass_UFG_LocomotionMovingSubState_NoRegister();
	GP3_TEAM01_API UClass* Z_Construct_UClass_UFG_LocomotionLedgevaultSubState_NoRegister();
	GP3_TEAM01_API UClass* Z_Construct_UClass_UFG_LocomotionWallclimbSubState_NoRegister();
// End Cross Module References
	void UFG_DA_PlayerStateClasses::StaticRegisterNativesUFG_DA_PlayerStateClasses()
	{
	}
	UClass* Z_Construct_UClass_UFG_DA_PlayerStateClasses_NoRegister()
	{
		return UFG_DA_PlayerStateClasses::StaticClass();
	}
	struct Z_Construct_UClass_UFG_DA_PlayerStateClasses_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LocomotionPlayerState_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_LocomotionPlayerState;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GlidingPlayerState_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_GlidingPlayerState;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LocomotionIdleSubStateClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_LocomotionIdleSubStateClass;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LocomotionJumpSubStateClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_LocomotionJumpSubStateClass;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LocomotionAirborneSubStateClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_LocomotionAirborneSubStateClass;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LocomotionAirJumpSubStateClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_LocomotionAirJumpSubStateClass;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LocomotionMovingSubStateClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_LocomotionMovingSubStateClass;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LocomotionLedgevaultSubStateClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_LocomotionLedgevaultSubStateClass;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LocomotionWallclimbSubStateClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_LocomotionWallclimbSubStateClass;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UFG_DA_PlayerStateClasses_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UDataAsset,
		(UObject* (*)())Z_Construct_UPackage__Script_gp3_team01,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFG_DA_PlayerStateClasses_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "Player/FG_DA_PlayerStateClasses.h" },
		{ "ModuleRelativePath", "Public/Player/FG_DA_PlayerStateClasses.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFG_DA_PlayerStateClasses_Statics::NewProp_LocomotionPlayerState_MetaData[] = {
		{ "Category", "Core" },
		{ "ModuleRelativePath", "Public/Player/FG_DA_PlayerStateClasses.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_UFG_DA_PlayerStateClasses_Statics::NewProp_LocomotionPlayerState = { "LocomotionPlayerState", nullptr, (EPropertyFlags)0x0014000000010005, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFG_DA_PlayerStateClasses, LocomotionPlayerState), Z_Construct_UClass_UFG_LocomotionPlayerState_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_UFG_DA_PlayerStateClasses_Statics::NewProp_LocomotionPlayerState_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFG_DA_PlayerStateClasses_Statics::NewProp_LocomotionPlayerState_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFG_DA_PlayerStateClasses_Statics::NewProp_GlidingPlayerState_MetaData[] = {
		{ "Category", "Core" },
		{ "ModuleRelativePath", "Public/Player/FG_DA_PlayerStateClasses.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_UFG_DA_PlayerStateClasses_Statics::NewProp_GlidingPlayerState = { "GlidingPlayerState", nullptr, (EPropertyFlags)0x0014000000010005, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFG_DA_PlayerStateClasses, GlidingPlayerState), Z_Construct_UClass_UFG_GlidingPlayerState_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_UFG_DA_PlayerStateClasses_Statics::NewProp_GlidingPlayerState_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFG_DA_PlayerStateClasses_Statics::NewProp_GlidingPlayerState_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFG_DA_PlayerStateClasses_Statics::NewProp_LocomotionIdleSubStateClass_MetaData[] = {
		{ "Category", "Locomotion" },
		{ "ModuleRelativePath", "Public/Player/FG_DA_PlayerStateClasses.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_UFG_DA_PlayerStateClasses_Statics::NewProp_LocomotionIdleSubStateClass = { "LocomotionIdleSubStateClass", nullptr, (EPropertyFlags)0x0014000000010005, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFG_DA_PlayerStateClasses, LocomotionIdleSubStateClass), Z_Construct_UClass_UFG_LocomotionIdleSubState_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_UFG_DA_PlayerStateClasses_Statics::NewProp_LocomotionIdleSubStateClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFG_DA_PlayerStateClasses_Statics::NewProp_LocomotionIdleSubStateClass_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFG_DA_PlayerStateClasses_Statics::NewProp_LocomotionJumpSubStateClass_MetaData[] = {
		{ "Category", "Locomotion" },
		{ "ModuleRelativePath", "Public/Player/FG_DA_PlayerStateClasses.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_UFG_DA_PlayerStateClasses_Statics::NewProp_LocomotionJumpSubStateClass = { "LocomotionJumpSubStateClass", nullptr, (EPropertyFlags)0x0014000000010005, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFG_DA_PlayerStateClasses, LocomotionJumpSubStateClass), Z_Construct_UClass_UFG_LocomotionJumpingSubState_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_UFG_DA_PlayerStateClasses_Statics::NewProp_LocomotionJumpSubStateClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFG_DA_PlayerStateClasses_Statics::NewProp_LocomotionJumpSubStateClass_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFG_DA_PlayerStateClasses_Statics::NewProp_LocomotionAirborneSubStateClass_MetaData[] = {
		{ "Category", "Locomotion" },
		{ "ModuleRelativePath", "Public/Player/FG_DA_PlayerStateClasses.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_UFG_DA_PlayerStateClasses_Statics::NewProp_LocomotionAirborneSubStateClass = { "LocomotionAirborneSubStateClass", nullptr, (EPropertyFlags)0x0014000000010005, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFG_DA_PlayerStateClasses, LocomotionAirborneSubStateClass), Z_Construct_UClass_UFG_LocomotionAirborneSubState_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_UFG_DA_PlayerStateClasses_Statics::NewProp_LocomotionAirborneSubStateClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFG_DA_PlayerStateClasses_Statics::NewProp_LocomotionAirborneSubStateClass_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFG_DA_PlayerStateClasses_Statics::NewProp_LocomotionAirJumpSubStateClass_MetaData[] = {
		{ "Category", "Locomotion" },
		{ "ModuleRelativePath", "Public/Player/FG_DA_PlayerStateClasses.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_UFG_DA_PlayerStateClasses_Statics::NewProp_LocomotionAirJumpSubStateClass = { "LocomotionAirJumpSubStateClass", nullptr, (EPropertyFlags)0x0014000000010005, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFG_DA_PlayerStateClasses, LocomotionAirJumpSubStateClass), Z_Construct_UClass_UFG_LocomotionAirJumpSubState_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_UFG_DA_PlayerStateClasses_Statics::NewProp_LocomotionAirJumpSubStateClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFG_DA_PlayerStateClasses_Statics::NewProp_LocomotionAirJumpSubStateClass_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFG_DA_PlayerStateClasses_Statics::NewProp_LocomotionMovingSubStateClass_MetaData[] = {
		{ "Category", "Locomotion" },
		{ "ModuleRelativePath", "Public/Player/FG_DA_PlayerStateClasses.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_UFG_DA_PlayerStateClasses_Statics::NewProp_LocomotionMovingSubStateClass = { "LocomotionMovingSubStateClass", nullptr, (EPropertyFlags)0x0014000000010005, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFG_DA_PlayerStateClasses, LocomotionMovingSubStateClass), Z_Construct_UClass_UFG_LocomotionMovingSubState_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_UFG_DA_PlayerStateClasses_Statics::NewProp_LocomotionMovingSubStateClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFG_DA_PlayerStateClasses_Statics::NewProp_LocomotionMovingSubStateClass_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFG_DA_PlayerStateClasses_Statics::NewProp_LocomotionLedgevaultSubStateClass_MetaData[] = {
		{ "Category", "Locomotion" },
		{ "ModuleRelativePath", "Public/Player/FG_DA_PlayerStateClasses.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_UFG_DA_PlayerStateClasses_Statics::NewProp_LocomotionLedgevaultSubStateClass = { "LocomotionLedgevaultSubStateClass", nullptr, (EPropertyFlags)0x0014000000010005, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFG_DA_PlayerStateClasses, LocomotionLedgevaultSubStateClass), Z_Construct_UClass_UFG_LocomotionLedgevaultSubState_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_UFG_DA_PlayerStateClasses_Statics::NewProp_LocomotionLedgevaultSubStateClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFG_DA_PlayerStateClasses_Statics::NewProp_LocomotionLedgevaultSubStateClass_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFG_DA_PlayerStateClasses_Statics::NewProp_LocomotionWallclimbSubStateClass_MetaData[] = {
		{ "Category", "Locomotion" },
		{ "ModuleRelativePath", "Public/Player/FG_DA_PlayerStateClasses.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_UFG_DA_PlayerStateClasses_Statics::NewProp_LocomotionWallclimbSubStateClass = { "LocomotionWallclimbSubStateClass", nullptr, (EPropertyFlags)0x0014000000010005, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFG_DA_PlayerStateClasses, LocomotionWallclimbSubStateClass), Z_Construct_UClass_UFG_LocomotionWallclimbSubState_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_UFG_DA_PlayerStateClasses_Statics::NewProp_LocomotionWallclimbSubStateClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFG_DA_PlayerStateClasses_Statics::NewProp_LocomotionWallclimbSubStateClass_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UFG_DA_PlayerStateClasses_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFG_DA_PlayerStateClasses_Statics::NewProp_LocomotionPlayerState,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFG_DA_PlayerStateClasses_Statics::NewProp_GlidingPlayerState,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFG_DA_PlayerStateClasses_Statics::NewProp_LocomotionIdleSubStateClass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFG_DA_PlayerStateClasses_Statics::NewProp_LocomotionJumpSubStateClass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFG_DA_PlayerStateClasses_Statics::NewProp_LocomotionAirborneSubStateClass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFG_DA_PlayerStateClasses_Statics::NewProp_LocomotionAirJumpSubStateClass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFG_DA_PlayerStateClasses_Statics::NewProp_LocomotionMovingSubStateClass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFG_DA_PlayerStateClasses_Statics::NewProp_LocomotionLedgevaultSubStateClass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFG_DA_PlayerStateClasses_Statics::NewProp_LocomotionWallclimbSubStateClass,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UFG_DA_PlayerStateClasses_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UFG_DA_PlayerStateClasses>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UFG_DA_PlayerStateClasses_Statics::ClassParams = {
		&UFG_DA_PlayerStateClasses::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UFG_DA_PlayerStateClasses_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UFG_DA_PlayerStateClasses_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UFG_DA_PlayerStateClasses_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UFG_DA_PlayerStateClasses_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UFG_DA_PlayerStateClasses()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UFG_DA_PlayerStateClasses_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UFG_DA_PlayerStateClasses, 3972777261);
	template<> GP3_TEAM01_API UClass* StaticClass<UFG_DA_PlayerStateClasses>()
	{
		return UFG_DA_PlayerStateClasses::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UFG_DA_PlayerStateClasses(Z_Construct_UClass_UFG_DA_PlayerStateClasses, &UFG_DA_PlayerStateClasses::StaticClass, TEXT("/Script/gp3_team01"), TEXT("UFG_DA_PlayerStateClasses"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UFG_DA_PlayerStateClasses);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
