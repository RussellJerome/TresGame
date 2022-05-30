#pragma once
#include "CoreMinimal.h"
#include "TresAttackDefinitionWeaponBase.h"
#include "TresAttack2_e_ex021a_ShotGunFire.generated.h"

UCLASS(HideDropdown)
class UTresAttack2_e_ex021a_ShotGunFire : public UTresAttackDefinitionWeaponBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    FName m_BoneName;
    
    UPROPERTY(EditDefaultsOnly)
    float m_OffsetZ;
    
    UPROPERTY(EditDefaultsOnly)
    uint32 m_SpawnProjectileNum;
    
    UPROPERTY(EditDefaultsOnly)
    float m_SpawnProjectileInterval;
    
    UPROPERTY(EditDefaultsOnly)
    float m_SpawnProjectileLimitYaw;
    
    UPROPERTY(EditDefaultsOnly)
    float m_SpawnProjectileLimitPitch;
    
    UPROPERTY(EditDefaultsOnly)
    float m_TimeUntilIdling;
    
    UPROPERTY(EditDefaultsOnly)
    float m_ProjectileSpeed;
    
    UTresAttack2_e_ex021a_ShotGunFire();
};

