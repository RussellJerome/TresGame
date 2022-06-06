#pragma once
#include "CoreMinimal.h"
#include "ETresUIControllerButtonType.generated.h"

UENUM(BlueprintType)
enum class ETresUIControllerButtonType : uint8 {
    Circle,
    Triangle,
    Square,
    Cross,
    Max,
};

