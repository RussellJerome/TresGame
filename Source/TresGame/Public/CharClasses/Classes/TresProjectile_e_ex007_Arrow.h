#pragma once
#include "CoreMinimal.h"
#include "TresProjectileSkeletalMeshBase.h"
#include "TresProjectile_e_ex007_Arrow.generated.h"

class UParticleSystem;
class UParticleSystemComponent;

UCLASS(Abstract)
class ATresProjectile_e_ex007_Arrow : public ATresProjectileSkeletalMeshBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditDefaultsOnly)
    UParticleSystem* m_VanishMapEffectData;
    
    UPROPERTY(EditDefaultsOnly)
    UParticleSystem* m_VanishPawnEffectData;
    
    UPROPERTY(Export)
    UParticleSystemComponent* m_VanishEffectComponent;
    
public:
    ATresProjectile_e_ex007_Arrow();
};

