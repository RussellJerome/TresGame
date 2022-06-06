#pragma once
#include "CoreMinimal.h"
#include "TresAttackDefinitionRanged.h"
#include "TresCoopAttack1_e_ex202_RotationPoison.generated.h"

UCLASS(HideDropdown)
class UTresCoopAttack1_e_ex202_RotationPoison : public UTresAttackDefinitionRanged {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditDefaultsOnly)
    float m_LookAtHeightOffset;
    
    UPROPERTY(EditDefaultsOnly)
    float m_SpeedRate;
    
public:
    UTresCoopAttack1_e_ex202_RotationPoison();
};

