#pragma once
#include "CoreMinimal.h"
#include "ETresFNPC_AI_LeadMoveType.generated.h"

UENUM(BlueprintType)
enum ETresFNPC_AI_LeadMoveType {
    TRES_FNPC_AI_LEAD_MOVE_RUN,
    TRES_FNPC_AI_LEAD_MOVE_WALK,
    TRES_FNPC_AI_LEAD_MOVE_MAX UMETA(Hidden),
};

