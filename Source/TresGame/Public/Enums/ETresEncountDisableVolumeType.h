#pragma once
#include "CoreMinimal.h"
#include "ETresEncountDisableVolumeType.generated.h"

UENUM(BlueprintType)
enum class ETresEncountDisableVolumeType : uint8 {
    Type_Box,
    Type_Circle,
    Type_MAX UMETA(Hidden),
};

