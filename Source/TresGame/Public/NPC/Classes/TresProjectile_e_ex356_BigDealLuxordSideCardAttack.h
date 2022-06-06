#pragma once
#include "CoreMinimal.h"
#include "TresProjectile_e_ex356_Base.h"
#include "TresProjectile_e_ex356_BigDealLuxordSideCardAttack.generated.h"

class UParticleSystem;

UCLASS()
class ATresProjectile_e_ex356_BigDealLuxordSideCardAttack : public ATresProjectile_e_ex356_Base {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditDefaultsOnly)
    float m_RotationInterpTime;
    
    UPROPERTY(EditDefaultsOnly)
    float m_RollAngle;
    
    UPROPERTY(EditDefaultsOnly)
    UParticleSystem* m_MapParticleSystem;
    
public:
    ATresProjectile_e_ex356_BigDealLuxordSideCardAttack();
};

