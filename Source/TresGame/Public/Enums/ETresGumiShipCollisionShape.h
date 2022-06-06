#pragma once
#include "CoreMinimal.h"
#include "ETresGumiShipCollisionShape.generated.h"

UENUM(BlueprintType)
enum class ETresGumiShipCollisionShape : uint8 {
    CS_SPHERE,
    CS_CAPSULE_1,
    CS_CAPSULE_ROOT,
    CS_BOX,
    CS_RING,
    CS_MAX UMETA(Hidden),
};

