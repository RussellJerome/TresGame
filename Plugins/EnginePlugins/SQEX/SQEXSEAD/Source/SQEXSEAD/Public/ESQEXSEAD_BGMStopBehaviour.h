#pragma once
#include "CoreMinimal.h"
#include "ESQEXSEAD_BGMStopBehaviour.generated.h"

UENUM(BlueprintType)
enum class ESQEXSEAD_BGMStopBehaviour : uint8 {
    Stop,
    Reset,
    ESQEXSEAD_MAX UMETA(Hidden),
};

