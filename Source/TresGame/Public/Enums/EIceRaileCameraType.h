#pragma once
#include "CoreMinimal.h"
#include "EIceRaileCameraType.generated.h"

UENUM(BlueprintType)
enum EIceRaileCameraType {
    IRCT_Use_Rail,
    IRCT_Use_Jump,
    IRCT_Use_Move,
    IRCT_Use_MAX UMETA(Hidden),
};

