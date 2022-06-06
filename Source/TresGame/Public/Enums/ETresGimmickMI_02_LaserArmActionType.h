#pragma once
#include "CoreMinimal.h"
#include "ETresGimmickMI_02_LaserArmActionType.generated.h"

UENUM(BlueprintType)
enum class ETresGimmickMI_02_LaserArmActionType : uint8 {
    BarricadeY,
    BarricadeX,
    Work,
    Spline,
    Player,
    ETresGimmickMI_02_MAX UMETA(Hidden),
};

