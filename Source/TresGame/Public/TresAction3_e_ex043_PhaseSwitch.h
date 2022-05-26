#pragma once
#include "CoreMinimal.h"
#include "TresActionDefinitionBase.h"
#include "ETresEnemy_e_ex043_PhaseNum.h"
#include "ActionCancelParam_e_ex043.h"
#include "TresAction3_e_ex043_PhaseSwitch.generated.h"

UCLASS(HideDropdown)
class UTresAction3_e_ex043_PhaseSwitch : public UTresActionDefinitionBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    TEnumAsByte<ETresEnemy_e_ex043_PhaseNum> m_PhaseNum;
    
    UPROPERTY(EditDefaultsOnly)
    FActionCancelParam_e_ex043 m_CancelParam1_SwitchEnd;
    
    UTresAction3_e_ex043_PhaseSwitch();
};

