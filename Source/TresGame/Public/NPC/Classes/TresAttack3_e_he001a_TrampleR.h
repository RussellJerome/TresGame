#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "TresAttackDefinitionBase.h"
#include "TresAttack3_e_he001a_TrampleR.generated.h"

class ATresProjectileBase;

UCLASS(HideDropdown)
class UTresAttack3_e_he001a_TrampleR : public UTresAttackDefinitionBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditDefaultsOnly)
    TSubclassOf<ATresProjectileBase> m_ProjectileWave2;
    
public:
    UTresAttack3_e_he001a_TrampleR();
};

