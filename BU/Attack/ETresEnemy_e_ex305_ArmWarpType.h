#pragma once
#include "CoreMinimal.h"
#include "ETresEnemy_e_ex305_ArmWarpType.generated.h"

UENUM(BlueprintType)
enum class ETresEnemy_e_ex305_ArmWarpType : uint8 {
    Random,
    Vertical,
    Horizontal,
    ETresEnemy_e_ex305_MAX UMETA(Hidden),
};

