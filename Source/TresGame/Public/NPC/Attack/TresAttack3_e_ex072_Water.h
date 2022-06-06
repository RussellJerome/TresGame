#pragma once
#include "CoreMinimal.h"
#include "TresAttackDefinitionRanged.h"
#include "TresAttack3_e_ex072_Water.generated.h"

UCLASS(HideDropdown)
class UTresAttack3_e_ex072_Water : public UTresAttackDefinitionRanged {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    float m_fThrowAngle;
    
    UTresAttack3_e_ex072_Water();
};

