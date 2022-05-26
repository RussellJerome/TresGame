#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "TresAttackDefinitionBase.h"
#include "TresAttack5_e_ex363_BlastWave.generated.h"

class ATresProjectileBase;

UCLASS(HideDropdown)
class UTresAttack5_e_ex363_BlastWave : public UTresAttackDefinitionBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    TSubclassOf<ATresProjectileBase> m_BulletProjectile;
    
    UPROPERTY(EditAnywhere)
    float m_WaitTime;
    
    UTresAttack5_e_ex363_BlastWave();
};

