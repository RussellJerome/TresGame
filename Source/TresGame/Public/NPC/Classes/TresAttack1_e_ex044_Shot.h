#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "TresAttackDefinitionBase.h"
#include "TresAttack1_e_ex044_Shot.generated.h"

class ATresProjectileBase;

UCLASS(HideDropdown)
class UTresAttack1_e_ex044_Shot : public UTresAttackDefinitionBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    TSubclassOf<ATresProjectileBase> m_Projectile;
    
    UTresAttack1_e_ex044_Shot();
};

