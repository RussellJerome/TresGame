#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "TresAttackDefinitionBase.h"
#include "TresAttack4_e_he001a_TrampleL.generated.h"

class ATresProjectileBase;

UCLASS(HideDropdown)
class UTresAttack4_e_he001a_TrampleL : public UTresAttackDefinitionBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditDefaultsOnly)
    TSubclassOf<ATresProjectileBase> m_ProjectileWave2;
    
public:
    UTresAttack4_e_he001a_TrampleL();
};

