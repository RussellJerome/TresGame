#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "TresNpcAttackDefinitionRanged.h"
#include "TresAttack2_n_ts202_Laser.generated.h"

class ATresProjectileBase;

UCLASS(HideDropdown)
class UTresAttack2_n_ts202_Laser : public UTresNpcAttackDefinitionRanged {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    TSubclassOf<ATresProjectileBase> m_Projectile;
    
    UTresAttack2_n_ts202_Laser();
};

