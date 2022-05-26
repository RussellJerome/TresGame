#pragma once
#include "CoreMinimal.h"
#include "ETresCockpitCmdCategory.generated.h"

UENUM(BlueprintType)
enum ETresCockpitCmdCategory {
    TCCC_NONE,
    TCCC_BATTLE,
    TCCC_ACTION,
    TCCC_CHANGE,
    TCCC_CHANGE_FINISH,
    TCCC_AFLOW,
    TCCC_AFLOW_FINISH,
    TCCC_FRIEND,
    TCCC_SFLOW,
    TCCC_STYLE_POINT_GAUGE,
    TCCC_DMAGIC,
    TCCC_VEHICLE,
    TCCC_SHIP,
    TCCC_EVENT,
    TCCC_EVENT2,
    TCCC_EVENT3,
    TCCC_RAILSP,
    TCCC_OTHER,
    TCCC_MAX UMETA(Hidden),
};

