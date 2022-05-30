#pragma once
#include "CoreMinimal.h"
#include "TresAttack_e_ex026_WeaponAttackBase.h"
#include "TresAttack2_e_ex026_MachineGunFire.generated.h"

UCLASS(HideDropdown)
class UTresAttack2_e_ex026_MachineGunFire : public UTresAttack_e_ex026_WeaponAttackBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    float m_IntervalTimer;
    
    UPROPERTY(EditDefaultsOnly)
    uint8 m_ShotMaxCount;
    
    UPROPERTY(EditDefaultsOnly)
    uint8 m_ModifyPitch: 1;
    
    UPROPERTY(EditDefaultsOnly)
    float m_MinShotAnglePitch;
    
    UPROPERTY(EditDefaultsOnly)
    float m_MaxShotAnglePitch;
    
    UTresAttack2_e_ex026_MachineGunFire();
};

