#pragma once
#include "CoreMinimal.h"
#include "TresActionDefinitionBase.h"
#include "ETresBodyCollReactionType.h"
#include "TresAction8_e_ex353_SingleAction.generated.h"

class UCurveFloat;
class UAnimSequenceBase;

UCLASS(HideDropdown)
class UTresAction8_e_ex353_SingleAction : public UTresActionDefinitionBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    ETresBodyCollReactionType m_BodyCollReactionType;
    
    UPROPERTY(EditDefaultsOnly)
    UAnimSequenceBase* m_AnimData;
    
    UPROPERTY(EditDefaultsOnly)
    UCurveFloat* m_FloatSpeedData;
    
    UPROPERTY(EditDefaultsOnly)
    uint8 m_bHorizontalTurn: 1;
    
    UPROPERTY(EditDefaultsOnly)
    uint8 m_bClearVelocity: 1;
    
    UPROPERTY(EditDefaultsOnly)
    uint8 m_bWaitAIAbortTiming: 1;
    
    UTresAction8_e_ex353_SingleAction();
};

