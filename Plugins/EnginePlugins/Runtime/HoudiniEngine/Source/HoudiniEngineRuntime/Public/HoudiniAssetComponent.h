#pragma once
#include "CoreMinimal.h"
#include "Components/PrimitiveComponent.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ECollisionTraceFlag -FallbackName=ECollisionTraceFlag
#include "Engine/EngineTypes.h"
#include "HoudiniAssetComponent.generated.h"

class UPhysicalMaterial;
class UFoliageType_InstancedStaticMesh;
class UAssetUserData;

UCLASS(EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class HOUDINIENGINERUNTIME_API UHoudiniAssetComponent : public UPrimitiveComponent {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    uint8 bGeneratedDoubleSidedGeometry: 1;
    
    UPROPERTY(EditAnywhere)
    UPhysicalMaterial* GeneratedPhysMaterial;
    
    UPROPERTY(EditAnywhere)
    TEnumAsByte<ECollisionTraceFlag> GeneratedCollisionTraceFlag;
    
    UPROPERTY(EditAnywhere)
    int32 GeneratedLightMapResolution;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float GeneratedLpvBiasMultiplier;
    
    UPROPERTY(EditAnywhere)
    float GeneratedDistanceFieldResolutionScale;
    
    UPROPERTY(AdvancedDisplay, EditAnywhere)
    FWalkableSlopeOverride GeneratedWalkableSlopeOverride;
    
    UPROPERTY(AdvancedDisplay, EditAnywhere)
    int32 GeneratedLightMapCoordinateIndex;
    
    UPROPERTY(AdvancedDisplay, EditAnywhere)
    uint8 bGeneratedUseMaximumStreamingTexelRatio: 1;
    
    UPROPERTY(AdvancedDisplay, EditAnywhere)
    float GeneratedStreamingDistanceMultiplier;
    
    UPROPERTY(AdvancedDisplay, EditAnywhere, Instanced)
    UFoliageType_InstancedStaticMesh* GeneratedFoliageDefaultSettings;
    
    UPROPERTY(AdvancedDisplay, EditAnywhere, Export)
    TArray<UAssetUserData*> GeneratedAssetUserData;
    
protected:
    UPROPERTY()
    FText BakeFolder;
    
    UPROPERTY()
    FText TempCookFolder;
    
public:
    UHoudiniAssetComponent();
    UFUNCTION(BlueprintPure)
    int32 GetAssetId() const;
    
};

