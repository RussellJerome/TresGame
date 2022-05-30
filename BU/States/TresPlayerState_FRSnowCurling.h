#pragma once
#include "CoreMinimal.h"
#include "TresCharState_FRSnowCurling.h"
#include "TresPlayerState_FRSnowCurling.generated.h"

class ATresFriendLinkPawnSnowCurling;

UCLASS()
class UTresPlayerState_FRSnowCurling : public UTresCharState_FRSnowCurling {
    GENERATED_BODY()
public:
protected:
    UPROPERTY()
    ATresFriendLinkPawnSnowCurling* m_Pawn;
    
public:
    UTresPlayerState_FRSnowCurling();
};

