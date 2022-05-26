#pragma once
#include "CoreMinimal.h"
#include "TresAttackDefinitionBase.h"
#include "TresAttackDefinitionMelee.generated.h"

class UAnimSequenceBase;

UCLASS(HideDropdown)
class UTresAttackDefinitionMelee : public UTresAttackDefinitionBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    UAnimSequenceBase* m_AttackAnimData;
    
public:
    UTresAttackDefinitionMelee();
};

