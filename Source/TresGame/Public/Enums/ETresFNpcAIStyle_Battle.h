#pragma once
#include "CoreMinimal.h"
#include "ETresFNpcAIStyle_Battle.generated.h"

UENUM(BlueprintType)
enum class ETresFNpcAIStyle_Battle : uint8 {
    TRES_FNPC_AI_STYLE_BATTLE_TOGETHER,
    TRES_FNPC_AI_STYLE_BATTLE_FREE,
    TRES_FNPC_AI_STYLE_BATTLE_SUPPORT,
    TRES_FNPC_AI_STYLE_BATTLE_FOCUS,
    TRES_FNPC_AI_STYLE_BATTLE_MAX UMETA(Hidden),
};

