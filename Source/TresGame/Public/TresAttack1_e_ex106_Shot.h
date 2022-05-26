#pragma once
#include "CoreMinimal.h"
#include "TresAttackDefinitionRanged.h"
#include "TresAttack1_e_ex106_Shot.generated.h"

UCLASS(HideDropdown)
class UTresAttack1_e_ex106_Shot : public UTresAttackDefinitionRanged {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    float m_OppositeDistance;
    
    UPROPERTY(EditDefaultsOnly)
    float m_LimitPitch;
    
    UPROPERTY(EditDefaultsOnly)
    float m_PitchRate;
    
    UPROPERTY(EditDefaultsOnly)
    float m_YawRate;
    
    UPROPERTY(EditDefaultsOnly)
    float m_StopDistance;
    
    UPROPERTY(EditDefaultsOnly)
    float m_SecondProjectileSpeed;
    
    UPROPERTY(EditDefaultsOnly)
    float m_SecondProjectileHomingXY;
    
    UPROPERTY(EditDefaultsOnly)
    float m_SecondProjectileHomingZ;
    
    UPROPERTY(EditDefaultsOnly)
    float m_SecondProjectileMaxAngle;
    
    UPROPERTY(EditDefaultsOnly)
    float m_SecondProjectileMinDist;
    
    UPROPERTY(EditDefaultsOnly)
    float m_OppSecondProjectileSpeed;
    
    UPROPERTY(EditDefaultsOnly)
    float m_OppSecondProjectileHomingXY;
    
    UPROPERTY(EditDefaultsOnly)
    float m_OppSecondProjectileHomingZ;
    
    UPROPERTY(EditDefaultsOnly)
    float m_OppSecondProjectileMinDist;
    
    UTresAttack1_e_ex106_Shot();
};

