#pragma once
#include "CoreMinimal.h"
#include "ETresLevelEntitySequenceConditionDistanceSelector.h"
#include "TresLevelEntitySequenceCondition.h"
#include "ETresLevelEntitySequenceConditionDistanceCompare.h"
#include "TresLevelEntitySequenceCondition_Distance.generated.h"

UCLASS(EditInlineNew)
class TRESGAME_API UTresLevelEntitySequenceCondition_Distance : public UTresLevelEntitySequenceCondition {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    float m_Distance;
    
    UPROPERTY(EditAnywhere)
    TEnumAsByte<ETresLevelEntitySequenceConditionDistanceCompare> m_Compare;
    
    UPROPERTY(EditAnywhere)
    TEnumAsByte<ETresLevelEntitySequenceConditionDistanceSelector> m_Selector;
    
    UTresLevelEntitySequenceCondition_Distance();
};

