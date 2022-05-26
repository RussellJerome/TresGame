#pragma once
#include "CoreMinimal.h"
#include "TresPlayerState_Attack.h"
#include "TresPlayerState_StyleFinish.generated.h"

class ATresCharPawnBase;

UCLASS()
class UTresPlayerState_StyleFinish : public UTresPlayerState_Attack {
    GENERATED_BODY()
public:
    UPROPERTY()
    ATresCharPawnBase* m_pCatchPawn;
    
    UTresPlayerState_StyleFinish();
};

