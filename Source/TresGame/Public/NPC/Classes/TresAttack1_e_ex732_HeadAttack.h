#pragma once
#include "CoreMinimal.h"
#include "TresAttackDefinitionBase.h"
#include "TresAttack1_e_ex732_HeadAttack.generated.h"

UCLASS(HideDropdown)
class UTresAttack1_e_ex732_HeadAttack : public UTresAttackDefinitionBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    float m_fForwardMaxVelocity;
    
    UPROPERTY(EditDefaultsOnly)
    float m_fForwardAccel;
    
    UPROPERTY(EditDefaultsOnly)
    float m_fMaxMoveDistance;
    
    UPROPERTY(EditDefaultsOnly)
    float m_fBiteDistance;
    
    UPROPERTY(EditDefaultsOnly)
    float m_fBiteAngle;
    
    UPROPERTY(EditDefaultsOnly)
    float m_fMaxPitch;
    
    UPROPERTY(EditDefaultsOnly)
    float m_fMinPitch;
    
    UTresAttack1_e_ex732_HeadAttack();
};

