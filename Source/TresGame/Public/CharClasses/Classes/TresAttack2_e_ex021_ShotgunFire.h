#pragma once
#include "CoreMinimal.h"
#include "TresAttackDefinitionWeaponBase.h"
#include "TresAttack2_e_ex021_ShotgunFire.generated.h"

UCLASS(HideDropdown)
class UTresAttack2_e_ex021_ShotgunFire : public UTresAttackDefinitionWeaponBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditDefaultsOnly)
    uint8 m_bAimBBPearl: 1;
    
    UPROPERTY(EditDefaultsOnly)
    FName m_BoneName;
    
    UPROPERTY(EditDefaultsOnly)
    float m_OffsetZ;
    
    UPROPERTY(EditDefaultsOnly)
    uint32 m_SpawnProjectileNum;
    
    UPROPERTY(EditDefaultsOnly)
    int32 m_AimSpawnProjectileNum;
    
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
    
    UPROPERTY(EditDefaultsOnly)
    float m_HomingOffsetDistMin;
    
    UPROPERTY(EditDefaultsOnly)
    float m_HomingOffsetDistMax;
    
public:
    UTresAttack2_e_ex021_ShotgunFire();
};

