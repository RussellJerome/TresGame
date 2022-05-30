#pragma once
#include "CoreMinimal.h"
#include "TresFriendLinkPawnBase.h"
#include "TresFriendLinkPawnMikeBowling.generated.h"

UCLASS()
class ATresFriendLinkPawnMikeBowling : public ATresFriendLinkPawnBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    float m_fTurnSpeed;
    
    UPROPERTY(EditDefaultsOnly)
    float m_fTurnYawMax;
    
    ATresFriendLinkPawnMikeBowling();
};

