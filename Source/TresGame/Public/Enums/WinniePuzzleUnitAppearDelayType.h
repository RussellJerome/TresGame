#pragma once
#include "CoreMinimal.h"
#include "WinniePuzzleUnitAppearDelayType.generated.h"

UENUM(BlueprintType)
enum class WinniePuzzleUnitAppearDelayType : uint8 {
    None,
    ColumnDependency,
    Random,
};

