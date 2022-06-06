#pragma once
#include "CoreMinimal.h"
#include "TresAttackDefinitionDash.h"
#include "TresAttack4_e_ex003_Dash.generated.h"

UCLASS(HideDropdown)
class UTresAttack4_e_ex003_Dash : public UTresAttackDefinitionDash {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditDefaultsOnly)
    float m_TurnSpeed;
    
    UPROPERTY(EditDefaultsOnly)
    float m_InitialSpeed;
    
public:
    UTresAttack4_e_ex003_Dash();
};

