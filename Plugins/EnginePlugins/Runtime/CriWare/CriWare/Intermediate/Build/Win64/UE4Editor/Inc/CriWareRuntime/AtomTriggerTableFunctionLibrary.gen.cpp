// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Public/AtomTriggerTableFunctionLibrary.h"
PRAGMA_DISABLE_OPTIMIZATION
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAtomTriggerTableFunctionLibrary() {}
// Cross Module References
	CRIWARERUNTIME_API UFunction* Z_Construct_UFunction_UAtomTriggerTableFunctionLibrary_GetDataTableRowFromName();
	CRIWARERUNTIME_API UClass* Z_Construct_UClass_UAtomTriggerTableFunctionLibrary();
	CRIWARERUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FAtomTriggerRow();
	ENGINE_API UClass* Z_Construct_UClass_UDataTable_NoRegister();
	CRIWARERUNTIME_API UClass* Z_Construct_UClass_UAtomTriggerTableFunctionLibrary_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	UPackage* Z_Construct_UPackage__Script_CriWareRuntime();
// End Cross Module References
	void UAtomTriggerTableFunctionLibrary::StaticRegisterNativesUAtomTriggerTableFunctionLibrary()
	{
		UClass* Class = UAtomTriggerTableFunctionLibrary::StaticClass();
		static const TNameNativePtrPair<ANSICHAR> AnsiFuncs[] = {
			{ "GetDataTableRowFromName", (Native)&UAtomTriggerTableFunctionLibrary::execGetDataTableRowFromName },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, AnsiFuncs, ARRAY_COUNT(AnsiFuncs));
	}
	UFunction* Z_Construct_UFunction_UAtomTriggerTableFunctionLibrary_GetDataTableRowFromName()
	{
		struct AtomTriggerTableFunctionLibrary_eventGetDataTableRowFromName_Parms
		{
			UDataTable* Table;
			FName RowName;
			FAtomTriggerRow OutRow;
			bool ReturnValue;
		};
		UObject* Outer = Z_Construct_UClass_UAtomTriggerTableFunctionLibrary();
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("GetDataTableRowFromName"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), nullptr, (EFunctionFlags)0x04422401, 65535, sizeof(AtomTriggerTableFunctionLibrary_eventGetDataTableRowFromName_Parms));
			CPP_BOOL_PROPERTY_BITMASK_STRUCT(ReturnValue, AtomTriggerTableFunctionLibrary_eventGetDataTableRowFromName_Parms);
			UProperty* NewProp_ReturnValue = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("ReturnValue"), RF_Public|RF_Transient|RF_MarkAsNative) UBoolProperty(FObjectInitializer(), EC_CppProperty, CPP_BOOL_PROPERTY_OFFSET(ReturnValue, AtomTriggerTableFunctionLibrary_eventGetDataTableRowFromName_Parms), 0x0010000000000580, CPP_BOOL_PROPERTY_BITMASK(ReturnValue, AtomTriggerTableFunctionLibrary_eventGetDataTableRowFromName_Parms), sizeof(bool), true);
			UProperty* NewProp_OutRow = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("OutRow"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(CPP_PROPERTY_BASE(OutRow, AtomTriggerTableFunctionLibrary_eventGetDataTableRowFromName_Parms), 0x0010000000000180, Z_Construct_UScriptStruct_FAtomTriggerRow());
			UProperty* NewProp_RowName = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("RowName"), RF_Public|RF_Transient|RF_MarkAsNative) UNameProperty(CPP_PROPERTY_BASE(RowName, AtomTriggerTableFunctionLibrary_eventGetDataTableRowFromName_Parms), 0x0010000000000080);
			UProperty* NewProp_Table = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("Table"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(Table, AtomTriggerTableFunctionLibrary_eventGetDataTableRowFromName_Parms), 0x0010000000000080, Z_Construct_UClass_UDataTable_NoRegister());
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Public/AtomTriggerTableFunctionLibrary.h"));
#endif
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UAtomTriggerTableFunctionLibrary_NoRegister()
	{
		return UAtomTriggerTableFunctionLibrary::StaticClass();
	}
	UClass* Z_Construct_UClass_UAtomTriggerTableFunctionLibrary()
	{
		static UClass* OuterClass = NULL;
		if (!OuterClass)
		{
			Z_Construct_UClass_UBlueprintFunctionLibrary();
			Z_Construct_UPackage__Script_CriWareRuntime();
			OuterClass = UAtomTriggerTableFunctionLibrary::StaticClass();
			if (!(OuterClass->ClassFlags & CLASS_Constructed))
			{
				UObjectForceRegistration(OuterClass);
				OuterClass->ClassFlags |= (EClassFlags)0x20100080u;

				OuterClass->LinkChild(Z_Construct_UFunction_UAtomTriggerTableFunctionLibrary_GetDataTableRowFromName());

				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_UAtomTriggerTableFunctionLibrary_GetDataTableRowFromName(), "GetDataTableRowFromName"); // 2368492293
				static TCppClassTypeInfo<TCppClassTypeTraits<UAtomTriggerTableFunctionLibrary> > StaticCppClassTypeInfo;
				OuterClass->SetCppTypeInfo(&StaticCppClassTypeInfo);
				OuterClass->StaticLink();
#if WITH_METADATA
				UMetaData* MetaData = OuterClass->GetOutermost()->GetMetaData();
				MetaData->SetValue(OuterClass, TEXT("IncludePath"), TEXT("AtomTriggerTableFunctionLibrary.h"));
				MetaData->SetValue(OuterClass, TEXT("ModuleRelativePath"), TEXT("Public/AtomTriggerTableFunctionLibrary.h"));
#endif
			}
		}
		check(OuterClass->GetClass());
		return OuterClass;
	}
	IMPLEMENT_CLASS(UAtomTriggerTableFunctionLibrary, 1683724971);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UAtomTriggerTableFunctionLibrary(Z_Construct_UClass_UAtomTriggerTableFunctionLibrary, &UAtomTriggerTableFunctionLibrary::StaticClass, TEXT("/Script/CriWareRuntime"), TEXT("UAtomTriggerTableFunctionLibrary"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAtomTriggerTableFunctionLibrary);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
PRAGMA_ENABLE_OPTIMIZATION
