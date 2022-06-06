#pragma once
#include "CoreMinimal.h"
#include "ESQEXSEAD_BGMLoadState.generated.h"

UENUM(BlueprintType)
enum class ESQEXSEAD_BGMLoadState : uint8 {
    Invalid,
    NotLoaded,
    Loading,
    Valid,
    ESQEXSEAD_MAX UMETA(Hidden),
};

