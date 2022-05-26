#pragma once
#include "CoreMinimal.h"
#include "ETresCockpitActionSelectCategory.generated.h"

UENUM(BlueprintType)
enum ETresCockpitActionSelectCategory {
    TCASC_NONE,
    TCASC_COMMAND,
    TCASC_MISSION,
    TCASC_STYLE_POINT_GAUGE,
    TCASC_MAX UMETA(Hidden),
};

