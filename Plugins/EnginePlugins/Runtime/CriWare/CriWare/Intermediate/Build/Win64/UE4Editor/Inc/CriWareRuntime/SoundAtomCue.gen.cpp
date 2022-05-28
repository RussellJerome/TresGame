// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Public/SoundAtomCue.h"
PRAGMA_DISABLE_OPTIMIZATION
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSoundAtomCue() {}
// Cross Module References
	CRIWARERUNTIME_API UFunction* Z_Construct_UFunction_USoundAtomCue_GetLength();
	CRIWARERUNTIME_API UClass* Z_Construct_UClass_USoundAtomCue();
	CRIWARERUNTIME_API UClass* Z_Construct_UClass_USoundAtomCue_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_CriWareRuntime();
	CRIWARERUNTIME_API UClass* Z_Construct_UClass_USoundAtomCueSheet_NoRegister();
// End Cross Module References
	void USoundAtomCue::StaticRegisterNativesUSoundAtomCue()
	{
		UClass* Class = USoundAtomCue::StaticClass();
		static const TNameNativePtrPair<ANSICHAR> AnsiFuncs[] = {
			{ "GetLength", (Native)&USoundAtomCue::execGetLength },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, AnsiFuncs, ARRAY_COUNT(AnsiFuncs));
	}
	UFunction* Z_Construct_UFunction_USoundAtomCue_GetLength()
	{
		struct SoundAtomCue_eventGetLength_Parms
		{
			int32 ReturnValue;
		};
		UObject* Outer = Z_Construct_UClass_USoundAtomCue();
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("GetLength"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), nullptr, (EFunctionFlags)0x04020401, 65535, sizeof(SoundAtomCue_eventGetLength_Parms));
			UProperty* NewProp_ReturnValue = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("ReturnValue"), RF_Public|RF_Transient|RF_MarkAsNative) UIntProperty(CPP_PROPERTY_BASE(ReturnValue, SoundAtomCue_eventGetLength_Parms), 0x0010000000000580);
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Public/SoundAtomCue.h"));
#endif
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_USoundAtomCue_NoRegister()
	{
		return USoundAtomCue::StaticClass();
	}
	UClass* Z_Construct_UClass_USoundAtomCue()
	{
		static UClass* OuterClass = NULL;
		if (!OuterClass)
		{
			Z_Construct_UClass_UObject();
			Z_Construct_UPackage__Script_CriWareRuntime();
			OuterClass = USoundAtomCue::StaticClass();
			if (!(OuterClass->ClassFlags & CLASS_Constructed))
			{
				UObjectForceRegistration(OuterClass);
				OuterClass->ClassFlags |= (EClassFlags)0x20101080u;

				OuterClass->LinkChild(Z_Construct_UFunction_USoundAtomCue_GetLength());

				UProperty* NewProp_CueName = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("CueName"), RF_Public|RF_Transient|RF_MarkAsNative) UStrProperty(CPP_PROPERTY_BASE(CueName, USoundAtomCue), 0x0010000000000005);
				UProperty* NewProp_CueSheet = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("CueSheet"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(CueSheet, USoundAtomCue), 0x0010000000000005, Z_Construct_UClass_USoundAtomCueSheet_NoRegister());
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_USoundAtomCue_GetLength(), "GetLength"); // 2906750512
				static TCppClassTypeInfo<TCppClassTypeTraits<USoundAtomCue> > StaticCppClassTypeInfo;
				OuterClass->SetCppTypeInfo(&StaticCppClassTypeInfo);
				OuterClass->StaticLink();
#if WITH_METADATA
				UMetaData* MetaData = OuterClass->GetOutermost()->GetMetaData();
				MetaData->SetValue(OuterClass, TEXT("BlueprintType"), TEXT("true"));
				MetaData->SetValue(OuterClass, TEXT("IncludePath"), TEXT("SoundAtomCue.h"));
				MetaData->SetValue(OuterClass, TEXT("ModuleRelativePath"), TEXT("Public/SoundAtomCue.h"));
				MetaData->SetValue(NewProp_CueName, TEXT("Category"), TEXT("SoundAtomCue"));
				MetaData->SetValue(NewProp_CueName, TEXT("ModuleRelativePath"), TEXT("Public/SoundAtomCue.h"));
				MetaData->SetValue(NewProp_CueSheet, TEXT("Category"), TEXT("SoundAtomCue"));
				MetaData->SetValue(NewProp_CueSheet, TEXT("ModuleRelativePath"), TEXT("Public/SoundAtomCue.h"));
#endif
			}
		}
		check(OuterClass->GetClass());
		return OuterClass;
	}
	IMPLEMENT_CLASS(USoundAtomCue, 2283378849);
	static FCompiledInDefer Z_CompiledInDefer_UClass_USoundAtomCue(Z_Construct_UClass_USoundAtomCue, &USoundAtomCue::StaticClass, TEXT("/Script/CriWareRuntime"), TEXT("USoundAtomCue"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USoundAtomCue);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
PRAGMA_ENABLE_OPTIMIZATION
