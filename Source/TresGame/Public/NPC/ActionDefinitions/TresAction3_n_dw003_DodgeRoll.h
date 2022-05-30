#pragma once
#include "CoreMinimal.h"
#include "TresNpcAttackDefinitionBase.h"
#include "TresAction3_n_dw003_DodgeRoll.generated.h"

UCLASS(HideDropdown)
class UTresAction3_n_dw003_DodgeRoll : public UTresNpcAttackDefinitionBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float m_MoveSpeed;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float m_HomingStopDistance;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float m_HomingAngleYaw;
    
public:
    UTresAction3_n_dw003_DodgeRoll();
};

