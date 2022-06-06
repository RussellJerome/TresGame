#pragma once
#include "CoreMinimal.h"
#include "TresProjectileBase.h"
#include "TresProjectile_e_ex771_EncloseFlare.generated.h"

class UParticleSystem;

UCLASS(Abstract)
class ATresProjectile_e_ex771_EncloseFlare : public ATresProjectileBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    UParticleSystem* m_pro_PCWarpStEffData;
    
    UPROPERTY(EditDefaultsOnly)
    UParticleSystem* m_pro_PCWarpEndEffData;
    
    UPROPERTY(EditDefaultsOnly)
    float m_pro_AtkColTime;
    
    ATresProjectile_e_ex771_EncloseFlare();
};

