#pragma once
#include "CoreMinimal.h"
#include "TresNpcAttackDefinitionBase.h"
#include "TresAction1_n_ex011_DodgeRoll.generated.h"

UCLASS(HideDropdown)
class UTresAction1_n_ex011_DodgeRoll : public UTresNpcAttackDefinitionBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float m_HomingStopDistance;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float m_HomingAngleYaw;
    
public:
    UTresAction1_n_ex011_DodgeRoll();
};

