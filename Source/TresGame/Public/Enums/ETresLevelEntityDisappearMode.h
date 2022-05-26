#pragma once
#include "CoreMinimal.h"
#include "ETresLevelEntityDisappearMode.generated.h"

UENUM(BlueprintType)
enum ETresLevelEntityDisappearMode {
    ETresLevelEntityDisappearMode_Immediate,
    ETresLevelEntityDisappearMode_Perform1,
    ETresLevelEntityDisappearMode_Perform2,
    ETresLevelEntityDisappearMode_Perform3,
    ETresLevelEntityDisappearMode_RunAway,
    ETresLevelEntityDisappearMode_Force,
};

