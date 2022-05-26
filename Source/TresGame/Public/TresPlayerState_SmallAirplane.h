#pragma once
#include "CoreMinimal.h"
#include "TresStateBase.h"
#include "TresPlayerState_SmallAirplane.generated.h"

class ATresVehiclePawnSmallAirplane;

UCLASS()
class UTresPlayerState_SmallAirplane : public UTresStateBase {
    GENERATED_BODY()
public:
    UPROPERTY()
    ATresVehiclePawnSmallAirplane* m_pObj;
    
    UTresPlayerState_SmallAirplane();
};

