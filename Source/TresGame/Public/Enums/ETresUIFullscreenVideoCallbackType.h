#pragma once
#include "CoreMinimal.h"
#include "ETresUIFullscreenVideoCallbackType.generated.h"

UENUM(BlueprintType)
enum class ETresUIFullscreenVideoCallbackType : uint8 {
    PlayTimeOut,
    PlayFinish,
    Prepared,
};

