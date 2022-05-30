#pragma once
#include "CoreMinimal.h"
#include "TresProjectileBase.h"
#include "TresProjectile_e_dw407b_PillarLight.generated.h"

class USplineComponent;
class UParticleSystem;
class UParticleSystemComponent;

UCLASS(Abstract)
class ATresProjectile_e_dw407b_PillarLight : public ATresProjectileBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditDefaultsOnly)
    UParticleSystem* m_PillarLightEffData;
    
    UPROPERTY(EditDefaultsOnly)
    UParticleSystem* m_LightMarkEffData;
    
    UPROPERTY(Export)
    UParticleSystemComponent* m_PillarLightEffCmp;
    
    UPROPERTY(Export)
    UParticleSystemComponent* m_LightMarkEffCmp;
    
public:
    UPROPERTY(Export)
    USplineComponent* m_PatternActor;
    
    ATresProjectile_e_dw407b_PillarLight();
};

