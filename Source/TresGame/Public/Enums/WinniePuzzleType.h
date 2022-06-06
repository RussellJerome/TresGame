#pragma once
#include "CoreMinimal.h"
#include "WinniePuzzleType.generated.h"

UENUM(BlueprintType)
enum class WinniePuzzleType : uint8 {
    Vegetable,
    Fruit,
    Flower,
    Num,
    None = 0xFF,
};

