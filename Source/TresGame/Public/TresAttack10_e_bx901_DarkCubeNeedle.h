#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "TresAttackDefinitionWeaponBase.h"
#include "TresAttack10_e_bx901_DarkCubeNeedle.generated.h"

class ATresProjectileBase;

UCLASS(HideDropdown)
class UTresAttack10_e_bx901_DarkCubeNeedle : public UTresAttackDefinitionWeaponBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    TSubclassOf<ATresProjectileBase> m_Projectile;
    
    UTresAttack10_e_bx901_DarkCubeNeedle();
};

