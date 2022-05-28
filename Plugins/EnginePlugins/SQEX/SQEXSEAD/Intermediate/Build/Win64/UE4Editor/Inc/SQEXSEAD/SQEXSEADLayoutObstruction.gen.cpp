// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Public/SQEXSEADLayoutObstruction.h"
PRAGMA_DISABLE_OPTIMIZATION
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSQEXSEADLayoutObstruction() {}
// Cross Module References
	SQEXSEAD_API UClass* Z_Construct_UClass_ASQEXSEADLayoutObstruction_NoRegister();
	SQEXSEAD_API UClass* Z_Construct_UClass_ASQEXSEADLayoutObstruction();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_SQEXSEAD();
	SQEXSEAD_API UClass* Z_Construct_UClass_USQEXSEADLayoutObstructionComponent_NoRegister();
// End Cross Module References
	void ASQEXSEADLayoutObstruction::StaticRegisterNativesASQEXSEADLayoutObstruction()
	{
	}
	UClass* Z_Construct_UClass_ASQEXSEADLayoutObstruction_NoRegister()
	{
		return ASQEXSEADLayoutObstruction::StaticClass();
	}
	UClass* Z_Construct_UClass_ASQEXSEADLayoutObstruction()
	{
		static UClass* OuterClass = NULL;
		if (!OuterClass)
		{
			Z_Construct_UClass_AActor();
			Z_Construct_UPackage__Script_SQEXSEAD();
			OuterClass = ASQEXSEADLayoutObstruction::StaticClass();
			if (!(OuterClass->ClassFlags & CLASS_Constructed))
			{
				UObjectForceRegistration(OuterClass);
				OuterClass->ClassFlags |= (EClassFlags)0x20880080u;


				UProperty* NewProp_ObstructionComponent = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("ObstructionComponent"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(ObstructionComponent, ASQEXSEADLayoutObstruction), 0x00120000000a001d, Z_Construct_UClass_USQEXSEADLayoutObstructionComponent_NoRegister());
				static TCppClassTypeInfo<TCppClassTypeTraits<ASQEXSEADLayoutObstruction> > StaticCppClassTypeInfo;
				OuterClass->SetCppTypeInfo(&StaticCppClassTypeInfo);
				OuterClass->StaticLink();
#if WITH_METADATA
				UMetaData* MetaData = OuterClass->GetOutermost()->GetMetaData();
				MetaData->SetValue(OuterClass, TEXT("IncludePath"), TEXT("SQEXSEADLayoutObstruction.h"));
				MetaData->SetValue(OuterClass, TEXT("ModuleRelativePath"), TEXT("Public/SQEXSEADLayoutObstruction.h"));
				MetaData->SetValue(NewProp_ObstructionComponent, TEXT("Category"), TEXT("SQEXSEADLayoutObstruction"));
				MetaData->SetValue(NewProp_ObstructionComponent, TEXT("EditInline"), TEXT("true"));
				MetaData->SetValue(NewProp_ObstructionComponent, TEXT("ModuleRelativePath"), TEXT("Public/SQEXSEADLayoutObstruction.h"));
#endif
			}
		}
		check(OuterClass->GetClass());
		return OuterClass;
	}
	IMPLEMENT_CLASS(ASQEXSEADLayoutObstruction, 3845067559);
	static FCompiledInDefer Z_CompiledInDefer_UClass_ASQEXSEADLayoutObstruction(Z_Construct_UClass_ASQEXSEADLayoutObstruction, &ASQEXSEADLayoutObstruction::StaticClass, TEXT("/Script/SQEXSEAD"), TEXT("ASQEXSEADLayoutObstruction"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ASQEXSEADLayoutObstruction);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
PRAGMA_ENABLE_OPTIMIZATION
