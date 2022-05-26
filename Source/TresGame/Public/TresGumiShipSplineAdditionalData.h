#pragma once
#include "CoreMinimal.h"
#include "ETresGumiShipSplineEventType.h"
#include "TresGumiShipSplineAdditionalData.generated.h"

USTRUCT(BlueprintType)
struct FTresGumiShipSplineAdditionalData {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    ETresGumiShipSplineEventType m_eEventType;
    
    UPROPERTY(EditAnywhere)
    float m_fKeyDistanceRate;
    
    TRESGAME_API FTresGumiShipSplineAdditionalData();
};

