#pragma once
#include "CoreMinimal.h"
#include "ETresPlayerHoukouModes.generated.h"

UENUM(BlueprintType)
enum ETresPlayerHoukouModes {
    TPH_FRONT,
    TPH_BACK,
    TPH_RIGHT,
    TPH_LEFT,
    TPH_MAX UMETA(Hidden),
};

