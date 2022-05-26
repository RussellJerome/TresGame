#pragma once
#include "CoreMinimal.h"
#include "TresLevelEntitySequenceAction.h"
#include "TresLevelEntitySequenceAction_LevelEvent.generated.h"

UCLASS(EditInlineNew)
class TRESGAME_API UTresLevelEntitySequenceAction_LevelEvent : public UTresLevelEntitySequenceAction {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FName m_EventName;
    
    UPROPERTY(EditAnywhere)
    FName m_EntityTag;
    
    UPROPERTY(EditAnywhere)
    int32 m_Param;
    
    UTresLevelEntitySequenceAction_LevelEvent();
};

