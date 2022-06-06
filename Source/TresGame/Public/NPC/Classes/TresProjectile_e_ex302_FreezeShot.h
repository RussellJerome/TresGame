#pragma once
#include "CoreMinimal.h"
#include "TresProjectileBase.h"
#include "TresProjectile_e_ex302_FreezeShot.generated.h"

class UParticleSystem;
class UParticleSystemComponent;

UCLASS(HideDropdown)
class ATresProjectile_e_ex302_FreezeShot : public ATresProjectileBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    UParticleSystem* m_ChargeEffectData;
    
    UPROPERTY(Export)
    UParticleSystemComponent* m_ChargeEffectCmp;
    
    ATresProjectile_e_ex302_FreezeShot();
};

