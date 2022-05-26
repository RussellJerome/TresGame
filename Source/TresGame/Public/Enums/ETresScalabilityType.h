#pragma once
#include "CoreMinimal.h"
#include "ETresScalabilityType.generated.h"

UENUM(BlueprintType)
enum ETresScalabilityType {
    SCALABILITY_TYPE_ENGINE,
    SCALABILITY_TYPE_GAME,
    SCALABILITY_TYPE_CUT_SCENE,
    SCALABILITY_TYPE_MAX UMETA(Hidden),
};

