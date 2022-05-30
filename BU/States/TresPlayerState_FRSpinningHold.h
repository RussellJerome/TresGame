#pragma once
#include "CoreMinimal.h"
#include "TresCharState_FRSpinningHold.h"
#include "TresPlayerState_FRSpinningHold.generated.h"

class ATresFriendLinkPawnSpinningHold;

UCLASS()
class UTresPlayerState_FRSpinningHold : public UTresCharState_FRSpinningHold {
    GENERATED_BODY()
public:
protected:
    UPROPERTY()
    ATresFriendLinkPawnSpinningHold* m_pObj;
    
public:
    UTresPlayerState_FRSpinningHold();
};

