#pragma once
#include "CoreMinimal.h"
#include "ETresFNpcAICombiState.generated.h"

UENUM(BlueprintType)
enum class ETresFNpcAICombiState : uint8 {
    STATE_COMBI_DISABLE,
    STATE_COMBI_ENABLE,
    STATE_COMBI_STANDBY,
    STATE_COMBI_EXECUTE,
    STATE_COMBI_MAX UMETA(Hidden),
};

