// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Public/MaterialExpressionManaMovieFormatSwitch.h"
PRAGMA_DISABLE_OPTIMIZATION
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMaterialExpressionManaMovieFormatSwitch() {}
// Cross Module References
	CRIWARERUNTIME_API UClass* Z_Construct_UClass_UMaterialExpressionManaMovieFormatSwitch_NoRegister();
	CRIWARERUNTIME_API UClass* Z_Construct_UClass_UMaterialExpressionManaMovieFormatSwitch();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialExpression();
	UPackage* Z_Construct_UPackage__Script_CriWareRuntime();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FExpressionInput();
// End Cross Module References
	void UMaterialExpressionManaMovieFormatSwitch::StaticRegisterNativesUMaterialExpressionManaMovieFormatSwitch()
	{
	}
	UClass* Z_Construct_UClass_UMaterialExpressionManaMovieFormatSwitch_NoRegister()
	{
		return UMaterialExpressionManaMovieFormatSwitch::StaticClass();
	}
	UClass* Z_Construct_UClass_UMaterialExpressionManaMovieFormatSwitch()
	{
		static UClass* OuterClass = NULL;
		if (!OuterClass)
		{
			Z_Construct_UClass_UMaterialExpression();
			Z_Construct_UPackage__Script_CriWareRuntime();
			OuterClass = UMaterialExpressionManaMovieFormatSwitch::StaticClass();
			if (!(OuterClass->ClassFlags & CLASS_Constructed))
			{
				UObjectForceRegistration(OuterClass);
				OuterClass->ClassFlags |= (EClassFlags)0x20082080u;


				UProperty* NewProp_Inputs = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("Inputs"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(CPP_PROPERTY_BASE(Inputs, UMaterialExpressionManaMovieFormatSwitch), 0x0010000000000000, Z_Construct_UScriptStruct_FExpressionInput());
				NewProp_Inputs->ArrayDim = CPP_ARRAY_DIM(Inputs, UMaterialExpressionManaMovieFormatSwitch);
				static TCppClassTypeInfo<TCppClassTypeTraits<UMaterialExpressionManaMovieFormatSwitch> > StaticCppClassTypeInfo;
				OuterClass->SetCppTypeInfo(&StaticCppClassTypeInfo);
				OuterClass->StaticLink();
#if WITH_METADATA
				UMetaData* MetaData = OuterClass->GetOutermost()->GetMetaData();
				MetaData->SetValue(OuterClass, TEXT("HideCategories"), TEXT("Object"));
				MetaData->SetValue(OuterClass, TEXT("IncludePath"), TEXT("MaterialExpressionManaMovieFormatSwitch.h"));
				MetaData->SetValue(OuterClass, TEXT("ModuleRelativePath"), TEXT("Public/MaterialExpressionManaMovieFormatSwitch.h"));
				MetaData->SetValue(NewProp_Inputs, TEXT("ModuleRelativePath"), TEXT("Public/MaterialExpressionManaMovieFormatSwitch.h"));
#endif
			}
		}
		check(OuterClass->GetClass());
		return OuterClass;
	}
	IMPLEMENT_CLASS(UMaterialExpressionManaMovieFormatSwitch, 3528511188);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UMaterialExpressionManaMovieFormatSwitch(Z_Construct_UClass_UMaterialExpressionManaMovieFormatSwitch, &UMaterialExpressionManaMovieFormatSwitch::StaticClass, TEXT("/Script/CriWareRuntime"), TEXT("UMaterialExpressionManaMovieFormatSwitch"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMaterialExpressionManaMovieFormatSwitch);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
PRAGMA_ENABLE_OPTIMIZATION
