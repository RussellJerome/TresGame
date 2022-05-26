#pragma once
#include "CoreMinimal.h"
#include "ETresLevelLoadAndVisible.generated.h"

UENUM(BlueprintType)
enum class ETresLevelLoadAndVisible : uint8 {
    None,
    LoadAndVisible,
    LoadAndHidden,
    Unload,
};

