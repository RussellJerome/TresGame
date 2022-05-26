#pragma once
#include "CoreMinimal.h"
#include "ESQEX_Bonamik_WindType.generated.h"

UENUM(BlueprintType)
enum ESQEX_Bonamik_WindType {
    ESQEX_Bonamik_WindType_Directional,
    ESQEX_Bonamik_WindType_Wave,
    ESQEX_Bonamik_WindType_CustomWave,
    ESQEX_Bonamik_WindType_PointBlast,
};

