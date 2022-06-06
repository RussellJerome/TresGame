#pragma once
#include "CoreMinimal.h"
#include "ETresGimmickMI_02_LaserArmState.generated.h"

UENUM(BlueprintType)
enum class ETresGimmickMI_02_LaserArmState : uint8 {
    Idle,
    StartUp,
    Attack,
    Destroy,
    ETresGimmickMI_02_MAX UMETA(Hidden),
};

