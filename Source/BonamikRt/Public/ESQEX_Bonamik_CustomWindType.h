#pragma once
#include "CoreMinimal.h"
#include "ESQEX_Bonamik_CustomWindType.generated.h"

UENUM(BlueprintType)
enum ESQEX_Bonamik_CustomWindType {
    ESQEX_Bonamik_CustomWindType_Directional,
    ESQEX_Bonamik_CustomWindType_Wave,
    ESQEX_Bonamik_CustomWindType_PointBlast,
};

