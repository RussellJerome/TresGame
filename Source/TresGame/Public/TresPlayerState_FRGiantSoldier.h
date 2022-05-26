#pragma once
#include "CoreMinimal.h"
#include "TresCharState_FRGiantSoldier.h"
#include "TresPlayerState_FRGiantSoldier.generated.h"

class ATresFriendLinkPawnGiantSoldier;

UCLASS()
class UTresPlayerState_FRGiantSoldier : public UTresCharState_FRGiantSoldier {
    GENERATED_BODY()
public:
protected:
    UPROPERTY()
    ATresFriendLinkPawnGiantSoldier* m_pObj;
    
public:
    UTresPlayerState_FRGiantSoldier();
};

