#pragma once
#include "CoreMinimal.h"
#include "ESQEX_Bonamik_EmissiveDirection.generated.h"

UENUM(BlueprintType)
enum ESQEX_Bonamik_EmissiveDirection {
    ESQEX_Bonamik_EmissiveDirection_UpVec,
    ESQEX_Bonamik_EmissiveDirection_ModelSpace,
    ESQEX_Bonamik_EmissiveDirection_WorldSpace,
};

