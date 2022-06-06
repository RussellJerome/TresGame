#pragma once
#include "CoreMinimal.h"
#include "TresWeaponBase.h"
#include "TresWeapon_e_ex355_Claymore.generated.h"

class UParticleSystem;

UCLASS(HideDropdown)
class ATresWeapon_e_ex355_Claymore : public ATresWeaponBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditDefaultsOnly)
    UParticleSystem* m_WeaponChangeEffect;
    
    UPROPERTY(EditDefaultsOnly)
    FName m_WeaponEffectAttach;
    
    UPROPERTY(EditDefaultsOnly)
    float m_WeaponChangeDelayTime;
    
public:
    ATresWeapon_e_ex355_Claymore();
};

