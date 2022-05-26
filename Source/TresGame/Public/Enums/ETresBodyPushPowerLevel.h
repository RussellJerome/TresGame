#pragma once
#include "CoreMinimal.h"
#include "ETresBodyPushPowerLevel.generated.h"

UENUM(BlueprintType)
enum class ETresBodyPushPowerLevel : uint8 {
    PPL_10,
    PPL_20,
    PPL_30,
    PPL_40,
    PPL_50,
    PPL_60,
    PPL_70,
    PPL_80,
    PPL_90,
    PPL_MAX UMETA(Hidden),
    _PPL_MAX UMETA(Hidden),
};

