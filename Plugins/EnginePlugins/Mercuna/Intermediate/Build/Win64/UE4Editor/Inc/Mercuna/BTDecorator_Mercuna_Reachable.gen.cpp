// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Public/BTDecorator_Mercuna_Reachable.h"
PRAGMA_DISABLE_OPTIMIZATION
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBTDecorator_Mercuna_Reachable() {}
// Cross Module References
	MERCUNA_API UClass* Z_Construct_UClass_UBTDecorator_Mercuna_Reachable_NoRegister();
	MERCUNA_API UClass* Z_Construct_UClass_UBTDecorator_Mercuna_Reachable();
	AIMODULE_API UClass* Z_Construct_UClass_UBTDecorator();
	UPackage* Z_Construct_UPackage__Script_Mercuna();
	AIMODULE_API UScriptStruct* Z_Construct_UScriptStruct_FBlackboardKeySelector();
// End Cross Module References
	void UBTDecorator_Mercuna_Reachable::StaticRegisterNativesUBTDecorator_Mercuna_Reachable()
	{
	}
	UClass* Z_Construct_UClass_UBTDecorator_Mercuna_Reachable_NoRegister()
	{
		return UBTDecorator_Mercuna_Reachable::StaticClass();
	}
	UClass* Z_Construct_UClass_UBTDecorator_Mercuna_Reachable()
	{
		static UClass* OuterClass = NULL;
		if (!OuterClass)
		{
			Z_Construct_UClass_UBTDecorator();
			Z_Construct_UPackage__Script_Mercuna();
			OuterClass = UBTDecorator_Mercuna_Reachable::StaticClass();
			if (!(OuterClass->ClassFlags & CLASS_Constructed))
			{
				UObjectForceRegistration(OuterClass);
				OuterClass->ClassFlags |= (EClassFlags)0x20100080u;


				UProperty* NewProp_MaxPathLength = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("MaxPathLength"), RF_Public|RF_Transient|RF_MarkAsNative) UFloatProperty(CPP_PROPERTY_BASE(MaxPathLength, UBTDecorator_Mercuna_Reachable), 0x0020080000000001);
				UProperty* NewProp_Destination = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("Destination"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(CPP_PROPERTY_BASE(Destination, UBTDecorator_Mercuna_Reachable), 0x0020080000000001, Z_Construct_UScriptStruct_FBlackboardKeySelector());
				UProperty* NewProp_Source = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("Source"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(CPP_PROPERTY_BASE(Source, UBTDecorator_Mercuna_Reachable), 0x0020080000000001, Z_Construct_UScriptStruct_FBlackboardKeySelector());
				static TCppClassTypeInfo<TCppClassTypeTraits<UBTDecorator_Mercuna_Reachable> > StaticCppClassTypeInfo;
				OuterClass->SetCppTypeInfo(&StaticCppClassTypeInfo);
				OuterClass->StaticLink();
#if WITH_METADATA
				UMetaData* MetaData = OuterClass->GetOutermost()->GetMetaData();
				MetaData->SetValue(OuterClass, TEXT("IncludePath"), TEXT("BTDecorator_Mercuna_Reachable.h"));
				MetaData->SetValue(OuterClass, TEXT("ModuleRelativePath"), TEXT("Public/BTDecorator_Mercuna_Reachable.h"));
				MetaData->SetValue(NewProp_MaxPathLength, TEXT("Category"), TEXT("BTDecorator_Mercuna_Reachable"));
				MetaData->SetValue(NewProp_MaxPathLength, TEXT("ModuleRelativePath"), TEXT("Public/BTDecorator_Mercuna_Reachable.h"));
				MetaData->SetValue(NewProp_Destination, TEXT("Category"), TEXT("BTDecorator_Mercuna_Reachable"));
				MetaData->SetValue(NewProp_Destination, TEXT("ModuleRelativePath"), TEXT("Public/BTDecorator_Mercuna_Reachable.h"));
				MetaData->SetValue(NewProp_Source, TEXT("Category"), TEXT("BTDecorator_Mercuna_Reachable"));
				MetaData->SetValue(NewProp_Source, TEXT("ModuleRelativePath"), TEXT("Public/BTDecorator_Mercuna_Reachable.h"));
#endif
			}
		}
		check(OuterClass->GetClass());
		return OuterClass;
	}
	IMPLEMENT_CLASS(UBTDecorator_Mercuna_Reachable, 1771413429);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UBTDecorator_Mercuna_Reachable(Z_Construct_UClass_UBTDecorator_Mercuna_Reachable, &UBTDecorator_Mercuna_Reachable::StaticClass, TEXT("/Script/Mercuna"), TEXT("UBTDecorator_Mercuna_Reachable"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UBTDecorator_Mercuna_Reachable);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
PRAGMA_ENABLE_OPTIMIZATION
