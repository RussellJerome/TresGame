#pragma once
#include "CoreMinimal.h"
#include "ETresItemDefCampItem.generated.h"

UENUM(BlueprintType)
enum class ETresItemDefCampItem : uint8 {
    NOTHING,
    TENT,
    POWERUP,
    MAGICUP,
    GUARDUP,
    APUP,
    _MAX = 0x8,
};

