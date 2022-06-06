#pragma once
#include "CoreMinimal.h"
#include "TresCharState_FRSnowChase.h"
#include "TresPlayerState_FRSnowChase.generated.h"

class ATresFriendLinkPawnSnowChase;

UCLASS()
class UTresPlayerState_FRSnowChase : public UTresCharState_FRSnowChase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY()
    ATresFriendLinkPawnSnowChase* m_Obj;
    
public:
    UTresPlayerState_FRSnowChase();
};

