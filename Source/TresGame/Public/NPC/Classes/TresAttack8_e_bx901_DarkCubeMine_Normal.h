#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "TresAttackDefinitionWeaponBase.h"
#include "TresAttack8_e_bx901_DarkCubeMine_Normal.generated.h"

class ATresProjectileBase;

UCLASS(HideDropdown)
class UTresAttack8_e_bx901_DarkCubeMine_Normal : public UTresAttackDefinitionWeaponBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    TSubclassOf<ATresProjectileBase> m_Projectile;
    
    UTresAttack8_e_bx901_DarkCubeMine_Normal();
};

