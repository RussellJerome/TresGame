#pragma once
#include "CoreMinimal.h"
#include "ETresBoneSpacesType.generated.h"

UENUM(BlueprintType)
enum ETresBoneSpacesType {
    TBST_WorldSpace,
    TBST_LocalSpace,
    TBST_ComponentSpace,
    TBST_MAX UMETA(Hidden),
};

