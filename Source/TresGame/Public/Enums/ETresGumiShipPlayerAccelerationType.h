#pragma once
#include "CoreMinimal.h"
#include "ETresGumiShipPlayerAccelerationType.generated.h"

UENUM(BlueprintType)
enum class ETresGumiShipPlayerAccelerationType : uint8 {
    AT_NONE_TYPE,
    AT_GEAR_CHANGE_TYPE,
    AT_ACCELERATOR_TYPE,
    AT_TYPE_MAX UMETA(Hidden),
    AT_MAX UMETA(Hidden),
};

