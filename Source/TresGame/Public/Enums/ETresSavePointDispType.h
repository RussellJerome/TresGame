#pragma once
#include "CoreMinimal.h"
#include "ETresSavePointDispType.generated.h"

UENUM(BlueprintType)
enum class ETresSavePointDispType : uint8 {
    NORMAL,
    DISABLE,
    DESTROY,
    _MAX UMETA(Hidden),
};

