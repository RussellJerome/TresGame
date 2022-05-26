#pragma once
#include "CoreMinimal.h"
#include "TresCharState_Idle.h"
#include "TresNpcState_Idle.generated.h"

class ATresCharPawnBase;

UCLASS()
class UTresNpcState_Idle : public UTresCharState_Idle {
    GENERATED_BODY()
public:
    UPROPERTY()
    ATresCharPawnBase* m_pLookAtTargetPawn;
    
    UTresNpcState_Idle();
};

