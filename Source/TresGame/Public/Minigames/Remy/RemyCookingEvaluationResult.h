#pragma once
#include "CoreMinimal.h"
#include "RemyCookingEvaluationResult.generated.h"

UENUM(BlueprintType)
enum class RemyCookingEvaluationResult : uint8 {
    RemyCookingResultNothing,
    RemyCookingResultTooLittle,
    RemyCookingResultSuccess,
    RemyCookingResultGreatSuccess,
    RemyCookingResultTooMany,
    RemyCookingResultTimeOut,
    RemyCookingResultTooFast,
    RemyCookingResultTooSlow,
};

