#pragma once
#include "CoreMinimal.h"
#include "ETresFriendAreaID.generated.h"

UENUM(BlueprintType)
enum class ETresFriendAreaID : uint8 {
    TRES_FR_AREA_ID_UNKNOWN,
    TRES_FR_AREA_ID_A,
    TRES_FR_AREA_ID_B,
    TRES_FR_AREA_ID_C,
    TRES_FR_AREA_ID_D,
    TRES_FR_AREA_ID_E,
    TRES_FR_AREA_ID_DW,
    TRES_FR_AREA_ID_KG06,
    TRES_FR_AREA_ID_EVENT,
    TRES_FR_AREA_ID_MAX UMETA(Hidden),
};

