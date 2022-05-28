// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Public/OnlineSubsystemEOS_TresSettings.h"
PRAGMA_DISABLE_OPTIMIZATION
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeOnlineSubsystemEOS_TresSettings() {}
// Cross Module References
	ONLINESUBSYSTEMEOS_TRES_API UClass* Z_Construct_UClass_UOnlineSubsystemEOS_TresSettings_NoRegister();
	ONLINESUBSYSTEMEOS_TRES_API UClass* Z_Construct_UClass_UOnlineSubsystemEOS_TresSettings();
	ENGINE_API UClass* Z_Construct_UClass_UDeveloperSettings();
	UPackage* Z_Construct_UPackage__Script_OnlineSubsystemEOS_Tres();
	ONLINESUBSYSTEMEOS_TRES_API UScriptStruct* Z_Construct_UScriptStruct_FOnlineSubsystemEOS_TresArtifact();
// End Cross Module References
	void UOnlineSubsystemEOS_TresSettings::StaticRegisterNativesUOnlineSubsystemEOS_TresSettings()
	{
	}
	UClass* Z_Construct_UClass_UOnlineSubsystemEOS_TresSettings_NoRegister()
	{
		return UOnlineSubsystemEOS_TresSettings::StaticClass();
	}
	UClass* Z_Construct_UClass_UOnlineSubsystemEOS_TresSettings()
	{
		static UClass* OuterClass = NULL;
		if (!OuterClass)
		{
			Z_Construct_UClass_UDeveloperSettings();
			Z_Construct_UPackage__Script_OnlineSubsystemEOS_Tres();
			OuterClass = UOnlineSubsystemEOS_TresSettings::StaticClass();
			if (!(OuterClass->ClassFlags & CLASS_Constructed))
			{
				UObjectForceRegistration(OuterClass);
				OuterClass->ClassFlags |= (EClassFlags)0x20000086u;


				UProperty* NewProp_m_Artifacts = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("m_Artifacts"), RF_Public|RF_Transient|RF_MarkAsNative) UArrayProperty(CPP_PROPERTY_BASE(m_Artifacts, UOnlineSubsystemEOS_TresSettings), 0x0010000000004001);
				UProperty* NewProp_m_Artifacts_Inner = new(EC_InternalUseOnlyConstructor, NewProp_m_Artifacts, TEXT("m_Artifacts"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(FObjectInitializer(), EC_CppProperty, 0, 0x0000000000004000, Z_Construct_UScriptStruct_FOnlineSubsystemEOS_TresArtifact());
				UProperty* NewProp_m_DevAuthCredentials = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("m_DevAuthCredentials"), RF_Public|RF_Transient|RF_MarkAsNative) UStrProperty(CPP_PROPERTY_BASE(m_DevAuthCredentials, UOnlineSubsystemEOS_TresSettings), 0x0010000000004001);
				UProperty* NewProp_m_DevAuthHost = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("m_DevAuthHost"), RF_Public|RF_Transient|RF_MarkAsNative) UStrProperty(CPP_PROPERTY_BASE(m_DevAuthHost, UOnlineSubsystemEOS_TresSettings), 0x0010000000004001);
				CPP_BOOL_PROPERTY_BITMASK_STRUCT(m_DiableSocialOverlay, UOnlineSubsystemEOS_TresSettings);
				UProperty* NewProp_m_DiableSocialOverlay = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("m_DiableSocialOverlay"), RF_Public|RF_Transient|RF_MarkAsNative) UBoolProperty(FObjectInitializer(), EC_CppProperty, CPP_BOOL_PROPERTY_OFFSET(m_DiableSocialOverlay, UOnlineSubsystemEOS_TresSettings), 0x0010000000004001, CPP_BOOL_PROPERTY_BITMASK(m_DiableSocialOverlay, UOnlineSubsystemEOS_TresSettings), sizeof(bool), true);
				CPP_BOOL_PROPERTY_BITMASK_STRUCT(m_DiableOverlay, UOnlineSubsystemEOS_TresSettings);
				UProperty* NewProp_m_DiableOverlay = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("m_DiableOverlay"), RF_Public|RF_Transient|RF_MarkAsNative) UBoolProperty(FObjectInitializer(), EC_CppProperty, CPP_BOOL_PROPERTY_OFFSET(m_DiableOverlay, UOnlineSubsystemEOS_TresSettings), 0x0010000000004001, CPP_BOOL_PROPERTY_BITMASK(m_DiableOverlay, UOnlineSubsystemEOS_TresSettings), sizeof(bool), true);
				UProperty* NewProp_m_DeploymentID = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("m_DeploymentID"), RF_Public|RF_Transient|RF_MarkAsNative) UNameProperty(CPP_PROPERTY_BASE(m_DeploymentID, UOnlineSubsystemEOS_TresSettings), 0x0010000000004001);
				UProperty* NewProp_m_SandboxID = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("m_SandboxID"), RF_Public|RF_Transient|RF_MarkAsNative) UNameProperty(CPP_PROPERTY_BASE(m_SandboxID, UOnlineSubsystemEOS_TresSettings), 0x0010000000004001);
				UProperty* NewProp_m_ProductID = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("m_ProductID"), RF_Public|RF_Transient|RF_MarkAsNative) UNameProperty(CPP_PROPERTY_BASE(m_ProductID, UOnlineSubsystemEOS_TresSettings), 0x0010000000004001);
				UProperty* NewProp_m_ProductVersion = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("m_ProductVersion"), RF_Public|RF_Transient|RF_MarkAsNative) UStrProperty(CPP_PROPERTY_BASE(m_ProductVersion, UOnlineSubsystemEOS_TresSettings), 0x0010000000004001);
				UProperty* NewProp_m_ProductName = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("m_ProductName"), RF_Public|RF_Transient|RF_MarkAsNative) UStrProperty(CPP_PROPERTY_BASE(m_ProductName, UOnlineSubsystemEOS_TresSettings), 0x0010000000004001);
				OuterClass->ClassConfigName = FName(TEXT("EOS_Tres"));
				static TCppClassTypeInfo<TCppClassTypeTraits<UOnlineSubsystemEOS_TresSettings> > StaticCppClassTypeInfo;
				OuterClass->SetCppTypeInfo(&StaticCppClassTypeInfo);
				OuterClass->StaticLink();
#if WITH_METADATA
				UMetaData* MetaData = OuterClass->GetOutermost()->GetMetaData();
				MetaData->SetValue(OuterClass, TEXT("IncludePath"), TEXT("OnlineSubsystemEOS_TresSettings.h"));
				MetaData->SetValue(OuterClass, TEXT("ModuleRelativePath"), TEXT("Public/OnlineSubsystemEOS_TresSettings.h"));
				MetaData->SetValue(NewProp_m_Artifacts, TEXT("Category"), TEXT("OnlineSubsystemEOS_TresSettings"));
				MetaData->SetValue(NewProp_m_Artifacts, TEXT("ModuleRelativePath"), TEXT("Public/OnlineSubsystemEOS_TresSettings.h"));
				MetaData->SetValue(NewProp_m_DevAuthCredentials, TEXT("Category"), TEXT("OnlineSubsystemEOS_TresSettings"));
				MetaData->SetValue(NewProp_m_DevAuthCredentials, TEXT("ModuleRelativePath"), TEXT("Public/OnlineSubsystemEOS_TresSettings.h"));
				MetaData->SetValue(NewProp_m_DevAuthHost, TEXT("Category"), TEXT("OnlineSubsystemEOS_TresSettings"));
				MetaData->SetValue(NewProp_m_DevAuthHost, TEXT("ModuleRelativePath"), TEXT("Public/OnlineSubsystemEOS_TresSettings.h"));
				MetaData->SetValue(NewProp_m_DiableSocialOverlay, TEXT("Category"), TEXT("OnlineSubsystemEOS_TresSettings"));
				MetaData->SetValue(NewProp_m_DiableSocialOverlay, TEXT("ModuleRelativePath"), TEXT("Public/OnlineSubsystemEOS_TresSettings.h"));
				MetaData->SetValue(NewProp_m_DiableOverlay, TEXT("Category"), TEXT("OnlineSubsystemEOS_TresSettings"));
				MetaData->SetValue(NewProp_m_DiableOverlay, TEXT("ModuleRelativePath"), TEXT("Public/OnlineSubsystemEOS_TresSettings.h"));
				MetaData->SetValue(NewProp_m_DeploymentID, TEXT("Category"), TEXT("OnlineSubsystemEOS_TresSettings"));
				MetaData->SetValue(NewProp_m_DeploymentID, TEXT("ModuleRelativePath"), TEXT("Public/OnlineSubsystemEOS_TresSettings.h"));
				MetaData->SetValue(NewProp_m_SandboxID, TEXT("Category"), TEXT("OnlineSubsystemEOS_TresSettings"));
				MetaData->SetValue(NewProp_m_SandboxID, TEXT("ModuleRelativePath"), TEXT("Public/OnlineSubsystemEOS_TresSettings.h"));
				MetaData->SetValue(NewProp_m_ProductID, TEXT("Category"), TEXT("OnlineSubsystemEOS_TresSettings"));
				MetaData->SetValue(NewProp_m_ProductID, TEXT("ModuleRelativePath"), TEXT("Public/OnlineSubsystemEOS_TresSettings.h"));
				MetaData->SetValue(NewProp_m_ProductVersion, TEXT("Category"), TEXT("OnlineSubsystemEOS_TresSettings"));
				MetaData->SetValue(NewProp_m_ProductVersion, TEXT("ModuleRelativePath"), TEXT("Public/OnlineSubsystemEOS_TresSettings.h"));
				MetaData->SetValue(NewProp_m_ProductName, TEXT("Category"), TEXT("OnlineSubsystemEOS_TresSettings"));
				MetaData->SetValue(NewProp_m_ProductName, TEXT("ModuleRelativePath"), TEXT("Public/OnlineSubsystemEOS_TresSettings.h"));
#endif
			}
		}
		check(OuterClass->GetClass());
		return OuterClass;
	}
	IMPLEMENT_CLASS(UOnlineSubsystemEOS_TresSettings, 1017495412);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UOnlineSubsystemEOS_TresSettings(Z_Construct_UClass_UOnlineSubsystemEOS_TresSettings, &UOnlineSubsystemEOS_TresSettings::StaticClass, TEXT("/Script/OnlineSubsystemEOS_Tres"), TEXT("UOnlineSubsystemEOS_TresSettings"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UOnlineSubsystemEOS_TresSettings);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
PRAGMA_ENABLE_OPTIMIZATION
