#pragma once
#include "CoreMinimal.h"
#include "ETresFNPC_AI_LeadGoalAction.generated.h"

UENUM(BlueprintType)
enum ETresFNPC_AI_LeadGoalAction {
    TRES_FNPC_AI_LEAD_GOAL_WAIT,
    TRES_FNPC_AI_LEAD_GOAL_TALK,
    TRES_FNPC_AI_LEAD_GOAL_FREE_WALK,
    TRES_FNPC_AI_LEAD_GOAL_FREE_WALK_TALK,
    TRES_FNPC_AI_LEAD_GOAL_MAX UMETA(Hidden),
};

