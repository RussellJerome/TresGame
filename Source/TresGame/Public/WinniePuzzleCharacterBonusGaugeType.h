#pragma once
#include "CoreMinimal.h"
#include "WinniePuzzleCharacterBonusGaugeType.generated.h"

UENUM(BlueprintType)
enum class WinniePuzzleCharacterBonusGaugeType : uint8 {
    Single,
    Dual,
    None,
};

