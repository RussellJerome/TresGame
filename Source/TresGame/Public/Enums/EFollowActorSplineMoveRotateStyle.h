#pragma once
#include "CoreMinimal.h"
#include "EFollowActorSplineMoveRotateStyle.generated.h"

UENUM(BlueprintType)
enum class EFollowActorSplineMoveRotateStyle : uint8 {
    SNAP_ALL,
    SNAP_YAW_ONLY,
    SLERP_START_TO_END,
};

