#pragma once
#include "CoreMinimal.h"
#include "TresLevelEntitySequenceAction.h"
#include "TresLevelEntitySequenceAction_Event.generated.h"

UCLASS(EditInlineNew)
class TRESGAME_API UTresLevelEntitySequenceAction_Event : public UTresLevelEntitySequenceAction {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FName m_EventName;
    
    UTresLevelEntitySequenceAction_Event();
};

