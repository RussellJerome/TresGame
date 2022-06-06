#pragma once
#include "CoreMinimal.h"
#include "TresProjectileBase.h"
#include "TresProjectile_e_ex354_ClusterShot.generated.h"

class AActor;
class UParticleSystem;

UCLASS(Abstract)
class ATresProjectile_e_ex354_ClusterShot : public ATresProjectileBase {
    GENERATED_BODY()
public:
    UPROPERTY()
    ATresProjectileBase* m_ClusterShotExplosion;
    
    UPROPERTY()
    AActor* m_ClusterShotManager;
    
    UPROPERTY(EditDefaultsOnly)
    UParticleSystem* m_pro_ScrollHitEffData;
    
    ATresProjectile_e_ex354_ClusterShot();
};

