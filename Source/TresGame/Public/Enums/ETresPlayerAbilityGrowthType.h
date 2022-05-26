#pragma once
#include "CoreMinimal.h"
#include "ETresPlayerAbilityGrowthType.generated.h"

UENUM(BlueprintType)
enum class ETresPlayerAbilityGrowthType : uint8 {
    TYPE_A,
    TYPE_B,
    TYPE_C,
    _MAX UMETA(Hidden),
};

