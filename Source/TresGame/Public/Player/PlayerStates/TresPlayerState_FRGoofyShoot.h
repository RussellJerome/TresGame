#pragma once
#include "CoreMinimal.h"
#include "TresCharState_FRGoofyShoot.h"
#include "TresPlayerState_FRGoofyShoot.generated.h"

class ATresFriendLinkPawnGoofyShoot;

UCLASS()
class UTresPlayerState_FRGoofyShoot : public UTresCharState_FRGoofyShoot {
    GENERATED_BODY()
public:
    UPROPERTY()
    ATresFriendLinkPawnGoofyShoot* m_pObj;
    
    UTresPlayerState_FRGoofyShoot();
};

