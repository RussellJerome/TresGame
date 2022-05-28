// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Public/CriFsLoaderComponent.h"
PRAGMA_DISABLE_OPTIMIZATION
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCriFsLoaderComponent() {}
// Cross Module References
	CRIWARERUNTIME_API UFunction* Z_Construct_UDelegateFunction_UCriFsLoaderComponent_OnLoadCompleted__DelegateSignature();
	CRIWARERUNTIME_API UClass* Z_Construct_UClass_UCriFsLoaderComponent();
	CRIWARERUNTIME_API UFunction* Z_Construct_UDelegateFunction_UCriFsLoaderComponent_OnLoadError__DelegateSignature();
	CRIWARERUNTIME_API UFunction* Z_Construct_UFunction_UCriFsLoaderComponent_GetDataArray();
	CRIWARERUNTIME_API UFunction* Z_Construct_UFunction_UCriFsLoaderComponent_GetStatus();
	CRIWARERUNTIME_API UEnum* Z_Construct_UEnum_CriWareRuntime_ECriFsLoaderStatus();
	CRIWARERUNTIME_API UFunction* Z_Construct_UFunction_UCriFsLoaderComponent_Load();
	CRIWARERUNTIME_API UClass* Z_Construct_UClass_UCriFsLoaderComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent();
	UPackage* Z_Construct_UPackage__Script_CriWareRuntime();
// End Cross Module References
	UFunction* Z_Construct_UDelegateFunction_UCriFsLoaderComponent_OnLoadCompleted__DelegateSignature()
	{
		UObject* Outer = Z_Construct_UClass_UCriFsLoaderComponent();
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("OnLoadCompleted__DelegateSignature"), RF_Public|RF_Transient|RF_MarkAsNative) UDelegateFunction(FObjectInitializer(), nullptr, (EFunctionFlags)0x00120000, 65535);
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Public/CriFsLoaderComponent.h"));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UDelegateFunction_UCriFsLoaderComponent_OnLoadError__DelegateSignature()
	{
		UObject* Outer = Z_Construct_UClass_UCriFsLoaderComponent();
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("OnLoadError__DelegateSignature"), RF_Public|RF_Transient|RF_MarkAsNative) UDelegateFunction(FObjectInitializer(), nullptr, (EFunctionFlags)0x00120000, 65535);
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Public/CriFsLoaderComponent.h"));
#endif
		}
		return ReturnFunction;
	}
	void UCriFsLoaderComponent::StaticRegisterNativesUCriFsLoaderComponent()
	{
		UClass* Class = UCriFsLoaderComponent::StaticClass();
		static const TNameNativePtrPair<ANSICHAR> AnsiFuncs[] = {
			{ "GetDataArray", (Native)&UCriFsLoaderComponent::execGetDataArray },
			{ "GetStatus", (Native)&UCriFsLoaderComponent::execGetStatus },
			{ "Load", (Native)&UCriFsLoaderComponent::execLoad },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, AnsiFuncs, ARRAY_COUNT(AnsiFuncs));
	}
	UFunction* Z_Construct_UFunction_UCriFsLoaderComponent_GetDataArray()
	{
		struct CriFsLoaderComponent_eventGetDataArray_Parms
		{
			TArray<uint8> ReturnValue;
		};
		UObject* Outer = Z_Construct_UClass_UCriFsLoaderComponent();
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("GetDataArray"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), nullptr, (EFunctionFlags)0x04020401, 65535, sizeof(CriFsLoaderComponent_eventGetDataArray_Parms));
			UProperty* NewProp_ReturnValue = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("ReturnValue"), RF_Public|RF_Transient|RF_MarkAsNative) UArrayProperty(CPP_PROPERTY_BASE(ReturnValue, CriFsLoaderComponent_eventGetDataArray_Parms), 0x0010000000000580);
			UProperty* NewProp_ReturnValue_Inner = new(EC_InternalUseOnlyConstructor, NewProp_ReturnValue, TEXT("ReturnValue"), RF_Public|RF_Transient|RF_MarkAsNative) UByteProperty(FObjectInitializer(), EC_CppProperty, 0, 0x0000000000000000);
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Public/CriFsLoaderComponent.h"));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UCriFsLoaderComponent_GetStatus()
	{
		struct CriFsLoaderComponent_eventGetStatus_Parms
		{
			ECriFsLoaderStatus ReturnValue;
		};
		UObject* Outer = Z_Construct_UClass_UCriFsLoaderComponent();
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("GetStatus"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), nullptr, (EFunctionFlags)0x04020401, 65535, sizeof(CriFsLoaderComponent_eventGetStatus_Parms));
			UProperty* NewProp_ReturnValue = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("ReturnValue"), RF_Public|RF_Transient|RF_MarkAsNative) UEnumProperty(CPP_PROPERTY_BASE(ReturnValue, CriFsLoaderComponent_eventGetStatus_Parms), 0x0010000000000580, Z_Construct_UEnum_CriWareRuntime_ECriFsLoaderStatus());
			UProperty* NewProp_ReturnValue_Underlying = new(EC_InternalUseOnlyConstructor, NewProp_ReturnValue, TEXT("UnderlyingType"), RF_Public|RF_Transient|RF_MarkAsNative) UByteProperty(FObjectInitializer(), EC_CppProperty, 0, 0x0000000000000000);
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Public/CriFsLoaderComponent.h"));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UCriFsLoaderComponent_Load()
	{
		UObject* Outer = Z_Construct_UClass_UCriFsLoaderComponent();
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("Load"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), nullptr, (EFunctionFlags)0x04020401, 65535);
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Public/CriFsLoaderComponent.h"));
#endif
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UCriFsLoaderComponent_NoRegister()
	{
		return UCriFsLoaderComponent::StaticClass();
	}
	UClass* Z_Construct_UClass_UCriFsLoaderComponent()
	{
		static UClass* OuterClass = NULL;
		if (!OuterClass)
		{
			Z_Construct_UClass_USceneComponent();
			Z_Construct_UPackage__Script_CriWareRuntime();
			OuterClass = UCriFsLoaderComponent::StaticClass();
			if (!(OuterClass->ClassFlags & CLASS_Constructed))
			{
				UObjectForceRegistration(OuterClass);
				OuterClass->ClassFlags |= (EClassFlags)0x20B00080u;

				OuterClass->LinkChild(Z_Construct_UFunction_UCriFsLoaderComponent_GetDataArray());
				OuterClass->LinkChild(Z_Construct_UFunction_UCriFsLoaderComponent_GetStatus());
				OuterClass->LinkChild(Z_Construct_UFunction_UCriFsLoaderComponent_Load());
				OuterClass->LinkChild(Z_Construct_UDelegateFunction_UCriFsLoaderComponent_OnLoadCompleted__DelegateSignature());
				OuterClass->LinkChild(Z_Construct_UDelegateFunction_UCriFsLoaderComponent_OnLoadError__DelegateSignature());

				UProperty* NewProp_OnLoadError = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("OnLoadError"), RF_Public|RF_Transient|RF_MarkAsNative) UDelegateProperty(CPP_PROPERTY_BASE(OnLoadError, UCriFsLoaderComponent), 0x0010000000080004, Z_Construct_UDelegateFunction_UCriFsLoaderComponent_OnLoadError__DelegateSignature());
				UProperty* NewProp_OnLoadCompleted = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("OnLoadCompleted"), RF_Public|RF_Transient|RF_MarkAsNative) UDelegateProperty(CPP_PROPERTY_BASE(OnLoadCompleted, UCriFsLoaderComponent), 0x0010000000080004, Z_Construct_UDelegateFunction_UCriFsLoaderComponent_OnLoadCompleted__DelegateSignature());
				UProperty* NewProp_FilePath = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("FilePath"), RF_Public|RF_Transient|RF_MarkAsNative) UStrProperty(CPP_PROPERTY_BASE(FilePath, UCriFsLoaderComponent), 0x0010000000000005);
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_UCriFsLoaderComponent_GetDataArray(), "GetDataArray"); // 2829113695
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_UCriFsLoaderComponent_GetStatus(), "GetStatus"); // 100255182
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_UCriFsLoaderComponent_Load(), "Load"); // 1672833142
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UDelegateFunction_UCriFsLoaderComponent_OnLoadCompleted__DelegateSignature(), "OnLoadCompleted__DelegateSignature"); // 997343943
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UDelegateFunction_UCriFsLoaderComponent_OnLoadError__DelegateSignature(), "OnLoadError__DelegateSignature"); // 2609607248
				static TCppClassTypeInfo<TCppClassTypeTraits<UCriFsLoaderComponent> > StaticCppClassTypeInfo;
				OuterClass->SetCppTypeInfo(&StaticCppClassTypeInfo);
				OuterClass->StaticLink();
#if WITH_METADATA
				UMetaData* MetaData = OuterClass->GetOutermost()->GetMetaData();
				MetaData->SetValue(OuterClass, TEXT("BlueprintSpawnableComponent"), TEXT(""));
				MetaData->SetValue(OuterClass, TEXT("BlueprintType"), TEXT("true"));
				MetaData->SetValue(OuterClass, TEXT("ClassGroupNames"), TEXT("Custom"));
				MetaData->SetValue(OuterClass, TEXT("HideCategories"), TEXT("Trigger PhysicsVolume"));
				MetaData->SetValue(OuterClass, TEXT("IncludePath"), TEXT("CriFsLoaderComponent.h"));
				MetaData->SetValue(OuterClass, TEXT("ModuleRelativePath"), TEXT("Public/CriFsLoaderComponent.h"));
				MetaData->SetValue(NewProp_OnLoadError, TEXT("Category"), TEXT("CriFsLoaderComponent"));
				MetaData->SetValue(NewProp_OnLoadError, TEXT("ModuleRelativePath"), TEXT("Public/CriFsLoaderComponent.h"));
				MetaData->SetValue(NewProp_OnLoadCompleted, TEXT("Category"), TEXT("CriFsLoaderComponent"));
				MetaData->SetValue(NewProp_OnLoadCompleted, TEXT("ModuleRelativePath"), TEXT("Public/CriFsLoaderComponent.h"));
				MetaData->SetValue(NewProp_FilePath, TEXT("Category"), TEXT("CriFsLoaderComponent"));
				MetaData->SetValue(NewProp_FilePath, TEXT("ModuleRelativePath"), TEXT("Public/CriFsLoaderComponent.h"));
#endif
			}
		}
		check(OuterClass->GetClass());
		return OuterClass;
	}
	IMPLEMENT_CLASS(UCriFsLoaderComponent, 2940386946);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UCriFsLoaderComponent(Z_Construct_UClass_UCriFsLoaderComponent, &UCriFsLoaderComponent::StaticClass, TEXT("/Script/CriWareRuntime"), TEXT("UCriFsLoaderComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCriFsLoaderComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
PRAGMA_ENABLE_OPTIMIZATION
