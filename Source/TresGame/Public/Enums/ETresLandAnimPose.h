#pragma once
#include "CoreMinimal.h"
#include "ETresLandAnimPose.generated.h"

UENUM(BlueprintType)
enum ETresLandAnimPose {
    TRES_LANDANIMPOSE_NONE,
    TRES_LANDANIMPOSE_LAND,
    TRES_LANDANIMPOSE_LIGHT,
    TRES_LANDANIMPOSE_LIGHT_R,
    TRES_LANDANIMPOSE_LIGHT_L,
    TRES_LANDANIMPOSE_MAX UMETA(Hidden),
};

