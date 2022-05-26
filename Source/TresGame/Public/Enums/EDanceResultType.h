#pragma once
#include "CoreMinimal.h"
#include "EDanceResultType.generated.h"

UENUM(BlueprintType)
enum class EDanceResultType : uint8 {
    NORMAL,
    GREAT,
    BAD,
};

