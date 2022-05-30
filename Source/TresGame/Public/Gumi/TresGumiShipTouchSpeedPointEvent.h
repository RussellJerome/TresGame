#pragma once
#include "CoreMinimal.h"
#include "TresGumiShipDirectEventBase.h"
#include "TresGumiShipTouchSpeedPointEvent.generated.h"

USTRUCT(BlueprintType)
struct FTresGumiShipTouchSpeedPointEvent : public FTresGumiShipDirectEventBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    float m_fSpeedPoint;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    bool m_bUpOnly;
    
    TRESGAME_API FTresGumiShipTouchSpeedPointEvent();
};

