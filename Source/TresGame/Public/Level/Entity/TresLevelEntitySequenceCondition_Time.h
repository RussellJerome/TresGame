#pragma once
#include "CoreMinimal.h"
#include "TresLevelEntitySequenceCondition.h"
#include "TresLevelEntitySequenceCondition_Time.generated.h"

UCLASS(EditInlineNew)
class TRESGAME_API UTresLevelEntitySequenceCondition_Time : public UTresLevelEntitySequenceCondition {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    float m_Time;
    
    UPROPERTY(EditAnywhere)
    bool m_UseRandom;
    
    UPROPERTY(EditAnywhere)
    float m_RandMin;
    
    UPROPERTY(EditAnywhere)
    float m_RandMax;
    
    UTresLevelEntitySequenceCondition_Time();
};

