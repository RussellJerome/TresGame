#pragma once
#include "CoreMinimal.h"
#include "TresFriendLinkUtilityPawn.h"
#include "TresFriendLinkPawnUltimateEnd.generated.h"

UCLASS()
class ATresFriendLinkPawnUltimateEnd : public ATresFriendLinkUtilityPawn {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditDefaultsOnly)
    float m_fFinishMotionStartLagTime;
    
    UPROPERTY(EditDefaultsOnly)
    float m_fFriendLinkFinishInvincibleTime;
    
public:
    ATresFriendLinkPawnUltimateEnd();
};

