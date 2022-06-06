#pragma once
#include "CoreMinimal.h"
#include "ETresGumiShipBadStateType.generated.h"

UENUM(BlueprintType)
enum class ETresGumiShipBadStateType : uint8 {
    BS_NONE,
    BS_STUN,
    BS_MAX UMETA(Hidden),
};

