#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "TresAttackDefinitionBase.h"
#include "UObject/NoExportTypes.h"
#include "TresAttack9_e_bx901_DarkCubeShot_Normal.generated.h"

class ATresProjectileBase;

UCLASS(HideDropdown)
class UTresAttack9_e_bx901_DarkCubeShot_Normal : public UTresAttackDefinitionBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    TSubclassOf<ATresProjectileBase> m_Projectile;
    
    UPROPERTY(EditDefaultsOnly)
    FName m_ProjectileSpawnBoneName;
    
    UPROPERTY(EditDefaultsOnly)
    FVector m_vProjectileSpawnLocationOffset;
    
    UTresAttack9_e_bx901_DarkCubeShot_Normal();
};

