#pragma once
#include "CoreMinimal.h"
#include "EEX354_NormalShotDistanceType.generated.h"

UENUM(BlueprintType)
enum class EEX354_NormalShotDistanceType : uint8 {
    Distance2D,
    Distance3D,
    EEX354_MAX UMETA(Hidden),
};

