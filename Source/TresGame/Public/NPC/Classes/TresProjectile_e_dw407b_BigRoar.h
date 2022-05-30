#pragma once
#include "CoreMinimal.h"
#include "TresProjectile_DarkSide_Base.h"
#include "TresProjectile_e_dw407b_BigRoar.generated.h"

class UParticleSystemComponent;

UCLASS()
class ATresProjectile_e_dw407b_BigRoar : public ATresProjectile_DarkSide_Base {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    FName m_AttackIDName;
    
    UPROPERTY(EditDefaultsOnly)
    float m_LandHitEffLifeTime;
    
    UPROPERTY(Export)
    UParticleSystemComponent* m_LandHitEffCmp;
    
    ATresProjectile_e_dw407b_BigRoar();
};

