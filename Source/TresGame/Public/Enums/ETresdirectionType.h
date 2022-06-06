#pragma once
#include "CoreMinimal.h"
#include "ETresdirectionType.generated.h"

UENUM(BlueprintType)
enum ETresdirectionType {
    TRES_DIR_FRONT,
    TRES_DIR_BACK,
    TRES_DIR_RIGHT,
    TRES_DIR_LEFT,
    TRES_DIR_UP,
    TRES_DIR_DOWN,
    TRES_DIR_MAX UMETA(Hidden),
};

