#pragma once
#include "CoreMinimal.h"
#include "ETresHopMotionType.generated.h"

UENUM(BlueprintType)
enum ETresHopMotionType {
    THIM_NONE,
    THIM_HOPPING,
    THIM_SURFING,
    THIM_NORMAL,
    THIM_BALANCE_BREAK,
    THIM_ROLLING,
    THIM_TRIPPING,
    THIM_DANGLE,
    THIM_HASSOU_JUMP,
    THIM_HASSOU_JUMP_HIGH,
    THIM_HASSOU_JUMP_FLIGHT,
    THIM_MAX UMETA(Hidden),
};

