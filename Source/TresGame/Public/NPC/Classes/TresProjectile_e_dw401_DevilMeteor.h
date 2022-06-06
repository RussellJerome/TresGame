#pragma once
#include "CoreMinimal.h"
#include "TresProjectileBase.h"
#include "TresProjectile_e_dw401_DevilMeteor.generated.h"

class UParticleSystem;

UCLASS(Abstract)
class ATresProjectile_e_dw401_DevilMeteor : public ATresProjectileBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditDefaultsOnly)
    UParticleSystem* m_pro_GroundEffData;
    
    UPROPERTY(EditDefaultsOnly)
    UParticleSystem* m_pro_HoleAppearEffData;
    
    UPROPERTY(EditDefaultsOnly)
    UParticleSystem* m_PCHitEffData;
    
public:
    ATresProjectile_e_dw401_DevilMeteor();
};

