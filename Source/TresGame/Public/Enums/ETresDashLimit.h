#pragma once
#include "CoreMinimal.h"
#include "ETresDashLimit.generated.h"

UENUM(BlueprintType)
namespace ETresDashLimit {
    enum Type {
        Distance,
        Time,
        TargetDistance,
    };
}

