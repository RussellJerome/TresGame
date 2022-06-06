#pragma once
#include "CoreMinimal.h"
#include "TresAttackDefinitionBase.h"
#include "TresCoopAttack1_e_ex006a_Dash.generated.h"

class UEnvQuery;

UCLASS(HideDropdown)
class UTresCoopAttack1_e_ex006a_Dash : public UTresAttackDefinitionBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditDefaultsOnly)
    float m_MaxTackleMoveSpeed;
    
    UPROPERTY(EditDefaultsOnly)
    float m_TackleMoveDistance;
    
    UPROPERTY(EditDefaultsOnly)
    UEnvQuery* m_EQSQuery;
    
public:
    UTresCoopAttack1_e_ex006a_Dash();
};

