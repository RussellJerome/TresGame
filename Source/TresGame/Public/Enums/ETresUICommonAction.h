#pragma once
#include "CoreMinimal.h"
#include "ETresUICommonAction.generated.h"

UENUM(BlueprintType)
enum ETresUICommonAction {
    TUCA_Open,
    TUCA_Close,
    TUCA_Decide,
    TUCA_DecideClose,
    TUCA_Open2,
    TUCA_DecideClose2,
    TUCA_MAX UMETA(Hidden),
};

