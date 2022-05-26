#pragma once
#include "CoreMinimal.h"
#include "EEX355_DashMiddleAction.generated.h"

UENUM(BlueprintType)
enum EEX355_DashMiddleAction {
    EEX355_DashMiddleAction_None,
    EEX355_DashRoamDir_Accel,
    EEX355_DashRoamDir_Swing,
    EEX355_MAX UMETA(Hidden),
};

