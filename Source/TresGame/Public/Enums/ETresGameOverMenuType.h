#pragma once
#include "CoreMinimal.h"
#include "ETresGameOverMenuType.generated.h"

UENUM(BlueprintType)
enum class ETresGameOverMenuType : uint8 {
    NORMAL,
    BOSSBATTLE,
    MISSION_FAILED,
};

