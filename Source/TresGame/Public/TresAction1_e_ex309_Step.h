#pragma once
#include "CoreMinimal.h"
#include "TresActionDefinitionBase.h"
#include "ETresEnemyStepDirectionType_e_ex309.h"
#include "TresAction1_e_ex309_Step.generated.h"

UCLASS(HideDropdown)
class UTresAction1_e_ex309_Step : public UTresActionDefinitionBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditDefaultsOnly)
    TEnumAsByte<ETresEnemyStepDirectionType_e_ex309> m_DirectionType;
    
    UPROPERTY(EditDefaultsOnly)
    uint8 m_bEnableStartTargetLocation: 1;
    
public:
    UTresAction1_e_ex309_Step();
};

