#pragma once
#include "CoreMinimal.h"
#include "TresCharState_FRMikeBowling.h"
#include "TresPlayerState_FRMikeBowling.generated.h"

class ATresFriendLinkPawnMikeBowling;

UCLASS()
class UTresPlayerState_FRMikeBowling : public UTresCharState_FRMikeBowling {
    GENERATED_BODY()
public:
protected:
    UPROPERTY()
    ATresFriendLinkPawnMikeBowling* m_pObj;
    
public:
    UTresPlayerState_FRMikeBowling();
};

