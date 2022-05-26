#pragma once
#include "CoreMinimal.h"
#include "ETresGumiShipCollisionPriority.generated.h"

UENUM(BlueprintType)
enum ETresGumiShipCollisionPriority {
    CP_HIGH,
    CP_NORMAL,
    CP_LOW,
    CP_MAX UMETA(Hidden),
};

