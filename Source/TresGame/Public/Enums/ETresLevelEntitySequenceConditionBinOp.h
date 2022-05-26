#pragma once
#include "CoreMinimal.h"
#include "ETresLevelEntitySequenceConditionBinOp.generated.h"

UENUM(BlueprintType)
enum ETresLevelEntitySequenceConditionBinOp {
    ETresLevelEntitySequenceConditionBinOp_Less,
    ETresLevelEntitySequenceConditionBinOp_Greater,
    ETresLevelEntitySequenceConditionBinOp_LessEqual,
    ETresLevelEntitySequenceConditionBinOp_GraeterEqual,
    ETresLevelEntitySequenceConditionBinOp_EqualEqual,
    ETresLevelEntitySequenceConditionBinOp_NotEqual,
};

