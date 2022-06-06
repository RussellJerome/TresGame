#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "TresAttackDefinitionBase.h"
#include "TresAttack1_e_ex071_Slam.generated.h"

class ATresProjectileBase;

UCLASS(HideDropdown)
class UTresAttack1_e_ex071_Slam : public UTresAttackDefinitionBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditDefaultsOnly)
    TSubclassOf<ATresProjectileBase> m_ShockWaveProjectileClass;
    
    UPROPERTY()
    ATresProjectileBase* m_ShockWaveProjectile;
    
public:
    UTresAttack1_e_ex071_Slam();
};

