#pragma once
#include "CoreMinimal.h"
#include "TresLevelEntitySequenceCondition.h"
#include "TresLevelEntitySequenceCondition_Num.generated.h"

UCLASS(EditInlineNew)
class TRESGAME_API UTresLevelEntitySequenceCondition_Num : public UTresLevelEntitySequenceCondition {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    int32 m_Num;
    
    UTresLevelEntitySequenceCondition_Num();
};

