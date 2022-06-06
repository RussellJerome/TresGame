#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "TresAttackDefinitionBase.h"
#include "UObject/NoExportTypes.h"
#include "TresAttack11_e_bx901_BurstShot.generated.h"

class ATresProjectileBase;

UCLASS(HideDropdown)
class UTresAttack11_e_bx901_BurstShot : public UTresAttackDefinitionBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    TSubclassOf<ATresProjectileBase> m_Projectile_Shot;
    
    UPROPERTY(EditDefaultsOnly)
    FName m_ShotSpawnBoneName;
    
    UPROPERTY(EditDefaultsOnly)
    FVector m_vShotSpawnLocationOffset;
    
    UTresAttack11_e_bx901_BurstShot();
};

