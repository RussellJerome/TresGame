// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Public/ManaTexture.h"
PRAGMA_DISABLE_OPTIMIZATION
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeManaTexture() {}
// Cross Module References
	CRIWARERUNTIME_API UClass* Z_Construct_UClass_UManaTexture_NoRegister();
	CRIWARERUNTIME_API UClass* Z_Construct_UClass_UManaTexture();
	ENGINE_API UClass* Z_Construct_UClass_UTexture();
	UPackage* Z_Construct_UPackage__Script_CriWareRuntime();
	CRIWARERUNTIME_API UClass* Z_Construct_UClass_UManaComponentTexture_NoRegister();
	COREUOBJECT_API UEnum* Z_Construct_UEnum_CoreUObject_EPixelFormat();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_TextureAddress();
	CRIWARERUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FManaEventPointInfo();
	CRIWARERUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FManaVideoTrackInfo();
// End Cross Module References
	void UManaTexture::StaticRegisterNativesUManaTexture()
	{
	}
	UClass* Z_Construct_UClass_UManaTexture_NoRegister()
	{
		return UManaTexture::StaticClass();
	}
	UClass* Z_Construct_UClass_UManaTexture()
	{
		static UClass* OuterClass = NULL;
		if (!OuterClass)
		{
			Z_Construct_UClass_UTexture();
			Z_Construct_UPackage__Script_CriWareRuntime();
			OuterClass = UManaTexture::StaticClass();
			if (!(OuterClass->ClassFlags & CLASS_Constructed))
			{
				UObjectForceRegistration(OuterClass);
				OuterClass->ClassFlags |= (EClassFlags)0x20880080u;


				UProperty* NewProp_ComponentTextures = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("ComponentTextures"), RF_Public|RF_Transient|RF_MarkAsNative) UArrayProperty(CPP_PROPERTY_BASE(ComponentTextures, UManaTexture), 0x0010040000020015);
				UProperty* NewProp_ComponentTextures_Inner = new(EC_InternalUseOnlyConstructor, NewProp_ComponentTextures, TEXT("ComponentTextures"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(FObjectInitializer(), EC_CppProperty, 0, 0x0000000000020000, Z_Construct_UClass_UManaComponentTexture_NoRegister());
				CPP_BOOL_PROPERTY_BITMASK_STRUCT(bHDR, UManaTexture);
				UProperty* NewProp_bHDR = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("bHDR"), RF_Public|RF_Transient|RF_MarkAsNative) UBoolProperty(FObjectInitializer(), EC_CppProperty, CPP_BOOL_PROPERTY_OFFSET(bHDR, UManaTexture), 0x0010050000000015, CPP_BOOL_PROPERTY_BITMASK(bHDR, UManaTexture), sizeof(uint8), false);
				UProperty* NewProp_OverrideFormat = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("OverrideFormat"), RF_Public|RF_Transient|RF_MarkAsNative) UByteProperty(CPP_PROPERTY_BASE(OverrideFormat, UManaTexture), 0x0010000000000000, Z_Construct_UEnum_CoreUObject_EPixelFormat());
				UProperty* NewProp_TargetGamma = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("TargetGamma"), RF_Public|RF_Transient|RF_MarkAsNative) UFloatProperty(CPP_PROPERTY_BASE(TargetGamma, UManaTexture), 0x0010040000000005);
				UProperty* NewProp_ClearColor = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("ClearColor"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(CPP_PROPERTY_BASE(ClearColor, UManaTexture), 0x0010050000000005, Z_Construct_UScriptStruct_FLinearColor());
				UProperty* NewProp_AddressY = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("AddressY"), RF_Public|RF_Transient|RF_MarkAsNative) UByteProperty(CPP_PROPERTY_BASE(AddressY, UManaTexture), 0x0010050000000005, Z_Construct_UEnum_Engine_TextureAddress());
				UProperty* NewProp_AddressX = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("AddressX"), RF_Public|RF_Transient|RF_MarkAsNative) UByteProperty(CPP_PROPERTY_BASE(AddressX, UManaTexture), 0x0010050000000005, Z_Construct_UEnum_Engine_TextureAddress());
				CPP_BOOL_PROPERTY_BITMASK_STRUCT(bRenderToTexture, UManaTexture);
				UProperty* NewProp_bRenderToTexture = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("bRenderToTexture"), RF_Public|RF_Transient|RF_MarkAsNative) UBoolProperty(FObjectInitializer(), EC_CppProperty, CPP_BOOL_PROPERTY_OFFSET(bRenderToTexture, UManaTexture), 0x0010000000000005, CPP_BOOL_PROPERTY_BITMASK(bRenderToTexture, UManaTexture), sizeof(uint8), false);
				UProperty* NewProp_NumSubtitleChannels = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("NumSubtitleChannels"), RF_Public|RF_Transient|RF_MarkAsNative) UIntProperty(CPP_PROPERTY_BASE(NumSubtitleChannels, UManaTexture), 0x0010000000020015);
				UProperty* NewProp_EventPointInfo = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("EventPointInfo"), RF_Public|RF_Transient|RF_MarkAsNative) UArrayProperty(CPP_PROPERTY_BASE(EventPointInfo, UManaTexture), 0x0010000000020015);
				UProperty* NewProp_EventPointInfo_Inner = new(EC_InternalUseOnlyConstructor, NewProp_EventPointInfo, TEXT("EventPointInfo"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(FObjectInitializer(), EC_CppProperty, 0, 0x0000000000020000, Z_Construct_UScriptStruct_FManaEventPointInfo());
				UProperty* NewProp_VideoTrackInfo = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("VideoTrackInfo"), RF_Public|RF_Transient|RF_MarkAsNative) UArrayProperty(CPP_PROPERTY_BASE(VideoTrackInfo, UManaTexture), 0x0010000000020015);
				UProperty* NewProp_VideoTrackInfo_Inner = new(EC_InternalUseOnlyConstructor, NewProp_VideoTrackInfo, TEXT("VideoTrackInfo"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(FObjectInitializer(), EC_CppProperty, 0, 0x0000000000020000, Z_Construct_UScriptStruct_FManaVideoTrackInfo());
				UProperty* NewProp_MovieFilePath = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("MovieFilePath"), RF_Public|RF_Transient|RF_MarkAsNative) UStrProperty(CPP_PROPERTY_BASE(MovieFilePath, UManaTexture), 0x0010000000000005);
				static TCppClassTypeInfo<TCppClassTypeTraits<UManaTexture> > StaticCppClassTypeInfo;
				OuterClass->SetCppTypeInfo(&StaticCppClassTypeInfo);
				OuterClass->StaticLink();
#if WITH_METADATA
				UMetaData* MetaData = OuterClass->GetOutermost()->GetMetaData();
				MetaData->SetValue(OuterClass, TEXT("IncludePath"), TEXT("ManaTexture.h"));
				MetaData->SetValue(OuterClass, TEXT("ModuleRelativePath"), TEXT("Public/ManaTexture.h"));
				MetaData->SetValue(NewProp_ComponentTextures, TEXT("Category"), TEXT("ManaTexture"));
				MetaData->SetValue(NewProp_ComponentTextures, TEXT("ModuleRelativePath"), TEXT("Public/ManaTexture.h"));
				MetaData->SetValue(NewProp_bHDR, TEXT("Category"), TEXT("ManaTexture"));
				MetaData->SetValue(NewProp_bHDR, TEXT("ModuleRelativePath"), TEXT("Public/ManaTexture.h"));
				MetaData->SetValue(NewProp_OverrideFormat, TEXT("ModuleRelativePath"), TEXT("Public/ManaTexture.h"));
				MetaData->SetValue(NewProp_TargetGamma, TEXT("Category"), TEXT("ManaTexture"));
				MetaData->SetValue(NewProp_TargetGamma, TEXT("ModuleRelativePath"), TEXT("Public/ManaTexture.h"));
				MetaData->SetValue(NewProp_ClearColor, TEXT("Category"), TEXT("ManaTexture"));
				MetaData->SetValue(NewProp_ClearColor, TEXT("ModuleRelativePath"), TEXT("Public/ManaTexture.h"));
				MetaData->SetValue(NewProp_AddressY, TEXT("Category"), TEXT("ManaTexture"));
				MetaData->SetValue(NewProp_AddressY, TEXT("ModuleRelativePath"), TEXT("Public/ManaTexture.h"));
				MetaData->SetValue(NewProp_AddressX, TEXT("Category"), TEXT("ManaTexture"));
				MetaData->SetValue(NewProp_AddressX, TEXT("ModuleRelativePath"), TEXT("Public/ManaTexture.h"));
				MetaData->SetValue(NewProp_bRenderToTexture, TEXT("Category"), TEXT("ManaTexture"));
				MetaData->SetValue(NewProp_bRenderToTexture, TEXT("ModuleRelativePath"), TEXT("Public/ManaTexture.h"));
				MetaData->SetValue(NewProp_NumSubtitleChannels, TEXT("Category"), TEXT("ManaTexture"));
				MetaData->SetValue(NewProp_NumSubtitleChannels, TEXT("ModuleRelativePath"), TEXT("Public/ManaTexture.h"));
				MetaData->SetValue(NewProp_EventPointInfo, TEXT("Category"), TEXT("ManaTexture"));
				MetaData->SetValue(NewProp_EventPointInfo, TEXT("ModuleRelativePath"), TEXT("Public/ManaTexture.h"));
				MetaData->SetValue(NewProp_VideoTrackInfo, TEXT("Category"), TEXT("ManaTexture"));
				MetaData->SetValue(NewProp_VideoTrackInfo, TEXT("ModuleRelativePath"), TEXT("Public/ManaTexture.h"));
				MetaData->SetValue(NewProp_MovieFilePath, TEXT("Category"), TEXT("ManaTexture"));
				MetaData->SetValue(NewProp_MovieFilePath, TEXT("ModuleRelativePath"), TEXT("Public/ManaTexture.h"));
#endif
			}
		}
		check(OuterClass->GetClass());
		return OuterClass;
	}
	IMPLEMENT_CLASS(UManaTexture, 2118695557);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UManaTexture(Z_Construct_UClass_UManaTexture, &UManaTexture::StaticClass, TEXT("/Script/CriWareRuntime"), TEXT("UManaTexture"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UManaTexture);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
PRAGMA_ENABLE_OPTIMIZATION
