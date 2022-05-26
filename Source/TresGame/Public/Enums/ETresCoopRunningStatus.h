#pragma once
#include "CoreMinimal.h"
#include "ETresCoopRunningStatus.generated.h"

UENUM(BlueprintType)
enum class ETresCoopRunningStatus : uint8 {
    Started,
    Waiting,
    Ready,
    Running,
    Finished,
    Invaild,
};

