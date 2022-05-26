#pragma once
#include "CoreMinimal.h"
#include "ETresCameraStick.generated.h"

UENUM(BlueprintType)
enum ETresCameraStick {
    TRES_CAMERA_STICK_RIGHT,
    TRES_CAMERA_STICK_LEFT,
    TRES_CAMERA_STICK_RIGHTLEFT,
    TRES_CAMERA_STICK_MAX UMETA(Hidden),
};

