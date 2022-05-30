#pragma once
#include "CoreMinimal.h"
#include "TresCharState_RiskDodge.h"
#include "TresPlayerState_RiskDodge.generated.h"

class ATresCharPawnBase;

UCLASS()
class UTresPlayerState_RiskDodge : public UTresCharState_RiskDodge {
    GENERATED_BODY()
public:
    UPROPERTY()
    ATresCharPawnBase* m_pAttackerPawn;
    
    UTresPlayerState_RiskDodge();
};

