// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Public/AtomCategory.h"
PRAGMA_DISABLE_OPTIMIZATION
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAtomCategory() {}
// Cross Module References
	CRIWARERUNTIME_API UFunction* Z_Construct_UFunction_UAtomCategory_GetVolumeByName();
	CRIWARERUNTIME_API UClass* Z_Construct_UClass_UAtomCategory();
	CRIWARERUNTIME_API UFunction* Z_Construct_UFunction_UAtomCategory_IsPausedByName();
	CRIWARERUNTIME_API UFunction* Z_Construct_UFunction_UAtomCategory_PauseByName();
	CRIWARERUNTIME_API UFunction* Z_Construct_UFunction_UAtomCategory_SetAisacControlByName();
	CRIWARERUNTIME_API UFunction* Z_Construct_UFunction_UAtomCategory_SetVolumeByName();
	CRIWARERUNTIME_API UClass* Z_Construct_UClass_UAtomCategory_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	UPackage* Z_Construct_UPackage__Script_CriWareRuntime();
// End Cross Module References
	void UAtomCategory::StaticRegisterNativesUAtomCategory()
	{
		UClass* Class = UAtomCategory::StaticClass();
		static const TNameNativePtrPair<ANSICHAR> AnsiFuncs[] = {
			{ "GetVolumeByName", (Native)&UAtomCategory::execGetVolumeByName },
			{ "IsPausedByName", (Native)&UAtomCategory::execIsPausedByName },
			{ "PauseByName", (Native)&UAtomCategory::execPauseByName },
			{ "SetAisacControlByName", (Native)&UAtomCategory::execSetAisacControlByName },
			{ "SetVolumeByName", (Native)&UAtomCategory::execSetVolumeByName },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, AnsiFuncs, ARRAY_COUNT(AnsiFuncs));
	}
	UFunction* Z_Construct_UFunction_UAtomCategory_GetVolumeByName()
	{
		struct AtomCategory_eventGetVolumeByName_Parms
		{
			FString CategoryName;
			float ReturnValue;
		};
		UObject* Outer = Z_Construct_UClass_UAtomCategory();
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("GetVolumeByName"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), nullptr, (EFunctionFlags)0x04022401, 65535, sizeof(AtomCategory_eventGetVolumeByName_Parms));
			UProperty* NewProp_ReturnValue = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("ReturnValue"), RF_Public|RF_Transient|RF_MarkAsNative) UFloatProperty(CPP_PROPERTY_BASE(ReturnValue, AtomCategory_eventGetVolumeByName_Parms), 0x0010000000000580);
			UProperty* NewProp_CategoryName = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("CategoryName"), RF_Public|RF_Transient|RF_MarkAsNative) UStrProperty(CPP_PROPERTY_BASE(CategoryName, AtomCategory_eventGetVolumeByName_Parms), 0x0010000000000080);
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Public/AtomCategory.h"));
			MetaData->SetValue(NewProp_CategoryName, TEXT("NativeConst"), TEXT(""));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UAtomCategory_IsPausedByName()
	{
		struct AtomCategory_eventIsPausedByName_Parms
		{
			FString CategoryName;
			bool ReturnValue;
		};
		UObject* Outer = Z_Construct_UClass_UAtomCategory();
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("IsPausedByName"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), nullptr, (EFunctionFlags)0x04022401, 65535, sizeof(AtomCategory_eventIsPausedByName_Parms));
			CPP_BOOL_PROPERTY_BITMASK_STRUCT(ReturnValue, AtomCategory_eventIsPausedByName_Parms);
			UProperty* NewProp_ReturnValue = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("ReturnValue"), RF_Public|RF_Transient|RF_MarkAsNative) UBoolProperty(FObjectInitializer(), EC_CppProperty, CPP_BOOL_PROPERTY_OFFSET(ReturnValue, AtomCategory_eventIsPausedByName_Parms), 0x0010000000000580, CPP_BOOL_PROPERTY_BITMASK(ReturnValue, AtomCategory_eventIsPausedByName_Parms), sizeof(bool), true);
			UProperty* NewProp_CategoryName = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("CategoryName"), RF_Public|RF_Transient|RF_MarkAsNative) UStrProperty(CPP_PROPERTY_BASE(CategoryName, AtomCategory_eventIsPausedByName_Parms), 0x0010000000000080);
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Public/AtomCategory.h"));
			MetaData->SetValue(NewProp_CategoryName, TEXT("NativeConst"), TEXT(""));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UAtomCategory_PauseByName()
	{
		struct AtomCategory_eventPauseByName_Parms
		{
			FString CategoryName;
			bool bPause;
		};
		UObject* Outer = Z_Construct_UClass_UAtomCategory();
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("PauseByName"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), nullptr, (EFunctionFlags)0x04022401, 65535, sizeof(AtomCategory_eventPauseByName_Parms));
			CPP_BOOL_PROPERTY_BITMASK_STRUCT(bPause, AtomCategory_eventPauseByName_Parms);
			UProperty* NewProp_bPause = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("bPause"), RF_Public|RF_Transient|RF_MarkAsNative) UBoolProperty(FObjectInitializer(), EC_CppProperty, CPP_BOOL_PROPERTY_OFFSET(bPause, AtomCategory_eventPauseByName_Parms), 0x0010000000000080, CPP_BOOL_PROPERTY_BITMASK(bPause, AtomCategory_eventPauseByName_Parms), sizeof(bool), true);
			UProperty* NewProp_CategoryName = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("CategoryName"), RF_Public|RF_Transient|RF_MarkAsNative) UStrProperty(CPP_PROPERTY_BASE(CategoryName, AtomCategory_eventPauseByName_Parms), 0x0010000000000080);
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Public/AtomCategory.h"));
			MetaData->SetValue(NewProp_CategoryName, TEXT("NativeConst"), TEXT(""));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UAtomCategory_SetAisacControlByName()
	{
		struct AtomCategory_eventSetAisacControlByName_Parms
		{
			FString CategoryName;
			FString AisacName;
			float Value;
		};
		UObject* Outer = Z_Construct_UClass_UAtomCategory();
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("SetAisacControlByName"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), nullptr, (EFunctionFlags)0x04022401, 65535, sizeof(AtomCategory_eventSetAisacControlByName_Parms));
			UProperty* NewProp_Value = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("Value"), RF_Public|RF_Transient|RF_MarkAsNative) UFloatProperty(CPP_PROPERTY_BASE(Value, AtomCategory_eventSetAisacControlByName_Parms), 0x0010000000000080);
			UProperty* NewProp_AisacName = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("AisacName"), RF_Public|RF_Transient|RF_MarkAsNative) UStrProperty(CPP_PROPERTY_BASE(AisacName, AtomCategory_eventSetAisacControlByName_Parms), 0x0010000000000080);
			UProperty* NewProp_CategoryName = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("CategoryName"), RF_Public|RF_Transient|RF_MarkAsNative) UStrProperty(CPP_PROPERTY_BASE(CategoryName, AtomCategory_eventSetAisacControlByName_Parms), 0x0010000000000080);
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Public/AtomCategory.h"));
			MetaData->SetValue(NewProp_AisacName, TEXT("NativeConst"), TEXT(""));
			MetaData->SetValue(NewProp_CategoryName, TEXT("NativeConst"), TEXT(""));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UAtomCategory_SetVolumeByName()
	{
		struct AtomCategory_eventSetVolumeByName_Parms
		{
			FString CategoryName;
			float Volume;
		};
		UObject* Outer = Z_Construct_UClass_UAtomCategory();
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("SetVolumeByName"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), nullptr, (EFunctionFlags)0x04022401, 65535, sizeof(AtomCategory_eventSetVolumeByName_Parms));
			UProperty* NewProp_Volume = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("Volume"), RF_Public|RF_Transient|RF_MarkAsNative) UFloatProperty(CPP_PROPERTY_BASE(Volume, AtomCategory_eventSetVolumeByName_Parms), 0x0010000000000080);
			UProperty* NewProp_CategoryName = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("CategoryName"), RF_Public|RF_Transient|RF_MarkAsNative) UStrProperty(CPP_PROPERTY_BASE(CategoryName, AtomCategory_eventSetVolumeByName_Parms), 0x0010000000000080);
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Public/AtomCategory.h"));
			MetaData->SetValue(NewProp_CategoryName, TEXT("NativeConst"), TEXT(""));
#endif
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UAtomCategory_NoRegister()
	{
		return UAtomCategory::StaticClass();
	}
	UClass* Z_Construct_UClass_UAtomCategory()
	{
		static UClass* OuterClass = NULL;
		if (!OuterClass)
		{
			Z_Construct_UClass_UBlueprintFunctionLibrary();
			Z_Construct_UPackage__Script_CriWareRuntime();
			OuterClass = UAtomCategory::StaticClass();
			if (!(OuterClass->ClassFlags & CLASS_Constructed))
			{
				UObjectForceRegistration(OuterClass);
				OuterClass->ClassFlags |= (EClassFlags)0x20100080u;

				OuterClass->LinkChild(Z_Construct_UFunction_UAtomCategory_GetVolumeByName());
				OuterClass->LinkChild(Z_Construct_UFunction_UAtomCategory_IsPausedByName());
				OuterClass->LinkChild(Z_Construct_UFunction_UAtomCategory_PauseByName());
				OuterClass->LinkChild(Z_Construct_UFunction_UAtomCategory_SetAisacControlByName());
				OuterClass->LinkChild(Z_Construct_UFunction_UAtomCategory_SetVolumeByName());

				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_UAtomCategory_GetVolumeByName(), "GetVolumeByName"); // 2090675821
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_UAtomCategory_IsPausedByName(), "IsPausedByName"); // 451264424
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_UAtomCategory_PauseByName(), "PauseByName"); // 2245907301
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_UAtomCategory_SetAisacControlByName(), "SetAisacControlByName"); // 2527566533
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_UAtomCategory_SetVolumeByName(), "SetVolumeByName"); // 502556226
				static TCppClassTypeInfo<TCppClassTypeTraits<UAtomCategory> > StaticCppClassTypeInfo;
				OuterClass->SetCppTypeInfo(&StaticCppClassTypeInfo);
				OuterClass->StaticLink();
#if WITH_METADATA
				UMetaData* MetaData = OuterClass->GetOutermost()->GetMetaData();
				MetaData->SetValue(OuterClass, TEXT("IncludePath"), TEXT("AtomCategory.h"));
				MetaData->SetValue(OuterClass, TEXT("ModuleRelativePath"), TEXT("Public/AtomCategory.h"));
#endif
			}
		}
		check(OuterClass->GetClass());
		return OuterClass;
	}
	IMPLEMENT_CLASS(UAtomCategory, 2829905755);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UAtomCategory(Z_Construct_UClass_UAtomCategory, &UAtomCategory::StaticClass, TEXT("/Script/CriWareRuntime"), TEXT("UAtomCategory"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAtomCategory);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
PRAGMA_ENABLE_OPTIMIZATION
