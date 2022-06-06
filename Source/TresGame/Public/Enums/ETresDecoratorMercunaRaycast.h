#pragma once
#include "CoreMinimal.h"
#include "ETresDecoratorMercunaRaycast.generated.h"

UENUM(BlueprintType)
namespace ETresDecoratorMercunaRaycast {
    enum Type {
        Forward,
        Left,
        Right,
        Back,
        Up,
        Down,
        Direct,
    };
}

