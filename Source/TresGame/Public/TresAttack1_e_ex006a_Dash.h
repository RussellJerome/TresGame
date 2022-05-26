#pragma once
#include "CoreMinimal.h"
#include "TresAttackDefinitionBase.h"
#include "TresAttack1_e_ex006a_Dash.generated.h"

UCLASS(HideDropdown)
class UTresAttack1_e_ex006a_Dash : public UTresAttackDefinitionBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditDefaultsOnly)
    float m_MaxTackleMoveSpeed;
    
    UPROPERTY(EditDefaultsOnly)
    float m_TackleMoveDistance;
    
public:
    UTresAttack1_e_ex006a_Dash();
};

