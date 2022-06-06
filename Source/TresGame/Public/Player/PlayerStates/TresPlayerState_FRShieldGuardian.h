#pragma once
#include "CoreMinimal.h"
#include "TresCharState_FRShieldGuardian.h"
#include "TresPlayerState_FRShieldGuardian.generated.h"

class ATresFriendLinkPawnShieldGuardian;

UCLASS()
class UTresPlayerState_FRShieldGuardian : public UTresCharState_FRShieldGuardian {
    GENERATED_BODY()
public:
protected:
    UPROPERTY()
    ATresFriendLinkPawnShieldGuardian* m_pObj;
    
public:
    UTresPlayerState_FRShieldGuardian();
};

