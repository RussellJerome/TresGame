#pragma once
#include "CoreMinimal.h"
#include "ETresGumiShipAttackSubElemntType.generated.h"

UENUM(BlueprintType)
enum class ETresGumiShipAttackSubElemntType : uint8 {
    ASET_NONE,
    ASET_SPECIAL,
    ASET_MAX UMETA(Hidden),
};

