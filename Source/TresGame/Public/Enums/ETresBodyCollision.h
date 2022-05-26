#pragma once
#include "CoreMinimal.h"
#include "ETresBodyCollision.generated.h"

UENUM(BlueprintType)
namespace ETresBodyCollision {
    enum Type {
        SPHERE,
        CAPSULE,
        BOX,
        CONVEX,
        MAX,
    };
}

