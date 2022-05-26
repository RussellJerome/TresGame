#pragma once
#include "CoreMinimal.h"
#include "ETresFNPC_AI_LeadGoalWaitRelease.generated.h"

UENUM(BlueprintType)
enum ETresFNPC_AI_LeadGoalWaitRelease {
    TRES_FNPC_AI_LEAD_GOAL_WAIT_R_DIST,
    TRES_FNPC_AI_LEAD_GOAL_WAIT_R_TIME,
    TRES_FNPC_AI_LEAD_GOAL_WAIT_R_MANUAL,
    TRES_FNPC_AI_LEAD_GOAL_WAIT_R_MAX UMETA(Hidden),
};

