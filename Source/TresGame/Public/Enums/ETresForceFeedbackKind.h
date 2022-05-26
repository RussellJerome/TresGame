#pragma once
#include "CoreMinimal.h"
#include "ETresForceFeedbackKind.generated.h"

UENUM(BlueprintType)
enum class ETresForceFeedbackKind : uint8 {
    TFFK_SMALL,
    TFFK_MIDDLE,
    LARGE,
    TFFK_MAX UMETA(Hidden),
};

