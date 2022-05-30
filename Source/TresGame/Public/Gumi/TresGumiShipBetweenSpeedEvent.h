#pragma once
#include "CoreMinimal.h"
#include "TresGumiShipDirectEventBase.h"
#include "TresGumiShipBetweenSpeedEvent.generated.h"

USTRUCT(BlueprintType)
struct FTresGumiShipBetweenSpeedEvent : public FTresGumiShipDirectEventBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    float m_fBottomSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    float m_fTopSpeed;
    
    TRESGAME_API FTresGumiShipBetweenSpeedEvent();
};

