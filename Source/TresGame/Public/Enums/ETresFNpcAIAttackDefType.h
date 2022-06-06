#pragma once
#include "CoreMinimal.h"
#include "ETresFNpcAIAttackDefType.generated.h"

UENUM(BlueprintType)
enum class ETresFNpcAIAttackDefType : uint8 {
    TRES_FNPC_AI_ATK_DEF_NONE,
    TRES_FNPC_AI_ATK_DEF_NORMAL_ATTACK,
    TRES_FNPC_AI_ATK_DEF_ABILITY_ATTACK,
    TRES_FNPC_AI_ATK_DEF_ABILITY_CURE,
    TRES_FNPC_AI_ATK_DEF_ABILITY_SUPPORT,
    TRES_FNPC_AI_ATK_DEF_MAX UMETA(Hidden),
};

