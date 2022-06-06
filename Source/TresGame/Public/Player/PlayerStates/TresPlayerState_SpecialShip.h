#pragma once
#include "CoreMinimal.h"
#include "TresCharState_SpecialShip.h"
#include "TresPlayerState_SpecialShip.generated.h"

class ATresVehiclePawnSpecialShip;

UCLASS()
class UTresPlayerState_SpecialShip : public UTresCharState_SpecialShip {
    GENERATED_BODY()
public:
    UPROPERTY()
    ATresVehiclePawnSpecialShip* m_pObj;
    
    UTresPlayerState_SpecialShip();
};

