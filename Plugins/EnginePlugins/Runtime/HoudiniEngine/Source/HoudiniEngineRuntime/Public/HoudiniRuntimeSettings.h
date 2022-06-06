#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "EHoudiniRuntimeSettingsRecomputeFlag.h"
#include "EHoudiniRuntimeSettingsSessionType.h"
#include "EHoudiniRuntimeSettingsAxisImport.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ECollisionTraceFlag -FallbackName=ECollisionTraceFlag
#include "Engine/EngineTypes.h"
#include "Engine/EngineTypes.h"
#include "HoudiniToolDescription.h"
#include "PhysicsEngine/BodySetupEnums.h"
#include "HoudiniRuntimeSettings.generated.h"

class UAssetUserData;
class UPhysicalMaterial;
class UFoliageType_InstancedStaticMesh;

UCLASS(BlueprintType, DefaultConfig, Config=Engine)
class HOUDINIENGINERUNTIME_API UHoudiniRuntimeSettings : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, GlobalConfig)
    TEnumAsByte<EHoudiniRuntimeSettingsSessionType> SessionType;
    
    UPROPERTY(EditAnywhere, GlobalConfig)
    FString ServerHost;
    
    UPROPERTY(EditAnywhere, GlobalConfig)
    int32 ServerPort;
    
    UPROPERTY(EditAnywhere, GlobalConfig)
    FString ServerPipeName;
    
    UPROPERTY(EditAnywhere, GlobalConfig)
    bool bStartAutomaticServer;
    
    UPROPERTY(EditAnywhere, GlobalConfig)
    float AutomaticServerTimeout;
    
    UPROPERTY(EditAnywhere, GlobalConfig)
    bool bShowMultiAssetDialog;
    
    UPROPERTY(EditAnywhere, GlobalConfig)
    bool bEnableCooking;
    
    UPROPERTY(EditAnywhere, GlobalConfig)
    bool bUploadTransformsToHoudiniEngine;
    
    UPROPERTY(EditAnywhere, GlobalConfig)
    bool bTransformChangeTriggersCooks;
    
    UPROPERTY(EditAnywhere, GlobalConfig)
    bool bDisplaySlateCookingNotifications;
    
    UPROPERTY(EditAnywhere, GlobalConfig)
    bool bCookCurvesOnMouseRelease;
    
    UPROPERTY(GlobalConfig, VisibleAnywhere)
    FText TemporaryCookFolder;
    
    UPROPERTY(EditAnywhere, GlobalConfig)
    bool bTreatRampParametersAsMultiparms;
    
    UPROPERTY(GlobalConfig, VisibleAnywhere)
    FString CollisionGroupNamePrefix;
    
    UPROPERTY(GlobalConfig, VisibleAnywhere)
    FString RenderedCollisionGroupNamePrefix;
    
    UPROPERTY(GlobalConfig, VisibleAnywhere)
    FString UCXCollisionGroupNamePrefix;
    
    UPROPERTY(GlobalConfig, VisibleAnywhere)
    FString UCXRenderedCollisionGroupNamePrefix;
    
    UPROPERTY(GlobalConfig, VisibleAnywhere)
    FString SimpleCollisionGroupNamePrefix;
    
    UPROPERTY(GlobalConfig, VisibleAnywhere)
    FString SimpleRenderedCollisionGroupNamePrefix;
    
    UPROPERTY(GlobalConfig, VisibleAnywhere)
    FString MarshallingAttributeMaterial;
    
    UPROPERTY(GlobalConfig, VisibleAnywhere)
    FString MarshallingAttributeMaterialHole;
    
    UPROPERTY(GlobalConfig, VisibleAnywhere)
    FString MarshallingAttributeInstanceOverride;
    
    UPROPERTY(GlobalConfig, VisibleAnywhere)
    FString MarshallingAttributeFaceSmoothingMask;
    
    UPROPERTY(GlobalConfig, VisibleAnywhere)
    FString MarshallingAttributeLightmapResolution;
    
    UPROPERTY(GlobalConfig, VisibleAnywhere)
    FString MarshallingAttributeGeneratedMeshName;
    
    UPROPERTY(GlobalConfig, VisibleAnywhere)
    FString MarshallingAttributeInputMeshName;
    
    UPROPERTY(EditAnywhere, GlobalConfig)
    FString MarshallingAttributeInputSourceFile;
    
    UPROPERTY(EditAnywhere, GlobalConfig)
    float MarshallingSplineResolution;
    
    UPROPERTY(EditAnywhere, GlobalConfig)
    bool MarshallingLandscapesUseFullResolution;
    
    UPROPERTY(EditAnywhere, GlobalConfig)
    bool MarshallingLandscapesForceMinMaxValues;
    
    UPROPERTY(GlobalConfig, VisibleAnywhere)
    float MarshallingLandscapesForcedMinValue;
    
    UPROPERTY(GlobalConfig, VisibleAnywhere)
    float MarshallingLandscapesForcedMaxValue;
    
    UPROPERTY(EditAnywhere, GlobalConfig)
    float GeneratedGeometryScaleFactor;
    
    UPROPERTY(EditAnywhere, GlobalConfig)
    float TransformScaleFactor;
    
    UPROPERTY(EditAnywhere, GlobalConfig)
    TEnumAsByte<EHoudiniRuntimeSettingsAxisImport> ImportAxis;
    
    UPROPERTY(EditAnywhere, GlobalConfig)
    uint8 bDoubleSidedGeometry: 1;
    
    UPROPERTY(EditAnywhere)
    UPhysicalMaterial* PhysMaterial;
    
    UPROPERTY(GlobalConfig, VisibleDefaultsOnly)
    TEnumAsByte<ECollisionTraceFlag> CollisionTraceFlag;
    
    UPROPERTY(EditAnywhere, GlobalConfig)
    int32 LightMapResolution;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere, GlobalConfig)
    float LpvBiasMultiplier;
    
    UPROPERTY(EditAnywhere, GlobalConfig)
    float GeneratedDistanceFieldResolutionScale;
    
    UPROPERTY(AdvancedDisplay, EditAnywhere, GlobalConfig)
    FWalkableSlopeOverride WalkableSlopeOverride;
    
    UPROPERTY(AdvancedDisplay, EditAnywhere, GlobalConfig)
    int32 LightMapCoordinateIndex;
    
    UPROPERTY(AdvancedDisplay, EditAnywhere, GlobalConfig)
    uint8 bUseMaximumStreamingTexelRatio: 1;
    
    UPROPERTY(AdvancedDisplay, EditAnywhere, GlobalConfig)
    float StreamingDistanceMultiplier;
    
    UPROPERTY(AdvancedDisplay, EditAnywhere, Instanced)
    UFoliageType_InstancedStaticMesh* FoliageDefaultSettings;
    
    UPROPERTY(AdvancedDisplay, EditAnywhere, Export)
    TArray<UAssetUserData*> AssetUserData;
    
    UPROPERTY(EditAnywhere, GlobalConfig)
    bool bUseFullPrecisionUVs;
    
    UPROPERTY(EditAnywhere, GlobalConfig)
    int32 SrcLightmapIndex;
    
    UPROPERTY(EditAnywhere, GlobalConfig)
    int32 DstLightmapIndex;
    
    UPROPERTY(EditAnywhere, GlobalConfig)
    int32 MinLightmapResolution;
    
    UPROPERTY(EditAnywhere, GlobalConfig)
    bool bRemoveDegenerates;
    
    UPROPERTY(EditAnywhere, GlobalConfig)
    TEnumAsByte<EHoudiniRuntimeSettingsRecomputeFlag> GenerateLightmapUVsFlag;
    
    UPROPERTY(EditAnywhere, GlobalConfig)
    TEnumAsByte<EHoudiniRuntimeSettingsRecomputeFlag> RecomputeNormalsFlag;
    
    UPROPERTY(EditAnywhere, GlobalConfig)
    TEnumAsByte<EHoudiniRuntimeSettingsRecomputeFlag> RecomputeTangentsFlag;
    
    UPROPERTY(EditAnywhere, GlobalConfig)
    bool bUseMikkTSpace;
    
    UPROPERTY(EditAnywhere, GlobalConfig)
    bool bBuildAdjacencyBuffer;
    
    UPROPERTY(EditAnywhere, GlobalConfig)
    bool bUseCustomHoudiniLocation;
    
    UPROPERTY(GlobalConfig, VisibleAnywhere)
    FDirectoryPath CustomHoudiniLocation;
    
    UPROPERTY(EditAnywhere, GlobalConfig)
    bool bHidePlacementModeHoudiniTools;
    
    UPROPERTY(EditAnywhere, GlobalConfig)
    TArray<FHoudiniToolDescription> CustomHoudiniTools;
    
    UPROPERTY(EditAnywhere, GlobalConfig)
    int32 CookingThreadStackSize;
    
    UPROPERTY(EditAnywhere, GlobalConfig)
    FString HoudiniEnvironmentFiles;
    
    UPROPERTY(EditAnywhere, GlobalConfig)
    FString OtlSearchPath;
    
    UPROPERTY(EditAnywhere, GlobalConfig)
    FString DsoSearchPath;
    
    UPROPERTY(EditAnywhere, GlobalConfig)
    FString ImageDsoSearchPath;
    
    UPROPERTY(EditAnywhere, GlobalConfig)
    FString AudioDsoSearchPath;
    
    UHoudiniRuntimeSettings();
};

