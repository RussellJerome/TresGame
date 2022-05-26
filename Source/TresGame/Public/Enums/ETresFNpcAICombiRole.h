#pragma once
#include "CoreMinimal.h"
#include "ETresFNpcAICombiRole.generated.h"

UENUM(BlueprintType)
enum class ETresFNpcAICombiRole : uint8 {
    COMBI_ROLE_NONE,
    COMBI_ROLE_MAIN,
    COMBI_ROLE_PARTNER,
    COMBI_ROLE_MAX UMETA(Hidden),
};

