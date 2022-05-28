// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Public/SQEXSEADInterpTrackAutoSeControl.h"
PRAGMA_DISABLE_OPTIMIZATION
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSQEXSEADInterpTrackAutoSeControl() {}
// Cross Module References
	SQEXSEAD_API UClass* Z_Construct_UClass_USQEXSEADInterpTrackAutoSeControl_NoRegister();
	SQEXSEAD_API UClass* Z_Construct_UClass_USQEXSEADInterpTrackAutoSeControl();
	ENGINE_API UClass* Z_Construct_UClass_UInterpTrack();
	UPackage* Z_Construct_UPackage__Script_SQEXSEAD();
	SQEXSEAD_API UScriptStruct* Z_Construct_UScriptStruct_FSQEXSEADAutoSeControlTrackKey();
// End Cross Module References
	void USQEXSEADInterpTrackAutoSeControl::StaticRegisterNativesUSQEXSEADInterpTrackAutoSeControl()
	{
	}
	UClass* Z_Construct_UClass_USQEXSEADInterpTrackAutoSeControl_NoRegister()
	{
		return USQEXSEADInterpTrackAutoSeControl::StaticClass();
	}
	UClass* Z_Construct_UClass_USQEXSEADInterpTrackAutoSeControl()
	{
		static UClass* OuterClass = NULL;
		if (!OuterClass)
		{
			Z_Construct_UClass_UInterpTrack();
			Z_Construct_UPackage__Script_SQEXSEAD();
			OuterClass = USQEXSEADInterpTrackAutoSeControl::StaticClass();
			if (!(OuterClass->ClassFlags & CLASS_Constructed))
			{
				UObjectForceRegistration(OuterClass);
				OuterClass->ClassFlags |= (EClassFlags)0x20102080u;


				UProperty* NewProp_OverrideGroupName = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("OverrideGroupName"), RF_Public|RF_Transient|RF_MarkAsNative) UNameProperty(CPP_PROPERTY_BASE(OverrideGroupName, USQEXSEADInterpTrackAutoSeControl), 0x0010000000000001);
				UProperty* NewProp_Keys = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("Keys"), RF_Public|RF_Transient|RF_MarkAsNative) UArrayProperty(CPP_PROPERTY_BASE(Keys, USQEXSEADInterpTrackAutoSeControl), 0x0010000000000041);
				UProperty* NewProp_Keys_Inner = new(EC_InternalUseOnlyConstructor, NewProp_Keys, TEXT("Keys"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(FObjectInitializer(), EC_CppProperty, 0, 0x0000000000000000, Z_Construct_UScriptStruct_FSQEXSEADAutoSeControlTrackKey());
				static TCppClassTypeInfo<TCppClassTypeTraits<USQEXSEADInterpTrackAutoSeControl> > StaticCppClassTypeInfo;
				OuterClass->SetCppTypeInfo(&StaticCppClassTypeInfo);
				OuterClass->StaticLink();
#if WITH_METADATA
				UMetaData* MetaData = OuterClass->GetOutermost()->GetMetaData();
				MetaData->SetValue(OuterClass, TEXT("HideCategories"), TEXT("Object"));
				MetaData->SetValue(OuterClass, TEXT("IncludePath"), TEXT("SQEXSEADInterpTrackAutoSeControl.h"));
				MetaData->SetValue(OuterClass, TEXT("ModuleRelativePath"), TEXT("Public/SQEXSEADInterpTrackAutoSeControl.h"));
				MetaData->SetValue(NewProp_OverrideGroupName, TEXT("Category"), TEXT("SQEXSEADInterpTrackAutoSeControl"));
				MetaData->SetValue(NewProp_OverrideGroupName, TEXT("ModuleRelativePath"), TEXT("Public/SQEXSEADInterpTrackAutoSeControl.h"));
				MetaData->SetValue(NewProp_Keys, TEXT("Category"), TEXT("SQEXSEADInterpTrackAutoSeControl"));
				MetaData->SetValue(NewProp_Keys, TEXT("ModuleRelativePath"), TEXT("Public/SQEXSEADInterpTrackAutoSeControl.h"));
#endif
			}
		}
		check(OuterClass->GetClass());
		return OuterClass;
	}
	IMPLEMENT_CLASS(USQEXSEADInterpTrackAutoSeControl, 2540983553);
	static FCompiledInDefer Z_CompiledInDefer_UClass_USQEXSEADInterpTrackAutoSeControl(Z_Construct_UClass_USQEXSEADInterpTrackAutoSeControl, &USQEXSEADInterpTrackAutoSeControl::StaticClass, TEXT("/Script/SQEXSEAD"), TEXT("USQEXSEADInterpTrackAutoSeControl"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USQEXSEADInterpTrackAutoSeControl);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
PRAGMA_ENABLE_OPTIMIZATION
