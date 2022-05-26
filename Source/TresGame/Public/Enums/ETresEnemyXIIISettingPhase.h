#pragma once
#include "CoreMinimal.h"
#include "ETresEnemyXIIISettingPhase.generated.h"

UENUM(BlueprintType)
namespace ETresEnemyXIIISettingPhase {
    enum Type {
        PHASE1,
        PHASE2,
        PHASE3,
        PHASE4,
        PHASE_EX1,
        _MAX UMETA(Hidden),
    };
}

