#pragma once
#include "CoreMinimal.h"
#include "ETresPlayerSpecialActionType.generated.h"

UENUM(BlueprintType)
enum class ETresPlayerSpecialActionType : uint8 {
    Guard,
    InvincibleTakeDamage,
};

