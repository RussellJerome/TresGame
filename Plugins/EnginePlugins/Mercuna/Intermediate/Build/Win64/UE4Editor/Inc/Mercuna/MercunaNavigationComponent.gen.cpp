// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Public/MercunaNavigationComponent.h"
PRAGMA_DISABLE_OPTIMIZATION
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMercunaNavigationComponent() {}
// Cross Module References
	MERCUNA_API UFunction* Z_Construct_UDelegateFunction_UMercunaNavigationComponent_MercunaMoveComplete__DelegateSignature();
	MERCUNA_API UClass* Z_Construct_UClass_UMercunaNavigationComponent();
	MERCUNA_API UEnum* Z_Construct_UEnum_Mercuna_EMercunaMoveResult();
	AIMODULE_API UScriptStruct* Z_Construct_UScriptStruct_FAIRequestID();
	MERCUNA_API UFunction* Z_Construct_UFunction_UMercunaNavigationComponent_CancelLookAt();
	MERCUNA_API UFunction* Z_Construct_UFunction_UMercunaNavigationComponent_CancelMovement();
	MERCUNA_API UFunction* Z_Construct_UFunction_UMercunaNavigationComponent_CheckReachable();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FLatentActionInfo();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	MERCUNA_API UFunction* Z_Construct_UFunction_UMercunaNavigationComponent_ClearAvoidanceExclusions();
	MERCUNA_API UFunction* Z_Construct_UFunction_UMercunaNavigationComponent_Configure();
	MERCUNA_API UScriptStruct* Z_Construct_UScriptStruct_FMercunaNavigationConfiguration();
	MERCUNA_API UFunction* Z_Construct_UFunction_UMercunaNavigationComponent_ConfigureMovement();
	MERCUNA_API UFunction* Z_Construct_UFunction_UMercunaNavigationComponent_GetPathInfo();
	MERCUNA_API UFunction* Z_Construct_UFunction_UMercunaNavigationComponent_LookAt();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	MERCUNA_API UFunction* Z_Construct_UFunction_UMercunaNavigationComponent_MoveToActor();
	MERCUNA_API UFunction* Z_Construct_UFunction_UMercunaNavigationComponent_MoveToLocation();
	MERCUNA_API UFunction* Z_Construct_UFunction_UMercunaNavigationComponent_SetAvoidanceAgainst();
	MERCUNA_API UFunction* Z_Construct_UFunction_UMercunaNavigationComponent_Stop();
	MERCUNA_API UFunction* Z_Construct_UFunction_UMercunaNavigationComponent_TrackActor();
	MERCUNA_API UClass* Z_Construct_UClass_UMercunaNavigationComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	UPackage* Z_Construct_UPackage__Script_Mercuna();
// End Cross Module References
	UFunction* Z_Construct_UDelegateFunction_UMercunaNavigationComponent_MercunaMoveComplete__DelegateSignature()
	{
		struct MercunaNavigationComponent_eventMercunaMoveComplete_Parms
		{
			FAIRequestID RequestID;
			TEnumAsByte<EMercunaMoveResult::Type> Result;
		};
		UObject* Outer = Z_Construct_UClass_UMercunaNavigationComponent();
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("MercunaMoveComplete__DelegateSignature"), RF_Public|RF_Transient|RF_MarkAsNative) UDelegateFunction(FObjectInitializer(), nullptr, (EFunctionFlags)0x00130000, 65535, sizeof(MercunaNavigationComponent_eventMercunaMoveComplete_Parms));
			UProperty* NewProp_Result = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("Result"), RF_Public|RF_Transient|RF_MarkAsNative) UByteProperty(CPP_PROPERTY_BASE(Result, MercunaNavigationComponent_eventMercunaMoveComplete_Parms), 0x0010000000000082, Z_Construct_UEnum_Mercuna_EMercunaMoveResult());
			UProperty* NewProp_RequestID = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("RequestID"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(CPP_PROPERTY_BASE(RequestID, MercunaNavigationComponent_eventMercunaMoveComplete_Parms), 0x0010000000000080, Z_Construct_UScriptStruct_FAIRequestID());
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Public/MercunaNavigationComponent.h"));
			MetaData->SetValue(NewProp_Result, TEXT("NativeConst"), TEXT(""));
#endif
		}
		return ReturnFunction;
	}
	void UMercunaNavigationComponent::StaticRegisterNativesUMercunaNavigationComponent()
	{
		UClass* Class = UMercunaNavigationComponent::StaticClass();
		static const TNameNativePtrPair<ANSICHAR> AnsiFuncs[] = {
			{ "CancelLookAt", (Native)&UMercunaNavigationComponent::execCancelLookAt },
			{ "CancelMovement", (Native)&UMercunaNavigationComponent::execCancelMovement },
			{ "CheckReachable", (Native)&UMercunaNavigationComponent::execCheckReachable },
			{ "ClearAvoidanceExclusions", (Native)&UMercunaNavigationComponent::execClearAvoidanceExclusions },
			{ "Configure", (Native)&UMercunaNavigationComponent::execConfigure },
			{ "ConfigureMovement", (Native)&UMercunaNavigationComponent::execConfigureMovement },
			{ "GetPathInfo", (Native)&UMercunaNavigationComponent::execGetPathInfo },
			{ "LookAt", (Native)&UMercunaNavigationComponent::execLookAt },
			{ "MoveToActor", (Native)&UMercunaNavigationComponent::execMoveToActor },
			{ "MoveToLocation", (Native)&UMercunaNavigationComponent::execMoveToLocation },
			{ "SetAvoidanceAgainst", (Native)&UMercunaNavigationComponent::execSetAvoidanceAgainst },
			{ "Stop", (Native)&UMercunaNavigationComponent::execStop },
			{ "TrackActor", (Native)&UMercunaNavigationComponent::execTrackActor },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, AnsiFuncs, ARRAY_COUNT(AnsiFuncs));
	}
	UFunction* Z_Construct_UFunction_UMercunaNavigationComponent_CancelLookAt()
	{
		UObject* Outer = Z_Construct_UClass_UMercunaNavigationComponent();
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("CancelLookAt"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), nullptr, (EFunctionFlags)0x04020401, 65535);
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Public/MercunaNavigationComponent.h"));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UMercunaNavigationComponent_CancelMovement()
	{
		UObject* Outer = Z_Construct_UClass_UMercunaNavigationComponent();
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("CancelMovement"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), nullptr, (EFunctionFlags)0x04020401, 65535);
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Public/MercunaNavigationComponent.h"));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UMercunaNavigationComponent_CheckReachable()
	{
		struct MercunaNavigationComponent_eventCheckReachable_Parms
		{
			FVector Point;
			bool Success;
			UObject* WorldContextObject;
			FLatentActionInfo LatentInfo;
		};
		UObject* Outer = Z_Construct_UClass_UMercunaNavigationComponent();
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("CheckReachable"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), nullptr, (EFunctionFlags)0x04C20401, 65535, sizeof(MercunaNavigationComponent_eventCheckReachable_Parms));
			UProperty* NewProp_LatentInfo = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("LatentInfo"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(CPP_PROPERTY_BASE(LatentInfo, MercunaNavigationComponent_eventCheckReachable_Parms), 0x0010000000000080, Z_Construct_UScriptStruct_FLatentActionInfo());
			UProperty* NewProp_WorldContextObject = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("WorldContextObject"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(WorldContextObject, MercunaNavigationComponent_eventCheckReachable_Parms), 0x0010000000000080, Z_Construct_UClass_UObject_NoRegister());
			CPP_BOOL_PROPERTY_BITMASK_STRUCT(Success, MercunaNavigationComponent_eventCheckReachable_Parms);
			UProperty* NewProp_Success = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("Success"), RF_Public|RF_Transient|RF_MarkAsNative) UBoolProperty(FObjectInitializer(), EC_CppProperty, CPP_BOOL_PROPERTY_OFFSET(Success, MercunaNavigationComponent_eventCheckReachable_Parms), 0x0010000000000180, CPP_BOOL_PROPERTY_BITMASK(Success, MercunaNavigationComponent_eventCheckReachable_Parms), sizeof(bool), true);
			UProperty* NewProp_Point = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("Point"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(CPP_PROPERTY_BASE(Point, MercunaNavigationComponent_eventCheckReachable_Parms), 0x0010000000000080, Z_Construct_UScriptStruct_FVector());
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Public/MercunaNavigationComponent.h"));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UMercunaNavigationComponent_ClearAvoidanceExclusions()
	{
		UObject* Outer = Z_Construct_UClass_UMercunaNavigationComponent();
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("ClearAvoidanceExclusions"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), nullptr, (EFunctionFlags)0x04020401, 65535);
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Public/MercunaNavigationComponent.h"));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UMercunaNavigationComponent_Configure()
	{
		struct MercunaNavigationComponent_eventConfigure_Parms
		{
			FMercunaNavigationConfiguration NewConfiguration;
		};
		UObject* Outer = Z_Construct_UClass_UMercunaNavigationComponent();
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("Configure"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), nullptr, (EFunctionFlags)0x04420401, 65535, sizeof(MercunaNavigationComponent_eventConfigure_Parms));
			UProperty* NewProp_NewConfiguration = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("NewConfiguration"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(CPP_PROPERTY_BASE(NewConfiguration, MercunaNavigationComponent_eventConfigure_Parms), 0x0010000008000182, Z_Construct_UScriptStruct_FMercunaNavigationConfiguration());
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Public/MercunaNavigationComponent.h"));
			MetaData->SetValue(NewProp_NewConfiguration, TEXT("NativeConst"), TEXT(""));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UMercunaNavigationComponent_ConfigureMovement()
	{
		struct MercunaNavigationComponent_eventConfigureMovement_Parms
		{
			bool bUsePathfinding;
			bool bUseDynamicAvoidance;
		};
		UObject* Outer = Z_Construct_UClass_UMercunaNavigationComponent();
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("ConfigureMovement"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), nullptr, (EFunctionFlags)0x04020401, 65535, sizeof(MercunaNavigationComponent_eventConfigureMovement_Parms));
			CPP_BOOL_PROPERTY_BITMASK_STRUCT(bUseDynamicAvoidance, MercunaNavigationComponent_eventConfigureMovement_Parms);
			UProperty* NewProp_bUseDynamicAvoidance = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("bUseDynamicAvoidance"), RF_Public|RF_Transient|RF_MarkAsNative) UBoolProperty(FObjectInitializer(), EC_CppProperty, CPP_BOOL_PROPERTY_OFFSET(bUseDynamicAvoidance, MercunaNavigationComponent_eventConfigureMovement_Parms), 0x0010000000000080, CPP_BOOL_PROPERTY_BITMASK(bUseDynamicAvoidance, MercunaNavigationComponent_eventConfigureMovement_Parms), sizeof(bool), true);
			CPP_BOOL_PROPERTY_BITMASK_STRUCT(bUsePathfinding, MercunaNavigationComponent_eventConfigureMovement_Parms);
			UProperty* NewProp_bUsePathfinding = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("bUsePathfinding"), RF_Public|RF_Transient|RF_MarkAsNative) UBoolProperty(FObjectInitializer(), EC_CppProperty, CPP_BOOL_PROPERTY_OFFSET(bUsePathfinding, MercunaNavigationComponent_eventConfigureMovement_Parms), 0x0010000000000080, CPP_BOOL_PROPERTY_BITMASK(bUsePathfinding, MercunaNavigationComponent_eventConfigureMovement_Parms), sizeof(bool), true);
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Public/MercunaNavigationComponent.h"));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UMercunaNavigationComponent_GetPathInfo()
	{
		struct MercunaNavigationComponent_eventGetPathInfo_Parms
		{
			bool Valid;
			float DistanceToEnd;
			FVector NextPathPoint;
			bool bIsFinalPoint;
		};
		UObject* Outer = Z_Construct_UClass_UMercunaNavigationComponent();
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("GetPathInfo"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), nullptr, (EFunctionFlags)0x04C20401, 65535, sizeof(MercunaNavigationComponent_eventGetPathInfo_Parms));
			CPP_BOOL_PROPERTY_BITMASK_STRUCT(bIsFinalPoint, MercunaNavigationComponent_eventGetPathInfo_Parms);
			UProperty* NewProp_bIsFinalPoint = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("bIsFinalPoint"), RF_Public|RF_Transient|RF_MarkAsNative) UBoolProperty(FObjectInitializer(), EC_CppProperty, CPP_BOOL_PROPERTY_OFFSET(bIsFinalPoint, MercunaNavigationComponent_eventGetPathInfo_Parms), 0x0010000000000180, CPP_BOOL_PROPERTY_BITMASK(bIsFinalPoint, MercunaNavigationComponent_eventGetPathInfo_Parms), sizeof(bool), true);
			UProperty* NewProp_NextPathPoint = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("NextPathPoint"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(CPP_PROPERTY_BASE(NextPathPoint, MercunaNavigationComponent_eventGetPathInfo_Parms), 0x0010000000000180, Z_Construct_UScriptStruct_FVector());
			UProperty* NewProp_DistanceToEnd = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("DistanceToEnd"), RF_Public|RF_Transient|RF_MarkAsNative) UFloatProperty(CPP_PROPERTY_BASE(DistanceToEnd, MercunaNavigationComponent_eventGetPathInfo_Parms), 0x0010000000000180);
			CPP_BOOL_PROPERTY_BITMASK_STRUCT(Valid, MercunaNavigationComponent_eventGetPathInfo_Parms);
			UProperty* NewProp_Valid = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("Valid"), RF_Public|RF_Transient|RF_MarkAsNative) UBoolProperty(FObjectInitializer(), EC_CppProperty, CPP_BOOL_PROPERTY_OFFSET(Valid, MercunaNavigationComponent_eventGetPathInfo_Parms), 0x0010000000000180, CPP_BOOL_PROPERTY_BITMASK(Valid, MercunaNavigationComponent_eventGetPathInfo_Parms), sizeof(bool), true);
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Public/MercunaNavigationComponent.h"));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UMercunaNavigationComponent_LookAt()
	{
		struct MercunaNavigationComponent_eventLookAt_Parms
		{
			AActor* Actor;
			float MaxPitch;
		};
		UObject* Outer = Z_Construct_UClass_UMercunaNavigationComponent();
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("LookAt"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), nullptr, (EFunctionFlags)0x04020401, 65535, sizeof(MercunaNavigationComponent_eventLookAt_Parms));
			UProperty* NewProp_MaxPitch = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("MaxPitch"), RF_Public|RF_Transient|RF_MarkAsNative) UFloatProperty(CPP_PROPERTY_BASE(MaxPitch, MercunaNavigationComponent_eventLookAt_Parms), 0x0010000000000080);
			UProperty* NewProp_Actor = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("Actor"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(Actor, MercunaNavigationComponent_eventLookAt_Parms), 0x0010000000000080, Z_Construct_UClass_AActor_NoRegister());
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Public/MercunaNavigationComponent.h"));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UMercunaNavigationComponent_MoveToActor()
	{
		struct MercunaNavigationComponent_eventMoveToActor_Parms
		{
			AActor* Actor;
			float EndDistance;
			float Speed;
			bool UsePartialPath;
		};
		UObject* Outer = Z_Construct_UClass_UMercunaNavigationComponent();
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("MoveToActor"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), nullptr, (EFunctionFlags)0x04020401, 65535, sizeof(MercunaNavigationComponent_eventMoveToActor_Parms));
			CPP_BOOL_PROPERTY_BITMASK_STRUCT(UsePartialPath, MercunaNavigationComponent_eventMoveToActor_Parms);
			UProperty* NewProp_UsePartialPath = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("UsePartialPath"), RF_Public|RF_Transient|RF_MarkAsNative) UBoolProperty(FObjectInitializer(), EC_CppProperty, CPP_BOOL_PROPERTY_OFFSET(UsePartialPath, MercunaNavigationComponent_eventMoveToActor_Parms), 0x0010000000000080, CPP_BOOL_PROPERTY_BITMASK(UsePartialPath, MercunaNavigationComponent_eventMoveToActor_Parms), sizeof(bool), true);
			UProperty* NewProp_Speed = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("Speed"), RF_Public|RF_Transient|RF_MarkAsNative) UFloatProperty(CPP_PROPERTY_BASE(Speed, MercunaNavigationComponent_eventMoveToActor_Parms), 0x0010000000000080);
			UProperty* NewProp_EndDistance = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("EndDistance"), RF_Public|RF_Transient|RF_MarkAsNative) UFloatProperty(CPP_PROPERTY_BASE(EndDistance, MercunaNavigationComponent_eventMoveToActor_Parms), 0x0010000000000080);
			UProperty* NewProp_Actor = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("Actor"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(Actor, MercunaNavigationComponent_eventMoveToActor_Parms), 0x0010000000000080, Z_Construct_UClass_AActor_NoRegister());
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Public/MercunaNavigationComponent.h"));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UMercunaNavigationComponent_MoveToLocation()
	{
		struct MercunaNavigationComponent_eventMoveToLocation_Parms
		{
			FVector Destination;
			float EndDistance;
			float Speed;
			bool UsePartialPath;
		};
		UObject* Outer = Z_Construct_UClass_UMercunaNavigationComponent();
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("MoveToLocation"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), nullptr, (EFunctionFlags)0x04C20401, 65535, sizeof(MercunaNavigationComponent_eventMoveToLocation_Parms));
			CPP_BOOL_PROPERTY_BITMASK_STRUCT(UsePartialPath, MercunaNavigationComponent_eventMoveToLocation_Parms);
			UProperty* NewProp_UsePartialPath = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("UsePartialPath"), RF_Public|RF_Transient|RF_MarkAsNative) UBoolProperty(FObjectInitializer(), EC_CppProperty, CPP_BOOL_PROPERTY_OFFSET(UsePartialPath, MercunaNavigationComponent_eventMoveToLocation_Parms), 0x0010000000000080, CPP_BOOL_PROPERTY_BITMASK(UsePartialPath, MercunaNavigationComponent_eventMoveToLocation_Parms), sizeof(bool), true);
			UProperty* NewProp_Speed = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("Speed"), RF_Public|RF_Transient|RF_MarkAsNative) UFloatProperty(CPP_PROPERTY_BASE(Speed, MercunaNavigationComponent_eventMoveToLocation_Parms), 0x0010000000000080);
			UProperty* NewProp_EndDistance = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("EndDistance"), RF_Public|RF_Transient|RF_MarkAsNative) UFloatProperty(CPP_PROPERTY_BASE(EndDistance, MercunaNavigationComponent_eventMoveToLocation_Parms), 0x0010000000000080);
			UProperty* NewProp_Destination = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("Destination"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(CPP_PROPERTY_BASE(Destination, MercunaNavigationComponent_eventMoveToLocation_Parms), 0x0010000008000182, Z_Construct_UScriptStruct_FVector());
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Public/MercunaNavigationComponent.h"));
			MetaData->SetValue(NewProp_Destination, TEXT("NativeConst"), TEXT(""));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UMercunaNavigationComponent_SetAvoidanceAgainst()
	{
		struct MercunaNavigationComponent_eventSetAvoidanceAgainst_Parms
		{
			AActor* Actor;
			bool Enable;
		};
		UObject* Outer = Z_Construct_UClass_UMercunaNavigationComponent();
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("SetAvoidanceAgainst"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), nullptr, (EFunctionFlags)0x04020401, 65535, sizeof(MercunaNavigationComponent_eventSetAvoidanceAgainst_Parms));
			CPP_BOOL_PROPERTY_BITMASK_STRUCT(Enable, MercunaNavigationComponent_eventSetAvoidanceAgainst_Parms);
			UProperty* NewProp_Enable = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("Enable"), RF_Public|RF_Transient|RF_MarkAsNative) UBoolProperty(FObjectInitializer(), EC_CppProperty, CPP_BOOL_PROPERTY_OFFSET(Enable, MercunaNavigationComponent_eventSetAvoidanceAgainst_Parms), 0x0010000000000080, CPP_BOOL_PROPERTY_BITMASK(Enable, MercunaNavigationComponent_eventSetAvoidanceAgainst_Parms), sizeof(bool), true);
			UProperty* NewProp_Actor = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("Actor"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(Actor, MercunaNavigationComponent_eventSetAvoidanceAgainst_Parms), 0x0010000000000080, Z_Construct_UClass_AActor_NoRegister());
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Public/MercunaNavigationComponent.h"));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UMercunaNavigationComponent_Stop()
	{
		UObject* Outer = Z_Construct_UClass_UMercunaNavigationComponent();
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("Stop"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), nullptr, (EFunctionFlags)0x04020401, 65535);
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Public/MercunaNavigationComponent.h"));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UMercunaNavigationComponent_TrackActor()
	{
		struct MercunaNavigationComponent_eventTrackActor_Parms
		{
			AActor* Actor;
			float Distance;
			float Speed;
		};
		UObject* Outer = Z_Construct_UClass_UMercunaNavigationComponent();
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("TrackActor"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), nullptr, (EFunctionFlags)0x04020401, 65535, sizeof(MercunaNavigationComponent_eventTrackActor_Parms));
			UProperty* NewProp_Speed = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("Speed"), RF_Public|RF_Transient|RF_MarkAsNative) UFloatProperty(CPP_PROPERTY_BASE(Speed, MercunaNavigationComponent_eventTrackActor_Parms), 0x0010000000000080);
			UProperty* NewProp_Distance = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("Distance"), RF_Public|RF_Transient|RF_MarkAsNative) UFloatProperty(CPP_PROPERTY_BASE(Distance, MercunaNavigationComponent_eventTrackActor_Parms), 0x0010000000000080);
			UProperty* NewProp_Actor = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("Actor"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(Actor, MercunaNavigationComponent_eventTrackActor_Parms), 0x0010000000000080, Z_Construct_UClass_AActor_NoRegister());
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Public/MercunaNavigationComponent.h"));
#endif
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UMercunaNavigationComponent_NoRegister()
	{
		return UMercunaNavigationComponent::StaticClass();
	}
	UClass* Z_Construct_UClass_UMercunaNavigationComponent()
	{
		static UClass* OuterClass = NULL;
		if (!OuterClass)
		{
			Z_Construct_UClass_UActorComponent();
			Z_Construct_UPackage__Script_Mercuna();
			OuterClass = UMercunaNavigationComponent::StaticClass();
			if (!(OuterClass->ClassFlags & CLASS_Constructed))
			{
				UObjectForceRegistration(OuterClass);
				OuterClass->ClassFlags |= (EClassFlags)0x20B00080u;

				OuterClass->LinkChild(Z_Construct_UFunction_UMercunaNavigationComponent_CancelLookAt());
				OuterClass->LinkChild(Z_Construct_UFunction_UMercunaNavigationComponent_CancelMovement());
				OuterClass->LinkChild(Z_Construct_UFunction_UMercunaNavigationComponent_CheckReachable());
				OuterClass->LinkChild(Z_Construct_UFunction_UMercunaNavigationComponent_ClearAvoidanceExclusions());
				OuterClass->LinkChild(Z_Construct_UFunction_UMercunaNavigationComponent_Configure());
				OuterClass->LinkChild(Z_Construct_UFunction_UMercunaNavigationComponent_ConfigureMovement());
				OuterClass->LinkChild(Z_Construct_UFunction_UMercunaNavigationComponent_GetPathInfo());
				OuterClass->LinkChild(Z_Construct_UFunction_UMercunaNavigationComponent_LookAt());
				OuterClass->LinkChild(Z_Construct_UDelegateFunction_UMercunaNavigationComponent_MercunaMoveComplete__DelegateSignature());
				OuterClass->LinkChild(Z_Construct_UFunction_UMercunaNavigationComponent_MoveToActor());
				OuterClass->LinkChild(Z_Construct_UFunction_UMercunaNavigationComponent_MoveToLocation());
				OuterClass->LinkChild(Z_Construct_UFunction_UMercunaNavigationComponent_SetAvoidanceAgainst());
				OuterClass->LinkChild(Z_Construct_UFunction_UMercunaNavigationComponent_Stop());
				OuterClass->LinkChild(Z_Construct_UFunction_UMercunaNavigationComponent_TrackActor());

				CPP_BOOL_PROPERTY_BITMASK_STRUCT(DynamicAvoidance, UMercunaNavigationComponent);
				UProperty* NewProp_DynamicAvoidance = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("DynamicAvoidance"), RF_Public|RF_Transient|RF_MarkAsNative) UBoolProperty(FObjectInitializer(), EC_CppProperty, CPP_BOOL_PROPERTY_OFFSET(DynamicAvoidance, UMercunaNavigationComponent), 0x0020080000000001, CPP_BOOL_PROPERTY_BITMASK(DynamicAvoidance, UMercunaNavigationComponent), sizeof(bool), true);
				CPP_BOOL_PROPERTY_BITMASK_STRUCT(Pathfinding, UMercunaNavigationComponent);
				UProperty* NewProp_Pathfinding = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("Pathfinding"), RF_Public|RF_Transient|RF_MarkAsNative) UBoolProperty(FObjectInitializer(), EC_CppProperty, CPP_BOOL_PROPERTY_OFFSET(Pathfinding, UMercunaNavigationComponent), 0x0020080000000001, CPP_BOOL_PROPERTY_BITMASK(Pathfinding, UMercunaNavigationComponent), sizeof(bool), true);
				UProperty* NewProp_Configuration = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("Configuration"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(CPP_PROPERTY_BASE(Configuration, UMercunaNavigationComponent), 0x0020080000010015, Z_Construct_UScriptStruct_FMercunaNavigationConfiguration());
				UProperty* NewProp_OnMoveCompleted = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("OnMoveCompleted"), RF_Public|RF_Transient|RF_MarkAsNative) UMulticastDelegateProperty(CPP_PROPERTY_BASE(OnMoveCompleted, UMercunaNavigationComponent), 0x0010000010080000, Z_Construct_UDelegateFunction_UMercunaNavigationComponent_MercunaMoveComplete__DelegateSignature());
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_UMercunaNavigationComponent_CancelLookAt(), "CancelLookAt"); // 823904855
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_UMercunaNavigationComponent_CancelMovement(), "CancelMovement"); // 2688058682
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_UMercunaNavigationComponent_CheckReachable(), "CheckReachable"); // 3488453982
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_UMercunaNavigationComponent_ClearAvoidanceExclusions(), "ClearAvoidanceExclusions"); // 3796315241
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_UMercunaNavigationComponent_Configure(), "Configure"); // 4122986438
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_UMercunaNavigationComponent_ConfigureMovement(), "ConfigureMovement"); // 2573106751
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_UMercunaNavigationComponent_GetPathInfo(), "GetPathInfo"); // 2773494325
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_UMercunaNavigationComponent_LookAt(), "LookAt"); // 686970258
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UDelegateFunction_UMercunaNavigationComponent_MercunaMoveComplete__DelegateSignature(), "MercunaMoveComplete__DelegateSignature"); // 2648644676
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_UMercunaNavigationComponent_MoveToActor(), "MoveToActor"); // 1413806385
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_UMercunaNavigationComponent_MoveToLocation(), "MoveToLocation"); // 2412565672
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_UMercunaNavigationComponent_SetAvoidanceAgainst(), "SetAvoidanceAgainst"); // 3815287294
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_UMercunaNavigationComponent_Stop(), "Stop"); // 2889266206
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_UMercunaNavigationComponent_TrackActor(), "TrackActor"); // 394731049
				static TCppClassTypeInfo<TCppClassTypeTraits<UMercunaNavigationComponent> > StaticCppClassTypeInfo;
				OuterClass->SetCppTypeInfo(&StaticCppClassTypeInfo);
				OuterClass->StaticLink();
#if WITH_METADATA
				UMetaData* MetaData = OuterClass->GetOutermost()->GetMetaData();
				MetaData->SetValue(OuterClass, TEXT("BlueprintSpawnableComponent"), TEXT(""));
				MetaData->SetValue(OuterClass, TEXT("BlueprintType"), TEXT("true"));
				MetaData->SetValue(OuterClass, TEXT("ClassGroupNames"), TEXT("Custom"));
				MetaData->SetValue(OuterClass, TEXT("IncludePath"), TEXT("MercunaNavigationComponent.h"));
				MetaData->SetValue(OuterClass, TEXT("ModuleRelativePath"), TEXT("Public/MercunaNavigationComponent.h"));
				MetaData->SetValue(NewProp_DynamicAvoidance, TEXT("Category"), TEXT("MercunaNavigationComponent"));
				MetaData->SetValue(NewProp_DynamicAvoidance, TEXT("ModuleRelativePath"), TEXT("Public/MercunaNavigationComponent.h"));
				MetaData->SetValue(NewProp_Pathfinding, TEXT("Category"), TEXT("MercunaNavigationComponent"));
				MetaData->SetValue(NewProp_Pathfinding, TEXT("ModuleRelativePath"), TEXT("Public/MercunaNavigationComponent.h"));
				MetaData->SetValue(NewProp_Configuration, TEXT("Category"), TEXT("MercunaNavigationComponent"));
				MetaData->SetValue(NewProp_Configuration, TEXT("ModuleRelativePath"), TEXT("Public/MercunaNavigationComponent.h"));
				MetaData->SetValue(NewProp_OnMoveCompleted, TEXT("ModuleRelativePath"), TEXT("Public/MercunaNavigationComponent.h"));
#endif
			}
		}
		check(OuterClass->GetClass());
		return OuterClass;
	}
	IMPLEMENT_CLASS(UMercunaNavigationComponent, 648877512);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UMercunaNavigationComponent(Z_Construct_UClass_UMercunaNavigationComponent, &UMercunaNavigationComponent::StaticClass, TEXT("/Script/Mercuna"), TEXT("UMercunaNavigationComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMercunaNavigationComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
PRAGMA_ENABLE_OPTIMIZATION
