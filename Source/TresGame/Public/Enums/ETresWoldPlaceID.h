#pragma once
#include "CoreMinimal.h"
#include "ETresWoldPlaceID.generated.h"

UENUM(BlueprintType)
enum class ETresWoldPlaceID : uint8 {
    WM_PLACE_ID00,
    WM_PLACE_ID01,
    WM_PLACE_ID02,
    WM_PLACE_ID03,
    WM_PLACE_ID04,
    WM_PLACE_MAX UMETA(Hidden),
};

