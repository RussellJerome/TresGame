#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "TresAttackDefinitionWeaponBase.h"
#include "TresAttack5_e_bx901_DarkCubeShot.generated.h"

class ATresProjectileBase;

UCLASS(HideDropdown)
class UTresAttack5_e_bx901_DarkCubeShot : public UTresAttackDefinitionWeaponBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    TSubclassOf<ATresProjectileBase> m_Projectile;
    
    UTresAttack5_e_bx901_DarkCubeShot();
};

