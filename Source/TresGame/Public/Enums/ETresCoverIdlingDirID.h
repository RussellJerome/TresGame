#pragma once
#include "CoreMinimal.h"
#include "ETresCoverIdlingDirID.generated.h"

UENUM(BlueprintType)
enum class ETresCoverIdlingDirID : uint8 {
    TRES_CID_ID_NONE,
    TRES_CID_ID_LEFT,
    TRES_CID_ID_RIGHT,
    _TRES_CID_ID_MAX UMETA(Hidden),
};

