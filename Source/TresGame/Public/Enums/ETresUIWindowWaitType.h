#pragma once
#include "CoreMinimal.h"
#include "ETresUIWindowWaitType.generated.h"

UENUM(BlueprintType)
enum ETresUIWindowWaitType {
    WINDOW_WAIT_TYPE_WAIT,
    WINDOW_WAIT_TYPE_NO_WAIT,
    WINDOW_WAIT_TYPE_MAX UMETA(Hidden),
};

