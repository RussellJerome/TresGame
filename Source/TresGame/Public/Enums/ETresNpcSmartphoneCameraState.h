#pragma once
#include "CoreMinimal.h"
#include "ETresNpcSmartphoneCameraState.generated.h"

UENUM(BlueprintType)
enum class ETresNpcSmartphoneCameraState : uint8 {
    TRES_NPC_SMARTPHONE_CAM_STATE_STANDBY,
    TRES_NPC_SMARTPHONE_CAM_STATE_READY,
    TRES_NPC_SMARTPHONE_CAM_STATE_EXECUT,
    TRES_NPC_SMARTPHONE_CAM_STATE_MAX UMETA(Hidden),
};

