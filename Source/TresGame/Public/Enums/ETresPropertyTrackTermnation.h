#pragma once
#include "CoreMinimal.h"
#include "ETresPropertyTrackTermnation.generated.h"

UENUM(BlueprintType)
enum class ETresPropertyTrackTermnation : uint8 {
    RestoreValue,
    SetEndValue,
    KeepValue,
};

