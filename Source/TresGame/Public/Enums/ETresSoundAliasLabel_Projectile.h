#pragma once
#include "CoreMinimal.h"
#include "ETresSoundAliasLabel_Projectile.generated.h"

UENUM(BlueprintType)
namespace ETresSoundAliasLabel_Projectile {
    enum Type {
        NOTHING,
        HIT1,
        HIT2,
        _MAX UMETA(Hidden),
        ETresSoundAliasLabel_MAX UMETA(Hidden),
    };
}

