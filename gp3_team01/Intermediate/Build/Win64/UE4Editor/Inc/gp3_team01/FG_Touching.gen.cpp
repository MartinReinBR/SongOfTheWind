// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "gp3_team01/Public/FG_Touching.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFG_Touching() {}
// Cross Module References
	GP3_TEAM01_API UEnum* Z_Construct_UEnum_gp3_team01_EFG_TouchingState();
	UPackage* Z_Construct_UPackage__Script_gp3_team01();
// End Cross Module References
	static UEnum* EFG_TouchingState_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_gp3_team01_EFG_TouchingState, Z_Construct_UPackage__Script_gp3_team01(), TEXT("EFG_TouchingState"));
		}
		return Singleton;
	}
	template<> GP3_TEAM01_API UEnum* StaticEnum<EFG_TouchingState>()
	{
		return EFG_TouchingState_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EFG_TouchingState(EFG_TouchingState_StaticEnum, TEXT("/Script/gp3_team01"), TEXT("EFG_TouchingState"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_gp3_team01_EFG_TouchingState_Hash() { return 2369961075U; }
	UEnum* Z_Construct_UEnum_gp3_team01_EFG_TouchingState()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_gp3_team01();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EFG_TouchingState"), 0, Get_Z_Construct_UEnum_gp3_team01_EFG_TouchingState_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "StartedTouching", (int64)StartedTouching },
				{ "StillTouching", (int64)StillTouching },
				{ "StoppedTouching", (int64)StoppedTouching },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "ModuleRelativePath", "Public/FG_Touching.h" },
				{ "StartedTouching.DisplayName", "Started Touching" },
				{ "StartedTouching.Name", "StartedTouching" },
				{ "StillTouching.DisplayName", "Still Touching" },
				{ "StillTouching.Name", "StillTouching" },
				{ "StoppedTouching.DisplayName", "Stopped Touching" },
				{ "StoppedTouching.Name", "StoppedTouching" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_gp3_team01,
				nullptr,
				"EFG_TouchingState",
				"EFG_TouchingState",
				Enumerators,
				UE_ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				EEnumFlags::None,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::Regular,
				METADATA_PARAMS(Enum_MetaDataParams, UE_ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
