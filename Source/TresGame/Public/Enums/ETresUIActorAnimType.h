#pragma once
#include "CoreMinimal.h"
#include "ETresUIActorAnimType.generated.h"

UENUM(BlueprintType)
enum class ETresUIActorAnimType : uint8 {
    None,
    Idle,
    IdleBreak1,
    IdleBreak2,
    Max,
};

