#pragma once
#include "CoreMinimal.h"
#include "TresAttackDefinitionBase.h"
#include "TresAttack2_e_ex114_RollingGlide.generated.h"

UCLASS(HideDropdown)
class UTresAttack2_e_ex114_RollingGlide : public UTresAttackDefinitionBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditDefaultsOnly)
    float m_Speed;
    
    UPROPERTY(EditDefaultsOnly)
    float m_LandHeight;
    
    UPROPERTY(EditDefaultsOnly)
    float m_AttackDistance;
    
    UPROPERTY(EditDefaultsOnly)
    float m_HomingPredictionTime;
    
    UPROPERTY(EditDefaultsOnly)
    float m_AttackSlow;
    
    UPROPERTY(EditDefaultsOnly)
    float m_HitSlow;
    
    UPROPERTY(EditDefaultsOnly)
    float m_RotateAngle_AttackXY;
    
    UPROPERTY(EditDefaultsOnly)
    float m_HomingMaxAngle;
    
public:
    UTresAttack2_e_ex114_RollingGlide();
};

