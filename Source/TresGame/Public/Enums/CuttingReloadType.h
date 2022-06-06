#pragma once
#include "CoreMinimal.h"
#include "CuttingReloadType.generated.h"

UENUM(BlueprintType)
enum class CuttingReloadType : uint8 {
    Command,
    StickOnly,
};

