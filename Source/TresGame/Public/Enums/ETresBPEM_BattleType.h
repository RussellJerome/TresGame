#pragma once
#include "CoreMinimal.h"
#include "ETresBPEM_BattleType.generated.h"

UENUM(BlueprintType)
enum class ETresBPEM_BattleType : uint8 {
    UNKNOWN,
    XIII_A,
    XIII_B,
    XIII_E,
    ETresBPEM_MAX UMETA(Hidden),
};

