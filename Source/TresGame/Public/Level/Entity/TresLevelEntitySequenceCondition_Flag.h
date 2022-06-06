#pragma once
#include "CoreMinimal.h"
#include "TresLevelEntitySequenceCondition.h"
#include "ETresLevelEntitySequenceConditionBinOp.h"
#include "TresLevelEntitySequenceCondition_Flag.generated.h"

UCLASS(EditInlineNew)
class TRESGAME_API UTresLevelEntitySequenceCondition_Flag : public UTresLevelEntitySequenceCondition {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FName m_Flag;
    
    UPROPERTY(EditAnywhere)
    FName m_Label;
    
    UPROPERTY(EditAnywhere)
    TEnumAsByte<ETresLevelEntitySequenceConditionBinOp> m_BinOp;
    
    UTresLevelEntitySequenceCondition_Flag();
};

