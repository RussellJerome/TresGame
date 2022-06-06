#pragma once
#include "CoreMinimal.h"
#include "TresAttackDefinitionRanged.h"
#include "TresAttack4_e_ex202_PoisonExhale.generated.h"

UCLASS(HideDropdown)
class UTresAttack4_e_ex202_PoisonExhale : public UTresAttackDefinitionRanged {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditDefaultsOnly)
    float m_LookAtHeightOffset;
    
    UPROPERTY(EditDefaultsOnly)
    float m_SpeedRate;
    
    UPROPERTY(EditDefaultsOnly)
    float m_NotExecuteDistance;
    
public:
    UTresAttack4_e_ex202_PoisonExhale();
};

