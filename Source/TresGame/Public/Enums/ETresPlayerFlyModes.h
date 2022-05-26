#pragma once
#include "CoreMinimal.h"
#include "ETresPlayerFlyModes.generated.h"

UENUM(BlueprintType)
enum ETresPlayerFlyModes {
    TPF_GLIDE,
    TPF_SUPER_SLIDE,
    TPF_SONIC_SLIDE,
    TPF_SUPER_FLIGHT,
    TPF_AIR_DODGE,
    TPF_MAX UMETA(Hidden),
};

