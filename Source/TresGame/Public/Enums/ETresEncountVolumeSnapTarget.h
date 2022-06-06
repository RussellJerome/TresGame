#pragma once
#include "CoreMinimal.h"
#include "ETresEncountVolumeSnapTarget.generated.h"

UENUM(BlueprintType)
enum class ETresEncountVolumeSnapTarget : uint8 {
    Snap_Nothing,
    Snap_Ground,
    Snap_Ocean,
    Snap_MAX UMETA(Hidden),
};

