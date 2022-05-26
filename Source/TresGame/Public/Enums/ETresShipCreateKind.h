#pragma once
#include "CoreMinimal.h"
#include "ETresShipCreateKind.generated.h"

UENUM(BlueprintType)
enum class ETresShipCreateKind : uint8 {
    TYPE_SAVE,
    TYPE_PLAN,
    TYPE_SPECIAL,
    TYPE_NEW,
    TYPE_NON,
    TYPE_MAX UMETA(Hidden),
};

