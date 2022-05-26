#pragma once
#include "CoreMinimal.h"
#include "ETresReactionResultType.generated.h"

UENUM(BlueprintType)
enum class ETresReactionResultType : uint8 {
    TRES_REACT_RESULT_NONE,
    TRES_REACT_RESULT_NOREACTION,
    TRES_REACT_RESULT_DAMAGE,
    TRES_REACT_RESULT_REFLECT,
    TRES_REACT_RESULT_GUARD_REFLECT,
    TRES_REACT_RESULT_GUARD,
    ARMOR_BREAK,
    STRONG_BODY_DAMAGE1,
    STRONG_BODY_DAMAGE2,
    STRONG_BODY_DAMAGE3,
    STRONG_BODY_DAMAGE4,
    _MAX UMETA(Hidden),
};

