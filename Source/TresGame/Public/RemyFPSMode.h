#pragma once
#include "CoreMinimal.h"
#include "RemyFPSMode.generated.h"

UENUM(BlueprintType)
enum class RemyFPSMode : uint8 {
    FPS_Config,
    FPS_30,
    FPS_60,
    FPS_MAX UMETA(Hidden),
};

