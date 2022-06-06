#pragma once
#include "CoreMinimal.h"
#include "TresProjectileBase.h"
#include "TresProjectile_XIIIE_BladeTornadoForTackle.generated.h"

class UParticleSystem;
class UParticleSystemComponent;

UCLASS(HideDropdown)
class ATresProjectile_XIIIE_BladeTornadoForTackle : public ATresProjectileBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    UParticleSystem* m_BladeTornadoTipData;
    
    UPROPERTY(EditDefaultsOnly)
    UParticleSystem* m_BladeTornadoAppearData;
    
    UPROPERTY(EditDefaultsOnly)
    UParticleSystem* m_BladeTornadoHitLandData;
    
    UPROPERTY(EditDefaultsOnly)
    float m_SpawnHitLandDistance;
    
    UPROPERTY(Export)
    UParticleSystemComponent* m_BladeTornadoAppearCmp;
    
    UPROPERTY(Export)
    UParticleSystemComponent* m_BladeTornadoHitLandCmp;
    
    UPROPERTY(Export)
    UParticleSystemComponent* m_BladeTornadoTipCmp;
    
    ATresProjectile_XIIIE_BladeTornadoForTackle();
};

