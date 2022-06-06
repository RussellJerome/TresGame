#pragma once
#include "CoreMinimal.h"
#include "TresLevelEntitySequenceAction.h"
#include "TresLevelEntitySequenceAction_ClearEvent.generated.h"

UCLASS(EditInlineNew)
class TRESGAME_API UTresLevelEntitySequenceAction_ClearEvent : public UTresLevelEntitySequenceAction {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FName m_EventName;
    
    UTresLevelEntitySequenceAction_ClearEvent();
};

