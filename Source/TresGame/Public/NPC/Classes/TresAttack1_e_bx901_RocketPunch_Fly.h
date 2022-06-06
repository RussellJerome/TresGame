#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "TresAttackDefinitionBase.h"
#include "TresAttack1_e_bx901_RocketPunch_Fly.generated.h"

class ATresProjectile_e_bx901_RocketPunch_Fly;

UCLASS(HideDropdown)
class UTresAttack1_e_bx901_RocketPunch_Fly : public UTresAttackDefinitionBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    TSubclassOf<ATresProjectile_e_bx901_RocketPunch_Fly> m_Projectile;
    
    UTresAttack1_e_bx901_RocketPunch_Fly();
};

