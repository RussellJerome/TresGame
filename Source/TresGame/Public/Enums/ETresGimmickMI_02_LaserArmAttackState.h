#pragma once
#include "CoreMinimal.h"
#include "ETresGimmickMI_02_LaserArmAttackState.generated.h"

UENUM(BlueprintType)
enum class ETresGimmickMI_02_LaserArmAttackState : uint8 {
    Idle,
    Charging,
    Fire,
    ETresGimmickMI_02_MAX UMETA(Hidden),
};

