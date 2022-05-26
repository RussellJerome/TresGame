#pragma once
#include "CoreMinimal.h"
#include "ETresGumiShipObjectSize.generated.h"

UENUM(BlueprintType)
enum class ETresGumiShipObjectSize : uint8 {
    SMALL_SIZE,
    MIDDLE_SIZE,
    BIG_SIZE,
    SIZE_TYPE_MAX UMETA(Hidden),
};

