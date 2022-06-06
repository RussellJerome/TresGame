#pragma once
#include "CoreMinimal.h"
#include "ETresLevelEntityAppearMode.generated.h"

UENUM(BlueprintType)
enum ETresLevelEntityAppearMode {
    ETresLevelEntityAppearMode_Immediate,
    ETresLevelEntityAppearMode_Perform1,
    ETresLevelEntityAppearMode_Perform2,
    ETresLevelEntityAppearMode_Perform3,
    ETresLevelEntityAppearMode_Perform4,
    ETresLevelEntityAppearMode_Special1,
    ETresLevelEntityAppearMode_Special2,
    ETresLevelEntityAppearMode_Special3,
    ETresLevelEntityAppearMode_IdleWait,
};

