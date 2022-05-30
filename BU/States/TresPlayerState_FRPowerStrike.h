#pragma once
#include "CoreMinimal.h"
#include "TresCharState_FRPowerStrike.h"
#include "TresPlayerState_FRPowerStrike.generated.h"

class ATresFriendLinkPawnPowerStrike;

UCLASS()
class UTresPlayerState_FRPowerStrike : public UTresCharState_FRPowerStrike {
    GENERATED_BODY()
public:
protected:
    UPROPERTY()
    ATresFriendLinkPawnPowerStrike* m_pObj;
    
public:
    UTresPlayerState_FRPowerStrike();
};

