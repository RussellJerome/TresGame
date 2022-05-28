// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Public/SQEXSEADAttachSeComponent.h"
PRAGMA_DISABLE_OPTIMIZATION
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSQEXSEADAttachSeComponent() {}
// Cross Module References
	SQEXSEAD_API UFunction* Z_Construct_UFunction_USQEXSEADAttachSeComponent_Stop();
	SQEXSEAD_API UClass* Z_Construct_UClass_USQEXSEADAttachSeComponent();
	SQEXSEAD_API UClass* Z_Construct_UClass_USQEXSEADAttachSeComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	UPackage* Z_Construct_UPackage__Script_SQEXSEAD();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UAudioComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USoundBase_NoRegister();
// End Cross Module References
	void USQEXSEADAttachSeComponent::StaticRegisterNativesUSQEXSEADAttachSeComponent()
	{
		UClass* Class = USQEXSEADAttachSeComponent::StaticClass();
		static const TNameNativePtrPair<ANSICHAR> AnsiFuncs[] = {
			{ "Stop", (Native)&USQEXSEADAttachSeComponent::execStop },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, AnsiFuncs, ARRAY_COUNT(AnsiFuncs));
	}
	UFunction* Z_Construct_UFunction_USQEXSEADAttachSeComponent_Stop()
	{
		UObject* Outer = Z_Construct_UClass_USQEXSEADAttachSeComponent();
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("Stop"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), nullptr, (EFunctionFlags)0x04020401, 65535);
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Public/SQEXSEADAttachSeComponent.h"));
#endif
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_USQEXSEADAttachSeComponent_NoRegister()
	{
		return USQEXSEADAttachSeComponent::StaticClass();
	}
	UClass* Z_Construct_UClass_USQEXSEADAttachSeComponent()
	{
		static UClass* OuterClass = NULL;
		if (!OuterClass)
		{
			Z_Construct_UClass_UActorComponent();
			Z_Construct_UPackage__Script_SQEXSEAD();
			OuterClass = USQEXSEADAttachSeComponent::StaticClass();
			if (!(OuterClass->ClassFlags & CLASS_Constructed))
			{
				UObjectForceRegistration(OuterClass);
				OuterClass->ClassFlags |= (EClassFlags)0x20B00080u;

				OuterClass->LinkChild(Z_Construct_UFunction_USQEXSEADAttachSeComponent_Stop());

				UProperty* NewProp_MyAttachComponent = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("MyAttachComponent"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(MyAttachComponent, USQEXSEADAttachSeComponent), 0x0040000000082008, Z_Construct_UClass_USceneComponent_NoRegister());
				UProperty* NewProp_MyAudioComponent = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("MyAudioComponent"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(MyAudioComponent, USQEXSEADAttachSeComponent), 0x0040000000082008, Z_Construct_UClass_UAudioComponent_NoRegister());
				CPP_BOOL_PROPERTY_BITMASK_STRUCT(bFollowOwnerVisible, USQEXSEADAttachSeComponent);
				UProperty* NewProp_bFollowOwnerVisible = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("bFollowOwnerVisible"), RF_Public|RF_Transient|RF_MarkAsNative) UBoolProperty(FObjectInitializer(), EC_CppProperty, CPP_BOOL_PROPERTY_OFFSET(bFollowOwnerVisible, USQEXSEADAttachSeComponent), 0x0010000000000015, CPP_BOOL_PROPERTY_BITMASK(bFollowOwnerVisible, USQEXSEADAttachSeComponent), sizeof(uint8), false);
				UProperty* NewProp_AttachPointName = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("AttachPointName"), RF_Public|RF_Transient|RF_MarkAsNative) UNameProperty(CPP_PROPERTY_BASE(AttachPointName, USQEXSEADAttachSeComponent), 0x0010000000000015);
				CPP_BOOL_PROPERTY_BITMASK_STRUCT(bFollow, USQEXSEADAttachSeComponent);
				UProperty* NewProp_bFollow = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("bFollow"), RF_Public|RF_Transient|RF_MarkAsNative) UBoolProperty(FObjectInitializer(), EC_CppProperty, CPP_BOOL_PROPERTY_OFFSET(bFollow, USQEXSEADAttachSeComponent), 0x0010000000000015, CPP_BOOL_PROPERTY_BITMASK(bFollow, USQEXSEADAttachSeComponent), sizeof(uint8), false);
				UProperty* NewProp_FadeOutTime = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("FadeOutTime"), RF_Public|RF_Transient|RF_MarkAsNative) UFloatProperty(CPP_PROPERTY_BASE(FadeOutTime, USQEXSEADAttachSeComponent), 0x0010000000000015);
				UProperty* NewProp_FadeInTime = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("FadeInTime"), RF_Public|RF_Transient|RF_MarkAsNative) UFloatProperty(CPP_PROPERTY_BASE(FadeInTime, USQEXSEADAttachSeComponent), 0x0010000000000015);
				UProperty* NewProp_SoundAsset = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("SoundAsset"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(SoundAsset, USQEXSEADAttachSeComponent), 0x0010000000000015, Z_Construct_UClass_USoundBase_NoRegister());
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_USQEXSEADAttachSeComponent_Stop(), "Stop"); // 6226853
				static TCppClassTypeInfo<TCppClassTypeTraits<USQEXSEADAttachSeComponent> > StaticCppClassTypeInfo;
				OuterClass->SetCppTypeInfo(&StaticCppClassTypeInfo);
				OuterClass->StaticLink();
#if WITH_METADATA
				UMetaData* MetaData = OuterClass->GetOutermost()->GetMetaData();
				MetaData->SetValue(OuterClass, TEXT("BlueprintSpawnableComponent"), TEXT(""));
				MetaData->SetValue(OuterClass, TEXT("BlueprintType"), TEXT("true"));
				MetaData->SetValue(OuterClass, TEXT("ClassGroupNames"), TEXT("Custom"));
				MetaData->SetValue(OuterClass, TEXT("IncludePath"), TEXT("SQEXSEADAttachSeComponent.h"));
				MetaData->SetValue(OuterClass, TEXT("ModuleRelativePath"), TEXT("Public/SQEXSEADAttachSeComponent.h"));
				MetaData->SetValue(NewProp_MyAttachComponent, TEXT("EditInline"), TEXT("true"));
				MetaData->SetValue(NewProp_MyAttachComponent, TEXT("ModuleRelativePath"), TEXT("Public/SQEXSEADAttachSeComponent.h"));
				MetaData->SetValue(NewProp_MyAudioComponent, TEXT("EditInline"), TEXT("true"));
				MetaData->SetValue(NewProp_MyAudioComponent, TEXT("ModuleRelativePath"), TEXT("Public/SQEXSEADAttachSeComponent.h"));
				MetaData->SetValue(NewProp_bFollowOwnerVisible, TEXT("Category"), TEXT("SQEXSEADAttachSeComponent"));
				MetaData->SetValue(NewProp_bFollowOwnerVisible, TEXT("ModuleRelativePath"), TEXT("Public/SQEXSEADAttachSeComponent.h"));
				MetaData->SetValue(NewProp_AttachPointName, TEXT("Category"), TEXT("SQEXSEADAttachSeComponent"));
				MetaData->SetValue(NewProp_AttachPointName, TEXT("ModuleRelativePath"), TEXT("Public/SQEXSEADAttachSeComponent.h"));
				MetaData->SetValue(NewProp_bFollow, TEXT("Category"), TEXT("SQEXSEADAttachSeComponent"));
				MetaData->SetValue(NewProp_bFollow, TEXT("ModuleRelativePath"), TEXT("Public/SQEXSEADAttachSeComponent.h"));
				MetaData->SetValue(NewProp_FadeOutTime, TEXT("Category"), TEXT("SQEXSEADAttachSeComponent"));
				MetaData->SetValue(NewProp_FadeOutTime, TEXT("ModuleRelativePath"), TEXT("Public/SQEXSEADAttachSeComponent.h"));
				MetaData->SetValue(NewProp_FadeInTime, TEXT("Category"), TEXT("SQEXSEADAttachSeComponent"));
				MetaData->SetValue(NewProp_FadeInTime, TEXT("ModuleRelativePath"), TEXT("Public/SQEXSEADAttachSeComponent.h"));
				MetaData->SetValue(NewProp_SoundAsset, TEXT("Category"), TEXT("SQEXSEADAttachSeComponent"));
				MetaData->SetValue(NewProp_SoundAsset, TEXT("ModuleRelativePath"), TEXT("Public/SQEXSEADAttachSeComponent.h"));
#endif
			}
		}
		check(OuterClass->GetClass());
		return OuterClass;
	}
	IMPLEMENT_CLASS(USQEXSEADAttachSeComponent, 3248045733);
	static FCompiledInDefer Z_CompiledInDefer_UClass_USQEXSEADAttachSeComponent(Z_Construct_UClass_USQEXSEADAttachSeComponent, &USQEXSEADAttachSeComponent::StaticClass, TEXT("/Script/SQEXSEAD"), TEXT("USQEXSEADAttachSeComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USQEXSEADAttachSeComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
PRAGMA_ENABLE_OPTIMIZATION
