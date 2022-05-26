#pragma once
#include "CoreMinimal.h"
#include "ETresAbilityEquipType.generated.h"

UENUM(BlueprintType)
enum class ETresAbilityEquipType : uint8 {
    NORMAL,
    AUTO,
    _MAX UMETA(Hidden),
};

