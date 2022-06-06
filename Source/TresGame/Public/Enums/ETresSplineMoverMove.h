#pragma once
#include "CoreMinimal.h"
#include "ETresSplineMoverMove.generated.h"

UENUM(BlueprintType)
namespace ETresSplineMoverMove {
    enum Type {
        Location,
        LocationAndRotation,
        MI_02_BeltConveyor,
        TS_02_UFO,
        TT_Train,
    };
}

