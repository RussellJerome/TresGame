#pragma once
#include "CoreMinimal.h"
#include "ESQEXSEADAutoSePartsType.generated.h"

UENUM(BlueprintType)
namespace ESQEXSEADAutoSePartsType {
    enum Type {
        Invalid,
        Foot_Default,
        Arm_Default,
        Wing_Default,
        Swing_Default,
        Body_Default,
    };
}

