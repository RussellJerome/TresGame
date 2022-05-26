#pragma once
#include "CoreMinimal.h"
#include "ETresAttackerPosition.generated.h"

UENUM(BlueprintType)
namespace ETresAttackerPosition {
    enum Type {
        Front,
        Back,
        Right,
        Left,
        Max,
    };
}

