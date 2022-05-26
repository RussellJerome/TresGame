#pragma once
#include "CoreMinimal.h"
#include "ETresGimmickInstanceManagerInstanceState.generated.h"

UENUM(BlueprintType)
enum class ETresGimmickInstanceManagerInstanceState : uint8 {
    Alive,
    Destroy,
};

