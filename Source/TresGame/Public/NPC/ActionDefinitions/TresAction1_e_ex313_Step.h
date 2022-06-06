#pragma once
#include "CoreMinimal.h"
#include "TresActionDefinitionBase.h"
#include "ETresEnemy_e_ex313_StepType.h"
#include "TresAction1_e_ex313_Step.generated.h"

UCLASS(HideDropdown)
class UTresAction1_e_ex313_Step : public UTresActionDefinitionBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditDefaultsOnly)
    TEnumAsByte<ETresEnemy_e_ex313_StepType> m_pro_StepType;
    
    UPROPERTY(EditDefaultsOnly)
    float m_pro_RootMotionScale;
    
    UPROPERTY(EditDefaultsOnly)
    bool m_pro_TgtTurn;
    
public:
    UTresAction1_e_ex313_Step();
};

