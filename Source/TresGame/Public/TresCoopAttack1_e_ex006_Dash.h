#pragma once
#include "CoreMinimal.h"
#include "TresAttackDefinitionBase.h"
#include "TresCoopAttack1_e_ex006_Dash.generated.h"

UCLASS(HideDropdown)
class UTresCoopAttack1_e_ex006_Dash : public UTresAttackDefinitionBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    float m_WallHitAngle;
    
    UTresCoopAttack1_e_ex006_Dash();
};

