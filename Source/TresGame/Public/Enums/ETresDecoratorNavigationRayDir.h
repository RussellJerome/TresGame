#pragma once
#include "CoreMinimal.h"
#include "ETresDecoratorNavigationRayDir.generated.h"

UENUM(BlueprintType)
namespace ETresDecoratorNavigationRayDir {
    enum Type {
        Forward,
        Left,
        Right,
        Back,
        Direct,
    };
}

