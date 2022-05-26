#pragma once
#include "CoreMinimal.h"
#include "ETresEnemy_e_ex305_ShotDirType.generated.h"

UENUM(BlueprintType)
enum class ETresEnemy_e_ex305_ShotDirType : uint8 {
    Front,
    Back,
    Left,
    Right,
    Down,
    ETresEnemy_e_ex305_MAX UMETA(Hidden),
};

