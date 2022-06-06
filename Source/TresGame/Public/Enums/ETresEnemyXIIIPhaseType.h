#pragma once
#include "CoreMinimal.h"
#include "ETresEnemyXIIIPhaseType.generated.h"

UENUM(BlueprintType)
enum class ETresEnemyXIIIPhaseType : uint8 {
    PHASE1,
    PHASE2,
    PHASE3,
    PHASE4,
    PHASE_EX1,
    _MAX UMETA(Hidden),
};

