#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "TresAttackDefinitionBase.h"
#include "TresAttack7_e_ex721_Flash.generated.h"

class ATresProjectileBase;

UCLASS(HideDropdown)
class UTresAttack7_e_ex721_Flash : public UTresAttackDefinitionBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditDefaultsOnly)
    TSubclassOf<ATresProjectileBase> m_FlashProjectile;
    
public:
    UTresAttack7_e_ex721_Flash();
};

