#pragma once
#include "CoreMinimal.h"
#include "TresAttackDefinitionWeaponBase.h"
#include "EX354_ArtemaWarpShotSet.h"
#include "TresAttack14_e_ex354_SpawnArtemaWarpShot.generated.h"

class ATresProjectileBase;

UCLASS(HideDropdown)
class UTresAttack14_e_ex354_SpawnArtemaWarpShot : public UTresAttackDefinitionWeaponBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    FEX354_ArtemaWarpShotSet m_ShotSet;
    
    UPROPERTY()
    ATresProjectileBase* m_Projectile;
    
    UTresAttack14_e_ex354_SpawnArtemaWarpShot();
};

