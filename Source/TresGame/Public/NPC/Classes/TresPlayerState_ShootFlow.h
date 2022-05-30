#pragma once
#include "CoreMinimal.h"
#include "TresCharState_Attack.h"
#include "TresPlayerState_ShootFlow.generated.h"

class UParticleSystemComponent;
class UTresLockonTargetComponent;
class ATresProjectileBase;

UCLASS()
class UTresPlayerState_ShootFlow : public UTresCharState_Attack {
    GENERATED_BODY()
public:
    UPROPERTY(Export)
    UTresLockonTargetComponent* m_pComponent;
    
    UPROPERTY()
    ATresProjectileBase* m_pShotProjectile;
    
    UPROPERTY()
    TArray<ATresProjectileBase*> m_ProjectileList;
    
    UPROPERTY(Export)
    TArray<UParticleSystemComponent*> m_EffectList;
    
    UTresPlayerState_ShootFlow();
};

