#pragma once
#include "CoreMinimal.h"
#include "ESQEX_Bonamik_Parameters.generated.h"

UENUM(BlueprintType)
enum ESQEX_Bonamik_Parameters {
    ESQEX_Bonamik_Parameters_Mass,
    ESQEX_Bonamik_Parameters_Friction,
    ESQEX_Bonamik_Parameters_Damping,
    ESQEX_Bonamik_Parameters_Bounciness,
    ESQEX_Bonamik_Parameters_WindDrag,
    ESQEX_Bonamik_Parameters_WindLift,
    ESQEX_Bonamik_Parameters_LFCoeff,
    ESQEX_Bonamik_Parameters_ParkRate,
    ESQEX_Bonamik_Parameters_MaxLF,
    ESQEX_Bonamik_Parameters_LFDrag,
    ESQEX_Bonamik_Parameters_LFLift,
    ESQEX_Bonamik_Parameters_InnerConeStr,
    ESQEX_Bonamik_Parameters_OuterConeStr,
};

