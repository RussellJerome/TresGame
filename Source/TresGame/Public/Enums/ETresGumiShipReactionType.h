#pragma once
#include "CoreMinimal.h"
#include "ETresGumiShipReactionType.generated.h"

UENUM(BlueprintType)
enum class ETresGumiShipReactionType : uint8 {
    RT_NONE,
    RT_BLOW_SMALL,
    RT_BLOW_MIDDLE,
    RT_BLOW_BIG,
    RT_MAX UMETA(Hidden),
};

