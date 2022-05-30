#pragma once
#include "CoreMinimal.h"
#include "TresAttackDefinitionBase.h"
#include "TresAttack1_e_ex037_ThunderShot.generated.h"

UCLASS(HideDropdown)
class UTresAttack1_e_ex037_ThunderShot : public UTresAttackDefinitionBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditDefaultsOnly)
    float m_pro_TurnSpeed;
    
    UPROPERTY(EditDefaultsOnly)
    float m_pro_PitchLimit;
    
    UPROPERTY(EditDefaultsOnly)
    float m_pro_FireInterval;
    
    UPROPERTY(EditDefaultsOnly)
    float m_pro_FireImpactRadius;
    
    UPROPERTY(EditDefaultsOnly)
    float m_pro_FireSpeed;
    
public:
    UTresAttack1_e_ex037_ThunderShot();
};

