#pragma once
#include "CoreMinimal.h"
#include "ETresEnemy_e_ex354_ArmWarpType.generated.h"

UENUM(BlueprintType)
enum class ETresEnemy_e_ex354_ArmWarpType : uint8 {
    Random,
    Vertical,
    Horizontal,
    ETresEnemy_e_ex354_MAX UMETA(Hidden),
};

