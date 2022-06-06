#pragma once
#include "CoreMinimal.h"
#include "TresLevelEntitySequenceCondition.h"
#include "TresLevelEntitySequenceCondition_RealNum.generated.h"

UCLASS(EditInlineNew)
class TRESGAME_API UTresLevelEntitySequenceCondition_RealNum : public UTresLevelEntitySequenceCondition {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    int32 m_Num;
    
    UTresLevelEntitySequenceCondition_RealNum();
};

