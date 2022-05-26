#pragma once
#include "CoreMinimal.h"
#include "WinniePuzzleWallVolumeType.generated.h"

UENUM(BlueprintType)
enum class WinniePuzzleWallVolumeType : uint8 {
    Bound,
    Snap,
    None,
};

