#pragma once
#include "CoreMinimal.h"
#include "ETresMBCurveInterp.generated.h"

UENUM(BlueprintType)
enum ETresMBCurveInterp {
    ETresMBCI_Constant,
    ETresMBCI_Linear,
    ETresMBCI_Cubic,
    ETresMBCI_Max,
};

