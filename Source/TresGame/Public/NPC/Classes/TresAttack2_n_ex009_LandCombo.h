#pragma once
#include "CoreMinimal.h"
#include "TresNpcAttackDefinitionBase.h"
#include "TresAttack2_n_ex009_LandCombo.generated.h"

UCLASS(HideDropdown)
class UTresAttack2_n_ex009_LandCombo : public UTresNpcAttackDefinitionBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    int32 m_ComboMax;
    
public:
    UTresAttack2_n_ex009_LandCombo();
};

