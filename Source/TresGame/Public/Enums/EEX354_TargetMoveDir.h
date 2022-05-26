#pragma once
#include "CoreMinimal.h"
#include "EEX354_TargetMoveDir.generated.h"

UENUM(BlueprintType)
enum EEX354_TargetMoveDir {
    EEX354_TargetMoveDir_Front,
    EEX354_TargetMoveDir_Rear,
    EEX354_TargetMoveDir_Right,
    EEX354_TargetMoveDir_Left,
};

