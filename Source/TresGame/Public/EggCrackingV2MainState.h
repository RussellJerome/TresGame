#pragma once
#include "CoreMinimal.h"
#include "EggCrackingV2MainState.generated.h"

UENUM(BlueprintType)
enum class EggCrackingV2MainState : uint8 {
    None,
    CrackPrepare,
    CrackSloping,
    PullPrepare,
    PullSloping,
    Finished,
};

