// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Public/MercunaNavOctree.h"
PRAGMA_DISABLE_OPTIMIZATION
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMercunaNavOctree() {}
// Cross Module References
	MERCUNA_API UFunction* Z_Construct_UFunction_AMercunaNavOctree_CheckReachable();
	MERCUNA_API UClass* Z_Construct_UClass_AMercunaNavOctree();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	MERCUNA_API UFunction* Z_Construct_UFunction_AMercunaNavOctree_ClampToNavigable();
	MERCUNA_API UFunction* Z_Construct_UFunction_AMercunaNavOctree_FindPathToActor();
	MERCUNA_API UClass* Z_Construct_UClass_UMercunaPath_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	MERCUNA_API UFunction* Z_Construct_UFunction_AMercunaNavOctree_FindPathToLocation();
	MERCUNA_API UFunction* Z_Construct_UFunction_AMercunaNavOctree_IsNavigable();
	MERCUNA_API UFunction* Z_Construct_UFunction_AMercunaNavOctree_IsNavigableMulti();
	MERCUNA_API UFunction* Z_Construct_UFunction_AMercunaNavOctree_Raycast();
	MERCUNA_API UClass* Z_Construct_UClass_AMercunaNavOctree_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_Mercuna();
	MERCUNA_API UClass* Z_Construct_UClass_UMerNavOctreeRenderingComponent_NoRegister();
	MERCUNA_API UEnum* Z_Construct_UEnum_Mercuna_EMerOctreeDebugDrawMode();
// End Cross Module References
	void AMercunaNavOctree::StaticRegisterNativesAMercunaNavOctree()
	{
		UClass* Class = AMercunaNavOctree::StaticClass();
		static const TNameNativePtrPair<ANSICHAR> AnsiFuncs[] = {
			{ "CheckReachable", (Native)&AMercunaNavOctree::execCheckReachable },
			{ "ClampToNavigable", (Native)&AMercunaNavOctree::execClampToNavigable },
			{ "FindPathToActor", (Native)&AMercunaNavOctree::execFindPathToActor },
			{ "FindPathToLocation", (Native)&AMercunaNavOctree::execFindPathToLocation },
			{ "IsNavigable", (Native)&AMercunaNavOctree::execIsNavigable },
			{ "IsNavigableMulti", (Native)&AMercunaNavOctree::execIsNavigableMulti },
			{ "Raycast", (Native)&AMercunaNavOctree::execRaycast },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, AnsiFuncs, ARRAY_COUNT(AnsiFuncs));
	}
	UFunction* Z_Construct_UFunction_AMercunaNavOctree_CheckReachable()
	{
		struct MercunaNavOctree_eventCheckReachable_Parms
		{
			FVector Start;
			FVector End;
			float NavigationRadius;
			float MaxPathLength;
			bool Result;
		};
		UObject* Outer = Z_Construct_UClass_AMercunaNavOctree();
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("CheckReachable"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), nullptr, (EFunctionFlags)0x04C20401, 65535, sizeof(MercunaNavOctree_eventCheckReachable_Parms));
			CPP_BOOL_PROPERTY_BITMASK_STRUCT(Result, MercunaNavOctree_eventCheckReachable_Parms);
			UProperty* NewProp_Result = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("Result"), RF_Public|RF_Transient|RF_MarkAsNative) UBoolProperty(FObjectInitializer(), EC_CppProperty, CPP_BOOL_PROPERTY_OFFSET(Result, MercunaNavOctree_eventCheckReachable_Parms), 0x0010000000000180, CPP_BOOL_PROPERTY_BITMASK(Result, MercunaNavOctree_eventCheckReachable_Parms), sizeof(bool), true);
			UProperty* NewProp_MaxPathLength = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("MaxPathLength"), RF_Public|RF_Transient|RF_MarkAsNative) UFloatProperty(CPP_PROPERTY_BASE(MaxPathLength, MercunaNavOctree_eventCheckReachable_Parms), 0x0010000000000080);
			UProperty* NewProp_NavigationRadius = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("NavigationRadius"), RF_Public|RF_Transient|RF_MarkAsNative) UFloatProperty(CPP_PROPERTY_BASE(NavigationRadius, MercunaNavOctree_eventCheckReachable_Parms), 0x0010000000000080);
			UProperty* NewProp_End = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("End"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(CPP_PROPERTY_BASE(End, MercunaNavOctree_eventCheckReachable_Parms), 0x0010000000000080, Z_Construct_UScriptStruct_FVector());
			UProperty* NewProp_Start = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("Start"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(CPP_PROPERTY_BASE(Start, MercunaNavOctree_eventCheckReachable_Parms), 0x0010000000000080, Z_Construct_UScriptStruct_FVector());
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Public/MercunaNavOctree.h"));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_AMercunaNavOctree_ClampToNavigable()
	{
		struct MercunaNavOctree_eventClampToNavigable_Parms
		{
			FVector Position;
			float NavigationRadius;
			float SearchRadius;
			FVector ClampedPosition;
			bool Result;
		};
		UObject* Outer = Z_Construct_UClass_AMercunaNavOctree();
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("ClampToNavigable"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), nullptr, (EFunctionFlags)0x04C20401, 65535, sizeof(MercunaNavOctree_eventClampToNavigable_Parms));
			CPP_BOOL_PROPERTY_BITMASK_STRUCT(Result, MercunaNavOctree_eventClampToNavigable_Parms);
			UProperty* NewProp_Result = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("Result"), RF_Public|RF_Transient|RF_MarkAsNative) UBoolProperty(FObjectInitializer(), EC_CppProperty, CPP_BOOL_PROPERTY_OFFSET(Result, MercunaNavOctree_eventClampToNavigable_Parms), 0x0010000000000180, CPP_BOOL_PROPERTY_BITMASK(Result, MercunaNavOctree_eventClampToNavigable_Parms), sizeof(bool), true);
			UProperty* NewProp_ClampedPosition = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("ClampedPosition"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(CPP_PROPERTY_BASE(ClampedPosition, MercunaNavOctree_eventClampToNavigable_Parms), 0x0010000000000180, Z_Construct_UScriptStruct_FVector());
			UProperty* NewProp_SearchRadius = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("SearchRadius"), RF_Public|RF_Transient|RF_MarkAsNative) UFloatProperty(CPP_PROPERTY_BASE(SearchRadius, MercunaNavOctree_eventClampToNavigable_Parms), 0x0010000000000080);
			UProperty* NewProp_NavigationRadius = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("NavigationRadius"), RF_Public|RF_Transient|RF_MarkAsNative) UFloatProperty(CPP_PROPERTY_BASE(NavigationRadius, MercunaNavOctree_eventClampToNavigable_Parms), 0x0010000000000080);
			UProperty* NewProp_Position = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("Position"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(CPP_PROPERTY_BASE(Position, MercunaNavOctree_eventClampToNavigable_Parms), 0x0010000000000080, Z_Construct_UScriptStruct_FVector());
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Public/MercunaNavOctree.h"));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_AMercunaNavOctree_FindPathToActor()
	{
		struct MercunaNavOctree_eventFindPathToActor_Parms
		{
			FVector Start;
			AActor* GoalActor;
			float NavigationRadius;
			bool AllowPartial;
			float MaxPathLength;
			UMercunaPath* ReturnValue;
		};
		UObject* Outer = Z_Construct_UClass_AMercunaNavOctree();
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("FindPathToActor"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), nullptr, (EFunctionFlags)0x04820401, 65535, sizeof(MercunaNavOctree_eventFindPathToActor_Parms));
			UProperty* NewProp_ReturnValue = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("ReturnValue"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(ReturnValue, MercunaNavOctree_eventFindPathToActor_Parms), 0x0010000000000580, Z_Construct_UClass_UMercunaPath_NoRegister());
			UProperty* NewProp_MaxPathLength = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("MaxPathLength"), RF_Public|RF_Transient|RF_MarkAsNative) UFloatProperty(CPP_PROPERTY_BASE(MaxPathLength, MercunaNavOctree_eventFindPathToActor_Parms), 0x0010000000000080);
			CPP_BOOL_PROPERTY_BITMASK_STRUCT(AllowPartial, MercunaNavOctree_eventFindPathToActor_Parms);
			UProperty* NewProp_AllowPartial = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("AllowPartial"), RF_Public|RF_Transient|RF_MarkAsNative) UBoolProperty(FObjectInitializer(), EC_CppProperty, CPP_BOOL_PROPERTY_OFFSET(AllowPartial, MercunaNavOctree_eventFindPathToActor_Parms), 0x0010000000000080, CPP_BOOL_PROPERTY_BITMASK(AllowPartial, MercunaNavOctree_eventFindPathToActor_Parms), sizeof(bool), true);
			UProperty* NewProp_NavigationRadius = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("NavigationRadius"), RF_Public|RF_Transient|RF_MarkAsNative) UFloatProperty(CPP_PROPERTY_BASE(NavigationRadius, MercunaNavOctree_eventFindPathToActor_Parms), 0x0010000000000080);
			UProperty* NewProp_GoalActor = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("GoalActor"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(GoalActor, MercunaNavOctree_eventFindPathToActor_Parms), 0x0010000000000080, Z_Construct_UClass_AActor_NoRegister());
			UProperty* NewProp_Start = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("Start"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(CPP_PROPERTY_BASE(Start, MercunaNavOctree_eventFindPathToActor_Parms), 0x0010000000000080, Z_Construct_UScriptStruct_FVector());
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Public/MercunaNavOctree.h"));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_AMercunaNavOctree_FindPathToLocation()
	{
		struct MercunaNavOctree_eventFindPathToLocation_Parms
		{
			FVector Start;
			FVector End;
			float NavigationRadius;
			bool AllowPartial;
			float MaxPathLength;
			UMercunaPath* ReturnValue;
		};
		UObject* Outer = Z_Construct_UClass_AMercunaNavOctree();
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("FindPathToLocation"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), nullptr, (EFunctionFlags)0x04820401, 65535, sizeof(MercunaNavOctree_eventFindPathToLocation_Parms));
			UProperty* NewProp_ReturnValue = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("ReturnValue"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(ReturnValue, MercunaNavOctree_eventFindPathToLocation_Parms), 0x0010000000000580, Z_Construct_UClass_UMercunaPath_NoRegister());
			UProperty* NewProp_MaxPathLength = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("MaxPathLength"), RF_Public|RF_Transient|RF_MarkAsNative) UFloatProperty(CPP_PROPERTY_BASE(MaxPathLength, MercunaNavOctree_eventFindPathToLocation_Parms), 0x0010000000000080);
			CPP_BOOL_PROPERTY_BITMASK_STRUCT(AllowPartial, MercunaNavOctree_eventFindPathToLocation_Parms);
			UProperty* NewProp_AllowPartial = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("AllowPartial"), RF_Public|RF_Transient|RF_MarkAsNative) UBoolProperty(FObjectInitializer(), EC_CppProperty, CPP_BOOL_PROPERTY_OFFSET(AllowPartial, MercunaNavOctree_eventFindPathToLocation_Parms), 0x0010000000000080, CPP_BOOL_PROPERTY_BITMASK(AllowPartial, MercunaNavOctree_eventFindPathToLocation_Parms), sizeof(bool), true);
			UProperty* NewProp_NavigationRadius = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("NavigationRadius"), RF_Public|RF_Transient|RF_MarkAsNative) UFloatProperty(CPP_PROPERTY_BASE(NavigationRadius, MercunaNavOctree_eventFindPathToLocation_Parms), 0x0010000000000080);
			UProperty* NewProp_End = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("End"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(CPP_PROPERTY_BASE(End, MercunaNavOctree_eventFindPathToLocation_Parms), 0x0010000000000080, Z_Construct_UScriptStruct_FVector());
			UProperty* NewProp_Start = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("Start"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(CPP_PROPERTY_BASE(Start, MercunaNavOctree_eventFindPathToLocation_Parms), 0x0010000000000080, Z_Construct_UScriptStruct_FVector());
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Public/MercunaNavOctree.h"));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_AMercunaNavOctree_IsNavigable()
	{
		struct MercunaNavOctree_eventIsNavigable_Parms
		{
			FVector Position;
			float NavigationRadius;
			bool Result;
		};
		UObject* Outer = Z_Construct_UClass_AMercunaNavOctree();
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("IsNavigable"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), nullptr, (EFunctionFlags)0x04C20401, 65535, sizeof(MercunaNavOctree_eventIsNavigable_Parms));
			CPP_BOOL_PROPERTY_BITMASK_STRUCT(Result, MercunaNavOctree_eventIsNavigable_Parms);
			UProperty* NewProp_Result = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("Result"), RF_Public|RF_Transient|RF_MarkAsNative) UBoolProperty(FObjectInitializer(), EC_CppProperty, CPP_BOOL_PROPERTY_OFFSET(Result, MercunaNavOctree_eventIsNavigable_Parms), 0x0010000000000180, CPP_BOOL_PROPERTY_BITMASK(Result, MercunaNavOctree_eventIsNavigable_Parms), sizeof(bool), true);
			UProperty* NewProp_NavigationRadius = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("NavigationRadius"), RF_Public|RF_Transient|RF_MarkAsNative) UFloatProperty(CPP_PROPERTY_BASE(NavigationRadius, MercunaNavOctree_eventIsNavigable_Parms), 0x0010000000000080);
			UProperty* NewProp_Position = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("Position"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(CPP_PROPERTY_BASE(Position, MercunaNavOctree_eventIsNavigable_Parms), 0x0010000000000080, Z_Construct_UScriptStruct_FVector());
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Public/MercunaNavOctree.h"));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_AMercunaNavOctree_IsNavigableMulti()
	{
		struct MercunaNavOctree_eventIsNavigableMulti_Parms
		{
			TArray<FVector> Positions;
			float NavigationRadius;
			TArray<bool> Results;
		};
		UObject* Outer = Z_Construct_UClass_AMercunaNavOctree();
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("IsNavigableMulti"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), nullptr, (EFunctionFlags)0x04420401, 65535, sizeof(MercunaNavOctree_eventIsNavigableMulti_Parms));
			UProperty* NewProp_Results = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("Results"), RF_Public|RF_Transient|RF_MarkAsNative) UArrayProperty(CPP_PROPERTY_BASE(Results, MercunaNavOctree_eventIsNavigableMulti_Parms), 0x0010000000000180);
			UProperty* NewProp_Results_Inner = new(EC_InternalUseOnlyConstructor, NewProp_Results, TEXT("Results"), RF_Public|RF_Transient|RF_MarkAsNative) UBoolProperty(FObjectInitializer(), EC_CppProperty, 0, 0x0000000000000000, 0, sizeof(bool), true);
			UProperty* NewProp_NavigationRadius = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("NavigationRadius"), RF_Public|RF_Transient|RF_MarkAsNative) UFloatProperty(CPP_PROPERTY_BASE(NavigationRadius, MercunaNavOctree_eventIsNavigableMulti_Parms), 0x0010000000000080);
			UProperty* NewProp_Positions = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("Positions"), RF_Public|RF_Transient|RF_MarkAsNative) UArrayProperty(CPP_PROPERTY_BASE(Positions, MercunaNavOctree_eventIsNavigableMulti_Parms), 0x0010000008000182);
			UProperty* NewProp_Positions_Inner = new(EC_InternalUseOnlyConstructor, NewProp_Positions, TEXT("Positions"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(FObjectInitializer(), EC_CppProperty, 0, 0x0000000000000000, Z_Construct_UScriptStruct_FVector());
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Public/MercunaNavOctree.h"));
			MetaData->SetValue(NewProp_Positions, TEXT("NativeConst"), TEXT(""));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_AMercunaNavOctree_Raycast()
	{
		struct MercunaNavOctree_eventRaycast_Parms
		{
			FVector Start;
			FVector End;
			float NavigationRadius;
			FVector HitPosition;
			bool RayHit;
		};
		UObject* Outer = Z_Construct_UClass_AMercunaNavOctree();
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("Raycast"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), nullptr, (EFunctionFlags)0x04C20401, 65535, sizeof(MercunaNavOctree_eventRaycast_Parms));
			CPP_BOOL_PROPERTY_BITMASK_STRUCT(RayHit, MercunaNavOctree_eventRaycast_Parms);
			UProperty* NewProp_RayHit = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("RayHit"), RF_Public|RF_Transient|RF_MarkAsNative) UBoolProperty(FObjectInitializer(), EC_CppProperty, CPP_BOOL_PROPERTY_OFFSET(RayHit, MercunaNavOctree_eventRaycast_Parms), 0x0010000000000180, CPP_BOOL_PROPERTY_BITMASK(RayHit, MercunaNavOctree_eventRaycast_Parms), sizeof(bool), true);
			UProperty* NewProp_HitPosition = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("HitPosition"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(CPP_PROPERTY_BASE(HitPosition, MercunaNavOctree_eventRaycast_Parms), 0x0010000000000180, Z_Construct_UScriptStruct_FVector());
			UProperty* NewProp_NavigationRadius = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("NavigationRadius"), RF_Public|RF_Transient|RF_MarkAsNative) UFloatProperty(CPP_PROPERTY_BASE(NavigationRadius, MercunaNavOctree_eventRaycast_Parms), 0x0010000000000080);
			UProperty* NewProp_End = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("End"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(CPP_PROPERTY_BASE(End, MercunaNavOctree_eventRaycast_Parms), 0x0010000000000080, Z_Construct_UScriptStruct_FVector());
			UProperty* NewProp_Start = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("Start"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(CPP_PROPERTY_BASE(Start, MercunaNavOctree_eventRaycast_Parms), 0x0010000000000080, Z_Construct_UScriptStruct_FVector());
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Public/MercunaNavOctree.h"));
#endif
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AMercunaNavOctree_NoRegister()
	{
		return AMercunaNavOctree::StaticClass();
	}
	UClass* Z_Construct_UClass_AMercunaNavOctree()
	{
		static UClass* OuterClass = NULL;
		if (!OuterClass)
		{
			Z_Construct_UClass_AActor();
			Z_Construct_UPackage__Script_Mercuna();
			OuterClass = AMercunaNavOctree::StaticClass();
			if (!(OuterClass->ClassFlags & CLASS_Constructed))
			{
				UObjectForceRegistration(OuterClass);
				OuterClass->ClassFlags |= (EClassFlags)0x20900284u;

				OuterClass->LinkChild(Z_Construct_UFunction_AMercunaNavOctree_CheckReachable());
				OuterClass->LinkChild(Z_Construct_UFunction_AMercunaNavOctree_ClampToNavigable());
				OuterClass->LinkChild(Z_Construct_UFunction_AMercunaNavOctree_FindPathToActor());
				OuterClass->LinkChild(Z_Construct_UFunction_AMercunaNavOctree_FindPathToLocation());
				OuterClass->LinkChild(Z_Construct_UFunction_AMercunaNavOctree_IsNavigable());
				OuterClass->LinkChild(Z_Construct_UFunction_AMercunaNavOctree_IsNavigableMulti());
				OuterClass->LinkChild(Z_Construct_UFunction_AMercunaNavOctree_Raycast());

				UProperty* NewProp_m_origin = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("m_origin"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(CPP_PROPERTY_BASE(m_origin, AMercunaNavOctree), 0x0040800000000000, Z_Construct_UScriptStruct_FVector());
				CPP_BOOL_PROPERTY_BITMASK_STRUCT(bNeedsRebuild, AMercunaNavOctree);
				UProperty* NewProp_bNeedsRebuild = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("bNeedsRebuild"), RF_Public|RF_Transient|RF_MarkAsNative) UBoolProperty(FObjectInitializer(), EC_CppProperty, CPP_BOOL_PROPERTY_OFFSET(bNeedsRebuild, AMercunaNavOctree), 0x0040000000000000, CPP_BOOL_PROPERTY_BITMASK(bNeedsRebuild, AMercunaNavOctree), sizeof(bool), true);
				CPP_BOOL_PROPERTY_BITMASK_STRUCT(bBuildAsSublevel, AMercunaNavOctree);
				UProperty* NewProp_bBuildAsSublevel = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("bBuildAsSublevel"), RF_Public|RF_Transient|RF_MarkAsNative) UBoolProperty(FObjectInitializer(), EC_CppProperty, CPP_BOOL_PROPERTY_OFFSET(bBuildAsSublevel, AMercunaNavOctree), 0x0040000000000000, CPP_BOOL_PROPERTY_BITMASK(bBuildAsSublevel, AMercunaNavOctree), sizeof(bool), true);
				UProperty* NewProp_MerNavOctreeRenderingComponent = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("MerNavOctreeRenderingComponent"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(MerNavOctreeRenderingComponent, AMercunaNavOctree), 0x0040000000082008, Z_Construct_UClass_UMerNavOctreeRenderingComponent_NoRegister());
				UProperty* NewProp_DebugDrawMode = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("DebugDrawMode"), RF_Public|RF_Transient|RF_MarkAsNative) UEnumProperty(CPP_PROPERTY_BASE(DebugDrawMode, AMercunaNavOctree), 0x0040000000002000, Z_Construct_UEnum_Mercuna_EMerOctreeDebugDrawMode());
				UProperty* NewProp_DebugDrawMode_Underlying = new(EC_InternalUseOnlyConstructor, NewProp_DebugDrawMode, TEXT("UnderlyingType"), RF_Public|RF_Transient|RF_MarkAsNative) UByteProperty(FObjectInitializer(), EC_CppProperty, 0, 0x0000000000000000);
				UProperty* NewProp_MaxPawnRadius = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("MaxPawnRadius"), RF_Public|RF_Transient|RF_MarkAsNative) UIntProperty(CPP_PROPERTY_BASE(MaxPawnRadius, AMercunaNavOctree), 0x0010000000004001);
				UProperty* NewProp_MinPawnRadius = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("MinPawnRadius"), RF_Public|RF_Transient|RF_MarkAsNative) UIntProperty(CPP_PROPERTY_BASE(MinPawnRadius, AMercunaNavOctree), 0x0010000000004001);
				UProperty* NewProp_CellSize = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("CellSize"), RF_Public|RF_Transient|RF_MarkAsNative) UFloatProperty(CPP_PROPERTY_BASE(CellSize, AMercunaNavOctree), 0x0010000000004001);
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_AMercunaNavOctree_CheckReachable(), "CheckReachable"); // 3886173749
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_AMercunaNavOctree_ClampToNavigable(), "ClampToNavigable"); // 579357866
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_AMercunaNavOctree_FindPathToActor(), "FindPathToActor"); // 1541049649
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_AMercunaNavOctree_FindPathToLocation(), "FindPathToLocation"); // 1300661456
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_AMercunaNavOctree_IsNavigable(), "IsNavigable"); // 2893390724
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_AMercunaNavOctree_IsNavigableMulti(), "IsNavigableMulti"); // 831156699
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_AMercunaNavOctree_Raycast(), "Raycast"); // 2946125390
				OuterClass->ClassConfigName = FName(TEXT("Engine"));
				static TCppClassTypeInfo<TCppClassTypeTraits<AMercunaNavOctree> > StaticCppClassTypeInfo;
				OuterClass->SetCppTypeInfo(&StaticCppClassTypeInfo);
				OuterClass->StaticLink();
#if WITH_METADATA
				UMetaData* MetaData = OuterClass->GetOutermost()->GetMetaData();
				MetaData->SetValue(OuterClass, TEXT("IncludePath"), TEXT("MercunaNavOctree.h"));
				MetaData->SetValue(OuterClass, TEXT("ModuleRelativePath"), TEXT("Public/MercunaNavOctree.h"));
				MetaData->SetValue(NewProp_m_origin, TEXT("ModuleRelativePath"), TEXT("Public/MercunaNavOctree.h"));
				MetaData->SetValue(NewProp_bNeedsRebuild, TEXT("ModuleRelativePath"), TEXT("Public/MercunaNavOctree.h"));
				MetaData->SetValue(NewProp_bBuildAsSublevel, TEXT("ModuleRelativePath"), TEXT("Public/MercunaNavOctree.h"));
				MetaData->SetValue(NewProp_MerNavOctreeRenderingComponent, TEXT("EditInline"), TEXT("true"));
				MetaData->SetValue(NewProp_MerNavOctreeRenderingComponent, TEXT("ModuleRelativePath"), TEXT("Public/MercunaNavOctree.h"));
				MetaData->SetValue(NewProp_DebugDrawMode, TEXT("ModuleRelativePath"), TEXT("Public/MercunaNavOctree.h"));
				MetaData->SetValue(NewProp_MaxPawnRadius, TEXT("Category"), TEXT("MercunaNavOctree"));
				MetaData->SetValue(NewProp_MaxPawnRadius, TEXT("ModuleRelativePath"), TEXT("Public/MercunaNavOctree.h"));
				MetaData->SetValue(NewProp_MinPawnRadius, TEXT("Category"), TEXT("MercunaNavOctree"));
				MetaData->SetValue(NewProp_MinPawnRadius, TEXT("ModuleRelativePath"), TEXT("Public/MercunaNavOctree.h"));
				MetaData->SetValue(NewProp_CellSize, TEXT("Category"), TEXT("MercunaNavOctree"));
				MetaData->SetValue(NewProp_CellSize, TEXT("ModuleRelativePath"), TEXT("Public/MercunaNavOctree.h"));
#endif
			}
		}
		check(OuterClass->GetClass());
		return OuterClass;
	}
	IMPLEMENT_CLASS(AMercunaNavOctree, 443718982);
	static FCompiledInDefer Z_CompiledInDefer_UClass_AMercunaNavOctree(Z_Construct_UClass_AMercunaNavOctree, &AMercunaNavOctree::StaticClass, TEXT("/Script/Mercuna"), TEXT("AMercunaNavOctree"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AMercunaNavOctree);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
PRAGMA_ENABLE_OPTIMIZATION
