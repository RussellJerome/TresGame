#pragma once
#include "CoreMinimal.h"
#include "TresAttackDefinitionWeaponBase.h"
#include "TresAction_EnemyShipBase_StoleTrapBase.generated.h"

class UParticleSystem;

UCLASS(HideDropdown)
class UTresAction_EnemyShipBase_StoleTrapBase : public UTresAttackDefinitionWeaponBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    UParticleSystem* m_StartEffect;
    
    UPROPERTY(EditDefaultsOnly)
    UParticleSystem* m_PointEffect;
    
    UPROPERTY(EditDefaultsOnly)
    float m_DelayTime;
    
    UPROPERTY(EditDefaultsOnly)
    float m_Height;
    
    UPROPERTY(EditDefaultsOnly)
    float m_ProjectileSpawnTime;
    
    UPROPERTY(EditDefaultsOnly)
    float m_ProjectileSeedTimeLimit;
    
    UPROPERTY(EditDefaultsOnly)
    float m_ProjectileEffectEndTime;
    
    UPROPERTY(EditDefaultsOnly)
    FName m_AttackSeedName;
    
    UPROPERTY(EditDefaultsOnly)
    FName m_SocketNameRight;
    
    UPROPERTY(EditDefaultsOnly)
    FName m_SocketNameLeft;
    
    UTresAction_EnemyShipBase_StoleTrapBase();
};

