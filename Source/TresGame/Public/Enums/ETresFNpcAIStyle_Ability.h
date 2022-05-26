#pragma once
#include "CoreMinimal.h"
#include "ETresFNpcAIStyle_Ability.generated.h"

UENUM(BlueprintType)
enum class ETresFNpcAIStyle_Ability : uint8 {
    TRES_FNPC_AI_STYLE_ABILITY_FREE,
    TRES_FNPC_AI_STYLE_ABILITY_BALANCE,
    TRES_FNPC_AI_STYLE_ABILITY_LESS,
    TRES_FNPC_AI_STYLE_ABILITY_MAX UMETA(Hidden),
};

