#pragma once
#include "CoreMinimal.h"
#include "TresProjectileBase.h"
#include "TresProj_BadStatDischarge.generated.h"

class UParticleSystem;

UCLASS(Abstract)
class ATresProj_BadStatDischarge : public ATresProjectileBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditDefaultsOnly)
    UParticleSystem* m_HitTailEffect;
    
public:
    ATresProj_BadStatDischarge();
};

