#pragma once
#include "CoreMinimal.h"
#include "CuttingMainState.generated.h"

UENUM(BlueprintType)
enum class CuttingMainState : uint8 {
    None,
    Prepare,
    Sloping,
    SubSloping,
    Calculate,
    PrepareReload,
    CommandReload,
    StickOnlyReload,
    WaitReload,
    ResultWait,
};

