#pragma once
#include "CoreMinimal.h"
#include "TresGumiShipSequentialProjectileBase.h"
#include "TresGumiShipEnemy625Thorn.generated.h"

class UParticleSystem;

UCLASS(Abstract)
class ATresGumiShipEnemy625Thorn : public ATresGumiShipSequentialProjectileBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditDefaultsOnly)
    UParticleSystem* m_pExplosionVFX;
    
public:
    ATresGumiShipEnemy625Thorn();
    UFUNCTION(BlueprintCallable)
    void DestructionEffect();
    
};

