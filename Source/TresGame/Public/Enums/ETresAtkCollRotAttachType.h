#pragma once
#include "CoreMinimal.h"
#include "ETresAtkCollRotAttachType.generated.h"

UENUM(BlueprintType)
enum class ETresAtkCollRotAttachType : uint8 {
    TRES_ACRA_NORMAL,
    TRES_ACRA_LOCAL,
    TRES_ACRA_MAX UMETA(Hidden),
};

