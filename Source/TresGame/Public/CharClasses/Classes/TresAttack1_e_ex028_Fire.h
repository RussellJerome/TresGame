#pragma once
#include "CoreMinimal.h"
#include "TresAttackDefinitionBase.h"
#include "TresAttack1_e_ex028_Fire.generated.h"

UCLASS(HideDropdown)
class UTresAttack1_e_ex028_Fire : public UTresAttackDefinitionBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditDefaultsOnly)
    float m_pro_YawSpeed;
    
    UPROPERTY(EditDefaultsOnly)
    float m_pro_PitchSpeed;
    
    UPROPERTY(EditDefaultsOnly)
    float m_pro_PitchLimit;
    
public:
    UTresAttack1_e_ex028_Fire();
};

