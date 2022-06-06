#pragma once
#include "CoreMinimal.h"
#include "ESQEXSEAD_BGMState.generated.h"

UENUM(BlueprintType)
enum class ESQEXSEAD_BGMState : uint8 {
    Invalid,
    Ready,
    AutoPlay,
    Playing,
    Finished,
    Stop,
    Suspended,
    AutoResume,
    ESQEXSEAD_MAX UMETA(Hidden),
};

