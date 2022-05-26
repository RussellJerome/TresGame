#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "TresAttackDefinitionBase.h"
#include "TresFeatherShotProjectileParam_e_ex081.h"
#include "TresAttack1_e_ex081_FeatherShot.generated.h"

class ATresProjectileBase;

UCLASS(HideDropdown)
class UTresAttack1_e_ex081_FeatherShot : public UTresAttackDefinitionBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditDefaultsOnly)
    TSubclassOf<ATresProjectileBase> m_FeatherProjectileAsset;
    
    UPROPERTY(EditDefaultsOnly)
    float m_RotateYaw;
    
    UPROPERTY(EditDefaultsOnly)
    float m_AttackStartTurnSpeed;
    
    UPROPERTY(EditDefaultsOnly)
    float m_FeatherShotSpeed;
    
    UPROPERTY(EditDefaultsOnly)
    float m_HomingSpeedXY;
    
    UPROPERTY(EditDefaultsOnly)
    float m_HomingSpeedZ;
    
    UPROPERTY(EditDefaultsOnly)
    float m_HomigMinDist;
    
    UPROPERTY(EditDefaultsOnly)
    float m_HomingMaxAngle;
    
    UPROPERTY(EditDefaultsOnly)
    TArray<FTresFeatherShotProjectileParam_e_ex081> m_FeatherProjectileParams;
    
    UPROPERTY(EditDefaultsOnly)
    float m_FeatherShotMaxPitchRate;
    
    UPROPERTY(EditDefaultsOnly)
    float m_FeatherShotMaxPitch;
    
    UPROPERTY(EditDefaultsOnly)
    float m_FeatherShotMaxInversePitch;
    
    UPROPERTY(EditDefaultsOnly)
    float m_AttackTurnSpeedXY;
    
public:
    UTresAttack1_e_ex081_FeatherShot();
};

