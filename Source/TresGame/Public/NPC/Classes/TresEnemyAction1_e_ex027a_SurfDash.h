#pragma once
#include "CoreMinimal.h"
#include "TresAttackDefinitionBase.h"
#include "TresEnemyAction1_e_ex027a_SurfDash.generated.h"

UCLASS(HideDropdown)
class UTresEnemyAction1_e_ex027a_SurfDash : public UTresAttackDefinitionBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    float m_DashSpeed;
    
    UPROPERTY(EditDefaultsOnly)
    float m_DashTime;
    
    UTresEnemyAction1_e_ex027a_SurfDash();
};

