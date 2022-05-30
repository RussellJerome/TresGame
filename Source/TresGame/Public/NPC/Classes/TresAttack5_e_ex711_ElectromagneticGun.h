#pragma once
#include "CoreMinimal.h"
#include "TresAttackDefinitionBase.h"
#include "TresAttack5_e_ex711_ElectromagneticGun.generated.h"

class ATresProjectileBase;

UCLASS(HideDropdown)
class UTresAttack5_e_ex711_ElectromagneticGun : public UTresAttackDefinitionBase {
    GENERATED_BODY()
public:
    UPROPERTY()
    ATresProjectileBase* m_ElectromagneticGun;
    
protected:
    UPROPERTY(EditDefaultsOnly)
    float m_pro_ElectromagneticGunScaleTime;
    
    UPROPERTY(EditDefaultsOnly)
    float m_pro_ElectromagneticGunFireTime;
    
    UPROPERTY(EditDefaultsOnly)
    float m_pro_ElectromagneticGunFireSpeed;
    
    UPROPERTY(EditDefaultsOnly)
    float m_pro_ElectromagneticGunFireAngle;
    
    UPROPERTY(EditDefaultsOnly)
    float m_pro_ElectromagneticGunImpactSpeed;
    
    UPROPERTY(EditDefaultsOnly)
    float m_pro_ElectromagneticGunImpactDist;
    
    UPROPERTY(EditDefaultsOnly)
    float m_pro_TurnSpeed;
    
    UPROPERTY(EditDefaultsOnly)
    float m_pro_MoveHeight;
    
    UPROPERTY(EditDefaultsOnly)
    float m_pro_TargetDistXY;
    
    UPROPERTY(EditDefaultsOnly)
    float m_pro_MoveSpeedXY;
    
public:
    UTresAttack5_e_ex711_ElectromagneticGun();
};

