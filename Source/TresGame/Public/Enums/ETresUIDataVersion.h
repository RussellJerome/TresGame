#pragma once
#include "CoreMinimal.h"
#include "ETresUIDataVersion.generated.h"

UENUM(BlueprintType)
enum class ETresUIDataVersion : uint8 {
    None,
    DLC,
    Max,
};

