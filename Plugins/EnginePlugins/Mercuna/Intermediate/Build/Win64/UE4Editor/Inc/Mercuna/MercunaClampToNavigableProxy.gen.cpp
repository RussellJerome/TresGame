// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Public/MercunaClampToNavigableProxy.h"
PRAGMA_DISABLE_OPTIMIZATION
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMercunaClampToNavigableProxy() {}
// Cross Module References
	MERCUNA_API UFunction* Z_Construct_UFunction_UMercunaClampToNavigableProxy_MercunaClampToNavigable();
	MERCUNA_API UClass* Z_Construct_UClass_UMercunaClampToNavigableProxy();
	MERCUNA_API UClass* Z_Construct_UClass_UMercunaClampToNavigableProxy_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintAsyncActionBase();
	UPackage* Z_Construct_UPackage__Script_Mercuna();
	MERCUNA_API UFunction* Z_Construct_UDelegateFunction_Mercuna_MercunaClampToNavigableResult__DelegateSignature();
// End Cross Module References
	void UMercunaClampToNavigableProxy::StaticRegisterNativesUMercunaClampToNavigableProxy()
	{
		UClass* Class = UMercunaClampToNavigableProxy::StaticClass();
		static const TNameNativePtrPair<ANSICHAR> AnsiFuncs[] = {
			{ "MercunaClampToNavigable", (Native)&UMercunaClampToNavigableProxy::execMercunaClampToNavigable },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, AnsiFuncs, ARRAY_COUNT(AnsiFuncs));
	}
	UFunction* Z_Construct_UFunction_UMercunaClampToNavigableProxy_MercunaClampToNavigable()
	{
		struct MercunaClampToNavigableProxy_eventMercunaClampToNavigable_Parms
		{
			UObject* WorldContextObject;
			FVector Position;
			float NavigationRadius;
			float SearchRadius;
			UMercunaClampToNavigableProxy* ReturnValue;
		};
		UObject* Outer = Z_Construct_UClass_UMercunaClampToNavigableProxy();
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("MercunaClampToNavigable"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), nullptr, (EFunctionFlags)0x04822401, 65535, sizeof(MercunaClampToNavigableProxy_eventMercunaClampToNavigable_Parms));
			UProperty* NewProp_ReturnValue = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("ReturnValue"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(ReturnValue, MercunaClampToNavigableProxy_eventMercunaClampToNavigable_Parms), 0x0010000000000580, Z_Construct_UClass_UMercunaClampToNavigableProxy_NoRegister());
			UProperty* NewProp_SearchRadius = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("SearchRadius"), RF_Public|RF_Transient|RF_MarkAsNative) UFloatProperty(CPP_PROPERTY_BASE(SearchRadius, MercunaClampToNavigableProxy_eventMercunaClampToNavigable_Parms), 0x0010000000000080);
			UProperty* NewProp_NavigationRadius = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("NavigationRadius"), RF_Public|RF_Transient|RF_MarkAsNative) UFloatProperty(CPP_PROPERTY_BASE(NavigationRadius, MercunaClampToNavigableProxy_eventMercunaClampToNavigable_Parms), 0x0010000000000080);
			UProperty* NewProp_Position = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("Position"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(CPP_PROPERTY_BASE(Position, MercunaClampToNavigableProxy_eventMercunaClampToNavigable_Parms), 0x0010000000000080, Z_Construct_UScriptStruct_FVector());
			UProperty* NewProp_WorldContextObject = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("WorldContextObject"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(WorldContextObject, MercunaClampToNavigableProxy_eventMercunaClampToNavigable_Parms), 0x0010000000000080, Z_Construct_UClass_UObject_NoRegister());
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Public/MercunaClampToNavigableProxy.h"));
#endif
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UMercunaClampToNavigableProxy_NoRegister()
	{
		return UMercunaClampToNavigableProxy::StaticClass();
	}
	UClass* Z_Construct_UClass_UMercunaClampToNavigableProxy()
	{
		static UClass* OuterClass = NULL;
		if (!OuterClass)
		{
			Z_Construct_UClass_UBlueprintAsyncActionBase();
			Z_Construct_UPackage__Script_Mercuna();
			OuterClass = UMercunaClampToNavigableProxy::StaticClass();
			if (!(OuterClass->ClassFlags & CLASS_Constructed))
			{
				UObjectForceRegistration(OuterClass);
				OuterClass->ClassFlags |= (EClassFlags)0x20880080u;

				OuterClass->LinkChild(Z_Construct_UFunction_UMercunaClampToNavigableProxy_MercunaClampToNavigable());

				UProperty* NewProp_OnFailure = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("OnFailure"), RF_Public|RF_Transient|RF_MarkAsNative) UMulticastDelegateProperty(CPP_PROPERTY_BASE(OnFailure, UMercunaClampToNavigableProxy), 0x0010000010080000, Z_Construct_UDelegateFunction_Mercuna_MercunaClampToNavigableResult__DelegateSignature());
				UProperty* NewProp_OnSuccess = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("OnSuccess"), RF_Public|RF_Transient|RF_MarkAsNative) UMulticastDelegateProperty(CPP_PROPERTY_BASE(OnSuccess, UMercunaClampToNavigableProxy), 0x0010000010080000, Z_Construct_UDelegateFunction_Mercuna_MercunaClampToNavigableResult__DelegateSignature());
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_UMercunaClampToNavigableProxy_MercunaClampToNavigable(), "MercunaClampToNavigable"); // 3270171756
				static TCppClassTypeInfo<TCppClassTypeTraits<UMercunaClampToNavigableProxy> > StaticCppClassTypeInfo;
				OuterClass->SetCppTypeInfo(&StaticCppClassTypeInfo);
				OuterClass->StaticLink();
#if WITH_METADATA
				UMetaData* MetaData = OuterClass->GetOutermost()->GetMetaData();
				MetaData->SetValue(OuterClass, TEXT("IncludePath"), TEXT("MercunaClampToNavigableProxy.h"));
				MetaData->SetValue(OuterClass, TEXT("ModuleRelativePath"), TEXT("Public/MercunaClampToNavigableProxy.h"));
				MetaData->SetValue(NewProp_OnFailure, TEXT("ModuleRelativePath"), TEXT("Public/MercunaClampToNavigableProxy.h"));
				MetaData->SetValue(NewProp_OnSuccess, TEXT("ModuleRelativePath"), TEXT("Public/MercunaClampToNavigableProxy.h"));
#endif
			}
		}
		check(OuterClass->GetClass());
		return OuterClass;
	}
	IMPLEMENT_CLASS(UMercunaClampToNavigableProxy, 423631397);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UMercunaClampToNavigableProxy(Z_Construct_UClass_UMercunaClampToNavigableProxy, &UMercunaClampToNavigableProxy::StaticClass, TEXT("/Script/Mercuna"), TEXT("UMercunaClampToNavigableProxy"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMercunaClampToNavigableProxy);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
PRAGMA_ENABLE_OPTIMIZATION
