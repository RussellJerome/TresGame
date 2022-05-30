#pragma once
#include "CoreMinimal.h"
#include "TresProjectileBase.h"
#include "TresProjectile_e_ex313_DarkHand_ShockWave.generated.h"

class UParticleSystem;

UCLASS(Abstract)
class ATresProjectile_e_ex313_DarkHand_ShockWave : public ATresProjectileBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    UParticleSystem* m_pro_ShockWaveEffData;
    
    ATresProjectile_e_ex313_DarkHand_ShockWave();
};

