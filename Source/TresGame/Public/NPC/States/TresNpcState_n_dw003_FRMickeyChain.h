#pragma once
#include "CoreMinimal.h"
#include "TresCharState_FRMickeyChain.h"
#include "TresNpcState_n_dw003_FRMickeyChain.generated.h"

class ATresEnemyPawn_e_dw401;

UCLASS()
class UTresNpcState_n_dw003_FRMickeyChain : public UTresCharState_FRMickeyChain {
    GENERATED_BODY()
public:
    UPROPERTY()
    ATresEnemyPawn_e_dw401* m_pDevilWavePawn;
    
    UTresNpcState_n_dw003_FRMickeyChain();
};

