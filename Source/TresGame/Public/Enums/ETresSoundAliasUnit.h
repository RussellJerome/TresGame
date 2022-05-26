#pragma once
#include "CoreMinimal.h"
#include "ETresSoundAliasUnit.generated.h"

UENUM(BlueprintType)
namespace ETresSoundAliasUnit {
    enum Type {
        NOTHING,
        RH_WEAPON,
        LH_WEAPON,
        RL_WEAPON,
        LL_WEAPON,
        _MAX UMETA(Hidden),
    };
}

