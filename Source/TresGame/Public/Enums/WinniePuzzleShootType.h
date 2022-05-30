#pragma once
#include "CoreMinimal.h"
#include "WinniePuzzleShootType.generated.h"

UENUM(BlueprintType)
enum class WinniePuzzleShootType : uint8 {
    Pressed,
    Released,
};

