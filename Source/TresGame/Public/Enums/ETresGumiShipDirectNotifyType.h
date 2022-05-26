#pragma once
#include "CoreMinimal.h"
#include "ETresGumiShipDirectNotifyType.generated.h"

UENUM(BlueprintType)
enum class ETresGumiShipDirectNotifyType : uint8 {
    DNT_FINISHED_BATTLE_MISSION,
    DNT_ENCOUNT_BATTLE_START_CAMERA_SIGNAL,
    DNT_MAX UMETA(Hidden),
};

