#pragma once
#include "CoreMinimal.h"
#include "TresGumiShipProjectileBase.h"
#include "TresGumiShipEffectProjectileBase.generated.h"

class UParticleSystem;

UCLASS()
class ATresGumiShipEffectProjectileBase : public ATresGumiShipProjectileBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    UParticleSystem* m_pAttachEffectType;
    
public:
    ATresGumiShipEffectProjectileBase();
};

