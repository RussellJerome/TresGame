#pragma once
#include "CoreMinimal.h"
#include "ESQEXSEAD_BGMStoreBehaviour.generated.h"

UENUM(BlueprintType)
enum class ESQEXSEAD_BGMStoreBehaviour : uint8 {
    Stop,
    AutoPlay,
    Suspend,
    AutoResume,
    ESQEXSEAD_MAX UMETA(Hidden),
};

