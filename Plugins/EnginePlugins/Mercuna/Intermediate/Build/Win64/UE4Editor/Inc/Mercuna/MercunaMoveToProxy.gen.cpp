// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Public/MercunaMoveToProxy.h"
PRAGMA_DISABLE_OPTIMIZATION
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMercunaMoveToProxy() {}
// Cross Module References
	MERCUNA_API UFunction* Z_Construct_UFunction_UMercunaMoveToProxy_MercunaMoveToActor();
	MERCUNA_API UClass* Z_Construct_UClass_UMercunaMoveToProxy();
	MERCUNA_API UClass* Z_Construct_UClass_UMercunaMoveToProxy_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_APawn_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	MERCUNA_API UFunction* Z_Construct_UFunction_UMercunaMoveToProxy_MercunaMoveToLocation();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	MERCUNA_API UFunction* Z_Construct_UFunction_UMercunaMoveToProxy_OnMoveComplete();
	MERCUNA_API UEnum* Z_Construct_UEnum_Mercuna_EMercunaMoveResult();
	AIMODULE_API UScriptStruct* Z_Construct_UScriptStruct_FAIRequestID();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintAsyncActionBase();
	UPackage* Z_Construct_UPackage__Script_Mercuna();
	MERCUNA_API UFunction* Z_Construct_UDelegateFunction_Mercuna_MercunaNavigationResult__DelegateSignature();
// End Cross Module References
	void UMercunaMoveToProxy::StaticRegisterNativesUMercunaMoveToProxy()
	{
		UClass* Class = UMercunaMoveToProxy::StaticClass();
		static const TNameNativePtrPair<ANSICHAR> AnsiFuncs[] = {
			{ "MercunaMoveToActor", (Native)&UMercunaMoveToProxy::execMercunaMoveToActor },
			{ "MercunaMoveToLocation", (Native)&UMercunaMoveToProxy::execMercunaMoveToLocation },
			{ "OnMoveComplete", (Native)&UMercunaMoveToProxy::execOnMoveComplete },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, AnsiFuncs, ARRAY_COUNT(AnsiFuncs));
	}
	UFunction* Z_Construct_UFunction_UMercunaMoveToProxy_MercunaMoveToActor()
	{
		struct MercunaMoveToProxy_eventMercunaMoveToActor_Parms
		{
			UObject* WorldContextObject;
			APawn* Pawn;
			AActor* Actor;
			float EndDistance;
			float Speed;
			bool UsePartialPath;
			UMercunaMoveToProxy* ReturnValue;
		};
		UObject* Outer = Z_Construct_UClass_UMercunaMoveToProxy();
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("MercunaMoveToActor"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), nullptr, (EFunctionFlags)0x04022401, 65535, sizeof(MercunaMoveToProxy_eventMercunaMoveToActor_Parms));
			UProperty* NewProp_ReturnValue = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("ReturnValue"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(ReturnValue, MercunaMoveToProxy_eventMercunaMoveToActor_Parms), 0x0010000000000580, Z_Construct_UClass_UMercunaMoveToProxy_NoRegister());
			CPP_BOOL_PROPERTY_BITMASK_STRUCT(UsePartialPath, MercunaMoveToProxy_eventMercunaMoveToActor_Parms);
			UProperty* NewProp_UsePartialPath = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("UsePartialPath"), RF_Public|RF_Transient|RF_MarkAsNative) UBoolProperty(FObjectInitializer(), EC_CppProperty, CPP_BOOL_PROPERTY_OFFSET(UsePartialPath, MercunaMoveToProxy_eventMercunaMoveToActor_Parms), 0x0010000000000080, CPP_BOOL_PROPERTY_BITMASK(UsePartialPath, MercunaMoveToProxy_eventMercunaMoveToActor_Parms), sizeof(bool), true);
			UProperty* NewProp_Speed = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("Speed"), RF_Public|RF_Transient|RF_MarkAsNative) UFloatProperty(CPP_PROPERTY_BASE(Speed, MercunaMoveToProxy_eventMercunaMoveToActor_Parms), 0x0010000000000080);
			UProperty* NewProp_EndDistance = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("EndDistance"), RF_Public|RF_Transient|RF_MarkAsNative) UFloatProperty(CPP_PROPERTY_BASE(EndDistance, MercunaMoveToProxy_eventMercunaMoveToActor_Parms), 0x0010000000000080);
			UProperty* NewProp_Actor = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("Actor"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(Actor, MercunaMoveToProxy_eventMercunaMoveToActor_Parms), 0x0010000000000080, Z_Construct_UClass_AActor_NoRegister());
			UProperty* NewProp_Pawn = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("Pawn"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(Pawn, MercunaMoveToProxy_eventMercunaMoveToActor_Parms), 0x0010000000000080, Z_Construct_UClass_APawn_NoRegister());
			UProperty* NewProp_WorldContextObject = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("WorldContextObject"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(WorldContextObject, MercunaMoveToProxy_eventMercunaMoveToActor_Parms), 0x0010000000000080, Z_Construct_UClass_UObject_NoRegister());
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Public/MercunaMoveToProxy.h"));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UMercunaMoveToProxy_MercunaMoveToLocation()
	{
		struct MercunaMoveToProxy_eventMercunaMoveToLocation_Parms
		{
			UObject* WorldContextObject;
			APawn* Pawn;
			FVector Destination;
			float EndDistance;
			float Speed;
			bool UsePartialPath;
			UMercunaMoveToProxy* ReturnValue;
		};
		UObject* Outer = Z_Construct_UClass_UMercunaMoveToProxy();
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("MercunaMoveToLocation"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), nullptr, (EFunctionFlags)0x04C22401, 65535, sizeof(MercunaMoveToProxy_eventMercunaMoveToLocation_Parms));
			UProperty* NewProp_ReturnValue = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("ReturnValue"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(ReturnValue, MercunaMoveToProxy_eventMercunaMoveToLocation_Parms), 0x0010000000000580, Z_Construct_UClass_UMercunaMoveToProxy_NoRegister());
			CPP_BOOL_PROPERTY_BITMASK_STRUCT(UsePartialPath, MercunaMoveToProxy_eventMercunaMoveToLocation_Parms);
			UProperty* NewProp_UsePartialPath = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("UsePartialPath"), RF_Public|RF_Transient|RF_MarkAsNative) UBoolProperty(FObjectInitializer(), EC_CppProperty, CPP_BOOL_PROPERTY_OFFSET(UsePartialPath, MercunaMoveToProxy_eventMercunaMoveToLocation_Parms), 0x0010000000000080, CPP_BOOL_PROPERTY_BITMASK(UsePartialPath, MercunaMoveToProxy_eventMercunaMoveToLocation_Parms), sizeof(bool), true);
			UProperty* NewProp_Speed = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("Speed"), RF_Public|RF_Transient|RF_MarkAsNative) UFloatProperty(CPP_PROPERTY_BASE(Speed, MercunaMoveToProxy_eventMercunaMoveToLocation_Parms), 0x0010000000000080);
			UProperty* NewProp_EndDistance = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("EndDistance"), RF_Public|RF_Transient|RF_MarkAsNative) UFloatProperty(CPP_PROPERTY_BASE(EndDistance, MercunaMoveToProxy_eventMercunaMoveToLocation_Parms), 0x0010000000000080);
			UProperty* NewProp_Destination = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("Destination"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(CPP_PROPERTY_BASE(Destination, MercunaMoveToProxy_eventMercunaMoveToLocation_Parms), 0x0010000008000182, Z_Construct_UScriptStruct_FVector());
			UProperty* NewProp_Pawn = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("Pawn"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(Pawn, MercunaMoveToProxy_eventMercunaMoveToLocation_Parms), 0x0010000000000080, Z_Construct_UClass_APawn_NoRegister());
			UProperty* NewProp_WorldContextObject = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("WorldContextObject"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(WorldContextObject, MercunaMoveToProxy_eventMercunaMoveToLocation_Parms), 0x0010000000000080, Z_Construct_UClass_UObject_NoRegister());
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Public/MercunaMoveToProxy.h"));
			MetaData->SetValue(NewProp_Destination, TEXT("NativeConst"), TEXT(""));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UMercunaMoveToProxy_OnMoveComplete()
	{
		struct MercunaMoveToProxy_eventOnMoveComplete_Parms
		{
			FAIRequestID RequestID;
			TEnumAsByte<EMercunaMoveResult::Type> Result;
		};
		UObject* Outer = Z_Construct_UClass_UMercunaMoveToProxy();
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("OnMoveComplete"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), nullptr, (EFunctionFlags)0x00040401, 65535, sizeof(MercunaMoveToProxy_eventOnMoveComplete_Parms));
			UProperty* NewProp_Result = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("Result"), RF_Public|RF_Transient|RF_MarkAsNative) UByteProperty(CPP_PROPERTY_BASE(Result, MercunaMoveToProxy_eventOnMoveComplete_Parms), 0x0010000000000080, Z_Construct_UEnum_Mercuna_EMercunaMoveResult());
			UProperty* NewProp_RequestID = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("RequestID"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(CPP_PROPERTY_BASE(RequestID, MercunaMoveToProxy_eventOnMoveComplete_Parms), 0x0010000000000080, Z_Construct_UScriptStruct_FAIRequestID());
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Public/MercunaMoveToProxy.h"));
#endif
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UMercunaMoveToProxy_NoRegister()
	{
		return UMercunaMoveToProxy::StaticClass();
	}
	UClass* Z_Construct_UClass_UMercunaMoveToProxy()
	{
		static UClass* OuterClass = NULL;
		if (!OuterClass)
		{
			Z_Construct_UClass_UBlueprintAsyncActionBase();
			Z_Construct_UPackage__Script_Mercuna();
			OuterClass = UMercunaMoveToProxy::StaticClass();
			if (!(OuterClass->ClassFlags & CLASS_Constructed))
			{
				UObjectForceRegistration(OuterClass);
				OuterClass->ClassFlags |= (EClassFlags)0x20880080u;

				OuterClass->LinkChild(Z_Construct_UFunction_UMercunaMoveToProxy_MercunaMoveToActor());
				OuterClass->LinkChild(Z_Construct_UFunction_UMercunaMoveToProxy_MercunaMoveToLocation());
				OuterClass->LinkChild(Z_Construct_UFunction_UMercunaMoveToProxy_OnMoveComplete());

				UProperty* NewProp_OnFailure = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("OnFailure"), RF_Public|RF_Transient|RF_MarkAsNative) UMulticastDelegateProperty(CPP_PROPERTY_BASE(OnFailure, UMercunaMoveToProxy), 0x0010000010080000, Z_Construct_UDelegateFunction_Mercuna_MercunaNavigationResult__DelegateSignature());
				UProperty* NewProp_OnSuccess = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("OnSuccess"), RF_Public|RF_Transient|RF_MarkAsNative) UMulticastDelegateProperty(CPP_PROPERTY_BASE(OnSuccess, UMercunaMoveToProxy), 0x0010000010080000, Z_Construct_UDelegateFunction_Mercuna_MercunaNavigationResult__DelegateSignature());
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_UMercunaMoveToProxy_MercunaMoveToActor(), "MercunaMoveToActor"); // 1865668866
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_UMercunaMoveToProxy_MercunaMoveToLocation(), "MercunaMoveToLocation"); // 2572413144
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_UMercunaMoveToProxy_OnMoveComplete(), "OnMoveComplete"); // 1875613745
				static TCppClassTypeInfo<TCppClassTypeTraits<UMercunaMoveToProxy> > StaticCppClassTypeInfo;
				OuterClass->SetCppTypeInfo(&StaticCppClassTypeInfo);
				OuterClass->StaticLink();
#if WITH_METADATA
				UMetaData* MetaData = OuterClass->GetOutermost()->GetMetaData();
				MetaData->SetValue(OuterClass, TEXT("IncludePath"), TEXT("MercunaMoveToProxy.h"));
				MetaData->SetValue(OuterClass, TEXT("ModuleRelativePath"), TEXT("Public/MercunaMoveToProxy.h"));
				MetaData->SetValue(NewProp_OnFailure, TEXT("ModuleRelativePath"), TEXT("Public/MercunaMoveToProxy.h"));
				MetaData->SetValue(NewProp_OnSuccess, TEXT("ModuleRelativePath"), TEXT("Public/MercunaMoveToProxy.h"));
#endif
			}
		}
		check(OuterClass->GetClass());
		return OuterClass;
	}
	IMPLEMENT_CLASS(UMercunaMoveToProxy, 2467280343);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UMercunaMoveToProxy(Z_Construct_UClass_UMercunaMoveToProxy, &UMercunaMoveToProxy::StaticClass, TEXT("/Script/Mercuna"), TEXT("UMercunaMoveToProxy"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMercunaMoveToProxy);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
PRAGMA_ENABLE_OPTIMIZATION
