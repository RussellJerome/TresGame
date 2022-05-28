// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Public/MercunaRaycastProxy.h"
PRAGMA_DISABLE_OPTIMIZATION
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMercunaRaycastProxy() {}
// Cross Module References
	MERCUNA_API UFunction* Z_Construct_UFunction_UMercunaRaycastProxy_MercunaRaycast();
	MERCUNA_API UClass* Z_Construct_UClass_UMercunaRaycastProxy();
	MERCUNA_API UClass* Z_Construct_UClass_UMercunaRaycastProxy_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintAsyncActionBase();
	UPackage* Z_Construct_UPackage__Script_Mercuna();
	MERCUNA_API UFunction* Z_Construct_UDelegateFunction_Mercuna_MercunaRaycastResult__DelegateSignature();
// End Cross Module References
	void UMercunaRaycastProxy::StaticRegisterNativesUMercunaRaycastProxy()
	{
		UClass* Class = UMercunaRaycastProxy::StaticClass();
		static const TNameNativePtrPair<ANSICHAR> AnsiFuncs[] = {
			{ "MercunaRaycast", (Native)&UMercunaRaycastProxy::execMercunaRaycast },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, AnsiFuncs, ARRAY_COUNT(AnsiFuncs));
	}
	UFunction* Z_Construct_UFunction_UMercunaRaycastProxy_MercunaRaycast()
	{
		struct MercunaRaycastProxy_eventMercunaRaycast_Parms
		{
			UObject* WorldContextObject;
			FVector Start;
			FVector End;
			float NavigationRadius;
			UMercunaRaycastProxy* ReturnValue;
		};
		UObject* Outer = Z_Construct_UClass_UMercunaRaycastProxy();
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("MercunaRaycast"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), nullptr, (EFunctionFlags)0x04822401, 65535, sizeof(MercunaRaycastProxy_eventMercunaRaycast_Parms));
			UProperty* NewProp_ReturnValue = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("ReturnValue"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(ReturnValue, MercunaRaycastProxy_eventMercunaRaycast_Parms), 0x0010000000000580, Z_Construct_UClass_UMercunaRaycastProxy_NoRegister());
			UProperty* NewProp_NavigationRadius = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("NavigationRadius"), RF_Public|RF_Transient|RF_MarkAsNative) UFloatProperty(CPP_PROPERTY_BASE(NavigationRadius, MercunaRaycastProxy_eventMercunaRaycast_Parms), 0x0010000000000080);
			UProperty* NewProp_End = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("End"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(CPP_PROPERTY_BASE(End, MercunaRaycastProxy_eventMercunaRaycast_Parms), 0x0010000000000080, Z_Construct_UScriptStruct_FVector());
			UProperty* NewProp_Start = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("Start"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(CPP_PROPERTY_BASE(Start, MercunaRaycastProxy_eventMercunaRaycast_Parms), 0x0010000000000080, Z_Construct_UScriptStruct_FVector());
			UProperty* NewProp_WorldContextObject = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("WorldContextObject"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(WorldContextObject, MercunaRaycastProxy_eventMercunaRaycast_Parms), 0x0010000000000080, Z_Construct_UClass_UObject_NoRegister());
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Public/MercunaRaycastProxy.h"));
#endif
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UMercunaRaycastProxy_NoRegister()
	{
		return UMercunaRaycastProxy::StaticClass();
	}
	UClass* Z_Construct_UClass_UMercunaRaycastProxy()
	{
		static UClass* OuterClass = NULL;
		if (!OuterClass)
		{
			Z_Construct_UClass_UBlueprintAsyncActionBase();
			Z_Construct_UPackage__Script_Mercuna();
			OuterClass = UMercunaRaycastProxy::StaticClass();
			if (!(OuterClass->ClassFlags & CLASS_Constructed))
			{
				UObjectForceRegistration(OuterClass);
				OuterClass->ClassFlags |= (EClassFlags)0x20880080u;

				OuterClass->LinkChild(Z_Construct_UFunction_UMercunaRaycastProxy_MercunaRaycast());

				UProperty* NewProp_OnNoHit = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("OnNoHit"), RF_Public|RF_Transient|RF_MarkAsNative) UMulticastDelegateProperty(CPP_PROPERTY_BASE(OnNoHit, UMercunaRaycastProxy), 0x0010000010080000, Z_Construct_UDelegateFunction_Mercuna_MercunaRaycastResult__DelegateSignature());
				UProperty* NewProp_OnHit = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("OnHit"), RF_Public|RF_Transient|RF_MarkAsNative) UMulticastDelegateProperty(CPP_PROPERTY_BASE(OnHit, UMercunaRaycastProxy), 0x0010000010080000, Z_Construct_UDelegateFunction_Mercuna_MercunaRaycastResult__DelegateSignature());
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_UMercunaRaycastProxy_MercunaRaycast(), "MercunaRaycast"); // 2795433852
				static TCppClassTypeInfo<TCppClassTypeTraits<UMercunaRaycastProxy> > StaticCppClassTypeInfo;
				OuterClass->SetCppTypeInfo(&StaticCppClassTypeInfo);
				OuterClass->StaticLink();
#if WITH_METADATA
				UMetaData* MetaData = OuterClass->GetOutermost()->GetMetaData();
				MetaData->SetValue(OuterClass, TEXT("IncludePath"), TEXT("MercunaRaycastProxy.h"));
				MetaData->SetValue(OuterClass, TEXT("ModuleRelativePath"), TEXT("Public/MercunaRaycastProxy.h"));
				MetaData->SetValue(NewProp_OnNoHit, TEXT("ModuleRelativePath"), TEXT("Public/MercunaRaycastProxy.h"));
				MetaData->SetValue(NewProp_OnHit, TEXT("ModuleRelativePath"), TEXT("Public/MercunaRaycastProxy.h"));
#endif
			}
		}
		check(OuterClass->GetClass());
		return OuterClass;
	}
	IMPLEMENT_CLASS(UMercunaRaycastProxy, 716132077);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UMercunaRaycastProxy(Z_Construct_UClass_UMercunaRaycastProxy, &UMercunaRaycastProxy::StaticClass, TEXT("/Script/Mercuna"), TEXT("UMercunaRaycastProxy"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMercunaRaycastProxy);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
PRAGMA_ENABLE_OPTIMIZATION
