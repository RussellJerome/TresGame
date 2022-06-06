#pragma once
#include "CoreMinimal.h"
#include "ETresGimmickLookAtTrackingType.generated.h"

UENUM(BlueprintType)
enum ETresGimmickLookAtTrackingType {
    GLTTYPE_NONE,
    GLTTYPE_PLAYER,
    GLTTYPE_MAX UMETA(Hidden),
};

