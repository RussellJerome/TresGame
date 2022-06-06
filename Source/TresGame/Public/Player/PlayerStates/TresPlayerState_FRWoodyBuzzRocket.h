#pragma once
#include "CoreMinimal.h"
#include "TresCharState_FRWoodyBuzzRocket.h"
#include "TresPlayerState_FRWoodyBuzzRocket.generated.h"

class ATresFriendLinkPawnWoodyBuzzRocket;

UCLASS()
class UTresPlayerState_FRWoodyBuzzRocket : public UTresCharState_FRWoodyBuzzRocket {
    GENERATED_BODY()
public:
protected:
    UPROPERTY()
    ATresFriendLinkPawnWoodyBuzzRocket* m_pObj;
    
public:
    UTresPlayerState_FRWoodyBuzzRocket();
};

