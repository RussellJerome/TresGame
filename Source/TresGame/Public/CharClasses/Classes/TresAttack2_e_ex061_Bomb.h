#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "TresAttackDefinitionBase.h"
#include "TresAttack2_e_ex061_Bomb.generated.h"

class ATresProjectileBase;

UCLASS(HideDropdown)
class UTresAttack2_e_ex061_Bomb : public UTresAttackDefinitionBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    TSubclassOf<ATresProjectileBase> m_Projectile;
    
    UTresAttack2_e_ex061_Bomb();
};

