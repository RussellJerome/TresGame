#pragma once
#include "CoreMinimal.h"
#include "TresActionDefinitionBase.h"
#include "TresAction3_e_ex721_SummitTurn.generated.h"

UCLASS(HideDropdown)
class UTresAction3_e_ex721_SummitTurn : public UTresActionDefinitionBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    float m_RightTurnLimitAngle;
    
    UPROPERTY(EditDefaultsOnly)
    float m_LeftTurnLimitAngle;
    
    UTresAction3_e_ex721_SummitTurn();
};

