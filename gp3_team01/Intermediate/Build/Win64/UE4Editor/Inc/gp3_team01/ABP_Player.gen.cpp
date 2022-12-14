// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "gp3_team01/Public/Player/ABP_Player.h"
#include "Engine/Classes/Components/SkeletalMeshComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeABP_Player() {}
// Cross Module References
	GP3_TEAM01_API UClass* Z_Construct_UClass_UABP_Player_NoRegister();
	GP3_TEAM01_API UClass* Z_Construct_UClass_UABP_Player();
	ENGINE_API UClass* Z_Construct_UClass_UAnimInstance();
	UPackage* Z_Construct_UPackage__Script_gp3_team01();
// End Cross Module References
	DEFINE_FUNCTION(UABP_Player::execIsClimbing)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsClimbing();
		P_NATIVE_END;
	}
	void UABP_Player::StaticRegisterNativesUABP_Player()
	{
		UClass* Class = UABP_Player::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "IsClimbing", &UABP_Player::execIsClimbing },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UABP_Player_IsClimbing_Statics
	{
		struct ABP_Player_eventIsClimbing_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UABP_Player_IsClimbing_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ABP_Player_eventIsClimbing_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UABP_Player_IsClimbing_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ABP_Player_eventIsClimbing_Parms), &Z_Construct_UFunction_UABP_Player_IsClimbing_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UABP_Player_IsClimbing_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABP_Player_IsClimbing_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UABP_Player_IsClimbing_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Player/ABP_Player.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UABP_Player_IsClimbing_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UABP_Player, nullptr, "IsClimbing", nullptr, nullptr, sizeof(ABP_Player_eventIsClimbing_Parms), Z_Construct_UFunction_UABP_Player_IsClimbing_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UABP_Player_IsClimbing_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UABP_Player_IsClimbing_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UABP_Player_IsClimbing_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UABP_Player_IsClimbing()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UABP_Player_IsClimbing_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UABP_Player_NoRegister()
	{
		return UABP_Player::StaticClass();
	}
	struct Z_Construct_UClass_UABP_Player_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_VelocityDist_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_VelocityDist;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_VerticalVelocity_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_VerticalVelocity;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsGrounded_MetaData[];
#endif
		static void NewProp_bIsGrounded_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsGrounded;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsGliding_MetaData[];
#endif
		static void NewProp_bIsGliding_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsGliding;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsClimbing_MetaData[];
#endif
		static void NewProp_bIsClimbing_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsClimbing;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UABP_Player_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAnimInstance,
		(UObject* (*)())Z_Construct_UPackage__Script_gp3_team01,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UABP_Player_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UABP_Player_IsClimbing, "IsClimbing" }, // 520355674
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UABP_Player_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * IF weird multi-threadin UB errors -> set this->bUseMultiThreadedAnimationUpdate to false : ) \n */" },
		{ "HideCategories", "AnimInstance" },
		{ "IncludePath", "Player/ABP_Player.h" },
		{ "ModuleRelativePath", "Public/Player/ABP_Player.h" },
		{ "ToolTip", "IF weird multi-threadin UB errors -> set this->bUseMultiThreadedAnimationUpdate to false : )" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UABP_Player_Statics::NewProp_VelocityDist_MetaData[] = {
		{ "Category", "ABP_Player" },
		{ "ModuleRelativePath", "Public/Player/ABP_Player.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UABP_Player_Statics::NewProp_VelocityDist = { "VelocityDist", nullptr, (EPropertyFlags)0x0010000000000004, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UABP_Player, VelocityDist), METADATA_PARAMS(Z_Construct_UClass_UABP_Player_Statics::NewProp_VelocityDist_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UABP_Player_Statics::NewProp_VelocityDist_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UABP_Player_Statics::NewProp_VerticalVelocity_MetaData[] = {
		{ "Category", "ABP_Player" },
		{ "ModuleRelativePath", "Public/Player/ABP_Player.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UABP_Player_Statics::NewProp_VerticalVelocity = { "VerticalVelocity", nullptr, (EPropertyFlags)0x0010000000000004, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UABP_Player, VerticalVelocity), METADATA_PARAMS(Z_Construct_UClass_UABP_Player_Statics::NewProp_VerticalVelocity_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UABP_Player_Statics::NewProp_VerticalVelocity_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UABP_Player_Statics::NewProp_bIsGrounded_MetaData[] = {
		{ "Category", "ABP_Player" },
		{ "ModuleRelativePath", "Public/Player/ABP_Player.h" },
	};
#endif
	void Z_Construct_UClass_UABP_Player_Statics::NewProp_bIsGrounded_SetBit(void* Obj)
	{
		((UABP_Player*)Obj)->bIsGrounded = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UABP_Player_Statics::NewProp_bIsGrounded = { "bIsGrounded", nullptr, (EPropertyFlags)0x0010000000000004, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UABP_Player), &Z_Construct_UClass_UABP_Player_Statics::NewProp_bIsGrounded_SetBit, METADATA_PARAMS(Z_Construct_UClass_UABP_Player_Statics::NewProp_bIsGrounded_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UABP_Player_Statics::NewProp_bIsGrounded_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UABP_Player_Statics::NewProp_bIsGliding_MetaData[] = {
		{ "Category", "ABP_Player" },
		{ "ModuleRelativePath", "Public/Player/ABP_Player.h" },
	};
#endif
	void Z_Construct_UClass_UABP_Player_Statics::NewProp_bIsGliding_SetBit(void* Obj)
	{
		((UABP_Player*)Obj)->bIsGliding = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UABP_Player_Statics::NewProp_bIsGliding = { "bIsGliding", nullptr, (EPropertyFlags)0x0010000000000004, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UABP_Player), &Z_Construct_UClass_UABP_Player_Statics::NewProp_bIsGliding_SetBit, METADATA_PARAMS(Z_Construct_UClass_UABP_Player_Statics::NewProp_bIsGliding_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UABP_Player_Statics::NewProp_bIsGliding_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UABP_Player_Statics::NewProp_bIsClimbing_MetaData[] = {
		{ "Category", "ABP_Player" },
		{ "ModuleRelativePath", "Public/Player/ABP_Player.h" },
	};
#endif
	void Z_Construct_UClass_UABP_Player_Statics::NewProp_bIsClimbing_SetBit(void* Obj)
	{
		((UABP_Player*)Obj)->bIsClimbing = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UABP_Player_Statics::NewProp_bIsClimbing = { "bIsClimbing", nullptr, (EPropertyFlags)0x0010000000000004, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UABP_Player), &Z_Construct_UClass_UABP_Player_Statics::NewProp_bIsClimbing_SetBit, METADATA_PARAMS(Z_Construct_UClass_UABP_Player_Statics::NewProp_bIsClimbing_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UABP_Player_Statics::NewProp_bIsClimbing_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UABP_Player_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UABP_Player_Statics::NewProp_VelocityDist,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UABP_Player_Statics::NewProp_VerticalVelocity,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UABP_Player_Statics::NewProp_bIsGrounded,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UABP_Player_Statics::NewProp_bIsGliding,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UABP_Player_Statics::NewProp_bIsClimbing,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UABP_Player_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UABP_Player>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UABP_Player_Statics::ClassParams = {
		&UABP_Player::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UABP_Player_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UABP_Player_Statics::PropPointers),
		0,
		0x009000A8u,
		METADATA_PARAMS(Z_Construct_UClass_UABP_Player_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UABP_Player_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UABP_Player()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UABP_Player_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UABP_Player, 1544251699);
	template<> GP3_TEAM01_API UClass* StaticClass<UABP_Player>()
	{
		return UABP_Player::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UABP_Player(Z_Construct_UClass_UABP_Player, &UABP_Player::StaticClass, TEXT("/Script/gp3_team01"), TEXT("UABP_Player"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UABP_Player);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
