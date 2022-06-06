#pragma once
#include "CoreMinimal.h"
#include "ETresProjectileInnerWaterVolumeProc.generated.h"

UENUM(BlueprintType)
enum class ETresProjectileInnerWaterVolumeProc : uint8 {
    NOTHING,
    SHUTDOWN,
    MAPHITEXPLODE,
    SHUTDOWN_DOWN,
    MAPHITEXPLODE_DOWN,
};

