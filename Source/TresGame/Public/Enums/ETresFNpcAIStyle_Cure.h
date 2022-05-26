#pragma once
#include "CoreMinimal.h"
#include "ETresFNpcAIStyle_Cure.generated.h"

UENUM(BlueprintType)
enum class ETresFNpcAIStyle_Cure : uint8 {
    TRES_FNPC_AI_STYLE_CURE_OFTEN,
    TRES_FNPC_AI_STYLE_CURE_PINCH,
    TRES_FNPC_AI_STYLE_CURE_ALWAYS,
    TRES_FNPC_AI_STYLE_CURE_MAX UMETA(Hidden),
};

