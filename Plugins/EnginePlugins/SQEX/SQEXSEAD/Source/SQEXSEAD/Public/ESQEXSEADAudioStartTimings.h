#pragma once
#include "CoreMinimal.h"
#include "ESQEXSEADAudioStartTimings.generated.h"

UENUM(BlueprintType)
namespace ESQEXSEADAudioStartTimings {
    enum Type {
        None,
        OnBeginPlay,
        OnZeroOneValueVariable,
    };
}

