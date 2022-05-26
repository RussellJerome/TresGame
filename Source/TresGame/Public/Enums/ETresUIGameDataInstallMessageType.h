#pragma once
#include "CoreMinimal.h"
#include "ETresUIGameDataInstallMessageType.generated.h"

UENUM(BlueprintType)
enum class ETresUIGameDataInstallMessageType : uint8 {
    Block,
    Wait,
};

