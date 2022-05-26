#pragma once
#include "CoreMinimal.h"
#include "ETresGumiShipClusterGeneratorShape.generated.h"

UENUM(BlueprintType)
enum class ETresGumiShipClusterGeneratorShape : uint8 {
    BOX,
    SPHERE,
    CAPSULE,
    MAX,
};

