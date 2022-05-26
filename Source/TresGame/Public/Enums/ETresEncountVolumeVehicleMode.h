#pragma once
#include "CoreMinimal.h"
#include "ETresEncountVolumeVehicleMode.generated.h"

UENUM(BlueprintType)
enum class ETresEncountVolumeVehicleMode : uint8 {
    DoNotCare,
    NoVehicle,
    OnlyVehicle,
};

