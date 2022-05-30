#pragma once
#include "CoreMinimal.h"
#include "TresCharState_FRBlizzagaBoard.h"
#include "TresPlayerState_FRBlizzagaBoard.generated.h"

class ATresFriendLinkPawnBlizzagaBoard;

UCLASS()
class UTresPlayerState_FRBlizzagaBoard : public UTresCharState_FRBlizzagaBoard {
    GENERATED_BODY()
public:
protected:
    UPROPERTY()
    ATresFriendLinkPawnBlizzagaBoard* m_pObj;
    
public:
    UTresPlayerState_FRBlizzagaBoard();
};

