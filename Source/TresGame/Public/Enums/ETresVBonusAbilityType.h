#pragma once
#include "CoreMinimal.h"
#include "ETresVBonusAbilityType.generated.h"

UENUM(BlueprintType)
enum class ETresVBonusAbilityType : uint8 {
    NONE,
    EQUIP,
    HAVE,
    _MAX UMETA(Hidden),
};

