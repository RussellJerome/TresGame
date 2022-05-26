#pragma once
#include "CoreMinimal.h"
#include "FDirectInputDeviceForceFeedbackChannel.generated.h"

UENUM(BlueprintType)
enum class FDirectInputDeviceForceFeedbackChannel : uint8 {
    LEFT_LARGE,
    LEFT_SMALL,
    LEFT_ANY,
    RIGHT_LARGE,
    RIGHT_SMALL,
    RIGHT_ANY,
    ANY,
    OFF,
};

