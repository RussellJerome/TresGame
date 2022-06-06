#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "TresProjectileSkeletalMeshBase.h"
#include "Engine/EngineTypes.h"
#include "TresProjectile_e_ca901_DarkVortex.generated.h"

class UParticleSystem;
class ATresProjectileBase;

UCLASS(Abstract)
class ATresProjectile_e_ca901_DarkVortex : public ATresProjectileSkeletalMeshBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditDefaultsOnly)
    TSubclassOf<ATresProjectileBase> m_TentacleShootUpProjectileAsset;
    
    UPROPERTY(EditDefaultsOnly)
    UParticleSystem* m_EffectAsset;
    
public:
    ATresProjectile_e_ca901_DarkVortex();
protected:
    UFUNCTION()
    void HandleOnImpact(const FHitResult& HitResult);
    
};

