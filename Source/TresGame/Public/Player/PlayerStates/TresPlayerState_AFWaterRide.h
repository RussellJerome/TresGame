#pragma once
#include "CoreMinimal.h"
#include "TresCharState_AFWaterRide.h"
#include "TresPlayerState_AFWaterRide.generated.h"

class ATresAttractionPawnWaterRide;

UCLASS()
class UTresPlayerState_AFWaterRide : public UTresCharState_AFWaterRide {
    GENERATED_BODY()
public:
protected:
    UPROPERTY()
    ATresAttractionPawnWaterRide* m_pObj;
    
public:
    UTresPlayerState_AFWaterRide();
};

