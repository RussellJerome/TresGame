#pragma once
#include "CoreMinimal.h"
#include "ETresBodyCollOverlapCameraFunction.generated.h"

UENUM(BlueprintType)
enum ETresBodyCollOverlapCameraFunction {
    TRES_BODY_OVERLAPCAMERA_FADE,
    TRES_BODY_OVERLAPCAMERA_RESET,
    TRES_BODY_OVERLAPCAMERA_MAX UMETA(Hidden),
};

