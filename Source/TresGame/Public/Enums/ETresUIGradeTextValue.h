#pragma once
#include "CoreMinimal.h"
#include "ETresUIGradeTextValue.generated.h"

UENUM(BlueprintType)
enum class ETresUIGradeTextValue : uint8 {
    TOOFAST,
    GOOD,
    EXCELLENT,
    TOOSLOW,
    SUCCESSFUL,
    Max,
    None = 0xFF,
};

