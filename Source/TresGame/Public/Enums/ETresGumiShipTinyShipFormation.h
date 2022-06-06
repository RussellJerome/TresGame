#pragma once
#include "CoreMinimal.h"
#include "ETresGumiShipTinyShipFormation.generated.h"

UENUM(BlueprintType)
enum class ETresGumiShipTinyShipFormation : uint8 {
    FORWARD_SIDE,
    FORWARD_FRONT,
    FORWARD_UPDOWN,
    FORWARD_BACK,
    SIDEWAY_WIDE,
    SIDEWAY_OUT,
    BACKWARD_SIDE,
    BACKWARD_BACK,
    BACKWARD_UPDOWN,
    BACKWARD_WIDE,
    ROLL_Z,
    ROLL_Y,
    ROLL_X,
    ROLL_Z_OUT,
    SWING_Y,
    SWING_Z,
    SWING_X,
    SWING_Y_BACK,
    SP_OPTION,
    SP_RANDOM,
    SP_HOMING,
    UNKNOWN,
};

