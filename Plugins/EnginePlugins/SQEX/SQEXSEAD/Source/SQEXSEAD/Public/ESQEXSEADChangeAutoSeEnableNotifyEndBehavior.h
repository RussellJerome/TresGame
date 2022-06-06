#pragma once
#include "CoreMinimal.h"
#include "ESQEXSEADChangeAutoSeEnableNotifyEndBehavior.generated.h"

UENUM(BlueprintType)
enum class ESQEXSEADChangeAutoSeEnableNotifyEndBehavior : uint8 {
    RevertState,
    SetInvertedState,
    NoAction,
};

