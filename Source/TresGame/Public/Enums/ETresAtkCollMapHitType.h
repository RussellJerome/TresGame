#pragma once
#include "CoreMinimal.h"
#include "ETresAtkCollMapHitType.generated.h"

UENUM(BlueprintType)
enum class ETresAtkCollMapHitType : uint8 {
    NOHIT,
    PHYSOBJ_NOHIT,
    HITMAP,
    IGNORE_GROUND,
    _MAX UMETA(Hidden),
};

