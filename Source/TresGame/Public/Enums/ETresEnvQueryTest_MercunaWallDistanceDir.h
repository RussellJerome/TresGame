#pragma once
#include "CoreMinimal.h"
#include "ETresEnvQueryTest_MercunaWallDistanceDir.generated.h"

UENUM(BlueprintType)
namespace ETresEnvQueryTest_MercunaWallDistanceDir {
    enum Type {
        Side,
        Bottom,
        Ceiling,
        ETresEnvQueryTest_MAX UMETA(Hidden),
    };
}

