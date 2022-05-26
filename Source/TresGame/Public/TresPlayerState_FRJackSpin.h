#pragma once
#include "CoreMinimal.h"
#include "TresCharState_FRJackSpin.h"
#include "TresPlayerState_FRJackSpin.generated.h"

class ATresFriendLinkPawnJackSpin;

UCLASS()
class UTresPlayerState_FRJackSpin : public UTresCharState_FRJackSpin {
    GENERATED_BODY()
public:
protected:
    UPROPERTY()
    ATresFriendLinkPawnJackSpin* m_pObj;
    
public:
    UTresPlayerState_FRJackSpin();
};

