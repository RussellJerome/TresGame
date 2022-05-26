#pragma once
#include "CoreMinimal.h"
#include "ECameraLensType.generated.h"

UENUM(BlueprintType)
enum class ECameraLensType : uint8 {
    LENS_DOF_OFF,
    LENS_DOF_ON,
    MAX,
    LENS_FISHEYE,
};

