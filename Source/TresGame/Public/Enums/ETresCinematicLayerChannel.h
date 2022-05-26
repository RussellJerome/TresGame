#pragma once
#include "CoreMinimal.h"
#include "ETresCinematicLayerChannel.generated.h"

UENUM(BlueprintType)
enum class ETresCinematicLayerChannel : uint8 {
    TCLC_EVENT1,
    TCLC_EVENT2,
    TCLC_EVENT3,
    TCLC_EVENT4,
    TCLC_LEVEL1,
    TCLC_LEVEL2,
    TCLC_LEVEL3,
    TCLC_LEVEL4,
    _TCLC_MAX UMETA(Hidden),
};

