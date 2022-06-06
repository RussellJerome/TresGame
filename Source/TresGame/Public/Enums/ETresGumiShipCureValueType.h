#pragma once
#include "CoreMinimal.h"
#include "ETresGumiShipCureValueType.generated.h"

UENUM(BlueprintType)
enum class ETresGumiShipCureValueType : uint8 {
    CVT_VALUE,
    CVT_PERCENT,
    CVT_MAX UMETA(Hidden),
};

