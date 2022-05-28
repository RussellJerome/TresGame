// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Public/MercunaTrackActorProxy.h"
PRAGMA_DISABLE_OPTIMIZATION
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMercunaTrackActorProxy() {}
// Cross Module References
	MERCUNA_API UFunction* Z_Construct_UFunction_UMercunaTrackActorProxy_MercunaTrackActor();
	MERCUNA_API UClass* Z_Construct_UClass_UMercunaTrackActorProxy();
	MERCUNA_API UClass* Z_Construct_UClass_UMercunaTrackActorProxy_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_APawn_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	MERCUNA_API UFunction* Z_Construct_UFunction_UMercunaTrackActorProxy_OnMoveComplete();
	MERCUNA_API UEnum* Z_Construct_UEnum_Mercuna_EMercunaMoveResult();
	AIMODULE_API UScriptStruct* Z_Construct_UScriptStruct_FAIRequestID();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintAsyncActionBase();
	UPackage* Z_Construct_UPackage__Script_Mercuna();
	MERCUNA_API UFunction* Z_Construct_UDelegateFunction_Mercuna_MercunaNavigationResult__DelegateSignature();
// End Cross Module References
	void UMercunaTrackActorProxy::StaticRegisterNativesUMercunaTrackActorProxy()
	{
		UClass* Class = UMercunaTrackActorProxy::StaticClass();
		static const TNameNativePtrPair<ANSICHAR> AnsiFuncs[] = {
			{ "MercunaTrackActor", (Native)&UMercunaTrackActorProxy::execMercunaTrackActor },
			{ "OnMoveComplete", (Native)&UMercunaTrackActorProxy::execOnMoveComplete },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, AnsiFuncs, ARRAY_COUNT(AnsiFuncs));
	}
	UFunction* Z_Construct_UFunction_UMercunaTrackActorProxy_MercunaTrackActor()
	{
		struct MercunaTrackActorProxy_eventMercunaTrackActor_Parms
		{
			UObject* WorldContextObject;
			APawn* Pawn;
			AActor* Actor;
			float Distance;
			float Speed;
			UMercunaTrackActorProxy* ReturnValue;
		};
		UObject* Outer = Z_Construct_UClass_UMercunaTrackActorProxy();
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("MercunaTrackActor"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), nullptr, (EFunctionFlags)0x04022401, 65535, sizeof(MercunaTrackActorProxy_eventMercunaTrackActor_Parms));
			UProperty* NewProp_ReturnValue = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("ReturnValue"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(ReturnValue, MercunaTrackActorProxy_eventMercunaTrackActor_Parms), 0x0010000000000580, Z_Construct_UClass_UMercunaTrackActorProxy_NoRegister());
			UProperty* NewProp_Speed = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("Speed"), RF_Public|RF_Transient|RF_MarkAsNative) UFloatProperty(CPP_PROPERTY_BASE(Speed, MercunaTrackActorProxy_eventMercunaTrackActor_Parms), 0x0010000000000080);
			UProperty* NewProp_Distance = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("Distance"), RF_Public|RF_Transient|RF_MarkAsNative) UFloatProperty(CPP_PROPERTY_BASE(Distance, MercunaTrackActorProxy_eventMercunaTrackActor_Parms), 0x0010000000000080);
			UProperty* NewProp_Actor = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("Actor"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(Actor, MercunaTrackActorProxy_eventMercunaTrackActor_Parms), 0x0010000000000080, Z_Construct_UClass_AActor_NoRegister());
			UProperty* NewProp_Pawn = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("Pawn"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(Pawn, MercunaTrackActorProxy_eventMercunaTrackActor_Parms), 0x0010000000000080, Z_Construct_UClass_APawn_NoRegister());
			UProperty* NewProp_WorldContextObject = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("WorldContextObject"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(WorldContextObject, MercunaTrackActorProxy_eventMercunaTrackActor_Parms), 0x0010000000000080, Z_Construct_UClass_UObject_NoRegister());
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Public/MercunaTrackActorProxy.h"));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UMercunaTrackActorProxy_OnMoveComplete()
	{
		struct MercunaTrackActorProxy_eventOnMoveComplete_Parms
		{
			FAIRequestID RequestID;
			TEnumAsByte<EMercunaMoveResult::Type> Result;
		};
		UObject* Outer = Z_Construct_UClass_UMercunaTrackActorProxy();
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("OnMoveComplete"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), nullptr, (EFunctionFlags)0x00040401, 65535, sizeof(MercunaTrackActorProxy_eventOnMoveComplete_Parms));
			UProperty* NewProp_Result = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("Result"), RF_Public|RF_Transient|RF_MarkAsNative) UByteProperty(CPP_PROPERTY_BASE(Result, MercunaTrackActorProxy_eventOnMoveComplete_Parms), 0x0010000000000080, Z_Construct_UEnum_Mercuna_EMercunaMoveResult());
			UProperty* NewProp_RequestID = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("RequestID"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(CPP_PROPERTY_BASE(RequestID, MercunaTrackActorProxy_eventOnMoveComplete_Parms), 0x0010000000000080, Z_Construct_UScriptStruct_FAIRequestID());
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Public/MercunaTrackActorProxy.h"));
#endif
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UMercunaTrackActorProxy_NoRegister()
	{
		return UMercunaTrackActorProxy::StaticClass();
	}
	UClass* Z_Construct_UClass_UMercunaTrackActorProxy()
	{
		static UClass* OuterClass = NULL;
		if (!OuterClass)
		{
			Z_Construct_UClass_UBlueprintAsyncActionBase();
			Z_Construct_UPackage__Script_Mercuna();
			OuterClass = UMercunaTrackActorProxy::StaticClass();
			if (!(OuterClass->ClassFlags & CLASS_Constructed))
			{
				UObjectForceRegistration(OuterClass);
				OuterClass->ClassFlags |= (EClassFlags)0x20880080u;

				OuterClass->LinkChild(Z_Construct_UFunction_UMercunaTrackActorProxy_MercunaTrackActor());
				OuterClass->LinkChild(Z_Construct_UFunction_UMercunaTrackActorProxy_OnMoveComplete());

				UProperty* NewProp_OnFailure = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("OnFailure"), RF_Public|RF_Transient|RF_MarkAsNative) UMulticastDelegateProperty(CPP_PROPERTY_BASE(OnFailure, UMercunaTrackActorProxy), 0x0010000010080000, Z_Construct_UDelegateFunction_Mercuna_MercunaNavigationResult__DelegateSignature());
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_UMercunaTrackActorProxy_MercunaTrackActor(), "MercunaTrackActor"); // 2617215651
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_UMercunaTrackActorProxy_OnMoveComplete(), "OnMoveComplete"); // 845229380
				static TCppClassTypeInfo<TCppClassTypeTraits<UMercunaTrackActorProxy> > StaticCppClassTypeInfo;
				OuterClass->SetCppTypeInfo(&StaticCppClassTypeInfo);
				OuterClass->StaticLink();
#if WITH_METADATA
				UMetaData* MetaData = OuterClass->GetOutermost()->GetMetaData();
				MetaData->SetValue(OuterClass, TEXT("IncludePath"), TEXT("MercunaTrackActorProxy.h"));
				MetaData->SetValue(OuterClass, TEXT("ModuleRelativePath"), TEXT("Public/MercunaTrackActorProxy.h"));
				MetaData->SetValue(NewProp_OnFailure, TEXT("ModuleRelativePath"), TEXT("Public/MercunaTrackActorProxy.h"));
#endif
			}
		}
		check(OuterClass->GetClass());
		return OuterClass;
	}
	IMPLEMENT_CLASS(UMercunaTrackActorProxy, 2142423086);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UMercunaTrackActorProxy(Z_Construct_UClass_UMercunaTrackActorProxy, &UMercunaTrackActorProxy::StaticClass, TEXT("/Script/Mercuna"), TEXT("UMercunaTrackActorProxy"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMercunaTrackActorProxy);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
PRAGMA_ENABLE_OPTIMIZATION
