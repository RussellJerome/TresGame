#pragma once
#include "CoreMinimal.h"
#include "ETresFNpcAINpcMode.generated.h"

UENUM(BlueprintType)
enum class ETresFNpcAINpcMode : uint8 {
    TRES_FNPC_AI_NPC_MODE_NONE,
    TRES_FNPC_AI_NPC_MODE_WAIT,
    TRES_FNPC_AI_NPC_MODE_TALK,
    TRES_FNPC_AI_NPC_MODE_FREE_WALK,
    TRES_FNPC_AI_NPC_MODE_FREE_WALK_TALK,
    TRES_FNPC_AI_NPC_MODE_MAX UMETA(Hidden),
};

