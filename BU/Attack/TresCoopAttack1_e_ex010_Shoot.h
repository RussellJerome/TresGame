#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "TresAttackDefinitionWeaponBase.h"
#include "TresCoopAttack1_e_ex010_Shoot.generated.h"

class ATresProjectileBase;
class ATresProjectile_e_ex007_Arrow;

UCLASS(HideDropdown)
class UTresCoopAttack1_e_ex010_Shoot : public UTresAttackDefinitionWeaponBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditDefaultsOnly)
    TSubclassOf<ATresProjectileBase> m_Projectile;
    
    UPROPERTY(EditDefaultsOnly)
    uint8 m_bIsRailSlide: 1;
    
    UPROPERTY(EditDefaultsOnly)
    float m_ArrivalTime;
    
    UPROPERTY(EditDefaultsOnly)
    float m_LimitYaw;
    
    UPROPERTY()
    ATresProjectile_e_ex007_Arrow* m_Arrow;
    
public:
    UTresCoopAttack1_e_ex010_Shoot();
};

