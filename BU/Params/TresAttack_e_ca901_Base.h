#pragma once
#include "CoreMinimal.h"
#include "TresAttackDefinitionBase.h"
#include "TresAttack_e_ca901_Base.generated.h"

class UAnimSequenceBase;

UCLASS(HideDropdown)
class UTresAttack_e_ca901_Base : public UTresAttackDefinitionBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditDefaultsOnly)
    UAnimSequenceBase* m_AnimData;
    
    UPROPERTY(EditDefaultsOnly)
    float m_TractionMaxVelocity;
    
public:
    UTresAttack_e_ca901_Base();
};

