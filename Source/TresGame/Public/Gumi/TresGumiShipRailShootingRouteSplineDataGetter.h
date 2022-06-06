#pragma once
#include "CoreMinimal.h"
#include "TresGumiShipRailShootingRouteSplineDataGetter.generated.h"

USTRUCT(BlueprintType)
struct FTresGumiShipRailShootingRouteSplineDataGetter {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    float m_fSplineDistanceRate;
    
    UPROPERTY(EditAnywhere)
    uint8 m_bReverseSpline: 1;
    
    TRESGAME_API FTresGumiShipRailShootingRouteSplineDataGetter();
};

