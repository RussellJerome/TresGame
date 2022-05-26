#pragma once
#include "CoreMinimal.h"
#include "ETresGumiShipRailSlideType.generated.h"

UENUM(BlueprintType)
enum class ETresGumiShipRailSlideType : uint8 {
    RST_NONE,
    RST_ROUTE,
    RST_TRACKING,
    RST_SP_TRACKING,
    RST_MAX UMETA(Hidden),
};

