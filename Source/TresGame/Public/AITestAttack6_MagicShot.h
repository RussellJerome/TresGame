#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "TresAttackDefinitionBase.h"
#include "AITestAttack6_MagicShot.generated.h"

class UAnimSequenceBase;
class ATresProjectileBase;

UCLASS(HideDropdown)
class UAITestAttack6_MagicShot : public UTresAttackDefinitionBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    UAnimSequenceBase* m_AttackAnimData;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    TSubclassOf<ATresProjectileBase> m_AttackProjectile;
    
    UAITestAttack6_MagicShot();
};

