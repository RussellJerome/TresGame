#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "TresAttackDefinitionBase.h"
#include "TresAttack1_e_bx901_RocketPunch.generated.h"

class ATresProjectileBase;

UCLASS(HideDropdown)
class UTresAttack1_e_bx901_RocketPunch : public UTresAttackDefinitionBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    TSubclassOf<ATresProjectileBase> m_Projectile;
    
    UTresAttack1_e_bx901_RocketPunch();
};

