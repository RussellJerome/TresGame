#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "TresAttackDefinitionWeaponBase.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Rotator -FallbackName=Rotator
#include "TresAttack_e_ex026_WeaponAttackBase.generated.h"

class ATresProjectileBase;

UCLASS(HideDropdown)
class UTresAttack_e_ex026_WeaponAttackBase : public UTresAttackDefinitionWeaponBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    TSubclassOf<ATresProjectileBase> m_Projectile;
    
    UPROPERTY(EditDefaultsOnly)
    FRotator m_ShotDgrees;
    
    UPROPERTY(EditDefaultsOnly)
    float m_ProjectileSpeed;
    
    UPROPERTY(EditDefaultsOnly)
    float m_AimMoveDir;
    
    UTresAttack_e_ex026_WeaponAttackBase();
};

