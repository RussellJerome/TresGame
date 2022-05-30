#pragma once
#include "CoreMinimal.h"
#include "TresProjectile_e_ex355_Claymore_Base.h"
#include "UObject/NoExportTypes.h"
#include "TresProjectile_e_ex355_Claymore_SwingBB.generated.h"

class UParticleSystem;

UCLASS(Abstract)
class ATresProjectile_e_ex355_Claymore_SwingBB : public ATresProjectile_e_ex355_Claymore_Base {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    UParticleSystem* m_WeaponGroundHitEffectClass;
    
    UPROPERTY(EditDefaultsOnly)
    FVector m_vWeaponGroundHitEffectOffset;
    
    ATresProjectile_e_ex355_Claymore_SwingBB();
};

