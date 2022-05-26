#pragma once
#include "CoreMinimal.h"
#include "TresGumiShipHudGuideAreaParam.generated.h"

USTRUCT(BlueprintType)
struct FTresGumiShipHudGuideAreaParam {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    float m_fWorldSymbolMarkerVolumeRadius;
    
    UPROPERTY(EditDefaultsOnly)
    float m_fTravelGateMarkerVolumeRadius;
    
    UPROPERTY(EditDefaultsOnly)
    float m_fTreasureSphereMarkerVolumeRadius;
    
    UPROPERTY(EditDefaultsOnly)
    float m_fEnemyTerritoryMarkerVolumeRadius;
    
    TRESGAME_API FTresGumiShipHudGuideAreaParam();
};

