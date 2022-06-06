#pragma once
#include "CoreMinimal.h"
#include "ETresAtkCollReflectReaction.generated.h"

UENUM(BlueprintType)
enum class ETresAtkCollReflectReaction : uint8 {
    TRES_ATK_RR_DEFAULT,
    TRES_ATK_RR_STAGGER,
    TRES_ATK_RS_GUARD,
    TRES_ATK_RR_NOREACTION,
    _TRES_ATK_RR_MAX UMETA(Hidden),
};

