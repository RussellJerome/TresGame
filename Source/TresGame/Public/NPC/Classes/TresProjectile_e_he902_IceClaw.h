#pragma once
#include "CoreMinimal.h"
#include "TresProjectileBase.h"
#include "TresProjectile_e_he902_IceClaw.generated.h"

class UParticleSystem;

UCLASS(Abstract)
class ATresProjectile_e_he902_IceClaw : public ATresProjectileBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    UParticleSystem* m_PredictionParticleClass;
    
    ATresProjectile_e_he902_IceClaw();
};

