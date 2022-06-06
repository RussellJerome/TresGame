#pragma once
#include "CoreMinimal.h"
#include "ESQEX_Bonamik_JointLinkSimulationMode.generated.h"

UENUM(BlueprintType)
enum ESQEX_Bonamik_JointLinkSimulationMode {
    ESQEX_Bonamik_JOINTLINK_MODE_SEQ,
    ESQEX_Bonamik_JOINTLINK_MODE_BATCH,
    ESQEX_Bonamik_JOINTLINK_MODE_MAX UMETA(Hidden),
};

