// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Public/HoudiniAssetComponent.h"
PRAGMA_DISABLE_OPTIMIZATION
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeHoudiniAssetComponent() {}
// Cross Module References
	HOUDINIENGINERUNTIME_API UFunction* Z_Construct_UFunction_UHoudiniAssetComponent_GetAssetId();
	HOUDINIENGINERUNTIME_API UClass* Z_Construct_UClass_UHoudiniAssetComponent();
	HOUDINIENGINERUNTIME_API UClass* Z_Construct_UClass_UHoudiniAssetComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UPrimitiveComponent();
	UPackage* Z_Construct_UPackage__Script_HoudiniEngineRuntime();
	ENGINE_API UClass* Z_Construct_UClass_UAssetUserData_NoRegister();
	FOLIAGE_API UClass* Z_Construct_UClass_UFoliageType_InstancedStaticMesh_NoRegister();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FWalkableSlopeOverride();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_ECollisionTraceFlag();
	ENGINE_API UClass* Z_Construct_UClass_UPhysicalMaterial_NoRegister();
// End Cross Module References
	void UHoudiniAssetComponent::StaticRegisterNativesUHoudiniAssetComponent()
	{
		UClass* Class = UHoudiniAssetComponent::StaticClass();
		static const TNameNativePtrPair<ANSICHAR> AnsiFuncs[] = {
			{ "GetAssetId", (Native)&UHoudiniAssetComponent::execGetAssetId },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, AnsiFuncs, ARRAY_COUNT(AnsiFuncs));
	}
	UFunction* Z_Construct_UFunction_UHoudiniAssetComponent_GetAssetId()
	{
		struct HoudiniAssetComponent_eventGetAssetId_Parms
		{
			int32 ReturnValue;
		};
		UObject* Outer = Z_Construct_UClass_UHoudiniAssetComponent();
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("GetAssetId"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), nullptr, (EFunctionFlags)0x54020401, 65535, sizeof(HoudiniAssetComponent_eventGetAssetId_Parms));
			UProperty* NewProp_ReturnValue = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("ReturnValue"), RF_Public|RF_Transient|RF_MarkAsNative) UIntProperty(CPP_PROPERTY_BASE(ReturnValue, HoudiniAssetComponent_eventGetAssetId_Parms), 0x0010000000000580);
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Public/HoudiniAssetComponent.h"));
#endif
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UHoudiniAssetComponent_NoRegister()
	{
		return UHoudiniAssetComponent::StaticClass();
	}
	UClass* Z_Construct_UClass_UHoudiniAssetComponent()
	{
		static UClass* OuterClass = NULL;
		if (!OuterClass)
		{
			Z_Construct_UClass_UPrimitiveComponent();
			Z_Construct_UPackage__Script_HoudiniEngineRuntime();
			OuterClass = UHoudiniAssetComponent::StaticClass();
			if (!(OuterClass->ClassFlags & CLASS_Constructed))
			{
				UObjectForceRegistration(OuterClass);
				OuterClass->ClassFlags |= (EClassFlags)0x20B01080u;

				OuterClass->LinkChild(Z_Construct_UFunction_UHoudiniAssetComponent_GetAssetId());

				UProperty* NewProp_TempCookFolder = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("TempCookFolder"), RF_Public|RF_Transient|RF_MarkAsNative) UTextProperty(CPP_PROPERTY_BASE(TempCookFolder, UHoudiniAssetComponent), 0x0020080000000000);
				UProperty* NewProp_BakeFolder = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("BakeFolder"), RF_Public|RF_Transient|RF_MarkAsNative) UTextProperty(CPP_PROPERTY_BASE(BakeFolder, UHoudiniAssetComponent), 0x0020080000000000);
				UProperty* NewProp_GeneratedAssetUserData = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("GeneratedAssetUserData"), RF_Public|RF_Transient|RF_MarkAsNative) UArrayProperty(CPP_PROPERTY_BASE(GeneratedAssetUserData, UHoudiniAssetComponent), 0x0010048000000009);
				UProperty* NewProp_GeneratedAssetUserData_Inner = new(EC_InternalUseOnlyConstructor, NewProp_GeneratedAssetUserData, TEXT("GeneratedAssetUserData"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(FObjectInitializer(), EC_CppProperty, 0, 0x0000000000080008, Z_Construct_UClass_UAssetUserData_NoRegister());
				UProperty* NewProp_GeneratedFoliageDefaultSettings = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("GeneratedFoliageDefaultSettings"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(GeneratedFoliageDefaultSettings, UHoudiniAssetComponent), 0x0012040000080009, Z_Construct_UClass_UFoliageType_InstancedStaticMesh_NoRegister());
				UProperty* NewProp_GeneratedStreamingDistanceMultiplier = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("GeneratedStreamingDistanceMultiplier"), RF_Public|RF_Transient|RF_MarkAsNative) UFloatProperty(CPP_PROPERTY_BASE(GeneratedStreamingDistanceMultiplier, UHoudiniAssetComponent), 0x0010040000000001);
				CPP_BOOL_PROPERTY_BITMASK_STRUCT(bGeneratedUseMaximumStreamingTexelRatio, UHoudiniAssetComponent);
				UProperty* NewProp_bGeneratedUseMaximumStreamingTexelRatio = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("bGeneratedUseMaximumStreamingTexelRatio"), RF_Public|RF_Transient|RF_MarkAsNative) UBoolProperty(FObjectInitializer(), EC_CppProperty, CPP_BOOL_PROPERTY_OFFSET(bGeneratedUseMaximumStreamingTexelRatio, UHoudiniAssetComponent), 0x0010040000000001, CPP_BOOL_PROPERTY_BITMASK(bGeneratedUseMaximumStreamingTexelRatio, UHoudiniAssetComponent), sizeof(uint8), false);
				UProperty* NewProp_GeneratedLightMapCoordinateIndex = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("GeneratedLightMapCoordinateIndex"), RF_Public|RF_Transient|RF_MarkAsNative) UIntProperty(CPP_PROPERTY_BASE(GeneratedLightMapCoordinateIndex, UHoudiniAssetComponent), 0x0010040000000001);
				UProperty* NewProp_GeneratedWalkableSlopeOverride = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("GeneratedWalkableSlopeOverride"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(CPP_PROPERTY_BASE(GeneratedWalkableSlopeOverride, UHoudiniAssetComponent), 0x0010040000000001, Z_Construct_UScriptStruct_FWalkableSlopeOverride());
				UProperty* NewProp_GeneratedDistanceFieldResolutionScale = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("GeneratedDistanceFieldResolutionScale"), RF_Public|RF_Transient|RF_MarkAsNative) UFloatProperty(CPP_PROPERTY_BASE(GeneratedDistanceFieldResolutionScale, UHoudiniAssetComponent), 0x0010000000000001);
				UProperty* NewProp_GeneratedLpvBiasMultiplier = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("GeneratedLpvBiasMultiplier"), RF_Public|RF_Transient|RF_MarkAsNative) UFloatProperty(CPP_PROPERTY_BASE(GeneratedLpvBiasMultiplier, UHoudiniAssetComponent), 0x0010000000000015);
				UProperty* NewProp_GeneratedLightMapResolution = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("GeneratedLightMapResolution"), RF_Public|RF_Transient|RF_MarkAsNative) UIntProperty(CPP_PROPERTY_BASE(GeneratedLightMapResolution, UHoudiniAssetComponent), 0x0010000000000001);
				UProperty* NewProp_GeneratedCollisionTraceFlag = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("GeneratedCollisionTraceFlag"), RF_Public|RF_Transient|RF_MarkAsNative) UByteProperty(CPP_PROPERTY_BASE(GeneratedCollisionTraceFlag, UHoudiniAssetComponent), 0x0010000000000001, Z_Construct_UEnum_Engine_ECollisionTraceFlag());
				UProperty* NewProp_GeneratedPhysMaterial = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("GeneratedPhysMaterial"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(GeneratedPhysMaterial, UHoudiniAssetComponent), 0x0010000000000001, Z_Construct_UClass_UPhysicalMaterial_NoRegister());
				CPP_BOOL_PROPERTY_BITMASK_STRUCT(bGeneratedDoubleSidedGeometry, UHoudiniAssetComponent);
				UProperty* NewProp_bGeneratedDoubleSidedGeometry = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("bGeneratedDoubleSidedGeometry"), RF_Public|RF_Transient|RF_MarkAsNative) UBoolProperty(FObjectInitializer(), EC_CppProperty, CPP_BOOL_PROPERTY_OFFSET(bGeneratedDoubleSidedGeometry, UHoudiniAssetComponent), 0x0010000000000001, CPP_BOOL_PROPERTY_BITMASK(bGeneratedDoubleSidedGeometry, UHoudiniAssetComponent), sizeof(uint8), false);
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_UHoudiniAssetComponent_GetAssetId(), "GetAssetId"); // 3143529228
				static TCppClassTypeInfo<TCppClassTypeTraits<UHoudiniAssetComponent> > StaticCppClassTypeInfo;
				OuterClass->SetCppTypeInfo(&StaticCppClassTypeInfo);
				OuterClass->StaticLink();
#if WITH_METADATA
				UMetaData* MetaData = OuterClass->GetOutermost()->GetMetaData();
				MetaData->SetValue(OuterClass, TEXT("BlueprintSpawnableComponent"), TEXT(""));
				MetaData->SetValue(OuterClass, TEXT("ClassGroupNames"), TEXT("Custom"));
				MetaData->SetValue(OuterClass, TEXT("HideCategories"), TEXT("Mobility Trigger"));
				MetaData->SetValue(OuterClass, TEXT("IncludePath"), TEXT("HoudiniAssetComponent.h"));
				MetaData->SetValue(OuterClass, TEXT("ModuleRelativePath"), TEXT("Public/HoudiniAssetComponent.h"));
				MetaData->SetValue(NewProp_TempCookFolder, TEXT("ModuleRelativePath"), TEXT("Public/HoudiniAssetComponent.h"));
				MetaData->SetValue(NewProp_BakeFolder, TEXT("ModuleRelativePath"), TEXT("Public/HoudiniAssetComponent.h"));
				MetaData->SetValue(NewProp_GeneratedAssetUserData, TEXT("Category"), TEXT("HoudiniAssetComponent"));
				MetaData->SetValue(NewProp_GeneratedAssetUserData, TEXT("EditInline"), TEXT("true"));
				MetaData->SetValue(NewProp_GeneratedAssetUserData, TEXT("ModuleRelativePath"), TEXT("Public/HoudiniAssetComponent.h"));
				MetaData->SetValue(NewProp_GeneratedFoliageDefaultSettings, TEXT("Category"), TEXT("HoudiniAssetComponent"));
				MetaData->SetValue(NewProp_GeneratedFoliageDefaultSettings, TEXT("EditInline"), TEXT("true"));
				MetaData->SetValue(NewProp_GeneratedFoliageDefaultSettings, TEXT("ModuleRelativePath"), TEXT("Public/HoudiniAssetComponent.h"));
				MetaData->SetValue(NewProp_GeneratedStreamingDistanceMultiplier, TEXT("Category"), TEXT("HoudiniAssetComponent"));
				MetaData->SetValue(NewProp_GeneratedStreamingDistanceMultiplier, TEXT("ModuleRelativePath"), TEXT("Public/HoudiniAssetComponent.h"));
				MetaData->SetValue(NewProp_bGeneratedUseMaximumStreamingTexelRatio, TEXT("Category"), TEXT("HoudiniAssetComponent"));
				MetaData->SetValue(NewProp_bGeneratedUseMaximumStreamingTexelRatio, TEXT("ModuleRelativePath"), TEXT("Public/HoudiniAssetComponent.h"));
				MetaData->SetValue(NewProp_GeneratedLightMapCoordinateIndex, TEXT("Category"), TEXT("HoudiniAssetComponent"));
				MetaData->SetValue(NewProp_GeneratedLightMapCoordinateIndex, TEXT("ModuleRelativePath"), TEXT("Public/HoudiniAssetComponent.h"));
				MetaData->SetValue(NewProp_GeneratedWalkableSlopeOverride, TEXT("Category"), TEXT("HoudiniAssetComponent"));
				MetaData->SetValue(NewProp_GeneratedWalkableSlopeOverride, TEXT("ModuleRelativePath"), TEXT("Public/HoudiniAssetComponent.h"));
				MetaData->SetValue(NewProp_GeneratedDistanceFieldResolutionScale, TEXT("Category"), TEXT("HoudiniAssetComponent"));
				MetaData->SetValue(NewProp_GeneratedDistanceFieldResolutionScale, TEXT("ModuleRelativePath"), TEXT("Public/HoudiniAssetComponent.h"));
				MetaData->SetValue(NewProp_GeneratedLpvBiasMultiplier, TEXT("Category"), TEXT("HoudiniAssetComponent"));
				MetaData->SetValue(NewProp_GeneratedLpvBiasMultiplier, TEXT("ModuleRelativePath"), TEXT("Public/HoudiniAssetComponent.h"));
				MetaData->SetValue(NewProp_GeneratedLightMapResolution, TEXT("Category"), TEXT("HoudiniAssetComponent"));
				MetaData->SetValue(NewProp_GeneratedLightMapResolution, TEXT("ModuleRelativePath"), TEXT("Public/HoudiniAssetComponent.h"));
				MetaData->SetValue(NewProp_GeneratedCollisionTraceFlag, TEXT("Category"), TEXT("HoudiniAssetComponent"));
				MetaData->SetValue(NewProp_GeneratedCollisionTraceFlag, TEXT("ModuleRelativePath"), TEXT("Public/HoudiniAssetComponent.h"));
				MetaData->SetValue(NewProp_GeneratedPhysMaterial, TEXT("Category"), TEXT("HoudiniAssetComponent"));
				MetaData->SetValue(NewProp_GeneratedPhysMaterial, TEXT("ModuleRelativePath"), TEXT("Public/HoudiniAssetComponent.h"));
				MetaData->SetValue(NewProp_bGeneratedDoubleSidedGeometry, TEXT("Category"), TEXT("HoudiniAssetComponent"));
				MetaData->SetValue(NewProp_bGeneratedDoubleSidedGeometry, TEXT("ModuleRelativePath"), TEXT("Public/HoudiniAssetComponent.h"));
#endif
			}
		}
		check(OuterClass->GetClass());
		return OuterClass;
	}
	IMPLEMENT_CLASS(UHoudiniAssetComponent, 2808075461);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UHoudiniAssetComponent(Z_Construct_UClass_UHoudiniAssetComponent, &UHoudiniAssetComponent::StaticClass, TEXT("/Script/HoudiniEngineRuntime"), TEXT("UHoudiniAssetComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UHoudiniAssetComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
PRAGMA_ENABLE_OPTIMIZATION
