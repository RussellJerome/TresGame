// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Public/MercunaTask_MoveTo.h"
PRAGMA_DISABLE_OPTIMIZATION
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMercunaTask_MoveTo() {}
// Cross Module References
	MERCUNA_API UFunction* Z_Construct_UFunction_UMercunaTask_MoveTo_MercunaMoveTo();
	MERCUNA_API UClass* Z_Construct_UClass_UMercunaTask_MoveTo();
	MERCUNA_API UClass* Z_Construct_UClass_UMercunaTask_MoveTo_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	AIMODULE_API UClass* Z_Construct_UClass_AAIController_NoRegister();
	MERCUNA_API UFunction* Z_Construct_UFunction_UMercunaTask_MoveTo_OnMoveComplete();
	MERCUNA_API UEnum* Z_Construct_UEnum_Mercuna_EMercunaMoveResult();
	AIMODULE_API UScriptStruct* Z_Construct_UScriptStruct_FAIRequestID();
	AIMODULE_API UClass* Z_Construct_UClass_UAITask();
	UPackage* Z_Construct_UPackage__Script_Mercuna();
	MERCUNA_API UFunction* Z_Construct_UDelegateFunction_Mercuna_MercunaMoveTaskCompletedSignature__DelegateSignature();
	GAMEPLAYTASKS_API UFunction* Z_Construct_UDelegateFunction_UGameplayTask_GenericGameplayTaskDelegate__DelegateSignature();
// End Cross Module References
	void UMercunaTask_MoveTo::StaticRegisterNativesUMercunaTask_MoveTo()
	{
		UClass* Class = UMercunaTask_MoveTo::StaticClass();
		static const TNameNativePtrPair<ANSICHAR> AnsiFuncs[] = {
			{ "MercunaMoveTo", (Native)&UMercunaTask_MoveTo::execMercunaMoveTo },
			{ "OnMoveComplete", (Native)&UMercunaTask_MoveTo::execOnMoveComplete },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, AnsiFuncs, ARRAY_COUNT(AnsiFuncs));
	}
	UFunction* Z_Construct_UFunction_UMercunaTask_MoveTo_MercunaMoveTo()
	{
		struct MercunaTask_MoveTo_eventMercunaMoveTo_Parms
		{
			AAIController* Controller;
			FVector GoalLocation;
			AActor* GoalActor;
			float EndDistance;
			bool AcceptPartialPath;
			bool bLockAILogic;
			UMercunaTask_MoveTo* ReturnValue;
		};
		UObject* Outer = Z_Construct_UClass_UMercunaTask_MoveTo();
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("MercunaMoveTo"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), nullptr, (EFunctionFlags)0x04822401, 65535, sizeof(MercunaTask_MoveTo_eventMercunaMoveTo_Parms));
			UProperty* NewProp_ReturnValue = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("ReturnValue"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(ReturnValue, MercunaTask_MoveTo_eventMercunaMoveTo_Parms), 0x0010000000000580, Z_Construct_UClass_UMercunaTask_MoveTo_NoRegister());
			CPP_BOOL_PROPERTY_BITMASK_STRUCT(bLockAILogic, MercunaTask_MoveTo_eventMercunaMoveTo_Parms);
			UProperty* NewProp_bLockAILogic = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("bLockAILogic"), RF_Public|RF_Transient|RF_MarkAsNative) UBoolProperty(FObjectInitializer(), EC_CppProperty, CPP_BOOL_PROPERTY_OFFSET(bLockAILogic, MercunaTask_MoveTo_eventMercunaMoveTo_Parms), 0x0010000000000080, CPP_BOOL_PROPERTY_BITMASK(bLockAILogic, MercunaTask_MoveTo_eventMercunaMoveTo_Parms), sizeof(bool), true);
			CPP_BOOL_PROPERTY_BITMASK_STRUCT(AcceptPartialPath, MercunaTask_MoveTo_eventMercunaMoveTo_Parms);
			UProperty* NewProp_AcceptPartialPath = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("AcceptPartialPath"), RF_Public|RF_Transient|RF_MarkAsNative) UBoolProperty(FObjectInitializer(), EC_CppProperty, CPP_BOOL_PROPERTY_OFFSET(AcceptPartialPath, MercunaTask_MoveTo_eventMercunaMoveTo_Parms), 0x0010000000000080, CPP_BOOL_PROPERTY_BITMASK(AcceptPartialPath, MercunaTask_MoveTo_eventMercunaMoveTo_Parms), sizeof(bool), true);
			UProperty* NewProp_EndDistance = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("EndDistance"), RF_Public|RF_Transient|RF_MarkAsNative) UFloatProperty(CPP_PROPERTY_BASE(EndDistance, MercunaTask_MoveTo_eventMercunaMoveTo_Parms), 0x0010000000000080);
			UProperty* NewProp_GoalActor = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("GoalActor"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(GoalActor, MercunaTask_MoveTo_eventMercunaMoveTo_Parms), 0x0010000000000080, Z_Construct_UClass_AActor_NoRegister());
			UProperty* NewProp_GoalLocation = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("GoalLocation"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(CPP_PROPERTY_BASE(GoalLocation, MercunaTask_MoveTo_eventMercunaMoveTo_Parms), 0x0010000000000080, Z_Construct_UScriptStruct_FVector());
			UProperty* NewProp_Controller = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("Controller"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(Controller, MercunaTask_MoveTo_eventMercunaMoveTo_Parms), 0x0010000000000080, Z_Construct_UClass_AAIController_NoRegister());
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Public/MercunaTask_MoveTo.h"));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UMercunaTask_MoveTo_OnMoveComplete()
	{
		struct MercunaTask_MoveTo_eventOnMoveComplete_Parms
		{
			FAIRequestID RequestID;
			TEnumAsByte<EMercunaMoveResult::Type> Result;
		};
		UObject* Outer = Z_Construct_UClass_UMercunaTask_MoveTo();
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("OnMoveComplete"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), nullptr, (EFunctionFlags)0x00080401, 65535, sizeof(MercunaTask_MoveTo_eventOnMoveComplete_Parms));
			UProperty* NewProp_Result = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("Result"), RF_Public|RF_Transient|RF_MarkAsNative) UByteProperty(CPP_PROPERTY_BASE(Result, MercunaTask_MoveTo_eventOnMoveComplete_Parms), 0x0010000000000080, Z_Construct_UEnum_Mercuna_EMercunaMoveResult());
			UProperty* NewProp_RequestID = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("RequestID"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(CPP_PROPERTY_BASE(RequestID, MercunaTask_MoveTo_eventOnMoveComplete_Parms), 0x0010000000000080, Z_Construct_UScriptStruct_FAIRequestID());
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Public/MercunaTask_MoveTo.h"));
#endif
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UMercunaTask_MoveTo_NoRegister()
	{
		return UMercunaTask_MoveTo::StaticClass();
	}
	UClass* Z_Construct_UClass_UMercunaTask_MoveTo()
	{
		static UClass* OuterClass = NULL;
		if (!OuterClass)
		{
			Z_Construct_UClass_UAITask();
			Z_Construct_UPackage__Script_Mercuna();
			OuterClass = UMercunaTask_MoveTo::StaticClass();
			if (!(OuterClass->ClassFlags & CLASS_Constructed))
			{
				UObjectForceRegistration(OuterClass);
				OuterClass->ClassFlags |= (EClassFlags)0x20900084u;

				OuterClass->LinkChild(Z_Construct_UFunction_UMercunaTask_MoveTo_MercunaMoveTo());
				OuterClass->LinkChild(Z_Construct_UFunction_UMercunaTask_MoveTo_OnMoveComplete());

				UProperty* NewProp_OnMoveFinished = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("OnMoveFinished"), RF_Public|RF_Transient|RF_MarkAsNative) UMulticastDelegateProperty(CPP_PROPERTY_BASE(OnMoveFinished, UMercunaTask_MoveTo), 0x0020080010080000, Z_Construct_UDelegateFunction_Mercuna_MercunaMoveTaskCompletedSignature__DelegateSignature());
				UProperty* NewProp_OnRequestFailed = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("OnRequestFailed"), RF_Public|RF_Transient|RF_MarkAsNative) UMulticastDelegateProperty(CPP_PROPERTY_BASE(OnRequestFailed, UMercunaTask_MoveTo), 0x0020080010080000, Z_Construct_UDelegateFunction_UGameplayTask_GenericGameplayTaskDelegate__DelegateSignature());
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_UMercunaTask_MoveTo_MercunaMoveTo(), "MercunaMoveTo"); // 1649002865
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_UMercunaTask_MoveTo_OnMoveComplete(), "OnMoveComplete"); // 2453336690
				OuterClass->ClassConfigName = FName(TEXT("Game"));
				static TCppClassTypeInfo<TCppClassTypeTraits<UMercunaTask_MoveTo> > StaticCppClassTypeInfo;
				OuterClass->SetCppTypeInfo(&StaticCppClassTypeInfo);
				OuterClass->StaticLink();
#if WITH_METADATA
				UMetaData* MetaData = OuterClass->GetOutermost()->GetMetaData();
				MetaData->SetValue(OuterClass, TEXT("IncludePath"), TEXT("MercunaTask_MoveTo.h"));
				MetaData->SetValue(OuterClass, TEXT("ModuleRelativePath"), TEXT("Public/MercunaTask_MoveTo.h"));
				MetaData->SetValue(OuterClass, TEXT("ObjectInitializerConstructorDeclared"), TEXT(""));
				MetaData->SetValue(NewProp_OnMoveFinished, TEXT("ModuleRelativePath"), TEXT("Public/MercunaTask_MoveTo.h"));
				MetaData->SetValue(NewProp_OnRequestFailed, TEXT("ModuleRelativePath"), TEXT("Public/MercunaTask_MoveTo.h"));
#endif
			}
		}
		check(OuterClass->GetClass());
		return OuterClass;
	}
	IMPLEMENT_CLASS(UMercunaTask_MoveTo, 3404910698);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UMercunaTask_MoveTo(Z_Construct_UClass_UMercunaTask_MoveTo, &UMercunaTask_MoveTo::StaticClass, TEXT("/Script/Mercuna"), TEXT("UMercunaTask_MoveTo"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMercunaTask_MoveTo);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
PRAGMA_ENABLE_OPTIMIZATION
