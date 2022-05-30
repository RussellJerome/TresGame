#pragma once
#include "CoreMinimal.h"
#include "LEAVE_FROM_TARGET_MODE_Enum.generated.h"

UENUM(BlueprintType)
enum class LEAVE_FROM_TARGET_MODE_Enum : uint8 {
    Away,
    Forward,
    Random,
    LEAVE_FROM_TARGET_MODE_MAX UMETA(Hidden),
};

