#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "TresAttackDefinitionBase.h"
#include "TresAttack2_e_ex310_Throw.generated.h"

class ATresProjectileBase;

UCLASS(HideDropdown)
class UTresAttack2_e_ex310_Throw : public UTresAttackDefinitionBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    TSubclassOf<ATresProjectileBase> m_ProjectileClass;
    
    UPROPERTY()
    ATresProjectileBase* m_Projectile;
    
    UPROPERTY(EditDefaultsOnly)
    float m_fMaxLoopMotionTime;
    
    UTresAttack2_e_ex310_Throw();
};

