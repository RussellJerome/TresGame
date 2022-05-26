#pragma once
#include "CoreMinimal.h"
#include "TresAttackDefinitionWeaponBase.h"
#include "TresAttack3_e_ex021_FireBreath.generated.h"

UCLASS(HideDropdown)
class UTresAttack3_e_ex021_FireBreath : public UTresAttackDefinitionWeaponBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditDefaultsOnly)
    float m_BreathTime;
    
public:
    UTresAttack3_e_ex021_FireBreath();
};

