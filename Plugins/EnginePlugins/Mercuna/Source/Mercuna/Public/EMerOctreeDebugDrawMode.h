#pragma once
#include "CoreMinimal.h"
#include "EMerOctreeDebugDrawMode.generated.h"

UENUM(BlueprintType)
enum class EMerOctreeDebugDrawMode : uint8 {
    DISABLED,
    UNNAVIGABLE,
    NAVIGABLE,
    BOTH,
    REGION,
    REACHABLE,
    PATHFIND,
};

