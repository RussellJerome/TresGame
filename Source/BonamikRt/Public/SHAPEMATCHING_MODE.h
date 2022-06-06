#pragma once
#include "CoreMinimal.h"
#include "SHAPEMATCHING_MODE.generated.h"

UENUM(BlueprintType)
enum SHAPEMATCHING_MODE {
    ESQEX_Bonamik_SMMODE_CHAINSHAPEMATCH,
    ESQEX_Bonamik_SMMODE_SEQCHAINMATCH,
    ESQEX_Bonamik_SMMODE_VOLUMEMATCH,
    ESQEX_Bonamik_SMMODE_MAX UMETA(Hidden),
};

