#pragma once
#include "CoreMinimal.h"
#include "ETresFNpcAIModeLevelSetting.generated.h"

UENUM(BlueprintType)
enum class ETresFNpcAIModeLevelSetting : uint8 {
    TRES_FNPC_AI_MODE_LV_SET_FOLLOW,
    TRES_FNPC_AI_MODE_LV_SET_NPC_WAIT,
    TRES_FNPC_AI_MODE_LV_SET_NPC_TALK,
    TRES_FNPC_AI_MODE_LV_SET_NPC_FREE_WALK,
    TRES_FNPC_AI_MODE_LV_SET_NPC_FREE_WALK_TALK,
    TRES_FNPC_AI_MODE_LV_SET_MAX UMETA(Hidden),
};

