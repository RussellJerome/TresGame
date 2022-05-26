#pragma once
#include "CoreMinimal.h"
#include "TresProjectileBase.h"
#include "TresProjectile_e_ex313_DarkMine.generated.h"

class UParticleSystemComponent;
class UParticleSystem;

UCLASS(Abstract)
class ATresProjectile_e_ex313_DarkMine : public ATresProjectileBase {
    GENERATED_BODY()
public:
    UPROPERTY(Export)
    UParticleSystemComponent* m_DarkMineBootEff;
    
    UPROPERTY(EditDefaultsOnly)
    UParticleSystem* m_pro_DarkMineBootEffData;
    
    ATresProjectile_e_ex313_DarkMine();
};

