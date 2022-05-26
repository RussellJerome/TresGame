#pragma once
#include "CoreMinimal.h"
#include "ETornado_CommonAction.generated.h"

UENUM(BlueprintType)
enum ETornado_CommonAction {
    ETornado_CommonAction_GenerateDebris,
    ETornado_CommonAction_Invincible,
    ETornado_CommonAction_WarpIn,
    ETornado_CommonAction_WarpOut,
    ETornado_CommonAction_PermitAttack,
    ETornado_CommonAction_ProhibitAttack,
    ETornado_CommonAction_EndFloatingMode,
    ETornado_CommonAction_BeginFloatingMode,
    ETornado_CommonAction_BeginBigTornado,
};

