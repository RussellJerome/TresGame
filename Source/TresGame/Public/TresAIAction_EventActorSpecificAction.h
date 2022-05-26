#pragma once
#include "CoreMinimal.h"
#include "TresActionDefinitionBase.h"
#include "ETresActorSpecificActionID.h"
#include "TresAIAction_EventActorSpecificAction.generated.h"

UCLASS(HideDropdown)
class UTresAIAction_EventActorSpecificAction : public UTresActionDefinitionBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    TEnumAsByte<ETresActorSpecificActionID> m_SpecificActionID;
    
    UPROPERTY(EditDefaultsOnly)
    int32 m_SubID;
    
    UTresAIAction_EventActorSpecificAction();
};

