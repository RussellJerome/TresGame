#pragma once
#include "CoreMinimal.h"
#include "ESQEX_KD_ExtrapolateType.generated.h"

UENUM(BlueprintType)
enum ESQEX_KD_ExtrapolateType {
    ESQEX_KD_ExtrapolateType_Constant,
    ESQEX_KD_ExtrapolateType_Gradient,
    ESQEX_KD_ExtrapolateType_Cycle,
    ESQEX_KD_ExtrapolateType_RelativeCycle,
};

