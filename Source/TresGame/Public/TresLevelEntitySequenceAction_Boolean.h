#pragma once
#include "CoreMinimal.h"
#include "TresLevelEntitySequenceAction.h"
#include "TresLevelEntitySequenceAction_Boolean.generated.h"

UCLASS(EditInlineNew)
class TRESGAME_API UTresLevelEntitySequenceAction_Boolean : public UTresLevelEntitySequenceAction {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FName m_Flag;
    
    UPROPERTY(EditAnywhere)
    bool m_Value;
    
    UTresLevelEntitySequenceAction_Boolean();
};

