// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Public/SQEXSEADInterpTrackEvent.h"
PRAGMA_DISABLE_OPTIMIZATION
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSQEXSEADInterpTrackEvent() {}
// Cross Module References
	SQEXSEAD_API UClass* Z_Construct_UClass_USQEXSEADInterpTrackEvent_NoRegister();
	SQEXSEAD_API UClass* Z_Construct_UClass_USQEXSEADInterpTrackEvent();
	ENGINE_API UClass* Z_Construct_UClass_UInterpTrack();
	UPackage* Z_Construct_UPackage__Script_SQEXSEAD();
	SQEXSEAD_API UScriptStruct* Z_Construct_UScriptStruct_FSQEXSEADEventTrackKey();
// End Cross Module References
	void USQEXSEADInterpTrackEvent::StaticRegisterNativesUSQEXSEADInterpTrackEvent()
	{
	}
	UClass* Z_Construct_UClass_USQEXSEADInterpTrackEvent_NoRegister()
	{
		return USQEXSEADInterpTrackEvent::StaticClass();
	}
	UClass* Z_Construct_UClass_USQEXSEADInterpTrackEvent()
	{
		static UClass* OuterClass = NULL;
		if (!OuterClass)
		{
			Z_Construct_UClass_UInterpTrack();
			Z_Construct_UPackage__Script_SQEXSEAD();
			OuterClass = USQEXSEADInterpTrackEvent::StaticClass();
			if (!(OuterClass->ClassFlags & CLASS_Constructed))
			{
				UObjectForceRegistration(OuterClass);
				OuterClass->ClassFlags |= (EClassFlags)0x20102080u;


				CPP_BOOL_PROPERTY_BITMASK_STRUCT(bUseCustomEventName, USQEXSEADInterpTrackEvent);
				UProperty* NewProp_bUseCustomEventName = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("bUseCustomEventName"), RF_Public|RF_Transient|RF_MarkAsNative) UBoolProperty(FObjectInitializer(), EC_CppProperty, CPP_BOOL_PROPERTY_OFFSET(bUseCustomEventName, USQEXSEADInterpTrackEvent), 0x0010000000000001, CPP_BOOL_PROPERTY_BITMASK(bUseCustomEventName, USQEXSEADInterpTrackEvent), sizeof(uint8), false);
				CPP_BOOL_PROPERTY_BITMASK_STRUCT(bFireEventsWhenJumpingForwards, USQEXSEADInterpTrackEvent);
				UProperty* NewProp_bFireEventsWhenJumpingForwards = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("bFireEventsWhenJumpingForwards"), RF_Public|RF_Transient|RF_MarkAsNative) UBoolProperty(FObjectInitializer(), EC_CppProperty, CPP_BOOL_PROPERTY_OFFSET(bFireEventsWhenJumpingForwards, USQEXSEADInterpTrackEvent), 0x0010000000000001, CPP_BOOL_PROPERTY_BITMASK(bFireEventsWhenJumpingForwards, USQEXSEADInterpTrackEvent), sizeof(uint8), false);
				CPP_BOOL_PROPERTY_BITMASK_STRUCT(bFireEventsWhenBackwards, USQEXSEADInterpTrackEvent);
				UProperty* NewProp_bFireEventsWhenBackwards = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("bFireEventsWhenBackwards"), RF_Public|RF_Transient|RF_MarkAsNative) UBoolProperty(FObjectInitializer(), EC_CppProperty, CPP_BOOL_PROPERTY_OFFSET(bFireEventsWhenBackwards, USQEXSEADInterpTrackEvent), 0x0010000000000001, CPP_BOOL_PROPERTY_BITMASK(bFireEventsWhenBackwards, USQEXSEADInterpTrackEvent), sizeof(uint8), false);
				CPP_BOOL_PROPERTY_BITMASK_STRUCT(bFireEventsWhenForwards, USQEXSEADInterpTrackEvent);
				UProperty* NewProp_bFireEventsWhenForwards = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("bFireEventsWhenForwards"), RF_Public|RF_Transient|RF_MarkAsNative) UBoolProperty(FObjectInitializer(), EC_CppProperty, CPP_BOOL_PROPERTY_OFFSET(bFireEventsWhenForwards, USQEXSEADInterpTrackEvent), 0x0010000000000001, CPP_BOOL_PROPERTY_BITMASK(bFireEventsWhenForwards, USQEXSEADInterpTrackEvent), sizeof(uint8), false);
				UProperty* NewProp_EventTrack = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("EventTrack"), RF_Public|RF_Transient|RF_MarkAsNative) UArrayProperty(CPP_PROPERTY_BASE(EventTrack, USQEXSEADInterpTrackEvent), 0x0010000000000000);
				UProperty* NewProp_EventTrack_Inner = new(EC_InternalUseOnlyConstructor, NewProp_EventTrack, TEXT("EventTrack"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(FObjectInitializer(), EC_CppProperty, 0, 0x0000000000000000, Z_Construct_UScriptStruct_FSQEXSEADEventTrackKey());
				static TCppClassTypeInfo<TCppClassTypeTraits<USQEXSEADInterpTrackEvent> > StaticCppClassTypeInfo;
				OuterClass->SetCppTypeInfo(&StaticCppClassTypeInfo);
				OuterClass->StaticLink();
#if WITH_METADATA
				UMetaData* MetaData = OuterClass->GetOutermost()->GetMetaData();
				MetaData->SetValue(OuterClass, TEXT("HideCategories"), TEXT("Object"));
				MetaData->SetValue(OuterClass, TEXT("IncludePath"), TEXT("SQEXSEADInterpTrackEvent.h"));
				MetaData->SetValue(OuterClass, TEXT("ModuleRelativePath"), TEXT("Public/SQEXSEADInterpTrackEvent.h"));
				MetaData->SetValue(NewProp_bUseCustomEventName, TEXT("Category"), TEXT("SQEXSEADInterpTrackEvent"));
				MetaData->SetValue(NewProp_bUseCustomEventName, TEXT("ModuleRelativePath"), TEXT("Public/SQEXSEADInterpTrackEvent.h"));
				MetaData->SetValue(NewProp_bFireEventsWhenJumpingForwards, TEXT("Category"), TEXT("SQEXSEADInterpTrackEvent"));
				MetaData->SetValue(NewProp_bFireEventsWhenJumpingForwards, TEXT("ModuleRelativePath"), TEXT("Public/SQEXSEADInterpTrackEvent.h"));
				MetaData->SetValue(NewProp_bFireEventsWhenBackwards, TEXT("Category"), TEXT("SQEXSEADInterpTrackEvent"));
				MetaData->SetValue(NewProp_bFireEventsWhenBackwards, TEXT("ModuleRelativePath"), TEXT("Public/SQEXSEADInterpTrackEvent.h"));
				MetaData->SetValue(NewProp_bFireEventsWhenForwards, TEXT("Category"), TEXT("SQEXSEADInterpTrackEvent"));
				MetaData->SetValue(NewProp_bFireEventsWhenForwards, TEXT("ModuleRelativePath"), TEXT("Public/SQEXSEADInterpTrackEvent.h"));
				MetaData->SetValue(NewProp_EventTrack, TEXT("ModuleRelativePath"), TEXT("Public/SQEXSEADInterpTrackEvent.h"));
#endif
			}
		}
		check(OuterClass->GetClass());
		return OuterClass;
	}
	IMPLEMENT_CLASS(USQEXSEADInterpTrackEvent, 3607125792);
	static FCompiledInDefer Z_CompiledInDefer_UClass_USQEXSEADInterpTrackEvent(Z_Construct_UClass_USQEXSEADInterpTrackEvent, &USQEXSEADInterpTrackEvent::StaticClass, TEXT("/Script/SQEXSEAD"), TEXT("USQEXSEADInterpTrackEvent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USQEXSEADInterpTrackEvent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
PRAGMA_ENABLE_OPTIMIZATION
