#pragma once
#include "CoreMinimal.h"
#include "TresCharState_Idle.h"
#include "TresPlayerState_Idle.generated.h"

class ATresCharPawnBase;

UCLASS()
class UTresPlayerState_Idle : public UTresCharState_Idle {
    GENERATED_BODY()
public:
    UPROPERTY()
    ATresCharPawnBase* m_pLookAtTargetPawn;
    
    UTresPlayerState_Idle();
};

