#pragma once
#include "CoreMinimal.h"
#include "ETresIkCollision.generated.h"

UENUM(BlueprintType)
namespace ETresIkCollision {
    enum Type {
        SPHERE,
        CAPSULE,
        BOX,
        MAX,
    };
}

