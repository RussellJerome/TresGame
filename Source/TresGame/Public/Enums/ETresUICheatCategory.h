#pragma once
#include "CoreMinimal.h"
#include "ETresUICheatCategory.generated.h"

UENUM(BlueprintType)
enum class ETresUICheatCategory : uint8 {
    None,
    Battle,
    Support,
    Max,
};

