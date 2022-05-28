// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Public/Mercuna3DMovementInterface.h"
PRAGMA_DISABLE_OPTIMIZATION
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMercuna3DMovementInterface() {}
// Cross Module References
	MERCUNA3DMOVEMENT_API UClass* Z_Construct_UClass_UMercuna3DMovementInterface_NoRegister();
	MERCUNA3DMOVEMENT_API UClass* Z_Construct_UClass_UMercuna3DMovementInterface();
	COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
	UPackage* Z_Construct_UPackage__Script_Mercuna3DMovement();
// End Cross Module References
	void UMercuna3DMovementInterface::StaticRegisterNativesUMercuna3DMovementInterface()
	{
	}
	UClass* Z_Construct_UClass_UMercuna3DMovementInterface_NoRegister()
	{
		return UMercuna3DMovementInterface::StaticClass();
	}
	UClass* Z_Construct_UClass_UMercuna3DMovementInterface()
	{
		static UClass* OuterClass = NULL;
		if (!OuterClass)
		{
			Z_Construct_UClass_UInterface();
			Z_Construct_UPackage__Script_Mercuna3DMovement();
			OuterClass = UMercuna3DMovementInterface::StaticClass();
			if (!(OuterClass->ClassFlags & CLASS_Constructed))
			{
				UObjectForceRegistration(OuterClass);
				OuterClass->ClassFlags |= (EClassFlags)0x20104081u;


				static TCppClassTypeInfo<TCppClassTypeTraits<IMercuna3DMovementInterface> > StaticCppClassTypeInfo;
				OuterClass->SetCppTypeInfo(&StaticCppClassTypeInfo);
				OuterClass->StaticLink();
#if WITH_METADATA
				UMetaData* MetaData = OuterClass->GetOutermost()->GetMetaData();
				MetaData->SetValue(OuterClass, TEXT("ModuleRelativePath"), TEXT("Public/Mercuna3DMovementInterface.h"));
#endif
			}
		}
		check(OuterClass->GetClass());
		return OuterClass;
	}
	IMPLEMENT_CLASS(UMercuna3DMovementInterface, 2418267045);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UMercuna3DMovementInterface(Z_Construct_UClass_UMercuna3DMovementInterface, &UMercuna3DMovementInterface::StaticClass, TEXT("/Script/Mercuna3DMovement"), TEXT("UMercuna3DMovementInterface"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMercuna3DMovementInterface);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
PRAGMA_ENABLE_OPTIMIZATION
