#pragma once
#include "CoreMinimal.h"
#include "TresProjectileBase.h"
#include "TresProjectile_e_ex361_DarkHand_Halo.generated.h"

class UParticleSystem;

UCLASS(Abstract)
class ATresProjectile_e_ex361_DarkHand_Halo : public ATresProjectileBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    UParticleSystem* m_pro_HaloEffData;
    
    ATresProjectile_e_ex361_DarkHand_Halo();
};

