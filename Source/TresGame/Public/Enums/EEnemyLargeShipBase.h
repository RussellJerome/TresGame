#pragma once
#include "CoreMinimal.h"
#include "EEnemyLargeShipBase.generated.h"

UENUM(BlueprintType)
namespace EEnemyLargeShipBase {
    enum Type {
        TO_TARGET,
        SELF_ROT,
        TARGET_ROT,
        TO_TARGET_SIDE,
    };
}

