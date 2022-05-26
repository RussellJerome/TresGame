#pragma once
#include "CoreMinimal.h"
#include "ESQEX_Bonamik_OutOfCamera.generated.h"

UENUM(BlueprintType)
enum ESQEX_Bonamik_OutOfCamera {
    ESQEX_Bonamik_OutOfCamera_Default,
    ESQEX_Bonamik_OutOfCamera_Override,
    ESQEX_Bonamik_OutOfCamera_FullCheck,
    ESQEX_Bonamik_OutOfCamera_UseGlobal,
};

