#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "TresAttackDefinitionWeaponBase.h"
#include "TresAttack8_e_ex311_ShotBlizzard.generated.h"

class ATresProjectileBase;

UCLASS(HideDropdown)
class UTresAttack8_e_ex311_ShotBlizzard : public UTresAttackDefinitionWeaponBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    TSubclassOf<ATresProjectileBase> m_Projectile;
    
    UPROPERTY(EditDefaultsOnly)
    int32 m_BulletNumMax;
    
    UPROPERTY(EditDefaultsOnly)
    float m_shotInterval;
    
    UTresAttack8_e_ex311_ShotBlizzard();
};

