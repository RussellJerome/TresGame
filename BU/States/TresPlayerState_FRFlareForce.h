#pragma once
#include "CoreMinimal.h"
#include "TresCharState_FRFlareForce.h"
#include "TresPlayerState_FRFlareForce.generated.h"

class ATresFriendLinkPawnFlareForce;

UCLASS()
class UTresPlayerState_FRFlareForce : public UTresCharState_FRFlareForce {
    GENERATED_BODY()
public:
protected:
    UPROPERTY()
    ATresFriendLinkPawnFlareForce* m_pObj;
    
public:
    UTresPlayerState_FRFlareForce();
};

