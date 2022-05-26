#pragma once
#include "CoreMinimal.h"
#include "ETresProjectileHomingType.generated.h"

UENUM(BlueprintType)
enum class ETresProjectileHomingType : uint8 {
    NORMAL,
    IGNORE_Z,
    PITCH_YAW,
    _MAX UMETA(Hidden),
};

