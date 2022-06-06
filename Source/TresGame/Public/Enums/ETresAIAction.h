#pragma once
#include "CoreMinimal.h"
#include "ETresAIAction.generated.h"

UENUM(BlueprintType)
namespace ETresAIAction {
    enum Type {
        Move,
        Fall,
        Jump,
        Custom,
    };
}

