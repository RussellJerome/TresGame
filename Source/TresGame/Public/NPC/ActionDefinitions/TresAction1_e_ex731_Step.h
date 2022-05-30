#pragma once
#include "CoreMinimal.h"
#include "ETresEnemy_e_ex731_StepType.h"
#include "TresActionDefinitionBase.h"
#include "TresAction1_e_ex731_Step.generated.h"

UCLASS(HideDropdown)
class UTresAction1_e_ex731_Step : public UTresActionDefinitionBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    TEnumAsByte<ETresEnemy_e_ex731_StepType> m_StepType;
    
    UPROPERTY(EditDefaultsOnly)
    float m_fRootMotionScale;
    
    UTresAction1_e_ex731_Step();
};

