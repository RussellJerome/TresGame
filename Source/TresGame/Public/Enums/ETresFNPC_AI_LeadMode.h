#pragma once
#include "CoreMinimal.h"
#include "ETresFNPC_AI_LeadMode.generated.h"

UENUM(BlueprintType)
enum ETresFNPC_AI_LeadMode {
    TRES_FNPC_AI_LEAD_MODE_LEAD,
    TRES_FNPC_AI_LEAD_MODE_LEAD_POINT,
    TRES_FNPC_AI_LEAD_MODE_ROUTE,
    TRES_FNPC_AI_LEAD_MODE_MAX UMETA(Hidden),
};

