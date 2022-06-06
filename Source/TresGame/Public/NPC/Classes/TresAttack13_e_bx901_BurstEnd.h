#pragma once
#include "CoreMinimal.h"
#include "TresAttackDefinitionBase.h"
#include "TresAttack13_e_bx901_BurstEnd.generated.h"

class ATresProjectileBase;

UCLASS(HideDropdown)
class UTresAttack13_e_bx901_BurstEnd : public UTresAttackDefinitionBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    float m_fMineSpeed;
    
protected:
    UPROPERTY()
    TArray<ATresProjectileBase*> m_BurstProjArray;
    
public:
    UTresAttack13_e_bx901_BurstEnd();
};

