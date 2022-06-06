#pragma once
#include "CoreMinimal.h"
#include "ETresEnemy_e_ex354_ShotDirType.generated.h"

UENUM(BlueprintType)
enum class ETresEnemy_e_ex354_ShotDirType : uint8 {
    Front,
    Back,
    Left,
    Right,
    Down,
    ETresEnemy_e_ex354_MAX UMETA(Hidden),
};

