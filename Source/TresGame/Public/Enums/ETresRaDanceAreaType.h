#pragma once
#include "CoreMinimal.h"
#include "ETresRaDanceAreaType.generated.h"

UENUM(BlueprintType)
enum class ETresRaDanceAreaType : uint8 {
    RA_DANCE_NONE,
    RA_DANCE_NORMAL,
    RA_DANCE_RETURN,
    RA_DANCE_CENTER,
    RA_DANCE_CENTER_OUT,
    RA_DANCE_OUTFIELD,
    RA_DANCE_RAPUNZEL,
    RA_DANCE_FLYNN,
    RA_DANCE_MAX UMETA(Hidden),
};

