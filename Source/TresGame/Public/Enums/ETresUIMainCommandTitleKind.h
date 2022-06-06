#pragma once
#include "CoreMinimal.h"
#include "ETresUIMainCommandTitleKind.generated.h"

UENUM(BlueprintType)
enum class ETresUIMainCommandTitleKind : uint8 {
    None,
    Logo,
    Button,
    ShootLock,
    Operation,
};

