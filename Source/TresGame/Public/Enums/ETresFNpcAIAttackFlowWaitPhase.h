#pragma once
#include "CoreMinimal.h"
#include "ETresFNpcAIAttackFlowWaitPhase.generated.h"

UENUM(BlueprintType)
enum class ETresFNpcAIAttackFlowWaitPhase : uint8 {
    FNPC_AI_ATK_FLOW_WAIT_PHASE_0,
    FNPC_AI_ATK_FLOW_WAIT_PHASE_1,
    FNPC_AI_ATK_FLOW_WAIT_PHASE_MAX UMETA(Hidden),
};

