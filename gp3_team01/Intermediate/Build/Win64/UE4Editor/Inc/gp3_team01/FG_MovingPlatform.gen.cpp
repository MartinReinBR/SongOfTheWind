// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "gp3_team01/Public/LevelElements/MovingPlatform/FG_MovingPlatform.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFG_MovingPlatform() {}
// Cross Module References
	GP3_TEAM01_API UClass* Z_Construct_UClass_AFG_MovingPlatform_NoRegister();
	GP3_TEAM01_API UClass* Z_Construct_UClass_AFG_MovingPlatform();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_gp3_team01();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	GP3_TEAM01_API UClass* Z_Construct_UClass_UFG_LocomotionResponse_NoRegister();
// End Cross Module References
	void AFG_MovingPlatform::StaticRegisterNativesAFG_MovingPlatform()
	{
	}
	UClass* Z_Construct_UClass_AFG_MovingPlatform_NoRegister()
	{
		return AFG_MovingPlatform::StaticClass();
	}
	struct Z_Construct_UClass_AFG_MovingPlatform_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Root_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Root;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Speed_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Speed;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StartLocation_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_StartLocation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EndLocation_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_EndLocation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EditableEndLocation_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_EditableEndLocation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DeltaMovementVector_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_DeltaMovementVector;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IsMovingToEnd_MetaData[];
#endif
		static void NewProp_IsMovingToEnd_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_IsMovingToEnd;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AFG_MovingPlatform_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_gp3_team01,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFG_MovingPlatform_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "LevelElements/MovingPlatform/FG_MovingPlatform.h" },
		{ "ModuleRelativePath", "Public/LevelElements/MovingPlatform/FG_MovingPlatform.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFG_MovingPlatform_Statics::NewProp_Root_MetaData[] = {
		{ "Category", "FG_MovingPlatform" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/LevelElements/MovingPlatform/FG_MovingPlatform.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFG_MovingPlatform_Statics::NewProp_Root = { "Root", nullptr, (EPropertyFlags)0x00100000000a0009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFG_MovingPlatform, Root), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AFG_MovingPlatform_Statics::NewProp_Root_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFG_MovingPlatform_Statics::NewProp_Root_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFG_MovingPlatform_Statics::NewProp_Speed_MetaData[] = {
		{ "Category", "Moving Platform" },
		{ "ModuleRelativePath", "Public/LevelElements/MovingPlatform/FG_MovingPlatform.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AFG_MovingPlatform_Statics::NewProp_Speed = { "Speed", nullptr, (EPropertyFlags)0x0010000000000805, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFG_MovingPlatform, Speed), METADATA_PARAMS(Z_Construct_UClass_AFG_MovingPlatform_Statics::NewProp_Speed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFG_MovingPlatform_Statics::NewProp_Speed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFG_MovingPlatform_Statics::NewProp_StartLocation_MetaData[] = {
		{ "ModuleRelativePath", "Public/LevelElements/MovingPlatform/FG_MovingPlatform.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AFG_MovingPlatform_Statics::NewProp_StartLocation = { "StartLocation", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFG_MovingPlatform, StartLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_AFG_MovingPlatform_Statics::NewProp_StartLocation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFG_MovingPlatform_Statics::NewProp_StartLocation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFG_MovingPlatform_Statics::NewProp_EndLocation_MetaData[] = {
		{ "ModuleRelativePath", "Public/LevelElements/MovingPlatform/FG_MovingPlatform.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AFG_MovingPlatform_Statics::NewProp_EndLocation = { "EndLocation", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFG_MovingPlatform, EndLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_AFG_MovingPlatform_Statics::NewProp_EndLocation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFG_MovingPlatform_Statics::NewProp_EndLocation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFG_MovingPlatform_Statics::NewProp_EditableEndLocation_MetaData[] = {
		{ "Category", "Moving Platform" },
		{ "MakeEditWidget", "TRUE" },
		{ "ModuleRelativePath", "Public/LevelElements/MovingPlatform/FG_MovingPlatform.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AFG_MovingPlatform_Statics::NewProp_EditableEndLocation = { "EditableEndLocation", nullptr, (EPropertyFlags)0x0010000000000805, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFG_MovingPlatform, EditableEndLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_AFG_MovingPlatform_Statics::NewProp_EditableEndLocation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFG_MovingPlatform_Statics::NewProp_EditableEndLocation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFG_MovingPlatform_Statics::NewProp_DeltaMovementVector_MetaData[] = {
		{ "Category", "Moving Platform" },
		{ "ModuleRelativePath", "Public/LevelElements/MovingPlatform/FG_MovingPlatform.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AFG_MovingPlatform_Statics::NewProp_DeltaMovementVector = { "DeltaMovementVector", nullptr, (EPropertyFlags)0x0010000000020015, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFG_MovingPlatform, DeltaMovementVector), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_AFG_MovingPlatform_Statics::NewProp_DeltaMovementVector_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFG_MovingPlatform_Statics::NewProp_DeltaMovementVector_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFG_MovingPlatform_Statics::NewProp_IsMovingToEnd_MetaData[] = {
		{ "ModuleRelativePath", "Public/LevelElements/MovingPlatform/FG_MovingPlatform.h" },
	};
#endif
	void Z_Construct_UClass_AFG_MovingPlatform_Statics::NewProp_IsMovingToEnd_SetBit(void* Obj)
	{
		((AFG_MovingPlatform*)Obj)->IsMovingToEnd = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AFG_MovingPlatform_Statics::NewProp_IsMovingToEnd = { "IsMovingToEnd", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AFG_MovingPlatform), &Z_Construct_UClass_AFG_MovingPlatform_Statics::NewProp_IsMovingToEnd_SetBit, METADATA_PARAMS(Z_Construct_UClass_AFG_MovingPlatform_Statics::NewProp_IsMovingToEnd_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFG_MovingPlatform_Statics::NewProp_IsMovingToEnd_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AFG_MovingPlatform_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFG_MovingPlatform_Statics::NewProp_Root,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFG_MovingPlatform_Statics::NewProp_Speed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFG_MovingPlatform_Statics::NewProp_StartLocation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFG_MovingPlatform_Statics::NewProp_EndLocation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFG_MovingPlatform_Statics::NewProp_EditableEndLocation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFG_MovingPlatform_Statics::NewProp_DeltaMovementVector,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFG_MovingPlatform_Statics::NewProp_IsMovingToEnd,
	};
		const UE4CodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_AFG_MovingPlatform_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UFG_LocomotionResponse_NoRegister, (int32)VTABLE_OFFSET(AFG_MovingPlatform, IFG_LocomotionResponse), false },
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AFG_MovingPlatform_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AFG_MovingPlatform>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AFG_MovingPlatform_Statics::ClassParams = {
		&AFG_MovingPlatform::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AFG_MovingPlatform_Statics::PropPointers,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AFG_MovingPlatform_Statics::PropPointers),
		UE_ARRAY_COUNT(InterfaceParams),
		0x008000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AFG_MovingPlatform_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AFG_MovingPlatform_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AFG_MovingPlatform()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AFG_MovingPlatform_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AFG_MovingPlatform, 2378859615);
	template<> GP3_TEAM01_API UClass* StaticClass<AFG_MovingPlatform>()
	{
		return AFG_MovingPlatform::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AFG_MovingPlatform(Z_Construct_UClass_AFG_MovingPlatform, &AFG_MovingPlatform::StaticClass, TEXT("/Script/gp3_team01"), TEXT("AFG_MovingPlatform"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AFG_MovingPlatform);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
