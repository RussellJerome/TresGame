#pragma once
#include "CoreMinimal.h"
#include "TresLevelEntitySequenceCondition.h"
#include "TresLevelEntitySequenceCondition_Boolean.generated.h"

UCLASS(EditInlineNew)
class TRESGAME_API UTresLevelEntitySequenceCondition_Boolean : public UTresLevelEntitySequenceCondition {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FName m_Flag;
    
    UPROPERTY(EditAnywhere)
    bool m_Not;
    
    UTresLevelEntitySequenceCondition_Boolean();
};

