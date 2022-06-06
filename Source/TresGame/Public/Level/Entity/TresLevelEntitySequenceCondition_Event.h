#pragma once
#include "CoreMinimal.h"
#include "TresLevelEntitySequenceCondition.h"
#include "TresLevelEntitySequenceCondition_Event.generated.h"

UCLASS(EditInlineNew)
class TRESGAME_API UTresLevelEntitySequenceCondition_Event : public UTresLevelEntitySequenceCondition {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FName m_EventName;
    
    UTresLevelEntitySequenceCondition_Event();
};

