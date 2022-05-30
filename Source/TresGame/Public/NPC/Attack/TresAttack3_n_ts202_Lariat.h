#pragma once
#include "CoreMinimal.h"
#include "TresNpcAttackDefinitionDash.h"
#include "TresAttack3_n_ts202_Lariat.generated.h"

UCLASS(HideDropdown)
class UTresAttack3_n_ts202_Lariat : public UTresNpcAttackDefinitionDash {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float m_TurnYawMinMax;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float m_TurnAngle;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float m_Interval;
    
    UTresAttack3_n_ts202_Lariat();
};

