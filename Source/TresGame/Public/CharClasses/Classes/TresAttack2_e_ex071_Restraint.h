#pragma once
#include "CoreMinimal.h"
#include "TresAttackDefinitionBase.h"
#include "TresAttack2_e_ex071_Restraint.generated.h"

UCLASS(HideDropdown)
class UTresAttack2_e_ex071_Restraint : public UTresAttackDefinitionBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditDefaultsOnly)
    float m_RestraintTime;
    
    UPROPERTY(EditDefaultsOnly)
    FName m_RestraintDamageAttackIDName;
    
public:
    UTresAttack2_e_ex071_Restraint();
};

