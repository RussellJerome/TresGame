#pragma once
#include "CoreMinimal.h"
#include "ETresGummiSpaceDef.generated.h"

UENUM(BlueprintType)
enum class ETresGummiSpaceDef : uint8 {
    SPACE_NON,
    SPACE1,
    SPACE2,
    SPACE3,
    SPACE4,
    SPACE_MAX UMETA(Hidden),
};

