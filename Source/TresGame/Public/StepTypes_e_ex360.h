#pragma once
#include "CoreMinimal.h"
#include "StepTypes_e_ex360.generated.h"

UENUM(BlueprintType)
enum StepTypes_e_ex360 {
    TRES_ENEMY_EX360_BACK_STEP,
    TRES_ENEMY_EX360_RIGHT_STEP,
    TRES_ENEMY_EX360_LEFT_STEP,
    TRES_ENEMY_EX360_MAX UMETA(Hidden),
};

