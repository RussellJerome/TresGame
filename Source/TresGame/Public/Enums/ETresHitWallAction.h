#pragma once
#include "CoreMinimal.h"
#include "ETresHitWallAction.generated.h"

UENUM(BlueprintType)
namespace ETresHitWallAction {
    enum Type {
        None,
        AttackExit,
        Reflection,
    };
}

