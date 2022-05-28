// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Public/HoudiniRuntimeSettings.h"
PRAGMA_DISABLE_OPTIMIZATION
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeHoudiniRuntimeSettings() {}
// Cross Module References
	HOUDINIENGINERUNTIME_API UClass* Z_Construct_UClass_UHoudiniRuntimeSettings_NoRegister();
	HOUDINIENGINERUNTIME_API UClass* Z_Construct_UClass_UHoudiniRuntimeSettings();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_HoudiniEngineRuntime();
	HOUDINIENGINERUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FHoudiniToolDescription();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FDirectoryPath();
	HOUDINIENGINERUNTIME_API UEnum* Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniRuntimeSettingsRecomputeFlag();
	ENGINE_API UClass* Z_Construct_UClass_UAssetUserData_NoRegister();
	FOLIAGE_API UClass* Z_Construct_UClass_UFoliageType_InstancedStaticMesh_NoRegister();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FWalkableSlopeOverride();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_ECollisionTraceFlag();
	ENGINE_API UClass* Z_Construct_UClass_UPhysicalMaterial_NoRegister();
	HOUDINIENGINERUNTIME_API UEnum* Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniRuntimeSettingsAxisImport();
	HOUDINIENGINERUNTIME_API UEnum* Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniRuntimeSettingsSessionType();
// End Cross Module References
	void UHoudiniRuntimeSettings::StaticRegisterNativesUHoudiniRuntimeSettings()
	{
	}
	UClass* Z_Construct_UClass_UHoudiniRuntimeSettings_NoRegister()
	{
		return UHoudiniRuntimeSettings::StaticClass();
	}
	UClass* Z_Construct_UClass_UHoudiniRuntimeSettings()
	{
		static UClass* OuterClass = NULL;
		if (!OuterClass)
		{
			Z_Construct_UClass_UObject();
			Z_Construct_UPackage__Script_HoudiniEngineRuntime();
			OuterClass = UHoudiniRuntimeSettings::StaticClass();
			if (!(OuterClass->ClassFlags & CLASS_Constructed))
			{
				UObjectForceRegistration(OuterClass);
				OuterClass->ClassFlags |= (EClassFlags)0x20900086u;


				UProperty* NewProp_AudioDsoSearchPath = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("AudioDsoSearchPath"), RF_Public|RF_Transient|RF_MarkAsNative) UStrProperty(CPP_PROPERTY_BASE(AudioDsoSearchPath, UHoudiniRuntimeSettings), 0x0010000000044001);
				UProperty* NewProp_ImageDsoSearchPath = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("ImageDsoSearchPath"), RF_Public|RF_Transient|RF_MarkAsNative) UStrProperty(CPP_PROPERTY_BASE(ImageDsoSearchPath, UHoudiniRuntimeSettings), 0x0010000000044001);
				UProperty* NewProp_DsoSearchPath = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("DsoSearchPath"), RF_Public|RF_Transient|RF_MarkAsNative) UStrProperty(CPP_PROPERTY_BASE(DsoSearchPath, UHoudiniRuntimeSettings), 0x0010000000044001);
				UProperty* NewProp_OtlSearchPath = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("OtlSearchPath"), RF_Public|RF_Transient|RF_MarkAsNative) UStrProperty(CPP_PROPERTY_BASE(OtlSearchPath, UHoudiniRuntimeSettings), 0x0010000000044001);
				UProperty* NewProp_HoudiniEnvironmentFiles = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("HoudiniEnvironmentFiles"), RF_Public|RF_Transient|RF_MarkAsNative) UStrProperty(CPP_PROPERTY_BASE(HoudiniEnvironmentFiles, UHoudiniRuntimeSettings), 0x0010000000044001);
				UProperty* NewProp_CookingThreadStackSize = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("CookingThreadStackSize"), RF_Public|RF_Transient|RF_MarkAsNative) UIntProperty(CPP_PROPERTY_BASE(CookingThreadStackSize, UHoudiniRuntimeSettings), 0x0010000000044001);
				UProperty* NewProp_CustomHoudiniTools = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("CustomHoudiniTools"), RF_Public|RF_Transient|RF_MarkAsNative) UArrayProperty(CPP_PROPERTY_BASE(CustomHoudiniTools, UHoudiniRuntimeSettings), 0x0010000000044001);
				UProperty* NewProp_CustomHoudiniTools_Inner = new(EC_InternalUseOnlyConstructor, NewProp_CustomHoudiniTools, TEXT("CustomHoudiniTools"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(FObjectInitializer(), EC_CppProperty, 0, 0x0000000000004000, Z_Construct_UScriptStruct_FHoudiniToolDescription());
				CPP_BOOL_PROPERTY_BITMASK_STRUCT(bHidePlacementModeHoudiniTools, UHoudiniRuntimeSettings);
				UProperty* NewProp_bHidePlacementModeHoudiniTools = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("bHidePlacementModeHoudiniTools"), RF_Public|RF_Transient|RF_MarkAsNative) UBoolProperty(FObjectInitializer(), EC_CppProperty, CPP_BOOL_PROPERTY_OFFSET(bHidePlacementModeHoudiniTools, UHoudiniRuntimeSettings), 0x0010000000044001, CPP_BOOL_PROPERTY_BITMASK(bHidePlacementModeHoudiniTools, UHoudiniRuntimeSettings), sizeof(bool), true);
				UProperty* NewProp_CustomHoudiniLocation = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("CustomHoudiniLocation"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(CPP_PROPERTY_BASE(CustomHoudiniLocation, UHoudiniRuntimeSettings), 0x0010000000064001, Z_Construct_UScriptStruct_FDirectoryPath());
				CPP_BOOL_PROPERTY_BITMASK_STRUCT(bUseCustomHoudiniLocation, UHoudiniRuntimeSettings);
				UProperty* NewProp_bUseCustomHoudiniLocation = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("bUseCustomHoudiniLocation"), RF_Public|RF_Transient|RF_MarkAsNative) UBoolProperty(FObjectInitializer(), EC_CppProperty, CPP_BOOL_PROPERTY_OFFSET(bUseCustomHoudiniLocation, UHoudiniRuntimeSettings), 0x0010000000044001, CPP_BOOL_PROPERTY_BITMASK(bUseCustomHoudiniLocation, UHoudiniRuntimeSettings), sizeof(bool), true);
				CPP_BOOL_PROPERTY_BITMASK_STRUCT(bBuildAdjacencyBuffer, UHoudiniRuntimeSettings);
				UProperty* NewProp_bBuildAdjacencyBuffer = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("bBuildAdjacencyBuffer"), RF_Public|RF_Transient|RF_MarkAsNative) UBoolProperty(FObjectInitializer(), EC_CppProperty, CPP_BOOL_PROPERTY_OFFSET(bBuildAdjacencyBuffer, UHoudiniRuntimeSettings), 0x0010000000044001, CPP_BOOL_PROPERTY_BITMASK(bBuildAdjacencyBuffer, UHoudiniRuntimeSettings), sizeof(bool), true);
				CPP_BOOL_PROPERTY_BITMASK_STRUCT(bUseMikkTSpace, UHoudiniRuntimeSettings);
				UProperty* NewProp_bUseMikkTSpace = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("bUseMikkTSpace"), RF_Public|RF_Transient|RF_MarkAsNative) UBoolProperty(FObjectInitializer(), EC_CppProperty, CPP_BOOL_PROPERTY_OFFSET(bUseMikkTSpace, UHoudiniRuntimeSettings), 0x0010000000044001, CPP_BOOL_PROPERTY_BITMASK(bUseMikkTSpace, UHoudiniRuntimeSettings), sizeof(bool), true);
				UProperty* NewProp_RecomputeTangentsFlag = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("RecomputeTangentsFlag"), RF_Public|RF_Transient|RF_MarkAsNative) UByteProperty(CPP_PROPERTY_BASE(RecomputeTangentsFlag, UHoudiniRuntimeSettings), 0x0010000000044001, Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniRuntimeSettingsRecomputeFlag());
				UProperty* NewProp_RecomputeNormalsFlag = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("RecomputeNormalsFlag"), RF_Public|RF_Transient|RF_MarkAsNative) UByteProperty(CPP_PROPERTY_BASE(RecomputeNormalsFlag, UHoudiniRuntimeSettings), 0x0010000000044001, Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniRuntimeSettingsRecomputeFlag());
				UProperty* NewProp_GenerateLightmapUVsFlag = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("GenerateLightmapUVsFlag"), RF_Public|RF_Transient|RF_MarkAsNative) UByteProperty(CPP_PROPERTY_BASE(GenerateLightmapUVsFlag, UHoudiniRuntimeSettings), 0x0010000000044001, Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniRuntimeSettingsRecomputeFlag());
				CPP_BOOL_PROPERTY_BITMASK_STRUCT(bRemoveDegenerates, UHoudiniRuntimeSettings);
				UProperty* NewProp_bRemoveDegenerates = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("bRemoveDegenerates"), RF_Public|RF_Transient|RF_MarkAsNative) UBoolProperty(FObjectInitializer(), EC_CppProperty, CPP_BOOL_PROPERTY_OFFSET(bRemoveDegenerates, UHoudiniRuntimeSettings), 0x0010000000044001, CPP_BOOL_PROPERTY_BITMASK(bRemoveDegenerates, UHoudiniRuntimeSettings), sizeof(bool), true);
				UProperty* NewProp_MinLightmapResolution = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("MinLightmapResolution"), RF_Public|RF_Transient|RF_MarkAsNative) UIntProperty(CPP_PROPERTY_BASE(MinLightmapResolution, UHoudiniRuntimeSettings), 0x0010000000044001);
				UProperty* NewProp_DstLightmapIndex = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("DstLightmapIndex"), RF_Public|RF_Transient|RF_MarkAsNative) UIntProperty(CPP_PROPERTY_BASE(DstLightmapIndex, UHoudiniRuntimeSettings), 0x0010000000044001);
				UProperty* NewProp_SrcLightmapIndex = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("SrcLightmapIndex"), RF_Public|RF_Transient|RF_MarkAsNative) UIntProperty(CPP_PROPERTY_BASE(SrcLightmapIndex, UHoudiniRuntimeSettings), 0x0010000000044001);
				CPP_BOOL_PROPERTY_BITMASK_STRUCT(bUseFullPrecisionUVs, UHoudiniRuntimeSettings);
				UProperty* NewProp_bUseFullPrecisionUVs = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("bUseFullPrecisionUVs"), RF_Public|RF_Transient|RF_MarkAsNative) UBoolProperty(FObjectInitializer(), EC_CppProperty, CPP_BOOL_PROPERTY_OFFSET(bUseFullPrecisionUVs, UHoudiniRuntimeSettings), 0x0010000000044001, CPP_BOOL_PROPERTY_BITMASK(bUseFullPrecisionUVs, UHoudiniRuntimeSettings), sizeof(bool), true);
				UProperty* NewProp_AssetUserData = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("AssetUserData"), RF_Public|RF_Transient|RF_MarkAsNative) UArrayProperty(CPP_PROPERTY_BASE(AssetUserData, UHoudiniRuntimeSettings), 0x0010048000000009);
				UProperty* NewProp_AssetUserData_Inner = new(EC_InternalUseOnlyConstructor, NewProp_AssetUserData, TEXT("AssetUserData"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(FObjectInitializer(), EC_CppProperty, 0, 0x0000000000080008, Z_Construct_UClass_UAssetUserData_NoRegister());
				UProperty* NewProp_FoliageDefaultSettings = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("FoliageDefaultSettings"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(FoliageDefaultSettings, UHoudiniRuntimeSettings), 0x0012040000080009, Z_Construct_UClass_UFoliageType_InstancedStaticMesh_NoRegister());
				UProperty* NewProp_StreamingDistanceMultiplier = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("StreamingDistanceMultiplier"), RF_Public|RF_Transient|RF_MarkAsNative) UFloatProperty(CPP_PROPERTY_BASE(StreamingDistanceMultiplier, UHoudiniRuntimeSettings), 0x0010040000044001);
				CPP_BOOL_PROPERTY_BITMASK_STRUCT(bUseMaximumStreamingTexelRatio, UHoudiniRuntimeSettings);
				UProperty* NewProp_bUseMaximumStreamingTexelRatio = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("bUseMaximumStreamingTexelRatio"), RF_Public|RF_Transient|RF_MarkAsNative) UBoolProperty(FObjectInitializer(), EC_CppProperty, CPP_BOOL_PROPERTY_OFFSET(bUseMaximumStreamingTexelRatio, UHoudiniRuntimeSettings), 0x0010040000044001, CPP_BOOL_PROPERTY_BITMASK(bUseMaximumStreamingTexelRatio, UHoudiniRuntimeSettings), sizeof(uint8), false);
				UProperty* NewProp_LightMapCoordinateIndex = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("LightMapCoordinateIndex"), RF_Public|RF_Transient|RF_MarkAsNative) UIntProperty(CPP_PROPERTY_BASE(LightMapCoordinateIndex, UHoudiniRuntimeSettings), 0x0010040000044001);
				UProperty* NewProp_WalkableSlopeOverride = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("WalkableSlopeOverride"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(CPP_PROPERTY_BASE(WalkableSlopeOverride, UHoudiniRuntimeSettings), 0x0010040000044001, Z_Construct_UScriptStruct_FWalkableSlopeOverride());
				UProperty* NewProp_GeneratedDistanceFieldResolutionScale = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("GeneratedDistanceFieldResolutionScale"), RF_Public|RF_Transient|RF_MarkAsNative) UFloatProperty(CPP_PROPERTY_BASE(GeneratedDistanceFieldResolutionScale, UHoudiniRuntimeSettings), 0x0010000000044001);
				UProperty* NewProp_LpvBiasMultiplier = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("LpvBiasMultiplier"), RF_Public|RF_Transient|RF_MarkAsNative) UFloatProperty(CPP_PROPERTY_BASE(LpvBiasMultiplier, UHoudiniRuntimeSettings), 0x0010000000044015);
				UProperty* NewProp_LightMapResolution = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("LightMapResolution"), RF_Public|RF_Transient|RF_MarkAsNative) UIntProperty(CPP_PROPERTY_BASE(LightMapResolution, UHoudiniRuntimeSettings), 0x0010000000044001);
				UProperty* NewProp_CollisionTraceFlag = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("CollisionTraceFlag"), RF_Public|RF_Transient|RF_MarkAsNative) UByteProperty(CPP_PROPERTY_BASE(CollisionTraceFlag, UHoudiniRuntimeSettings), 0x0010000000074001, Z_Construct_UEnum_Engine_ECollisionTraceFlag());
				UProperty* NewProp_PhysMaterial = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("PhysMaterial"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(PhysMaterial, UHoudiniRuntimeSettings), 0x0010000000000001, Z_Construct_UClass_UPhysicalMaterial_NoRegister());
				CPP_BOOL_PROPERTY_BITMASK_STRUCT(bDoubleSidedGeometry, UHoudiniRuntimeSettings);
				UProperty* NewProp_bDoubleSidedGeometry = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("bDoubleSidedGeometry"), RF_Public|RF_Transient|RF_MarkAsNative) UBoolProperty(FObjectInitializer(), EC_CppProperty, CPP_BOOL_PROPERTY_OFFSET(bDoubleSidedGeometry, UHoudiniRuntimeSettings), 0x0010000000044001, CPP_BOOL_PROPERTY_BITMASK(bDoubleSidedGeometry, UHoudiniRuntimeSettings), sizeof(uint8), false);
				UProperty* NewProp_ImportAxis = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("ImportAxis"), RF_Public|RF_Transient|RF_MarkAsNative) UByteProperty(CPP_PROPERTY_BASE(ImportAxis, UHoudiniRuntimeSettings), 0x0010000000044001, Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniRuntimeSettingsAxisImport());
				UProperty* NewProp_TransformScaleFactor = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("TransformScaleFactor"), RF_Public|RF_Transient|RF_MarkAsNative) UFloatProperty(CPP_PROPERTY_BASE(TransformScaleFactor, UHoudiniRuntimeSettings), 0x0010000000044001);
				UProperty* NewProp_GeneratedGeometryScaleFactor = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("GeneratedGeometryScaleFactor"), RF_Public|RF_Transient|RF_MarkAsNative) UFloatProperty(CPP_PROPERTY_BASE(GeneratedGeometryScaleFactor, UHoudiniRuntimeSettings), 0x0010000000044001);
				UProperty* NewProp_MarshallingLandscapesForcedMaxValue = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("MarshallingLandscapesForcedMaxValue"), RF_Public|RF_Transient|RF_MarkAsNative) UFloatProperty(CPP_PROPERTY_BASE(MarshallingLandscapesForcedMaxValue, UHoudiniRuntimeSettings), 0x0010000000064001);
				UProperty* NewProp_MarshallingLandscapesForcedMinValue = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("MarshallingLandscapesForcedMinValue"), RF_Public|RF_Transient|RF_MarkAsNative) UFloatProperty(CPP_PROPERTY_BASE(MarshallingLandscapesForcedMinValue, UHoudiniRuntimeSettings), 0x0010000000064001);
				CPP_BOOL_PROPERTY_BITMASK_STRUCT(MarshallingLandscapesForceMinMaxValues, UHoudiniRuntimeSettings);
				UProperty* NewProp_MarshallingLandscapesForceMinMaxValues = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("MarshallingLandscapesForceMinMaxValues"), RF_Public|RF_Transient|RF_MarkAsNative) UBoolProperty(FObjectInitializer(), EC_CppProperty, CPP_BOOL_PROPERTY_OFFSET(MarshallingLandscapesForceMinMaxValues, UHoudiniRuntimeSettings), 0x0010000000044001, CPP_BOOL_PROPERTY_BITMASK(MarshallingLandscapesForceMinMaxValues, UHoudiniRuntimeSettings), sizeof(bool), true);
				CPP_BOOL_PROPERTY_BITMASK_STRUCT(MarshallingLandscapesUseFullResolution, UHoudiniRuntimeSettings);
				UProperty* NewProp_MarshallingLandscapesUseFullResolution = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("MarshallingLandscapesUseFullResolution"), RF_Public|RF_Transient|RF_MarkAsNative) UBoolProperty(FObjectInitializer(), EC_CppProperty, CPP_BOOL_PROPERTY_OFFSET(MarshallingLandscapesUseFullResolution, UHoudiniRuntimeSettings), 0x0010000000044001, CPP_BOOL_PROPERTY_BITMASK(MarshallingLandscapesUseFullResolution, UHoudiniRuntimeSettings), sizeof(bool), true);
				UProperty* NewProp_MarshallingSplineResolution = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("MarshallingSplineResolution"), RF_Public|RF_Transient|RF_MarkAsNative) UFloatProperty(CPP_PROPERTY_BASE(MarshallingSplineResolution, UHoudiniRuntimeSettings), 0x0010000000044001);
				UProperty* NewProp_MarshallingAttributeInputSourceFile = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("MarshallingAttributeInputSourceFile"), RF_Public|RF_Transient|RF_MarkAsNative) UStrProperty(CPP_PROPERTY_BASE(MarshallingAttributeInputSourceFile, UHoudiniRuntimeSettings), 0x0010000000044001);
				UProperty* NewProp_MarshallingAttributeInputMeshName = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("MarshallingAttributeInputMeshName"), RF_Public|RF_Transient|RF_MarkAsNative) UStrProperty(CPP_PROPERTY_BASE(MarshallingAttributeInputMeshName, UHoudiniRuntimeSettings), 0x0010000000064001);
				UProperty* NewProp_MarshallingAttributeGeneratedMeshName = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("MarshallingAttributeGeneratedMeshName"), RF_Public|RF_Transient|RF_MarkAsNative) UStrProperty(CPP_PROPERTY_BASE(MarshallingAttributeGeneratedMeshName, UHoudiniRuntimeSettings), 0x0010000000064001);
				UProperty* NewProp_MarshallingAttributeLightmapResolution = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("MarshallingAttributeLightmapResolution"), RF_Public|RF_Transient|RF_MarkAsNative) UStrProperty(CPP_PROPERTY_BASE(MarshallingAttributeLightmapResolution, UHoudiniRuntimeSettings), 0x0010000000064001);
				UProperty* NewProp_MarshallingAttributeFaceSmoothingMask = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("MarshallingAttributeFaceSmoothingMask"), RF_Public|RF_Transient|RF_MarkAsNative) UStrProperty(CPP_PROPERTY_BASE(MarshallingAttributeFaceSmoothingMask, UHoudiniRuntimeSettings), 0x0010000000064001);
				UProperty* NewProp_MarshallingAttributeInstanceOverride = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("MarshallingAttributeInstanceOverride"), RF_Public|RF_Transient|RF_MarkAsNative) UStrProperty(CPP_PROPERTY_BASE(MarshallingAttributeInstanceOverride, UHoudiniRuntimeSettings), 0x0010000000064001);
				UProperty* NewProp_MarshallingAttributeMaterialHole = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("MarshallingAttributeMaterialHole"), RF_Public|RF_Transient|RF_MarkAsNative) UStrProperty(CPP_PROPERTY_BASE(MarshallingAttributeMaterialHole, UHoudiniRuntimeSettings), 0x0010000000064001);
				UProperty* NewProp_MarshallingAttributeMaterial = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("MarshallingAttributeMaterial"), RF_Public|RF_Transient|RF_MarkAsNative) UStrProperty(CPP_PROPERTY_BASE(MarshallingAttributeMaterial, UHoudiniRuntimeSettings), 0x0010000000064001);
				UProperty* NewProp_SimpleRenderedCollisionGroupNamePrefix = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("SimpleRenderedCollisionGroupNamePrefix"), RF_Public|RF_Transient|RF_MarkAsNative) UStrProperty(CPP_PROPERTY_BASE(SimpleRenderedCollisionGroupNamePrefix, UHoudiniRuntimeSettings), 0x0010000000064001);
				UProperty* NewProp_SimpleCollisionGroupNamePrefix = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("SimpleCollisionGroupNamePrefix"), RF_Public|RF_Transient|RF_MarkAsNative) UStrProperty(CPP_PROPERTY_BASE(SimpleCollisionGroupNamePrefix, UHoudiniRuntimeSettings), 0x0010000000064001);
				UProperty* NewProp_UCXRenderedCollisionGroupNamePrefix = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("UCXRenderedCollisionGroupNamePrefix"), RF_Public|RF_Transient|RF_MarkAsNative) UStrProperty(CPP_PROPERTY_BASE(UCXRenderedCollisionGroupNamePrefix, UHoudiniRuntimeSettings), 0x0010000000064001);
				UProperty* NewProp_UCXCollisionGroupNamePrefix = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("UCXCollisionGroupNamePrefix"), RF_Public|RF_Transient|RF_MarkAsNative) UStrProperty(CPP_PROPERTY_BASE(UCXCollisionGroupNamePrefix, UHoudiniRuntimeSettings), 0x0010000000064001);
				UProperty* NewProp_RenderedCollisionGroupNamePrefix = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("RenderedCollisionGroupNamePrefix"), RF_Public|RF_Transient|RF_MarkAsNative) UStrProperty(CPP_PROPERTY_BASE(RenderedCollisionGroupNamePrefix, UHoudiniRuntimeSettings), 0x0010000000064001);
				UProperty* NewProp_CollisionGroupNamePrefix = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("CollisionGroupNamePrefix"), RF_Public|RF_Transient|RF_MarkAsNative) UStrProperty(CPP_PROPERTY_BASE(CollisionGroupNamePrefix, UHoudiniRuntimeSettings), 0x0010000000064001);
				CPP_BOOL_PROPERTY_BITMASK_STRUCT(bTreatRampParametersAsMultiparms, UHoudiniRuntimeSettings);
				UProperty* NewProp_bTreatRampParametersAsMultiparms = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("bTreatRampParametersAsMultiparms"), RF_Public|RF_Transient|RF_MarkAsNative) UBoolProperty(FObjectInitializer(), EC_CppProperty, CPP_BOOL_PROPERTY_OFFSET(bTreatRampParametersAsMultiparms, UHoudiniRuntimeSettings), 0x0010000000044001, CPP_BOOL_PROPERTY_BITMASK(bTreatRampParametersAsMultiparms, UHoudiniRuntimeSettings), sizeof(bool), true);
				UProperty* NewProp_TemporaryCookFolder = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("TemporaryCookFolder"), RF_Public|RF_Transient|RF_MarkAsNative) UTextProperty(CPP_PROPERTY_BASE(TemporaryCookFolder, UHoudiniRuntimeSettings), 0x0010000000064001);
				CPP_BOOL_PROPERTY_BITMASK_STRUCT(bCookCurvesOnMouseRelease, UHoudiniRuntimeSettings);
				UProperty* NewProp_bCookCurvesOnMouseRelease = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("bCookCurvesOnMouseRelease"), RF_Public|RF_Transient|RF_MarkAsNative) UBoolProperty(FObjectInitializer(), EC_CppProperty, CPP_BOOL_PROPERTY_OFFSET(bCookCurvesOnMouseRelease, UHoudiniRuntimeSettings), 0x0010000000044001, CPP_BOOL_PROPERTY_BITMASK(bCookCurvesOnMouseRelease, UHoudiniRuntimeSettings), sizeof(bool), true);
				CPP_BOOL_PROPERTY_BITMASK_STRUCT(bDisplaySlateCookingNotifications, UHoudiniRuntimeSettings);
				UProperty* NewProp_bDisplaySlateCookingNotifications = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("bDisplaySlateCookingNotifications"), RF_Public|RF_Transient|RF_MarkAsNative) UBoolProperty(FObjectInitializer(), EC_CppProperty, CPP_BOOL_PROPERTY_OFFSET(bDisplaySlateCookingNotifications, UHoudiniRuntimeSettings), 0x0010000000044001, CPP_BOOL_PROPERTY_BITMASK(bDisplaySlateCookingNotifications, UHoudiniRuntimeSettings), sizeof(bool), true);
				CPP_BOOL_PROPERTY_BITMASK_STRUCT(bTransformChangeTriggersCooks, UHoudiniRuntimeSettings);
				UProperty* NewProp_bTransformChangeTriggersCooks = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("bTransformChangeTriggersCooks"), RF_Public|RF_Transient|RF_MarkAsNative) UBoolProperty(FObjectInitializer(), EC_CppProperty, CPP_BOOL_PROPERTY_OFFSET(bTransformChangeTriggersCooks, UHoudiniRuntimeSettings), 0x0010000000044001, CPP_BOOL_PROPERTY_BITMASK(bTransformChangeTriggersCooks, UHoudiniRuntimeSettings), sizeof(bool), true);
				CPP_BOOL_PROPERTY_BITMASK_STRUCT(bUploadTransformsToHoudiniEngine, UHoudiniRuntimeSettings);
				UProperty* NewProp_bUploadTransformsToHoudiniEngine = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("bUploadTransformsToHoudiniEngine"), RF_Public|RF_Transient|RF_MarkAsNative) UBoolProperty(FObjectInitializer(), EC_CppProperty, CPP_BOOL_PROPERTY_OFFSET(bUploadTransformsToHoudiniEngine, UHoudiniRuntimeSettings), 0x0010000000044001, CPP_BOOL_PROPERTY_BITMASK(bUploadTransformsToHoudiniEngine, UHoudiniRuntimeSettings), sizeof(bool), true);
				CPP_BOOL_PROPERTY_BITMASK_STRUCT(bEnableCooking, UHoudiniRuntimeSettings);
				UProperty* NewProp_bEnableCooking = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("bEnableCooking"), RF_Public|RF_Transient|RF_MarkAsNative) UBoolProperty(FObjectInitializer(), EC_CppProperty, CPP_BOOL_PROPERTY_OFFSET(bEnableCooking, UHoudiniRuntimeSettings), 0x0010000000044001, CPP_BOOL_PROPERTY_BITMASK(bEnableCooking, UHoudiniRuntimeSettings), sizeof(bool), true);
				CPP_BOOL_PROPERTY_BITMASK_STRUCT(bShowMultiAssetDialog, UHoudiniRuntimeSettings);
				UProperty* NewProp_bShowMultiAssetDialog = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("bShowMultiAssetDialog"), RF_Public|RF_Transient|RF_MarkAsNative) UBoolProperty(FObjectInitializer(), EC_CppProperty, CPP_BOOL_PROPERTY_OFFSET(bShowMultiAssetDialog, UHoudiniRuntimeSettings), 0x0010000000044001, CPP_BOOL_PROPERTY_BITMASK(bShowMultiAssetDialog, UHoudiniRuntimeSettings), sizeof(bool), true);
				UProperty* NewProp_AutomaticServerTimeout = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("AutomaticServerTimeout"), RF_Public|RF_Transient|RF_MarkAsNative) UFloatProperty(CPP_PROPERTY_BASE(AutomaticServerTimeout, UHoudiniRuntimeSettings), 0x0010000000044001);
				CPP_BOOL_PROPERTY_BITMASK_STRUCT(bStartAutomaticServer, UHoudiniRuntimeSettings);
				UProperty* NewProp_bStartAutomaticServer = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("bStartAutomaticServer"), RF_Public|RF_Transient|RF_MarkAsNative) UBoolProperty(FObjectInitializer(), EC_CppProperty, CPP_BOOL_PROPERTY_OFFSET(bStartAutomaticServer, UHoudiniRuntimeSettings), 0x0010000000044001, CPP_BOOL_PROPERTY_BITMASK(bStartAutomaticServer, UHoudiniRuntimeSettings), sizeof(bool), true);
				UProperty* NewProp_ServerPipeName = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("ServerPipeName"), RF_Public|RF_Transient|RF_MarkAsNative) UStrProperty(CPP_PROPERTY_BASE(ServerPipeName, UHoudiniRuntimeSettings), 0x0010000000044001);
				UProperty* NewProp_ServerPort = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("ServerPort"), RF_Public|RF_Transient|RF_MarkAsNative) UIntProperty(CPP_PROPERTY_BASE(ServerPort, UHoudiniRuntimeSettings), 0x0010000000044001);
				UProperty* NewProp_ServerHost = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("ServerHost"), RF_Public|RF_Transient|RF_MarkAsNative) UStrProperty(CPP_PROPERTY_BASE(ServerHost, UHoudiniRuntimeSettings), 0x0010000000044001);
				UProperty* NewProp_SessionType = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("SessionType"), RF_Public|RF_Transient|RF_MarkAsNative) UByteProperty(CPP_PROPERTY_BASE(SessionType, UHoudiniRuntimeSettings), 0x0010000000044001, Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniRuntimeSettingsSessionType());
				OuterClass->ClassConfigName = FName(TEXT("Engine"));
				static TCppClassTypeInfo<TCppClassTypeTraits<UHoudiniRuntimeSettings> > StaticCppClassTypeInfo;
				OuterClass->SetCppTypeInfo(&StaticCppClassTypeInfo);
				OuterClass->StaticLink();
#if WITH_METADATA
				UMetaData* MetaData = OuterClass->GetOutermost()->GetMetaData();
				MetaData->SetValue(OuterClass, TEXT("BlueprintType"), TEXT("true"));
				MetaData->SetValue(OuterClass, TEXT("IncludePath"), TEXT("HoudiniRuntimeSettings.h"));
				MetaData->SetValue(OuterClass, TEXT("ModuleRelativePath"), TEXT("Public/HoudiniRuntimeSettings.h"));
				MetaData->SetValue(NewProp_AudioDsoSearchPath, TEXT("Category"), TEXT("HoudiniRuntimeSettings"));
				MetaData->SetValue(NewProp_AudioDsoSearchPath, TEXT("ModuleRelativePath"), TEXT("Public/HoudiniRuntimeSettings.h"));
				MetaData->SetValue(NewProp_ImageDsoSearchPath, TEXT("Category"), TEXT("HoudiniRuntimeSettings"));
				MetaData->SetValue(NewProp_ImageDsoSearchPath, TEXT("ModuleRelativePath"), TEXT("Public/HoudiniRuntimeSettings.h"));
				MetaData->SetValue(NewProp_DsoSearchPath, TEXT("Category"), TEXT("HoudiniRuntimeSettings"));
				MetaData->SetValue(NewProp_DsoSearchPath, TEXT("ModuleRelativePath"), TEXT("Public/HoudiniRuntimeSettings.h"));
				MetaData->SetValue(NewProp_OtlSearchPath, TEXT("Category"), TEXT("HoudiniRuntimeSettings"));
				MetaData->SetValue(NewProp_OtlSearchPath, TEXT("ModuleRelativePath"), TEXT("Public/HoudiniRuntimeSettings.h"));
				MetaData->SetValue(NewProp_HoudiniEnvironmentFiles, TEXT("Category"), TEXT("HoudiniRuntimeSettings"));
				MetaData->SetValue(NewProp_HoudiniEnvironmentFiles, TEXT("ModuleRelativePath"), TEXT("Public/HoudiniRuntimeSettings.h"));
				MetaData->SetValue(NewProp_CookingThreadStackSize, TEXT("Category"), TEXT("HoudiniRuntimeSettings"));
				MetaData->SetValue(NewProp_CookingThreadStackSize, TEXT("ModuleRelativePath"), TEXT("Public/HoudiniRuntimeSettings.h"));
				MetaData->SetValue(NewProp_CustomHoudiniTools, TEXT("Category"), TEXT("HoudiniRuntimeSettings"));
				MetaData->SetValue(NewProp_CustomHoudiniTools, TEXT("ModuleRelativePath"), TEXT("Public/HoudiniRuntimeSettings.h"));
				MetaData->SetValue(NewProp_bHidePlacementModeHoudiniTools, TEXT("Category"), TEXT("HoudiniRuntimeSettings"));
				MetaData->SetValue(NewProp_bHidePlacementModeHoudiniTools, TEXT("ModuleRelativePath"), TEXT("Public/HoudiniRuntimeSettings.h"));
				MetaData->SetValue(NewProp_CustomHoudiniLocation, TEXT("Category"), TEXT("HoudiniRuntimeSettings"));
				MetaData->SetValue(NewProp_CustomHoudiniLocation, TEXT("ModuleRelativePath"), TEXT("Public/HoudiniRuntimeSettings.h"));
				MetaData->SetValue(NewProp_bUseCustomHoudiniLocation, TEXT("Category"), TEXT("HoudiniRuntimeSettings"));
				MetaData->SetValue(NewProp_bUseCustomHoudiniLocation, TEXT("ModuleRelativePath"), TEXT("Public/HoudiniRuntimeSettings.h"));
				MetaData->SetValue(NewProp_bBuildAdjacencyBuffer, TEXT("Category"), TEXT("HoudiniRuntimeSettings"));
				MetaData->SetValue(NewProp_bBuildAdjacencyBuffer, TEXT("ModuleRelativePath"), TEXT("Public/HoudiniRuntimeSettings.h"));
				MetaData->SetValue(NewProp_bUseMikkTSpace, TEXT("Category"), TEXT("HoudiniRuntimeSettings"));
				MetaData->SetValue(NewProp_bUseMikkTSpace, TEXT("ModuleRelativePath"), TEXT("Public/HoudiniRuntimeSettings.h"));
				MetaData->SetValue(NewProp_RecomputeTangentsFlag, TEXT("Category"), TEXT("HoudiniRuntimeSettings"));
				MetaData->SetValue(NewProp_RecomputeTangentsFlag, TEXT("ModuleRelativePath"), TEXT("Public/HoudiniRuntimeSettings.h"));
				MetaData->SetValue(NewProp_RecomputeNormalsFlag, TEXT("Category"), TEXT("HoudiniRuntimeSettings"));
				MetaData->SetValue(NewProp_RecomputeNormalsFlag, TEXT("ModuleRelativePath"), TEXT("Public/HoudiniRuntimeSettings.h"));
				MetaData->SetValue(NewProp_GenerateLightmapUVsFlag, TEXT("Category"), TEXT("HoudiniRuntimeSettings"));
				MetaData->SetValue(NewProp_GenerateLightmapUVsFlag, TEXT("ModuleRelativePath"), TEXT("Public/HoudiniRuntimeSettings.h"));
				MetaData->SetValue(NewProp_bRemoveDegenerates, TEXT("Category"), TEXT("HoudiniRuntimeSettings"));
				MetaData->SetValue(NewProp_bRemoveDegenerates, TEXT("ModuleRelativePath"), TEXT("Public/HoudiniRuntimeSettings.h"));
				MetaData->SetValue(NewProp_MinLightmapResolution, TEXT("Category"), TEXT("HoudiniRuntimeSettings"));
				MetaData->SetValue(NewProp_MinLightmapResolution, TEXT("ModuleRelativePath"), TEXT("Public/HoudiniRuntimeSettings.h"));
				MetaData->SetValue(NewProp_DstLightmapIndex, TEXT("Category"), TEXT("HoudiniRuntimeSettings"));
				MetaData->SetValue(NewProp_DstLightmapIndex, TEXT("ModuleRelativePath"), TEXT("Public/HoudiniRuntimeSettings.h"));
				MetaData->SetValue(NewProp_SrcLightmapIndex, TEXT("Category"), TEXT("HoudiniRuntimeSettings"));
				MetaData->SetValue(NewProp_SrcLightmapIndex, TEXT("ModuleRelativePath"), TEXT("Public/HoudiniRuntimeSettings.h"));
				MetaData->SetValue(NewProp_bUseFullPrecisionUVs, TEXT("Category"), TEXT("HoudiniRuntimeSettings"));
				MetaData->SetValue(NewProp_bUseFullPrecisionUVs, TEXT("ModuleRelativePath"), TEXT("Public/HoudiniRuntimeSettings.h"));
				MetaData->SetValue(NewProp_AssetUserData, TEXT("Category"), TEXT("HoudiniRuntimeSettings"));
				MetaData->SetValue(NewProp_AssetUserData, TEXT("EditInline"), TEXT("true"));
				MetaData->SetValue(NewProp_AssetUserData, TEXT("ModuleRelativePath"), TEXT("Public/HoudiniRuntimeSettings.h"));
				MetaData->SetValue(NewProp_FoliageDefaultSettings, TEXT("Category"), TEXT("HoudiniRuntimeSettings"));
				MetaData->SetValue(NewProp_FoliageDefaultSettings, TEXT("EditInline"), TEXT("true"));
				MetaData->SetValue(NewProp_FoliageDefaultSettings, TEXT("ModuleRelativePath"), TEXT("Public/HoudiniRuntimeSettings.h"));
				MetaData->SetValue(NewProp_StreamingDistanceMultiplier, TEXT("Category"), TEXT("HoudiniRuntimeSettings"));
				MetaData->SetValue(NewProp_StreamingDistanceMultiplier, TEXT("ModuleRelativePath"), TEXT("Public/HoudiniRuntimeSettings.h"));
				MetaData->SetValue(NewProp_bUseMaximumStreamingTexelRatio, TEXT("Category"), TEXT("HoudiniRuntimeSettings"));
				MetaData->SetValue(NewProp_bUseMaximumStreamingTexelRatio, TEXT("ModuleRelativePath"), TEXT("Public/HoudiniRuntimeSettings.h"));
				MetaData->SetValue(NewProp_LightMapCoordinateIndex, TEXT("Category"), TEXT("HoudiniRuntimeSettings"));
				MetaData->SetValue(NewProp_LightMapCoordinateIndex, TEXT("ModuleRelativePath"), TEXT("Public/HoudiniRuntimeSettings.h"));
				MetaData->SetValue(NewProp_WalkableSlopeOverride, TEXT("Category"), TEXT("HoudiniRuntimeSettings"));
				MetaData->SetValue(NewProp_WalkableSlopeOverride, TEXT("ModuleRelativePath"), TEXT("Public/HoudiniRuntimeSettings.h"));
				MetaData->SetValue(NewProp_GeneratedDistanceFieldResolutionScale, TEXT("Category"), TEXT("HoudiniRuntimeSettings"));
				MetaData->SetValue(NewProp_GeneratedDistanceFieldResolutionScale, TEXT("ModuleRelativePath"), TEXT("Public/HoudiniRuntimeSettings.h"));
				MetaData->SetValue(NewProp_LpvBiasMultiplier, TEXT("Category"), TEXT("HoudiniRuntimeSettings"));
				MetaData->SetValue(NewProp_LpvBiasMultiplier, TEXT("ModuleRelativePath"), TEXT("Public/HoudiniRuntimeSettings.h"));
				MetaData->SetValue(NewProp_LightMapResolution, TEXT("Category"), TEXT("HoudiniRuntimeSettings"));
				MetaData->SetValue(NewProp_LightMapResolution, TEXT("ModuleRelativePath"), TEXT("Public/HoudiniRuntimeSettings.h"));
				MetaData->SetValue(NewProp_CollisionTraceFlag, TEXT("Category"), TEXT("HoudiniRuntimeSettings"));
				MetaData->SetValue(NewProp_CollisionTraceFlag, TEXT("ModuleRelativePath"), TEXT("Public/HoudiniRuntimeSettings.h"));
				MetaData->SetValue(NewProp_PhysMaterial, TEXT("Category"), TEXT("HoudiniRuntimeSettings"));
				MetaData->SetValue(NewProp_PhysMaterial, TEXT("ModuleRelativePath"), TEXT("Public/HoudiniRuntimeSettings.h"));
				MetaData->SetValue(NewProp_bDoubleSidedGeometry, TEXT("Category"), TEXT("HoudiniRuntimeSettings"));
				MetaData->SetValue(NewProp_bDoubleSidedGeometry, TEXT("ModuleRelativePath"), TEXT("Public/HoudiniRuntimeSettings.h"));
				MetaData->SetValue(NewProp_ImportAxis, TEXT("Category"), TEXT("HoudiniRuntimeSettings"));
				MetaData->SetValue(NewProp_ImportAxis, TEXT("ModuleRelativePath"), TEXT("Public/HoudiniRuntimeSettings.h"));
				MetaData->SetValue(NewProp_TransformScaleFactor, TEXT("Category"), TEXT("HoudiniRuntimeSettings"));
				MetaData->SetValue(NewProp_TransformScaleFactor, TEXT("ModuleRelativePath"), TEXT("Public/HoudiniRuntimeSettings.h"));
				MetaData->SetValue(NewProp_GeneratedGeometryScaleFactor, TEXT("Category"), TEXT("HoudiniRuntimeSettings"));
				MetaData->SetValue(NewProp_GeneratedGeometryScaleFactor, TEXT("ModuleRelativePath"), TEXT("Public/HoudiniRuntimeSettings.h"));
				MetaData->SetValue(NewProp_MarshallingLandscapesForcedMaxValue, TEXT("Category"), TEXT("HoudiniRuntimeSettings"));
				MetaData->SetValue(NewProp_MarshallingLandscapesForcedMaxValue, TEXT("ModuleRelativePath"), TEXT("Public/HoudiniRuntimeSettings.h"));
				MetaData->SetValue(NewProp_MarshallingLandscapesForcedMinValue, TEXT("Category"), TEXT("HoudiniRuntimeSettings"));
				MetaData->SetValue(NewProp_MarshallingLandscapesForcedMinValue, TEXT("ModuleRelativePath"), TEXT("Public/HoudiniRuntimeSettings.h"));
				MetaData->SetValue(NewProp_MarshallingLandscapesForceMinMaxValues, TEXT("Category"), TEXT("HoudiniRuntimeSettings"));
				MetaData->SetValue(NewProp_MarshallingLandscapesForceMinMaxValues, TEXT("ModuleRelativePath"), TEXT("Public/HoudiniRuntimeSettings.h"));
				MetaData->SetValue(NewProp_MarshallingLandscapesUseFullResolution, TEXT("Category"), TEXT("HoudiniRuntimeSettings"));
				MetaData->SetValue(NewProp_MarshallingLandscapesUseFullResolution, TEXT("ModuleRelativePath"), TEXT("Public/HoudiniRuntimeSettings.h"));
				MetaData->SetValue(NewProp_MarshallingSplineResolution, TEXT("Category"), TEXT("HoudiniRuntimeSettings"));
				MetaData->SetValue(NewProp_MarshallingSplineResolution, TEXT("ModuleRelativePath"), TEXT("Public/HoudiniRuntimeSettings.h"));
				MetaData->SetValue(NewProp_MarshallingAttributeInputSourceFile, TEXT("Category"), TEXT("HoudiniRuntimeSettings"));
				MetaData->SetValue(NewProp_MarshallingAttributeInputSourceFile, TEXT("ModuleRelativePath"), TEXT("Public/HoudiniRuntimeSettings.h"));
				MetaData->SetValue(NewProp_MarshallingAttributeInputMeshName, TEXT("Category"), TEXT("HoudiniRuntimeSettings"));
				MetaData->SetValue(NewProp_MarshallingAttributeInputMeshName, TEXT("ModuleRelativePath"), TEXT("Public/HoudiniRuntimeSettings.h"));
				MetaData->SetValue(NewProp_MarshallingAttributeGeneratedMeshName, TEXT("Category"), TEXT("HoudiniRuntimeSettings"));
				MetaData->SetValue(NewProp_MarshallingAttributeGeneratedMeshName, TEXT("ModuleRelativePath"), TEXT("Public/HoudiniRuntimeSettings.h"));
				MetaData->SetValue(NewProp_MarshallingAttributeLightmapResolution, TEXT("Category"), TEXT("HoudiniRuntimeSettings"));
				MetaData->SetValue(NewProp_MarshallingAttributeLightmapResolution, TEXT("ModuleRelativePath"), TEXT("Public/HoudiniRuntimeSettings.h"));
				MetaData->SetValue(NewProp_MarshallingAttributeFaceSmoothingMask, TEXT("Category"), TEXT("HoudiniRuntimeSettings"));
				MetaData->SetValue(NewProp_MarshallingAttributeFaceSmoothingMask, TEXT("ModuleRelativePath"), TEXT("Public/HoudiniRuntimeSettings.h"));
				MetaData->SetValue(NewProp_MarshallingAttributeInstanceOverride, TEXT("Category"), TEXT("HoudiniRuntimeSettings"));
				MetaData->SetValue(NewProp_MarshallingAttributeInstanceOverride, TEXT("ModuleRelativePath"), TEXT("Public/HoudiniRuntimeSettings.h"));
				MetaData->SetValue(NewProp_MarshallingAttributeMaterialHole, TEXT("Category"), TEXT("HoudiniRuntimeSettings"));
				MetaData->SetValue(NewProp_MarshallingAttributeMaterialHole, TEXT("ModuleRelativePath"), TEXT("Public/HoudiniRuntimeSettings.h"));
				MetaData->SetValue(NewProp_MarshallingAttributeMaterial, TEXT("Category"), TEXT("HoudiniRuntimeSettings"));
				MetaData->SetValue(NewProp_MarshallingAttributeMaterial, TEXT("ModuleRelativePath"), TEXT("Public/HoudiniRuntimeSettings.h"));
				MetaData->SetValue(NewProp_SimpleRenderedCollisionGroupNamePrefix, TEXT("Category"), TEXT("HoudiniRuntimeSettings"));
				MetaData->SetValue(NewProp_SimpleRenderedCollisionGroupNamePrefix, TEXT("ModuleRelativePath"), TEXT("Public/HoudiniRuntimeSettings.h"));
				MetaData->SetValue(NewProp_SimpleCollisionGroupNamePrefix, TEXT("Category"), TEXT("HoudiniRuntimeSettings"));
				MetaData->SetValue(NewProp_SimpleCollisionGroupNamePrefix, TEXT("ModuleRelativePath"), TEXT("Public/HoudiniRuntimeSettings.h"));
				MetaData->SetValue(NewProp_UCXRenderedCollisionGroupNamePrefix, TEXT("Category"), TEXT("HoudiniRuntimeSettings"));
				MetaData->SetValue(NewProp_UCXRenderedCollisionGroupNamePrefix, TEXT("ModuleRelativePath"), TEXT("Public/HoudiniRuntimeSettings.h"));
				MetaData->SetValue(NewProp_UCXCollisionGroupNamePrefix, TEXT("Category"), TEXT("HoudiniRuntimeSettings"));
				MetaData->SetValue(NewProp_UCXCollisionGroupNamePrefix, TEXT("ModuleRelativePath"), TEXT("Public/HoudiniRuntimeSettings.h"));
				MetaData->SetValue(NewProp_RenderedCollisionGroupNamePrefix, TEXT("Category"), TEXT("HoudiniRuntimeSettings"));
				MetaData->SetValue(NewProp_RenderedCollisionGroupNamePrefix, TEXT("ModuleRelativePath"), TEXT("Public/HoudiniRuntimeSettings.h"));
				MetaData->SetValue(NewProp_CollisionGroupNamePrefix, TEXT("Category"), TEXT("HoudiniRuntimeSettings"));
				MetaData->SetValue(NewProp_CollisionGroupNamePrefix, TEXT("ModuleRelativePath"), TEXT("Public/HoudiniRuntimeSettings.h"));
				MetaData->SetValue(NewProp_bTreatRampParametersAsMultiparms, TEXT("Category"), TEXT("HoudiniRuntimeSettings"));
				MetaData->SetValue(NewProp_bTreatRampParametersAsMultiparms, TEXT("ModuleRelativePath"), TEXT("Public/HoudiniRuntimeSettings.h"));
				MetaData->SetValue(NewProp_TemporaryCookFolder, TEXT("Category"), TEXT("HoudiniRuntimeSettings"));
				MetaData->SetValue(NewProp_TemporaryCookFolder, TEXT("ModuleRelativePath"), TEXT("Public/HoudiniRuntimeSettings.h"));
				MetaData->SetValue(NewProp_bCookCurvesOnMouseRelease, TEXT("Category"), TEXT("HoudiniRuntimeSettings"));
				MetaData->SetValue(NewProp_bCookCurvesOnMouseRelease, TEXT("ModuleRelativePath"), TEXT("Public/HoudiniRuntimeSettings.h"));
				MetaData->SetValue(NewProp_bDisplaySlateCookingNotifications, TEXT("Category"), TEXT("HoudiniRuntimeSettings"));
				MetaData->SetValue(NewProp_bDisplaySlateCookingNotifications, TEXT("ModuleRelativePath"), TEXT("Public/HoudiniRuntimeSettings.h"));
				MetaData->SetValue(NewProp_bTransformChangeTriggersCooks, TEXT("Category"), TEXT("HoudiniRuntimeSettings"));
				MetaData->SetValue(NewProp_bTransformChangeTriggersCooks, TEXT("ModuleRelativePath"), TEXT("Public/HoudiniRuntimeSettings.h"));
				MetaData->SetValue(NewProp_bUploadTransformsToHoudiniEngine, TEXT("Category"), TEXT("HoudiniRuntimeSettings"));
				MetaData->SetValue(NewProp_bUploadTransformsToHoudiniEngine, TEXT("ModuleRelativePath"), TEXT("Public/HoudiniRuntimeSettings.h"));
				MetaData->SetValue(NewProp_bEnableCooking, TEXT("Category"), TEXT("HoudiniRuntimeSettings"));
				MetaData->SetValue(NewProp_bEnableCooking, TEXT("ModuleRelativePath"), TEXT("Public/HoudiniRuntimeSettings.h"));
				MetaData->SetValue(NewProp_bShowMultiAssetDialog, TEXT("Category"), TEXT("HoudiniRuntimeSettings"));
				MetaData->SetValue(NewProp_bShowMultiAssetDialog, TEXT("ModuleRelativePath"), TEXT("Public/HoudiniRuntimeSettings.h"));
				MetaData->SetValue(NewProp_AutomaticServerTimeout, TEXT("Category"), TEXT("HoudiniRuntimeSettings"));
				MetaData->SetValue(NewProp_AutomaticServerTimeout, TEXT("ModuleRelativePath"), TEXT("Public/HoudiniRuntimeSettings.h"));
				MetaData->SetValue(NewProp_bStartAutomaticServer, TEXT("Category"), TEXT("HoudiniRuntimeSettings"));
				MetaData->SetValue(NewProp_bStartAutomaticServer, TEXT("ModuleRelativePath"), TEXT("Public/HoudiniRuntimeSettings.h"));
				MetaData->SetValue(NewProp_ServerPipeName, TEXT("Category"), TEXT("HoudiniRuntimeSettings"));
				MetaData->SetValue(NewProp_ServerPipeName, TEXT("ModuleRelativePath"), TEXT("Public/HoudiniRuntimeSettings.h"));
				MetaData->SetValue(NewProp_ServerPort, TEXT("Category"), TEXT("HoudiniRuntimeSettings"));
				MetaData->SetValue(NewProp_ServerPort, TEXT("ModuleRelativePath"), TEXT("Public/HoudiniRuntimeSettings.h"));
				MetaData->SetValue(NewProp_ServerHost, TEXT("Category"), TEXT("HoudiniRuntimeSettings"));
				MetaData->SetValue(NewProp_ServerHost, TEXT("ModuleRelativePath"), TEXT("Public/HoudiniRuntimeSettings.h"));
				MetaData->SetValue(NewProp_SessionType, TEXT("Category"), TEXT("HoudiniRuntimeSettings"));
				MetaData->SetValue(NewProp_SessionType, TEXT("ModuleRelativePath"), TEXT("Public/HoudiniRuntimeSettings.h"));
#endif
			}
		}
		check(OuterClass->GetClass());
		return OuterClass;
	}
	IMPLEMENT_CLASS(UHoudiniRuntimeSettings, 2533775540);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UHoudiniRuntimeSettings(Z_Construct_UClass_UHoudiniRuntimeSettings, &UHoudiniRuntimeSettings::StaticClass, TEXT("/Script/HoudiniEngineRuntime"), TEXT("UHoudiniRuntimeSettings"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UHoudiniRuntimeSettings);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
PRAGMA_ENABLE_OPTIMIZATION
