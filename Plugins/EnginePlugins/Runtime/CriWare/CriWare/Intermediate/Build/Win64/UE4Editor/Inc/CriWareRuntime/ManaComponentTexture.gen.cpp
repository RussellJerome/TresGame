// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Public/ManaComponentTexture.h"
PRAGMA_DISABLE_OPTIMIZATION
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeManaComponentTexture() {}
// Cross Module References
	CRIWARERUNTIME_API UClass* Z_Construct_UClass_UManaComponentTexture_NoRegister();
	CRIWARERUNTIME_API UClass* Z_Construct_UClass_UManaComponentTexture();
	ENGINE_API UClass* Z_Construct_UClass_UTexture();
	UPackage* Z_Construct_UPackage__Script_CriWareRuntime();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_TextureAddress();
	CRIWARERUNTIME_API UEnum* Z_Construct_UEnum_CriWareRuntime_EManaComponentTextureType();
	COREUOBJECT_API UEnum* Z_Construct_UEnum_CoreUObject_EPixelFormat();
// End Cross Module References
	void UManaComponentTexture::StaticRegisterNativesUManaComponentTexture()
	{
	}
	UClass* Z_Construct_UClass_UManaComponentTexture_NoRegister()
	{
		return UManaComponentTexture::StaticClass();
	}
	UClass* Z_Construct_UClass_UManaComponentTexture()
	{
		static UClass* OuterClass = NULL;
		if (!OuterClass)
		{
			Z_Construct_UClass_UTexture();
			Z_Construct_UPackage__Script_CriWareRuntime();
			OuterClass = UManaComponentTexture::StaticClass();
			if (!(OuterClass->ClassFlags & CLASS_Constructed))
			{
				UObjectForceRegistration(OuterClass);
				OuterClass->ClassFlags |= (EClassFlags)0x20880080u;


				UProperty* NewProp_AddressY = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("AddressY"), RF_Public|RF_Transient|RF_MarkAsNative) UByteProperty(CPP_PROPERTY_BASE(AddressY, UManaComponentTexture), 0x0010050000020015, Z_Construct_UEnum_Engine_TextureAddress());
				UProperty* NewProp_AddressX = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("AddressX"), RF_Public|RF_Transient|RF_MarkAsNative) UByteProperty(CPP_PROPERTY_BASE(AddressX, UManaComponentTexture), 0x0010050000020015, Z_Construct_UEnum_Engine_TextureAddress());
				UProperty* NewProp_ComponentType = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("ComponentType"), RF_Public|RF_Transient|RF_MarkAsNative) UEnumProperty(CPP_PROPERTY_BASE(ComponentType, UManaComponentTexture), 0x0010000000020015, Z_Construct_UEnum_CriWareRuntime_EManaComponentTextureType());
				UProperty* NewProp_ComponentType_Underlying = new(EC_InternalUseOnlyConstructor, NewProp_ComponentType, TEXT("UnderlyingType"), RF_Public|RF_Transient|RF_MarkAsNative) UByteProperty(FObjectInitializer(), EC_CppProperty, 0, 0x0000000000000000);
				UProperty* NewProp_Format = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("Format"), RF_Public|RF_Transient|RF_MarkAsNative) UByteProperty(CPP_PROPERTY_BASE(Format, UManaComponentTexture), 0x0010000000020015, Z_Construct_UEnum_CoreUObject_EPixelFormat());
				UProperty* NewProp_SizeY = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("SizeY"), RF_Public|RF_Transient|RF_MarkAsNative) UIntProperty(CPP_PROPERTY_BASE(SizeY, UManaComponentTexture), 0x0010000000020015);
				UProperty* NewProp_SizeX = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("SizeX"), RF_Public|RF_Transient|RF_MarkAsNative) UIntProperty(CPP_PROPERTY_BASE(SizeX, UManaComponentTexture), 0x0010000000020015);
				static TCppClassTypeInfo<TCppClassTypeTraits<UManaComponentTexture> > StaticCppClassTypeInfo;
				OuterClass->SetCppTypeInfo(&StaticCppClassTypeInfo);
				OuterClass->StaticLink();
#if WITH_METADATA
				UMetaData* MetaData = OuterClass->GetOutermost()->GetMetaData();
				MetaData->SetValue(OuterClass, TEXT("IncludePath"), TEXT("ManaComponentTexture.h"));
				MetaData->SetValue(OuterClass, TEXT("ModuleRelativePath"), TEXT("Public/ManaComponentTexture.h"));
				MetaData->SetValue(NewProp_AddressY, TEXT("Category"), TEXT("ManaComponentTexture"));
				MetaData->SetValue(NewProp_AddressY, TEXT("ModuleRelativePath"), TEXT("Public/ManaComponentTexture.h"));
				MetaData->SetValue(NewProp_AddressX, TEXT("Category"), TEXT("ManaComponentTexture"));
				MetaData->SetValue(NewProp_AddressX, TEXT("ModuleRelativePath"), TEXT("Public/ManaComponentTexture.h"));
				MetaData->SetValue(NewProp_ComponentType, TEXT("Category"), TEXT("ManaComponentTexture"));
				MetaData->SetValue(NewProp_ComponentType, TEXT("ModuleRelativePath"), TEXT("Public/ManaComponentTexture.h"));
				MetaData->SetValue(NewProp_Format, TEXT("Category"), TEXT("ManaComponentTexture"));
				MetaData->SetValue(NewProp_Format, TEXT("ModuleRelativePath"), TEXT("Public/ManaComponentTexture.h"));
				MetaData->SetValue(NewProp_SizeY, TEXT("Category"), TEXT("ManaComponentTexture"));
				MetaData->SetValue(NewProp_SizeY, TEXT("ModuleRelativePath"), TEXT("Public/ManaComponentTexture.h"));
				MetaData->SetValue(NewProp_SizeX, TEXT("Category"), TEXT("ManaComponentTexture"));
				MetaData->SetValue(NewProp_SizeX, TEXT("ModuleRelativePath"), TEXT("Public/ManaComponentTexture.h"));
#endif
			}
		}
		check(OuterClass->GetClass());
		return OuterClass;
	}
	IMPLEMENT_CLASS(UManaComponentTexture, 3628339006);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UManaComponentTexture(Z_Construct_UClass_UManaComponentTexture, &UManaComponentTexture::StaticClass, TEXT("/Script/CriWareRuntime"), TEXT("UManaComponentTexture"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UManaComponentTexture);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
PRAGMA_ENABLE_OPTIMIZATION
