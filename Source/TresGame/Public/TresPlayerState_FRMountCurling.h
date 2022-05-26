#pragma once
#include "CoreMinimal.h"
#include "TresCharState_FRMountCurling.h"
#include "TresPlayerState_FRMountCurling.generated.h"

class ATresFriendLinkPawnMountCurling;

UCLASS()
class UTresPlayerState_FRMountCurling : public UTresCharState_FRMountCurling {
    GENERATED_BODY()
public:
protected:
    UPROPERTY()
    ATresFriendLinkPawnMountCurling* m_pObj;
    
public:
    UTresPlayerState_FRMountCurling();
};

