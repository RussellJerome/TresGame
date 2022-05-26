#pragma once
#include "CoreMinimal.h"
#include "ETresUIDictionaryEnemyCategory.generated.h"

UENUM(BlueprintType)
enum class ETresUIDictionaryEnemyCategory : uint8 {
    Heartless,
    Nobody,
    Unversed,
    Other,
    Max,
};

