#pragma once
#include "CoreMinimal.h"
#include "ETresMapJumpFadeKind.generated.h"

UENUM(BlueprintType)
enum ETresMapJumpFadeKind {
    MAPJUMP_FADE_KIND_NONE,
    MAPJUMP_FADE_KIND_FADEOUT,
    MAPJUMP_FADE_KIND_WHITEOUT,
    MAPJUMP_FADE_KIND_WIPEOUT,
    MAPJUMP_FADE_KIND_MAX UMETA(Hidden),
};

