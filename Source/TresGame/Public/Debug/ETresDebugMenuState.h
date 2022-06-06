#pragma once
#include "CoreMinimal.h"
#include "ETresDebugMenuState.generated.h"

UENUM(BlueprintType)
enum ETresDebugMenuState {
    ETresDebugMenuState_Opening,
    ETresDebugMenuState_Opened,
    ETresDebugMenuState_Closing,
    ETresDebugMenuState_Closed,
};

