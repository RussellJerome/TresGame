#pragma once
#include "CoreMinimal.h"
#include "ETresGumiShipEnemyStateResult.generated.h"

UENUM(BlueprintType)
enum class ETresGumiShipEnemyStateResult : uint8 {
    RESULT_SUCCESS,
    RESULT_FAILED,
    RESULT_ABORT,
    RESULT_MAX UMETA(Hidden),
};

