// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "gp3_team01/Public/Player/FG_State.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFG_State() {}
// Cross Module References
	GP3_TEAM01_API UClass* Z_Construct_UClass_UFG_State_NoRegister();
	GP3_TEAM01_API UClass* Z_Construct_UClass_UFG_State();
	COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
	UPackage* Z_Construct_UPackage__Script_gp3_team01();
// End Cross Module References
	DEFINE_FUNCTION(IFG_State::execOnStateExit)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnStateExit_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(IFG_State::execOnStatePop)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnStatePop_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(IFG_State::execOnStateTick)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_DeltaTime);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->OnStateTick_Implementation(Z_Param_DeltaTime);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(IFG_State::execOnStatePush)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnStatePush_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(IFG_State::execOnStateEnter)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnStateEnter_Implementation();
		P_NATIVE_END;
	}
	void IFG_State::OnStateEnter()
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_OnStateEnter instead.");
	}
	void IFG_State::OnStateExit()
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_OnStateExit instead.");
	}
	void IFG_State::OnStatePop()
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_OnStatePop instead.");
	}
	void IFG_State::OnStatePush()
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_OnStatePush instead.");
	}
	bool IFG_State::OnStateTick(float DeltaTime)
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_OnStateTick instead.");
		FG_State_eventOnStateTick_Parms Parms;
		return Parms.ReturnValue;
	}
	void UFG_State::StaticRegisterNativesUFG_State()
	{
		UClass* Class = UFG_State::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnStateEnter", &IFG_State::execOnStateEnter },
			{ "OnStateExit", &IFG_State::execOnStateExit },
			{ "OnStatePop", &IFG_State::execOnStatePop },
			{ "OnStatePush", &IFG_State::execOnStatePush },
			{ "OnStateTick", &IFG_State::execOnStateTick },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UFG_State_OnStateEnter_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFG_State_OnStateEnter_Statics::Function_MetaDataParams[] = {
		{ "Comment", "// BP interface\n" },
		{ "ModuleRelativePath", "Public/Player/FG_State.h" },
		{ "ToolTip", "BP interface" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFG_State_OnStateEnter_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFG_State, nullptr, "OnStateEnter", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFG_State_OnStateEnter_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFG_State_OnStateEnter_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFG_State_OnStateEnter()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFG_State_OnStateEnter_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFG_State_OnStateExit_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFG_State_OnStateExit_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Player/FG_State.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFG_State_OnStateExit_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFG_State, nullptr, "OnStateExit", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFG_State_OnStateExit_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFG_State_OnStateExit_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFG_State_OnStateExit()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFG_State_OnStateExit_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFG_State_OnStatePop_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFG_State_OnStatePop_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Player/FG_State.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFG_State_OnStatePop_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFG_State, nullptr, "OnStatePop", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFG_State_OnStatePop_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFG_State_OnStatePop_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFG_State_OnStatePop()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFG_State_OnStatePop_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFG_State_OnStatePush_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFG_State_OnStatePush_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Player/FG_State.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFG_State_OnStatePush_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFG_State, nullptr, "OnStatePush", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFG_State_OnStatePush_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFG_State_OnStatePush_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFG_State_OnStatePush()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFG_State_OnStatePush_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFG_State_OnStateTick_Statics
	{
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DeltaTime;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UFG_State_OnStateTick_Statics::NewProp_DeltaTime = { "DeltaTime", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FG_State_eventOnStateTick_Parms, DeltaTime), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UFG_State_OnStateTick_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((FG_State_eventOnStateTick_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UFG_State_OnStateTick_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FG_State_eventOnStateTick_Parms), &Z_Construct_UFunction_UFG_State_OnStateTick_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFG_State_OnStateTick_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFG_State_OnStateTick_Statics::NewProp_DeltaTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFG_State_OnStateTick_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFG_State_OnStateTick_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Player/FG_State.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFG_State_OnStateTick_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFG_State, nullptr, "OnStateTick", nullptr, nullptr, sizeof(FG_State_eventOnStateTick_Parms), Z_Construct_UFunction_UFG_State_OnStateTick_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFG_State_OnStateTick_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFG_State_OnStateTick_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFG_State_OnStateTick_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFG_State_OnStateTick()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFG_State_OnStateTick_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UFG_State_NoRegister()
	{
		return UFG_State::StaticClass();
	}
	struct Z_Construct_UClass_UFG_State_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UFG_State_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterface,
		(UObject* (*)())Z_Construct_UPackage__Script_gp3_team01,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UFG_State_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UFG_State_OnStateEnter, "OnStateEnter" }, // 3179719671
		{ &Z_Construct_UFunction_UFG_State_OnStateExit, "OnStateExit" }, // 3449960783
		{ &Z_Construct_UFunction_UFG_State_OnStatePop, "OnStatePop" }, // 2955539713
		{ &Z_Construct_UFunction_UFG_State_OnStatePush, "OnStatePush" }, // 526063231
		{ &Z_Construct_UFunction_UFG_State_OnStateTick, "OnStateTick" }, // 568913139
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFG_State_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Player/FG_State.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UFG_State_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IFG_State>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UFG_State_Statics::ClassParams = {
		&UFG_State::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x000840A1u,
		METADATA_PARAMS(Z_Construct_UClass_UFG_State_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UFG_State_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UFG_State()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UFG_State_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UFG_State, 267163858);
	template<> GP3_TEAM01_API UClass* StaticClass<UFG_State>()
	{
		return UFG_State::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UFG_State(Z_Construct_UClass_UFG_State, &UFG_State::StaticClass, TEXT("/Script/gp3_team01"), TEXT("UFG_State"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UFG_State);
	static FName NAME_UFG_State_OnStateEnter = FName(TEXT("OnStateEnter"));
	void IFG_State::Execute_OnStateEnter(UObject* O)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UFG_State::StaticClass()));
		UFunction* const Func = O->FindFunction(NAME_UFG_State_OnStateEnter);
		if (Func)
		{
			O->ProcessEvent(Func, NULL);
		}
		else if (auto I = (IFG_State*)(O->GetNativeInterfaceAddress(UFG_State::StaticClass())))
		{
			I->OnStateEnter_Implementation();
		}
	}
	static FName NAME_UFG_State_OnStateExit = FName(TEXT("OnStateExit"));
	void IFG_State::Execute_OnStateExit(UObject* O)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UFG_State::StaticClass()));
		UFunction* const Func = O->FindFunction(NAME_UFG_State_OnStateExit);
		if (Func)
		{
			O->ProcessEvent(Func, NULL);
		}
		else if (auto I = (IFG_State*)(O->GetNativeInterfaceAddress(UFG_State::StaticClass())))
		{
			I->OnStateExit_Implementation();
		}
	}
	static FName NAME_UFG_State_OnStatePop = FName(TEXT("OnStatePop"));
	void IFG_State::Execute_OnStatePop(UObject* O)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UFG_State::StaticClass()));
		UFunction* const Func = O->FindFunction(NAME_UFG_State_OnStatePop);
		if (Func)
		{
			O->ProcessEvent(Func, NULL);
		}
		else if (auto I = (IFG_State*)(O->GetNativeInterfaceAddress(UFG_State::StaticClass())))
		{
			I->OnStatePop_Implementation();
		}
	}
	static FName NAME_UFG_State_OnStatePush = FName(TEXT("OnStatePush"));
	void IFG_State::Execute_OnStatePush(UObject* O)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UFG_State::StaticClass()));
		UFunction* const Func = O->FindFunction(NAME_UFG_State_OnStatePush);
		if (Func)
		{
			O->ProcessEvent(Func, NULL);
		}
		else if (auto I = (IFG_State*)(O->GetNativeInterfaceAddress(UFG_State::StaticClass())))
		{
			I->OnStatePush_Implementation();
		}
	}
	static FName NAME_UFG_State_OnStateTick = FName(TEXT("OnStateTick"));
	bool IFG_State::Execute_OnStateTick(UObject* O, float DeltaTime)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UFG_State::StaticClass()));
		FG_State_eventOnStateTick_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_UFG_State_OnStateTick);
		if (Func)
		{
			Parms.DeltaTime=DeltaTime;
			O->ProcessEvent(Func, &Parms);
		}
		else if (auto I = (IFG_State*)(O->GetNativeInterfaceAddress(UFG_State::StaticClass())))
		{
			Parms.ReturnValue = I->OnStateTick_Implementation(DeltaTime);
		}
		return Parms.ReturnValue;
	}
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
