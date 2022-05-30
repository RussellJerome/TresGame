#pragma once
#include "CoreMinimal.h"
#include "TresNpcAttackDefinitionBase.h"
#include "TresAttack5_n_ca201_TwistRolling.generated.h"

UCLASS(HideDropdown)
class UTresAttack5_n_ca201_TwistRolling : public UTresNpcAttackDefinitionBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditDefaultsOnly)
    float m_SlashPitchMax;
    
    UPROPERTY(EditDefaultsOnly)
    float m_SlashPitchMin;
    
    UPROPERTY(EditDefaultsOnly)
    float m_SlashYawMinMax;
    
    UPROPERTY(EditDefaultsOnly)
    float m_DiveYaw;
    
    UPROPERTY(EditDefaultsOnly)
    float m_DiveDistanceMax;
    
    UPROPERTY(EditDefaultsOnly)
    uint8 m_UseAttackSpeed: 1;
    
    UPROPERTY(EditDefaultsOnly)
    float m_AttackSpeed;
    
    UPROPERTY(EditDefaultsOnly)
    float m_AttackGravityScale;
    
public:
    UTresAttack5_n_ca201_TwistRolling();
};

