#pragma once
#include "CoreMinimal.h"
#include "TresProjectileSkeletalMeshBase.h"
#include "TresProjectile_n_he201_Rock.generated.h"

class UParticleSystem;

UCLASS(Abstract)
class ATresProjectile_n_he201_Rock : public ATresProjectileSkeletalMeshBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    UParticleSystem* m_RockEffData;
    
    UPROPERTY(EditDefaultsOnly)
    UParticleSystem* m_RockEffDataWall;
    
    UPROPERTY(EditDefaultsOnly)
    float m_fDownNearSize;
    
    UPROPERTY(EditDefaultsOnly)
    float m_fDownDir;
    
    ATresProjectile_n_he201_Rock();
};

