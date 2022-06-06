#pragma once
#include "CoreMinimal.h"
#include "ETresClimbingAnimPose.generated.h"

UENUM(BlueprintType)
enum ETresClimbingAnimPose {
    TRES_CLIMBINGANIMPOSE_NONE,
    TRES_CLIMBINGANIMPOSE_LOW,
    TRES_CLIMBINGANIMPOSE_MIDDLE,
    TRES_CLIMBINGANIMPOSE_HIGH,
    TRES_CLIMBINGANIMPOSE_MAX UMETA(Hidden),
};

