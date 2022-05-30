#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "TresAttackDefinitionBase.h"
#include "TresAttack2_e_he001a_TrampleLR.generated.h"

class ATresProjectileBase;

UCLASS(HideDropdown)
class UTresAttack2_e_he001a_TrampleLR : public UTresAttackDefinitionBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditDefaultsOnly)
    TSubclassOf<ATresProjectileBase> m_ProjectileWave0;
    
    UPROPERTY(EditDefaultsOnly)
    TSubclassOf<ATresProjectileBase> m_ProjectileWave1;
    
public:
    UTresAttack2_e_he001a_TrampleLR();
};

