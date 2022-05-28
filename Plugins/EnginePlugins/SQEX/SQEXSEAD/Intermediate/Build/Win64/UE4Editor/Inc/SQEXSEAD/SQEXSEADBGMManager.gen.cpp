// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Public/SQEXSEADBGMManager.h"
PRAGMA_DISABLE_OPTIMIZATION
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSQEXSEADBGMManager() {}
// Cross Module References
	SQEXSEAD_API UClass* Z_Construct_UClass_USQEXSEADBGMManager_NoRegister();
	SQEXSEAD_API UClass* Z_Construct_UClass_USQEXSEADBGMManager();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_SQEXSEAD();
	SQEXSEAD_API UScriptStruct* Z_Construct_UScriptStruct_FSQEXSEAD_BGMSlotSetting();
	SQEXSEAD_API UClass* Z_Construct_UClass_USQEXSEADBGMSlot_NoRegister();
	SQEXSEAD_API UClass* Z_Construct_UClass_USQEXSEADBGMSlotController_NoRegister();
// End Cross Module References
	void USQEXSEADBGMManager::StaticRegisterNativesUSQEXSEADBGMManager()
	{
	}
	UClass* Z_Construct_UClass_USQEXSEADBGMManager_NoRegister()
	{
		return USQEXSEADBGMManager::StaticClass();
	}
	UClass* Z_Construct_UClass_USQEXSEADBGMManager()
	{
		static UClass* OuterClass = NULL;
		if (!OuterClass)
		{
			Z_Construct_UClass_UObject();
			Z_Construct_UPackage__Script_SQEXSEAD();
			OuterClass = USQEXSEADBGMManager::StaticClass();
			if (!(OuterClass->ClassFlags & CLASS_Constructed))
			{
				UObjectForceRegistration(OuterClass);
				OuterClass->ClassFlags |= (EClassFlags)0x20100086u;


				UProperty* NewProp_SlotSettings_ = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("SlotSettings_"), RF_Public|RF_Transient|RF_MarkAsNative) UArrayProperty(CPP_PROPERTY_BASE(SlotSettings_, USQEXSEADBGMManager), 0x0040000000004000);
				UProperty* NewProp_SlotSettings__Inner = new(EC_InternalUseOnlyConstructor, NewProp_SlotSettings_, TEXT("SlotSettings_"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(FObjectInitializer(), EC_CppProperty, 0, 0x0000000000004000, Z_Construct_UScriptStruct_FSQEXSEAD_BGMSlotSetting());
				UProperty* NewProp_PlayingSlot_ = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("PlayingSlot_"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(PlayingSlot_, USQEXSEADBGMManager), 0x0040000000002000, Z_Construct_UClass_USQEXSEADBGMSlot_NoRegister());
				UProperty* NewProp_Controllers_ = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("Controllers_"), RF_Public|RF_Transient|RF_MarkAsNative) UArrayProperty(CPP_PROPERTY_BASE(Controllers_, USQEXSEADBGMManager), 0x0040000000000000);
				UProperty* NewProp_Controllers__Inner = new(EC_InternalUseOnlyConstructor, NewProp_Controllers_, TEXT("Controllers_"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(FObjectInitializer(), EC_CppProperty, 0, 0x0000000000000000, Z_Construct_UClass_USQEXSEADBGMSlotController_NoRegister());
				UProperty* NewProp_Slots_ = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("Slots_"), RF_Public|RF_Transient|RF_MarkAsNative) UArrayProperty(CPP_PROPERTY_BASE(Slots_, USQEXSEADBGMManager), 0x0040000000000000);
				UProperty* NewProp_Slots__Inner = new(EC_InternalUseOnlyConstructor, NewProp_Slots_, TEXT("Slots_"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(FObjectInitializer(), EC_CppProperty, 0, 0x0000000000000000, Z_Construct_UClass_USQEXSEADBGMSlot_NoRegister());
				OuterClass->ClassConfigName = FName(TEXT("Engine"));
				static TCppClassTypeInfo<TCppClassTypeTraits<USQEXSEADBGMManager> > StaticCppClassTypeInfo;
				OuterClass->SetCppTypeInfo(&StaticCppClassTypeInfo);
				OuterClass->StaticLink();
#if WITH_METADATA
				UMetaData* MetaData = OuterClass->GetOutermost()->GetMetaData();
				MetaData->SetValue(OuterClass, TEXT("IncludePath"), TEXT("SQEXSEADBGMManager.h"));
				MetaData->SetValue(OuterClass, TEXT("ModuleRelativePath"), TEXT("Public/SQEXSEADBGMManager.h"));
				MetaData->SetValue(NewProp_SlotSettings_, TEXT("ModuleRelativePath"), TEXT("Public/SQEXSEADBGMManager.h"));
				MetaData->SetValue(NewProp_PlayingSlot_, TEXT("ModuleRelativePath"), TEXT("Public/SQEXSEADBGMManager.h"));
				MetaData->SetValue(NewProp_Controllers_, TEXT("ModuleRelativePath"), TEXT("Public/SQEXSEADBGMManager.h"));
				MetaData->SetValue(NewProp_Slots_, TEXT("ModuleRelativePath"), TEXT("Public/SQEXSEADBGMManager.h"));
#endif
			}
		}
		check(OuterClass->GetClass());
		return OuterClass;
	}
	IMPLEMENT_CLASS(USQEXSEADBGMManager, 3701673579);
	static FCompiledInDefer Z_CompiledInDefer_UClass_USQEXSEADBGMManager(Z_Construct_UClass_USQEXSEADBGMManager, &USQEXSEADBGMManager::StaticClass, TEXT("/Script/SQEXSEAD"), TEXT("USQEXSEADBGMManager"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USQEXSEADBGMManager);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
PRAGMA_ENABLE_OPTIMIZATION
