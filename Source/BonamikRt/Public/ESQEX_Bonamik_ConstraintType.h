#pragma once
#include "CoreMinimal.h"
#include "ESQEX_Bonamik_ConstraintType.generated.h"

UENUM(BlueprintType)
enum ESQEX_Bonamik_ConstraintType {
    ESQEX_Bonamik_ConstraintType_None,
    ESQEX_Bonamik_ConstraintType_Sphere,
    ESQEX_Bonamik_ConstraintType_Spring,
    ESQEX_Bonamik_ConstraintType_GroundAttach,
    ESQEX_Bonamik_ConstraintType_SecondOrder_Sphere,
};

