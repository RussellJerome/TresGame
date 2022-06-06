#pragma once
#include "CoreMinimal.h"
#include "ETresCollision.generated.h"

UENUM(BlueprintType)
namespace ETresCollision {
    enum Type {
        SPHERE,
        CAPSULE1,
        CAPSULE2,
        CAPSULE_RING,
        BOX,
        BOX_RING,
        CONVEX,
        LASER1,
        DCONVEX,
        MAX,
    };
}

