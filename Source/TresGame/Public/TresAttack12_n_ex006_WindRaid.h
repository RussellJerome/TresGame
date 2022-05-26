#pragma once
#include "CoreMinimal.h"
#include "TresNpcAttackDefinitionBase.h"
#include "TresAttack12_n_ex006_WindRaid.generated.h"

class ATresProjectileBase;
class ATresCharPawnBase;

UCLASS(HideDropdown)
class UTresAttack12_n_ex006_WindRaid : public UTresNpcAttackDefinitionBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY()
    ATresProjectileBase* m_pProjBlade;
    
    UPROPERTY()
    ATresCharPawnBase* m_pAttackHitPawn;
    
public:
    UTresAttack12_n_ex006_WindRaid();
};

