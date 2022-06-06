#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "TresAttackDefinitionBase.h"
#include "TresAttack1_e_he001a_OverheadRock.generated.h"

class ATresProjectileBase;

UCLASS(HideDropdown)
class UTresAttack1_e_he001a_OverheadRock : public UTresAttackDefinitionBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditDefaultsOnly)
    TSubclassOf<ATresProjectileBase> m_ProjectileRock;
    
    UPROPERTY(EditDefaultsOnly)
    int32 m_RockCount;
    
    UPROPERTY(EditDefaultsOnly)
    float m_RockheightMin;
    
    UPROPERTY(EditDefaultsOnly)
    float m_RockheightMax;
    
public:
    UTresAttack1_e_he001a_OverheadRock();
};

