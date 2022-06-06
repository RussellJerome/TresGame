#pragma once
#include "CoreMinimal.h"
#include "TresAttackDefinitionWeaponBase.h"
#include "TresAttack1_e_ex021_GlideMagicBullet.generated.h"

UCLASS(HideDropdown)
class UTresAttack1_e_ex021_GlideMagicBullet : public UTresAttackDefinitionWeaponBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditDefaultsOnly)
    uint32 m_ShotNum;
    
    UPROPERTY(EditDefaultsOnly)
    float m_ProjectileSpeed;
    
public:
    UTresAttack1_e_ex021_GlideMagicBullet();
};

