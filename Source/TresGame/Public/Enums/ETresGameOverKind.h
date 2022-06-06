#pragma once
#include "CoreMinimal.h"
#include "ETresGameOverKind.generated.h"

UENUM(BlueprintType)
enum class ETresGameOverKind : uint8 {
    GAMEOVER_KIND_NORMAL,
    GAMEOVER_KIND_MISSION_FAILED,
    GAMEOVER_KIND_GUMISHIP,
    GAMEOVER_KIND_MAX UMETA(Hidden),
};

