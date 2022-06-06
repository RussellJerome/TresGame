#pragma once
#include "CoreMinimal.h"
#include "TresAttackDefinitionBase.h"
#include "TresAttack1_e_ex310_Combo.generated.h"

UCLASS(HideDropdown)
class UTresAttack1_e_ex310_Combo : public UTresAttackDefinitionBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    bool m_bForceCombo;
    
    UTresAttack1_e_ex310_Combo();
};

