#pragma once
#include "CoreMinimal.h"
#include "TresCharState_FRMickeyChain.h"
#include "TresPlayerState_FRMickeyChain.generated.h"

class ATresEnemyPawn_e_dw401;

UCLASS()
class UTresPlayerState_FRMickeyChain : public UTresCharState_FRMickeyChain {
    GENERATED_BODY()
public:
protected:
    UPROPERTY()
    ATresEnemyPawn_e_dw401* m_pDevilWavePawn;
    
public:
    UTresPlayerState_FRMickeyChain();
};

