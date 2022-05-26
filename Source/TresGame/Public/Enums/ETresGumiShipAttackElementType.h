#pragma once
#include "CoreMinimal.h"
#include "ETresGumiShipAttackElementType.generated.h"

UENUM(BlueprintType)
enum class ETresGumiShipAttackElementType : uint8 {
    AET_NONE,
    AET_SHOT,
    AET_LASER,
    AET_STRIKE,
    AET_MAX UMETA(Hidden),
};

