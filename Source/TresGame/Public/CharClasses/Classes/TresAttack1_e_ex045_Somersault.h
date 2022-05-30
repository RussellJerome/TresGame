#pragma once
#include "CoreMinimal.h"
#include "TresAttackDefinitionBase.h"
#include "TresAttack1_e_ex045_Somersault.generated.h"

class UAnimSequenceBase;

UCLASS(HideDropdown)
class UTresAttack1_e_ex045_Somersault : public UTresAttackDefinitionBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditDefaultsOnly)
    UAnimSequenceBase* m_AttackAnim_Horn;
    
    UPROPERTY(EditDefaultsOnly)
    UAnimSequenceBase* m_AttackAnim_NoHorn;
    
public:
    UTresAttack1_e_ex045_Somersault();
};

