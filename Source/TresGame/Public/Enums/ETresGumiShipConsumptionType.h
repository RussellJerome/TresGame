#pragma once
#include "CoreMinimal.h"
#include "ETresGumiShipConsumptionType.generated.h"

UENUM(BlueprintType)
enum class ETresGumiShipConsumptionType : uint8 {
    CT_CHARGE_TYPE,
    CT_COUNT_TYPE,
    CT_TIME_TYPE,
    CT_MAX UMETA(Hidden),
};

