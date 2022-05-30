#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "TresAttackDefinitionBase.h"
#include "TresAttack4_e_ex035_NutsThrow.generated.h"

class ATresProjectileBase;

UCLASS(HideDropdown)
class UTresAttack4_e_ex035_NutsThrow : public UTresAttackDefinitionBase {
    GENERATED_BODY()
public:
    UPROPERTY()
    ATresProjectileBase* m_pNuts;
    
    UPROPERTY(EditDefaultsOnly)
    TSubclassOf<ATresProjectileBase> m_ProjectileClass;
    
    UPROPERTY(EditDefaultsOnly)
    float m_fThrowAngle;
    
    UTresAttack4_e_ex035_NutsThrow();
};

