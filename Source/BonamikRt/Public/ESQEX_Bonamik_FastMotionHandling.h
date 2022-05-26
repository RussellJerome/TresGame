#pragma once
#include "CoreMinimal.h"
#include "ESQEX_Bonamik_FastMotionHandling.generated.h"

UENUM(BlueprintType)
enum ESQEX_Bonamik_FastMotionHandling {
    ESQEX_Bonamik_FMH_NONE,
    ESQEX_Bonamik_FMH_LOCAL_FORCE,
    ESQEX_Bonamik_FMH_LSS,
    ESQEX_Bonamik_FMH_MAX UMETA(Hidden),
};

