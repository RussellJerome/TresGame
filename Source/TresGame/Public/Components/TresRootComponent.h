#pragma once
#include "CoreMinimal.h"
#include "Components/PrimitiveComponent.h"
#include "UObject/NoExportTypes.h"
#include "TresRootComponentPostPhysicsTickFunction.h"
#include "Engine/EngineTypes.h"
#include "TresCollShapeAssetUnit.h"
#include "ETresGrass.h"
#include "UObject/NoExportTypes.h"
#include "Engine/EngineTypes.h"
#include "TresRootComponent.generated.h"

class UBodySetup;
class UPhysicalMaterial;

UCLASS(EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UTresRootComponent : public UPrimitiveComponent {
    GENERATED_BODY()
public:
    UPROPERTY()
    uint8 m_bEnableDetectPhysMaterial: 1;
    
protected:
    UPROPERTY(AdvancedDisplay, BlueprintReadOnly, EditAnywhere)
    FColor m_ShapeColor;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadOnly, EditAnywhere)
    uint8 m_bDrawBBox: 1;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadOnly, EditAnywhere)
    FColor m_BBoxColor;
    
    UPROPERTY(EditDefaultsOnly)
    TArray<FTresCollShapeAssetUnit> CollisionShapesSrc;
    
    UPROPERTY(DuplicateTransient, Transient, VisibleInstanceOnly)
    TArray<FTresCollShapeAssetUnit> m_AppendCollision;
    
    UPROPERTY(DuplicateTransient, Transient)
    UBodySetup* m_pBodySetup;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool m_bEnableGrassBump;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    int32 m_GrassBumpPriority;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float m_GrassBumpRange;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float m_GrassBumpPower;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float m_GrassBumpDetailPower;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    TEnumAsByte<ETresGrass::Type> m_GrassBumpForceType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    uint8 m_bNeedOceanSurfacePosture: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<FVector> m_OceanSurfaceSamplingLocations;
    
    UPROPERTY(DuplicateTransient, Transient)
    UPhysicalMaterial* m_pDetectPhysMaterial;
    
    UPROPERTY(DuplicateTransient, Transient)
    UPhysicalMaterial* m_pDetectWaterPhysMaterial;
    
    UPROPERTY(DuplicateTransient, Transient)
    UPhysicalMaterial* m_pDetectInnerWaterPhysMaterial;
    
    UPROPERTY(DuplicateTransient, Transient)
    FHitResult m_WaterSurfaceInfo;
    
    UPROPERTY(DuplicateTransient, Transient)
    FCollisionResponseContainer m_DefaultCollisionResponse;
    
    UPROPERTY()
    FTresRootComponentPostPhysicsTickFunction m_PostPhysTickFunction;
    
public:
    UTresRootComponent();
};

