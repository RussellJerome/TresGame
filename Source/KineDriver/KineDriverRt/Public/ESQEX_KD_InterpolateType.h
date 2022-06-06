#pragma once
#include "CoreMinimal.h"
#include "ESQEX_KD_InterpolateType.generated.h"

UENUM(BlueprintType)
enum ESQEX_KD_InterpolateType {
    ESQEX_KD_InterpolateType_Step,
    ESQEX_KD_InterpolateType_Linear,
    ESQEX_KD_InterpolateType_Spline,
};

