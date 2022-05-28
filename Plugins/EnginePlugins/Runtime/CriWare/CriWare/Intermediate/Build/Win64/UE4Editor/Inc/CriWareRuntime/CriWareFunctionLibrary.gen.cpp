// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Public/CriWareFunctionLibrary.h"
PRAGMA_DISABLE_OPTIMIZATION
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCriWareFunctionLibrary() {}
// Cross Module References
	CRIWARERUNTIME_API UFunction* Z_Construct_UFunction_UCriWareFunctionLibrary_SetGameVariableByName();
	CRIWARERUNTIME_API UClass* Z_Construct_UClass_UCriWareFunctionLibrary();
	CRIWARERUNTIME_API UFunction* Z_Construct_UFunction_UCriWareFunctionLibrary_SetGlobalLabelToSelectorByName();
	CRIWARERUNTIME_API UClass* Z_Construct_UClass_UCriWareFunctionLibrary_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	UPackage* Z_Construct_UPackage__Script_CriWareRuntime();
// End Cross Module References
	void UCriWareFunctionLibrary::StaticRegisterNativesUCriWareFunctionLibrary()
	{
		UClass* Class = UCriWareFunctionLibrary::StaticClass();
		static const TNameNativePtrPair<ANSICHAR> AnsiFuncs[] = {
			{ "SetGameVariableByName", (Native)&UCriWareFunctionLibrary::execSetGameVariableByName },
			{ "SetGlobalLabelToSelectorByName", (Native)&UCriWareFunctionLibrary::execSetGlobalLabelToSelectorByName },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, AnsiFuncs, ARRAY_COUNT(AnsiFuncs));
	}
	UFunction* Z_Construct_UFunction_UCriWareFunctionLibrary_SetGameVariableByName()
	{
		struct CriWareFunctionLibrary_eventSetGameVariableByName_Parms
		{
			FString GameVariableName;
			float Value;
		};
		UObject* Outer = Z_Construct_UClass_UCriWareFunctionLibrary();
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("SetGameVariableByName"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), nullptr, (EFunctionFlags)0x04022401, 65535, sizeof(CriWareFunctionLibrary_eventSetGameVariableByName_Parms));
			UProperty* NewProp_Value = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("Value"), RF_Public|RF_Transient|RF_MarkAsNative) UFloatProperty(CPP_PROPERTY_BASE(Value, CriWareFunctionLibrary_eventSetGameVariableByName_Parms), 0x0010000000000080);
			UProperty* NewProp_GameVariableName = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("GameVariableName"), RF_Public|RF_Transient|RF_MarkAsNative) UStrProperty(CPP_PROPERTY_BASE(GameVariableName, CriWareFunctionLibrary_eventSetGameVariableByName_Parms), 0x0010000000000080);
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Public/CriWareFunctionLibrary.h"));
			MetaData->SetValue(NewProp_GameVariableName, TEXT("NativeConst"), TEXT(""));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UCriWareFunctionLibrary_SetGlobalLabelToSelectorByName()
	{
		struct CriWareFunctionLibrary_eventSetGlobalLabelToSelectorByName_Parms
		{
			FString SelectorName;
			FString LabelName;
		};
		UObject* Outer = Z_Construct_UClass_UCriWareFunctionLibrary();
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("SetGlobalLabelToSelectorByName"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), nullptr, (EFunctionFlags)0x04022401, 65535, sizeof(CriWareFunctionLibrary_eventSetGlobalLabelToSelectorByName_Parms));
			UProperty* NewProp_LabelName = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("LabelName"), RF_Public|RF_Transient|RF_MarkAsNative) UStrProperty(CPP_PROPERTY_BASE(LabelName, CriWareFunctionLibrary_eventSetGlobalLabelToSelectorByName_Parms), 0x0010000000000080);
			UProperty* NewProp_SelectorName = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("SelectorName"), RF_Public|RF_Transient|RF_MarkAsNative) UStrProperty(CPP_PROPERTY_BASE(SelectorName, CriWareFunctionLibrary_eventSetGlobalLabelToSelectorByName_Parms), 0x0010000000000080);
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Public/CriWareFunctionLibrary.h"));
			MetaData->SetValue(NewProp_LabelName, TEXT("NativeConst"), TEXT(""));
			MetaData->SetValue(NewProp_SelectorName, TEXT("NativeConst"), TEXT(""));
#endif
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UCriWareFunctionLibrary_NoRegister()
	{
		return UCriWareFunctionLibrary::StaticClass();
	}
	UClass* Z_Construct_UClass_UCriWareFunctionLibrary()
	{
		static UClass* OuterClass = NULL;
		if (!OuterClass)
		{
			Z_Construct_UClass_UBlueprintFunctionLibrary();
			Z_Construct_UPackage__Script_CriWareRuntime();
			OuterClass = UCriWareFunctionLibrary::StaticClass();
			if (!(OuterClass->ClassFlags & CLASS_Constructed))
			{
				UObjectForceRegistration(OuterClass);
				OuterClass->ClassFlags |= (EClassFlags)0x20100080u;

				OuterClass->LinkChild(Z_Construct_UFunction_UCriWareFunctionLibrary_SetGameVariableByName());
				OuterClass->LinkChild(Z_Construct_UFunction_UCriWareFunctionLibrary_SetGlobalLabelToSelectorByName());

				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_UCriWareFunctionLibrary_SetGameVariableByName(), "SetGameVariableByName"); // 4284576766
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_UCriWareFunctionLibrary_SetGlobalLabelToSelectorByName(), "SetGlobalLabelToSelectorByName"); // 3410334027
				static TCppClassTypeInfo<TCppClassTypeTraits<UCriWareFunctionLibrary> > StaticCppClassTypeInfo;
				OuterClass->SetCppTypeInfo(&StaticCppClassTypeInfo);
				OuterClass->StaticLink();
#if WITH_METADATA
				UMetaData* MetaData = OuterClass->GetOutermost()->GetMetaData();
				MetaData->SetValue(OuterClass, TEXT("IncludePath"), TEXT("CriWareFunctionLibrary.h"));
				MetaData->SetValue(OuterClass, TEXT("ModuleRelativePath"), TEXT("Public/CriWareFunctionLibrary.h"));
#endif
			}
		}
		check(OuterClass->GetClass());
		return OuterClass;
	}
	IMPLEMENT_CLASS(UCriWareFunctionLibrary, 3602729720);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UCriWareFunctionLibrary(Z_Construct_UClass_UCriWareFunctionLibrary, &UCriWareFunctionLibrary::StaticClass, TEXT("/Script/CriWareRuntime"), TEXT("UCriWareFunctionLibrary"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCriWareFunctionLibrary);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
PRAGMA_ENABLE_OPTIMIZATION
