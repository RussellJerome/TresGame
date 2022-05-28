// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Public/MercunaPath.h"
PRAGMA_DISABLE_OPTIMIZATION
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMercunaPath() {}
// Cross Module References
	MERCUNA_API UFunction* Z_Construct_UFunction_UMercunaPath_GetNumPoints();
	MERCUNA_API UClass* Z_Construct_UClass_UMercunaPath();
	MERCUNA_API UFunction* Z_Construct_UFunction_UMercunaPath_GetPathLength();
	MERCUNA_API UFunction* Z_Construct_UFunction_UMercunaPath_GetPoint();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	MERCUNA_API UFunction* Z_Construct_UFunction_UMercunaPath_IsPartial();
	MERCUNA_API UFunction* Z_Construct_UFunction_UMercunaPath_IsReady();
	MERCUNA_API UFunction* Z_Construct_UFunction_UMercunaPath_IsValid();
	MERCUNA_API UClass* Z_Construct_UClass_UMercunaPath_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_Mercuna();
	MERCUNA_API UFunction* Z_Construct_UDelegateFunction_Mercuna_OnMercunaPathUpdated__DelegateSignature();
// End Cross Module References
	void UMercunaPath::StaticRegisterNativesUMercunaPath()
	{
		UClass* Class = UMercunaPath::StaticClass();
		static const TNameNativePtrPair<ANSICHAR> AnsiFuncs[] = {
			{ "GetNumPoints", (Native)&UMercunaPath::execGetNumPoints },
			{ "GetPathLength", (Native)&UMercunaPath::execGetPathLength },
			{ "GetPoint", (Native)&UMercunaPath::execGetPoint },
			{ "IsPartial", (Native)&UMercunaPath::execIsPartial },
			{ "IsReady", (Native)&UMercunaPath::execIsReady },
			{ "IsValid", (Native)&UMercunaPath::execIsValid },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, AnsiFuncs, ARRAY_COUNT(AnsiFuncs));
	}
	UFunction* Z_Construct_UFunction_UMercunaPath_GetNumPoints()
	{
		struct MercunaPath_eventGetNumPoints_Parms
		{
			int32 ReturnValue;
		};
		UObject* Outer = Z_Construct_UClass_UMercunaPath();
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("GetNumPoints"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), nullptr, (EFunctionFlags)0x54020401, 65535, sizeof(MercunaPath_eventGetNumPoints_Parms));
			UProperty* NewProp_ReturnValue = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("ReturnValue"), RF_Public|RF_Transient|RF_MarkAsNative) UIntProperty(CPP_PROPERTY_BASE(ReturnValue, MercunaPath_eventGetNumPoints_Parms), 0x0010000000000580);
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Public/MercunaPath.h"));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UMercunaPath_GetPathLength()
	{
		struct MercunaPath_eventGetPathLength_Parms
		{
			float ReturnValue;
		};
		UObject* Outer = Z_Construct_UClass_UMercunaPath();
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("GetPathLength"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), nullptr, (EFunctionFlags)0x54020401, 65535, sizeof(MercunaPath_eventGetPathLength_Parms));
			UProperty* NewProp_ReturnValue = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("ReturnValue"), RF_Public|RF_Transient|RF_MarkAsNative) UFloatProperty(CPP_PROPERTY_BASE(ReturnValue, MercunaPath_eventGetPathLength_Parms), 0x0010000000000580);
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Public/MercunaPath.h"));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UMercunaPath_GetPoint()
	{
		struct MercunaPath_eventGetPoint_Parms
		{
			int32 I;
			FVector ReturnValue;
		};
		UObject* Outer = Z_Construct_UClass_UMercunaPath();
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("GetPoint"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), nullptr, (EFunctionFlags)0x54820401, 65535, sizeof(MercunaPath_eventGetPoint_Parms));
			UProperty* NewProp_ReturnValue = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("ReturnValue"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(CPP_PROPERTY_BASE(ReturnValue, MercunaPath_eventGetPoint_Parms), 0x0010000000000580, Z_Construct_UScriptStruct_FVector());
			UProperty* NewProp_I = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("I"), RF_Public|RF_Transient|RF_MarkAsNative) UIntProperty(CPP_PROPERTY_BASE(I, MercunaPath_eventGetPoint_Parms), 0x0010000000000080);
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Public/MercunaPath.h"));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UMercunaPath_IsPartial()
	{
		struct MercunaPath_eventIsPartial_Parms
		{
			bool ReturnValue;
		};
		UObject* Outer = Z_Construct_UClass_UMercunaPath();
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("IsPartial"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), nullptr, (EFunctionFlags)0x54020401, 65535, sizeof(MercunaPath_eventIsPartial_Parms));
			CPP_BOOL_PROPERTY_BITMASK_STRUCT(ReturnValue, MercunaPath_eventIsPartial_Parms);
			UProperty* NewProp_ReturnValue = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("ReturnValue"), RF_Public|RF_Transient|RF_MarkAsNative) UBoolProperty(FObjectInitializer(), EC_CppProperty, CPP_BOOL_PROPERTY_OFFSET(ReturnValue, MercunaPath_eventIsPartial_Parms), 0x0010000000000580, CPP_BOOL_PROPERTY_BITMASK(ReturnValue, MercunaPath_eventIsPartial_Parms), sizeof(bool), true);
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Public/MercunaPath.h"));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UMercunaPath_IsReady()
	{
		struct MercunaPath_eventIsReady_Parms
		{
			bool ReturnValue;
		};
		UObject* Outer = Z_Construct_UClass_UMercunaPath();
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("IsReady"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), nullptr, (EFunctionFlags)0x54020401, 65535, sizeof(MercunaPath_eventIsReady_Parms));
			CPP_BOOL_PROPERTY_BITMASK_STRUCT(ReturnValue, MercunaPath_eventIsReady_Parms);
			UProperty* NewProp_ReturnValue = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("ReturnValue"), RF_Public|RF_Transient|RF_MarkAsNative) UBoolProperty(FObjectInitializer(), EC_CppProperty, CPP_BOOL_PROPERTY_OFFSET(ReturnValue, MercunaPath_eventIsReady_Parms), 0x0010000000000580, CPP_BOOL_PROPERTY_BITMASK(ReturnValue, MercunaPath_eventIsReady_Parms), sizeof(bool), true);
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Public/MercunaPath.h"));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UMercunaPath_IsValid()
	{
		struct MercunaPath_eventIsValid_Parms
		{
			bool ReturnValue;
		};
		UObject* Outer = Z_Construct_UClass_UMercunaPath();
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("IsValid"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), nullptr, (EFunctionFlags)0x54020401, 65535, sizeof(MercunaPath_eventIsValid_Parms));
			CPP_BOOL_PROPERTY_BITMASK_STRUCT(ReturnValue, MercunaPath_eventIsValid_Parms);
			UProperty* NewProp_ReturnValue = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("ReturnValue"), RF_Public|RF_Transient|RF_MarkAsNative) UBoolProperty(FObjectInitializer(), EC_CppProperty, CPP_BOOL_PROPERTY_OFFSET(ReturnValue, MercunaPath_eventIsValid_Parms), 0x0010000000000580, CPP_BOOL_PROPERTY_BITMASK(ReturnValue, MercunaPath_eventIsValid_Parms), sizeof(bool), true);
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Public/MercunaPath.h"));
#endif
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UMercunaPath_NoRegister()
	{
		return UMercunaPath::StaticClass();
	}
	UClass* Z_Construct_UClass_UMercunaPath()
	{
		static UClass* OuterClass = NULL;
		if (!OuterClass)
		{
			Z_Construct_UClass_UObject();
			Z_Construct_UPackage__Script_Mercuna();
			OuterClass = UMercunaPath::StaticClass();
			if (!(OuterClass->ClassFlags & CLASS_Constructed))
			{
				UObjectForceRegistration(OuterClass);
				OuterClass->ClassFlags |= (EClassFlags)0x20900080u;

				OuterClass->LinkChild(Z_Construct_UFunction_UMercunaPath_GetNumPoints());
				OuterClass->LinkChild(Z_Construct_UFunction_UMercunaPath_GetPathLength());
				OuterClass->LinkChild(Z_Construct_UFunction_UMercunaPath_GetPoint());
				OuterClass->LinkChild(Z_Construct_UFunction_UMercunaPath_IsPartial());
				OuterClass->LinkChild(Z_Construct_UFunction_UMercunaPath_IsReady());
				OuterClass->LinkChild(Z_Construct_UFunction_UMercunaPath_IsValid());

				UProperty* NewProp_PathUpdated = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("PathUpdated"), RF_Public|RF_Transient|RF_MarkAsNative) UMulticastDelegateProperty(CPP_PROPERTY_BASE(PathUpdated, UMercunaPath), 0x0010000010080000, Z_Construct_UDelegateFunction_Mercuna_OnMercunaPathUpdated__DelegateSignature());
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_UMercunaPath_GetNumPoints(), "GetNumPoints"); // 2416434496
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_UMercunaPath_GetPathLength(), "GetPathLength"); // 3361067388
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_UMercunaPath_GetPoint(), "GetPoint"); // 134924986
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_UMercunaPath_IsPartial(), "IsPartial"); // 248109697
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_UMercunaPath_IsReady(), "IsReady"); // 2007806761
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_UMercunaPath_IsValid(), "IsValid"); // 2662010598
				static TCppClassTypeInfo<TCppClassTypeTraits<UMercunaPath> > StaticCppClassTypeInfo;
				OuterClass->SetCppTypeInfo(&StaticCppClassTypeInfo);
				OuterClass->StaticLink();
#if WITH_METADATA
				UMetaData* MetaData = OuterClass->GetOutermost()->GetMetaData();
				MetaData->SetValue(OuterClass, TEXT("BlueprintType"), TEXT("true"));
				MetaData->SetValue(OuterClass, TEXT("IncludePath"), TEXT("MercunaPath.h"));
				MetaData->SetValue(OuterClass, TEXT("ModuleRelativePath"), TEXT("Public/MercunaPath.h"));
				MetaData->SetValue(NewProp_PathUpdated, TEXT("ModuleRelativePath"), TEXT("Public/MercunaPath.h"));
#endif
			}
		}
		check(OuterClass->GetClass());
		return OuterClass;
	}
	IMPLEMENT_CLASS(UMercunaPath, 672742969);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UMercunaPath(Z_Construct_UClass_UMercunaPath, &UMercunaPath::StaticClass, TEXT("/Script/Mercuna"), TEXT("UMercunaPath"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMercunaPath);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
PRAGMA_ENABLE_OPTIMIZATION
