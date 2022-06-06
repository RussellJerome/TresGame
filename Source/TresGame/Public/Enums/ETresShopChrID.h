#pragma once
#include "CoreMinimal.h"
#include "ETresShopChrID.generated.h"

UENUM(BlueprintType)
enum class ETresShopChrID : uint8 {
    MOOGLE,
    HUEY,
    DEWEY,
    LOUIE,
    _MAX UMETA(Hidden),
};

